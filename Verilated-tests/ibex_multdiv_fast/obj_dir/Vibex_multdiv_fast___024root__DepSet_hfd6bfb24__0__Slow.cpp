// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_multdiv_fast.h for the primary calling header

#include "Vibex_multdiv_fast__pch.h"
#include "Vibex_multdiv_fast___024root.h"

VL_ATTR_COLD void Vibex_multdiv_fast___024root___eval_static(Vibex_multdiv_fast___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vibex_multdiv_fast___024root___eval_initial(Vibex_multdiv_fast___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0 = vlSelfRef.clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_ni__0 = vlSelfRef.rst_ni;
}

VL_ATTR_COLD void Vibex_multdiv_fast___024root___eval_final(Vibex_multdiv_fast___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_multdiv_fast___024root___dump_triggers__stl(Vibex_multdiv_fast___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vibex_multdiv_fast___024root___eval_phase__stl(Vibex_multdiv_fast___024root* vlSelf);

VL_ATTR_COLD void Vibex_multdiv_fast___024root___eval_settle(Vibex_multdiv_fast___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vibex_multdiv_fast___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/ibex_multdiv_fast.sv", 17, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vibex_multdiv_fast___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_multdiv_fast___024root___dump_triggers__stl(Vibex_multdiv_fast___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vibex_multdiv_fast___024root___stl_sequent__TOP__0(Vibex_multdiv_fast___024root* vlSelf);
VL_ATTR_COLD void Vibex_multdiv_fast___024root____Vm_traceActivitySetAll(Vibex_multdiv_fast___024root* vlSelf);

VL_ATTR_COLD void Vibex_multdiv_fast___024root___eval_stl(Vibex_multdiv_fast___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vibex_multdiv_fast___024root___stl_sequent__TOP__0(vlSelf);
        Vibex_multdiv_fast___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vibex_multdiv_fast___024root___stl_sequent__TOP__0(Vibex_multdiv_fast___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alu_operand_a_o = 1ULL;
    vlSelfRef.ibex_multdiv_fast__DOT__div_by_zero_d 
        = vlSelfRef.ibex_multdiv_fast__DOT__div_by_zero_q;
    vlSelfRef.alu_operand_b_o = (1ULL | ((QData)((IData)(
                                                         (~ vlSelfRef.op_b_i))) 
                                         << 1U));
    vlSelfRef.ibex_multdiv_fast__DOT__div_valid = 0U;
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
            if ((1U & (~ (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q)))) {
                vlSelfRef.ibex_multdiv_fast__DOT__div_valid = 1U;
            }
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
        } else {
            vlSelfRef.alu_operand_a_o = 1ULL;
            vlSelfRef.alu_operand_b_o = (1ULL | ((QData)((IData)(
                                                                 (~ vlSelfRef.op_b_i))) 
                                                 << 1U));
        }
    } else {
        vlSelfRef.alu_operand_a_o = 1ULL;
        vlSelfRef.alu_operand_b_o = ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))
                                      ? (1ULL | ((QData)((IData)(
                                                                 (~ vlSelfRef.op_a_i))) 
                                                 << 1U))
                                      : (1ULL | ((QData)((IData)(
                                                                 (~ vlSelfRef.op_b_i))) 
                                                 << 1U)));
    }
    vlSelfRef.valid_o = ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_valid) 
                         | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__mult_valid));
    if ((4U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))) {
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
    } else {
        vlSelfRef.ibex_multdiv_fast__DOT__md_state_d 
            = ((2U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))
                ? ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))
                    ? ((1U == (IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_counter_q))
                        ? 4U : 3U) : 3U) : ((1U & (IData)(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q))
                                             ? 2U : 
                                            ((2U == (IData)(vlSelfRef.operator_i))
                                              ? (((~ (IData)(vlSelfRef.data_ind_timing_i)) 
                                                  & (IData)(vlSelfRef.equal_to_zero_i))
                                                  ? 6U
                                                  : 1U)
                                              : (((~ (IData)(vlSelfRef.data_ind_timing_i)) 
                                                  & (IData)(vlSelfRef.equal_to_zero_i))
                                                  ? 6U
                                                  : 1U))));
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

VL_ATTR_COLD void Vibex_multdiv_fast___024root___eval_triggers__stl(Vibex_multdiv_fast___024root* vlSelf);

VL_ATTR_COLD bool Vibex_multdiv_fast___024root___eval_phase__stl(Vibex_multdiv_fast___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vibex_multdiv_fast___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vibex_multdiv_fast___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_multdiv_fast___024root___dump_triggers__ico(Vibex_multdiv_fast___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root___dump_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_multdiv_fast___024root___dump_triggers__act(Vibex_multdiv_fast___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_i)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rst_ni)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_multdiv_fast___024root___dump_triggers__nba(Vibex_multdiv_fast___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rst_ni)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vibex_multdiv_fast___024root____Vm_traceActivitySetAll(Vibex_multdiv_fast___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vibex_multdiv_fast___024root___ctor_var_reset(Vibex_multdiv_fast___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->mult_en_i = VL_RAND_RESET_I(1);
    vlSelf->div_en_i = VL_RAND_RESET_I(1);
    vlSelf->mult_sel_i = VL_RAND_RESET_I(1);
    vlSelf->div_sel_i = VL_RAND_RESET_I(1);
    vlSelf->operator_i = VL_RAND_RESET_I(2);
    vlSelf->signed_mode_i = VL_RAND_RESET_I(2);
    vlSelf->op_a_i = VL_RAND_RESET_I(32);
    vlSelf->op_b_i = VL_RAND_RESET_I(32);
    vlSelf->alu_adder_ext_i = VL_RAND_RESET_Q(34);
    vlSelf->alu_adder_i = VL_RAND_RESET_I(32);
    vlSelf->equal_to_zero_i = VL_RAND_RESET_I(1);
    vlSelf->data_ind_timing_i = VL_RAND_RESET_I(1);
    vlSelf->alu_operand_a_o = VL_RAND_RESET_Q(33);
    vlSelf->alu_operand_b_o = VL_RAND_RESET_Q(33);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->imd_val_q_i[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->imd_val_d_o[__Vi0] = VL_RAND_RESET_Q(34);
    }
    vlSelf->imd_val_we_o = VL_RAND_RESET_I(2);
    vlSelf->multdiv_ready_id_i = VL_RAND_RESET_I(1);
    vlSelf->multdiv_result_o = VL_RAND_RESET_I(32);
    vlSelf->valid_o = VL_RAND_RESET_I(1);
    vlSelf->ibex_multdiv_fast__DOT__accum = VL_RAND_RESET_Q(34);
    vlSelf->ibex_multdiv_fast__DOT__sign_a = VL_RAND_RESET_I(1);
    vlSelf->ibex_multdiv_fast__DOT__sign_b = VL_RAND_RESET_I(1);
    vlSelf->ibex_multdiv_fast__DOT__mult_valid = VL_RAND_RESET_I(1);
    vlSelf->ibex_multdiv_fast__DOT__mac_res_d = VL_RAND_RESET_Q(34);
    vlSelf->ibex_multdiv_fast__DOT__op_remainder_d = VL_RAND_RESET_Q(34);
    vlSelf->ibex_multdiv_fast__DOT__div_sign_a = VL_RAND_RESET_I(1);
    vlSelf->ibex_multdiv_fast__DOT__div_sign_b = VL_RAND_RESET_I(1);
    vlSelf->ibex_multdiv_fast__DOT__is_greater_equal = VL_RAND_RESET_I(1);
    vlSelf->ibex_multdiv_fast__DOT__op_numerator_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_multdiv_fast__DOT__op_quotient_q = VL_RAND_RESET_I(32);
    vlSelf->ibex_multdiv_fast__DOT__op_denominator_d = VL_RAND_RESET_I(32);
    vlSelf->ibex_multdiv_fast__DOT__op_numerator_d = VL_RAND_RESET_I(32);
    vlSelf->ibex_multdiv_fast__DOT__op_quotient_d = VL_RAND_RESET_I(32);
    vlSelf->ibex_multdiv_fast__DOT__next_remainder = VL_RAND_RESET_I(32);
    vlSelf->ibex_multdiv_fast__DOT__next_quotient = VL_RAND_RESET_Q(33);
    vlSelf->ibex_multdiv_fast__DOT__div_valid = VL_RAND_RESET_I(1);
    vlSelf->ibex_multdiv_fast__DOT__div_counter_q = VL_RAND_RESET_I(5);
    vlSelf->ibex_multdiv_fast__DOT__div_counter_d = VL_RAND_RESET_I(5);
    vlSelf->ibex_multdiv_fast__DOT__mult_hold = VL_RAND_RESET_I(1);
    vlSelf->ibex_multdiv_fast__DOT__div_hold = VL_RAND_RESET_I(1);
    vlSelf->ibex_multdiv_fast__DOT__div_by_zero_d = VL_RAND_RESET_I(1);
    vlSelf->ibex_multdiv_fast__DOT__div_by_zero_q = VL_RAND_RESET_I(1);
    vlSelf->ibex_multdiv_fast__DOT__mult_en_internal = VL_RAND_RESET_I(1);
    vlSelf->ibex_multdiv_fast__DOT__div_en_internal = VL_RAND_RESET_I(1);
    vlSelf->ibex_multdiv_fast__DOT__md_state_q = VL_RAND_RESET_I(3);
    vlSelf->ibex_multdiv_fast__DOT__md_state_d = VL_RAND_RESET_I(3);
    vlSelf->ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_a = VL_RAND_RESET_I(16);
    vlSelf->ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_b = VL_RAND_RESET_I(16);
    vlSelf->ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_q = VL_RAND_RESET_I(2);
    vlSelf->ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_d = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
