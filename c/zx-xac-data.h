/* c/zx-xac-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_xac_data_h
#define _c_zx_xac_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- xac_Action -------------------------- */
/* refby( zx_xac_Request_s ) */
#ifndef zx_xac_Action_EXT
#define zx_xac_Action_EXT
#endif

struct zx_xac_Action_s* zx_DEC_xac_Action(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_xac_Action_s* zx_NEW_xac_Action(struct zx_ctx* c);
void zx_FREE_xac_Action(struct zx_ctx* c, struct zx_xac_Action_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_xac_Action_s* zx_DEEP_CLONE_xac_Action(struct zx_ctx* c, struct zx_xac_Action_s* x, int dup_strs);
void zx_DUP_STRS_xac_Action(struct zx_ctx* c, struct zx_xac_Action_s* x);
int zx_WALK_SO_xac_Action(struct zx_ctx* c, struct zx_xac_Action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xac_Action(struct zx_ctx* c, struct zx_xac_Action_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_xac_Action(struct zx_ctx* c, struct zx_xac_Action_s* x);
int zx_LEN_WO_xac_Action(struct zx_ctx* c, struct zx_xac_Action_s* x);
char* zx_ENC_SO_xac_Action(struct zx_ctx* c, struct zx_xac_Action_s* x, char* p);
char* zx_ENC_WO_xac_Action(struct zx_ctx* c, struct zx_xac_Action_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_xac_Action(struct zx_ctx* c, struct zx_xac_Action_s* x);
struct zx_str* zx_EASY_ENC_WO_xac_Action(struct zx_ctx* c, struct zx_xac_Action_s* x);

struct zx_xac_Action_s {
  ZX_ELEM_EXT
  zx_xac_Action_EXT
  struct zx_xac_Attribute_s* Attribute;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_xac_Attribute_s* zx_xac_Action_GET_Attribute(struct zx_xac_Action_s* x, int n);

int zx_xac_Action_NUM_Attribute(struct zx_xac_Action_s* x);

struct zx_xac_Attribute_s* zx_xac_Action_POP_Attribute(struct zx_xac_Action_s* x);

void zx_xac_Action_PUSH_Attribute(struct zx_xac_Action_s* x, struct zx_xac_Attribute_s* y);


void zx_xac_Action_PUT_Attribute(struct zx_xac_Action_s* x, int n, struct zx_xac_Attribute_s* y);

void zx_xac_Action_ADD_Attribute(struct zx_xac_Action_s* x, int n, struct zx_xac_Attribute_s* z);

void zx_xac_Action_DEL_Attribute(struct zx_xac_Action_s* x, int n);

void zx_xac_Action_REV_Attribute(struct zx_xac_Action_s* x);

#endif
/* -------------------------- xac_Attribute -------------------------- */
/* refby( zx_xac_Subject_s zx_tas3_Credentials_s zx_xac_Resource_s zx_xac_Environment_s zx_xac_Action_s ) */
#ifndef zx_xac_Attribute_EXT
#define zx_xac_Attribute_EXT
#endif

struct zx_xac_Attribute_s* zx_DEC_xac_Attribute(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_xac_Attribute_s* zx_NEW_xac_Attribute(struct zx_ctx* c);
void zx_FREE_xac_Attribute(struct zx_ctx* c, struct zx_xac_Attribute_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_xac_Attribute_s* zx_DEEP_CLONE_xac_Attribute(struct zx_ctx* c, struct zx_xac_Attribute_s* x, int dup_strs);
void zx_DUP_STRS_xac_Attribute(struct zx_ctx* c, struct zx_xac_Attribute_s* x);
int zx_WALK_SO_xac_Attribute(struct zx_ctx* c, struct zx_xac_Attribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xac_Attribute(struct zx_ctx* c, struct zx_xac_Attribute_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_xac_Attribute(struct zx_ctx* c, struct zx_xac_Attribute_s* x);
int zx_LEN_WO_xac_Attribute(struct zx_ctx* c, struct zx_xac_Attribute_s* x);
char* zx_ENC_SO_xac_Attribute(struct zx_ctx* c, struct zx_xac_Attribute_s* x, char* p);
char* zx_ENC_WO_xac_Attribute(struct zx_ctx* c, struct zx_xac_Attribute_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_xac_Attribute(struct zx_ctx* c, struct zx_xac_Attribute_s* x);
struct zx_str* zx_EASY_ENC_WO_xac_Attribute(struct zx_ctx* c, struct zx_xac_Attribute_s* x);

struct zx_xac_Attribute_s {
  ZX_ELEM_EXT
  zx_xac_Attribute_EXT
  struct zx_elem_s* AttributeValue;	/* {1,-1} xs:string */
  struct zx_str* AttributeId;	/* {1,1} attribute xs:anyURI */
  struct zx_str* DataType;	/* {1,1} attribute xs:anyURI */
  struct zx_str* Issuer;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_xac_Attribute_GET_AttributeId(struct zx_xac_Attribute_s* x);
struct zx_str* zx_xac_Attribute_GET_DataType(struct zx_xac_Attribute_s* x);
struct zx_str* zx_xac_Attribute_GET_Issuer(struct zx_xac_Attribute_s* x);

struct zx_elem_s* zx_xac_Attribute_GET_AttributeValue(struct zx_xac_Attribute_s* x, int n);

int zx_xac_Attribute_NUM_AttributeValue(struct zx_xac_Attribute_s* x);

struct zx_elem_s* zx_xac_Attribute_POP_AttributeValue(struct zx_xac_Attribute_s* x);

void zx_xac_Attribute_PUSH_AttributeValue(struct zx_xac_Attribute_s* x, struct zx_elem_s* y);

void zx_xac_Attribute_PUT_AttributeId(struct zx_xac_Attribute_s* x, struct zx_str* y);
void zx_xac_Attribute_PUT_DataType(struct zx_xac_Attribute_s* x, struct zx_str* y);
void zx_xac_Attribute_PUT_Issuer(struct zx_xac_Attribute_s* x, struct zx_str* y);

void zx_xac_Attribute_PUT_AttributeValue(struct zx_xac_Attribute_s* x, int n, struct zx_elem_s* y);

void zx_xac_Attribute_ADD_AttributeValue(struct zx_xac_Attribute_s* x, int n, struct zx_elem_s* z);

void zx_xac_Attribute_DEL_AttributeValue(struct zx_xac_Attribute_s* x, int n);

void zx_xac_Attribute_REV_AttributeValue(struct zx_xac_Attribute_s* x);

#endif
/* -------------------------- xac_Environment -------------------------- */
/* refby( zx_xac_Request_s ) */
#ifndef zx_xac_Environment_EXT
#define zx_xac_Environment_EXT
#endif

struct zx_xac_Environment_s* zx_DEC_xac_Environment(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_xac_Environment_s* zx_NEW_xac_Environment(struct zx_ctx* c);
void zx_FREE_xac_Environment(struct zx_ctx* c, struct zx_xac_Environment_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_xac_Environment_s* zx_DEEP_CLONE_xac_Environment(struct zx_ctx* c, struct zx_xac_Environment_s* x, int dup_strs);
void zx_DUP_STRS_xac_Environment(struct zx_ctx* c, struct zx_xac_Environment_s* x);
int zx_WALK_SO_xac_Environment(struct zx_ctx* c, struct zx_xac_Environment_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xac_Environment(struct zx_ctx* c, struct zx_xac_Environment_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_xac_Environment(struct zx_ctx* c, struct zx_xac_Environment_s* x);
int zx_LEN_WO_xac_Environment(struct zx_ctx* c, struct zx_xac_Environment_s* x);
char* zx_ENC_SO_xac_Environment(struct zx_ctx* c, struct zx_xac_Environment_s* x, char* p);
char* zx_ENC_WO_xac_Environment(struct zx_ctx* c, struct zx_xac_Environment_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_xac_Environment(struct zx_ctx* c, struct zx_xac_Environment_s* x);
struct zx_str* zx_EASY_ENC_WO_xac_Environment(struct zx_ctx* c, struct zx_xac_Environment_s* x);

struct zx_xac_Environment_s {
  ZX_ELEM_EXT
  zx_xac_Environment_EXT
  struct zx_xac_Attribute_s* Attribute;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_xac_Attribute_s* zx_xac_Environment_GET_Attribute(struct zx_xac_Environment_s* x, int n);

int zx_xac_Environment_NUM_Attribute(struct zx_xac_Environment_s* x);

struct zx_xac_Attribute_s* zx_xac_Environment_POP_Attribute(struct zx_xac_Environment_s* x);

void zx_xac_Environment_PUSH_Attribute(struct zx_xac_Environment_s* x, struct zx_xac_Attribute_s* y);


void zx_xac_Environment_PUT_Attribute(struct zx_xac_Environment_s* x, int n, struct zx_xac_Attribute_s* y);

void zx_xac_Environment_ADD_Attribute(struct zx_xac_Environment_s* x, int n, struct zx_xac_Attribute_s* z);

void zx_xac_Environment_DEL_Attribute(struct zx_xac_Environment_s* x, int n);

void zx_xac_Environment_REV_Attribute(struct zx_xac_Environment_s* x);

#endif
/* -------------------------- xac_MissingAttributeDetail -------------------------- */
/* refby( ) */
#ifndef zx_xac_MissingAttributeDetail_EXT
#define zx_xac_MissingAttributeDetail_EXT
#endif

struct zx_xac_MissingAttributeDetail_s* zx_DEC_xac_MissingAttributeDetail(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_xac_MissingAttributeDetail_s* zx_NEW_xac_MissingAttributeDetail(struct zx_ctx* c);
void zx_FREE_xac_MissingAttributeDetail(struct zx_ctx* c, struct zx_xac_MissingAttributeDetail_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_xac_MissingAttributeDetail_s* zx_DEEP_CLONE_xac_MissingAttributeDetail(struct zx_ctx* c, struct zx_xac_MissingAttributeDetail_s* x, int dup_strs);
void zx_DUP_STRS_xac_MissingAttributeDetail(struct zx_ctx* c, struct zx_xac_MissingAttributeDetail_s* x);
int zx_WALK_SO_xac_MissingAttributeDetail(struct zx_ctx* c, struct zx_xac_MissingAttributeDetail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xac_MissingAttributeDetail(struct zx_ctx* c, struct zx_xac_MissingAttributeDetail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_xac_MissingAttributeDetail(struct zx_ctx* c, struct zx_xac_MissingAttributeDetail_s* x);
int zx_LEN_WO_xac_MissingAttributeDetail(struct zx_ctx* c, struct zx_xac_MissingAttributeDetail_s* x);
char* zx_ENC_SO_xac_MissingAttributeDetail(struct zx_ctx* c, struct zx_xac_MissingAttributeDetail_s* x, char* p);
char* zx_ENC_WO_xac_MissingAttributeDetail(struct zx_ctx* c, struct zx_xac_MissingAttributeDetail_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_xac_MissingAttributeDetail(struct zx_ctx* c, struct zx_xac_MissingAttributeDetail_s* x);
struct zx_str* zx_EASY_ENC_WO_xac_MissingAttributeDetail(struct zx_ctx* c, struct zx_xac_MissingAttributeDetail_s* x);

struct zx_xac_MissingAttributeDetail_s {
  ZX_ELEM_EXT
  zx_xac_MissingAttributeDetail_EXT
  struct zx_elem_s* AttributeValue;	/* {0,-1} xs:string */
  struct zx_str* AttributeId;	/* {1,1} attribute xs:anyURI */
  struct zx_str* DataType;	/* {1,1} attribute xs:anyURI */
  struct zx_str* Issuer;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_xac_MissingAttributeDetail_GET_AttributeId(struct zx_xac_MissingAttributeDetail_s* x);
struct zx_str* zx_xac_MissingAttributeDetail_GET_DataType(struct zx_xac_MissingAttributeDetail_s* x);
struct zx_str* zx_xac_MissingAttributeDetail_GET_Issuer(struct zx_xac_MissingAttributeDetail_s* x);

struct zx_elem_s* zx_xac_MissingAttributeDetail_GET_AttributeValue(struct zx_xac_MissingAttributeDetail_s* x, int n);

int zx_xac_MissingAttributeDetail_NUM_AttributeValue(struct zx_xac_MissingAttributeDetail_s* x);

struct zx_elem_s* zx_xac_MissingAttributeDetail_POP_AttributeValue(struct zx_xac_MissingAttributeDetail_s* x);

void zx_xac_MissingAttributeDetail_PUSH_AttributeValue(struct zx_xac_MissingAttributeDetail_s* x, struct zx_elem_s* y);

void zx_xac_MissingAttributeDetail_PUT_AttributeId(struct zx_xac_MissingAttributeDetail_s* x, struct zx_str* y);
void zx_xac_MissingAttributeDetail_PUT_DataType(struct zx_xac_MissingAttributeDetail_s* x, struct zx_str* y);
void zx_xac_MissingAttributeDetail_PUT_Issuer(struct zx_xac_MissingAttributeDetail_s* x, struct zx_str* y);

void zx_xac_MissingAttributeDetail_PUT_AttributeValue(struct zx_xac_MissingAttributeDetail_s* x, int n, struct zx_elem_s* y);

void zx_xac_MissingAttributeDetail_ADD_AttributeValue(struct zx_xac_MissingAttributeDetail_s* x, int n, struct zx_elem_s* z);

void zx_xac_MissingAttributeDetail_DEL_AttributeValue(struct zx_xac_MissingAttributeDetail_s* x, int n);

void zx_xac_MissingAttributeDetail_REV_AttributeValue(struct zx_xac_MissingAttributeDetail_s* x);

#endif
/* -------------------------- xac_Request -------------------------- */
/* refby( zx_sa_Statement_s zx_xasa_XACMLAuthzDecisionStatement_s zx_xaspcd1_XACMLPolicyQuery_s zx_xasp_XACMLPolicyQuery_s zx_xaspcd1_XACMLAuthzDecisionQuery_s zx_xasp_XACMLAuthzDecisionQuery_s zx_xasacd1_XACMLAuthzDecisionStatement_s zx_e_Body_s ) */
#ifndef zx_xac_Request_EXT
#define zx_xac_Request_EXT
#endif

struct zx_xac_Request_s* zx_DEC_xac_Request(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_xac_Request_s* zx_NEW_xac_Request(struct zx_ctx* c);
void zx_FREE_xac_Request(struct zx_ctx* c, struct zx_xac_Request_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_xac_Request_s* zx_DEEP_CLONE_xac_Request(struct zx_ctx* c, struct zx_xac_Request_s* x, int dup_strs);
void zx_DUP_STRS_xac_Request(struct zx_ctx* c, struct zx_xac_Request_s* x);
int zx_WALK_SO_xac_Request(struct zx_ctx* c, struct zx_xac_Request_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xac_Request(struct zx_ctx* c, struct zx_xac_Request_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_xac_Request(struct zx_ctx* c, struct zx_xac_Request_s* x);
int zx_LEN_WO_xac_Request(struct zx_ctx* c, struct zx_xac_Request_s* x);
char* zx_ENC_SO_xac_Request(struct zx_ctx* c, struct zx_xac_Request_s* x, char* p);
char* zx_ENC_WO_xac_Request(struct zx_ctx* c, struct zx_xac_Request_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_xac_Request(struct zx_ctx* c, struct zx_xac_Request_s* x);
struct zx_str* zx_EASY_ENC_WO_xac_Request(struct zx_ctx* c, struct zx_xac_Request_s* x);

struct zx_xac_Request_s {
  ZX_ELEM_EXT
  zx_xac_Request_EXT
  struct zx_xac_Subject_s* Subject;	/* {1,-1} nada */
  struct zx_xac_Resource_s* Resource;	/* {1,-1} nada */
  struct zx_xac_Action_s* Action;	/* {1,1}  */
  struct zx_xac_Environment_s* Environment;	/* {1,1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_xac_Subject_s* zx_xac_Request_GET_Subject(struct zx_xac_Request_s* x, int n);
struct zx_xac_Resource_s* zx_xac_Request_GET_Resource(struct zx_xac_Request_s* x, int n);
struct zx_xac_Action_s* zx_xac_Request_GET_Action(struct zx_xac_Request_s* x, int n);
struct zx_xac_Environment_s* zx_xac_Request_GET_Environment(struct zx_xac_Request_s* x, int n);

int zx_xac_Request_NUM_Subject(struct zx_xac_Request_s* x);
int zx_xac_Request_NUM_Resource(struct zx_xac_Request_s* x);
int zx_xac_Request_NUM_Action(struct zx_xac_Request_s* x);
int zx_xac_Request_NUM_Environment(struct zx_xac_Request_s* x);

struct zx_xac_Subject_s* zx_xac_Request_POP_Subject(struct zx_xac_Request_s* x);
struct zx_xac_Resource_s* zx_xac_Request_POP_Resource(struct zx_xac_Request_s* x);
struct zx_xac_Action_s* zx_xac_Request_POP_Action(struct zx_xac_Request_s* x);
struct zx_xac_Environment_s* zx_xac_Request_POP_Environment(struct zx_xac_Request_s* x);

void zx_xac_Request_PUSH_Subject(struct zx_xac_Request_s* x, struct zx_xac_Subject_s* y);
void zx_xac_Request_PUSH_Resource(struct zx_xac_Request_s* x, struct zx_xac_Resource_s* y);
void zx_xac_Request_PUSH_Action(struct zx_xac_Request_s* x, struct zx_xac_Action_s* y);
void zx_xac_Request_PUSH_Environment(struct zx_xac_Request_s* x, struct zx_xac_Environment_s* y);


void zx_xac_Request_PUT_Subject(struct zx_xac_Request_s* x, int n, struct zx_xac_Subject_s* y);
void zx_xac_Request_PUT_Resource(struct zx_xac_Request_s* x, int n, struct zx_xac_Resource_s* y);
void zx_xac_Request_PUT_Action(struct zx_xac_Request_s* x, int n, struct zx_xac_Action_s* y);
void zx_xac_Request_PUT_Environment(struct zx_xac_Request_s* x, int n, struct zx_xac_Environment_s* y);

void zx_xac_Request_ADD_Subject(struct zx_xac_Request_s* x, int n, struct zx_xac_Subject_s* z);
void zx_xac_Request_ADD_Resource(struct zx_xac_Request_s* x, int n, struct zx_xac_Resource_s* z);
void zx_xac_Request_ADD_Action(struct zx_xac_Request_s* x, int n, struct zx_xac_Action_s* z);
void zx_xac_Request_ADD_Environment(struct zx_xac_Request_s* x, int n, struct zx_xac_Environment_s* z);

void zx_xac_Request_DEL_Subject(struct zx_xac_Request_s* x, int n);
void zx_xac_Request_DEL_Resource(struct zx_xac_Request_s* x, int n);
void zx_xac_Request_DEL_Action(struct zx_xac_Request_s* x, int n);
void zx_xac_Request_DEL_Environment(struct zx_xac_Request_s* x, int n);

void zx_xac_Request_REV_Subject(struct zx_xac_Request_s* x);
void zx_xac_Request_REV_Resource(struct zx_xac_Request_s* x);
void zx_xac_Request_REV_Action(struct zx_xac_Request_s* x);
void zx_xac_Request_REV_Environment(struct zx_xac_Request_s* x);

#endif
/* -------------------------- xac_Resource -------------------------- */
/* refby( zx_xac_Request_s ) */
#ifndef zx_xac_Resource_EXT
#define zx_xac_Resource_EXT
#endif

struct zx_xac_Resource_s* zx_DEC_xac_Resource(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_xac_Resource_s* zx_NEW_xac_Resource(struct zx_ctx* c);
void zx_FREE_xac_Resource(struct zx_ctx* c, struct zx_xac_Resource_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_xac_Resource_s* zx_DEEP_CLONE_xac_Resource(struct zx_ctx* c, struct zx_xac_Resource_s* x, int dup_strs);
void zx_DUP_STRS_xac_Resource(struct zx_ctx* c, struct zx_xac_Resource_s* x);
int zx_WALK_SO_xac_Resource(struct zx_ctx* c, struct zx_xac_Resource_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xac_Resource(struct zx_ctx* c, struct zx_xac_Resource_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_xac_Resource(struct zx_ctx* c, struct zx_xac_Resource_s* x);
int zx_LEN_WO_xac_Resource(struct zx_ctx* c, struct zx_xac_Resource_s* x);
char* zx_ENC_SO_xac_Resource(struct zx_ctx* c, struct zx_xac_Resource_s* x, char* p);
char* zx_ENC_WO_xac_Resource(struct zx_ctx* c, struct zx_xac_Resource_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_xac_Resource(struct zx_ctx* c, struct zx_xac_Resource_s* x);
struct zx_str* zx_EASY_ENC_WO_xac_Resource(struct zx_ctx* c, struct zx_xac_Resource_s* x);

struct zx_xac_Resource_s {
  ZX_ELEM_EXT
  zx_xac_Resource_EXT
  struct zx_xac_ResourceContent_s* ResourceContent;	/* {0,1} nada */
  struct zx_xac_Attribute_s* Attribute;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_xac_ResourceContent_s* zx_xac_Resource_GET_ResourceContent(struct zx_xac_Resource_s* x, int n);
struct zx_xac_Attribute_s* zx_xac_Resource_GET_Attribute(struct zx_xac_Resource_s* x, int n);

int zx_xac_Resource_NUM_ResourceContent(struct zx_xac_Resource_s* x);
int zx_xac_Resource_NUM_Attribute(struct zx_xac_Resource_s* x);

struct zx_xac_ResourceContent_s* zx_xac_Resource_POP_ResourceContent(struct zx_xac_Resource_s* x);
struct zx_xac_Attribute_s* zx_xac_Resource_POP_Attribute(struct zx_xac_Resource_s* x);

void zx_xac_Resource_PUSH_ResourceContent(struct zx_xac_Resource_s* x, struct zx_xac_ResourceContent_s* y);
void zx_xac_Resource_PUSH_Attribute(struct zx_xac_Resource_s* x, struct zx_xac_Attribute_s* y);


void zx_xac_Resource_PUT_ResourceContent(struct zx_xac_Resource_s* x, int n, struct zx_xac_ResourceContent_s* y);
void zx_xac_Resource_PUT_Attribute(struct zx_xac_Resource_s* x, int n, struct zx_xac_Attribute_s* y);

void zx_xac_Resource_ADD_ResourceContent(struct zx_xac_Resource_s* x, int n, struct zx_xac_ResourceContent_s* z);
void zx_xac_Resource_ADD_Attribute(struct zx_xac_Resource_s* x, int n, struct zx_xac_Attribute_s* z);

void zx_xac_Resource_DEL_ResourceContent(struct zx_xac_Resource_s* x, int n);
void zx_xac_Resource_DEL_Attribute(struct zx_xac_Resource_s* x, int n);

void zx_xac_Resource_REV_ResourceContent(struct zx_xac_Resource_s* x);
void zx_xac_Resource_REV_Attribute(struct zx_xac_Resource_s* x);

#endif
/* -------------------------- xac_ResourceContent -------------------------- */
/* refby( zx_xac_Resource_s ) */
#ifndef zx_xac_ResourceContent_EXT
#define zx_xac_ResourceContent_EXT
#endif

struct zx_xac_ResourceContent_s* zx_DEC_xac_ResourceContent(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_xac_ResourceContent_s* zx_NEW_xac_ResourceContent(struct zx_ctx* c);
void zx_FREE_xac_ResourceContent(struct zx_ctx* c, struct zx_xac_ResourceContent_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_xac_ResourceContent_s* zx_DEEP_CLONE_xac_ResourceContent(struct zx_ctx* c, struct zx_xac_ResourceContent_s* x, int dup_strs);
void zx_DUP_STRS_xac_ResourceContent(struct zx_ctx* c, struct zx_xac_ResourceContent_s* x);
int zx_WALK_SO_xac_ResourceContent(struct zx_ctx* c, struct zx_xac_ResourceContent_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xac_ResourceContent(struct zx_ctx* c, struct zx_xac_ResourceContent_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_xac_ResourceContent(struct zx_ctx* c, struct zx_xac_ResourceContent_s* x);
int zx_LEN_WO_xac_ResourceContent(struct zx_ctx* c, struct zx_xac_ResourceContent_s* x);
char* zx_ENC_SO_xac_ResourceContent(struct zx_ctx* c, struct zx_xac_ResourceContent_s* x, char* p);
char* zx_ENC_WO_xac_ResourceContent(struct zx_ctx* c, struct zx_xac_ResourceContent_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_xac_ResourceContent(struct zx_ctx* c, struct zx_xac_ResourceContent_s* x);
struct zx_str* zx_EASY_ENC_WO_xac_ResourceContent(struct zx_ctx* c, struct zx_xac_ResourceContent_s* x);

struct zx_xac_ResourceContent_s {
  ZX_ELEM_EXT
  zx_xac_ResourceContent_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- xac_Response -------------------------- */
/* refby( zx_sa_Statement_s zx_xasa_XACMLAuthzDecisionStatement_s zx_xasacd1_XACMLAuthzDecisionStatement_s zx_e_Body_s ) */
#ifndef zx_xac_Response_EXT
#define zx_xac_Response_EXT
#endif

struct zx_xac_Response_s* zx_DEC_xac_Response(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_xac_Response_s* zx_NEW_xac_Response(struct zx_ctx* c);
void zx_FREE_xac_Response(struct zx_ctx* c, struct zx_xac_Response_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_xac_Response_s* zx_DEEP_CLONE_xac_Response(struct zx_ctx* c, struct zx_xac_Response_s* x, int dup_strs);
void zx_DUP_STRS_xac_Response(struct zx_ctx* c, struct zx_xac_Response_s* x);
int zx_WALK_SO_xac_Response(struct zx_ctx* c, struct zx_xac_Response_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xac_Response(struct zx_ctx* c, struct zx_xac_Response_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_xac_Response(struct zx_ctx* c, struct zx_xac_Response_s* x);
int zx_LEN_WO_xac_Response(struct zx_ctx* c, struct zx_xac_Response_s* x);
char* zx_ENC_SO_xac_Response(struct zx_ctx* c, struct zx_xac_Response_s* x, char* p);
char* zx_ENC_WO_xac_Response(struct zx_ctx* c, struct zx_xac_Response_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_xac_Response(struct zx_ctx* c, struct zx_xac_Response_s* x);
struct zx_str* zx_EASY_ENC_WO_xac_Response(struct zx_ctx* c, struct zx_xac_Response_s* x);

struct zx_xac_Response_s {
  ZX_ELEM_EXT
  zx_xac_Response_EXT
  struct zx_xac_Result_s* Result;	/* {1,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_xac_Result_s* zx_xac_Response_GET_Result(struct zx_xac_Response_s* x, int n);

int zx_xac_Response_NUM_Result(struct zx_xac_Response_s* x);

struct zx_xac_Result_s* zx_xac_Response_POP_Result(struct zx_xac_Response_s* x);

void zx_xac_Response_PUSH_Result(struct zx_xac_Response_s* x, struct zx_xac_Result_s* y);


void zx_xac_Response_PUT_Result(struct zx_xac_Response_s* x, int n, struct zx_xac_Result_s* y);

void zx_xac_Response_ADD_Result(struct zx_xac_Response_s* x, int n, struct zx_xac_Result_s* z);

void zx_xac_Response_DEL_Result(struct zx_xac_Response_s* x, int n);

void zx_xac_Response_REV_Result(struct zx_xac_Response_s* x);

#endif
/* -------------------------- xac_Result -------------------------- */
/* refby( zx_xac_Response_s ) */
#ifndef zx_xac_Result_EXT
#define zx_xac_Result_EXT
#endif

struct zx_xac_Result_s* zx_DEC_xac_Result(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_xac_Result_s* zx_NEW_xac_Result(struct zx_ctx* c);
void zx_FREE_xac_Result(struct zx_ctx* c, struct zx_xac_Result_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_xac_Result_s* zx_DEEP_CLONE_xac_Result(struct zx_ctx* c, struct zx_xac_Result_s* x, int dup_strs);
void zx_DUP_STRS_xac_Result(struct zx_ctx* c, struct zx_xac_Result_s* x);
int zx_WALK_SO_xac_Result(struct zx_ctx* c, struct zx_xac_Result_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xac_Result(struct zx_ctx* c, struct zx_xac_Result_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_xac_Result(struct zx_ctx* c, struct zx_xac_Result_s* x);
int zx_LEN_WO_xac_Result(struct zx_ctx* c, struct zx_xac_Result_s* x);
char* zx_ENC_SO_xac_Result(struct zx_ctx* c, struct zx_xac_Result_s* x, char* p);
char* zx_ENC_WO_xac_Result(struct zx_ctx* c, struct zx_xac_Result_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_xac_Result(struct zx_ctx* c, struct zx_xac_Result_s* x);
struct zx_str* zx_EASY_ENC_WO_xac_Result(struct zx_ctx* c, struct zx_xac_Result_s* x);

struct zx_xac_Result_s {
  ZX_ELEM_EXT
  zx_xac_Result_EXT
  struct zx_elem_s* Decision;	/* {1,1} Permit */
  struct zx_xac_Status_s* Status;	/* {0,1} nada */
  struct zx_xa_Obligations_s* Obligations;	/* {0,1}  */
  struct zx_str* ResourceId;	/* {0,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_xac_Result_GET_ResourceId(struct zx_xac_Result_s* x);

struct zx_elem_s* zx_xac_Result_GET_Decision(struct zx_xac_Result_s* x, int n);
struct zx_xac_Status_s* zx_xac_Result_GET_Status(struct zx_xac_Result_s* x, int n);
struct zx_xa_Obligations_s* zx_xac_Result_GET_Obligations(struct zx_xac_Result_s* x, int n);

int zx_xac_Result_NUM_Decision(struct zx_xac_Result_s* x);
int zx_xac_Result_NUM_Status(struct zx_xac_Result_s* x);
int zx_xac_Result_NUM_Obligations(struct zx_xac_Result_s* x);

struct zx_elem_s* zx_xac_Result_POP_Decision(struct zx_xac_Result_s* x);
struct zx_xac_Status_s* zx_xac_Result_POP_Status(struct zx_xac_Result_s* x);
struct zx_xa_Obligations_s* zx_xac_Result_POP_Obligations(struct zx_xac_Result_s* x);

void zx_xac_Result_PUSH_Decision(struct zx_xac_Result_s* x, struct zx_elem_s* y);
void zx_xac_Result_PUSH_Status(struct zx_xac_Result_s* x, struct zx_xac_Status_s* y);
void zx_xac_Result_PUSH_Obligations(struct zx_xac_Result_s* x, struct zx_xa_Obligations_s* y);

void zx_xac_Result_PUT_ResourceId(struct zx_xac_Result_s* x, struct zx_str* y);

void zx_xac_Result_PUT_Decision(struct zx_xac_Result_s* x, int n, struct zx_elem_s* y);
void zx_xac_Result_PUT_Status(struct zx_xac_Result_s* x, int n, struct zx_xac_Status_s* y);
void zx_xac_Result_PUT_Obligations(struct zx_xac_Result_s* x, int n, struct zx_xa_Obligations_s* y);

void zx_xac_Result_ADD_Decision(struct zx_xac_Result_s* x, int n, struct zx_elem_s* z);
void zx_xac_Result_ADD_Status(struct zx_xac_Result_s* x, int n, struct zx_xac_Status_s* z);
void zx_xac_Result_ADD_Obligations(struct zx_xac_Result_s* x, int n, struct zx_xa_Obligations_s* z);

void zx_xac_Result_DEL_Decision(struct zx_xac_Result_s* x, int n);
void zx_xac_Result_DEL_Status(struct zx_xac_Result_s* x, int n);
void zx_xac_Result_DEL_Obligations(struct zx_xac_Result_s* x, int n);

void zx_xac_Result_REV_Decision(struct zx_xac_Result_s* x);
void zx_xac_Result_REV_Status(struct zx_xac_Result_s* x);
void zx_xac_Result_REV_Obligations(struct zx_xac_Result_s* x);

#endif
/* -------------------------- xac_Status -------------------------- */
/* refby( zx_xac_Result_s ) */
#ifndef zx_xac_Status_EXT
#define zx_xac_Status_EXT
#endif

struct zx_xac_Status_s* zx_DEC_xac_Status(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_xac_Status_s* zx_NEW_xac_Status(struct zx_ctx* c);
void zx_FREE_xac_Status(struct zx_ctx* c, struct zx_xac_Status_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_xac_Status_s* zx_DEEP_CLONE_xac_Status(struct zx_ctx* c, struct zx_xac_Status_s* x, int dup_strs);
void zx_DUP_STRS_xac_Status(struct zx_ctx* c, struct zx_xac_Status_s* x);
int zx_WALK_SO_xac_Status(struct zx_ctx* c, struct zx_xac_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xac_Status(struct zx_ctx* c, struct zx_xac_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_xac_Status(struct zx_ctx* c, struct zx_xac_Status_s* x);
int zx_LEN_WO_xac_Status(struct zx_ctx* c, struct zx_xac_Status_s* x);
char* zx_ENC_SO_xac_Status(struct zx_ctx* c, struct zx_xac_Status_s* x, char* p);
char* zx_ENC_WO_xac_Status(struct zx_ctx* c, struct zx_xac_Status_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_xac_Status(struct zx_ctx* c, struct zx_xac_Status_s* x);
struct zx_str* zx_EASY_ENC_WO_xac_Status(struct zx_ctx* c, struct zx_xac_Status_s* x);

struct zx_xac_Status_s {
  ZX_ELEM_EXT
  zx_xac_Status_EXT
  struct zx_xac_StatusCode_s* StatusCode;	/* {1,1} nada */
  struct zx_elem_s* StatusMessage;	/* {0,1} xs:string */
  struct zx_xac_StatusDetail_s* StatusDetail;	/* {0,1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_xac_StatusCode_s* zx_xac_Status_GET_StatusCode(struct zx_xac_Status_s* x, int n);
struct zx_elem_s* zx_xac_Status_GET_StatusMessage(struct zx_xac_Status_s* x, int n);
struct zx_xac_StatusDetail_s* zx_xac_Status_GET_StatusDetail(struct zx_xac_Status_s* x, int n);

int zx_xac_Status_NUM_StatusCode(struct zx_xac_Status_s* x);
int zx_xac_Status_NUM_StatusMessage(struct zx_xac_Status_s* x);
int zx_xac_Status_NUM_StatusDetail(struct zx_xac_Status_s* x);

struct zx_xac_StatusCode_s* zx_xac_Status_POP_StatusCode(struct zx_xac_Status_s* x);
struct zx_elem_s* zx_xac_Status_POP_StatusMessage(struct zx_xac_Status_s* x);
struct zx_xac_StatusDetail_s* zx_xac_Status_POP_StatusDetail(struct zx_xac_Status_s* x);

void zx_xac_Status_PUSH_StatusCode(struct zx_xac_Status_s* x, struct zx_xac_StatusCode_s* y);
void zx_xac_Status_PUSH_StatusMessage(struct zx_xac_Status_s* x, struct zx_elem_s* y);
void zx_xac_Status_PUSH_StatusDetail(struct zx_xac_Status_s* x, struct zx_xac_StatusDetail_s* y);


void zx_xac_Status_PUT_StatusCode(struct zx_xac_Status_s* x, int n, struct zx_xac_StatusCode_s* y);
void zx_xac_Status_PUT_StatusMessage(struct zx_xac_Status_s* x, int n, struct zx_elem_s* y);
void zx_xac_Status_PUT_StatusDetail(struct zx_xac_Status_s* x, int n, struct zx_xac_StatusDetail_s* y);

void zx_xac_Status_ADD_StatusCode(struct zx_xac_Status_s* x, int n, struct zx_xac_StatusCode_s* z);
void zx_xac_Status_ADD_StatusMessage(struct zx_xac_Status_s* x, int n, struct zx_elem_s* z);
void zx_xac_Status_ADD_StatusDetail(struct zx_xac_Status_s* x, int n, struct zx_xac_StatusDetail_s* z);

void zx_xac_Status_DEL_StatusCode(struct zx_xac_Status_s* x, int n);
void zx_xac_Status_DEL_StatusMessage(struct zx_xac_Status_s* x, int n);
void zx_xac_Status_DEL_StatusDetail(struct zx_xac_Status_s* x, int n);

void zx_xac_Status_REV_StatusCode(struct zx_xac_Status_s* x);
void zx_xac_Status_REV_StatusMessage(struct zx_xac_Status_s* x);
void zx_xac_Status_REV_StatusDetail(struct zx_xac_Status_s* x);

#endif
/* -------------------------- xac_StatusCode -------------------------- */
/* refby( zx_xac_Status_s zx_xac_StatusCode_s ) */
#ifndef zx_xac_StatusCode_EXT
#define zx_xac_StatusCode_EXT
#endif

struct zx_xac_StatusCode_s* zx_DEC_xac_StatusCode(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_xac_StatusCode_s* zx_NEW_xac_StatusCode(struct zx_ctx* c);
void zx_FREE_xac_StatusCode(struct zx_ctx* c, struct zx_xac_StatusCode_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_xac_StatusCode_s* zx_DEEP_CLONE_xac_StatusCode(struct zx_ctx* c, struct zx_xac_StatusCode_s* x, int dup_strs);
void zx_DUP_STRS_xac_StatusCode(struct zx_ctx* c, struct zx_xac_StatusCode_s* x);
int zx_WALK_SO_xac_StatusCode(struct zx_ctx* c, struct zx_xac_StatusCode_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xac_StatusCode(struct zx_ctx* c, struct zx_xac_StatusCode_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_xac_StatusCode(struct zx_ctx* c, struct zx_xac_StatusCode_s* x);
int zx_LEN_WO_xac_StatusCode(struct zx_ctx* c, struct zx_xac_StatusCode_s* x);
char* zx_ENC_SO_xac_StatusCode(struct zx_ctx* c, struct zx_xac_StatusCode_s* x, char* p);
char* zx_ENC_WO_xac_StatusCode(struct zx_ctx* c, struct zx_xac_StatusCode_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_xac_StatusCode(struct zx_ctx* c, struct zx_xac_StatusCode_s* x);
struct zx_str* zx_EASY_ENC_WO_xac_StatusCode(struct zx_ctx* c, struct zx_xac_StatusCode_s* x);

struct zx_xac_StatusCode_s {
  ZX_ELEM_EXT
  zx_xac_StatusCode_EXT
  struct zx_xac_StatusCode_s* StatusCode;	/* {0,1} nada */
  struct zx_str* Value;	/* {1,1} attribute xs:QName */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_xac_StatusCode_GET_Value(struct zx_xac_StatusCode_s* x);

struct zx_xac_StatusCode_s* zx_xac_StatusCode_GET_StatusCode(struct zx_xac_StatusCode_s* x, int n);

int zx_xac_StatusCode_NUM_StatusCode(struct zx_xac_StatusCode_s* x);

struct zx_xac_StatusCode_s* zx_xac_StatusCode_POP_StatusCode(struct zx_xac_StatusCode_s* x);

void zx_xac_StatusCode_PUSH_StatusCode(struct zx_xac_StatusCode_s* x, struct zx_xac_StatusCode_s* y);

void zx_xac_StatusCode_PUT_Value(struct zx_xac_StatusCode_s* x, struct zx_str* y);

void zx_xac_StatusCode_PUT_StatusCode(struct zx_xac_StatusCode_s* x, int n, struct zx_xac_StatusCode_s* y);

void zx_xac_StatusCode_ADD_StatusCode(struct zx_xac_StatusCode_s* x, int n, struct zx_xac_StatusCode_s* z);

void zx_xac_StatusCode_DEL_StatusCode(struct zx_xac_StatusCode_s* x, int n);

void zx_xac_StatusCode_REV_StatusCode(struct zx_xac_StatusCode_s* x);

#endif
/* -------------------------- xac_StatusDetail -------------------------- */
/* refby( zx_xac_Status_s ) */
#ifndef zx_xac_StatusDetail_EXT
#define zx_xac_StatusDetail_EXT
#endif

struct zx_xac_StatusDetail_s* zx_DEC_xac_StatusDetail(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_xac_StatusDetail_s* zx_NEW_xac_StatusDetail(struct zx_ctx* c);
void zx_FREE_xac_StatusDetail(struct zx_ctx* c, struct zx_xac_StatusDetail_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_xac_StatusDetail_s* zx_DEEP_CLONE_xac_StatusDetail(struct zx_ctx* c, struct zx_xac_StatusDetail_s* x, int dup_strs);
void zx_DUP_STRS_xac_StatusDetail(struct zx_ctx* c, struct zx_xac_StatusDetail_s* x);
int zx_WALK_SO_xac_StatusDetail(struct zx_ctx* c, struct zx_xac_StatusDetail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xac_StatusDetail(struct zx_ctx* c, struct zx_xac_StatusDetail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_xac_StatusDetail(struct zx_ctx* c, struct zx_xac_StatusDetail_s* x);
int zx_LEN_WO_xac_StatusDetail(struct zx_ctx* c, struct zx_xac_StatusDetail_s* x);
char* zx_ENC_SO_xac_StatusDetail(struct zx_ctx* c, struct zx_xac_StatusDetail_s* x, char* p);
char* zx_ENC_WO_xac_StatusDetail(struct zx_ctx* c, struct zx_xac_StatusDetail_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_xac_StatusDetail(struct zx_ctx* c, struct zx_xac_StatusDetail_s* x);
struct zx_str* zx_EASY_ENC_WO_xac_StatusDetail(struct zx_ctx* c, struct zx_xac_StatusDetail_s* x);

struct zx_xac_StatusDetail_s {
  ZX_ELEM_EXT
  zx_xac_StatusDetail_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- xac_Subject -------------------------- */
/* refby( zx_xac_Request_s ) */
#ifndef zx_xac_Subject_EXT
#define zx_xac_Subject_EXT
#endif

struct zx_xac_Subject_s* zx_DEC_xac_Subject(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_xac_Subject_s* zx_NEW_xac_Subject(struct zx_ctx* c);
void zx_FREE_xac_Subject(struct zx_ctx* c, struct zx_xac_Subject_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_xac_Subject_s* zx_DEEP_CLONE_xac_Subject(struct zx_ctx* c, struct zx_xac_Subject_s* x, int dup_strs);
void zx_DUP_STRS_xac_Subject(struct zx_ctx* c, struct zx_xac_Subject_s* x);
int zx_WALK_SO_xac_Subject(struct zx_ctx* c, struct zx_xac_Subject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_xac_Subject(struct zx_ctx* c, struct zx_xac_Subject_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_xac_Subject(struct zx_ctx* c, struct zx_xac_Subject_s* x);
int zx_LEN_WO_xac_Subject(struct zx_ctx* c, struct zx_xac_Subject_s* x);
char* zx_ENC_SO_xac_Subject(struct zx_ctx* c, struct zx_xac_Subject_s* x, char* p);
char* zx_ENC_WO_xac_Subject(struct zx_ctx* c, struct zx_xac_Subject_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_xac_Subject(struct zx_ctx* c, struct zx_xac_Subject_s* x);
struct zx_str* zx_EASY_ENC_WO_xac_Subject(struct zx_ctx* c, struct zx_xac_Subject_s* x);

struct zx_xac_Subject_s {
  ZX_ELEM_EXT
  zx_xac_Subject_EXT
  struct zx_xac_Attribute_s* Attribute;	/* {0,-1} nada */
  struct zx_str* SubjectCategory;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_xac_Subject_GET_SubjectCategory(struct zx_xac_Subject_s* x);

struct zx_xac_Attribute_s* zx_xac_Subject_GET_Attribute(struct zx_xac_Subject_s* x, int n);

int zx_xac_Subject_NUM_Attribute(struct zx_xac_Subject_s* x);

struct zx_xac_Attribute_s* zx_xac_Subject_POP_Attribute(struct zx_xac_Subject_s* x);

void zx_xac_Subject_PUSH_Attribute(struct zx_xac_Subject_s* x, struct zx_xac_Attribute_s* y);

void zx_xac_Subject_PUT_SubjectCategory(struct zx_xac_Subject_s* x, struct zx_str* y);

void zx_xac_Subject_PUT_Attribute(struct zx_xac_Subject_s* x, int n, struct zx_xac_Attribute_s* y);

void zx_xac_Subject_ADD_Attribute(struct zx_xac_Subject_s* x, int n, struct zx_xac_Attribute_s* z);

void zx_xac_Subject_DEL_Attribute(struct zx_xac_Subject_s* x, int n);

void zx_xac_Subject_REV_Attribute(struct zx_xac_Subject_s* x);

#endif

#endif
