/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2016 Justin Ethier
 ** Version 0.1.4 (alpha)
 **
 **/

#define closcall1(td, clo,a1) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 0, (closure)(a1), clo); \
} else { \
   ((clo)->fn)(td, 1, clo,a1);\
}
#define return_closcall1(td, clo,a1) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1;\
     GC(td, clo, buf, 1); \
     return; \
 } else {\
     closcall1(td, (closure) (clo),a1); \
     return;\
 } \
}

#define return_direct1(td, _fn,a1) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1; \
     mclosure0(c1, _fn); \
     GC(td, &c1, buf, 1); \
     return; \
 } else { \
     (_fn)(td, 1, (closure)_fn,a1); \
 }}

#define closcall2(td, clo,a1,a2) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 1, (closure)(a1), clo,a2); \
} else { \
   ((clo)->fn)(td, 2, clo,a1,a2);\
}
#define return_closcall2(td, clo,a1,a2) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2;\
     GC(td, clo, buf, 2); \
     return; \
 } else {\
     closcall2(td, (closure) (clo),a1,a2); \
     return;\
 } \
}

#define return_direct2(td, _fn,a1,a2) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2; \
     mclosure0(c1, _fn); \
     GC(td, &c1, buf, 2); \
     return; \
 } else { \
     (_fn)(td, 2, (closure)_fn,a1,a2); \
 }}

#include "cyclone/types.h"
object __glo_lib_91init_117schemecxr_scheme_cxr = NULL;
object __glo_caaaaar_scheme_cxr = NULL;
#include "cyclone/runtime.h"
static void __lambda_1(void *data, int argc, closure _,object k_734) ;
static void __lambda_0(void *data, int argc, closure _,object k_737, object lis_731) ;

static void __lambda_1(void *data, int argc, closure _,object k_734) {
  Cyc_st_add(data, "scheme/cxr.sld:lib-init:schemecxr");
return_closcall1(data,  k_734,  obj_int2obj(0));; 
}

static void __lambda_0(void *data, int argc, closure _,object k_737, object lis_731) {
  Cyc_st_add(data, "scheme/cxr.sld:caaaaar");
return_closcall1(data,  k_737,  car(car(car(car(car(lis_731))))));; 
}

void c_schemecxr_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 

  add_global((object *) &__glo_lib_91init_117schemecxr_scheme_cxr);
  add_global((object *) &__glo_caaaaar_scheme_cxr);
  mclosure0(c_7324, (function_type)__lambda_1);c_7324.num_args = 0; 
  __glo_lib_91init_117schemecxr_scheme_cxr = &c_7324; 
  mclosure0(c_7312, (function_type)__lambda_0);c_7312.num_args = 1; 
  __glo_caaaaar_scheme_cxr = &c_7312; 

  make_cvar(cvar_7326, (object *)&__glo_lib_91init_117schemecxr_scheme_cxr);make_pair(pair_7327, find_or_add_symbol("lib-init:schemecxr"), &cvar_7326);
  make_cvar(cvar_7328, (object *)&__glo_caaaaar_scheme_cxr);make_pair(pair_7329, find_or_add_symbol("caaaaar"), &cvar_7328);
make_pair(c_7330, &pair_7327,Cyc_global_variables);
make_pair(c_7331, &pair_7329, &c_7330);
Cyc_global_variables = &c_7331;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemecxr_scheme_cxr)->fn)(data, 1, cont, cont);
}
