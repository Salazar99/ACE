// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_uart_tb.h for the primary calling header

#include "Vtop_uart_tb__pch.h"
#include "Vtop_uart_tb__Syms.h"
#include "Vtop_uart_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_uart_tb___024root___dump_triggers__ico(Vtop_uart_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_uart_tb___024root___eval_triggers__ico(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
    vlSelf->__VicoTriggered.set(1U, (vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                     != vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree__1));
    vlSelf->__VicoTriggered.set(2U, (vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree 
                                     != vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__1));
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree__1 
        = vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree;
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__1 
        = vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.set(1U, 1U);
        vlSelf->__VicoTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_uart_tb___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_uart_tb___024root___dump_triggers__act(Vtop_uart_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_uart_tb___024root___eval_triggers__act(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                     != vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree__2));
    vlSelf->__VactTriggered.set(1U, ((vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree 
                                      != vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__2) 
                                     | (vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree 
                                        != vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__1)));
    vlSelf->__VactTriggered.set(2U, (vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree 
                                     != vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__2));
    vlSelf->__VactTriggered.set(3U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_n__0))));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree__2 
        = vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree;
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__2 
        = vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree;
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__1 
        = vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_uart_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
