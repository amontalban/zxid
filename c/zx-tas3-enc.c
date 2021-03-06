/* c/zx-tas3-enc.c - WARNING: This file was auto generated by xsd2sg.pl. DO NOT EDIT!
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
 ** 27.10.2010, re-engineered namespace handling --Sampo
 ** 24.11.2010, this code is sceduled for removal as el_order processing in WO encoder accomplishes the same result. --Sampo
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
#include "c/zx-tas3-data.h"
#include "c/zx-ns.h"



#if 0

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

#define EL_NAME   tas3_Credentials
#define EL_STRUCT zx_tas3_Credentials_s
#define EL_NS     tas3
#define EL_TAG    Credentials

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

/* FUNC(zx_LEN_SO_tas3_Credentials) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_tas3_Credentials(struct zx_ctx* c, struct zx_tas3_Credentials_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<tas3:Credentials")-1 + 1 + sizeof("</tas3:Credentials>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  if (x->actor || x->mustUnderstand)
    len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+(zx_e_NS >> ZX_TOK_NS_SHIFT), &pop_seen);
  if (1)
    len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+(zx_tas3_NS >> ZX_TOK_NS_SHIFT), &pop_seen);
  if (x->Id)
    len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+(zx_wsu_NS >> ZX_TOK_NS_SHIFT), &pop_seen);

  len += zx_attr_so_len(c, x->id, sizeof("id")-1, &pop_seen);
  len += zx_attr_so_len(c, x->usage, sizeof("usage")-1, &pop_seen);
  len += zx_attr_so_len(c, x->Id, sizeof("wsu:Id")-1, &pop_seen);
  len += zx_attr_so_len(c, x->actor, sizeof("e:actor")-1, &pop_seen);
  len += zx_attr_so_len(c, x->mustUnderstand, sizeof("e:mustUnderstand")-1, &pop_seen);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = &x->Assertion->gg;
       se && se->g.tok == zx_sa_Assertion_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_sa_Assertion(c, (struct zx_sa_Assertion_s*)se);
  for (se = &x->EncryptedAssertion->gg;
       se && se->g.tok == zx_sa_EncryptedAssertion_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_sa_EncryptedAssertion(c, (struct zx_sa_EncryptedAssertion_s*)se);
  for (se = &x->sa11_Assertion->gg;
       se && se->g.tok == zx_sa11_Assertion_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_sa11_Assertion(c, (struct zx_sa11_Assertion_s*)se);
  for (se = &x->ff12_Assertion->gg;
       se && se->g.tok == zx_ff12_Assertion_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_ff12_Assertion(c, (struct zx_ff12_Assertion_s*)se);
  for (se = &x->Attribute->gg;
       se && se->g.tok == zx_sa_Attribute_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_sa_Attribute(c, (struct zx_sa_Attribute_s*)se);
  for (se = &x->EncryptedAttribute->gg;
       se && se->g.tok == zx_sa_EncryptedAttribute_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_sa_EncryptedAttribute(c, (struct zx_sa_EncryptedAttribute_s*)se);
  for (se = &x->xac_Attribute->gg;
       se && se->g.tok == zx_xac_Attribute_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_xac_Attribute(c, (struct zx_xac_Attribute_s*)se);


  len += zx_len_so_common(c, &x->gg, &pop_seen);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "tas3:Credentials", len);
  return len;
}

/* FUNC(zx_ENC_SO_tas3_Credentials) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_tas3_Credentials(struct zx_ctx* c, struct zx_tas3_Credentials_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_attr_s* attr MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<tas3:Credentials");
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  if (x->actor || x->mustUnderstand)
    zx_add_xmlns_if_not_seen(c, zx_ns_tab+(zx_e_NS >> ZX_TOK_NS_SHIFT), &pop_seen);
  if (1)
    zx_add_xmlns_if_not_seen(c, zx_ns_tab+(zx_tas3_NS >> ZX_TOK_NS_SHIFT), &pop_seen);
  if (x->Id)
    zx_add_xmlns_if_not_seen(c, zx_ns_tab+(zx_wsu_NS >> ZX_TOK_NS_SHIFT), &pop_seen);

  zx_see_attr_ns(c, x->gg.attr, &pop_seen);
  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_so_enc(p, x->id, " id=\"", sizeof(" id=\"")-1);
  p = zx_attr_so_enc(p, x->usage, " usage=\"", sizeof(" usage=\"")-1);
  p = zx_attr_so_enc(p, x->Id, " wsu:Id=\"", sizeof(" wsu:Id=\"")-1);
  p = zx_attr_so_enc(p, x->actor, " e:actor=\"", sizeof(" e:actor=\"")-1);
  p = zx_attr_so_enc(p, x->mustUnderstand, " e:mustUnderstand=\"", sizeof(" e:mustUnderstand=\"")-1);

  for (attr = x->gg.attr; attr; attr = (struct zx_attr_s*)attr->g.n)
    if (attr->g.tok == ZX_TOK_ATTR_NOT_FOUND)
      p = zx_attr_wo_enc(p, attr);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = &x->Assertion->gg;
       se && se->g.tok == zx_sa_Assertion_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_sa_Assertion(c, (struct zx_sa_Assertion_s*)se, p);
  for (se = &x->EncryptedAssertion->gg;
       se && se->g.tok == zx_sa_EncryptedAssertion_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_sa_EncryptedAssertion(c, (struct zx_sa_EncryptedAssertion_s*)se, p);
  for (se = &x->sa11_Assertion->gg;
       se && se->g.tok == zx_sa11_Assertion_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_sa11_Assertion(c, (struct zx_sa11_Assertion_s*)se, p);
  for (se = &x->ff12_Assertion->gg;
       se && se->g.tok == zx_ff12_Assertion_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_ff12_Assertion(c, (struct zx_ff12_Assertion_s*)se, p);
  for (se = &x->Attribute->gg;
       se && se->g.tok == zx_sa_Attribute_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_sa_Attribute(c, (struct zx_sa_Attribute_s*)se, p);
  for (se = &x->EncryptedAttribute->gg;
       se && se->g.tok == zx_sa_EncryptedAttribute_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_sa_EncryptedAttribute(c, (struct zx_sa_EncryptedAttribute_s*)se, p);
  for (se = &x->xac_Attribute->gg;
       se && se->g.tok == zx_xac_Attribute_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_xac_Attribute(c, (struct zx_xac_Attribute_s*)se, p);

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</tas3:Credentials>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "tas3:Credentials", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_tas3_Credentials) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_tas3_Credentials(struct zx_ctx* c, struct zx_tas3_Credentials_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));      /* *** do we really need to make a copy? Do we still keep list of aliases? */
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_tas3_Credentials(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_tas3_Credentials(c, x, buf ), buf, len);
}
#endif




#if 0

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

#define EL_NAME   tas3_ESLApply
#define EL_STRUCT zx_tas3_ESLApply_s
#define EL_NS     tas3
#define EL_TAG    ESLApply

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

/* FUNC(zx_LEN_SO_tas3_ESLApply) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_tas3_ESLApply(struct zx_ctx* c, struct zx_tas3_ESLApply_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<tas3:ESLApply")-1 + 1 + sizeof("</tas3:ESLApply>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  if (1)
    len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+(zx_tas3_NS >> ZX_TOK_NS_SHIFT), &pop_seen);


#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = &x->ESLRef->gg;
       se && se->g.tok == zx_tas3_ESLRef_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_tas3_ESLRef(c, (struct zx_tas3_ESLRef_s*)se);
  for (se = &x->Obligation->gg;
       se && se->g.tok == zx_xa_Obligation_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_xa_Obligation(c, (struct zx_xa_Obligation_s*)se);


  len += zx_len_so_common(c, &x->gg, &pop_seen);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "tas3:ESLApply", len);
  return len;
}

/* FUNC(zx_ENC_SO_tas3_ESLApply) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_tas3_ESLApply(struct zx_ctx* c, struct zx_tas3_ESLApply_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_attr_s* attr MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<tas3:ESLApply");
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  if (1)
    zx_add_xmlns_if_not_seen(c, zx_ns_tab+(zx_tas3_NS >> ZX_TOK_NS_SHIFT), &pop_seen);

  zx_see_attr_ns(c, x->gg.attr, &pop_seen);
  p = zx_enc_seen(p, pop_seen); 

  for (attr = x->gg.attr; attr; attr = (struct zx_attr_s*)attr->g.n)
    if (attr->g.tok == ZX_TOK_ATTR_NOT_FOUND)
      p = zx_attr_wo_enc(p, attr);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = &x->ESLRef->gg;
       se && se->g.tok == zx_tas3_ESLRef_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_tas3_ESLRef(c, (struct zx_tas3_ESLRef_s*)se, p);
  for (se = &x->Obligation->gg;
       se && se->g.tok == zx_xa_Obligation_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_xa_Obligation(c, (struct zx_xa_Obligation_s*)se, p);

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</tas3:ESLApply>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "tas3:ESLApply", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_tas3_ESLApply) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_tas3_ESLApply(struct zx_ctx* c, struct zx_tas3_ESLApply_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));      /* *** do we really need to make a copy? Do we still keep list of aliases? */
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_tas3_ESLApply(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_tas3_ESLApply(c, x, buf ), buf, len);
}
#endif




#if 0

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

#define EL_NAME   tas3_ESLPolicies
#define EL_STRUCT zx_tas3_ESLPolicies_s
#define EL_NS     tas3
#define EL_TAG    ESLPolicies

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

/* FUNC(zx_LEN_SO_tas3_ESLPolicies) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_tas3_ESLPolicies(struct zx_ctx* c, struct zx_tas3_ESLPolicies_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<tas3:ESLPolicies")-1 + 1 + sizeof("</tas3:ESLPolicies>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  if (x->actor || x->mustUnderstand)
    len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+(zx_e_NS >> ZX_TOK_NS_SHIFT), &pop_seen);
  if (1)
    len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+(zx_tas3_NS >> ZX_TOK_NS_SHIFT), &pop_seen);
  if (x->Id)
    len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+(zx_wsu_NS >> ZX_TOK_NS_SHIFT), &pop_seen);

  len += zx_attr_so_len(c, x->id, sizeof("id")-1, &pop_seen);
  len += zx_attr_so_len(c, x->usage, sizeof("usage")-1, &pop_seen);
  len += zx_attr_so_len(c, x->Id, sizeof("wsu:Id")-1, &pop_seen);
  len += zx_attr_so_len(c, x->actor, sizeof("e:actor")-1, &pop_seen);
  len += zx_attr_so_len(c, x->mustUnderstand, sizeof("e:mustUnderstand")-1, &pop_seen);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = &x->ESLApply->gg;
       se && se->g.tok == zx_tas3_ESLApply_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_tas3_ESLApply(c, (struct zx_tas3_ESLApply_s*)se);


  len += zx_len_so_common(c, &x->gg, &pop_seen);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "tas3:ESLPolicies", len);
  return len;
}

/* FUNC(zx_ENC_SO_tas3_ESLPolicies) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_tas3_ESLPolicies(struct zx_ctx* c, struct zx_tas3_ESLPolicies_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_attr_s* attr MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<tas3:ESLPolicies");
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  if (x->actor || x->mustUnderstand)
    zx_add_xmlns_if_not_seen(c, zx_ns_tab+(zx_e_NS >> ZX_TOK_NS_SHIFT), &pop_seen);
  if (1)
    zx_add_xmlns_if_not_seen(c, zx_ns_tab+(zx_tas3_NS >> ZX_TOK_NS_SHIFT), &pop_seen);
  if (x->Id)
    zx_add_xmlns_if_not_seen(c, zx_ns_tab+(zx_wsu_NS >> ZX_TOK_NS_SHIFT), &pop_seen);

  zx_see_attr_ns(c, x->gg.attr, &pop_seen);
  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_so_enc(p, x->id, " id=\"", sizeof(" id=\"")-1);
  p = zx_attr_so_enc(p, x->usage, " usage=\"", sizeof(" usage=\"")-1);
  p = zx_attr_so_enc(p, x->Id, " wsu:Id=\"", sizeof(" wsu:Id=\"")-1);
  p = zx_attr_so_enc(p, x->actor, " e:actor=\"", sizeof(" e:actor=\"")-1);
  p = zx_attr_so_enc(p, x->mustUnderstand, " e:mustUnderstand=\"", sizeof(" e:mustUnderstand=\"")-1);

  for (attr = x->gg.attr; attr; attr = (struct zx_attr_s*)attr->g.n)
    if (attr->g.tok == ZX_TOK_ATTR_NOT_FOUND)
      p = zx_attr_wo_enc(p, attr);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = &x->ESLApply->gg;
       se && se->g.tok == zx_tas3_ESLApply_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_tas3_ESLApply(c, (struct zx_tas3_ESLApply_s*)se, p);

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</tas3:ESLPolicies>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "tas3:ESLPolicies", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_tas3_ESLPolicies) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_tas3_ESLPolicies(struct zx_ctx* c, struct zx_tas3_ESLPolicies_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));      /* *** do we really need to make a copy? Do we still keep list of aliases? */
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_tas3_ESLPolicies(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_tas3_ESLPolicies(c, x, buf ), buf, len);
}
#endif




#if 0

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

#define EL_NAME   tas3_ESLRef
#define EL_STRUCT zx_tas3_ESLRef_s
#define EL_NS     tas3
#define EL_TAG    ESLRef

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

/* FUNC(zx_LEN_SO_tas3_ESLRef) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_tas3_ESLRef(struct zx_ctx* c, struct zx_tas3_ESLRef_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<tas3:ESLRef")-1 + 1 + sizeof("</tas3:ESLRef>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  if (1)
    len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+(zx_tas3_NS >> ZX_TOK_NS_SHIFT), &pop_seen);

  len += zx_attr_so_len(c, x->ref, sizeof("ref")-1, &pop_seen);
  len += zx_attr_so_len(c, x->xpath, sizeof("xpath")-1, &pop_seen);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, &x->gg, &pop_seen);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "tas3:ESLRef", len);
  return len;
}

/* FUNC(zx_ENC_SO_tas3_ESLRef) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_tas3_ESLRef(struct zx_ctx* c, struct zx_tas3_ESLRef_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_attr_s* attr MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<tas3:ESLRef");
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  if (1)
    zx_add_xmlns_if_not_seen(c, zx_ns_tab+(zx_tas3_NS >> ZX_TOK_NS_SHIFT), &pop_seen);

  zx_see_attr_ns(c, x->gg.attr, &pop_seen);
  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_so_enc(p, x->ref, " ref=\"", sizeof(" ref=\"")-1);
  p = zx_attr_so_enc(p, x->xpath, " xpath=\"", sizeof(" xpath=\"")-1);

  for (attr = x->gg.attr; attr; attr = (struct zx_attr_s*)attr->g.n)
    if (attr->g.tok == ZX_TOK_ATTR_NOT_FOUND)
      p = zx_attr_wo_enc(p, attr);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</tas3:ESLRef>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "tas3:ESLRef", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_tas3_ESLRef) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_tas3_ESLRef(struct zx_ctx* c, struct zx_tas3_ESLRef_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));      /* *** do we really need to make a copy? Do we still keep list of aliases? */
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_tas3_ESLRef(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_tas3_ESLRef(c, x, buf ), buf, len);
}
#endif




#if 0

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

#define EL_NAME   tas3_Status
#define EL_STRUCT zx_tas3_Status_s
#define EL_NS     tas3
#define EL_TAG    Status

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

/* FUNC(zx_LEN_SO_tas3_Status) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_tas3_Status(struct zx_ctx* c, struct zx_tas3_Status_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<tas3:Status")-1 + 1 + sizeof("</tas3:Status>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  if (x->actor || x->mustUnderstand)
    len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+(zx_e_NS >> ZX_TOK_NS_SHIFT), &pop_seen);
  if (1)
    len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+(zx_tas3_NS >> ZX_TOK_NS_SHIFT), &pop_seen);
  if (x->Id)
    len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+(zx_wsu_NS >> ZX_TOK_NS_SHIFT), &pop_seen);

  len += zx_attr_so_len(c, x->code, sizeof("code")-1, &pop_seen);
  len += zx_attr_so_len(c, x->comment, sizeof("comment")-1, &pop_seen);
  len += zx_attr_so_len(c, x->ctlpt, sizeof("ctlpt")-1, &pop_seen);
  len += zx_attr_so_len(c, x->id, sizeof("id")-1, &pop_seen);
  len += zx_attr_so_len(c, x->ref, sizeof("ref")-1, &pop_seen);
  len += zx_attr_so_len(c, x->Id, sizeof("wsu:Id")-1, &pop_seen);
  len += zx_attr_so_len(c, x->actor, sizeof("e:actor")-1, &pop_seen);
  len += zx_attr_so_len(c, x->mustUnderstand, sizeof("e:mustUnderstand")-1, &pop_seen);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = &x->Status->gg;
       se && se->g.tok == zx_lu_Status_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_lu_Status(c, (struct zx_lu_Status_s*)se);


  len += zx_len_so_common(c, &x->gg, &pop_seen);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "tas3:Status", len);
  return len;
}

/* FUNC(zx_ENC_SO_tas3_Status) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_tas3_Status(struct zx_ctx* c, struct zx_tas3_Status_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_attr_s* attr MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<tas3:Status");
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  if (x->actor || x->mustUnderstand)
    zx_add_xmlns_if_not_seen(c, zx_ns_tab+(zx_e_NS >> ZX_TOK_NS_SHIFT), &pop_seen);
  if (1)
    zx_add_xmlns_if_not_seen(c, zx_ns_tab+(zx_tas3_NS >> ZX_TOK_NS_SHIFT), &pop_seen);
  if (x->Id)
    zx_add_xmlns_if_not_seen(c, zx_ns_tab+(zx_wsu_NS >> ZX_TOK_NS_SHIFT), &pop_seen);

  zx_see_attr_ns(c, x->gg.attr, &pop_seen);
  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_so_enc(p, x->code, " code=\"", sizeof(" code=\"")-1);
  p = zx_attr_so_enc(p, x->comment, " comment=\"", sizeof(" comment=\"")-1);
  p = zx_attr_so_enc(p, x->ctlpt, " ctlpt=\"", sizeof(" ctlpt=\"")-1);
  p = zx_attr_so_enc(p, x->id, " id=\"", sizeof(" id=\"")-1);
  p = zx_attr_so_enc(p, x->ref, " ref=\"", sizeof(" ref=\"")-1);
  p = zx_attr_so_enc(p, x->Id, " wsu:Id=\"", sizeof(" wsu:Id=\"")-1);
  p = zx_attr_so_enc(p, x->actor, " e:actor=\"", sizeof(" e:actor=\"")-1);
  p = zx_attr_so_enc(p, x->mustUnderstand, " e:mustUnderstand=\"", sizeof(" e:mustUnderstand=\"")-1);

  for (attr = x->gg.attr; attr; attr = (struct zx_attr_s*)attr->g.n)
    if (attr->g.tok == ZX_TOK_ATTR_NOT_FOUND)
      p = zx_attr_wo_enc(p, attr);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = &x->Status->gg;
       se && se->g.tok == zx_lu_Status_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_lu_Status(c, (struct zx_lu_Status_s*)se, p);

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</tas3:Status>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "tas3:Status", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_tas3_Status) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_tas3_Status(struct zx_ctx* c, struct zx_tas3_Status_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));      /* *** do we really need to make a copy? Do we still keep list of aliases? */
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_tas3_Status(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_tas3_Status(c, x, buf ), buf, len);
}
#endif




#if 0

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

#define EL_NAME   tas3_Trust
#define EL_STRUCT zx_tas3_Trust_s
#define EL_NS     tas3
#define EL_TAG    Trust

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

/* FUNC(zx_LEN_SO_tas3_Trust) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_tas3_Trust(struct zx_ctx* c, struct zx_tas3_Trust_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<tas3:Trust")-1 + 1 + sizeof("</tas3:Trust>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  if (1)
    len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+(zx_tas3_NS >> ZX_TOK_NS_SHIFT), &pop_seen);

  len += zx_attr_so_len(c, x->vers, sizeof("vers")-1, &pop_seen);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  
  for (se = &x->TrustRanking->gg;
       se && se->g.tok == zx_tas3_TrustRanking_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    len += zx_LEN_SO_tas3_TrustRanking(c, (struct zx_tas3_TrustRanking_s*)se);


  len += zx_len_so_common(c, &x->gg, &pop_seen);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "tas3:Trust", len);
  return len;
}

/* FUNC(zx_ENC_SO_tas3_Trust) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_tas3_Trust(struct zx_ctx* c, struct zx_tas3_Trust_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_attr_s* attr MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<tas3:Trust");
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  if (1)
    zx_add_xmlns_if_not_seen(c, zx_ns_tab+(zx_tas3_NS >> ZX_TOK_NS_SHIFT), &pop_seen);

  zx_see_attr_ns(c, x->gg.attr, &pop_seen);
  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_so_enc(p, x->vers, " vers=\"", sizeof(" vers=\"")-1);

  for (attr = x->gg.attr; attr; attr = (struct zx_attr_s*)attr->g.n)
    if (attr->g.tok == ZX_TOK_ATTR_NOT_FOUND)
      p = zx_attr_wo_enc(p, attr);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  
  for (se = &x->TrustRanking->gg;
       se && se->g.tok == zx_tas3_TrustRanking_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    p = zx_ENC_SO_tas3_TrustRanking(c, (struct zx_tas3_TrustRanking_s*)se, p);

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</tas3:Trust>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "tas3:Trust", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_tas3_Trust) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_tas3_Trust(struct zx_ctx* c, struct zx_tas3_Trust_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));      /* *** do we really need to make a copy? Do we still keep list of aliases? */
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_tas3_Trust(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_tas3_Trust(c, x, buf ), buf, len);
}
#endif




#if 0

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

#define EL_NAME   tas3_TrustRanking
#define EL_STRUCT zx_tas3_TrustRanking_s
#define EL_NS     tas3
#define EL_TAG    TrustRanking

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

/* FUNC(zx_LEN_SO_tas3_TrustRanking) */

/* Compute length of an element (and its subelements). The XML attributes
 * and elements are processed in schema order. */

/* Called by: */
int zx_LEN_SO_tas3_TrustRanking(struct zx_ctx* c, struct zx_tas3_TrustRanking_s* x )
{
  struct zx_ns_s* pop_seen = 0;
  struct zx_elem_s* se MAYBE_UNUSED;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  int len = sizeof("<tas3:TrustRanking")-1 + 1 + sizeof("</tas3:TrustRanking>")-1;
  if (c->inc_ns_len)
    len += zx_len_inc_ns(c, &pop_seen);
  if (1)
    len += zx_len_xmlns_if_not_seen(c, zx_ns_tab+(zx_tas3_NS >> ZX_TOK_NS_SHIFT), &pop_seen);

  len += zx_attr_so_len(c, x->metric, sizeof("metric")-1, &pop_seen);
  len += zx_attr_so_len(c, x->val, sizeof("val")-1, &pop_seen);

#else
  /* root node has no begin tag */
  int len = 0;
#endif
  


  len += zx_len_so_common(c, &x->gg, &pop_seen);
  zx_pop_seen(pop_seen);
  ENC_LEN_DEBUG(x, "tas3:TrustRanking", len);
  return len;
}

/* FUNC(zx_ENC_SO_tas3_TrustRanking) */

/* Render element into string. The XML attributes and elements are
 * processed in schema order. This is what you generally want for
 * rendering new data structure to a string. The wo pointers are not used. */

/* Called by: */
char* zx_ENC_SO_tas3_TrustRanking(struct zx_ctx* c, struct zx_tas3_TrustRanking_s* x, char* p )
{
  struct zx_elem_s* se MAYBE_UNUSED;
  struct zx_attr_s* attr MAYBE_UNUSED;
  struct zx_ns_s* pop_seen = 0;
  ENC_LEN_DEBUG_BASE;
#if 1 /* NORMALMODE */
  /* *** in simple_elem case should output ns prefix from ns node. */
  ZX_OUT_TAG(p, "<tas3:TrustRanking");
  if (c->inc_ns)
    zx_add_inc_ns(c, &pop_seen);
  if (1)
    zx_add_xmlns_if_not_seen(c, zx_ns_tab+(zx_tas3_NS >> ZX_TOK_NS_SHIFT), &pop_seen);

  zx_see_attr_ns(c, x->gg.attr, &pop_seen);
  p = zx_enc_seen(p, pop_seen); 
  p = zx_attr_so_enc(p, x->metric, " metric=\"", sizeof(" metric=\"")-1);
  p = zx_attr_so_enc(p, x->val, " val=\"", sizeof(" val=\"")-1);

  for (attr = x->gg.attr; attr; attr = (struct zx_attr_s*)attr->g.n)
    if (attr->g.tok == ZX_TOK_ATTR_NOT_FOUND)
      p = zx_attr_wo_enc(p, attr);
  ZX_OUT_CH(p, '>');
#else
  /* root node has no begin tag */
#endif
  

  p = zx_enc_so_unknown_elems_and_content(c, p, &x->gg);
  
#if 1 /* NORMALMODE */
  ZX_OUT_CLOSE_TAG(p, "</tas3:TrustRanking>");
  zx_pop_seen(pop_seen);
#else
  /* root node has no end tag either */
#endif
  ENC_LEN_DEBUG(x, "tas3:TrustRanking", p-enc_base);
  return p;
}

/* FUNC(zx_EASY_ENC_SO_tas3_TrustRanking) */

/* Called by: */
struct zx_str* zx_EASY_ENC_SO_tas3_TrustRanking(struct zx_ctx* c, struct zx_tas3_TrustRanking_s* x )
{
  int len;
  char* buf;
  c->ns_tab = ZX_ALLOC(c, sizeof(zx_ns_tab));      /* *** do we really need to make a copy? Do we still keep list of aliases? */
  memcpy(c->ns_tab, zx_ns_tab, sizeof(zx_ns_tab));
  len = zx_LEN_SO_tas3_TrustRanking(c, x );
  buf = ZX_ALLOC(c, len+1);
  return zx_easy_enc_common(c, zx_ENC_SO_tas3_TrustRanking(c, x, buf ), buf, len);
}
#endif


/* EOF -- c/zx-tas3-enc.c */
