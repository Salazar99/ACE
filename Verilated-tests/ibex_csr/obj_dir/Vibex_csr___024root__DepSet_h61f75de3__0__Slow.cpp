// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_csr.h for the primary calling header

#include "Vibex_csr__pch.h"
#include "Vibex_csr___024root.h"

VL_ATTR_COLD void Vibex_csr___024root___eval_static(Vibex_csr___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_csr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_csr___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vibex_csr___024root___eval_initial__TOP(Vibex_csr___024root* vlSelf);

VL_ATTR_COLD void Vibex_csr___024root___eval_initial(Vibex_csr___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_csr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_csr___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vibex_csr___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0 = vlSelfRef.clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_ni__0 = vlSelfRef.rst_ni;
}

VL_ATTR_COLD void Vibex_csr___024root___eval_initial__TOP(Vibex_csr___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_csr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_csr___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rd_error_o = 0U;
}

VL_ATTR_COLD void Vibex_csr___024root___eval_final(Vibex_csr___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_csr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_csr___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_csr___024root___dump_triggers__stl(Vibex_csr___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vibex_csr___024root___eval_phase__stl(Vibex_csr___024root* vlSelf);

VL_ATTR_COLD void Vibex_csr___024root___eval_settle(Vibex_csr___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_csr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_csr___024root___eval_settle\n"); );
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
            Vibex_csr___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/ibex_csr.sv", 11, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vibex_csr___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_csr___024root___dump_triggers__stl(Vibex_csr___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_csr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_csr___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vibex_csr___024root___stl_sequent__TOP__0(Vibex_csr___024root* vlSelf);

VL_ATTR_COLD void Vibex_csr___024root___eval_stl(Vibex_csr___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_csr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_csr___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vibex_csr___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vibex_csr___024root___stl_sequent__TOP__0(Vibex_csr___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_csr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_csr___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rd_data_o = vlSelfRef.ibex_csr__DOT__rdata_q;
}

VL_ATTR_COLD void Vibex_csr___024root___eval_triggers__stl(Vibex_csr___024root* vlSelf);

VL_ATTR_COLD bool Vibex_csr___024root___eval_phase__stl(Vibex_csr___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_csr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_csr___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vibex_csr___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vibex_csr___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_csr___024root___dump_triggers__act(Vibex_csr___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_csr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_csr___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vibex_csr___024root___dump_triggers__nba(Vibex_csr___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_csr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_csr___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void Vibex_csr___024root___ctor_var_reset(Vibex_csr___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_csr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_csr___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->wr_data_i = VL_RAND_RESET_I(32);
    vlSelf->wr_en_i = VL_RAND_RESET_I(1);
    vlSelf->rd_data_o = VL_RAND_RESET_I(32);
    vlSelf->rd_error_o = VL_RAND_RESET_I(1);
    vlSelf->ibex_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = VL_RAND_RESET_I(1);
}
