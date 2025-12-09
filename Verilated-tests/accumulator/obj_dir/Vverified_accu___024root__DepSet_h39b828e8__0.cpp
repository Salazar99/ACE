// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vverified_accu.h for the primary calling header

#include "Vverified_accu__pch.h"
#include "Vverified_accu___024root.h"

void Vverified_accu___024root___ico_sequent__TOP__0(Vverified_accu___024root* vlSelf);

void Vverified_accu___024root___eval_ico(Vverified_accu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_accu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_accu___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vverified_accu___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vverified_accu___024root___ico_sequent__TOP__0(Vverified_accu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_accu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_accu___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.verified_accu__DOT__add_cnt = (1U & (
                                                   (~ (IData)(vlSelfRef.valid_out)) 
                                                   | (IData)(vlSelfRef.valid_in)));
    vlSelfRef.verified_accu__DOT__end_cnt = ((IData)(vlSelfRef.verified_accu__DOT__add_cnt) 
                                             & (3U 
                                                == (IData)(vlSelfRef.verified_accu__DOT__count)));
}

void Vverified_accu___024root___eval_triggers__ico(Vverified_accu___024root* vlSelf);

bool Vverified_accu___024root___eval_phase__ico(Vverified_accu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_accu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_accu___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vverified_accu___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vverified_accu___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vverified_accu___024root___eval_act(Vverified_accu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_accu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_accu___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vverified_accu___024root___nba_sequent__TOP__0(Vverified_accu___024root* vlSelf);

void Vverified_accu___024root___eval_nba(Vverified_accu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_accu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_accu___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vverified_accu___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vverified_accu___024root___nba_sequent__TOP__0(Vverified_accu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_accu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_accu___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__verified_accu__DOT__count;
    __Vdly__verified_accu__DOT__count = 0;
    SData/*9:0*/ __Vdly__verified_accu__DOT__data_out_reg;
    __Vdly__verified_accu__DOT__data_out_reg = 0;
    SData/*9:0*/ __Vdly__data_out;
    __Vdly__data_out = 0;
    // Body
    __Vdly__verified_accu__DOT__data_out_reg = vlSelfRef.verified_accu__DOT__data_out_reg;
    __Vdly__data_out = vlSelfRef.data_out;
    __Vdly__verified_accu__DOT__count = vlSelfRef.verified_accu__DOT__count;
    if (vlSelfRef.rst_n) {
        if (((IData)(vlSelfRef.verified_accu__DOT__add_cnt) 
             & (0U == (IData)(vlSelfRef.verified_accu__DOT__count)))) {
            __Vdly__verified_accu__DOT__data_out_reg 
                = vlSelfRef.data_in;
            __Vdly__data_out = vlSelfRef.data_in;
        } else if (vlSelfRef.verified_accu__DOT__add_cnt) {
            __Vdly__verified_accu__DOT__data_out_reg 
                = (0x3ffU & ((IData)(vlSelfRef.verified_accu__DOT__data_out_reg) 
                             + (IData)(vlSelfRef.data_in)));
            __Vdly__data_out = (0x3ffU & ((IData)(vlSelfRef.data_out) 
                                          + (IData)(vlSelfRef.data_in)));
        }
        if (vlSelfRef.verified_accu__DOT__end_cnt) {
            __Vdly__verified_accu__DOT__count = 0U;
        } else if (vlSelfRef.verified_accu__DOT__add_cnt) {
            __Vdly__verified_accu__DOT__count = (3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.verified_accu__DOT__count)));
        }
    } else {
        __Vdly__verified_accu__DOT__data_out_reg = 0U;
        __Vdly__data_out = 0U;
        __Vdly__verified_accu__DOT__count = 0U;
    }
    vlSelfRef.valid_out = ((IData)(vlSelfRef.rst_n) 
                           && (IData)(vlSelfRef.verified_accu__DOT__end_cnt));
    vlSelfRef.verified_accu__DOT__data_out_reg = __Vdly__verified_accu__DOT__data_out_reg;
    vlSelfRef.data_out = __Vdly__data_out;
    vlSelfRef.verified_accu__DOT__count = __Vdly__verified_accu__DOT__count;
    vlSelfRef.verified_accu__DOT__add_cnt = (1U & (
                                                   (~ (IData)(vlSelfRef.valid_out)) 
                                                   | (IData)(vlSelfRef.valid_in)));
    vlSelfRef.verified_accu__DOT__end_cnt = ((IData)(vlSelfRef.verified_accu__DOT__add_cnt) 
                                             & (3U 
                                                == (IData)(vlSelfRef.verified_accu__DOT__count)));
}

void Vverified_accu___024root___eval_triggers__act(Vverified_accu___024root* vlSelf);

bool Vverified_accu___024root___eval_phase__act(Vverified_accu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_accu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_accu___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vverified_accu___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vverified_accu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vverified_accu___024root___eval_phase__nba(Vverified_accu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_accu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_accu___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vverified_accu___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vverified_accu___024root___dump_triggers__ico(Vverified_accu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vverified_accu___024root___dump_triggers__nba(Vverified_accu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vverified_accu___024root___dump_triggers__act(Vverified_accu___024root* vlSelf);
#endif  // VL_DEBUG

void Vverified_accu___024root___eval(Vverified_accu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_accu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_accu___024root___eval\n"); );
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
            Vverified_accu___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/verified_accu.sv", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vverified_accu___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vverified_accu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/verified_accu.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vverified_accu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/verified_accu.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vverified_accu___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vverified_accu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vverified_accu___024root___eval_debug_assertions(Vverified_accu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_accu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_accu___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelfRef.valid_in & 0xfeU))) {
        Verilated::overWidthError("valid_in");}
}
#endif  // VL_DEBUG
