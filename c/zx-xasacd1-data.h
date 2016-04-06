/* c/zx-xasacd1-data.h - WARNING: This header was auto generated by xsd2sg.pl. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006,2010 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_xasacd1_data_h
#define _c_zx_xasacd1_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- xasacd1_ReferencedPolicies -------------------------- */
/* refby( zx_xaspcd1_XACMLAuthzDecisionQuery_s zx_xasacd1_XACMLPolicyStatement_s ) */
#ifndef zx_xasacd1_ReferencedPolicies_EXT
#define zx_xasacd1_ReferencedPolicies_EXT
#endif
struct zx_xasacd1_ReferencedPolicies_s {
  ZX_ELEM_EXT
  zx_xasacd1_ReferencedPolicies_EXT
  struct zx_xa_Policy_s* Policy;	/* {0,1} nada */
  struct zx_xa_PolicySet_s* PolicySet;	/* {0,1} nada */
};

#define zx_NEW_xasacd1_ReferencedPolicies(c, father) (struct zx_xasacd1_ReferencedPolicies_s*)zx_new_elem((c),(father),zx_xasacd1_ReferencedPolicies_ELEM)
int zx_DEC_ATTR_xasacd1_ReferencedPolicies(struct zx_ctx* c, struct zx_xasacd1_ReferencedPolicies_s* x);
int zx_DEC_ELEM_xasacd1_ReferencedPolicies(struct zx_ctx* c, struct zx_xasacd1_ReferencedPolicies_s* x);

#ifdef ZX_ENA_AUX
struct zx_xasacd1_ReferencedPolicies_s* zx_DEEP_CLONE_xasacd1_ReferencedPolicies(struct zx_ctx* c, struct zx_xasacd1_ReferencedPolicies_s* x, int dup_strs);
void zx_DUP_STRS_xasacd1_ReferencedPolicies(struct zx_ctx* c, struct zx_xasacd1_ReferencedPolicies_s* x);
int zx_WALK_SO_xasacd1_ReferencedPolicies(struct zx_ctx* c, struct zx_xasacd1_ReferencedPolicies_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xasacd1_ReferencedPolicies(struct zx_ctx* c, struct zx_xasacd1_ReferencedPolicies_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif

#ifdef ZX_ENA_GETPUT

struct zx_xa_Policy_s* zx_xasacd1_ReferencedPolicies_GET_Policy(struct zx_xasacd1_ReferencedPolicies_s* x, int n);
struct zx_xa_PolicySet_s* zx_xasacd1_ReferencedPolicies_GET_PolicySet(struct zx_xasacd1_ReferencedPolicies_s* x, int n);

int zx_xasacd1_ReferencedPolicies_NUM_Policy(struct zx_xasacd1_ReferencedPolicies_s* x);
int zx_xasacd1_ReferencedPolicies_NUM_PolicySet(struct zx_xasacd1_ReferencedPolicies_s* x);

struct zx_xa_Policy_s* zx_xasacd1_ReferencedPolicies_POP_Policy(struct zx_xasacd1_ReferencedPolicies_s* x);
struct zx_xa_PolicySet_s* zx_xasacd1_ReferencedPolicies_POP_PolicySet(struct zx_xasacd1_ReferencedPolicies_s* x);

void zx_xasacd1_ReferencedPolicies_PUSH_Policy(struct zx_xasacd1_ReferencedPolicies_s* x, struct zx_xa_Policy_s* y);
void zx_xasacd1_ReferencedPolicies_PUSH_PolicySet(struct zx_xasacd1_ReferencedPolicies_s* x, struct zx_xa_PolicySet_s* y);


void zx_xasacd1_ReferencedPolicies_PUT_Policy(struct zx_xasacd1_ReferencedPolicies_s* x, int n, struct zx_xa_Policy_s* y);
void zx_xasacd1_ReferencedPolicies_PUT_PolicySet(struct zx_xasacd1_ReferencedPolicies_s* x, int n, struct zx_xa_PolicySet_s* y);

void zx_xasacd1_ReferencedPolicies_ADD_Policy(struct zx_xasacd1_ReferencedPolicies_s* x, int n, struct zx_xa_Policy_s* z);
void zx_xasacd1_ReferencedPolicies_ADD_PolicySet(struct zx_xasacd1_ReferencedPolicies_s* x, int n, struct zx_xa_PolicySet_s* z);

void zx_xasacd1_ReferencedPolicies_DEL_Policy(struct zx_xasacd1_ReferencedPolicies_s* x, int n);
void zx_xasacd1_ReferencedPolicies_DEL_PolicySet(struct zx_xasacd1_ReferencedPolicies_s* x, int n);

void zx_xasacd1_ReferencedPolicies_REV_Policy(struct zx_xasacd1_ReferencedPolicies_s* x);
void zx_xasacd1_ReferencedPolicies_REV_PolicySet(struct zx_xasacd1_ReferencedPolicies_s* x);

#endif
/* -------------------------- xasacd1_XACMLAuthzDecisionStatement -------------------------- */
/* refby( zx_sa11_Assertion_s zx_sa_Assertion_s zx_ff12_Assertion_s ) */
#ifndef zx_xasacd1_XACMLAuthzDecisionStatement_EXT
#define zx_xasacd1_XACMLAuthzDecisionStatement_EXT
#endif
struct zx_xasacd1_XACMLAuthzDecisionStatement_s {
  ZX_ELEM_EXT
  zx_xasacd1_XACMLAuthzDecisionStatement_EXT
  struct zx_xac_Response_s* Response;	/* {1,1}  */
  struct zx_xac_Request_s* Request;	/* {0,1} nada */
};

#define zx_NEW_xasacd1_XACMLAuthzDecisionStatement(c, father) (struct zx_xasacd1_XACMLAuthzDecisionStatement_s*)zx_new_elem((c),(father),zx_xasacd1_XACMLAuthzDecisionStatement_ELEM)
int zx_DEC_ATTR_xasacd1_XACMLAuthzDecisionStatement(struct zx_ctx* c, struct zx_xasacd1_XACMLAuthzDecisionStatement_s* x);
int zx_DEC_ELEM_xasacd1_XACMLAuthzDecisionStatement(struct zx_ctx* c, struct zx_xasacd1_XACMLAuthzDecisionStatement_s* x);

#ifdef ZX_ENA_AUX
struct zx_xasacd1_XACMLAuthzDecisionStatement_s* zx_DEEP_CLONE_xasacd1_XACMLAuthzDecisionStatement(struct zx_ctx* c, struct zx_xasacd1_XACMLAuthzDecisionStatement_s* x, int dup_strs);
void zx_DUP_STRS_xasacd1_XACMLAuthzDecisionStatement(struct zx_ctx* c, struct zx_xasacd1_XACMLAuthzDecisionStatement_s* x);
int zx_WALK_SO_xasacd1_XACMLAuthzDecisionStatement(struct zx_ctx* c, struct zx_xasacd1_XACMLAuthzDecisionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xasacd1_XACMLAuthzDecisionStatement(struct zx_ctx* c, struct zx_xasacd1_XACMLAuthzDecisionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif

#ifdef ZX_ENA_GETPUT

struct zx_xac_Response_s* zx_xasacd1_XACMLAuthzDecisionStatement_GET_Response(struct zx_xasacd1_XACMLAuthzDecisionStatement_s* x, int n);
struct zx_xac_Request_s* zx_xasacd1_XACMLAuthzDecisionStatement_GET_Request(struct zx_xasacd1_XACMLAuthzDecisionStatement_s* x, int n);

int zx_xasacd1_XACMLAuthzDecisionStatement_NUM_Response(struct zx_xasacd1_XACMLAuthzDecisionStatement_s* x);
int zx_xasacd1_XACMLAuthzDecisionStatement_NUM_Request(struct zx_xasacd1_XACMLAuthzDecisionStatement_s* x);

struct zx_xac_Response_s* zx_xasacd1_XACMLAuthzDecisionStatement_POP_Response(struct zx_xasacd1_XACMLAuthzDecisionStatement_s* x);
struct zx_xac_Request_s* zx_xasacd1_XACMLAuthzDecisionStatement_POP_Request(struct zx_xasacd1_XACMLAuthzDecisionStatement_s* x);

void zx_xasacd1_XACMLAuthzDecisionStatement_PUSH_Response(struct zx_xasacd1_XACMLAuthzDecisionStatement_s* x, struct zx_xac_Response_s* y);
void zx_xasacd1_XACMLAuthzDecisionStatement_PUSH_Request(struct zx_xasacd1_XACMLAuthzDecisionStatement_s* x, struct zx_xac_Request_s* y);


void zx_xasacd1_XACMLAuthzDecisionStatement_PUT_Response(struct zx_xasacd1_XACMLAuthzDecisionStatement_s* x, int n, struct zx_xac_Response_s* y);
void zx_xasacd1_XACMLAuthzDecisionStatement_PUT_Request(struct zx_xasacd1_XACMLAuthzDecisionStatement_s* x, int n, struct zx_xac_Request_s* y);

void zx_xasacd1_XACMLAuthzDecisionStatement_ADD_Response(struct zx_xasacd1_XACMLAuthzDecisionStatement_s* x, int n, struct zx_xac_Response_s* z);
void zx_xasacd1_XACMLAuthzDecisionStatement_ADD_Request(struct zx_xasacd1_XACMLAuthzDecisionStatement_s* x, int n, struct zx_xac_Request_s* z);

void zx_xasacd1_XACMLAuthzDecisionStatement_DEL_Response(struct zx_xasacd1_XACMLAuthzDecisionStatement_s* x, int n);
void zx_xasacd1_XACMLAuthzDecisionStatement_DEL_Request(struct zx_xasacd1_XACMLAuthzDecisionStatement_s* x, int n);

void zx_xasacd1_XACMLAuthzDecisionStatement_REV_Response(struct zx_xasacd1_XACMLAuthzDecisionStatement_s* x);
void zx_xasacd1_XACMLAuthzDecisionStatement_REV_Request(struct zx_xasacd1_XACMLAuthzDecisionStatement_s* x);

#endif
/* -------------------------- xasacd1_XACMLPolicyStatement -------------------------- */
/* refby( zx_sa11_Assertion_s zx_sa_Assertion_s zx_ff12_Assertion_s ) */
#ifndef zx_xasacd1_XACMLPolicyStatement_EXT
#define zx_xasacd1_XACMLPolicyStatement_EXT
#endif
struct zx_xasacd1_XACMLPolicyStatement_s {
  ZX_ELEM_EXT
  zx_xasacd1_XACMLPolicyStatement_EXT
  struct zx_xa_Policy_s* Policy;	/* {0,1} nada */
  struct zx_xa_PolicySet_s* PolicySet;	/* {0,1} nada */
  struct zx_xasacd1_ReferencedPolicies_s* ReferencedPolicies;	/* {0,1} nada */
};

#define zx_NEW_xasacd1_XACMLPolicyStatement(c, father) (struct zx_xasacd1_XACMLPolicyStatement_s*)zx_new_elem((c),(father),zx_xasacd1_XACMLPolicyStatement_ELEM)
int zx_DEC_ATTR_xasacd1_XACMLPolicyStatement(struct zx_ctx* c, struct zx_xasacd1_XACMLPolicyStatement_s* x);
int zx_DEC_ELEM_xasacd1_XACMLPolicyStatement(struct zx_ctx* c, struct zx_xasacd1_XACMLPolicyStatement_s* x);

#ifdef ZX_ENA_AUX
struct zx_xasacd1_XACMLPolicyStatement_s* zx_DEEP_CLONE_xasacd1_XACMLPolicyStatement(struct zx_ctx* c, struct zx_xasacd1_XACMLPolicyStatement_s* x, int dup_strs);
void zx_DUP_STRS_xasacd1_XACMLPolicyStatement(struct zx_ctx* c, struct zx_xasacd1_XACMLPolicyStatement_s* x);
int zx_WALK_SO_xasacd1_XACMLPolicyStatement(struct zx_ctx* c, struct zx_xasacd1_XACMLPolicyStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xasacd1_XACMLPolicyStatement(struct zx_ctx* c, struct zx_xasacd1_XACMLPolicyStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif

#ifdef ZX_ENA_GETPUT

struct zx_xa_Policy_s* zx_xasacd1_XACMLPolicyStatement_GET_Policy(struct zx_xasacd1_XACMLPolicyStatement_s* x, int n);
struct zx_xa_PolicySet_s* zx_xasacd1_XACMLPolicyStatement_GET_PolicySet(struct zx_xasacd1_XACMLPolicyStatement_s* x, int n);
struct zx_xasacd1_ReferencedPolicies_s* zx_xasacd1_XACMLPolicyStatement_GET_ReferencedPolicies(struct zx_xasacd1_XACMLPolicyStatement_s* x, int n);

int zx_xasacd1_XACMLPolicyStatement_NUM_Policy(struct zx_xasacd1_XACMLPolicyStatement_s* x);
int zx_xasacd1_XACMLPolicyStatement_NUM_PolicySet(struct zx_xasacd1_XACMLPolicyStatement_s* x);
int zx_xasacd1_XACMLPolicyStatement_NUM_ReferencedPolicies(struct zx_xasacd1_XACMLPolicyStatement_s* x);

struct zx_xa_Policy_s* zx_xasacd1_XACMLPolicyStatement_POP_Policy(struct zx_xasacd1_XACMLPolicyStatement_s* x);
struct zx_xa_PolicySet_s* zx_xasacd1_XACMLPolicyStatement_POP_PolicySet(struct zx_xasacd1_XACMLPolicyStatement_s* x);
struct zx_xasacd1_ReferencedPolicies_s* zx_xasacd1_XACMLPolicyStatement_POP_ReferencedPolicies(struct zx_xasacd1_XACMLPolicyStatement_s* x);

void zx_xasacd1_XACMLPolicyStatement_PUSH_Policy(struct zx_xasacd1_XACMLPolicyStatement_s* x, struct zx_xa_Policy_s* y);
void zx_xasacd1_XACMLPolicyStatement_PUSH_PolicySet(struct zx_xasacd1_XACMLPolicyStatement_s* x, struct zx_xa_PolicySet_s* y);
void zx_xasacd1_XACMLPolicyStatement_PUSH_ReferencedPolicies(struct zx_xasacd1_XACMLPolicyStatement_s* x, struct zx_xasacd1_ReferencedPolicies_s* y);


void zx_xasacd1_XACMLPolicyStatement_PUT_Policy(struct zx_xasacd1_XACMLPolicyStatement_s* x, int n, struct zx_xa_Policy_s* y);
void zx_xasacd1_XACMLPolicyStatement_PUT_PolicySet(struct zx_xasacd1_XACMLPolicyStatement_s* x, int n, struct zx_xa_PolicySet_s* y);
void zx_xasacd1_XACMLPolicyStatement_PUT_ReferencedPolicies(struct zx_xasacd1_XACMLPolicyStatement_s* x, int n, struct zx_xasacd1_ReferencedPolicies_s* y);

void zx_xasacd1_XACMLPolicyStatement_ADD_Policy(struct zx_xasacd1_XACMLPolicyStatement_s* x, int n, struct zx_xa_Policy_s* z);
void zx_xasacd1_XACMLPolicyStatement_ADD_PolicySet(struct zx_xasacd1_XACMLPolicyStatement_s* x, int n, struct zx_xa_PolicySet_s* z);
void zx_xasacd1_XACMLPolicyStatement_ADD_ReferencedPolicies(struct zx_xasacd1_XACMLPolicyStatement_s* x, int n, struct zx_xasacd1_ReferencedPolicies_s* z);

void zx_xasacd1_XACMLPolicyStatement_DEL_Policy(struct zx_xasacd1_XACMLPolicyStatement_s* x, int n);
void zx_xasacd1_XACMLPolicyStatement_DEL_PolicySet(struct zx_xasacd1_XACMLPolicyStatement_s* x, int n);
void zx_xasacd1_XACMLPolicyStatement_DEL_ReferencedPolicies(struct zx_xasacd1_XACMLPolicyStatement_s* x, int n);

void zx_xasacd1_XACMLPolicyStatement_REV_Policy(struct zx_xasacd1_XACMLPolicyStatement_s* x);
void zx_xasacd1_XACMLPolicyStatement_REV_PolicySet(struct zx_xasacd1_XACMLPolicyStatement_s* x);
void zx_xasacd1_XACMLPolicyStatement_REV_ReferencedPolicies(struct zx_xasacd1_XACMLPolicyStatement_s* x);

#endif

#endif
