/**
 ** This file was automatically generated by the Cyclone scheme compiler
 **
 ** (c) 2014-2016 Justin Ethier
 ** Version 0.0.6 (Pre-release)
 **
 **/

#define closcall0(td, clo) \
((clo)->fn)(td, 0, clo)
#define return_closcall0(td, clo) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[0]; \
     GC(td, clo, buf, 0); \
     return; \
 } else {\
     closcall0(td, (closure) (clo)); \
     return;\
 } \
}

#define return_direct0(td, _fn) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[0];  \
     mclosure0(c1, _fn); \
     GC(td, &c1, buf, 0); \
     return; \
 } else { \
     (_fn)(td, 0, (closure)_fn); \
 }}

#define closcall1(td, clo,a1) \
if (type_of(clo) == pair_tag || prim(clo)) { \
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
if (type_of(clo) == pair_tag || prim(clo)) { \
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
object __glo_lib_91init_117schemelazy_scheme_lazy = NULL;
object __glo_promise_127_scheme_lazy = NULL;
object __glo_make_91promise_scheme_lazy = NULL;
object __glo_delay_91force_scheme_lazy = NULL;
object __glo_delay_scheme_lazy = NULL;
object __glo_force_scheme_lazy = NULL;
extern object __glo_cons_91source_scheme_base;
extern object __glo_syntax_91rules_scheme_base;
extern object __glo_letrec_85_scheme_base;
extern object __glo_guard_scheme_base;
extern object __glo_guard_91aux_scheme_base;
extern object __glo_receive_scheme_base;
extern object __glo_abs_scheme_base;
extern object __glo_max_scheme_base;
extern object __glo_min_scheme_base;
extern object __glo_modulo_scheme_base;
extern object __glo_floor_91remainder_scheme_base;
extern object __glo_even_127_scheme_base;
extern object __glo_exact_91integer_127_scheme_base;
extern object __glo_exact_127_scheme_base;
extern object __glo_inexact_127_scheme_base;
extern object __glo_odd_127_scheme_base;
extern object __glo_complex_127_scheme_base;
extern object __glo_rational_127_scheme_base;
extern object __glo_gcd_scheme_base;
extern object __glo_lcm_scheme_base;
extern object __glo_quotient_scheme_base;
extern object __glo_remainder_scheme_base;
extern object __glo_truncate_91quotient_scheme_base;
extern object __glo_truncate_91remainder_scheme_base;
extern object __glo_truncate_95_scheme_base;
extern object __glo_floor_91quotient_scheme_base;
extern object __glo_floor_91remainder_scheme_base;
extern object __glo_floor_95_scheme_base;
extern object __glo_square_scheme_base;
extern object __glo_expt_scheme_base;
extern object __glo_call_91with_91current_91continuation_scheme_base;
extern object __glo_call_95cc_scheme_base;
extern object __glo_call_91with_91values_scheme_base;
extern object __glo_dynamic_91wind_scheme_base;
extern object __glo_values_scheme_base;
extern object __glo_char_123_127_scheme_base;
extern object __glo_char_121_127_scheme_base;
extern object __glo_char_125_127_scheme_base;
extern object __glo_char_121_123_127_scheme_base;
extern object __glo_char_125_123_127_scheme_base;
extern object __glo_string_123_127_scheme_base;
extern object __glo_string_121_127_scheme_base;
extern object __glo_string_121_123_127_scheme_base;
extern object __glo_string_125_127_scheme_base;
extern object __glo_string_125_123_127_scheme_base;
extern object __glo_foldl_scheme_base;
extern object __glo_foldr_scheme_base;
extern object __glo_not_scheme_base;
extern object __glo_list_127_scheme_base;
extern object __glo_zero_127_scheme_base;
extern object __glo_positive_127_scheme_base;
extern object __glo_negative_127_scheme_base;
extern object __glo_append_scheme_base;
extern object __glo__list_scheme_base;
extern object __glo_make_91list_scheme_base;
extern object __glo_list_91copy_scheme_base;
extern object __glo_map_scheme_base;
extern object __glo_for_91each_scheme_base;
extern object __glo_list_91tail_scheme_base;
extern object __glo_list_91ref_scheme_base;
extern object __glo_list_91set_67_scheme_base;
extern object __glo_reverse_scheme_base;
extern object __glo_boolean_123_127_scheme_base;
extern object __glo_symbol_123_127_scheme_base;
extern object __glo_Cyc_91obj_123_127_scheme_base;
extern object __glo_vector_scheme_base;
extern object __glo_vector_91append_scheme_base;
extern object __glo_vector_91copy_scheme_base;
extern object __glo_vector_91copy_67_scheme_base;
extern object __glo_vector_91fill_67_scheme_base;
extern object __glo_vector_91_125list_scheme_base;
extern object __glo_vector_91_125string_scheme_base;
extern object __glo_vector_91map_scheme_base;
extern object __glo_vector_91for_91each_scheme_base;
extern object __glo_make_91string_scheme_base;
extern object __glo_string_scheme_base;
extern object __glo_string_91copy_scheme_base;
extern object __glo_string_91copy_67_scheme_base;
extern object __glo_string_91fill_67_scheme_base;
extern object __glo_string_91_125list_scheme_base;
extern object __glo_string_91_125vector_scheme_base;
extern object __glo_string_91map_scheme_base;
extern object __glo_string_91for_91each_scheme_base;
extern object __glo_make_91parameter_scheme_base;
extern object __glo_current_91output_91port_scheme_base;
extern object __glo_current_91input_91port_scheme_base;
extern object __glo_current_91error_91port_scheme_base;
extern object __glo_call_91with_91port_scheme_base;
extern object __glo_error_scheme_base;
extern object __glo_raise_scheme_base;
extern object __glo_raise_91continuable_scheme_base;
extern object __glo_with_91exception_91handler_scheme_base;
extern object __glo_Cyc_91add_91exception_91handler_scheme_base;
extern object __glo_Cyc_91remove_91exception_91handler_scheme_base;
extern object __glo_newline_scheme_base;
extern object __glo_write_91char_scheme_base;
extern object __glo_write_91string_scheme_base;
extern object __glo_flush_91output_91port_scheme_base;
extern object __glo_read_91line_scheme_base;
extern object __glo_read_91string_scheme_base;
extern object __glo_input_91port_127_scheme_base;
extern object __glo_output_91port_127_scheme_base;
extern object __glo_input_91port_91open_127_scheme_base;
extern object __glo_output_91port_91open_127_scheme_base;
extern object __glo_features_scheme_base;
extern object __glo_any_scheme_base;
extern object __glo_every_scheme_base;
extern object __glo_and_scheme_base;
extern object __glo_or_scheme_base;
extern object __glo_let_scheme_base;
extern object __glo_let_85_scheme_base;
extern object __glo_letrec_scheme_base;
extern object __glo_begin_scheme_base;
extern object __glo__case_scheme_base;
extern object __glo_cond_scheme_base;
extern object __glo_cond_91expand_scheme_base;
extern object __glo__do_scheme_base;
extern object __glo_when_scheme_base;
extern object __glo_unless_scheme_base;
extern object __glo_quasiquote_scheme_base;
extern object __glo_floor_scheme_base;
extern object __glo_ceiling_scheme_base;
extern object __glo_truncate_scheme_base;
extern object __glo_round_scheme_base;
extern object __glo_exact_scheme_base;
extern object __glo_inexact_scheme_base;
extern object __glo_eof_91object_scheme_base;
extern object __glo_syntax_91error_scheme_base;
extern object __glo_bytevector_91copy_scheme_base;
extern object __glo_utf8_91_125string_scheme_base;
extern object __glo_string_91_125utf8_scheme_base;
extern object __glo_denominator_scheme_base;
extern object __glo_numerator_scheme_base;
#include "cyclone/runtime.h"
defsymbol(make_91promise);
defsymbol(lambda);
static void __lambda_33(void *data, int argc, closure _,object k_7316) ;
static void __lambda_32(void *data, int argc, object self_7356, object r_7317) ;
static void __lambda_31(void *data, int argc, closure _,object k_7322, object proc_733) ;
static void __lambda_30(void *data, int argc, object self_7357, object result_91ready_127_735, object result_734) ;
static void __lambda_29(void *data, int argc, object self_7358, object result_91ready_127_735) ;
static void __lambda_28(void *data, int argc, object self_7359, object result_734) ;
static void __lambda_27(void *data, int argc, object self_7360, object k_7323) ;
static void __lambda_26(void *data, int argc, object self_7361, object x_736) ;
static void __lambda_25(void *data, int argc, object self_7362) ;
static void __lambda_24(void *data, int argc, object self_7363, object r_7325) ;
static void __lambda_23(void *data, int argc, object self_7364, object r_7326) ;
static void __lambda_22(void *data, int argc, closure _,object k_7329, object expr_739, object rename_738, object compare_737) ;
static void __lambda_21(void *data, int argc, object self_7365, object r_7330) ;
static void __lambda_20(void *data, int argc, object self_7366, object r_7334) ;
static void __lambda_19(void *data, int argc, object self_7367, object r_7336) ;
static void __lambda_18(void *data, int argc, object self_7368, object r_7338) ;
static void __lambda_17(void *data, int argc, object self_7369, object r_7339) ;
static void __lambda_16(void *data, int argc, object self_7370, object r_7337) ;
static void __lambda_15(void *data, int argc, object self_7371, object r_7335) ;
static void __lambda_14(void *data, int argc, object self_7372, object r_7332) ;
static void __lambda_13(void *data, int argc, object self_7373, object r_7333) ;
static void __lambda_12(void *data, int argc, object self_7374, object r_7331) ;
static void __lambda_11(void *data, int argc, closure _,object k_7342, object expr_7312, object rename_7311, object compare_7310) ;
static void __lambda_10(void *data, int argc, object self_7375, object r_7343) ;
static void __lambda_9(void *data, int argc, object self_7376, object r_7347) ;
static void __lambda_8(void *data, int argc, object self_7377, object r_7349) ;
static void __lambda_7(void *data, int argc, object self_7378, object r_7351) ;
static void __lambda_6(void *data, int argc, object self_7379, object r_7352) ;
static void __lambda_5(void *data, int argc, object self_7380, object r_7350) ;
static void __lambda_4(void *data, int argc, object self_7381, object r_7348) ;
static void __lambda_3(void *data, int argc, object self_7382, object r_7345) ;
static void __lambda_2(void *data, int argc, object self_7383, object r_7346) ;
static void __lambda_1(void *data, int argc, object self_7384, object r_7344) ;
static void __lambda_0(void *data, int argc, closure _,object k_7355, object object_7313) ;

static void __lambda_33(void *data, int argc, closure _,object k_7316) {
  Cyc_st_add(data, "scheme/lazy.sld:lib-init:schemelazy");

closureN_type c_73234;
c_73234.hdr.mark = gc_color_red;
 c_73234.hdr.grayed = 0;
c_73234.tag = closureN_tag;
 c_73234.fn = (function_type)__lambda_32;
c_73234.num_args = 1;
c_73234.num_elements = 1;
c_73234.elements = (object *)alloca(sizeof(object) * 1);
c_73234.elements[0] = k_7316;

return_closcall1(data,(closure)&c_73234,  obj_int2obj(0));; 
}

static void __lambda_32(void *data, int argc, object self_7356, object r_7317) {
  return_closcall1(data,  ((closureN)self_7356)->elements[0],  global_set(__glo_promise_127_scheme_lazy, primitive_procedure_127));; 
}

static void __lambda_31(void *data, int argc, closure _,object k_7322, object proc_733) {
  Cyc_st_add(data, "scheme/lazy.sld:make-promise");

closureN_type c_73181;
c_73181.hdr.mark = gc_color_red;
 c_73181.hdr.grayed = 0;
c_73181.tag = closureN_tag;
 c_73181.fn = (function_type)__lambda_30;
c_73181.num_args = 2;
c_73181.num_elements = 2;
c_73181.elements = (object *)alloca(sizeof(object) * 2);
c_73181.elements[0] = k_7322;
c_73181.elements[1] = proc_733;

return_closcall2(data,(closure)&c_73181,  boolean_f, boolean_f);; 
}

static void __lambda_30(void *data, int argc, object self_7357, object result_91ready_127_735, object result_734) {
  
closureN_type c_73183;
c_73183.hdr.mark = gc_color_red;
 c_73183.hdr.grayed = 0;
c_73183.tag = closureN_tag;
 c_73183.fn = (function_type)__lambda_29;
c_73183.num_args = 1;
c_73183.num_elements = 3;
c_73183.elements = (object *)alloca(sizeof(object) * 3);
c_73183.elements[0] = ((closureN)self_7357)->elements[0];
c_73183.elements[1] = ((closureN)self_7357)->elements[1];
c_73183.elements[2] = result_734;


make_cell(c_73231,result_91ready_127_735);
return_closcall1(data,(closure)&c_73183,  &c_73231);; 
}

static void __lambda_29(void *data, int argc, object self_7358, object result_91ready_127_735) {
  
closureN_type c_73185;
c_73185.hdr.mark = gc_color_red;
 c_73185.hdr.grayed = 0;
c_73185.tag = closureN_tag;
 c_73185.fn = (function_type)__lambda_28;
c_73185.num_args = 1;
c_73185.num_elements = 3;
c_73185.elements = (object *)alloca(sizeof(object) * 3);
c_73185.elements[0] = ((closureN)self_7358)->elements[0];
c_73185.elements[1] = ((closureN)self_7358)->elements[1];
c_73185.elements[2] = result_91ready_127_735;


make_cell(c_73227,((closureN)self_7358)->elements[2]);
return_closcall1(data,(closure)&c_73185,  &c_73227);; 
}

static void __lambda_28(void *data, int argc, object self_7359, object result_734) {
  
closureN_type c_73188;
c_73188.hdr.mark = gc_color_red;
 c_73188.hdr.grayed = 0;
c_73188.tag = closureN_tag;
 c_73188.fn = (function_type)__lambda_27;
c_73188.num_args = 0;
c_73188.num_elements = 3;
c_73188.elements = (object *)alloca(sizeof(object) * 3);
c_73188.elements[0] = ((closureN)self_7359)->elements[1];
c_73188.elements[1] = result_734;
c_73188.elements[2] = ((closureN)self_7359)->elements[2];

return_closcall1(data,  ((closureN)self_7359)->elements[0],  &c_73188);; 
}

static void __lambda_27(void *data, int argc, object self_7360, object k_7323) {
  if( (boolean_f != cell_get(((closureN)self_7360)->elements[2])) ){ 
  return_closcall1(data,  k_7323,  cell_get(((closureN)self_7360)->elements[1]));
} else { 
  
closureN_type c_73198;
c_73198.hdr.mark = gc_color_red;
 c_73198.hdr.grayed = 0;
c_73198.tag = closureN_tag;
 c_73198.fn = (function_type)__lambda_26;
c_73198.num_args = 1;
c_73198.num_elements = 3;
c_73198.elements = (object *)alloca(sizeof(object) * 3);
c_73198.elements[0] = k_7323;
c_73198.elements[1] = ((closureN)self_7360)->elements[1];
c_73198.elements[2] = ((closureN)self_7360)->elements[2];

return_closcall1(data,  ((closureN)self_7360)->elements[0],  &c_73198);}
; 
}

static void __lambda_26(void *data, int argc, object self_7361, object x_736) {
  if( (boolean_f != cell_get(((closureN)self_7361)->elements[2])) ){ 
  return_closcall1(data,  ((closureN)self_7361)->elements[0],  cell_get(((closureN)self_7361)->elements[1]));
} else { 
  
closureN_type c_73208;
c_73208.hdr.mark = gc_color_red;
 c_73208.hdr.grayed = 0;
c_73208.tag = closureN_tag;
 c_73208.fn = (function_type)__lambda_25;
c_73208.num_args = 0;
c_73208.num_elements = 4;
c_73208.elements = (object *)alloca(sizeof(object) * 4);
c_73208.elements[0] = ((closureN)self_7361)->elements[0];
c_73208.elements[1] = ((closureN)self_7361)->elements[1];
c_73208.elements[2] = ((closureN)self_7361)->elements[2];
c_73208.elements[3] = x_736;

return_closcall0(data,(closure)&c_73208);}
; 
}

static void __lambda_25(void *data, int argc, object self_7362) {
  
closureN_type c_73210;
c_73210.hdr.mark = gc_color_red;
 c_73210.hdr.grayed = 0;
c_73210.tag = closureN_tag;
 c_73210.fn = (function_type)__lambda_24;
c_73210.num_args = 1;
c_73210.num_elements = 3;
c_73210.elements = (object *)alloca(sizeof(object) * 3);
c_73210.elements[0] = ((closureN)self_7362)->elements[0];
c_73210.elements[1] = ((closureN)self_7362)->elements[1];
c_73210.elements[2] = ((closureN)self_7362)->elements[2];

return_closcall1(data,(closure)&c_73210,  Cyc_set_car(data, ((closureN)self_7362)->elements[1], ((closureN)self_7362)->elements[3]));; 
}

static void __lambda_24(void *data, int argc, object self_7363, object r_7325) {
  
closureN_type c_73212;
c_73212.hdr.mark = gc_color_red;
 c_73212.hdr.grayed = 0;
c_73212.tag = closureN_tag;
 c_73212.fn = (function_type)__lambda_23;
c_73212.num_args = 1;
c_73212.num_elements = 2;
c_73212.elements = (object *)alloca(sizeof(object) * 2);
c_73212.elements[0] = ((closureN)self_7363)->elements[0];
c_73212.elements[1] = ((closureN)self_7363)->elements[1];

return_closcall1(data,(closure)&c_73212,  Cyc_set_car(data, ((closureN)self_7363)->elements[2], boolean_t));; 
}

static void __lambda_23(void *data, int argc, object self_7364, object r_7326) {
  return_closcall1(data,  ((closureN)self_7364)->elements[0],  cell_get(((closureN)self_7364)->elements[1]));; 
}

static void __lambda_22(void *data, int argc, closure _,object k_7329, object expr_739, object rename_738, object compare_737) {
  Cyc_st_add(data, "scheme/lazy.sld:delay-force");

closureN_type c_73135;
c_73135.hdr.mark = gc_color_red;
 c_73135.hdr.grayed = 0;
c_73135.tag = closureN_tag;
 c_73135.fn = (function_type)__lambda_21;
c_73135.num_args = 1;
c_73135.num_elements = 2;
c_73135.elements = (object *)alloca(sizeof(object) * 2);
c_73135.elements[0] = expr_739;
c_73135.elements[1] = k_7329;

return_closcall1(data,(closure)&c_73135,  quote_make_91promise);; 
}

static void __lambda_21(void *data, int argc, object self_7365, object r_7330) {
  
closureN_type c_73137;
c_73137.hdr.mark = gc_color_red;
 c_73137.hdr.grayed = 0;
c_73137.tag = closureN_tag;
 c_73137.fn = (function_type)__lambda_20;
c_73137.num_args = 1;
c_73137.num_elements = 3;
c_73137.elements = (object *)alloca(sizeof(object) * 3);
c_73137.elements[0] = ((closureN)self_7365)->elements[0];
c_73137.elements[1] = ((closureN)self_7365)->elements[1];
c_73137.elements[2] = r_7330;

return_closcall1(data,(closure)&c_73137,  quote_lambda);; 
}

static void __lambda_20(void *data, int argc, object self_7366, object r_7334) {
  
closureN_type c_73139;
c_73139.hdr.mark = gc_color_red;
 c_73139.hdr.grayed = 0;
c_73139.tag = closureN_tag;
 c_73139.fn = (function_type)__lambda_19;
c_73139.num_args = 1;
c_73139.num_elements = 4;
c_73139.elements = (object *)alloca(sizeof(object) * 4);
c_73139.elements[0] = ((closureN)self_7366)->elements[0];
c_73139.elements[1] = ((closureN)self_7366)->elements[1];
c_73139.elements[2] = ((closureN)self_7366)->elements[2];
c_73139.elements[3] = r_7334;

return_closcall1(data,(closure)&c_73139,  NULL);; 
}

static void __lambda_19(void *data, int argc, object self_7367, object r_7336) {
  
closureN_type c_73141;
c_73141.hdr.mark = gc_color_red;
 c_73141.hdr.grayed = 0;
c_73141.tag = closureN_tag;
 c_73141.fn = (function_type)__lambda_18;
c_73141.num_args = 1;
c_73141.num_elements = 4;
c_73141.elements = (object *)alloca(sizeof(object) * 4);
c_73141.elements[0] = ((closureN)self_7367)->elements[1];
c_73141.elements[1] = ((closureN)self_7367)->elements[2];
c_73141.elements[2] = ((closureN)self_7367)->elements[3];
c_73141.elements[3] = r_7336;

return_closcall1(data,(closure)&c_73141,  cadr(((closureN)self_7367)->elements[0]));; 
}

static void __lambda_18(void *data, int argc, object self_7368, object r_7338) {
  
closureN_type c_73143;
c_73143.hdr.mark = gc_color_red;
 c_73143.hdr.grayed = 0;
c_73143.tag = closureN_tag;
 c_73143.fn = (function_type)__lambda_17;
c_73143.num_args = 1;
c_73143.num_elements = 5;
c_73143.elements = (object *)alloca(sizeof(object) * 5);
c_73143.elements[0] = ((closureN)self_7368)->elements[0];
c_73143.elements[1] = ((closureN)self_7368)->elements[1];
c_73143.elements[2] = ((closureN)self_7368)->elements[2];
c_73143.elements[3] = ((closureN)self_7368)->elements[3];
c_73143.elements[4] = r_7338;

return_closcall1(data,(closure)&c_73143,  NULL);; 
}

static void __lambda_17(void *data, int argc, object self_7369, object r_7339) {
  
closureN_type c_73145;
c_73145.hdr.mark = gc_color_red;
 c_73145.hdr.grayed = 0;
c_73145.tag = closureN_tag;
 c_73145.fn = (function_type)__lambda_16;
c_73145.num_args = 1;
c_73145.num_elements = 4;
c_73145.elements = (object *)alloca(sizeof(object) * 4);
c_73145.elements[0] = ((closureN)self_7369)->elements[0];
c_73145.elements[1] = ((closureN)self_7369)->elements[1];
c_73145.elements[2] = ((closureN)self_7369)->elements[2];
c_73145.elements[3] = ((closureN)self_7369)->elements[3];


make_pair(c_73174,((closureN)self_7369)->elements[4], r_7339);
return_closcall1(data,(closure)&c_73145,  &c_73174);; 
}

static void __lambda_16(void *data, int argc, object self_7370, object r_7337) {
  
closureN_type c_73147;
c_73147.hdr.mark = gc_color_red;
 c_73147.hdr.grayed = 0;
c_73147.tag = closureN_tag;
 c_73147.fn = (function_type)__lambda_15;
c_73147.num_args = 1;
c_73147.num_elements = 3;
c_73147.elements = (object *)alloca(sizeof(object) * 3);
c_73147.elements[0] = ((closureN)self_7370)->elements[0];
c_73147.elements[1] = ((closureN)self_7370)->elements[1];
c_73147.elements[2] = ((closureN)self_7370)->elements[2];


make_pair(c_73170,((closureN)self_7370)->elements[3], r_7337);
return_closcall1(data,(closure)&c_73147,  &c_73170);; 
}

static void __lambda_15(void *data, int argc, object self_7371, object r_7335) {
  
closureN_type c_73149;
c_73149.hdr.mark = gc_color_red;
 c_73149.hdr.grayed = 0;
c_73149.tag = closureN_tag;
 c_73149.fn = (function_type)__lambda_14;
c_73149.num_args = 1;
c_73149.num_elements = 2;
c_73149.elements = (object *)alloca(sizeof(object) * 2);
c_73149.elements[0] = ((closureN)self_7371)->elements[0];
c_73149.elements[1] = ((closureN)self_7371)->elements[1];


make_pair(c_73166,((closureN)self_7371)->elements[2], r_7335);
return_closcall1(data,(closure)&c_73149,  &c_73166);; 
}

static void __lambda_14(void *data, int argc, object self_7372, object r_7332) {
  
closureN_type c_73151;
c_73151.hdr.mark = gc_color_red;
 c_73151.hdr.grayed = 0;
c_73151.tag = closureN_tag;
 c_73151.fn = (function_type)__lambda_13;
c_73151.num_args = 1;
c_73151.num_elements = 3;
c_73151.elements = (object *)alloca(sizeof(object) * 3);
c_73151.elements[0] = ((closureN)self_7372)->elements[0];
c_73151.elements[1] = ((closureN)self_7372)->elements[1];
c_73151.elements[2] = r_7332;

return_closcall1(data,(closure)&c_73151,  NULL);; 
}

static void __lambda_13(void *data, int argc, object self_7373, object r_7333) {
  
closureN_type c_73153;
c_73153.hdr.mark = gc_color_red;
 c_73153.hdr.grayed = 0;
c_73153.tag = closureN_tag;
 c_73153.fn = (function_type)__lambda_12;
c_73153.num_args = 1;
c_73153.num_elements = 2;
c_73153.elements = (object *)alloca(sizeof(object) * 2);
c_73153.elements[0] = ((closureN)self_7373)->elements[0];
c_73153.elements[1] = ((closureN)self_7373)->elements[1];


make_pair(c_73162,((closureN)self_7373)->elements[2], r_7333);
return_closcall1(data,(closure)&c_73153,  &c_73162);; 
}

static void __lambda_12(void *data, int argc, object self_7374, object r_7331) {
  
make_pair(c_73158,((closureN)self_7374)->elements[1], r_7331);
return_closcall1(data,  ((closureN)self_7374)->elements[0],  &c_73158);; 
}

static void __lambda_11(void *data, int argc, closure _,object k_7342, object expr_7312, object rename_7311, object compare_7310) {
  Cyc_st_add(data, "scheme/lazy.sld:delay");

closureN_type c_7389;
c_7389.hdr.mark = gc_color_red;
 c_7389.hdr.grayed = 0;
c_7389.tag = closureN_tag;
 c_7389.fn = (function_type)__lambda_10;
c_7389.num_args = 1;
c_7389.num_elements = 2;
c_7389.elements = (object *)alloca(sizeof(object) * 2);
c_7389.elements[0] = expr_7312;
c_7389.elements[1] = k_7342;

return_closcall1(data,(closure)&c_7389,  quote_make_91promise);; 
}

static void __lambda_10(void *data, int argc, object self_7375, object r_7343) {
  
closureN_type c_7391;
c_7391.hdr.mark = gc_color_red;
 c_7391.hdr.grayed = 0;
c_7391.tag = closureN_tag;
 c_7391.fn = (function_type)__lambda_9;
c_7391.num_args = 1;
c_7391.num_elements = 3;
c_7391.elements = (object *)alloca(sizeof(object) * 3);
c_7391.elements[0] = ((closureN)self_7375)->elements[0];
c_7391.elements[1] = ((closureN)self_7375)->elements[1];
c_7391.elements[2] = r_7343;

return_closcall1(data,(closure)&c_7391,  quote_lambda);; 
}

static void __lambda_9(void *data, int argc, object self_7376, object r_7347) {
  
closureN_type c_7393;
c_7393.hdr.mark = gc_color_red;
 c_7393.hdr.grayed = 0;
c_7393.tag = closureN_tag;
 c_7393.fn = (function_type)__lambda_8;
c_7393.num_args = 1;
c_7393.num_elements = 4;
c_7393.elements = (object *)alloca(sizeof(object) * 4);
c_7393.elements[0] = ((closureN)self_7376)->elements[0];
c_7393.elements[1] = ((closureN)self_7376)->elements[1];
c_7393.elements[2] = ((closureN)self_7376)->elements[2];
c_7393.elements[3] = r_7347;

return_closcall1(data,(closure)&c_7393,  NULL);; 
}

static void __lambda_8(void *data, int argc, object self_7377, object r_7349) {
  
closureN_type c_7395;
c_7395.hdr.mark = gc_color_red;
 c_7395.hdr.grayed = 0;
c_7395.tag = closureN_tag;
 c_7395.fn = (function_type)__lambda_7;
c_7395.num_args = 1;
c_7395.num_elements = 4;
c_7395.elements = (object *)alloca(sizeof(object) * 4);
c_7395.elements[0] = ((closureN)self_7377)->elements[1];
c_7395.elements[1] = ((closureN)self_7377)->elements[2];
c_7395.elements[2] = ((closureN)self_7377)->elements[3];
c_7395.elements[3] = r_7349;

return_closcall1(data,(closure)&c_7395,  cadr(((closureN)self_7377)->elements[0]));; 
}

static void __lambda_7(void *data, int argc, object self_7378, object r_7351) {
  
closureN_type c_7397;
c_7397.hdr.mark = gc_color_red;
 c_7397.hdr.grayed = 0;
c_7397.tag = closureN_tag;
 c_7397.fn = (function_type)__lambda_6;
c_7397.num_args = 1;
c_7397.num_elements = 5;
c_7397.elements = (object *)alloca(sizeof(object) * 5);
c_7397.elements[0] = ((closureN)self_7378)->elements[0];
c_7397.elements[1] = ((closureN)self_7378)->elements[1];
c_7397.elements[2] = ((closureN)self_7378)->elements[2];
c_7397.elements[3] = ((closureN)self_7378)->elements[3];
c_7397.elements[4] = r_7351;

return_closcall1(data,(closure)&c_7397,  NULL);; 
}

static void __lambda_6(void *data, int argc, object self_7379, object r_7352) {
  
closureN_type c_7399;
c_7399.hdr.mark = gc_color_red;
 c_7399.hdr.grayed = 0;
c_7399.tag = closureN_tag;
 c_7399.fn = (function_type)__lambda_5;
c_7399.num_args = 1;
c_7399.num_elements = 4;
c_7399.elements = (object *)alloca(sizeof(object) * 4);
c_7399.elements[0] = ((closureN)self_7379)->elements[0];
c_7399.elements[1] = ((closureN)self_7379)->elements[1];
c_7399.elements[2] = ((closureN)self_7379)->elements[2];
c_7399.elements[3] = ((closureN)self_7379)->elements[3];


make_pair(c_73128,((closureN)self_7379)->elements[4], r_7352);
return_closcall1(data,(closure)&c_7399,  &c_73128);; 
}

static void __lambda_5(void *data, int argc, object self_7380, object r_7350) {
  
closureN_type c_73101;
c_73101.hdr.mark = gc_color_red;
 c_73101.hdr.grayed = 0;
c_73101.tag = closureN_tag;
 c_73101.fn = (function_type)__lambda_4;
c_73101.num_args = 1;
c_73101.num_elements = 3;
c_73101.elements = (object *)alloca(sizeof(object) * 3);
c_73101.elements[0] = ((closureN)self_7380)->elements[0];
c_73101.elements[1] = ((closureN)self_7380)->elements[1];
c_73101.elements[2] = ((closureN)self_7380)->elements[2];


make_pair(c_73124,((closureN)self_7380)->elements[3], r_7350);
return_closcall1(data,(closure)&c_73101,  &c_73124);; 
}

static void __lambda_4(void *data, int argc, object self_7381, object r_7348) {
  
closureN_type c_73103;
c_73103.hdr.mark = gc_color_red;
 c_73103.hdr.grayed = 0;
c_73103.tag = closureN_tag;
 c_73103.fn = (function_type)__lambda_3;
c_73103.num_args = 1;
c_73103.num_elements = 2;
c_73103.elements = (object *)alloca(sizeof(object) * 2);
c_73103.elements[0] = ((closureN)self_7381)->elements[0];
c_73103.elements[1] = ((closureN)self_7381)->elements[1];


make_pair(c_73120,((closureN)self_7381)->elements[2], r_7348);
return_closcall1(data,(closure)&c_73103,  &c_73120);; 
}

static void __lambda_3(void *data, int argc, object self_7382, object r_7345) {
  
closureN_type c_73105;
c_73105.hdr.mark = gc_color_red;
 c_73105.hdr.grayed = 0;
c_73105.tag = closureN_tag;
 c_73105.fn = (function_type)__lambda_2;
c_73105.num_args = 1;
c_73105.num_elements = 3;
c_73105.elements = (object *)alloca(sizeof(object) * 3);
c_73105.elements[0] = ((closureN)self_7382)->elements[0];
c_73105.elements[1] = ((closureN)self_7382)->elements[1];
c_73105.elements[2] = r_7345;

return_closcall1(data,(closure)&c_73105,  NULL);; 
}

static void __lambda_2(void *data, int argc, object self_7383, object r_7346) {
  
closureN_type c_73107;
c_73107.hdr.mark = gc_color_red;
 c_73107.hdr.grayed = 0;
c_73107.tag = closureN_tag;
 c_73107.fn = (function_type)__lambda_1;
c_73107.num_args = 1;
c_73107.num_elements = 2;
c_73107.elements = (object *)alloca(sizeof(object) * 2);
c_73107.elements[0] = ((closureN)self_7383)->elements[0];
c_73107.elements[1] = ((closureN)self_7383)->elements[1];


make_pair(c_73116,((closureN)self_7383)->elements[2], r_7346);
return_closcall1(data,(closure)&c_73107,  &c_73116);; 
}

static void __lambda_1(void *data, int argc, object self_7384, object r_7344) {
  
make_pair(c_73112,((closureN)self_7384)->elements[1], r_7344);
return_closcall1(data,  ((closureN)self_7384)->elements[0],  &c_73112);; 
}

static void __lambda_0(void *data, int argc, closure _,object k_7355, object object_7313) {
  Cyc_st_add(data, "scheme/lazy.sld:force");
return_closcall1(data,  object_7313,  k_7355);; 
}

void c_schemelazy_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  quote_make_91promise = find_or_add_symbol("make-promise");
  quote_lambda = find_or_add_symbol("lambda");

  add_global((object *) &__glo_lib_91init_117schemelazy_scheme_lazy);
  add_global((object *) &__glo_promise_127_scheme_lazy);
  add_global((object *) &__glo_make_91promise_scheme_lazy);
  add_global((object *) &__glo_delay_91force_scheme_lazy);
  add_global((object *) &__glo_delay_scheme_lazy);
  add_global((object *) &__glo_force_scheme_lazy);
  add_symbol(quote_make_91promise);
  add_symbol(quote_lambda);
  mclosure0(c_73232, (function_type)__lambda_33);c_73232.num_args = 0; 
  __glo_lib_91init_117schemelazy_scheme_lazy = &c_73232; 
  mclosure0(c_73179, (function_type)__lambda_31);c_73179.num_args = 1; 
  __glo_make_91promise_scheme_lazy = &c_73179; 
  mmacro(c_73133, (function_type)__lambda_22);c_73133.num_args = 3; 
  __glo_delay_91force_scheme_lazy = &c_73133; 
  mmacro(c_7387, (function_type)__lambda_11);c_7387.num_args = 3; 
  __glo_delay_scheme_lazy = &c_7387; 
  mclosure0(c_7385, (function_type)__lambda_0);c_7385.num_args = 1; 
  __glo_force_scheme_lazy = &c_7385; 
  __glo_promise_127_scheme_lazy = boolean_f; 

  make_cvar(cvar_73239, (object *)&__glo_lib_91init_117schemelazy_scheme_lazy);make_pair(pair_73240, find_or_add_symbol("lib-init:schemelazy"), &cvar_73239);
  make_cvar(cvar_73241, (object *)&__glo_promise_127_scheme_lazy);make_pair(pair_73242, find_or_add_symbol("promise?"), &cvar_73241);
  make_cvar(cvar_73243, (object *)&__glo_make_91promise_scheme_lazy);make_pair(pair_73244, find_or_add_symbol("make-promise"), &cvar_73243);
  make_cvar(cvar_73245, (object *)&__glo_delay_91force_scheme_lazy);make_pair(pair_73246, find_or_add_symbol("delay-force"), &cvar_73245);
  make_cvar(cvar_73247, (object *)&__glo_delay_scheme_lazy);make_pair(pair_73248, find_or_add_symbol("delay"), &cvar_73247);
  make_cvar(cvar_73249, (object *)&__glo_force_scheme_lazy);make_pair(pair_73250, find_or_add_symbol("force"), &cvar_73249);
make_pair(c_73251, &pair_73240,Cyc_global_variables);
make_pair(c_73252, &pair_73242, &c_73251);
make_pair(c_73253, &pair_73244, &c_73252);
make_pair(c_73254, &pair_73246, &c_73253);
make_pair(c_73255, &pair_73248, &c_73254);
make_pair(c_73256, &pair_73250, &c_73255);
Cyc_global_variables = &c_73256;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemelazy_scheme_lazy)->fn)(data, 1, cont, cont);
}
