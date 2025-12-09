// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_uart_tb.h for the primary calling header

#include "Vtop_uart_tb__pch.h"
#include "Vtop_uart_tb__Syms.h"
#include "Vtop_uart_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_uart_tb___024root___dump_triggers__stl(Vtop_uart_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_uart_tb___024root___eval_triggers__stl(Vtop_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.set(1U, (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__0));
    vlSelfRef.__VstlTriggered.set(2U, (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__0));
    vlSelfRef.__VstlTriggered.set(3U, (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree__0));
    vlSelfRef.__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__0 
        = vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree;
    vlSelfRef.__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__0 
        = vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree;
    vlSelfRef.__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree__0 
        = vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VstlDidInit))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.set(1U, 1U);
        vlSelfRef.__VstlTriggered.set(2U, 1U);
        vlSelfRef.__VstlTriggered.set(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_uart_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
