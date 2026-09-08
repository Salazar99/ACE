// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fifo_sync.h for the primary calling header

#include "Vtb_fifo_sync__pch.h"
#include "Vtb_fifo_sync___024root.h"

VL_ATTR_COLD void Vtb_fifo_sync___024root___eval_static__TOP(Vtb_fifo_sync___024root* vlSelf);

VL_ATTR_COLD void Vtb_fifo_sync___024root___eval_static(Vtb_fifo_sync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_static\n"); );
    // Body
    Vtb_fifo_sync___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_fifo_sync___024root___eval_static__TOP(Vtb_fifo_sync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_fifo_sync__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_fifo_sync___024root___eval_final(Vtb_fifo_sync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo_sync___024root___dump_triggers__stl(Vtb_fifo_sync___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_fifo_sync___024root___eval_phase__stl(Vtb_fifo_sync___024root* vlSelf);

VL_ATTR_COLD void Vtb_fifo_sync___024root___eval_settle(Vtb_fifo_sync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_fifo_sync___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/claude/bench/benchmarks/fifo_sync/tb_fifo_sync.sv", 22, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_fifo_sync___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo_sync___024root___dump_triggers__stl(Vtb_fifo_sync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtb_fifo_sync___024root___act_comb__TOP__0(Vtb_fifo_sync___024root* vlSelf);

VL_ATTR_COLD void Vtb_fifo_sync___024root___eval_stl(Vtb_fifo_sync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_fifo_sync___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_fifo_sync___024root___eval_triggers__stl(Vtb_fifo_sync___024root* vlSelf);

VL_ATTR_COLD bool Vtb_fifo_sync___024root___eval_phase__stl(Vtb_fifo_sync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_fifo_sync___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_fifo_sync___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo_sync___024root___dump_triggers__act(Vtb_fifo_sync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_fifo_sync.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo_sync___024root___dump_triggers__nba(Vtb_fifo_sync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_fifo_sync.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fifo_sync___024root___ctor_var_reset(Vtb_fifo_sync___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fifo_sync__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_sync___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_fifo_sync__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_fifo_sync__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_fifo_sync__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_fifo_sync__DOT__rd_en = VL_RAND_RESET_I(1);
    vlSelf->tb_fifo_sync__DOT__din = VL_RAND_RESET_I(8);
    vlSelf->tb_fifo_sync__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->tb_fifo_sync__DOT__seed = 0;
    vlSelf->tb_fifo_sync__DOT__cycles = 0;
    vlSelf->tb_fifo_sync__DOT__sampled = 0;
    vlSelf->tb_fifo_sync__DOT__fd = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_fifo_sync__DOT__dut__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_fifo_sync__DOT__dut__DOT__wr_ptr = VL_RAND_RESET_I(3);
    vlSelf->tb_fifo_sync__DOT__dut__DOT__rd_ptr = VL_RAND_RESET_I(3);
    vlSelf->tb_fifo_sync__DOT__dut__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->tb_fifo_sync__DOT__dut__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo_sync__DOT__clk__0 = VL_RAND_RESET_I(1);
}
