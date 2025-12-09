// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsqrt_calculator.h for the primary calling header

#include "Vsqrt_calculator__pch.h"
#include "Vsqrt_calculator___024root.h"

void Vsqrt_calculator___024root___eval_act(Vsqrt_calculator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsqrt_calculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt_calculator___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vsqrt_calculator___024root___nba_sequent__TOP__0(Vsqrt_calculator___024root* vlSelf);

void Vsqrt_calculator___024root___eval_nba(Vsqrt_calculator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsqrt_calculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt_calculator___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsqrt_calculator___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vsqrt_calculator___024root___nba_sequent__TOP__0(Vsqrt_calculator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsqrt_calculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt_calculator___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__done;
    __Vdly__done = 0;
    IData/*31:0*/ __Vdly__sqrt_calculator__DOT__guess;
    __Vdly__sqrt_calculator__DOT__guess = 0;
    IData/*31:0*/ __Vdly__sqrt_calculator__DOT__iter;
    __Vdly__sqrt_calculator__DOT__iter = 0;
    // Body
    __Vdly__done = vlSelfRef.done;
    __Vdly__sqrt_calculator__DOT__guess = vlSelfRef.sqrt_calculator__DOT__guess;
    __Vdly__sqrt_calculator__DOT__iter = vlSelfRef.sqrt_calculator__DOT__iter;
    if (vlSelfRef.rst) {
        vlSelfRef.error = 0U;
        vlSelfRef.out = 0U;
        __Vdly__done = 0U;
        __Vdly__sqrt_calculator__DOT__guess = 0U;
        __Vdly__sqrt_calculator__DOT__iter = 0U;
        vlSelfRef.sqrt_calculator__DOT__num = 0U;
    } else if (vlSelfRef.start) {
        if ((vlSelfRef.in >> 0x1fU)) {
            vlSelfRef.error = 1U;
            __Vdly__done = 1U;
            vlSelfRef.out = 0U;
        } else {
            vlSelfRef.error = 0U;
            __Vdly__sqrt_calculator__DOT__guess = 1U;
            __Vdly__sqrt_calculator__DOT__iter = 0U;
            __Vdly__done = 0U;
        }
        if ((1U & (~ (vlSelfRef.in >> 0x1fU)))) {
            vlSelfRef.sqrt_calculator__DOT__num = vlSelfRef.in;
        }
    } else if ((1U & (~ (IData)(vlSelfRef.done)))) {
        if ((0xaU > vlSelfRef.sqrt_calculator__DOT__iter)) {
            __Vdly__sqrt_calculator__DOT__guess = VL_SHIFTR_III(32,32,32, 
                                                                (vlSelfRef.sqrt_calculator__DOT__guess 
                                                                 + 
                                                                 VL_DIV_III(32, vlSelfRef.sqrt_calculator__DOT__num, vlSelfRef.sqrt_calculator__DOT__guess)), 1U);
            __Vdly__sqrt_calculator__DOT__iter = ((IData)(1U) 
                                                  + vlSelfRef.sqrt_calculator__DOT__iter);
        } else {
            vlSelfRef.out = vlSelfRef.sqrt_calculator__DOT__guess;
            __Vdly__done = 1U;
        }
    }
    vlSelfRef.done = __Vdly__done;
    vlSelfRef.sqrt_calculator__DOT__guess = __Vdly__sqrt_calculator__DOT__guess;
    vlSelfRef.sqrt_calculator__DOT__iter = __Vdly__sqrt_calculator__DOT__iter;
}

void Vsqrt_calculator___024root___eval_triggers__act(Vsqrt_calculator___024root* vlSelf);

bool Vsqrt_calculator___024root___eval_phase__act(Vsqrt_calculator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsqrt_calculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt_calculator___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsqrt_calculator___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsqrt_calculator___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsqrt_calculator___024root___eval_phase__nba(Vsqrt_calculator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsqrt_calculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt_calculator___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsqrt_calculator___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsqrt_calculator___024root___dump_triggers__nba(Vsqrt_calculator___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsqrt_calculator___024root___dump_triggers__act(Vsqrt_calculator___024root* vlSelf);
#endif  // VL_DEBUG

void Vsqrt_calculator___024root___eval(Vsqrt_calculator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsqrt_calculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt_calculator___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vsqrt_calculator___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/sqrt_calculator.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vsqrt_calculator___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/sqrt_calculator.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vsqrt_calculator___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vsqrt_calculator___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsqrt_calculator___024root___eval_debug_assertions(Vsqrt_calculator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsqrt_calculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt_calculator___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelfRef.start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
