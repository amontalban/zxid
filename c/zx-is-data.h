/* c/zx-is-data.h - WARNING: This header was auto generated by xsd2sg.pl. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006,2010 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_is_data_h
#define _c_zx_is_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- is_Confirm -------------------------- */
/* refby( zx_is_Inquiry_s ) */
#ifndef zx_is_Confirm_EXT
#define zx_is_Confirm_EXT
#endif
struct zx_is_Confirm_s {
  ZX_ELEM_EXT
  zx_is_Confirm_EXT
  struct zx_is_Help_s* Help;	/* {0,1} nada */
  struct zx_elem_s* Hint;	/* {0,1} xs:string */
  struct zx_elem_s* Label;	/* {0,1} xs:normalizedString */
  struct zx_elem_s* Value;	/* {0,1} xs:normalizedString */
  struct zx_attr_s* name;	/* {1,1} attribute xs:ID */
};

#define zx_NEW_is_Confirm(c, father) (struct zx_is_Confirm_s*)zx_new_elem((c),(father),zx_is_Confirm_ELEM)
int zx_DEC_ATTR_is_Confirm(struct zx_ctx* c, struct zx_is_Confirm_s* x);
int zx_DEC_ELEM_is_Confirm(struct zx_ctx* c, struct zx_is_Confirm_s* x);

#ifdef ZX_ENA_AUX
struct zx_is_Confirm_s* zx_DEEP_CLONE_is_Confirm(struct zx_ctx* c, struct zx_is_Confirm_s* x, int dup_strs);
void zx_DUP_STRS_is_Confirm(struct zx_ctx* c, struct zx_is_Confirm_s* x);
int zx_WALK_SO_is_Confirm(struct zx_ctx* c, struct zx_is_Confirm_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_is_Confirm(struct zx_ctx* c, struct zx_is_Confirm_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif

#ifdef ZX_ENA_GETPUT
struct zx_attr_s* zx_is_Confirm_GET_name(struct zx_is_Confirm_s* x);

struct zx_is_Help_s* zx_is_Confirm_GET_Help(struct zx_is_Confirm_s* x, int n);
struct zx_elem_s* zx_is_Confirm_GET_Hint(struct zx_is_Confirm_s* x, int n);
struct zx_elem_s* zx_is_Confirm_GET_Label(struct zx_is_Confirm_s* x, int n);
struct zx_elem_s* zx_is_Confirm_GET_Value(struct zx_is_Confirm_s* x, int n);

int zx_is_Confirm_NUM_Help(struct zx_is_Confirm_s* x);
int zx_is_Confirm_NUM_Hint(struct zx_is_Confirm_s* x);
int zx_is_Confirm_NUM_Label(struct zx_is_Confirm_s* x);
int zx_is_Confirm_NUM_Value(struct zx_is_Confirm_s* x);

struct zx_is_Help_s* zx_is_Confirm_POP_Help(struct zx_is_Confirm_s* x);
struct zx_elem_s* zx_is_Confirm_POP_Hint(struct zx_is_Confirm_s* x);
struct zx_elem_s* zx_is_Confirm_POP_Label(struct zx_is_Confirm_s* x);
struct zx_elem_s* zx_is_Confirm_POP_Value(struct zx_is_Confirm_s* x);

void zx_is_Confirm_PUSH_Help(struct zx_is_Confirm_s* x, struct zx_is_Help_s* y);
void zx_is_Confirm_PUSH_Hint(struct zx_is_Confirm_s* x, struct zx_elem_s* y);
void zx_is_Confirm_PUSH_Label(struct zx_is_Confirm_s* x, struct zx_elem_s* y);
void zx_is_Confirm_PUSH_Value(struct zx_is_Confirm_s* x, struct zx_elem_s* y);

void zx_is_Confirm_PUT_name(struct zx_is_Confirm_s* x, struct zx_attr_s* y);

void zx_is_Confirm_PUT_Help(struct zx_is_Confirm_s* x, int n, struct zx_is_Help_s* y);
void zx_is_Confirm_PUT_Hint(struct zx_is_Confirm_s* x, int n, struct zx_elem_s* y);
void zx_is_Confirm_PUT_Label(struct zx_is_Confirm_s* x, int n, struct zx_elem_s* y);
void zx_is_Confirm_PUT_Value(struct zx_is_Confirm_s* x, int n, struct zx_elem_s* y);

void zx_is_Confirm_ADD_Help(struct zx_is_Confirm_s* x, int n, struct zx_is_Help_s* z);
void zx_is_Confirm_ADD_Hint(struct zx_is_Confirm_s* x, int n, struct zx_elem_s* z);
void zx_is_Confirm_ADD_Label(struct zx_is_Confirm_s* x, int n, struct zx_elem_s* z);
void zx_is_Confirm_ADD_Value(struct zx_is_Confirm_s* x, int n, struct zx_elem_s* z);

void zx_is_Confirm_DEL_Help(struct zx_is_Confirm_s* x, int n);
void zx_is_Confirm_DEL_Hint(struct zx_is_Confirm_s* x,int n);
void zx_is_Confirm_DEL_Label(struct zx_is_Confirm_s* x,int n);
void zx_is_Confirm_DEL_Value(struct zx_is_Confirm_s* x,int n);

void zx_is_Confirm_REV_Help(struct zx_is_Confirm_s* x);
void zx_is_Confirm_REV_Hint(struct zx_is_Confirm_s* x);
void zx_is_Confirm_REV_Label(struct zx_is_Confirm_s* x);
void zx_is_Confirm_REV_Value(struct zx_is_Confirm_s* x);

#endif
/* -------------------------- is_Help -------------------------- */
/* refby( zx_is_Inquiry_s zx_is_Text_s zx_is_Select_s zx_is_Confirm_s ) */
#ifndef zx_is_Help_EXT
#define zx_is_Help_EXT
#endif
struct zx_is_Help_s {
  ZX_ELEM_EXT
  zx_is_Help_EXT
  struct zx_attr_s* label;	/* {0,1} attribute xs:string */
  struct zx_attr_s* link;	/* {0,1} attribute xs:anyURI */
  struct zx_attr_s* moreLink;	/* {0,1} attribute xs:anyURI */
};

#define zx_NEW_is_Help(c, father) (struct zx_is_Help_s*)zx_new_elem((c),(father),zx_is_Help_ELEM)
int zx_DEC_ATTR_is_Help(struct zx_ctx* c, struct zx_is_Help_s* x);
int zx_DEC_ELEM_is_Help(struct zx_ctx* c, struct zx_is_Help_s* x);

#ifdef ZX_ENA_AUX
struct zx_is_Help_s* zx_DEEP_CLONE_is_Help(struct zx_ctx* c, struct zx_is_Help_s* x, int dup_strs);
void zx_DUP_STRS_is_Help(struct zx_ctx* c, struct zx_is_Help_s* x);
int zx_WALK_SO_is_Help(struct zx_ctx* c, struct zx_is_Help_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_is_Help(struct zx_ctx* c, struct zx_is_Help_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif

#ifdef ZX_ENA_GETPUT
struct zx_attr_s* zx_is_Help_GET_label(struct zx_is_Help_s* x);
struct zx_attr_s* zx_is_Help_GET_link(struct zx_is_Help_s* x);
struct zx_attr_s* zx_is_Help_GET_moreLink(struct zx_is_Help_s* x);





void zx_is_Help_PUT_label(struct zx_is_Help_s* x, struct zx_attr_s* y);
void zx_is_Help_PUT_link(struct zx_is_Help_s* x, struct zx_attr_s* y);
void zx_is_Help_PUT_moreLink(struct zx_is_Help_s* x, struct zx_attr_s* y);





#endif
/* -------------------------- is_Inquiry -------------------------- */
/* refby( zx_is_InteractionRequest_s zx_is_InteractionStatement_s ) */
#ifndef zx_is_Inquiry_EXT
#define zx_is_Inquiry_EXT
#endif
struct zx_is_Inquiry_s {
  ZX_ELEM_EXT
  zx_is_Inquiry_EXT
  struct zx_is_Help_s* Help;	/* {0,1} nada */
  struct zx_is_Select_s* Select;	/* {0,-1} nada */
  struct zx_is_Confirm_s* Confirm;	/* {0,-1}  */
  struct zx_is_Text_s* Text;	/* {0,-1} nada */
  struct zx_attr_s* id;	/* {0,1} attribute xs:ID */
  struct zx_attr_s* title;	/* {0,1} attribute xs:string */
};

#define zx_NEW_is_Inquiry(c, father) (struct zx_is_Inquiry_s*)zx_new_elem((c),(father),zx_is_Inquiry_ELEM)
int zx_DEC_ATTR_is_Inquiry(struct zx_ctx* c, struct zx_is_Inquiry_s* x);
int zx_DEC_ELEM_is_Inquiry(struct zx_ctx* c, struct zx_is_Inquiry_s* x);

#ifdef ZX_ENA_AUX
struct zx_is_Inquiry_s* zx_DEEP_CLONE_is_Inquiry(struct zx_ctx* c, struct zx_is_Inquiry_s* x, int dup_strs);
void zx_DUP_STRS_is_Inquiry(struct zx_ctx* c, struct zx_is_Inquiry_s* x);
int zx_WALK_SO_is_Inquiry(struct zx_ctx* c, struct zx_is_Inquiry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_is_Inquiry(struct zx_ctx* c, struct zx_is_Inquiry_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif

#ifdef ZX_ENA_GETPUT
struct zx_attr_s* zx_is_Inquiry_GET_id(struct zx_is_Inquiry_s* x);
struct zx_attr_s* zx_is_Inquiry_GET_title(struct zx_is_Inquiry_s* x);

struct zx_is_Help_s* zx_is_Inquiry_GET_Help(struct zx_is_Inquiry_s* x, int n);
struct zx_is_Select_s* zx_is_Inquiry_GET_Select(struct zx_is_Inquiry_s* x, int n);
struct zx_is_Confirm_s* zx_is_Inquiry_GET_Confirm(struct zx_is_Inquiry_s* x, int n);
struct zx_is_Text_s* zx_is_Inquiry_GET_Text(struct zx_is_Inquiry_s* x, int n);

int zx_is_Inquiry_NUM_Help(struct zx_is_Inquiry_s* x);
int zx_is_Inquiry_NUM_Select(struct zx_is_Inquiry_s* x);
int zx_is_Inquiry_NUM_Confirm(struct zx_is_Inquiry_s* x);
int zx_is_Inquiry_NUM_Text(struct zx_is_Inquiry_s* x);

struct zx_is_Help_s* zx_is_Inquiry_POP_Help(struct zx_is_Inquiry_s* x);
struct zx_is_Select_s* zx_is_Inquiry_POP_Select(struct zx_is_Inquiry_s* x);
struct zx_is_Confirm_s* zx_is_Inquiry_POP_Confirm(struct zx_is_Inquiry_s* x);
struct zx_is_Text_s* zx_is_Inquiry_POP_Text(struct zx_is_Inquiry_s* x);

void zx_is_Inquiry_PUSH_Help(struct zx_is_Inquiry_s* x, struct zx_is_Help_s* y);
void zx_is_Inquiry_PUSH_Select(struct zx_is_Inquiry_s* x, struct zx_is_Select_s* y);
void zx_is_Inquiry_PUSH_Confirm(struct zx_is_Inquiry_s* x, struct zx_is_Confirm_s* y);
void zx_is_Inquiry_PUSH_Text(struct zx_is_Inquiry_s* x, struct zx_is_Text_s* y);

void zx_is_Inquiry_PUT_id(struct zx_is_Inquiry_s* x, struct zx_attr_s* y);
void zx_is_Inquiry_PUT_title(struct zx_is_Inquiry_s* x, struct zx_attr_s* y);

void zx_is_Inquiry_PUT_Help(struct zx_is_Inquiry_s* x, int n, struct zx_is_Help_s* y);
void zx_is_Inquiry_PUT_Select(struct zx_is_Inquiry_s* x, int n, struct zx_is_Select_s* y);
void zx_is_Inquiry_PUT_Confirm(struct zx_is_Inquiry_s* x, int n, struct zx_is_Confirm_s* y);
void zx_is_Inquiry_PUT_Text(struct zx_is_Inquiry_s* x, int n, struct zx_is_Text_s* y);

void zx_is_Inquiry_ADD_Help(struct zx_is_Inquiry_s* x, int n, struct zx_is_Help_s* z);
void zx_is_Inquiry_ADD_Select(struct zx_is_Inquiry_s* x, int n, struct zx_is_Select_s* z);
void zx_is_Inquiry_ADD_Confirm(struct zx_is_Inquiry_s* x, int n, struct zx_is_Confirm_s* z);
void zx_is_Inquiry_ADD_Text(struct zx_is_Inquiry_s* x, int n, struct zx_is_Text_s* z);

void zx_is_Inquiry_DEL_Help(struct zx_is_Inquiry_s* x, int n);
void zx_is_Inquiry_DEL_Select(struct zx_is_Inquiry_s* x, int n);
void zx_is_Inquiry_DEL_Confirm(struct zx_is_Inquiry_s* x, int n);
void zx_is_Inquiry_DEL_Text(struct zx_is_Inquiry_s* x, int n);

void zx_is_Inquiry_REV_Help(struct zx_is_Inquiry_s* x);
void zx_is_Inquiry_REV_Select(struct zx_is_Inquiry_s* x);
void zx_is_Inquiry_REV_Confirm(struct zx_is_Inquiry_s* x);
void zx_is_Inquiry_REV_Text(struct zx_is_Inquiry_s* x);

#endif
/* -------------------------- is_InteractionRequest -------------------------- */
/* refby( ) */
#ifndef zx_is_InteractionRequest_EXT
#define zx_is_InteractionRequest_EXT
#endif
struct zx_is_InteractionRequest_s {
  ZX_ELEM_EXT
  zx_is_InteractionRequest_EXT
  struct zx_is_Inquiry_s* Inquiry;	/* {1,-1} nada */
  struct zx_ds_KeyInfo_s* KeyInfo;	/* {0,1} nada */
  struct zx_attr_s* id;	/* {0,1} attribute xs:ID */
  struct zx_attr_s* language;	/* {0,1} attribute xs:NMTOKENS */
  struct zx_attr_s* maxInteractTime;	/* {0,1} attribute xs:integer */
  struct zx_attr_s* signed_is_c_keyword;	/* {0,1} attribute xs:token */
};

#define zx_NEW_is_InteractionRequest(c, father) (struct zx_is_InteractionRequest_s*)zx_new_elem((c),(father),zx_is_InteractionRequest_ELEM)
int zx_DEC_ATTR_is_InteractionRequest(struct zx_ctx* c, struct zx_is_InteractionRequest_s* x);
int zx_DEC_ELEM_is_InteractionRequest(struct zx_ctx* c, struct zx_is_InteractionRequest_s* x);

#ifdef ZX_ENA_AUX
struct zx_is_InteractionRequest_s* zx_DEEP_CLONE_is_InteractionRequest(struct zx_ctx* c, struct zx_is_InteractionRequest_s* x, int dup_strs);
void zx_DUP_STRS_is_InteractionRequest(struct zx_ctx* c, struct zx_is_InteractionRequest_s* x);
int zx_WALK_SO_is_InteractionRequest(struct zx_ctx* c, struct zx_is_InteractionRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_is_InteractionRequest(struct zx_ctx* c, struct zx_is_InteractionRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif

#ifdef ZX_ENA_GETPUT
struct zx_attr_s* zx_is_InteractionRequest_GET_id(struct zx_is_InteractionRequest_s* x);
struct zx_attr_s* zx_is_InteractionRequest_GET_language(struct zx_is_InteractionRequest_s* x);
struct zx_attr_s* zx_is_InteractionRequest_GET_maxInteractTime(struct zx_is_InteractionRequest_s* x);
struct zx_attr_s* zx_is_InteractionRequest_GET_signed_is_c_keyword(struct zx_is_InteractionRequest_s* x);

struct zx_is_Inquiry_s* zx_is_InteractionRequest_GET_Inquiry(struct zx_is_InteractionRequest_s* x, int n);
struct zx_ds_KeyInfo_s* zx_is_InteractionRequest_GET_KeyInfo(struct zx_is_InteractionRequest_s* x, int n);

int zx_is_InteractionRequest_NUM_Inquiry(struct zx_is_InteractionRequest_s* x);
int zx_is_InteractionRequest_NUM_KeyInfo(struct zx_is_InteractionRequest_s* x);

struct zx_is_Inquiry_s* zx_is_InteractionRequest_POP_Inquiry(struct zx_is_InteractionRequest_s* x);
struct zx_ds_KeyInfo_s* zx_is_InteractionRequest_POP_KeyInfo(struct zx_is_InteractionRequest_s* x);

void zx_is_InteractionRequest_PUSH_Inquiry(struct zx_is_InteractionRequest_s* x, struct zx_is_Inquiry_s* y);
void zx_is_InteractionRequest_PUSH_KeyInfo(struct zx_is_InteractionRequest_s* x, struct zx_ds_KeyInfo_s* y);

void zx_is_InteractionRequest_PUT_id(struct zx_is_InteractionRequest_s* x, struct zx_attr_s* y);
void zx_is_InteractionRequest_PUT_language(struct zx_is_InteractionRequest_s* x, struct zx_attr_s* y);
void zx_is_InteractionRequest_PUT_maxInteractTime(struct zx_is_InteractionRequest_s* x, struct zx_attr_s* y);
void zx_is_InteractionRequest_PUT_signed_is_c_keyword(struct zx_is_InteractionRequest_s* x, struct zx_attr_s* y);

void zx_is_InteractionRequest_PUT_Inquiry(struct zx_is_InteractionRequest_s* x, int n, struct zx_is_Inquiry_s* y);
void zx_is_InteractionRequest_PUT_KeyInfo(struct zx_is_InteractionRequest_s* x, int n, struct zx_ds_KeyInfo_s* y);

void zx_is_InteractionRequest_ADD_Inquiry(struct zx_is_InteractionRequest_s* x, int n, struct zx_is_Inquiry_s* z);
void zx_is_InteractionRequest_ADD_KeyInfo(struct zx_is_InteractionRequest_s* x, int n, struct zx_ds_KeyInfo_s* z);

void zx_is_InteractionRequest_DEL_Inquiry(struct zx_is_InteractionRequest_s* x, int n);
void zx_is_InteractionRequest_DEL_KeyInfo(struct zx_is_InteractionRequest_s* x, int n);

void zx_is_InteractionRequest_REV_Inquiry(struct zx_is_InteractionRequest_s* x);
void zx_is_InteractionRequest_REV_KeyInfo(struct zx_is_InteractionRequest_s* x);

#endif
/* -------------------------- is_InteractionResponse -------------------------- */
/* refby( ) */
#ifndef zx_is_InteractionResponse_EXT
#define zx_is_InteractionResponse_EXT
#endif
struct zx_is_InteractionResponse_s {
  ZX_ELEM_EXT
  zx_is_InteractionResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
  struct zx_is_InteractionStatement_s* InteractionStatement;	/* {0,-1}  */
  struct zx_is_Parameter_s* Parameter;	/* {0,-1}  */
};

#define zx_NEW_is_InteractionResponse(c, father) (struct zx_is_InteractionResponse_s*)zx_new_elem((c),(father),zx_is_InteractionResponse_ELEM)
int zx_DEC_ATTR_is_InteractionResponse(struct zx_ctx* c, struct zx_is_InteractionResponse_s* x);
int zx_DEC_ELEM_is_InteractionResponse(struct zx_ctx* c, struct zx_is_InteractionResponse_s* x);

#ifdef ZX_ENA_AUX
struct zx_is_InteractionResponse_s* zx_DEEP_CLONE_is_InteractionResponse(struct zx_ctx* c, struct zx_is_InteractionResponse_s* x, int dup_strs);
void zx_DUP_STRS_is_InteractionResponse(struct zx_ctx* c, struct zx_is_InteractionResponse_s* x);
int zx_WALK_SO_is_InteractionResponse(struct zx_ctx* c, struct zx_is_InteractionResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_is_InteractionResponse(struct zx_ctx* c, struct zx_is_InteractionResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_is_InteractionResponse_GET_Status(struct zx_is_InteractionResponse_s* x, int n);
struct zx_is_InteractionStatement_s* zx_is_InteractionResponse_GET_InteractionStatement(struct zx_is_InteractionResponse_s* x, int n);
struct zx_is_Parameter_s* zx_is_InteractionResponse_GET_Parameter(struct zx_is_InteractionResponse_s* x, int n);

int zx_is_InteractionResponse_NUM_Status(struct zx_is_InteractionResponse_s* x);
int zx_is_InteractionResponse_NUM_InteractionStatement(struct zx_is_InteractionResponse_s* x);
int zx_is_InteractionResponse_NUM_Parameter(struct zx_is_InteractionResponse_s* x);

struct zx_lu_Status_s* zx_is_InteractionResponse_POP_Status(struct zx_is_InteractionResponse_s* x);
struct zx_is_InteractionStatement_s* zx_is_InteractionResponse_POP_InteractionStatement(struct zx_is_InteractionResponse_s* x);
struct zx_is_Parameter_s* zx_is_InteractionResponse_POP_Parameter(struct zx_is_InteractionResponse_s* x);

void zx_is_InteractionResponse_PUSH_Status(struct zx_is_InteractionResponse_s* x, struct zx_lu_Status_s* y);
void zx_is_InteractionResponse_PUSH_InteractionStatement(struct zx_is_InteractionResponse_s* x, struct zx_is_InteractionStatement_s* y);
void zx_is_InteractionResponse_PUSH_Parameter(struct zx_is_InteractionResponse_s* x, struct zx_is_Parameter_s* y);


void zx_is_InteractionResponse_PUT_Status(struct zx_is_InteractionResponse_s* x, int n, struct zx_lu_Status_s* y);
void zx_is_InteractionResponse_PUT_InteractionStatement(struct zx_is_InteractionResponse_s* x, int n, struct zx_is_InteractionStatement_s* y);
void zx_is_InteractionResponse_PUT_Parameter(struct zx_is_InteractionResponse_s* x, int n, struct zx_is_Parameter_s* y);

void zx_is_InteractionResponse_ADD_Status(struct zx_is_InteractionResponse_s* x, int n, struct zx_lu_Status_s* z);
void zx_is_InteractionResponse_ADD_InteractionStatement(struct zx_is_InteractionResponse_s* x, int n, struct zx_is_InteractionStatement_s* z);
void zx_is_InteractionResponse_ADD_Parameter(struct zx_is_InteractionResponse_s* x, int n, struct zx_is_Parameter_s* z);

void zx_is_InteractionResponse_DEL_Status(struct zx_is_InteractionResponse_s* x, int n);
void zx_is_InteractionResponse_DEL_InteractionStatement(struct zx_is_InteractionResponse_s* x, int n);
void zx_is_InteractionResponse_DEL_Parameter(struct zx_is_InteractionResponse_s* x, int n);

void zx_is_InteractionResponse_REV_Status(struct zx_is_InteractionResponse_s* x);
void zx_is_InteractionResponse_REV_InteractionStatement(struct zx_is_InteractionResponse_s* x);
void zx_is_InteractionResponse_REV_Parameter(struct zx_is_InteractionResponse_s* x);

#endif
/* -------------------------- is_InteractionStatement -------------------------- */
/* refby( zx_is_InteractionResponse_s ) */
#ifndef zx_is_InteractionStatement_EXT
#define zx_is_InteractionStatement_EXT
#endif
struct zx_is_InteractionStatement_s {
  ZX_ELEM_EXT
  zx_is_InteractionStatement_EXT
  struct zx_is_Inquiry_s* Inquiry;	/* {1,-1} nada */
  struct zx_ds_Signature_s* Signature;	/* {1,1} nada */
};

#define zx_NEW_is_InteractionStatement(c, father) (struct zx_is_InteractionStatement_s*)zx_new_elem((c),(father),zx_is_InteractionStatement_ELEM)
int zx_DEC_ATTR_is_InteractionStatement(struct zx_ctx* c, struct zx_is_InteractionStatement_s* x);
int zx_DEC_ELEM_is_InteractionStatement(struct zx_ctx* c, struct zx_is_InteractionStatement_s* x);

#ifdef ZX_ENA_AUX
struct zx_is_InteractionStatement_s* zx_DEEP_CLONE_is_InteractionStatement(struct zx_ctx* c, struct zx_is_InteractionStatement_s* x, int dup_strs);
void zx_DUP_STRS_is_InteractionStatement(struct zx_ctx* c, struct zx_is_InteractionStatement_s* x);
int zx_WALK_SO_is_InteractionStatement(struct zx_ctx* c, struct zx_is_InteractionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_is_InteractionStatement(struct zx_ctx* c, struct zx_is_InteractionStatement_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif

#ifdef ZX_ENA_GETPUT

struct zx_is_Inquiry_s* zx_is_InteractionStatement_GET_Inquiry(struct zx_is_InteractionStatement_s* x, int n);
struct zx_ds_Signature_s* zx_is_InteractionStatement_GET_Signature(struct zx_is_InteractionStatement_s* x, int n);

int zx_is_InteractionStatement_NUM_Inquiry(struct zx_is_InteractionStatement_s* x);
int zx_is_InteractionStatement_NUM_Signature(struct zx_is_InteractionStatement_s* x);

struct zx_is_Inquiry_s* zx_is_InteractionStatement_POP_Inquiry(struct zx_is_InteractionStatement_s* x);
struct zx_ds_Signature_s* zx_is_InteractionStatement_POP_Signature(struct zx_is_InteractionStatement_s* x);

void zx_is_InteractionStatement_PUSH_Inquiry(struct zx_is_InteractionStatement_s* x, struct zx_is_Inquiry_s* y);
void zx_is_InteractionStatement_PUSH_Signature(struct zx_is_InteractionStatement_s* x, struct zx_ds_Signature_s* y);


void zx_is_InteractionStatement_PUT_Inquiry(struct zx_is_InteractionStatement_s* x, int n, struct zx_is_Inquiry_s* y);
void zx_is_InteractionStatement_PUT_Signature(struct zx_is_InteractionStatement_s* x, int n, struct zx_ds_Signature_s* y);

void zx_is_InteractionStatement_ADD_Inquiry(struct zx_is_InteractionStatement_s* x, int n, struct zx_is_Inquiry_s* z);
void zx_is_InteractionStatement_ADD_Signature(struct zx_is_InteractionStatement_s* x, int n, struct zx_ds_Signature_s* z);

void zx_is_InteractionStatement_DEL_Inquiry(struct zx_is_InteractionStatement_s* x, int n);
void zx_is_InteractionStatement_DEL_Signature(struct zx_is_InteractionStatement_s* x, int n);

void zx_is_InteractionStatement_REV_Inquiry(struct zx_is_InteractionStatement_s* x);
void zx_is_InteractionStatement_REV_Signature(struct zx_is_InteractionStatement_s* x);

#endif
/* -------------------------- is_Item -------------------------- */
/* refby( zx_is_Select_s ) */
#ifndef zx_is_Item_EXT
#define zx_is_Item_EXT
#endif
struct zx_is_Item_s {
  ZX_ELEM_EXT
  zx_is_Item_EXT
  struct zx_elem_s* Hint;	/* {0,1} xs:string */
  struct zx_attr_s* label;	/* {0,1} attribute xs:string */
  struct zx_attr_s* value;	/* {1,1} attribute xs:string */
};

#define zx_NEW_is_Item(c, father) (struct zx_is_Item_s*)zx_new_elem((c),(father),zx_is_Item_ELEM)
int zx_DEC_ATTR_is_Item(struct zx_ctx* c, struct zx_is_Item_s* x);
int zx_DEC_ELEM_is_Item(struct zx_ctx* c, struct zx_is_Item_s* x);

#ifdef ZX_ENA_AUX
struct zx_is_Item_s* zx_DEEP_CLONE_is_Item(struct zx_ctx* c, struct zx_is_Item_s* x, int dup_strs);
void zx_DUP_STRS_is_Item(struct zx_ctx* c, struct zx_is_Item_s* x);
int zx_WALK_SO_is_Item(struct zx_ctx* c, struct zx_is_Item_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_is_Item(struct zx_ctx* c, struct zx_is_Item_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif

#ifdef ZX_ENA_GETPUT
struct zx_attr_s* zx_is_Item_GET_label(struct zx_is_Item_s* x);
struct zx_attr_s* zx_is_Item_GET_value(struct zx_is_Item_s* x);

struct zx_elem_s* zx_is_Item_GET_Hint(struct zx_is_Item_s* x, int n);

int zx_is_Item_NUM_Hint(struct zx_is_Item_s* x);

struct zx_elem_s* zx_is_Item_POP_Hint(struct zx_is_Item_s* x);

void zx_is_Item_PUSH_Hint(struct zx_is_Item_s* x, struct zx_elem_s* y);

void zx_is_Item_PUT_label(struct zx_is_Item_s* x, struct zx_attr_s* y);
void zx_is_Item_PUT_value(struct zx_is_Item_s* x, struct zx_attr_s* y);

void zx_is_Item_PUT_Hint(struct zx_is_Item_s* x, int n, struct zx_elem_s* y);

void zx_is_Item_ADD_Hint(struct zx_is_Item_s* x, int n, struct zx_elem_s* z);

void zx_is_Item_DEL_Hint(struct zx_is_Item_s* x,int n);

void zx_is_Item_REV_Hint(struct zx_is_Item_s* x);

#endif
/* -------------------------- is_Parameter -------------------------- */
/* refby( zx_is_InteractionResponse_s ) */
#ifndef zx_is_Parameter_EXT
#define zx_is_Parameter_EXT
#endif
struct zx_is_Parameter_s {
  ZX_ELEM_EXT
  zx_is_Parameter_EXT
  struct zx_attr_s* name;	/* {1,1} attribute xs:ID */
  struct zx_attr_s* value;	/* {1,1} attribute xs:string */
};

#define zx_NEW_is_Parameter(c, father) (struct zx_is_Parameter_s*)zx_new_elem((c),(father),zx_is_Parameter_ELEM)
int zx_DEC_ATTR_is_Parameter(struct zx_ctx* c, struct zx_is_Parameter_s* x);
int zx_DEC_ELEM_is_Parameter(struct zx_ctx* c, struct zx_is_Parameter_s* x);

#ifdef ZX_ENA_AUX
struct zx_is_Parameter_s* zx_DEEP_CLONE_is_Parameter(struct zx_ctx* c, struct zx_is_Parameter_s* x, int dup_strs);
void zx_DUP_STRS_is_Parameter(struct zx_ctx* c, struct zx_is_Parameter_s* x);
int zx_WALK_SO_is_Parameter(struct zx_ctx* c, struct zx_is_Parameter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_is_Parameter(struct zx_ctx* c, struct zx_is_Parameter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif

#ifdef ZX_ENA_GETPUT
struct zx_attr_s* zx_is_Parameter_GET_name(struct zx_is_Parameter_s* x);
struct zx_attr_s* zx_is_Parameter_GET_value(struct zx_is_Parameter_s* x);





void zx_is_Parameter_PUT_name(struct zx_is_Parameter_s* x, struct zx_attr_s* y);
void zx_is_Parameter_PUT_value(struct zx_is_Parameter_s* x, struct zx_attr_s* y);





#endif
/* -------------------------- is_Select -------------------------- */
/* refby( zx_is_Inquiry_s ) */
#ifndef zx_is_Select_EXT
#define zx_is_Select_EXT
#endif
struct zx_is_Select_s {
  ZX_ELEM_EXT
  zx_is_Select_EXT
  struct zx_is_Help_s* Help;	/* {0,1} nada */
  struct zx_elem_s* Hint;	/* {0,1} xs:string */
  struct zx_elem_s* Label;	/* {0,1} xs:normalizedString */
  struct zx_elem_s* Value;	/* {0,1} xs:normalizedString */
  struct zx_is_Item_s* Item;	/* {2,unbounded}  */
  struct zx_attr_s* multiple;	/* {0,1} attribute xs:boolean */
  struct zx_attr_s* name;	/* {1,1} attribute xs:ID */
};

#define zx_NEW_is_Select(c, father) (struct zx_is_Select_s*)zx_new_elem((c),(father),zx_is_Select_ELEM)
int zx_DEC_ATTR_is_Select(struct zx_ctx* c, struct zx_is_Select_s* x);
int zx_DEC_ELEM_is_Select(struct zx_ctx* c, struct zx_is_Select_s* x);

#ifdef ZX_ENA_AUX
struct zx_is_Select_s* zx_DEEP_CLONE_is_Select(struct zx_ctx* c, struct zx_is_Select_s* x, int dup_strs);
void zx_DUP_STRS_is_Select(struct zx_ctx* c, struct zx_is_Select_s* x);
int zx_WALK_SO_is_Select(struct zx_ctx* c, struct zx_is_Select_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_is_Select(struct zx_ctx* c, struct zx_is_Select_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif

#ifdef ZX_ENA_GETPUT
struct zx_attr_s* zx_is_Select_GET_multiple(struct zx_is_Select_s* x);
struct zx_attr_s* zx_is_Select_GET_name(struct zx_is_Select_s* x);

struct zx_is_Help_s* zx_is_Select_GET_Help(struct zx_is_Select_s* x, int n);
struct zx_elem_s* zx_is_Select_GET_Hint(struct zx_is_Select_s* x, int n);
struct zx_elem_s* zx_is_Select_GET_Label(struct zx_is_Select_s* x, int n);
struct zx_elem_s* zx_is_Select_GET_Value(struct zx_is_Select_s* x, int n);
struct zx_is_Item_s* zx_is_Select_GET_Item(struct zx_is_Select_s* x, int n);

int zx_is_Select_NUM_Help(struct zx_is_Select_s* x);
int zx_is_Select_NUM_Hint(struct zx_is_Select_s* x);
int zx_is_Select_NUM_Label(struct zx_is_Select_s* x);
int zx_is_Select_NUM_Value(struct zx_is_Select_s* x);
int zx_is_Select_NUM_Item(struct zx_is_Select_s* x);

struct zx_is_Help_s* zx_is_Select_POP_Help(struct zx_is_Select_s* x);
struct zx_elem_s* zx_is_Select_POP_Hint(struct zx_is_Select_s* x);
struct zx_elem_s* zx_is_Select_POP_Label(struct zx_is_Select_s* x);
struct zx_elem_s* zx_is_Select_POP_Value(struct zx_is_Select_s* x);
struct zx_is_Item_s* zx_is_Select_POP_Item(struct zx_is_Select_s* x);

void zx_is_Select_PUSH_Help(struct zx_is_Select_s* x, struct zx_is_Help_s* y);
void zx_is_Select_PUSH_Hint(struct zx_is_Select_s* x, struct zx_elem_s* y);
void zx_is_Select_PUSH_Label(struct zx_is_Select_s* x, struct zx_elem_s* y);
void zx_is_Select_PUSH_Value(struct zx_is_Select_s* x, struct zx_elem_s* y);
void zx_is_Select_PUSH_Item(struct zx_is_Select_s* x, struct zx_is_Item_s* y);

void zx_is_Select_PUT_multiple(struct zx_is_Select_s* x, struct zx_attr_s* y);
void zx_is_Select_PUT_name(struct zx_is_Select_s* x, struct zx_attr_s* y);

void zx_is_Select_PUT_Help(struct zx_is_Select_s* x, int n, struct zx_is_Help_s* y);
void zx_is_Select_PUT_Hint(struct zx_is_Select_s* x, int n, struct zx_elem_s* y);
void zx_is_Select_PUT_Label(struct zx_is_Select_s* x, int n, struct zx_elem_s* y);
void zx_is_Select_PUT_Value(struct zx_is_Select_s* x, int n, struct zx_elem_s* y);
void zx_is_Select_PUT_Item(struct zx_is_Select_s* x, int n, struct zx_is_Item_s* y);

void zx_is_Select_ADD_Help(struct zx_is_Select_s* x, int n, struct zx_is_Help_s* z);
void zx_is_Select_ADD_Hint(struct zx_is_Select_s* x, int n, struct zx_elem_s* z);
void zx_is_Select_ADD_Label(struct zx_is_Select_s* x, int n, struct zx_elem_s* z);
void zx_is_Select_ADD_Value(struct zx_is_Select_s* x, int n, struct zx_elem_s* z);
void zx_is_Select_ADD_Item(struct zx_is_Select_s* x, int n, struct zx_is_Item_s* z);

void zx_is_Select_DEL_Help(struct zx_is_Select_s* x, int n);
void zx_is_Select_DEL_Hint(struct zx_is_Select_s* x,int n);
void zx_is_Select_DEL_Label(struct zx_is_Select_s* x,int n);
void zx_is_Select_DEL_Value(struct zx_is_Select_s* x,int n);
void zx_is_Select_DEL_Item(struct zx_is_Select_s* x, int n);

void zx_is_Select_REV_Help(struct zx_is_Select_s* x);
void zx_is_Select_REV_Hint(struct zx_is_Select_s* x);
void zx_is_Select_REV_Label(struct zx_is_Select_s* x);
void zx_is_Select_REV_Value(struct zx_is_Select_s* x);
void zx_is_Select_REV_Item(struct zx_is_Select_s* x);

#endif
/* -------------------------- is_Text -------------------------- */
/* refby( zx_is_Inquiry_s ) */
#ifndef zx_is_Text_EXT
#define zx_is_Text_EXT
#endif
struct zx_is_Text_s {
  ZX_ELEM_EXT
  zx_is_Text_EXT
  struct zx_is_Help_s* Help;	/* {0,1} nada */
  struct zx_elem_s* Hint;	/* {0,1} xs:string */
  struct zx_elem_s* Label;	/* {0,1} xs:normalizedString */
  struct zx_elem_s* Value;	/* {0,1} xs:normalizedString */
  struct zx_attr_s* format;	/* {0,1} attribute xs:string */
  struct zx_attr_s* maxChars;	/* {0,1} attribute xs:integer */
  struct zx_attr_s* minChars;	/* {0,1} attribute xs:integer */
  struct zx_attr_s* name;	/* {1,1} attribute xs:ID */
};

#define zx_NEW_is_Text(c, father) (struct zx_is_Text_s*)zx_new_elem((c),(father),zx_is_Text_ELEM)
int zx_DEC_ATTR_is_Text(struct zx_ctx* c, struct zx_is_Text_s* x);
int zx_DEC_ELEM_is_Text(struct zx_ctx* c, struct zx_is_Text_s* x);

#ifdef ZX_ENA_AUX
struct zx_is_Text_s* zx_DEEP_CLONE_is_Text(struct zx_ctx* c, struct zx_is_Text_s* x, int dup_strs);
void zx_DUP_STRS_is_Text(struct zx_ctx* c, struct zx_is_Text_s* x);
int zx_WALK_SO_is_Text(struct zx_ctx* c, struct zx_is_Text_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_is_Text(struct zx_ctx* c, struct zx_is_Text_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif

#ifdef ZX_ENA_GETPUT
struct zx_attr_s* zx_is_Text_GET_format(struct zx_is_Text_s* x);
struct zx_attr_s* zx_is_Text_GET_maxChars(struct zx_is_Text_s* x);
struct zx_attr_s* zx_is_Text_GET_minChars(struct zx_is_Text_s* x);
struct zx_attr_s* zx_is_Text_GET_name(struct zx_is_Text_s* x);

struct zx_is_Help_s* zx_is_Text_GET_Help(struct zx_is_Text_s* x, int n);
struct zx_elem_s* zx_is_Text_GET_Hint(struct zx_is_Text_s* x, int n);
struct zx_elem_s* zx_is_Text_GET_Label(struct zx_is_Text_s* x, int n);
struct zx_elem_s* zx_is_Text_GET_Value(struct zx_is_Text_s* x, int n);

int zx_is_Text_NUM_Help(struct zx_is_Text_s* x);
int zx_is_Text_NUM_Hint(struct zx_is_Text_s* x);
int zx_is_Text_NUM_Label(struct zx_is_Text_s* x);
int zx_is_Text_NUM_Value(struct zx_is_Text_s* x);

struct zx_is_Help_s* zx_is_Text_POP_Help(struct zx_is_Text_s* x);
struct zx_elem_s* zx_is_Text_POP_Hint(struct zx_is_Text_s* x);
struct zx_elem_s* zx_is_Text_POP_Label(struct zx_is_Text_s* x);
struct zx_elem_s* zx_is_Text_POP_Value(struct zx_is_Text_s* x);

void zx_is_Text_PUSH_Help(struct zx_is_Text_s* x, struct zx_is_Help_s* y);
void zx_is_Text_PUSH_Hint(struct zx_is_Text_s* x, struct zx_elem_s* y);
void zx_is_Text_PUSH_Label(struct zx_is_Text_s* x, struct zx_elem_s* y);
void zx_is_Text_PUSH_Value(struct zx_is_Text_s* x, struct zx_elem_s* y);

void zx_is_Text_PUT_format(struct zx_is_Text_s* x, struct zx_attr_s* y);
void zx_is_Text_PUT_maxChars(struct zx_is_Text_s* x, struct zx_attr_s* y);
void zx_is_Text_PUT_minChars(struct zx_is_Text_s* x, struct zx_attr_s* y);
void zx_is_Text_PUT_name(struct zx_is_Text_s* x, struct zx_attr_s* y);

void zx_is_Text_PUT_Help(struct zx_is_Text_s* x, int n, struct zx_is_Help_s* y);
void zx_is_Text_PUT_Hint(struct zx_is_Text_s* x, int n, struct zx_elem_s* y);
void zx_is_Text_PUT_Label(struct zx_is_Text_s* x, int n, struct zx_elem_s* y);
void zx_is_Text_PUT_Value(struct zx_is_Text_s* x, int n, struct zx_elem_s* y);

void zx_is_Text_ADD_Help(struct zx_is_Text_s* x, int n, struct zx_is_Help_s* z);
void zx_is_Text_ADD_Hint(struct zx_is_Text_s* x, int n, struct zx_elem_s* z);
void zx_is_Text_ADD_Label(struct zx_is_Text_s* x, int n, struct zx_elem_s* z);
void zx_is_Text_ADD_Value(struct zx_is_Text_s* x, int n, struct zx_elem_s* z);

void zx_is_Text_DEL_Help(struct zx_is_Text_s* x, int n);
void zx_is_Text_DEL_Hint(struct zx_is_Text_s* x,int n);
void zx_is_Text_DEL_Label(struct zx_is_Text_s* x,int n);
void zx_is_Text_DEL_Value(struct zx_is_Text_s* x,int n);

void zx_is_Text_REV_Help(struct zx_is_Text_s* x);
void zx_is_Text_REV_Hint(struct zx_is_Text_s* x);
void zx_is_Text_REV_Label(struct zx_is_Text_s* x);
void zx_is_Text_REV_Value(struct zx_is_Text_s* x);

#endif

#endif
