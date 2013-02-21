#!/usr/bin/perl
# 31.10.2012, Sampo Kellomaki (sampo@iki.fi)
#
# Decode and format logs
#
# Usage: cat foo.saml | ./zxdecode | ./log-pretty.pl
#        ./log-pretty.pl -fn FN  # Decode FN hash to file and function name
# tailf /var/zxid/log/xml.dbg | ./log-pretty.pl
#
# The dependencies files.list and function.list are generated by call-anal.pl
# The hash function is extracted from definition of AKBOX_FN in akbox.h
# See akbox.h for FN hash

use Data::Dumper;

$ascii = 2;

# See https://wiki.archlinux.org/index.php/Color_Bash_Prompt
sub red   { $ascii > 1 ? "\e[1;31m$_[0]\e[0m" : $_[0]; }  # red text
#sub green { $ascii > 1 ? "\e[1;32m$_[0]\e[0m" : $_[0]; }
#sub red    { $ascii > 1 ? "\e[1;41m$_[0]\e[0m" : $_[0]; }  # red background, black bold text
sub green  { $ascii > 1 ? "\e[1;42m$_[0]\e[0m" : $_[0]; }
sub redy   { $ascii > 1 ? "\e[41m$_[0]\e[0m" : $_[0]; }    # red background, black text (no bold)
sub greeny { $ascii > 1 ? "\e[42m$_[0]\e[0m" : $_[0]; }
sub yely { $ascii > 1 ? "\e[43m$_[0]\e[0m" : $_[0]; }
sub bluy { $ascii > 1 ? "\e[46m$_[0]\e[0m" : $_[0]; }

warn "sep=".ord($/);

sub readall {
    my ($f,$silent) = @_;
    my ($pkg, $srcfile, $line) = caller;
    local $/ = undef;         # Read all in, without breaking on lines
    if (open F, "<$f") {
	binmode F;
	#flock F, 1;
	my $x = <F>;
	#flock F, 8;
	close F;
	return $x;
    } else {
	return undef if $silent;
	warn "$srcfile:$line: Cant read($f): $!";
	warn "pwd(".`pwd`.")";
	return undef;
    }
}

$x = readall("akbox.h");
($xd) = $x =~ /^\#define AKBOX_FN\(x\) \(\( sizeof\(x\) \+ \(x\)\[0\] (.*?)\) & 0xffff\)/ms;
$akbox_fn = 'sub akbox_fn { my ($x) = @_; return (length($x)+1+ord(substr($x,0,1))'."\n";
while ($xd =~ /\+ \(sizeof\(x\)>(\d+) \? (\d+)\*\(x\)\[(\d+)\] : 0\)/g) {
    #warn "siz($1) factor($2) tap($3) pos=".pos($xd);
    warn "mismatch in siz($1) and tap($3)" if $1-1 != $3;
    $akbox_fn .= "+ $2*ord(substr(\$x,$3,1))\n";
}
$akbox_fn .= ') & 0xffff; }';
#warn $akbox_fn;
eval $akbox_fn;

$x = readall("file.list");
#warn "HERE($x) ARGV0($ARGV[0])";
while ($x =~ /ZXFILE_DEF\("([A-Za-z_0-9.-]+)"\)/g) {
    $fn = $1;
    $k = sprintf("%04x",akbox_fn($fn));
    #warn "HERE($1)=(".akbox_fn($fn).")";
    if ($files{$k}) {
	warn "hash collision for($k)=($files{$k})";
	$fn .= ",$files{$k}";
    }
    $files{$k} = $fn;
}
$x = readall("function.list");
#warn "HERE($x) ARGV0($ARGV[0])";
while ($x =~ /ZXFUNC_DEF\("([A-Za-z_0-9:]+)","([A-Za-z_0-9.-]+)"\)/g) {
    $fn = $1;
    $fl = $2;
    $k = sprintf("%04x",akbox_fn($fn));
    if ($funcs{$k}) {
	warn "hash collision for($k)=($funcs{$k})";
	$fn .= ",$funcs{$k}";
    }
    $funcs{$k} = $fn;
    $func_files{$k} = $fl;    
}

sub decode_fn {
    my ($fn) = @_;
    chomp $fn;
    my ($file,$line,$func);
    if (($file,$line,$func) = $fn =~ /([0-9a-f]+):(\d+)\s+([0-9a-f]+)/) {
	print "$fn => $files{$file}:$line \t$funcs{$func} ($func_files{$func})\n";
    } elsif (($file,$line) = $fn =~ /([0-9a-f]+):(\d+)/) {
	print "$fn => $files{$file}:$line \t$funcs{$file} ($func_files{$file})\n";
    } else {
	print "$fn => $files{$fn} \t$funcs{$fn} ($func_files{$fn})\n";
    }
}

if ($ARGV[0] eq '-t') {
    shift;
    $file = shift;
    printf("%04x\n",akbox_fn($file));
    exit;
}

if ($ARGV[0] eq '-fn') {
    shift;
    #warn "HERE";
    if ($ARGV[0]) {
	#warn "HERE";
	while ($fn = shift) {
	    decode_fn($fn);
	}
    } else {
	#warn "HERE";
	#warn "sep=".ord($/);
	while ($fn = <STDIN>) {
	    decode_fn($fn);
	}
    }
    exit;
}

while (defined($line = <STDIN>)) {
    #$line =~ tr[\r][];
    print xml_pretty($line);
}

__END__
