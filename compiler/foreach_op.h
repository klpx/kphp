#define TMP_OP(Op, i) DL_ADD_SUFF (DL_ADD_SUFF (Op, tmp), i)
#define FOREACH_OP_8(Op) FOREACH_OP (TMP_OP(Op, 7)) FOREACH_OP_7 (Op)
#define FOREACH_OP_7(Op) FOREACH_OP (TMP_OP(Op, 6)) FOREACH_OP_6 (Op)
#define FOREACH_OP_6(Op) FOREACH_OP (TMP_OP(Op, 5)) FOREACH_OP_5 (Op)
#define FOREACH_OP_5(Op) FOREACH_OP (TMP_OP(Op, 4)) FOREACH_OP_4 (Op)
#define FOREACH_OP_4(Op) FOREACH_OP (TMP_OP(Op, 3)) FOREACH_OP_3 (Op)
#define FOREACH_OP_3(Op) FOREACH_OP (TMP_OP(Op, 2)) FOREACH_OP_2 (Op)
#define FOREACH_OP_2(Op) FOREACH_OP (TMP_OP(Op, 1)) FOREACH_OP_1 (Op)
#define FOREACH_OP_1(Op) FOREACH_OP (TMP_OP(Op, 0)) FOREACH_OP_0 (Op)
#define FOREACH_OP_0(Op) FOREACH_OP (Op)

FOREACH_OP (meta_op_base)

FOREACH_OP (meta_op_unary_)

FOREACH_OP (meta_op_binary_)

FOREACH_OP (meta_op_varg_)

FOREACH_OP (meta_op_unary_op)

FOREACH_OP (meta_op_binary_op)

FOREACH_OP_2 (meta_op_function)

FOREACH_OP_1 (meta_op_cycle)

FOREACH_OP (meta_op_xset)

FOREACH_OP (meta_op_push_back)

FOREACH_OP (meta_op_require)

FOREACH_OP_1 (meta_op_goto)

FOREACH_OP (meta_op_define)

FOREACH_OP (meta_op_func_param)

FOREACH_OP (meta_op_type_rule)

FOREACH_OP (meta_op_builtin_func)

FOREACH_OP_1 (meta_op_num)

FOREACH_OP (op_type_rule)

FOREACH_OP_1 (op_type_rule_func)

FOREACH_OP (op_common_type_rule)

FOREACH_OP (op_class_type_rule)

FOREACH_OP (op_lt_type_rule)

FOREACH_OP (op_gt_type_rule)

FOREACH_OP (op_eq_type_rule)

FOREACH_OP (op_self)

FOREACH_OP_1 (op_arg_ref)

FOREACH_OP (op_empty)

FOREACH_OP (op_function_c)

FOREACH_OP (op_int_const)

FOREACH_OP (op_uint_const)

FOREACH_OP (op_long_const)

FOREACH_OP (op_ulong_const)

FOREACH_OP (op_float_const)

FOREACH_OP_2 (op_var)

FOREACH_OP_1 (op_string)

FOREACH_OP_1 (op_func_name)

FOREACH_OP (op_string_build)

FOREACH_OP_2 (op_func_call)

FOREACH_OP_2 (op_func_ptr)

FOREACH_OP (op_constructor_call)

FOREACH_OP_2 (op_instance_prop)

FOREACH_OP_3 (op_class_var)

FOREACH_OP (op_seq)

FOREACH_OP (op_seq_comma)

FOREACH_OP (op_seq_rval)

FOREACH_OP (op_func_param_list)

FOREACH_OP (op_varg)

FOREACH_OP (op_func_param)

FOREACH_OP_1 (op_func_param_callback)

FOREACH_OP (op_func_decl)

FOREACH_OP (op_extern_func)

FOREACH_OP (op_isset)

FOREACH_OP (op_unset)

FOREACH_OP (op_echo)

FOREACH_OP (op_dbg_echo)

FOREACH_OP (op_var_dump)

FOREACH_OP (op_print)

FOREACH_OP (op_while)

FOREACH_OP (op_do)

FOREACH_OP (op_for)

FOREACH_OP (op_foreach)

FOREACH_OP (op_foreach_param)

FOREACH_OP (op_switch)

FOREACH_OP (op_if)

FOREACH_OP (op_else)

FOREACH_OP (op_elseif)

FOREACH_OP (op_break)

FOREACH_OP (op_continue)

FOREACH_OP (op_function)

FOREACH_OP (op_case)

FOREACH_OP (op_default)

FOREACH_OP (op_array)

FOREACH_OP (op_tuple)

FOREACH_OP_1 (op_list)

FOREACH_OP (op_list_ce)

FOREACH_OP (op_global)

FOREACH_OP (op_static)

FOREACH_OP (op_return)

FOREACH_OP (op_min)

FOREACH_OP (op_max)

FOREACH_OP (op_eq2)

FOREACH_OP (op_neq2)

FOREACH_OP (op_eq3)

FOREACH_OP (op_neq3)

FOREACH_OP (op_le)

FOREACH_OP (op_ge)

FOREACH_OP (op_lt)

FOREACH_OP (op_gt)

FOREACH_OP (op_add)

FOREACH_OP (op_sub)

FOREACH_OP (op_concat)

FOREACH_OP (op_mul)

FOREACH_OP (op_div)

FOREACH_OP (op_mod)

FOREACH_OP (op_arrow)

FOREACH_OP (op_log_xor_let)

FOREACH_OP (op_log_and_let)

FOREACH_OP (op_log_or_let)

FOREACH_OP (op_log_and)

FOREACH_OP (op_log_or)

FOREACH_OP (op_xor)

FOREACH_OP (op_or)

FOREACH_OP (op_and)

FOREACH_OP (op_shr)

FOREACH_OP (op_shl)

FOREACH_OP (op_noerr)

FOREACH_OP (op_minus)

FOREACH_OP (op_plus)

FOREACH_OP (op_double_arrow)

FOREACH_OP_1 (op_set)

FOREACH_OP (op_set_add)

FOREACH_OP (op_set_sub)

FOREACH_OP (op_set_mul)

FOREACH_OP (op_set_div)

FOREACH_OP (op_set_mod)

FOREACH_OP (op_set_and)

FOREACH_OP (op_set_or)

FOREACH_OP (op_set_xor)

FOREACH_OP (op_set_dot)

FOREACH_OP (op_set_shr)

FOREACH_OP (op_set_shl)

FOREACH_OP (op_ternary)

FOREACH_OP (op_not)

FOREACH_OP (op_log_not)

FOREACH_OP (op_prefix_inc)

FOREACH_OP (op_prefix_dec)

FOREACH_OP (op_addr)

FOREACH_OP (op_conv_int)

FOREACH_OP (op_conv_int_l)

FOREACH_OP (op_conv_float)

FOREACH_OP (op_conv_string)

FOREACH_OP (op_conv_array)

FOREACH_OP (op_conv_array_l)

FOREACH_OP (op_conv_object)

FOREACH_OP (op_conv_bool)

FOREACH_OP (op_conv_var)

FOREACH_OP (op_conv_uint)

FOREACH_OP (op_conv_long)

FOREACH_OP (op_conv_ulong)

FOREACH_OP (op_conv_regexp)

FOREACH_OP (op_postfix_inc)

FOREACH_OP (op_postfix_dec)

FOREACH_OP (op_index)

FOREACH_OP (op_push_back)

FOREACH_OP (op_push_back_return)

FOREACH_OP (op_set_value)

FOREACH_OP (op_false)

FOREACH_OP (op_true)

FOREACH_OP (op_null)

FOREACH_OP (op_lvalue_null)

FOREACH_OP (op_exit)

FOREACH_OP (op_move)

FOREACH_OP (op_require)

FOREACH_OP (op_require_once)

FOREACH_OP (op_define)

FOREACH_OP (op_defined)

FOREACH_OP (op_define_raw)

FOREACH_OP_1 (op_define_val)

FOREACH_OP (op_try)

FOREACH_OP (op_fork)

FOREACH_OP (op_async)

FOREACH_OP (op_throw)

FOREACH_OP (op_break_file)

FOREACH_OP (op_none)

FOREACH_OP (op_class)

#undef FOREACH_OP
