#!/usr/bin/perl
# 2.2.2010, Sampo Kellomaki (sampo@iki.fi)
# 18.11.2010, greatly enchanced --Sampo
# 10.3.2011,  from zxtest.pl, adapted for special purpose of TAS3 review --Sampo
#
# Test suite for ZXID

$usage = <<USAGE;
Test driver for ZXID
Usage: http://localhost:8081/tas3test.pl?tst=XML1
       ./zxtest.pl -a [-x] [-dx] tst=XML1    # Run specific test
       ./zxtest.pl -a [-x] [-dx] ntst=XML    # Run all tests except specified
         -a  Ascii mode (give twice for colored ascii)
         -x  Print exec command lines to stderr
         -dx Proprietary per character color diff (default: system diff -u)
         N.B. Positional order of even optional arguments is significant.
USAGE
    ;

$cvsid = '$Id$';
($rev) = (split /\s+/, $cvsid)[2];

# See https://wiki.archlinux.org/index.php/Color_Bash_Prompt
#sub red   { $ascii > 1 ? "\e[1;31m$_[0]\e[0m" : $_[0]; }  # red text
#sub green { $ascii > 1 ? "\e[1;32m$_[0]\e[0m" : $_[0]; }
sub red    { $ascii > 1 ? "\e[1;41m$_[0]\e[0m" : $_[0]; }  # red background, black bold text
sub green  { $ascii > 1 ? "\e[1;42m$_[0]\e[0m" : $_[0]; }
sub redy   { $ascii > 1 ? "\e[41m$_[0]\e[0m" : $_[0]; }    # red background, black text (no bold)
sub greeny { $ascii > 1 ? "\e[42m$_[0]\e[0m" : $_[0]; }

use Encode;
#use Digest::MD5;
#use Digest::SHA1;
#use Net::SSLeay qw(get_httpx post_httpx make_headers make_form);  # Need Net::SSLeay-1.24
use WWW::Curl::Easy;    # HTTP client library, see curl.haxx.se
use WWW::Curl::Multi;
use XML::Simple;
#use Net::SMTP;
#use MIME::Base64;  # plain=decode_base64(b64)   # RFC3548
#sub decode_safe_base64 { my ($x) = @_; $x=~tr[-_][+/]; return decode_base64 $x; }
#sub encode_safe_base64 { my ($x) = @_; $x = encode_base64 $x, ''; $x=~tr[+/][-_]; return $x; }
use Data::Dumper;
use Time::HiRes;

die $usage if $ARGV[0] =~ /^--?[hH?]/;
$trace = 0;

# Where error log goes tail -f zxtest.err
#open STDERR, ">>zxtest.err";

select STDERR; $| = 1; select STDOUT; $| = 1;
$ascii = 1,shift if $ARGV[0] eq '-a';
$ascii = 2,shift if $ARGV[0] eq '-a';
$show_exec = shift if $ARGV[0] eq '-x';
$diffx = shift if $ARGV[0] eq '-dx';

$ENV{'LD_LIBRARY_PATH'} = '/apps/lib';  # *** Specific to Sampo's environment
warn "START pid=$$ $cvsid qs($ENV{'QUERY_STRING'}) LD($ENV{'LD_LIBRARY_PATH'})";
syswrite STDOUT, "Content-Type: text/html\r\n\r\n" if !$ascii;

#$idp = 'http://idp.tas3.pt:8081/zxididp';
$idp = 'https://idp.tas3.eu/zxididp?o=B';
$sp = 'http://sp1.zxid.org/demohlo?o=B';

### N.B. Ignoring SIGCHLD breaks return value of system() and $?
#$x=system "false"; warn "x($x) q($?) $!";
#$SIG{CHLD} = 'IGNORE';  # No zombies, please (subprocesses for delayed ops).
#$x=system "false"; warn "x($x) q($?) $!";

$uname_minus_s = `uname -s`;
chop $uname_minus_s;

### Library Functions

sub writeall {
    my ($f,$d) = @_;
    open F, ">$f" or die "Cant write($f): $!";
    binmode F;
    flock F, 2;    # Exclusive
    print F $d;
    flock F, 8;    
    close F;
}

sub readall {
    my ($f) = @_;
    my ($pkg, $srcfile, $line) = caller;
    undef $/;         # Read all in, without breaking on lines
    if (open F, "<$f") {
	binmode F;
	#flock F, 1;
	my $x = <F>;
	#flock F, 8;
	close F;
	return $x;
    } else {
	warn "$srcfile:$line: Cant read($f): $!";
	return undef;
    }
}

sub cgiout {
    my ($hdr, $mime, $body, $isbin) = @_;
    warn "Len body preenc=".length($body);
    $body = encode_utf8($body);
    warn "Len body postenc=".length($body);
    syswrite STDOUT, "${hdr}Content-Type: $mime\r\nContent-Length: ".length($body)."\r\n\r\n$body";

    if ($isbin > 0) {  # 0 = proto, 1 = html, 2 = true binary
	#warn "cgiout(${hdr}Content-Type: $mime\r\nContent-Length: ".length($body)."\r\n\r\n(binary($isbin) body omitted from log)";
	warn "-- cgiout $$ hdr(${hdr}) mime($mime) len=".length($body)." bin($isbin)";
    } else {
	#warn "cgiout(${hdr}Content-Type: $mime\r\nContent-Length: ".length($body)."\r\n\r\n$body)";
	warn "-- cgiout $$ hdr(${hdr}) mime($mime) len=".length($body)." body($body)";
    }
}

sub cgidec {
    my ($d) = @_;
    my %qs;
    for $nv (split '&', $d) {
	($n, $v) = split '=', $nv, 2;
	$qs{$n} = $v;
    }
    return \%qs;
}

sub uridec {
    my ($val) = @_;
    $val =~ s/\+/ /g;
    $val =~ s/%([0-9a-f]{2})/chr(hex($1))/gsex;  # URI decode
    return $val;
}

sub urienc {
    my ($val) = @_;
    $val =~ s/([^A-Za-z0-9.,_-])/sprintf("%%%02x",ord($1))/gsex; # URI enc
    return $val;
}

### HTTP clients

if (1) {
sub resp_cb {
    my ($chunk,$curl_id) = @_;
    #warn "resp_cb curl_id($curl_id) chunk($chunk) len=".length($chunk);
    $resp{$curl_id} .= $chunk;
    return length $chunk; # OK
}

sub curl_reset_all {
    my ($curl) = @_;
    $curl->reset();
    sleep 5;
}

sub test_http {
    my ($curl, $cmd, $tsti, $expl, $url, $timeout, $slow) = @_;
    return unless $tst eq 'all' || $tst eq substr($tsti,0,length $tst);
    return if $ntst && $ntst eq substr($tsti,0,length $ntst);
    #warn "\n======= $tsti =======";
    
    $slow ||= 0.5;
    $timeout ||= 15;
    my $test = tst_link($tsti, $expl, $url);
    my $send_ts = Time::HiRes::time();
    $cmd{$curl_id} = $cmd;
    $key{$curl_id} = $koerkki;
    $qs{$curl_id} = '';
    $sesid{$curl_id} = '';
    warn "HERE1 ".Time::HiRes::time() if $timeout_trace;
    eval {
	warn "HERE2 ".Time::HiRes::time() if $timeout_trace;
	local $SIG{ALRM} = sub { die "TIMEOUT\n"; };
	warn "HERE3 ".Time::HiRes::time() if $timeout_trace;
	alarm $timeout;
	warn "HERE4 ".Time::HiRes::time() if $timeout_trace;
	send_http($curl, $url, 0);
	warn "HERE5 ".Time::HiRes::time() if $timeout_trace;
	wait_response();
	warn "HERE6 ".Time::HiRes::time() if $timeout_trace;
    };
    warn "HERE7 ".Time::HiRes::time() if $timeout_trace;
    alarm 0;
    warn "HERE8 ".Time::HiRes::time() if $timeout_trace;
    my $status = $@;
    warn "HERE9 ".Time::HiRes::time() if $timeout_trace;
    my $latency = substr(Time::HiRes::time() - $send_ts, 0, 5);
    if ($status eq "TIMEOUT\n") {
	tst_print('col1r', 'Timeout', $latency, $slow, $test, '');
	$@ = 0;
	warn "Timeout ($@) ".Time::HiRes::time();
	$timeout_trace = 1;
	curl_reset_all($curl);
    } elsif ($status) {
	tst_print('col1r', 'Conn. Err', $latency, $slow, $test, $status);
    } elsif ($laststatus ne 'OK') {
	tst_print('col1r', 'App Err', $latency, $slow, $test, $lasterror);
    } else {
	tst_ok($latency, $slow, $test);
    }
}

sub test_http_post {
    my ($curl, $cmd, $tsti, $expl, $url, $body, $timeout, $slow) = @_;
    return unless $tst eq 'all' || $tst eq substr($tsti,0,length $tst);
    return if $ntst && $ntst eq substr($tsti,0,length $ntst);
    #warn "\n======= $tsti =======";

    $slow ||= 0.5;
    $timeout ||= 15;
    my $test = tst_link($tsti, $expl, $url);
    my $send_ts = Time::HiRes::time();
    $cmd{$curl_id} = $cmd;
    $key{$curl_id} = $koerkki;
    $qs{$curl_id} = '';
    $sesid{$curl_id} = '';
    eval {
	local $SIG{ALRM} = sub { die "TIMEOUT\n"; };
	alarm $timeout;
	send_http_post($curl, $url, $body, 1);
	wait_response();
    };
    alarm 0;
    my $status = $@;
    my $latency = substr(Time::HiRes::time() - $send_ts, 0, 5);
    if ($status eq "TIMEOUT\n") {
	tst_print('col1r', 'Timeout', $latency, $slow, $test, '');
	$@ = 0;
	curl_reset_all($curl);
    } elsif ($status) {
	tst_print('col1r', 'Conn. Err', $latency, $slow, $test, $status);
    } elsif ($laststatus ne 'OK') {
	tst_print('col1r', 'App Err', $latency, $slow, $test, $lasterror);
    } else {
	tst_ok($latency, $slow, $test);
    }
}

### Create http connection handles. Each will correspnd to one session, i.e. set of cookies

$curl_id = 1;
$curlm = WWW::Curl::Multi->new;  # Multihandle, technically needed

$curlA = new WWW::Curl::Easy;  # Share curl handle so that cookies are shared

sub tA { test_http($curlA, @_); }
sub pA { test_http_post($curlA, @_); }

sub send_req {
    my ($what, $send_trace) = @_;
    my ($pkg, $srcfile, $line) = caller;
    $send_ts{$curl_id} = Time::HiRes::time();
    #my $curl = new WWW::Curl::Easy; # Globally created to preserve cookies
    my $curl = $curlP;
    $curl->setopt(CURLOPT_FOLLOWLOCATION, 1);
    $curl->setopt(CURLOPT_MAXREDIRS, 5);
    $curl->setopt(CURLOPT_UNRESTRICTED_AUTH, 1);
    #$curl->setopt(CURLOPT_HTTPAUTH, CURLAUTH_BASIC);
    #$curl->setopt(CURLOPT_USERPWD, "sampo:12345678");  # ***
    $curl->setopt(CURLOPT_COOKIEFILE, '');  # Empty file enables tracking cookies
    #open (my $fileb, ">", \$resp);            # Read into inmemory file
    #$curl->setopt(CURLOPT_WRITEDATA,$fileb);
    $curl->setopt(CURLOPT_WRITEFUNCTION, \&resp_cb);
    $curl->setopt(CURLOPT_FILE, $curl_id);
    $resp{$curl_id} = '';
    $curl->setopt(CURLOPT_HTTPGET, 1);
    my @hdr = ("User-Agent: wrevd-0.2-$rev");
    $curl->setopt(CURLOPT_HTTPHEADER, \@hdr);
    $easy_url{$curl_id} = "$dom$soap_endpoint/$what";  # Curl will reference mem so make sure it will not be garbage collected until the handle is
    $curl->setopt(CURLOPT_URL, $easy_url{$curl_id});
    warn "  $srcfile:$line: WS GET($easy_url{$curl_id}) curl_id($curl_id)" if $send_trace;
    $curl->setopt(CURLOPT_PRIVATE, $curl_id);
    $easy{$curl_id} = $curl;
    $curlm->add_handle($curl);
    ++$curl_id;
    ++$active_handles;
}

sub send_req_post_soap {
    my ($body) = @_;
    my ($pkg, $srcfile, $line) = caller;
    $send_ts{$curl_id} = Time::HiRes::time();
    #my $curl = new WWW::Curl::Easy; # Globally created to preserve cookies
    my $curl = $curlP;
    $curl->setopt(CURLOPT_FOLLOWLOCATION, 1);
    $curl->setopt(CURLOPT_MAXREDIRS, 5);
    $curl->setopt(CURLOPT_UNRESTRICTED_AUTH, 1);
    #$curl->setopt(CURLOPT_HTTPAUTH, CURLAUTH_BASIC);
    #$curl->setopt(CURLOPT_USERPWD, "sampo:12345678");  # ***
    $curl->setopt(CURLOPT_COOKIEFILE, '');  # Empty file enables tracking cookies
    #open (my $fileb, ">", \$resp);         # Read into inmemory file
    #$curl->setopt(CURLOPT_WRITEDATA,$fileb);
    $curl->setopt(CURLOPT_WRITEFUNCTION, \&resp_cb);
    $curl->setopt(CURLOPT_FILE, $curl_id);
    $resp{$curl_id} = '';
    $curl->setopt(CURLOPT_HTTPPOST, 1);   # SOAP Post

    #$curl->setopt(CURLOPT_POSTFIELDS, qq(<?xml version="1.0" encoding="utf-8"?><soap12:Envelope xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema" xmlns:soap12="http://www.w3.org/2003/05/soap-envelope"><soap12:Body>$body</soap12:Body></soap12:Envelope>));
    # Curl will reference mem so make sure it will not be garbage collected until the handle is
    $easy_post{$curl_id} = qq(<?xml version="1.0" encoding="utf-8"?><soap:Envelope xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema" xmlns:soap="http://schemas.xmlsoap.org/soap/envelope/"><soap:Body>$body</soap:Body></soap:Envelope>);
    $curl->setopt(CURLOPT_POSTFIELDS, $easy_post{$curl_id});

    #my @hdr = ("Content-Type: application/soap+xml","User-Agent: wrevd-0.2");
    my @hdr = ("Content-Type: text/xml","User-Agent: wrevd-0.2-$rev",'SOAPAction: "http://timebi.com/UpdatePositions"');
    $curl->setopt(CURLOPT_HTTPHEADER, \@hdr);
    $easy_url{$curl_id} = "$dom$soap_endpoint";  # Curl will reference mem so make sure it will not be garbage collected until the handle is
    $curl->setopt(CURLOPT_URL, $easy_url{$curl_id});
    warn "$srcfile:$line: WS SOAP($body)" if $wstrace;
    $curl->setopt(CURLOPT_PRIVATE,$curl_id);
    $easy{$curl_id} = $curl;
    $curlm->add_handle($curl);
    ++$curl_id;
    ++$active_handles;
}

sub send_http {
    my ($curl, $url, $send_trace) = @_;
    my ($pkg, $srcfile, $line) = caller;
    $send_ts{$curl_id} = Time::HiRes::time();
    #my $curl = new WWW::Curl::Easy;   # see 1st arg
    $curl->setopt(CURLOPT_FOLLOWLOCATION, 1);
    $curl->setopt(CURLOPT_MAXREDIRS, 5);
    $curl->setopt(CURLOPT_UNRESTRICTED_AUTH, 1);
    $curl->setopt(CURLOPT_COOKIEFILE, ''); # Empty file enables cookie tracking
    $curl->setopt(CURLOPT_WRITEFUNCTION, \&resp_cb);
    $curl->setopt(CURLOPT_FILE, $curl_id);
    $resp{$curl_id} = '';
    $curl->setopt(CURLOPT_HTTPGET, 1);
    my @hdr = ("User-Agent: wrevd-0.2-$rev");
    $curl->setopt(CURLOPT_HTTPHEADER, \@hdr);
    $easy_url{$curl_id} = $url;  # Curl will reference mem so make sure it will not be garbage collected until the handle is
    $curl->setopt(CURLOPT_URL, $easy_url{$curl_id});
    warn "  $srcfile:$line: WS GET($easy_url{$curl_id}) curl_id($curl_id)" if $send_trace;
    $curl->setopt(CURLOPT_PRIVATE, $curl_id);
    $easy{$curl_id} = $curl;
    $curlm->add_handle($curl);
    ++$curl_id;
    ++$active_handles;
}

sub send_http_post {
    my ($curl, $url, $body, $send_trace) = @_;
    my ($pkg, $srcfile, $line) = caller;
    $send_ts{$curl_id} = Time::HiRes::time();
    #my $curl = new WWW::Curl::Easy;  # see 1st arg
    $curl->setopt(CURLOPT_FOLLOWLOCATION, 1);
    $curl->setopt(CURLOPT_MAXREDIRS, 5);
    $curl->setopt(CURLOPT_UNRESTRICTED_AUTH, 1);
    $curl->setopt(CURLOPT_COOKIEFILE, ''); # Empty file enables cookie tracking
    $curl->setopt(CURLOPT_WRITEFUNCTION, \&resp_cb);
    $curl->setopt(CURLOPT_FILE, $curl_id);

    #             1 1    234     4 5     53 2
    #$url =~ s%http(s)?://((([^:]+):([^@]+))@)?%%si;
    #if ($3) {  # inline specified username and password
    #warn "Basic-Auth($3) url($url)";
    #$curl->setopt(CURLOPT_USERPWD, $1);
    #}

    $resp{$curl_id} = '';
    $curl->setopt(CURLOPT_HTTPPOST, 1);
    $easy_post{$curl_id} = $body;
    $curl->setopt(CURLOPT_POSTFIELDS, $easy_post{$curl_id});
    my @hdr = ("User-Agent: wrevd-0.2-$rev");
    $curl->setopt(CURLOPT_HTTPHEADER, \@hdr);
    $easy_url{$curl_id} = $url;  # Curl will reference mem so make sure it will not be garbage collected until the handle is
    $curl->setopt(CURLOPT_URL, $easy_url{$curl_id});
    warn "  $srcfile:$line: WS POST($easy_url{$curl_id}) BODY($body) curl_id($curl_id)" if $send_trace;
    $curl->setopt(CURLOPT_PRIVATE, $curl_id);
    $easy{$curl_id} = $curl;
    $curlm->add_handle($curl);
    ++$curl_id;
    ++$active_handles;
}

sub wait_response {
    $laststatus = $lasterror = '';
    while ($active_handles) {
	warn "  curlm->perform loop active($active_handles) n=$n_resp vol=$v_resp avg_lat=".($n_resp?($tot_latency / $n_resp):0) if $trace;
	$tcid = $curl_id - 1;
	warn "  url($easy_url{$tcid}) curl_id($tcid)" if $trace;
	my $active_transfers = $curlm->perform;
	if ($active_transfers == $active_handles) {
	    #warn "  url($easy_url{$curl_id})";
	    select(undef, undef, undef, 0.1);
	    next;
	}
	warn "  url($easy_url{$tcid}) at=$active_transfers ah=$active_handles" if $trace;
	while (my ($id, $ret) = $curlm->info_read) {
	    next if !$id;
	    --$active_handles;
	    my $curle = $easy{$id};
	    delete $easy{$id}; # let curl handle get garbage collected, or we leak memory
	    delete $easy_post{$id};
	    $latency = Time::HiRes::time() - $send_ts{$id};
	    if ($ret) {
		warn "HTTP layer failed: ".$curle->errbuf."\nid=$id qs($qs{$id})\nurl($easy_url{$id})\nret($ret) id=$id latency=$latency";
		delete $easy_url{$id};
		next;
	    }
	    #warn "HTTP complete $id URL($easy_url{$id})";
	    $qs = cgidec $qs{$id};
	    $rsp = decode_utf8($resp{$id});
	    delete $resp{$id};
	    #warn "resp($rsp) id=$id latency=$latency ($send_ts{$id})" if $wstrace>1;
	    warn "resp($rsp) id=$id qsid($qs{$id}) latency=$latency\n\n" if $wstrace>1 && $$qs{'id'} ne 'intupd';
	    ++$n_resp;
	    $tot_latency += $latency;
	    $v_resp += length $rsp;
	    if (length $rsp) {
		if ($cmd{$id} eq 'PING'
		    || $cmd{$id} eq 'LOGOUT') {
		    #warn "Non XML cmd($cmd{$id}) url($easy_url{$id}) response($rsp)";
		} elsif ($cmd{$id} eq 'ST') {
		    #warn "static response len=".length($rsp);
		} else {
		    # Wrapped in eval {} to avoid death when web service sends non XML errors
		    eval {
			$xx = XMLin $rsp, ForceArray => 1, KeyAttr => [];   # <== Decode XML
		    };
		    if ($@) {
			if (($lasterror) = $rsp =~ /^(.*?Exception.*?)\n/s) {
			    $cmd{$id} = 'exception';
			}
			#warn "XMLin: $@";
			#warn "cmd($cmd{$id}) resp($id)=($rsp)";
			$xx = undef;
		    }
		}
	    } else {
		#warn "Empty response (possibly OK)";
		$xx = undef;
	    }
	    #warn "XML::Simple: " . Dumper($xx);

	    $user = $ses{$sesid{$id}}{'user'};
	    #warn "user($user) qs($qs{$id})" . Dumper($xx) if $wstrace && $$qs{'id'} ne 'intupd';
	    #printf WS_LOG "%.3f %2.3f %5d %4d %s %s %s\n", $send_ts{$id}, $latency, length($rsp), $id, $user, $key{$id}, $qs{$id}; #substr($qs{$id},0,30);
	    
	    if ($cmd{$id} eq 'PING'
		|| $cmd{$id} eq 'WRSEND') {
		$lasterror = $rsp;
		eval { $rr = $jsonobj->decode($rsp); };
		if ($$rr[0]{'err'} && $$rr[0]{'err'} ne 'OK' && $$rr[0]{'err'} ne 'LAST') {
		    warn "err($$rr[0]{'err'})";
		    $laststatus = $$rr[0]{'err'};
		} else {
		    warn "OK err($$rr[0]{'err'})";
		    $laststatus = 'OK';
		}
	    } elsif ($cmd{$id} eq 'NOT') {
		$lasterror = $rsp;
		eval { $rr = $jsonobj->decode($rsp); };
		if ($$rr[0]{'err'} ne 'NA') {
		    $laststatus = "E=".$$rr[0]{'err'};
		} else {
		    $laststatus = 'OK';
		}
	    } elsif ($cmd{$id} eq 'NOP') {
		$lasterror = $rsp;
		eval { $rr = $jsonobj->decode($rsp); };
		if ($$rr[0]{'err'} ne 'NP') {
		    $laststatus = "E=".$$rr[0]{'err'};
		} else {
		    $laststatus = 'OK';
		}
	    } elsif ($cmd{$id} eq 'AR') {
		# Extract from the POST binding  page from fields to pass on
		($AR) = $rsp =~ /<input name="ar" value="(.*?)"/;
		$laststatus = 'OK';
		$lasterror = "len=".length($rsp);
	    } elsif ($cmd{$id} eq 'SP') {
		# Extract from the POST binding  page from fields to pass on
		($SAMLResponse) = $rsp =~ /<input name="SAMLResponse" value="(.*?)"/;
		$laststatus = 'OK';
		$lasterror = "len=".length($rsp);
	    } elsif ($cmd{$id} eq 'ST') {
		$laststatus = 'OK';
		$lasterror = "len=".length($rsp);
	    }
	    delete $easy_url{$id};
	    delete $cmd{$id};
	    delete $key{$id};
	    delete $sesid{$id};
	    delete $send_ts{$id};
	}
    }
}

### N.B. Runs in context of inquiring user and only sends messages (such
### as diffs or end result) to the inquiring user's sessions.

sub process_timetag_response {
    my ($xx, $user, $sesid, $qs) = @_;
    
    if (length $$xx{'Name'}[0]) {
	$laststatus = 'OK';
    } else {
	$laststatus = 'ERRTT';
    }
}

sub process_simple_response {
    my ($xx, $user, $sesid, $qs) = @_;
    $laststatus = 'OK';
}

sub process_error_response {
    my ($erro, $user, $sesid, $qs) = @_;
    warn "error($erro) user($user) sesid($sesid) qs(".Dumper($qs).")";
    $laststatus = $erro;
}

sub process_sent_response {
    my ($xx, $user, $sesid, $qs) = @_;
    $lasterror = 'OK'; # Need better check to verify if message really was sent
}
} # Close if (0) several pages above


sub check_for_listener {
    my $port = shift @_;
    return 1 if $always_external_test_servers;  # avoid netstat 'cause it oopes Linux 2.5.74
    if ($uname_minus_s eq "SunOS" || $uname_minus_s eq "Darwin" || $uname_minus_s eq "AIX" || $uname_minus_s eq "Interix") {
	if (`netstat -an` =~ /\.$port\s+.+LISTEN$/m) {
	    return 1;
	}
    } elsif ($uname_minus_s eq "Linux") {
	if (`netstat -an` =~ /\:$port\s+.+LISTEN\s*/) {
	    return 1;
	}
    } elsif (substr($uname_minus_s, 0, 9) eq "CYGWIN_NT" || $uname_minus_s eq "Windows") {
	if (`netstat -an` =~ /\:$port\s+.+LISTENING\s*/) {
	    return 1;
	}
    } else {
	die "Can't determine system type($uname_minus_s)";
    }
    return 0;
}

# Launches a server, unless one is already listening on the targeted port,
# and arranges for logs to go to the right place.

sub launch_server {
#    for some tests to work with -e flag
#    my ($port, $log_file, @cmd_line, $file) = @_;
#    @cmd_line = "@cmd_line" . "$file";
    my ($port, $log_file, @cmd_line) = @_;
    my $pid;
    my $devnull = "</dev/null";
    if (substr($uname_minus_s, 0, 9) eq "CYGWIN_NT" || $uname_minus_s eq "Windows") {
    	$devnull = "<:NUL";
    }
    return if $host ne 'localhost';   # Presumably it was set up somewhere else
    return if check_for_listener($port);
    success_report() && die "Test server (port $port) died. Tried to relaunch"
	if $relaunch_testserver{$port}++;
    #warn "Launching @cmd_line";
    if ($pid = fork) {
        #warn "launched server $pid:: @cmd_line\n";
	wait_for_port($port) or kill_child($pid) and exit 1;
	return $pid;
    }
    die "fork($port) failed: $!" unless defined $pid;
    open STDIN, $devnull;  # Keep fd 0 occupied as it has special meaning
    warn "\nEXEC @cmd_line (>$log_file pid=$$)\n" if $show_exec;
    open STDOUT, ">>$log_file"
	or die "Redirect of STDOUT to $log_file failed: $!";
    open STDERR, ">&STDOUT" or die "Redirect of STDERR failed: $!";
    exec @cmd_line;
    die "exec($port) failed: $!";
}

#only kill the "ldap server", proxy that runs testserver.ldif
sub kill_server {
    my @process=split ' ',`ps -efa | grep dsproxy | grep testserver.ldif | grep -v "ps -efa"`;
    my $proc=$process[1];
    if ($proc){
	kill_child ($proc);
	#The next line initialize the relaunch counter
	$relaunch_testserver{$testserver_port}=0;
    }
}

sub G {
    my ($cmd, $tsti, $expl, $timeout, $slow, $url) = @_;
    return unless $tst eq 'all' || $tst eq substr("$tsti ",0,length $tst);
    return if $ntst && $ntst eq substr("$tsti ",0,length $ntst);
    warn "\n======= $tsti =======";

    #my ($page, $result, %headers);  Let these be global!
    my ($proto, $host, $port, $localurl)
	= $url =~ m%^(https?)://([^:/]+)(?:(\d+))?(/.*?)$%i;
    my $usessl = ($proto =~ /^https$/i ? 1 : 0);

    my $test = tst_link($tsti, $expl, $url);
    my $send_ts = Time::HiRes::time();
    warn "HERE1 ".Time::HiRes::time() if $timeout_trace;
    eval {
	warn "HERE2 ".Time::HiRes::time() if $timeout_trace;
	local $SIG{ALRM} = sub { die "TIMEOUT\n"; };
	warn "HERE3 ".Time::HiRes::time() if $timeout_trace;
	alarm $timeout;
	warn "HERE4 ".Time::HiRes::time() if $timeout_trace;
	
	($page, $result, %headers)
	    = get_httpx($usessl, $host, $port, $localurl, $headers);

	warn "HERE6 ".Time::HiRes::time() if $timeout_trace;
    };
    warn "HERE7 ".Time::HiRes::time() if $timeout_trace;
    alarm 0;
    warn "HERE8 ".Time::HiRes::time() if $timeout_trace;
    my $status = $@;
    warn "HERE9 ".Time::HiRes::time() if $timeout_trace;
    my $latency = substr(Time::HiRes::time() - $send_ts, 0, 5);
    if ($status eq "TIMEOUT\n") {
	tst_print('col1r', 'Timeout', $latency, $slow, $test, '');
	$@ = 0;
	warn "Timeout ($@) ".Time::HiRes::time();
	$timeout_trace = 1;
    } elsif ($status) {
	tst_print('col1r', 'Conn. Err', $latency, $slow, $test, $status);
    } elsif ($laststatus ne 'OK') {
	tst_print('col1r', 'App Err', $latency, $slow, $test, $lasterror);
    } else {
	tst_ok($latency, $slow, $test);
    }
}

sub call_system {
    my ($test, $timeout, $slow, $command_line, $exitval) = @_;
    my $send_ts = Time::HiRes::time();
    $? = 0;
    warn "HERE1 ".Time::HiRes::time() if $timeout_trace;
    eval {
	warn "HERE2 ".Time::HiRes::time() if $timeout_trace;
	local $SIG{ALRM} = sub { die "TIMEOUT\n"; };
	warn "HERE3 ".Time::HiRes::time() if $timeout_trace;
	alarm $timeout;
	warn "HERE4 ".Time::HiRes::time() if $timeout_trace;

	warn "EXEC($command_line)\n" if $show_exec;
	system $command_line;
	#warn "ret($ret) exit($?): $!";
	warn "HERE6 ".Time::HiRes::time() if $timeout_trace;
    };
    warn "HERE7 ".Time::HiRes::time() if $timeout_trace;
    alarm 0;
    warn "HERE8 ".Time::HiRes::time() if $timeout_trace;
    my $latency = substr(Time::HiRes::time() - $send_ts, 0, 5);
    if ($@ eq "TIMEOUT\n") {
	tst_print('col1r', 'Timeout', $latency, $slow, $test, '');
	$@ = 0;
	warn "Timeout ($@) ".Time::HiRes::time();
	$timeout_trace = 1;
	return -1;
    } elsif ($@) {
	tst_print('col1r', 'Conn. Err', $latency, $slow, $test, $@);
	return -1;
    } elsif ($? != $exitval) {
	tst_print('col1r', 'App Err', $latency, $slow, $test, "exit=$?" . ($?==-1?"$!":""));
	return -1;
    }
    return $latency;
}

sub C {
    my ($tsti, $expl, $timeout, $slow, $command_line) = @_;
    return unless $tst eq 'all' || $tst eq substr("$tsti ",0,length $tst);
    return if $ntst && $ntst eq substr("$tsti ",0,length $ntst);
    warn "\n======= $tsti =======\n";

    my $test = tst_link($tsti, $expl, $url);
    my $latency = call_system($test, $timeout, $slow, $command_line);
    return if $latency == -1;
    tst_ok($latency, $slow, $test);
}

# Erase some common innocent differences

sub blot_out_std_diffs {
    my ($x) = @_;
    $x =~ s/(ID)=".*?"/$1=""/g;
    $x =~ s/(IssueInstant)=".*?"/$1=""/g;
    
    $x =~ s/0\.\d+ 12\d+ libzxid \(zxid\.org\)/0./g;
    $x =~ s/R0\.\d+ \(\d+\)/R0./g;
    $x =~ s/R0\.\d+/R0./g;
    
    $x =~ s/^(msgid: ).+/$1/gm;
    $x =~ s/^(sespath: ).+/$1/gm;
    $x =~ s/^(sesid: ).+/$1/gm;
    $x =~ s/^(tgta7npath: ).+/$1/gm;
    $x =~ s/^(ssoa7npath: ).+/$1/gm;
    $x =~ s/^(zxididp: 0\.).+/$1/gm;

    $x =~ s%<wsu:Created>.*?</wsu:Created>%CREATED_TS%g;
    $x =~ s%<a:MessageID[^>]*>.*?</a:MessageID>%MessageID%g;
    $x =~ s%<a:InReplyTo[^>]*>.*?</a:InReplyTo>%InReplyTo%g;
    $x =~ s%<ds:DigestValue>.*?</ds:DigestValue>%DIGESTVAL%g;
    $x =~ s%<ds:SignatureValue>.*?</ds:SignatureValue>%SIGVAL%g;
    $x =~ s%<xenc:CipherValue>.*?</xenc:CipherValue>%CIPHERVALUE%g;
    return $x;
}

sub ediffy {
    my ($a,$b) = @_;
    return 0 if $a eq $b;

    # Ignore some common innocent differences

    $a = blot_out_std_diffs($a);
    $b = blot_out_std_diffs($b);
    return 0 if $a eq $b;

    warn "enter heavy diff -u tmp/a tmp/b; len1=".length($a)." len2=".length($b);
    writeall("tmp/a", $a);
    writeall("tmp/b", $b);

    my $ret = 0;

    eval {
	local $SIG{ALRM} = sub { die "TIMEOUT\n"; };
	alarm 60;   # The ediff algorithm seems exponential time, so lets not wait forever.
	require Algorithm::Diff;
	my @seq1 = split //, $a;
	my @seq2 = split //, $b;
	my $diff = Algorithm::Diff->new( \@seq1, \@seq2 );
	
	$diff->Base(1);   # Return line numbers, not indices
	while(  $diff->Next()  ) {
	    if (@sames = $diff->Same()) {
		print @sames;
		next;
	    }
	    if (@dels = $diff->Items(1)) {
		print redy(join '', @dels);
		++$ret;;
	    }
	    if (@adds = $diff->Items(2)) {
		print greeny(join '', @adds);
		++$ret;
	    }
	}
    };
    alarm 0;
    print "\n" if $ret;
    return $ret;
}

sub ediffy_read {
    my ($file1,$file2) = @_;
    my $data1 = readall $file1;
    my $data2 = readall $file2;
    return ediffy($data1,$data2);
}

sub isdiff_read {
    my ($file1,$file2) = @_;
    my $data1 = readall $file1;
    my $data2 = readall $file2;
    $data1 = blot_out_std_diffs($data1);
    $data2 = blot_out_std_diffs($data2);
    return 0 if $data1 eq $data2;
    return 1;
}

sub ED {  # enc-dec command with diff
    my ($tsti, $expl, $n_iter, $file, $exitval, $timeout) = @_;
    return unless $tst eq 'all' || $tst eq substr("$tsti ",0,length $tst);
    return if $ntst && $ntst eq substr("$tsti ",0,length $ntst);
    my $test = tst_link($tsti, $expl, '');
    my $slow = 0.01 * $n_iter;
    $timeout ||= 60;
    
    unlink "tmp/$tsti.out";
    
    my $latency = call_system($test, $timeout, $slow, "./zxencdectest -i $n_iter <$file >tmp/$tsti.out 2>tmp/tst.err", $exitval);
    return if $latency == -1;

    if ($diffx) {
	if (ediffy_read("t/$tsti.out", "tmp/$tsti.out")) {
	    tst_print('col1r', 'Diff ERR', $latency, $slow, $test, '');
	    return;
	}
    } elsif ($diffmeth eq 'diffu') {
	if (system "/usr/bin/diff t/$tsti.out tmp/$tsti.out") {
	    tst_print('col1r', 'Diff Err', $latency, $slow, $test, '');
	    return;
	}
    } else {
	if (isdiff_read("t/$tsti.out", "tmp/$tsti.out")) {
	    tst_print('col1r', 'Diff ERR', $latency, $slow, $test, '');
	    return;
	}
    }
    tst_ok($latency, $slow, $test);
}

sub ZXC {  # zxcall
    my ($tsti, $expl, $n_iter, $arg, $file) = @_;
    return unless $tst eq 'all' || $tst eq substr("$tsti ",0,length $tst);
    return if $ntst && $ntst eq substr("$tsti ",0,length $ntst);
    my $test = tst_link($tsti, $expl, '');
    my $slow = 0.03 * $n_iter;
    
    unlink "tmp/$tsti.out";
    
    #my $latency = call_system($test, 60, $slow, "./zxcall -a http://idp.tas3.pt:8081/zxididp?o=B tastest:tas123 $arg <$file >tmp/$tsti.out 2>tmp/tst.err");
    my $latency = call_system($test, 60, $slow, "./zxcall -a $idp tastest:tas123 $arg <$file >tmp/$tsti.out 2>tmp/tst.err");
    return if $latency == -1;
    
    #if (system "/usr/bin/diff -u t/$tsti.out tmp/$tsti.out") {
    #	tst_print('col1r', 'Diff Err', $latency, $slow, $test, '');
    #	return;
    #}
    tst_ok($latency, $slow, $test);
}

sub CMD {  # zxpasswd command with diff
    my ($tsti, $expl, $cmd, $exitval, $timeout, $slow) = @_;
    return unless $tst eq 'all' || $tst eq substr("$tsti ",0,length $tst);
    return if $ntst && $ntst eq substr("$tsti ",0,length $ntst);
    my $test = tst_link($tsti, $expl, '');
    $slow ||= 0.1;
    $timeout ||= 60;

    unlink "tmp/$tsti.out";
    
    my $latency = call_system($test,$timeout,$slow, "$cmd >tmp/$tsti.out 2>tmp/tst.err", $exitval);
    return if $latency == -1;
    
    if ($diffx) {
	if (ediffy_read("t/$tsti.out", "tmp/$tsti.out")) {
	    tst_print('col1r', 'Diff ERR', $latency, $slow, $test, '');
	    return;
	}
    } elsif ($diffmeth eq 'diffu') {
	if (system "/usr/bin/diff t/$tsti.out tmp/$tsti.out") {
	    tst_print('col1r', 'Diff Err', $latency, $slow, $test, '');
	    return;
	}
    } else {
	if (isdiff_read("t/$tsti.out", "tmp/$tsti.out")) {
	    tst_print('col1r', 'Diff ERR', $latency, $slow, $test, '');
	    return;
	}
    }
    tst_ok($latency, $slow, $test);
}

##################################################################
### START
###

$cgi = cgidec($ENV{'QUERY_STRING'} || shift);
$tst = $$cgi{'tst'} || 'all';
$ntst = $$cgi{'ntst'};
$diffmeth = $$cgi{'diffmeth'} || 'nodiff';

my ($ss, $mm, $hh, $day, $mon, $year) = gmtime();
$ts = sprintf "%04d%02d%02d-%02d%02d%02d", $year+1900,$mon+1,$day,$hh,$mm,$ss;

# N.B. It appears that it is very important for the table-layout: fixed
#      to be complemented with width: specification at table and th/td level.
#
#     <table class=line width=980><tr><td class=$class1 width=80>$status</td><td class=col2 width=50>$latency</td><td class=col3 width=50>$slow</td><td class=col4 width=300>$test</td><td class=col5>$lasterror&nbsp;</td></tr></table>


#$out =
syswrite STDOUT, <<HTML if !$ascii;
<title>ZXTEST</title>
<style type="text/css" media="screen, projection">
table.line  {  table-layout: fixed; width: 980px;  }
table       {  table-layout: fixed; width: 980px;  }
td  {  vertical-align: top;  white-space: nowrap; }
td.col1  {  width=80px;  padding-left: 3px; padding-right: 7px; border-right: 1px dotted #066;  }
td.col1r {  width=60px;  padding-left: 3px; padding-right: 7px; border-right: 1px dotted #066;  background-color: red;  }
td.col1g {  width=80px;  padding-left: 3px; padding-right: 7px; border-right: 1px dotted #066;  background-color: green;  }
td.col1y {  width=80px;  padding-left: 3px; padding-right: 7px; border-right: 1px dotted #066;  background-color: yellow;  }
td.col2  {  width=50px;  padding-left: 3px; padding-right: 7px; border-right: 1px dotted #066;  }
td.col3  {  width=50px;  padding-left: 3px; padding-right: 7px; border-right: 1px dotted #066;  }
td.col4  {  width=300px; padding-left: 3px; padding-right: 7px; border-right: 1px dotted #066;  }
td.col5  {  width=500px; padding-left: 3px; padding-right: 3px; border-right: 0px;  white-space: normal; } 
</style>
<body bgcolor=white>
<h1>ZXID TAS3 SSO Test $ts $diffmeth</h1>
<a href="zxtest.pl">zxtest.pl</a>
<p>
HTML
    ;

sub tst_link {
    my ($tsti, $expl, $url) = @_;
    ++$n_tst;
    return "$tsti $expl" if $ascii;
    return qq(<a href="zxtest.pl?tst=$tsti">$tsti</a> <a href="$url">*</a> $expl);
}

sub tst_ok {
    my ($latency, $slow, $test) = @_;
    ++$n_tst_ok;
    if ($latency > $slow) {
	tst_print('col1y', 'OK slow', $latency, $slow, $test, $lasterror);
    } else {
	tst_print('col1g', 'OK', $latency, $slow, $test, $lasterror);
    }
}

sub tst_print {
    my ($class1, $status, $latency, $slow, $test, $lasterror) = @_;
    if ($ascii) {
	$status = sprintf "%-8s", $status;
	$status = $class1 eq 'col1r' ? red($status) : green($status);
	printf "%s %-5s %-5s %-50s %s\n", $status, $latency, $slow, $test, $lasterror;
    } else {
	syswrite STDOUT, "<table class=line><tr><td class=$class1>$status</td><td class=col2>$latency</td><td class=col3>$slow</td><td class=col4>$test</td><td class=col5>$lasterror&nbsp;</td></tr></table>\n";
    }
}

if ($ascii) {
    tst_print('col1', 'STATUS', 'SECS', 'GOAL', 'TEST NAME', 'MESSAGES');
} else {
    tst_print('col1', '<b>Status</b>', '<b>Secs</b>', '<b>Goal</b>', '<b>Test name</b>', '<b>Messages</b>');
}


### Simulated browsing tests (a bit fragile)

tA('ST','LOGIN-IDP1', 'IdP Login screen',  "$idp?o=F");
tA('ST','LOGIN-IDP2', 'IdP Give password', "$idp?au=&alp=+Login+&au=test&ap=foo&fc=1&fn=prstnt&fq=&fy=&fa=&fm=&fp=0&ff=0&ar=&zxapp=");
tA('ST','LOGIN-IDP3', 'IdP Local Logout',  "$idp?gl=+Local+Logout+");

tA('ST','SSOHLO1', 'IdP selection screen', "$sp?o=E");
tA('AR','SSOHLO2', 'Selected IdP', "$sp?e=&l0http%3A%2F%2Fidp.tas3.pt%3A8081%2Fzxididp=+Login+with+TAS3+Demo+IdP+%28http%3A%2F%2Fidp.tas3.pt%3A8081%2Fzxididp%29+&fc=1&fn=prstnt&fr=&fq=&fy=&fa=&fm=&fp=0&ff=0");

tA('SP','SSOHLO3', 'Login to IdP', "$idp?au=&alp=+Login+&au=test&ap=foo&fc=1&fn=prstnt&fq=&fy=&fa=&fm=&fp=0&ff=0&ar=$AR&zxapp=");

pA('ST','SSOHLO4', 'POST to SP', "$sp?o=P", "SAMLResponse=$SAMLResponse");
tA('ST','SSOHLO5', 'SP SOAP Az',      "$sp?gv=1");
tA('ST','SSOHLO6', 'SP SOAP defed',   "$sp?gu=1");
tA('ST','SSOHLO7', 'SP SOAP defed',   "$sp?gt=1");
tA('ST','SSOHLO8', 'SP SOAP logout',  "$sp?gs=1");
tA('ST','SSOHLO9', 'SP local logout', "$sp?gl=+Local+Logout+");

$success_ratio = $n_tst ? sprintf("=== Test success %d/%d (%.1f%%) ===\n", $n_tst_ok, $n_tst, $n_tst_ok*100.0/$n_tst) : "No tests run.\n";

print $success_ratio if $ascii;

syswrite STDOUT, <<HTML if !$ascii;
</table>
<p><i>Hint: Click on test name to run just that test.</i>

<p><b>$success_ratio</b>

<hr>
<i>$cvsid</i>
HTML
    ;

__END__
#EOF
