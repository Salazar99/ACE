// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sqrt_spaced.h for the primary calling header

#include "Vtb_sqrt_spaced__pch.h"
#include "Vtb_sqrt_spaced___024root.h"

VL_ATTR_COLD void Vtb_sqrt_spaced___024root___eval_static__TOP(Vtb_sqrt_spaced___024root* vlSelf);

VL_ATTR_COLD void Vtb_sqrt_spaced___024root___eval_static(Vtb_sqrt_spaced___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sqrt_spaced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sqrt_spaced___024root___eval_static\n"); );
    // Body
    Vtb_sqrt_spaced___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_sqrt_spaced___024root___eval_static__TOP(Vtb_sqrt_spaced___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sqrt_spaced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sqrt_spaced___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_sqrt_spaced__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_sqrt_spaced___024root___eval_final(Vtb_sqrt_spaced___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sqrt_spaced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sqrt_spaced___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb_sqrt_spaced___024root___eval_settle(Vtb_sqrt_spaced___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sqrt_spaced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sqrt_spaced___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sqrt_spaced___024root___dump_triggers__act(Vtb_sqrt_spaced___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sqrt_spaced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sqrt_spaced___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_sqrt_spaced.intf.rst or negedge tb_sqrt_spaced.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_sqrt_spaced.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sqrt_spaced___024root___dump_triggers__nba(Vtb_sqrt_spaced___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sqrt_spaced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sqrt_spaced___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_sqrt_spaced.intf.rst or negedge tb_sqrt_spaced.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_sqrt_spaced.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_sqrt_spaced___024root___ctor_var_reset(Vtb_sqrt_spaced___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sqrt_spaced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sqrt_spaced___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_sqrt_spaced__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_sqrt_spaced__DOT__seed = 0;
    vlSelf->tb_sqrt_spaced__DOT__cycles = 0;
    vlSelf->tb_sqrt_spaced__DOT__sampled = 0;
    vlSelf->tb_sqrt_spaced__DOT__fd = 0;
    vlSelf->tb_sqrt_spaced__DOT__dut__DOT__num = VL_RAND_RESET_Q(33);
    vlSelf->tb_sqrt_spaced__DOT__dut__DOT__guess = VL_RAND_RESET_Q(33);
    vlSelf->tb_sqrt_spaced__DOT__dut__DOT__iter = VL_RAND_RESET_Q(33);
    vlSelf->__Vtrigprevexpr___TOP__tb_sqrt_spaced__DOT__intf__rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_sqrt_spaced__DOT__clk__0 = VL_RAND_RESET_I(1);
}
