/* c/zx-wst-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_wst_data_h
#define _c_zx_wst_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- wst_Authenticator -------------------------- */
/* refby( zx_wst_RequestSecurityTokenResponse_s ) */
#ifndef zx_wst_Authenticator_EXT
#define zx_wst_Authenticator_EXT
#endif

struct zx_wst_Authenticator_s* zx_DEC_wst_Authenticator(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_Authenticator_s* zx_NEW_wst_Authenticator(struct zx_ctx* c);
void zx_FREE_wst_Authenticator(struct zx_ctx* c, struct zx_wst_Authenticator_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_Authenticator_s* zx_DEEP_CLONE_wst_Authenticator(struct zx_ctx* c, struct zx_wst_Authenticator_s* x, int dup_strs);
void zx_DUP_STRS_wst_Authenticator(struct zx_ctx* c, struct zx_wst_Authenticator_s* x);
int zx_WALK_SO_wst_Authenticator(struct zx_ctx* c, struct zx_wst_Authenticator_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_Authenticator(struct zx_ctx* c, struct zx_wst_Authenticator_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_Authenticator(struct zx_ctx* c, struct zx_wst_Authenticator_s* x);
int zx_LEN_WO_wst_Authenticator(struct zx_ctx* c, struct zx_wst_Authenticator_s* x);
char* zx_ENC_SO_wst_Authenticator(struct zx_ctx* c, struct zx_wst_Authenticator_s* x, char* p);
char* zx_ENC_WO_wst_Authenticator(struct zx_ctx* c, struct zx_wst_Authenticator_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_Authenticator(struct zx_ctx* c, struct zx_wst_Authenticator_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_Authenticator(struct zx_ctx* c, struct zx_wst_Authenticator_s* x);

struct zx_wst_Authenticator_s {
  ZX_ELEM_EXT
  zx_wst_Authenticator_EXT
  struct zx_elem_s* CombinedHash;	/* {0,1} xs:base64Binary */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_wst_Authenticator_GET_CombinedHash(struct zx_wst_Authenticator_s* x, int n);

int zx_wst_Authenticator_NUM_CombinedHash(struct zx_wst_Authenticator_s* x);

struct zx_elem_s* zx_wst_Authenticator_POP_CombinedHash(struct zx_wst_Authenticator_s* x);

void zx_wst_Authenticator_PUSH_CombinedHash(struct zx_wst_Authenticator_s* x, struct zx_elem_s* y);


void zx_wst_Authenticator_PUT_CombinedHash(struct zx_wst_Authenticator_s* x, int n, struct zx_elem_s* y);

void zx_wst_Authenticator_ADD_CombinedHash(struct zx_wst_Authenticator_s* x, int n, struct zx_elem_s* z);

void zx_wst_Authenticator_DEL_CombinedHash(struct zx_wst_Authenticator_s* x, int n);

void zx_wst_Authenticator_REV_CombinedHash(struct zx_wst_Authenticator_s* x);

#endif
/* -------------------------- wst_BinaryExchange -------------------------- */
/* refby( ) */
#ifndef zx_wst_BinaryExchange_EXT
#define zx_wst_BinaryExchange_EXT
#endif

struct zx_wst_BinaryExchange_s* zx_DEC_wst_BinaryExchange(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_BinaryExchange_s* zx_NEW_wst_BinaryExchange(struct zx_ctx* c);
void zx_FREE_wst_BinaryExchange(struct zx_ctx* c, struct zx_wst_BinaryExchange_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_BinaryExchange_s* zx_DEEP_CLONE_wst_BinaryExchange(struct zx_ctx* c, struct zx_wst_BinaryExchange_s* x, int dup_strs);
void zx_DUP_STRS_wst_BinaryExchange(struct zx_ctx* c, struct zx_wst_BinaryExchange_s* x);
int zx_WALK_SO_wst_BinaryExchange(struct zx_ctx* c, struct zx_wst_BinaryExchange_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_BinaryExchange(struct zx_ctx* c, struct zx_wst_BinaryExchange_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_BinaryExchange(struct zx_ctx* c, struct zx_wst_BinaryExchange_s* x);
int zx_LEN_WO_wst_BinaryExchange(struct zx_ctx* c, struct zx_wst_BinaryExchange_s* x);
char* zx_ENC_SO_wst_BinaryExchange(struct zx_ctx* c, struct zx_wst_BinaryExchange_s* x, char* p);
char* zx_ENC_WO_wst_BinaryExchange(struct zx_ctx* c, struct zx_wst_BinaryExchange_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_BinaryExchange(struct zx_ctx* c, struct zx_wst_BinaryExchange_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_BinaryExchange(struct zx_ctx* c, struct zx_wst_BinaryExchange_s* x);

struct zx_wst_BinaryExchange_s {
  ZX_ELEM_EXT
  zx_wst_BinaryExchange_EXT
  struct zx_str* EncodingType;	/* {1,1} attribute xs:anyURI */
  struct zx_str* ValueType;	/* {1,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_wst_BinaryExchange_GET_EncodingType(struct zx_wst_BinaryExchange_s* x);
struct zx_str* zx_wst_BinaryExchange_GET_ValueType(struct zx_wst_BinaryExchange_s* x);





void zx_wst_BinaryExchange_PUT_EncodingType(struct zx_wst_BinaryExchange_s* x, struct zx_str* y);
void zx_wst_BinaryExchange_PUT_ValueType(struct zx_wst_BinaryExchange_s* x, struct zx_str* y);





#endif
/* -------------------------- wst_BinarySecret -------------------------- */
/* refby( ) */
#ifndef zx_wst_BinarySecret_EXT
#define zx_wst_BinarySecret_EXT
#endif

struct zx_wst_BinarySecret_s* zx_DEC_wst_BinarySecret(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_BinarySecret_s* zx_NEW_wst_BinarySecret(struct zx_ctx* c);
void zx_FREE_wst_BinarySecret(struct zx_ctx* c, struct zx_wst_BinarySecret_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_BinarySecret_s* zx_DEEP_CLONE_wst_BinarySecret(struct zx_ctx* c, struct zx_wst_BinarySecret_s* x, int dup_strs);
void zx_DUP_STRS_wst_BinarySecret(struct zx_ctx* c, struct zx_wst_BinarySecret_s* x);
int zx_WALK_SO_wst_BinarySecret(struct zx_ctx* c, struct zx_wst_BinarySecret_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_BinarySecret(struct zx_ctx* c, struct zx_wst_BinarySecret_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_BinarySecret(struct zx_ctx* c, struct zx_wst_BinarySecret_s* x);
int zx_LEN_WO_wst_BinarySecret(struct zx_ctx* c, struct zx_wst_BinarySecret_s* x);
char* zx_ENC_SO_wst_BinarySecret(struct zx_ctx* c, struct zx_wst_BinarySecret_s* x, char* p);
char* zx_ENC_WO_wst_BinarySecret(struct zx_ctx* c, struct zx_wst_BinarySecret_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_BinarySecret(struct zx_ctx* c, struct zx_wst_BinarySecret_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_BinarySecret(struct zx_ctx* c, struct zx_wst_BinarySecret_s* x);

struct zx_wst_BinarySecret_s {
  ZX_ELEM_EXT
  zx_wst_BinarySecret_EXT
  struct zx_str* Type;	/* {0,1} attribute wst:BinarySecretTypeEnum */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_wst_BinarySecret_GET_Type(struct zx_wst_BinarySecret_s* x);





void zx_wst_BinarySecret_PUT_Type(struct zx_wst_BinarySecret_s* x, struct zx_str* y);





#endif
/* -------------------------- wst_CancelTarget -------------------------- */
/* refby( ) */
#ifndef zx_wst_CancelTarget_EXT
#define zx_wst_CancelTarget_EXT
#endif

struct zx_wst_CancelTarget_s* zx_DEC_wst_CancelTarget(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_CancelTarget_s* zx_NEW_wst_CancelTarget(struct zx_ctx* c);
void zx_FREE_wst_CancelTarget(struct zx_ctx* c, struct zx_wst_CancelTarget_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_CancelTarget_s* zx_DEEP_CLONE_wst_CancelTarget(struct zx_ctx* c, struct zx_wst_CancelTarget_s* x, int dup_strs);
void zx_DUP_STRS_wst_CancelTarget(struct zx_ctx* c, struct zx_wst_CancelTarget_s* x);
int zx_WALK_SO_wst_CancelTarget(struct zx_ctx* c, struct zx_wst_CancelTarget_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_CancelTarget(struct zx_ctx* c, struct zx_wst_CancelTarget_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_CancelTarget(struct zx_ctx* c, struct zx_wst_CancelTarget_s* x);
int zx_LEN_WO_wst_CancelTarget(struct zx_ctx* c, struct zx_wst_CancelTarget_s* x);
char* zx_ENC_SO_wst_CancelTarget(struct zx_ctx* c, struct zx_wst_CancelTarget_s* x, char* p);
char* zx_ENC_WO_wst_CancelTarget(struct zx_ctx* c, struct zx_wst_CancelTarget_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_CancelTarget(struct zx_ctx* c, struct zx_wst_CancelTarget_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_CancelTarget(struct zx_ctx* c, struct zx_wst_CancelTarget_s* x);

struct zx_wst_CancelTarget_s {
  ZX_ELEM_EXT
  zx_wst_CancelTarget_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- wst_Claims -------------------------- */
/* refby( zx_wst_RequestSecurityToken_s ) */
#ifndef zx_wst_Claims_EXT
#define zx_wst_Claims_EXT
#endif

struct zx_wst_Claims_s* zx_DEC_wst_Claims(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_Claims_s* zx_NEW_wst_Claims(struct zx_ctx* c);
void zx_FREE_wst_Claims(struct zx_ctx* c, struct zx_wst_Claims_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_Claims_s* zx_DEEP_CLONE_wst_Claims(struct zx_ctx* c, struct zx_wst_Claims_s* x, int dup_strs);
void zx_DUP_STRS_wst_Claims(struct zx_ctx* c, struct zx_wst_Claims_s* x);
int zx_WALK_SO_wst_Claims(struct zx_ctx* c, struct zx_wst_Claims_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_Claims(struct zx_ctx* c, struct zx_wst_Claims_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_Claims(struct zx_ctx* c, struct zx_wst_Claims_s* x);
int zx_LEN_WO_wst_Claims(struct zx_ctx* c, struct zx_wst_Claims_s* x);
char* zx_ENC_SO_wst_Claims(struct zx_ctx* c, struct zx_wst_Claims_s* x, char* p);
char* zx_ENC_WO_wst_Claims(struct zx_ctx* c, struct zx_wst_Claims_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_Claims(struct zx_ctx* c, struct zx_wst_Claims_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_Claims(struct zx_ctx* c, struct zx_wst_Claims_s* x);

struct zx_wst_Claims_s {
  ZX_ELEM_EXT
  zx_wst_Claims_EXT
  struct zx_str* Dialect;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_wst_Claims_GET_Dialect(struct zx_wst_Claims_s* x);





void zx_wst_Claims_PUT_Dialect(struct zx_wst_Claims_s* x, struct zx_str* y);





#endif
/* -------------------------- wst_DelegateTo -------------------------- */
/* refby( zx_wst_RequestSecurityToken_s zx_wst_RequestSecurityTokenResponse_s ) */
#ifndef zx_wst_DelegateTo_EXT
#define zx_wst_DelegateTo_EXT
#endif

struct zx_wst_DelegateTo_s* zx_DEC_wst_DelegateTo(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_DelegateTo_s* zx_NEW_wst_DelegateTo(struct zx_ctx* c);
void zx_FREE_wst_DelegateTo(struct zx_ctx* c, struct zx_wst_DelegateTo_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_DelegateTo_s* zx_DEEP_CLONE_wst_DelegateTo(struct zx_ctx* c, struct zx_wst_DelegateTo_s* x, int dup_strs);
void zx_DUP_STRS_wst_DelegateTo(struct zx_ctx* c, struct zx_wst_DelegateTo_s* x);
int zx_WALK_SO_wst_DelegateTo(struct zx_ctx* c, struct zx_wst_DelegateTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_DelegateTo(struct zx_ctx* c, struct zx_wst_DelegateTo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_DelegateTo(struct zx_ctx* c, struct zx_wst_DelegateTo_s* x);
int zx_LEN_WO_wst_DelegateTo(struct zx_ctx* c, struct zx_wst_DelegateTo_s* x);
char* zx_ENC_SO_wst_DelegateTo(struct zx_ctx* c, struct zx_wst_DelegateTo_s* x, char* p);
char* zx_ENC_WO_wst_DelegateTo(struct zx_ctx* c, struct zx_wst_DelegateTo_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_DelegateTo(struct zx_ctx* c, struct zx_wst_DelegateTo_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_DelegateTo(struct zx_ctx* c, struct zx_wst_DelegateTo_s* x);

struct zx_wst_DelegateTo_s {
  ZX_ELEM_EXT
  zx_wst_DelegateTo_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- wst_Encryption -------------------------- */
/* refby( zx_wst_RequestSecurityToken_s zx_wst_RequestSecurityTokenResponse_s ) */
#ifndef zx_wst_Encryption_EXT
#define zx_wst_Encryption_EXT
#endif

struct zx_wst_Encryption_s* zx_DEC_wst_Encryption(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_Encryption_s* zx_NEW_wst_Encryption(struct zx_ctx* c);
void zx_FREE_wst_Encryption(struct zx_ctx* c, struct zx_wst_Encryption_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_Encryption_s* zx_DEEP_CLONE_wst_Encryption(struct zx_ctx* c, struct zx_wst_Encryption_s* x, int dup_strs);
void zx_DUP_STRS_wst_Encryption(struct zx_ctx* c, struct zx_wst_Encryption_s* x);
int zx_WALK_SO_wst_Encryption(struct zx_ctx* c, struct zx_wst_Encryption_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_Encryption(struct zx_ctx* c, struct zx_wst_Encryption_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_Encryption(struct zx_ctx* c, struct zx_wst_Encryption_s* x);
int zx_LEN_WO_wst_Encryption(struct zx_ctx* c, struct zx_wst_Encryption_s* x);
char* zx_ENC_SO_wst_Encryption(struct zx_ctx* c, struct zx_wst_Encryption_s* x, char* p);
char* zx_ENC_WO_wst_Encryption(struct zx_ctx* c, struct zx_wst_Encryption_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_Encryption(struct zx_ctx* c, struct zx_wst_Encryption_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_Encryption(struct zx_ctx* c, struct zx_wst_Encryption_s* x);

struct zx_wst_Encryption_s {
  ZX_ELEM_EXT
  zx_wst_Encryption_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- wst_Entropy -------------------------- */
/* refby( zx_wst_RequestSecurityToken_s zx_wst_RequestSecurityTokenResponse_s ) */
#ifndef zx_wst_Entropy_EXT
#define zx_wst_Entropy_EXT
#endif

struct zx_wst_Entropy_s* zx_DEC_wst_Entropy(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_Entropy_s* zx_NEW_wst_Entropy(struct zx_ctx* c);
void zx_FREE_wst_Entropy(struct zx_ctx* c, struct zx_wst_Entropy_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_Entropy_s* zx_DEEP_CLONE_wst_Entropy(struct zx_ctx* c, struct zx_wst_Entropy_s* x, int dup_strs);
void zx_DUP_STRS_wst_Entropy(struct zx_ctx* c, struct zx_wst_Entropy_s* x);
int zx_WALK_SO_wst_Entropy(struct zx_ctx* c, struct zx_wst_Entropy_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_Entropy(struct zx_ctx* c, struct zx_wst_Entropy_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_Entropy(struct zx_ctx* c, struct zx_wst_Entropy_s* x);
int zx_LEN_WO_wst_Entropy(struct zx_ctx* c, struct zx_wst_Entropy_s* x);
char* zx_ENC_SO_wst_Entropy(struct zx_ctx* c, struct zx_wst_Entropy_s* x, char* p);
char* zx_ENC_WO_wst_Entropy(struct zx_ctx* c, struct zx_wst_Entropy_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_Entropy(struct zx_ctx* c, struct zx_wst_Entropy_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_Entropy(struct zx_ctx* c, struct zx_wst_Entropy_s* x);

struct zx_wst_Entropy_s {
  ZX_ELEM_EXT
  zx_wst_Entropy_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- wst_IssuedTokens -------------------------- */
/* refby( ) */
#ifndef zx_wst_IssuedTokens_EXT
#define zx_wst_IssuedTokens_EXT
#endif

struct zx_wst_IssuedTokens_s* zx_DEC_wst_IssuedTokens(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_IssuedTokens_s* zx_NEW_wst_IssuedTokens(struct zx_ctx* c);
void zx_FREE_wst_IssuedTokens(struct zx_ctx* c, struct zx_wst_IssuedTokens_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_IssuedTokens_s* zx_DEEP_CLONE_wst_IssuedTokens(struct zx_ctx* c, struct zx_wst_IssuedTokens_s* x, int dup_strs);
void zx_DUP_STRS_wst_IssuedTokens(struct zx_ctx* c, struct zx_wst_IssuedTokens_s* x);
int zx_WALK_SO_wst_IssuedTokens(struct zx_ctx* c, struct zx_wst_IssuedTokens_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_IssuedTokens(struct zx_ctx* c, struct zx_wst_IssuedTokens_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_IssuedTokens(struct zx_ctx* c, struct zx_wst_IssuedTokens_s* x);
int zx_LEN_WO_wst_IssuedTokens(struct zx_ctx* c, struct zx_wst_IssuedTokens_s* x);
char* zx_ENC_SO_wst_IssuedTokens(struct zx_ctx* c, struct zx_wst_IssuedTokens_s* x, char* p);
char* zx_ENC_WO_wst_IssuedTokens(struct zx_ctx* c, struct zx_wst_IssuedTokens_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_IssuedTokens(struct zx_ctx* c, struct zx_wst_IssuedTokens_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_IssuedTokens(struct zx_ctx* c, struct zx_wst_IssuedTokens_s* x);

struct zx_wst_IssuedTokens_s {
  ZX_ELEM_EXT
  zx_wst_IssuedTokens_EXT
  struct zx_wst_RequestSecurityTokenResponse_s* RequestSecurityTokenResponse;	/* {1,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_wst_RequestSecurityTokenResponse_s* zx_wst_IssuedTokens_GET_RequestSecurityTokenResponse(struct zx_wst_IssuedTokens_s* x, int n);

int zx_wst_IssuedTokens_NUM_RequestSecurityTokenResponse(struct zx_wst_IssuedTokens_s* x);

struct zx_wst_RequestSecurityTokenResponse_s* zx_wst_IssuedTokens_POP_RequestSecurityTokenResponse(struct zx_wst_IssuedTokens_s* x);

void zx_wst_IssuedTokens_PUSH_RequestSecurityTokenResponse(struct zx_wst_IssuedTokens_s* x, struct zx_wst_RequestSecurityTokenResponse_s* y);


void zx_wst_IssuedTokens_PUT_RequestSecurityTokenResponse(struct zx_wst_IssuedTokens_s* x, int n, struct zx_wst_RequestSecurityTokenResponse_s* y);

void zx_wst_IssuedTokens_ADD_RequestSecurityTokenResponse(struct zx_wst_IssuedTokens_s* x, int n, struct zx_wst_RequestSecurityTokenResponse_s* z);

void zx_wst_IssuedTokens_DEL_RequestSecurityTokenResponse(struct zx_wst_IssuedTokens_s* x, int n);

void zx_wst_IssuedTokens_REV_RequestSecurityTokenResponse(struct zx_wst_IssuedTokens_s* x);

#endif
/* -------------------------- wst_Issuer -------------------------- */
/* refby( zx_wst_RequestSecurityToken_s zx_wst_RequestSecurityTokenResponse_s ) */
#ifndef zx_wst_Issuer_EXT
#define zx_wst_Issuer_EXT
#endif

struct zx_wst_Issuer_s* zx_DEC_wst_Issuer(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_Issuer_s* zx_NEW_wst_Issuer(struct zx_ctx* c);
void zx_FREE_wst_Issuer(struct zx_ctx* c, struct zx_wst_Issuer_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_Issuer_s* zx_DEEP_CLONE_wst_Issuer(struct zx_ctx* c, struct zx_wst_Issuer_s* x, int dup_strs);
void zx_DUP_STRS_wst_Issuer(struct zx_ctx* c, struct zx_wst_Issuer_s* x);
int zx_WALK_SO_wst_Issuer(struct zx_ctx* c, struct zx_wst_Issuer_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_Issuer(struct zx_ctx* c, struct zx_wst_Issuer_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_Issuer(struct zx_ctx* c, struct zx_wst_Issuer_s* x);
int zx_LEN_WO_wst_Issuer(struct zx_ctx* c, struct zx_wst_Issuer_s* x);
char* zx_ENC_SO_wst_Issuer(struct zx_ctx* c, struct zx_wst_Issuer_s* x, char* p);
char* zx_ENC_WO_wst_Issuer(struct zx_ctx* c, struct zx_wst_Issuer_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_Issuer(struct zx_ctx* c, struct zx_wst_Issuer_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_Issuer(struct zx_ctx* c, struct zx_wst_Issuer_s* x);

struct zx_wst_Issuer_s {
  ZX_ELEM_EXT
  zx_wst_Issuer_EXT
  struct zx_a_Address_s* Address;	/* {1,1}  */
  struct zx_a_ReferenceParameters_s* ReferenceParameters;	/* {0,1} nada */
  struct zx_a_Metadata_s* Metadata;	/* {0,1} nada */
  struct zx_str* ID;	/* {0,1} attribute xs:ID */
  struct zx_str* id;	/* {0,1} attribute xs:ID */
  struct zx_str* notOnOrAfter;	/* {0,1} attribute xs:dateTime */
  struct zx_str* Id;	/* {0,1} attribute xs:ID */
  struct zx_str* actor;	/* {0,1} attribute xs:anyURI */
  struct zx_str* mustUnderstand;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_wst_Issuer_GET_ID(struct zx_wst_Issuer_s* x);
struct zx_str* zx_wst_Issuer_GET_id(struct zx_wst_Issuer_s* x);
struct zx_str* zx_wst_Issuer_GET_notOnOrAfter(struct zx_wst_Issuer_s* x);
struct zx_str* zx_wst_Issuer_GET_Id(struct zx_wst_Issuer_s* x);
struct zx_str* zx_wst_Issuer_GET_actor(struct zx_wst_Issuer_s* x);
struct zx_str* zx_wst_Issuer_GET_mustUnderstand(struct zx_wst_Issuer_s* x);

struct zx_a_Address_s* zx_wst_Issuer_GET_Address(struct zx_wst_Issuer_s* x, int n);
struct zx_a_ReferenceParameters_s* zx_wst_Issuer_GET_ReferenceParameters(struct zx_wst_Issuer_s* x, int n);
struct zx_a_Metadata_s* zx_wst_Issuer_GET_Metadata(struct zx_wst_Issuer_s* x, int n);

int zx_wst_Issuer_NUM_Address(struct zx_wst_Issuer_s* x);
int zx_wst_Issuer_NUM_ReferenceParameters(struct zx_wst_Issuer_s* x);
int zx_wst_Issuer_NUM_Metadata(struct zx_wst_Issuer_s* x);

struct zx_a_Address_s* zx_wst_Issuer_POP_Address(struct zx_wst_Issuer_s* x);
struct zx_a_ReferenceParameters_s* zx_wst_Issuer_POP_ReferenceParameters(struct zx_wst_Issuer_s* x);
struct zx_a_Metadata_s* zx_wst_Issuer_POP_Metadata(struct zx_wst_Issuer_s* x);

void zx_wst_Issuer_PUSH_Address(struct zx_wst_Issuer_s* x, struct zx_a_Address_s* y);
void zx_wst_Issuer_PUSH_ReferenceParameters(struct zx_wst_Issuer_s* x, struct zx_a_ReferenceParameters_s* y);
void zx_wst_Issuer_PUSH_Metadata(struct zx_wst_Issuer_s* x, struct zx_a_Metadata_s* y);

void zx_wst_Issuer_PUT_ID(struct zx_wst_Issuer_s* x, struct zx_str* y);
void zx_wst_Issuer_PUT_id(struct zx_wst_Issuer_s* x, struct zx_str* y);
void zx_wst_Issuer_PUT_notOnOrAfter(struct zx_wst_Issuer_s* x, struct zx_str* y);
void zx_wst_Issuer_PUT_Id(struct zx_wst_Issuer_s* x, struct zx_str* y);
void zx_wst_Issuer_PUT_actor(struct zx_wst_Issuer_s* x, struct zx_str* y);
void zx_wst_Issuer_PUT_mustUnderstand(struct zx_wst_Issuer_s* x, struct zx_str* y);

void zx_wst_Issuer_PUT_Address(struct zx_wst_Issuer_s* x, int n, struct zx_a_Address_s* y);
void zx_wst_Issuer_PUT_ReferenceParameters(struct zx_wst_Issuer_s* x, int n, struct zx_a_ReferenceParameters_s* y);
void zx_wst_Issuer_PUT_Metadata(struct zx_wst_Issuer_s* x, int n, struct zx_a_Metadata_s* y);

void zx_wst_Issuer_ADD_Address(struct zx_wst_Issuer_s* x, int n, struct zx_a_Address_s* z);
void zx_wst_Issuer_ADD_ReferenceParameters(struct zx_wst_Issuer_s* x, int n, struct zx_a_ReferenceParameters_s* z);
void zx_wst_Issuer_ADD_Metadata(struct zx_wst_Issuer_s* x, int n, struct zx_a_Metadata_s* z);

void zx_wst_Issuer_DEL_Address(struct zx_wst_Issuer_s* x, int n);
void zx_wst_Issuer_DEL_ReferenceParameters(struct zx_wst_Issuer_s* x, int n);
void zx_wst_Issuer_DEL_Metadata(struct zx_wst_Issuer_s* x, int n);

void zx_wst_Issuer_REV_Address(struct zx_wst_Issuer_s* x);
void zx_wst_Issuer_REV_ReferenceParameters(struct zx_wst_Issuer_s* x);
void zx_wst_Issuer_REV_Metadata(struct zx_wst_Issuer_s* x);

#endif
/* -------------------------- wst_KeyExchangeToken -------------------------- */
/* refby( ) */
#ifndef zx_wst_KeyExchangeToken_EXT
#define zx_wst_KeyExchangeToken_EXT
#endif

struct zx_wst_KeyExchangeToken_s* zx_DEC_wst_KeyExchangeToken(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_KeyExchangeToken_s* zx_NEW_wst_KeyExchangeToken(struct zx_ctx* c);
void zx_FREE_wst_KeyExchangeToken(struct zx_ctx* c, struct zx_wst_KeyExchangeToken_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_KeyExchangeToken_s* zx_DEEP_CLONE_wst_KeyExchangeToken(struct zx_ctx* c, struct zx_wst_KeyExchangeToken_s* x, int dup_strs);
void zx_DUP_STRS_wst_KeyExchangeToken(struct zx_ctx* c, struct zx_wst_KeyExchangeToken_s* x);
int zx_WALK_SO_wst_KeyExchangeToken(struct zx_ctx* c, struct zx_wst_KeyExchangeToken_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_KeyExchangeToken(struct zx_ctx* c, struct zx_wst_KeyExchangeToken_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_KeyExchangeToken(struct zx_ctx* c, struct zx_wst_KeyExchangeToken_s* x);
int zx_LEN_WO_wst_KeyExchangeToken(struct zx_ctx* c, struct zx_wst_KeyExchangeToken_s* x);
char* zx_ENC_SO_wst_KeyExchangeToken(struct zx_ctx* c, struct zx_wst_KeyExchangeToken_s* x, char* p);
char* zx_ENC_WO_wst_KeyExchangeToken(struct zx_ctx* c, struct zx_wst_KeyExchangeToken_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_KeyExchangeToken(struct zx_ctx* c, struct zx_wst_KeyExchangeToken_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_KeyExchangeToken(struct zx_ctx* c, struct zx_wst_KeyExchangeToken_s* x);

struct zx_wst_KeyExchangeToken_s {
  ZX_ELEM_EXT
  zx_wst_KeyExchangeToken_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- wst_Lifetime -------------------------- */
/* refby( zx_wst_RequestSecurityToken_s zx_wst_RequestSecurityTokenResponse_s ) */
#ifndef zx_wst_Lifetime_EXT
#define zx_wst_Lifetime_EXT
#endif

struct zx_wst_Lifetime_s* zx_DEC_wst_Lifetime(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_Lifetime_s* zx_NEW_wst_Lifetime(struct zx_ctx* c);
void zx_FREE_wst_Lifetime(struct zx_ctx* c, struct zx_wst_Lifetime_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_Lifetime_s* zx_DEEP_CLONE_wst_Lifetime(struct zx_ctx* c, struct zx_wst_Lifetime_s* x, int dup_strs);
void zx_DUP_STRS_wst_Lifetime(struct zx_ctx* c, struct zx_wst_Lifetime_s* x);
int zx_WALK_SO_wst_Lifetime(struct zx_ctx* c, struct zx_wst_Lifetime_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_Lifetime(struct zx_ctx* c, struct zx_wst_Lifetime_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_Lifetime(struct zx_ctx* c, struct zx_wst_Lifetime_s* x);
int zx_LEN_WO_wst_Lifetime(struct zx_ctx* c, struct zx_wst_Lifetime_s* x);
char* zx_ENC_SO_wst_Lifetime(struct zx_ctx* c, struct zx_wst_Lifetime_s* x, char* p);
char* zx_ENC_WO_wst_Lifetime(struct zx_ctx* c, struct zx_wst_Lifetime_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_Lifetime(struct zx_ctx* c, struct zx_wst_Lifetime_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_Lifetime(struct zx_ctx* c, struct zx_wst_Lifetime_s* x);

struct zx_wst_Lifetime_s {
  ZX_ELEM_EXT
  zx_wst_Lifetime_EXT
  struct zx_wsu_Created_s* Created;	/* {0,1} nada */
  struct zx_wsu_Expires_s* Expires;	/* {0,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_wsu_Created_s* zx_wst_Lifetime_GET_Created(struct zx_wst_Lifetime_s* x, int n);
struct zx_wsu_Expires_s* zx_wst_Lifetime_GET_Expires(struct zx_wst_Lifetime_s* x, int n);

int zx_wst_Lifetime_NUM_Created(struct zx_wst_Lifetime_s* x);
int zx_wst_Lifetime_NUM_Expires(struct zx_wst_Lifetime_s* x);

struct zx_wsu_Created_s* zx_wst_Lifetime_POP_Created(struct zx_wst_Lifetime_s* x);
struct zx_wsu_Expires_s* zx_wst_Lifetime_POP_Expires(struct zx_wst_Lifetime_s* x);

void zx_wst_Lifetime_PUSH_Created(struct zx_wst_Lifetime_s* x, struct zx_wsu_Created_s* y);
void zx_wst_Lifetime_PUSH_Expires(struct zx_wst_Lifetime_s* x, struct zx_wsu_Expires_s* y);


void zx_wst_Lifetime_PUT_Created(struct zx_wst_Lifetime_s* x, int n, struct zx_wsu_Created_s* y);
void zx_wst_Lifetime_PUT_Expires(struct zx_wst_Lifetime_s* x, int n, struct zx_wsu_Expires_s* y);

void zx_wst_Lifetime_ADD_Created(struct zx_wst_Lifetime_s* x, int n, struct zx_wsu_Created_s* z);
void zx_wst_Lifetime_ADD_Expires(struct zx_wst_Lifetime_s* x, int n, struct zx_wsu_Expires_s* z);

void zx_wst_Lifetime_DEL_Created(struct zx_wst_Lifetime_s* x, int n);
void zx_wst_Lifetime_DEL_Expires(struct zx_wst_Lifetime_s* x, int n);

void zx_wst_Lifetime_REV_Created(struct zx_wst_Lifetime_s* x);
void zx_wst_Lifetime_REV_Expires(struct zx_wst_Lifetime_s* x);

#endif
/* -------------------------- wst_OnBehalfOf -------------------------- */
/* refby( zx_wst_RequestSecurityToken_s zx_wst_RequestSecurityTokenResponse_s ) */
#ifndef zx_wst_OnBehalfOf_EXT
#define zx_wst_OnBehalfOf_EXT
#endif

struct zx_wst_OnBehalfOf_s* zx_DEC_wst_OnBehalfOf(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_OnBehalfOf_s* zx_NEW_wst_OnBehalfOf(struct zx_ctx* c);
void zx_FREE_wst_OnBehalfOf(struct zx_ctx* c, struct zx_wst_OnBehalfOf_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_OnBehalfOf_s* zx_DEEP_CLONE_wst_OnBehalfOf(struct zx_ctx* c, struct zx_wst_OnBehalfOf_s* x, int dup_strs);
void zx_DUP_STRS_wst_OnBehalfOf(struct zx_ctx* c, struct zx_wst_OnBehalfOf_s* x);
int zx_WALK_SO_wst_OnBehalfOf(struct zx_ctx* c, struct zx_wst_OnBehalfOf_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_OnBehalfOf(struct zx_ctx* c, struct zx_wst_OnBehalfOf_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_OnBehalfOf(struct zx_ctx* c, struct zx_wst_OnBehalfOf_s* x);
int zx_LEN_WO_wst_OnBehalfOf(struct zx_ctx* c, struct zx_wst_OnBehalfOf_s* x);
char* zx_ENC_SO_wst_OnBehalfOf(struct zx_ctx* c, struct zx_wst_OnBehalfOf_s* x, char* p);
char* zx_ENC_WO_wst_OnBehalfOf(struct zx_ctx* c, struct zx_wst_OnBehalfOf_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_OnBehalfOf(struct zx_ctx* c, struct zx_wst_OnBehalfOf_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_OnBehalfOf(struct zx_ctx* c, struct zx_wst_OnBehalfOf_s* x);

struct zx_wst_OnBehalfOf_s {
  ZX_ELEM_EXT
  zx_wst_OnBehalfOf_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- wst_Participant -------------------------- */
/* refby( zx_wst_Participants_s ) */
#ifndef zx_wst_Participant_EXT
#define zx_wst_Participant_EXT
#endif

struct zx_wst_Participant_s* zx_DEC_wst_Participant(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_Participant_s* zx_NEW_wst_Participant(struct zx_ctx* c);
void zx_FREE_wst_Participant(struct zx_ctx* c, struct zx_wst_Participant_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_Participant_s* zx_DEEP_CLONE_wst_Participant(struct zx_ctx* c, struct zx_wst_Participant_s* x, int dup_strs);
void zx_DUP_STRS_wst_Participant(struct zx_ctx* c, struct zx_wst_Participant_s* x);
int zx_WALK_SO_wst_Participant(struct zx_ctx* c, struct zx_wst_Participant_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_Participant(struct zx_ctx* c, struct zx_wst_Participant_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_Participant(struct zx_ctx* c, struct zx_wst_Participant_s* x);
int zx_LEN_WO_wst_Participant(struct zx_ctx* c, struct zx_wst_Participant_s* x);
char* zx_ENC_SO_wst_Participant(struct zx_ctx* c, struct zx_wst_Participant_s* x, char* p);
char* zx_ENC_WO_wst_Participant(struct zx_ctx* c, struct zx_wst_Participant_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_Participant(struct zx_ctx* c, struct zx_wst_Participant_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_Participant(struct zx_ctx* c, struct zx_wst_Participant_s* x);

struct zx_wst_Participant_s {
  ZX_ELEM_EXT
  zx_wst_Participant_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- wst_Participants -------------------------- */
/* refby( ) */
#ifndef zx_wst_Participants_EXT
#define zx_wst_Participants_EXT
#endif

struct zx_wst_Participants_s* zx_DEC_wst_Participants(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_Participants_s* zx_NEW_wst_Participants(struct zx_ctx* c);
void zx_FREE_wst_Participants(struct zx_ctx* c, struct zx_wst_Participants_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_Participants_s* zx_DEEP_CLONE_wst_Participants(struct zx_ctx* c, struct zx_wst_Participants_s* x, int dup_strs);
void zx_DUP_STRS_wst_Participants(struct zx_ctx* c, struct zx_wst_Participants_s* x);
int zx_WALK_SO_wst_Participants(struct zx_ctx* c, struct zx_wst_Participants_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_Participants(struct zx_ctx* c, struct zx_wst_Participants_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_Participants(struct zx_ctx* c, struct zx_wst_Participants_s* x);
int zx_LEN_WO_wst_Participants(struct zx_ctx* c, struct zx_wst_Participants_s* x);
char* zx_ENC_SO_wst_Participants(struct zx_ctx* c, struct zx_wst_Participants_s* x, char* p);
char* zx_ENC_WO_wst_Participants(struct zx_ctx* c, struct zx_wst_Participants_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_Participants(struct zx_ctx* c, struct zx_wst_Participants_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_Participants(struct zx_ctx* c, struct zx_wst_Participants_s* x);

struct zx_wst_Participants_s {
  ZX_ELEM_EXT
  zx_wst_Participants_EXT
  struct zx_wst_Primary_s* Primary;	/* {0,1}  */
  struct zx_wst_Participant_s* Participant;	/* {0,-1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_wst_Primary_s* zx_wst_Participants_GET_Primary(struct zx_wst_Participants_s* x, int n);
struct zx_wst_Participant_s* zx_wst_Participants_GET_Participant(struct zx_wst_Participants_s* x, int n);

int zx_wst_Participants_NUM_Primary(struct zx_wst_Participants_s* x);
int zx_wst_Participants_NUM_Participant(struct zx_wst_Participants_s* x);

struct zx_wst_Primary_s* zx_wst_Participants_POP_Primary(struct zx_wst_Participants_s* x);
struct zx_wst_Participant_s* zx_wst_Participants_POP_Participant(struct zx_wst_Participants_s* x);

void zx_wst_Participants_PUSH_Primary(struct zx_wst_Participants_s* x, struct zx_wst_Primary_s* y);
void zx_wst_Participants_PUSH_Participant(struct zx_wst_Participants_s* x, struct zx_wst_Participant_s* y);


void zx_wst_Participants_PUT_Primary(struct zx_wst_Participants_s* x, int n, struct zx_wst_Primary_s* y);
void zx_wst_Participants_PUT_Participant(struct zx_wst_Participants_s* x, int n, struct zx_wst_Participant_s* y);

void zx_wst_Participants_ADD_Primary(struct zx_wst_Participants_s* x, int n, struct zx_wst_Primary_s* z);
void zx_wst_Participants_ADD_Participant(struct zx_wst_Participants_s* x, int n, struct zx_wst_Participant_s* z);

void zx_wst_Participants_DEL_Primary(struct zx_wst_Participants_s* x, int n);
void zx_wst_Participants_DEL_Participant(struct zx_wst_Participants_s* x, int n);

void zx_wst_Participants_REV_Primary(struct zx_wst_Participants_s* x);
void zx_wst_Participants_REV_Participant(struct zx_wst_Participants_s* x);

#endif
/* -------------------------- wst_Primary -------------------------- */
/* refby( zx_wst_Participants_s ) */
#ifndef zx_wst_Primary_EXT
#define zx_wst_Primary_EXT
#endif

struct zx_wst_Primary_s* zx_DEC_wst_Primary(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_Primary_s* zx_NEW_wst_Primary(struct zx_ctx* c);
void zx_FREE_wst_Primary(struct zx_ctx* c, struct zx_wst_Primary_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_Primary_s* zx_DEEP_CLONE_wst_Primary(struct zx_ctx* c, struct zx_wst_Primary_s* x, int dup_strs);
void zx_DUP_STRS_wst_Primary(struct zx_ctx* c, struct zx_wst_Primary_s* x);
int zx_WALK_SO_wst_Primary(struct zx_ctx* c, struct zx_wst_Primary_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_Primary(struct zx_ctx* c, struct zx_wst_Primary_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_Primary(struct zx_ctx* c, struct zx_wst_Primary_s* x);
int zx_LEN_WO_wst_Primary(struct zx_ctx* c, struct zx_wst_Primary_s* x);
char* zx_ENC_SO_wst_Primary(struct zx_ctx* c, struct zx_wst_Primary_s* x, char* p);
char* zx_ENC_WO_wst_Primary(struct zx_ctx* c, struct zx_wst_Primary_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_Primary(struct zx_ctx* c, struct zx_wst_Primary_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_Primary(struct zx_ctx* c, struct zx_wst_Primary_s* x);

struct zx_wst_Primary_s {
  ZX_ELEM_EXT
  zx_wst_Primary_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- wst_ProofEncryption -------------------------- */
/* refby( zx_wst_RequestSecurityToken_s zx_wst_RequestSecurityTokenResponse_s ) */
#ifndef zx_wst_ProofEncryption_EXT
#define zx_wst_ProofEncryption_EXT
#endif

struct zx_wst_ProofEncryption_s* zx_DEC_wst_ProofEncryption(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_ProofEncryption_s* zx_NEW_wst_ProofEncryption(struct zx_ctx* c);
void zx_FREE_wst_ProofEncryption(struct zx_ctx* c, struct zx_wst_ProofEncryption_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_ProofEncryption_s* zx_DEEP_CLONE_wst_ProofEncryption(struct zx_ctx* c, struct zx_wst_ProofEncryption_s* x, int dup_strs);
void zx_DUP_STRS_wst_ProofEncryption(struct zx_ctx* c, struct zx_wst_ProofEncryption_s* x);
int zx_WALK_SO_wst_ProofEncryption(struct zx_ctx* c, struct zx_wst_ProofEncryption_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_ProofEncryption(struct zx_ctx* c, struct zx_wst_ProofEncryption_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_ProofEncryption(struct zx_ctx* c, struct zx_wst_ProofEncryption_s* x);
int zx_LEN_WO_wst_ProofEncryption(struct zx_ctx* c, struct zx_wst_ProofEncryption_s* x);
char* zx_ENC_SO_wst_ProofEncryption(struct zx_ctx* c, struct zx_wst_ProofEncryption_s* x, char* p);
char* zx_ENC_WO_wst_ProofEncryption(struct zx_ctx* c, struct zx_wst_ProofEncryption_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_ProofEncryption(struct zx_ctx* c, struct zx_wst_ProofEncryption_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_ProofEncryption(struct zx_ctx* c, struct zx_wst_ProofEncryption_s* x);

struct zx_wst_ProofEncryption_s {
  ZX_ELEM_EXT
  zx_wst_ProofEncryption_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- wst_RenewTarget -------------------------- */
/* refby( ) */
#ifndef zx_wst_RenewTarget_EXT
#define zx_wst_RenewTarget_EXT
#endif

struct zx_wst_RenewTarget_s* zx_DEC_wst_RenewTarget(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_RenewTarget_s* zx_NEW_wst_RenewTarget(struct zx_ctx* c);
void zx_FREE_wst_RenewTarget(struct zx_ctx* c, struct zx_wst_RenewTarget_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_RenewTarget_s* zx_DEEP_CLONE_wst_RenewTarget(struct zx_ctx* c, struct zx_wst_RenewTarget_s* x, int dup_strs);
void zx_DUP_STRS_wst_RenewTarget(struct zx_ctx* c, struct zx_wst_RenewTarget_s* x);
int zx_WALK_SO_wst_RenewTarget(struct zx_ctx* c, struct zx_wst_RenewTarget_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_RenewTarget(struct zx_ctx* c, struct zx_wst_RenewTarget_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_RenewTarget(struct zx_ctx* c, struct zx_wst_RenewTarget_s* x);
int zx_LEN_WO_wst_RenewTarget(struct zx_ctx* c, struct zx_wst_RenewTarget_s* x);
char* zx_ENC_SO_wst_RenewTarget(struct zx_ctx* c, struct zx_wst_RenewTarget_s* x, char* p);
char* zx_ENC_WO_wst_RenewTarget(struct zx_ctx* c, struct zx_wst_RenewTarget_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_RenewTarget(struct zx_ctx* c, struct zx_wst_RenewTarget_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_RenewTarget(struct zx_ctx* c, struct zx_wst_RenewTarget_s* x);

struct zx_wst_RenewTarget_s {
  ZX_ELEM_EXT
  zx_wst_RenewTarget_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- wst_Renewing -------------------------- */
/* refby( zx_wst_RequestSecurityToken_s zx_wst_RequestSecurityTokenResponse_s ) */
#ifndef zx_wst_Renewing_EXT
#define zx_wst_Renewing_EXT
#endif

struct zx_wst_Renewing_s* zx_DEC_wst_Renewing(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_Renewing_s* zx_NEW_wst_Renewing(struct zx_ctx* c);
void zx_FREE_wst_Renewing(struct zx_ctx* c, struct zx_wst_Renewing_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_Renewing_s* zx_DEEP_CLONE_wst_Renewing(struct zx_ctx* c, struct zx_wst_Renewing_s* x, int dup_strs);
void zx_DUP_STRS_wst_Renewing(struct zx_ctx* c, struct zx_wst_Renewing_s* x);
int zx_WALK_SO_wst_Renewing(struct zx_ctx* c, struct zx_wst_Renewing_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_Renewing(struct zx_ctx* c, struct zx_wst_Renewing_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_Renewing(struct zx_ctx* c, struct zx_wst_Renewing_s* x);
int zx_LEN_WO_wst_Renewing(struct zx_ctx* c, struct zx_wst_Renewing_s* x);
char* zx_ENC_SO_wst_Renewing(struct zx_ctx* c, struct zx_wst_Renewing_s* x, char* p);
char* zx_ENC_WO_wst_Renewing(struct zx_ctx* c, struct zx_wst_Renewing_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_Renewing(struct zx_ctx* c, struct zx_wst_Renewing_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_Renewing(struct zx_ctx* c, struct zx_wst_Renewing_s* x);

struct zx_wst_Renewing_s {
  ZX_ELEM_EXT
  zx_wst_Renewing_EXT
  struct zx_str* Allow;	/* {0,1} attribute xs:boolean */
  struct zx_str* OK;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_wst_Renewing_GET_Allow(struct zx_wst_Renewing_s* x);
struct zx_str* zx_wst_Renewing_GET_OK(struct zx_wst_Renewing_s* x);





void zx_wst_Renewing_PUT_Allow(struct zx_wst_Renewing_s* x, struct zx_str* y);
void zx_wst_Renewing_PUT_OK(struct zx_wst_Renewing_s* x, struct zx_str* y);





#endif
/* -------------------------- wst_RequestSecurityToken -------------------------- */
/* refby( zx_wst_RequestSecurityTokenCollection_s ) */
#ifndef zx_wst_RequestSecurityToken_EXT
#define zx_wst_RequestSecurityToken_EXT
#endif

struct zx_wst_RequestSecurityToken_s* zx_DEC_wst_RequestSecurityToken(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_RequestSecurityToken_s* zx_NEW_wst_RequestSecurityToken(struct zx_ctx* c);
void zx_FREE_wst_RequestSecurityToken(struct zx_ctx* c, struct zx_wst_RequestSecurityToken_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_RequestSecurityToken_s* zx_DEEP_CLONE_wst_RequestSecurityToken(struct zx_ctx* c, struct zx_wst_RequestSecurityToken_s* x, int dup_strs);
void zx_DUP_STRS_wst_RequestSecurityToken(struct zx_ctx* c, struct zx_wst_RequestSecurityToken_s* x);
int zx_WALK_SO_wst_RequestSecurityToken(struct zx_ctx* c, struct zx_wst_RequestSecurityToken_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_RequestSecurityToken(struct zx_ctx* c, struct zx_wst_RequestSecurityToken_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_RequestSecurityToken(struct zx_ctx* c, struct zx_wst_RequestSecurityToken_s* x);
int zx_LEN_WO_wst_RequestSecurityToken(struct zx_ctx* c, struct zx_wst_RequestSecurityToken_s* x);
char* zx_ENC_SO_wst_RequestSecurityToken(struct zx_ctx* c, struct zx_wst_RequestSecurityToken_s* x, char* p);
char* zx_ENC_WO_wst_RequestSecurityToken(struct zx_ctx* c, struct zx_wst_RequestSecurityToken_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_RequestSecurityToken(struct zx_ctx* c, struct zx_wst_RequestSecurityToken_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_RequestSecurityToken(struct zx_ctx* c, struct zx_wst_RequestSecurityToken_s* x);

struct zx_wst_RequestSecurityToken_s {
  ZX_ELEM_EXT
  zx_wst_RequestSecurityToken_EXT
  struct zx_elem_s* TokenType;	/* {0,1} xs:anyURI */
  struct zx_elem_s* RequestType;	/* {0,1} http://docs.oasis_open.org/ws_sx/ws_trust/200512/Issue */
  struct zx_wsp_AppliesTo_s* AppliesTo;	/* {0,1} nada */
  struct zx_wst_Claims_s* Claims;	/* {0,1} nada */
  struct zx_wst_Entropy_s* Entropy;	/* {0,1} nada */
  struct zx_wst_Lifetime_s* Lifetime;	/* {0,1} nada */
  struct zx_elem_s* AllowPostdating;	/* {0,1} wst:AllowPostdatingType */
  struct zx_wst_Renewing_s* Renewing;	/* {0,1} nada */
  struct zx_wst_OnBehalfOf_s* OnBehalfOf;	/* {0,1}  */
  struct zx_wst_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_elem_s* AuthenticationType;	/* {0,1} xs:anyURI */
  struct zx_elem_s* KeyType;	/* {0,1} http://docs.oasis_open.org/ws_sx/ws_trust/200512/PublicKey */
  struct zx_elem_s* KeySize;	/* {0,1} xs:unsignedInt */
  struct zx_elem_s* SignatureAlgorithm;	/* {0,1} xs:anyURI */
  struct zx_wst_Encryption_s* Encryption;	/* {0,1}  */
  struct zx_elem_s* EncryptionAlgorithm;	/* {0,1} xs:anyURI */
  struct zx_elem_s* CanonicalizationAlgorithm;	/* {0,1} xs:anyURI */
  struct zx_wst_ProofEncryption_s* ProofEncryption;	/* {0,1}  */
  struct zx_wst_UseKey_s* UseKey;	/* {0,1} nada */
  struct zx_elem_s* SignWith;	/* {0,1} xs:anyURI */
  struct zx_elem_s* EncryptWith;	/* {0,1} xs:anyURI */
  struct zx_wst_DelegateTo_s* DelegateTo;	/* {0,1}  */
  struct zx_elem_s* Forwardable;	/* {0,1} xs:boolean */
  struct zx_elem_s* Delegatable;	/* {0,1} xs:boolean */
  struct zx_wsp_Policy_s* Policy;	/* {0,1} nada */
  struct zx_wsp_PolicyReference_s* PolicyReference;	/* {0,1} nada */
  struct zx_str* Context;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_wst_RequestSecurityToken_GET_Context(struct zx_wst_RequestSecurityToken_s* x);

struct zx_elem_s* zx_wst_RequestSecurityToken_GET_TokenType(struct zx_wst_RequestSecurityToken_s* x, int n);
struct zx_elem_s* zx_wst_RequestSecurityToken_GET_RequestType(struct zx_wst_RequestSecurityToken_s* x, int n);
struct zx_wsp_AppliesTo_s* zx_wst_RequestSecurityToken_GET_AppliesTo(struct zx_wst_RequestSecurityToken_s* x, int n);
struct zx_wst_Claims_s* zx_wst_RequestSecurityToken_GET_Claims(struct zx_wst_RequestSecurityToken_s* x, int n);
struct zx_wst_Entropy_s* zx_wst_RequestSecurityToken_GET_Entropy(struct zx_wst_RequestSecurityToken_s* x, int n);
struct zx_wst_Lifetime_s* zx_wst_RequestSecurityToken_GET_Lifetime(struct zx_wst_RequestSecurityToken_s* x, int n);
struct zx_elem_s* zx_wst_RequestSecurityToken_GET_AllowPostdating(struct zx_wst_RequestSecurityToken_s* x, int n);
struct zx_wst_Renewing_s* zx_wst_RequestSecurityToken_GET_Renewing(struct zx_wst_RequestSecurityToken_s* x, int n);
struct zx_wst_OnBehalfOf_s* zx_wst_RequestSecurityToken_GET_OnBehalfOf(struct zx_wst_RequestSecurityToken_s* x, int n);
struct zx_wst_Issuer_s* zx_wst_RequestSecurityToken_GET_Issuer(struct zx_wst_RequestSecurityToken_s* x, int n);
struct zx_elem_s* zx_wst_RequestSecurityToken_GET_AuthenticationType(struct zx_wst_RequestSecurityToken_s* x, int n);
struct zx_elem_s* zx_wst_RequestSecurityToken_GET_KeyType(struct zx_wst_RequestSecurityToken_s* x, int n);
struct zx_elem_s* zx_wst_RequestSecurityToken_GET_KeySize(struct zx_wst_RequestSecurityToken_s* x, int n);
struct zx_elem_s* zx_wst_RequestSecurityToken_GET_SignatureAlgorithm(struct zx_wst_RequestSecurityToken_s* x, int n);
struct zx_wst_Encryption_s* zx_wst_RequestSecurityToken_GET_Encryption(struct zx_wst_RequestSecurityToken_s* x, int n);
struct zx_elem_s* zx_wst_RequestSecurityToken_GET_EncryptionAlgorithm(struct zx_wst_RequestSecurityToken_s* x, int n);
struct zx_elem_s* zx_wst_RequestSecurityToken_GET_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityToken_s* x, int n);
struct zx_wst_ProofEncryption_s* zx_wst_RequestSecurityToken_GET_ProofEncryption(struct zx_wst_RequestSecurityToken_s* x, int n);
struct zx_wst_UseKey_s* zx_wst_RequestSecurityToken_GET_UseKey(struct zx_wst_RequestSecurityToken_s* x, int n);
struct zx_elem_s* zx_wst_RequestSecurityToken_GET_SignWith(struct zx_wst_RequestSecurityToken_s* x, int n);
struct zx_elem_s* zx_wst_RequestSecurityToken_GET_EncryptWith(struct zx_wst_RequestSecurityToken_s* x, int n);
struct zx_wst_DelegateTo_s* zx_wst_RequestSecurityToken_GET_DelegateTo(struct zx_wst_RequestSecurityToken_s* x, int n);
struct zx_elem_s* zx_wst_RequestSecurityToken_GET_Forwardable(struct zx_wst_RequestSecurityToken_s* x, int n);
struct zx_elem_s* zx_wst_RequestSecurityToken_GET_Delegatable(struct zx_wst_RequestSecurityToken_s* x, int n);
struct zx_wsp_Policy_s* zx_wst_RequestSecurityToken_GET_Policy(struct zx_wst_RequestSecurityToken_s* x, int n);
struct zx_wsp_PolicyReference_s* zx_wst_RequestSecurityToken_GET_PolicyReference(struct zx_wst_RequestSecurityToken_s* x, int n);

int zx_wst_RequestSecurityToken_NUM_TokenType(struct zx_wst_RequestSecurityToken_s* x);
int zx_wst_RequestSecurityToken_NUM_RequestType(struct zx_wst_RequestSecurityToken_s* x);
int zx_wst_RequestSecurityToken_NUM_AppliesTo(struct zx_wst_RequestSecurityToken_s* x);
int zx_wst_RequestSecurityToken_NUM_Claims(struct zx_wst_RequestSecurityToken_s* x);
int zx_wst_RequestSecurityToken_NUM_Entropy(struct zx_wst_RequestSecurityToken_s* x);
int zx_wst_RequestSecurityToken_NUM_Lifetime(struct zx_wst_RequestSecurityToken_s* x);
int zx_wst_RequestSecurityToken_NUM_AllowPostdating(struct zx_wst_RequestSecurityToken_s* x);
int zx_wst_RequestSecurityToken_NUM_Renewing(struct zx_wst_RequestSecurityToken_s* x);
int zx_wst_RequestSecurityToken_NUM_OnBehalfOf(struct zx_wst_RequestSecurityToken_s* x);
int zx_wst_RequestSecurityToken_NUM_Issuer(struct zx_wst_RequestSecurityToken_s* x);
int zx_wst_RequestSecurityToken_NUM_AuthenticationType(struct zx_wst_RequestSecurityToken_s* x);
int zx_wst_RequestSecurityToken_NUM_KeyType(struct zx_wst_RequestSecurityToken_s* x);
int zx_wst_RequestSecurityToken_NUM_KeySize(struct zx_wst_RequestSecurityToken_s* x);
int zx_wst_RequestSecurityToken_NUM_SignatureAlgorithm(struct zx_wst_RequestSecurityToken_s* x);
int zx_wst_RequestSecurityToken_NUM_Encryption(struct zx_wst_RequestSecurityToken_s* x);
int zx_wst_RequestSecurityToken_NUM_EncryptionAlgorithm(struct zx_wst_RequestSecurityToken_s* x);
int zx_wst_RequestSecurityToken_NUM_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityToken_s* x);
int zx_wst_RequestSecurityToken_NUM_ProofEncryption(struct zx_wst_RequestSecurityToken_s* x);
int zx_wst_RequestSecurityToken_NUM_UseKey(struct zx_wst_RequestSecurityToken_s* x);
int zx_wst_RequestSecurityToken_NUM_SignWith(struct zx_wst_RequestSecurityToken_s* x);
int zx_wst_RequestSecurityToken_NUM_EncryptWith(struct zx_wst_RequestSecurityToken_s* x);
int zx_wst_RequestSecurityToken_NUM_DelegateTo(struct zx_wst_RequestSecurityToken_s* x);
int zx_wst_RequestSecurityToken_NUM_Forwardable(struct zx_wst_RequestSecurityToken_s* x);
int zx_wst_RequestSecurityToken_NUM_Delegatable(struct zx_wst_RequestSecurityToken_s* x);
int zx_wst_RequestSecurityToken_NUM_Policy(struct zx_wst_RequestSecurityToken_s* x);
int zx_wst_RequestSecurityToken_NUM_PolicyReference(struct zx_wst_RequestSecurityToken_s* x);

struct zx_elem_s* zx_wst_RequestSecurityToken_POP_TokenType(struct zx_wst_RequestSecurityToken_s* x);
struct zx_elem_s* zx_wst_RequestSecurityToken_POP_RequestType(struct zx_wst_RequestSecurityToken_s* x);
struct zx_wsp_AppliesTo_s* zx_wst_RequestSecurityToken_POP_AppliesTo(struct zx_wst_RequestSecurityToken_s* x);
struct zx_wst_Claims_s* zx_wst_RequestSecurityToken_POP_Claims(struct zx_wst_RequestSecurityToken_s* x);
struct zx_wst_Entropy_s* zx_wst_RequestSecurityToken_POP_Entropy(struct zx_wst_RequestSecurityToken_s* x);
struct zx_wst_Lifetime_s* zx_wst_RequestSecurityToken_POP_Lifetime(struct zx_wst_RequestSecurityToken_s* x);
struct zx_elem_s* zx_wst_RequestSecurityToken_POP_AllowPostdating(struct zx_wst_RequestSecurityToken_s* x);
struct zx_wst_Renewing_s* zx_wst_RequestSecurityToken_POP_Renewing(struct zx_wst_RequestSecurityToken_s* x);
struct zx_wst_OnBehalfOf_s* zx_wst_RequestSecurityToken_POP_OnBehalfOf(struct zx_wst_RequestSecurityToken_s* x);
struct zx_wst_Issuer_s* zx_wst_RequestSecurityToken_POP_Issuer(struct zx_wst_RequestSecurityToken_s* x);
struct zx_elem_s* zx_wst_RequestSecurityToken_POP_AuthenticationType(struct zx_wst_RequestSecurityToken_s* x);
struct zx_elem_s* zx_wst_RequestSecurityToken_POP_KeyType(struct zx_wst_RequestSecurityToken_s* x);
struct zx_elem_s* zx_wst_RequestSecurityToken_POP_KeySize(struct zx_wst_RequestSecurityToken_s* x);
struct zx_elem_s* zx_wst_RequestSecurityToken_POP_SignatureAlgorithm(struct zx_wst_RequestSecurityToken_s* x);
struct zx_wst_Encryption_s* zx_wst_RequestSecurityToken_POP_Encryption(struct zx_wst_RequestSecurityToken_s* x);
struct zx_elem_s* zx_wst_RequestSecurityToken_POP_EncryptionAlgorithm(struct zx_wst_RequestSecurityToken_s* x);
struct zx_elem_s* zx_wst_RequestSecurityToken_POP_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityToken_s* x);
struct zx_wst_ProofEncryption_s* zx_wst_RequestSecurityToken_POP_ProofEncryption(struct zx_wst_RequestSecurityToken_s* x);
struct zx_wst_UseKey_s* zx_wst_RequestSecurityToken_POP_UseKey(struct zx_wst_RequestSecurityToken_s* x);
struct zx_elem_s* zx_wst_RequestSecurityToken_POP_SignWith(struct zx_wst_RequestSecurityToken_s* x);
struct zx_elem_s* zx_wst_RequestSecurityToken_POP_EncryptWith(struct zx_wst_RequestSecurityToken_s* x);
struct zx_wst_DelegateTo_s* zx_wst_RequestSecurityToken_POP_DelegateTo(struct zx_wst_RequestSecurityToken_s* x);
struct zx_elem_s* zx_wst_RequestSecurityToken_POP_Forwardable(struct zx_wst_RequestSecurityToken_s* x);
struct zx_elem_s* zx_wst_RequestSecurityToken_POP_Delegatable(struct zx_wst_RequestSecurityToken_s* x);
struct zx_wsp_Policy_s* zx_wst_RequestSecurityToken_POP_Policy(struct zx_wst_RequestSecurityToken_s* x);
struct zx_wsp_PolicyReference_s* zx_wst_RequestSecurityToken_POP_PolicyReference(struct zx_wst_RequestSecurityToken_s* x);

void zx_wst_RequestSecurityToken_PUSH_TokenType(struct zx_wst_RequestSecurityToken_s* x, struct zx_elem_s* y);
void zx_wst_RequestSecurityToken_PUSH_RequestType(struct zx_wst_RequestSecurityToken_s* x, struct zx_elem_s* y);
void zx_wst_RequestSecurityToken_PUSH_AppliesTo(struct zx_wst_RequestSecurityToken_s* x, struct zx_wsp_AppliesTo_s* y);
void zx_wst_RequestSecurityToken_PUSH_Claims(struct zx_wst_RequestSecurityToken_s* x, struct zx_wst_Claims_s* y);
void zx_wst_RequestSecurityToken_PUSH_Entropy(struct zx_wst_RequestSecurityToken_s* x, struct zx_wst_Entropy_s* y);
void zx_wst_RequestSecurityToken_PUSH_Lifetime(struct zx_wst_RequestSecurityToken_s* x, struct zx_wst_Lifetime_s* y);
void zx_wst_RequestSecurityToken_PUSH_AllowPostdating(struct zx_wst_RequestSecurityToken_s* x, struct zx_elem_s* y);
void zx_wst_RequestSecurityToken_PUSH_Renewing(struct zx_wst_RequestSecurityToken_s* x, struct zx_wst_Renewing_s* y);
void zx_wst_RequestSecurityToken_PUSH_OnBehalfOf(struct zx_wst_RequestSecurityToken_s* x, struct zx_wst_OnBehalfOf_s* y);
void zx_wst_RequestSecurityToken_PUSH_Issuer(struct zx_wst_RequestSecurityToken_s* x, struct zx_wst_Issuer_s* y);
void zx_wst_RequestSecurityToken_PUSH_AuthenticationType(struct zx_wst_RequestSecurityToken_s* x, struct zx_elem_s* y);
void zx_wst_RequestSecurityToken_PUSH_KeyType(struct zx_wst_RequestSecurityToken_s* x, struct zx_elem_s* y);
void zx_wst_RequestSecurityToken_PUSH_KeySize(struct zx_wst_RequestSecurityToken_s* x, struct zx_elem_s* y);
void zx_wst_RequestSecurityToken_PUSH_SignatureAlgorithm(struct zx_wst_RequestSecurityToken_s* x, struct zx_elem_s* y);
void zx_wst_RequestSecurityToken_PUSH_Encryption(struct zx_wst_RequestSecurityToken_s* x, struct zx_wst_Encryption_s* y);
void zx_wst_RequestSecurityToken_PUSH_EncryptionAlgorithm(struct zx_wst_RequestSecurityToken_s* x, struct zx_elem_s* y);
void zx_wst_RequestSecurityToken_PUSH_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityToken_s* x, struct zx_elem_s* y);
void zx_wst_RequestSecurityToken_PUSH_ProofEncryption(struct zx_wst_RequestSecurityToken_s* x, struct zx_wst_ProofEncryption_s* y);
void zx_wst_RequestSecurityToken_PUSH_UseKey(struct zx_wst_RequestSecurityToken_s* x, struct zx_wst_UseKey_s* y);
void zx_wst_RequestSecurityToken_PUSH_SignWith(struct zx_wst_RequestSecurityToken_s* x, struct zx_elem_s* y);
void zx_wst_RequestSecurityToken_PUSH_EncryptWith(struct zx_wst_RequestSecurityToken_s* x, struct zx_elem_s* y);
void zx_wst_RequestSecurityToken_PUSH_DelegateTo(struct zx_wst_RequestSecurityToken_s* x, struct zx_wst_DelegateTo_s* y);
void zx_wst_RequestSecurityToken_PUSH_Forwardable(struct zx_wst_RequestSecurityToken_s* x, struct zx_elem_s* y);
void zx_wst_RequestSecurityToken_PUSH_Delegatable(struct zx_wst_RequestSecurityToken_s* x, struct zx_elem_s* y);
void zx_wst_RequestSecurityToken_PUSH_Policy(struct zx_wst_RequestSecurityToken_s* x, struct zx_wsp_Policy_s* y);
void zx_wst_RequestSecurityToken_PUSH_PolicyReference(struct zx_wst_RequestSecurityToken_s* x, struct zx_wsp_PolicyReference_s* y);

void zx_wst_RequestSecurityToken_PUT_Context(struct zx_wst_RequestSecurityToken_s* x, struct zx_str* y);

void zx_wst_RequestSecurityToken_PUT_TokenType(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* y);
void zx_wst_RequestSecurityToken_PUT_RequestType(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* y);
void zx_wst_RequestSecurityToken_PUT_AppliesTo(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wsp_AppliesTo_s* y);
void zx_wst_RequestSecurityToken_PUT_Claims(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_Claims_s* y);
void zx_wst_RequestSecurityToken_PUT_Entropy(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_Entropy_s* y);
void zx_wst_RequestSecurityToken_PUT_Lifetime(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_Lifetime_s* y);
void zx_wst_RequestSecurityToken_PUT_AllowPostdating(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* y);
void zx_wst_RequestSecurityToken_PUT_Renewing(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_Renewing_s* y);
void zx_wst_RequestSecurityToken_PUT_OnBehalfOf(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_OnBehalfOf_s* y);
void zx_wst_RequestSecurityToken_PUT_Issuer(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_Issuer_s* y);
void zx_wst_RequestSecurityToken_PUT_AuthenticationType(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* y);
void zx_wst_RequestSecurityToken_PUT_KeyType(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* y);
void zx_wst_RequestSecurityToken_PUT_KeySize(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* y);
void zx_wst_RequestSecurityToken_PUT_SignatureAlgorithm(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* y);
void zx_wst_RequestSecurityToken_PUT_Encryption(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_Encryption_s* y);
void zx_wst_RequestSecurityToken_PUT_EncryptionAlgorithm(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* y);
void zx_wst_RequestSecurityToken_PUT_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* y);
void zx_wst_RequestSecurityToken_PUT_ProofEncryption(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_ProofEncryption_s* y);
void zx_wst_RequestSecurityToken_PUT_UseKey(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_UseKey_s* y);
void zx_wst_RequestSecurityToken_PUT_SignWith(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* y);
void zx_wst_RequestSecurityToken_PUT_EncryptWith(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* y);
void zx_wst_RequestSecurityToken_PUT_DelegateTo(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_DelegateTo_s* y);
void zx_wst_RequestSecurityToken_PUT_Forwardable(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* y);
void zx_wst_RequestSecurityToken_PUT_Delegatable(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* y);
void zx_wst_RequestSecurityToken_PUT_Policy(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wsp_Policy_s* y);
void zx_wst_RequestSecurityToken_PUT_PolicyReference(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wsp_PolicyReference_s* y);

void zx_wst_RequestSecurityToken_ADD_TokenType(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z);
void zx_wst_RequestSecurityToken_ADD_RequestType(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z);
void zx_wst_RequestSecurityToken_ADD_AppliesTo(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wsp_AppliesTo_s* z);
void zx_wst_RequestSecurityToken_ADD_Claims(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_Claims_s* z);
void zx_wst_RequestSecurityToken_ADD_Entropy(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_Entropy_s* z);
void zx_wst_RequestSecurityToken_ADD_Lifetime(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_Lifetime_s* z);
void zx_wst_RequestSecurityToken_ADD_AllowPostdating(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z);
void zx_wst_RequestSecurityToken_ADD_Renewing(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_Renewing_s* z);
void zx_wst_RequestSecurityToken_ADD_OnBehalfOf(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_OnBehalfOf_s* z);
void zx_wst_RequestSecurityToken_ADD_Issuer(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_Issuer_s* z);
void zx_wst_RequestSecurityToken_ADD_AuthenticationType(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z);
void zx_wst_RequestSecurityToken_ADD_KeyType(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z);
void zx_wst_RequestSecurityToken_ADD_KeySize(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z);
void zx_wst_RequestSecurityToken_ADD_SignatureAlgorithm(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z);
void zx_wst_RequestSecurityToken_ADD_Encryption(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_Encryption_s* z);
void zx_wst_RequestSecurityToken_ADD_EncryptionAlgorithm(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z);
void zx_wst_RequestSecurityToken_ADD_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z);
void zx_wst_RequestSecurityToken_ADD_ProofEncryption(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_ProofEncryption_s* z);
void zx_wst_RequestSecurityToken_ADD_UseKey(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_UseKey_s* z);
void zx_wst_RequestSecurityToken_ADD_SignWith(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z);
void zx_wst_RequestSecurityToken_ADD_EncryptWith(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z);
void zx_wst_RequestSecurityToken_ADD_DelegateTo(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wst_DelegateTo_s* z);
void zx_wst_RequestSecurityToken_ADD_Forwardable(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z);
void zx_wst_RequestSecurityToken_ADD_Delegatable(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_elem_s* z);
void zx_wst_RequestSecurityToken_ADD_Policy(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wsp_Policy_s* z);
void zx_wst_RequestSecurityToken_ADD_PolicyReference(struct zx_wst_RequestSecurityToken_s* x, int n, struct zx_wsp_PolicyReference_s* z);

void zx_wst_RequestSecurityToken_DEL_TokenType(struct zx_wst_RequestSecurityToken_s* x, int n);
void zx_wst_RequestSecurityToken_DEL_RequestType(struct zx_wst_RequestSecurityToken_s* x, int n);
void zx_wst_RequestSecurityToken_DEL_AppliesTo(struct zx_wst_RequestSecurityToken_s* x, int n);
void zx_wst_RequestSecurityToken_DEL_Claims(struct zx_wst_RequestSecurityToken_s* x, int n);
void zx_wst_RequestSecurityToken_DEL_Entropy(struct zx_wst_RequestSecurityToken_s* x, int n);
void zx_wst_RequestSecurityToken_DEL_Lifetime(struct zx_wst_RequestSecurityToken_s* x, int n);
void zx_wst_RequestSecurityToken_DEL_AllowPostdating(struct zx_wst_RequestSecurityToken_s* x, int n);
void zx_wst_RequestSecurityToken_DEL_Renewing(struct zx_wst_RequestSecurityToken_s* x, int n);
void zx_wst_RequestSecurityToken_DEL_OnBehalfOf(struct zx_wst_RequestSecurityToken_s* x, int n);
void zx_wst_RequestSecurityToken_DEL_Issuer(struct zx_wst_RequestSecurityToken_s* x, int n);
void zx_wst_RequestSecurityToken_DEL_AuthenticationType(struct zx_wst_RequestSecurityToken_s* x, int n);
void zx_wst_RequestSecurityToken_DEL_KeyType(struct zx_wst_RequestSecurityToken_s* x, int n);
void zx_wst_RequestSecurityToken_DEL_KeySize(struct zx_wst_RequestSecurityToken_s* x, int n);
void zx_wst_RequestSecurityToken_DEL_SignatureAlgorithm(struct zx_wst_RequestSecurityToken_s* x, int n);
void zx_wst_RequestSecurityToken_DEL_Encryption(struct zx_wst_RequestSecurityToken_s* x, int n);
void zx_wst_RequestSecurityToken_DEL_EncryptionAlgorithm(struct zx_wst_RequestSecurityToken_s* x, int n);
void zx_wst_RequestSecurityToken_DEL_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityToken_s* x, int n);
void zx_wst_RequestSecurityToken_DEL_ProofEncryption(struct zx_wst_RequestSecurityToken_s* x, int n);
void zx_wst_RequestSecurityToken_DEL_UseKey(struct zx_wst_RequestSecurityToken_s* x, int n);
void zx_wst_RequestSecurityToken_DEL_SignWith(struct zx_wst_RequestSecurityToken_s* x, int n);
void zx_wst_RequestSecurityToken_DEL_EncryptWith(struct zx_wst_RequestSecurityToken_s* x, int n);
void zx_wst_RequestSecurityToken_DEL_DelegateTo(struct zx_wst_RequestSecurityToken_s* x, int n);
void zx_wst_RequestSecurityToken_DEL_Forwardable(struct zx_wst_RequestSecurityToken_s* x, int n);
void zx_wst_RequestSecurityToken_DEL_Delegatable(struct zx_wst_RequestSecurityToken_s* x, int n);
void zx_wst_RequestSecurityToken_DEL_Policy(struct zx_wst_RequestSecurityToken_s* x, int n);
void zx_wst_RequestSecurityToken_DEL_PolicyReference(struct zx_wst_RequestSecurityToken_s* x, int n);

void zx_wst_RequestSecurityToken_REV_TokenType(struct zx_wst_RequestSecurityToken_s* x);
void zx_wst_RequestSecurityToken_REV_RequestType(struct zx_wst_RequestSecurityToken_s* x);
void zx_wst_RequestSecurityToken_REV_AppliesTo(struct zx_wst_RequestSecurityToken_s* x);
void zx_wst_RequestSecurityToken_REV_Claims(struct zx_wst_RequestSecurityToken_s* x);
void zx_wst_RequestSecurityToken_REV_Entropy(struct zx_wst_RequestSecurityToken_s* x);
void zx_wst_RequestSecurityToken_REV_Lifetime(struct zx_wst_RequestSecurityToken_s* x);
void zx_wst_RequestSecurityToken_REV_AllowPostdating(struct zx_wst_RequestSecurityToken_s* x);
void zx_wst_RequestSecurityToken_REV_Renewing(struct zx_wst_RequestSecurityToken_s* x);
void zx_wst_RequestSecurityToken_REV_OnBehalfOf(struct zx_wst_RequestSecurityToken_s* x);
void zx_wst_RequestSecurityToken_REV_Issuer(struct zx_wst_RequestSecurityToken_s* x);
void zx_wst_RequestSecurityToken_REV_AuthenticationType(struct zx_wst_RequestSecurityToken_s* x);
void zx_wst_RequestSecurityToken_REV_KeyType(struct zx_wst_RequestSecurityToken_s* x);
void zx_wst_RequestSecurityToken_REV_KeySize(struct zx_wst_RequestSecurityToken_s* x);
void zx_wst_RequestSecurityToken_REV_SignatureAlgorithm(struct zx_wst_RequestSecurityToken_s* x);
void zx_wst_RequestSecurityToken_REV_Encryption(struct zx_wst_RequestSecurityToken_s* x);
void zx_wst_RequestSecurityToken_REV_EncryptionAlgorithm(struct zx_wst_RequestSecurityToken_s* x);
void zx_wst_RequestSecurityToken_REV_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityToken_s* x);
void zx_wst_RequestSecurityToken_REV_ProofEncryption(struct zx_wst_RequestSecurityToken_s* x);
void zx_wst_RequestSecurityToken_REV_UseKey(struct zx_wst_RequestSecurityToken_s* x);
void zx_wst_RequestSecurityToken_REV_SignWith(struct zx_wst_RequestSecurityToken_s* x);
void zx_wst_RequestSecurityToken_REV_EncryptWith(struct zx_wst_RequestSecurityToken_s* x);
void zx_wst_RequestSecurityToken_REV_DelegateTo(struct zx_wst_RequestSecurityToken_s* x);
void zx_wst_RequestSecurityToken_REV_Forwardable(struct zx_wst_RequestSecurityToken_s* x);
void zx_wst_RequestSecurityToken_REV_Delegatable(struct zx_wst_RequestSecurityToken_s* x);
void zx_wst_RequestSecurityToken_REV_Policy(struct zx_wst_RequestSecurityToken_s* x);
void zx_wst_RequestSecurityToken_REV_PolicyReference(struct zx_wst_RequestSecurityToken_s* x);

#endif
/* -------------------------- wst_RequestSecurityTokenCollection -------------------------- */
/* refby( ) */
#ifndef zx_wst_RequestSecurityTokenCollection_EXT
#define zx_wst_RequestSecurityTokenCollection_EXT
#endif

struct zx_wst_RequestSecurityTokenCollection_s* zx_DEC_wst_RequestSecurityTokenCollection(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_RequestSecurityTokenCollection_s* zx_NEW_wst_RequestSecurityTokenCollection(struct zx_ctx* c);
void zx_FREE_wst_RequestSecurityTokenCollection(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenCollection_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_RequestSecurityTokenCollection_s* zx_DEEP_CLONE_wst_RequestSecurityTokenCollection(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenCollection_s* x, int dup_strs);
void zx_DUP_STRS_wst_RequestSecurityTokenCollection(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenCollection_s* x);
int zx_WALK_SO_wst_RequestSecurityTokenCollection(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenCollection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_RequestSecurityTokenCollection(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenCollection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_RequestSecurityTokenCollection(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenCollection_s* x);
int zx_LEN_WO_wst_RequestSecurityTokenCollection(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenCollection_s* x);
char* zx_ENC_SO_wst_RequestSecurityTokenCollection(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenCollection_s* x, char* p);
char* zx_ENC_WO_wst_RequestSecurityTokenCollection(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenCollection_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_RequestSecurityTokenCollection(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenCollection_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_RequestSecurityTokenCollection(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenCollection_s* x);

struct zx_wst_RequestSecurityTokenCollection_s {
  ZX_ELEM_EXT
  zx_wst_RequestSecurityTokenCollection_EXT
  struct zx_wst_RequestSecurityToken_s* RequestSecurityToken;	/* {,} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_wst_RequestSecurityToken_s* zx_wst_RequestSecurityTokenCollection_GET_RequestSecurityToken(struct zx_wst_RequestSecurityTokenCollection_s* x, int n);

int zx_wst_RequestSecurityTokenCollection_NUM_RequestSecurityToken(struct zx_wst_RequestSecurityTokenCollection_s* x);

struct zx_wst_RequestSecurityToken_s* zx_wst_RequestSecurityTokenCollection_POP_RequestSecurityToken(struct zx_wst_RequestSecurityTokenCollection_s* x);

void zx_wst_RequestSecurityTokenCollection_PUSH_RequestSecurityToken(struct zx_wst_RequestSecurityTokenCollection_s* x, struct zx_wst_RequestSecurityToken_s* y);


void zx_wst_RequestSecurityTokenCollection_PUT_RequestSecurityToken(struct zx_wst_RequestSecurityTokenCollection_s* x, int n, struct zx_wst_RequestSecurityToken_s* y);

void zx_wst_RequestSecurityTokenCollection_ADD_RequestSecurityToken(struct zx_wst_RequestSecurityTokenCollection_s* x, int n, struct zx_wst_RequestSecurityToken_s* z);

void zx_wst_RequestSecurityTokenCollection_DEL_RequestSecurityToken(struct zx_wst_RequestSecurityTokenCollection_s* x, int n);

void zx_wst_RequestSecurityTokenCollection_REV_RequestSecurityToken(struct zx_wst_RequestSecurityTokenCollection_s* x);

#endif
/* -------------------------- wst_RequestSecurityTokenResponse -------------------------- */
/* refby( zx_wst_RequestSecurityTokenResponseCollection_s zx_wst_IssuedTokens_s ) */
#ifndef zx_wst_RequestSecurityTokenResponse_EXT
#define zx_wst_RequestSecurityTokenResponse_EXT
#endif

struct zx_wst_RequestSecurityTokenResponse_s* zx_DEC_wst_RequestSecurityTokenResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_RequestSecurityTokenResponse_s* zx_NEW_wst_RequestSecurityTokenResponse(struct zx_ctx* c);
void zx_FREE_wst_RequestSecurityTokenResponse(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_RequestSecurityTokenResponse_s* zx_DEEP_CLONE_wst_RequestSecurityTokenResponse(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenResponse_s* x, int dup_strs);
void zx_DUP_STRS_wst_RequestSecurityTokenResponse(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_WALK_SO_wst_RequestSecurityTokenResponse(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_RequestSecurityTokenResponse(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_RequestSecurityTokenResponse(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_LEN_WO_wst_RequestSecurityTokenResponse(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenResponse_s* x);
char* zx_ENC_SO_wst_RequestSecurityTokenResponse(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenResponse_s* x, char* p);
char* zx_ENC_WO_wst_RequestSecurityTokenResponse(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_RequestSecurityTokenResponse(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_RequestSecurityTokenResponse(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenResponse_s* x);

struct zx_wst_RequestSecurityTokenResponse_s {
  ZX_ELEM_EXT
  zx_wst_RequestSecurityTokenResponse_EXT
  struct zx_elem_s* TokenType;	/* {0,1} xs:anyURI */
  struct zx_elem_s* RequestType;	/* {0,1} http://docs.oasis_open.org/ws_sx/ws_trust/200512/Issue */
  struct zx_wst_RequestedSecurityToken_s* RequestedSecurityToken;	/* {0,1}  */
  struct zx_wsp_AppliesTo_s* AppliesTo;	/* {0,1} nada */
  struct zx_wst_RequestedAttachedReference_s* RequestedAttachedReference;	/* {0,1}  */
  struct zx_wst_RequestedUnattachedReference_s* RequestedUnattachedReference;	/* {0,1}  */
  struct zx_wst_RequestedProofToken_s* RequestedProofToken;	/* {0,1}  */
  struct zx_wst_Entropy_s* Entropy;	/* {0,1} nada */
  struct zx_wst_Lifetime_s* Lifetime;	/* {0,1} nada */
  struct zx_wst_Status_s* Status;	/* {0,1} nada */
  struct zx_elem_s* AllowPostdating;	/* {0,1} wst:AllowPostdatingType */
  struct zx_wst_Renewing_s* Renewing;	/* {0,1} nada */
  struct zx_wst_OnBehalfOf_s* OnBehalfOf;	/* {0,1}  */
  struct zx_wst_Issuer_s* Issuer;	/* {0,1} nada */
  struct zx_elem_s* AuthenticationType;	/* {0,1} xs:anyURI */
  struct zx_wst_Authenticator_s* Authenticator;	/* {0,1} nada */
  struct zx_elem_s* KeyType;	/* {0,1} http://docs.oasis_open.org/ws_sx/ws_trust/200512/PublicKey */
  struct zx_elem_s* KeySize;	/* {0,1} xs:unsignedInt */
  struct zx_elem_s* SignatureAlgorithm;	/* {0,1} xs:anyURI */
  struct zx_wst_Encryption_s* Encryption;	/* {0,1}  */
  struct zx_elem_s* EncryptionAlgorithm;	/* {0,1} xs:anyURI */
  struct zx_elem_s* CanonicalizationAlgorithm;	/* {0,1} xs:anyURI */
  struct zx_wst_ProofEncryption_s* ProofEncryption;	/* {0,1}  */
  struct zx_wst_UseKey_s* UseKey;	/* {0,1} nada */
  struct zx_elem_s* SignWith;	/* {0,1} xs:anyURI */
  struct zx_elem_s* EncryptWith;	/* {0,1} xs:anyURI */
  struct zx_wst_DelegateTo_s* DelegateTo;	/* {0,1}  */
  struct zx_elem_s* Forwardable;	/* {0,1} xs:boolean */
  struct zx_elem_s* Delegatable;	/* {0,1} xs:boolean */
  struct zx_wsp_Policy_s* Policy;	/* {0,1} nada */
  struct zx_wsp_PolicyReference_s* PolicyReference;	/* {0,1} nada */
  struct zx_str* Context;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_wst_RequestSecurityTokenResponse_GET_Context(struct zx_wst_RequestSecurityTokenResponse_s* x);

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_GET_TokenType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_GET_RequestType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_wst_RequestedSecurityToken_s* zx_wst_RequestSecurityTokenResponse_GET_RequestedSecurityToken(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_wsp_AppliesTo_s* zx_wst_RequestSecurityTokenResponse_GET_AppliesTo(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_wst_RequestedAttachedReference_s* zx_wst_RequestSecurityTokenResponse_GET_RequestedAttachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_wst_RequestedUnattachedReference_s* zx_wst_RequestSecurityTokenResponse_GET_RequestedUnattachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_wst_RequestedProofToken_s* zx_wst_RequestSecurityTokenResponse_GET_RequestedProofToken(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_wst_Entropy_s* zx_wst_RequestSecurityTokenResponse_GET_Entropy(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_wst_Lifetime_s* zx_wst_RequestSecurityTokenResponse_GET_Lifetime(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_wst_Status_s* zx_wst_RequestSecurityTokenResponse_GET_Status(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_GET_AllowPostdating(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_wst_Renewing_s* zx_wst_RequestSecurityTokenResponse_GET_Renewing(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_wst_OnBehalfOf_s* zx_wst_RequestSecurityTokenResponse_GET_OnBehalfOf(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_wst_Issuer_s* zx_wst_RequestSecurityTokenResponse_GET_Issuer(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_GET_AuthenticationType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_wst_Authenticator_s* zx_wst_RequestSecurityTokenResponse_GET_Authenticator(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_GET_KeyType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_GET_KeySize(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_GET_SignatureAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_wst_Encryption_s* zx_wst_RequestSecurityTokenResponse_GET_Encryption(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_GET_EncryptionAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_GET_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_wst_ProofEncryption_s* zx_wst_RequestSecurityTokenResponse_GET_ProofEncryption(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_wst_UseKey_s* zx_wst_RequestSecurityTokenResponse_GET_UseKey(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_GET_SignWith(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_GET_EncryptWith(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_wst_DelegateTo_s* zx_wst_RequestSecurityTokenResponse_GET_DelegateTo(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_GET_Forwardable(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_GET_Delegatable(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_wsp_Policy_s* zx_wst_RequestSecurityTokenResponse_GET_Policy(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
struct zx_wsp_PolicyReference_s* zx_wst_RequestSecurityTokenResponse_GET_PolicyReference(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);

int zx_wst_RequestSecurityTokenResponse_NUM_TokenType(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_RequestType(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_RequestedSecurityToken(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_AppliesTo(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_RequestedAttachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_RequestedUnattachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_RequestedProofToken(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_Entropy(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_Lifetime(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_Status(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_AllowPostdating(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_Renewing(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_OnBehalfOf(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_Issuer(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_AuthenticationType(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_Authenticator(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_KeyType(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_KeySize(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_SignatureAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_Encryption(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_EncryptionAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_ProofEncryption(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_UseKey(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_SignWith(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_EncryptWith(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_DelegateTo(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_Forwardable(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_Delegatable(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_Policy(struct zx_wst_RequestSecurityTokenResponse_s* x);
int zx_wst_RequestSecurityTokenResponse_NUM_PolicyReference(struct zx_wst_RequestSecurityTokenResponse_s* x);

struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_POP_TokenType(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_POP_RequestType(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_wst_RequestedSecurityToken_s* zx_wst_RequestSecurityTokenResponse_POP_RequestedSecurityToken(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_wsp_AppliesTo_s* zx_wst_RequestSecurityTokenResponse_POP_AppliesTo(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_wst_RequestedAttachedReference_s* zx_wst_RequestSecurityTokenResponse_POP_RequestedAttachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_wst_RequestedUnattachedReference_s* zx_wst_RequestSecurityTokenResponse_POP_RequestedUnattachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_wst_RequestedProofToken_s* zx_wst_RequestSecurityTokenResponse_POP_RequestedProofToken(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_wst_Entropy_s* zx_wst_RequestSecurityTokenResponse_POP_Entropy(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_wst_Lifetime_s* zx_wst_RequestSecurityTokenResponse_POP_Lifetime(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_wst_Status_s* zx_wst_RequestSecurityTokenResponse_POP_Status(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_POP_AllowPostdating(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_wst_Renewing_s* zx_wst_RequestSecurityTokenResponse_POP_Renewing(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_wst_OnBehalfOf_s* zx_wst_RequestSecurityTokenResponse_POP_OnBehalfOf(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_wst_Issuer_s* zx_wst_RequestSecurityTokenResponse_POP_Issuer(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_POP_AuthenticationType(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_wst_Authenticator_s* zx_wst_RequestSecurityTokenResponse_POP_Authenticator(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_POP_KeyType(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_POP_KeySize(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_POP_SignatureAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_wst_Encryption_s* zx_wst_RequestSecurityTokenResponse_POP_Encryption(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_POP_EncryptionAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_POP_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_wst_ProofEncryption_s* zx_wst_RequestSecurityTokenResponse_POP_ProofEncryption(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_wst_UseKey_s* zx_wst_RequestSecurityTokenResponse_POP_UseKey(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_POP_SignWith(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_POP_EncryptWith(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_wst_DelegateTo_s* zx_wst_RequestSecurityTokenResponse_POP_DelegateTo(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_POP_Forwardable(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_elem_s* zx_wst_RequestSecurityTokenResponse_POP_Delegatable(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_wsp_Policy_s* zx_wst_RequestSecurityTokenResponse_POP_Policy(struct zx_wst_RequestSecurityTokenResponse_s* x);
struct zx_wsp_PolicyReference_s* zx_wst_RequestSecurityTokenResponse_POP_PolicyReference(struct zx_wst_RequestSecurityTokenResponse_s* x);

void zx_wst_RequestSecurityTokenResponse_PUSH_TokenType(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_elem_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_RequestType(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_elem_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_RequestedSecurityToken(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_RequestedSecurityToken_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_AppliesTo(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wsp_AppliesTo_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_RequestedAttachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_RequestedAttachedReference_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_RequestedUnattachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_RequestedUnattachedReference_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_RequestedProofToken(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_RequestedProofToken_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_Entropy(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_Entropy_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_Lifetime(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_Lifetime_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_Status(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_Status_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_AllowPostdating(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_elem_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_Renewing(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_Renewing_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_OnBehalfOf(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_OnBehalfOf_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_Issuer(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_Issuer_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_AuthenticationType(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_elem_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_Authenticator(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_Authenticator_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_KeyType(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_elem_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_KeySize(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_elem_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_SignatureAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_elem_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_Encryption(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_Encryption_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_EncryptionAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_elem_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_elem_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_ProofEncryption(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_ProofEncryption_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_UseKey(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_UseKey_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_SignWith(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_elem_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_EncryptWith(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_elem_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_DelegateTo(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wst_DelegateTo_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_Forwardable(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_elem_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_Delegatable(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_elem_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_Policy(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wsp_Policy_s* y);
void zx_wst_RequestSecurityTokenResponse_PUSH_PolicyReference(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_wsp_PolicyReference_s* y);

void zx_wst_RequestSecurityTokenResponse_PUT_Context(struct zx_wst_RequestSecurityTokenResponse_s* x, struct zx_str* y);

void zx_wst_RequestSecurityTokenResponse_PUT_TokenType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_RequestType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_RequestedSecurityToken(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_RequestedSecurityToken_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_AppliesTo(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wsp_AppliesTo_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_RequestedAttachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_RequestedAttachedReference_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_RequestedUnattachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_RequestedUnattachedReference_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_RequestedProofToken(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_RequestedProofToken_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_Entropy(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Entropy_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_Lifetime(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Lifetime_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_Status(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Status_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_AllowPostdating(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_Renewing(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Renewing_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_OnBehalfOf(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_OnBehalfOf_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_Issuer(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Issuer_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_AuthenticationType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_Authenticator(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Authenticator_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_KeyType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_KeySize(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_SignatureAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_Encryption(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Encryption_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_EncryptionAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_ProofEncryption(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_ProofEncryption_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_UseKey(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_UseKey_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_SignWith(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_EncryptWith(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_DelegateTo(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_DelegateTo_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_Forwardable(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_Delegatable(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_Policy(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wsp_Policy_s* y);
void zx_wst_RequestSecurityTokenResponse_PUT_PolicyReference(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wsp_PolicyReference_s* y);

void zx_wst_RequestSecurityTokenResponse_ADD_TokenType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_RequestType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_RequestedSecurityToken(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_RequestedSecurityToken_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_AppliesTo(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wsp_AppliesTo_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_RequestedAttachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_RequestedAttachedReference_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_RequestedUnattachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_RequestedUnattachedReference_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_RequestedProofToken(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_RequestedProofToken_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_Entropy(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Entropy_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_Lifetime(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Lifetime_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_Status(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Status_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_AllowPostdating(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_Renewing(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Renewing_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_OnBehalfOf(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_OnBehalfOf_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_Issuer(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Issuer_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_AuthenticationType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_Authenticator(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Authenticator_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_KeyType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_KeySize(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_SignatureAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_Encryption(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_Encryption_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_EncryptionAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_ProofEncryption(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_ProofEncryption_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_UseKey(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_UseKey_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_SignWith(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_EncryptWith(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_DelegateTo(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wst_DelegateTo_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_Forwardable(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_Delegatable(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_elem_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_Policy(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wsp_Policy_s* z);
void zx_wst_RequestSecurityTokenResponse_ADD_PolicyReference(struct zx_wst_RequestSecurityTokenResponse_s* x, int n, struct zx_wsp_PolicyReference_s* z);

void zx_wst_RequestSecurityTokenResponse_DEL_TokenType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_RequestType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_RequestedSecurityToken(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_AppliesTo(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_RequestedAttachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_RequestedUnattachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_RequestedProofToken(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_Entropy(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_Lifetime(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_Status(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_AllowPostdating(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_Renewing(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_OnBehalfOf(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_Issuer(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_AuthenticationType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_Authenticator(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_KeyType(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_KeySize(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_SignatureAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_Encryption(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_EncryptionAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_ProofEncryption(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_UseKey(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_SignWith(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_EncryptWith(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_DelegateTo(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_Forwardable(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_Delegatable(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_Policy(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);
void zx_wst_RequestSecurityTokenResponse_DEL_PolicyReference(struct zx_wst_RequestSecurityTokenResponse_s* x, int n);

void zx_wst_RequestSecurityTokenResponse_REV_TokenType(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_RequestType(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_RequestedSecurityToken(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_AppliesTo(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_RequestedAttachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_RequestedUnattachedReference(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_RequestedProofToken(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_Entropy(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_Lifetime(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_Status(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_AllowPostdating(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_Renewing(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_OnBehalfOf(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_Issuer(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_AuthenticationType(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_Authenticator(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_KeyType(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_KeySize(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_SignatureAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_Encryption(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_EncryptionAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_CanonicalizationAlgorithm(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_ProofEncryption(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_UseKey(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_SignWith(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_EncryptWith(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_DelegateTo(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_Forwardable(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_Delegatable(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_Policy(struct zx_wst_RequestSecurityTokenResponse_s* x);
void zx_wst_RequestSecurityTokenResponse_REV_PolicyReference(struct zx_wst_RequestSecurityTokenResponse_s* x);

#endif
/* -------------------------- wst_RequestSecurityTokenResponseCollection -------------------------- */
/* refby( ) */
#ifndef zx_wst_RequestSecurityTokenResponseCollection_EXT
#define zx_wst_RequestSecurityTokenResponseCollection_EXT
#endif

struct zx_wst_RequestSecurityTokenResponseCollection_s* zx_DEC_wst_RequestSecurityTokenResponseCollection(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_RequestSecurityTokenResponseCollection_s* zx_NEW_wst_RequestSecurityTokenResponseCollection(struct zx_ctx* c);
void zx_FREE_wst_RequestSecurityTokenResponseCollection(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenResponseCollection_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_RequestSecurityTokenResponseCollection_s* zx_DEEP_CLONE_wst_RequestSecurityTokenResponseCollection(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenResponseCollection_s* x, int dup_strs);
void zx_DUP_STRS_wst_RequestSecurityTokenResponseCollection(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenResponseCollection_s* x);
int zx_WALK_SO_wst_RequestSecurityTokenResponseCollection(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenResponseCollection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_RequestSecurityTokenResponseCollection(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenResponseCollection_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_RequestSecurityTokenResponseCollection(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenResponseCollection_s* x);
int zx_LEN_WO_wst_RequestSecurityTokenResponseCollection(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenResponseCollection_s* x);
char* zx_ENC_SO_wst_RequestSecurityTokenResponseCollection(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenResponseCollection_s* x, char* p);
char* zx_ENC_WO_wst_RequestSecurityTokenResponseCollection(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenResponseCollection_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_RequestSecurityTokenResponseCollection(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenResponseCollection_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_RequestSecurityTokenResponseCollection(struct zx_ctx* c, struct zx_wst_RequestSecurityTokenResponseCollection_s* x);

struct zx_wst_RequestSecurityTokenResponseCollection_s {
  ZX_ELEM_EXT
  zx_wst_RequestSecurityTokenResponseCollection_EXT
  struct zx_wst_RequestSecurityTokenResponse_s* RequestSecurityTokenResponse;	/* {1,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_wst_RequestSecurityTokenResponse_s* zx_wst_RequestSecurityTokenResponseCollection_GET_RequestSecurityTokenResponse(struct zx_wst_RequestSecurityTokenResponseCollection_s* x, int n);

int zx_wst_RequestSecurityTokenResponseCollection_NUM_RequestSecurityTokenResponse(struct zx_wst_RequestSecurityTokenResponseCollection_s* x);

struct zx_wst_RequestSecurityTokenResponse_s* zx_wst_RequestSecurityTokenResponseCollection_POP_RequestSecurityTokenResponse(struct zx_wst_RequestSecurityTokenResponseCollection_s* x);

void zx_wst_RequestSecurityTokenResponseCollection_PUSH_RequestSecurityTokenResponse(struct zx_wst_RequestSecurityTokenResponseCollection_s* x, struct zx_wst_RequestSecurityTokenResponse_s* y);


void zx_wst_RequestSecurityTokenResponseCollection_PUT_RequestSecurityTokenResponse(struct zx_wst_RequestSecurityTokenResponseCollection_s* x, int n, struct zx_wst_RequestSecurityTokenResponse_s* y);

void zx_wst_RequestSecurityTokenResponseCollection_ADD_RequestSecurityTokenResponse(struct zx_wst_RequestSecurityTokenResponseCollection_s* x, int n, struct zx_wst_RequestSecurityTokenResponse_s* z);

void zx_wst_RequestSecurityTokenResponseCollection_DEL_RequestSecurityTokenResponse(struct zx_wst_RequestSecurityTokenResponseCollection_s* x, int n);

void zx_wst_RequestSecurityTokenResponseCollection_REV_RequestSecurityTokenResponse(struct zx_wst_RequestSecurityTokenResponseCollection_s* x);

#endif
/* -------------------------- wst_RequestedAttachedReference -------------------------- */
/* refby( zx_wst_RequestSecurityTokenResponse_s ) */
#ifndef zx_wst_RequestedAttachedReference_EXT
#define zx_wst_RequestedAttachedReference_EXT
#endif

struct zx_wst_RequestedAttachedReference_s* zx_DEC_wst_RequestedAttachedReference(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_RequestedAttachedReference_s* zx_NEW_wst_RequestedAttachedReference(struct zx_ctx* c);
void zx_FREE_wst_RequestedAttachedReference(struct zx_ctx* c, struct zx_wst_RequestedAttachedReference_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_RequestedAttachedReference_s* zx_DEEP_CLONE_wst_RequestedAttachedReference(struct zx_ctx* c, struct zx_wst_RequestedAttachedReference_s* x, int dup_strs);
void zx_DUP_STRS_wst_RequestedAttachedReference(struct zx_ctx* c, struct zx_wst_RequestedAttachedReference_s* x);
int zx_WALK_SO_wst_RequestedAttachedReference(struct zx_ctx* c, struct zx_wst_RequestedAttachedReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_RequestedAttachedReference(struct zx_ctx* c, struct zx_wst_RequestedAttachedReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_RequestedAttachedReference(struct zx_ctx* c, struct zx_wst_RequestedAttachedReference_s* x);
int zx_LEN_WO_wst_RequestedAttachedReference(struct zx_ctx* c, struct zx_wst_RequestedAttachedReference_s* x);
char* zx_ENC_SO_wst_RequestedAttachedReference(struct zx_ctx* c, struct zx_wst_RequestedAttachedReference_s* x, char* p);
char* zx_ENC_WO_wst_RequestedAttachedReference(struct zx_ctx* c, struct zx_wst_RequestedAttachedReference_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_RequestedAttachedReference(struct zx_ctx* c, struct zx_wst_RequestedAttachedReference_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_RequestedAttachedReference(struct zx_ctx* c, struct zx_wst_RequestedAttachedReference_s* x);

struct zx_wst_RequestedAttachedReference_s {
  ZX_ELEM_EXT
  zx_wst_RequestedAttachedReference_EXT
  struct zx_wsse_SecurityTokenReference_s* SecurityTokenReference;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_wsse_SecurityTokenReference_s* zx_wst_RequestedAttachedReference_GET_SecurityTokenReference(struct zx_wst_RequestedAttachedReference_s* x, int n);

int zx_wst_RequestedAttachedReference_NUM_SecurityTokenReference(struct zx_wst_RequestedAttachedReference_s* x);

struct zx_wsse_SecurityTokenReference_s* zx_wst_RequestedAttachedReference_POP_SecurityTokenReference(struct zx_wst_RequestedAttachedReference_s* x);

void zx_wst_RequestedAttachedReference_PUSH_SecurityTokenReference(struct zx_wst_RequestedAttachedReference_s* x, struct zx_wsse_SecurityTokenReference_s* y);


void zx_wst_RequestedAttachedReference_PUT_SecurityTokenReference(struct zx_wst_RequestedAttachedReference_s* x, int n, struct zx_wsse_SecurityTokenReference_s* y);

void zx_wst_RequestedAttachedReference_ADD_SecurityTokenReference(struct zx_wst_RequestedAttachedReference_s* x, int n, struct zx_wsse_SecurityTokenReference_s* z);

void zx_wst_RequestedAttachedReference_DEL_SecurityTokenReference(struct zx_wst_RequestedAttachedReference_s* x, int n);

void zx_wst_RequestedAttachedReference_REV_SecurityTokenReference(struct zx_wst_RequestedAttachedReference_s* x);

#endif
/* -------------------------- wst_RequestedProofToken -------------------------- */
/* refby( zx_wst_RequestSecurityTokenResponse_s ) */
#ifndef zx_wst_RequestedProofToken_EXT
#define zx_wst_RequestedProofToken_EXT
#endif

struct zx_wst_RequestedProofToken_s* zx_DEC_wst_RequestedProofToken(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_RequestedProofToken_s* zx_NEW_wst_RequestedProofToken(struct zx_ctx* c);
void zx_FREE_wst_RequestedProofToken(struct zx_ctx* c, struct zx_wst_RequestedProofToken_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_RequestedProofToken_s* zx_DEEP_CLONE_wst_RequestedProofToken(struct zx_ctx* c, struct zx_wst_RequestedProofToken_s* x, int dup_strs);
void zx_DUP_STRS_wst_RequestedProofToken(struct zx_ctx* c, struct zx_wst_RequestedProofToken_s* x);
int zx_WALK_SO_wst_RequestedProofToken(struct zx_ctx* c, struct zx_wst_RequestedProofToken_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_RequestedProofToken(struct zx_ctx* c, struct zx_wst_RequestedProofToken_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_RequestedProofToken(struct zx_ctx* c, struct zx_wst_RequestedProofToken_s* x);
int zx_LEN_WO_wst_RequestedProofToken(struct zx_ctx* c, struct zx_wst_RequestedProofToken_s* x);
char* zx_ENC_SO_wst_RequestedProofToken(struct zx_ctx* c, struct zx_wst_RequestedProofToken_s* x, char* p);
char* zx_ENC_WO_wst_RequestedProofToken(struct zx_ctx* c, struct zx_wst_RequestedProofToken_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_RequestedProofToken(struct zx_ctx* c, struct zx_wst_RequestedProofToken_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_RequestedProofToken(struct zx_ctx* c, struct zx_wst_RequestedProofToken_s* x);

struct zx_wst_RequestedProofToken_s {
  ZX_ELEM_EXT
  zx_wst_RequestedProofToken_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- wst_RequestedSecurityToken -------------------------- */
/* refby( zx_wst_RequestSecurityTokenResponse_s ) */
#ifndef zx_wst_RequestedSecurityToken_EXT
#define zx_wst_RequestedSecurityToken_EXT
#endif

struct zx_wst_RequestedSecurityToken_s* zx_DEC_wst_RequestedSecurityToken(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_RequestedSecurityToken_s* zx_NEW_wst_RequestedSecurityToken(struct zx_ctx* c);
void zx_FREE_wst_RequestedSecurityToken(struct zx_ctx* c, struct zx_wst_RequestedSecurityToken_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_RequestedSecurityToken_s* zx_DEEP_CLONE_wst_RequestedSecurityToken(struct zx_ctx* c, struct zx_wst_RequestedSecurityToken_s* x, int dup_strs);
void zx_DUP_STRS_wst_RequestedSecurityToken(struct zx_ctx* c, struct zx_wst_RequestedSecurityToken_s* x);
int zx_WALK_SO_wst_RequestedSecurityToken(struct zx_ctx* c, struct zx_wst_RequestedSecurityToken_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_RequestedSecurityToken(struct zx_ctx* c, struct zx_wst_RequestedSecurityToken_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_RequestedSecurityToken(struct zx_ctx* c, struct zx_wst_RequestedSecurityToken_s* x);
int zx_LEN_WO_wst_RequestedSecurityToken(struct zx_ctx* c, struct zx_wst_RequestedSecurityToken_s* x);
char* zx_ENC_SO_wst_RequestedSecurityToken(struct zx_ctx* c, struct zx_wst_RequestedSecurityToken_s* x, char* p);
char* zx_ENC_WO_wst_RequestedSecurityToken(struct zx_ctx* c, struct zx_wst_RequestedSecurityToken_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_RequestedSecurityToken(struct zx_ctx* c, struct zx_wst_RequestedSecurityToken_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_RequestedSecurityToken(struct zx_ctx* c, struct zx_wst_RequestedSecurityToken_s* x);

struct zx_wst_RequestedSecurityToken_s {
  ZX_ELEM_EXT
  zx_wst_RequestedSecurityToken_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- wst_RequestedUnattachedReference -------------------------- */
/* refby( zx_wst_RequestSecurityTokenResponse_s ) */
#ifndef zx_wst_RequestedUnattachedReference_EXT
#define zx_wst_RequestedUnattachedReference_EXT
#endif

struct zx_wst_RequestedUnattachedReference_s* zx_DEC_wst_RequestedUnattachedReference(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_RequestedUnattachedReference_s* zx_NEW_wst_RequestedUnattachedReference(struct zx_ctx* c);
void zx_FREE_wst_RequestedUnattachedReference(struct zx_ctx* c, struct zx_wst_RequestedUnattachedReference_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_RequestedUnattachedReference_s* zx_DEEP_CLONE_wst_RequestedUnattachedReference(struct zx_ctx* c, struct zx_wst_RequestedUnattachedReference_s* x, int dup_strs);
void zx_DUP_STRS_wst_RequestedUnattachedReference(struct zx_ctx* c, struct zx_wst_RequestedUnattachedReference_s* x);
int zx_WALK_SO_wst_RequestedUnattachedReference(struct zx_ctx* c, struct zx_wst_RequestedUnattachedReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_RequestedUnattachedReference(struct zx_ctx* c, struct zx_wst_RequestedUnattachedReference_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_RequestedUnattachedReference(struct zx_ctx* c, struct zx_wst_RequestedUnattachedReference_s* x);
int zx_LEN_WO_wst_RequestedUnattachedReference(struct zx_ctx* c, struct zx_wst_RequestedUnattachedReference_s* x);
char* zx_ENC_SO_wst_RequestedUnattachedReference(struct zx_ctx* c, struct zx_wst_RequestedUnattachedReference_s* x, char* p);
char* zx_ENC_WO_wst_RequestedUnattachedReference(struct zx_ctx* c, struct zx_wst_RequestedUnattachedReference_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_RequestedUnattachedReference(struct zx_ctx* c, struct zx_wst_RequestedUnattachedReference_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_RequestedUnattachedReference(struct zx_ctx* c, struct zx_wst_RequestedUnattachedReference_s* x);

struct zx_wst_RequestedUnattachedReference_s {
  ZX_ELEM_EXT
  zx_wst_RequestedUnattachedReference_EXT
  struct zx_wsse_SecurityTokenReference_s* SecurityTokenReference;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_wsse_SecurityTokenReference_s* zx_wst_RequestedUnattachedReference_GET_SecurityTokenReference(struct zx_wst_RequestedUnattachedReference_s* x, int n);

int zx_wst_RequestedUnattachedReference_NUM_SecurityTokenReference(struct zx_wst_RequestedUnattachedReference_s* x);

struct zx_wsse_SecurityTokenReference_s* zx_wst_RequestedUnattachedReference_POP_SecurityTokenReference(struct zx_wst_RequestedUnattachedReference_s* x);

void zx_wst_RequestedUnattachedReference_PUSH_SecurityTokenReference(struct zx_wst_RequestedUnattachedReference_s* x, struct zx_wsse_SecurityTokenReference_s* y);


void zx_wst_RequestedUnattachedReference_PUT_SecurityTokenReference(struct zx_wst_RequestedUnattachedReference_s* x, int n, struct zx_wsse_SecurityTokenReference_s* y);

void zx_wst_RequestedUnattachedReference_ADD_SecurityTokenReference(struct zx_wst_RequestedUnattachedReference_s* x, int n, struct zx_wsse_SecurityTokenReference_s* z);

void zx_wst_RequestedUnattachedReference_DEL_SecurityTokenReference(struct zx_wst_RequestedUnattachedReference_s* x, int n);

void zx_wst_RequestedUnattachedReference_REV_SecurityTokenReference(struct zx_wst_RequestedUnattachedReference_s* x);

#endif
/* -------------------------- wst_SignChallenge -------------------------- */
/* refby( ) */
#ifndef zx_wst_SignChallenge_EXT
#define zx_wst_SignChallenge_EXT
#endif

struct zx_wst_SignChallenge_s* zx_DEC_wst_SignChallenge(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_SignChallenge_s* zx_NEW_wst_SignChallenge(struct zx_ctx* c);
void zx_FREE_wst_SignChallenge(struct zx_ctx* c, struct zx_wst_SignChallenge_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_SignChallenge_s* zx_DEEP_CLONE_wst_SignChallenge(struct zx_ctx* c, struct zx_wst_SignChallenge_s* x, int dup_strs);
void zx_DUP_STRS_wst_SignChallenge(struct zx_ctx* c, struct zx_wst_SignChallenge_s* x);
int zx_WALK_SO_wst_SignChallenge(struct zx_ctx* c, struct zx_wst_SignChallenge_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_SignChallenge(struct zx_ctx* c, struct zx_wst_SignChallenge_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_SignChallenge(struct zx_ctx* c, struct zx_wst_SignChallenge_s* x);
int zx_LEN_WO_wst_SignChallenge(struct zx_ctx* c, struct zx_wst_SignChallenge_s* x);
char* zx_ENC_SO_wst_SignChallenge(struct zx_ctx* c, struct zx_wst_SignChallenge_s* x, char* p);
char* zx_ENC_WO_wst_SignChallenge(struct zx_ctx* c, struct zx_wst_SignChallenge_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_SignChallenge(struct zx_ctx* c, struct zx_wst_SignChallenge_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_SignChallenge(struct zx_ctx* c, struct zx_wst_SignChallenge_s* x);

struct zx_wst_SignChallenge_s {
  ZX_ELEM_EXT
  zx_wst_SignChallenge_EXT
  struct zx_elem_s* Challenge;	/* {1,1} xs:string */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_wst_SignChallenge_GET_Challenge(struct zx_wst_SignChallenge_s* x, int n);

int zx_wst_SignChallenge_NUM_Challenge(struct zx_wst_SignChallenge_s* x);

struct zx_elem_s* zx_wst_SignChallenge_POP_Challenge(struct zx_wst_SignChallenge_s* x);

void zx_wst_SignChallenge_PUSH_Challenge(struct zx_wst_SignChallenge_s* x, struct zx_elem_s* y);


void zx_wst_SignChallenge_PUT_Challenge(struct zx_wst_SignChallenge_s* x, int n, struct zx_elem_s* y);

void zx_wst_SignChallenge_ADD_Challenge(struct zx_wst_SignChallenge_s* x, int n, struct zx_elem_s* z);

void zx_wst_SignChallenge_DEL_Challenge(struct zx_wst_SignChallenge_s* x, int n);

void zx_wst_SignChallenge_REV_Challenge(struct zx_wst_SignChallenge_s* x);

#endif
/* -------------------------- wst_SignChallengeResponse -------------------------- */
/* refby( ) */
#ifndef zx_wst_SignChallengeResponse_EXT
#define zx_wst_SignChallengeResponse_EXT
#endif

struct zx_wst_SignChallengeResponse_s* zx_DEC_wst_SignChallengeResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_SignChallengeResponse_s* zx_NEW_wst_SignChallengeResponse(struct zx_ctx* c);
void zx_FREE_wst_SignChallengeResponse(struct zx_ctx* c, struct zx_wst_SignChallengeResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_SignChallengeResponse_s* zx_DEEP_CLONE_wst_SignChallengeResponse(struct zx_ctx* c, struct zx_wst_SignChallengeResponse_s* x, int dup_strs);
void zx_DUP_STRS_wst_SignChallengeResponse(struct zx_ctx* c, struct zx_wst_SignChallengeResponse_s* x);
int zx_WALK_SO_wst_SignChallengeResponse(struct zx_ctx* c, struct zx_wst_SignChallengeResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_SignChallengeResponse(struct zx_ctx* c, struct zx_wst_SignChallengeResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_SignChallengeResponse(struct zx_ctx* c, struct zx_wst_SignChallengeResponse_s* x);
int zx_LEN_WO_wst_SignChallengeResponse(struct zx_ctx* c, struct zx_wst_SignChallengeResponse_s* x);
char* zx_ENC_SO_wst_SignChallengeResponse(struct zx_ctx* c, struct zx_wst_SignChallengeResponse_s* x, char* p);
char* zx_ENC_WO_wst_SignChallengeResponse(struct zx_ctx* c, struct zx_wst_SignChallengeResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_SignChallengeResponse(struct zx_ctx* c, struct zx_wst_SignChallengeResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_SignChallengeResponse(struct zx_ctx* c, struct zx_wst_SignChallengeResponse_s* x);

struct zx_wst_SignChallengeResponse_s {
  ZX_ELEM_EXT
  zx_wst_SignChallengeResponse_EXT
  struct zx_elem_s* Challenge;	/* {1,1} xs:string */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_wst_SignChallengeResponse_GET_Challenge(struct zx_wst_SignChallengeResponse_s* x, int n);

int zx_wst_SignChallengeResponse_NUM_Challenge(struct zx_wst_SignChallengeResponse_s* x);

struct zx_elem_s* zx_wst_SignChallengeResponse_POP_Challenge(struct zx_wst_SignChallengeResponse_s* x);

void zx_wst_SignChallengeResponse_PUSH_Challenge(struct zx_wst_SignChallengeResponse_s* x, struct zx_elem_s* y);


void zx_wst_SignChallengeResponse_PUT_Challenge(struct zx_wst_SignChallengeResponse_s* x, int n, struct zx_elem_s* y);

void zx_wst_SignChallengeResponse_ADD_Challenge(struct zx_wst_SignChallengeResponse_s* x, int n, struct zx_elem_s* z);

void zx_wst_SignChallengeResponse_DEL_Challenge(struct zx_wst_SignChallengeResponse_s* x, int n);

void zx_wst_SignChallengeResponse_REV_Challenge(struct zx_wst_SignChallengeResponse_s* x);

#endif
/* -------------------------- wst_Status -------------------------- */
/* refby( zx_wst_RequestSecurityTokenResponse_s ) */
#ifndef zx_wst_Status_EXT
#define zx_wst_Status_EXT
#endif

struct zx_wst_Status_s* zx_DEC_wst_Status(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_Status_s* zx_NEW_wst_Status(struct zx_ctx* c);
void zx_FREE_wst_Status(struct zx_ctx* c, struct zx_wst_Status_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_Status_s* zx_DEEP_CLONE_wst_Status(struct zx_ctx* c, struct zx_wst_Status_s* x, int dup_strs);
void zx_DUP_STRS_wst_Status(struct zx_ctx* c, struct zx_wst_Status_s* x);
int zx_WALK_SO_wst_Status(struct zx_ctx* c, struct zx_wst_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_Status(struct zx_ctx* c, struct zx_wst_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_Status(struct zx_ctx* c, struct zx_wst_Status_s* x);
int zx_LEN_WO_wst_Status(struct zx_ctx* c, struct zx_wst_Status_s* x);
char* zx_ENC_SO_wst_Status(struct zx_ctx* c, struct zx_wst_Status_s* x, char* p);
char* zx_ENC_WO_wst_Status(struct zx_ctx* c, struct zx_wst_Status_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_Status(struct zx_ctx* c, struct zx_wst_Status_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_Status(struct zx_ctx* c, struct zx_wst_Status_s* x);

struct zx_wst_Status_s {
  ZX_ELEM_EXT
  zx_wst_Status_EXT
  struct zx_elem_s* Code;	/* {1,1} http://docs.oasis_open.org/ws_sx/ws_trust/200512/status/valid */
  struct zx_elem_s* Reason;	/* {0,1} xs:string */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_wst_Status_GET_Code(struct zx_wst_Status_s* x, int n);
struct zx_elem_s* zx_wst_Status_GET_Reason(struct zx_wst_Status_s* x, int n);

int zx_wst_Status_NUM_Code(struct zx_wst_Status_s* x);
int zx_wst_Status_NUM_Reason(struct zx_wst_Status_s* x);

struct zx_elem_s* zx_wst_Status_POP_Code(struct zx_wst_Status_s* x);
struct zx_elem_s* zx_wst_Status_POP_Reason(struct zx_wst_Status_s* x);

void zx_wst_Status_PUSH_Code(struct zx_wst_Status_s* x, struct zx_elem_s* y);
void zx_wst_Status_PUSH_Reason(struct zx_wst_Status_s* x, struct zx_elem_s* y);


void zx_wst_Status_PUT_Code(struct zx_wst_Status_s* x, int n, struct zx_elem_s* y);
void zx_wst_Status_PUT_Reason(struct zx_wst_Status_s* x, int n, struct zx_elem_s* y);

void zx_wst_Status_ADD_Code(struct zx_wst_Status_s* x, int n, struct zx_elem_s* z);
void zx_wst_Status_ADD_Reason(struct zx_wst_Status_s* x, int n, struct zx_elem_s* z);

void zx_wst_Status_DEL_Code(struct zx_wst_Status_s* x, int n);
void zx_wst_Status_DEL_Reason(struct zx_wst_Status_s* x, int n);

void zx_wst_Status_REV_Code(struct zx_wst_Status_s* x);
void zx_wst_Status_REV_Reason(struct zx_wst_Status_s* x);

#endif
/* -------------------------- wst_UseKey -------------------------- */
/* refby( zx_wst_RequestSecurityToken_s zx_wst_RequestSecurityTokenResponse_s ) */
#ifndef zx_wst_UseKey_EXT
#define zx_wst_UseKey_EXT
#endif

struct zx_wst_UseKey_s* zx_DEC_wst_UseKey(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_UseKey_s* zx_NEW_wst_UseKey(struct zx_ctx* c);
void zx_FREE_wst_UseKey(struct zx_ctx* c, struct zx_wst_UseKey_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_UseKey_s* zx_DEEP_CLONE_wst_UseKey(struct zx_ctx* c, struct zx_wst_UseKey_s* x, int dup_strs);
void zx_DUP_STRS_wst_UseKey(struct zx_ctx* c, struct zx_wst_UseKey_s* x);
int zx_WALK_SO_wst_UseKey(struct zx_ctx* c, struct zx_wst_UseKey_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_UseKey(struct zx_ctx* c, struct zx_wst_UseKey_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_UseKey(struct zx_ctx* c, struct zx_wst_UseKey_s* x);
int zx_LEN_WO_wst_UseKey(struct zx_ctx* c, struct zx_wst_UseKey_s* x);
char* zx_ENC_SO_wst_UseKey(struct zx_ctx* c, struct zx_wst_UseKey_s* x, char* p);
char* zx_ENC_WO_wst_UseKey(struct zx_ctx* c, struct zx_wst_UseKey_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_UseKey(struct zx_ctx* c, struct zx_wst_UseKey_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_UseKey(struct zx_ctx* c, struct zx_wst_UseKey_s* x);

struct zx_wst_UseKey_s {
  ZX_ELEM_EXT
  zx_wst_UseKey_EXT
  struct zx_str* Sig;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_wst_UseKey_GET_Sig(struct zx_wst_UseKey_s* x);





void zx_wst_UseKey_PUT_Sig(struct zx_wst_UseKey_s* x, struct zx_str* y);





#endif
/* -------------------------- wst_ValidateTarget -------------------------- */
/* refby( ) */
#ifndef zx_wst_ValidateTarget_EXT
#define zx_wst_ValidateTarget_EXT
#endif

struct zx_wst_ValidateTarget_s* zx_DEC_wst_ValidateTarget(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_wst_ValidateTarget_s* zx_NEW_wst_ValidateTarget(struct zx_ctx* c);
void zx_FREE_wst_ValidateTarget(struct zx_ctx* c, struct zx_wst_ValidateTarget_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_wst_ValidateTarget_s* zx_DEEP_CLONE_wst_ValidateTarget(struct zx_ctx* c, struct zx_wst_ValidateTarget_s* x, int dup_strs);
void zx_DUP_STRS_wst_ValidateTarget(struct zx_ctx* c, struct zx_wst_ValidateTarget_s* x);
int zx_WALK_SO_wst_ValidateTarget(struct zx_ctx* c, struct zx_wst_ValidateTarget_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_wst_ValidateTarget(struct zx_ctx* c, struct zx_wst_ValidateTarget_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_wst_ValidateTarget(struct zx_ctx* c, struct zx_wst_ValidateTarget_s* x);
int zx_LEN_WO_wst_ValidateTarget(struct zx_ctx* c, struct zx_wst_ValidateTarget_s* x);
char* zx_ENC_SO_wst_ValidateTarget(struct zx_ctx* c, struct zx_wst_ValidateTarget_s* x, char* p);
char* zx_ENC_WO_wst_ValidateTarget(struct zx_ctx* c, struct zx_wst_ValidateTarget_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_wst_ValidateTarget(struct zx_ctx* c, struct zx_wst_ValidateTarget_s* x);
struct zx_str* zx_EASY_ENC_WO_wst_ValidateTarget(struct zx_ctx* c, struct zx_wst_ValidateTarget_s* x);

struct zx_wst_ValidateTarget_s {
  ZX_ELEM_EXT
  zx_wst_ValidateTarget_EXT
};

#ifdef ZX_ENA_GETPUT










#endif

#endif
