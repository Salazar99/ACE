// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_uart_tb.h for the primary calling header

#include "Vtop_uart_tb__pch.h"
#include "Vtop_uart_tb___024root.h"

VL_ATTR_COLD void Vtop_uart_tb___024root___eval_static__TOP(Vtop_uart_tb___024root* vlSelf);
VL_ATTR_COLD void Vtop_uart_tb___024root____Vm_traceActivitySetAll(Vtop_uart_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_uart_tb___024root___eval_static(Vtop_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_uart_tb___024root___eval_static__TOP(vlSelf);
    Vtop_uart_tb___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vtop_uart_tb___024root___eval_static__TOP(Vtop_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval_static__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[0U] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[1U] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[2U] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[3U] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[4U] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[5U] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[6U] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[7U] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[8U] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[9U] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[0xaU] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[0xbU] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[0xcU] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[0xdU] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[0xeU] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[0xfU] = 0U;
}

VL_ATTR_COLD void Vtop_uart_tb___024root___eval_initial__TOP(Vtop_uart_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_uart_tb___024root___eval_initial(Vtop_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_uart_tb___024root___eval_initial__TOP(vlSelf);
    Vtop_uart_tb___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__0 
        = vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree;
    vlSelfRef.__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__0 
        = vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree;
    vlSelfRef.__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree__0 
        = vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree;
    vlSelfRef.__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__1 
        = vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree;
    vlSelfRef.__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree__1 
        = vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree;
    vlSelfRef.__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__1 
        = vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree;
    vlSelfRef.__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__2 
        = vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree;
    vlSelfRef.__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree__2 
        = vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vtop_uart_tb___024root___eval_initial__TOP(Vtop_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[0U] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[1U] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[2U] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[3U] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[4U] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[5U] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[6U] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[7U] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[8U] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[9U] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[0xaU] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[0xbU] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[0xcU] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[0xdU] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[0xeU] = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[0xfU] = 0U;
    vlSelfRef.top_uart_tb__DOT__alert_rx_i = (3U & (IData)(vlSelfRef.top_uart_tb__DOT__alert_rx_i));
    vlSelfRef.cio_tx_en_o = 1U;
}

VL_ATTR_COLD void Vtop_uart_tb___024root___eval_final(Vtop_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_uart_tb___024root___dump_triggers__stl(Vtop_uart_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_uart_tb___024root___eval_phase__stl(Vtop_uart_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_uart_tb___024root___eval_settle(Vtop_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop_uart_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/top_uart_tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop_uart_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_uart_tb___024root___dump_triggers__stl(Vtop_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] top_uart_tb.dut.u_reg.u_prim_reg_we_check.u_prim_onehot_check.err_tree)\n");
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] top_uart_tb.dut.u_reg.u_prim_reg_we_check.u_prim_onehot_check.or_tree)\n");
    }
    if ((8ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] top_uart_tb.dut.u_reg.u_prim_reg_we_check.u_prim_onehot_check.and_tree)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_uart_tb___024root___stl_sequent__TOP__0(Vtop_uart_tb___024root* vlSelf);
void Vtop_uart_tb___024root___act_sequent__TOP__0(Vtop_uart_tb___024root* vlSelf);
void Vtop_uart_tb___024root___ico_comb__TOP__0(Vtop_uart_tb___024root* vlSelf);
void Vtop_uart_tb___024root___act_sequent__TOP__2(Vtop_uart_tb___024root* vlSelf);
void Vtop_uart_tb___024root___act_comb__TOP__0(Vtop_uart_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_uart_tb___024root___eval_stl(Vtop_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop_uart_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vtop_uart_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop_uart_tb___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((9ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop_uart_tb___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop_uart_tb___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop_uart_tb___024root___act_comb__TOP__0(vlSelf);
        Vtop_uart_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 128> Vtop_uart_tb__ConstPool__TABLE_h4416addc_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_uart_tb__ConstPool__TABLE_h75524ac6_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_uart_tb__ConstPool__TABLE_h6d2bfc85_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_uart_tb__ConstPool__TABLE_h1cca3b5b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_uart_tb__ConstPool__TABLE_h68d229d5_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_uart_tb__ConstPool__TABLE_h4482475c_0;

VL_ATTR_COLD void Vtop_uart_tb___024root___stl_sequent__TOP__0(Vtop_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__0__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__0__Vfuncout = 0;
    VlWide<4>/*106:0*/ __Vfunc_extract_h2d_cmd_intg__0__tl;
    VL_ZERO_W(107, __Vfunc_extract_h2d_cmd_intg__0__tl);
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__1__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__1__Vfuncout = 0;
    VlWide<4>/*106:0*/ __Vfunc_extract_h2d_cmd_intg__1__tl;
    VL_ZERO_W(107, __Vfunc_extract_h2d_cmd_intg__1__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__2__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__2__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__2__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__2__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__2__payload;
    __Vfunc_extract_d2h_rsp_intg__2__payload = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__6__Vfuncout;
    __Vfunc_mubi4_test_invalid__6__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__6__val;
    __Vfunc_mubi4_test_invalid__6__val = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    VlWide<3>/*95:0*/ __Vtemp_37;
    // Body
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt 
        = (0x20U & ((~ ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                        >> 5U)) << 5U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt 
        = (0x20U & ((~ ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                        >> 5U)) << 5U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt 
        = (0x40U & ((~ ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                        >> 6U)) << 6U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt 
        = (0x40U & ((~ ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                        >> 6U)) << 6U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_fifo_rxrst 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
           & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__fifo_ctrl_qe));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_fifo_txrst 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
           & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__fifo_ctrl_qe));
    vlSelfRef.cio_tx_o = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q)
                           ? (IData)(vlSelfRef.cio_rx_i)
                           : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_out_q));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage_rdata 
        = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
                                                   (0x1fU 
                                                    & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                      ? 0U : (vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[
                              (((IData)(7U) + (0xffU 
                                               & VL_SHIFTL_III(8,8,32, 
                                                               (0x1fU 
                                                                & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                               >> 5U)] << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & VL_SHIFTL_III(8,8,32, 
                                                              (0x1fU 
                                                               & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                    | (vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[
                       (7U & (VL_SHIFTL_III(8,8,32, 
                                            (0x1fU 
                                             & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                              >> 5U))] >> (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         (0x1fU 
                                                          & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_timeout 
        = ((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q 
            == vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_timeout_count_q) 
           & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_data 
        = (0xffU & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                     ? ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                        >> 1U) : ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                  >> 2U)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_in 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q)
            ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tx_q)
            : ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
               | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q)
                   ? (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync) 
                       & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q1) 
                          | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q2))) 
                      | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q1) 
                         & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q2)))
                   : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_parity_err 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
           & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
              & (VL_REDXOR_32((0x1ffU & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                         >> 1U))) ^ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    __Vtableidx3 = (((((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd) 
                         ^ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq)) 
                        & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd) 
                           ^ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq))) 
                       << 6U) | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd) 
                                 << 5U)) | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd) 
                                              ^ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd)) 
                                             << 4U) 
                                            | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q) 
                                               << 3U))) 
                    | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_q) 
                        << 2U) | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d 
        = Vtop_uart_tb__ConstPool__TABLE_h4416addc_0
        [__Vtableidx3];
    vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d 
        = Vtop_uart_tb__ConstPool__TABLE_h75524ac6_0
        [__Vtableidx3];
    vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_d 
        = Vtop_uart_tb__ConstPool__TABLE_h6d2bfc85_0
        [__Vtableidx3];
    vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o 
        = Vtop_uart_tb__ConstPool__TABLE_h1cca3b5b_0
        [__Vtableidx3];
    vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o 
        = Vtop_uart_tb__ConstPool__TABLE_h68d229d5_0
        [__Vtableidx3];
    vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint 
        = Vtop_uart_tb__ConstPool__TABLE_h4482475c_0
        [__Vtableidx3];
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_frame_err 
        = ((~ ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
               >> 0xaU)) & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q));
    __Vtableidx2 = (((((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd) 
                         ^ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq)) 
                        & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd) 
                           ^ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq))) 
                       << 6U) | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd) 
                                 << 5U)) | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd) 
                                              ^ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd)) 
                                             << 4U) 
                                            | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q) 
                                               << 3U))) 
                    | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q) 
                        << 2U) | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d 
        = Vtop_uart_tb__ConstPool__TABLE_h4416addc_0
        [__Vtableidx2];
    vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d 
        = Vtop_uart_tb__ConstPool__TABLE_h75524ac6_0
        [__Vtableidx2];
    vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_d 
        = Vtop_uart_tb__ConstPool__TABLE_h6d2bfc85_0
        [__Vtableidx2];
    vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o 
        = Vtop_uart_tb__ConstPool__TABLE_h1cca3b5b_0
        [__Vtableidx2];
    vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o 
        = Vtop_uart_tb__ConstPool__TABLE_h68d229d5_0
        [__Vtableidx2];
    vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint 
        = Vtop_uart_tb__ConstPool__TABLE_h4482475c_0
        [__Vtableidx2];
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle 
        = (1U & ((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q)) 
                 | (0U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__full_o 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x20U ^ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__full_o 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x40U ^ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                    << 0x39U) | (((QData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                  << 0x31U) | (((QData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                                   << 1U) 
                                                                  | (1U 
                                                                     & (~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))))))))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[1U] 
        = ((0xc0000000U & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                        << 0x39U) | (((QData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                      << 0x31U) | (
                                                   ((QData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                                       << 1U) 
                                                                      | (1U 
                                                                         & (~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))))))))) 
                      >> 0x20U)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[1U] 
        = ((0x3fffffffU & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[1U]) 
           | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
              << 0x1eU));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[2U] 
        = (3U & ((0x3ffffffeU & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                                 << 1U)) | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                                            >> 2U)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[0U] 
        = (0xffff0003U & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[0U]);
    vlSelfRef.top_uart_tb__DOT__tl_i_raw[0U] = 0xffc4ffffU;
    vlSelfRef.top_uart_tb__DOT__tl_i_raw[1U] = 0x3fffffU;
    vlSelfRef.top_uart_tb__DOT__tl_i_raw[2U] = 0U;
    vlSelfRef.top_uart_tb__DOT__tl_i_raw[3U] = 0U;
    vlSelfRef.top_uart_tb__DOT__tl_i_raw[3U] = ((0x7fU 
                                                 & vlSelfRef.top_uart_tb__DOT__tl_i_raw[3U]) 
                                                | (0x780U 
                                                   & (((IData)(vlSelfRef.tl_i_a_valid) 
                                                       << 0xaU) 
                                                      | ((IData)(vlSelfRef.tl_i_a_opcode) 
                                                         << 7U))));
    vlSelfRef.top_uart_tb__DOT__tl_i_raw[3U] = ((0x7f3U 
                                                 & vlSelfRef.top_uart_tb__DOT__tl_i_raw[3U]) 
                                                | (0x7ffU 
                                                   & ((IData)(vlSelfRef.tl_i_a_size) 
                                                      << 2U)));
    vlSelfRef.top_uart_tb__DOT__tl_i_raw[0U] = ((0x3fffffU 
                                                 & vlSelfRef.top_uart_tb__DOT__tl_i_raw[0U]) 
                                                | ((IData)(
                                                           (((QData)((IData)(vlSelfRef.tl_i_a_mask)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelfRef.tl_i_a_data)))) 
                                                   << 0x16U));
    vlSelfRef.top_uart_tb__DOT__tl_i_raw[1U] = (((IData)(
                                                         (((QData)((IData)(vlSelfRef.tl_i_a_mask)) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelfRef.tl_i_a_data)))) 
                                                 >> 0xaU) 
                                                | ((vlSelfRef.tl_i_a_address 
                                                    << 0x1aU) 
                                                   | ((IData)(
                                                              ((((QData)((IData)(vlSelfRef.tl_i_a_mask)) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(vlSelfRef.tl_i_a_data))) 
                                                               >> 0x20U)) 
                                                      << 0x16U)));
    vlSelfRef.top_uart_tb__DOT__tl_i_raw[2U] = (((0x3fffffU 
                                                  & (vlSelfRef.tl_i_a_address 
                                                     >> 6U)) 
                                                 | ((IData)(
                                                            ((((QData)((IData)(vlSelfRef.tl_i_a_mask)) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(vlSelfRef.tl_i_a_data))) 
                                                             >> 0x20U)) 
                                                    >> 0xaU)) 
                                                | (((IData)(vlSelfRef.tl_i_a_source) 
                                                    << 0x1aU) 
                                                   | (0x3c00000U 
                                                      & (vlSelfRef.tl_i_a_address 
                                                         >> 6U))));
    vlSelfRef.top_uart_tb__DOT__tl_i_raw[3U] = ((0x7fcU 
                                                 & vlSelfRef.top_uart_tb__DOT__tl_i_raw[3U]) 
                                                | (0x7ffU 
                                                   & ((IData)(vlSelfRef.tl_i_a_source) 
                                                      >> 6U)));
    vlSelfRef.top_uart_tb__DOT__tl_i_raw[3U] = ((0x78fU 
                                                 & vlSelfRef.top_uart_tb__DOT__tl_i_raw[3U]) 
                                                | (0x7ffU 
                                                   & ((IData)(vlSelfRef.tl_i_a_param) 
                                                      << 4U)));
    vlSelfRef.top_uart_tb__DOT__tl_i_raw[0U] = (0x4fffeU 
                                                | ((0xffc00000U 
                                                    & vlSelfRef.top_uart_tb__DOT__tl_i_raw[0U]) 
                                                   | (IData)(vlSelfRef.tl_i_d_ready)));
    vlSelfRef.top_uart_tb__DOT__tl_i_raw[0U] = (0x48000U 
                                                | (0xffc07fffU 
                                                   & vlSelfRef.top_uart_tb__DOT__tl_i_raw[0U]));
    if (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) {
        vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
        if ((0x10000U & vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__nco_sum_q)) {
            vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d 
                = (1U & (((IData)(1U) + (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q)) 
                         >> 4U));
            vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d 
                = vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q;
            vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q)));
        } else {
            vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d 
                = vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q;
        }
        vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_d 
            = vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_q;
        vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
            = vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q;
        vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_d 
            = vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_q;
        if (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
             & (~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_in)))) {
            vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
            vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d = 8U;
            vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_d = 0U;
            vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
                = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                    ? 0xbU : 0xaU);
            vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_d = 0U;
        } else if (((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_q)) 
                    & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q))) {
            vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_d 
                = ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                     == ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                          ? 0xbU : 0xaU)) & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_in)) 
                   || (1U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q)));
            vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
                = ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                     == ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                          ? 0xbU : 0xaU)) & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_in))
                    ? 0U : (0xfU & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                                    - (IData)(1U))));
            if ((1U & (~ (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                           == ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                                ? 0xbU : 0xaU)) & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_in))))) {
                vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_d 
                    = (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_in) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                              >> 1U)));
            }
        }
    } else {
        vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
        vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d = 0U;
        vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_d = 1U;
        vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d = 0U;
        vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_d = 0U;
    }
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_d 
        = (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__break_st_q) 
            | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
               & ((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_frame_err)) 
                  | (0U != (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_data)))))
            ? 0U : (0x1fU & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_q) 
                             + ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_frame_err) 
                                & (0U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_data))))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wvalid 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
           & ((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_frame_err)) 
              & (~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_parity_err))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger 
        = (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o) 
            | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o)) 
           | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_set_q));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_rready 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle) 
           & ((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
              & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_wready 
        = (1U & ((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_depth 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__full_o)
            ? 0x20U : (0x3fU & (((1U & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                        >> 5U)) == 
                                 (1U & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                        >> 5U))) ? 
                                ((0x1fU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                 - (0x1fU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                 : (((IData)(0x20U) 
                                     - (0x1fU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                    + (0x1fU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__full_o)
            ? 0x40U : (0x7fU & (((1U & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                        >> 6U)) == 
                                 (1U & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                        >> 6U))) ? 
                                ((0x3fU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                 - (0x3fU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                 : (((IData)(0x40U) 
                                     - (0x3fU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                    + (0x3fU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wready 
        = (1U & ((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = (QData)((IData)(((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[1U] 
                            << 0x10U) | (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[0U] 
                                         >> 0x10U))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x7effffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x20U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x7dffffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x21U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x7bffffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x22U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x77ffffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x23U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x6fffffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x24U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x5fffffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x25U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x3fffffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x26U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = (0x2a00000000ULL ^ vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o);
    __Vfunc_extract_d2h_rsp_intg__2__tl[0U] = vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[0U];
    __Vfunc_extract_d2h_rsp_intg__2__tl[1U] = vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[1U];
    __Vfunc_extract_d2h_rsp_intg__2__tl[2U] = vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[2U];
    __Vfunc_extract_d2h_rsp_intg__2__payload = ((0x38U 
                                                 & ((__Vfunc_extract_d2h_rsp_intg__2__tl[2U] 
                                                     << 5U) 
                                                    | (0x18U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__2__tl[1U] 
                                                          >> 0x1bU)))) 
                                                | ((6U 
                                                    & (__Vfunc_extract_d2h_rsp_intg__2__tl[1U] 
                                                       >> 0x18U)) 
                                                   | (1U 
                                                      & (__Vfunc_extract_d2h_rsp_intg__2__tl[0U] 
                                                         >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__2__Vfuncout = __Vfunc_extract_d2h_rsp_intg__2__payload;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__2__Vfuncout;
    vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
        = (QData)((IData)(((vlSelfRef.top_uart_tb__DOT__tl_i_raw[1U] 
                            << 0xaU) | (vlSelfRef.top_uart_tb__DOT__tl_i_raw[0U] 
                                        >> 0x16U))));
    vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
        = ((0x7effffffffULL & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o))))) 
              << 0x20U));
    vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
        = ((0x7dffffffffULL & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o))))) 
              << 0x21U));
    vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
        = ((0x7bffffffffULL & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o))))) 
              << 0x22U));
    vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
        = ((0x77ffffffffULL & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o))))) 
              << 0x23U));
    vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
        = ((0x6fffffffffULL & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o))))) 
              << 0x24U));
    vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
        = ((0x5fffffffffULL & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o))))) 
              << 0x25U));
    vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
        = ((0x3fffffffffULL & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o))))) 
              << 0x26U));
    vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
        = (0x2a00000000ULL ^ vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o);
    __Vfunc_extract_h2d_cmd_intg__0__tl[0U] = vlSelfRef.top_uart_tb__DOT__tl_i_raw[0U];
    __Vfunc_extract_h2d_cmd_intg__0__tl[1U] = vlSelfRef.top_uart_tb__DOT__tl_i_raw[1U];
    __Vfunc_extract_h2d_cmd_intg__0__tl[2U] = vlSelfRef.top_uart_tb__DOT__tl_i_raw[2U];
    __Vfunc_extract_h2d_cmd_intg__0__tl[3U] = vlSelfRef.top_uart_tb__DOT__tl_i_raw[3U];
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__0__payload 
        = ((0x78000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__0__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__0__tl[2U] 
                                 << 6U) | (__Vfunc_extract_h2d_cmd_intg__0__tl[1U] 
                                           >> 0x1aU)))) 
               << 7U) | (QData)((IData)(((0x70U & (
                                                   __Vfunc_extract_h2d_cmd_intg__0__tl[3U] 
                                                   >> 3U)) 
                                         | (0xfU & 
                                            (__Vfunc_extract_h2d_cmd_intg__0__tl[1U] 
                                             >> 0x16U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__0__payload 
        = ((0x7fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__0__payload) 
           | ((QData)((IData)((0xfU & (__Vfunc_extract_h2d_cmd_intg__0__tl[0U] 
                                       >> 0xfU)))) 
              << 0x27U));
    __Vfunc_extract_h2d_cmd_intg__0__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__0__payload;
    vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT__cmd 
        = __Vfunc_extract_h2d_cmd_intg__0__Vfuncout;
    if (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q) {
        vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
            = vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q;
        vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tx_d 
            = vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tx_q;
        if ((1U & (~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_rready)))) {
            if (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                 & (0U != (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
                vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tx_d 
                    = (1U & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_q));
            }
        }
        vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_d 
            = vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_q;
        if (vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_rready) {
            vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                    ? 0xbU : 0xaU);
            vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_d 
                = (0x400U | ((0x200U & (((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q)) 
                                         | (((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                             & VL_REDXOR_8(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage_rdata)) 
                                            ^ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q))) 
                                        << 9U)) | (
                                                   ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                                     ? 0U
                                                     : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage_rdata)) 
                                                   << 1U)));
        } else if (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                    & (0U != (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
            vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                = (0xfU & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q) 
                           - (IData)(1U)));
            vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_d 
                = (0x400U | (0x3ffU & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_q) 
                                       >> 1U)));
        }
    } else {
        vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d = 0U;
        vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tx_d = 1U;
        vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_d = 0x7ffU;
    }
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_rready)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__wdata_qe) 
           & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_wready));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__status 
        = ((0U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_depth)) 
           | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_watermark_thresh 
        = ((4U <= (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q))
            ? 0x10U : (0x3fU & ((IData)(1U) << (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_tx_watermark 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_depth) 
           < (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_watermark_thresh));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_timeout_count_d 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q)
            ? ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_timeout)
                ? 0U : (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth) 
                         != (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth_prev_q))
                         ? 0U : ((0U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth))
                                  ? 0U : (0xffffffU 
                                          & (vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_timeout_count_q 
                                             + (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q))))))
            : 0U);
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_watermark_thresh 
        = ((6U < (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q))
            ? 0x7fU : ((6U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q))
                        ? 0x3eU : (0x7fU & ((IData)(1U) 
                                            << (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q)))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_watermark 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth) 
           >= (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_watermark_thresh));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wvalid) 
           & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wready));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = (QData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xfdffffffffffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x103fff800007fffULL 
                                                  & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x39U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xfbffffffffffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x17c1ff801ff801fULL 
                                                  & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3aU));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xf7ffffffffffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1bde1f87e0781e1ULL 
                                                  & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3bU));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xefffffffffffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1deee3b8e388e22ULL 
                                                  & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3cU));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xdfffffffffffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1ef76cdb2c93244ULL 
                                                  & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3dU));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xbfffffffffffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1f7bb56d5525488ULL 
                                                  & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3eU));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0x7fffffffffffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1fbdda769a46910ULL 
                                                  & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3fU));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = (0x5400000000000000ULL ^ vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o);
    vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o 
        = vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT__cmd;
    vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0xfdffffffffffffffULL & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x103fff800007fffULL 
                                                  & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x39U));
    vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0xfbffffffffffffffULL & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x17c1ff801ff801fULL 
                                                  & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x3aU));
    vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0xf7ffffffffffffffULL & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1bde1f87e0781e1ULL 
                                                  & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x3bU));
    vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0xefffffffffffffffULL & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1deee3b8e388e22ULL 
                                                  & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x3cU));
    vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0xdfffffffffffffffULL & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1ef76cdb2c93244ULL 
                                                  & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x3dU));
    vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0xbfffffffffffffffULL & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1f7bb56d5525488ULL 
                                                  & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x3eU));
    vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0x7fffffffffffffffULL & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1fbdda769a46910ULL 
                                                  & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x3fU));
    vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o 
        = (0x5400000000000000ULL ^ vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o);
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x1fU == (0x1fU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x1fU == (0x1fU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__status 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_tx_watermark) 
           | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__status 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_watermark) 
           | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x3fU == (0x3fU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.top_uart_tb__DOT__tl_o[0U] = vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[0U];
    vlSelfRef.top_uart_tb__DOT__tl_o[1U] = vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[1U];
    vlSelfRef.top_uart_tb__DOT__tl_o[2U] = vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[2U];
    vlSelfRef.top_uart_tb__DOT__tl_o[0U] = ((0xffff0003U 
                                             & vlSelfRef.top_uart_tb__DOT__tl_o[0U]) 
                                            | (0xfffffffcU 
                                               & ((0xfe00U 
                                                   & ((IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
                                                               >> 0x39U)) 
                                                      << 9U)) 
                                                  | (0x1fcU 
                                                     & ((IData)(
                                                                (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
                                                                 >> 0x20U)) 
                                                        << 2U)))));
    vlSelfRef.top_uart_tb__DOT__tl_i[0U] = vlSelfRef.top_uart_tb__DOT__tl_i_raw[0U];
    vlSelfRef.top_uart_tb__DOT__tl_i[1U] = vlSelfRef.top_uart_tb__DOT__tl_i_raw[1U];
    vlSelfRef.top_uart_tb__DOT__tl_i[2U] = vlSelfRef.top_uart_tb__DOT__tl_i_raw[2U];
    vlSelfRef.top_uart_tb__DOT__tl_i[3U] = vlSelfRef.top_uart_tb__DOT__tl_i_raw[3U];
    vlSelfRef.top_uart_tb__DOT__tl_i[0U] = ((0x3fffffU 
                                             & vlSelfRef.top_uart_tb__DOT__tl_i[0U]) 
                                            | (0xffc00000U 
                                               & vlSelfRef.top_uart_tb__DOT__tl_i_raw[0U]));
    vlSelfRef.top_uart_tb__DOT__tl_i[1U] = ((0xffc00000U 
                                             & vlSelfRef.top_uart_tb__DOT__tl_i[1U]) 
                                            | (0x3fffffU 
                                               & vlSelfRef.top_uart_tb__DOT__tl_i_raw[1U]));
    vlSelfRef.top_uart_tb__DOT__tl_i[0U] = ((0xffff8001U 
                                             & vlSelfRef.top_uart_tb__DOT__tl_i[0U]) 
                                            | (0xfffffffeU 
                                               & ((0x7f00U 
                                                   & ((IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o 
                                                               >> 0x39U)) 
                                                      << 8U)) 
                                                  | (0xfeU 
                                                     & ((IData)(
                                                                (vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
                                                                 >> 0x20U)) 
                                                        << 1U)))));
    vlSelfRef.tl_o_a_ready = (1U & vlSelfRef.top_uart_tb__DOT__tl_o[0U]);
    vlSelfRef.tl_o_d_valid = (1U & (vlSelfRef.top_uart_tb__DOT__tl_o[2U] 
                                    >> 1U));
    vlSelfRef.tl_o_d_opcode = (7U & ((vlSelfRef.top_uart_tb__DOT__tl_o[2U] 
                                      << 2U) | (vlSelfRef.top_uart_tb__DOT__tl_o[1U] 
                                                >> 0x1eU)));
    vlSelfRef.tl_o_d_data = ((vlSelfRef.top_uart_tb__DOT__tl_o[1U] 
                              << 0x10U) | (vlSelfRef.top_uart_tb__DOT__tl_o[0U] 
                                           >> 0x10U));
    vlSelfRef.tl_o_d_source = (0xffU & (vlSelfRef.top_uart_tb__DOT__tl_o[1U] 
                                        >> 0x11U));
    vlSelfRef.tl_o_d_error = (1U & (vlSelfRef.top_uart_tb__DOT__tl_o[0U] 
                                    >> 1U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
        = (((QData)((IData)((0x7fU & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                      >> 1U)))) << 0x20U) 
           | (QData)((IData)(((vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                               << 0xaU) | (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                           >> 0x16U)))));
    __Vfunc_extract_h2d_cmd_intg__1__tl[0U] = vlSelfRef.top_uart_tb__DOT__tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__1__tl[1U] = vlSelfRef.top_uart_tb__DOT__tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__1__tl[2U] = vlSelfRef.top_uart_tb__DOT__tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__1__tl[3U] = vlSelfRef.top_uart_tb__DOT__tl_i[3U];
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__1__payload 
        = ((0x78000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__1__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__1__tl[2U] 
                                 << 6U) | (__Vfunc_extract_h2d_cmd_intg__1__tl[1U] 
                                           >> 0x1aU)))) 
               << 7U) | (QData)((IData)(((0x70U & (
                                                   __Vfunc_extract_h2d_cmd_intg__1__tl[3U] 
                                                   >> 3U)) 
                                         | (0xfU & 
                                            (__Vfunc_extract_h2d_cmd_intg__1__tl[1U] 
                                             >> 0x16U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__1__payload 
        = ((0x7fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__1__payload) 
           | ((QData)((IData)((0xfU & (__Vfunc_extract_h2d_cmd_intg__1__tl[0U] 
                                       >> 0xfU)))) 
              << 0x27U));
    __Vfunc_extract_h2d_cmd_intg__1__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__1__payload;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__cmd 
        = __Vfunc_extract_h2d_cmd_intg__1__Vfuncout;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit 
        = ((0x1ff8U & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit)) 
           | (((8U == (0x3cU & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                >> 0x1aU))) << 2U) 
              | (((4U == (0x3cU & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                   >> 0x1aU))) << 1U) 
                 | (0U == (0x3cU & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                    >> 0x1aU))))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit 
        = ((0x1fc7U & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit)) 
           | (((0x14U == (0x3cU & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                   >> 0x1aU))) << 5U) 
              | (((0x10U == (0x3cU & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                      >> 0x1aU))) << 4U) 
                 | ((0xcU == (0x3cU & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                       >> 0x1aU))) 
                    << 3U))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit 
        = ((0x1e3fU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit)) 
           | (((0x20U == (0x3cU & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                   >> 0x1aU))) << 8U) 
              | (((0x1cU == (0x3cU & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                      >> 0x1aU))) << 7U) 
                 | ((0x18U == (0x3cU & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                        >> 0x1aU))) 
                    << 6U))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit 
        = ((0x11ffU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit)) 
           | (((0x2cU == (0x3cU & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                   >> 0x1aU))) << 0xbU) 
              | (((0x28U == (0x3cU & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                      >> 0x1aU))) << 0xaU) 
                 | ((0x24U == (0x3cU & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                        >> 0x1aU))) 
                    << 9U))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit 
        = ((0xfffU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit)) 
           | ((0x30U == (0x3cU & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                  >> 0x1aU))) << 0xcU));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read 
        = vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write 
        = vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 0U;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
    if ((0x400U & vlSelfRef.top_uart_tb__DOT__tl_i[3U])) {
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
            = ((0U == (3U & (vlSelfRef.top_uart_tb__DOT__tl_i[3U] 
                             >> 2U))) || (1U & ((1U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.top_uart_tb__DOT__tl_i[3U] 
                                                     >> 2U)))
                                                 ? 
                                                (~ 
                                                 (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                  >> 0x1aU))
                                                 : 
                                                ((2U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.top_uart_tb__DOT__tl_i[3U] 
                                                      >> 2U))) 
                                                 && (1U 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (3U 
                                                                    & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                                       >> 0x1aU))))))))));
        if ((0U == (3U & (vlSelfRef.top_uart_tb__DOT__tl_i[3U] 
                          >> 2U)))) {
            vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                = (1U & (~ (IData)((0U != (0xfU & (
                                                   ((vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                     << 0xaU) 
                                                    | (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                       >> 0x16U)) 
                                                   & (~ 
                                                      ((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                           >> 0x1aU))))))))));
            vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                = (0U != (0xfU & (((vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                    << 0xaU) | (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                >> 0x16U)) 
                                  & ((IData)(1U) << 
                                     (3U & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                            >> 0x1aU))))));
        } else if ((1U == (3U & (vlSelfRef.top_uart_tb__DOT__tl_i[3U] 
                                 >> 2U)))) {
            if ((0x8000000U & vlSelfRef.top_uart_tb__DOT__tl_i[1U])) {
                vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (3U & 
                                               (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                >> 0x16U))))));
                vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                    >> 0x18U)));
            } else {
                vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xcU 
                                               & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                  >> 0x16U))))));
                vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                    >> 0x16U)));
            }
        } else {
            vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                = (1U & (2U == (3U & (vlSelfRef.top_uart_tb__DOT__tl_i[3U] 
                                      >> 2U))));
            vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                = ((2U == (3U & (vlSelfRef.top_uart_tb__DOT__tl_i[3U] 
                                 >> 2U))) && (0xfU 
                                              == (0xfU 
                                                  & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                     >> 0x16U))));
        }
    }
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__instr_error 
        = ([&]() {
            vlSelfRef.__Vfunc_mubi4_test_true_strict__3__val 
                = (0xfU & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                           >> 0xfU));
            vlSelfRef.__Vfunc_mubi4_test_true_strict__3__Vfuncout 
                = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__3__val));
        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__3__Vfuncout));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__5__val 
                    = (0xfU & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                               >> 0xfU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__5__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__5__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__5__Vfuncout)) 
           & ((0U == (7U & (vlSelfRef.top_uart_tb__DOT__tl_i[3U] 
                            >> 7U))) | (1U == (7U & 
                                               (vlSelfRef.top_uart_tb__DOT__tl_i[3U] 
                                                >> 7U)))));
    __Vfunc_mubi4_test_invalid__6__val = (0xfU & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                                  >> 0xfU));
    __Vfunc_mubi4_test_invalid__6__Vfuncout = (1U & 
                                               (~ (
                                                   (6U 
                                                    == (IData)(__Vfunc_mubi4_test_invalid__6__val)) 
                                                   | (9U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__6__val)))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err 
        = __Vfunc_mubi4_test_invalid__6__Vfuncout;
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = (IData)(((vlSelfRef.top_uart_tb__DOT__tl_i[3U] 
                    >> 0xaU) & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[0U]));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x12606bd25ULL & (0x2a00000000ULL 
                                                   ^ vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i)))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x2deba8050ULL & 
                                  (0x2a00000000ULL 
                                   ^ vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i))) 
                    << 1U)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x4413d89aaULL & 
                                  (0x2a00000000ULL 
                                   ^ vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i))) 
                    << 2U)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x831234ed1ULL & 
                                  (0x2a00000000ULL 
                                   ^ vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i))) 
                    << 3U)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x10c2c1323bULL 
                                     & (0x2a00000000ULL 
                                        ^ vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i))) 
                       << 4U)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x202dcc624cULL 
                                     & (0x2a00000000ULL 
                                        ^ vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i))) 
                       << 5U)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x4098505586ULL 
                                     & (0x2a00000000ULL 
                                        ^ vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i))) 
                       << 6U)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffffcU & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((2U & (((0x54U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                      ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                 >> 1U))) << 1U)) | 
              (1U & ((0x19U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                     ^ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i)))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffff3U & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((8U & (((0x34U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                      ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                 >> 3U))) << 3U)) | 
              (4U & (((0x61U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                      ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                 >> 2U))) << 2U))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffffcfU & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x20U & (((0x15U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                    >> 5U))) << 5U)) 
              | (0x10U & (((0x1aU == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                      >> 4U))) << 4U))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffff3fU & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x80U & (((0x4cU == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                    >> 7U))) << 7U)) 
              | (0x40U & (((0x2aU == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                      >> 6U))) << 6U))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffcffU & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x200U & (((0x38U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                     >> 9U))) << 9U)) 
              | (0x100U & (((0x45U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                       >> 8U))) << 8U))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffff3ffU & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x800U & (((0xdU == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                     >> 0xbU))) << 0xbU)) 
              | (0x400U & (((0x49U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                       >> 0xaU))) << 0xaU))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffcfffU & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x2000U & (((0x31U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                      >> 0xdU))) << 0xdU)) 
              | (0x1000U & (((0x51U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                        >> 0xcU))) 
                            << 0xcU))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffff3fffU & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x8000U & (((7U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                      >> 0xfU))) << 0xfU)) 
              | (0x4000U & (((0x68U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                        >> 0xeU))) 
                            << 0xeU))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffcffffU & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x20000U & (((0xbU == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                       >> 0x11U))) 
                           << 0x11U)) | (0x10000U & 
                                         (((0x1cU == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                           ^ (IData)(
                                                     (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                      >> 0x10U))) 
                                          << 0x10U))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfff3ffffU & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x80000U & (((0x26U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                       >> 0x13U))) 
                           << 0x13U)) | (0x40000U & 
                                         (((0x25U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                           ^ (IData)(
                                                     (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                      >> 0x12U))) 
                                          << 0x12U))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffcfffffU & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x200000U & (((0xeU == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                        >> 0x15U))) 
                            << 0x15U)) | (0x100000U 
                                          & (((0x46U 
                                               == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (IData)(
                                                        (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                         >> 0x14U))) 
                                             << 0x14U))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xff3fffffU & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x800000U & (((0x32U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                        >> 0x17U))) 
                            << 0x17U)) | (0x400000U 
                                          & (((0x70U 
                                               == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (IData)(
                                                        (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                         >> 0x16U))) 
                                             << 0x16U))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfcffffffU & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x2000000U & (((0x13U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                         >> 0x19U))) 
                             << 0x19U)) | (0x1000000U 
                                           & (((0x2cU 
                                                == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (IData)(
                                                         (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                          >> 0x18U))) 
                                              << 0x18U))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xf3ffffffU & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x8000000U & (((0x62U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                         >> 0x1bU))) 
                             << 0x1bU)) | (0x4000000U 
                                           & (((0x23U 
                                                == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (IData)(
                                                         (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                          >> 0x1aU))) 
                                              << 0x1aU))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xcfffffffU & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x20000000U & (((0x29U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                               ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                          >> 0x1dU))) 
                              << 0x1dU)) | (0x10000000U 
                                            & (((0x4aU 
                                                 == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                ^ (IData)(
                                                          (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                           >> 0x1cU))) 
                                               << 0x1cU))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0x3fffffffU & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((((0x52U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                           >> 0x1fU))) << 0x1fU) | 
              (0x40000000U & (((0x16U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                               ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                          >> 0x1eU))) 
                              << 0x1eU))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err 
        = ((2U & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err)) 
           | (1U & VL_REDXOR_8(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err 
        = ((1U & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err)) 
           | (((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err)) 
               & (0U != (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
              << 1U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
        = (((QData)((IData)((0x7fU & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                      >> 8U)))) << 0x39U) 
           | vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__cmd);
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0U != (0xffU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read))))) {
        if ((1U & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                         << 7U) | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                   << 6U)) | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                                               << 5U) 
                                              | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                                                 << 4U))) 
                      | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                           << 3U) | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q) 
                                     << 2U)) | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q)))));
            vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffeffU & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                      << 8U));
        } else if ((2U & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                         << 7U) | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                                   << 6U)) | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                                               << 5U) 
                                              | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                                                 << 4U))) 
                      | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                           << 3U) | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_done__q) 
                                     << 2U)) | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q)))));
            vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffeffU & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                      << 8U));
        } else if ((4U & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = (0xfffffe00U & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((8U & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffeU & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((0x10U & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff8U & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                       << 2U) | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                  << 1U) | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q))));
            vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffc0fU & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                       << 8U) | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                   << 7U) | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                             << 6U)) 
                                 | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                     << 5U) | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                               << 4U)))));
            vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffU & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                      << 0x10U));
        } else if ((0x20U & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff0U & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                         & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle)) 
                        << 3U) | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                  << 2U)) | ((2U & 
                                              ((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wready)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_wready))))));
            vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffcfU & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                       << 5U) | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
                                 << 4U)));
        } else {
            vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((0x40U & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read))
                       ? ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                           ? 0U : (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_SHIFTL_III(9,9,32, 
                                                               (0x3fU 
                                                                & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                              ? 0U : 
                                             (vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                              (((IData)(7U) 
                                                + (0x1ffU 
                                                   & VL_SHIFTL_III(9,9,32, 
                                                                   (0x3fU 
                                                                    & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, 
                                                                   (0x3fU 
                                                                    & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                                            | (vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                               (0xfU 
                                                & (VL_SHIFTL_III(9,9,32, 
                                                                 (0x3fU 
                                                                  & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, 
                                                                   (0x3fU 
                                                                    & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))))
                       : 0U));
        }
    } else if ((0x100U & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xffffff00U & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
               | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                   << 5U) | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q) 
                             << 2U)));
    } else if ((0x200U & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xffffff00U & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
               | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_depth));
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xff00ffffU & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
               | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth) 
                  << 0x10U));
    } else if ((0x400U & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xfffffffcU & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
               | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                   << 1U) | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q)));
    } else if ((0x800U & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xffff0000U & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
               | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_val_q));
    } else if ((0x1000U & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xff000000U & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
               | vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q);
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
            = ((0x7fffffffU & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
               | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                  << 0x1fU));
    } else {
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next = 0xffffffffU;
    }
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (0x200U == (0x380U & vlSelfRef.top_uart_tb__DOT__tl_i[3U])));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & ((0U == (7U & (vlSelfRef.top_uart_tb__DOT__tl_i[3U] 
                            >> 7U))) | (1U == (7U & 
                                               (vlSelfRef.top_uart_tb__DOT__tl_i[3U] 
                                                >> 7U)))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x303fff800007fffULL 
                                 & (0x5400000000000000ULL 
                                    ^ vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i)))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x57c1ff801ff801fULL 
                                  & (0x5400000000000000ULL 
                                     ^ vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                    << 1U)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x9bde1f87e0781e1ULL 
                                  & (0x5400000000000000ULL 
                                     ^ vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                    << 2U)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x11deee3b8e388e22ULL 
                                  & (0x5400000000000000ULL 
                                     ^ vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                    << 3U)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x21ef76cdb2c93244ULL 
                                     & (0x5400000000000000ULL 
                                        ^ vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                       << 4U)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x41f7bb56d5525488ULL 
                                     & (0x5400000000000000ULL 
                                        ^ vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                       << 5U)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x81fbdda769a46910ULL 
                                     & (0x5400000000000000ULL 
                                        ^ vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                       << 6U)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffffffcULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | (IData)((IData)(((2U & (((0xbU == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                      ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                 >> 1U))) 
                                     << 1U)) | (1U 
                                                & ((7U 
                                                    == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                   ^ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i)))))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffffff3ULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x23U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 3U))) 
                                      << 1U)) | (1U 
                                                 & ((0x13U 
                                                     == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 2U))))))) 
              << 2U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffffffcfULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xdU == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 5U))) 
                                      << 1U)) | (1U 
                                                 & ((0x43U 
                                                     == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 4U))))))) 
              << 4U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffffff3fULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x25U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 7U))) 
                                      << 1U)) | (1U 
                                                 & ((0x15U 
                                                     == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 6U))))))) 
              << 6U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffffcffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x19U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 9U))) 
                                      << 1U)) | (1U 
                                                 & ((0x45U 
                                                     == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 8U))))))) 
              << 8U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffff3ffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x49U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0xbU))) 
                                      << 1U)) | (1U 
                                                 & ((0x29U 
                                                     == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0xaU))))))) 
              << 0xaU));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffffcfffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x51U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0xdU))) 
                                      << 1U)) | (1U 
                                                 & ((0x31U 
                                                     == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0xcU))))))) 
              << 0xcU));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffff3fffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xeU == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0xfU))) 
                                      << 1U)) | (1U 
                                                 & ((0x61U 
                                                     == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0xeU))))))) 
              << 0xeU));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffcffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x26U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x11U))) 
                                      << 1U)) | (1U 
                                                 & ((0x16U 
                                                     == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x10U))))))) 
              << 0x10U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffff3ffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x1aU == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x13U))) 
                                      << 1U)) | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x12U))))))) 
              << 0x12U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffcfffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x4aU == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x15U))) 
                                      << 1U)) | (1U 
                                                 & ((0x2aU 
                                                     == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x14U))))))) 
              << 0x14U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffff3fffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x52U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x17U))) 
                                      << 1U)) | (1U 
                                                 & ((0x32U 
                                                     == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x16U))))))) 
              << 0x16U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffcffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x1cU == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x19U))) 
                                      << 1U)) | (1U 
                                                 & ((0x62U 
                                                     == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x18U))))))) 
              << 0x18U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffff3ffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x4cU == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x1bU))) 
                                      << 1U)) | (1U 
                                                 & ((0x2cU 
                                                     == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x1aU))))))) 
              << 0x1aU));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffcfffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x54U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x1dU))) 
                                      << 1U)) | (1U 
                                                 & ((0x34U 
                                                     == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x1cU))))))) 
              << 0x1cU));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffff3fffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x38U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x1fU))) 
                                      << 1U)) | (1U 
                                                 & ((0x64U 
                                                     == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x1eU))))))) 
              << 0x1eU));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffcffffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x68U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x21U))) 
                                      << 1U)) | (1U 
                                                 & ((0x58U 
                                                     == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x20U))))))) 
              << 0x20U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffff3ffffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x1fU == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x23U))) 
                                      << 1U)) | (1U 
                                                 & ((0x70U 
                                                     == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x22U))))))) 
              << 0x22U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffcfffffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x4fU == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x25U))) 
                                      << 1U)) | (1U 
                                                 & ((0x2fU 
                                                     == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x24U))))))) 
              << 0x24U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffff3fffffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x57U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x27U))) 
                                      << 1U)) | (1U 
                                                 & ((0x37U 
                                                     == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x26U))))))) 
              << 0x26U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffcffffffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x3bU == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x29U))) 
                                      << 1U)) | (1U 
                                                 & ((0x67U 
                                                     == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x28U))))))) 
              << 0x28U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fff3ffffffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x6bU == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x2bU))) 
                                      << 1U)) | (1U 
                                                 & ((0x5bU 
                                                     == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x2aU))))))) 
              << 0x2aU));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffcfffffffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x3dU == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x2dU))) 
                                      << 1U)) | (1U 
                                                 & ((0x73U 
                                                     == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x2cU))))))) 
              << 0x2cU));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ff3fffffffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x6dU == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x2fU))) 
                                      << 1U)) | (1U 
                                                 & ((0x5dU 
                                                     == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x2eU))))))) 
              << 0x2eU));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fcffffffffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x79U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x31U))) 
                                      << 1U)) | (1U 
                                                 & ((0x75U 
                                                     == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x30U))))))) 
              << 0x30U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1f3ffffffffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x5eU == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x33U))) 
                                      << 1U)) | (1U 
                                                 & ((0x3eU 
                                                     == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x32U))))))) 
              << 0x32U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1cfffffffffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x76U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x35U))) 
                                      << 1U)) | (1U 
                                                 & ((0x6eU 
                                                     == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x34U))))))) 
              << 0x34U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x13fffffffffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x7cU == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x37U))) 
                                      << 1U)) | (1U 
                                                 & ((0x7aU 
                                                     == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x36U))))))) 
              << 0x36U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0xffffffffffffffULL & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)((1U & ((0x7fU == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                     ^ (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                >> 0x38U)))))) 
              << 0x38U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__err 
        = ((2U & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__err)) 
           | (1U & VL_REDXOR_8(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__err 
        = ((1U & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__err)) 
           | (((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__err)) 
               & (0U != (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o))) 
              << 1U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                  >> 0x1aU)))) | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__instr_error) 
                                                  | ((~ 
                                                      (((0U 
                                                         == 
                                                         (7U 
                                                          & (vlSelfRef.top_uart_tb__DOT__tl_i[3U] 
                                                             >> 7U))) 
                                                        | ((1U 
                                                            == 
                                                            (7U 
                                                             & (vlSelfRef.top_uart_tb__DOT__tl_i[3U] 
                                                                >> 7U))) 
                                                           | (4U 
                                                              == 
                                                              (7U 
                                                               & (vlSelfRef.top_uart_tb__DOT__tl_i[3U] 
                                                                  >> 7U))))) 
                                                       & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                                          & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk) 
                                                             & ((4U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelfRef.top_uart_tb__DOT__tl_i[3U] 
                                                                     >> 7U))) 
                                                                | ((1U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelfRef.top_uart_tb__DOT__tl_i[3U] 
                                                                        >> 7U))) 
                                                                   | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))))) 
                                                     | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err) 
                                                        | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err))))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intg_err 
        = ((vlSelfRef.top_uart_tb__DOT__tl_i[3U] >> 0xaU) 
           & (0U != ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__err) 
                     | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_re 
        = ((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we 
        = ((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__wr_err 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we) 
           & (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
               & (0U != (3U & (~ ((vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                   << 0xaU) | (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                               >> 0x16U)))))) 
              | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                   >> 1U) & (0U != (3U & (~ ((vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                              << 0xaU) 
                                             | (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                >> 0x16U)))))) 
                 | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                      >> 2U) & (0U != (3U & (~ ((vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                 << 0xaU) 
                                                | (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                   >> 0x16U)))))) 
                    | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                         >> 3U) & (0U != (1U & (~ (
                                                   (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                    << 0xaU) 
                                                   | (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                      >> 0x16U)))))) 
                       | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                            >> 4U) & (0U != (0xfU & 
                                             (~ ((vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                  << 0xaU) 
                                                 | (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                    >> 0x16U)))))) 
                          | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                               >> 5U) & (0U != (1U 
                                                & (~ 
                                                   ((vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                     << 0xaU) 
                                                    | (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                       >> 0x16U)))))) 
                             | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                                  >> 6U) & (0U != (1U 
                                                   & (~ 
                                                      ((vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                        << 0xaU) 
                                                       | (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                          >> 0x16U)))))) 
                                | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                                     >> 7U) & (0U != 
                                               (1U 
                                                & (~ 
                                                   ((vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                     << 0xaU) 
                                                    | (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                       >> 0x16U)))))) 
                                   | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                                        >> 8U) & (0U 
                                                  != 
                                                  (1U 
                                                   & (~ 
                                                      ((vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                        << 0xaU) 
                                                       | (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                          >> 0x16U)))))) 
                                      | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                                           >> 9U) & 
                                          (0U != (7U 
                                                  & (~ 
                                                     ((vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                       << 0xaU) 
                                                      | (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                         >> 0x16U)))))) 
                                         | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                                              >> 0xaU) 
                                             & (0U 
                                                != 
                                                (1U 
                                                 & (~ 
                                                    ((vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                      << 0xaU) 
                                                     | (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                        >> 0x16U)))))) 
                                            | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                                                 >> 0xbU) 
                                                & (0U 
                                                   != 
                                                   (3U 
                                                    & (~ 
                                                       ((vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                         << 0xaU) 
                                                        | (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                           >> 0x16U)))))) 
                                               | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                                                   >> 0xcU) 
                                                  & (0U 
                                                     != 
                                                     (0xfU 
                                                      & (~ 
                                                         ((vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                           << 0xaU) 
                                                          | (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                             >> 0x16U)))))))))))))))))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__addrmiss 
        = ((~ (IData)((0U != (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit)))) 
           & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_re) 
              | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_error 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__addrmiss) 
           | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__wr_err) 
              | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intg_err)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_h30875415_2_16 
        = ((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_error)) 
           & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_re));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_h30875415_2_15 
        = ((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_error)) 
           & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__status_re 
        = (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read) 
            >> 5U) & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_h30875415_2_16));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__rdata_re 
        = (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read) 
            >> 6U) & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_h30875415_2_16));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_wdata__DOT__wr_en 
        = (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
            >> 7U) & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_h30875415_2_15));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_en 
        = (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
            >> 0xaU) & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_h30875415_2_15));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_en 
        = (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
            >> 0xcU) & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_h30875415_2_15));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_en 
        = (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
            >> 8U) & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_h30875415_2_15));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en 
        = (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
            >> 1U) & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_h30875415_2_15));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_en 
        = (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
            >> 4U) & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_h30875415_2_15));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_state_we 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
           & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_h30875415_2_15));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__alert_test_we 
        = (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
            >> 3U) & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_h30875415_2_15));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_test_we 
        = (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
            >> 2U) & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_h30875415_2_15));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__rdata_re)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_wdata__DOT__wr_data 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_wdata__DOT__wr_en)
            ? (0xffU & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                        >> 0x16U)) : 0U);
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_data 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_en) 
           & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
              >> 0x16U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txval__DOT__wr_data 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_en) 
           & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
              >> 0x17U));
    if (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_en) {
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_val__DOT__wr_data 
            = (0xffffffU & ((vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                             << 0xaU) | (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                         >> 0x16U)));
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_data 
            = (1U & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                     >> 0x15U));
    } else {
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_val__DOT__wr_data = 0U;
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_data = 0U;
    }
    if (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_en) {
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxrst__DOT__wr_data 
            = (1U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                     >> 0x16U));
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_txrst__DOT__wr_data 
            = (1U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                     >> 0x17U));
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_data 
            = (7U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                     >> 0x18U));
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_txilvl__DOT__wr_data 
            = (7U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                     >> 0x1bU));
    } else {
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxrst__DOT__wr_data = 0U;
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_txrst__DOT__wr_data = 0U;
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_data = 0U;
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_txilvl__DOT__wr_data = 0U;
    }
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_tx_watermark__DOT__wr_data 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en) 
           & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
              >> 0x16U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_watermark__DOT__wr_data 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en) 
           & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
              >> 0x17U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_tx_done__DOT__wr_data 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en) 
           & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
              >> 0x18U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_overflow__DOT__wr_data 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en) 
           & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
              >> 0x19U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_frame_err__DOT__wr_data 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en) 
           & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
              >> 0x1aU));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_data 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en) 
           & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
              >> 0x1bU));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_timeout__DOT__wr_data 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en) 
           & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
              >> 0x1cU));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_parity_err__DOT__wr_data 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en) 
           & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
              >> 0x1dU));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_tx_empty__DOT__wr_data 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en) 
           & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
              >> 0x1eU));
    if (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_en) {
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_tx__DOT__wr_data 
            = (1U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                     >> 0x16U));
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_rx__DOT__wr_data 
            = (1U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                     >> 0x17U));
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_nf__DOT__wr_data 
            = (1U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                     >> 0x18U));
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_slpbk__DOT__wr_data 
            = (1U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                     >> 0x1aU));
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_data 
            = (1U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                     >> 0x1bU));
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_parity_en__DOT__wr_data 
            = (1U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                     >> 0x1cU));
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_parity_odd__DOT__wr_data 
            = (1U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                     >> 0x1dU));
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_rxblvl__DOT__wr_data 
            = (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
               >> 0x1eU);
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_nco__DOT__wr_data 
            = (0xffffU & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                          >> 6U));
    } else {
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_tx__DOT__wr_data = 0U;
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_rx__DOT__wr_data = 0U;
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_nf__DOT__wr_data = 0U;
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_slpbk__DOT__wr_data = 0U;
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_data = 0U;
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_parity_en__DOT__wr_data = 0U;
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_parity_odd__DOT__wr_data = 0U;
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_rxblvl__DOT__wr_data = 0U;
        vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_nco__DOT__wr_data = 0U;
    }
    vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger 
        = (((vlSelfRef.top_uart_tb__DOT__tl_i[0U] >> 0x16U) 
            & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__alert_test_we)) 
           | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__g_intr_event__DOT__new_event 
        = (((vlSelfRef.top_uart_tb__DOT__tl_i[0U] >> 0x1aU) 
            & (0x1ffU == (0x1ffU & (- (IData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_test_we)))))) 
           | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_frame_err));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__g_intr_event__DOT__new_event 
        = (((vlSelfRef.top_uart_tb__DOT__tl_i[0U] >> 0x1cU) 
            & (0x1ffU == (0x1ffU & (- (IData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_test_we)))))) 
           | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_timeout));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__g_intr_event__DOT__new_event 
        = (((vlSelfRef.top_uart_tb__DOT__tl_i[0U] >> 0x1dU) 
            & (0x1ffU == (0x1ffU & (- (IData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_test_we)))))) 
           | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_parity_err));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__g_intr_event__DOT__new_event 
        = (((vlSelfRef.top_uart_tb__DOT__tl_i[0U] >> 0x19U) 
            & (0x1ffU == (0x1ffU & (- (IData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_test_we)))))) 
           | ((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wready)) 
              & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wvalid)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_done__DOT__g_intr_event__DOT__new_event 
        = (((vlSelfRef.top_uart_tb__DOT__tl_i[0U] >> 0x18U) 
            & (0x1ffU == (0x1ffU & (- (IData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_test_we)))))) 
           | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
              & ((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle_q)) 
                 & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we_check 
        = ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_en) 
             << 0xcU) | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_en) 
                          << 0xaU) | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_en) 
                                       << 8U) | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_wdata__DOT__wr_en) 
                                                 << 7U)))) 
           | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_en) 
                << 4U) | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__alert_test_we) 
                          << 3U)) | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_test_we) 
                                      << 2U) | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_state_we)))));
    __Vtemp_37[0U] = (IData)((((QData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__status_re)) 
                               << 0x3fU) | (((QData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__status_re)) 
                                             << 0x3dU) 
                                            | (((QData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__status_re)) 
                                                << 0x3bU) 
                                               | (((QData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__status_re)) 
                                                   << 0x39U) 
                                                  | (((QData)((IData)(
                                                                      ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__rdata_re) 
                                                                         << 0x10U) 
                                                                        | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_wdata__q) 
                                                                           << 8U)) 
                                                                       | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__wdata_qe) 
                                                                            << 7U) 
                                                                           | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                                                                              << 4U)) 
                                                                          | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                              << 3U) 
                                                                             | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q)))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                           << 0x1fU) 
                                                                          | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                                             << 0x1eU)) 
                                                                         | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                             << 0x1dU) 
                                                                            | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
                                                                               << 0x1cU))) 
                                                                        | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                             << 0x1bU) 
                                                                            | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                                                                               << 0x1aU)) 
                                                                           | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q) 
                                                                               << 0x19U) 
                                                                              | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                                                                                << 0x18U) 
                                                                                | vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q))))))))))));
    __Vtemp_37[1U] = (IData)(((((QData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__status_re)) 
                                << 0x3fU) | (((QData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__status_re)) 
                                              << 0x3dU) 
                                             | (((QData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__status_re)) 
                                                 << 0x3bU) 
                                                | (((QData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__status_re)) 
                                                    << 0x39U) 
                                                   | (((QData)((IData)(
                                                                       ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__rdata_re) 
                                                                          << 0x10U) 
                                                                         | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_wdata__q) 
                                                                            << 8U)) 
                                                                        | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__wdata_qe) 
                                                                             << 7U) 
                                                                            | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                                                                               << 4U)) 
                                                                           | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                               << 3U) 
                                                                              | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q)))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        (((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                            << 0x1fU) 
                                                                           | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                                              << 0x1eU)) 
                                                                          | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                              << 0x1dU) 
                                                                             | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
                                                                                << 0x1cU))) 
                                                                         | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                              << 0x1bU) 
                                                                             | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                                                                                << 0x1aU)) 
                                                                            | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q) 
                                                                                << 0x19U) 
                                                                               | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                                                                                << 0x18U) 
                                                                                | vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q))))))))))) 
                              >> 0x20U));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__reg2hw[0U] 
        = __Vtemp_37[0U];
    vlSelfRef.top_uart_tb__DOT__dut__DOT__reg2hw[1U] 
        = __Vtemp_37[1U];
    vlSelfRef.top_uart_tb__DOT__dut__DOT__reg2hw[2U] 
        = ((0xffffffe0U & vlSelfRef.top_uart_tb__DOT__dut__DOT__reg2hw[2U]) 
           | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__status_re) 
               << 3U) | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__status_re) 
                         << 1U)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__reg2hw[2U] 
        = ((0x1fU & vlSelfRef.top_uart_tb__DOT__dut__DOT__reg2hw[2U]) 
           | (0xffffffe0U & (((0x80000000U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                              << 9U)) 
                              | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__alert_test_we) 
                                 << 0x1eU)) | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                                                << 0xeU) 
                                               | (((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                                                     << 0xcU) 
                                                    | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                                       << 0xbU)) 
                                                   | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                                       << 0xaU) 
                                                      | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                                         << 9U))) 
                                                  | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                                       << 8U) 
                                                      | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                                                         << 7U)) 
                                                     | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                                         << 6U) 
                                                        | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q) 
                                                           << 5U))))))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__reg2hw[3U] 
        = (((((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                << 0x1fU) | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                             << 0x1eU)) | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q) 
                                            << 0x1dU) 
                                           | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                                              << 0x1cU))) 
             | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q) 
                  << 0x1bU) | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                               << 0x1aU)) | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                                              << 0x19U) 
                                             | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                                                << 0x18U)))) 
            | (((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                  << 0x17U) | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                               << 0x16U)) | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                              << 0x15U) 
                                             | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_done__q) 
                                                << 0x14U))) 
               | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                    << 0x13U) | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q) 
                                 << 0x12U)) | (((2U 
                                                 & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                                    >> 0x1dU)) 
                                                | (0x1ffU 
                                                   == 
                                                   (0x1ffU 
                                                    & (- (IData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_test_we)))))) 
                                               << 0x10U)))) 
           | ((((((2U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                         >> 0x1cU)) | (0x1ffU == (0x1ffU 
                                                  & (- (IData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_test_we)))))) 
                 << 0xeU) | (((2U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                     >> 0x1bU)) | (0x1ffU 
                                                   == 
                                                   (0x1ffU 
                                                    & (- (IData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_test_we)))))) 
                             << 0xcU)) | ((((2U & (
                                                   vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                                   >> 0x1aU)) 
                                            | (0x1ffU 
                                               == (0x1ffU 
                                                   & (- (IData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_test_we)))))) 
                                           << 0xaU) 
                                          | (((2U & 
                                               (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                                >> 0x19U)) 
                                              | (0x1ffU 
                                                 == 
                                                 (0x1ffU 
                                                  & (- (IData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_test_we)))))) 
                                             << 8U))) 
              | (((((2U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                           >> 0x18U)) | (0x1ffU == 
                                         (0x1ffU & 
                                          (- (IData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_test_we)))))) 
                   << 6U) | (((2U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                     >> 0x17U)) | (0x1ffU 
                                                   == 
                                                   (0x1ffU 
                                                    & (- (IData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_test_we)))))) 
                             << 4U)) | ((((2U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                                 >> 0x16U)) 
                                          | (0x1ffU 
                                             == (0x1ffU 
                                                 & (- (IData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_test_we)))))) 
                                         << 2U) | (
                                                   (2U 
                                                    & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                                       >> 0x15U)) 
                                                   | (0x1ffU 
                                                      == 
                                                      (0x1ffU 
                                                       & (- (IData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_test_we))))))))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__reg2hw[4U] 
        = (0xfU & ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                     << 3U) | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                               << 2U)) | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                           << 1U) | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x3fU == (0x3fU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_en 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__g_intr_event__DOT__new_event) 
           | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_state_we));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data 
        = ((~ ((vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                >> 0x1aU) & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_state_we))) 
           & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__g_intr_event__DOT__new_event)
               ? ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__g_intr_event__DOT__new_event) 
                  | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q))
               : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_en 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__g_intr_event__DOT__new_event) 
           | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_state_we));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data 
        = ((~ ((vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                >> 0x1cU) & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_state_we))) 
           & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__g_intr_event__DOT__new_event)
               ? ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__g_intr_event__DOT__new_event) 
                  | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q))
               : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_en 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__g_intr_event__DOT__new_event) 
           | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_state_we));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data 
        = ((~ ((vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                >> 0x1dU) & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_state_we))) 
           & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__g_intr_event__DOT__new_event)
               ? ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__g_intr_event__DOT__new_event) 
                  | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q))
               : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_en 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__g_intr_event__DOT__new_event) 
           | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_state_we));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data 
        = ((~ ((vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                >> 0x19U) & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_state_we))) 
           & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__g_intr_event__DOT__new_event)
               ? ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__g_intr_event__DOT__new_event) 
                  | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q))
               : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_en 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_done__DOT__g_intr_event__DOT__new_event) 
           | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_state_we));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_data 
        = ((~ ((vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                >> 0x18U) & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_state_we))) 
           & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_done__DOT__g_intr_event__DOT__new_event)
               ? ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_done__DOT__g_intr_event__DOT__new_event) 
                  | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q))
               : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q)));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_break_err 
        = ((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__break_st_q)) 
           & ((0U == (3U & (vlSelfRef.top_uart_tb__DOT__dut__DOT__reg2hw[2U] 
                            >> 0xcU))) ? (2U <= (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_d))
               : ((1U == (3U & (vlSelfRef.top_uart_tb__DOT__dut__DOT__reg2hw[2U] 
                                >> 0xcU))) ? (4U <= (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_d))
                   : ((2U == (3U & (vlSelfRef.top_uart_tb__DOT__dut__DOT__reg2hw[2U] 
                                    >> 0xcU))) ? (8U 
                                                  <= (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_d))
                       : (0x10U <= (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_d))))));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__g_intr_event__DOT__new_event 
        = (((vlSelfRef.top_uart_tb__DOT__tl_i[0U] >> 0x1bU) 
            & (0x1ffU == (0x1ffU & (- (IData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_test_we)))))) 
           | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_break_err));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_en 
        = ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__g_intr_event__DOT__new_event) 
           | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_state_we));
    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data 
        = ((~ ((vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                >> 0x1bU) & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_state_we))) 
           & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__g_intr_event__DOT__new_event)
               ? ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__g_intr_event__DOT__new_event) 
                  | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q))
               : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q)));
}

VL_ATTR_COLD void Vtop_uart_tb___024root___eval_triggers__stl(Vtop_uart_tb___024root* vlSelf);

VL_ATTR_COLD bool Vtop_uart_tb___024root___eval_phase__stl(Vtop_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_uart_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop_uart_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_uart_tb___024root___dump_triggers__ico(Vtop_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___dump_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] top_uart_tb.dut.u_reg.u_prim_reg_we_check.u_prim_onehot_check.or_tree)\n");
    }
    if ((4ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 2 is active: @([hybrid] top_uart_tb.dut.u_reg.u_prim_reg_we_check.u_prim_onehot_check.and_tree)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_uart_tb___024root___dump_triggers__act(Vtop_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] top_uart_tb.dut.u_reg.u_prim_reg_we_check.u_prim_onehot_check.err_tree)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] top_uart_tb.dut.u_reg.u_prim_reg_we_check.u_prim_onehot_check.or_tree)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] top_uart_tb.dut.u_reg.u_prim_reg_we_check.u_prim_onehot_check.and_tree)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_uart_tb___024root___dump_triggers__nba(Vtop_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] top_uart_tb.dut.u_reg.u_prim_reg_we_check.u_prim_onehot_check.err_tree)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] top_uart_tb.dut.u_reg.u_prim_reg_we_check.u_prim_onehot_check.or_tree)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] top_uart_tb.dut.u_reg.u_prim_reg_we_check.u_prim_onehot_check.and_tree)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_uart_tb___024root____Vm_traceActivitySetAll(Vtop_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
}

VL_ATTR_COLD void Vtop_uart_tb___024root___ctor_var_reset(Vtop_uart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->tl_i_a_valid = VL_RAND_RESET_I(1);
    vlSelf->tl_i_a_opcode = VL_RAND_RESET_I(3);
    vlSelf->tl_i_a_size = VL_RAND_RESET_I(2);
    vlSelf->tl_i_a_mask = VL_RAND_RESET_I(4);
    vlSelf->tl_i_a_address = VL_RAND_RESET_I(32);
    vlSelf->tl_i_a_data = VL_RAND_RESET_I(32);
    vlSelf->tl_i_a_source = VL_RAND_RESET_I(8);
    vlSelf->tl_i_a_param = VL_RAND_RESET_I(3);
    vlSelf->tl_i_d_ready = VL_RAND_RESET_I(1);
    vlSelf->tl_o_a_ready = VL_RAND_RESET_I(1);
    vlSelf->tl_o_d_valid = VL_RAND_RESET_I(1);
    vlSelf->tl_o_d_opcode = VL_RAND_RESET_I(3);
    vlSelf->tl_o_d_data = VL_RAND_RESET_I(32);
    vlSelf->tl_o_d_source = VL_RAND_RESET_I(8);
    vlSelf->tl_o_d_error = VL_RAND_RESET_I(1);
    vlSelf->cio_tx_o = VL_RAND_RESET_I(1);
    vlSelf->cio_tx_en_o = VL_RAND_RESET_I(1);
    vlSelf->cio_rx_i = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(107, vlSelf->top_uart_tb__DOT__tl_i_raw);
    VL_RAND_RESET_W(107, vlSelf->top_uart_tb__DOT__tl_i);
    VL_RAND_RESET_W(66, vlSelf->top_uart_tb__DOT__tl_o);
    vlSelf->top_uart_tb__DOT__alert_rx_i = VL_RAND_RESET_I(4);
    vlSelf->top_uart_tb__DOT__intr_tx_watermark_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__intr_tx_empty_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__intr_rx_watermark_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__intr_tx_done_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__intr_rx_overflow_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__intr_rx_frame_err_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__intr_rx_break_err_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__intr_rx_timeout_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__intr_rx_parity_err_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__u_tl_intg__DOT__cmd = VL_RAND_RESET_Q(43);
    vlSelf->top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o = VL_RAND_RESET_Q(64);
    vlSelf->top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o = VL_RAND_RESET_Q(39);
    vlSelf->top_uart_tb__DOT__dut__DOT__lsio_trigger_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(132, vlSelf->top_uart_tb__DOT__dut__DOT__reg2hw);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_re = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_error = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__addrmiss = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__wr_err = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(66, vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__intg_err = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we_err = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we_check = VL_RAND_RESET_I(13);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__err_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_state_we = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_test_we = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__alert_test_we = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__status_re = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__rdata_re = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_done__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q = VL_RAND_RESET_I(2);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q = VL_RAND_RESET_I(16);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__wdata_qe = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_wdata__q = VL_RAND_RESET_I(8);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__fifo_ctrl_qe = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q = VL_RAND_RESET_I(3);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q = VL_RAND_RESET_I(3);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q = VL_RAND_RESET_I(24);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit = VL_RAND_RESET_I(13);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read = VL_RAND_RESET_I(13);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write = VL_RAND_RESET_I(13);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_h30875415_2_15 = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_h30875415_2_16 = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__err = VL_RAND_RESET_I(2);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__cmd = VL_RAND_RESET_Q(43);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i = VL_RAND_RESET_Q(64);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i = VL_RAND_RESET_Q(39);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o = VL_RAND_RESET_Q(57);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o = VL_RAND_RESET_I(7);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err = VL_RAND_RESET_I(2);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o = VL_RAND_RESET_I(32);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o = VL_RAND_RESET_I(7);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree = VL_RAND_RESET_I(31);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree = VL_RAND_RESET_I(31);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree = VL_RAND_RESET_I(31);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp = VL_RAND_RESET_I(6);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o = VL_RAND_RESET_Q(64);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o = VL_RAND_RESET_Q(39);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__a_ack = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__error_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__err_internal = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__instr_error = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q = VL_RAND_RESET_I(8);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q = VL_RAND_RESET_I(2);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q = VL_RAND_RESET_I(3);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rd_req = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__wr_req = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_tx_watermark__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_watermark__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_tx_done__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_overflow__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_frame_err__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_timeout__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_parity_err__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_tx_empty__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_tx__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_rx__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_nf__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_slpbk__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_parity_en__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_parity_odd__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_rxblvl__DOT__wr_data = VL_RAND_RESET_I(2);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_nco__DOT__wr_data = VL_RAND_RESET_I(16);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_wdata__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_wdata__DOT__wr_data = VL_RAND_RESET_I(8);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxrst__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_txrst__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_data = VL_RAND_RESET_I(3);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_txilvl__DOT__wr_data = VL_RAND_RESET_I(3);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txval__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_val__DOT__wr_data = VL_RAND_RESET_I(24);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_val_q = VL_RAND_RESET_I(16);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_depth = VL_RAND_RESET_I(6);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth = VL_RAND_RESET_I(7);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth_prev_q = VL_RAND_RESET_I(7);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_timeout_count_d = VL_RAND_RESET_I(24);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_timeout_count_q = VL_RAND_RESET_I(24);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_fifo_rxrst = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_fifo_txrst = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_rready = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_wready = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_out_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_data = VL_RAND_RESET_I(8);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wvalid = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wready = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_in = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_d = VL_RAND_RESET_I(5);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_q = VL_RAND_RESET_I(5);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_tx_watermark = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_watermark = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_frame_err = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_break_err = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_timeout = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_parity_err = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__break_st_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__nco_sum_q = VL_RAND_RESET_I(17);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q1 = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q2 = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_watermark_thresh = VL_RAND_RESET_I(6);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_watermark_thresh = VL_RAND_RESET_I(7);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__full_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage_rdata = VL_RAND_RESET_I(8);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_RAND_RESET_I(6);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt = VL_RAND_RESET_I(6);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_RAND_RESET_I(6);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt = VL_RAND_RESET_I(6);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__baud_div_q = VL_RAND_RESET_I(4);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q = VL_RAND_RESET_I(4);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d = VL_RAND_RESET_I(4);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_q = VL_RAND_RESET_I(11);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_d = VL_RAND_RESET_I(11);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tx_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tx_d = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__sync_rx__DOT__intq = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_q = VL_RAND_RESET_I(11);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_d = VL_RAND_RESET_I(11);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q = VL_RAND_RESET_I(4);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d = VL_RAND_RESET_I(4);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q = VL_RAND_RESET_I(4);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d = VL_RAND_RESET_I(4);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_d = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__full_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_RAND_RESET_I(7);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt = VL_RAND_RESET_I(7);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_RAND_RESET_I(7);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt = VL_RAND_RESET_I(7);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__status = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__status = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__g_intr_status__DOT__test_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__status = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_done__DOT__g_intr_event__DOT__new_event = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__g_intr_event__DOT__new_event = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__g_intr_event__DOT__new_event = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__g_intr_event__DOT__new_event = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__g_intr_event__DOT__new_event = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__g_intr_event__DOT__new_event = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d = VL_RAND_RESET_I(3);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q = VL_RAND_RESET_I(3);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_pd = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_nd = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_d = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_set_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o = VL_RAND_RESET_I(2);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_d = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_p__DOT__intq = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_n__DOT__intq = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_d = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_p__DOT__intq = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_n__DOT__intq = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__0__payload = VL_RAND_RESET_Q(43);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__1__payload = VL_RAND_RESET_Q(43);
    vlSelf->__Vfunc_mubi4_test_true_strict__3__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_mubi4_test_true_strict__3__val = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_mubi4_test_true_strict__5__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_mubi4_test_true_strict__5__val = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__0 = VL_RAND_RESET_I(31);
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__0 = VL_RAND_RESET_I(31);
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree__0 = VL_RAND_RESET_I(31);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__1 = VL_RAND_RESET_I(31);
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree__1 = VL_RAND_RESET_I(31);
    vlSelf->__VicoDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__1 = VL_RAND_RESET_I(31);
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__2 = VL_RAND_RESET_I(31);
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree__2 = VL_RAND_RESET_I(31);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
