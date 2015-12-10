/**
 ** This file was automatically generated by the Cyclone scheme compiler
 **
 ** (c) 2014 Justin Ethier
 ** Version 0.0.3 (Pre-release)
 **
 **/

#define closcall1(td,cfn,a1) if (type_of(cfn) == cons_tag || prim(cfn)) { Cyc_apply(td,0, (closure)a1, cfn); } else { ((cfn)->fn)(td,1,cfn,a1);}
/* Check for GC, then call given continuation closure */
#define return_closcall1(td,cfn,a1) \
{char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1;\
     GC(td,cfn,buf,1); return; \
 } else {closcall1(td,(closure) (cfn),a1); return;}}

/* Check for GC, then call C function directly */
#define return_direct1(td,_fn,a1) { \
 char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1; \
     mclosure0(c1, _fn); \
     GC(td,&c1, buf, 1); return; \
 } else { (_fn)(td,1,(closure)_fn,a1); }}

#define closcall2(td,cfn,a1,a2) if (type_of(cfn) == cons_tag || prim(cfn)) { Cyc_apply(td,1, (closure)a1, cfn,a2); } else { ((cfn)->fn)(td,2,cfn,a1,a2);}
/* Check for GC, then call given continuation closure */
#define return_closcall2(td,cfn,a1,a2) \
{char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2;\
     GC(td,cfn,buf,2); return; \
 } else {closcall2(td,(closure) (cfn),a1,a2); return;}}

/* Check for GC, then call C function directly */
#define return_direct2(td,_fn,a1,a2) { \
 char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2; \
     mclosure0(c1, _fn); \
     GC(td,&c1, buf, 2); return; \
 } else { (_fn)(td,2,(closure)_fn,a1,a2); }}

#include "cyclone/types.h"
object __glo_lib_91init_117schemewrite = nil;
object __glo_write = nil;
object __glo_display = nil;
extern object __glo_call_91with_91current_91continuation;
extern object __glo_call_95cc;
extern object __glo_call_91with_91values;
extern object __glo_dynamic_91wind;
extern object __glo_values;
extern object __glo_char_123_127;
extern object __glo_char_121_127;
extern object __glo_char_125_127;
extern object __glo_char_121_123_127;
extern object __glo_char_125_123_127;
extern object __glo_string_123_127;
extern object __glo_string_121_127;
extern object __glo_string_121_123_127;
extern object __glo_string_125_127;
extern object __glo_string_125_123_127;
extern object __glo_foldl;
extern object __glo_foldr;
extern object __glo_not;
extern object __glo_list_127;
extern object __glo_zero_127;
extern object __glo_positive_127;
extern object __glo_negative_127;
extern object __glo_append;
extern object __glo__list;
extern object __glo_make_91list;
extern object __glo_list_91copy;
extern object __glo_map;
extern object __glo_for_91each;
extern object __glo_list_91tail;
extern object __glo_list_91ref;
extern object __glo_list_91set_67;
extern object __glo_reverse;
extern object __glo_boolean_123_127;
extern object __glo_symbol_123_127;
extern object __glo_Cyc_91obj_123_127;
extern object __glo_vector;
extern object __glo_vector_91append;
extern object __glo_vector_91copy;
extern object __glo_vector_91copy_67;
extern object __glo_vector_91fill_67;
extern object __glo_vector_91_125list;
extern object __glo_vector_91_125string;
extern object __glo_vector_91map;
extern object __glo_vector_91for_91each;
extern object __glo_make_91string;
extern object __glo_string;
extern object __glo_string_91copy;
extern object __glo_string_91copy_67;
extern object __glo_string_91fill_67;
extern object __glo_string_91_125list;
extern object __glo_string_91_125vector;
extern object __glo_string_91map;
extern object __glo_string_91for_91each;
extern object __glo_make_91parameter;
extern object __glo_current_91output_91port;
extern object __glo_current_91input_91port;
extern object __glo_current_91error_91port;
extern object __glo_call_91with_91port;
extern object __glo_error;
extern object __glo_raise;
extern object __glo_raise_91continuable;
extern object __glo_with_91exception_91handler;
extern object __glo__85exception_91handler_91stack_85;
extern object __glo_Cyc_91add_91exception_91handler;
extern object __glo_Cyc_91remove_91exception_91handler;
extern object __glo_newline;
extern object __glo_write_91char;
extern object __glo_flush_91output_91port;
extern object __glo_read_91line;
extern object __glo_features;
extern object __glo_any;
extern object __glo_every;
extern object __glo_and;
extern object __glo_or;
extern object __glo_let;
extern object __glo_let_85;
extern object __glo_letrec;
extern object __glo_begin;
extern object __glo__case;
extern object __glo_cond;
extern object __glo_cond_91expand;
extern object __glo_when;
extern object __glo_quasiquote;
#include "cyclone/runtime.h"
static void __lambda_8(void *data, int argc, closure _,object k_737) ;
static void __lambda_7(void *data, int argc, closure _,object k_7310, object obj_732, object port_731_raw, ...) ;
static void __lambda_6(void *data, int argc, object self_7320, object r_7311) ;
static void __lambda_5(void *data, int argc, object self_7321, object r_7313) ;
static void __lambda_4(void *data, int argc, object self_7322, object r_7312) ;
static void __lambda_3(void *data, int argc, closure _,object k_7316, object obj_734, object port_733_raw, ...) ;
static void __lambda_2(void *data, int argc, object self_7323, object r_7317) ;
static void __lambda_1(void *data, int argc, object self_7324, object r_7319) ;
static void __lambda_0(void *data, int argc, object self_7325, object r_7318) ;

static void __lambda_8(void *data, int argc, closure _,object k_737) {
  Cyc_st_add("scheme/write.sld:lib-init:schemewrite");

make_int(c_7372, 0);
return_closcall1(data,  k_737,  &c_7372);; 
}

static void __lambda_7(void *data, int argc, closure _,object k_7310, object obj_732, object port_731_raw, ...) {
load_varargs(port_731, port_731_raw, argc - 2);
  Cyc_st_add("scheme/write.sld:write");

closureN_type c_7350;
c_7350.hdr.mark = gc_color_red;
 c_7350.hdr.grayed = 0;
c_7350.tag = closureN_tag;
 c_7350.fn = (function_type)__lambda_6;
c_7350.num_args = 1;
c_7350.num_elt = 3;
c_7350.elts = (object *)alloca(sizeof(object) * 3);
c_7350.elts[0] = k_7310;
c_7350.elts[1] = obj_732;
c_7350.elts[2] = port_731;

return_closcall1(data,(closure)&c_7350,  Cyc_is_null(port_731));; 
}

static void __lambda_6(void *data, int argc, object self_7320, object r_7311) {
  Cyc_st_add("scheme/write.sld:write");
if( !eq(boolean_f, r_7311) ){ 
  
closureN_type c_7352;
c_7352.hdr.mark = gc_color_red;
 c_7352.hdr.grayed = 0;
c_7352.tag = closureN_tag;
 c_7352.fn = (function_type)__lambda_4;
c_7352.num_args = 1;
c_7352.num_elt = 2;
c_7352.elts = (object *)alloca(sizeof(object) * 2);
c_7352.elts[0] = ((closureN)self_7320)->elts[0];
c_7352.elts[1] = ((closureN)self_7320)->elts[1];

return_closcall1(data,  __glo_current_91output_91port,  &c_7352);
} else { 
  
closureN_type c_7359;
c_7359.hdr.mark = gc_color_red;
 c_7359.hdr.grayed = 0;
c_7359.tag = closureN_tag;
 c_7359.fn = (function_type)__lambda_5;
c_7359.num_args = 1;
c_7359.num_elt = 2;
c_7359.elts = (object *)alloca(sizeof(object) * 2);
c_7359.elts[0] = ((closureN)self_7320)->elts[0];
c_7359.elts[1] = ((closureN)self_7320)->elts[1];

return_closcall1(data,(closure)&c_7359,  car(((closureN)self_7320)->elts[2]));}
; 
}

static void __lambda_5(void *data, int argc, object self_7321, object r_7313) {
  Cyc_st_add("scheme/write.sld:write");
return_closcall1(data,  ((closureN)self_7321)->elts[0],  Cyc_write_va(2,((closureN)self_7321)->elts[1], r_7313));; 
}

static void __lambda_4(void *data, int argc, object self_7322, object r_7312) {
  Cyc_st_add("scheme/write.sld:write");
return_closcall1(data,  ((closureN)self_7322)->elts[0],  Cyc_write_va(2,((closureN)self_7322)->elts[1], r_7312));; 
}

static void __lambda_3(void *data, int argc, closure _,object k_7316, object obj_734, object port_733_raw, ...) {
load_varargs(port_733, port_733_raw, argc - 2);
  Cyc_st_add("scheme/write.sld:display");

closureN_type c_7328;
c_7328.hdr.mark = gc_color_red;
 c_7328.hdr.grayed = 0;
c_7328.tag = closureN_tag;
 c_7328.fn = (function_type)__lambda_2;
c_7328.num_args = 1;
c_7328.num_elt = 3;
c_7328.elts = (object *)alloca(sizeof(object) * 3);
c_7328.elts[0] = k_7316;
c_7328.elts[1] = obj_734;
c_7328.elts[2] = port_733;

return_closcall1(data,(closure)&c_7328,  Cyc_is_null(port_733));; 
}

static void __lambda_2(void *data, int argc, object self_7323, object r_7317) {
  Cyc_st_add("scheme/write.sld:display");
if( !eq(boolean_f, r_7317) ){ 
  
closureN_type c_7330;
c_7330.hdr.mark = gc_color_red;
 c_7330.hdr.grayed = 0;
c_7330.tag = closureN_tag;
 c_7330.fn = (function_type)__lambda_0;
c_7330.num_args = 1;
c_7330.num_elt = 2;
c_7330.elts = (object *)alloca(sizeof(object) * 2);
c_7330.elts[0] = ((closureN)self_7323)->elts[0];
c_7330.elts[1] = ((closureN)self_7323)->elts[1];

return_closcall1(data,  __glo_current_91output_91port,  &c_7330);
} else { 
  
closureN_type c_7337;
c_7337.hdr.mark = gc_color_red;
 c_7337.hdr.grayed = 0;
c_7337.tag = closureN_tag;
 c_7337.fn = (function_type)__lambda_1;
c_7337.num_args = 1;
c_7337.num_elt = 2;
c_7337.elts = (object *)alloca(sizeof(object) * 2);
c_7337.elts[0] = ((closureN)self_7323)->elts[0];
c_7337.elts[1] = ((closureN)self_7323)->elts[1];

return_closcall1(data,(closure)&c_7337,  car(((closureN)self_7323)->elts[2]));}
; 
}

static void __lambda_1(void *data, int argc, object self_7324, object r_7319) {
  Cyc_st_add("scheme/write.sld:display");
return_closcall1(data,  ((closureN)self_7324)->elts[0],  Cyc_display_va(2,((closureN)self_7324)->elts[1], r_7319));; 
}

static void __lambda_0(void *data, int argc, object self_7325, object r_7318) {
  Cyc_st_add("scheme/write.sld:display");
return_closcall1(data,  ((closureN)self_7325)->elts[0],  Cyc_display_va(2,((closureN)self_7325)->elts[1], r_7318));; 
}

void c_schemewrite_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 

  add_global((object *) &__glo_lib_91init_117schemewrite);
  add_global((object *) &__glo_write);
  add_global((object *) &__glo_display);
  mclosure0(c_7370, (function_type)__lambda_8);c_7370.num_args = 0; 
  __glo_lib_91init_117schemewrite = &c_7370; 
  mclosure0(c_7348, (function_type)__lambda_7);c_7348.num_args = 1; 
  __glo_write = &c_7348; 
  mclosure0(c_7326, (function_type)__lambda_3);c_7326.num_args = 1; 
  __glo_display = &c_7326; 

  make_cvar(cvar_7373, (object *)&__glo_lib_91init_117schemewrite);make_cons(pair_7374, find_or_add_symbol("lib-init:schemewrite"), &cvar_7373);
  make_cvar(cvar_7375, (object *)&__glo_write);make_cons(pair_7376, find_or_add_symbol("write"), &cvar_7375);
  make_cvar(cvar_7377, (object *)&__glo_display);make_cons(pair_7378, find_or_add_symbol("display"), &cvar_7377);
make_cons(c_7379, &pair_7374,Cyc_global_variables);
make_cons(c_7380, &pair_7376, &c_7379);
make_cons(c_7381, &pair_7378, &c_7380);
Cyc_global_variables = &c_7381;
cont = ((closure1_type *)cont)->elt1;
(((closure)__glo_lib_91init_117schemewrite)->fn)(data, 1, cont, cont);
}
