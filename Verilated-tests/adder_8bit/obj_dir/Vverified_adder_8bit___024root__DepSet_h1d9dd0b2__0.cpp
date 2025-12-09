// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vverified_adder_8bit.h for the primary calling header

#include "Vverified_adder_8bit__pch.h"
#include "Vverified_adder_8bit___024root.h"

void Vverified_adder_8bit___024root___ico_comb__TOP__0(Vverified_adder_8bit___024root* vlSelf);

void Vverified_adder_8bit___024root___eval_ico(Vverified_adder_8bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vverified_adder_8bit___024root___ico_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vverified_adder_8bit___024root___ico_comb__TOP__0(Vverified_adder_8bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root___ico_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ verified_adder_8bit__DOT____Vcellout__FA1__cout;
    verified_adder_8bit__DOT____Vcellout__FA1__cout = 0;
    CData/*0:0*/ verified_adder_8bit__DOT____Vcellout__FA2__cout;
    verified_adder_8bit__DOT____Vcellout__FA2__cout = 0;
    CData/*0:0*/ verified_adder_8bit__DOT____Vcellout__FA3__cout;
    verified_adder_8bit__DOT____Vcellout__FA3__cout = 0;
    CData/*0:0*/ verified_adder_8bit__DOT____Vcellout__FA4__cout;
    verified_adder_8bit__DOT____Vcellout__FA4__cout = 0;
    CData/*0:0*/ verified_adder_8bit__DOT____Vcellout__FA5__cout;
    verified_adder_8bit__DOT____Vcellout__FA5__cout = 0;
    CData/*0:0*/ verified_adder_8bit__DOT____Vcellout__FA6__cout;
    verified_adder_8bit__DOT____Vcellout__FA6__cout = 0;
    CData/*0:0*/ verified_adder_8bit__DOT____Vcellout__FA7__cout;
    verified_adder_8bit__DOT____Vcellout__FA7__cout = 0;
    // Body
    verified_adder_8bit__DOT____Vcellout__FA7__cout 
        = (1U & (((1U & ((IData)(vlSelfRef.a) >> 7U)) 
                  + ((1U & ((IData)(vlSelfRef.b) >> 7U)) 
                     + (1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                              >> 6U)))) >> 1U));
    verified_adder_8bit__DOT____Vcellout__FA6__cout 
        = (1U & (((1U & ((IData)(vlSelfRef.a) >> 6U)) 
                  + ((1U & ((IData)(vlSelfRef.b) >> 6U)) 
                     + (1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                              >> 5U)))) >> 1U));
    verified_adder_8bit__DOT____Vcellout__FA5__cout 
        = (1U & (((1U & ((IData)(vlSelfRef.a) >> 5U)) 
                  + ((1U & ((IData)(vlSelfRef.b) >> 5U)) 
                     + (1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                              >> 4U)))) >> 1U));
    verified_adder_8bit__DOT____Vcellout__FA4__cout 
        = (1U & (((1U & ((IData)(vlSelfRef.a) >> 4U)) 
                  + ((1U & ((IData)(vlSelfRef.b) >> 4U)) 
                     + (1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                              >> 3U)))) >> 1U));
    verified_adder_8bit__DOT____Vcellout__FA3__cout 
        = (1U & (((1U & ((IData)(vlSelfRef.a) >> 3U)) 
                  + ((1U & ((IData)(vlSelfRef.b) >> 3U)) 
                     + (1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                              >> 2U)))) >> 1U));
    verified_adder_8bit__DOT____Vcellout__FA2__cout 
        = (1U & (((1U & ((IData)(vlSelfRef.a) >> 2U)) 
                  + ((1U & ((IData)(vlSelfRef.b) >> 2U)) 
                     + (1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                              >> 1U)))) >> 1U));
    verified_adder_8bit__DOT____Vcellout__FA1__cout 
        = (1U & (((1U & ((IData)(vlSelfRef.a) >> 1U)) 
                  + ((1U & ((IData)(vlSelfRef.b) >> 1U)) 
                     + (1U & (IData)(vlSelfRef.verified_adder_8bit__DOT__c)))) 
                 >> 1U));
    vlSelfRef.verified_adder_8bit__DOT__c = ((0x100U 
                                              & (IData)(vlSelfRef.verified_adder_8bit__DOT__c)) 
                                             | (((((IData)(verified_adder_8bit__DOT____Vcellout__FA7__cout) 
                                                   << 7U) 
                                                  | ((IData)(verified_adder_8bit__DOT____Vcellout__FA6__cout) 
                                                     << 6U)) 
                                                 | (((IData)(verified_adder_8bit__DOT____Vcellout__FA5__cout) 
                                                     << 5U) 
                                                    | ((IData)(verified_adder_8bit__DOT____Vcellout__FA4__cout) 
                                                       << 4U))) 
                                                | ((((IData)(verified_adder_8bit__DOT____Vcellout__FA3__cout) 
                                                     << 3U) 
                                                    | ((IData)(verified_adder_8bit__DOT____Vcellout__FA2__cout) 
                                                       << 2U)) 
                                                   | (((IData)(verified_adder_8bit__DOT____Vcellout__FA1__cout) 
                                                       << 1U) 
                                                      | (1U 
                                                         & (((1U 
                                                              & (IData)(vlSelfRef.a)) 
                                                             + 
                                                             ((1U 
                                                               & (IData)(vlSelfRef.b)) 
                                                              + (IData)(vlSelfRef.cin))) 
                                                            >> 1U))))));
    vlSelfRef.cout = (1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                            >> 7U));
    vlSelfRef.sum = ((((0x80U & ((((IData)(vlSelfRef.a) 
                                   >> 7U) + (((IData)(vlSelfRef.b) 
                                              >> 7U) 
                                             + ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                                >> 6U))) 
                                 << 7U)) | (0x40U & 
                                            ((((IData)(vlSelfRef.a) 
                                               >> 6U) 
                                              + (((IData)(vlSelfRef.b) 
                                                  >> 6U) 
                                                 + 
                                                 ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                                  >> 5U))) 
                                             << 6U))) 
                      | ((0x20U & ((((IData)(vlSelfRef.a) 
                                     >> 5U) + (((IData)(vlSelfRef.b) 
                                                >> 5U) 
                                               + ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                                  >> 4U))) 
                                   << 5U)) | (0x10U 
                                              & ((((IData)(vlSelfRef.a) 
                                                   >> 4U) 
                                                  + 
                                                  (((IData)(vlSelfRef.b) 
                                                    >> 4U) 
                                                   + 
                                                   ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                                    >> 3U))) 
                                                 << 4U)))) 
                     | (((8U & ((((IData)(vlSelfRef.a) 
                                  >> 3U) + (((IData)(vlSelfRef.b) 
                                             >> 3U) 
                                            + ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                               >> 2U))) 
                                << 3U)) | (4U & ((((IData)(vlSelfRef.a) 
                                                   >> 2U) 
                                                  + 
                                                  (((IData)(vlSelfRef.b) 
                                                    >> 2U) 
                                                   + 
                                                   ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                                    >> 1U))) 
                                                 << 2U))) 
                        | ((2U & ((((IData)(vlSelfRef.a) 
                                    >> 1U) + (((IData)(vlSelfRef.b) 
                                               >> 1U) 
                                              + (IData)(vlSelfRef.verified_adder_8bit__DOT__c))) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.a) 
                                                   + 
                                                   ((IData)(vlSelfRef.b) 
                                                    + (IData)(vlSelfRef.cin)))))));
}

void Vverified_adder_8bit___024root___eval_triggers__ico(Vverified_adder_8bit___024root* vlSelf);

bool Vverified_adder_8bit___024root___eval_phase__ico(Vverified_adder_8bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vverified_adder_8bit___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vverified_adder_8bit___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vverified_adder_8bit___024root___eval_act(Vverified_adder_8bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vverified_adder_8bit___024root___ico_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void Vverified_adder_8bit___024root___eval_nba(Vverified_adder_8bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vverified_adder_8bit___024root___eval_triggers__act(Vverified_adder_8bit___024root* vlSelf);

bool Vverified_adder_8bit___024root___eval_phase__act(Vverified_adder_8bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vverified_adder_8bit___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vverified_adder_8bit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vverified_adder_8bit___024root___eval_phase__nba(Vverified_adder_8bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vverified_adder_8bit___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vverified_adder_8bit___024root___dump_triggers__ico(Vverified_adder_8bit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vverified_adder_8bit___024root___dump_triggers__nba(Vverified_adder_8bit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vverified_adder_8bit___024root___dump_triggers__act(Vverified_adder_8bit___024root* vlSelf);
#endif  // VL_DEBUG

void Vverified_adder_8bit___024root___eval(Vverified_adder_8bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root___eval\n"); );
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
            Vverified_adder_8bit___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/verified_adder_8bit.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vverified_adder_8bit___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vverified_adder_8bit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/verified_adder_8bit.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vverified_adder_8bit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/verified_adder_8bit.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vverified_adder_8bit___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vverified_adder_8bit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vverified_adder_8bit___024root___eval_debug_assertions(Vverified_adder_8bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.cin & 0xfeU))) {
        Verilated::overWidthError("cin");}
}
#endif  // VL_DEBUG
