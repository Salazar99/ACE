// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_multdiv_fast.h for the primary calling header

#include "Vibex_multdiv_fast__pch.h"
#include "Vibex_multdiv_fast___024root.h"

void Vibex_multdiv_fast___024root___ico_sequent__TOP__0(Vibex_multdiv_fast___024root* vlSelf);

void Vibex_multdiv_fast___024root___eval_ico(Vibex_multdiv_fast___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vibex_multdiv_fast___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vibex_multdiv_fast___024root___ico_sequent__TOP__0(Vibex_multdiv_fast___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alu_operand_a_o = 1ULL;
    vlSelfRef.ibex_multdiv_fast__DOT__div_by_zero_d 
        = vlSelfRef.ibex_multdiv_fast__DOT__div_by_zero_q;
    vlSelfRef.alu_operand_b_o = (1ULL | ((QData)((IData)(
                                                         (~ vlSelfRef.op_b_i))) 
                                         << 1U));
    vlSelfRef.ibex_multdiv_fast__DOT__mult_valid = 0U;
    vlSelfRef.ibex_multdiv_fast__DOT__div_hold = 0U;
    vlSelfRef.ibex_multdiv_fast__DOT__mult_hold = 0U;
    vlSelfRef.ibex_multdiv_fast__DOT__sign_a = ((1U 
                                                 & ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_q) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & ((1U 
                                                        & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_q))
                                                        ? 
                                                       ((IData)(vlSelfRef.signed_mode_i) 
                                                        & (vlSelfRef.op_a_i 
                                                           >> 0x1fU))
                                                        : 
                                                       ((IData)(vlSelfRef.signed_mode_i) 
                                                        & (vlSelfRef.op_a_i 
                                                           >> 0x1fU)))));
    vlSelfRef.ibex_multdiv_fast__DOT__accum = vlSelfRef.imd_val_q_i
        [0U];
    if ((2U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_q))) {
        vlSelfRef.ibex_multdiv_fast__DOT__sign_b = 
            ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_q)) 
             && (IData)((((IData)(vlSelfRef.signed_mode_i) 
                          >> 1U) & (vlSelfRef.op_b_i 
                                    >> 0x1fU))));
        if ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_d = 0U;
            vlSelfRef.ibex_multdiv_fast__DOT__mult_valid = 1U;
            vlSelfRef.ibex_multdiv_fast__DOT__mult_hold 
                = (1U & (~ (IData)(vlSelfRef.multdiv_ready_id_i)));
            vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_a 
                = (0xffffU & (vlSelfRef.op_a_i >> 0x10U));
            vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_b 
                = (0xffffU & (vlSelfRef.op_b_i >> 0x10U));
            vlSelfRef.ibex_multdiv_fast__DOT__accum 
                = ((0x3fffc0000ULL & vlSelfRef.ibex_multdiv_fast__DOT__accum) 
                   | (IData)((IData)((0x3ffffU & (IData)(
                                                         (vlSelfRef.imd_val_q_i
                                                          [0U] 
                                                          >> 0x10U))))));
            vlSelfRef.ibex_multdiv_fast__DOT__accum 
                = ((0x3ffffULL & vlSelfRef.ibex_multdiv_fast__DOT__accum) 
                   | ((QData)((IData)((0xffffU & (- (IData)(
                                                            ((0U 
                                                              != (IData)(vlSelfRef.signed_mode_i)) 
                                                             & (IData)(
                                                                       (vlSelfRef.imd_val_q_i
                                                                        [0U] 
                                                                        >> 0x21U)))))))) 
                      << 0x12U));
            vlSelfRef.ibex_multdiv_fast__DOT__mac_res_d 
                = (0x3ffffffffULL & ((0x7ffffffffULL 
                                      & VL_MULS_QQQ(35, 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_a) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_b) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                     + (0x7ffffffffULL 
                                        & VL_EXTENDS_QQ(35,34, vlSelfRef.ibex_multdiv_fast__DOT__accum))));
        } else {
            vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_a 
                = (0xffffU & (vlSelfRef.op_a_i >> 0x10U));
            vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_b 
                = (0xffffU & vlSelfRef.op_b_i);
            if ((0U == (IData)(vlSelfRef.operator_i))) {
                vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_d = 0U;
                vlSelfRef.ibex_multdiv_fast__DOT__mult_valid = 1U;
                vlSelfRef.ibex_multdiv_fast__DOT__mult_hold 
                    = (1U & (~ (IData)(vlSelfRef.multdiv_ready_id_i)));
                vlSelfRef.ibex_multdiv_fast__DOT__accum 
                    = (QData)((IData)((0xffffU & (IData)(
                                                         (vlSelfRef.imd_val_q_i
                                                          [0U] 
                                                          >> 0x10U)))));
                vlSelfRef.ibex_multdiv_fast__DOT__mac_res_d 
                    = (0x3ffffffffULL & (((QData)((IData)(
                                                          (0xffffU 
                                                           & ((IData)(
                                                                      (0x7ffffffffULL 
                                                                       & VL_MULS_QQQ(35, 
                                                                                (0x7ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_a) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                                                (0x7ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_b) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_b))))))) 
                                                              + (IData)(
                                                                        (0x7ffffffffULL 
                                                                         & VL_EXTENDS_QQ(35,34, vlSelfRef.ibex_multdiv_fast__DOT__accum))))))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(
                                                                      vlSelfRef.imd_val_q_i
                                                                      [0U]))))));
            } else {
                vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_d = 3U;
                vlSelfRef.ibex_multdiv_fast__DOT__accum 
                    = vlSelfRef.imd_val_q_i[0U];
                vlSelfRef.ibex_multdiv_fast__DOT__mac_res_d 
                    = (0x3ffffffffULL & ((0x7ffffffffULL 
                                          & VL_MULS_QQQ(35, 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_a) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_b) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                         + (0x7ffffffffULL 
                                            & VL_EXTENDS_QQ(35,34, vlSelfRef.ibex_multdiv_fast__DOT__accum))));
            }
        }
    } else {
        vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_a 
            = (0xffffU & vlSelfRef.op_a_i);
        vlSelfRef.ibex_multdiv_fast__DOT__sign_b = 
            ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_q)) 
             && (IData)((((IData)(vlSelfRef.signed_mode_i) 
                          >> 1U) & (vlSelfRef.op_b_i 
                                    >> 0x1fU))));
        if ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_d = 2U;
            vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_b 
                = (0xffffU & (vlSelfRef.op_b_i >> 0x10U));
            vlSelfRef.ibex_multdiv_fast__DOT__accum 
                = (QData)((IData)((0xffffU & (IData)(
                                                     (vlSelfRef.imd_val_q_i
                                                      [0U] 
                                                      >> 0x10U)))));
            vlSelfRef.ibex_multdiv_fast__DOT__mac_res_d 
                = (0x3ffffffffULL & ((0U == (IData)(vlSelfRef.operator_i))
                                      ? (((QData)((IData)(
                                                          (0xffffU 
                                                           & ((IData)(
                                                                      (0x7ffffffffULL 
                                                                       & VL_MULS_QQQ(35, 
                                                                                (0x7ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_a) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                                                (0x7ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_b) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_b))))))) 
                                                              + (IData)(
                                                                        (0x7ffffffffULL 
                                                                         & VL_EXTENDS_QQ(35,34, vlSelfRef.ibex_multdiv_fast__DOT__accum))))))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(
                                                                      vlSelfRef.imd_val_q_i
                                                                      [0U])))))
                                      : ((0x7ffffffffULL 
                                          & VL_MULS_QQQ(35, 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_a) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_b) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                         + (0x7ffffffffULL 
                                            & VL_EXTENDS_QQ(35,34, vlSelfRef.ibex_multdiv_fast__DOT__accum)))));
        } else {
            vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_d = 1U;
            vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_b 
                = (0xffffU & vlSelfRef.op_b_i);
            vlSelfRef.ibex_multdiv_fast__DOT__accum = 0ULL;
            vlSelfRef.ibex_multdiv_fast__DOT__mac_res_d 
                = (0x3ffffffffULL & ((0x7ffffffffULL 
                                      & VL_MULS_QQQ(35, 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_a) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_b) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                     + (0x7ffffffffULL 
                                        & VL_EXTENDS_QQ(35,34, vlSelfRef.ibex_multdiv_fast__DOT__accum))));
        }
    }
    vlSelfRef.ibex_multdiv_fast__DOT__div_sign_a = 
        ((vlSelfRef.op_a_i >> 0x1fU) & (IData)(vlSelfRef.signed_mode_i));
    vlSelfRef.ibex_multdiv_fast__DOT__div_sign_b = 
        ((vlSelfRef.op_b_i >> 0x1fU) & ((IData)(vlSelfRef.signed_mode_i) 
                                        >> 1U));
    vlSelfRef.ibex_multdiv_fast__DOT__is_greater_equal 
        = (1U & ((1U & ((IData)((vlSelfRef.imd_val_q_i
                                 [0U] >> 0x1fU)) ^ (IData)(
                                                           (vlSelfRef.imd_val_q_i
                                                            [1U] 
                                                            >> 0x1fU))))
                  ? (IData)((vlSelfRef.imd_val_q_i[0U] 
                             >> 0x1fU)) : (~ (IData)(
                                                     (vlSelfRef.alu_adder_ext_i 
                                                      >> 0x20U)))));
    vlSelfRef.valid_o = ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_valid) 
                         | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__mult_valid));
    if ((4U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))) {
                vlSelfRef.alu_operand_a_o = 1ULL;
                vlSelfRef.alu_operand_b_o = (1ULL | 
                                             ((QData)((IData)(
                                                              (~ (IData)(
                                                                         vlSelfRef.imd_val_q_i
                                                                         [0U])))) 
                                              << 1U));
            } else {
                vlSelfRef.alu_operand_a_o = (1ULL | 
                                             ((QData)((IData)(
                                                              vlSelfRef.imd_val_q_i
                                                              [0U])) 
                                              << 1U));
                vlSelfRef.alu_operand_b_o = (1ULL | 
                                             ((QData)((IData)(
                                                              (~ (IData)(
                                                                         vlSelfRef.imd_val_q_i
                                                                         [1U])))) 
                                              << 1U));
            }
        }
        if ((2U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))) {
            vlSelfRef.ibex_multdiv_fast__DOT__md_state_d = 0U;
            if ((1U & (~ (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q)))) {
                vlSelfRef.ibex_multdiv_fast__DOT__div_hold 
                    = (1U & (~ (IData)(vlSelfRef.multdiv_ready_id_i)));
            }
        } else {
            vlSelfRef.ibex_multdiv_fast__DOT__md_state_d 
                = ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))
                    ? 6U : 5U);
        }
    } else if ((2U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))) {
        if ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))) {
            vlSelfRef.alu_operand_a_o = (1ULL | ((QData)((IData)(
                                                                 vlSelfRef.imd_val_q_i
                                                                 [0U])) 
                                                 << 1U));
            vlSelfRef.alu_operand_b_o = (1ULL | ((QData)((IData)(
                                                                 (~ (IData)(
                                                                            vlSelfRef.imd_val_q_i
                                                                            [1U])))) 
                                                 << 1U));
            vlSelfRef.ibex_multdiv_fast__DOT__md_state_d 
                = ((1U == (IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_counter_q))
                    ? 4U : 3U);
        } else {
            vlSelfRef.alu_operand_a_o = 1ULL;
            vlSelfRef.alu_operand_b_o = (1ULL | ((QData)((IData)(
                                                                 (~ vlSelfRef.op_b_i))) 
                                                 << 1U));
            vlSelfRef.ibex_multdiv_fast__DOT__md_state_d = 3U;
        }
    } else {
        vlSelfRef.alu_operand_a_o = 1ULL;
        if ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))) {
            vlSelfRef.alu_operand_b_o = (1ULL | ((QData)((IData)(
                                                                 (~ vlSelfRef.op_a_i))) 
                                                 << 1U));
            vlSelfRef.ibex_multdiv_fast__DOT__md_state_d = 2U;
        } else {
            vlSelfRef.alu_operand_b_o = (1ULL | ((QData)((IData)(
                                                                 (~ vlSelfRef.op_b_i))) 
                                                 << 1U));
            vlSelfRef.ibex_multdiv_fast__DOT__md_state_d 
                = ((2U == (IData)(vlSelfRef.operator_i))
                    ? (((~ (IData)(vlSelfRef.data_ind_timing_i)) 
                        & (IData)(vlSelfRef.equal_to_zero_i))
                        ? 6U : 1U) : (((~ (IData)(vlSelfRef.data_ind_timing_i)) 
                                       & (IData)(vlSelfRef.equal_to_zero_i))
                                       ? 6U : 1U));
        }
    }
    vlSelfRef.ibex_multdiv_fast__DOT__div_en_internal 
        = ((~ (IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_hold)) 
           & (IData)(vlSelfRef.div_en_i));
    vlSelfRef.ibex_multdiv_fast__DOT__mult_en_internal 
        = ((~ (IData)(vlSelfRef.ibex_multdiv_fast__DOT__mult_hold)) 
           & (IData)(vlSelfRef.mult_en_i));
    vlSelfRef.ibex_multdiv_fast__DOT__op_numerator_d 
        = vlSelfRef.ibex_multdiv_fast__DOT__op_numerator_q;
    vlSelfRef.ibex_multdiv_fast__DOT__op_denominator_d 
        = (IData)(vlSelfRef.imd_val_q_i[1U]);
    if (vlSelfRef.ibex_multdiv_fast__DOT__is_greater_equal) {
        vlSelfRef.ibex_multdiv_fast__DOT__next_remainder 
            = (IData)((vlSelfRef.alu_adder_ext_i >> 1U));
        vlSelfRef.ibex_multdiv_fast__DOT__next_quotient 
            = ((QData)((IData)(vlSelfRef.ibex_multdiv_fast__DOT__op_quotient_q)) 
               | (QData)((IData)(((IData)(1U) << (IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_counter_q)))));
    } else {
        vlSelfRef.ibex_multdiv_fast__DOT__next_remainder 
            = (IData)(vlSelfRef.imd_val_q_i[0U]);
        vlSelfRef.ibex_multdiv_fast__DOT__next_quotient 
            = (QData)((IData)(vlSelfRef.ibex_multdiv_fast__DOT__op_quotient_q));
    }
    vlSelfRef.imd_val_we_o = (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_en_internal) 
                               << 1U) | ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__mult_en_internal) 
                                         | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_en_internal)));
    if ((1U & (~ ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q)))) {
                if ((2U == (IData)(vlSelfRef.operator_i))) {
                    vlSelfRef.ibex_multdiv_fast__DOT__div_by_zero_d 
                        = vlSelfRef.equal_to_zero_i;
                }
            }
            if ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))) {
                vlSelfRef.ibex_multdiv_fast__DOT__op_numerator_d 
                    = ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_sign_a)
                        ? vlSelfRef.alu_adder_i : vlSelfRef.op_a_i);
            }
        }
        if ((2U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q)))) {
                vlSelfRef.ibex_multdiv_fast__DOT__op_denominator_d 
                    = ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_sign_b)
                        ? vlSelfRef.alu_adder_i : vlSelfRef.op_b_i);
            }
        }
    }
    vlSelfRef.imd_val_d_o[1U] = (QData)((IData)(vlSelfRef.ibex_multdiv_fast__DOT__op_denominator_d));
    vlSelfRef.ibex_multdiv_fast__DOT__op_quotient_d 
        = vlSelfRef.ibex_multdiv_fast__DOT__op_quotient_q;
    if ((1U & (~ ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))) {
            if ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))) {
                vlSelfRef.ibex_multdiv_fast__DOT__op_quotient_d 
                    = (IData)(vlSelfRef.ibex_multdiv_fast__DOT__next_quotient);
            }
        } else if ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))) {
            vlSelfRef.ibex_multdiv_fast__DOT__op_quotient_d = 0U;
        }
    }
    vlSelfRef.ibex_multdiv_fast__DOT__div_counter_d 
        = (0x1fU & ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_counter_q) 
                    - (IData)(1U)));
    vlSelfRef.ibex_multdiv_fast__DOT__op_remainder_d 
        = vlSelfRef.imd_val_q_i[0U];
    if ((4U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelfRef.ibex_multdiv_fast__DOT__op_remainder_d 
                = ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))
                    ? ((2U == (IData)(vlSelfRef.operator_i))
                        ? (((~ (IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_by_zero_q)) 
                            & ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_sign_a) 
                               ^ (IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_sign_b)))
                            ? (QData)((IData)(vlSelfRef.alu_adder_i))
                            : vlSelfRef.imd_val_q_i
                           [0U]) : ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_sign_a)
                                     ? (QData)((IData)(vlSelfRef.alu_adder_i))
                                     : vlSelfRef.imd_val_q_i
                                    [0U])) : ((2U == (IData)(vlSelfRef.operator_i))
                                               ? vlSelfRef.ibex_multdiv_fast__DOT__next_quotient
                                               : (QData)((IData)(vlSelfRef.ibex_multdiv_fast__DOT__next_remainder))));
        }
    } else if ((2U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))) {
        if ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))) {
            vlSelfRef.ibex_multdiv_fast__DOT__op_remainder_d 
                = (((QData)((IData)(vlSelfRef.ibex_multdiv_fast__DOT__next_remainder)) 
                    << 1U) | (QData)((IData)((1U & 
                                              (vlSelfRef.ibex_multdiv_fast__DOT__op_numerator_q 
                                               >> (IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_counter_d))))));
        } else {
            vlSelfRef.ibex_multdiv_fast__DOT__op_remainder_d 
                = (QData)((IData)((vlSelfRef.ibex_multdiv_fast__DOT__op_numerator_q 
                                   >> 0x1fU)));
            vlSelfRef.ibex_multdiv_fast__DOT__div_counter_d = 0x1fU;
        }
    } else if ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))) {
        vlSelfRef.ibex_multdiv_fast__DOT__div_counter_d = 0x1fU;
    } else {
        vlSelfRef.ibex_multdiv_fast__DOT__op_remainder_d 
            = ((2U == (IData)(vlSelfRef.operator_i))
                ? 0x3ffffffffULL : (QData)((IData)(vlSelfRef.op_a_i)));
        vlSelfRef.ibex_multdiv_fast__DOT__div_counter_d = 0x1fU;
    }
    if (vlSelfRef.div_sel_i) {
        vlSelfRef.multdiv_result_o = (IData)(vlSelfRef.imd_val_q_i
                                             [0U]);
        vlSelfRef.imd_val_d_o[0U] = vlSelfRef.ibex_multdiv_fast__DOT__op_remainder_d;
    } else {
        vlSelfRef.multdiv_result_o = (IData)(vlSelfRef.ibex_multdiv_fast__DOT__mac_res_d);
        vlSelfRef.imd_val_d_o[0U] = vlSelfRef.ibex_multdiv_fast__DOT__mac_res_d;
    }
}

void Vibex_multdiv_fast___024root___eval_triggers__ico(Vibex_multdiv_fast___024root* vlSelf);

bool Vibex_multdiv_fast___024root___eval_phase__ico(Vibex_multdiv_fast___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vibex_multdiv_fast___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vibex_multdiv_fast___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vibex_multdiv_fast___024root___eval_act(Vibex_multdiv_fast___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vibex_multdiv_fast___024root___nba_sequent__TOP__0(Vibex_multdiv_fast___024root* vlSelf);

void Vibex_multdiv_fast___024root___eval_nba(Vibex_multdiv_fast___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vibex_multdiv_fast___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vibex_multdiv_fast___024root___nba_sequent__TOP__0(Vibex_multdiv_fast___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_ni) {
        if (vlSelfRef.ibex_multdiv_fast__DOT__div_en_internal) {
            vlSelfRef.ibex_multdiv_fast__DOT__div_by_zero_q 
                = vlSelfRef.ibex_multdiv_fast__DOT__div_by_zero_d;
            vlSelfRef.ibex_multdiv_fast__DOT__op_numerator_q 
                = vlSelfRef.ibex_multdiv_fast__DOT__op_numerator_d;
            vlSelfRef.ibex_multdiv_fast__DOT__op_quotient_q 
                = vlSelfRef.ibex_multdiv_fast__DOT__op_quotient_d;
            vlSelfRef.ibex_multdiv_fast__DOT__div_counter_q 
                = vlSelfRef.ibex_multdiv_fast__DOT__div_counter_d;
            vlSelfRef.ibex_multdiv_fast__DOT__md_state_q 
                = vlSelfRef.ibex_multdiv_fast__DOT__md_state_d;
        }
        if (vlSelfRef.ibex_multdiv_fast__DOT__mult_en_internal) {
            vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_q 
                = vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_d;
        }
    } else {
        vlSelfRef.ibex_multdiv_fast__DOT__div_by_zero_q = 0U;
        vlSelfRef.ibex_multdiv_fast__DOT__op_numerator_q = 0U;
        vlSelfRef.ibex_multdiv_fast__DOT__op_quotient_q = 0U;
        vlSelfRef.ibex_multdiv_fast__DOT__div_counter_q = 0U;
        vlSelfRef.ibex_multdiv_fast__DOT__md_state_q = 0U;
        vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_q = 0U;
    }
    vlSelfRef.ibex_multdiv_fast__DOT__next_quotient 
        = ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__is_greater_equal)
            ? ((QData)((IData)(vlSelfRef.ibex_multdiv_fast__DOT__op_quotient_q)) 
               | (QData)((IData)(((IData)(1U) << (IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_counter_q)))))
            : (QData)((IData)(vlSelfRef.ibex_multdiv_fast__DOT__op_quotient_q)));
    vlSelfRef.alu_operand_a_o = 1ULL;
    vlSelfRef.ibex_multdiv_fast__DOT__div_by_zero_d 
        = vlSelfRef.ibex_multdiv_fast__DOT__div_by_zero_q;
    vlSelfRef.alu_operand_b_o = (1ULL | ((QData)((IData)(
                                                         (~ vlSelfRef.op_b_i))) 
                                         << 1U));
    vlSelfRef.ibex_multdiv_fast__DOT__div_valid = 0U;
    vlSelfRef.ibex_multdiv_fast__DOT__op_numerator_d 
        = vlSelfRef.ibex_multdiv_fast__DOT__op_numerator_q;
    vlSelfRef.ibex_multdiv_fast__DOT__op_denominator_d 
        = (IData)(vlSelfRef.imd_val_q_i[1U]);
    vlSelfRef.ibex_multdiv_fast__DOT__div_hold = 0U;
    vlSelfRef.ibex_multdiv_fast__DOT__mult_valid = 0U;
    vlSelfRef.ibex_multdiv_fast__DOT__mult_hold = 0U;
    vlSelfRef.ibex_multdiv_fast__DOT__sign_a = ((1U 
                                                 & ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_q) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & ((1U 
                                                        & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_q))
                                                        ? 
                                                       ((IData)(vlSelfRef.signed_mode_i) 
                                                        & (vlSelfRef.op_a_i 
                                                           >> 0x1fU))
                                                        : 
                                                       ((IData)(vlSelfRef.signed_mode_i) 
                                                        & (vlSelfRef.op_a_i 
                                                           >> 0x1fU)))));
    vlSelfRef.ibex_multdiv_fast__DOT__accum = vlSelfRef.imd_val_q_i
        [0U];
    if ((2U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_q))) {
        vlSelfRef.ibex_multdiv_fast__DOT__sign_b = 
            ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_q)) 
             && (IData)((((IData)(vlSelfRef.signed_mode_i) 
                          >> 1U) & (vlSelfRef.op_b_i 
                                    >> 0x1fU))));
        if ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_d = 0U;
            vlSelfRef.ibex_multdiv_fast__DOT__mult_valid = 1U;
            vlSelfRef.ibex_multdiv_fast__DOT__mult_hold 
                = (1U & (~ (IData)(vlSelfRef.multdiv_ready_id_i)));
            vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_a 
                = (0xffffU & (vlSelfRef.op_a_i >> 0x10U));
            vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_b 
                = (0xffffU & (vlSelfRef.op_b_i >> 0x10U));
            vlSelfRef.ibex_multdiv_fast__DOT__accum 
                = ((0x3fffc0000ULL & vlSelfRef.ibex_multdiv_fast__DOT__accum) 
                   | (IData)((IData)((0x3ffffU & (IData)(
                                                         (vlSelfRef.imd_val_q_i
                                                          [0U] 
                                                          >> 0x10U))))));
            vlSelfRef.ibex_multdiv_fast__DOT__accum 
                = ((0x3ffffULL & vlSelfRef.ibex_multdiv_fast__DOT__accum) 
                   | ((QData)((IData)((0xffffU & (- (IData)(
                                                            ((0U 
                                                              != (IData)(vlSelfRef.signed_mode_i)) 
                                                             & (IData)(
                                                                       (vlSelfRef.imd_val_q_i
                                                                        [0U] 
                                                                        >> 0x21U)))))))) 
                      << 0x12U));
            vlSelfRef.ibex_multdiv_fast__DOT__mac_res_d 
                = (0x3ffffffffULL & ((0x7ffffffffULL 
                                      & VL_MULS_QQQ(35, 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_a) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_b) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                     + (0x7ffffffffULL 
                                        & VL_EXTENDS_QQ(35,34, vlSelfRef.ibex_multdiv_fast__DOT__accum))));
        } else {
            vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_a 
                = (0xffffU & (vlSelfRef.op_a_i >> 0x10U));
            vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_b 
                = (0xffffU & vlSelfRef.op_b_i);
            if ((0U == (IData)(vlSelfRef.operator_i))) {
                vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_d = 0U;
                vlSelfRef.ibex_multdiv_fast__DOT__mult_valid = 1U;
                vlSelfRef.ibex_multdiv_fast__DOT__mult_hold 
                    = (1U & (~ (IData)(vlSelfRef.multdiv_ready_id_i)));
                vlSelfRef.ibex_multdiv_fast__DOT__accum 
                    = (QData)((IData)((0xffffU & (IData)(
                                                         (vlSelfRef.imd_val_q_i
                                                          [0U] 
                                                          >> 0x10U)))));
                vlSelfRef.ibex_multdiv_fast__DOT__mac_res_d 
                    = (0x3ffffffffULL & (((QData)((IData)(
                                                          (0xffffU 
                                                           & ((IData)(
                                                                      (0x7ffffffffULL 
                                                                       & VL_MULS_QQQ(35, 
                                                                                (0x7ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_a) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                                                (0x7ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_b) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_b))))))) 
                                                              + (IData)(
                                                                        (0x7ffffffffULL 
                                                                         & VL_EXTENDS_QQ(35,34, vlSelfRef.ibex_multdiv_fast__DOT__accum))))))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(
                                                                      vlSelfRef.imd_val_q_i
                                                                      [0U]))))));
            } else {
                vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_d = 3U;
                vlSelfRef.ibex_multdiv_fast__DOT__accum 
                    = vlSelfRef.imd_val_q_i[0U];
                vlSelfRef.ibex_multdiv_fast__DOT__mac_res_d 
                    = (0x3ffffffffULL & ((0x7ffffffffULL 
                                          & VL_MULS_QQQ(35, 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_a) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_b) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                         + (0x7ffffffffULL 
                                            & VL_EXTENDS_QQ(35,34, vlSelfRef.ibex_multdiv_fast__DOT__accum))));
            }
        }
    } else {
        vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_a 
            = (0xffffU & vlSelfRef.op_a_i);
        vlSelfRef.ibex_multdiv_fast__DOT__sign_b = 
            ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_q)) 
             && (IData)((((IData)(vlSelfRef.signed_mode_i) 
                          >> 1U) & (vlSelfRef.op_b_i 
                                    >> 0x1fU))));
        if ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_d = 2U;
            vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_b 
                = (0xffffU & (vlSelfRef.op_b_i >> 0x10U));
            vlSelfRef.ibex_multdiv_fast__DOT__accum 
                = (QData)((IData)((0xffffU & (IData)(
                                                     (vlSelfRef.imd_val_q_i
                                                      [0U] 
                                                      >> 0x10U)))));
            vlSelfRef.ibex_multdiv_fast__DOT__mac_res_d 
                = (0x3ffffffffULL & ((0U == (IData)(vlSelfRef.operator_i))
                                      ? (((QData)((IData)(
                                                          (0xffffU 
                                                           & ((IData)(
                                                                      (0x7ffffffffULL 
                                                                       & VL_MULS_QQQ(35, 
                                                                                (0x7ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_a) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                                                (0x7ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_b) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_b))))))) 
                                                              + (IData)(
                                                                        (0x7ffffffffULL 
                                                                         & VL_EXTENDS_QQ(35,34, vlSelfRef.ibex_multdiv_fast__DOT__accum))))))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(
                                                                      vlSelfRef.imd_val_q_i
                                                                      [0U])))))
                                      : ((0x7ffffffffULL 
                                          & VL_MULS_QQQ(35, 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_a) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_b) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                         + (0x7ffffffffULL 
                                            & VL_EXTENDS_QQ(35,34, vlSelfRef.ibex_multdiv_fast__DOT__accum)))));
        } else {
            vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_d = 1U;
            vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_b 
                = (0xffffU & vlSelfRef.op_b_i);
            vlSelfRef.ibex_multdiv_fast__DOT__accum = 0ULL;
            vlSelfRef.ibex_multdiv_fast__DOT__mac_res_d 
                = (0x3ffffffffULL & ((0x7ffffffffULL 
                                      & VL_MULS_QQQ(35, 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_a) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_b) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                     + (0x7ffffffffULL 
                                        & VL_EXTENDS_QQ(35,34, vlSelfRef.ibex_multdiv_fast__DOT__accum))));
        }
    }
    vlSelfRef.ibex_multdiv_fast__DOT__op_quotient_d 
        = vlSelfRef.ibex_multdiv_fast__DOT__op_quotient_q;
    if ((1U & (~ ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q)))) {
                if ((2U == (IData)(vlSelfRef.operator_i))) {
                    vlSelfRef.ibex_multdiv_fast__DOT__div_by_zero_d 
                        = vlSelfRef.equal_to_zero_i;
                }
            }
            if ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))) {
                vlSelfRef.ibex_multdiv_fast__DOT__op_numerator_d 
                    = ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_sign_a)
                        ? vlSelfRef.alu_adder_i : vlSelfRef.op_a_i);
            }
        }
        if ((2U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q)))) {
                vlSelfRef.ibex_multdiv_fast__DOT__op_denominator_d 
                    = ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_sign_b)
                        ? vlSelfRef.alu_adder_i : vlSelfRef.op_b_i);
            }
            if ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))) {
                vlSelfRef.ibex_multdiv_fast__DOT__op_quotient_d 
                    = (IData)(vlSelfRef.ibex_multdiv_fast__DOT__next_quotient);
            }
        } else if ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))) {
            vlSelfRef.ibex_multdiv_fast__DOT__op_quotient_d = 0U;
        }
    }
    vlSelfRef.ibex_multdiv_fast__DOT__div_counter_d 
        = (0x1fU & ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_counter_q) 
                    - (IData)(1U)));
    vlSelfRef.ibex_multdiv_fast__DOT__op_remainder_d 
        = vlSelfRef.imd_val_q_i[0U];
    if ((4U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))) {
                vlSelfRef.alu_operand_a_o = 1ULL;
                vlSelfRef.alu_operand_b_o = (1ULL | 
                                             ((QData)((IData)(
                                                              (~ (IData)(
                                                                         vlSelfRef.imd_val_q_i
                                                                         [0U])))) 
                                              << 1U));
                vlSelfRef.ibex_multdiv_fast__DOT__op_remainder_d 
                    = ((2U == (IData)(vlSelfRef.operator_i))
                        ? (((~ (IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_by_zero_q)) 
                            & ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_sign_a) 
                               ^ (IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_sign_b)))
                            ? (QData)((IData)(vlSelfRef.alu_adder_i))
                            : vlSelfRef.imd_val_q_i
                           [0U]) : ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_sign_a)
                                     ? (QData)((IData)(vlSelfRef.alu_adder_i))
                                     : vlSelfRef.imd_val_q_i
                                    [0U]));
            } else {
                vlSelfRef.alu_operand_a_o = (1ULL | 
                                             ((QData)((IData)(
                                                              vlSelfRef.imd_val_q_i
                                                              [0U])) 
                                              << 1U));
                vlSelfRef.alu_operand_b_o = (1ULL | 
                                             ((QData)((IData)(
                                                              (~ (IData)(
                                                                         vlSelfRef.imd_val_q_i
                                                                         [1U])))) 
                                              << 1U));
                vlSelfRef.ibex_multdiv_fast__DOT__op_remainder_d 
                    = ((2U == (IData)(vlSelfRef.operator_i))
                        ? vlSelfRef.ibex_multdiv_fast__DOT__next_quotient
                        : (QData)((IData)(vlSelfRef.ibex_multdiv_fast__DOT__next_remainder)));
            }
        }
        if ((2U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q)))) {
                vlSelfRef.ibex_multdiv_fast__DOT__div_valid = 1U;
                vlSelfRef.ibex_multdiv_fast__DOT__div_hold 
                    = (1U & (~ (IData)(vlSelfRef.multdiv_ready_id_i)));
            }
            vlSelfRef.ibex_multdiv_fast__DOT__md_state_d = 0U;
        } else {
            vlSelfRef.ibex_multdiv_fast__DOT__md_state_d 
                = ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))
                    ? 6U : 5U);
        }
    } else if ((2U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))) {
        if ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))) {
            vlSelfRef.alu_operand_a_o = (1ULL | ((QData)((IData)(
                                                                 vlSelfRef.imd_val_q_i
                                                                 [0U])) 
                                                 << 1U));
            vlSelfRef.alu_operand_b_o = (1ULL | ((QData)((IData)(
                                                                 (~ (IData)(
                                                                            vlSelfRef.imd_val_q_i
                                                                            [1U])))) 
                                                 << 1U));
            vlSelfRef.ibex_multdiv_fast__DOT__md_state_d 
                = ((1U == (IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_counter_q))
                    ? 4U : 3U);
            vlSelfRef.ibex_multdiv_fast__DOT__op_remainder_d 
                = (((QData)((IData)(vlSelfRef.ibex_multdiv_fast__DOT__next_remainder)) 
                    << 1U) | (QData)((IData)((1U & 
                                              (vlSelfRef.ibex_multdiv_fast__DOT__op_numerator_q 
                                               >> (IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_counter_d))))));
        } else {
            vlSelfRef.alu_operand_a_o = 1ULL;
            vlSelfRef.alu_operand_b_o = (1ULL | ((QData)((IData)(
                                                                 (~ vlSelfRef.op_b_i))) 
                                                 << 1U));
            vlSelfRef.ibex_multdiv_fast__DOT__md_state_d = 3U;
            vlSelfRef.ibex_multdiv_fast__DOT__op_remainder_d 
                = (QData)((IData)((vlSelfRef.ibex_multdiv_fast__DOT__op_numerator_q 
                                   >> 0x1fU)));
            vlSelfRef.ibex_multdiv_fast__DOT__div_counter_d = 0x1fU;
        }
    } else {
        vlSelfRef.alu_operand_a_o = 1ULL;
        if ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))) {
            vlSelfRef.alu_operand_b_o = (1ULL | ((QData)((IData)(
                                                                 (~ vlSelfRef.op_a_i))) 
                                                 << 1U));
            vlSelfRef.ibex_multdiv_fast__DOT__md_state_d = 2U;
            vlSelfRef.ibex_multdiv_fast__DOT__div_counter_d = 0x1fU;
        } else {
            vlSelfRef.alu_operand_b_o = (1ULL | ((QData)((IData)(
                                                                 (~ vlSelfRef.op_b_i))) 
                                                 << 1U));
            if ((2U == (IData)(vlSelfRef.operator_i))) {
                vlSelfRef.ibex_multdiv_fast__DOT__md_state_d 
                    = (((~ (IData)(vlSelfRef.data_ind_timing_i)) 
                        & (IData)(vlSelfRef.equal_to_zero_i))
                        ? 6U : 1U);
                vlSelfRef.ibex_multdiv_fast__DOT__op_remainder_d = 0x3ffffffffULL;
            } else {
                vlSelfRef.ibex_multdiv_fast__DOT__md_state_d 
                    = (((~ (IData)(vlSelfRef.data_ind_timing_i)) 
                        & (IData)(vlSelfRef.equal_to_zero_i))
                        ? 6U : 1U);
                vlSelfRef.ibex_multdiv_fast__DOT__op_remainder_d 
                    = (QData)((IData)(vlSelfRef.op_a_i));
            }
            vlSelfRef.ibex_multdiv_fast__DOT__div_counter_d = 0x1fU;
        }
    }
    vlSelfRef.imd_val_d_o[1U] = (QData)((IData)(vlSelfRef.ibex_multdiv_fast__DOT__op_denominator_d));
    vlSelfRef.ibex_multdiv_fast__DOT__div_en_internal 
        = ((~ (IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_hold)) 
           & (IData)(vlSelfRef.div_en_i));
    vlSelfRef.valid_o = ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_valid) 
                         | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__mult_valid));
    vlSelfRef.ibex_multdiv_fast__DOT__mult_en_internal 
        = ((~ (IData)(vlSelfRef.ibex_multdiv_fast__DOT__mult_hold)) 
           & (IData)(vlSelfRef.mult_en_i));
    vlSelfRef.imd_val_we_o = (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_en_internal) 
                               << 1U) | ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__mult_en_internal) 
                                         | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_en_internal)));
    if (vlSelfRef.div_sel_i) {
        vlSelfRef.multdiv_result_o = (IData)(vlSelfRef.imd_val_q_i
                                             [0U]);
        vlSelfRef.imd_val_d_o[0U] = vlSelfRef.ibex_multdiv_fast__DOT__op_remainder_d;
    } else {
        vlSelfRef.multdiv_result_o = (IData)(vlSelfRef.ibex_multdiv_fast__DOT__mac_res_d);
        vlSelfRef.imd_val_d_o[0U] = vlSelfRef.ibex_multdiv_fast__DOT__mac_res_d;
    }
}

void Vibex_multdiv_fast___024root___eval_triggers__act(Vibex_multdiv_fast___024root* vlSelf);

bool Vibex_multdiv_fast___024root___eval_phase__act(Vibex_multdiv_fast___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vibex_multdiv_fast___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vibex_multdiv_fast___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vibex_multdiv_fast___024root___eval_phase__nba(Vibex_multdiv_fast___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vibex_multdiv_fast___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_multdiv_fast___024root___dump_triggers__ico(Vibex_multdiv_fast___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_multdiv_fast___024root___dump_triggers__nba(Vibex_multdiv_fast___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_multdiv_fast___024root___dump_triggers__act(Vibex_multdiv_fast___024root* vlSelf);
#endif  // VL_DEBUG

void Vibex_multdiv_fast___024root___eval(Vibex_multdiv_fast___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vibex_multdiv_fast___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/ibex_multdiv_fast.sv", 17, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vibex_multdiv_fast___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vibex_multdiv_fast___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/ibex_multdiv_fast.sv", 17, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vibex_multdiv_fast___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/ibex_multdiv_fast.sv", 17, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vibex_multdiv_fast___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vibex_multdiv_fast___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vibex_multdiv_fast___024root___eval_debug_assertions(Vibex_multdiv_fast___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelfRef.rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((vlSelfRef.mult_en_i & 0xfeU))) {
        Verilated::overWidthError("mult_en_i");}
    if (VL_UNLIKELY((vlSelfRef.div_en_i & 0xfeU))) {
        Verilated::overWidthError("div_en_i");}
    if (VL_UNLIKELY((vlSelfRef.mult_sel_i & 0xfeU))) {
        Verilated::overWidthError("mult_sel_i");}
    if (VL_UNLIKELY((vlSelfRef.div_sel_i & 0xfeU))) {
        Verilated::overWidthError("div_sel_i");}
    if (VL_UNLIKELY((vlSelfRef.operator_i & 0xfcU))) {
        Verilated::overWidthError("operator_i");}
    if (VL_UNLIKELY((vlSelfRef.signed_mode_i & 0xfcU))) {
        Verilated::overWidthError("signed_mode_i");}
    if (VL_UNLIKELY((vlSelfRef.alu_adder_ext_i & 0ULL))) {
        Verilated::overWidthError("alu_adder_ext_i");}
    if (VL_UNLIKELY((vlSelfRef.equal_to_zero_i & 0xfeU))) {
        Verilated::overWidthError("equal_to_zero_i");}
    if (VL_UNLIKELY((vlSelfRef.data_ind_timing_i & 0xfeU))) {
        Verilated::overWidthError("data_ind_timing_i");}
    if (VL_UNLIKELY((vlSelfRef.multdiv_ready_id_i & 0xfeU))) {
        Verilated::overWidthError("multdiv_ready_id_i");}
}
#endif  // VL_DEBUG
