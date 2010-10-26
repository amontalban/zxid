/* c/zx-prov-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_prov_data_h
#define _c_zx_prov_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- prov_CallbackEPR -------------------------- */
/* refby( zx_prov_UpdateEPRItem_s zx_prov_PMGetDescriptor_s ) */
#ifndef zx_prov_CallbackEPR_EXT
#define zx_prov_CallbackEPR_EXT
#endif

struct zx_prov_CallbackEPR_s* zx_DEC_prov_CallbackEPR(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_CallbackEPR_s* zx_NEW_prov_CallbackEPR(struct zx_ctx* c);
void zx_FREE_prov_CallbackEPR(struct zx_ctx* c, struct zx_prov_CallbackEPR_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_CallbackEPR_s* zx_DEEP_CLONE_prov_CallbackEPR(struct zx_ctx* c, struct zx_prov_CallbackEPR_s* x, int dup_strs);
void zx_DUP_STRS_prov_CallbackEPR(struct zx_ctx* c, struct zx_prov_CallbackEPR_s* x);
int zx_WALK_SO_prov_CallbackEPR(struct zx_ctx* c, struct zx_prov_CallbackEPR_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_CallbackEPR(struct zx_ctx* c, struct zx_prov_CallbackEPR_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_CallbackEPR(struct zx_ctx* c, struct zx_prov_CallbackEPR_s* x);
int zx_LEN_WO_prov_CallbackEPR(struct zx_ctx* c, struct zx_prov_CallbackEPR_s* x);
char* zx_ENC_SO_prov_CallbackEPR(struct zx_ctx* c, struct zx_prov_CallbackEPR_s* x, char* p);
char* zx_ENC_WO_prov_CallbackEPR(struct zx_ctx* c, struct zx_prov_CallbackEPR_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_CallbackEPR(struct zx_ctx* c, struct zx_prov_CallbackEPR_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_CallbackEPR(struct zx_ctx* c, struct zx_prov_CallbackEPR_s* x);

struct zx_prov_CallbackEPR_s {
  ZX_ELEM_EXT
  zx_prov_CallbackEPR_EXT
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
struct zx_str* zx_prov_CallbackEPR_GET_ID(struct zx_prov_CallbackEPR_s* x);
struct zx_str* zx_prov_CallbackEPR_GET_id(struct zx_prov_CallbackEPR_s* x);
struct zx_str* zx_prov_CallbackEPR_GET_notOnOrAfter(struct zx_prov_CallbackEPR_s* x);
struct zx_str* zx_prov_CallbackEPR_GET_Id(struct zx_prov_CallbackEPR_s* x);
struct zx_str* zx_prov_CallbackEPR_GET_actor(struct zx_prov_CallbackEPR_s* x);
struct zx_str* zx_prov_CallbackEPR_GET_mustUnderstand(struct zx_prov_CallbackEPR_s* x);

struct zx_a_Address_s* zx_prov_CallbackEPR_GET_Address(struct zx_prov_CallbackEPR_s* x, int n);
struct zx_a_ReferenceParameters_s* zx_prov_CallbackEPR_GET_ReferenceParameters(struct zx_prov_CallbackEPR_s* x, int n);
struct zx_a_Metadata_s* zx_prov_CallbackEPR_GET_Metadata(struct zx_prov_CallbackEPR_s* x, int n);

int zx_prov_CallbackEPR_NUM_Address(struct zx_prov_CallbackEPR_s* x);
int zx_prov_CallbackEPR_NUM_ReferenceParameters(struct zx_prov_CallbackEPR_s* x);
int zx_prov_CallbackEPR_NUM_Metadata(struct zx_prov_CallbackEPR_s* x);

struct zx_a_Address_s* zx_prov_CallbackEPR_POP_Address(struct zx_prov_CallbackEPR_s* x);
struct zx_a_ReferenceParameters_s* zx_prov_CallbackEPR_POP_ReferenceParameters(struct zx_prov_CallbackEPR_s* x);
struct zx_a_Metadata_s* zx_prov_CallbackEPR_POP_Metadata(struct zx_prov_CallbackEPR_s* x);

void zx_prov_CallbackEPR_PUSH_Address(struct zx_prov_CallbackEPR_s* x, struct zx_a_Address_s* y);
void zx_prov_CallbackEPR_PUSH_ReferenceParameters(struct zx_prov_CallbackEPR_s* x, struct zx_a_ReferenceParameters_s* y);
void zx_prov_CallbackEPR_PUSH_Metadata(struct zx_prov_CallbackEPR_s* x, struct zx_a_Metadata_s* y);

void zx_prov_CallbackEPR_PUT_ID(struct zx_prov_CallbackEPR_s* x, struct zx_str* y);
void zx_prov_CallbackEPR_PUT_id(struct zx_prov_CallbackEPR_s* x, struct zx_str* y);
void zx_prov_CallbackEPR_PUT_notOnOrAfter(struct zx_prov_CallbackEPR_s* x, struct zx_str* y);
void zx_prov_CallbackEPR_PUT_Id(struct zx_prov_CallbackEPR_s* x, struct zx_str* y);
void zx_prov_CallbackEPR_PUT_actor(struct zx_prov_CallbackEPR_s* x, struct zx_str* y);
void zx_prov_CallbackEPR_PUT_mustUnderstand(struct zx_prov_CallbackEPR_s* x, struct zx_str* y);

void zx_prov_CallbackEPR_PUT_Address(struct zx_prov_CallbackEPR_s* x, int n, struct zx_a_Address_s* y);
void zx_prov_CallbackEPR_PUT_ReferenceParameters(struct zx_prov_CallbackEPR_s* x, int n, struct zx_a_ReferenceParameters_s* y);
void zx_prov_CallbackEPR_PUT_Metadata(struct zx_prov_CallbackEPR_s* x, int n, struct zx_a_Metadata_s* y);

void zx_prov_CallbackEPR_ADD_Address(struct zx_prov_CallbackEPR_s* x, int n, struct zx_a_Address_s* z);
void zx_prov_CallbackEPR_ADD_ReferenceParameters(struct zx_prov_CallbackEPR_s* x, int n, struct zx_a_ReferenceParameters_s* z);
void zx_prov_CallbackEPR_ADD_Metadata(struct zx_prov_CallbackEPR_s* x, int n, struct zx_a_Metadata_s* z);

void zx_prov_CallbackEPR_DEL_Address(struct zx_prov_CallbackEPR_s* x, int n);
void zx_prov_CallbackEPR_DEL_ReferenceParameters(struct zx_prov_CallbackEPR_s* x, int n);
void zx_prov_CallbackEPR_DEL_Metadata(struct zx_prov_CallbackEPR_s* x, int n);

void zx_prov_CallbackEPR_REV_Address(struct zx_prov_CallbackEPR_s* x);
void zx_prov_CallbackEPR_REV_ReferenceParameters(struct zx_prov_CallbackEPR_s* x);
void zx_prov_CallbackEPR_REV_Metadata(struct zx_prov_CallbackEPR_s* x);

#endif
/* -------------------------- prov_PMActivate -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMActivate_EXT
#define zx_prov_PMActivate_EXT
#endif

struct zx_prov_PMActivate_s* zx_DEC_prov_PMActivate(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMActivate_s* zx_NEW_prov_PMActivate(struct zx_ctx* c);
void zx_FREE_prov_PMActivate(struct zx_ctx* c, struct zx_prov_PMActivate_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMActivate_s* zx_DEEP_CLONE_prov_PMActivate(struct zx_ctx* c, struct zx_prov_PMActivate_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMActivate(struct zx_ctx* c, struct zx_prov_PMActivate_s* x);
int zx_WALK_SO_prov_PMActivate(struct zx_ctx* c, struct zx_prov_PMActivate_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMActivate(struct zx_ctx* c, struct zx_prov_PMActivate_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMActivate(struct zx_ctx* c, struct zx_prov_PMActivate_s* x);
int zx_LEN_WO_prov_PMActivate(struct zx_ctx* c, struct zx_prov_PMActivate_s* x);
char* zx_ENC_SO_prov_PMActivate(struct zx_ctx* c, struct zx_prov_PMActivate_s* x, char* p);
char* zx_ENC_WO_prov_PMActivate(struct zx_ctx* c, struct zx_prov_PMActivate_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMActivate(struct zx_ctx* c, struct zx_prov_PMActivate_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMActivate(struct zx_ctx* c, struct zx_prov_PMActivate_s* x);

struct zx_prov_PMActivate_s {
  ZX_ELEM_EXT
  zx_prov_PMActivate_EXT
  struct zx_prov_PMActivateItem_s* PMActivateItem;	/* {1,-1} nada */
  struct zx_elem_s* NotifyTo;	/* {0,1} a:EndpointReference */
};

#ifdef ZX_ENA_GETPUT

struct zx_prov_PMActivateItem_s* zx_prov_PMActivate_GET_PMActivateItem(struct zx_prov_PMActivate_s* x, int n);
struct zx_elem_s* zx_prov_PMActivate_GET_NotifyTo(struct zx_prov_PMActivate_s* x, int n);

int zx_prov_PMActivate_NUM_PMActivateItem(struct zx_prov_PMActivate_s* x);
int zx_prov_PMActivate_NUM_NotifyTo(struct zx_prov_PMActivate_s* x);

struct zx_prov_PMActivateItem_s* zx_prov_PMActivate_POP_PMActivateItem(struct zx_prov_PMActivate_s* x);
struct zx_elem_s* zx_prov_PMActivate_POP_NotifyTo(struct zx_prov_PMActivate_s* x);

void zx_prov_PMActivate_PUSH_PMActivateItem(struct zx_prov_PMActivate_s* x, struct zx_prov_PMActivateItem_s* y);
void zx_prov_PMActivate_PUSH_NotifyTo(struct zx_prov_PMActivate_s* x, struct zx_elem_s* y);


void zx_prov_PMActivate_PUT_PMActivateItem(struct zx_prov_PMActivate_s* x, int n, struct zx_prov_PMActivateItem_s* y);
void zx_prov_PMActivate_PUT_NotifyTo(struct zx_prov_PMActivate_s* x, int n, struct zx_elem_s* y);

void zx_prov_PMActivate_ADD_PMActivateItem(struct zx_prov_PMActivate_s* x, int n, struct zx_prov_PMActivateItem_s* z);
void zx_prov_PMActivate_ADD_NotifyTo(struct zx_prov_PMActivate_s* x, int n, struct zx_elem_s* z);

void zx_prov_PMActivate_DEL_PMActivateItem(struct zx_prov_PMActivate_s* x, int n);
void zx_prov_PMActivate_DEL_NotifyTo(struct zx_prov_PMActivate_s* x, int n);

void zx_prov_PMActivate_REV_PMActivateItem(struct zx_prov_PMActivate_s* x);
void zx_prov_PMActivate_REV_NotifyTo(struct zx_prov_PMActivate_s* x);

#endif
/* -------------------------- prov_PMActivateItem -------------------------- */
/* refby( zx_prov_PMActivate_s ) */
#ifndef zx_prov_PMActivateItem_EXT
#define zx_prov_PMActivateItem_EXT
#endif

struct zx_prov_PMActivateItem_s* zx_DEC_prov_PMActivateItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMActivateItem_s* zx_NEW_prov_PMActivateItem(struct zx_ctx* c);
void zx_FREE_prov_PMActivateItem(struct zx_ctx* c, struct zx_prov_PMActivateItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMActivateItem_s* zx_DEEP_CLONE_prov_PMActivateItem(struct zx_ctx* c, struct zx_prov_PMActivateItem_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMActivateItem(struct zx_ctx* c, struct zx_prov_PMActivateItem_s* x);
int zx_WALK_SO_prov_PMActivateItem(struct zx_ctx* c, struct zx_prov_PMActivateItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMActivateItem(struct zx_ctx* c, struct zx_prov_PMActivateItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMActivateItem(struct zx_ctx* c, struct zx_prov_PMActivateItem_s* x);
int zx_LEN_WO_prov_PMActivateItem(struct zx_ctx* c, struct zx_prov_PMActivateItem_s* x);
char* zx_ENC_SO_prov_PMActivateItem(struct zx_ctx* c, struct zx_prov_PMActivateItem_s* x, char* p);
char* zx_ENC_WO_prov_PMActivateItem(struct zx_ctx* c, struct zx_prov_PMActivateItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMActivateItem(struct zx_ctx* c, struct zx_prov_PMActivateItem_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMActivateItem(struct zx_ctx* c, struct zx_prov_PMActivateItem_s* x);

struct zx_prov_PMActivateItem_s {
  ZX_ELEM_EXT
  zx_prov_PMActivateItem_EXT
  struct zx_prov_PMID_s* PMID;	/* {1,1} nada */
  struct zx_str* at;	/* {0,1} attribute xs:dateTime */
  struct zx_str* itemID;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_prov_PMActivateItem_GET_at(struct zx_prov_PMActivateItem_s* x);
struct zx_str* zx_prov_PMActivateItem_GET_itemID(struct zx_prov_PMActivateItem_s* x);

struct zx_prov_PMID_s* zx_prov_PMActivateItem_GET_PMID(struct zx_prov_PMActivateItem_s* x, int n);

int zx_prov_PMActivateItem_NUM_PMID(struct zx_prov_PMActivateItem_s* x);

struct zx_prov_PMID_s* zx_prov_PMActivateItem_POP_PMID(struct zx_prov_PMActivateItem_s* x);

void zx_prov_PMActivateItem_PUSH_PMID(struct zx_prov_PMActivateItem_s* x, struct zx_prov_PMID_s* y);

void zx_prov_PMActivateItem_PUT_at(struct zx_prov_PMActivateItem_s* x, struct zx_str* y);
void zx_prov_PMActivateItem_PUT_itemID(struct zx_prov_PMActivateItem_s* x, struct zx_str* y);

void zx_prov_PMActivateItem_PUT_PMID(struct zx_prov_PMActivateItem_s* x, int n, struct zx_prov_PMID_s* y);

void zx_prov_PMActivateItem_ADD_PMID(struct zx_prov_PMActivateItem_s* x, int n, struct zx_prov_PMID_s* z);

void zx_prov_PMActivateItem_DEL_PMID(struct zx_prov_PMActivateItem_s* x, int n);

void zx_prov_PMActivateItem_REV_PMID(struct zx_prov_PMActivateItem_s* x);

#endif
/* -------------------------- prov_PMActivateResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMActivateResponse_EXT
#define zx_prov_PMActivateResponse_EXT
#endif

struct zx_prov_PMActivateResponse_s* zx_DEC_prov_PMActivateResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMActivateResponse_s* zx_NEW_prov_PMActivateResponse(struct zx_ctx* c);
void zx_FREE_prov_PMActivateResponse(struct zx_ctx* c, struct zx_prov_PMActivateResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMActivateResponse_s* zx_DEEP_CLONE_prov_PMActivateResponse(struct zx_ctx* c, struct zx_prov_PMActivateResponse_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMActivateResponse(struct zx_ctx* c, struct zx_prov_PMActivateResponse_s* x);
int zx_WALK_SO_prov_PMActivateResponse(struct zx_ctx* c, struct zx_prov_PMActivateResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMActivateResponse(struct zx_ctx* c, struct zx_prov_PMActivateResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMActivateResponse(struct zx_ctx* c, struct zx_prov_PMActivateResponse_s* x);
int zx_LEN_WO_prov_PMActivateResponse(struct zx_ctx* c, struct zx_prov_PMActivateResponse_s* x);
char* zx_ENC_SO_prov_PMActivateResponse(struct zx_ctx* c, struct zx_prov_PMActivateResponse_s* x, char* p);
char* zx_ENC_WO_prov_PMActivateResponse(struct zx_ctx* c, struct zx_prov_PMActivateResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMActivateResponse(struct zx_ctx* c, struct zx_prov_PMActivateResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMActivateResponse(struct zx_ctx* c, struct zx_prov_PMActivateResponse_s* x);

struct zx_prov_PMActivateResponse_s {
  ZX_ELEM_EXT
  zx_prov_PMActivateResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_prov_PMActivateResponse_GET_Status(struct zx_prov_PMActivateResponse_s* x, int n);

int zx_prov_PMActivateResponse_NUM_Status(struct zx_prov_PMActivateResponse_s* x);

struct zx_lu_Status_s* zx_prov_PMActivateResponse_POP_Status(struct zx_prov_PMActivateResponse_s* x);

void zx_prov_PMActivateResponse_PUSH_Status(struct zx_prov_PMActivateResponse_s* x, struct zx_lu_Status_s* y);


void zx_prov_PMActivateResponse_PUT_Status(struct zx_prov_PMActivateResponse_s* x, int n, struct zx_lu_Status_s* y);

void zx_prov_PMActivateResponse_ADD_Status(struct zx_prov_PMActivateResponse_s* x, int n, struct zx_lu_Status_s* z);

void zx_prov_PMActivateResponse_DEL_Status(struct zx_prov_PMActivateResponse_s* x, int n);

void zx_prov_PMActivateResponse_REV_Status(struct zx_prov_PMActivateResponse_s* x);

#endif
/* -------------------------- prov_PMDeactivate -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMDeactivate_EXT
#define zx_prov_PMDeactivate_EXT
#endif

struct zx_prov_PMDeactivate_s* zx_DEC_prov_PMDeactivate(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMDeactivate_s* zx_NEW_prov_PMDeactivate(struct zx_ctx* c);
void zx_FREE_prov_PMDeactivate(struct zx_ctx* c, struct zx_prov_PMDeactivate_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMDeactivate_s* zx_DEEP_CLONE_prov_PMDeactivate(struct zx_ctx* c, struct zx_prov_PMDeactivate_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMDeactivate(struct zx_ctx* c, struct zx_prov_PMDeactivate_s* x);
int zx_WALK_SO_prov_PMDeactivate(struct zx_ctx* c, struct zx_prov_PMDeactivate_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMDeactivate(struct zx_ctx* c, struct zx_prov_PMDeactivate_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMDeactivate(struct zx_ctx* c, struct zx_prov_PMDeactivate_s* x);
int zx_LEN_WO_prov_PMDeactivate(struct zx_ctx* c, struct zx_prov_PMDeactivate_s* x);
char* zx_ENC_SO_prov_PMDeactivate(struct zx_ctx* c, struct zx_prov_PMDeactivate_s* x, char* p);
char* zx_ENC_WO_prov_PMDeactivate(struct zx_ctx* c, struct zx_prov_PMDeactivate_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMDeactivate(struct zx_ctx* c, struct zx_prov_PMDeactivate_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMDeactivate(struct zx_ctx* c, struct zx_prov_PMDeactivate_s* x);

struct zx_prov_PMDeactivate_s {
  ZX_ELEM_EXT
  zx_prov_PMDeactivate_EXT
  struct zx_prov_PMDeactivateItem_s* PMDeactivateItem;	/* {1,-1} nada */
  struct zx_elem_s* NotifyTo;	/* {0,1} a:EndpointReference */
};

#ifdef ZX_ENA_GETPUT

struct zx_prov_PMDeactivateItem_s* zx_prov_PMDeactivate_GET_PMDeactivateItem(struct zx_prov_PMDeactivate_s* x, int n);
struct zx_elem_s* zx_prov_PMDeactivate_GET_NotifyTo(struct zx_prov_PMDeactivate_s* x, int n);

int zx_prov_PMDeactivate_NUM_PMDeactivateItem(struct zx_prov_PMDeactivate_s* x);
int zx_prov_PMDeactivate_NUM_NotifyTo(struct zx_prov_PMDeactivate_s* x);

struct zx_prov_PMDeactivateItem_s* zx_prov_PMDeactivate_POP_PMDeactivateItem(struct zx_prov_PMDeactivate_s* x);
struct zx_elem_s* zx_prov_PMDeactivate_POP_NotifyTo(struct zx_prov_PMDeactivate_s* x);

void zx_prov_PMDeactivate_PUSH_PMDeactivateItem(struct zx_prov_PMDeactivate_s* x, struct zx_prov_PMDeactivateItem_s* y);
void zx_prov_PMDeactivate_PUSH_NotifyTo(struct zx_prov_PMDeactivate_s* x, struct zx_elem_s* y);


void zx_prov_PMDeactivate_PUT_PMDeactivateItem(struct zx_prov_PMDeactivate_s* x, int n, struct zx_prov_PMDeactivateItem_s* y);
void zx_prov_PMDeactivate_PUT_NotifyTo(struct zx_prov_PMDeactivate_s* x, int n, struct zx_elem_s* y);

void zx_prov_PMDeactivate_ADD_PMDeactivateItem(struct zx_prov_PMDeactivate_s* x, int n, struct zx_prov_PMDeactivateItem_s* z);
void zx_prov_PMDeactivate_ADD_NotifyTo(struct zx_prov_PMDeactivate_s* x, int n, struct zx_elem_s* z);

void zx_prov_PMDeactivate_DEL_PMDeactivateItem(struct zx_prov_PMDeactivate_s* x, int n);
void zx_prov_PMDeactivate_DEL_NotifyTo(struct zx_prov_PMDeactivate_s* x, int n);

void zx_prov_PMDeactivate_REV_PMDeactivateItem(struct zx_prov_PMDeactivate_s* x);
void zx_prov_PMDeactivate_REV_NotifyTo(struct zx_prov_PMDeactivate_s* x);

#endif
/* -------------------------- prov_PMDeactivateItem -------------------------- */
/* refby( zx_prov_PMDeactivate_s ) */
#ifndef zx_prov_PMDeactivateItem_EXT
#define zx_prov_PMDeactivateItem_EXT
#endif

struct zx_prov_PMDeactivateItem_s* zx_DEC_prov_PMDeactivateItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMDeactivateItem_s* zx_NEW_prov_PMDeactivateItem(struct zx_ctx* c);
void zx_FREE_prov_PMDeactivateItem(struct zx_ctx* c, struct zx_prov_PMDeactivateItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMDeactivateItem_s* zx_DEEP_CLONE_prov_PMDeactivateItem(struct zx_ctx* c, struct zx_prov_PMDeactivateItem_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMDeactivateItem(struct zx_ctx* c, struct zx_prov_PMDeactivateItem_s* x);
int zx_WALK_SO_prov_PMDeactivateItem(struct zx_ctx* c, struct zx_prov_PMDeactivateItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMDeactivateItem(struct zx_ctx* c, struct zx_prov_PMDeactivateItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMDeactivateItem(struct zx_ctx* c, struct zx_prov_PMDeactivateItem_s* x);
int zx_LEN_WO_prov_PMDeactivateItem(struct zx_ctx* c, struct zx_prov_PMDeactivateItem_s* x);
char* zx_ENC_SO_prov_PMDeactivateItem(struct zx_ctx* c, struct zx_prov_PMDeactivateItem_s* x, char* p);
char* zx_ENC_WO_prov_PMDeactivateItem(struct zx_ctx* c, struct zx_prov_PMDeactivateItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMDeactivateItem(struct zx_ctx* c, struct zx_prov_PMDeactivateItem_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMDeactivateItem(struct zx_ctx* c, struct zx_prov_PMDeactivateItem_s* x);

struct zx_prov_PMDeactivateItem_s {
  ZX_ELEM_EXT
  zx_prov_PMDeactivateItem_EXT
  struct zx_prov_PMID_s* PMID;	/* {1,1} nada */
  struct zx_str* at;	/* {0,1} attribute xs:dateTime */
  struct zx_str* itemID;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_prov_PMDeactivateItem_GET_at(struct zx_prov_PMDeactivateItem_s* x);
struct zx_str* zx_prov_PMDeactivateItem_GET_itemID(struct zx_prov_PMDeactivateItem_s* x);

struct zx_prov_PMID_s* zx_prov_PMDeactivateItem_GET_PMID(struct zx_prov_PMDeactivateItem_s* x, int n);

int zx_prov_PMDeactivateItem_NUM_PMID(struct zx_prov_PMDeactivateItem_s* x);

struct zx_prov_PMID_s* zx_prov_PMDeactivateItem_POP_PMID(struct zx_prov_PMDeactivateItem_s* x);

void zx_prov_PMDeactivateItem_PUSH_PMID(struct zx_prov_PMDeactivateItem_s* x, struct zx_prov_PMID_s* y);

void zx_prov_PMDeactivateItem_PUT_at(struct zx_prov_PMDeactivateItem_s* x, struct zx_str* y);
void zx_prov_PMDeactivateItem_PUT_itemID(struct zx_prov_PMDeactivateItem_s* x, struct zx_str* y);

void zx_prov_PMDeactivateItem_PUT_PMID(struct zx_prov_PMDeactivateItem_s* x, int n, struct zx_prov_PMID_s* y);

void zx_prov_PMDeactivateItem_ADD_PMID(struct zx_prov_PMDeactivateItem_s* x, int n, struct zx_prov_PMID_s* z);

void zx_prov_PMDeactivateItem_DEL_PMID(struct zx_prov_PMDeactivateItem_s* x, int n);

void zx_prov_PMDeactivateItem_REV_PMID(struct zx_prov_PMDeactivateItem_s* x);

#endif
/* -------------------------- prov_PMDeactivateResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMDeactivateResponse_EXT
#define zx_prov_PMDeactivateResponse_EXT
#endif

struct zx_prov_PMDeactivateResponse_s* zx_DEC_prov_PMDeactivateResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMDeactivateResponse_s* zx_NEW_prov_PMDeactivateResponse(struct zx_ctx* c);
void zx_FREE_prov_PMDeactivateResponse(struct zx_ctx* c, struct zx_prov_PMDeactivateResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMDeactivateResponse_s* zx_DEEP_CLONE_prov_PMDeactivateResponse(struct zx_ctx* c, struct zx_prov_PMDeactivateResponse_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMDeactivateResponse(struct zx_ctx* c, struct zx_prov_PMDeactivateResponse_s* x);
int zx_WALK_SO_prov_PMDeactivateResponse(struct zx_ctx* c, struct zx_prov_PMDeactivateResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMDeactivateResponse(struct zx_ctx* c, struct zx_prov_PMDeactivateResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMDeactivateResponse(struct zx_ctx* c, struct zx_prov_PMDeactivateResponse_s* x);
int zx_LEN_WO_prov_PMDeactivateResponse(struct zx_ctx* c, struct zx_prov_PMDeactivateResponse_s* x);
char* zx_ENC_SO_prov_PMDeactivateResponse(struct zx_ctx* c, struct zx_prov_PMDeactivateResponse_s* x, char* p);
char* zx_ENC_WO_prov_PMDeactivateResponse(struct zx_ctx* c, struct zx_prov_PMDeactivateResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMDeactivateResponse(struct zx_ctx* c, struct zx_prov_PMDeactivateResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMDeactivateResponse(struct zx_ctx* c, struct zx_prov_PMDeactivateResponse_s* x);

struct zx_prov_PMDeactivateResponse_s {
  ZX_ELEM_EXT
  zx_prov_PMDeactivateResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_prov_PMDeactivateResponse_GET_Status(struct zx_prov_PMDeactivateResponse_s* x, int n);

int zx_prov_PMDeactivateResponse_NUM_Status(struct zx_prov_PMDeactivateResponse_s* x);

struct zx_lu_Status_s* zx_prov_PMDeactivateResponse_POP_Status(struct zx_prov_PMDeactivateResponse_s* x);

void zx_prov_PMDeactivateResponse_PUSH_Status(struct zx_prov_PMDeactivateResponse_s* x, struct zx_lu_Status_s* y);


void zx_prov_PMDeactivateResponse_PUT_Status(struct zx_prov_PMDeactivateResponse_s* x, int n, struct zx_lu_Status_s* y);

void zx_prov_PMDeactivateResponse_ADD_Status(struct zx_prov_PMDeactivateResponse_s* x, int n, struct zx_lu_Status_s* z);

void zx_prov_PMDeactivateResponse_DEL_Status(struct zx_prov_PMDeactivateResponse_s* x, int n);

void zx_prov_PMDeactivateResponse_REV_Status(struct zx_prov_PMDeactivateResponse_s* x);

#endif
/* -------------------------- prov_PMDelete -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMDelete_EXT
#define zx_prov_PMDelete_EXT
#endif

struct zx_prov_PMDelete_s* zx_DEC_prov_PMDelete(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMDelete_s* zx_NEW_prov_PMDelete(struct zx_ctx* c);
void zx_FREE_prov_PMDelete(struct zx_ctx* c, struct zx_prov_PMDelete_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMDelete_s* zx_DEEP_CLONE_prov_PMDelete(struct zx_ctx* c, struct zx_prov_PMDelete_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMDelete(struct zx_ctx* c, struct zx_prov_PMDelete_s* x);
int zx_WALK_SO_prov_PMDelete(struct zx_ctx* c, struct zx_prov_PMDelete_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMDelete(struct zx_ctx* c, struct zx_prov_PMDelete_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMDelete(struct zx_ctx* c, struct zx_prov_PMDelete_s* x);
int zx_LEN_WO_prov_PMDelete(struct zx_ctx* c, struct zx_prov_PMDelete_s* x);
char* zx_ENC_SO_prov_PMDelete(struct zx_ctx* c, struct zx_prov_PMDelete_s* x, char* p);
char* zx_ENC_WO_prov_PMDelete(struct zx_ctx* c, struct zx_prov_PMDelete_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMDelete(struct zx_ctx* c, struct zx_prov_PMDelete_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMDelete(struct zx_ctx* c, struct zx_prov_PMDelete_s* x);

struct zx_prov_PMDelete_s {
  ZX_ELEM_EXT
  zx_prov_PMDelete_EXT
  struct zx_prov_PMDeleteItem_s* PMDeleteItem;	/* {1,-1} nada */
  struct zx_elem_s* NotifyTo;	/* {0,1} a:EndpointReference */
};

#ifdef ZX_ENA_GETPUT

struct zx_prov_PMDeleteItem_s* zx_prov_PMDelete_GET_PMDeleteItem(struct zx_prov_PMDelete_s* x, int n);
struct zx_elem_s* zx_prov_PMDelete_GET_NotifyTo(struct zx_prov_PMDelete_s* x, int n);

int zx_prov_PMDelete_NUM_PMDeleteItem(struct zx_prov_PMDelete_s* x);
int zx_prov_PMDelete_NUM_NotifyTo(struct zx_prov_PMDelete_s* x);

struct zx_prov_PMDeleteItem_s* zx_prov_PMDelete_POP_PMDeleteItem(struct zx_prov_PMDelete_s* x);
struct zx_elem_s* zx_prov_PMDelete_POP_NotifyTo(struct zx_prov_PMDelete_s* x);

void zx_prov_PMDelete_PUSH_PMDeleteItem(struct zx_prov_PMDelete_s* x, struct zx_prov_PMDeleteItem_s* y);
void zx_prov_PMDelete_PUSH_NotifyTo(struct zx_prov_PMDelete_s* x, struct zx_elem_s* y);


void zx_prov_PMDelete_PUT_PMDeleteItem(struct zx_prov_PMDelete_s* x, int n, struct zx_prov_PMDeleteItem_s* y);
void zx_prov_PMDelete_PUT_NotifyTo(struct zx_prov_PMDelete_s* x, int n, struct zx_elem_s* y);

void zx_prov_PMDelete_ADD_PMDeleteItem(struct zx_prov_PMDelete_s* x, int n, struct zx_prov_PMDeleteItem_s* z);
void zx_prov_PMDelete_ADD_NotifyTo(struct zx_prov_PMDelete_s* x, int n, struct zx_elem_s* z);

void zx_prov_PMDelete_DEL_PMDeleteItem(struct zx_prov_PMDelete_s* x, int n);
void zx_prov_PMDelete_DEL_NotifyTo(struct zx_prov_PMDelete_s* x, int n);

void zx_prov_PMDelete_REV_PMDeleteItem(struct zx_prov_PMDelete_s* x);
void zx_prov_PMDelete_REV_NotifyTo(struct zx_prov_PMDelete_s* x);

#endif
/* -------------------------- prov_PMDeleteItem -------------------------- */
/* refby( zx_prov_PMDelete_s ) */
#ifndef zx_prov_PMDeleteItem_EXT
#define zx_prov_PMDeleteItem_EXT
#endif

struct zx_prov_PMDeleteItem_s* zx_DEC_prov_PMDeleteItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMDeleteItem_s* zx_NEW_prov_PMDeleteItem(struct zx_ctx* c);
void zx_FREE_prov_PMDeleteItem(struct zx_ctx* c, struct zx_prov_PMDeleteItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMDeleteItem_s* zx_DEEP_CLONE_prov_PMDeleteItem(struct zx_ctx* c, struct zx_prov_PMDeleteItem_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMDeleteItem(struct zx_ctx* c, struct zx_prov_PMDeleteItem_s* x);
int zx_WALK_SO_prov_PMDeleteItem(struct zx_ctx* c, struct zx_prov_PMDeleteItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMDeleteItem(struct zx_ctx* c, struct zx_prov_PMDeleteItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMDeleteItem(struct zx_ctx* c, struct zx_prov_PMDeleteItem_s* x);
int zx_LEN_WO_prov_PMDeleteItem(struct zx_ctx* c, struct zx_prov_PMDeleteItem_s* x);
char* zx_ENC_SO_prov_PMDeleteItem(struct zx_ctx* c, struct zx_prov_PMDeleteItem_s* x, char* p);
char* zx_ENC_WO_prov_PMDeleteItem(struct zx_ctx* c, struct zx_prov_PMDeleteItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMDeleteItem(struct zx_ctx* c, struct zx_prov_PMDeleteItem_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMDeleteItem(struct zx_ctx* c, struct zx_prov_PMDeleteItem_s* x);

struct zx_prov_PMDeleteItem_s {
  ZX_ELEM_EXT
  zx_prov_PMDeleteItem_EXT
  struct zx_prov_PMID_s* PMID;	/* {1,1} nada */
  struct zx_str* itemID;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_prov_PMDeleteItem_GET_itemID(struct zx_prov_PMDeleteItem_s* x);

struct zx_prov_PMID_s* zx_prov_PMDeleteItem_GET_PMID(struct zx_prov_PMDeleteItem_s* x, int n);

int zx_prov_PMDeleteItem_NUM_PMID(struct zx_prov_PMDeleteItem_s* x);

struct zx_prov_PMID_s* zx_prov_PMDeleteItem_POP_PMID(struct zx_prov_PMDeleteItem_s* x);

void zx_prov_PMDeleteItem_PUSH_PMID(struct zx_prov_PMDeleteItem_s* x, struct zx_prov_PMID_s* y);

void zx_prov_PMDeleteItem_PUT_itemID(struct zx_prov_PMDeleteItem_s* x, struct zx_str* y);

void zx_prov_PMDeleteItem_PUT_PMID(struct zx_prov_PMDeleteItem_s* x, int n, struct zx_prov_PMID_s* y);

void zx_prov_PMDeleteItem_ADD_PMID(struct zx_prov_PMDeleteItem_s* x, int n, struct zx_prov_PMID_s* z);

void zx_prov_PMDeleteItem_DEL_PMID(struct zx_prov_PMDeleteItem_s* x, int n);

void zx_prov_PMDeleteItem_REV_PMID(struct zx_prov_PMDeleteItem_s* x);

#endif
/* -------------------------- prov_PMDeleteResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMDeleteResponse_EXT
#define zx_prov_PMDeleteResponse_EXT
#endif

struct zx_prov_PMDeleteResponse_s* zx_DEC_prov_PMDeleteResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMDeleteResponse_s* zx_NEW_prov_PMDeleteResponse(struct zx_ctx* c);
void zx_FREE_prov_PMDeleteResponse(struct zx_ctx* c, struct zx_prov_PMDeleteResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMDeleteResponse_s* zx_DEEP_CLONE_prov_PMDeleteResponse(struct zx_ctx* c, struct zx_prov_PMDeleteResponse_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMDeleteResponse(struct zx_ctx* c, struct zx_prov_PMDeleteResponse_s* x);
int zx_WALK_SO_prov_PMDeleteResponse(struct zx_ctx* c, struct zx_prov_PMDeleteResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMDeleteResponse(struct zx_ctx* c, struct zx_prov_PMDeleteResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMDeleteResponse(struct zx_ctx* c, struct zx_prov_PMDeleteResponse_s* x);
int zx_LEN_WO_prov_PMDeleteResponse(struct zx_ctx* c, struct zx_prov_PMDeleteResponse_s* x);
char* zx_ENC_SO_prov_PMDeleteResponse(struct zx_ctx* c, struct zx_prov_PMDeleteResponse_s* x, char* p);
char* zx_ENC_WO_prov_PMDeleteResponse(struct zx_ctx* c, struct zx_prov_PMDeleteResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMDeleteResponse(struct zx_ctx* c, struct zx_prov_PMDeleteResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMDeleteResponse(struct zx_ctx* c, struct zx_prov_PMDeleteResponse_s* x);

struct zx_prov_PMDeleteResponse_s {
  ZX_ELEM_EXT
  zx_prov_PMDeleteResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_prov_PMDeleteResponse_GET_Status(struct zx_prov_PMDeleteResponse_s* x, int n);

int zx_prov_PMDeleteResponse_NUM_Status(struct zx_prov_PMDeleteResponse_s* x);

struct zx_lu_Status_s* zx_prov_PMDeleteResponse_POP_Status(struct zx_prov_PMDeleteResponse_s* x);

void zx_prov_PMDeleteResponse_PUSH_Status(struct zx_prov_PMDeleteResponse_s* x, struct zx_lu_Status_s* y);


void zx_prov_PMDeleteResponse_PUT_Status(struct zx_prov_PMDeleteResponse_s* x, int n, struct zx_lu_Status_s* y);

void zx_prov_PMDeleteResponse_ADD_Status(struct zx_prov_PMDeleteResponse_s* x, int n, struct zx_lu_Status_s* z);

void zx_prov_PMDeleteResponse_DEL_Status(struct zx_prov_PMDeleteResponse_s* x, int n);

void zx_prov_PMDeleteResponse_REV_Status(struct zx_prov_PMDeleteResponse_s* x);

#endif
/* -------------------------- prov_PMDescriptor -------------------------- */
/* refby( zx_pmm_Provision_s zx_pmm_PMUpdateItem_s zx_prov_PMGetDescriptorResponse_s zx_prov_PMRegisterDescriptorItem_s zx_prov_PMUpdateItem_s ) */
#ifndef zx_prov_PMDescriptor_EXT
#define zx_prov_PMDescriptor_EXT
#endif

struct zx_prov_PMDescriptor_s* zx_DEC_prov_PMDescriptor(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMDescriptor_s* zx_NEW_prov_PMDescriptor(struct zx_ctx* c);
void zx_FREE_prov_PMDescriptor(struct zx_ctx* c, struct zx_prov_PMDescriptor_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMDescriptor_s* zx_DEEP_CLONE_prov_PMDescriptor(struct zx_ctx* c, struct zx_prov_PMDescriptor_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMDescriptor(struct zx_ctx* c, struct zx_prov_PMDescriptor_s* x);
int zx_WALK_SO_prov_PMDescriptor(struct zx_ctx* c, struct zx_prov_PMDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMDescriptor(struct zx_ctx* c, struct zx_prov_PMDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMDescriptor(struct zx_ctx* c, struct zx_prov_PMDescriptor_s* x);
int zx_LEN_WO_prov_PMDescriptor(struct zx_ctx* c, struct zx_prov_PMDescriptor_s* x);
char* zx_ENC_SO_prov_PMDescriptor(struct zx_ctx* c, struct zx_prov_PMDescriptor_s* x, char* p);
char* zx_ENC_WO_prov_PMDescriptor(struct zx_ctx* c, struct zx_prov_PMDescriptor_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMDescriptor(struct zx_ctx* c, struct zx_prov_PMDescriptor_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMDescriptor(struct zx_ctx* c, struct zx_prov_PMDescriptor_s* x);

struct zx_prov_PMDescriptor_s {
  ZX_ELEM_EXT
  zx_prov_PMDescriptor_EXT
  struct zx_prov_PMID_s* PMID;	/* {1,1} nada */
  struct zx_elem_s* PMEngineRef;	/* {0,1} xs:anyURI */
  struct zx_elem_s* PMInitData;	/* {0,1} xenc:EncryptedData */
  struct zx_elem_s* PMRTData;	/* {0,1} xenc:EncryptedData */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_str* activate;	/* {0,1} attribute xs:boolean */
  struct zx_str* activateAt;	/* {0,1} attribute xs:dateTime */
  struct zx_str* deactivateAt;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_prov_PMDescriptor_GET_activate(struct zx_prov_PMDescriptor_s* x);
struct zx_str* zx_prov_PMDescriptor_GET_activateAt(struct zx_prov_PMDescriptor_s* x);
struct zx_str* zx_prov_PMDescriptor_GET_deactivateAt(struct zx_prov_PMDescriptor_s* x);

struct zx_prov_PMID_s* zx_prov_PMDescriptor_GET_PMID(struct zx_prov_PMDescriptor_s* x, int n);
struct zx_elem_s* zx_prov_PMDescriptor_GET_PMEngineRef(struct zx_prov_PMDescriptor_s* x, int n);
struct zx_elem_s* zx_prov_PMDescriptor_GET_PMInitData(struct zx_prov_PMDescriptor_s* x, int n);
struct zx_elem_s* zx_prov_PMDescriptor_GET_PMRTData(struct zx_prov_PMDescriptor_s* x, int n);
struct zx_ds_Signature_s* zx_prov_PMDescriptor_GET_Signature(struct zx_prov_PMDescriptor_s* x, int n);

int zx_prov_PMDescriptor_NUM_PMID(struct zx_prov_PMDescriptor_s* x);
int zx_prov_PMDescriptor_NUM_PMEngineRef(struct zx_prov_PMDescriptor_s* x);
int zx_prov_PMDescriptor_NUM_PMInitData(struct zx_prov_PMDescriptor_s* x);
int zx_prov_PMDescriptor_NUM_PMRTData(struct zx_prov_PMDescriptor_s* x);
int zx_prov_PMDescriptor_NUM_Signature(struct zx_prov_PMDescriptor_s* x);

struct zx_prov_PMID_s* zx_prov_PMDescriptor_POP_PMID(struct zx_prov_PMDescriptor_s* x);
struct zx_elem_s* zx_prov_PMDescriptor_POP_PMEngineRef(struct zx_prov_PMDescriptor_s* x);
struct zx_elem_s* zx_prov_PMDescriptor_POP_PMInitData(struct zx_prov_PMDescriptor_s* x);
struct zx_elem_s* zx_prov_PMDescriptor_POP_PMRTData(struct zx_prov_PMDescriptor_s* x);
struct zx_ds_Signature_s* zx_prov_PMDescriptor_POP_Signature(struct zx_prov_PMDescriptor_s* x);

void zx_prov_PMDescriptor_PUSH_PMID(struct zx_prov_PMDescriptor_s* x, struct zx_prov_PMID_s* y);
void zx_prov_PMDescriptor_PUSH_PMEngineRef(struct zx_prov_PMDescriptor_s* x, struct zx_elem_s* y);
void zx_prov_PMDescriptor_PUSH_PMInitData(struct zx_prov_PMDescriptor_s* x, struct zx_elem_s* y);
void zx_prov_PMDescriptor_PUSH_PMRTData(struct zx_prov_PMDescriptor_s* x, struct zx_elem_s* y);
void zx_prov_PMDescriptor_PUSH_Signature(struct zx_prov_PMDescriptor_s* x, struct zx_ds_Signature_s* y);

void zx_prov_PMDescriptor_PUT_activate(struct zx_prov_PMDescriptor_s* x, struct zx_str* y);
void zx_prov_PMDescriptor_PUT_activateAt(struct zx_prov_PMDescriptor_s* x, struct zx_str* y);
void zx_prov_PMDescriptor_PUT_deactivateAt(struct zx_prov_PMDescriptor_s* x, struct zx_str* y);

void zx_prov_PMDescriptor_PUT_PMID(struct zx_prov_PMDescriptor_s* x, int n, struct zx_prov_PMID_s* y);
void zx_prov_PMDescriptor_PUT_PMEngineRef(struct zx_prov_PMDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_prov_PMDescriptor_PUT_PMInitData(struct zx_prov_PMDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_prov_PMDescriptor_PUT_PMRTData(struct zx_prov_PMDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_prov_PMDescriptor_PUT_Signature(struct zx_prov_PMDescriptor_s* x, int n, struct zx_ds_Signature_s* y);

void zx_prov_PMDescriptor_ADD_PMID(struct zx_prov_PMDescriptor_s* x, int n, struct zx_prov_PMID_s* z);
void zx_prov_PMDescriptor_ADD_PMEngineRef(struct zx_prov_PMDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_prov_PMDescriptor_ADD_PMInitData(struct zx_prov_PMDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_prov_PMDescriptor_ADD_PMRTData(struct zx_prov_PMDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_prov_PMDescriptor_ADD_Signature(struct zx_prov_PMDescriptor_s* x, int n, struct zx_ds_Signature_s* z);

void zx_prov_PMDescriptor_DEL_PMID(struct zx_prov_PMDescriptor_s* x, int n);
void zx_prov_PMDescriptor_DEL_PMEngineRef(struct zx_prov_PMDescriptor_s* x, int n);
void zx_prov_PMDescriptor_DEL_PMInitData(struct zx_prov_PMDescriptor_s* x, int n);
void zx_prov_PMDescriptor_DEL_PMRTData(struct zx_prov_PMDescriptor_s* x, int n);
void zx_prov_PMDescriptor_DEL_Signature(struct zx_prov_PMDescriptor_s* x, int n);

void zx_prov_PMDescriptor_REV_PMID(struct zx_prov_PMDescriptor_s* x);
void zx_prov_PMDescriptor_REV_PMEngineRef(struct zx_prov_PMDescriptor_s* x);
void zx_prov_PMDescriptor_REV_PMInitData(struct zx_prov_PMDescriptor_s* x);
void zx_prov_PMDescriptor_REV_PMRTData(struct zx_prov_PMDescriptor_s* x);
void zx_prov_PMDescriptor_REV_Signature(struct zx_prov_PMDescriptor_s* x);

#endif
/* -------------------------- prov_PMEDelete -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMEDelete_EXT
#define zx_prov_PMEDelete_EXT
#endif

struct zx_prov_PMEDelete_s* zx_DEC_prov_PMEDelete(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMEDelete_s* zx_NEW_prov_PMEDelete(struct zx_ctx* c);
void zx_FREE_prov_PMEDelete(struct zx_ctx* c, struct zx_prov_PMEDelete_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMEDelete_s* zx_DEEP_CLONE_prov_PMEDelete(struct zx_ctx* c, struct zx_prov_PMEDelete_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMEDelete(struct zx_ctx* c, struct zx_prov_PMEDelete_s* x);
int zx_WALK_SO_prov_PMEDelete(struct zx_ctx* c, struct zx_prov_PMEDelete_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMEDelete(struct zx_ctx* c, struct zx_prov_PMEDelete_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMEDelete(struct zx_ctx* c, struct zx_prov_PMEDelete_s* x);
int zx_LEN_WO_prov_PMEDelete(struct zx_ctx* c, struct zx_prov_PMEDelete_s* x);
char* zx_ENC_SO_prov_PMEDelete(struct zx_ctx* c, struct zx_prov_PMEDelete_s* x, char* p);
char* zx_ENC_WO_prov_PMEDelete(struct zx_ctx* c, struct zx_prov_PMEDelete_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMEDelete(struct zx_ctx* c, struct zx_prov_PMEDelete_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMEDelete(struct zx_ctx* c, struct zx_prov_PMEDelete_s* x);

struct zx_prov_PMEDelete_s {
  ZX_ELEM_EXT
  zx_prov_PMEDelete_EXT
  struct zx_elem_s* PMEngineRef;	/* {1,-1} xs:anyURI */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_prov_PMEDelete_GET_PMEngineRef(struct zx_prov_PMEDelete_s* x, int n);

int zx_prov_PMEDelete_NUM_PMEngineRef(struct zx_prov_PMEDelete_s* x);

struct zx_elem_s* zx_prov_PMEDelete_POP_PMEngineRef(struct zx_prov_PMEDelete_s* x);

void zx_prov_PMEDelete_PUSH_PMEngineRef(struct zx_prov_PMEDelete_s* x, struct zx_elem_s* y);


void zx_prov_PMEDelete_PUT_PMEngineRef(struct zx_prov_PMEDelete_s* x, int n, struct zx_elem_s* y);

void zx_prov_PMEDelete_ADD_PMEngineRef(struct zx_prov_PMEDelete_s* x, int n, struct zx_elem_s* z);

void zx_prov_PMEDelete_DEL_PMEngineRef(struct zx_prov_PMEDelete_s* x, int n);

void zx_prov_PMEDelete_REV_PMEngineRef(struct zx_prov_PMEDelete_s* x);

#endif
/* -------------------------- prov_PMEDeleteResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMEDeleteResponse_EXT
#define zx_prov_PMEDeleteResponse_EXT
#endif

struct zx_prov_PMEDeleteResponse_s* zx_DEC_prov_PMEDeleteResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMEDeleteResponse_s* zx_NEW_prov_PMEDeleteResponse(struct zx_ctx* c);
void zx_FREE_prov_PMEDeleteResponse(struct zx_ctx* c, struct zx_prov_PMEDeleteResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMEDeleteResponse_s* zx_DEEP_CLONE_prov_PMEDeleteResponse(struct zx_ctx* c, struct zx_prov_PMEDeleteResponse_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMEDeleteResponse(struct zx_ctx* c, struct zx_prov_PMEDeleteResponse_s* x);
int zx_WALK_SO_prov_PMEDeleteResponse(struct zx_ctx* c, struct zx_prov_PMEDeleteResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMEDeleteResponse(struct zx_ctx* c, struct zx_prov_PMEDeleteResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMEDeleteResponse(struct zx_ctx* c, struct zx_prov_PMEDeleteResponse_s* x);
int zx_LEN_WO_prov_PMEDeleteResponse(struct zx_ctx* c, struct zx_prov_PMEDeleteResponse_s* x);
char* zx_ENC_SO_prov_PMEDeleteResponse(struct zx_ctx* c, struct zx_prov_PMEDeleteResponse_s* x, char* p);
char* zx_ENC_WO_prov_PMEDeleteResponse(struct zx_ctx* c, struct zx_prov_PMEDeleteResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMEDeleteResponse(struct zx_ctx* c, struct zx_prov_PMEDeleteResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMEDeleteResponse(struct zx_ctx* c, struct zx_prov_PMEDeleteResponse_s* x);

struct zx_prov_PMEDeleteResponse_s {
  ZX_ELEM_EXT
  zx_prov_PMEDeleteResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_prov_PMEDeleteResponse_GET_Status(struct zx_prov_PMEDeleteResponse_s* x, int n);

int zx_prov_PMEDeleteResponse_NUM_Status(struct zx_prov_PMEDeleteResponse_s* x);

struct zx_lu_Status_s* zx_prov_PMEDeleteResponse_POP_Status(struct zx_prov_PMEDeleteResponse_s* x);

void zx_prov_PMEDeleteResponse_PUSH_Status(struct zx_prov_PMEDeleteResponse_s* x, struct zx_lu_Status_s* y);


void zx_prov_PMEDeleteResponse_PUT_Status(struct zx_prov_PMEDeleteResponse_s* x, int n, struct zx_lu_Status_s* y);

void zx_prov_PMEDeleteResponse_ADD_Status(struct zx_prov_PMEDeleteResponse_s* x, int n, struct zx_lu_Status_s* z);

void zx_prov_PMEDeleteResponse_DEL_Status(struct zx_prov_PMEDeleteResponse_s* x, int n);

void zx_prov_PMEDeleteResponse_REV_Status(struct zx_prov_PMEDeleteResponse_s* x);

#endif
/* -------------------------- prov_PMEDisable -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMEDisable_EXT
#define zx_prov_PMEDisable_EXT
#endif

struct zx_prov_PMEDisable_s* zx_DEC_prov_PMEDisable(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMEDisable_s* zx_NEW_prov_PMEDisable(struct zx_ctx* c);
void zx_FREE_prov_PMEDisable(struct zx_ctx* c, struct zx_prov_PMEDisable_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMEDisable_s* zx_DEEP_CLONE_prov_PMEDisable(struct zx_ctx* c, struct zx_prov_PMEDisable_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMEDisable(struct zx_ctx* c, struct zx_prov_PMEDisable_s* x);
int zx_WALK_SO_prov_PMEDisable(struct zx_ctx* c, struct zx_prov_PMEDisable_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMEDisable(struct zx_ctx* c, struct zx_prov_PMEDisable_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMEDisable(struct zx_ctx* c, struct zx_prov_PMEDisable_s* x);
int zx_LEN_WO_prov_PMEDisable(struct zx_ctx* c, struct zx_prov_PMEDisable_s* x);
char* zx_ENC_SO_prov_PMEDisable(struct zx_ctx* c, struct zx_prov_PMEDisable_s* x, char* p);
char* zx_ENC_WO_prov_PMEDisable(struct zx_ctx* c, struct zx_prov_PMEDisable_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMEDisable(struct zx_ctx* c, struct zx_prov_PMEDisable_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMEDisable(struct zx_ctx* c, struct zx_prov_PMEDisable_s* x);

struct zx_prov_PMEDisable_s {
  ZX_ELEM_EXT
  zx_prov_PMEDisable_EXT
  struct zx_elem_s* PMEngineRef;	/* {1,-1} xs:anyURI */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_prov_PMEDisable_GET_PMEngineRef(struct zx_prov_PMEDisable_s* x, int n);

int zx_prov_PMEDisable_NUM_PMEngineRef(struct zx_prov_PMEDisable_s* x);

struct zx_elem_s* zx_prov_PMEDisable_POP_PMEngineRef(struct zx_prov_PMEDisable_s* x);

void zx_prov_PMEDisable_PUSH_PMEngineRef(struct zx_prov_PMEDisable_s* x, struct zx_elem_s* y);


void zx_prov_PMEDisable_PUT_PMEngineRef(struct zx_prov_PMEDisable_s* x, int n, struct zx_elem_s* y);

void zx_prov_PMEDisable_ADD_PMEngineRef(struct zx_prov_PMEDisable_s* x, int n, struct zx_elem_s* z);

void zx_prov_PMEDisable_DEL_PMEngineRef(struct zx_prov_PMEDisable_s* x, int n);

void zx_prov_PMEDisable_REV_PMEngineRef(struct zx_prov_PMEDisable_s* x);

#endif
/* -------------------------- prov_PMEDisableResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMEDisableResponse_EXT
#define zx_prov_PMEDisableResponse_EXT
#endif

struct zx_prov_PMEDisableResponse_s* zx_DEC_prov_PMEDisableResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMEDisableResponse_s* zx_NEW_prov_PMEDisableResponse(struct zx_ctx* c);
void zx_FREE_prov_PMEDisableResponse(struct zx_ctx* c, struct zx_prov_PMEDisableResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMEDisableResponse_s* zx_DEEP_CLONE_prov_PMEDisableResponse(struct zx_ctx* c, struct zx_prov_PMEDisableResponse_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMEDisableResponse(struct zx_ctx* c, struct zx_prov_PMEDisableResponse_s* x);
int zx_WALK_SO_prov_PMEDisableResponse(struct zx_ctx* c, struct zx_prov_PMEDisableResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMEDisableResponse(struct zx_ctx* c, struct zx_prov_PMEDisableResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMEDisableResponse(struct zx_ctx* c, struct zx_prov_PMEDisableResponse_s* x);
int zx_LEN_WO_prov_PMEDisableResponse(struct zx_ctx* c, struct zx_prov_PMEDisableResponse_s* x);
char* zx_ENC_SO_prov_PMEDisableResponse(struct zx_ctx* c, struct zx_prov_PMEDisableResponse_s* x, char* p);
char* zx_ENC_WO_prov_PMEDisableResponse(struct zx_ctx* c, struct zx_prov_PMEDisableResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMEDisableResponse(struct zx_ctx* c, struct zx_prov_PMEDisableResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMEDisableResponse(struct zx_ctx* c, struct zx_prov_PMEDisableResponse_s* x);

struct zx_prov_PMEDisableResponse_s {
  ZX_ELEM_EXT
  zx_prov_PMEDisableResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_prov_PMEDisableResponse_GET_Status(struct zx_prov_PMEDisableResponse_s* x, int n);

int zx_prov_PMEDisableResponse_NUM_Status(struct zx_prov_PMEDisableResponse_s* x);

struct zx_lu_Status_s* zx_prov_PMEDisableResponse_POP_Status(struct zx_prov_PMEDisableResponse_s* x);

void zx_prov_PMEDisableResponse_PUSH_Status(struct zx_prov_PMEDisableResponse_s* x, struct zx_lu_Status_s* y);


void zx_prov_PMEDisableResponse_PUT_Status(struct zx_prov_PMEDisableResponse_s* x, int n, struct zx_lu_Status_s* y);

void zx_prov_PMEDisableResponse_ADD_Status(struct zx_prov_PMEDisableResponse_s* x, int n, struct zx_lu_Status_s* z);

void zx_prov_PMEDisableResponse_DEL_Status(struct zx_prov_PMEDisableResponse_s* x, int n);

void zx_prov_PMEDisableResponse_REV_Status(struct zx_prov_PMEDisableResponse_s* x);

#endif
/* -------------------------- prov_PMEDownload -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMEDownload_EXT
#define zx_prov_PMEDownload_EXT
#endif

struct zx_prov_PMEDownload_s* zx_DEC_prov_PMEDownload(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMEDownload_s* zx_NEW_prov_PMEDownload(struct zx_ctx* c);
void zx_FREE_prov_PMEDownload(struct zx_ctx* c, struct zx_prov_PMEDownload_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMEDownload_s* zx_DEEP_CLONE_prov_PMEDownload(struct zx_ctx* c, struct zx_prov_PMEDownload_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMEDownload(struct zx_ctx* c, struct zx_prov_PMEDownload_s* x);
int zx_WALK_SO_prov_PMEDownload(struct zx_ctx* c, struct zx_prov_PMEDownload_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMEDownload(struct zx_ctx* c, struct zx_prov_PMEDownload_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMEDownload(struct zx_ctx* c, struct zx_prov_PMEDownload_s* x);
int zx_LEN_WO_prov_PMEDownload(struct zx_ctx* c, struct zx_prov_PMEDownload_s* x);
char* zx_ENC_SO_prov_PMEDownload(struct zx_ctx* c, struct zx_prov_PMEDownload_s* x, char* p);
char* zx_ENC_WO_prov_PMEDownload(struct zx_ctx* c, struct zx_prov_PMEDownload_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMEDownload(struct zx_ctx* c, struct zx_prov_PMEDownload_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMEDownload(struct zx_ctx* c, struct zx_prov_PMEDownload_s* x);

struct zx_prov_PMEDownload_s {
  ZX_ELEM_EXT
  zx_prov_PMEDownload_EXT
  struct zx_elem_s* PMEngineRef;	/* {1,1} xs:anyURI */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_prov_PMEDownload_GET_PMEngineRef(struct zx_prov_PMEDownload_s* x, int n);

int zx_prov_PMEDownload_NUM_PMEngineRef(struct zx_prov_PMEDownload_s* x);

struct zx_elem_s* zx_prov_PMEDownload_POP_PMEngineRef(struct zx_prov_PMEDownload_s* x);

void zx_prov_PMEDownload_PUSH_PMEngineRef(struct zx_prov_PMEDownload_s* x, struct zx_elem_s* y);


void zx_prov_PMEDownload_PUT_PMEngineRef(struct zx_prov_PMEDownload_s* x, int n, struct zx_elem_s* y);

void zx_prov_PMEDownload_ADD_PMEngineRef(struct zx_prov_PMEDownload_s* x, int n, struct zx_elem_s* z);

void zx_prov_PMEDownload_DEL_PMEngineRef(struct zx_prov_PMEDownload_s* x, int n);

void zx_prov_PMEDownload_REV_PMEngineRef(struct zx_prov_PMEDownload_s* x);

#endif
/* -------------------------- prov_PMEDownloadResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMEDownloadResponse_EXT
#define zx_prov_PMEDownloadResponse_EXT
#endif

struct zx_prov_PMEDownloadResponse_s* zx_DEC_prov_PMEDownloadResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMEDownloadResponse_s* zx_NEW_prov_PMEDownloadResponse(struct zx_ctx* c);
void zx_FREE_prov_PMEDownloadResponse(struct zx_ctx* c, struct zx_prov_PMEDownloadResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMEDownloadResponse_s* zx_DEEP_CLONE_prov_PMEDownloadResponse(struct zx_ctx* c, struct zx_prov_PMEDownloadResponse_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMEDownloadResponse(struct zx_ctx* c, struct zx_prov_PMEDownloadResponse_s* x);
int zx_WALK_SO_prov_PMEDownloadResponse(struct zx_ctx* c, struct zx_prov_PMEDownloadResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMEDownloadResponse(struct zx_ctx* c, struct zx_prov_PMEDownloadResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMEDownloadResponse(struct zx_ctx* c, struct zx_prov_PMEDownloadResponse_s* x);
int zx_LEN_WO_prov_PMEDownloadResponse(struct zx_ctx* c, struct zx_prov_PMEDownloadResponse_s* x);
char* zx_ENC_SO_prov_PMEDownloadResponse(struct zx_ctx* c, struct zx_prov_PMEDownloadResponse_s* x, char* p);
char* zx_ENC_WO_prov_PMEDownloadResponse(struct zx_ctx* c, struct zx_prov_PMEDownloadResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMEDownloadResponse(struct zx_ctx* c, struct zx_prov_PMEDownloadResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMEDownloadResponse(struct zx_ctx* c, struct zx_prov_PMEDownloadResponse_s* x);

struct zx_prov_PMEDownloadResponse_s {
  ZX_ELEM_EXT
  zx_prov_PMEDownloadResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
  struct zx_elem_s* EngineData;	/* {0,1} xs:base64Binary */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_prov_PMEDownloadResponse_GET_Status(struct zx_prov_PMEDownloadResponse_s* x, int n);
struct zx_elem_s* zx_prov_PMEDownloadResponse_GET_EngineData(struct zx_prov_PMEDownloadResponse_s* x, int n);

int zx_prov_PMEDownloadResponse_NUM_Status(struct zx_prov_PMEDownloadResponse_s* x);
int zx_prov_PMEDownloadResponse_NUM_EngineData(struct zx_prov_PMEDownloadResponse_s* x);

struct zx_lu_Status_s* zx_prov_PMEDownloadResponse_POP_Status(struct zx_prov_PMEDownloadResponse_s* x);
struct zx_elem_s* zx_prov_PMEDownloadResponse_POP_EngineData(struct zx_prov_PMEDownloadResponse_s* x);

void zx_prov_PMEDownloadResponse_PUSH_Status(struct zx_prov_PMEDownloadResponse_s* x, struct zx_lu_Status_s* y);
void zx_prov_PMEDownloadResponse_PUSH_EngineData(struct zx_prov_PMEDownloadResponse_s* x, struct zx_elem_s* y);


void zx_prov_PMEDownloadResponse_PUT_Status(struct zx_prov_PMEDownloadResponse_s* x, int n, struct zx_lu_Status_s* y);
void zx_prov_PMEDownloadResponse_PUT_EngineData(struct zx_prov_PMEDownloadResponse_s* x, int n, struct zx_elem_s* y);

void zx_prov_PMEDownloadResponse_ADD_Status(struct zx_prov_PMEDownloadResponse_s* x, int n, struct zx_lu_Status_s* z);
void zx_prov_PMEDownloadResponse_ADD_EngineData(struct zx_prov_PMEDownloadResponse_s* x, int n, struct zx_elem_s* z);

void zx_prov_PMEDownloadResponse_DEL_Status(struct zx_prov_PMEDownloadResponse_s* x, int n);
void zx_prov_PMEDownloadResponse_DEL_EngineData(struct zx_prov_PMEDownloadResponse_s* x, int n);

void zx_prov_PMEDownloadResponse_REV_Status(struct zx_prov_PMEDownloadResponse_s* x);
void zx_prov_PMEDownloadResponse_REV_EngineData(struct zx_prov_PMEDownloadResponse_s* x);

#endif
/* -------------------------- prov_PMEEnable -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMEEnable_EXT
#define zx_prov_PMEEnable_EXT
#endif

struct zx_prov_PMEEnable_s* zx_DEC_prov_PMEEnable(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMEEnable_s* zx_NEW_prov_PMEEnable(struct zx_ctx* c);
void zx_FREE_prov_PMEEnable(struct zx_ctx* c, struct zx_prov_PMEEnable_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMEEnable_s* zx_DEEP_CLONE_prov_PMEEnable(struct zx_ctx* c, struct zx_prov_PMEEnable_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMEEnable(struct zx_ctx* c, struct zx_prov_PMEEnable_s* x);
int zx_WALK_SO_prov_PMEEnable(struct zx_ctx* c, struct zx_prov_PMEEnable_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMEEnable(struct zx_ctx* c, struct zx_prov_PMEEnable_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMEEnable(struct zx_ctx* c, struct zx_prov_PMEEnable_s* x);
int zx_LEN_WO_prov_PMEEnable(struct zx_ctx* c, struct zx_prov_PMEEnable_s* x);
char* zx_ENC_SO_prov_PMEEnable(struct zx_ctx* c, struct zx_prov_PMEEnable_s* x, char* p);
char* zx_ENC_WO_prov_PMEEnable(struct zx_ctx* c, struct zx_prov_PMEEnable_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMEEnable(struct zx_ctx* c, struct zx_prov_PMEEnable_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMEEnable(struct zx_ctx* c, struct zx_prov_PMEEnable_s* x);

struct zx_prov_PMEEnable_s {
  ZX_ELEM_EXT
  zx_prov_PMEEnable_EXT
  struct zx_elem_s* PMEngineRef;	/* {1,-1} xs:anyURI */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_prov_PMEEnable_GET_PMEngineRef(struct zx_prov_PMEEnable_s* x, int n);

int zx_prov_PMEEnable_NUM_PMEngineRef(struct zx_prov_PMEEnable_s* x);

struct zx_elem_s* zx_prov_PMEEnable_POP_PMEngineRef(struct zx_prov_PMEEnable_s* x);

void zx_prov_PMEEnable_PUSH_PMEngineRef(struct zx_prov_PMEEnable_s* x, struct zx_elem_s* y);


void zx_prov_PMEEnable_PUT_PMEngineRef(struct zx_prov_PMEEnable_s* x, int n, struct zx_elem_s* y);

void zx_prov_PMEEnable_ADD_PMEngineRef(struct zx_prov_PMEEnable_s* x, int n, struct zx_elem_s* z);

void zx_prov_PMEEnable_DEL_PMEngineRef(struct zx_prov_PMEEnable_s* x, int n);

void zx_prov_PMEEnable_REV_PMEngineRef(struct zx_prov_PMEEnable_s* x);

#endif
/* -------------------------- prov_PMEEnableResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMEEnableResponse_EXT
#define zx_prov_PMEEnableResponse_EXT
#endif

struct zx_prov_PMEEnableResponse_s* zx_DEC_prov_PMEEnableResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMEEnableResponse_s* zx_NEW_prov_PMEEnableResponse(struct zx_ctx* c);
void zx_FREE_prov_PMEEnableResponse(struct zx_ctx* c, struct zx_prov_PMEEnableResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMEEnableResponse_s* zx_DEEP_CLONE_prov_PMEEnableResponse(struct zx_ctx* c, struct zx_prov_PMEEnableResponse_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMEEnableResponse(struct zx_ctx* c, struct zx_prov_PMEEnableResponse_s* x);
int zx_WALK_SO_prov_PMEEnableResponse(struct zx_ctx* c, struct zx_prov_PMEEnableResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMEEnableResponse(struct zx_ctx* c, struct zx_prov_PMEEnableResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMEEnableResponse(struct zx_ctx* c, struct zx_prov_PMEEnableResponse_s* x);
int zx_LEN_WO_prov_PMEEnableResponse(struct zx_ctx* c, struct zx_prov_PMEEnableResponse_s* x);
char* zx_ENC_SO_prov_PMEEnableResponse(struct zx_ctx* c, struct zx_prov_PMEEnableResponse_s* x, char* p);
char* zx_ENC_WO_prov_PMEEnableResponse(struct zx_ctx* c, struct zx_prov_PMEEnableResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMEEnableResponse(struct zx_ctx* c, struct zx_prov_PMEEnableResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMEEnableResponse(struct zx_ctx* c, struct zx_prov_PMEEnableResponse_s* x);

struct zx_prov_PMEEnableResponse_s {
  ZX_ELEM_EXT
  zx_prov_PMEEnableResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_prov_PMEEnableResponse_GET_Status(struct zx_prov_PMEEnableResponse_s* x, int n);

int zx_prov_PMEEnableResponse_NUM_Status(struct zx_prov_PMEEnableResponse_s* x);

struct zx_lu_Status_s* zx_prov_PMEEnableResponse_POP_Status(struct zx_prov_PMEEnableResponse_s* x);

void zx_prov_PMEEnableResponse_PUSH_Status(struct zx_prov_PMEEnableResponse_s* x, struct zx_lu_Status_s* y);


void zx_prov_PMEEnableResponse_PUT_Status(struct zx_prov_PMEEnableResponse_s* x, int n, struct zx_lu_Status_s* y);

void zx_prov_PMEEnableResponse_ADD_Status(struct zx_prov_PMEEnableResponse_s* x, int n, struct zx_lu_Status_s* z);

void zx_prov_PMEEnableResponse_DEL_Status(struct zx_prov_PMEEnableResponse_s* x, int n);

void zx_prov_PMEEnableResponse_REV_Status(struct zx_prov_PMEEnableResponse_s* x);

#endif
/* -------------------------- prov_PMEGetInfo -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMEGetInfo_EXT
#define zx_prov_PMEGetInfo_EXT
#endif

struct zx_prov_PMEGetInfo_s* zx_DEC_prov_PMEGetInfo(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMEGetInfo_s* zx_NEW_prov_PMEGetInfo(struct zx_ctx* c);
void zx_FREE_prov_PMEGetInfo(struct zx_ctx* c, struct zx_prov_PMEGetInfo_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMEGetInfo_s* zx_DEEP_CLONE_prov_PMEGetInfo(struct zx_ctx* c, struct zx_prov_PMEGetInfo_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMEGetInfo(struct zx_ctx* c, struct zx_prov_PMEGetInfo_s* x);
int zx_WALK_SO_prov_PMEGetInfo(struct zx_ctx* c, struct zx_prov_PMEGetInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMEGetInfo(struct zx_ctx* c, struct zx_prov_PMEGetInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMEGetInfo(struct zx_ctx* c, struct zx_prov_PMEGetInfo_s* x);
int zx_LEN_WO_prov_PMEGetInfo(struct zx_ctx* c, struct zx_prov_PMEGetInfo_s* x);
char* zx_ENC_SO_prov_PMEGetInfo(struct zx_ctx* c, struct zx_prov_PMEGetInfo_s* x, char* p);
char* zx_ENC_WO_prov_PMEGetInfo(struct zx_ctx* c, struct zx_prov_PMEGetInfo_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMEGetInfo(struct zx_ctx* c, struct zx_prov_PMEGetInfo_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMEGetInfo(struct zx_ctx* c, struct zx_prov_PMEGetInfo_s* x);

struct zx_prov_PMEGetInfo_s {
  ZX_ELEM_EXT
  zx_prov_PMEGetInfo_EXT
  struct zx_elem_s* PMEngineRef;	/* {0,-1} xs:anyURI */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_prov_PMEGetInfo_GET_PMEngineRef(struct zx_prov_PMEGetInfo_s* x, int n);

int zx_prov_PMEGetInfo_NUM_PMEngineRef(struct zx_prov_PMEGetInfo_s* x);

struct zx_elem_s* zx_prov_PMEGetInfo_POP_PMEngineRef(struct zx_prov_PMEGetInfo_s* x);

void zx_prov_PMEGetInfo_PUSH_PMEngineRef(struct zx_prov_PMEGetInfo_s* x, struct zx_elem_s* y);


void zx_prov_PMEGetInfo_PUT_PMEngineRef(struct zx_prov_PMEGetInfo_s* x, int n, struct zx_elem_s* y);

void zx_prov_PMEGetInfo_ADD_PMEngineRef(struct zx_prov_PMEGetInfo_s* x, int n, struct zx_elem_s* z);

void zx_prov_PMEGetInfo_DEL_PMEngineRef(struct zx_prov_PMEGetInfo_s* x, int n);

void zx_prov_PMEGetInfo_REV_PMEngineRef(struct zx_prov_PMEGetInfo_s* x);

#endif
/* -------------------------- prov_PMEGetInfoResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMEGetInfoResponse_EXT
#define zx_prov_PMEGetInfoResponse_EXT
#endif

struct zx_prov_PMEGetInfoResponse_s* zx_DEC_prov_PMEGetInfoResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMEGetInfoResponse_s* zx_NEW_prov_PMEGetInfoResponse(struct zx_ctx* c);
void zx_FREE_prov_PMEGetInfoResponse(struct zx_ctx* c, struct zx_prov_PMEGetInfoResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMEGetInfoResponse_s* zx_DEEP_CLONE_prov_PMEGetInfoResponse(struct zx_ctx* c, struct zx_prov_PMEGetInfoResponse_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMEGetInfoResponse(struct zx_ctx* c, struct zx_prov_PMEGetInfoResponse_s* x);
int zx_WALK_SO_prov_PMEGetInfoResponse(struct zx_ctx* c, struct zx_prov_PMEGetInfoResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMEGetInfoResponse(struct zx_ctx* c, struct zx_prov_PMEGetInfoResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMEGetInfoResponse(struct zx_ctx* c, struct zx_prov_PMEGetInfoResponse_s* x);
int zx_LEN_WO_prov_PMEGetInfoResponse(struct zx_ctx* c, struct zx_prov_PMEGetInfoResponse_s* x);
char* zx_ENC_SO_prov_PMEGetInfoResponse(struct zx_ctx* c, struct zx_prov_PMEGetInfoResponse_s* x, char* p);
char* zx_ENC_WO_prov_PMEGetInfoResponse(struct zx_ctx* c, struct zx_prov_PMEGetInfoResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMEGetInfoResponse(struct zx_ctx* c, struct zx_prov_PMEGetInfoResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMEGetInfoResponse(struct zx_ctx* c, struct zx_prov_PMEGetInfoResponse_s* x);

struct zx_prov_PMEGetInfoResponse_s {
  ZX_ELEM_EXT
  zx_prov_PMEGetInfoResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
  struct zx_prov_PMEInfo_s* PMEInfo;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_prov_PMEGetInfoResponse_GET_Status(struct zx_prov_PMEGetInfoResponse_s* x, int n);
struct zx_prov_PMEInfo_s* zx_prov_PMEGetInfoResponse_GET_PMEInfo(struct zx_prov_PMEGetInfoResponse_s* x, int n);

int zx_prov_PMEGetInfoResponse_NUM_Status(struct zx_prov_PMEGetInfoResponse_s* x);
int zx_prov_PMEGetInfoResponse_NUM_PMEInfo(struct zx_prov_PMEGetInfoResponse_s* x);

struct zx_lu_Status_s* zx_prov_PMEGetInfoResponse_POP_Status(struct zx_prov_PMEGetInfoResponse_s* x);
struct zx_prov_PMEInfo_s* zx_prov_PMEGetInfoResponse_POP_PMEInfo(struct zx_prov_PMEGetInfoResponse_s* x);

void zx_prov_PMEGetInfoResponse_PUSH_Status(struct zx_prov_PMEGetInfoResponse_s* x, struct zx_lu_Status_s* y);
void zx_prov_PMEGetInfoResponse_PUSH_PMEInfo(struct zx_prov_PMEGetInfoResponse_s* x, struct zx_prov_PMEInfo_s* y);


void zx_prov_PMEGetInfoResponse_PUT_Status(struct zx_prov_PMEGetInfoResponse_s* x, int n, struct zx_lu_Status_s* y);
void zx_prov_PMEGetInfoResponse_PUT_PMEInfo(struct zx_prov_PMEGetInfoResponse_s* x, int n, struct zx_prov_PMEInfo_s* y);

void zx_prov_PMEGetInfoResponse_ADD_Status(struct zx_prov_PMEGetInfoResponse_s* x, int n, struct zx_lu_Status_s* z);
void zx_prov_PMEGetInfoResponse_ADD_PMEInfo(struct zx_prov_PMEGetInfoResponse_s* x, int n, struct zx_prov_PMEInfo_s* z);

void zx_prov_PMEGetInfoResponse_DEL_Status(struct zx_prov_PMEGetInfoResponse_s* x, int n);
void zx_prov_PMEGetInfoResponse_DEL_PMEInfo(struct zx_prov_PMEGetInfoResponse_s* x, int n);

void zx_prov_PMEGetInfoResponse_REV_Status(struct zx_prov_PMEGetInfoResponse_s* x);
void zx_prov_PMEGetInfoResponse_REV_PMEInfo(struct zx_prov_PMEGetInfoResponse_s* x);

#endif
/* -------------------------- prov_PMEHash -------------------------- */
/* refby( zx_prov_PMEInfo_s zx_prov_PMERegister_s ) */
#ifndef zx_prov_PMEHash_EXT
#define zx_prov_PMEHash_EXT
#endif

struct zx_prov_PMEHash_s* zx_DEC_prov_PMEHash(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMEHash_s* zx_NEW_prov_PMEHash(struct zx_ctx* c);
void zx_FREE_prov_PMEHash(struct zx_ctx* c, struct zx_prov_PMEHash_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMEHash_s* zx_DEEP_CLONE_prov_PMEHash(struct zx_ctx* c, struct zx_prov_PMEHash_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMEHash(struct zx_ctx* c, struct zx_prov_PMEHash_s* x);
int zx_WALK_SO_prov_PMEHash(struct zx_ctx* c, struct zx_prov_PMEHash_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMEHash(struct zx_ctx* c, struct zx_prov_PMEHash_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMEHash(struct zx_ctx* c, struct zx_prov_PMEHash_s* x);
int zx_LEN_WO_prov_PMEHash(struct zx_ctx* c, struct zx_prov_PMEHash_s* x);
char* zx_ENC_SO_prov_PMEHash(struct zx_ctx* c, struct zx_prov_PMEHash_s* x, char* p);
char* zx_ENC_WO_prov_PMEHash(struct zx_ctx* c, struct zx_prov_PMEHash_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMEHash(struct zx_ctx* c, struct zx_prov_PMEHash_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMEHash(struct zx_ctx* c, struct zx_prov_PMEHash_s* x);

struct zx_prov_PMEHash_s {
  ZX_ELEM_EXT
  zx_prov_PMEHash_EXT
  struct zx_str* method;	/* {1,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_prov_PMEHash_GET_method(struct zx_prov_PMEHash_s* x);





void zx_prov_PMEHash_PUT_method(struct zx_prov_PMEHash_s* x, struct zx_str* y);





#endif
/* -------------------------- prov_PMEInfo -------------------------- */
/* refby( zx_prov_PMEGetInfoResponse_s ) */
#ifndef zx_prov_PMEInfo_EXT
#define zx_prov_PMEInfo_EXT
#endif

struct zx_prov_PMEInfo_s* zx_DEC_prov_PMEInfo(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMEInfo_s* zx_NEW_prov_PMEInfo(struct zx_ctx* c);
void zx_FREE_prov_PMEInfo(struct zx_ctx* c, struct zx_prov_PMEInfo_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMEInfo_s* zx_DEEP_CLONE_prov_PMEInfo(struct zx_ctx* c, struct zx_prov_PMEInfo_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMEInfo(struct zx_ctx* c, struct zx_prov_PMEInfo_s* x);
int zx_WALK_SO_prov_PMEInfo(struct zx_ctx* c, struct zx_prov_PMEInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMEInfo(struct zx_ctx* c, struct zx_prov_PMEInfo_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMEInfo(struct zx_ctx* c, struct zx_prov_PMEInfo_s* x);
int zx_LEN_WO_prov_PMEInfo(struct zx_ctx* c, struct zx_prov_PMEInfo_s* x);
char* zx_ENC_SO_prov_PMEInfo(struct zx_ctx* c, struct zx_prov_PMEInfo_s* x, char* p);
char* zx_ENC_WO_prov_PMEInfo(struct zx_ctx* c, struct zx_prov_PMEInfo_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMEInfo(struct zx_ctx* c, struct zx_prov_PMEInfo_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMEInfo(struct zx_ctx* c, struct zx_prov_PMEInfo_s* x);

struct zx_prov_PMEInfo_s {
  ZX_ELEM_EXT
  zx_prov_PMEInfo_EXT
  struct zx_elem_s* PMEngineRef;	/* {1,1} xs:anyURI */
  struct zx_elem_s* PMECreatorID;	/* {1,1} xs:anyURI */
  struct zx_elem_s* PMEWhenCreated;	/* {1,1} xs:dateTime */
  struct zx_elem_s* PMEEnabled;	/* {1,1} xs:boolean */
  struct zx_elem_s* PMEWhenEnabled;	/* {1,1} xs:dateTime */
  struct zx_elem_s* PMESize;	/* {1,1} xs:integer */
  struct zx_prov_PMEHash_s* PMEHash;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_prov_PMEInfo_GET_PMEngineRef(struct zx_prov_PMEInfo_s* x, int n);
struct zx_elem_s* zx_prov_PMEInfo_GET_PMECreatorID(struct zx_prov_PMEInfo_s* x, int n);
struct zx_elem_s* zx_prov_PMEInfo_GET_PMEWhenCreated(struct zx_prov_PMEInfo_s* x, int n);
struct zx_elem_s* zx_prov_PMEInfo_GET_PMEEnabled(struct zx_prov_PMEInfo_s* x, int n);
struct zx_elem_s* zx_prov_PMEInfo_GET_PMEWhenEnabled(struct zx_prov_PMEInfo_s* x, int n);
struct zx_elem_s* zx_prov_PMEInfo_GET_PMESize(struct zx_prov_PMEInfo_s* x, int n);
struct zx_prov_PMEHash_s* zx_prov_PMEInfo_GET_PMEHash(struct zx_prov_PMEInfo_s* x, int n);

int zx_prov_PMEInfo_NUM_PMEngineRef(struct zx_prov_PMEInfo_s* x);
int zx_prov_PMEInfo_NUM_PMECreatorID(struct zx_prov_PMEInfo_s* x);
int zx_prov_PMEInfo_NUM_PMEWhenCreated(struct zx_prov_PMEInfo_s* x);
int zx_prov_PMEInfo_NUM_PMEEnabled(struct zx_prov_PMEInfo_s* x);
int zx_prov_PMEInfo_NUM_PMEWhenEnabled(struct zx_prov_PMEInfo_s* x);
int zx_prov_PMEInfo_NUM_PMESize(struct zx_prov_PMEInfo_s* x);
int zx_prov_PMEInfo_NUM_PMEHash(struct zx_prov_PMEInfo_s* x);

struct zx_elem_s* zx_prov_PMEInfo_POP_PMEngineRef(struct zx_prov_PMEInfo_s* x);
struct zx_elem_s* zx_prov_PMEInfo_POP_PMECreatorID(struct zx_prov_PMEInfo_s* x);
struct zx_elem_s* zx_prov_PMEInfo_POP_PMEWhenCreated(struct zx_prov_PMEInfo_s* x);
struct zx_elem_s* zx_prov_PMEInfo_POP_PMEEnabled(struct zx_prov_PMEInfo_s* x);
struct zx_elem_s* zx_prov_PMEInfo_POP_PMEWhenEnabled(struct zx_prov_PMEInfo_s* x);
struct zx_elem_s* zx_prov_PMEInfo_POP_PMESize(struct zx_prov_PMEInfo_s* x);
struct zx_prov_PMEHash_s* zx_prov_PMEInfo_POP_PMEHash(struct zx_prov_PMEInfo_s* x);

void zx_prov_PMEInfo_PUSH_PMEngineRef(struct zx_prov_PMEInfo_s* x, struct zx_elem_s* y);
void zx_prov_PMEInfo_PUSH_PMECreatorID(struct zx_prov_PMEInfo_s* x, struct zx_elem_s* y);
void zx_prov_PMEInfo_PUSH_PMEWhenCreated(struct zx_prov_PMEInfo_s* x, struct zx_elem_s* y);
void zx_prov_PMEInfo_PUSH_PMEEnabled(struct zx_prov_PMEInfo_s* x, struct zx_elem_s* y);
void zx_prov_PMEInfo_PUSH_PMEWhenEnabled(struct zx_prov_PMEInfo_s* x, struct zx_elem_s* y);
void zx_prov_PMEInfo_PUSH_PMESize(struct zx_prov_PMEInfo_s* x, struct zx_elem_s* y);
void zx_prov_PMEInfo_PUSH_PMEHash(struct zx_prov_PMEInfo_s* x, struct zx_prov_PMEHash_s* y);


void zx_prov_PMEInfo_PUT_PMEngineRef(struct zx_prov_PMEInfo_s* x, int n, struct zx_elem_s* y);
void zx_prov_PMEInfo_PUT_PMECreatorID(struct zx_prov_PMEInfo_s* x, int n, struct zx_elem_s* y);
void zx_prov_PMEInfo_PUT_PMEWhenCreated(struct zx_prov_PMEInfo_s* x, int n, struct zx_elem_s* y);
void zx_prov_PMEInfo_PUT_PMEEnabled(struct zx_prov_PMEInfo_s* x, int n, struct zx_elem_s* y);
void zx_prov_PMEInfo_PUT_PMEWhenEnabled(struct zx_prov_PMEInfo_s* x, int n, struct zx_elem_s* y);
void zx_prov_PMEInfo_PUT_PMESize(struct zx_prov_PMEInfo_s* x, int n, struct zx_elem_s* y);
void zx_prov_PMEInfo_PUT_PMEHash(struct zx_prov_PMEInfo_s* x, int n, struct zx_prov_PMEHash_s* y);

void zx_prov_PMEInfo_ADD_PMEngineRef(struct zx_prov_PMEInfo_s* x, int n, struct zx_elem_s* z);
void zx_prov_PMEInfo_ADD_PMECreatorID(struct zx_prov_PMEInfo_s* x, int n, struct zx_elem_s* z);
void zx_prov_PMEInfo_ADD_PMEWhenCreated(struct zx_prov_PMEInfo_s* x, int n, struct zx_elem_s* z);
void zx_prov_PMEInfo_ADD_PMEEnabled(struct zx_prov_PMEInfo_s* x, int n, struct zx_elem_s* z);
void zx_prov_PMEInfo_ADD_PMEWhenEnabled(struct zx_prov_PMEInfo_s* x, int n, struct zx_elem_s* z);
void zx_prov_PMEInfo_ADD_PMESize(struct zx_prov_PMEInfo_s* x, int n, struct zx_elem_s* z);
void zx_prov_PMEInfo_ADD_PMEHash(struct zx_prov_PMEInfo_s* x, int n, struct zx_prov_PMEHash_s* z);

void zx_prov_PMEInfo_DEL_PMEngineRef(struct zx_prov_PMEInfo_s* x, int n);
void zx_prov_PMEInfo_DEL_PMECreatorID(struct zx_prov_PMEInfo_s* x, int n);
void zx_prov_PMEInfo_DEL_PMEWhenCreated(struct zx_prov_PMEInfo_s* x, int n);
void zx_prov_PMEInfo_DEL_PMEEnabled(struct zx_prov_PMEInfo_s* x, int n);
void zx_prov_PMEInfo_DEL_PMEWhenEnabled(struct zx_prov_PMEInfo_s* x, int n);
void zx_prov_PMEInfo_DEL_PMESize(struct zx_prov_PMEInfo_s* x, int n);
void zx_prov_PMEInfo_DEL_PMEHash(struct zx_prov_PMEInfo_s* x, int n);

void zx_prov_PMEInfo_REV_PMEngineRef(struct zx_prov_PMEInfo_s* x);
void zx_prov_PMEInfo_REV_PMECreatorID(struct zx_prov_PMEInfo_s* x);
void zx_prov_PMEInfo_REV_PMEWhenCreated(struct zx_prov_PMEInfo_s* x);
void zx_prov_PMEInfo_REV_PMEEnabled(struct zx_prov_PMEInfo_s* x);
void zx_prov_PMEInfo_REV_PMEWhenEnabled(struct zx_prov_PMEInfo_s* x);
void zx_prov_PMEInfo_REV_PMESize(struct zx_prov_PMEInfo_s* x);
void zx_prov_PMEInfo_REV_PMEHash(struct zx_prov_PMEInfo_s* x);

#endif
/* -------------------------- prov_PMERegister -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMERegister_EXT
#define zx_prov_PMERegister_EXT
#endif

struct zx_prov_PMERegister_s* zx_DEC_prov_PMERegister(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMERegister_s* zx_NEW_prov_PMERegister(struct zx_ctx* c);
void zx_FREE_prov_PMERegister(struct zx_ctx* c, struct zx_prov_PMERegister_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMERegister_s* zx_DEEP_CLONE_prov_PMERegister(struct zx_ctx* c, struct zx_prov_PMERegister_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMERegister(struct zx_ctx* c, struct zx_prov_PMERegister_s* x);
int zx_WALK_SO_prov_PMERegister(struct zx_ctx* c, struct zx_prov_PMERegister_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMERegister(struct zx_ctx* c, struct zx_prov_PMERegister_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMERegister(struct zx_ctx* c, struct zx_prov_PMERegister_s* x);
int zx_LEN_WO_prov_PMERegister(struct zx_ctx* c, struct zx_prov_PMERegister_s* x);
char* zx_ENC_SO_prov_PMERegister(struct zx_ctx* c, struct zx_prov_PMERegister_s* x, char* p);
char* zx_ENC_WO_prov_PMERegister(struct zx_ctx* c, struct zx_prov_PMERegister_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMERegister(struct zx_ctx* c, struct zx_prov_PMERegister_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMERegister(struct zx_ctx* c, struct zx_prov_PMERegister_s* x);

struct zx_prov_PMERegister_s {
  ZX_ELEM_EXT
  zx_prov_PMERegister_EXT
  struct zx_elem_s* PMEngineRef;	/* {1,1} xs:anyURI */
  struct zx_elem_s* PMESize;	/* {1,1} xs:integer */
  struct zx_prov_PMEHash_s* PMEHash;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_prov_PMERegister_GET_PMEngineRef(struct zx_prov_PMERegister_s* x, int n);
struct zx_elem_s* zx_prov_PMERegister_GET_PMESize(struct zx_prov_PMERegister_s* x, int n);
struct zx_prov_PMEHash_s* zx_prov_PMERegister_GET_PMEHash(struct zx_prov_PMERegister_s* x, int n);

int zx_prov_PMERegister_NUM_PMEngineRef(struct zx_prov_PMERegister_s* x);
int zx_prov_PMERegister_NUM_PMESize(struct zx_prov_PMERegister_s* x);
int zx_prov_PMERegister_NUM_PMEHash(struct zx_prov_PMERegister_s* x);

struct zx_elem_s* zx_prov_PMERegister_POP_PMEngineRef(struct zx_prov_PMERegister_s* x);
struct zx_elem_s* zx_prov_PMERegister_POP_PMESize(struct zx_prov_PMERegister_s* x);
struct zx_prov_PMEHash_s* zx_prov_PMERegister_POP_PMEHash(struct zx_prov_PMERegister_s* x);

void zx_prov_PMERegister_PUSH_PMEngineRef(struct zx_prov_PMERegister_s* x, struct zx_elem_s* y);
void zx_prov_PMERegister_PUSH_PMESize(struct zx_prov_PMERegister_s* x, struct zx_elem_s* y);
void zx_prov_PMERegister_PUSH_PMEHash(struct zx_prov_PMERegister_s* x, struct zx_prov_PMEHash_s* y);


void zx_prov_PMERegister_PUT_PMEngineRef(struct zx_prov_PMERegister_s* x, int n, struct zx_elem_s* y);
void zx_prov_PMERegister_PUT_PMESize(struct zx_prov_PMERegister_s* x, int n, struct zx_elem_s* y);
void zx_prov_PMERegister_PUT_PMEHash(struct zx_prov_PMERegister_s* x, int n, struct zx_prov_PMEHash_s* y);

void zx_prov_PMERegister_ADD_PMEngineRef(struct zx_prov_PMERegister_s* x, int n, struct zx_elem_s* z);
void zx_prov_PMERegister_ADD_PMESize(struct zx_prov_PMERegister_s* x, int n, struct zx_elem_s* z);
void zx_prov_PMERegister_ADD_PMEHash(struct zx_prov_PMERegister_s* x, int n, struct zx_prov_PMEHash_s* z);

void zx_prov_PMERegister_DEL_PMEngineRef(struct zx_prov_PMERegister_s* x, int n);
void zx_prov_PMERegister_DEL_PMESize(struct zx_prov_PMERegister_s* x, int n);
void zx_prov_PMERegister_DEL_PMEHash(struct zx_prov_PMERegister_s* x, int n);

void zx_prov_PMERegister_REV_PMEngineRef(struct zx_prov_PMERegister_s* x);
void zx_prov_PMERegister_REV_PMESize(struct zx_prov_PMERegister_s* x);
void zx_prov_PMERegister_REV_PMEHash(struct zx_prov_PMERegister_s* x);

#endif
/* -------------------------- prov_PMERegisterResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMERegisterResponse_EXT
#define zx_prov_PMERegisterResponse_EXT
#endif

struct zx_prov_PMERegisterResponse_s* zx_DEC_prov_PMERegisterResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMERegisterResponse_s* zx_NEW_prov_PMERegisterResponse(struct zx_ctx* c);
void zx_FREE_prov_PMERegisterResponse(struct zx_ctx* c, struct zx_prov_PMERegisterResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMERegisterResponse_s* zx_DEEP_CLONE_prov_PMERegisterResponse(struct zx_ctx* c, struct zx_prov_PMERegisterResponse_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMERegisterResponse(struct zx_ctx* c, struct zx_prov_PMERegisterResponse_s* x);
int zx_WALK_SO_prov_PMERegisterResponse(struct zx_ctx* c, struct zx_prov_PMERegisterResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMERegisterResponse(struct zx_ctx* c, struct zx_prov_PMERegisterResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMERegisterResponse(struct zx_ctx* c, struct zx_prov_PMERegisterResponse_s* x);
int zx_LEN_WO_prov_PMERegisterResponse(struct zx_ctx* c, struct zx_prov_PMERegisterResponse_s* x);
char* zx_ENC_SO_prov_PMERegisterResponse(struct zx_ctx* c, struct zx_prov_PMERegisterResponse_s* x, char* p);
char* zx_ENC_WO_prov_PMERegisterResponse(struct zx_ctx* c, struct zx_prov_PMERegisterResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMERegisterResponse(struct zx_ctx* c, struct zx_prov_PMERegisterResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMERegisterResponse(struct zx_ctx* c, struct zx_prov_PMERegisterResponse_s* x);

struct zx_prov_PMERegisterResponse_s {
  ZX_ELEM_EXT
  zx_prov_PMERegisterResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
  struct zx_elem_s* PMEUploadMax;	/* {0,1} xs:integer */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_prov_PMERegisterResponse_GET_Status(struct zx_prov_PMERegisterResponse_s* x, int n);
struct zx_elem_s* zx_prov_PMERegisterResponse_GET_PMEUploadMax(struct zx_prov_PMERegisterResponse_s* x, int n);

int zx_prov_PMERegisterResponse_NUM_Status(struct zx_prov_PMERegisterResponse_s* x);
int zx_prov_PMERegisterResponse_NUM_PMEUploadMax(struct zx_prov_PMERegisterResponse_s* x);

struct zx_lu_Status_s* zx_prov_PMERegisterResponse_POP_Status(struct zx_prov_PMERegisterResponse_s* x);
struct zx_elem_s* zx_prov_PMERegisterResponse_POP_PMEUploadMax(struct zx_prov_PMERegisterResponse_s* x);

void zx_prov_PMERegisterResponse_PUSH_Status(struct zx_prov_PMERegisterResponse_s* x, struct zx_lu_Status_s* y);
void zx_prov_PMERegisterResponse_PUSH_PMEUploadMax(struct zx_prov_PMERegisterResponse_s* x, struct zx_elem_s* y);


void zx_prov_PMERegisterResponse_PUT_Status(struct zx_prov_PMERegisterResponse_s* x, int n, struct zx_lu_Status_s* y);
void zx_prov_PMERegisterResponse_PUT_PMEUploadMax(struct zx_prov_PMERegisterResponse_s* x, int n, struct zx_elem_s* y);

void zx_prov_PMERegisterResponse_ADD_Status(struct zx_prov_PMERegisterResponse_s* x, int n, struct zx_lu_Status_s* z);
void zx_prov_PMERegisterResponse_ADD_PMEUploadMax(struct zx_prov_PMERegisterResponse_s* x, int n, struct zx_elem_s* z);

void zx_prov_PMERegisterResponse_DEL_Status(struct zx_prov_PMERegisterResponse_s* x, int n);
void zx_prov_PMERegisterResponse_DEL_PMEUploadMax(struct zx_prov_PMERegisterResponse_s* x, int n);

void zx_prov_PMERegisterResponse_REV_Status(struct zx_prov_PMERegisterResponse_s* x);
void zx_prov_PMERegisterResponse_REV_PMEUploadMax(struct zx_prov_PMERegisterResponse_s* x);

#endif
/* -------------------------- prov_PMEUpload -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMEUpload_EXT
#define zx_prov_PMEUpload_EXT
#endif

struct zx_prov_PMEUpload_s* zx_DEC_prov_PMEUpload(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMEUpload_s* zx_NEW_prov_PMEUpload(struct zx_ctx* c);
void zx_FREE_prov_PMEUpload(struct zx_ctx* c, struct zx_prov_PMEUpload_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMEUpload_s* zx_DEEP_CLONE_prov_PMEUpload(struct zx_ctx* c, struct zx_prov_PMEUpload_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMEUpload(struct zx_ctx* c, struct zx_prov_PMEUpload_s* x);
int zx_WALK_SO_prov_PMEUpload(struct zx_ctx* c, struct zx_prov_PMEUpload_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMEUpload(struct zx_ctx* c, struct zx_prov_PMEUpload_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMEUpload(struct zx_ctx* c, struct zx_prov_PMEUpload_s* x);
int zx_LEN_WO_prov_PMEUpload(struct zx_ctx* c, struct zx_prov_PMEUpload_s* x);
char* zx_ENC_SO_prov_PMEUpload(struct zx_ctx* c, struct zx_prov_PMEUpload_s* x, char* p);
char* zx_ENC_WO_prov_PMEUpload(struct zx_ctx* c, struct zx_prov_PMEUpload_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMEUpload(struct zx_ctx* c, struct zx_prov_PMEUpload_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMEUpload(struct zx_ctx* c, struct zx_prov_PMEUpload_s* x);

struct zx_prov_PMEUpload_s {
  ZX_ELEM_EXT
  zx_prov_PMEUpload_EXT
  struct zx_elem_s* PMEngineRef;	/* {1,1} xs:anyURI */
  struct zx_elem_s* EngineData;	/* {1,1} xs:base64Binary */
  struct zx_str* offset;	/* {1,1} attribute xs:integer */
  struct zx_str* remaining;	/* {1,1} attribute xs:integer */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_prov_PMEUpload_GET_offset(struct zx_prov_PMEUpload_s* x);
struct zx_str* zx_prov_PMEUpload_GET_remaining(struct zx_prov_PMEUpload_s* x);

struct zx_elem_s* zx_prov_PMEUpload_GET_PMEngineRef(struct zx_prov_PMEUpload_s* x, int n);
struct zx_elem_s* zx_prov_PMEUpload_GET_EngineData(struct zx_prov_PMEUpload_s* x, int n);

int zx_prov_PMEUpload_NUM_PMEngineRef(struct zx_prov_PMEUpload_s* x);
int zx_prov_PMEUpload_NUM_EngineData(struct zx_prov_PMEUpload_s* x);

struct zx_elem_s* zx_prov_PMEUpload_POP_PMEngineRef(struct zx_prov_PMEUpload_s* x);
struct zx_elem_s* zx_prov_PMEUpload_POP_EngineData(struct zx_prov_PMEUpload_s* x);

void zx_prov_PMEUpload_PUSH_PMEngineRef(struct zx_prov_PMEUpload_s* x, struct zx_elem_s* y);
void zx_prov_PMEUpload_PUSH_EngineData(struct zx_prov_PMEUpload_s* x, struct zx_elem_s* y);

void zx_prov_PMEUpload_PUT_offset(struct zx_prov_PMEUpload_s* x, struct zx_str* y);
void zx_prov_PMEUpload_PUT_remaining(struct zx_prov_PMEUpload_s* x, struct zx_str* y);

void zx_prov_PMEUpload_PUT_PMEngineRef(struct zx_prov_PMEUpload_s* x, int n, struct zx_elem_s* y);
void zx_prov_PMEUpload_PUT_EngineData(struct zx_prov_PMEUpload_s* x, int n, struct zx_elem_s* y);

void zx_prov_PMEUpload_ADD_PMEngineRef(struct zx_prov_PMEUpload_s* x, int n, struct zx_elem_s* z);
void zx_prov_PMEUpload_ADD_EngineData(struct zx_prov_PMEUpload_s* x, int n, struct zx_elem_s* z);

void zx_prov_PMEUpload_DEL_PMEngineRef(struct zx_prov_PMEUpload_s* x, int n);
void zx_prov_PMEUpload_DEL_EngineData(struct zx_prov_PMEUpload_s* x, int n);

void zx_prov_PMEUpload_REV_PMEngineRef(struct zx_prov_PMEUpload_s* x);
void zx_prov_PMEUpload_REV_EngineData(struct zx_prov_PMEUpload_s* x);

#endif
/* -------------------------- prov_PMEUploadResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMEUploadResponse_EXT
#define zx_prov_PMEUploadResponse_EXT
#endif

struct zx_prov_PMEUploadResponse_s* zx_DEC_prov_PMEUploadResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMEUploadResponse_s* zx_NEW_prov_PMEUploadResponse(struct zx_ctx* c);
void zx_FREE_prov_PMEUploadResponse(struct zx_ctx* c, struct zx_prov_PMEUploadResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMEUploadResponse_s* zx_DEEP_CLONE_prov_PMEUploadResponse(struct zx_ctx* c, struct zx_prov_PMEUploadResponse_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMEUploadResponse(struct zx_ctx* c, struct zx_prov_PMEUploadResponse_s* x);
int zx_WALK_SO_prov_PMEUploadResponse(struct zx_ctx* c, struct zx_prov_PMEUploadResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMEUploadResponse(struct zx_ctx* c, struct zx_prov_PMEUploadResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMEUploadResponse(struct zx_ctx* c, struct zx_prov_PMEUploadResponse_s* x);
int zx_LEN_WO_prov_PMEUploadResponse(struct zx_ctx* c, struct zx_prov_PMEUploadResponse_s* x);
char* zx_ENC_SO_prov_PMEUploadResponse(struct zx_ctx* c, struct zx_prov_PMEUploadResponse_s* x, char* p);
char* zx_ENC_WO_prov_PMEUploadResponse(struct zx_ctx* c, struct zx_prov_PMEUploadResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMEUploadResponse(struct zx_ctx* c, struct zx_prov_PMEUploadResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMEUploadResponse(struct zx_ctx* c, struct zx_prov_PMEUploadResponse_s* x);

struct zx_prov_PMEUploadResponse_s {
  ZX_ELEM_EXT
  zx_prov_PMEUploadResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_prov_PMEUploadResponse_GET_Status(struct zx_prov_PMEUploadResponse_s* x, int n);

int zx_prov_PMEUploadResponse_NUM_Status(struct zx_prov_PMEUploadResponse_s* x);

struct zx_lu_Status_s* zx_prov_PMEUploadResponse_POP_Status(struct zx_prov_PMEUploadResponse_s* x);

void zx_prov_PMEUploadResponse_PUSH_Status(struct zx_prov_PMEUploadResponse_s* x, struct zx_lu_Status_s* y);


void zx_prov_PMEUploadResponse_PUT_Status(struct zx_prov_PMEUploadResponse_s* x, int n, struct zx_lu_Status_s* y);

void zx_prov_PMEUploadResponse_ADD_Status(struct zx_prov_PMEUploadResponse_s* x, int n, struct zx_lu_Status_s* z);

void zx_prov_PMEUploadResponse_DEL_Status(struct zx_prov_PMEUploadResponse_s* x, int n);

void zx_prov_PMEUploadResponse_REV_Status(struct zx_prov_PMEUploadResponse_s* x);

#endif
/* -------------------------- prov_PMGetDescriptor -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMGetDescriptor_EXT
#define zx_prov_PMGetDescriptor_EXT
#endif

struct zx_prov_PMGetDescriptor_s* zx_DEC_prov_PMGetDescriptor(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMGetDescriptor_s* zx_NEW_prov_PMGetDescriptor(struct zx_ctx* c);
void zx_FREE_prov_PMGetDescriptor(struct zx_ctx* c, struct zx_prov_PMGetDescriptor_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMGetDescriptor_s* zx_DEEP_CLONE_prov_PMGetDescriptor(struct zx_ctx* c, struct zx_prov_PMGetDescriptor_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMGetDescriptor(struct zx_ctx* c, struct zx_prov_PMGetDescriptor_s* x);
int zx_WALK_SO_prov_PMGetDescriptor(struct zx_ctx* c, struct zx_prov_PMGetDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMGetDescriptor(struct zx_ctx* c, struct zx_prov_PMGetDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMGetDescriptor(struct zx_ctx* c, struct zx_prov_PMGetDescriptor_s* x);
int zx_LEN_WO_prov_PMGetDescriptor(struct zx_ctx* c, struct zx_prov_PMGetDescriptor_s* x);
char* zx_ENC_SO_prov_PMGetDescriptor(struct zx_ctx* c, struct zx_prov_PMGetDescriptor_s* x, char* p);
char* zx_ENC_WO_prov_PMGetDescriptor(struct zx_ctx* c, struct zx_prov_PMGetDescriptor_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMGetDescriptor(struct zx_ctx* c, struct zx_prov_PMGetDescriptor_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMGetDescriptor(struct zx_ctx* c, struct zx_prov_PMGetDescriptor_s* x);

struct zx_prov_PMGetDescriptor_s {
  ZX_ELEM_EXT
  zx_prov_PMGetDescriptor_EXT
  struct zx_elem_s* PMDArtifact;	/* {1,1} xs:string */
  struct zx_prov_CallbackEPR_s* CallbackEPR;	/* {1,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_elem_s* zx_prov_PMGetDescriptor_GET_PMDArtifact(struct zx_prov_PMGetDescriptor_s* x, int n);
struct zx_prov_CallbackEPR_s* zx_prov_PMGetDescriptor_GET_CallbackEPR(struct zx_prov_PMGetDescriptor_s* x, int n);

int zx_prov_PMGetDescriptor_NUM_PMDArtifact(struct zx_prov_PMGetDescriptor_s* x);
int zx_prov_PMGetDescriptor_NUM_CallbackEPR(struct zx_prov_PMGetDescriptor_s* x);

struct zx_elem_s* zx_prov_PMGetDescriptor_POP_PMDArtifact(struct zx_prov_PMGetDescriptor_s* x);
struct zx_prov_CallbackEPR_s* zx_prov_PMGetDescriptor_POP_CallbackEPR(struct zx_prov_PMGetDescriptor_s* x);

void zx_prov_PMGetDescriptor_PUSH_PMDArtifact(struct zx_prov_PMGetDescriptor_s* x, struct zx_elem_s* y);
void zx_prov_PMGetDescriptor_PUSH_CallbackEPR(struct zx_prov_PMGetDescriptor_s* x, struct zx_prov_CallbackEPR_s* y);


void zx_prov_PMGetDescriptor_PUT_PMDArtifact(struct zx_prov_PMGetDescriptor_s* x, int n, struct zx_elem_s* y);
void zx_prov_PMGetDescriptor_PUT_CallbackEPR(struct zx_prov_PMGetDescriptor_s* x, int n, struct zx_prov_CallbackEPR_s* y);

void zx_prov_PMGetDescriptor_ADD_PMDArtifact(struct zx_prov_PMGetDescriptor_s* x, int n, struct zx_elem_s* z);
void zx_prov_PMGetDescriptor_ADD_CallbackEPR(struct zx_prov_PMGetDescriptor_s* x, int n, struct zx_prov_CallbackEPR_s* z);

void zx_prov_PMGetDescriptor_DEL_PMDArtifact(struct zx_prov_PMGetDescriptor_s* x, int n);
void zx_prov_PMGetDescriptor_DEL_CallbackEPR(struct zx_prov_PMGetDescriptor_s* x, int n);

void zx_prov_PMGetDescriptor_REV_PMDArtifact(struct zx_prov_PMGetDescriptor_s* x);
void zx_prov_PMGetDescriptor_REV_CallbackEPR(struct zx_prov_PMGetDescriptor_s* x);

#endif
/* -------------------------- prov_PMGetDescriptorResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMGetDescriptorResponse_EXT
#define zx_prov_PMGetDescriptorResponse_EXT
#endif

struct zx_prov_PMGetDescriptorResponse_s* zx_DEC_prov_PMGetDescriptorResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMGetDescriptorResponse_s* zx_NEW_prov_PMGetDescriptorResponse(struct zx_ctx* c);
void zx_FREE_prov_PMGetDescriptorResponse(struct zx_ctx* c, struct zx_prov_PMGetDescriptorResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMGetDescriptorResponse_s* zx_DEEP_CLONE_prov_PMGetDescriptorResponse(struct zx_ctx* c, struct zx_prov_PMGetDescriptorResponse_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMGetDescriptorResponse(struct zx_ctx* c, struct zx_prov_PMGetDescriptorResponse_s* x);
int zx_WALK_SO_prov_PMGetDescriptorResponse(struct zx_ctx* c, struct zx_prov_PMGetDescriptorResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMGetDescriptorResponse(struct zx_ctx* c, struct zx_prov_PMGetDescriptorResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMGetDescriptorResponse(struct zx_ctx* c, struct zx_prov_PMGetDescriptorResponse_s* x);
int zx_LEN_WO_prov_PMGetDescriptorResponse(struct zx_ctx* c, struct zx_prov_PMGetDescriptorResponse_s* x);
char* zx_ENC_SO_prov_PMGetDescriptorResponse(struct zx_ctx* c, struct zx_prov_PMGetDescriptorResponse_s* x, char* p);
char* zx_ENC_WO_prov_PMGetDescriptorResponse(struct zx_ctx* c, struct zx_prov_PMGetDescriptorResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMGetDescriptorResponse(struct zx_ctx* c, struct zx_prov_PMGetDescriptorResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMGetDescriptorResponse(struct zx_ctx* c, struct zx_prov_PMGetDescriptorResponse_s* x);

struct zx_prov_PMGetDescriptorResponse_s {
  ZX_ELEM_EXT
  zx_prov_PMGetDescriptorResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
  struct zx_prov_PMDescriptor_s* PMDescriptor;	/* {0,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_prov_PMGetDescriptorResponse_GET_Status(struct zx_prov_PMGetDescriptorResponse_s* x, int n);
struct zx_prov_PMDescriptor_s* zx_prov_PMGetDescriptorResponse_GET_PMDescriptor(struct zx_prov_PMGetDescriptorResponse_s* x, int n);

int zx_prov_PMGetDescriptorResponse_NUM_Status(struct zx_prov_PMGetDescriptorResponse_s* x);
int zx_prov_PMGetDescriptorResponse_NUM_PMDescriptor(struct zx_prov_PMGetDescriptorResponse_s* x);

struct zx_lu_Status_s* zx_prov_PMGetDescriptorResponse_POP_Status(struct zx_prov_PMGetDescriptorResponse_s* x);
struct zx_prov_PMDescriptor_s* zx_prov_PMGetDescriptorResponse_POP_PMDescriptor(struct zx_prov_PMGetDescriptorResponse_s* x);

void zx_prov_PMGetDescriptorResponse_PUSH_Status(struct zx_prov_PMGetDescriptorResponse_s* x, struct zx_lu_Status_s* y);
void zx_prov_PMGetDescriptorResponse_PUSH_PMDescriptor(struct zx_prov_PMGetDescriptorResponse_s* x, struct zx_prov_PMDescriptor_s* y);


void zx_prov_PMGetDescriptorResponse_PUT_Status(struct zx_prov_PMGetDescriptorResponse_s* x, int n, struct zx_lu_Status_s* y);
void zx_prov_PMGetDescriptorResponse_PUT_PMDescriptor(struct zx_prov_PMGetDescriptorResponse_s* x, int n, struct zx_prov_PMDescriptor_s* y);

void zx_prov_PMGetDescriptorResponse_ADD_Status(struct zx_prov_PMGetDescriptorResponse_s* x, int n, struct zx_lu_Status_s* z);
void zx_prov_PMGetDescriptorResponse_ADD_PMDescriptor(struct zx_prov_PMGetDescriptorResponse_s* x, int n, struct zx_prov_PMDescriptor_s* z);

void zx_prov_PMGetDescriptorResponse_DEL_Status(struct zx_prov_PMGetDescriptorResponse_s* x, int n);
void zx_prov_PMGetDescriptorResponse_DEL_PMDescriptor(struct zx_prov_PMGetDescriptorResponse_s* x, int n);

void zx_prov_PMGetDescriptorResponse_REV_Status(struct zx_prov_PMGetDescriptorResponse_s* x);
void zx_prov_PMGetDescriptorResponse_REV_PMDescriptor(struct zx_prov_PMGetDescriptorResponse_s* x);

#endif
/* -------------------------- prov_PMGetStatus -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMGetStatus_EXT
#define zx_prov_PMGetStatus_EXT
#endif

struct zx_prov_PMGetStatus_s* zx_DEC_prov_PMGetStatus(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMGetStatus_s* zx_NEW_prov_PMGetStatus(struct zx_ctx* c);
void zx_FREE_prov_PMGetStatus(struct zx_ctx* c, struct zx_prov_PMGetStatus_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMGetStatus_s* zx_DEEP_CLONE_prov_PMGetStatus(struct zx_ctx* c, struct zx_prov_PMGetStatus_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMGetStatus(struct zx_ctx* c, struct zx_prov_PMGetStatus_s* x);
int zx_WALK_SO_prov_PMGetStatus(struct zx_ctx* c, struct zx_prov_PMGetStatus_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMGetStatus(struct zx_ctx* c, struct zx_prov_PMGetStatus_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMGetStatus(struct zx_ctx* c, struct zx_prov_PMGetStatus_s* x);
int zx_LEN_WO_prov_PMGetStatus(struct zx_ctx* c, struct zx_prov_PMGetStatus_s* x);
char* zx_ENC_SO_prov_PMGetStatus(struct zx_ctx* c, struct zx_prov_PMGetStatus_s* x, char* p);
char* zx_ENC_WO_prov_PMGetStatus(struct zx_ctx* c, struct zx_prov_PMGetStatus_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMGetStatus(struct zx_ctx* c, struct zx_prov_PMGetStatus_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMGetStatus(struct zx_ctx* c, struct zx_prov_PMGetStatus_s* x);

struct zx_prov_PMGetStatus_s {
  ZX_ELEM_EXT
  zx_prov_PMGetStatus_EXT
  struct zx_prov_PMID_s* PMID;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_prov_PMID_s* zx_prov_PMGetStatus_GET_PMID(struct zx_prov_PMGetStatus_s* x, int n);

int zx_prov_PMGetStatus_NUM_PMID(struct zx_prov_PMGetStatus_s* x);

struct zx_prov_PMID_s* zx_prov_PMGetStatus_POP_PMID(struct zx_prov_PMGetStatus_s* x);

void zx_prov_PMGetStatus_PUSH_PMID(struct zx_prov_PMGetStatus_s* x, struct zx_prov_PMID_s* y);


void zx_prov_PMGetStatus_PUT_PMID(struct zx_prov_PMGetStatus_s* x, int n, struct zx_prov_PMID_s* y);

void zx_prov_PMGetStatus_ADD_PMID(struct zx_prov_PMGetStatus_s* x, int n, struct zx_prov_PMID_s* z);

void zx_prov_PMGetStatus_DEL_PMID(struct zx_prov_PMGetStatus_s* x, int n);

void zx_prov_PMGetStatus_REV_PMID(struct zx_prov_PMGetStatus_s* x);

#endif
/* -------------------------- prov_PMGetStatusResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMGetStatusResponse_EXT
#define zx_prov_PMGetStatusResponse_EXT
#endif

struct zx_prov_PMGetStatusResponse_s* zx_DEC_prov_PMGetStatusResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMGetStatusResponse_s* zx_NEW_prov_PMGetStatusResponse(struct zx_ctx* c);
void zx_FREE_prov_PMGetStatusResponse(struct zx_ctx* c, struct zx_prov_PMGetStatusResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMGetStatusResponse_s* zx_DEEP_CLONE_prov_PMGetStatusResponse(struct zx_ctx* c, struct zx_prov_PMGetStatusResponse_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMGetStatusResponse(struct zx_ctx* c, struct zx_prov_PMGetStatusResponse_s* x);
int zx_WALK_SO_prov_PMGetStatusResponse(struct zx_ctx* c, struct zx_prov_PMGetStatusResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMGetStatusResponse(struct zx_ctx* c, struct zx_prov_PMGetStatusResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMGetStatusResponse(struct zx_ctx* c, struct zx_prov_PMGetStatusResponse_s* x);
int zx_LEN_WO_prov_PMGetStatusResponse(struct zx_ctx* c, struct zx_prov_PMGetStatusResponse_s* x);
char* zx_ENC_SO_prov_PMGetStatusResponse(struct zx_ctx* c, struct zx_prov_PMGetStatusResponse_s* x, char* p);
char* zx_ENC_WO_prov_PMGetStatusResponse(struct zx_ctx* c, struct zx_prov_PMGetStatusResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMGetStatusResponse(struct zx_ctx* c, struct zx_prov_PMGetStatusResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMGetStatusResponse(struct zx_ctx* c, struct zx_prov_PMGetStatusResponse_s* x);

struct zx_prov_PMGetStatusResponse_s {
  ZX_ELEM_EXT
  zx_prov_PMGetStatusResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
  struct zx_prov_PMStatus_s* PMStatus;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_prov_PMGetStatusResponse_GET_Status(struct zx_prov_PMGetStatusResponse_s* x, int n);
struct zx_prov_PMStatus_s* zx_prov_PMGetStatusResponse_GET_PMStatus(struct zx_prov_PMGetStatusResponse_s* x, int n);

int zx_prov_PMGetStatusResponse_NUM_Status(struct zx_prov_PMGetStatusResponse_s* x);
int zx_prov_PMGetStatusResponse_NUM_PMStatus(struct zx_prov_PMGetStatusResponse_s* x);

struct zx_lu_Status_s* zx_prov_PMGetStatusResponse_POP_Status(struct zx_prov_PMGetStatusResponse_s* x);
struct zx_prov_PMStatus_s* zx_prov_PMGetStatusResponse_POP_PMStatus(struct zx_prov_PMGetStatusResponse_s* x);

void zx_prov_PMGetStatusResponse_PUSH_Status(struct zx_prov_PMGetStatusResponse_s* x, struct zx_lu_Status_s* y);
void zx_prov_PMGetStatusResponse_PUSH_PMStatus(struct zx_prov_PMGetStatusResponse_s* x, struct zx_prov_PMStatus_s* y);


void zx_prov_PMGetStatusResponse_PUT_Status(struct zx_prov_PMGetStatusResponse_s* x, int n, struct zx_lu_Status_s* y);
void zx_prov_PMGetStatusResponse_PUT_PMStatus(struct zx_prov_PMGetStatusResponse_s* x, int n, struct zx_prov_PMStatus_s* y);

void zx_prov_PMGetStatusResponse_ADD_Status(struct zx_prov_PMGetStatusResponse_s* x, int n, struct zx_lu_Status_s* z);
void zx_prov_PMGetStatusResponse_ADD_PMStatus(struct zx_prov_PMGetStatusResponse_s* x, int n, struct zx_prov_PMStatus_s* z);

void zx_prov_PMGetStatusResponse_DEL_Status(struct zx_prov_PMGetStatusResponse_s* x, int n);
void zx_prov_PMGetStatusResponse_DEL_PMStatus(struct zx_prov_PMGetStatusResponse_s* x, int n);

void zx_prov_PMGetStatusResponse_REV_Status(struct zx_prov_PMGetStatusResponse_s* x);
void zx_prov_PMGetStatusResponse_REV_PMStatus(struct zx_prov_PMGetStatusResponse_s* x);

#endif
/* -------------------------- prov_PMID -------------------------- */
/* refby( zx_pmm_PMDeactivateItem_s zx_prov_PMActivateItem_s zx_prov_PMDescriptor_s zx_pmm_PMDeleteItem_s zx_prov_UpdateEPRItem_s zx_prov_PMDeleteItem_s zx_prov_PMStatus_s zx_pmm_PMActivateItem_s zx_pmm_PMGetStatus_s zx_prov_PMGetStatus_s zx_prov_PMDeactivateItem_s ) */
#ifndef zx_prov_PMID_EXT
#define zx_prov_PMID_EXT
#endif

struct zx_prov_PMID_s* zx_DEC_prov_PMID(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMID_s* zx_NEW_prov_PMID(struct zx_ctx* c);
void zx_FREE_prov_PMID(struct zx_ctx* c, struct zx_prov_PMID_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMID_s* zx_DEEP_CLONE_prov_PMID(struct zx_ctx* c, struct zx_prov_PMID_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMID(struct zx_ctx* c, struct zx_prov_PMID_s* x);
int zx_WALK_SO_prov_PMID(struct zx_ctx* c, struct zx_prov_PMID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMID(struct zx_ctx* c, struct zx_prov_PMID_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMID(struct zx_ctx* c, struct zx_prov_PMID_s* x);
int zx_LEN_WO_prov_PMID(struct zx_ctx* c, struct zx_prov_PMID_s* x);
char* zx_ENC_SO_prov_PMID(struct zx_ctx* c, struct zx_prov_PMID_s* x, char* p);
char* zx_ENC_WO_prov_PMID(struct zx_ctx* c, struct zx_prov_PMID_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMID(struct zx_ctx* c, struct zx_prov_PMID_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMID(struct zx_ctx* c, struct zx_prov_PMID_s* x);

struct zx_prov_PMID_s {
  ZX_ELEM_EXT
  zx_prov_PMID_EXT
  struct zx_str* issuer;	/* {1,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_prov_PMID_GET_issuer(struct zx_prov_PMID_s* x);





void zx_prov_PMID_PUT_issuer(struct zx_prov_PMID_s* x, struct zx_str* y);





#endif
/* -------------------------- prov_PMRegisterDescriptor -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMRegisterDescriptor_EXT
#define zx_prov_PMRegisterDescriptor_EXT
#endif

struct zx_prov_PMRegisterDescriptor_s* zx_DEC_prov_PMRegisterDescriptor(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMRegisterDescriptor_s* zx_NEW_prov_PMRegisterDescriptor(struct zx_ctx* c);
void zx_FREE_prov_PMRegisterDescriptor(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptor_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMRegisterDescriptor_s* zx_DEEP_CLONE_prov_PMRegisterDescriptor(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptor_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMRegisterDescriptor(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptor_s* x);
int zx_WALK_SO_prov_PMRegisterDescriptor(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMRegisterDescriptor(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptor_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMRegisterDescriptor(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptor_s* x);
int zx_LEN_WO_prov_PMRegisterDescriptor(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptor_s* x);
char* zx_ENC_SO_prov_PMRegisterDescriptor(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptor_s* x, char* p);
char* zx_ENC_WO_prov_PMRegisterDescriptor(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptor_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMRegisterDescriptor(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptor_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMRegisterDescriptor(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptor_s* x);

struct zx_prov_PMRegisterDescriptor_s {
  ZX_ELEM_EXT
  zx_prov_PMRegisterDescriptor_EXT
  struct zx_prov_PMRegisterDescriptorItem_s* PMRegisterDescriptorItem;	/* {1,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_prov_PMRegisterDescriptorItem_s* zx_prov_PMRegisterDescriptor_GET_PMRegisterDescriptorItem(struct zx_prov_PMRegisterDescriptor_s* x, int n);

int zx_prov_PMRegisterDescriptor_NUM_PMRegisterDescriptorItem(struct zx_prov_PMRegisterDescriptor_s* x);

struct zx_prov_PMRegisterDescriptorItem_s* zx_prov_PMRegisterDescriptor_POP_PMRegisterDescriptorItem(struct zx_prov_PMRegisterDescriptor_s* x);

void zx_prov_PMRegisterDescriptor_PUSH_PMRegisterDescriptorItem(struct zx_prov_PMRegisterDescriptor_s* x, struct zx_prov_PMRegisterDescriptorItem_s* y);


void zx_prov_PMRegisterDescriptor_PUT_PMRegisterDescriptorItem(struct zx_prov_PMRegisterDescriptor_s* x, int n, struct zx_prov_PMRegisterDescriptorItem_s* y);

void zx_prov_PMRegisterDescriptor_ADD_PMRegisterDescriptorItem(struct zx_prov_PMRegisterDescriptor_s* x, int n, struct zx_prov_PMRegisterDescriptorItem_s* z);

void zx_prov_PMRegisterDescriptor_DEL_PMRegisterDescriptorItem(struct zx_prov_PMRegisterDescriptor_s* x, int n);

void zx_prov_PMRegisterDescriptor_REV_PMRegisterDescriptorItem(struct zx_prov_PMRegisterDescriptor_s* x);

#endif
/* -------------------------- prov_PMRegisterDescriptorItem -------------------------- */
/* refby( zx_prov_PMRegisterDescriptor_s ) */
#ifndef zx_prov_PMRegisterDescriptorItem_EXT
#define zx_prov_PMRegisterDescriptorItem_EXT
#endif

struct zx_prov_PMRegisterDescriptorItem_s* zx_DEC_prov_PMRegisterDescriptorItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMRegisterDescriptorItem_s* zx_NEW_prov_PMRegisterDescriptorItem(struct zx_ctx* c);
void zx_FREE_prov_PMRegisterDescriptorItem(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMRegisterDescriptorItem_s* zx_DEEP_CLONE_prov_PMRegisterDescriptorItem(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorItem_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMRegisterDescriptorItem(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorItem_s* x);
int zx_WALK_SO_prov_PMRegisterDescriptorItem(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMRegisterDescriptorItem(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMRegisterDescriptorItem(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorItem_s* x);
int zx_LEN_WO_prov_PMRegisterDescriptorItem(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorItem_s* x);
char* zx_ENC_SO_prov_PMRegisterDescriptorItem(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorItem_s* x, char* p);
char* zx_ENC_WO_prov_PMRegisterDescriptorItem(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMRegisterDescriptorItem(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorItem_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMRegisterDescriptorItem(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorItem_s* x);

struct zx_prov_PMRegisterDescriptorItem_s {
  ZX_ELEM_EXT
  zx_prov_PMRegisterDescriptorItem_EXT
  struct zx_prov_PMDescriptor_s* PMDescriptor;	/* {1,1} nada */
  struct zx_str* itemID;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_prov_PMRegisterDescriptorItem_GET_itemID(struct zx_prov_PMRegisterDescriptorItem_s* x);

struct zx_prov_PMDescriptor_s* zx_prov_PMRegisterDescriptorItem_GET_PMDescriptor(struct zx_prov_PMRegisterDescriptorItem_s* x, int n);

int zx_prov_PMRegisterDescriptorItem_NUM_PMDescriptor(struct zx_prov_PMRegisterDescriptorItem_s* x);

struct zx_prov_PMDescriptor_s* zx_prov_PMRegisterDescriptorItem_POP_PMDescriptor(struct zx_prov_PMRegisterDescriptorItem_s* x);

void zx_prov_PMRegisterDescriptorItem_PUSH_PMDescriptor(struct zx_prov_PMRegisterDescriptorItem_s* x, struct zx_prov_PMDescriptor_s* y);

void zx_prov_PMRegisterDescriptorItem_PUT_itemID(struct zx_prov_PMRegisterDescriptorItem_s* x, struct zx_str* y);

void zx_prov_PMRegisterDescriptorItem_PUT_PMDescriptor(struct zx_prov_PMRegisterDescriptorItem_s* x, int n, struct zx_prov_PMDescriptor_s* y);

void zx_prov_PMRegisterDescriptorItem_ADD_PMDescriptor(struct zx_prov_PMRegisterDescriptorItem_s* x, int n, struct zx_prov_PMDescriptor_s* z);

void zx_prov_PMRegisterDescriptorItem_DEL_PMDescriptor(struct zx_prov_PMRegisterDescriptorItem_s* x, int n);

void zx_prov_PMRegisterDescriptorItem_REV_PMDescriptor(struct zx_prov_PMRegisterDescriptorItem_s* x);

#endif
/* -------------------------- prov_PMRegisterDescriptorResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMRegisterDescriptorResponse_EXT
#define zx_prov_PMRegisterDescriptorResponse_EXT
#endif

struct zx_prov_PMRegisterDescriptorResponse_s* zx_DEC_prov_PMRegisterDescriptorResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMRegisterDescriptorResponse_s* zx_NEW_prov_PMRegisterDescriptorResponse(struct zx_ctx* c);
void zx_FREE_prov_PMRegisterDescriptorResponse(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMRegisterDescriptorResponse_s* zx_DEEP_CLONE_prov_PMRegisterDescriptorResponse(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorResponse_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMRegisterDescriptorResponse(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorResponse_s* x);
int zx_WALK_SO_prov_PMRegisterDescriptorResponse(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMRegisterDescriptorResponse(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMRegisterDescriptorResponse(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorResponse_s* x);
int zx_LEN_WO_prov_PMRegisterDescriptorResponse(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorResponse_s* x);
char* zx_ENC_SO_prov_PMRegisterDescriptorResponse(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorResponse_s* x, char* p);
char* zx_ENC_WO_prov_PMRegisterDescriptorResponse(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMRegisterDescriptorResponse(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMRegisterDescriptorResponse(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorResponse_s* x);

struct zx_prov_PMRegisterDescriptorResponse_s {
  ZX_ELEM_EXT
  zx_prov_PMRegisterDescriptorResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
  struct zx_prov_PMRegisterDescriptorResponseItem_s* PMRegisterDescriptorResponseItem;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_prov_PMRegisterDescriptorResponse_GET_Status(struct zx_prov_PMRegisterDescriptorResponse_s* x, int n);
struct zx_prov_PMRegisterDescriptorResponseItem_s* zx_prov_PMRegisterDescriptorResponse_GET_PMRegisterDescriptorResponseItem(struct zx_prov_PMRegisterDescriptorResponse_s* x, int n);

int zx_prov_PMRegisterDescriptorResponse_NUM_Status(struct zx_prov_PMRegisterDescriptorResponse_s* x);
int zx_prov_PMRegisterDescriptorResponse_NUM_PMRegisterDescriptorResponseItem(struct zx_prov_PMRegisterDescriptorResponse_s* x);

struct zx_lu_Status_s* zx_prov_PMRegisterDescriptorResponse_POP_Status(struct zx_prov_PMRegisterDescriptorResponse_s* x);
struct zx_prov_PMRegisterDescriptorResponseItem_s* zx_prov_PMRegisterDescriptorResponse_POP_PMRegisterDescriptorResponseItem(struct zx_prov_PMRegisterDescriptorResponse_s* x);

void zx_prov_PMRegisterDescriptorResponse_PUSH_Status(struct zx_prov_PMRegisterDescriptorResponse_s* x, struct zx_lu_Status_s* y);
void zx_prov_PMRegisterDescriptorResponse_PUSH_PMRegisterDescriptorResponseItem(struct zx_prov_PMRegisterDescriptorResponse_s* x, struct zx_prov_PMRegisterDescriptorResponseItem_s* y);


void zx_prov_PMRegisterDescriptorResponse_PUT_Status(struct zx_prov_PMRegisterDescriptorResponse_s* x, int n, struct zx_lu_Status_s* y);
void zx_prov_PMRegisterDescriptorResponse_PUT_PMRegisterDescriptorResponseItem(struct zx_prov_PMRegisterDescriptorResponse_s* x, int n, struct zx_prov_PMRegisterDescriptorResponseItem_s* y);

void zx_prov_PMRegisterDescriptorResponse_ADD_Status(struct zx_prov_PMRegisterDescriptorResponse_s* x, int n, struct zx_lu_Status_s* z);
void zx_prov_PMRegisterDescriptorResponse_ADD_PMRegisterDescriptorResponseItem(struct zx_prov_PMRegisterDescriptorResponse_s* x, int n, struct zx_prov_PMRegisterDescriptorResponseItem_s* z);

void zx_prov_PMRegisterDescriptorResponse_DEL_Status(struct zx_prov_PMRegisterDescriptorResponse_s* x, int n);
void zx_prov_PMRegisterDescriptorResponse_DEL_PMRegisterDescriptorResponseItem(struct zx_prov_PMRegisterDescriptorResponse_s* x, int n);

void zx_prov_PMRegisterDescriptorResponse_REV_Status(struct zx_prov_PMRegisterDescriptorResponse_s* x);
void zx_prov_PMRegisterDescriptorResponse_REV_PMRegisterDescriptorResponseItem(struct zx_prov_PMRegisterDescriptorResponse_s* x);

#endif
/* -------------------------- prov_PMRegisterDescriptorResponseItem -------------------------- */
/* refby( zx_prov_PMRegisterDescriptorResponse_s ) */
#ifndef zx_prov_PMRegisterDescriptorResponseItem_EXT
#define zx_prov_PMRegisterDescriptorResponseItem_EXT
#endif

struct zx_prov_PMRegisterDescriptorResponseItem_s* zx_DEC_prov_PMRegisterDescriptorResponseItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMRegisterDescriptorResponseItem_s* zx_NEW_prov_PMRegisterDescriptorResponseItem(struct zx_ctx* c);
void zx_FREE_prov_PMRegisterDescriptorResponseItem(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorResponseItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMRegisterDescriptorResponseItem_s* zx_DEEP_CLONE_prov_PMRegisterDescriptorResponseItem(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorResponseItem_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMRegisterDescriptorResponseItem(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorResponseItem_s* x);
int zx_WALK_SO_prov_PMRegisterDescriptorResponseItem(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorResponseItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMRegisterDescriptorResponseItem(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorResponseItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMRegisterDescriptorResponseItem(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorResponseItem_s* x);
int zx_LEN_WO_prov_PMRegisterDescriptorResponseItem(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorResponseItem_s* x);
char* zx_ENC_SO_prov_PMRegisterDescriptorResponseItem(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorResponseItem_s* x, char* p);
char* zx_ENC_WO_prov_PMRegisterDescriptorResponseItem(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorResponseItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMRegisterDescriptorResponseItem(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorResponseItem_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMRegisterDescriptorResponseItem(struct zx_ctx* c, struct zx_prov_PMRegisterDescriptorResponseItem_s* x);

struct zx_prov_PMRegisterDescriptorResponseItem_s {
  ZX_ELEM_EXT
  zx_prov_PMRegisterDescriptorResponseItem_EXT
  struct zx_prov_ProvisioningHandle_s* ProvisioningHandle;	/* {1,1} nada */
  struct zx_str* ref;	/* {1,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_prov_PMRegisterDescriptorResponseItem_GET_ref(struct zx_prov_PMRegisterDescriptorResponseItem_s* x);

struct zx_prov_ProvisioningHandle_s* zx_prov_PMRegisterDescriptorResponseItem_GET_ProvisioningHandle(struct zx_prov_PMRegisterDescriptorResponseItem_s* x, int n);

int zx_prov_PMRegisterDescriptorResponseItem_NUM_ProvisioningHandle(struct zx_prov_PMRegisterDescriptorResponseItem_s* x);

struct zx_prov_ProvisioningHandle_s* zx_prov_PMRegisterDescriptorResponseItem_POP_ProvisioningHandle(struct zx_prov_PMRegisterDescriptorResponseItem_s* x);

void zx_prov_PMRegisterDescriptorResponseItem_PUSH_ProvisioningHandle(struct zx_prov_PMRegisterDescriptorResponseItem_s* x, struct zx_prov_ProvisioningHandle_s* y);

void zx_prov_PMRegisterDescriptorResponseItem_PUT_ref(struct zx_prov_PMRegisterDescriptorResponseItem_s* x, struct zx_str* y);

void zx_prov_PMRegisterDescriptorResponseItem_PUT_ProvisioningHandle(struct zx_prov_PMRegisterDescriptorResponseItem_s* x, int n, struct zx_prov_ProvisioningHandle_s* y);

void zx_prov_PMRegisterDescriptorResponseItem_ADD_ProvisioningHandle(struct zx_prov_PMRegisterDescriptorResponseItem_s* x, int n, struct zx_prov_ProvisioningHandle_s* z);

void zx_prov_PMRegisterDescriptorResponseItem_DEL_ProvisioningHandle(struct zx_prov_PMRegisterDescriptorResponseItem_s* x, int n);

void zx_prov_PMRegisterDescriptorResponseItem_REV_ProvisioningHandle(struct zx_prov_PMRegisterDescriptorResponseItem_s* x);

#endif
/* -------------------------- prov_PMSetStatus -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMSetStatus_EXT
#define zx_prov_PMSetStatus_EXT
#endif

struct zx_prov_PMSetStatus_s* zx_DEC_prov_PMSetStatus(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMSetStatus_s* zx_NEW_prov_PMSetStatus(struct zx_ctx* c);
void zx_FREE_prov_PMSetStatus(struct zx_ctx* c, struct zx_prov_PMSetStatus_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMSetStatus_s* zx_DEEP_CLONE_prov_PMSetStatus(struct zx_ctx* c, struct zx_prov_PMSetStatus_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMSetStatus(struct zx_ctx* c, struct zx_prov_PMSetStatus_s* x);
int zx_WALK_SO_prov_PMSetStatus(struct zx_ctx* c, struct zx_prov_PMSetStatus_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMSetStatus(struct zx_ctx* c, struct zx_prov_PMSetStatus_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMSetStatus(struct zx_ctx* c, struct zx_prov_PMSetStatus_s* x);
int zx_LEN_WO_prov_PMSetStatus(struct zx_ctx* c, struct zx_prov_PMSetStatus_s* x);
char* zx_ENC_SO_prov_PMSetStatus(struct zx_ctx* c, struct zx_prov_PMSetStatus_s* x, char* p);
char* zx_ENC_WO_prov_PMSetStatus(struct zx_ctx* c, struct zx_prov_PMSetStatus_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMSetStatus(struct zx_ctx* c, struct zx_prov_PMSetStatus_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMSetStatus(struct zx_ctx* c, struct zx_prov_PMSetStatus_s* x);

struct zx_prov_PMSetStatus_s {
  ZX_ELEM_EXT
  zx_prov_PMSetStatus_EXT
  struct zx_prov_PMStatus_s* PMStatus;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_prov_PMStatus_s* zx_prov_PMSetStatus_GET_PMStatus(struct zx_prov_PMSetStatus_s* x, int n);

int zx_prov_PMSetStatus_NUM_PMStatus(struct zx_prov_PMSetStatus_s* x);

struct zx_prov_PMStatus_s* zx_prov_PMSetStatus_POP_PMStatus(struct zx_prov_PMSetStatus_s* x);

void zx_prov_PMSetStatus_PUSH_PMStatus(struct zx_prov_PMSetStatus_s* x, struct zx_prov_PMStatus_s* y);


void zx_prov_PMSetStatus_PUT_PMStatus(struct zx_prov_PMSetStatus_s* x, int n, struct zx_prov_PMStatus_s* y);

void zx_prov_PMSetStatus_ADD_PMStatus(struct zx_prov_PMSetStatus_s* x, int n, struct zx_prov_PMStatus_s* z);

void zx_prov_PMSetStatus_DEL_PMStatus(struct zx_prov_PMSetStatus_s* x, int n);

void zx_prov_PMSetStatus_REV_PMStatus(struct zx_prov_PMSetStatus_s* x);

#endif
/* -------------------------- prov_PMSetStatusResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMSetStatusResponse_EXT
#define zx_prov_PMSetStatusResponse_EXT
#endif

struct zx_prov_PMSetStatusResponse_s* zx_DEC_prov_PMSetStatusResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMSetStatusResponse_s* zx_NEW_prov_PMSetStatusResponse(struct zx_ctx* c);
void zx_FREE_prov_PMSetStatusResponse(struct zx_ctx* c, struct zx_prov_PMSetStatusResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMSetStatusResponse_s* zx_DEEP_CLONE_prov_PMSetStatusResponse(struct zx_ctx* c, struct zx_prov_PMSetStatusResponse_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMSetStatusResponse(struct zx_ctx* c, struct zx_prov_PMSetStatusResponse_s* x);
int zx_WALK_SO_prov_PMSetStatusResponse(struct zx_ctx* c, struct zx_prov_PMSetStatusResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMSetStatusResponse(struct zx_ctx* c, struct zx_prov_PMSetStatusResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMSetStatusResponse(struct zx_ctx* c, struct zx_prov_PMSetStatusResponse_s* x);
int zx_LEN_WO_prov_PMSetStatusResponse(struct zx_ctx* c, struct zx_prov_PMSetStatusResponse_s* x);
char* zx_ENC_SO_prov_PMSetStatusResponse(struct zx_ctx* c, struct zx_prov_PMSetStatusResponse_s* x, char* p);
char* zx_ENC_WO_prov_PMSetStatusResponse(struct zx_ctx* c, struct zx_prov_PMSetStatusResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMSetStatusResponse(struct zx_ctx* c, struct zx_prov_PMSetStatusResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMSetStatusResponse(struct zx_ctx* c, struct zx_prov_PMSetStatusResponse_s* x);

struct zx_prov_PMSetStatusResponse_s {
  ZX_ELEM_EXT
  zx_prov_PMSetStatusResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_prov_PMSetStatusResponse_GET_Status(struct zx_prov_PMSetStatusResponse_s* x, int n);

int zx_prov_PMSetStatusResponse_NUM_Status(struct zx_prov_PMSetStatusResponse_s* x);

struct zx_lu_Status_s* zx_prov_PMSetStatusResponse_POP_Status(struct zx_prov_PMSetStatusResponse_s* x);

void zx_prov_PMSetStatusResponse_PUSH_Status(struct zx_prov_PMSetStatusResponse_s* x, struct zx_lu_Status_s* y);


void zx_prov_PMSetStatusResponse_PUT_Status(struct zx_prov_PMSetStatusResponse_s* x, int n, struct zx_lu_Status_s* y);

void zx_prov_PMSetStatusResponse_ADD_Status(struct zx_prov_PMSetStatusResponse_s* x, int n, struct zx_lu_Status_s* z);

void zx_prov_PMSetStatusResponse_DEL_Status(struct zx_prov_PMSetStatusResponse_s* x, int n);

void zx_prov_PMSetStatusResponse_REV_Status(struct zx_prov_PMSetStatusResponse_s* x);

#endif
/* -------------------------- prov_PMStatus -------------------------- */
/* refby( zx_prov_PMGetStatusResponse_s zx_prov_PMSetStatus_s zx_pmm_PMSetStatus_s zx_pmm_PMGetStatusResponse_s ) */
#ifndef zx_prov_PMStatus_EXT
#define zx_prov_PMStatus_EXT
#endif

struct zx_prov_PMStatus_s* zx_DEC_prov_PMStatus(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMStatus_s* zx_NEW_prov_PMStatus(struct zx_ctx* c);
void zx_FREE_prov_PMStatus(struct zx_ctx* c, struct zx_prov_PMStatus_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMStatus_s* zx_DEEP_CLONE_prov_PMStatus(struct zx_ctx* c, struct zx_prov_PMStatus_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMStatus(struct zx_ctx* c, struct zx_prov_PMStatus_s* x);
int zx_WALK_SO_prov_PMStatus(struct zx_ctx* c, struct zx_prov_PMStatus_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMStatus(struct zx_ctx* c, struct zx_prov_PMStatus_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMStatus(struct zx_ctx* c, struct zx_prov_PMStatus_s* x);
int zx_LEN_WO_prov_PMStatus(struct zx_ctx* c, struct zx_prov_PMStatus_s* x);
char* zx_ENC_SO_prov_PMStatus(struct zx_ctx* c, struct zx_prov_PMStatus_s* x, char* p);
char* zx_ENC_WO_prov_PMStatus(struct zx_ctx* c, struct zx_prov_PMStatus_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMStatus(struct zx_ctx* c, struct zx_prov_PMStatus_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMStatus(struct zx_ctx* c, struct zx_prov_PMStatus_s* x);

struct zx_prov_PMStatus_s {
  ZX_ELEM_EXT
  zx_prov_PMStatus_EXT
  struct zx_prov_PMID_s* PMID;	/* {1,1} nada */
  struct zx_prov_State_s* State;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_prov_PMID_s* zx_prov_PMStatus_GET_PMID(struct zx_prov_PMStatus_s* x, int n);
struct zx_prov_State_s* zx_prov_PMStatus_GET_State(struct zx_prov_PMStatus_s* x, int n);

int zx_prov_PMStatus_NUM_PMID(struct zx_prov_PMStatus_s* x);
int zx_prov_PMStatus_NUM_State(struct zx_prov_PMStatus_s* x);

struct zx_prov_PMID_s* zx_prov_PMStatus_POP_PMID(struct zx_prov_PMStatus_s* x);
struct zx_prov_State_s* zx_prov_PMStatus_POP_State(struct zx_prov_PMStatus_s* x);

void zx_prov_PMStatus_PUSH_PMID(struct zx_prov_PMStatus_s* x, struct zx_prov_PMID_s* y);
void zx_prov_PMStatus_PUSH_State(struct zx_prov_PMStatus_s* x, struct zx_prov_State_s* y);


void zx_prov_PMStatus_PUT_PMID(struct zx_prov_PMStatus_s* x, int n, struct zx_prov_PMID_s* y);
void zx_prov_PMStatus_PUT_State(struct zx_prov_PMStatus_s* x, int n, struct zx_prov_State_s* y);

void zx_prov_PMStatus_ADD_PMID(struct zx_prov_PMStatus_s* x, int n, struct zx_prov_PMID_s* z);
void zx_prov_PMStatus_ADD_State(struct zx_prov_PMStatus_s* x, int n, struct zx_prov_State_s* z);

void zx_prov_PMStatus_DEL_PMID(struct zx_prov_PMStatus_s* x, int n);
void zx_prov_PMStatus_DEL_State(struct zx_prov_PMStatus_s* x, int n);

void zx_prov_PMStatus_REV_PMID(struct zx_prov_PMStatus_s* x);
void zx_prov_PMStatus_REV_State(struct zx_prov_PMStatus_s* x);

#endif
/* -------------------------- prov_PMUpdate -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMUpdate_EXT
#define zx_prov_PMUpdate_EXT
#endif

struct zx_prov_PMUpdate_s* zx_DEC_prov_PMUpdate(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMUpdate_s* zx_NEW_prov_PMUpdate(struct zx_ctx* c);
void zx_FREE_prov_PMUpdate(struct zx_ctx* c, struct zx_prov_PMUpdate_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMUpdate_s* zx_DEEP_CLONE_prov_PMUpdate(struct zx_ctx* c, struct zx_prov_PMUpdate_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMUpdate(struct zx_ctx* c, struct zx_prov_PMUpdate_s* x);
int zx_WALK_SO_prov_PMUpdate(struct zx_ctx* c, struct zx_prov_PMUpdate_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMUpdate(struct zx_ctx* c, struct zx_prov_PMUpdate_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMUpdate(struct zx_ctx* c, struct zx_prov_PMUpdate_s* x);
int zx_LEN_WO_prov_PMUpdate(struct zx_ctx* c, struct zx_prov_PMUpdate_s* x);
char* zx_ENC_SO_prov_PMUpdate(struct zx_ctx* c, struct zx_prov_PMUpdate_s* x, char* p);
char* zx_ENC_WO_prov_PMUpdate(struct zx_ctx* c, struct zx_prov_PMUpdate_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMUpdate(struct zx_ctx* c, struct zx_prov_PMUpdate_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMUpdate(struct zx_ctx* c, struct zx_prov_PMUpdate_s* x);

struct zx_prov_PMUpdate_s {
  ZX_ELEM_EXT
  zx_prov_PMUpdate_EXT
  struct zx_prov_PMUpdateItem_s* PMUpdateItem;	/* {1,-1} nada */
  struct zx_elem_s* NotifyTo;	/* {0,1} a:EndpointReference */
};

#ifdef ZX_ENA_GETPUT

struct zx_prov_PMUpdateItem_s* zx_prov_PMUpdate_GET_PMUpdateItem(struct zx_prov_PMUpdate_s* x, int n);
struct zx_elem_s* zx_prov_PMUpdate_GET_NotifyTo(struct zx_prov_PMUpdate_s* x, int n);

int zx_prov_PMUpdate_NUM_PMUpdateItem(struct zx_prov_PMUpdate_s* x);
int zx_prov_PMUpdate_NUM_NotifyTo(struct zx_prov_PMUpdate_s* x);

struct zx_prov_PMUpdateItem_s* zx_prov_PMUpdate_POP_PMUpdateItem(struct zx_prov_PMUpdate_s* x);
struct zx_elem_s* zx_prov_PMUpdate_POP_NotifyTo(struct zx_prov_PMUpdate_s* x);

void zx_prov_PMUpdate_PUSH_PMUpdateItem(struct zx_prov_PMUpdate_s* x, struct zx_prov_PMUpdateItem_s* y);
void zx_prov_PMUpdate_PUSH_NotifyTo(struct zx_prov_PMUpdate_s* x, struct zx_elem_s* y);


void zx_prov_PMUpdate_PUT_PMUpdateItem(struct zx_prov_PMUpdate_s* x, int n, struct zx_prov_PMUpdateItem_s* y);
void zx_prov_PMUpdate_PUT_NotifyTo(struct zx_prov_PMUpdate_s* x, int n, struct zx_elem_s* y);

void zx_prov_PMUpdate_ADD_PMUpdateItem(struct zx_prov_PMUpdate_s* x, int n, struct zx_prov_PMUpdateItem_s* z);
void zx_prov_PMUpdate_ADD_NotifyTo(struct zx_prov_PMUpdate_s* x, int n, struct zx_elem_s* z);

void zx_prov_PMUpdate_DEL_PMUpdateItem(struct zx_prov_PMUpdate_s* x, int n);
void zx_prov_PMUpdate_DEL_NotifyTo(struct zx_prov_PMUpdate_s* x, int n);

void zx_prov_PMUpdate_REV_PMUpdateItem(struct zx_prov_PMUpdate_s* x);
void zx_prov_PMUpdate_REV_NotifyTo(struct zx_prov_PMUpdate_s* x);

#endif
/* -------------------------- prov_PMUpdateItem -------------------------- */
/* refby( zx_prov_PMUpdate_s ) */
#ifndef zx_prov_PMUpdateItem_EXT
#define zx_prov_PMUpdateItem_EXT
#endif

struct zx_prov_PMUpdateItem_s* zx_DEC_prov_PMUpdateItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMUpdateItem_s* zx_NEW_prov_PMUpdateItem(struct zx_ctx* c);
void zx_FREE_prov_PMUpdateItem(struct zx_ctx* c, struct zx_prov_PMUpdateItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMUpdateItem_s* zx_DEEP_CLONE_prov_PMUpdateItem(struct zx_ctx* c, struct zx_prov_PMUpdateItem_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMUpdateItem(struct zx_ctx* c, struct zx_prov_PMUpdateItem_s* x);
int zx_WALK_SO_prov_PMUpdateItem(struct zx_ctx* c, struct zx_prov_PMUpdateItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMUpdateItem(struct zx_ctx* c, struct zx_prov_PMUpdateItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMUpdateItem(struct zx_ctx* c, struct zx_prov_PMUpdateItem_s* x);
int zx_LEN_WO_prov_PMUpdateItem(struct zx_ctx* c, struct zx_prov_PMUpdateItem_s* x);
char* zx_ENC_SO_prov_PMUpdateItem(struct zx_ctx* c, struct zx_prov_PMUpdateItem_s* x, char* p);
char* zx_ENC_WO_prov_PMUpdateItem(struct zx_ctx* c, struct zx_prov_PMUpdateItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMUpdateItem(struct zx_ctx* c, struct zx_prov_PMUpdateItem_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMUpdateItem(struct zx_ctx* c, struct zx_prov_PMUpdateItem_s* x);

struct zx_prov_PMUpdateItem_s {
  ZX_ELEM_EXT
  zx_prov_PMUpdateItem_EXT
  struct zx_prov_PMDescriptor_s* PMDescriptor;	/* {1,1} nada */
  struct zx_str* at;	/* {0,1} attribute xs:dateTime */
  struct zx_str* itemID;	/* {1,1} attribute xs:string */
  struct zx_str* type;	/* {1,1} attribute hrxml:ExtendedAssociationTypeType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_prov_PMUpdateItem_GET_at(struct zx_prov_PMUpdateItem_s* x);
struct zx_str* zx_prov_PMUpdateItem_GET_itemID(struct zx_prov_PMUpdateItem_s* x);
struct zx_str* zx_prov_PMUpdateItem_GET_type(struct zx_prov_PMUpdateItem_s* x);

struct zx_prov_PMDescriptor_s* zx_prov_PMUpdateItem_GET_PMDescriptor(struct zx_prov_PMUpdateItem_s* x, int n);

int zx_prov_PMUpdateItem_NUM_PMDescriptor(struct zx_prov_PMUpdateItem_s* x);

struct zx_prov_PMDescriptor_s* zx_prov_PMUpdateItem_POP_PMDescriptor(struct zx_prov_PMUpdateItem_s* x);

void zx_prov_PMUpdateItem_PUSH_PMDescriptor(struct zx_prov_PMUpdateItem_s* x, struct zx_prov_PMDescriptor_s* y);

void zx_prov_PMUpdateItem_PUT_at(struct zx_prov_PMUpdateItem_s* x, struct zx_str* y);
void zx_prov_PMUpdateItem_PUT_itemID(struct zx_prov_PMUpdateItem_s* x, struct zx_str* y);
void zx_prov_PMUpdateItem_PUT_type(struct zx_prov_PMUpdateItem_s* x, struct zx_str* y);

void zx_prov_PMUpdateItem_PUT_PMDescriptor(struct zx_prov_PMUpdateItem_s* x, int n, struct zx_prov_PMDescriptor_s* y);

void zx_prov_PMUpdateItem_ADD_PMDescriptor(struct zx_prov_PMUpdateItem_s* x, int n, struct zx_prov_PMDescriptor_s* z);

void zx_prov_PMUpdateItem_DEL_PMDescriptor(struct zx_prov_PMUpdateItem_s* x, int n);

void zx_prov_PMUpdateItem_REV_PMDescriptor(struct zx_prov_PMUpdateItem_s* x);

#endif
/* -------------------------- prov_PMUpdateResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PMUpdateResponse_EXT
#define zx_prov_PMUpdateResponse_EXT
#endif

struct zx_prov_PMUpdateResponse_s* zx_DEC_prov_PMUpdateResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PMUpdateResponse_s* zx_NEW_prov_PMUpdateResponse(struct zx_ctx* c);
void zx_FREE_prov_PMUpdateResponse(struct zx_ctx* c, struct zx_prov_PMUpdateResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PMUpdateResponse_s* zx_DEEP_CLONE_prov_PMUpdateResponse(struct zx_ctx* c, struct zx_prov_PMUpdateResponse_s* x, int dup_strs);
void zx_DUP_STRS_prov_PMUpdateResponse(struct zx_ctx* c, struct zx_prov_PMUpdateResponse_s* x);
int zx_WALK_SO_prov_PMUpdateResponse(struct zx_ctx* c, struct zx_prov_PMUpdateResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PMUpdateResponse(struct zx_ctx* c, struct zx_prov_PMUpdateResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PMUpdateResponse(struct zx_ctx* c, struct zx_prov_PMUpdateResponse_s* x);
int zx_LEN_WO_prov_PMUpdateResponse(struct zx_ctx* c, struct zx_prov_PMUpdateResponse_s* x);
char* zx_ENC_SO_prov_PMUpdateResponse(struct zx_ctx* c, struct zx_prov_PMUpdateResponse_s* x, char* p);
char* zx_ENC_WO_prov_PMUpdateResponse(struct zx_ctx* c, struct zx_prov_PMUpdateResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PMUpdateResponse(struct zx_ctx* c, struct zx_prov_PMUpdateResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PMUpdateResponse(struct zx_ctx* c, struct zx_prov_PMUpdateResponse_s* x);

struct zx_prov_PMUpdateResponse_s {
  ZX_ELEM_EXT
  zx_prov_PMUpdateResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_prov_PMUpdateResponse_GET_Status(struct zx_prov_PMUpdateResponse_s* x, int n);

int zx_prov_PMUpdateResponse_NUM_Status(struct zx_prov_PMUpdateResponse_s* x);

struct zx_lu_Status_s* zx_prov_PMUpdateResponse_POP_Status(struct zx_prov_PMUpdateResponse_s* x);

void zx_prov_PMUpdateResponse_PUSH_Status(struct zx_prov_PMUpdateResponse_s* x, struct zx_lu_Status_s* y);


void zx_prov_PMUpdateResponse_PUT_Status(struct zx_prov_PMUpdateResponse_s* x, int n, struct zx_lu_Status_s* y);

void zx_prov_PMUpdateResponse_ADD_Status(struct zx_prov_PMUpdateResponse_s* x, int n, struct zx_lu_Status_s* z);

void zx_prov_PMUpdateResponse_DEL_Status(struct zx_prov_PMUpdateResponse_s* x, int n);

void zx_prov_PMUpdateResponse_REV_Status(struct zx_prov_PMUpdateResponse_s* x);

#endif
/* -------------------------- prov_Poll -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_Poll_EXT
#define zx_prov_Poll_EXT
#endif

struct zx_prov_Poll_s* zx_DEC_prov_Poll(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_Poll_s* zx_NEW_prov_Poll(struct zx_ctx* c);
void zx_FREE_prov_Poll(struct zx_ctx* c, struct zx_prov_Poll_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_Poll_s* zx_DEEP_CLONE_prov_Poll(struct zx_ctx* c, struct zx_prov_Poll_s* x, int dup_strs);
void zx_DUP_STRS_prov_Poll(struct zx_ctx* c, struct zx_prov_Poll_s* x);
int zx_WALK_SO_prov_Poll(struct zx_ctx* c, struct zx_prov_Poll_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_Poll(struct zx_ctx* c, struct zx_prov_Poll_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_Poll(struct zx_ctx* c, struct zx_prov_Poll_s* x);
int zx_LEN_WO_prov_Poll(struct zx_ctx* c, struct zx_prov_Poll_s* x);
char* zx_ENC_SO_prov_Poll(struct zx_ctx* c, struct zx_prov_Poll_s* x, char* p);
char* zx_ENC_WO_prov_Poll(struct zx_ctx* c, struct zx_prov_Poll_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_Poll(struct zx_ctx* c, struct zx_prov_Poll_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_Poll(struct zx_ctx* c, struct zx_prov_Poll_s* x);

struct zx_prov_Poll_s {
  ZX_ELEM_EXT
  zx_prov_Poll_EXT
  struct zx_a_Action_s* Action;	/* {0,-1} nada */
  struct zx_dp_Response_s* Response;	/* {0,-1} nada */
  struct zx_str* wait;	/* {1,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_prov_Poll_GET_wait(struct zx_prov_Poll_s* x);

struct zx_a_Action_s* zx_prov_Poll_GET_Action(struct zx_prov_Poll_s* x, int n);
struct zx_dp_Response_s* zx_prov_Poll_GET_Response(struct zx_prov_Poll_s* x, int n);

int zx_prov_Poll_NUM_Action(struct zx_prov_Poll_s* x);
int zx_prov_Poll_NUM_Response(struct zx_prov_Poll_s* x);

struct zx_a_Action_s* zx_prov_Poll_POP_Action(struct zx_prov_Poll_s* x);
struct zx_dp_Response_s* zx_prov_Poll_POP_Response(struct zx_prov_Poll_s* x);

void zx_prov_Poll_PUSH_Action(struct zx_prov_Poll_s* x, struct zx_a_Action_s* y);
void zx_prov_Poll_PUSH_Response(struct zx_prov_Poll_s* x, struct zx_dp_Response_s* y);

void zx_prov_Poll_PUT_wait(struct zx_prov_Poll_s* x, struct zx_str* y);

void zx_prov_Poll_PUT_Action(struct zx_prov_Poll_s* x, int n, struct zx_a_Action_s* y);
void zx_prov_Poll_PUT_Response(struct zx_prov_Poll_s* x, int n, struct zx_dp_Response_s* y);

void zx_prov_Poll_ADD_Action(struct zx_prov_Poll_s* x, int n, struct zx_a_Action_s* z);
void zx_prov_Poll_ADD_Response(struct zx_prov_Poll_s* x, int n, struct zx_dp_Response_s* z);

void zx_prov_Poll_DEL_Action(struct zx_prov_Poll_s* x, int n);
void zx_prov_Poll_DEL_Response(struct zx_prov_Poll_s* x, int n);

void zx_prov_Poll_REV_Action(struct zx_prov_Poll_s* x);
void zx_prov_Poll_REV_Response(struct zx_prov_Poll_s* x);

#endif
/* -------------------------- prov_PollResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_PollResponse_EXT
#define zx_prov_PollResponse_EXT
#endif

struct zx_prov_PollResponse_s* zx_DEC_prov_PollResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_PollResponse_s* zx_NEW_prov_PollResponse(struct zx_ctx* c);
void zx_FREE_prov_PollResponse(struct zx_ctx* c, struct zx_prov_PollResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_PollResponse_s* zx_DEEP_CLONE_prov_PollResponse(struct zx_ctx* c, struct zx_prov_PollResponse_s* x, int dup_strs);
void zx_DUP_STRS_prov_PollResponse(struct zx_ctx* c, struct zx_prov_PollResponse_s* x);
int zx_WALK_SO_prov_PollResponse(struct zx_ctx* c, struct zx_prov_PollResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_PollResponse(struct zx_ctx* c, struct zx_prov_PollResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_PollResponse(struct zx_ctx* c, struct zx_prov_PollResponse_s* x);
int zx_LEN_WO_prov_PollResponse(struct zx_ctx* c, struct zx_prov_PollResponse_s* x);
char* zx_ENC_SO_prov_PollResponse(struct zx_ctx* c, struct zx_prov_PollResponse_s* x, char* p);
char* zx_ENC_WO_prov_PollResponse(struct zx_ctx* c, struct zx_prov_PollResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_PollResponse(struct zx_ctx* c, struct zx_prov_PollResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_PollResponse(struct zx_ctx* c, struct zx_prov_PollResponse_s* x);

struct zx_prov_PollResponse_s {
  ZX_ELEM_EXT
  zx_prov_PollResponse_EXT
  struct zx_dp_Request_s* Request;	/* {0,-1} nada */
  struct zx_str* nextPoll;	/* {0,1} attribute xs:integer */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_prov_PollResponse_GET_nextPoll(struct zx_prov_PollResponse_s* x);

struct zx_dp_Request_s* zx_prov_PollResponse_GET_Request(struct zx_prov_PollResponse_s* x, int n);

int zx_prov_PollResponse_NUM_Request(struct zx_prov_PollResponse_s* x);

struct zx_dp_Request_s* zx_prov_PollResponse_POP_Request(struct zx_prov_PollResponse_s* x);

void zx_prov_PollResponse_PUSH_Request(struct zx_prov_PollResponse_s* x, struct zx_dp_Request_s* y);

void zx_prov_PollResponse_PUT_nextPoll(struct zx_prov_PollResponse_s* x, struct zx_str* y);

void zx_prov_PollResponse_PUT_Request(struct zx_prov_PollResponse_s* x, int n, struct zx_dp_Request_s* y);

void zx_prov_PollResponse_ADD_Request(struct zx_prov_PollResponse_s* x, int n, struct zx_dp_Request_s* z);

void zx_prov_PollResponse_DEL_Request(struct zx_prov_PollResponse_s* x, int n);

void zx_prov_PollResponse_REV_Request(struct zx_prov_PollResponse_s* x);

#endif
/* -------------------------- prov_ProvisioningHandle -------------------------- */
/* refby( zx_pmm_Provision_s zx_prov_PMRegisterDescriptorResponseItem_s ) */
#ifndef zx_prov_ProvisioningHandle_EXT
#define zx_prov_ProvisioningHandle_EXT
#endif

struct zx_prov_ProvisioningHandle_s* zx_DEC_prov_ProvisioningHandle(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_ProvisioningHandle_s* zx_NEW_prov_ProvisioningHandle(struct zx_ctx* c);
void zx_FREE_prov_ProvisioningHandle(struct zx_ctx* c, struct zx_prov_ProvisioningHandle_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_ProvisioningHandle_s* zx_DEEP_CLONE_prov_ProvisioningHandle(struct zx_ctx* c, struct zx_prov_ProvisioningHandle_s* x, int dup_strs);
void zx_DUP_STRS_prov_ProvisioningHandle(struct zx_ctx* c, struct zx_prov_ProvisioningHandle_s* x);
int zx_WALK_SO_prov_ProvisioningHandle(struct zx_ctx* c, struct zx_prov_ProvisioningHandle_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_ProvisioningHandle(struct zx_ctx* c, struct zx_prov_ProvisioningHandle_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_ProvisioningHandle(struct zx_ctx* c, struct zx_prov_ProvisioningHandle_s* x);
int zx_LEN_WO_prov_ProvisioningHandle(struct zx_ctx* c, struct zx_prov_ProvisioningHandle_s* x);
char* zx_ENC_SO_prov_ProvisioningHandle(struct zx_ctx* c, struct zx_prov_ProvisioningHandle_s* x, char* p);
char* zx_ENC_WO_prov_ProvisioningHandle(struct zx_ctx* c, struct zx_prov_ProvisioningHandle_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_ProvisioningHandle(struct zx_ctx* c, struct zx_prov_ProvisioningHandle_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_ProvisioningHandle(struct zx_ctx* c, struct zx_prov_ProvisioningHandle_s* x);

struct zx_prov_ProvisioningHandle_s {
  ZX_ELEM_EXT
  zx_prov_ProvisioningHandle_EXT
  struct zx_elem_s* PMDArtifact;	/* {1,1} xs:string */
  struct zx_prov_ProvisioningServiceEPR_s* ProvisioningServiceEPR;	/* {0,1} nada */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_str* expires;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_prov_ProvisioningHandle_GET_expires(struct zx_prov_ProvisioningHandle_s* x);

struct zx_elem_s* zx_prov_ProvisioningHandle_GET_PMDArtifact(struct zx_prov_ProvisioningHandle_s* x, int n);
struct zx_prov_ProvisioningServiceEPR_s* zx_prov_ProvisioningHandle_GET_ProvisioningServiceEPR(struct zx_prov_ProvisioningHandle_s* x, int n);
struct zx_ds_Signature_s* zx_prov_ProvisioningHandle_GET_Signature(struct zx_prov_ProvisioningHandle_s* x, int n);

int zx_prov_ProvisioningHandle_NUM_PMDArtifact(struct zx_prov_ProvisioningHandle_s* x);
int zx_prov_ProvisioningHandle_NUM_ProvisioningServiceEPR(struct zx_prov_ProvisioningHandle_s* x);
int zx_prov_ProvisioningHandle_NUM_Signature(struct zx_prov_ProvisioningHandle_s* x);

struct zx_elem_s* zx_prov_ProvisioningHandle_POP_PMDArtifact(struct zx_prov_ProvisioningHandle_s* x);
struct zx_prov_ProvisioningServiceEPR_s* zx_prov_ProvisioningHandle_POP_ProvisioningServiceEPR(struct zx_prov_ProvisioningHandle_s* x);
struct zx_ds_Signature_s* zx_prov_ProvisioningHandle_POP_Signature(struct zx_prov_ProvisioningHandle_s* x);

void zx_prov_ProvisioningHandle_PUSH_PMDArtifact(struct zx_prov_ProvisioningHandle_s* x, struct zx_elem_s* y);
void zx_prov_ProvisioningHandle_PUSH_ProvisioningServiceEPR(struct zx_prov_ProvisioningHandle_s* x, struct zx_prov_ProvisioningServiceEPR_s* y);
void zx_prov_ProvisioningHandle_PUSH_Signature(struct zx_prov_ProvisioningHandle_s* x, struct zx_ds_Signature_s* y);

void zx_prov_ProvisioningHandle_PUT_expires(struct zx_prov_ProvisioningHandle_s* x, struct zx_str* y);

void zx_prov_ProvisioningHandle_PUT_PMDArtifact(struct zx_prov_ProvisioningHandle_s* x, int n, struct zx_elem_s* y);
void zx_prov_ProvisioningHandle_PUT_ProvisioningServiceEPR(struct zx_prov_ProvisioningHandle_s* x, int n, struct zx_prov_ProvisioningServiceEPR_s* y);
void zx_prov_ProvisioningHandle_PUT_Signature(struct zx_prov_ProvisioningHandle_s* x, int n, struct zx_ds_Signature_s* y);

void zx_prov_ProvisioningHandle_ADD_PMDArtifact(struct zx_prov_ProvisioningHandle_s* x, int n, struct zx_elem_s* z);
void zx_prov_ProvisioningHandle_ADD_ProvisioningServiceEPR(struct zx_prov_ProvisioningHandle_s* x, int n, struct zx_prov_ProvisioningServiceEPR_s* z);
void zx_prov_ProvisioningHandle_ADD_Signature(struct zx_prov_ProvisioningHandle_s* x, int n, struct zx_ds_Signature_s* z);

void zx_prov_ProvisioningHandle_DEL_PMDArtifact(struct zx_prov_ProvisioningHandle_s* x, int n);
void zx_prov_ProvisioningHandle_DEL_ProvisioningServiceEPR(struct zx_prov_ProvisioningHandle_s* x, int n);
void zx_prov_ProvisioningHandle_DEL_Signature(struct zx_prov_ProvisioningHandle_s* x, int n);

void zx_prov_ProvisioningHandle_REV_PMDArtifact(struct zx_prov_ProvisioningHandle_s* x);
void zx_prov_ProvisioningHandle_REV_ProvisioningServiceEPR(struct zx_prov_ProvisioningHandle_s* x);
void zx_prov_ProvisioningHandle_REV_Signature(struct zx_prov_ProvisioningHandle_s* x);

#endif
/* -------------------------- prov_ProvisioningServiceEPR -------------------------- */
/* refby( zx_prov_ProvisioningHandle_s ) */
#ifndef zx_prov_ProvisioningServiceEPR_EXT
#define zx_prov_ProvisioningServiceEPR_EXT
#endif

struct zx_prov_ProvisioningServiceEPR_s* zx_DEC_prov_ProvisioningServiceEPR(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_ProvisioningServiceEPR_s* zx_NEW_prov_ProvisioningServiceEPR(struct zx_ctx* c);
void zx_FREE_prov_ProvisioningServiceEPR(struct zx_ctx* c, struct zx_prov_ProvisioningServiceEPR_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_ProvisioningServiceEPR_s* zx_DEEP_CLONE_prov_ProvisioningServiceEPR(struct zx_ctx* c, struct zx_prov_ProvisioningServiceEPR_s* x, int dup_strs);
void zx_DUP_STRS_prov_ProvisioningServiceEPR(struct zx_ctx* c, struct zx_prov_ProvisioningServiceEPR_s* x);
int zx_WALK_SO_prov_ProvisioningServiceEPR(struct zx_ctx* c, struct zx_prov_ProvisioningServiceEPR_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_ProvisioningServiceEPR(struct zx_ctx* c, struct zx_prov_ProvisioningServiceEPR_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_ProvisioningServiceEPR(struct zx_ctx* c, struct zx_prov_ProvisioningServiceEPR_s* x);
int zx_LEN_WO_prov_ProvisioningServiceEPR(struct zx_ctx* c, struct zx_prov_ProvisioningServiceEPR_s* x);
char* zx_ENC_SO_prov_ProvisioningServiceEPR(struct zx_ctx* c, struct zx_prov_ProvisioningServiceEPR_s* x, char* p);
char* zx_ENC_WO_prov_ProvisioningServiceEPR(struct zx_ctx* c, struct zx_prov_ProvisioningServiceEPR_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_ProvisioningServiceEPR(struct zx_ctx* c, struct zx_prov_ProvisioningServiceEPR_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_ProvisioningServiceEPR(struct zx_ctx* c, struct zx_prov_ProvisioningServiceEPR_s* x);

struct zx_prov_ProvisioningServiceEPR_s {
  ZX_ELEM_EXT
  zx_prov_ProvisioningServiceEPR_EXT
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
struct zx_str* zx_prov_ProvisioningServiceEPR_GET_ID(struct zx_prov_ProvisioningServiceEPR_s* x);
struct zx_str* zx_prov_ProvisioningServiceEPR_GET_id(struct zx_prov_ProvisioningServiceEPR_s* x);
struct zx_str* zx_prov_ProvisioningServiceEPR_GET_notOnOrAfter(struct zx_prov_ProvisioningServiceEPR_s* x);
struct zx_str* zx_prov_ProvisioningServiceEPR_GET_Id(struct zx_prov_ProvisioningServiceEPR_s* x);
struct zx_str* zx_prov_ProvisioningServiceEPR_GET_actor(struct zx_prov_ProvisioningServiceEPR_s* x);
struct zx_str* zx_prov_ProvisioningServiceEPR_GET_mustUnderstand(struct zx_prov_ProvisioningServiceEPR_s* x);

struct zx_a_Address_s* zx_prov_ProvisioningServiceEPR_GET_Address(struct zx_prov_ProvisioningServiceEPR_s* x, int n);
struct zx_a_ReferenceParameters_s* zx_prov_ProvisioningServiceEPR_GET_ReferenceParameters(struct zx_prov_ProvisioningServiceEPR_s* x, int n);
struct zx_a_Metadata_s* zx_prov_ProvisioningServiceEPR_GET_Metadata(struct zx_prov_ProvisioningServiceEPR_s* x, int n);

int zx_prov_ProvisioningServiceEPR_NUM_Address(struct zx_prov_ProvisioningServiceEPR_s* x);
int zx_prov_ProvisioningServiceEPR_NUM_ReferenceParameters(struct zx_prov_ProvisioningServiceEPR_s* x);
int zx_prov_ProvisioningServiceEPR_NUM_Metadata(struct zx_prov_ProvisioningServiceEPR_s* x);

struct zx_a_Address_s* zx_prov_ProvisioningServiceEPR_POP_Address(struct zx_prov_ProvisioningServiceEPR_s* x);
struct zx_a_ReferenceParameters_s* zx_prov_ProvisioningServiceEPR_POP_ReferenceParameters(struct zx_prov_ProvisioningServiceEPR_s* x);
struct zx_a_Metadata_s* zx_prov_ProvisioningServiceEPR_POP_Metadata(struct zx_prov_ProvisioningServiceEPR_s* x);

void zx_prov_ProvisioningServiceEPR_PUSH_Address(struct zx_prov_ProvisioningServiceEPR_s* x, struct zx_a_Address_s* y);
void zx_prov_ProvisioningServiceEPR_PUSH_ReferenceParameters(struct zx_prov_ProvisioningServiceEPR_s* x, struct zx_a_ReferenceParameters_s* y);
void zx_prov_ProvisioningServiceEPR_PUSH_Metadata(struct zx_prov_ProvisioningServiceEPR_s* x, struct zx_a_Metadata_s* y);

void zx_prov_ProvisioningServiceEPR_PUT_ID(struct zx_prov_ProvisioningServiceEPR_s* x, struct zx_str* y);
void zx_prov_ProvisioningServiceEPR_PUT_id(struct zx_prov_ProvisioningServiceEPR_s* x, struct zx_str* y);
void zx_prov_ProvisioningServiceEPR_PUT_notOnOrAfter(struct zx_prov_ProvisioningServiceEPR_s* x, struct zx_str* y);
void zx_prov_ProvisioningServiceEPR_PUT_Id(struct zx_prov_ProvisioningServiceEPR_s* x, struct zx_str* y);
void zx_prov_ProvisioningServiceEPR_PUT_actor(struct zx_prov_ProvisioningServiceEPR_s* x, struct zx_str* y);
void zx_prov_ProvisioningServiceEPR_PUT_mustUnderstand(struct zx_prov_ProvisioningServiceEPR_s* x, struct zx_str* y);

void zx_prov_ProvisioningServiceEPR_PUT_Address(struct zx_prov_ProvisioningServiceEPR_s* x, int n, struct zx_a_Address_s* y);
void zx_prov_ProvisioningServiceEPR_PUT_ReferenceParameters(struct zx_prov_ProvisioningServiceEPR_s* x, int n, struct zx_a_ReferenceParameters_s* y);
void zx_prov_ProvisioningServiceEPR_PUT_Metadata(struct zx_prov_ProvisioningServiceEPR_s* x, int n, struct zx_a_Metadata_s* y);

void zx_prov_ProvisioningServiceEPR_ADD_Address(struct zx_prov_ProvisioningServiceEPR_s* x, int n, struct zx_a_Address_s* z);
void zx_prov_ProvisioningServiceEPR_ADD_ReferenceParameters(struct zx_prov_ProvisioningServiceEPR_s* x, int n, struct zx_a_ReferenceParameters_s* z);
void zx_prov_ProvisioningServiceEPR_ADD_Metadata(struct zx_prov_ProvisioningServiceEPR_s* x, int n, struct zx_a_Metadata_s* z);

void zx_prov_ProvisioningServiceEPR_DEL_Address(struct zx_prov_ProvisioningServiceEPR_s* x, int n);
void zx_prov_ProvisioningServiceEPR_DEL_ReferenceParameters(struct zx_prov_ProvisioningServiceEPR_s* x, int n);
void zx_prov_ProvisioningServiceEPR_DEL_Metadata(struct zx_prov_ProvisioningServiceEPR_s* x, int n);

void zx_prov_ProvisioningServiceEPR_REV_Address(struct zx_prov_ProvisioningServiceEPR_s* x);
void zx_prov_ProvisioningServiceEPR_REV_ReferenceParameters(struct zx_prov_ProvisioningServiceEPR_s* x);
void zx_prov_ProvisioningServiceEPR_REV_Metadata(struct zx_prov_ProvisioningServiceEPR_s* x);

#endif
/* -------------------------- prov_State -------------------------- */
/* refby( zx_prov_PMStatus_s ) */
#ifndef zx_prov_State_EXT
#define zx_prov_State_EXT
#endif

struct zx_prov_State_s* zx_DEC_prov_State(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_State_s* zx_NEW_prov_State(struct zx_ctx* c);
void zx_FREE_prov_State(struct zx_ctx* c, struct zx_prov_State_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_State_s* zx_DEEP_CLONE_prov_State(struct zx_ctx* c, struct zx_prov_State_s* x, int dup_strs);
void zx_DUP_STRS_prov_State(struct zx_ctx* c, struct zx_prov_State_s* x);
int zx_WALK_SO_prov_State(struct zx_ctx* c, struct zx_prov_State_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_State(struct zx_ctx* c, struct zx_prov_State_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_State(struct zx_ctx* c, struct zx_prov_State_s* x);
int zx_LEN_WO_prov_State(struct zx_ctx* c, struct zx_prov_State_s* x);
char* zx_ENC_SO_prov_State(struct zx_ctx* c, struct zx_prov_State_s* x, char* p);
char* zx_ENC_WO_prov_State(struct zx_ctx* c, struct zx_prov_State_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_State(struct zx_ctx* c, struct zx_prov_State_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_State(struct zx_ctx* c, struct zx_prov_State_s* x);

struct zx_prov_State_s {
  ZX_ELEM_EXT
  zx_prov_State_EXT
  struct zx_str* asof;	/* {0,1} attribute xs:dateTime */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_prov_State_GET_asof(struct zx_prov_State_s* x);





void zx_prov_State_PUT_asof(struct zx_prov_State_s* x, struct zx_str* y);





#endif
/* -------------------------- prov_UpdateEPR -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_UpdateEPR_EXT
#define zx_prov_UpdateEPR_EXT
#endif

struct zx_prov_UpdateEPR_s* zx_DEC_prov_UpdateEPR(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_UpdateEPR_s* zx_NEW_prov_UpdateEPR(struct zx_ctx* c);
void zx_FREE_prov_UpdateEPR(struct zx_ctx* c, struct zx_prov_UpdateEPR_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_UpdateEPR_s* zx_DEEP_CLONE_prov_UpdateEPR(struct zx_ctx* c, struct zx_prov_UpdateEPR_s* x, int dup_strs);
void zx_DUP_STRS_prov_UpdateEPR(struct zx_ctx* c, struct zx_prov_UpdateEPR_s* x);
int zx_WALK_SO_prov_UpdateEPR(struct zx_ctx* c, struct zx_prov_UpdateEPR_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_UpdateEPR(struct zx_ctx* c, struct zx_prov_UpdateEPR_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_UpdateEPR(struct zx_ctx* c, struct zx_prov_UpdateEPR_s* x);
int zx_LEN_WO_prov_UpdateEPR(struct zx_ctx* c, struct zx_prov_UpdateEPR_s* x);
char* zx_ENC_SO_prov_UpdateEPR(struct zx_ctx* c, struct zx_prov_UpdateEPR_s* x, char* p);
char* zx_ENC_WO_prov_UpdateEPR(struct zx_ctx* c, struct zx_prov_UpdateEPR_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_UpdateEPR(struct zx_ctx* c, struct zx_prov_UpdateEPR_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_UpdateEPR(struct zx_ctx* c, struct zx_prov_UpdateEPR_s* x);

struct zx_prov_UpdateEPR_s {
  ZX_ELEM_EXT
  zx_prov_UpdateEPR_EXT
  struct zx_prov_UpdateEPRItem_s* UpdateEPRItem;	/* {1,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_prov_UpdateEPRItem_s* zx_prov_UpdateEPR_GET_UpdateEPRItem(struct zx_prov_UpdateEPR_s* x, int n);

int zx_prov_UpdateEPR_NUM_UpdateEPRItem(struct zx_prov_UpdateEPR_s* x);

struct zx_prov_UpdateEPRItem_s* zx_prov_UpdateEPR_POP_UpdateEPRItem(struct zx_prov_UpdateEPR_s* x);

void zx_prov_UpdateEPR_PUSH_UpdateEPRItem(struct zx_prov_UpdateEPR_s* x, struct zx_prov_UpdateEPRItem_s* y);


void zx_prov_UpdateEPR_PUT_UpdateEPRItem(struct zx_prov_UpdateEPR_s* x, int n, struct zx_prov_UpdateEPRItem_s* y);

void zx_prov_UpdateEPR_ADD_UpdateEPRItem(struct zx_prov_UpdateEPR_s* x, int n, struct zx_prov_UpdateEPRItem_s* z);

void zx_prov_UpdateEPR_DEL_UpdateEPRItem(struct zx_prov_UpdateEPR_s* x, int n);

void zx_prov_UpdateEPR_REV_UpdateEPRItem(struct zx_prov_UpdateEPR_s* x);

#endif
/* -------------------------- prov_UpdateEPRItem -------------------------- */
/* refby( zx_prov_UpdateEPR_s ) */
#ifndef zx_prov_UpdateEPRItem_EXT
#define zx_prov_UpdateEPRItem_EXT
#endif

struct zx_prov_UpdateEPRItem_s* zx_DEC_prov_UpdateEPRItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_UpdateEPRItem_s* zx_NEW_prov_UpdateEPRItem(struct zx_ctx* c);
void zx_FREE_prov_UpdateEPRItem(struct zx_ctx* c, struct zx_prov_UpdateEPRItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_UpdateEPRItem_s* zx_DEEP_CLONE_prov_UpdateEPRItem(struct zx_ctx* c, struct zx_prov_UpdateEPRItem_s* x, int dup_strs);
void zx_DUP_STRS_prov_UpdateEPRItem(struct zx_ctx* c, struct zx_prov_UpdateEPRItem_s* x);
int zx_WALK_SO_prov_UpdateEPRItem(struct zx_ctx* c, struct zx_prov_UpdateEPRItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_UpdateEPRItem(struct zx_ctx* c, struct zx_prov_UpdateEPRItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_UpdateEPRItem(struct zx_ctx* c, struct zx_prov_UpdateEPRItem_s* x);
int zx_LEN_WO_prov_UpdateEPRItem(struct zx_ctx* c, struct zx_prov_UpdateEPRItem_s* x);
char* zx_ENC_SO_prov_UpdateEPRItem(struct zx_ctx* c, struct zx_prov_UpdateEPRItem_s* x, char* p);
char* zx_ENC_WO_prov_UpdateEPRItem(struct zx_ctx* c, struct zx_prov_UpdateEPRItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_UpdateEPRItem(struct zx_ctx* c, struct zx_prov_UpdateEPRItem_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_UpdateEPRItem(struct zx_ctx* c, struct zx_prov_UpdateEPRItem_s* x);

struct zx_prov_UpdateEPRItem_s {
  ZX_ELEM_EXT
  zx_prov_UpdateEPRItem_EXT
  struct zx_prov_PMID_s* PMID;	/* {1,1} nada */
  struct zx_prov_CallbackEPR_s* CallbackEPR;	/* {1,1} nada */
  struct zx_str* itemID;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_prov_UpdateEPRItem_GET_itemID(struct zx_prov_UpdateEPRItem_s* x);

struct zx_prov_PMID_s* zx_prov_UpdateEPRItem_GET_PMID(struct zx_prov_UpdateEPRItem_s* x, int n);
struct zx_prov_CallbackEPR_s* zx_prov_UpdateEPRItem_GET_CallbackEPR(struct zx_prov_UpdateEPRItem_s* x, int n);

int zx_prov_UpdateEPRItem_NUM_PMID(struct zx_prov_UpdateEPRItem_s* x);
int zx_prov_UpdateEPRItem_NUM_CallbackEPR(struct zx_prov_UpdateEPRItem_s* x);

struct zx_prov_PMID_s* zx_prov_UpdateEPRItem_POP_PMID(struct zx_prov_UpdateEPRItem_s* x);
struct zx_prov_CallbackEPR_s* zx_prov_UpdateEPRItem_POP_CallbackEPR(struct zx_prov_UpdateEPRItem_s* x);

void zx_prov_UpdateEPRItem_PUSH_PMID(struct zx_prov_UpdateEPRItem_s* x, struct zx_prov_PMID_s* y);
void zx_prov_UpdateEPRItem_PUSH_CallbackEPR(struct zx_prov_UpdateEPRItem_s* x, struct zx_prov_CallbackEPR_s* y);

void zx_prov_UpdateEPRItem_PUT_itemID(struct zx_prov_UpdateEPRItem_s* x, struct zx_str* y);

void zx_prov_UpdateEPRItem_PUT_PMID(struct zx_prov_UpdateEPRItem_s* x, int n, struct zx_prov_PMID_s* y);
void zx_prov_UpdateEPRItem_PUT_CallbackEPR(struct zx_prov_UpdateEPRItem_s* x, int n, struct zx_prov_CallbackEPR_s* y);

void zx_prov_UpdateEPRItem_ADD_PMID(struct zx_prov_UpdateEPRItem_s* x, int n, struct zx_prov_PMID_s* z);
void zx_prov_UpdateEPRItem_ADD_CallbackEPR(struct zx_prov_UpdateEPRItem_s* x, int n, struct zx_prov_CallbackEPR_s* z);

void zx_prov_UpdateEPRItem_DEL_PMID(struct zx_prov_UpdateEPRItem_s* x, int n);
void zx_prov_UpdateEPRItem_DEL_CallbackEPR(struct zx_prov_UpdateEPRItem_s* x, int n);

void zx_prov_UpdateEPRItem_REV_PMID(struct zx_prov_UpdateEPRItem_s* x);
void zx_prov_UpdateEPRItem_REV_CallbackEPR(struct zx_prov_UpdateEPRItem_s* x);

#endif
/* -------------------------- prov_UpdateEPRResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_prov_UpdateEPRResponse_EXT
#define zx_prov_UpdateEPRResponse_EXT
#endif

struct zx_prov_UpdateEPRResponse_s* zx_DEC_prov_UpdateEPRResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_prov_UpdateEPRResponse_s* zx_NEW_prov_UpdateEPRResponse(struct zx_ctx* c);
void zx_FREE_prov_UpdateEPRResponse(struct zx_ctx* c, struct zx_prov_UpdateEPRResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_prov_UpdateEPRResponse_s* zx_DEEP_CLONE_prov_UpdateEPRResponse(struct zx_ctx* c, struct zx_prov_UpdateEPRResponse_s* x, int dup_strs);
void zx_DUP_STRS_prov_UpdateEPRResponse(struct zx_ctx* c, struct zx_prov_UpdateEPRResponse_s* x);
int zx_WALK_SO_prov_UpdateEPRResponse(struct zx_ctx* c, struct zx_prov_UpdateEPRResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_prov_UpdateEPRResponse(struct zx_ctx* c, struct zx_prov_UpdateEPRResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_prov_UpdateEPRResponse(struct zx_ctx* c, struct zx_prov_UpdateEPRResponse_s* x);
int zx_LEN_WO_prov_UpdateEPRResponse(struct zx_ctx* c, struct zx_prov_UpdateEPRResponse_s* x);
char* zx_ENC_SO_prov_UpdateEPRResponse(struct zx_ctx* c, struct zx_prov_UpdateEPRResponse_s* x, char* p);
char* zx_ENC_WO_prov_UpdateEPRResponse(struct zx_ctx* c, struct zx_prov_UpdateEPRResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_prov_UpdateEPRResponse(struct zx_ctx* c, struct zx_prov_UpdateEPRResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_prov_UpdateEPRResponse(struct zx_ctx* c, struct zx_prov_UpdateEPRResponse_s* x);

struct zx_prov_UpdateEPRResponse_s {
  ZX_ELEM_EXT
  zx_prov_UpdateEPRResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_prov_UpdateEPRResponse_GET_Status(struct zx_prov_UpdateEPRResponse_s* x, int n);

int zx_prov_UpdateEPRResponse_NUM_Status(struct zx_prov_UpdateEPRResponse_s* x);

struct zx_lu_Status_s* zx_prov_UpdateEPRResponse_POP_Status(struct zx_prov_UpdateEPRResponse_s* x);

void zx_prov_UpdateEPRResponse_PUSH_Status(struct zx_prov_UpdateEPRResponse_s* x, struct zx_lu_Status_s* y);


void zx_prov_UpdateEPRResponse_PUT_Status(struct zx_prov_UpdateEPRResponse_s* x, int n, struct zx_lu_Status_s* y);

void zx_prov_UpdateEPRResponse_ADD_Status(struct zx_prov_UpdateEPRResponse_s* x, int n, struct zx_lu_Status_s* z);

void zx_prov_UpdateEPRResponse_DEL_Status(struct zx_prov_UpdateEPRResponse_s* x, int n);

void zx_prov_UpdateEPRResponse_REV_Status(struct zx_prov_UpdateEPRResponse_s* x);

#endif

#endif
