/**
 ** This file was automatically generated by the Cyclone scheme compiler
 **
 ** (c) 2014-2016 Justin Ethier
 ** Version 0.0.4 (Pre-release)
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

#define closcall3(td,cfn,a1,a2,a3) if (type_of(cfn) == cons_tag || prim(cfn)) { Cyc_apply(td,2, (closure)a1, cfn,a2,a3); } else { ((cfn)->fn)(td,3,cfn,a1,a2,a3);}
/* Check for GC, then call given continuation closure */
#define return_closcall3(td,cfn,a1,a2,a3) \
{char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3;\
     GC(td,cfn,buf,3); return; \
 } else {closcall3(td,(closure) (cfn),a1,a2,a3); return;}}

/* Check for GC, then call C function directly */
#define return_direct3(td,_fn,a1,a2,a3) { \
 char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3; \
     mclosure0(c1, _fn); \
     GC(td,&c1, buf, 3); return; \
 } else { (_fn)(td,3,(closure)_fn,a1,a2,a3); }}

#define closcall4(td,cfn,a1,a2,a3,a4) if (type_of(cfn) == cons_tag || prim(cfn)) { Cyc_apply(td,3, (closure)a1, cfn,a2,a3,a4); } else { ((cfn)->fn)(td,4,cfn,a1,a2,a3,a4);}
/* Check for GC, then call given continuation closure */
#define return_closcall4(td,cfn,a1,a2,a3,a4) \
{char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[4]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4;\
     GC(td,cfn,buf,4); return; \
 } else {closcall4(td,(closure) (cfn),a1,a2,a3,a4); return;}}

/* Check for GC, then call C function directly */
#define return_direct4(td,_fn,a1,a2,a3,a4) { \
 char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[4]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4; \
     mclosure0(c1, _fn); \
     GC(td,&c1, buf, 4); return; \
 } else { (_fn)(td,4,(closure)_fn,a1,a2,a3,a4); }}

#include "cyclone/types.h"
object __glo_lib_91init_117schemefile = nil;
object __glo_with_91output_91to_91file = nil;
object __glo_with_91input_91from_91file = nil;
object __glo_call_91with_91output_91file = nil;
object __glo_call_91with_91input_91file = nil;
extern object __glo_cons_91source;
extern object __glo_syntax_91rules;
extern object __glo_receive;
extern object __glo_abs;
extern object __glo_max;
extern object __glo_min;
extern object __glo_modulo;
extern object __glo_floor_91remainder;
extern object __glo_even_127;
extern object __glo_exact_91integer_127;
extern object __glo_exact_127;
extern object __glo_inexact_127;
extern object __glo_odd_127;
extern object __glo_gcd;
extern object __glo_lcm;
extern object __glo_quotient;
extern object __glo_remainder;
extern object __glo_truncate_91quotient;
extern object __glo_truncate_91remainder;
extern object __glo_truncate_95;
extern object __glo_floor_91quotient;
extern object __glo_floor_91remainder;
extern object __glo_floor_95;
extern object __glo_square;
extern object __glo_expt;
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
extern object __glo_Cyc_91add_91exception_91handler;
extern object __glo_Cyc_91remove_91exception_91handler;
extern object __glo_newline;
extern object __glo_write_91char;
extern object __glo_write_91string;
extern object __glo_flush_91output_91port;
extern object __glo_read_91line;
extern object __glo_read_91string;
extern object __glo_input_91port_127;
extern object __glo_output_91port_127;
extern object __glo_input_91port_91open_127;
extern object __glo_output_91port_91open_127;
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
extern object __glo__do;
extern object __glo_when;
extern object __glo_unless;
extern object __glo_quasiquote;
extern object __glo_floor;
extern object __glo_ceiling;
extern object __glo_truncate;
extern object __glo_round;
extern object __glo_exact;
extern object __glo_inexact;
extern object __glo_eof_91object;
extern object __glo_syntax_91error;
#include "cyclone/runtime.h"
defsymbol(_121param_91convert_125);
defsymbol(_121param_91set_67_125);
static void __lambda_34(void *data, int argc, closure _,object k_7315) ;
static void __lambda_33(void *data, int argc, closure _,object k_7318, object string_732, object thunk_731) ;
static void __lambda_32(void *data, int argc, object self_7356, object r_7319) ;
static void __lambda_31(void *data, int argc, object self_7357, object r_7331) ;
static void __lambda_30(void *data, int argc, object self_7358, object r_7329) ;
static void __lambda_29(void *data, int argc, object self_7359, object r_7330) ;
static void __lambda_28(void *data, int argc, object self_7360, object r_7320) ;
static void __lambda_27(void *data, int argc, object self_7361, object old_734, object new_733) ;
static void __lambda_26(void *data, int argc, object self_7362, object k_7327) ;
static void __lambda_25(void *data, int argc, object self_7363, object r_7328) ;
static void __lambda_24(void *data, int argc, object self_7364, object r_7321) ;
static void __lambda_23(void *data, int argc, object self_7365, object k_7323) ;
static void __lambda_22(void *data, int argc, object self_7366, object r_7326) ;
static void __lambda_21(void *data, int argc, object self_7367, object r_7324) ;
static void __lambda_20(void *data, int argc, object self_7368, object r_7325) ;
static void __lambda_19(void *data, int argc, object self_7369, object r_7322) ;
static void __lambda_18(void *data, int argc, closure _,object k_7334, object string_736, object thunk_735) ;
static void __lambda_17(void *data, int argc, object self_7370, object r_7335) ;
static void __lambda_16(void *data, int argc, object self_7371, object r_7347) ;
static void __lambda_15(void *data, int argc, object self_7372, object r_7345) ;
static void __lambda_14(void *data, int argc, object self_7373, object r_7346) ;
static void __lambda_13(void *data, int argc, object self_7374, object r_7336) ;
static void __lambda_12(void *data, int argc, object self_7375, object old_738, object new_737) ;
static void __lambda_11(void *data, int argc, object self_7376, object k_7343) ;
static void __lambda_10(void *data, int argc, object self_7377, object r_7344) ;
static void __lambda_9(void *data, int argc, object self_7378, object r_7337) ;
static void __lambda_8(void *data, int argc, object self_7379, object k_7339) ;
static void __lambda_7(void *data, int argc, object self_7380, object r_7342) ;
static void __lambda_6(void *data, int argc, object self_7381, object r_7340) ;
static void __lambda_5(void *data, int argc, object self_7382, object r_7341) ;
static void __lambda_4(void *data, int argc, object self_7383, object r_7338) ;
static void __lambda_3(void *data, int argc, closure _,object k_7350, object string_7310, object proc_739) ;
static void __lambda_2(void *data, int argc, object self_7384, object r_7351) ;
static void __lambda_1(void *data, int argc, closure _,object k_7354, object string_7312, object proc_7311) ;
static void __lambda_0(void *data, int argc, object self_7385, object r_7355) ;

static void __lambda_34(void *data, int argc, closure _,object k_7315) {
  Cyc_st_add(data, "scheme/file.sld:lib-init:schemefile");

make_int(c_73196, 0);
return_closcall1(data,  k_7315,  &c_73196);; 
}

static void __lambda_33(void *data, int argc, closure _,object k_7318, object string_732, object thunk_731) {
  Cyc_st_add(data, "scheme/file.sld:with-output-to-file");

closureN_type c_73151;
c_73151.hdr.mark = gc_color_red;
 c_73151.hdr.grayed = 0;
c_73151.tag = closureN_tag;
 c_73151.fn = (function_type)__lambda_32;
c_73151.num_args = 1;
c_73151.num_elt = 3;
c_73151.elts = (object *)alloca(sizeof(object) * 3);
c_73151.elts[0] = k_7318;
c_73151.elts[1] = string_732;
c_73151.elts[2] = thunk_731;

return_closcall1(data,  __glo_current_91output_91port,  &c_73151);; 
}

static void __lambda_32(void *data, int argc, object self_7356, object r_7319) {
  Cyc_st_add(data, "scheme/file.sld:with-output-to-file");

closureN_type c_73153;
c_73153.hdr.mark = gc_color_red;
 c_73153.hdr.grayed = 0;
c_73153.tag = closureN_tag;
 c_73153.fn = (function_type)__lambda_31;
c_73153.num_args = 1;
c_73153.num_elt = 4;
c_73153.elts = (object *)alloca(sizeof(object) * 4);
c_73153.elts[0] = ((closureN)self_7356)->elts[0];
c_73153.elts[1] = r_7319;
c_73153.elts[2] = ((closureN)self_7356)->elts[1];
c_73153.elts[3] = ((closureN)self_7356)->elts[2];

return_closcall1(data,(closure)&c_73153,  quote__121param_91convert_125);; 
}

static void __lambda_31(void *data, int argc, object self_7357, object r_7331) {
  Cyc_st_add(data, "scheme/file.sld:with-output-to-file");

closureN_type c_73155;
c_73155.hdr.mark = gc_color_red;
 c_73155.hdr.grayed = 0;
c_73155.tag = closureN_tag;
 c_73155.fn = (function_type)__lambda_30;
c_73155.num_args = 1;
c_73155.num_elt = 4;
c_73155.elts = (object *)alloca(sizeof(object) * 4);
c_73155.elts[0] = ((closureN)self_7357)->elts[0];
c_73155.elts[1] = ((closureN)self_7357)->elts[1];
c_73155.elts[2] = ((closureN)self_7357)->elts[2];
c_73155.elts[3] = ((closureN)self_7357)->elts[3];

return_closcall2(data,  __glo_current_91output_91port,  &c_73155, r_7331);; 
}

static void __lambda_30(void *data, int argc, object self_7358, object r_7329) {
  Cyc_st_add(data, "scheme/file.sld:with-output-to-file");

closureN_type c_73157;
c_73157.hdr.mark = gc_color_red;
 c_73157.hdr.grayed = 0;
c_73157.tag = closureN_tag;
 c_73157.fn = (function_type)__lambda_29;
c_73157.num_args = 1;
c_73157.num_elt = 4;
c_73157.elts = (object *)alloca(sizeof(object) * 4);
c_73157.elts[0] = ((closureN)self_7358)->elts[0];
c_73157.elts[1] = ((closureN)self_7358)->elts[1];
c_73157.elts[2] = r_7329;
c_73157.elts[3] = ((closureN)self_7358)->elts[3];


port_type c_73192 = Cyc_io_open_output_file(data,((closureN)self_7358)->elts[2]);
return_closcall1(data,(closure)&c_73157,  &c_73192);; 
}

static void __lambda_29(void *data, int argc, object self_7359, object r_7330) {
  Cyc_st_add(data, "scheme/file.sld:with-output-to-file");

closureN_type c_73160;
c_73160.hdr.mark = gc_color_red;
 c_73160.hdr.grayed = 0;
c_73160.tag = closureN_tag;
 c_73160.fn = (function_type)__lambda_28;
c_73160.num_args = 1;
c_73160.num_elt = 3;
c_73160.elts = (object *)alloca(sizeof(object) * 3);
c_73160.elts[0] = ((closureN)self_7359)->elts[0];
c_73160.elts[1] = ((closureN)self_7359)->elts[1];
c_73160.elts[2] = ((closureN)self_7359)->elts[3];

return_closcall2(data,  ((closureN)self_7359)->elts[2],  &c_73160, r_7330);; 
}

static void __lambda_28(void *data, int argc, object self_7360, object r_7320) {
  Cyc_st_add(data, "scheme/file.sld:with-output-to-file");

closureN_type c_73162;
c_73162.hdr.mark = gc_color_red;
 c_73162.hdr.grayed = 0;
c_73162.tag = closureN_tag;
 c_73162.fn = (function_type)__lambda_27;
c_73162.num_args = 2;
c_73162.num_elt = 2;
c_73162.elts = (object *)alloca(sizeof(object) * 2);
c_73162.elts[0] = ((closureN)self_7360)->elts[0];
c_73162.elts[1] = ((closureN)self_7360)->elts[2];

return_closcall2(data,(closure)&c_73162,  ((closureN)self_7360)->elts[1], r_7320);; 
}

static void __lambda_27(void *data, int argc, object self_7361, object old_734, object new_733) {
  Cyc_st_add(data, "scheme/file.sld:with-output-to-file");

closureN_type c_73164;
c_73164.hdr.mark = gc_color_red;
 c_73164.hdr.grayed = 0;
c_73164.tag = closureN_tag;
 c_73164.fn = (function_type)__lambda_24;
c_73164.num_args = 1;
c_73164.num_elt = 3;
c_73164.elts = (object *)alloca(sizeof(object) * 3);
c_73164.elts[0] = ((closureN)self_7361)->elts[0];
c_73164.elts[1] = old_734;
c_73164.elts[2] = ((closureN)self_7361)->elts[1];


closureN_type c_73183;
c_73183.hdr.mark = gc_color_red;
 c_73183.hdr.grayed = 0;
c_73183.tag = closureN_tag;
 c_73183.fn = (function_type)__lambda_26;
c_73183.num_args = 0;
c_73183.num_elt = 1;
c_73183.elts = (object *)alloca(sizeof(object) * 1);
c_73183.elts[0] = new_733;

return_closcall1(data,(closure)&c_73164,  &c_73183);; 
}

static void __lambda_26(void *data, int argc, object self_7362, object k_7327) {
  Cyc_st_add(data, "scheme/file.sld:with-output-to-file");

closureN_type c_73185;
c_73185.hdr.mark = gc_color_red;
 c_73185.hdr.grayed = 0;
c_73185.tag = closureN_tag;
 c_73185.fn = (function_type)__lambda_25;
c_73185.num_args = 1;
c_73185.num_elt = 2;
c_73185.elts = (object *)alloca(sizeof(object) * 2);
c_73185.elts[0] = k_7327;
c_73185.elts[1] = ((closureN)self_7362)->elts[0];

return_closcall1(data,(closure)&c_73185,  quote__121param_91set_67_125);; 
}

static void __lambda_25(void *data, int argc, object self_7363, object r_7328) {
  Cyc_st_add(data, "scheme/file.sld:with-output-to-file");
return_closcall3(data,  __glo_current_91output_91port,  ((closureN)self_7363)->elts[0], r_7328, ((closureN)self_7363)->elts[1]);; 
}

static void __lambda_24(void *data, int argc, object self_7364, object r_7321) {
  Cyc_st_add(data, "scheme/file.sld:with-output-to-file");

closureN_type c_73166;
c_73166.hdr.mark = gc_color_red;
 c_73166.hdr.grayed = 0;
c_73166.tag = closureN_tag;
 c_73166.fn = (function_type)__lambda_19;
c_73166.num_args = 1;
c_73166.num_elt = 3;
c_73166.elts = (object *)alloca(sizeof(object) * 3);
c_73166.elts[0] = ((closureN)self_7364)->elts[0];
c_73166.elts[1] = r_7321;
c_73166.elts[2] = ((closureN)self_7364)->elts[2];


closureN_type c_73171;
c_73171.hdr.mark = gc_color_red;
 c_73171.hdr.grayed = 0;
c_73171.tag = closureN_tag;
 c_73171.fn = (function_type)__lambda_23;
c_73171.num_args = 0;
c_73171.num_elt = 1;
c_73171.elts = (object *)alloca(sizeof(object) * 1);
c_73171.elts[0] = ((closureN)self_7364)->elts[1];

return_closcall1(data,(closure)&c_73166,  &c_73171);; 
}

static void __lambda_23(void *data, int argc, object self_7365, object k_7323) {
  Cyc_st_add(data, "scheme/file.sld:with-output-to-file");

closureN_type c_73173;
c_73173.hdr.mark = gc_color_red;
 c_73173.hdr.grayed = 0;
c_73173.tag = closureN_tag;
 c_73173.fn = (function_type)__lambda_22;
c_73173.num_args = 1;
c_73173.num_elt = 2;
c_73173.elts = (object *)alloca(sizeof(object) * 2);
c_73173.elts[0] = k_7323;
c_73173.elts[1] = ((closureN)self_7365)->elts[0];

return_closcall1(data,  __glo_current_91output_91port,  &c_73173);; 
}

static void __lambda_22(void *data, int argc, object self_7366, object r_7326) {
  Cyc_st_add(data, "scheme/file.sld:with-output-to-file");

closureN_type c_73175;
c_73175.hdr.mark = gc_color_red;
 c_73175.hdr.grayed = 0;
c_73175.tag = closureN_tag;
 c_73175.fn = (function_type)__lambda_21;
c_73175.num_args = 1;
c_73175.num_elt = 2;
c_73175.elts = (object *)alloca(sizeof(object) * 2);
c_73175.elts[0] = ((closureN)self_7366)->elts[0];
c_73175.elts[1] = ((closureN)self_7366)->elts[1];

return_closcall1(data,(closure)&c_73175,  Cyc_io_close_port(data, r_7326));; 
}

static void __lambda_21(void *data, int argc, object self_7367, object r_7324) {
  Cyc_st_add(data, "scheme/file.sld:with-output-to-file");

closureN_type c_73177;
c_73177.hdr.mark = gc_color_red;
 c_73177.hdr.grayed = 0;
c_73177.tag = closureN_tag;
 c_73177.fn = (function_type)__lambda_20;
c_73177.num_args = 1;
c_73177.num_elt = 2;
c_73177.elts = (object *)alloca(sizeof(object) * 2);
c_73177.elts[0] = ((closureN)self_7367)->elts[0];
c_73177.elts[1] = ((closureN)self_7367)->elts[1];

return_closcall1(data,(closure)&c_73177,  quote__121param_91set_67_125);; 
}

static void __lambda_20(void *data, int argc, object self_7368, object r_7325) {
  Cyc_st_add(data, "scheme/file.sld:with-output-to-file");
return_closcall3(data,  __glo_current_91output_91port,  ((closureN)self_7368)->elts[0], r_7325, ((closureN)self_7368)->elts[1]);; 
}

static void __lambda_19(void *data, int argc, object self_7369, object r_7322) {
  Cyc_st_add(data, "scheme/file.sld:with-output-to-file");
return_closcall4(data,  __glo_dynamic_91wind,  ((closureN)self_7369)->elts[0], ((closureN)self_7369)->elts[1], ((closureN)self_7369)->elts[2], r_7322);; 
}

static void __lambda_18(void *data, int argc, closure _,object k_7334, object string_736, object thunk_735) {
  Cyc_st_add(data, "scheme/file.sld:with-input-from-file");

closureN_type c_73106;
c_73106.hdr.mark = gc_color_red;
 c_73106.hdr.grayed = 0;
c_73106.tag = closureN_tag;
 c_73106.fn = (function_type)__lambda_17;
c_73106.num_args = 1;
c_73106.num_elt = 3;
c_73106.elts = (object *)alloca(sizeof(object) * 3);
c_73106.elts[0] = k_7334;
c_73106.elts[1] = string_736;
c_73106.elts[2] = thunk_735;

return_closcall1(data,  __glo_current_91input_91port,  &c_73106);; 
}

static void __lambda_17(void *data, int argc, object self_7370, object r_7335) {
  Cyc_st_add(data, "scheme/file.sld:with-input-from-file");

closureN_type c_73108;
c_73108.hdr.mark = gc_color_red;
 c_73108.hdr.grayed = 0;
c_73108.tag = closureN_tag;
 c_73108.fn = (function_type)__lambda_16;
c_73108.num_args = 1;
c_73108.num_elt = 4;
c_73108.elts = (object *)alloca(sizeof(object) * 4);
c_73108.elts[0] = ((closureN)self_7370)->elts[0];
c_73108.elts[1] = r_7335;
c_73108.elts[2] = ((closureN)self_7370)->elts[1];
c_73108.elts[3] = ((closureN)self_7370)->elts[2];

return_closcall1(data,(closure)&c_73108,  quote__121param_91convert_125);; 
}

static void __lambda_16(void *data, int argc, object self_7371, object r_7347) {
  Cyc_st_add(data, "scheme/file.sld:with-input-from-file");

closureN_type c_73110;
c_73110.hdr.mark = gc_color_red;
 c_73110.hdr.grayed = 0;
c_73110.tag = closureN_tag;
 c_73110.fn = (function_type)__lambda_15;
c_73110.num_args = 1;
c_73110.num_elt = 4;
c_73110.elts = (object *)alloca(sizeof(object) * 4);
c_73110.elts[0] = ((closureN)self_7371)->elts[0];
c_73110.elts[1] = ((closureN)self_7371)->elts[1];
c_73110.elts[2] = ((closureN)self_7371)->elts[2];
c_73110.elts[3] = ((closureN)self_7371)->elts[3];

return_closcall2(data,  __glo_current_91input_91port,  &c_73110, r_7347);; 
}

static void __lambda_15(void *data, int argc, object self_7372, object r_7345) {
  Cyc_st_add(data, "scheme/file.sld:with-input-from-file");

closureN_type c_73112;
c_73112.hdr.mark = gc_color_red;
 c_73112.hdr.grayed = 0;
c_73112.tag = closureN_tag;
 c_73112.fn = (function_type)__lambda_14;
c_73112.num_args = 1;
c_73112.num_elt = 4;
c_73112.elts = (object *)alloca(sizeof(object) * 4);
c_73112.elts[0] = ((closureN)self_7372)->elts[0];
c_73112.elts[1] = ((closureN)self_7372)->elts[1];
c_73112.elts[2] = r_7345;
c_73112.elts[3] = ((closureN)self_7372)->elts[3];


port_type c_73147 = Cyc_io_open_input_file(data,((closureN)self_7372)->elts[2]);
return_closcall1(data,(closure)&c_73112,  &c_73147);; 
}

static void __lambda_14(void *data, int argc, object self_7373, object r_7346) {
  Cyc_st_add(data, "scheme/file.sld:with-input-from-file");

closureN_type c_73115;
c_73115.hdr.mark = gc_color_red;
 c_73115.hdr.grayed = 0;
c_73115.tag = closureN_tag;
 c_73115.fn = (function_type)__lambda_13;
c_73115.num_args = 1;
c_73115.num_elt = 3;
c_73115.elts = (object *)alloca(sizeof(object) * 3);
c_73115.elts[0] = ((closureN)self_7373)->elts[0];
c_73115.elts[1] = ((closureN)self_7373)->elts[1];
c_73115.elts[2] = ((closureN)self_7373)->elts[3];

return_closcall2(data,  ((closureN)self_7373)->elts[2],  &c_73115, r_7346);; 
}

static void __lambda_13(void *data, int argc, object self_7374, object r_7336) {
  Cyc_st_add(data, "scheme/file.sld:with-input-from-file");

closureN_type c_73117;
c_73117.hdr.mark = gc_color_red;
 c_73117.hdr.grayed = 0;
c_73117.tag = closureN_tag;
 c_73117.fn = (function_type)__lambda_12;
c_73117.num_args = 2;
c_73117.num_elt = 2;
c_73117.elts = (object *)alloca(sizeof(object) * 2);
c_73117.elts[0] = ((closureN)self_7374)->elts[0];
c_73117.elts[1] = ((closureN)self_7374)->elts[2];

return_closcall2(data,(closure)&c_73117,  ((closureN)self_7374)->elts[1], r_7336);; 
}

static void __lambda_12(void *data, int argc, object self_7375, object old_738, object new_737) {
  Cyc_st_add(data, "scheme/file.sld:with-input-from-file");

closureN_type c_73119;
c_73119.hdr.mark = gc_color_red;
 c_73119.hdr.grayed = 0;
c_73119.tag = closureN_tag;
 c_73119.fn = (function_type)__lambda_9;
c_73119.num_args = 1;
c_73119.num_elt = 3;
c_73119.elts = (object *)alloca(sizeof(object) * 3);
c_73119.elts[0] = ((closureN)self_7375)->elts[0];
c_73119.elts[1] = old_738;
c_73119.elts[2] = ((closureN)self_7375)->elts[1];


closureN_type c_73138;
c_73138.hdr.mark = gc_color_red;
 c_73138.hdr.grayed = 0;
c_73138.tag = closureN_tag;
 c_73138.fn = (function_type)__lambda_11;
c_73138.num_args = 0;
c_73138.num_elt = 1;
c_73138.elts = (object *)alloca(sizeof(object) * 1);
c_73138.elts[0] = new_737;

return_closcall1(data,(closure)&c_73119,  &c_73138);; 
}

static void __lambda_11(void *data, int argc, object self_7376, object k_7343) {
  Cyc_st_add(data, "scheme/file.sld:with-input-from-file");

closureN_type c_73140;
c_73140.hdr.mark = gc_color_red;
 c_73140.hdr.grayed = 0;
c_73140.tag = closureN_tag;
 c_73140.fn = (function_type)__lambda_10;
c_73140.num_args = 1;
c_73140.num_elt = 2;
c_73140.elts = (object *)alloca(sizeof(object) * 2);
c_73140.elts[0] = k_7343;
c_73140.elts[1] = ((closureN)self_7376)->elts[0];

return_closcall1(data,(closure)&c_73140,  quote__121param_91set_67_125);; 
}

static void __lambda_10(void *data, int argc, object self_7377, object r_7344) {
  Cyc_st_add(data, "scheme/file.sld:with-input-from-file");
return_closcall3(data,  __glo_current_91input_91port,  ((closureN)self_7377)->elts[0], r_7344, ((closureN)self_7377)->elts[1]);; 
}

static void __lambda_9(void *data, int argc, object self_7378, object r_7337) {
  Cyc_st_add(data, "scheme/file.sld:with-input-from-file");

closureN_type c_73121;
c_73121.hdr.mark = gc_color_red;
 c_73121.hdr.grayed = 0;
c_73121.tag = closureN_tag;
 c_73121.fn = (function_type)__lambda_4;
c_73121.num_args = 1;
c_73121.num_elt = 3;
c_73121.elts = (object *)alloca(sizeof(object) * 3);
c_73121.elts[0] = ((closureN)self_7378)->elts[0];
c_73121.elts[1] = r_7337;
c_73121.elts[2] = ((closureN)self_7378)->elts[2];


closureN_type c_73126;
c_73126.hdr.mark = gc_color_red;
 c_73126.hdr.grayed = 0;
c_73126.tag = closureN_tag;
 c_73126.fn = (function_type)__lambda_8;
c_73126.num_args = 0;
c_73126.num_elt = 1;
c_73126.elts = (object *)alloca(sizeof(object) * 1);
c_73126.elts[0] = ((closureN)self_7378)->elts[1];

return_closcall1(data,(closure)&c_73121,  &c_73126);; 
}

static void __lambda_8(void *data, int argc, object self_7379, object k_7339) {
  Cyc_st_add(data, "scheme/file.sld:with-input-from-file");

closureN_type c_73128;
c_73128.hdr.mark = gc_color_red;
 c_73128.hdr.grayed = 0;
c_73128.tag = closureN_tag;
 c_73128.fn = (function_type)__lambda_7;
c_73128.num_args = 1;
c_73128.num_elt = 2;
c_73128.elts = (object *)alloca(sizeof(object) * 2);
c_73128.elts[0] = k_7339;
c_73128.elts[1] = ((closureN)self_7379)->elts[0];

return_closcall1(data,  __glo_current_91input_91port,  &c_73128);; 
}

static void __lambda_7(void *data, int argc, object self_7380, object r_7342) {
  Cyc_st_add(data, "scheme/file.sld:with-input-from-file");

closureN_type c_73130;
c_73130.hdr.mark = gc_color_red;
 c_73130.hdr.grayed = 0;
c_73130.tag = closureN_tag;
 c_73130.fn = (function_type)__lambda_6;
c_73130.num_args = 1;
c_73130.num_elt = 2;
c_73130.elts = (object *)alloca(sizeof(object) * 2);
c_73130.elts[0] = ((closureN)self_7380)->elts[0];
c_73130.elts[1] = ((closureN)self_7380)->elts[1];

return_closcall1(data,(closure)&c_73130,  Cyc_io_close_port(data, r_7342));; 
}

static void __lambda_6(void *data, int argc, object self_7381, object r_7340) {
  Cyc_st_add(data, "scheme/file.sld:with-input-from-file");

closureN_type c_73132;
c_73132.hdr.mark = gc_color_red;
 c_73132.hdr.grayed = 0;
c_73132.tag = closureN_tag;
 c_73132.fn = (function_type)__lambda_5;
c_73132.num_args = 1;
c_73132.num_elt = 2;
c_73132.elts = (object *)alloca(sizeof(object) * 2);
c_73132.elts[0] = ((closureN)self_7381)->elts[0];
c_73132.elts[1] = ((closureN)self_7381)->elts[1];

return_closcall1(data,(closure)&c_73132,  quote__121param_91set_67_125);; 
}

static void __lambda_5(void *data, int argc, object self_7382, object r_7341) {
  Cyc_st_add(data, "scheme/file.sld:with-input-from-file");
return_closcall3(data,  __glo_current_91input_91port,  ((closureN)self_7382)->elts[0], r_7341, ((closureN)self_7382)->elts[1]);; 
}

static void __lambda_4(void *data, int argc, object self_7383, object r_7338) {
  Cyc_st_add(data, "scheme/file.sld:with-input-from-file");
return_closcall4(data,  __glo_dynamic_91wind,  ((closureN)self_7383)->elts[0], ((closureN)self_7383)->elts[1], ((closureN)self_7383)->elts[2], r_7338);; 
}

static void __lambda_3(void *data, int argc, closure _,object k_7350, object string_7310, object proc_739) {
  Cyc_st_add(data, "scheme/file.sld:call-with-output-file");

closureN_type c_7397;
c_7397.hdr.mark = gc_color_red;
 c_7397.hdr.grayed = 0;
c_7397.tag = closureN_tag;
 c_7397.fn = (function_type)__lambda_2;
c_7397.num_args = 1;
c_7397.num_elt = 2;
c_7397.elts = (object *)alloca(sizeof(object) * 2);
c_7397.elts[0] = k_7350;
c_7397.elts[1] = proc_739;


port_type c_73103 = Cyc_io_open_output_file(data,string_7310);
return_closcall1(data,(closure)&c_7397,  &c_73103);; 
}

static void __lambda_2(void *data, int argc, object self_7384, object r_7351) {
  Cyc_st_add(data, "scheme/file.sld:call-with-output-file");
return_closcall3(data,  __glo_call_91with_91port,  ((closureN)self_7384)->elts[0], r_7351, ((closureN)self_7384)->elts[1]);; 
}

static void __lambda_1(void *data, int argc, closure _,object k_7354, object string_7312, object proc_7311) {
  Cyc_st_add(data, "scheme/file.sld:call-with-input-file");

closureN_type c_7388;
c_7388.hdr.mark = gc_color_red;
 c_7388.hdr.grayed = 0;
c_7388.tag = closureN_tag;
 c_7388.fn = (function_type)__lambda_0;
c_7388.num_args = 1;
c_7388.num_elt = 2;
c_7388.elts = (object *)alloca(sizeof(object) * 2);
c_7388.elts[0] = k_7354;
c_7388.elts[1] = proc_7311;


port_type c_7394 = Cyc_io_open_input_file(data,string_7312);
return_closcall1(data,(closure)&c_7388,  &c_7394);; 
}

static void __lambda_0(void *data, int argc, object self_7385, object r_7355) {
  Cyc_st_add(data, "scheme/file.sld:call-with-input-file");
return_closcall3(data,  __glo_call_91with_91port,  ((closureN)self_7385)->elts[0], r_7355, ((closureN)self_7385)->elts[1]);; 
}

void c_schemefile_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  quote__121param_91convert_125 = find_or_add_symbol("<param-convert>");
  quote__121param_91set_67_125 = find_or_add_symbol("<param-set!>");

  add_global((object *) &__glo_lib_91init_117schemefile);
  add_global((object *) &__glo_with_91output_91to_91file);
  add_global((object *) &__glo_with_91input_91from_91file);
  add_global((object *) &__glo_call_91with_91output_91file);
  add_global((object *) &__glo_call_91with_91input_91file);
  add_symbol(quote__121param_91convert_125);
  add_symbol(quote__121param_91set_67_125);
  mclosure0(c_73194, (function_type)__lambda_34);c_73194.num_args = 0; 
  __glo_lib_91init_117schemefile = &c_73194; 
  mclosure0(c_73149, (function_type)__lambda_33);c_73149.num_args = 2; 
  __glo_with_91output_91to_91file = &c_73149; 
  mclosure0(c_73104, (function_type)__lambda_18);c_73104.num_args = 2; 
  __glo_with_91input_91from_91file = &c_73104; 
  mclosure0(c_7395, (function_type)__lambda_3);c_7395.num_args = 2; 
  __glo_call_91with_91output_91file = &c_7395; 
  mclosure0(c_7386, (function_type)__lambda_1);c_7386.num_args = 2; 
  __glo_call_91with_91input_91file = &c_7386; 

  make_cvar(cvar_73197, (object *)&__glo_lib_91init_117schemefile);make_cons(pair_73198, find_or_add_symbol("lib-init:schemefile"), &cvar_73197);
  make_cvar(cvar_73199, (object *)&__glo_with_91output_91to_91file);make_cons(pair_73200, find_or_add_symbol("with-output-to-file"), &cvar_73199);
  make_cvar(cvar_73201, (object *)&__glo_with_91input_91from_91file);make_cons(pair_73202, find_or_add_symbol("with-input-from-file"), &cvar_73201);
  make_cvar(cvar_73203, (object *)&__glo_call_91with_91output_91file);make_cons(pair_73204, find_or_add_symbol("call-with-output-file"), &cvar_73203);
  make_cvar(cvar_73205, (object *)&__glo_call_91with_91input_91file);make_cons(pair_73206, find_or_add_symbol("call-with-input-file"), &cvar_73205);
make_cons(c_73207, &pair_73198,Cyc_global_variables);
make_cons(c_73208, &pair_73200, &c_73207);
make_cons(c_73209, &pair_73202, &c_73208);
make_cons(c_73210, &pair_73204, &c_73209);
make_cons(c_73211, &pair_73206, &c_73210);
Cyc_global_variables = &c_73211;
cont = ((closure1_type *)cont)->elt1;
(((closure)__glo_lib_91init_117schemefile)->fn)(data, 1, cont, cont);
}
