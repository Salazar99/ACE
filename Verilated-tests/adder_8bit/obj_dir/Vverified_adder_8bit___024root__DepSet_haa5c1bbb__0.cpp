// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vverified_adder_8bit.h for the primary calling header

#include "Vverified_adder_8bit__pch.h"
#include "Vverified_adder_8bit__Syms.h"
#include "Vverified_adder_8bit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vverified_adder_8bit___024root___dump_triggers__ico(Vverified_adder_8bit___024root* vlSelf);
#endif  // VL_DEBUG

void Vverified_adder_8bit___024root___eval_triggers__ico(Vverified_adder_8bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root___eval_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
    vlSelfRef.__VicoTriggered.set(1U, ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__verified_adder_8bit__DOT__c__1)));
    vlSelfRef.__Vtrigprevexpr___TOP__verified_adder_8bit__DOT__c__1 
        = vlSelfRef.verified_adder_8bit__DOT__c;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VicoDidInit))))) {
        vlSelfRef.__VicoDidInit = 1U;
        vlSelfRef.__VicoTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vverified_adder_8bit___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vverified_adder_8bit___024root___dump_triggers__act(Vverified_adder_8bit___024root* vlSelf);
#endif  // VL_DEBUG

void Vverified_adder_8bit___024root___eval_triggers__act(Vverified_adder_8bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__verified_adder_8bit__DOT__c__2)));
    vlSelfRef.__Vtrigprevexpr___TOP__verified_adder_8bit__DOT__c__2 
        = vlSelfRef.verified_adder_8bit__DOT__c;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vverified_adder_8bit___024root___dump_triggers__act(vlSelf);
    }
#endif
}
