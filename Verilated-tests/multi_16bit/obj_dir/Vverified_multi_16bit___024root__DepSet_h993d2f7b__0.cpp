// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vverified_multi_16bit.h for the primary calling header

#include "Vverified_multi_16bit__pch.h"
#include "Vverified_multi_16bit___024root.h"

void Vverified_multi_16bit___024root___eval_act(Vverified_multi_16bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_multi_16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_multi_16bit___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vverified_multi_16bit___024root___nba_sequent__TOP__0(Vverified_multi_16bit___024root* vlSelf);

void Vverified_multi_16bit___024root___eval_nba(Vverified_multi_16bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_multi_16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_multi_16bit___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vverified_multi_16bit___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vverified_multi_16bit___024root___nba_sequent__TOP__0(Vverified_multi_16bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_multi_16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_multi_16bit___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vdly__verified_multi_16bit__DOT__i;
    __Vdly__verified_multi_16bit__DOT__i = 0;
    // Body
    __Vdly__verified_multi_16bit__DOT__i = vlSelfRef.verified_multi_16bit__DOT__i;
    if (vlSelfRef.rst_n) {
        if (((IData)(vlSelfRef.start) & (0x11U > (IData)(vlSelfRef.verified_multi_16bit__DOT__i)))) {
            __Vdly__verified_multi_16bit__DOT__i = 
                (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.verified_multi_16bit__DOT__i)));
        } else if ((1U & (~ (IData)(vlSelfRef.start)))) {
            __Vdly__verified_multi_16bit__DOT__i = 0U;
        }
        if (vlSelfRef.start) {
            if ((0U != (IData)(vlSelfRef.verified_multi_16bit__DOT__i))) {
                if (((0U < (IData)(vlSelfRef.verified_multi_16bit__DOT__i)) 
                     & (0x11U > (IData)(vlSelfRef.verified_multi_16bit__DOT__i)))) {
                    if ((1U & ((IData)(vlSelfRef.verified_multi_16bit__DOT__areg) 
                               >> (0xfU & ((IData)(vlSelfRef.verified_multi_16bit__DOT__i) 
                                           - (IData)(1U)))))) {
                        vlSelfRef.verified_multi_16bit__DOT__yout_r 
                            = (vlSelfRef.verified_multi_16bit__DOT__yout_r 
                               + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.verified_multi_16bit__DOT__breg), 
                                               ((IData)(vlSelfRef.verified_multi_16bit__DOT__i) 
                                                - (IData)(1U))));
                    }
                }
            }
            if ((0U == (IData)(vlSelfRef.verified_multi_16bit__DOT__i))) {
                vlSelfRef.verified_multi_16bit__DOT__areg 
                    = vlSelfRef.ain;
                vlSelfRef.verified_multi_16bit__DOT__breg 
                    = vlSelfRef.bin;
            }
        }
        if ((0x10U == (IData)(vlSelfRef.verified_multi_16bit__DOT__i))) {
            vlSelfRef.verified_multi_16bit__DOT__done_r = 1U;
        } else if ((0x11U == (IData)(vlSelfRef.verified_multi_16bit__DOT__i))) {
            vlSelfRef.verified_multi_16bit__DOT__done_r = 0U;
        }
    } else {
        __Vdly__verified_multi_16bit__DOT__i = 0U;
        vlSelfRef.verified_multi_16bit__DOT__yout_r = 0U;
        vlSelfRef.verified_multi_16bit__DOT__done_r = 0U;
        vlSelfRef.verified_multi_16bit__DOT__areg = 0U;
        vlSelfRef.verified_multi_16bit__DOT__breg = 0U;
    }
    vlSelfRef.yout = vlSelfRef.verified_multi_16bit__DOT__yout_r;
    vlSelfRef.done = vlSelfRef.verified_multi_16bit__DOT__done_r;
    vlSelfRef.verified_multi_16bit__DOT__i = __Vdly__verified_multi_16bit__DOT__i;
}

void Vverified_multi_16bit___024root___eval_triggers__act(Vverified_multi_16bit___024root* vlSelf);

bool Vverified_multi_16bit___024root___eval_phase__act(Vverified_multi_16bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_multi_16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_multi_16bit___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vverified_multi_16bit___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vverified_multi_16bit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vverified_multi_16bit___024root___eval_phase__nba(Vverified_multi_16bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_multi_16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_multi_16bit___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vverified_multi_16bit___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vverified_multi_16bit___024root___dump_triggers__nba(Vverified_multi_16bit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vverified_multi_16bit___024root___dump_triggers__act(Vverified_multi_16bit___024root* vlSelf);
#endif  // VL_DEBUG

void Vverified_multi_16bit___024root___eval(Vverified_multi_16bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_multi_16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_multi_16bit___024root___eval\n"); );
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
            Vverified_multi_16bit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/verified_multi_16bit.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vverified_multi_16bit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/verified_multi_16bit.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vverified_multi_16bit___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vverified_multi_16bit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vverified_multi_16bit___024root___eval_debug_assertions(Vverified_multi_16bit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_multi_16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_multi_16bit___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelfRef.start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
