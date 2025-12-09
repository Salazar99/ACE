// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vverified_adder_8bit.h for the primary calling header

#include "Vverified_adder_8bit__pch.h"
#include "Vverified_adder_8bit___024root.h"

VL_ATTR_COLD void Vverified_adder_8bit___024root___eval_static(Vverified_adder_8bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vverified_adder_8bit___024root___eval_initial(Vverified_adder_8bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__verified_adder_8bit__DOT__c__0 
        = vlSelfRef.verified_adder_8bit__DOT__c;
    vlSelfRef.__Vtrigprevexpr___TOP__verified_adder_8bit__DOT__c__1 
        = vlSelfRef.verified_adder_8bit__DOT__c;
    vlSelfRef.__Vtrigprevexpr___TOP__verified_adder_8bit__DOT__c__2 
        = vlSelfRef.verified_adder_8bit__DOT__c;
}

VL_ATTR_COLD void Vverified_adder_8bit___024root___eval_final(Vverified_adder_8bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vverified_adder_8bit___024root___dump_triggers__stl(Vverified_adder_8bit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vverified_adder_8bit___024root___eval_phase__stl(Vverified_adder_8bit___024root* vlSelf);

VL_ATTR_COLD void Vverified_adder_8bit___024root___eval_settle(Vverified_adder_8bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root___eval_settle\n"); );
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
            Vverified_adder_8bit___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/verified_adder_8bit.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vverified_adder_8bit___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vverified_adder_8bit___024root___dump_triggers__stl(Vverified_adder_8bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] verified_adder_8bit.c)\n");
    }
}
#endif  // VL_DEBUG

void Vverified_adder_8bit___024root___ico_comb__TOP__0(Vverified_adder_8bit___024root* vlSelf);
VL_ATTR_COLD void Vverified_adder_8bit___024root____Vm_traceActivitySetAll(Vverified_adder_8bit___024root* vlSelf);

VL_ATTR_COLD void Vverified_adder_8bit___024root___eval_stl(Vverified_adder_8bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vverified_adder_8bit___024root___ico_comb__TOP__0(vlSelf);
        Vverified_adder_8bit___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vverified_adder_8bit___024root___eval_triggers__stl(Vverified_adder_8bit___024root* vlSelf);

VL_ATTR_COLD bool Vverified_adder_8bit___024root___eval_phase__stl(Vverified_adder_8bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vverified_adder_8bit___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vverified_adder_8bit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vverified_adder_8bit___024root___dump_triggers__ico(Vverified_adder_8bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root___dump_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] verified_adder_8bit.c)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vverified_adder_8bit___024root___dump_triggers__act(Vverified_adder_8bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] verified_adder_8bit.c)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vverified_adder_8bit___024root___dump_triggers__nba(Vverified_adder_8bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] verified_adder_8bit.c)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vverified_adder_8bit___024root____Vm_traceActivitySetAll(Vverified_adder_8bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vverified_adder_8bit___024root___ctor_var_reset(Vverified_adder_8bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->a = VL_RAND_RESET_I(8);
    vlSelf->b = VL_RAND_RESET_I(8);
    vlSelf->cin = VL_RAND_RESET_I(1);
    vlSelf->sum = VL_RAND_RESET_I(8);
    vlSelf->cout = VL_RAND_RESET_I(1);
    vlSelf->verified_adder_8bit__DOT__c = VL_RAND_RESET_I(9);
    vlSelf->__Vtrigprevexpr___TOP__verified_adder_8bit__DOT__c__0 = VL_RAND_RESET_I(9);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__verified_adder_8bit__DOT__c__1 = VL_RAND_RESET_I(9);
    vlSelf->__VicoDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__verified_adder_8bit__DOT__c__2 = VL_RAND_RESET_I(9);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
