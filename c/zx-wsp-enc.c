/* c/zx-wsp-enc.c - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Code generation design Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for terms and conditions
 * of use. Some aspects of code generation were driven by schema
 * descriptions that were used as input and may be subject to their own copyright.
 * Code generation uses a template, whose copyright statement follows. */

/** enc-templ.c  -  XML encoder template, used in code generation
 ** Copyright (c) 2010 Sampo Kellomaki (sampo@iki.fi), All Rights Reserved.
 ** Copyright (c) 2006-2007 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 ** Author: Sampo Kellomaki (sampo@iki.fi)
 ** This is confidential unpublished proprietary source code of the author.
 ** NO WARRANTY, not even implied warranties. Contains trade secrets.
 ** Distribution prohibited unless authorized in writing.
 ** Licensed under Apache License 2.0, see file COPYING.
 ** Id: enc-templ.c,v 1.27 2007-10-05 22:24:28 sampo Exp $
 **
 ** 30.5.2006, created, Sampo Kellomaki (sampo@iki.fi)
 ** 6.8.2006,  factored data structure walking to aux-templ.c --Sampo
 ** 8.8.2006,  reworked namespace handling --Sampo
 ** 26.8.2006, some CSE --Sampo
 ** 23.9.2006, added WO logic --Sampo
 ** 30.9.2007, improvements to WO encoding --Sampo
 ** 8.2.2010,  better handling of schema order encoding of unknown namespace prefixes --Sampo
 **
 ** N.B: wo=wire order (needed for exc-c14n), so=schema order
 ** N.B2: This template is meant to be processed by pd/xsd2sg.pl. Beware
 ** of special markers that xsd2sg.pl expects to find and understand.
 **/

#include <memory.h>
#include "errmac.h"
#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"
#include "c/zx-wsp-data.h"
#include "c/zx-ns.h"



#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   wsp_All
#define EL_STRUCT zx_wsp_All_s
#define EL_NS     wsp
#define EL_TAG    All

#ifndef MAYBE_UNUSED
#define MAYBE_UNUSED   /* May appear as unused variable, but is needed by some generated code. */
#endif

#if 0
#define ENC_LEN_DEBUG(x,tag,len) D("x=%p tag(%s) len=%d",(x),(tag),(len))
#define ENC_LEN_DEBUG_BASE char* enc_base = p
#else
#define ENC_LEN_DEBUG(x,tag,len)
#define ENC_LEN_DEBUG_BASE
#endif

/* FUNC(zx_LEN_SO_wsp_All) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_wsp_All(struct zx_ctx* c, struct zx_wsp_All_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<wsp:All")-1 + 1 + sizeof("</wsp:All>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_wsp, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_wsp_Policy_s* e;
      for (e = x->Policy; e; e = (struct zx_wsp_Policy_s*)e->gg.g.n)
	  len += zx_LEN_SO_wsp_Policy(c, e);
  }
  {
      struct zx_wsp_All_s* e;
      for (e = x->All; e; e = (struct zx_wsp_All_s*)e->gg.g.n)
	  len += zx_LEN_SO_wsp_All(c, e);
  }
  {
      struct zx_wsp_ExactlyOne_s* e;
      for (e = x->ExactlyOne; e; e = (struct zx_wsp_ExactlyOne_s*)e->gg.g.n)
	  len += zx_LEN_SO_wsp_ExactlyOne(c, e);
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      for (e = x->PolicyReference; e; e = (struct zx_wsp_PolicyReference_s*)e->gg.g.n)
	  len += zx_LEN_SO_wsp_PolicyReference(c, e);
  }


  len += zx_len_so_common(c, &x->gg);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "wsp:All", len);
  return len;
}

/* FUNC(zx_LEN_WO_wsp_All) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_wsp_All(struct zx_ctx* c, struct zx_wsp_All_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("All")-1 + 1 + 2 + sizeof("All")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_wsp_Policy_s* e;
      for (e = x->Policy; e; e = (struct zx_wsp_Policy_s*)e->gg.g.n)
	  len += zx_LEN_WO_wsp_Policy(c, e);
  }
  {
      struct zx_wsp_All_s* e;
      for (e = x->All; e; e = (struct zx_wsp_All_s*)e->gg.g.n)
	  len += zx_LEN_WO_wsp_All(c, e);
  }
  {
      struct zx_wsp_ExactlyOne_s* e;
      for (e = x->ExactlyOne; e; e = (struct zx_wsp_ExactlyOne_s*)e->gg.g.n)
	  len += zx_LEN_WO_wsp_ExactlyOne(c, e);
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      for (e = x->PolicyReference; e; e = (struct zx_wsp_PolicyReference_s*)e->gg.g.n)
	  len += zx_LEN_WO_wsp_PolicyReference(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "wsp:All", len);
  return len;
}

/* FUNC(zx_ENC_SO_wsp_All) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_wsp_All(struct zx_ctx* c, struct zx_wsp_All_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<wsp:All");
  if (c->inc_ns)
    p = zx_enc_inc_ns(c, p, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_wsp, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_wsp_Policy_s* e;
      for (e = x->Policy; e; e = (struct zx_wsp_Policy_s*)e->gg.g.n)
	  p = zx_ENC_SO_wsp_Policy(c, e, p);
  }
  {
      struct zx_wsp_All_s* e;
      for (e = x->All; e; e = (struct zx_wsp_All_s*)e->gg.g.n)
	  p = zx_ENC_SO_wsp_All(c, e, p);
  }
  {
      struct zx_wsp_ExactlyOne_s* e;
      for (e = x->ExactlyOne; e; e = (struct zx_wsp_ExactlyOne_s*)e->gg.g.n)
	  p = zx_ENC_SO_wsp_ExactlyOne(c, e, p);
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      for (e = x->PolicyReference; e; e = (struct zx_wsp_PolicyReference_s*)e->gg.g.n)
	  p = zx_ENC_SO_wsp_PolicyReference(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</wsp:All>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "wsp:All", p-enc_base);
  return p;
}

/* FUNC(zx_ENC_WO_wsp_All) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_wsp_All(struct zx_ctx* c, struct zx_wsp_All_s* x, char* p )
{
  struct zx_elem_s* kid;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  char* q;
  char* qq;
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "All", sizeof("All")-1);
  qq = p;

  /* *** sort the namespaces */
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "wsp:All", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_wsp_All) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_wsp_All(struct zx_ctx* c, struct zx_wsp_All_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_wsp_All(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_wsp_All(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_wsp_All) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_wsp_All(struct zx_ctx* c, struct zx_wsp_All_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_wsp_All(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_wsp_All(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   wsp_AppliesTo
#define EL_STRUCT zx_wsp_AppliesTo_s
#define EL_NS     wsp
#define EL_TAG    AppliesTo

#ifndef MAYBE_UNUSED
#define MAYBE_UNUSED   /* May appear as unused variable, but is needed by some generated code. */
#endif

#if 0
#define ENC_LEN_DEBUG(x,tag,len) D("x=%p tag(%s) len=%d",(x),(tag),(len))
#define ENC_LEN_DEBUG_BASE char* enc_base = p
#else
#define ENC_LEN_DEBUG(x,tag,len)
#define ENC_LEN_DEBUG_BASE
#endif

/* FUNC(zx_LEN_SO_wsp_AppliesTo) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_wsp_AppliesTo(struct zx_ctx* c, struct zx_wsp_AppliesTo_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<wsp:AppliesTo")-1 + 1 + sizeof("</wsp:AppliesTo>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_wsp, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, &x->gg);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "wsp:AppliesTo", len);
  return len;
}

/* FUNC(zx_LEN_WO_wsp_AppliesTo) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_wsp_AppliesTo(struct zx_ctx* c, struct zx_wsp_AppliesTo_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("AppliesTo")-1 + 1 + 2 + sizeof("AppliesTo")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "wsp:AppliesTo", len);
  return len;
}

/* FUNC(zx_ENC_SO_wsp_AppliesTo) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_wsp_AppliesTo(struct zx_ctx* c, struct zx_wsp_AppliesTo_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<wsp:AppliesTo");
  if (c->inc_ns)
    p = zx_enc_inc_ns(c, p, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_wsp, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</wsp:AppliesTo>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "wsp:AppliesTo", p-enc_base);
  return p;
}

/* FUNC(zx_ENC_WO_wsp_AppliesTo) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_wsp_AppliesTo(struct zx_ctx* c, struct zx_wsp_AppliesTo_s* x, char* p )
{
  struct zx_elem_s* kid;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  char* q;
  char* qq;
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "AppliesTo", sizeof("AppliesTo")-1);
  qq = p;

  /* *** sort the namespaces */
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "wsp:AppliesTo", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_wsp_AppliesTo) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_wsp_AppliesTo(struct zx_ctx* c, struct zx_wsp_AppliesTo_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_wsp_AppliesTo(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_wsp_AppliesTo(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_wsp_AppliesTo) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_wsp_AppliesTo(struct zx_ctx* c, struct zx_wsp_AppliesTo_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_wsp_AppliesTo(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_wsp_AppliesTo(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   wsp_ExactlyOne
#define EL_STRUCT zx_wsp_ExactlyOne_s
#define EL_NS     wsp
#define EL_TAG    ExactlyOne

#ifndef MAYBE_UNUSED
#define MAYBE_UNUSED   /* May appear as unused variable, but is needed by some generated code. */
#endif

#if 0
#define ENC_LEN_DEBUG(x,tag,len) D("x=%p tag(%s) len=%d",(x),(tag),(len))
#define ENC_LEN_DEBUG_BASE char* enc_base = p
#else
#define ENC_LEN_DEBUG(x,tag,len)
#define ENC_LEN_DEBUG_BASE
#endif

/* FUNC(zx_LEN_SO_wsp_ExactlyOne) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_wsp_ExactlyOne(struct zx_ctx* c, struct zx_wsp_ExactlyOne_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<wsp:ExactlyOne")-1 + 1 + sizeof("</wsp:ExactlyOne>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_wsp, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_wsp_Policy_s* e;
      for (e = x->Policy; e; e = (struct zx_wsp_Policy_s*)e->gg.g.n)
	  len += zx_LEN_SO_wsp_Policy(c, e);
  }
  {
      struct zx_wsp_All_s* e;
      for (e = x->All; e; e = (struct zx_wsp_All_s*)e->gg.g.n)
	  len += zx_LEN_SO_wsp_All(c, e);
  }
  {
      struct zx_wsp_ExactlyOne_s* e;
      for (e = x->ExactlyOne; e; e = (struct zx_wsp_ExactlyOne_s*)e->gg.g.n)
	  len += zx_LEN_SO_wsp_ExactlyOne(c, e);
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      for (e = x->PolicyReference; e; e = (struct zx_wsp_PolicyReference_s*)e->gg.g.n)
	  len += zx_LEN_SO_wsp_PolicyReference(c, e);
  }


  len += zx_len_so_common(c, &x->gg);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "wsp:ExactlyOne", len);
  return len;
}

/* FUNC(zx_LEN_WO_wsp_ExactlyOne) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_wsp_ExactlyOne(struct zx_ctx* c, struct zx_wsp_ExactlyOne_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("ExactlyOne")-1 + 1 + 2 + sizeof("ExactlyOne")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_wsp_Policy_s* e;
      for (e = x->Policy; e; e = (struct zx_wsp_Policy_s*)e->gg.g.n)
	  len += zx_LEN_WO_wsp_Policy(c, e);
  }
  {
      struct zx_wsp_All_s* e;
      for (e = x->All; e; e = (struct zx_wsp_All_s*)e->gg.g.n)
	  len += zx_LEN_WO_wsp_All(c, e);
  }
  {
      struct zx_wsp_ExactlyOne_s* e;
      for (e = x->ExactlyOne; e; e = (struct zx_wsp_ExactlyOne_s*)e->gg.g.n)
	  len += zx_LEN_WO_wsp_ExactlyOne(c, e);
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      for (e = x->PolicyReference; e; e = (struct zx_wsp_PolicyReference_s*)e->gg.g.n)
	  len += zx_LEN_WO_wsp_PolicyReference(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "wsp:ExactlyOne", len);
  return len;
}

/* FUNC(zx_ENC_SO_wsp_ExactlyOne) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_wsp_ExactlyOne(struct zx_ctx* c, struct zx_wsp_ExactlyOne_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<wsp:ExactlyOne");
  if (c->inc_ns)
    p = zx_enc_inc_ns(c, p, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_wsp, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_wsp_Policy_s* e;
      for (e = x->Policy; e; e = (struct zx_wsp_Policy_s*)e->gg.g.n)
	  p = zx_ENC_SO_wsp_Policy(c, e, p);
  }
  {
      struct zx_wsp_All_s* e;
      for (e = x->All; e; e = (struct zx_wsp_All_s*)e->gg.g.n)
	  p = zx_ENC_SO_wsp_All(c, e, p);
  }
  {
      struct zx_wsp_ExactlyOne_s* e;
      for (e = x->ExactlyOne; e; e = (struct zx_wsp_ExactlyOne_s*)e->gg.g.n)
	  p = zx_ENC_SO_wsp_ExactlyOne(c, e, p);
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      for (e = x->PolicyReference; e; e = (struct zx_wsp_PolicyReference_s*)e->gg.g.n)
	  p = zx_ENC_SO_wsp_PolicyReference(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</wsp:ExactlyOne>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "wsp:ExactlyOne", p-enc_base);
  return p;
}

/* FUNC(zx_ENC_WO_wsp_ExactlyOne) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_wsp_ExactlyOne(struct zx_ctx* c, struct zx_wsp_ExactlyOne_s* x, char* p )
{
  struct zx_elem_s* kid;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  char* q;
  char* qq;
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "ExactlyOne", sizeof("ExactlyOne")-1);
  qq = p;

  /* *** sort the namespaces */
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "wsp:ExactlyOne", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_wsp_ExactlyOne) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_wsp_ExactlyOne(struct zx_ctx* c, struct zx_wsp_ExactlyOne_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_wsp_ExactlyOne(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_wsp_ExactlyOne(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_wsp_ExactlyOne) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_wsp_ExactlyOne(struct zx_ctx* c, struct zx_wsp_ExactlyOne_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_wsp_ExactlyOne(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_wsp_ExactlyOne(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   wsp_Policy
#define EL_STRUCT zx_wsp_Policy_s
#define EL_NS     wsp
#define EL_TAG    Policy

#ifndef MAYBE_UNUSED
#define MAYBE_UNUSED   /* May appear as unused variable, but is needed by some generated code. */
#endif

#if 0
#define ENC_LEN_DEBUG(x,tag,len) D("x=%p tag(%s) len=%d",(x),(tag),(len))
#define ENC_LEN_DEBUG_BASE char* enc_base = p
#else
#define ENC_LEN_DEBUG(x,tag,len)
#define ENC_LEN_DEBUG_BASE
#endif

/* FUNC(zx_LEN_SO_wsp_Policy) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_wsp_Policy(struct zx_ctx* c, struct zx_wsp_Policy_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<wsp:Policy")-1 + 1 + sizeof("</wsp:Policy>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_wsp, &pop_seen);
  if (x->Id)
    len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_wsu, &pop_seen);

  len += zx_attr_so_len(x->Name, sizeof("Name")-1);
  len += zx_attr_so_len(x->Id, sizeof("wsu:Id")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_wsp_Policy_s* e;
      for (e = x->Policy; e; e = (struct zx_wsp_Policy_s*)e->gg.g.n)
	  len += zx_LEN_SO_wsp_Policy(c, e);
  }
  {
      struct zx_wsp_All_s* e;
      for (e = x->All; e; e = (struct zx_wsp_All_s*)e->gg.g.n)
	  len += zx_LEN_SO_wsp_All(c, e);
  }
  {
      struct zx_wsp_ExactlyOne_s* e;
      for (e = x->ExactlyOne; e; e = (struct zx_wsp_ExactlyOne_s*)e->gg.g.n)
	  len += zx_LEN_SO_wsp_ExactlyOne(c, e);
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      for (e = x->PolicyReference; e; e = (struct zx_wsp_PolicyReference_s*)e->gg.g.n)
	  len += zx_LEN_SO_wsp_PolicyReference(c, e);
  }


  len += zx_len_so_common(c, &x->gg);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "wsp:Policy", len);
  return len;
}

/* FUNC(zx_LEN_WO_wsp_Policy) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_wsp_Policy(struct zx_ctx* c, struct zx_wsp_Policy_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("Policy")-1 + 1 + 2 + sizeof("Policy")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  if (x->Id)
    len += zx_len_xmlns_if_not_seen(c, x->Id->g.ns, &pop_seen);

  len += zx_attr_wo_len(x->Name, sizeof("Name")-1);
  len += zx_attr_wo_len(x->Id, sizeof("Id")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_wsp_Policy_s* e;
      for (e = x->Policy; e; e = (struct zx_wsp_Policy_s*)e->gg.g.n)
	  len += zx_LEN_WO_wsp_Policy(c, e);
  }
  {
      struct zx_wsp_All_s* e;
      for (e = x->All; e; e = (struct zx_wsp_All_s*)e->gg.g.n)
	  len += zx_LEN_WO_wsp_All(c, e);
  }
  {
      struct zx_wsp_ExactlyOne_s* e;
      for (e = x->ExactlyOne; e; e = (struct zx_wsp_ExactlyOne_s*)e->gg.g.n)
	  len += zx_LEN_WO_wsp_ExactlyOne(c, e);
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      for (e = x->PolicyReference; e; e = (struct zx_wsp_PolicyReference_s*)e->gg.g.n)
	  len += zx_LEN_WO_wsp_PolicyReference(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "wsp:Policy", len);
  return len;
}

/* FUNC(zx_ENC_SO_wsp_Policy) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_wsp_Policy(struct zx_ctx* c, struct zx_wsp_Policy_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<wsp:Policy");
  if (c->inc_ns)
    p = zx_enc_inc_ns(c, p, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_wsp, &pop_seen);
  if (x->Id)
    p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_wsu, &pop_seen);

  p = zx_attr_so_enc(p, x->Name, " Name=\"", sizeof(" Name=\"")-1);
  p = zx_attr_so_enc(p, x->Id, " wsu:Id=\"", sizeof(" wsu:Id=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_wsp_Policy_s* e;
      for (e = x->Policy; e; e = (struct zx_wsp_Policy_s*)e->gg.g.n)
	  p = zx_ENC_SO_wsp_Policy(c, e, p);
  }
  {
      struct zx_wsp_All_s* e;
      for (e = x->All; e; e = (struct zx_wsp_All_s*)e->gg.g.n)
	  p = zx_ENC_SO_wsp_All(c, e, p);
  }
  {
      struct zx_wsp_ExactlyOne_s* e;
      for (e = x->ExactlyOne; e; e = (struct zx_wsp_ExactlyOne_s*)e->gg.g.n)
	  p = zx_ENC_SO_wsp_ExactlyOne(c, e, p);
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      for (e = x->PolicyReference; e; e = (struct zx_wsp_PolicyReference_s*)e->gg.g.n)
	  p = zx_ENC_SO_wsp_PolicyReference(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</wsp:Policy>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "wsp:Policy", p-enc_base);
  return p;
}

/* FUNC(zx_ENC_WO_wsp_Policy) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_wsp_Policy(struct zx_ctx* c, struct zx_wsp_Policy_s* x, char* p )
{
  struct zx_elem_s* kid;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  char* q;
  char* qq;
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "Policy", sizeof("Policy")-1);
  qq = p;

  /* *** sort the namespaces */
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);
  if (x->Id)
    zx_add_xmlns_if_not_seen(c, x->Id->g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->Name, "Name=\"", sizeof("Name=\"")-1);
  p = zx_attr_wo_enc(p, x->Id, "Id=\"", sizeof("Id=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "wsp:Policy", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_wsp_Policy) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_wsp_Policy(struct zx_ctx* c, struct zx_wsp_Policy_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_wsp_Policy(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_wsp_Policy(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_wsp_Policy) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_wsp_Policy(struct zx_ctx* c, struct zx_wsp_Policy_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_wsp_Policy(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_wsp_Policy(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   wsp_PolicyAttachment
#define EL_STRUCT zx_wsp_PolicyAttachment_s
#define EL_NS     wsp
#define EL_TAG    PolicyAttachment

#ifndef MAYBE_UNUSED
#define MAYBE_UNUSED   /* May appear as unused variable, but is needed by some generated code. */
#endif

#if 0
#define ENC_LEN_DEBUG(x,tag,len) D("x=%p tag(%s) len=%d",(x),(tag),(len))
#define ENC_LEN_DEBUG_BASE char* enc_base = p
#else
#define ENC_LEN_DEBUG(x,tag,len)
#define ENC_LEN_DEBUG_BASE
#endif

/* FUNC(zx_LEN_SO_wsp_PolicyAttachment) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_wsp_PolicyAttachment(struct zx_ctx* c, struct zx_wsp_PolicyAttachment_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<wsp:PolicyAttachment")-1 + 1 + sizeof("</wsp:PolicyAttachment>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_wsp, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_wsp_AppliesTo_s* e;
      for (e = x->AppliesTo; e; e = (struct zx_wsp_AppliesTo_s*)e->gg.g.n)
	  len += zx_LEN_SO_wsp_AppliesTo(c, e);
  }
  {
      struct zx_wsp_Policy_s* e;
      for (e = x->Policy; e; e = (struct zx_wsp_Policy_s*)e->gg.g.n)
	  len += zx_LEN_SO_wsp_Policy(c, e);
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      for (e = x->PolicyReference; e; e = (struct zx_wsp_PolicyReference_s*)e->gg.g.n)
	  len += zx_LEN_SO_wsp_PolicyReference(c, e);
  }


  len += zx_len_so_common(c, &x->gg);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "wsp:PolicyAttachment", len);
  return len;
}

/* FUNC(zx_LEN_WO_wsp_PolicyAttachment) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_wsp_PolicyAttachment(struct zx_ctx* c, struct zx_wsp_PolicyAttachment_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("PolicyAttachment")-1 + 1 + 2 + sizeof("PolicyAttachment")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  {
      struct zx_wsp_AppliesTo_s* e;
      for (e = x->AppliesTo; e; e = (struct zx_wsp_AppliesTo_s*)e->gg.g.n)
	  len += zx_LEN_WO_wsp_AppliesTo(c, e);
  }
  {
      struct zx_wsp_Policy_s* e;
      for (e = x->Policy; e; e = (struct zx_wsp_Policy_s*)e->gg.g.n)
	  len += zx_LEN_WO_wsp_Policy(c, e);
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      for (e = x->PolicyReference; e; e = (struct zx_wsp_PolicyReference_s*)e->gg.g.n)
	  len += zx_LEN_WO_wsp_PolicyReference(c, e);
  }


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "wsp:PolicyAttachment", len);
  return len;
}

/* FUNC(zx_ENC_SO_wsp_PolicyAttachment) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_wsp_PolicyAttachment(struct zx_ctx* c, struct zx_wsp_PolicyAttachment_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<wsp:PolicyAttachment");
  if (c->inc_ns)
    p = zx_enc_inc_ns(c, p, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_wsp, &pop_seen);


  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  {
      struct zx_wsp_AppliesTo_s* e;
      for (e = x->AppliesTo; e; e = (struct zx_wsp_AppliesTo_s*)e->gg.g.n)
	  p = zx_ENC_SO_wsp_AppliesTo(c, e, p);
  }
  {
      struct zx_wsp_Policy_s* e;
      for (e = x->Policy; e; e = (struct zx_wsp_Policy_s*)e->gg.g.n)
	  p = zx_ENC_SO_wsp_Policy(c, e, p);
  }
  {
      struct zx_wsp_PolicyReference_s* e;
      for (e = x->PolicyReference; e; e = (struct zx_wsp_PolicyReference_s*)e->gg.g.n)
	  p = zx_ENC_SO_wsp_PolicyReference(c, e, p);
  }

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</wsp:PolicyAttachment>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "wsp:PolicyAttachment", p-enc_base);
  return p;
}

/* FUNC(zx_ENC_WO_wsp_PolicyAttachment) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_wsp_PolicyAttachment(struct zx_ctx* c, struct zx_wsp_PolicyAttachment_s* x, char* p )
{
  struct zx_elem_s* kid;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  char* q;
  char* qq;
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "PolicyAttachment", sizeof("PolicyAttachment")-1);
  qq = p;

  /* *** sort the namespaces */
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "wsp:PolicyAttachment", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_wsp_PolicyAttachment) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_wsp_PolicyAttachment(struct zx_ctx* c, struct zx_wsp_PolicyAttachment_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_wsp_PolicyAttachment(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_wsp_PolicyAttachment(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_wsp_PolicyAttachment) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_wsp_PolicyAttachment(struct zx_ctx* c, struct zx_wsp_PolicyAttachment_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_wsp_PolicyAttachment(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_wsp_PolicyAttachment(c, x, buf ), buf, len);
}






#ifdef EL_NAME
#undef EL_NAME
#endif
#ifdef EL_STRUCT
#undef EL_STRUCT
#endif
#ifdef EL_NS
#undef EL_NS
#endif
#ifdef EL_TAG
#undef EL_TAG
#endif

#define EL_NAME   wsp_PolicyReference
#define EL_STRUCT zx_wsp_PolicyReference_s
#define EL_NS     wsp
#define EL_TAG    PolicyReference

#ifndef MAYBE_UNUSED
#define MAYBE_UNUSED   /* May appear as unused variable, but is needed by some generated code. */
#endif

#if 0
#define ENC_LEN_DEBUG(x,tag,len) D("x=%p tag(%s) len=%d",(x),(tag),(len))
#define ENC_LEN_DEBUG_BASE char* enc_base = p
#else
#define ENC_LEN_DEBUG(x,tag,len)
#define ENC_LEN_DEBUG_BASE
#endif

/* FUNC(zx_LEN_SO_wsp_PolicyReference) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_wsp_PolicyReference(struct zx_ctx* c, struct zx_wsp_PolicyReference_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<wsp:PolicyReference")-1 + 1 + sizeof("</wsp:PolicyReference>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+zx_xmlns_ix_wsp, &pop_seen);

  len += zx_attr_so_len(x->Digest, sizeof("Digest")-1);
  len += zx_attr_so_len(x->DigestAlgorithm, sizeof("DigestAlgorithm")-1);
  len += zx_attr_so_len(x->URI, sizeof("URI")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, &x->gg);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "wsp:PolicyReference", len);
  return len;
}

/* FUNC(zx_LEN_WO_wsp_PolicyReference) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in wire order and no assumptions
 * are made about namespace prefixes. */

/* Called by: */
int zx_LEN_WO_wsp_PolicyReference(struct zx_ctx* c, struct zx_wsp_PolicyReference_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  int len = 1 + sizeof("PolicyReference")-1 + 1 + 2 + sizeof("PolicyReference")-1 + 1;
  
  if (x->gg.g.ns && x->gg.g.ns->prefix_len)
    len += (x->gg.g.ns->prefix_len + 1) * 2;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  len += zx_len_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  len += zx_attr_wo_len(x->Digest, sizeof("Digest")-1);
  len += zx_attr_wo_len(x->DigestAlgorithm, sizeof("DigestAlgorithm")-1);
  len += zx_attr_wo_len(x->URI, sizeof("URI")-1);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_wo_common(c, &x->gg); 
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "wsp:PolicyReference", len);
  return len;
}

/* FUNC(zx_ENC_SO_wsp_PolicyReference) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_wsp_PolicyReference(struct zx_ctx* c, struct zx_wsp_PolicyReference_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<wsp:PolicyReference");
  if (c->inc_ns)
    p = zx_enc_inc_ns(c, p, &pop_seen);
  p = zx_enc_xmlns_if_not_seen(c, p, zx_ns_tab+zx_xmlns_ix_wsp, &pop_seen);

  p = zx_attr_so_enc(p, x->Digest, " Digest=\"", sizeof(" Digest=\"")-1);
  p = zx_attr_so_enc(p, x->DigestAlgorithm, " DigestAlgorithm=\"", sizeof(" DigestAlgorithm=\"")-1);
  p = zx_attr_so_enc(p, x->URI, " URI=\"", sizeof(" URI=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</wsp:PolicyReference>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "wsp:PolicyReference", p-enc_base);
  return p;
}

/* FUNC(zx_ENC_WO_wsp_PolicyReference) */

/* Render element into string. The XML attributes and elements are
 * processed in wire order by chasing wo pointers. This is what you want for
 * validating signatures on other people's XML documents. */

/* Called by: */
char* zx_ENC_WO_wsp_PolicyReference(struct zx_ctx* c, struct zx_wsp_PolicyReference_s* x, char* p )
{
  struct zx_elem_s* kid;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  char* q;
  char* qq;
  ZX_OUT_CH(p, '<');
  q = p;
  if (x->gg.g.ns && x->gg.g.ns->prefix_len) {
    ZX_OUT_MEM(p, x->gg.g.ns->prefix, x->gg.g.ns->prefix_len);
    ZX_OUT_CH(p, ':');
  }
  ZX_OUT_MEM(p, "PolicyReference", sizeof("PolicyReference")-1);
  qq = p;

  /* *** sort the namespaces */
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  zx_add_xmlns_if_not_seen(c, x->gg.g.ns, &pop_seen);

  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_wo_enc(p, x->Digest, "Digest=\"", sizeof("Digest=\"")-1);
  p = zx_attr_wo_enc(p, x->DigestAlgorithm, "DigestAlgorithm=\"", sizeof("DigestAlgorithm=\"")-1);
  p = zx_attr_wo_enc(p, x->URI, "URI=\"", sizeof("URI=\"")-1);

  p = zx_enc_unknown_attrs(p, x->gg.any_attr);
#else
  /* root node has no begin tag */
#endif
  
  for (kid = x->gg.kids; kid; kid = ((struct zx_elem_s*)(kid->g.wo)))
    p = zx_ENC_WO_any_elem(c, kid, p);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CH(p, '<');
  ZX_OUT_CH(p, '/');
  ZX_OUT_MEM(p, q, qq-q);
  ZX_OUT_CH(p, '>');
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "wsp:PolicyReference", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_wsp_PolicyReference) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_wsp_PolicyReference(struct zx_ctx* c, struct zx_wsp_PolicyReference_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_wsp_PolicyReference(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_wsp_PolicyReference(c, x, buf ), buf, len);
}

/* FUNC(zx_EASY_ENC_WO_wsp_PolicyReference) */

/* Called by: */
struct zx_str* zx_EASY_ENC_WO_wsp_PolicyReference(struct zx_ctx* c, struct zx_wsp_PolicyReference_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_WO_wsp_PolicyReference(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_WO_wsp_PolicyReference(c, x, buf ), buf, len);
}




/* EOF -- c/zx-wsp-enc.c */