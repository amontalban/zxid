/* c/zx-as-aux.c - WARNING: This file was auto generated by xsd2sg.pl. DO NOT EDIT!
 * $Id$ */
/* Code generation design Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for terms and conditions
 * of use. Some aspects of code generation were driven by schema
 * descriptions that were used as input and may be subject to their own copyright.
 * Code generation uses a template, whose copyright statement follows. */

/** aux-templ.c  -  Auxiliary functions template: cloning, freeing, walking data
 ** Copyright (c) 2006 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 ** Author: Sampo Kellomaki (sampo@iki.fi)
 ** This is confidential unpublished proprietary source code of the author.
 ** NO WARRANTY, not even implied warranties. Contains trade secrets.
 ** Distribution prohibited unless authorized in writing.
 ** Licensed under Apache License 2.0, see file COPYING.
 ** Id: aux-templ.c,v 1.12 2008-10-04 23:42:14 sampo Exp $
 **
 ** 30.5.2006, created, Sampo Kellomaki (sampo@iki.fi)
 ** 6.8.2006, factored from enc-templ.c to separate file --Sampo
 **
 ** N.B: wo=wire order (needed for exc-c14n), so=schema order
 **/

#include <memory.h>
#include "errmac.h"
#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"
#include "c/zx-as-data.h"



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

#define EL_NAME   as_Extensions
#define EL_STRUCT zx_as_Extensions_s
#define EL_NS     as
#define EL_TAG    Extensions

/* FUNC(zx_FREE_as_Extensions) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_as_Extensions(struct zx_ctx* c, struct zx_as_Extensions_s* x, int free_strs)
{
  struct zx_elem_s* e  MAYBE_UNUSED;
  struct zx_elem_s* en MAYBE_UNUSED;

  /* *** deal with xmlns specifications in exc c14n way */




  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_as_Extensions) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_as_Extensions_s* zx_NEW_as_Extensions(struct zx_ctx* c)
{
  struct zx_as_Extensions_s* x = ZX_ZALLOC(c, struct zx_as_Extensions_s);
  x->gg.g.tok = zx_as_Extensions_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_as_Extensions) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_as_Extensions(struct zx_ctx* c, struct zx_as_Extensions_s* x)
{
  struct zx_elem_s* se  MAYBE_UNUSED;
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */



}

/* FUNC(zx_DEEP_CLONE_as_Extensions) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_as_Extensions_s* zx_DEEP_CLONE_as_Extensions(struct zx_ctx* c, struct zx_as_Extensions_s* x, int dup_strs)
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  struct zx_elem_s* en  MAYBE_UNUSED;
  struct zx_elem_s* enn MAYBE_UNUSED;

  x = (struct zx_as_Extensions_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_as_Extensions_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */



  return x;
}

/* FUNC(zx_WALK_SO_as_Extensions) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_as_Extensions(struct zx_ctx* c, struct zx_as_Extensions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;


  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_as_Extensions) */

int zx_WALK_WO_as_Extensions(struct zx_ctx* c, struct zx_as_Extensions_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}

#endif




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

#define EL_NAME   as_Parameter
#define EL_STRUCT zx_as_Parameter_s
#define EL_NS     as
#define EL_TAG    Parameter

/* FUNC(zx_FREE_as_Parameter) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_as_Parameter(struct zx_ctx* c, struct zx_as_Parameter_s* x, int free_strs)
{
  struct zx_elem_s* e  MAYBE_UNUSED;
  struct zx_elem_s* en MAYBE_UNUSED;

  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->name, free_strs);



  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_as_Parameter) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_as_Parameter_s* zx_NEW_as_Parameter(struct zx_ctx* c)
{
  struct zx_as_Parameter_s* x = ZX_ZALLOC(c, struct zx_as_Parameter_s);
  x->gg.g.tok = zx_as_Parameter_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_as_Parameter) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_as_Parameter(struct zx_ctx* c, struct zx_as_Parameter_s* x)
{
  struct zx_elem_s* se  MAYBE_UNUSED;
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->name);


}

/* FUNC(zx_DEEP_CLONE_as_Parameter) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_as_Parameter_s* zx_DEEP_CLONE_as_Parameter(struct zx_ctx* c, struct zx_as_Parameter_s* x, int dup_strs)
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  struct zx_elem_s* en  MAYBE_UNUSED;
  struct zx_elem_s* enn MAYBE_UNUSED;

  x = (struct zx_as_Parameter_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_as_Parameter_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->name = zx_clone_attr(c, x->name);


  return x;
}

/* FUNC(zx_WALK_SO_as_Parameter) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_as_Parameter(struct zx_ctx* c, struct zx_as_Parameter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;


  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_as_Parameter) */

int zx_WALK_WO_as_Parameter(struct zx_ctx* c, struct zx_as_Parameter_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}

#endif




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

#define EL_NAME   as_PasswordTransforms
#define EL_STRUCT zx_as_PasswordTransforms_s
#define EL_NS     as
#define EL_TAG    PasswordTransforms

/* FUNC(zx_FREE_as_PasswordTransforms) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_as_PasswordTransforms(struct zx_ctx* c, struct zx_as_PasswordTransforms_s* x, int free_strs)
{
  struct zx_elem_s* e  MAYBE_UNUSED;
  struct zx_elem_s* en MAYBE_UNUSED;

  /* *** deal with xmlns specifications in exc c14n way */


  for (e = &x->Transform->gg;
       e && e->g.tok == zx_as_Transform_ELEM;
       e = en) {
    en = (struct zx_elem_s*)e->g.n;
    zx_FREE_as_Transform(c, (struct zx_as_Transform_s*)e, free_strs);
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_as_PasswordTransforms) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_as_PasswordTransforms_s* zx_NEW_as_PasswordTransforms(struct zx_ctx* c)
{
  struct zx_as_PasswordTransforms_s* x = ZX_ZALLOC(c, struct zx_as_PasswordTransforms_s);
  x->gg.g.tok = zx_as_PasswordTransforms_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_as_PasswordTransforms) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_as_PasswordTransforms(struct zx_ctx* c, struct zx_as_PasswordTransforms_s* x)
{
  struct zx_elem_s* se  MAYBE_UNUSED;
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */


  for (se = &x->Transform->gg;
       se && se->g.tok == zx_as_Transform_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    zx_DUP_STRS_as_Transform(c, (struct zx_as_Transform_s*)se);

}

/* FUNC(zx_DEEP_CLONE_as_PasswordTransforms) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_as_PasswordTransforms_s* zx_DEEP_CLONE_as_PasswordTransforms(struct zx_ctx* c, struct zx_as_PasswordTransforms_s* x, int dup_strs)
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  struct zx_elem_s* en  MAYBE_UNUSED;
  struct zx_elem_s* enn MAYBE_UNUSED;

  x = (struct zx_as_PasswordTransforms_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_as_PasswordTransforms_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */


  for (enn = 0, e = &x->Transform->gg;
       e && e->g.tok == zx_as_Transform_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
  	  en=(struct zx_elem_s*)zx_DEEP_CLONE_as_Transform(c,(struct zx_as_Transform_s*)e,dup_strs);
  	  if (!enn)
  	      x->Transform = (struct zx_as_Transform_s*)en;
  	  else
  	      enn->g.n = &en->g;
  	  enn = en;
  }

  return x;
}

/* FUNC(zx_WALK_SO_as_PasswordTransforms) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_as_PasswordTransforms(struct zx_ctx* c, struct zx_as_PasswordTransforms_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  for (e = &x->Transform->gg;
       e && e->g.tok == zx_as_Transform_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
    ret = zx_WALK_SO_as_Transform(c, (struct zx_as_Transform_s*)e, ctx, callback);
    if (ret)
      return ret;
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_as_PasswordTransforms) */

int zx_WALK_WO_as_PasswordTransforms(struct zx_ctx* c, struct zx_as_PasswordTransforms_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}

#endif




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

#define EL_NAME   as_SASLRequest
#define EL_STRUCT zx_as_SASLRequest_s
#define EL_NS     as
#define EL_TAG    SASLRequest

/* FUNC(zx_FREE_as_SASLRequest) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_as_SASLRequest(struct zx_ctx* c, struct zx_as_SASLRequest_s* x, int free_strs)
{
  struct zx_elem_s* e  MAYBE_UNUSED;
  struct zx_elem_s* en MAYBE_UNUSED;

  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->advisoryAuthnID, free_strs);
  zx_free_attr(c, x->authzID, free_strs);
  zx_free_attr(c, x->mechanism, free_strs);

  zx_free_simple_elems(c, x->Data, free_strs);
  for (e = &x->RequestedAuthnContext->gg;
       e && e->g.tok == zx_sp_RequestedAuthnContext_ELEM;
       e = en) {
    en = (struct zx_elem_s*)e->g.n;
    zx_FREE_sp_RequestedAuthnContext(c, (struct zx_sp_RequestedAuthnContext_s*)e, free_strs);
  }
  for (e = &x->Extensions->gg;
       e && e->g.tok == zx_as_Extensions_ELEM;
       e = en) {
    en = (struct zx_elem_s*)e->g.n;
    zx_FREE_as_Extensions(c, (struct zx_as_Extensions_s*)e, free_strs);
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_as_SASLRequest) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_as_SASLRequest_s* zx_NEW_as_SASLRequest(struct zx_ctx* c)
{
  struct zx_as_SASLRequest_s* x = ZX_ZALLOC(c, struct zx_as_SASLRequest_s);
  x->gg.g.tok = zx_as_SASLRequest_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_as_SASLRequest) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_as_SASLRequest(struct zx_ctx* c, struct zx_as_SASLRequest_s* x)
{
  struct zx_elem_s* se  MAYBE_UNUSED;
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->advisoryAuthnID);
  zx_dup_attr(c, x->authzID);
  zx_dup_attr(c, x->mechanism);

  zx_dup_strs_simple_elems(c, x->Data);
  for (se = &x->RequestedAuthnContext->gg;
       se && se->g.tok == zx_sp_RequestedAuthnContext_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    zx_DUP_STRS_sp_RequestedAuthnContext(c, (struct zx_sp_RequestedAuthnContext_s*)se);
  for (se = &x->Extensions->gg;
       se && se->g.tok == zx_as_Extensions_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    zx_DUP_STRS_as_Extensions(c, (struct zx_as_Extensions_s*)se);

}

/* FUNC(zx_DEEP_CLONE_as_SASLRequest) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_as_SASLRequest_s* zx_DEEP_CLONE_as_SASLRequest(struct zx_ctx* c, struct zx_as_SASLRequest_s* x, int dup_strs)
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  struct zx_elem_s* en  MAYBE_UNUSED;
  struct zx_elem_s* enn MAYBE_UNUSED;

  x = (struct zx_as_SASLRequest_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_as_SASLRequest_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->advisoryAuthnID = zx_clone_attr(c, x->advisoryAuthnID);
  x->authzID = zx_clone_attr(c, x->authzID);
  x->mechanism = zx_clone_attr(c, x->mechanism);

  x->Data = zx_deep_clone_simple_elems(c,x->Data, dup_strs);
  for (enn = 0, e = &x->RequestedAuthnContext->gg;
       e && e->g.tok == zx_sp_RequestedAuthnContext_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
  	  en=(struct zx_elem_s*)zx_DEEP_CLONE_sp_RequestedAuthnContext(c,(struct zx_sp_RequestedAuthnContext_s*)e,dup_strs);
  	  if (!enn)
  	      x->RequestedAuthnContext = (struct zx_sp_RequestedAuthnContext_s*)en;
  	  else
  	      enn->g.n = &en->g;
  	  enn = en;
  }
  for (enn = 0, e = &x->Extensions->gg;
       e && e->g.tok == zx_as_Extensions_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
  	  en=(struct zx_elem_s*)zx_DEEP_CLONE_as_Extensions(c,(struct zx_as_Extensions_s*)e,dup_strs);
  	  if (!enn)
  	      x->Extensions = (struct zx_as_Extensions_s*)en;
  	  else
  	      enn->g.n = &en->g;
  	  enn = en;
  }

  return x;
}

/* FUNC(zx_WALK_SO_as_SASLRequest) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_as_SASLRequest(struct zx_ctx* c, struct zx_as_SASLRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  ret = zx_walk_so_simple_elems(c, x->Data, ctx, callback);
  if (ret)
    return ret;
  for (e = &x->RequestedAuthnContext->gg;
       e && e->g.tok == zx_sp_RequestedAuthnContext_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
    ret = zx_WALK_SO_sp_RequestedAuthnContext(c, (struct zx_sp_RequestedAuthnContext_s*)e, ctx, callback);
    if (ret)
      return ret;
  }
  for (e = &x->Extensions->gg;
       e && e->g.tok == zx_as_Extensions_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
    ret = zx_WALK_SO_as_Extensions(c, (struct zx_as_Extensions_s*)e, ctx, callback);
    if (ret)
      return ret;
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_as_SASLRequest) */

int zx_WALK_WO_as_SASLRequest(struct zx_ctx* c, struct zx_as_SASLRequest_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}

#endif




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

#define EL_NAME   as_SASLResponse
#define EL_STRUCT zx_as_SASLResponse_s
#define EL_NS     as
#define EL_TAG    SASLResponse

/* FUNC(zx_FREE_as_SASLResponse) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_as_SASLResponse(struct zx_ctx* c, struct zx_as_SASLResponse_s* x, int free_strs)
{
  struct zx_elem_s* e  MAYBE_UNUSED;
  struct zx_elem_s* en MAYBE_UNUSED;

  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->serverMechanism, free_strs);

  for (e = &x->Status->gg;
       e && e->g.tok == zx_lu_Status_ELEM;
       e = en) {
    en = (struct zx_elem_s*)e->g.n;
    zx_FREE_lu_Status(c, (struct zx_lu_Status_s*)e, free_strs);
  }
  for (e = &x->PasswordTransforms->gg;
       e && e->g.tok == zx_as_PasswordTransforms_ELEM;
       e = en) {
    en = (struct zx_elem_s*)e->g.n;
    zx_FREE_as_PasswordTransforms(c, (struct zx_as_PasswordTransforms_s*)e, free_strs);
  }
  zx_free_simple_elems(c, x->Data, free_strs);
  for (e = &x->EndpointReference->gg;
       e && e->g.tok == zx_a_EndpointReference_ELEM;
       e = en) {
    en = (struct zx_elem_s*)e->g.n;
    zx_FREE_a_EndpointReference(c, (struct zx_a_EndpointReference_s*)e, free_strs);
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_as_SASLResponse) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_as_SASLResponse_s* zx_NEW_as_SASLResponse(struct zx_ctx* c)
{
  struct zx_as_SASLResponse_s* x = ZX_ZALLOC(c, struct zx_as_SASLResponse_s);
  x->gg.g.tok = zx_as_SASLResponse_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_as_SASLResponse) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_as_SASLResponse(struct zx_ctx* c, struct zx_as_SASLResponse_s* x)
{
  struct zx_elem_s* se  MAYBE_UNUSED;
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->serverMechanism);

  for (se = &x->Status->gg;
       se && se->g.tok == zx_lu_Status_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    zx_DUP_STRS_lu_Status(c, (struct zx_lu_Status_s*)se);
  for (se = &x->PasswordTransforms->gg;
       se && se->g.tok == zx_as_PasswordTransforms_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    zx_DUP_STRS_as_PasswordTransforms(c, (struct zx_as_PasswordTransforms_s*)se);
  zx_dup_strs_simple_elems(c, x->Data);
  for (se = &x->EndpointReference->gg;
       se && se->g.tok == zx_a_EndpointReference_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    zx_DUP_STRS_a_EndpointReference(c, (struct zx_a_EndpointReference_s*)se);

}

/* FUNC(zx_DEEP_CLONE_as_SASLResponse) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_as_SASLResponse_s* zx_DEEP_CLONE_as_SASLResponse(struct zx_ctx* c, struct zx_as_SASLResponse_s* x, int dup_strs)
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  struct zx_elem_s* en  MAYBE_UNUSED;
  struct zx_elem_s* enn MAYBE_UNUSED;

  x = (struct zx_as_SASLResponse_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_as_SASLResponse_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->serverMechanism = zx_clone_attr(c, x->serverMechanism);

  for (enn = 0, e = &x->Status->gg;
       e && e->g.tok == zx_lu_Status_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
  	  en=(struct zx_elem_s*)zx_DEEP_CLONE_lu_Status(c,(struct zx_lu_Status_s*)e,dup_strs);
  	  if (!enn)
  	      x->Status = (struct zx_lu_Status_s*)en;
  	  else
  	      enn->g.n = &en->g;
  	  enn = en;
  }
  for (enn = 0, e = &x->PasswordTransforms->gg;
       e && e->g.tok == zx_as_PasswordTransforms_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
  	  en=(struct zx_elem_s*)zx_DEEP_CLONE_as_PasswordTransforms(c,(struct zx_as_PasswordTransforms_s*)e,dup_strs);
  	  if (!enn)
  	      x->PasswordTransforms = (struct zx_as_PasswordTransforms_s*)en;
  	  else
  	      enn->g.n = &en->g;
  	  enn = en;
  }
  x->Data = zx_deep_clone_simple_elems(c,x->Data, dup_strs);
  for (enn = 0, e = &x->EndpointReference->gg;
       e && e->g.tok == zx_a_EndpointReference_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
  	  en=(struct zx_elem_s*)zx_DEEP_CLONE_a_EndpointReference(c,(struct zx_a_EndpointReference_s*)e,dup_strs);
  	  if (!enn)
  	      x->EndpointReference = (struct zx_a_EndpointReference_s*)en;
  	  else
  	      enn->g.n = &en->g;
  	  enn = en;
  }

  return x;
}

/* FUNC(zx_WALK_SO_as_SASLResponse) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_as_SASLResponse(struct zx_ctx* c, struct zx_as_SASLResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  for (e = &x->Status->gg;
       e && e->g.tok == zx_lu_Status_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
    ret = zx_WALK_SO_lu_Status(c, (struct zx_lu_Status_s*)e, ctx, callback);
    if (ret)
      return ret;
  }
  for (e = &x->PasswordTransforms->gg;
       e && e->g.tok == zx_as_PasswordTransforms_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
    ret = zx_WALK_SO_as_PasswordTransforms(c, (struct zx_as_PasswordTransforms_s*)e, ctx, callback);
    if (ret)
      return ret;
  }
  ret = zx_walk_so_simple_elems(c, x->Data, ctx, callback);
  if (ret)
    return ret;
  for (e = &x->EndpointReference->gg;
       e && e->g.tok == zx_a_EndpointReference_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
    ret = zx_WALK_SO_a_EndpointReference(c, (struct zx_a_EndpointReference_s*)e, ctx, callback);
    if (ret)
      return ret;
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_as_SASLResponse) */

int zx_WALK_WO_as_SASLResponse(struct zx_ctx* c, struct zx_as_SASLResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}

#endif




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

#define EL_NAME   as_Transform
#define EL_STRUCT zx_as_Transform_s
#define EL_NS     as
#define EL_TAG    Transform

/* FUNC(zx_FREE_as_Transform) */

/* Depth first traversal of data structure to free it and its subelements. Simple
 * strings are handled as a special case according to the free_strs flag. This
 * is useful if the strings point to underlying data from the wire that was
 * allocated differently. */

/* Called by: */
void zx_FREE_as_Transform(struct zx_ctx* c, struct zx_as_Transform_s* x, int free_strs)
{
  struct zx_elem_s* e  MAYBE_UNUSED;
  struct zx_elem_s* en MAYBE_UNUSED;

  /* *** deal with xmlns specifications in exc c14n way */

  zx_free_attr(c, x->name, free_strs);

  for (e = &x->Parameter->gg;
       e && e->g.tok == zx_as_Parameter_ELEM;
       e = en) {
    en = (struct zx_elem_s*)e->g.n;
    zx_FREE_as_Parameter(c, (struct zx_as_Parameter_s*)e, free_strs);
  }


  zx_free_elem_common(c, &x->gg, free_strs); 
}

/* FUNC(zx_NEW_as_Transform) */

/* Trivial allocator/constructor for the datatype. */

/* Called by: */
struct zx_as_Transform_s* zx_NEW_as_Transform(struct zx_ctx* c)
{
  struct zx_as_Transform_s* x = ZX_ZALLOC(c, struct zx_as_Transform_s);
  x->gg.g.tok = zx_as_Transform_ELEM;
  return x;
}

#ifdef ZX_ENA_AUX

/* FUNC(zx_DUP_STRS_as_Transform) */

/* Depth first traversal of data structure to copy its simple strings
 * to memory allocated from the memory allocator. The decoder will
 * use the underlying wireprotocol PDU buffer for strings, i.e.
 * strings are not copied - they point to the real data. If the
 * datastructure needs to outlast the protocol data or needs a different
 * memory allocation strategy, you need to call this function.  */

/* Called by: */
void zx_DUP_STRS_as_Transform(struct zx_ctx* c, struct zx_as_Transform_s* x)
{
  struct zx_elem_s* se  MAYBE_UNUSED;
  zx_dup_strs_common(c, &x->gg);
  /* *** deal with xmlns specifications in exc c14n way */

  zx_dup_attr(c, x->name);

  for (se = &x->Parameter->gg;
       se && se->g.tok == zx_as_Parameter_ELEM;
       se = (struct zx_elem_s*)se->g.n)
    zx_DUP_STRS_as_Parameter(c, (struct zx_as_Parameter_s*)se);

}

/* FUNC(zx_DEEP_CLONE_as_Transform) */

/* Depth first traversal of data structure to clone it and its sublements.
 * The simple strings are handled as a special case according to dup_strs flag. */

/* Called by: */
struct zx_as_Transform_s* zx_DEEP_CLONE_as_Transform(struct zx_ctx* c, struct zx_as_Transform_s* x, int dup_strs)
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  struct zx_elem_s* en  MAYBE_UNUSED;
  struct zx_elem_s* enn MAYBE_UNUSED;

  x = (struct zx_as_Transform_s*)zx_clone_elem_common(c, &x->gg, sizeof(struct zx_as_Transform_s), dup_strs);
  /* *** deal with xmlns specifications in exc c14n way */

  x->name = zx_clone_attr(c, x->name);

  for (enn = 0, e = &x->Parameter->gg;
       e && e->g.tok == zx_as_Parameter_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
  	  en=(struct zx_elem_s*)zx_DEEP_CLONE_as_Parameter(c,(struct zx_as_Parameter_s*)e,dup_strs);
  	  if (!enn)
  	      x->Parameter = (struct zx_as_Parameter_s*)en;
  	  else
  	      enn->g.n = &en->g;
  	  enn = en;
  }

  return x;
}

/* FUNC(zx_WALK_SO_as_Transform) */

/* Depth first traversal of the tree in either schema order or the wire order. */
 
int zx_WALK_SO_as_Transform(struct zx_ctx* c, struct zx_as_Transform_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  struct zx_elem_s* e   MAYBE_UNUSED;
  int ret = callback(&x->gg.g, ctx);
  if (ret)
    return ret;
  
  /* *** deal with xmlns specifications in exc c14n way */


  
  ret = zx_walk_so_unknown_attributes(c, &x->gg, ctx, callback); 
  if (ret)
    return ret;

  for (e = &x->Parameter->gg;
       e && e->g.tok == zx_as_Parameter_ELEM;
       e = (struct zx_elem_s*)e->g.n) {
    ret = zx_WALK_SO_as_Parameter(c, (struct zx_as_Parameter_s*)e, ctx, callback);
    if (ret)
      return ret;
  }

  
  return zx_walk_so_unknown_elems_and_content(c, &x->gg, ctx, callback);
}

/* FUNC(zx_WALK_WO_as_Transform) */

int zx_WALK_WO_as_Transform(struct zx_ctx* c, struct zx_as_Transform_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx))
{
  ERR("*** walk_wo not implemented %d", 0);
  return 0;
}

#endif


/* EOF -- c/zx-as-aux.c */
