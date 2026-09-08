// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_arbiter4.h for the primary calling header

#include "Vtb_arbiter4__pch.h"
#include "Vtb_arbiter4___024root.h"

VL_ATTR_COLD void Vtb_arbiter4___024root___eval_static__TOP(Vtb_arbiter4___024root* vlSelf);

VL_ATTR_COLD void Vtb_arbiter4___024root___eval_static(Vtb_arbiter4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_arbiter4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_arbiter4___024root___eval_static\n"); );
    // Body
    Vtb_arbiter4___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_arbiter4___024root___eval_static__TOP(Vtb_arbiter4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_arbiter4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_arbiter4___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_arbiter4__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_arbiter4___024root___eval_final(Vtb_arbiter4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_arbiter4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_arbiter4___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_arbiter4___024root___dump_triggers__stl(Vtb_arbiter4___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_arbiter4___024root___eval_phase__stl(Vtb_arbiter4___024root* vlSelf);

VL_ATTR_COLD void Vtb_arbiter4___024root___eval_settle(Vtb_arbiter4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_arbiter4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_arbiter4___024root___eval_settle\n"); );
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
            Vtb_arbiter4___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/claude/bench/benchmarks/arbiter4/tb_arbiter4.sv", 24, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_arbiter4___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_arbiter4___024root___dump_triggers__stl(Vtb_arbiter4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_arbiter4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_arbiter4___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_arbiter4___024root___stl_sequent__TOP__0(Vtb_arbiter4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_arbiter4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_arbiter4___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__i;
    tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__i = 0;
    // Body
    vlSelf->tb_arbiter4__DOT__dut__DOT__req = (((IData)(vlSelf->tb_arbiter4__DOT__req3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_arbiter4__DOT__req2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_arbiter4__DOT__req1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_arbiter4__DOT__req0))));
    vlSelf->tb_arbiter4__DOT__dut__DOT__winner = vlSelf->tb_arbiter4__DOT__dut__DOT__pointer;
    tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__i = 0U;
    {
        while ((4U > tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__i)) {
            vlSelf->tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__candidate 
                = (3U & ((IData)(vlSelf->tb_arbiter4__DOT__dut__DOT__pointer) 
                         + tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__i));
            if ((1U & ((IData)(vlSelf->tb_arbiter4__DOT__dut__DOT__req) 
                       >> (IData)(vlSelf->tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__candidate)))) {
                vlSelf->tb_arbiter4__DOT__dut__DOT__winner 
                    = vlSelf->tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__candidate;
                goto __Vlabel1;
            }
            tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel1: ;
    }
}

VL_ATTR_COLD void Vtb_arbiter4___024root___eval_stl(Vtb_arbiter4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_arbiter4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_arbiter4___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_arbiter4___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_arbiter4___024root___eval_triggers__stl(Vtb_arbiter4___024root* vlSelf);

VL_ATTR_COLD bool Vtb_arbiter4___024root___eval_phase__stl(Vtb_arbiter4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_arbiter4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_arbiter4___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_arbiter4___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_arbiter4___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_arbiter4___024root___dump_triggers__act(Vtb_arbiter4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_arbiter4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_arbiter4___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_arbiter4.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_arbiter4___024root___dump_triggers__nba(Vtb_arbiter4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_arbiter4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_arbiter4___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_arbiter4.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_arbiter4___024root___ctor_var_reset(Vtb_arbiter4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_arbiter4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_arbiter4___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_arbiter4__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_arbiter4__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_arbiter4__DOT__req0 = VL_RAND_RESET_I(1);
    vlSelf->tb_arbiter4__DOT__req1 = VL_RAND_RESET_I(1);
    vlSelf->tb_arbiter4__DOT__req2 = VL_RAND_RESET_I(1);
    vlSelf->tb_arbiter4__DOT__req3 = VL_RAND_RESET_I(1);
    vlSelf->tb_arbiter4__DOT__gnt0 = VL_RAND_RESET_I(1);
    vlSelf->tb_arbiter4__DOT__gnt1 = VL_RAND_RESET_I(1);
    vlSelf->tb_arbiter4__DOT__gnt2 = VL_RAND_RESET_I(1);
    vlSelf->tb_arbiter4__DOT__gnt3 = VL_RAND_RESET_I(1);
    vlSelf->tb_arbiter4__DOT__gnt_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_arbiter4__DOT__gnt_id = VL_RAND_RESET_I(2);
    vlSelf->tb_arbiter4__DOT__seed = 0;
    vlSelf->tb_arbiter4__DOT__cycles = 0;
    vlSelf->tb_arbiter4__DOT__sampled = 0;
    vlSelf->tb_arbiter4__DOT__fd = 0;
    vlSelf->tb_arbiter4__DOT__dut__DOT__req = VL_RAND_RESET_I(4);
    vlSelf->tb_arbiter4__DOT__dut__DOT__pointer = VL_RAND_RESET_I(2);
    vlSelf->tb_arbiter4__DOT__dut__DOT__winner = VL_RAND_RESET_I(2);
    vlSelf->tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__candidate = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_arbiter4__DOT__clk__0 = VL_RAND_RESET_I(1);
}
