// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcomparator_3bit.h for the primary calling header

#include "Vcomparator_3bit__pch.h"
#include "Vcomparator_3bit___024root.h"

void Vcomparator_3bit___024root___ico_sequent__TOP__0(Vcomparator_3bit___024root* vlSelf);

void Vcomparator_3bit___024root___eval_ico(Vcomparator_3bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcomparator_3bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator_3bit___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcomparator_3bit___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcomparator_3bit___024root___ico_sequent__TOP__0(Vcomparator_3bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcomparator_3bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator_3bit___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.A_greater = ((IData)(vlSelfRef.A) > (IData)(vlSelfRef.B));
    vlSelfRef.A_equal = ((IData)(vlSelfRef.A) == (IData)(vlSelfRef.B));
    vlSelfRef.A_less = ((IData)(vlSelfRef.A) < (IData)(vlSelfRef.B));
}

void Vcomparator_3bit___024root___eval_triggers__ico(Vcomparator_3bit___024root* vlSelf);

bool Vcomparator_3bit___024root___eval_phase__ico(Vcomparator_3bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcomparator_3bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator_3bit___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcomparator_3bit___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vcomparator_3bit___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vcomparator_3bit___024root___eval_act(Vcomparator_3bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcomparator_3bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator_3bit___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcomparator_3bit___024root___eval_nba(Vcomparator_3bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcomparator_3bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator_3bit___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcomparator_3bit___024root___eval_triggers__act(Vcomparator_3bit___024root* vlSelf);

bool Vcomparator_3bit___024root___eval_phase__act(Vcomparator_3bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcomparator_3bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator_3bit___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcomparator_3bit___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcomparator_3bit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcomparator_3bit___024root___eval_phase__nba(Vcomparator_3bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcomparator_3bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator_3bit___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcomparator_3bit___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcomparator_3bit___024root___dump_triggers__ico(Vcomparator_3bit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcomparator_3bit___024root___dump_triggers__nba(Vcomparator_3bit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcomparator_3bit___024root___dump_triggers__act(Vcomparator_3bit___024root* vlSelf);
#endif  // VL_DEBUG

void Vcomparator_3bit___024root___eval(Vcomparator_3bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcomparator_3bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator_3bit___024root___eval\n"); );
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
            Vcomparator_3bit___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/verified_comparator_3bit.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vcomparator_3bit___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vcomparator_3bit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/verified_comparator_3bit.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vcomparator_3bit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/verified_comparator_3bit.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcomparator_3bit___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcomparator_3bit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcomparator_3bit___024root___eval_debug_assertions(Vcomparator_3bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcomparator_3bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator_3bit___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.A & 0xf8U))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY((vlSelfRef.B & 0xf8U))) {
        Verilated::overWidthError("B");}
}
#endif  // VL_DEBUG
