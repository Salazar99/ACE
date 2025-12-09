// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_alu.h for the primary calling header

#include "Vibex_alu__pch.h"
#include "Vibex_alu___024root.h"

VL_ATTR_COLD void Vibex_alu___024root___eval_static(Vibex_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_alu___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vibex_alu___024root___eval_initial__TOP(Vibex_alu___024root* vlSelf);

VL_ATTR_COLD void Vibex_alu___024root___eval_initial(Vibex_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_alu___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vibex_alu___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vibex_alu___024root___eval_initial__TOP(Vibex_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_alu___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.imd_val_d_o[0U] = 0U;
    vlSelfRef.imd_val_d_o[1U] = 0U;
    vlSelfRef.imd_val_we_o = 0U;
}

VL_ATTR_COLD void Vibex_alu___024root___eval_final(Vibex_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_alu___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_alu___024root___dump_triggers__stl(Vibex_alu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vibex_alu___024root___eval_phase__stl(Vibex_alu___024root* vlSelf);

VL_ATTR_COLD void Vibex_alu___024root___eval_settle(Vibex_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_alu___024root___eval_settle\n"); );
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
            Vibex_alu___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/ibex_alu.sv", 9, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vibex_alu___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_alu___024root___dump_triggers__stl(Vibex_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_alu___024root___dump_triggers__stl\n"); );
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

void Vibex_alu___024root___ico_sequent__TOP__0(Vibex_alu___024root* vlSelf);
VL_ATTR_COLD void Vibex_alu___024root____Vm_traceActivitySetAll(Vibex_alu___024root* vlSelf);

VL_ATTR_COLD void Vibex_alu___024root___eval_stl(Vibex_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_alu___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vibex_alu___024root___ico_sequent__TOP__0(vlSelf);
        Vibex_alu___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vibex_alu___024root___eval_triggers__stl(Vibex_alu___024root* vlSelf);

VL_ATTR_COLD bool Vibex_alu___024root___eval_phase__stl(Vibex_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_alu___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vibex_alu___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vibex_alu___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_alu___024root___dump_triggers__ico(Vibex_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_alu___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vibex_alu___024root___dump_triggers__act(Vibex_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_alu___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_alu___024root___dump_triggers__nba(Vibex_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_alu___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vibex_alu___024root____Vm_traceActivitySetAll(Vibex_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_alu___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vibex_alu___024root___ctor_var_reset(Vibex_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_alu___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->operator_i = VL_RAND_RESET_I(7);
    vlSelf->operand_a_i = VL_RAND_RESET_I(32);
    vlSelf->operand_b_i = VL_RAND_RESET_I(32);
    vlSelf->instr_first_cycle_i = VL_RAND_RESET_I(1);
    vlSelf->multdiv_operand_a_i = VL_RAND_RESET_Q(33);
    vlSelf->multdiv_operand_b_i = VL_RAND_RESET_Q(33);
    vlSelf->multdiv_sel_i = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->imd_val_q_i[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->imd_val_d_o[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->imd_val_we_o = VL_RAND_RESET_I(2);
    vlSelf->adder_result_o = VL_RAND_RESET_I(32);
    vlSelf->adder_result_ext_o = VL_RAND_RESET_Q(34);
    vlSelf->result_o = VL_RAND_RESET_I(32);
    vlSelf->comparison_result_o = VL_RAND_RESET_I(1);
    vlSelf->is_equal_result_o = VL_RAND_RESET_I(1);
    vlSelf->ibex_alu__DOT__operand_a_rev = VL_RAND_RESET_I(32);
    vlSelf->ibex_alu__DOT__adder_op_a_shift1 = VL_RAND_RESET_I(1);
    vlSelf->ibex_alu__DOT__adder_op_a_shift2 = VL_RAND_RESET_I(1);
    vlSelf->ibex_alu__DOT__adder_op_a_shift3 = VL_RAND_RESET_I(1);
    vlSelf->ibex_alu__DOT__adder_op_b_negate = VL_RAND_RESET_I(1);
    vlSelf->ibex_alu__DOT__cmp_signed = VL_RAND_RESET_I(1);
    vlSelf->ibex_alu__DOT__cmp_result = VL_RAND_RESET_I(1);
    vlSelf->ibex_alu__DOT__shift_left = VL_RAND_RESET_I(1);
    vlSelf->ibex_alu__DOT__shift_operand = VL_RAND_RESET_I(32);
    vlSelf->ibex_alu__DOT__shift_result_ext_signed = VL_RAND_RESET_Q(33);
    vlSelf->ibex_alu__DOT__shift_result_ext = VL_RAND_RESET_Q(33);
    vlSelf->ibex_alu__DOT__unused_shift_result_ext = VL_RAND_RESET_I(1);
    vlSelf->ibex_alu__DOT__shift_result = VL_RAND_RESET_I(32);
    vlSelf->ibex_alu__DOT__shift_result_rev = VL_RAND_RESET_I(32);
    vlSelf->ibex_alu__DOT__bwlogic_result = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ibex_alu__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
