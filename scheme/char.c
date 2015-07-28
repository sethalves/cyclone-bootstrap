/**
 ** This file was automatically generated by the Cyclone scheme compiler
 **
 ** (c) 2014 Justin Ethier
 ** Version 0.0.1 (Pre-release)
 **
 **/

#define funcall1(cfn,a1) if (type_of(cfn) == cons_tag || prim(cfn)) { Cyc_apply(0, (closure)a1, cfn); } else { ((cfn)->fn)(1,cfn,a1);}
/* Return to continuation after checking for stack overflow. */
#define return_funcall1(cfn,a1) \
{char stack; \
 if (check_overflow(&stack,stack_limit1)) { \
     object buf[1]; buf[0] = a1;\
     GC(cfn,buf,1); return; \
 } else {funcall1((closure) (cfn),a1); return;}}

/* Evaluate an expression after checking for stack overflow. */
#define return_check1(_fn,a1) { \
 char stack; \
 if (check_overflow(&stack,stack_limit1)) { \
     object buf[1]; buf[0] = a1; \
     mclosure0(c1, _fn); \
     GC(&c1, buf, 1); return; \
 } else { (_fn)(1,(closure)_fn,a1); }}

#define funcall2(cfn,a1,a2) if (type_of(cfn) == cons_tag || prim(cfn)) { Cyc_apply(1, (closure)a1, cfn,a2); } else { ((cfn)->fn)(2,cfn,a1,a2);}
/* Return to continuation after checking for stack overflow. */
#define return_funcall2(cfn,a1,a2) \
{char stack; \
 if (check_overflow(&stack,stack_limit1)) { \
     object buf[2]; buf[0] = a1;buf[1] = a2;\
     GC(cfn,buf,2); return; \
 } else {funcall2((closure) (cfn),a1,a2); return;}}

/* Evaluate an expression after checking for stack overflow. */
#define return_check2(_fn,a1,a2) { \
 char stack; \
 if (check_overflow(&stack,stack_limit1)) { \
     object buf[2]; buf[0] = a1;buf[1] = a2; \
     mclosure0(c1, _fn); \
     GC(&c1, buf, 2); return; \
 } else { (_fn)(2,(closure)_fn,a1,a2); }}

#define funcall3(cfn,a1,a2,a3) if (type_of(cfn) == cons_tag || prim(cfn)) { Cyc_apply(2, (closure)a1, cfn,a2,a3); } else { ((cfn)->fn)(3,cfn,a1,a2,a3);}
/* Return to continuation after checking for stack overflow. */
#define return_funcall3(cfn,a1,a2,a3) \
{char stack; \
 if (check_overflow(&stack,stack_limit1)) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3;\
     GC(cfn,buf,3); return; \
 } else {funcall3((closure) (cfn),a1,a2,a3); return;}}

/* Evaluate an expression after checking for stack overflow. */
#define return_check3(_fn,a1,a2,a3) { \
 char stack; \
 if (check_overflow(&stack,stack_limit1)) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3; \
     mclosure0(c1, _fn); \
     GC(&c1, buf, 3); return; \
 } else { (_fn)(3,(closure)_fn,a1,a2,a3); }}

#include "cyclone/types.h"
object __glo_lib_91init_117scheme_191char = nil;
object __glo_digit_91value = nil;
object __glo_char_91whitespace_127 = nil;
object __glo_char_91numeric_127 = nil;
object __glo_char_91lower_91case_127 = nil;
object __glo_char_91upper_91case_127 = nil;
object __glo_char_91alphabetic_127 = nil;
object __glo_char_91downcase = nil;
object __glo_char_91upcase = nil;
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
extern object __glo_make_91string;
extern object __glo_string;
extern object __glo_vector;
extern object __glo_vector_91append;
extern object __glo_vector_91copy;
extern object __glo_vector_91copy_67;
extern object __glo_vector_91fill_67;
extern object __glo_vector_91_125list;
extern object __glo_vector_91_125string;
extern object __glo_string_91_125vector;
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
#include "cyclone/runtime.h"
static void __lambda_21(int argc, closure _,object k_7311) ;
static void __lambda_20(int argc, closure _,object k_7314, object c_731) ;
static void __lambda_19(int argc, object self_7349, object r_7315) ;
static void __lambda_18(int argc, object self_7350, object r_7316) ;
static void __lambda_17(int argc, closure _,object k_7319, object c_732) ;
static void __lambda_16(int argc, object self_7351, object r_7320) ;
static void __lambda_15(int argc, closure _,object k_7323, object c_733) ;
static void __lambda_14(int argc, object self_7352, object r_7324) ;
static void __lambda_13(int argc, closure _,object k_7327, object c_734) ;
static void __lambda_12(int argc, object self_7353, object r_7328) ;
static void __lambda_11(int argc, closure _,object k_7331, object c_735) ;
static void __lambda_10(int argc, object self_7354, object r_7332) ;
static void __lambda_9(int argc, closure _,object k_7335, object c_736) ;
static void __lambda_8(int argc, object self_7355, object r_7336) ;
static void __lambda_7(int argc, closure _,object k_7339, object c_737) ;
static void __lambda_6(int argc, object self_7356, object r_7340) ;
static void __lambda_5(int argc, object self_7357, object r_7342) ;
static void __lambda_4(int argc, object self_7358, object r_7341) ;
static void __lambda_3(int argc, closure _,object k_7345, object c_738) ;
static void __lambda_2(int argc, object self_7359, object r_7346) ;
static void __lambda_1(int argc, object self_7360, object r_7348) ;
static void __lambda_0(int argc, object self_7361, object r_7347) ;

static void __lambda_21(int argc, closure _,object k_7311) {
  Cyc_st_add("scheme/char.c:lib-init:scheme_char");

make_int(c_73179, 0);
return_funcall1(  k_7311,  &c_73179);; 
}

static void __lambda_20(int argc, closure _,object k_7314, object c_731) {
  Cyc_st_add("scheme/char.c:digit-value");

closureN_type c_73162;
c_73162.tag = closureN_tag;
 c_73162.fn = (function_type)__lambda_19;
c_73162.num_args = 1;
c_73162.num_elt = 2;
c_73162.elts = (object *)alloca(sizeof(object) * 2);
c_73162.elts[0] = c_731;
c_73162.elts[1] = k_7314;

return_funcall2(  __glo_char_91numeric_127,  &c_73162, c_731);; 
}

static void __lambda_19(int argc, object self_7349, object r_7315) {
  Cyc_st_add("scheme/char.c:digit-value");
if( !eq(boolean_f, r_7315) ){ 
  
closureN_type c_73164;
c_73164.tag = closureN_tag;
 c_73164.fn = (function_type)__lambda_18;
c_73164.num_args = 1;
c_73164.num_elt = 1;
c_73164.elts = (object *)alloca(sizeof(object) * 1);
c_73164.elts[0] = ((closureN)self_7349)->elts[1];


integer_type c_73173 = Cyc_char2integer(((closureN)self_7349)->elts[0]);
return_funcall1((closure)&c_73164,  &c_73173);
} else { 
  return_funcall1(  ((closureN)self_7349)->elts[1],  boolean_f);}
; 
}

static void __lambda_18(int argc, object self_7350, object r_7316) {
  Cyc_st_add("scheme/char.c:digit-value");

make_int(c_73170, 48);

common_type c_73169 = Cyc_sub(2,r_7316, &c_73170);
return_funcall1(  ((closureN)self_7350)->elts[0],  &c_73169);; 
}

static void __lambda_17(int argc, closure _,object k_7319, object c_732) {
  Cyc_st_add("scheme/char.c:char-whitespace?");

closureN_type c_73150;
c_73150.tag = closureN_tag;
 c_73150.fn = (function_type)__lambda_16;
c_73150.num_args = 1;
c_73150.num_elt = 2;
c_73150.elts = (object *)alloca(sizeof(object) * 2);
c_73150.elts[0] = c_732;
c_73150.elts[1] = k_7319;


make_cons(c_73159,obj_char2obj(10),nil);

make_cons(c_73158,obj_char2obj(13),&c_73159);

make_cons(c_73157,obj_char2obj(32),&c_73158);

make_cons(c_73156,obj_char2obj(9),&c_73157);
return_funcall1((closure)&c_73150,  &c_73156);; 
}

static void __lambda_16(int argc, object self_7351, object r_7320) {
  Cyc_st_add("scheme/char.c:char-whitespace?");
return_funcall1(  ((closureN)self_7351)->elts[1],  memberp(((closureN)self_7351)->elts[0], r_7320));; 
}

static void __lambda_15(int argc, closure _,object k_7323, object c_733) {
  Cyc_st_add("scheme/char.c:char-numeric?");

closureN_type c_73132;
c_73132.tag = closureN_tag;
 c_73132.fn = (function_type)__lambda_14;
c_73132.num_args = 1;
c_73132.num_elt = 2;
c_73132.elts = (object *)alloca(sizeof(object) * 2);
c_73132.elts[0] = c_733;
c_73132.elts[1] = k_7323;


make_cons(c_73147,obj_char2obj(57),nil);

make_cons(c_73146,obj_char2obj(56),&c_73147);

make_cons(c_73145,obj_char2obj(55),&c_73146);

make_cons(c_73144,obj_char2obj(54),&c_73145);

make_cons(c_73143,obj_char2obj(53),&c_73144);

make_cons(c_73142,obj_char2obj(52),&c_73143);

make_cons(c_73141,obj_char2obj(51),&c_73142);

make_cons(c_73140,obj_char2obj(50),&c_73141);

make_cons(c_73139,obj_char2obj(49),&c_73140);

make_cons(c_73138,obj_char2obj(48),&c_73139);
return_funcall1((closure)&c_73132,  &c_73138);; 
}

static void __lambda_14(int argc, object self_7352, object r_7324) {
  Cyc_st_add("scheme/char.c:char-numeric?");
return_funcall1(  ((closureN)self_7352)->elts[1],  memberp(((closureN)self_7352)->elts[0], r_7324));; 
}

static void __lambda_13(int argc, closure _,object k_7327, object c_734) {
  Cyc_st_add("scheme/char.c:char-lower-case?");

closureN_type c_73124;
c_73124.tag = closureN_tag;
 c_73124.fn = (function_type)__lambda_12;
c_73124.num_args = 1;
c_73124.num_elt = 2;
c_73124.elts = (object *)alloca(sizeof(object) * 2);
c_73124.elts[0] = c_734;
c_73124.elts[1] = k_7327;

return_funcall3(  __glo_char_125_123_127,  &c_73124, c_734, obj_char2obj(97));; 
}

static void __lambda_12(int argc, object self_7353, object r_7328) {
  Cyc_st_add("scheme/char.c:char-lower-case?");
if( !eq(boolean_f, r_7328) ){ 
  return_funcall3(  __glo_char_121_123_127,  ((closureN)self_7353)->elts[1], ((closureN)self_7353)->elts[0], obj_char2obj(122));
} else { 
  return_funcall1(  ((closureN)self_7353)->elts[1],  boolean_f);}
; 
}

static void __lambda_11(int argc, closure _,object k_7331, object c_735) {
  Cyc_st_add("scheme/char.c:char-upper-case?");

closureN_type c_73116;
c_73116.tag = closureN_tag;
 c_73116.fn = (function_type)__lambda_10;
c_73116.num_args = 1;
c_73116.num_elt = 2;
c_73116.elts = (object *)alloca(sizeof(object) * 2);
c_73116.elts[0] = c_735;
c_73116.elts[1] = k_7331;

return_funcall3(  __glo_char_125_123_127,  &c_73116, c_735, obj_char2obj(65));; 
}

static void __lambda_10(int argc, object self_7354, object r_7332) {
  Cyc_st_add("scheme/char.c:char-upper-case?");
if( !eq(boolean_f, r_7332) ){ 
  return_funcall3(  __glo_char_121_123_127,  ((closureN)self_7354)->elts[1], ((closureN)self_7354)->elts[0], obj_char2obj(90));
} else { 
  return_funcall1(  ((closureN)self_7354)->elts[1],  boolean_f);}
; 
}

static void __lambda_9(int argc, closure _,object k_7335, object c_736) {
  Cyc_st_add("scheme/char.c:char-alphabetic?");

closureN_type c_73108;
c_73108.tag = closureN_tag;
 c_73108.fn = (function_type)__lambda_8;
c_73108.num_args = 1;
c_73108.num_elt = 2;
c_73108.elts = (object *)alloca(sizeof(object) * 2);
c_73108.elts[0] = c_736;
c_73108.elts[1] = k_7335;

return_funcall3(  __glo_char_125_123_127,  &c_73108, c_736, obj_char2obj(65));; 
}

static void __lambda_8(int argc, object self_7355, object r_7336) {
  Cyc_st_add("scheme/char.c:char-alphabetic?");
if( !eq(boolean_f, r_7336) ){ 
  return_funcall3(  __glo_char_121_123_127,  ((closureN)self_7355)->elts[1], ((closureN)self_7355)->elts[0], obj_char2obj(122));
} else { 
  return_funcall1(  ((closureN)self_7355)->elts[1],  boolean_f);}
; 
}

static void __lambda_7(int argc, closure _,object k_7339, object c_737) {
  Cyc_st_add("scheme/char.c:char-downcase");

closureN_type c_7386;
c_7386.tag = closureN_tag;
 c_7386.fn = (function_type)__lambda_6;
c_7386.num_args = 1;
c_7386.num_elt = 2;
c_7386.elts = (object *)alloca(sizeof(object) * 2);
c_7386.elts[0] = c_737;
c_7386.elts[1] = k_7339;

return_funcall2(  __glo_char_91upper_91case_127,  &c_7386, c_737);; 
}

static void __lambda_6(int argc, object self_7356, object r_7340) {
  Cyc_st_add("scheme/char.c:char-downcase");
if( !eq(boolean_f, r_7340) ){ 
  
closureN_type c_7388;
c_7388.tag = closureN_tag;
 c_7388.fn = (function_type)__lambda_5;
c_7388.num_args = 1;
c_7388.num_elt = 1;
c_7388.elts = (object *)alloca(sizeof(object) * 1);
c_7388.elts[0] = ((closureN)self_7356)->elts[1];


integer_type c_73101 = Cyc_char2integer(((closureN)self_7356)->elts[0]);
return_funcall1((closure)&c_7388,  &c_73101);
} else { 
  return_funcall1(  ((closureN)self_7356)->elts[1],  ((closureN)self_7356)->elts[0]);}
; 
}

static void __lambda_5(int argc, object self_7357, object r_7342) {
  Cyc_st_add("scheme/char.c:char-downcase");

closureN_type c_7390;
c_7390.tag = closureN_tag;
 c_7390.fn = (function_type)__lambda_4;
c_7390.num_args = 1;
c_7390.num_elt = 1;
c_7390.elts = (object *)alloca(sizeof(object) * 1);
c_7390.elts[0] = ((closureN)self_7357)->elts[0];


make_int(c_7398, 32);

common_type c_7397 = Cyc_sum(2,r_7342, &c_7398);
return_funcall1((closure)&c_7390,  &c_7397);; 
}

static void __lambda_4(int argc, object self_7358, object r_7341) {
  Cyc_st_add("scheme/char.c:char-downcase");
return_funcall1(  ((closureN)self_7358)->elts[0],  Cyc_integer2char(r_7341));; 
}

static void __lambda_3(int argc, closure _,object k_7345, object c_738) {
  Cyc_st_add("scheme/char.c:char-upcase");

closureN_type c_7364;
c_7364.tag = closureN_tag;
 c_7364.fn = (function_type)__lambda_2;
c_7364.num_args = 1;
c_7364.num_elt = 2;
c_7364.elts = (object *)alloca(sizeof(object) * 2);
c_7364.elts[0] = c_738;
c_7364.elts[1] = k_7345;

return_funcall2(  __glo_char_91lower_91case_127,  &c_7364, c_738);; 
}

static void __lambda_2(int argc, object self_7359, object r_7346) {
  Cyc_st_add("scheme/char.c:char-upcase");
if( !eq(boolean_f, r_7346) ){ 
  
closureN_type c_7366;
c_7366.tag = closureN_tag;
 c_7366.fn = (function_type)__lambda_1;
c_7366.num_args = 1;
c_7366.num_elt = 1;
c_7366.elts = (object *)alloca(sizeof(object) * 1);
c_7366.elts[0] = ((closureN)self_7359)->elts[1];


integer_type c_7379 = Cyc_char2integer(((closureN)self_7359)->elts[0]);
return_funcall1((closure)&c_7366,  &c_7379);
} else { 
  return_funcall1(  ((closureN)self_7359)->elts[1],  ((closureN)self_7359)->elts[0]);}
; 
}

static void __lambda_1(int argc, object self_7360, object r_7348) {
  Cyc_st_add("scheme/char.c:char-upcase");

closureN_type c_7368;
c_7368.tag = closureN_tag;
 c_7368.fn = (function_type)__lambda_0;
c_7368.num_args = 1;
c_7368.num_elt = 1;
c_7368.elts = (object *)alloca(sizeof(object) * 1);
c_7368.elts[0] = ((closureN)self_7360)->elts[0];


make_int(c_7376, 32);

common_type c_7375 = Cyc_sub(2,r_7348, &c_7376);
return_funcall1((closure)&c_7368,  &c_7375);; 
}

static void __lambda_0(int argc, object self_7361, object r_7347) {
  Cyc_st_add("scheme/char.c:char-upcase");
return_funcall1(  ((closureN)self_7361)->elts[0],  Cyc_integer2char(r_7347));; 
}

void c_scheme_char_entry_pt(argc, cont,value) int argc; closure cont; object value;{ 

  add_global((object *) &__glo_lib_91init_117scheme_191char);
  add_global((object *) &__glo_digit_91value);
  add_global((object *) &__glo_char_91whitespace_127);
  add_global((object *) &__glo_char_91numeric_127);
  add_global((object *) &__glo_char_91lower_91case_127);
  add_global((object *) &__glo_char_91upper_91case_127);
  add_global((object *) &__glo_char_91alphabetic_127);
  add_global((object *) &__glo_char_91downcase);
  add_global((object *) &__glo_char_91upcase);
  mclosure0(c_73177, (function_type)__lambda_21);c_73177.num_args = 0; 
  __glo_lib_91init_117scheme_191char = &c_73177; 
  mclosure0(c_73160, (function_type)__lambda_20);c_73160.num_args = 1; 
  __glo_digit_91value = &c_73160; 
  mclosure0(c_73148, (function_type)__lambda_17);c_73148.num_args = 1; 
  __glo_char_91whitespace_127 = &c_73148; 
  mclosure0(c_73130, (function_type)__lambda_15);c_73130.num_args = 1; 
  __glo_char_91numeric_127 = &c_73130; 
  mclosure0(c_73122, (function_type)__lambda_13);c_73122.num_args = 1; 
  __glo_char_91lower_91case_127 = &c_73122; 
  mclosure0(c_73114, (function_type)__lambda_11);c_73114.num_args = 1; 
  __glo_char_91upper_91case_127 = &c_73114; 
  mclosure0(c_73106, (function_type)__lambda_9);c_73106.num_args = 1; 
  __glo_char_91alphabetic_127 = &c_73106; 
  mclosure0(c_7384, (function_type)__lambda_7);c_7384.num_args = 1; 
  __glo_char_91downcase = &c_7384; 
  mclosure0(c_7362, (function_type)__lambda_3);c_7362.num_args = 1; 
  __glo_char_91upcase = &c_7362; 

  make_cvar(cvar_73180, (object *)&__glo_lib_91init_117scheme_191char);make_cons(pair_73181, find_or_add_symbol("lib-init:scheme_char"), &cvar_73180);
  make_cvar(cvar_73182, (object *)&__glo_digit_91value);make_cons(pair_73183, find_or_add_symbol("digit-value"), &cvar_73182);
  make_cvar(cvar_73184, (object *)&__glo_char_91whitespace_127);make_cons(pair_73185, find_or_add_symbol("char-whitespace?"), &cvar_73184);
  make_cvar(cvar_73186, (object *)&__glo_char_91numeric_127);make_cons(pair_73187, find_or_add_symbol("char-numeric?"), &cvar_73186);
  make_cvar(cvar_73188, (object *)&__glo_char_91lower_91case_127);make_cons(pair_73189, find_or_add_symbol("char-lower-case?"), &cvar_73188);
  make_cvar(cvar_73190, (object *)&__glo_char_91upper_91case_127);make_cons(pair_73191, find_or_add_symbol("char-upper-case?"), &cvar_73190);
  make_cvar(cvar_73192, (object *)&__glo_char_91alphabetic_127);make_cons(pair_73193, find_or_add_symbol("char-alphabetic?"), &cvar_73192);
  make_cvar(cvar_73194, (object *)&__glo_char_91downcase);make_cons(pair_73195, find_or_add_symbol("char-downcase"), &cvar_73194);
  make_cvar(cvar_73196, (object *)&__glo_char_91upcase);make_cons(pair_73197, find_or_add_symbol("char-upcase"), &cvar_73196);
make_cons(c_73198, &pair_73181,Cyc_global_variables);
make_cons(c_73199, &pair_73183, &c_73198);
make_cons(c_73200, &pair_73185, &c_73199);
make_cons(c_73201, &pair_73187, &c_73200);
make_cons(c_73202, &pair_73189, &c_73201);
make_cons(c_73203, &pair_73191, &c_73202);
make_cons(c_73204, &pair_73193, &c_73203);
make_cons(c_73205, &pair_73195, &c_73204);
make_cons(c_73206, &pair_73197, &c_73205);
Cyc_global_variables = &c_73206;
cont = ((closure1_type *)cont)->elt1;
(((closure)__glo_lib_91init_117scheme_191char)->fn)(1, cont, cont);
}
