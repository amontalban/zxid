/* c/zx-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Code generation design Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for terms and conditions
 * of use. Some aspects of code generation were driven by schema
 * descriptions that were used as input and may be subject to their own copyright.
 * Code generation uses a template, whose copyright statement follows. */

/** getput-templ.c  -  Auxiliary functions template: cloning, freeing, walking data
 ** Copyright (c) 2006 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 ** Author: Sampo Kellomaki (sampo@iki.fi)
 ** This is confidential unpublished proprietary source code of the author.
 ** NO WARRANTY, not even implied warranties. Contains trade secrets.
 ** Distribution prohibited unless authorized in writing.
 ** Licensed under Apache License 2.0, see file COPYING.
 ** Id: getput-templ.c,v 1.8 2009-08-30 15:09:26 sampo Exp $
 **
 ** 30.5.2006, created, Sampo Kellomaki (sampo@iki.fi)
 ** 6.8.2006, factored from enc-templ.c to separate file --Sampo
 **
 ** N.B: wo=wire order (needed for exc-c14n), so=schema order
 ** Edit with care! xsd2sg.pl applies various substitutions to this file.
 **/

#include <memory.h>
#include "errmac.h"
#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_Assertion) */

int zx_root_NUM_Assertion(struct zx_root_s* x)
{
  struct zx_sa_Assertion_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Assertion; y; ++n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_Assertion) */

struct zx_sa_Assertion_s* zx_root_GET_Assertion(struct zx_root_s* x, int n)
{
  struct zx_sa_Assertion_s* y;
  if (!x) return 0;
  for (y = x->Assertion; n>=0 && y; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_Assertion) */

struct zx_sa_Assertion_s* zx_root_POP_Assertion(struct zx_root_s* x)
{
  struct zx_sa_Assertion_s* y;
  if (!x) return 0;
  y = x->Assertion;
  if (y)
    x->Assertion = (struct zx_sa_Assertion_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_Assertion) */

void zx_root_PUSH_Assertion(struct zx_root_s* x, struct zx_sa_Assertion_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Assertion->gg.g;
  x->Assertion = z;
}

/* FUNC(zx_root_REV_Assertion) */

void zx_root_REV_Assertion(struct zx_root_s* x)
{
  struct zx_sa_Assertion_s* nxt;
  struct zx_sa_Assertion_s* y;
  if (!x) return;
  y = x->Assertion;
  if (!y) return;
  x->Assertion = 0;
  while (y) {
    nxt = (struct zx_sa_Assertion_s*)y->gg.g.n;
    y->gg.g.n = &x->Assertion->gg.g;
    x->Assertion = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_Assertion) */

void zx_root_PUT_Assertion(struct zx_root_s* x, int n, struct zx_sa_Assertion_s* z)
{
  struct zx_sa_Assertion_s* y;
  if (!x || !z) return;
  y = x->Assertion;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Assertion = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_Assertion) */

void zx_root_ADD_Assertion(struct zx_root_s* x, int n, struct zx_sa_Assertion_s* z)
{
  struct zx_sa_Assertion_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Assertion->gg.g;
    x->Assertion = z;
    return;
  case -1:
    y = x->Assertion;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Assertion; n > 1 && y; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_Assertion) */

void zx_root_DEL_Assertion(struct zx_root_s* x, int n)
{
  struct zx_sa_Assertion_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Assertion = (struct zx_sa_Assertion_s*)x->Assertion->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_Assertion_s*)x->Assertion;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Assertion; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_EncryptedAssertion) */

int zx_root_NUM_EncryptedAssertion(struct zx_root_s* x)
{
  struct zx_sa_EncryptedAssertion_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedAssertion; y; ++n, y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_EncryptedAssertion) */

struct zx_sa_EncryptedAssertion_s* zx_root_GET_EncryptedAssertion(struct zx_root_s* x, int n)
{
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x) return 0;
  for (y = x->EncryptedAssertion; n>=0 && y; --n, y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_EncryptedAssertion) */

struct zx_sa_EncryptedAssertion_s* zx_root_POP_EncryptedAssertion(struct zx_root_s* x)
{
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x) return 0;
  y = x->EncryptedAssertion;
  if (y)
    x->EncryptedAssertion = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_EncryptedAssertion) */

void zx_root_PUSH_EncryptedAssertion(struct zx_root_s* x, struct zx_sa_EncryptedAssertion_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedAssertion->gg.g;
  x->EncryptedAssertion = z;
}

/* FUNC(zx_root_REV_EncryptedAssertion) */

void zx_root_REV_EncryptedAssertion(struct zx_root_s* x)
{
  struct zx_sa_EncryptedAssertion_s* nxt;
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x) return;
  y = x->EncryptedAssertion;
  if (!y) return;
  x->EncryptedAssertion = 0;
  while (y) {
    nxt = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedAssertion->gg.g;
    x->EncryptedAssertion = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_EncryptedAssertion) */

void zx_root_PUT_EncryptedAssertion(struct zx_root_s* x, int n, struct zx_sa_EncryptedAssertion_s* z)
{
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x || !z) return;
  y = x->EncryptedAssertion;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedAssertion = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_EncryptedAssertion) */

void zx_root_ADD_EncryptedAssertion(struct zx_root_s* x, int n, struct zx_sa_EncryptedAssertion_s* z)
{
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedAssertion->gg.g;
    x->EncryptedAssertion = z;
    return;
  case -1:
    y = x->EncryptedAssertion;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedAssertion; n > 1 && y; --n, y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_EncryptedAssertion) */

void zx_root_DEL_EncryptedAssertion(struct zx_root_s* x, int n)
{
  struct zx_sa_EncryptedAssertion_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedAssertion = (struct zx_sa_EncryptedAssertion_s*)x->EncryptedAssertion->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_EncryptedAssertion_s*)x->EncryptedAssertion;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedAssertion; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedAssertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_NameID) */

int zx_root_NUM_NameID(struct zx_root_s* x)
{
  struct zx_sa_NameID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameID; y; ++n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_NameID) */

struct zx_sa_NameID_s* zx_root_GET_NameID(struct zx_root_s* x, int n)
{
  struct zx_sa_NameID_s* y;
  if (!x) return 0;
  for (y = x->NameID; n>=0 && y; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_NameID) */

struct zx_sa_NameID_s* zx_root_POP_NameID(struct zx_root_s* x)
{
  struct zx_sa_NameID_s* y;
  if (!x) return 0;
  y = x->NameID;
  if (y)
    x->NameID = (struct zx_sa_NameID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_NameID) */

void zx_root_PUSH_NameID(struct zx_root_s* x, struct zx_sa_NameID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameID->gg.g;
  x->NameID = z;
}

/* FUNC(zx_root_REV_NameID) */

void zx_root_REV_NameID(struct zx_root_s* x)
{
  struct zx_sa_NameID_s* nxt;
  struct zx_sa_NameID_s* y;
  if (!x) return;
  y = x->NameID;
  if (!y) return;
  x->NameID = 0;
  while (y) {
    nxt = (struct zx_sa_NameID_s*)y->gg.g.n;
    y->gg.g.n = &x->NameID->gg.g;
    x->NameID = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_NameID) */

void zx_root_PUT_NameID(struct zx_root_s* x, int n, struct zx_sa_NameID_s* z)
{
  struct zx_sa_NameID_s* y;
  if (!x || !z) return;
  y = x->NameID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_NameID) */

void zx_root_ADD_NameID(struct zx_root_s* x, int n, struct zx_sa_NameID_s* z)
{
  struct zx_sa_NameID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameID->gg.g;
    x->NameID = z;
    return;
  case -1:
    y = x->NameID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameID; n > 1 && y; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_NameID) */

void zx_root_DEL_NameID(struct zx_root_s* x, int n)
{
  struct zx_sa_NameID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameID = (struct zx_sa_NameID_s*)x->NameID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_NameID_s*)x->NameID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_NameID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_EncryptedID) */

int zx_root_NUM_EncryptedID(struct zx_root_s* x)
{
  struct zx_sa_EncryptedID_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EncryptedID; y; ++n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_EncryptedID) */

struct zx_sa_EncryptedID_s* zx_root_GET_EncryptedID(struct zx_root_s* x, int n)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return 0;
  for (y = x->EncryptedID; n>=0 && y; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_EncryptedID) */

struct zx_sa_EncryptedID_s* zx_root_POP_EncryptedID(struct zx_root_s* x)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return 0;
  y = x->EncryptedID;
  if (y)
    x->EncryptedID = (struct zx_sa_EncryptedID_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_EncryptedID) */

void zx_root_PUSH_EncryptedID(struct zx_root_s* x, struct zx_sa_EncryptedID_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EncryptedID->gg.g;
  x->EncryptedID = z;
}

/* FUNC(zx_root_REV_EncryptedID) */

void zx_root_REV_EncryptedID(struct zx_root_s* x)
{
  struct zx_sa_EncryptedID_s* nxt;
  struct zx_sa_EncryptedID_s* y;
  if (!x) return;
  y = x->EncryptedID;
  if (!y) return;
  x->EncryptedID = 0;
  while (y) {
    nxt = (struct zx_sa_EncryptedID_s*)y->gg.g.n;
    y->gg.g.n = &x->EncryptedID->gg.g;
    x->EncryptedID = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_EncryptedID) */

void zx_root_PUT_EncryptedID(struct zx_root_s* x, int n, struct zx_sa_EncryptedID_s* z)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x || !z) return;
  y = x->EncryptedID;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EncryptedID = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_EncryptedID) */

void zx_root_ADD_EncryptedID(struct zx_root_s* x, int n, struct zx_sa_EncryptedID_s* z)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EncryptedID->gg.g;
    x->EncryptedID = z;
    return;
  case -1:
    y = x->EncryptedID;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedID; n > 1 && y; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_EncryptedID) */

void zx_root_DEL_EncryptedID(struct zx_root_s* x, int n)
{
  struct zx_sa_EncryptedID_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EncryptedID = (struct zx_sa_EncryptedID_s*)x->EncryptedID->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa_EncryptedID_s*)x->EncryptedID;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EncryptedID; n > 1 && y->gg.g.n; --n, y = (struct zx_sa_EncryptedID_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_NewID) */

int zx_root_NUM_NewID(struct zx_root_s* x)
{
  struct zx_elem_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NewID; y; ++n, y = (struct zx_elem_s*)y->g.n) ;
  return n;
}

/* FUNC(zx_root_GET_NewID) */

struct zx_elem_s* zx_root_GET_NewID(struct zx_root_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  for (y = x->NewID; n>=0 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
  return y;
}

/* FUNC(zx_root_POP_NewID) */

struct zx_elem_s* zx_root_POP_NewID(struct zx_root_s* x)
{
  struct zx_elem_s* y;
  if (!x) return 0;
  y = x->NewID;
  if (y)
    x->NewID = (struct zx_elem_s*)y->g.n;
  return y;
}

/* FUNC(zx_root_PUSH_NewID) */

void zx_root_PUSH_NewID(struct zx_root_s* x, struct zx_elem_s* z)
{
  if (!x || !z) return;
  z->g.n = &x->NewID->g;
  x->NewID = z;
}

/* FUNC(zx_root_REV_NewID) */

void zx_root_REV_NewID(struct zx_root_s* x)
{
  struct zx_elem_s* nxt;
  struct zx_elem_s* y;
  if (!x) return;
  y = x->NewID;
  if (!y) return;
  x->NewID = 0;
  while (y) {
    nxt = (struct zx_elem_s*)y->g.n;
    y->g.n = &x->NewID->g;
    x->NewID = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_NewID) */

void zx_root_PUT_NewID(struct zx_root_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  y = x->NewID;
  if (!y) return;
  switch (n) {
  case 0:
    z->g.n = y->g.n;
    x->NewID = z;
    return;
  default:
    for (; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
    z->g.n = y->g.n->n;
    y->g.n = &z->g;
  }
}

/* FUNC(zx_root_ADD_NewID) */

void zx_root_ADD_NewID(struct zx_root_s* x, int n, struct zx_elem_s* z)
{
  struct zx_elem_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->g.n = &x->NewID->g;
    x->NewID = z;
    return;
  case -1:
    y = x->NewID;
    if (!y) goto add_to_start;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NewID; n > 1 && y; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y) return;
  }
  z->g.n = y->g.n;
  y->g.n = &z->g;
}

/* FUNC(zx_root_DEL_NewID) */

void zx_root_DEL_NewID(struct zx_root_s* x, int n)
{
  struct zx_elem_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NewID = (struct zx_elem_s*)x->NewID->g.n;
    return;
  case -1:
    y = (struct zx_elem_s*)x->NewID;
    if (!y) return;
    for (; y->g.n; y = (struct zx_elem_s*)y->g.n) ;
    break;
  default:
    for (y = x->NewID; n > 1 && y->g.n; --n, y = (struct zx_elem_s*)y->g.n) ;
    if (!y->g.n) return;
  }
  y->g.n = y->g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_AuthnRequest) */

int zx_root_NUM_AuthnRequest(struct zx_root_s* x)
{
  struct zx_sp_AuthnRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnRequest; y; ++n, y = (struct zx_sp_AuthnRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_AuthnRequest) */

struct zx_sp_AuthnRequest_s* zx_root_GET_AuthnRequest(struct zx_root_s* x, int n)
{
  struct zx_sp_AuthnRequest_s* y;
  if (!x) return 0;
  for (y = x->AuthnRequest; n>=0 && y; --n, y = (struct zx_sp_AuthnRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_AuthnRequest) */

struct zx_sp_AuthnRequest_s* zx_root_POP_AuthnRequest(struct zx_root_s* x)
{
  struct zx_sp_AuthnRequest_s* y;
  if (!x) return 0;
  y = x->AuthnRequest;
  if (y)
    x->AuthnRequest = (struct zx_sp_AuthnRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_AuthnRequest) */

void zx_root_PUSH_AuthnRequest(struct zx_root_s* x, struct zx_sp_AuthnRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthnRequest->gg.g;
  x->AuthnRequest = z;
}

/* FUNC(zx_root_REV_AuthnRequest) */

void zx_root_REV_AuthnRequest(struct zx_root_s* x)
{
  struct zx_sp_AuthnRequest_s* nxt;
  struct zx_sp_AuthnRequest_s* y;
  if (!x) return;
  y = x->AuthnRequest;
  if (!y) return;
  x->AuthnRequest = 0;
  while (y) {
    nxt = (struct zx_sp_AuthnRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->AuthnRequest->gg.g;
    x->AuthnRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_AuthnRequest) */

void zx_root_PUT_AuthnRequest(struct zx_root_s* x, int n, struct zx_sp_AuthnRequest_s* z)
{
  struct zx_sp_AuthnRequest_s* y;
  if (!x || !z) return;
  y = x->AuthnRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AuthnRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AuthnRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_AuthnRequest) */

void zx_root_ADD_AuthnRequest(struct zx_root_s* x, int n, struct zx_sp_AuthnRequest_s* z)
{
  struct zx_sp_AuthnRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AuthnRequest->gg.g;
    x->AuthnRequest = z;
    return;
  case -1:
    y = x->AuthnRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_AuthnRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnRequest; n > 1 && y; --n, y = (struct zx_sp_AuthnRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_AuthnRequest) */

void zx_root_DEL_AuthnRequest(struct zx_root_s* x, int n)
{
  struct zx_sp_AuthnRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthnRequest = (struct zx_sp_AuthnRequest_s*)x->AuthnRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_AuthnRequest_s*)x->AuthnRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_AuthnRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_AuthnRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_Response) */

int zx_root_NUM_Response(struct zx_root_s* x)
{
  struct zx_sp_Response_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Response; y; ++n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_Response) */

struct zx_sp_Response_s* zx_root_GET_Response(struct zx_root_s* x, int n)
{
  struct zx_sp_Response_s* y;
  if (!x) return 0;
  for (y = x->Response; n>=0 && y; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_Response) */

struct zx_sp_Response_s* zx_root_POP_Response(struct zx_root_s* x)
{
  struct zx_sp_Response_s* y;
  if (!x) return 0;
  y = x->Response;
  if (y)
    x->Response = (struct zx_sp_Response_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_Response) */

void zx_root_PUSH_Response(struct zx_root_s* x, struct zx_sp_Response_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Response->gg.g;
  x->Response = z;
}

/* FUNC(zx_root_REV_Response) */

void zx_root_REV_Response(struct zx_root_s* x)
{
  struct zx_sp_Response_s* nxt;
  struct zx_sp_Response_s* y;
  if (!x) return;
  y = x->Response;
  if (!y) return;
  x->Response = 0;
  while (y) {
    nxt = (struct zx_sp_Response_s*)y->gg.g.n;
    y->gg.g.n = &x->Response->gg.g;
    x->Response = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_Response) */

void zx_root_PUT_Response(struct zx_root_s* x, int n, struct zx_sp_Response_s* z)
{
  struct zx_sp_Response_s* y;
  if (!x || !z) return;
  y = x->Response;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Response = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_Response) */

void zx_root_ADD_Response(struct zx_root_s* x, int n, struct zx_sp_Response_s* z)
{
  struct zx_sp_Response_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Response->gg.g;
    x->Response = z;
    return;
  case -1:
    y = x->Response;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Response; n > 1 && y; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_Response) */

void zx_root_DEL_Response(struct zx_root_s* x, int n)
{
  struct zx_sp_Response_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Response = (struct zx_sp_Response_s*)x->Response->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_Response_s*)x->Response;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Response; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_LogoutRequest) */

int zx_root_NUM_LogoutRequest(struct zx_root_s* x)
{
  struct zx_sp_LogoutRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->LogoutRequest; y; ++n, y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_LogoutRequest) */

struct zx_sp_LogoutRequest_s* zx_root_GET_LogoutRequest(struct zx_root_s* x, int n)
{
  struct zx_sp_LogoutRequest_s* y;
  if (!x) return 0;
  for (y = x->LogoutRequest; n>=0 && y; --n, y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_LogoutRequest) */

struct zx_sp_LogoutRequest_s* zx_root_POP_LogoutRequest(struct zx_root_s* x)
{
  struct zx_sp_LogoutRequest_s* y;
  if (!x) return 0;
  y = x->LogoutRequest;
  if (y)
    x->LogoutRequest = (struct zx_sp_LogoutRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_LogoutRequest) */

void zx_root_PUSH_LogoutRequest(struct zx_root_s* x, struct zx_sp_LogoutRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->LogoutRequest->gg.g;
  x->LogoutRequest = z;
}

/* FUNC(zx_root_REV_LogoutRequest) */

void zx_root_REV_LogoutRequest(struct zx_root_s* x)
{
  struct zx_sp_LogoutRequest_s* nxt;
  struct zx_sp_LogoutRequest_s* y;
  if (!x) return;
  y = x->LogoutRequest;
  if (!y) return;
  x->LogoutRequest = 0;
  while (y) {
    nxt = (struct zx_sp_LogoutRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->LogoutRequest->gg.g;
    x->LogoutRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_LogoutRequest) */

void zx_root_PUT_LogoutRequest(struct zx_root_s* x, int n, struct zx_sp_LogoutRequest_s* z)
{
  struct zx_sp_LogoutRequest_s* y;
  if (!x || !z) return;
  y = x->LogoutRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->LogoutRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_LogoutRequest) */

void zx_root_ADD_LogoutRequest(struct zx_root_s* x, int n, struct zx_sp_LogoutRequest_s* z)
{
  struct zx_sp_LogoutRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->LogoutRequest->gg.g;
    x->LogoutRequest = z;
    return;
  case -1:
    y = x->LogoutRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LogoutRequest; n > 1 && y; --n, y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_LogoutRequest) */

void zx_root_DEL_LogoutRequest(struct zx_root_s* x, int n)
{
  struct zx_sp_LogoutRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->LogoutRequest = (struct zx_sp_LogoutRequest_s*)x->LogoutRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_LogoutRequest_s*)x->LogoutRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LogoutRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_LogoutRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_LogoutResponse) */

int zx_root_NUM_LogoutResponse(struct zx_root_s* x)
{
  struct zx_sp_LogoutResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->LogoutResponse; y; ++n, y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_LogoutResponse) */

struct zx_sp_LogoutResponse_s* zx_root_GET_LogoutResponse(struct zx_root_s* x, int n)
{
  struct zx_sp_LogoutResponse_s* y;
  if (!x) return 0;
  for (y = x->LogoutResponse; n>=0 && y; --n, y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_LogoutResponse) */

struct zx_sp_LogoutResponse_s* zx_root_POP_LogoutResponse(struct zx_root_s* x)
{
  struct zx_sp_LogoutResponse_s* y;
  if (!x) return 0;
  y = x->LogoutResponse;
  if (y)
    x->LogoutResponse = (struct zx_sp_LogoutResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_LogoutResponse) */

void zx_root_PUSH_LogoutResponse(struct zx_root_s* x, struct zx_sp_LogoutResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->LogoutResponse->gg.g;
  x->LogoutResponse = z;
}

/* FUNC(zx_root_REV_LogoutResponse) */

void zx_root_REV_LogoutResponse(struct zx_root_s* x)
{
  struct zx_sp_LogoutResponse_s* nxt;
  struct zx_sp_LogoutResponse_s* y;
  if (!x) return;
  y = x->LogoutResponse;
  if (!y) return;
  x->LogoutResponse = 0;
  while (y) {
    nxt = (struct zx_sp_LogoutResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->LogoutResponse->gg.g;
    x->LogoutResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_LogoutResponse) */

void zx_root_PUT_LogoutResponse(struct zx_root_s* x, int n, struct zx_sp_LogoutResponse_s* z)
{
  struct zx_sp_LogoutResponse_s* y;
  if (!x || !z) return;
  y = x->LogoutResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->LogoutResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_LogoutResponse) */

void zx_root_ADD_LogoutResponse(struct zx_root_s* x, int n, struct zx_sp_LogoutResponse_s* z)
{
  struct zx_sp_LogoutResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->LogoutResponse->gg.g;
    x->LogoutResponse = z;
    return;
  case -1:
    y = x->LogoutResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LogoutResponse; n > 1 && y; --n, y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_LogoutResponse) */

void zx_root_DEL_LogoutResponse(struct zx_root_s* x, int n)
{
  struct zx_sp_LogoutResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->LogoutResponse = (struct zx_sp_LogoutResponse_s*)x->LogoutResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_LogoutResponse_s*)x->LogoutResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->LogoutResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_LogoutResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_ManageNameIDRequest) */

int zx_root_NUM_ManageNameIDRequest(struct zx_root_s* x)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ManageNameIDRequest; y; ++n, y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_ManageNameIDRequest) */

struct zx_sp_ManageNameIDRequest_s* zx_root_GET_ManageNameIDRequest(struct zx_root_s* x, int n)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x) return 0;
  for (y = x->ManageNameIDRequest; n>=0 && y; --n, y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_ManageNameIDRequest) */

struct zx_sp_ManageNameIDRequest_s* zx_root_POP_ManageNameIDRequest(struct zx_root_s* x)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x) return 0;
  y = x->ManageNameIDRequest;
  if (y)
    x->ManageNameIDRequest = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_ManageNameIDRequest) */

void zx_root_PUSH_ManageNameIDRequest(struct zx_root_s* x, struct zx_sp_ManageNameIDRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ManageNameIDRequest->gg.g;
  x->ManageNameIDRequest = z;
}

/* FUNC(zx_root_REV_ManageNameIDRequest) */

void zx_root_REV_ManageNameIDRequest(struct zx_root_s* x)
{
  struct zx_sp_ManageNameIDRequest_s* nxt;
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x) return;
  y = x->ManageNameIDRequest;
  if (!y) return;
  x->ManageNameIDRequest = 0;
  while (y) {
    nxt = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->ManageNameIDRequest->gg.g;
    x->ManageNameIDRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_ManageNameIDRequest) */

void zx_root_PUT_ManageNameIDRequest(struct zx_root_s* x, int n, struct zx_sp_ManageNameIDRequest_s* z)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x || !z) return;
  y = x->ManageNameIDRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ManageNameIDRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_ManageNameIDRequest) */

void zx_root_ADD_ManageNameIDRequest(struct zx_root_s* x, int n, struct zx_sp_ManageNameIDRequest_s* z)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ManageNameIDRequest->gg.g;
    x->ManageNameIDRequest = z;
    return;
  case -1:
    y = x->ManageNameIDRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDRequest; n > 1 && y; --n, y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_ManageNameIDRequest) */

void zx_root_DEL_ManageNameIDRequest(struct zx_root_s* x, int n)
{
  struct zx_sp_ManageNameIDRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ManageNameIDRequest = (struct zx_sp_ManageNameIDRequest_s*)x->ManageNameIDRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_ManageNameIDRequest_s*)x->ManageNameIDRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ManageNameIDRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_ManageNameIDResponse) */

int zx_root_NUM_ManageNameIDResponse(struct zx_root_s* x)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ManageNameIDResponse; y; ++n, y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_ManageNameIDResponse) */

struct zx_sp_ManageNameIDResponse_s* zx_root_GET_ManageNameIDResponse(struct zx_root_s* x, int n)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x) return 0;
  for (y = x->ManageNameIDResponse; n>=0 && y; --n, y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_ManageNameIDResponse) */

struct zx_sp_ManageNameIDResponse_s* zx_root_POP_ManageNameIDResponse(struct zx_root_s* x)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x) return 0;
  y = x->ManageNameIDResponse;
  if (y)
    x->ManageNameIDResponse = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_ManageNameIDResponse) */

void zx_root_PUSH_ManageNameIDResponse(struct zx_root_s* x, struct zx_sp_ManageNameIDResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ManageNameIDResponse->gg.g;
  x->ManageNameIDResponse = z;
}

/* FUNC(zx_root_REV_ManageNameIDResponse) */

void zx_root_REV_ManageNameIDResponse(struct zx_root_s* x)
{
  struct zx_sp_ManageNameIDResponse_s* nxt;
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x) return;
  y = x->ManageNameIDResponse;
  if (!y) return;
  x->ManageNameIDResponse = 0;
  while (y) {
    nxt = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->ManageNameIDResponse->gg.g;
    x->ManageNameIDResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_ManageNameIDResponse) */

void zx_root_PUT_ManageNameIDResponse(struct zx_root_s* x, int n, struct zx_sp_ManageNameIDResponse_s* z)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x || !z) return;
  y = x->ManageNameIDResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ManageNameIDResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_ManageNameIDResponse) */

void zx_root_ADD_ManageNameIDResponse(struct zx_root_s* x, int n, struct zx_sp_ManageNameIDResponse_s* z)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ManageNameIDResponse->gg.g;
    x->ManageNameIDResponse = z;
    return;
  case -1:
    y = x->ManageNameIDResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDResponse; n > 1 && y; --n, y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_ManageNameIDResponse) */

void zx_root_DEL_ManageNameIDResponse(struct zx_root_s* x, int n)
{
  struct zx_sp_ManageNameIDResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ManageNameIDResponse = (struct zx_sp_ManageNameIDResponse_s*)x->ManageNameIDResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp_ManageNameIDResponse_s*)x->ManageNameIDResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ManageNameIDResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_sp_ManageNameIDResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_Envelope) */

int zx_root_NUM_Envelope(struct zx_root_s* x)
{
  struct zx_e_Envelope_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Envelope; y; ++n, y = (struct zx_e_Envelope_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_Envelope) */

struct zx_e_Envelope_s* zx_root_GET_Envelope(struct zx_root_s* x, int n)
{
  struct zx_e_Envelope_s* y;
  if (!x) return 0;
  for (y = x->Envelope; n>=0 && y; --n, y = (struct zx_e_Envelope_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_Envelope) */

struct zx_e_Envelope_s* zx_root_POP_Envelope(struct zx_root_s* x)
{
  struct zx_e_Envelope_s* y;
  if (!x) return 0;
  y = x->Envelope;
  if (y)
    x->Envelope = (struct zx_e_Envelope_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_Envelope) */

void zx_root_PUSH_Envelope(struct zx_root_s* x, struct zx_e_Envelope_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Envelope->gg.g;
  x->Envelope = z;
}

/* FUNC(zx_root_REV_Envelope) */

void zx_root_REV_Envelope(struct zx_root_s* x)
{
  struct zx_e_Envelope_s* nxt;
  struct zx_e_Envelope_s* y;
  if (!x) return;
  y = x->Envelope;
  if (!y) return;
  x->Envelope = 0;
  while (y) {
    nxt = (struct zx_e_Envelope_s*)y->gg.g.n;
    y->gg.g.n = &x->Envelope->gg.g;
    x->Envelope = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_Envelope) */

void zx_root_PUT_Envelope(struct zx_root_s* x, int n, struct zx_e_Envelope_s* z)
{
  struct zx_e_Envelope_s* y;
  if (!x || !z) return;
  y = x->Envelope;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Envelope = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_e_Envelope_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_Envelope) */

void zx_root_ADD_Envelope(struct zx_root_s* x, int n, struct zx_e_Envelope_s* z)
{
  struct zx_e_Envelope_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Envelope->gg.g;
    x->Envelope = z;
    return;
  case -1:
    y = x->Envelope;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_e_Envelope_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Envelope; n > 1 && y; --n, y = (struct zx_e_Envelope_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_Envelope) */

void zx_root_DEL_Envelope(struct zx_root_s* x, int n)
{
  struct zx_e_Envelope_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Envelope = (struct zx_e_Envelope_s*)x->Envelope->gg.g.n;
    return;
  case -1:
    y = (struct zx_e_Envelope_s*)x->Envelope;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_e_Envelope_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Envelope; n > 1 && y->gg.g.n; --n, y = (struct zx_e_Envelope_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_Header) */

int zx_root_NUM_Header(struct zx_root_s* x)
{
  struct zx_e_Header_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Header; y; ++n, y = (struct zx_e_Header_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_Header) */

struct zx_e_Header_s* zx_root_GET_Header(struct zx_root_s* x, int n)
{
  struct zx_e_Header_s* y;
  if (!x) return 0;
  for (y = x->Header; n>=0 && y; --n, y = (struct zx_e_Header_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_Header) */

struct zx_e_Header_s* zx_root_POP_Header(struct zx_root_s* x)
{
  struct zx_e_Header_s* y;
  if (!x) return 0;
  y = x->Header;
  if (y)
    x->Header = (struct zx_e_Header_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_Header) */

void zx_root_PUSH_Header(struct zx_root_s* x, struct zx_e_Header_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Header->gg.g;
  x->Header = z;
}

/* FUNC(zx_root_REV_Header) */

void zx_root_REV_Header(struct zx_root_s* x)
{
  struct zx_e_Header_s* nxt;
  struct zx_e_Header_s* y;
  if (!x) return;
  y = x->Header;
  if (!y) return;
  x->Header = 0;
  while (y) {
    nxt = (struct zx_e_Header_s*)y->gg.g.n;
    y->gg.g.n = &x->Header->gg.g;
    x->Header = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_Header) */

void zx_root_PUT_Header(struct zx_root_s* x, int n, struct zx_e_Header_s* z)
{
  struct zx_e_Header_s* y;
  if (!x || !z) return;
  y = x->Header;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Header = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_e_Header_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_Header) */

void zx_root_ADD_Header(struct zx_root_s* x, int n, struct zx_e_Header_s* z)
{
  struct zx_e_Header_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Header->gg.g;
    x->Header = z;
    return;
  case -1:
    y = x->Header;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_e_Header_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Header; n > 1 && y; --n, y = (struct zx_e_Header_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_Header) */

void zx_root_DEL_Header(struct zx_root_s* x, int n)
{
  struct zx_e_Header_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Header = (struct zx_e_Header_s*)x->Header->gg.g.n;
    return;
  case -1:
    y = (struct zx_e_Header_s*)x->Header;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_e_Header_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Header; n > 1 && y->gg.g.n; --n, y = (struct zx_e_Header_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_Body) */

int zx_root_NUM_Body(struct zx_root_s* x)
{
  struct zx_e_Body_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Body; y; ++n, y = (struct zx_e_Body_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_Body) */

struct zx_e_Body_s* zx_root_GET_Body(struct zx_root_s* x, int n)
{
  struct zx_e_Body_s* y;
  if (!x) return 0;
  for (y = x->Body; n>=0 && y; --n, y = (struct zx_e_Body_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_Body) */

struct zx_e_Body_s* zx_root_POP_Body(struct zx_root_s* x)
{
  struct zx_e_Body_s* y;
  if (!x) return 0;
  y = x->Body;
  if (y)
    x->Body = (struct zx_e_Body_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_Body) */

void zx_root_PUSH_Body(struct zx_root_s* x, struct zx_e_Body_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Body->gg.g;
  x->Body = z;
}

/* FUNC(zx_root_REV_Body) */

void zx_root_REV_Body(struct zx_root_s* x)
{
  struct zx_e_Body_s* nxt;
  struct zx_e_Body_s* y;
  if (!x) return;
  y = x->Body;
  if (!y) return;
  x->Body = 0;
  while (y) {
    nxt = (struct zx_e_Body_s*)y->gg.g.n;
    y->gg.g.n = &x->Body->gg.g;
    x->Body = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_Body) */

void zx_root_PUT_Body(struct zx_root_s* x, int n, struct zx_e_Body_s* z)
{
  struct zx_e_Body_s* y;
  if (!x || !z) return;
  y = x->Body;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Body = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_e_Body_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_Body) */

void zx_root_ADD_Body(struct zx_root_s* x, int n, struct zx_e_Body_s* z)
{
  struct zx_e_Body_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Body->gg.g;
    x->Body = z;
    return;
  case -1:
    y = x->Body;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_e_Body_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Body; n > 1 && y; --n, y = (struct zx_e_Body_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_Body) */

void zx_root_DEL_Body(struct zx_root_s* x, int n)
{
  struct zx_e_Body_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Body = (struct zx_e_Body_s*)x->Body->gg.g.n;
    return;
  case -1:
    y = (struct zx_e_Body_s*)x->Body;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_e_Body_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Body; n > 1 && y->gg.g.n; --n, y = (struct zx_e_Body_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_EntityDescriptor) */

int zx_root_NUM_EntityDescriptor(struct zx_root_s* x)
{
  struct zx_md_EntityDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EntityDescriptor; y; ++n, y = (struct zx_md_EntityDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_EntityDescriptor) */

struct zx_md_EntityDescriptor_s* zx_root_GET_EntityDescriptor(struct zx_root_s* x, int n)
{
  struct zx_md_EntityDescriptor_s* y;
  if (!x) return 0;
  for (y = x->EntityDescriptor; n>=0 && y; --n, y = (struct zx_md_EntityDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_EntityDescriptor) */

struct zx_md_EntityDescriptor_s* zx_root_POP_EntityDescriptor(struct zx_root_s* x)
{
  struct zx_md_EntityDescriptor_s* y;
  if (!x) return 0;
  y = x->EntityDescriptor;
  if (y)
    x->EntityDescriptor = (struct zx_md_EntityDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_EntityDescriptor) */

void zx_root_PUSH_EntityDescriptor(struct zx_root_s* x, struct zx_md_EntityDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EntityDescriptor->gg.g;
  x->EntityDescriptor = z;
}

/* FUNC(zx_root_REV_EntityDescriptor) */

void zx_root_REV_EntityDescriptor(struct zx_root_s* x)
{
  struct zx_md_EntityDescriptor_s* nxt;
  struct zx_md_EntityDescriptor_s* y;
  if (!x) return;
  y = x->EntityDescriptor;
  if (!y) return;
  x->EntityDescriptor = 0;
  while (y) {
    nxt = (struct zx_md_EntityDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->EntityDescriptor->gg.g;
    x->EntityDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_EntityDescriptor) */

void zx_root_PUT_EntityDescriptor(struct zx_root_s* x, int n, struct zx_md_EntityDescriptor_s* z)
{
  struct zx_md_EntityDescriptor_s* y;
  if (!x || !z) return;
  y = x->EntityDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EntityDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_EntityDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_EntityDescriptor) */

void zx_root_ADD_EntityDescriptor(struct zx_root_s* x, int n, struct zx_md_EntityDescriptor_s* z)
{
  struct zx_md_EntityDescriptor_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EntityDescriptor->gg.g;
    x->EntityDescriptor = z;
    return;
  case -1:
    y = x->EntityDescriptor;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_md_EntityDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EntityDescriptor; n > 1 && y; --n, y = (struct zx_md_EntityDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_EntityDescriptor) */

void zx_root_DEL_EntityDescriptor(struct zx_root_s* x, int n)
{
  struct zx_md_EntityDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EntityDescriptor = (struct zx_md_EntityDescriptor_s*)x->EntityDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_EntityDescriptor_s*)x->EntityDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_EntityDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EntityDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zx_md_EntityDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_EntitiesDescriptor) */

int zx_root_NUM_EntitiesDescriptor(struct zx_root_s* x)
{
  struct zx_md_EntitiesDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EntitiesDescriptor; y; ++n, y = (struct zx_md_EntitiesDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_EntitiesDescriptor) */

struct zx_md_EntitiesDescriptor_s* zx_root_GET_EntitiesDescriptor(struct zx_root_s* x, int n)
{
  struct zx_md_EntitiesDescriptor_s* y;
  if (!x) return 0;
  for (y = x->EntitiesDescriptor; n>=0 && y; --n, y = (struct zx_md_EntitiesDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_EntitiesDescriptor) */

struct zx_md_EntitiesDescriptor_s* zx_root_POP_EntitiesDescriptor(struct zx_root_s* x)
{
  struct zx_md_EntitiesDescriptor_s* y;
  if (!x) return 0;
  y = x->EntitiesDescriptor;
  if (y)
    x->EntitiesDescriptor = (struct zx_md_EntitiesDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_EntitiesDescriptor) */

void zx_root_PUSH_EntitiesDescriptor(struct zx_root_s* x, struct zx_md_EntitiesDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EntitiesDescriptor->gg.g;
  x->EntitiesDescriptor = z;
}

/* FUNC(zx_root_REV_EntitiesDescriptor) */

void zx_root_REV_EntitiesDescriptor(struct zx_root_s* x)
{
  struct zx_md_EntitiesDescriptor_s* nxt;
  struct zx_md_EntitiesDescriptor_s* y;
  if (!x) return;
  y = x->EntitiesDescriptor;
  if (!y) return;
  x->EntitiesDescriptor = 0;
  while (y) {
    nxt = (struct zx_md_EntitiesDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->EntitiesDescriptor->gg.g;
    x->EntitiesDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_EntitiesDescriptor) */

void zx_root_PUT_EntitiesDescriptor(struct zx_root_s* x, int n, struct zx_md_EntitiesDescriptor_s* z)
{
  struct zx_md_EntitiesDescriptor_s* y;
  if (!x || !z) return;
  y = x->EntitiesDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EntitiesDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_md_EntitiesDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_EntitiesDescriptor) */

void zx_root_ADD_EntitiesDescriptor(struct zx_root_s* x, int n, struct zx_md_EntitiesDescriptor_s* z)
{
  struct zx_md_EntitiesDescriptor_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EntitiesDescriptor->gg.g;
    x->EntitiesDescriptor = z;
    return;
  case -1:
    y = x->EntitiesDescriptor;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_md_EntitiesDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EntitiesDescriptor; n > 1 && y; --n, y = (struct zx_md_EntitiesDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_EntitiesDescriptor) */

void zx_root_DEL_EntitiesDescriptor(struct zx_root_s* x, int n)
{
  struct zx_md_EntitiesDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EntitiesDescriptor = (struct zx_md_EntitiesDescriptor_s*)x->EntitiesDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zx_md_EntitiesDescriptor_s*)x->EntitiesDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_md_EntitiesDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EntitiesDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zx_md_EntitiesDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_XACMLAuthzDecisionQuery) */

int zx_root_NUM_XACMLAuthzDecisionQuery(struct zx_root_s* x)
{
  struct zx_xasp_XACMLAuthzDecisionQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->XACMLAuthzDecisionQuery; y; ++n, y = (struct zx_xasp_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_XACMLAuthzDecisionQuery) */

struct zx_xasp_XACMLAuthzDecisionQuery_s* zx_root_GET_XACMLAuthzDecisionQuery(struct zx_root_s* x, int n)
{
  struct zx_xasp_XACMLAuthzDecisionQuery_s* y;
  if (!x) return 0;
  for (y = x->XACMLAuthzDecisionQuery; n>=0 && y; --n, y = (struct zx_xasp_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_XACMLAuthzDecisionQuery) */

struct zx_xasp_XACMLAuthzDecisionQuery_s* zx_root_POP_XACMLAuthzDecisionQuery(struct zx_root_s* x)
{
  struct zx_xasp_XACMLAuthzDecisionQuery_s* y;
  if (!x) return 0;
  y = x->XACMLAuthzDecisionQuery;
  if (y)
    x->XACMLAuthzDecisionQuery = (struct zx_xasp_XACMLAuthzDecisionQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_XACMLAuthzDecisionQuery) */

void zx_root_PUSH_XACMLAuthzDecisionQuery(struct zx_root_s* x, struct zx_xasp_XACMLAuthzDecisionQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->XACMLAuthzDecisionQuery->gg.g;
  x->XACMLAuthzDecisionQuery = z;
}

/* FUNC(zx_root_REV_XACMLAuthzDecisionQuery) */

void zx_root_REV_XACMLAuthzDecisionQuery(struct zx_root_s* x)
{
  struct zx_xasp_XACMLAuthzDecisionQuery_s* nxt;
  struct zx_xasp_XACMLAuthzDecisionQuery_s* y;
  if (!x) return;
  y = x->XACMLAuthzDecisionQuery;
  if (!y) return;
  x->XACMLAuthzDecisionQuery = 0;
  while (y) {
    nxt = (struct zx_xasp_XACMLAuthzDecisionQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->XACMLAuthzDecisionQuery->gg.g;
    x->XACMLAuthzDecisionQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_XACMLAuthzDecisionQuery) */

void zx_root_PUT_XACMLAuthzDecisionQuery(struct zx_root_s* x, int n, struct zx_xasp_XACMLAuthzDecisionQuery_s* z)
{
  struct zx_xasp_XACMLAuthzDecisionQuery_s* y;
  if (!x || !z) return;
  y = x->XACMLAuthzDecisionQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->XACMLAuthzDecisionQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xasp_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_XACMLAuthzDecisionQuery) */

void zx_root_ADD_XACMLAuthzDecisionQuery(struct zx_root_s* x, int n, struct zx_xasp_XACMLAuthzDecisionQuery_s* z)
{
  struct zx_xasp_XACMLAuthzDecisionQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->XACMLAuthzDecisionQuery->gg.g;
    x->XACMLAuthzDecisionQuery = z;
    return;
  case -1:
    y = x->XACMLAuthzDecisionQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xasp_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->XACMLAuthzDecisionQuery; n > 1 && y; --n, y = (struct zx_xasp_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_XACMLAuthzDecisionQuery) */

void zx_root_DEL_XACMLAuthzDecisionQuery(struct zx_root_s* x, int n)
{
  struct zx_xasp_XACMLAuthzDecisionQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->XACMLAuthzDecisionQuery = (struct zx_xasp_XACMLAuthzDecisionQuery_s*)x->XACMLAuthzDecisionQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_xasp_XACMLAuthzDecisionQuery_s*)x->XACMLAuthzDecisionQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xasp_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->XACMLAuthzDecisionQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_xasp_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_XACMLPolicyQuery) */

int zx_root_NUM_XACMLPolicyQuery(struct zx_root_s* x)
{
  struct zx_xasp_XACMLPolicyQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->XACMLPolicyQuery; y; ++n, y = (struct zx_xasp_XACMLPolicyQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_XACMLPolicyQuery) */

struct zx_xasp_XACMLPolicyQuery_s* zx_root_GET_XACMLPolicyQuery(struct zx_root_s* x, int n)
{
  struct zx_xasp_XACMLPolicyQuery_s* y;
  if (!x) return 0;
  for (y = x->XACMLPolicyQuery; n>=0 && y; --n, y = (struct zx_xasp_XACMLPolicyQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_XACMLPolicyQuery) */

struct zx_xasp_XACMLPolicyQuery_s* zx_root_POP_XACMLPolicyQuery(struct zx_root_s* x)
{
  struct zx_xasp_XACMLPolicyQuery_s* y;
  if (!x) return 0;
  y = x->XACMLPolicyQuery;
  if (y)
    x->XACMLPolicyQuery = (struct zx_xasp_XACMLPolicyQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_XACMLPolicyQuery) */

void zx_root_PUSH_XACMLPolicyQuery(struct zx_root_s* x, struct zx_xasp_XACMLPolicyQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->XACMLPolicyQuery->gg.g;
  x->XACMLPolicyQuery = z;
}

/* FUNC(zx_root_REV_XACMLPolicyQuery) */

void zx_root_REV_XACMLPolicyQuery(struct zx_root_s* x)
{
  struct zx_xasp_XACMLPolicyQuery_s* nxt;
  struct zx_xasp_XACMLPolicyQuery_s* y;
  if (!x) return;
  y = x->XACMLPolicyQuery;
  if (!y) return;
  x->XACMLPolicyQuery = 0;
  while (y) {
    nxt = (struct zx_xasp_XACMLPolicyQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->XACMLPolicyQuery->gg.g;
    x->XACMLPolicyQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_XACMLPolicyQuery) */

void zx_root_PUT_XACMLPolicyQuery(struct zx_root_s* x, int n, struct zx_xasp_XACMLPolicyQuery_s* z)
{
  struct zx_xasp_XACMLPolicyQuery_s* y;
  if (!x || !z) return;
  y = x->XACMLPolicyQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->XACMLPolicyQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xasp_XACMLPolicyQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_XACMLPolicyQuery) */

void zx_root_ADD_XACMLPolicyQuery(struct zx_root_s* x, int n, struct zx_xasp_XACMLPolicyQuery_s* z)
{
  struct zx_xasp_XACMLPolicyQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->XACMLPolicyQuery->gg.g;
    x->XACMLPolicyQuery = z;
    return;
  case -1:
    y = x->XACMLPolicyQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xasp_XACMLPolicyQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->XACMLPolicyQuery; n > 1 && y; --n, y = (struct zx_xasp_XACMLPolicyQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_XACMLPolicyQuery) */

void zx_root_DEL_XACMLPolicyQuery(struct zx_root_s* x, int n)
{
  struct zx_xasp_XACMLPolicyQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->XACMLPolicyQuery = (struct zx_xasp_XACMLPolicyQuery_s*)x->XACMLPolicyQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_xasp_XACMLPolicyQuery_s*)x->XACMLPolicyQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xasp_XACMLPolicyQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->XACMLPolicyQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_xasp_XACMLPolicyQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_xaspcd1_XACMLAuthzDecisionQuery) */

int zx_root_NUM_xaspcd1_XACMLAuthzDecisionQuery(struct zx_root_s* x)
{
  struct zx_xaspcd1_XACMLAuthzDecisionQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->xaspcd1_XACMLAuthzDecisionQuery; y; ++n, y = (struct zx_xaspcd1_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_xaspcd1_XACMLAuthzDecisionQuery) */

struct zx_xaspcd1_XACMLAuthzDecisionQuery_s* zx_root_GET_xaspcd1_XACMLAuthzDecisionQuery(struct zx_root_s* x, int n)
{
  struct zx_xaspcd1_XACMLAuthzDecisionQuery_s* y;
  if (!x) return 0;
  for (y = x->xaspcd1_XACMLAuthzDecisionQuery; n>=0 && y; --n, y = (struct zx_xaspcd1_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_xaspcd1_XACMLAuthzDecisionQuery) */

struct zx_xaspcd1_XACMLAuthzDecisionQuery_s* zx_root_POP_xaspcd1_XACMLAuthzDecisionQuery(struct zx_root_s* x)
{
  struct zx_xaspcd1_XACMLAuthzDecisionQuery_s* y;
  if (!x) return 0;
  y = x->xaspcd1_XACMLAuthzDecisionQuery;
  if (y)
    x->xaspcd1_XACMLAuthzDecisionQuery = (struct zx_xaspcd1_XACMLAuthzDecisionQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_xaspcd1_XACMLAuthzDecisionQuery) */

void zx_root_PUSH_xaspcd1_XACMLAuthzDecisionQuery(struct zx_root_s* x, struct zx_xaspcd1_XACMLAuthzDecisionQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->xaspcd1_XACMLAuthzDecisionQuery->gg.g;
  x->xaspcd1_XACMLAuthzDecisionQuery = z;
}

/* FUNC(zx_root_REV_xaspcd1_XACMLAuthzDecisionQuery) */

void zx_root_REV_xaspcd1_XACMLAuthzDecisionQuery(struct zx_root_s* x)
{
  struct zx_xaspcd1_XACMLAuthzDecisionQuery_s* nxt;
  struct zx_xaspcd1_XACMLAuthzDecisionQuery_s* y;
  if (!x) return;
  y = x->xaspcd1_XACMLAuthzDecisionQuery;
  if (!y) return;
  x->xaspcd1_XACMLAuthzDecisionQuery = 0;
  while (y) {
    nxt = (struct zx_xaspcd1_XACMLAuthzDecisionQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->xaspcd1_XACMLAuthzDecisionQuery->gg.g;
    x->xaspcd1_XACMLAuthzDecisionQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_xaspcd1_XACMLAuthzDecisionQuery) */

void zx_root_PUT_xaspcd1_XACMLAuthzDecisionQuery(struct zx_root_s* x, int n, struct zx_xaspcd1_XACMLAuthzDecisionQuery_s* z)
{
  struct zx_xaspcd1_XACMLAuthzDecisionQuery_s* y;
  if (!x || !z) return;
  y = x->xaspcd1_XACMLAuthzDecisionQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->xaspcd1_XACMLAuthzDecisionQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xaspcd1_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_xaspcd1_XACMLAuthzDecisionQuery) */

void zx_root_ADD_xaspcd1_XACMLAuthzDecisionQuery(struct zx_root_s* x, int n, struct zx_xaspcd1_XACMLAuthzDecisionQuery_s* z)
{
  struct zx_xaspcd1_XACMLAuthzDecisionQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->xaspcd1_XACMLAuthzDecisionQuery->gg.g;
    x->xaspcd1_XACMLAuthzDecisionQuery = z;
    return;
  case -1:
    y = x->xaspcd1_XACMLAuthzDecisionQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xaspcd1_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->xaspcd1_XACMLAuthzDecisionQuery; n > 1 && y; --n, y = (struct zx_xaspcd1_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_xaspcd1_XACMLAuthzDecisionQuery) */

void zx_root_DEL_xaspcd1_XACMLAuthzDecisionQuery(struct zx_root_s* x, int n)
{
  struct zx_xaspcd1_XACMLAuthzDecisionQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->xaspcd1_XACMLAuthzDecisionQuery = (struct zx_xaspcd1_XACMLAuthzDecisionQuery_s*)x->xaspcd1_XACMLAuthzDecisionQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_xaspcd1_XACMLAuthzDecisionQuery_s*)x->xaspcd1_XACMLAuthzDecisionQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xaspcd1_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->xaspcd1_XACMLAuthzDecisionQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_xaspcd1_XACMLAuthzDecisionQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_xaspcd1_XACMLPolicyQuery) */

int zx_root_NUM_xaspcd1_XACMLPolicyQuery(struct zx_root_s* x)
{
  struct zx_xaspcd1_XACMLPolicyQuery_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->xaspcd1_XACMLPolicyQuery; y; ++n, y = (struct zx_xaspcd1_XACMLPolicyQuery_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_xaspcd1_XACMLPolicyQuery) */

struct zx_xaspcd1_XACMLPolicyQuery_s* zx_root_GET_xaspcd1_XACMLPolicyQuery(struct zx_root_s* x, int n)
{
  struct zx_xaspcd1_XACMLPolicyQuery_s* y;
  if (!x) return 0;
  for (y = x->xaspcd1_XACMLPolicyQuery; n>=0 && y; --n, y = (struct zx_xaspcd1_XACMLPolicyQuery_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_xaspcd1_XACMLPolicyQuery) */

struct zx_xaspcd1_XACMLPolicyQuery_s* zx_root_POP_xaspcd1_XACMLPolicyQuery(struct zx_root_s* x)
{
  struct zx_xaspcd1_XACMLPolicyQuery_s* y;
  if (!x) return 0;
  y = x->xaspcd1_XACMLPolicyQuery;
  if (y)
    x->xaspcd1_XACMLPolicyQuery = (struct zx_xaspcd1_XACMLPolicyQuery_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_xaspcd1_XACMLPolicyQuery) */

void zx_root_PUSH_xaspcd1_XACMLPolicyQuery(struct zx_root_s* x, struct zx_xaspcd1_XACMLPolicyQuery_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->xaspcd1_XACMLPolicyQuery->gg.g;
  x->xaspcd1_XACMLPolicyQuery = z;
}

/* FUNC(zx_root_REV_xaspcd1_XACMLPolicyQuery) */

void zx_root_REV_xaspcd1_XACMLPolicyQuery(struct zx_root_s* x)
{
  struct zx_xaspcd1_XACMLPolicyQuery_s* nxt;
  struct zx_xaspcd1_XACMLPolicyQuery_s* y;
  if (!x) return;
  y = x->xaspcd1_XACMLPolicyQuery;
  if (!y) return;
  x->xaspcd1_XACMLPolicyQuery = 0;
  while (y) {
    nxt = (struct zx_xaspcd1_XACMLPolicyQuery_s*)y->gg.g.n;
    y->gg.g.n = &x->xaspcd1_XACMLPolicyQuery->gg.g;
    x->xaspcd1_XACMLPolicyQuery = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_xaspcd1_XACMLPolicyQuery) */

void zx_root_PUT_xaspcd1_XACMLPolicyQuery(struct zx_root_s* x, int n, struct zx_xaspcd1_XACMLPolicyQuery_s* z)
{
  struct zx_xaspcd1_XACMLPolicyQuery_s* y;
  if (!x || !z) return;
  y = x->xaspcd1_XACMLPolicyQuery;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->xaspcd1_XACMLPolicyQuery = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_xaspcd1_XACMLPolicyQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_xaspcd1_XACMLPolicyQuery) */

void zx_root_ADD_xaspcd1_XACMLPolicyQuery(struct zx_root_s* x, int n, struct zx_xaspcd1_XACMLPolicyQuery_s* z)
{
  struct zx_xaspcd1_XACMLPolicyQuery_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->xaspcd1_XACMLPolicyQuery->gg.g;
    x->xaspcd1_XACMLPolicyQuery = z;
    return;
  case -1:
    y = x->xaspcd1_XACMLPolicyQuery;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_xaspcd1_XACMLPolicyQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->xaspcd1_XACMLPolicyQuery; n > 1 && y; --n, y = (struct zx_xaspcd1_XACMLPolicyQuery_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_xaspcd1_XACMLPolicyQuery) */

void zx_root_DEL_xaspcd1_XACMLPolicyQuery(struct zx_root_s* x, int n)
{
  struct zx_xaspcd1_XACMLPolicyQuery_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->xaspcd1_XACMLPolicyQuery = (struct zx_xaspcd1_XACMLPolicyQuery_s*)x->xaspcd1_XACMLPolicyQuery->gg.g.n;
    return;
  case -1:
    y = (struct zx_xaspcd1_XACMLPolicyQuery_s*)x->xaspcd1_XACMLPolicyQuery;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_xaspcd1_XACMLPolicyQuery_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->xaspcd1_XACMLPolicyQuery; n > 1 && y->gg.g.n; --n, y = (struct zx_xaspcd1_XACMLPolicyQuery_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_EndpointReference) */

int zx_root_NUM_EndpointReference(struct zx_root_s* x)
{
  struct zx_a_EndpointReference_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->EndpointReference; y; ++n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_EndpointReference) */

struct zx_a_EndpointReference_s* zx_root_GET_EndpointReference(struct zx_root_s* x, int n)
{
  struct zx_a_EndpointReference_s* y;
  if (!x) return 0;
  for (y = x->EndpointReference; n>=0 && y; --n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_EndpointReference) */

struct zx_a_EndpointReference_s* zx_root_POP_EndpointReference(struct zx_root_s* x)
{
  struct zx_a_EndpointReference_s* y;
  if (!x) return 0;
  y = x->EndpointReference;
  if (y)
    x->EndpointReference = (struct zx_a_EndpointReference_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_EndpointReference) */

void zx_root_PUSH_EndpointReference(struct zx_root_s* x, struct zx_a_EndpointReference_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->EndpointReference->gg.g;
  x->EndpointReference = z;
}

/* FUNC(zx_root_REV_EndpointReference) */

void zx_root_REV_EndpointReference(struct zx_root_s* x)
{
  struct zx_a_EndpointReference_s* nxt;
  struct zx_a_EndpointReference_s* y;
  if (!x) return;
  y = x->EndpointReference;
  if (!y) return;
  x->EndpointReference = 0;
  while (y) {
    nxt = (struct zx_a_EndpointReference_s*)y->gg.g.n;
    y->gg.g.n = &x->EndpointReference->gg.g;
    x->EndpointReference = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_EndpointReference) */

void zx_root_PUT_EndpointReference(struct zx_root_s* x, int n, struct zx_a_EndpointReference_s* z)
{
  struct zx_a_EndpointReference_s* y;
  if (!x || !z) return;
  y = x->EndpointReference;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->EndpointReference = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_EndpointReference) */

void zx_root_ADD_EndpointReference(struct zx_root_s* x, int n, struct zx_a_EndpointReference_s* z)
{
  struct zx_a_EndpointReference_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->EndpointReference->gg.g;
    x->EndpointReference = z;
    return;
  case -1:
    y = x->EndpointReference;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EndpointReference; n > 1 && y; --n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_EndpointReference) */

void zx_root_DEL_EndpointReference(struct zx_root_s* x, int n)
{
  struct zx_a_EndpointReference_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->EndpointReference = (struct zx_a_EndpointReference_s*)x->EndpointReference->gg.g.n;
    return;
  case -1:
    y = (struct zx_a_EndpointReference_s*)x->EndpointReference;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->EndpointReference; n > 1 && y->gg.g.n; --n, y = (struct zx_a_EndpointReference_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_Token) */

int zx_root_NUM_Token(struct zx_root_s* x)
{
  struct zx_sec_Token_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Token; y; ++n, y = (struct zx_sec_Token_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_Token) */

struct zx_sec_Token_s* zx_root_GET_Token(struct zx_root_s* x, int n)
{
  struct zx_sec_Token_s* y;
  if (!x) return 0;
  for (y = x->Token; n>=0 && y; --n, y = (struct zx_sec_Token_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_Token) */

struct zx_sec_Token_s* zx_root_POP_Token(struct zx_root_s* x)
{
  struct zx_sec_Token_s* y;
  if (!x) return 0;
  y = x->Token;
  if (y)
    x->Token = (struct zx_sec_Token_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_Token) */

void zx_root_PUSH_Token(struct zx_root_s* x, struct zx_sec_Token_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Token->gg.g;
  x->Token = z;
}

/* FUNC(zx_root_REV_Token) */

void zx_root_REV_Token(struct zx_root_s* x)
{
  struct zx_sec_Token_s* nxt;
  struct zx_sec_Token_s* y;
  if (!x) return;
  y = x->Token;
  if (!y) return;
  x->Token = 0;
  while (y) {
    nxt = (struct zx_sec_Token_s*)y->gg.g.n;
    y->gg.g.n = &x->Token->gg.g;
    x->Token = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_Token) */

void zx_root_PUT_Token(struct zx_root_s* x, int n, struct zx_sec_Token_s* z)
{
  struct zx_sec_Token_s* y;
  if (!x || !z) return;
  y = x->Token;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Token = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sec_Token_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_Token) */

void zx_root_ADD_Token(struct zx_root_s* x, int n, struct zx_sec_Token_s* z)
{
  struct zx_sec_Token_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Token->gg.g;
    x->Token = z;
    return;
  case -1:
    y = x->Token;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sec_Token_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Token; n > 1 && y; --n, y = (struct zx_sec_Token_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_Token) */

void zx_root_DEL_Token(struct zx_root_s* x, int n)
{
  struct zx_sec_Token_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Token = (struct zx_sec_Token_s*)x->Token->gg.g.n;
    return;
  case -1:
    y = (struct zx_sec_Token_s*)x->Token;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sec_Token_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Token; n > 1 && y->gg.g.n; --n, y = (struct zx_sec_Token_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_Candidate) */

int zx_root_NUM_Candidate(struct zx_root_s* x)
{
  struct zx_hrxml_Candidate_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Candidate; y; ++n, y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_Candidate) */

struct zx_hrxml_Candidate_s* zx_root_GET_Candidate(struct zx_root_s* x, int n)
{
  struct zx_hrxml_Candidate_s* y;
  if (!x) return 0;
  for (y = x->Candidate; n>=0 && y; --n, y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_Candidate) */

struct zx_hrxml_Candidate_s* zx_root_POP_Candidate(struct zx_root_s* x)
{
  struct zx_hrxml_Candidate_s* y;
  if (!x) return 0;
  y = x->Candidate;
  if (y)
    x->Candidate = (struct zx_hrxml_Candidate_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_Candidate) */

void zx_root_PUSH_Candidate(struct zx_root_s* x, struct zx_hrxml_Candidate_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Candidate->gg.g;
  x->Candidate = z;
}

/* FUNC(zx_root_REV_Candidate) */

void zx_root_REV_Candidate(struct zx_root_s* x)
{
  struct zx_hrxml_Candidate_s* nxt;
  struct zx_hrxml_Candidate_s* y;
  if (!x) return;
  y = x->Candidate;
  if (!y) return;
  x->Candidate = 0;
  while (y) {
    nxt = (struct zx_hrxml_Candidate_s*)y->gg.g.n;
    y->gg.g.n = &x->Candidate->gg.g;
    x->Candidate = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_Candidate) */

void zx_root_PUT_Candidate(struct zx_root_s* x, int n, struct zx_hrxml_Candidate_s* z)
{
  struct zx_hrxml_Candidate_s* y;
  if (!x || !z) return;
  y = x->Candidate;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Candidate = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_Candidate) */

void zx_root_ADD_Candidate(struct zx_root_s* x, int n, struct zx_hrxml_Candidate_s* z)
{
  struct zx_hrxml_Candidate_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Candidate->gg.g;
    x->Candidate = z;
    return;
  case -1:
    y = x->Candidate;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Candidate; n > 1 && y; --n, y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_Candidate) */

void zx_root_DEL_Candidate(struct zx_root_s* x, int n)
{
  struct zx_hrxml_Candidate_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Candidate = (struct zx_hrxml_Candidate_s*)x->Candidate->gg.g.n;
    return;
  case -1:
    y = (struct zx_hrxml_Candidate_s*)x->Candidate;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Candidate; n > 1 && y->gg.g.n; --n, y = (struct zx_hrxml_Candidate_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_sa11_Assertion) */

int zx_root_NUM_sa11_Assertion(struct zx_root_s* x)
{
  struct zx_sa11_Assertion_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->sa11_Assertion; y; ++n, y = (struct zx_sa11_Assertion_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_sa11_Assertion) */

struct zx_sa11_Assertion_s* zx_root_GET_sa11_Assertion(struct zx_root_s* x, int n)
{
  struct zx_sa11_Assertion_s* y;
  if (!x) return 0;
  for (y = x->sa11_Assertion; n>=0 && y; --n, y = (struct zx_sa11_Assertion_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_sa11_Assertion) */

struct zx_sa11_Assertion_s* zx_root_POP_sa11_Assertion(struct zx_root_s* x)
{
  struct zx_sa11_Assertion_s* y;
  if (!x) return 0;
  y = x->sa11_Assertion;
  if (y)
    x->sa11_Assertion = (struct zx_sa11_Assertion_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_sa11_Assertion) */

void zx_root_PUSH_sa11_Assertion(struct zx_root_s* x, struct zx_sa11_Assertion_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->sa11_Assertion->gg.g;
  x->sa11_Assertion = z;
}

/* FUNC(zx_root_REV_sa11_Assertion) */

void zx_root_REV_sa11_Assertion(struct zx_root_s* x)
{
  struct zx_sa11_Assertion_s* nxt;
  struct zx_sa11_Assertion_s* y;
  if (!x) return;
  y = x->sa11_Assertion;
  if (!y) return;
  x->sa11_Assertion = 0;
  while (y) {
    nxt = (struct zx_sa11_Assertion_s*)y->gg.g.n;
    y->gg.g.n = &x->sa11_Assertion->gg.g;
    x->sa11_Assertion = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_sa11_Assertion) */

void zx_root_PUT_sa11_Assertion(struct zx_root_s* x, int n, struct zx_sa11_Assertion_s* z)
{
  struct zx_sa11_Assertion_s* y;
  if (!x || !z) return;
  y = x->sa11_Assertion;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->sa11_Assertion = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_sa11_Assertion) */

void zx_root_ADD_sa11_Assertion(struct zx_root_s* x, int n, struct zx_sa11_Assertion_s* z)
{
  struct zx_sa11_Assertion_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->sa11_Assertion->gg.g;
    x->sa11_Assertion = z;
    return;
  case -1:
    y = x->sa11_Assertion;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sa11_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->sa11_Assertion; n > 1 && y; --n, y = (struct zx_sa11_Assertion_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_sa11_Assertion) */

void zx_root_DEL_sa11_Assertion(struct zx_root_s* x, int n)
{
  struct zx_sa11_Assertion_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->sa11_Assertion = (struct zx_sa11_Assertion_s*)x->sa11_Assertion->gg.g.n;
    return;
  case -1:
    y = (struct zx_sa11_Assertion_s*)x->sa11_Assertion;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sa11_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->sa11_Assertion; n > 1 && y->gg.g.n; --n, y = (struct zx_sa11_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_Request) */

int zx_root_NUM_Request(struct zx_root_s* x)
{
  struct zx_sp11_Request_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->Request; y; ++n, y = (struct zx_sp11_Request_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_Request) */

struct zx_sp11_Request_s* zx_root_GET_Request(struct zx_root_s* x, int n)
{
  struct zx_sp11_Request_s* y;
  if (!x) return 0;
  for (y = x->Request; n>=0 && y; --n, y = (struct zx_sp11_Request_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_Request) */

struct zx_sp11_Request_s* zx_root_POP_Request(struct zx_root_s* x)
{
  struct zx_sp11_Request_s* y;
  if (!x) return 0;
  y = x->Request;
  if (y)
    x->Request = (struct zx_sp11_Request_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_Request) */

void zx_root_PUSH_Request(struct zx_root_s* x, struct zx_sp11_Request_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->Request->gg.g;
  x->Request = z;
}

/* FUNC(zx_root_REV_Request) */

void zx_root_REV_Request(struct zx_root_s* x)
{
  struct zx_sp11_Request_s* nxt;
  struct zx_sp11_Request_s* y;
  if (!x) return;
  y = x->Request;
  if (!y) return;
  x->Request = 0;
  while (y) {
    nxt = (struct zx_sp11_Request_s*)y->gg.g.n;
    y->gg.g.n = &x->Request->gg.g;
    x->Request = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_Request) */

void zx_root_PUT_Request(struct zx_root_s* x, int n, struct zx_sp11_Request_s* z)
{
  struct zx_sp11_Request_s* y;
  if (!x || !z) return;
  y = x->Request;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->Request = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_Request_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_Request) */

void zx_root_ADD_Request(struct zx_root_s* x, int n, struct zx_sp11_Request_s* z)
{
  struct zx_sp11_Request_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->Request->gg.g;
    x->Request = z;
    return;
  case -1:
    y = x->Request;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp11_Request_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Request; n > 1 && y; --n, y = (struct zx_sp11_Request_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_Request) */

void zx_root_DEL_Request(struct zx_root_s* x, int n)
{
  struct zx_sp11_Request_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->Request = (struct zx_sp11_Request_s*)x->Request->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp11_Request_s*)x->Request;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp11_Request_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->Request; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_Request_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_sp11_Response) */

int zx_root_NUM_sp11_Response(struct zx_root_s* x)
{
  struct zx_sp11_Response_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->sp11_Response; y; ++n, y = (struct zx_sp11_Response_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_sp11_Response) */

struct zx_sp11_Response_s* zx_root_GET_sp11_Response(struct zx_root_s* x, int n)
{
  struct zx_sp11_Response_s* y;
  if (!x) return 0;
  for (y = x->sp11_Response; n>=0 && y; --n, y = (struct zx_sp11_Response_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_sp11_Response) */

struct zx_sp11_Response_s* zx_root_POP_sp11_Response(struct zx_root_s* x)
{
  struct zx_sp11_Response_s* y;
  if (!x) return 0;
  y = x->sp11_Response;
  if (y)
    x->sp11_Response = (struct zx_sp11_Response_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_sp11_Response) */

void zx_root_PUSH_sp11_Response(struct zx_root_s* x, struct zx_sp11_Response_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->sp11_Response->gg.g;
  x->sp11_Response = z;
}

/* FUNC(zx_root_REV_sp11_Response) */

void zx_root_REV_sp11_Response(struct zx_root_s* x)
{
  struct zx_sp11_Response_s* nxt;
  struct zx_sp11_Response_s* y;
  if (!x) return;
  y = x->sp11_Response;
  if (!y) return;
  x->sp11_Response = 0;
  while (y) {
    nxt = (struct zx_sp11_Response_s*)y->gg.g.n;
    y->gg.g.n = &x->sp11_Response->gg.g;
    x->sp11_Response = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_sp11_Response) */

void zx_root_PUT_sp11_Response(struct zx_root_s* x, int n, struct zx_sp11_Response_s* z)
{
  struct zx_sp11_Response_s* y;
  if (!x || !z) return;
  y = x->sp11_Response;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->sp11_Response = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_sp11_Response) */

void zx_root_ADD_sp11_Response(struct zx_root_s* x, int n, struct zx_sp11_Response_s* z)
{
  struct zx_sp11_Response_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->sp11_Response->gg.g;
    x->sp11_Response = z;
    return;
  case -1:
    y = x->sp11_Response;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_sp11_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->sp11_Response; n > 1 && y; --n, y = (struct zx_sp11_Response_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_sp11_Response) */

void zx_root_DEL_sp11_Response(struct zx_root_s* x, int n)
{
  struct zx_sp11_Response_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->sp11_Response = (struct zx_sp11_Response_s*)x->sp11_Response->gg.g.n;
    return;
  case -1:
    y = (struct zx_sp11_Response_s*)x->sp11_Response;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_sp11_Response_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->sp11_Response; n > 1 && y->gg.g.n; --n, y = (struct zx_sp11_Response_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_ff12_Assertion) */

int zx_root_NUM_ff12_Assertion(struct zx_root_s* x)
{
  struct zx_ff12_Assertion_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ff12_Assertion; y; ++n, y = (struct zx_ff12_Assertion_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_ff12_Assertion) */

struct zx_ff12_Assertion_s* zx_root_GET_ff12_Assertion(struct zx_root_s* x, int n)
{
  struct zx_ff12_Assertion_s* y;
  if (!x) return 0;
  for (y = x->ff12_Assertion; n>=0 && y; --n, y = (struct zx_ff12_Assertion_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_ff12_Assertion) */

struct zx_ff12_Assertion_s* zx_root_POP_ff12_Assertion(struct zx_root_s* x)
{
  struct zx_ff12_Assertion_s* y;
  if (!x) return 0;
  y = x->ff12_Assertion;
  if (y)
    x->ff12_Assertion = (struct zx_ff12_Assertion_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_ff12_Assertion) */

void zx_root_PUSH_ff12_Assertion(struct zx_root_s* x, struct zx_ff12_Assertion_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ff12_Assertion->gg.g;
  x->ff12_Assertion = z;
}

/* FUNC(zx_root_REV_ff12_Assertion) */

void zx_root_REV_ff12_Assertion(struct zx_root_s* x)
{
  struct zx_ff12_Assertion_s* nxt;
  struct zx_ff12_Assertion_s* y;
  if (!x) return;
  y = x->ff12_Assertion;
  if (!y) return;
  x->ff12_Assertion = 0;
  while (y) {
    nxt = (struct zx_ff12_Assertion_s*)y->gg.g.n;
    y->gg.g.n = &x->ff12_Assertion->gg.g;
    x->ff12_Assertion = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_ff12_Assertion) */

void zx_root_PUT_ff12_Assertion(struct zx_root_s* x, int n, struct zx_ff12_Assertion_s* z)
{
  struct zx_ff12_Assertion_s* y;
  if (!x || !z) return;
  y = x->ff12_Assertion;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ff12_Assertion = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_ff12_Assertion) */

void zx_root_ADD_ff12_Assertion(struct zx_root_s* x, int n, struct zx_ff12_Assertion_s* z)
{
  struct zx_ff12_Assertion_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ff12_Assertion->gg.g;
    x->ff12_Assertion = z;
    return;
  case -1:
    y = x->ff12_Assertion;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ff12_Assertion; n > 1 && y; --n, y = (struct zx_ff12_Assertion_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_ff12_Assertion) */

void zx_root_DEL_ff12_Assertion(struct zx_root_s* x, int n)
{
  struct zx_ff12_Assertion_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ff12_Assertion = (struct zx_ff12_Assertion_s*)x->ff12_Assertion->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_Assertion_s*)x->ff12_Assertion;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_Assertion_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ff12_Assertion; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_Assertion_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_ff12_AuthnRequest) */

int zx_root_NUM_ff12_AuthnRequest(struct zx_root_s* x)
{
  struct zx_ff12_AuthnRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ff12_AuthnRequest; y; ++n, y = (struct zx_ff12_AuthnRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_ff12_AuthnRequest) */

struct zx_ff12_AuthnRequest_s* zx_root_GET_ff12_AuthnRequest(struct zx_root_s* x, int n)
{
  struct zx_ff12_AuthnRequest_s* y;
  if (!x) return 0;
  for (y = x->ff12_AuthnRequest; n>=0 && y; --n, y = (struct zx_ff12_AuthnRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_ff12_AuthnRequest) */

struct zx_ff12_AuthnRequest_s* zx_root_POP_ff12_AuthnRequest(struct zx_root_s* x)
{
  struct zx_ff12_AuthnRequest_s* y;
  if (!x) return 0;
  y = x->ff12_AuthnRequest;
  if (y)
    x->ff12_AuthnRequest = (struct zx_ff12_AuthnRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_ff12_AuthnRequest) */

void zx_root_PUSH_ff12_AuthnRequest(struct zx_root_s* x, struct zx_ff12_AuthnRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ff12_AuthnRequest->gg.g;
  x->ff12_AuthnRequest = z;
}

/* FUNC(zx_root_REV_ff12_AuthnRequest) */

void zx_root_REV_ff12_AuthnRequest(struct zx_root_s* x)
{
  struct zx_ff12_AuthnRequest_s* nxt;
  struct zx_ff12_AuthnRequest_s* y;
  if (!x) return;
  y = x->ff12_AuthnRequest;
  if (!y) return;
  x->ff12_AuthnRequest = 0;
  while (y) {
    nxt = (struct zx_ff12_AuthnRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->ff12_AuthnRequest->gg.g;
    x->ff12_AuthnRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_ff12_AuthnRequest) */

void zx_root_PUT_ff12_AuthnRequest(struct zx_root_s* x, int n, struct zx_ff12_AuthnRequest_s* z)
{
  struct zx_ff12_AuthnRequest_s* y;
  if (!x || !z) return;
  y = x->ff12_AuthnRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ff12_AuthnRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_AuthnRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_ff12_AuthnRequest) */

void zx_root_ADD_ff12_AuthnRequest(struct zx_root_s* x, int n, struct zx_ff12_AuthnRequest_s* z)
{
  struct zx_ff12_AuthnRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ff12_AuthnRequest->gg.g;
    x->ff12_AuthnRequest = z;
    return;
  case -1:
    y = x->ff12_AuthnRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_AuthnRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ff12_AuthnRequest; n > 1 && y; --n, y = (struct zx_ff12_AuthnRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_ff12_AuthnRequest) */

void zx_root_DEL_ff12_AuthnRequest(struct zx_root_s* x, int n)
{
  struct zx_ff12_AuthnRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ff12_AuthnRequest = (struct zx_ff12_AuthnRequest_s*)x->ff12_AuthnRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_AuthnRequest_s*)x->ff12_AuthnRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_AuthnRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ff12_AuthnRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_AuthnRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_AuthnResponse) */

int zx_root_NUM_AuthnResponse(struct zx_root_s* x)
{
  struct zx_ff12_AuthnResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnResponse; y; ++n, y = (struct zx_ff12_AuthnResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_AuthnResponse) */

struct zx_ff12_AuthnResponse_s* zx_root_GET_AuthnResponse(struct zx_root_s* x, int n)
{
  struct zx_ff12_AuthnResponse_s* y;
  if (!x) return 0;
  for (y = x->AuthnResponse; n>=0 && y; --n, y = (struct zx_ff12_AuthnResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_AuthnResponse) */

struct zx_ff12_AuthnResponse_s* zx_root_POP_AuthnResponse(struct zx_root_s* x)
{
  struct zx_ff12_AuthnResponse_s* y;
  if (!x) return 0;
  y = x->AuthnResponse;
  if (y)
    x->AuthnResponse = (struct zx_ff12_AuthnResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_AuthnResponse) */

void zx_root_PUSH_AuthnResponse(struct zx_root_s* x, struct zx_ff12_AuthnResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthnResponse->gg.g;
  x->AuthnResponse = z;
}

/* FUNC(zx_root_REV_AuthnResponse) */

void zx_root_REV_AuthnResponse(struct zx_root_s* x)
{
  struct zx_ff12_AuthnResponse_s* nxt;
  struct zx_ff12_AuthnResponse_s* y;
  if (!x) return;
  y = x->AuthnResponse;
  if (!y) return;
  x->AuthnResponse = 0;
  while (y) {
    nxt = (struct zx_ff12_AuthnResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->AuthnResponse->gg.g;
    x->AuthnResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_AuthnResponse) */

void zx_root_PUT_AuthnResponse(struct zx_root_s* x, int n, struct zx_ff12_AuthnResponse_s* z)
{
  struct zx_ff12_AuthnResponse_s* y;
  if (!x || !z) return;
  y = x->AuthnResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AuthnResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_AuthnResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_AuthnResponse) */

void zx_root_ADD_AuthnResponse(struct zx_root_s* x, int n, struct zx_ff12_AuthnResponse_s* z)
{
  struct zx_ff12_AuthnResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AuthnResponse->gg.g;
    x->AuthnResponse = z;
    return;
  case -1:
    y = x->AuthnResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_AuthnResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnResponse; n > 1 && y; --n, y = (struct zx_ff12_AuthnResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_AuthnResponse) */

void zx_root_DEL_AuthnResponse(struct zx_root_s* x, int n)
{
  struct zx_ff12_AuthnResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthnResponse = (struct zx_ff12_AuthnResponse_s*)x->AuthnResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_AuthnResponse_s*)x->AuthnResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_AuthnResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_AuthnResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_AuthnRequestEnvelope) */

int zx_root_NUM_AuthnRequestEnvelope(struct zx_root_s* x)
{
  struct zx_ff12_AuthnRequestEnvelope_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnRequestEnvelope; y; ++n, y = (struct zx_ff12_AuthnRequestEnvelope_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_AuthnRequestEnvelope) */

struct zx_ff12_AuthnRequestEnvelope_s* zx_root_GET_AuthnRequestEnvelope(struct zx_root_s* x, int n)
{
  struct zx_ff12_AuthnRequestEnvelope_s* y;
  if (!x) return 0;
  for (y = x->AuthnRequestEnvelope; n>=0 && y; --n, y = (struct zx_ff12_AuthnRequestEnvelope_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_AuthnRequestEnvelope) */

struct zx_ff12_AuthnRequestEnvelope_s* zx_root_POP_AuthnRequestEnvelope(struct zx_root_s* x)
{
  struct zx_ff12_AuthnRequestEnvelope_s* y;
  if (!x) return 0;
  y = x->AuthnRequestEnvelope;
  if (y)
    x->AuthnRequestEnvelope = (struct zx_ff12_AuthnRequestEnvelope_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_AuthnRequestEnvelope) */

void zx_root_PUSH_AuthnRequestEnvelope(struct zx_root_s* x, struct zx_ff12_AuthnRequestEnvelope_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthnRequestEnvelope->gg.g;
  x->AuthnRequestEnvelope = z;
}

/* FUNC(zx_root_REV_AuthnRequestEnvelope) */

void zx_root_REV_AuthnRequestEnvelope(struct zx_root_s* x)
{
  struct zx_ff12_AuthnRequestEnvelope_s* nxt;
  struct zx_ff12_AuthnRequestEnvelope_s* y;
  if (!x) return;
  y = x->AuthnRequestEnvelope;
  if (!y) return;
  x->AuthnRequestEnvelope = 0;
  while (y) {
    nxt = (struct zx_ff12_AuthnRequestEnvelope_s*)y->gg.g.n;
    y->gg.g.n = &x->AuthnRequestEnvelope->gg.g;
    x->AuthnRequestEnvelope = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_AuthnRequestEnvelope) */

void zx_root_PUT_AuthnRequestEnvelope(struct zx_root_s* x, int n, struct zx_ff12_AuthnRequestEnvelope_s* z)
{
  struct zx_ff12_AuthnRequestEnvelope_s* y;
  if (!x || !z) return;
  y = x->AuthnRequestEnvelope;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AuthnRequestEnvelope = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_AuthnRequestEnvelope_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_AuthnRequestEnvelope) */

void zx_root_ADD_AuthnRequestEnvelope(struct zx_root_s* x, int n, struct zx_ff12_AuthnRequestEnvelope_s* z)
{
  struct zx_ff12_AuthnRequestEnvelope_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AuthnRequestEnvelope->gg.g;
    x->AuthnRequestEnvelope = z;
    return;
  case -1:
    y = x->AuthnRequestEnvelope;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_AuthnRequestEnvelope_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnRequestEnvelope; n > 1 && y; --n, y = (struct zx_ff12_AuthnRequestEnvelope_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_AuthnRequestEnvelope) */

void zx_root_DEL_AuthnRequestEnvelope(struct zx_root_s* x, int n)
{
  struct zx_ff12_AuthnRequestEnvelope_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthnRequestEnvelope = (struct zx_ff12_AuthnRequestEnvelope_s*)x->AuthnRequestEnvelope->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_AuthnRequestEnvelope_s*)x->AuthnRequestEnvelope;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_AuthnRequestEnvelope_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnRequestEnvelope; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_AuthnRequestEnvelope_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_AuthnResponseEnvelope) */

int zx_root_NUM_AuthnResponseEnvelope(struct zx_root_s* x)
{
  struct zx_ff12_AuthnResponseEnvelope_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->AuthnResponseEnvelope; y; ++n, y = (struct zx_ff12_AuthnResponseEnvelope_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_AuthnResponseEnvelope) */

struct zx_ff12_AuthnResponseEnvelope_s* zx_root_GET_AuthnResponseEnvelope(struct zx_root_s* x, int n)
{
  struct zx_ff12_AuthnResponseEnvelope_s* y;
  if (!x) return 0;
  for (y = x->AuthnResponseEnvelope; n>=0 && y; --n, y = (struct zx_ff12_AuthnResponseEnvelope_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_AuthnResponseEnvelope) */

struct zx_ff12_AuthnResponseEnvelope_s* zx_root_POP_AuthnResponseEnvelope(struct zx_root_s* x)
{
  struct zx_ff12_AuthnResponseEnvelope_s* y;
  if (!x) return 0;
  y = x->AuthnResponseEnvelope;
  if (y)
    x->AuthnResponseEnvelope = (struct zx_ff12_AuthnResponseEnvelope_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_AuthnResponseEnvelope) */

void zx_root_PUSH_AuthnResponseEnvelope(struct zx_root_s* x, struct zx_ff12_AuthnResponseEnvelope_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->AuthnResponseEnvelope->gg.g;
  x->AuthnResponseEnvelope = z;
}

/* FUNC(zx_root_REV_AuthnResponseEnvelope) */

void zx_root_REV_AuthnResponseEnvelope(struct zx_root_s* x)
{
  struct zx_ff12_AuthnResponseEnvelope_s* nxt;
  struct zx_ff12_AuthnResponseEnvelope_s* y;
  if (!x) return;
  y = x->AuthnResponseEnvelope;
  if (!y) return;
  x->AuthnResponseEnvelope = 0;
  while (y) {
    nxt = (struct zx_ff12_AuthnResponseEnvelope_s*)y->gg.g.n;
    y->gg.g.n = &x->AuthnResponseEnvelope->gg.g;
    x->AuthnResponseEnvelope = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_AuthnResponseEnvelope) */

void zx_root_PUT_AuthnResponseEnvelope(struct zx_root_s* x, int n, struct zx_ff12_AuthnResponseEnvelope_s* z)
{
  struct zx_ff12_AuthnResponseEnvelope_s* y;
  if (!x || !z) return;
  y = x->AuthnResponseEnvelope;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->AuthnResponseEnvelope = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_AuthnResponseEnvelope_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_AuthnResponseEnvelope) */

void zx_root_ADD_AuthnResponseEnvelope(struct zx_root_s* x, int n, struct zx_ff12_AuthnResponseEnvelope_s* z)
{
  struct zx_ff12_AuthnResponseEnvelope_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->AuthnResponseEnvelope->gg.g;
    x->AuthnResponseEnvelope = z;
    return;
  case -1:
    y = x->AuthnResponseEnvelope;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_AuthnResponseEnvelope_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnResponseEnvelope; n > 1 && y; --n, y = (struct zx_ff12_AuthnResponseEnvelope_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_AuthnResponseEnvelope) */

void zx_root_DEL_AuthnResponseEnvelope(struct zx_root_s* x, int n)
{
  struct zx_ff12_AuthnResponseEnvelope_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->AuthnResponseEnvelope = (struct zx_ff12_AuthnResponseEnvelope_s*)x->AuthnResponseEnvelope->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_AuthnResponseEnvelope_s*)x->AuthnResponseEnvelope;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_AuthnResponseEnvelope_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->AuthnResponseEnvelope; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_AuthnResponseEnvelope_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_RegisterNameIdentifierRequest) */

int zx_root_NUM_RegisterNameIdentifierRequest(struct zx_root_s* x)
{
  struct zx_ff12_RegisterNameIdentifierRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RegisterNameIdentifierRequest; y; ++n, y = (struct zx_ff12_RegisterNameIdentifierRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_RegisterNameIdentifierRequest) */

struct zx_ff12_RegisterNameIdentifierRequest_s* zx_root_GET_RegisterNameIdentifierRequest(struct zx_root_s* x, int n)
{
  struct zx_ff12_RegisterNameIdentifierRequest_s* y;
  if (!x) return 0;
  for (y = x->RegisterNameIdentifierRequest; n>=0 && y; --n, y = (struct zx_ff12_RegisterNameIdentifierRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_RegisterNameIdentifierRequest) */

struct zx_ff12_RegisterNameIdentifierRequest_s* zx_root_POP_RegisterNameIdentifierRequest(struct zx_root_s* x)
{
  struct zx_ff12_RegisterNameIdentifierRequest_s* y;
  if (!x) return 0;
  y = x->RegisterNameIdentifierRequest;
  if (y)
    x->RegisterNameIdentifierRequest = (struct zx_ff12_RegisterNameIdentifierRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_RegisterNameIdentifierRequest) */

void zx_root_PUSH_RegisterNameIdentifierRequest(struct zx_root_s* x, struct zx_ff12_RegisterNameIdentifierRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RegisterNameIdentifierRequest->gg.g;
  x->RegisterNameIdentifierRequest = z;
}

/* FUNC(zx_root_REV_RegisterNameIdentifierRequest) */

void zx_root_REV_RegisterNameIdentifierRequest(struct zx_root_s* x)
{
  struct zx_ff12_RegisterNameIdentifierRequest_s* nxt;
  struct zx_ff12_RegisterNameIdentifierRequest_s* y;
  if (!x) return;
  y = x->RegisterNameIdentifierRequest;
  if (!y) return;
  x->RegisterNameIdentifierRequest = 0;
  while (y) {
    nxt = (struct zx_ff12_RegisterNameIdentifierRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->RegisterNameIdentifierRequest->gg.g;
    x->RegisterNameIdentifierRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_RegisterNameIdentifierRequest) */

void zx_root_PUT_RegisterNameIdentifierRequest(struct zx_root_s* x, int n, struct zx_ff12_RegisterNameIdentifierRequest_s* z)
{
  struct zx_ff12_RegisterNameIdentifierRequest_s* y;
  if (!x || !z) return;
  y = x->RegisterNameIdentifierRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RegisterNameIdentifierRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_RegisterNameIdentifierRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_RegisterNameIdentifierRequest) */

void zx_root_ADD_RegisterNameIdentifierRequest(struct zx_root_s* x, int n, struct zx_ff12_RegisterNameIdentifierRequest_s* z)
{
  struct zx_ff12_RegisterNameIdentifierRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RegisterNameIdentifierRequest->gg.g;
    x->RegisterNameIdentifierRequest = z;
    return;
  case -1:
    y = x->RegisterNameIdentifierRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_RegisterNameIdentifierRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RegisterNameIdentifierRequest; n > 1 && y; --n, y = (struct zx_ff12_RegisterNameIdentifierRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_RegisterNameIdentifierRequest) */

void zx_root_DEL_RegisterNameIdentifierRequest(struct zx_root_s* x, int n)
{
  struct zx_ff12_RegisterNameIdentifierRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RegisterNameIdentifierRequest = (struct zx_ff12_RegisterNameIdentifierRequest_s*)x->RegisterNameIdentifierRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_RegisterNameIdentifierRequest_s*)x->RegisterNameIdentifierRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_RegisterNameIdentifierRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RegisterNameIdentifierRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_RegisterNameIdentifierRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_RegisterNameIdentifierResponse) */

int zx_root_NUM_RegisterNameIdentifierResponse(struct zx_root_s* x)
{
  struct zx_ff12_RegisterNameIdentifierResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->RegisterNameIdentifierResponse; y; ++n, y = (struct zx_ff12_RegisterNameIdentifierResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_RegisterNameIdentifierResponse) */

struct zx_ff12_RegisterNameIdentifierResponse_s* zx_root_GET_RegisterNameIdentifierResponse(struct zx_root_s* x, int n)
{
  struct zx_ff12_RegisterNameIdentifierResponse_s* y;
  if (!x) return 0;
  for (y = x->RegisterNameIdentifierResponse; n>=0 && y; --n, y = (struct zx_ff12_RegisterNameIdentifierResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_RegisterNameIdentifierResponse) */

struct zx_ff12_RegisterNameIdentifierResponse_s* zx_root_POP_RegisterNameIdentifierResponse(struct zx_root_s* x)
{
  struct zx_ff12_RegisterNameIdentifierResponse_s* y;
  if (!x) return 0;
  y = x->RegisterNameIdentifierResponse;
  if (y)
    x->RegisterNameIdentifierResponse = (struct zx_ff12_RegisterNameIdentifierResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_RegisterNameIdentifierResponse) */

void zx_root_PUSH_RegisterNameIdentifierResponse(struct zx_root_s* x, struct zx_ff12_RegisterNameIdentifierResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->RegisterNameIdentifierResponse->gg.g;
  x->RegisterNameIdentifierResponse = z;
}

/* FUNC(zx_root_REV_RegisterNameIdentifierResponse) */

void zx_root_REV_RegisterNameIdentifierResponse(struct zx_root_s* x)
{
  struct zx_ff12_RegisterNameIdentifierResponse_s* nxt;
  struct zx_ff12_RegisterNameIdentifierResponse_s* y;
  if (!x) return;
  y = x->RegisterNameIdentifierResponse;
  if (!y) return;
  x->RegisterNameIdentifierResponse = 0;
  while (y) {
    nxt = (struct zx_ff12_RegisterNameIdentifierResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->RegisterNameIdentifierResponse->gg.g;
    x->RegisterNameIdentifierResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_RegisterNameIdentifierResponse) */

void zx_root_PUT_RegisterNameIdentifierResponse(struct zx_root_s* x, int n, struct zx_ff12_RegisterNameIdentifierResponse_s* z)
{
  struct zx_ff12_RegisterNameIdentifierResponse_s* y;
  if (!x || !z) return;
  y = x->RegisterNameIdentifierResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->RegisterNameIdentifierResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_RegisterNameIdentifierResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_RegisterNameIdentifierResponse) */

void zx_root_ADD_RegisterNameIdentifierResponse(struct zx_root_s* x, int n, struct zx_ff12_RegisterNameIdentifierResponse_s* z)
{
  struct zx_ff12_RegisterNameIdentifierResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->RegisterNameIdentifierResponse->gg.g;
    x->RegisterNameIdentifierResponse = z;
    return;
  case -1:
    y = x->RegisterNameIdentifierResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_RegisterNameIdentifierResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RegisterNameIdentifierResponse; n > 1 && y; --n, y = (struct zx_ff12_RegisterNameIdentifierResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_RegisterNameIdentifierResponse) */

void zx_root_DEL_RegisterNameIdentifierResponse(struct zx_root_s* x, int n)
{
  struct zx_ff12_RegisterNameIdentifierResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->RegisterNameIdentifierResponse = (struct zx_ff12_RegisterNameIdentifierResponse_s*)x->RegisterNameIdentifierResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_RegisterNameIdentifierResponse_s*)x->RegisterNameIdentifierResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_RegisterNameIdentifierResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->RegisterNameIdentifierResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_RegisterNameIdentifierResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_FederationTerminationNotification) */

int zx_root_NUM_FederationTerminationNotification(struct zx_root_s* x)
{
  struct zx_ff12_FederationTerminationNotification_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->FederationTerminationNotification; y; ++n, y = (struct zx_ff12_FederationTerminationNotification_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_FederationTerminationNotification) */

struct zx_ff12_FederationTerminationNotification_s* zx_root_GET_FederationTerminationNotification(struct zx_root_s* x, int n)
{
  struct zx_ff12_FederationTerminationNotification_s* y;
  if (!x) return 0;
  for (y = x->FederationTerminationNotification; n>=0 && y; --n, y = (struct zx_ff12_FederationTerminationNotification_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_FederationTerminationNotification) */

struct zx_ff12_FederationTerminationNotification_s* zx_root_POP_FederationTerminationNotification(struct zx_root_s* x)
{
  struct zx_ff12_FederationTerminationNotification_s* y;
  if (!x) return 0;
  y = x->FederationTerminationNotification;
  if (y)
    x->FederationTerminationNotification = (struct zx_ff12_FederationTerminationNotification_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_FederationTerminationNotification) */

void zx_root_PUSH_FederationTerminationNotification(struct zx_root_s* x, struct zx_ff12_FederationTerminationNotification_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->FederationTerminationNotification->gg.g;
  x->FederationTerminationNotification = z;
}

/* FUNC(zx_root_REV_FederationTerminationNotification) */

void zx_root_REV_FederationTerminationNotification(struct zx_root_s* x)
{
  struct zx_ff12_FederationTerminationNotification_s* nxt;
  struct zx_ff12_FederationTerminationNotification_s* y;
  if (!x) return;
  y = x->FederationTerminationNotification;
  if (!y) return;
  x->FederationTerminationNotification = 0;
  while (y) {
    nxt = (struct zx_ff12_FederationTerminationNotification_s*)y->gg.g.n;
    y->gg.g.n = &x->FederationTerminationNotification->gg.g;
    x->FederationTerminationNotification = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_FederationTerminationNotification) */

void zx_root_PUT_FederationTerminationNotification(struct zx_root_s* x, int n, struct zx_ff12_FederationTerminationNotification_s* z)
{
  struct zx_ff12_FederationTerminationNotification_s* y;
  if (!x || !z) return;
  y = x->FederationTerminationNotification;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->FederationTerminationNotification = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_FederationTerminationNotification_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_FederationTerminationNotification) */

void zx_root_ADD_FederationTerminationNotification(struct zx_root_s* x, int n, struct zx_ff12_FederationTerminationNotification_s* z)
{
  struct zx_ff12_FederationTerminationNotification_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->FederationTerminationNotification->gg.g;
    x->FederationTerminationNotification = z;
    return;
  case -1:
    y = x->FederationTerminationNotification;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_FederationTerminationNotification_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->FederationTerminationNotification; n > 1 && y; --n, y = (struct zx_ff12_FederationTerminationNotification_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_FederationTerminationNotification) */

void zx_root_DEL_FederationTerminationNotification(struct zx_root_s* x, int n)
{
  struct zx_ff12_FederationTerminationNotification_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->FederationTerminationNotification = (struct zx_ff12_FederationTerminationNotification_s*)x->FederationTerminationNotification->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_FederationTerminationNotification_s*)x->FederationTerminationNotification;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_FederationTerminationNotification_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->FederationTerminationNotification; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_FederationTerminationNotification_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_ff12_LogoutRequest) */

int zx_root_NUM_ff12_LogoutRequest(struct zx_root_s* x)
{
  struct zx_ff12_LogoutRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ff12_LogoutRequest; y; ++n, y = (struct zx_ff12_LogoutRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_ff12_LogoutRequest) */

struct zx_ff12_LogoutRequest_s* zx_root_GET_ff12_LogoutRequest(struct zx_root_s* x, int n)
{
  struct zx_ff12_LogoutRequest_s* y;
  if (!x) return 0;
  for (y = x->ff12_LogoutRequest; n>=0 && y; --n, y = (struct zx_ff12_LogoutRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_ff12_LogoutRequest) */

struct zx_ff12_LogoutRequest_s* zx_root_POP_ff12_LogoutRequest(struct zx_root_s* x)
{
  struct zx_ff12_LogoutRequest_s* y;
  if (!x) return 0;
  y = x->ff12_LogoutRequest;
  if (y)
    x->ff12_LogoutRequest = (struct zx_ff12_LogoutRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_ff12_LogoutRequest) */

void zx_root_PUSH_ff12_LogoutRequest(struct zx_root_s* x, struct zx_ff12_LogoutRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ff12_LogoutRequest->gg.g;
  x->ff12_LogoutRequest = z;
}

/* FUNC(zx_root_REV_ff12_LogoutRequest) */

void zx_root_REV_ff12_LogoutRequest(struct zx_root_s* x)
{
  struct zx_ff12_LogoutRequest_s* nxt;
  struct zx_ff12_LogoutRequest_s* y;
  if (!x) return;
  y = x->ff12_LogoutRequest;
  if (!y) return;
  x->ff12_LogoutRequest = 0;
  while (y) {
    nxt = (struct zx_ff12_LogoutRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->ff12_LogoutRequest->gg.g;
    x->ff12_LogoutRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_ff12_LogoutRequest) */

void zx_root_PUT_ff12_LogoutRequest(struct zx_root_s* x, int n, struct zx_ff12_LogoutRequest_s* z)
{
  struct zx_ff12_LogoutRequest_s* y;
  if (!x || !z) return;
  y = x->ff12_LogoutRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ff12_LogoutRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_LogoutRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_ff12_LogoutRequest) */

void zx_root_ADD_ff12_LogoutRequest(struct zx_root_s* x, int n, struct zx_ff12_LogoutRequest_s* z)
{
  struct zx_ff12_LogoutRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ff12_LogoutRequest->gg.g;
    x->ff12_LogoutRequest = z;
    return;
  case -1:
    y = x->ff12_LogoutRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_LogoutRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ff12_LogoutRequest; n > 1 && y; --n, y = (struct zx_ff12_LogoutRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_ff12_LogoutRequest) */

void zx_root_DEL_ff12_LogoutRequest(struct zx_root_s* x, int n)
{
  struct zx_ff12_LogoutRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ff12_LogoutRequest = (struct zx_ff12_LogoutRequest_s*)x->ff12_LogoutRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_LogoutRequest_s*)x->ff12_LogoutRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_LogoutRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ff12_LogoutRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_LogoutRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_ff12_LogoutResponse) */

int zx_root_NUM_ff12_LogoutResponse(struct zx_root_s* x)
{
  struct zx_ff12_LogoutResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->ff12_LogoutResponse; y; ++n, y = (struct zx_ff12_LogoutResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_ff12_LogoutResponse) */

struct zx_ff12_LogoutResponse_s* zx_root_GET_ff12_LogoutResponse(struct zx_root_s* x, int n)
{
  struct zx_ff12_LogoutResponse_s* y;
  if (!x) return 0;
  for (y = x->ff12_LogoutResponse; n>=0 && y; --n, y = (struct zx_ff12_LogoutResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_ff12_LogoutResponse) */

struct zx_ff12_LogoutResponse_s* zx_root_POP_ff12_LogoutResponse(struct zx_root_s* x)
{
  struct zx_ff12_LogoutResponse_s* y;
  if (!x) return 0;
  y = x->ff12_LogoutResponse;
  if (y)
    x->ff12_LogoutResponse = (struct zx_ff12_LogoutResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_ff12_LogoutResponse) */

void zx_root_PUSH_ff12_LogoutResponse(struct zx_root_s* x, struct zx_ff12_LogoutResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->ff12_LogoutResponse->gg.g;
  x->ff12_LogoutResponse = z;
}

/* FUNC(zx_root_REV_ff12_LogoutResponse) */

void zx_root_REV_ff12_LogoutResponse(struct zx_root_s* x)
{
  struct zx_ff12_LogoutResponse_s* nxt;
  struct zx_ff12_LogoutResponse_s* y;
  if (!x) return;
  y = x->ff12_LogoutResponse;
  if (!y) return;
  x->ff12_LogoutResponse = 0;
  while (y) {
    nxt = (struct zx_ff12_LogoutResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->ff12_LogoutResponse->gg.g;
    x->ff12_LogoutResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_ff12_LogoutResponse) */

void zx_root_PUT_ff12_LogoutResponse(struct zx_root_s* x, int n, struct zx_ff12_LogoutResponse_s* z)
{
  struct zx_ff12_LogoutResponse_s* y;
  if (!x || !z) return;
  y = x->ff12_LogoutResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->ff12_LogoutResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_LogoutResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_ff12_LogoutResponse) */

void zx_root_ADD_ff12_LogoutResponse(struct zx_root_s* x, int n, struct zx_ff12_LogoutResponse_s* z)
{
  struct zx_ff12_LogoutResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->ff12_LogoutResponse->gg.g;
    x->ff12_LogoutResponse = z;
    return;
  case -1:
    y = x->ff12_LogoutResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_LogoutResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ff12_LogoutResponse; n > 1 && y; --n, y = (struct zx_ff12_LogoutResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_ff12_LogoutResponse) */

void zx_root_DEL_ff12_LogoutResponse(struct zx_root_s* x, int n)
{
  struct zx_ff12_LogoutResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->ff12_LogoutResponse = (struct zx_ff12_LogoutResponse_s*)x->ff12_LogoutResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_LogoutResponse_s*)x->ff12_LogoutResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_LogoutResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->ff12_LogoutResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_LogoutResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_NameIdentifierMappingRequest) */

int zx_root_NUM_NameIdentifierMappingRequest(struct zx_root_s* x)
{
  struct zx_ff12_NameIdentifierMappingRequest_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIdentifierMappingRequest; y; ++n, y = (struct zx_ff12_NameIdentifierMappingRequest_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_NameIdentifierMappingRequest) */

struct zx_ff12_NameIdentifierMappingRequest_s* zx_root_GET_NameIdentifierMappingRequest(struct zx_root_s* x, int n)
{
  struct zx_ff12_NameIdentifierMappingRequest_s* y;
  if (!x) return 0;
  for (y = x->NameIdentifierMappingRequest; n>=0 && y; --n, y = (struct zx_ff12_NameIdentifierMappingRequest_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_NameIdentifierMappingRequest) */

struct zx_ff12_NameIdentifierMappingRequest_s* zx_root_POP_NameIdentifierMappingRequest(struct zx_root_s* x)
{
  struct zx_ff12_NameIdentifierMappingRequest_s* y;
  if (!x) return 0;
  y = x->NameIdentifierMappingRequest;
  if (y)
    x->NameIdentifierMappingRequest = (struct zx_ff12_NameIdentifierMappingRequest_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_NameIdentifierMappingRequest) */

void zx_root_PUSH_NameIdentifierMappingRequest(struct zx_root_s* x, struct zx_ff12_NameIdentifierMappingRequest_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameIdentifierMappingRequest->gg.g;
  x->NameIdentifierMappingRequest = z;
}

/* FUNC(zx_root_REV_NameIdentifierMappingRequest) */

void zx_root_REV_NameIdentifierMappingRequest(struct zx_root_s* x)
{
  struct zx_ff12_NameIdentifierMappingRequest_s* nxt;
  struct zx_ff12_NameIdentifierMappingRequest_s* y;
  if (!x) return;
  y = x->NameIdentifierMappingRequest;
  if (!y) return;
  x->NameIdentifierMappingRequest = 0;
  while (y) {
    nxt = (struct zx_ff12_NameIdentifierMappingRequest_s*)y->gg.g.n;
    y->gg.g.n = &x->NameIdentifierMappingRequest->gg.g;
    x->NameIdentifierMappingRequest = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_NameIdentifierMappingRequest) */

void zx_root_PUT_NameIdentifierMappingRequest(struct zx_root_s* x, int n, struct zx_ff12_NameIdentifierMappingRequest_s* z)
{
  struct zx_ff12_NameIdentifierMappingRequest_s* y;
  if (!x || !z) return;
  y = x->NameIdentifierMappingRequest;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameIdentifierMappingRequest = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_NameIdentifierMappingRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_NameIdentifierMappingRequest) */

void zx_root_ADD_NameIdentifierMappingRequest(struct zx_root_s* x, int n, struct zx_ff12_NameIdentifierMappingRequest_s* z)
{
  struct zx_ff12_NameIdentifierMappingRequest_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameIdentifierMappingRequest->gg.g;
    x->NameIdentifierMappingRequest = z;
    return;
  case -1:
    y = x->NameIdentifierMappingRequest;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_NameIdentifierMappingRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIdentifierMappingRequest; n > 1 && y; --n, y = (struct zx_ff12_NameIdentifierMappingRequest_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_NameIdentifierMappingRequest) */

void zx_root_DEL_NameIdentifierMappingRequest(struct zx_root_s* x, int n)
{
  struct zx_ff12_NameIdentifierMappingRequest_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIdentifierMappingRequest = (struct zx_ff12_NameIdentifierMappingRequest_s*)x->NameIdentifierMappingRequest->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_NameIdentifierMappingRequest_s*)x->NameIdentifierMappingRequest;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_NameIdentifierMappingRequest_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIdentifierMappingRequest; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_NameIdentifierMappingRequest_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_NameIdentifierMappingResponse) */

int zx_root_NUM_NameIdentifierMappingResponse(struct zx_root_s* x)
{
  struct zx_ff12_NameIdentifierMappingResponse_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->NameIdentifierMappingResponse; y; ++n, y = (struct zx_ff12_NameIdentifierMappingResponse_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_NameIdentifierMappingResponse) */

struct zx_ff12_NameIdentifierMappingResponse_s* zx_root_GET_NameIdentifierMappingResponse(struct zx_root_s* x, int n)
{
  struct zx_ff12_NameIdentifierMappingResponse_s* y;
  if (!x) return 0;
  for (y = x->NameIdentifierMappingResponse; n>=0 && y; --n, y = (struct zx_ff12_NameIdentifierMappingResponse_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_NameIdentifierMappingResponse) */

struct zx_ff12_NameIdentifierMappingResponse_s* zx_root_POP_NameIdentifierMappingResponse(struct zx_root_s* x)
{
  struct zx_ff12_NameIdentifierMappingResponse_s* y;
  if (!x) return 0;
  y = x->NameIdentifierMappingResponse;
  if (y)
    x->NameIdentifierMappingResponse = (struct zx_ff12_NameIdentifierMappingResponse_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_NameIdentifierMappingResponse) */

void zx_root_PUSH_NameIdentifierMappingResponse(struct zx_root_s* x, struct zx_ff12_NameIdentifierMappingResponse_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->NameIdentifierMappingResponse->gg.g;
  x->NameIdentifierMappingResponse = z;
}

/* FUNC(zx_root_REV_NameIdentifierMappingResponse) */

void zx_root_REV_NameIdentifierMappingResponse(struct zx_root_s* x)
{
  struct zx_ff12_NameIdentifierMappingResponse_s* nxt;
  struct zx_ff12_NameIdentifierMappingResponse_s* y;
  if (!x) return;
  y = x->NameIdentifierMappingResponse;
  if (!y) return;
  x->NameIdentifierMappingResponse = 0;
  while (y) {
    nxt = (struct zx_ff12_NameIdentifierMappingResponse_s*)y->gg.g.n;
    y->gg.g.n = &x->NameIdentifierMappingResponse->gg.g;
    x->NameIdentifierMappingResponse = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_NameIdentifierMappingResponse) */

void zx_root_PUT_NameIdentifierMappingResponse(struct zx_root_s* x, int n, struct zx_ff12_NameIdentifierMappingResponse_s* z)
{
  struct zx_ff12_NameIdentifierMappingResponse_s* y;
  if (!x || !z) return;
  y = x->NameIdentifierMappingResponse;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->NameIdentifierMappingResponse = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_NameIdentifierMappingResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_NameIdentifierMappingResponse) */

void zx_root_ADD_NameIdentifierMappingResponse(struct zx_root_s* x, int n, struct zx_ff12_NameIdentifierMappingResponse_s* z)
{
  struct zx_ff12_NameIdentifierMappingResponse_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->NameIdentifierMappingResponse->gg.g;
    x->NameIdentifierMappingResponse = z;
    return;
  case -1:
    y = x->NameIdentifierMappingResponse;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_ff12_NameIdentifierMappingResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIdentifierMappingResponse; n > 1 && y; --n, y = (struct zx_ff12_NameIdentifierMappingResponse_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_NameIdentifierMappingResponse) */

void zx_root_DEL_NameIdentifierMappingResponse(struct zx_root_s* x, int n)
{
  struct zx_ff12_NameIdentifierMappingResponse_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->NameIdentifierMappingResponse = (struct zx_ff12_NameIdentifierMappingResponse_s*)x->NameIdentifierMappingResponse->gg.g.n;
    return;
  case -1:
    y = (struct zx_ff12_NameIdentifierMappingResponse_s*)x->NameIdentifierMappingResponse;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_ff12_NameIdentifierMappingResponse_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->NameIdentifierMappingResponse; n > 1 && y->gg.g.n; --n, y = (struct zx_ff12_NameIdentifierMappingResponse_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_m20_EntityDescriptor) */

int zx_root_NUM_m20_EntityDescriptor(struct zx_root_s* x)
{
  struct zx_m20_EntityDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->m20_EntityDescriptor; y; ++n, y = (struct zx_m20_EntityDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_m20_EntityDescriptor) */

struct zx_m20_EntityDescriptor_s* zx_root_GET_m20_EntityDescriptor(struct zx_root_s* x, int n)
{
  struct zx_m20_EntityDescriptor_s* y;
  if (!x) return 0;
  for (y = x->m20_EntityDescriptor; n>=0 && y; --n, y = (struct zx_m20_EntityDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_m20_EntityDescriptor) */

struct zx_m20_EntityDescriptor_s* zx_root_POP_m20_EntityDescriptor(struct zx_root_s* x)
{
  struct zx_m20_EntityDescriptor_s* y;
  if (!x) return 0;
  y = x->m20_EntityDescriptor;
  if (y)
    x->m20_EntityDescriptor = (struct zx_m20_EntityDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_m20_EntityDescriptor) */

void zx_root_PUSH_m20_EntityDescriptor(struct zx_root_s* x, struct zx_m20_EntityDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->m20_EntityDescriptor->gg.g;
  x->m20_EntityDescriptor = z;
}

/* FUNC(zx_root_REV_m20_EntityDescriptor) */

void zx_root_REV_m20_EntityDescriptor(struct zx_root_s* x)
{
  struct zx_m20_EntityDescriptor_s* nxt;
  struct zx_m20_EntityDescriptor_s* y;
  if (!x) return;
  y = x->m20_EntityDescriptor;
  if (!y) return;
  x->m20_EntityDescriptor = 0;
  while (y) {
    nxt = (struct zx_m20_EntityDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->m20_EntityDescriptor->gg.g;
    x->m20_EntityDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_m20_EntityDescriptor) */

void zx_root_PUT_m20_EntityDescriptor(struct zx_root_s* x, int n, struct zx_m20_EntityDescriptor_s* z)
{
  struct zx_m20_EntityDescriptor_s* y;
  if (!x || !z) return;
  y = x->m20_EntityDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->m20_EntityDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_EntityDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_m20_EntityDescriptor) */

void zx_root_ADD_m20_EntityDescriptor(struct zx_root_s* x, int n, struct zx_m20_EntityDescriptor_s* z)
{
  struct zx_m20_EntityDescriptor_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->m20_EntityDescriptor->gg.g;
    x->m20_EntityDescriptor = z;
    return;
  case -1:
    y = x->m20_EntityDescriptor;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_m20_EntityDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->m20_EntityDescriptor; n > 1 && y; --n, y = (struct zx_m20_EntityDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_m20_EntityDescriptor) */

void zx_root_DEL_m20_EntityDescriptor(struct zx_root_s* x, int n)
{
  struct zx_m20_EntityDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->m20_EntityDescriptor = (struct zx_m20_EntityDescriptor_s*)x->m20_EntityDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_EntityDescriptor_s*)x->m20_EntityDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_EntityDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->m20_EntityDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_EntityDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif



#ifdef ZX_ENA_GETPUT

/* FUNC(zx_root_NUM_m20_EntitiesDescriptor) */

int zx_root_NUM_m20_EntitiesDescriptor(struct zx_root_s* x)
{
  struct zx_m20_EntitiesDescriptor_s* y;
  int n = 0;
  if (!x) return 0;
  for (y = x->m20_EntitiesDescriptor; y; ++n, y = (struct zx_m20_EntitiesDescriptor_s*)y->gg.g.n) ;
  return n;
}

/* FUNC(zx_root_GET_m20_EntitiesDescriptor) */

struct zx_m20_EntitiesDescriptor_s* zx_root_GET_m20_EntitiesDescriptor(struct zx_root_s* x, int n)
{
  struct zx_m20_EntitiesDescriptor_s* y;
  if (!x) return 0;
  for (y = x->m20_EntitiesDescriptor; n>=0 && y; --n, y = (struct zx_m20_EntitiesDescriptor_s*)y->gg.g.n) ;
  return y;
}

/* FUNC(zx_root_POP_m20_EntitiesDescriptor) */

struct zx_m20_EntitiesDescriptor_s* zx_root_POP_m20_EntitiesDescriptor(struct zx_root_s* x)
{
  struct zx_m20_EntitiesDescriptor_s* y;
  if (!x) return 0;
  y = x->m20_EntitiesDescriptor;
  if (y)
    x->m20_EntitiesDescriptor = (struct zx_m20_EntitiesDescriptor_s*)y->gg.g.n;
  return y;
}

/* FUNC(zx_root_PUSH_m20_EntitiesDescriptor) */

void zx_root_PUSH_m20_EntitiesDescriptor(struct zx_root_s* x, struct zx_m20_EntitiesDescriptor_s* z)
{
  if (!x || !z) return;
  z->gg.g.n = &x->m20_EntitiesDescriptor->gg.g;
  x->m20_EntitiesDescriptor = z;
}

/* FUNC(zx_root_REV_m20_EntitiesDescriptor) */

void zx_root_REV_m20_EntitiesDescriptor(struct zx_root_s* x)
{
  struct zx_m20_EntitiesDescriptor_s* nxt;
  struct zx_m20_EntitiesDescriptor_s* y;
  if (!x) return;
  y = x->m20_EntitiesDescriptor;
  if (!y) return;
  x->m20_EntitiesDescriptor = 0;
  while (y) {
    nxt = (struct zx_m20_EntitiesDescriptor_s*)y->gg.g.n;
    y->gg.g.n = &x->m20_EntitiesDescriptor->gg.g;
    x->m20_EntitiesDescriptor = y;
    y = nxt;
  }
}

/* FUNC(zx_root_PUT_m20_EntitiesDescriptor) */

void zx_root_PUT_m20_EntitiesDescriptor(struct zx_root_s* x, int n, struct zx_m20_EntitiesDescriptor_s* z)
{
  struct zx_m20_EntitiesDescriptor_s* y;
  if (!x || !z) return;
  y = x->m20_EntitiesDescriptor;
  if (!y) return;
  switch (n) {
  case 0:
    z->gg.g.n = y->gg.g.n;
    x->m20_EntitiesDescriptor = z;
    return;
  default:
    for (; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_EntitiesDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
    z->gg.g.n = y->gg.g.n->n;
    y->gg.g.n = &z->gg.g;
  }
}

/* FUNC(zx_root_ADD_m20_EntitiesDescriptor) */

void zx_root_ADD_m20_EntitiesDescriptor(struct zx_root_s* x, int n, struct zx_m20_EntitiesDescriptor_s* z)
{
  struct zx_m20_EntitiesDescriptor_s* y;
  if (!x || !z) return;
  switch (n) {
  case 0:
  add_to_start:
    z->gg.g.n = &x->m20_EntitiesDescriptor->gg.g;
    x->m20_EntitiesDescriptor = z;
    return;
  case -1:
    y = x->m20_EntitiesDescriptor;
    if (!y) goto add_to_start;
    for (; y->gg.g.n; y = (struct zx_m20_EntitiesDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->m20_EntitiesDescriptor; n > 1 && y; --n, y = (struct zx_m20_EntitiesDescriptor_s*)y->gg.g.n) ;
    if (!y) return;
  }
  z->gg.g.n = y->gg.g.n;
  y->gg.g.n = &z->gg.g;
}

/* FUNC(zx_root_DEL_m20_EntitiesDescriptor) */

void zx_root_DEL_m20_EntitiesDescriptor(struct zx_root_s* x, int n)
{
  struct zx_m20_EntitiesDescriptor_s* y;
  if (!x) return;
  switch (n) {
  case 0:
    x->m20_EntitiesDescriptor = (struct zx_m20_EntitiesDescriptor_s*)x->m20_EntitiesDescriptor->gg.g.n;
    return;
  case -1:
    y = (struct zx_m20_EntitiesDescriptor_s*)x->m20_EntitiesDescriptor;
    if (!y) return;
    for (; y->gg.g.n; y = (struct zx_m20_EntitiesDescriptor_s*)y->gg.g.n) ;
    break;
  default:
    for (y = x->m20_EntitiesDescriptor; n > 1 && y->gg.g.n; --n, y = (struct zx_m20_EntitiesDescriptor_s*)y->gg.g.n) ;
    if (!y->gg.g.n) return;
  }
  y->gg.g.n = y->gg.g.n->n;
}

#endif











/* EOF -- c/zx-getput.c */
