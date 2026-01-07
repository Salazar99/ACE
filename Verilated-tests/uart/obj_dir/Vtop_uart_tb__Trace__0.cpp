// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_uart_tb__Syms.h"


void Vtop_uart_tb___024root__trace_chg_0_sub_0(Vtop_uart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_uart_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root__trace_chg_0\n"); );
    // Init
    Vtop_uart_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_uart_tb___024root*>(voidSelf);
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_uart_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_uart_tb___024root__trace_chg_0_sub_0(Vtop_uart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_10;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->top_uart_tb__DOT__alert_rx_i),4);
        bufp->chgBit(oldp+1,((1U & ((IData)(vlSelf->top_uart_tb__DOT__alert_rx_i) 
                                    >> 2U))));
        bufp->chgBit(oldp+2,((1U & ((IData)(vlSelf->top_uart_tb__DOT__alert_rx_i) 
                                    >> 3U))));
        bufp->chgBit(oldp+3,((1U & (IData)(vlSelf->top_uart_tb__DOT__alert_rx_i))));
        bufp->chgBit(oldp+4,((1U & ((IData)(vlSelf->top_uart_tb__DOT__alert_rx_i) 
                                    >> 1U))));
        bufp->chgCData(oldp+5,(((2U & ((IData)(vlSelf->top_uart_tb__DOT__alert_rx_i) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlSelf->top_uart_tb__DOT__alert_rx_i) 
                                                     >> 1U)))),2);
        bufp->chgCData(oldp+6,((3U & (~ ((2U & ((IData)(vlSelf->top_uart_tb__DOT__alert_rx_i) 
                                                << 1U)) 
                                         | (1U & ((IData)(vlSelf->top_uart_tb__DOT__alert_rx_i) 
                                                  >> 1U)))))),2);
        bufp->chgCData(oldp+7,(((2U & ((IData)(vlSelf->top_uart_tb__DOT__alert_rx_i) 
                                       >> 1U)) | (1U 
                                                  & ((IData)(vlSelf->top_uart_tb__DOT__alert_rx_i) 
                                                     >> 3U)))),2);
        bufp->chgCData(oldp+8,((3U & (~ ((2U & ((IData)(vlSelf->top_uart_tb__DOT__alert_rx_i) 
                                                >> 1U)) 
                                         | (1U & ((IData)(vlSelf->top_uart_tb__DOT__alert_rx_i) 
                                                  >> 3U)))))),2);
        bufp->chgCData(oldp+9,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[0]),3);
        bufp->chgCData(oldp+10,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[1]),3);
        bufp->chgCData(oldp+11,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[2]),3);
        bufp->chgCData(oldp+12,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[3]),3);
        bufp->chgCData(oldp+13,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[4]),3);
        bufp->chgCData(oldp+14,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[5]),3);
        bufp->chgCData(oldp+15,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[6]),3);
        bufp->chgCData(oldp+16,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[7]),3);
        bufp->chgCData(oldp+17,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[8]),3);
        bufp->chgCData(oldp+18,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[9]),3);
        bufp->chgCData(oldp+19,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[10]),3);
        bufp->chgCData(oldp+20,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[11]),3);
        bufp->chgCData(oldp+21,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[12]),3);
        bufp->chgCData(oldp+22,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[13]),3);
        bufp->chgCData(oldp+23,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[14]),3);
        bufp->chgCData(oldp+24,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[15]),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgWData(oldp+25,(vlSelf->top_uart_tb__DOT__tl_i_raw),107);
        bufp->chgWData(oldp+29,(vlSelf->top_uart_tb__DOT__tl_i),107);
        bufp->chgCData(oldp+33,((0x3cU & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                          >> 0x1aU))),6);
        bufp->chgIData(oldp+34,(((vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                  << 0xaU) | (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                              >> 0x16U))),32);
        bufp->chgCData(oldp+35,((0xfU & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                         >> 0x16U))),4);
        bufp->chgBit(oldp+36,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__intg_err));
        bufp->chgBit(oldp+37,((1U & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                     >> 0x18U))));
        bufp->chgBit(oldp+38,((1U & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                     >> 0x19U))));
        bufp->chgBit(oldp+39,((1U & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                     >> 0x1aU))));
        bufp->chgBit(oldp+40,((1U & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                     >> 0x1bU))));
        bufp->chgBit(oldp+41,((1U & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                     >> 0x1cU))));
        bufp->chgBit(oldp+42,((1U & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+43,((1U & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                     >> 0x16U))));
        bufp->chgBit(oldp+44,((1U & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                     >> 0x17U))));
        bufp->chgBit(oldp+45,((1U & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+46,((vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                 >> 0x1eU)),2);
        bufp->chgSData(oldp+47,((0xffffU & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                            >> 6U))),16);
        bufp->chgCData(oldp+48,((0xffU & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                          >> 0x16U))),8);
        bufp->chgCData(oldp+49,((7U & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                       >> 0x18U))),3);
        bufp->chgCData(oldp+50,((7U & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                       >> 0x1bU))),3);
        bufp->chgIData(oldp+51,((0xffffffU & ((vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                               << 0xaU) 
                                              | (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                                 >> 0x16U)))),24);
        bufp->chgBit(oldp+52,((1U & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                     >> 0x15U))));
        bufp->chgSData(oldp+53,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit),13);
        bufp->chgSData(oldp+54,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read),13);
        bufp->chgSData(oldp+55,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write),13);
        bufp->chgBit(oldp+56,((1U & VL_REDXOR_32(((
                                                   vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                   << 0xaU) 
                                                  | (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                                     >> 0x16U))))));
        bufp->chgBit(oldp+57,((1U & VL_REDXOR_32((0xfU 
                                                  & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                     >> 0x16U))))));
        bufp->chgCData(oldp+58,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__err),2);
        bufp->chgBit(oldp+59,((0U != (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err))));
        bufp->chgQData(oldp+60,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__cmd),43);
        bufp->chgBit(oldp+62,((0U != (((vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                        | vlSelf->top_uart_tb__DOT__tl_i[1U]) 
                                       | vlSelf->top_uart_tb__DOT__tl_i[2U]) 
                                      | vlSelf->top_uart_tb__DOT__tl_i[3U]))));
        bufp->chgQData(oldp+63,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i),64);
        bufp->chgQData(oldp+65,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o),57);
        bufp->chgCData(oldp+67,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o),7);
        bufp->chgQData(oldp+68,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i),39);
        bufp->chgCData(oldp+70,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err),2);
        bufp->chgIData(oldp+71,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o),32);
        bufp->chgCData(oldp+72,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o),7);
        bufp->chgBit(oldp+73,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__instr_error));
        bufp->chgBit(oldp+74,((1U & ((~ (((0U == (7U 
                                                  & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                                     >> 7U))) 
                                          | ((1U == 
                                              (7U & 
                                               (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                                >> 7U))) 
                                             | (4U 
                                                == 
                                                (7U 
                                                 & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                                    >> 7U))))) 
                                         & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                            & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk) 
                                               & ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                                       >> 7U))) 
                                                  | ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                                          >> 7U))) 
                                                     | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))))) 
                                     | ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err) 
                                        | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err))))));
        bufp->chgBit(oldp+75,(((0U == (7U & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                             >> 7U))) 
                               | ((1U == (7U & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                                >> 7U))) 
                                  | (4U == (7U & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                                  >> 7U)))))));
        bufp->chgBit(oldp+76,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                               & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk) 
                                  & ((4U == (7U & (
                                                   vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                                   >> 7U))) 
                                     | ((1U == (7U 
                                                & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                                   >> 7U))) 
                                        | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))))));
        bufp->chgBit(oldp+77,((0U == (7U & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                            >> 7U)))));
        bufp->chgBit(oldp+78,((1U == (7U & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                            >> 7U)))));
        bufp->chgBit(oldp+79,((4U == (7U & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                            >> 7U)))));
        bufp->chgBit(oldp+80,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err));
        bufp->chgBit(oldp+81,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err));
        bufp->chgBit(oldp+82,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk));
        bufp->chgBit(oldp+83,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk));
        bufp->chgBit(oldp+84,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk));
        bufp->chgCData(oldp+85,((0xfU & ((IData)(1U) 
                                         << (3U & (
                                                   vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                   >> 0x1aU))))),4);
        bufp->chgQData(oldp+86,(vlSelf->top_uart_tb__DOT__u_tl_intg__DOT__cmd),43);
        bufp->chgQData(oldp+88,((0x1ffffffffffffffULL 
                                 & vlSelf->top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o)),57);
        bufp->chgCData(oldp+90,((0x7fU & (IData)((vlSelf->top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o 
                                                  >> 0x39U)))),7);
        bufp->chgIData(oldp+91,(((vlSelf->top_uart_tb__DOT__tl_i_raw[1U] 
                                  << 0xaU) | (vlSelf->top_uart_tb__DOT__tl_i_raw[0U] 
                                              >> 0x16U))),32);
        bufp->chgCData(oldp+92,((0x7fU & (IData)((vlSelf->top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
                                                  >> 0x20U)))),7);
        bufp->chgBit(oldp+93,((1U & VL_REDXOR_32(((
                                                   (vlSelf->top_uart_tb__DOT__tl_i_raw[0U] 
                                                    ^ 
                                                    vlSelf->top_uart_tb__DOT__tl_i_raw[1U]) 
                                                   ^ 
                                                   vlSelf->top_uart_tb__DOT__tl_i_raw[2U]) 
                                                  ^ 
                                                  vlSelf->top_uart_tb__DOT__tl_i_raw[3U])))));
        bufp->chgIData(oldp+94,((IData)(vlSelf->top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o)),32);
        bufp->chgQData(oldp+95,(vlSelf->top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o),39);
        bufp->chgQData(oldp+97,(vlSelf->top_uart_tb__DOT__u_tl_intg__DOT__cmd),57);
        bufp->chgQData(oldp+99,(vlSelf->top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o),64);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgQData(oldp+101,((((QData)((IData)(
                                                   ((0U 
                                                     != (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit)) 
                                                    & (((~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read)))) 
                                                        & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_re)) 
                                                       | ((~ (IData)(
                                                                     (0U 
                                                                      != (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write)))) 
                                                          & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we)))))) 
                                   << 0x26U) | (QData)((IData)(
                                                               (0xf00U 
                                                                & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                                   >> 0x14U)))))),39);
        bufp->chgBit(oldp+103,(((vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                 >> 0x16U) & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__alert_test_we))));
        bufp->chgBit(oldp+104,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger));
        bufp->chgBit(oldp+105,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we));
        bufp->chgBit(oldp+106,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_re));
        bufp->chgBit(oldp+107,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_error));
        bufp->chgBit(oldp+108,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__addrmiss));
        bufp->chgBit(oldp+109,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__wr_err));
        bufp->chgBit(oldp+110,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__qe));
        bufp->chgBit(oldp+111,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe));
        bufp->chgBit(oldp+112,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe));
        bufp->chgBit(oldp+113,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__alert_test_we));
        bufp->chgBit(oldp+114,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__qe));
        bufp->chgBit(oldp+115,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_status_rxempty__qre));
        bufp->chgBit(oldp+116,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellinp__u_uart_rxfifo__rready_i));
        bufp->chgBit(oldp+117,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe));
        bufp->chgBit(oldp+118,((((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read) 
                                 >> 9U) & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgTmp_h7645ae40__0))));
        bufp->chgBit(oldp+119,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txen__DOT__qe));
        bufp->chgBit(oldp+120,((((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read) 
                                 >> 0xbU) & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgTmp_h7645ae40__0))));
        bufp->chgBit(oldp+121,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__qe));
        bufp->chgBit(oldp+122,((0x1ffU == (0x1ffU & 
                                           (- (IData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))));
        bufp->chgSData(oldp+123,((0x1ffU & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe))))),9);
        bufp->chgCData(oldp+124,((0xfU & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe))))),4);
        bufp->chgBit(oldp+125,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__qe)
                                 ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_data)
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q))));
        bufp->chgBit(oldp+126,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_data));
        bufp->chgSData(oldp+127,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__qe)
                                   ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_nco__DOT__wr_data)
                                   : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q))),16);
        bufp->chgSData(oldp+128,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_nco__DOT__wr_data),16);
        bufp->chgBit(oldp+129,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__qe)
                                 ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_nf__DOT__wr_data)
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q))));
        bufp->chgBit(oldp+130,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_nf__DOT__wr_data));
        bufp->chgBit(oldp+131,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__qe)
                                 ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_parity_en__DOT__wr_data)
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q))));
        bufp->chgBit(oldp+132,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_parity_en__DOT__wr_data));
        bufp->chgBit(oldp+133,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__qe)
                                 ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_parity_odd__DOT__wr_data)
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q))));
        bufp->chgBit(oldp+134,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_parity_odd__DOT__wr_data));
        bufp->chgBit(oldp+135,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__qe)
                                 ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_rx__DOT__wr_data)
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q))));
        bufp->chgBit(oldp+136,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_rx__DOT__wr_data));
        bufp->chgCData(oldp+137,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__qe)
                                   ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_rxblvl__DOT__wr_data)
                                   : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))),2);
        bufp->chgCData(oldp+138,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_rxblvl__DOT__wr_data),2);
        bufp->chgBit(oldp+139,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__qe)
                                 ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_slpbk__DOT__wr_data)
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q))));
        bufp->chgBit(oldp+140,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_slpbk__DOT__wr_data));
        bufp->chgBit(oldp+141,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__qe)
                                 ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_tx__DOT__wr_data)
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q))));
        bufp->chgBit(oldp+142,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_tx__DOT__wr_data));
        bufp->chgBit(oldp+143,((0xfU == (0xfU & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe)))))));
        bufp->chgCData(oldp+144,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe)
                                   ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_data)
                                   : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q))),3);
        bufp->chgCData(oldp+145,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_data),3);
        bufp->chgBit(oldp+146,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe)
                                 ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxrst__DOT__wr_data)
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q))));
        bufp->chgBit(oldp+147,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxrst__DOT__wr_data));
        bufp->chgCData(oldp+148,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe)
                                   ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_txilvl__DOT__wr_data)
                                   : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q))),3);
        bufp->chgCData(oldp+149,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_txilvl__DOT__wr_data),3);
        bufp->chgBit(oldp+150,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe)
                                 ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_txrst__DOT__wr_data)
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q))));
        bufp->chgBit(oldp+151,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_txrst__DOT__wr_data));
        bufp->chgBit(oldp+152,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe)
                                 ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_data)
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q))));
        bufp->chgBit(oldp+153,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_data));
        bufp->chgBit(oldp+154,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe)
                                 ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_frame_err__DOT__wr_data)
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q))));
        bufp->chgBit(oldp+155,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_frame_err__DOT__wr_data));
        bufp->chgBit(oldp+156,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe)
                                 ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_overflow__DOT__wr_data)
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q))));
        bufp->chgBit(oldp+157,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_overflow__DOT__wr_data));
        bufp->chgBit(oldp+158,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe)
                                 ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_parity_err__DOT__wr_data)
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q))));
        bufp->chgBit(oldp+159,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_parity_err__DOT__wr_data));
        bufp->chgBit(oldp+160,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe)
                                 ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_timeout__DOT__wr_data)
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q))));
        bufp->chgBit(oldp+161,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_timeout__DOT__wr_data));
        bufp->chgBit(oldp+162,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe)
                                 ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_watermark__DOT__wr_data)
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q))));
        bufp->chgBit(oldp+163,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_watermark__DOT__wr_data));
        bufp->chgBit(oldp+164,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe)
                                 ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_tx_done__DOT__wr_data)
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_done__q))));
        bufp->chgBit(oldp+165,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_tx_done__DOT__wr_data));
        bufp->chgBit(oldp+166,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe)
                                 ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_tx_empty__DOT__wr_data)
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q))));
        bufp->chgBit(oldp+167,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_tx_empty__DOT__wr_data));
        bufp->chgBit(oldp+168,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe)
                                 ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_tx_watermark__DOT__wr_data)
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q))));
        bufp->chgBit(oldp+169,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_tx_watermark__DOT__wr_data));
        bufp->chgBit(oldp+170,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_frame_err__hw2reg_intr_state_de_o));
        bufp->chgBit(oldp+171,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_frame_err__hw2reg_intr_state_de_o) 
                                | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q))));
        bufp->chgBit(oldp+172,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_en)
                                 ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data)
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q))));
        bufp->chgBit(oldp+173,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_en));
        bufp->chgBit(oldp+174,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data));
        bufp->chgBit(oldp+175,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_parity_err__hw2reg_intr_state_de_o));
        bufp->chgBit(oldp+176,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_parity_err__hw2reg_intr_state_de_o) 
                                | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q))));
        bufp->chgBit(oldp+177,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_en)
                                 ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data)
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q))));
        bufp->chgBit(oldp+178,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_en));
        bufp->chgBit(oldp+179,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data));
        bufp->chgBit(oldp+180,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_timeout__hw2reg_intr_state_de_o));
        bufp->chgBit(oldp+181,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_timeout__hw2reg_intr_state_de_o) 
                                | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q))));
        bufp->chgBit(oldp+182,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_en)
                                 ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data)
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q))));
        bufp->chgBit(oldp+183,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_en));
        bufp->chgBit(oldp+184,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data));
        bufp->chgBit(oldp+185,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txen__DOT__qe)
                                 ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_data)
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q))));
        bufp->chgBit(oldp+186,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_data));
        bufp->chgBit(oldp+187,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txen__DOT__qe)
                                 ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txval__DOT__wr_data)
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q))));
        bufp->chgBit(oldp+188,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txval__DOT__wr_data));
        bufp->chgBit(oldp+189,(((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__addrmiss)) 
                                & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we))));
        bufp->chgBit(oldp+190,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__a_ack));
        bufp->chgBit(oldp+191,((IData)(((vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[2U] 
                                         >> 1U) & vlSelf->top_uart_tb__DOT__tl_i[0U]))));
        bufp->chgBit(oldp+192,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
        bufp->chgBit(oldp+193,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                                & (0U != (3U & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                >> 0x1aU))))));
        bufp->chgBit(oldp+194,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
        bufp->chgBit(oldp+195,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
        bufp->chgBit(oldp+196,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__qe)
                                 ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_data)
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q))));
        bufp->chgBit(oldp+197,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_data));
        bufp->chgIData(oldp+198,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__qe)
                                   ? vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_val__DOT__wr_data
                                   : vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q)),24);
        bufp->chgIData(oldp+199,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_val__DOT__wr_data),24);
        bufp->chgBit(oldp+200,((1U & ((vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                       >> 0x16U) ^ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__alert_test_we)))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[4U]) 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+201,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_break_err__hw2reg_intr_state_de_o) 
                                | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q))));
        bufp->chgBit(oldp+202,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_en)
                                 ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data)
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q))));
        bufp->chgBit(oldp+203,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_overflow__hw2reg_intr_state_de_o) 
                                | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q))));
        bufp->chgBit(oldp+204,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_en)
                                 ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data)
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q))));
        bufp->chgBit(oldp+205,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_done__hw2reg_intr_state_de_o) 
                                | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q))));
        bufp->chgBit(oldp+206,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_en)
                                 ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_data)
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q))));
        bufp->chgBit(oldp+207,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
                                & (0x3fU == (0x3fU 
                                             & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgWData(oldp+208,(vlSelf->top_uart_tb__DOT__dut__DOT__reg2hw),132);
        bufp->chgSData(oldp+213,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we_check),13);
        bufp->chgBit(oldp+214,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_wdata__DOT__wr_en));
        bufp->chgBit(oldp+215,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_break_err__hw2reg_intr_state_de_o));
        bufp->chgBit(oldp+216,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_en));
        bufp->chgBit(oldp+217,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data));
        bufp->chgBit(oldp+218,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_overflow__hw2reg_intr_state_de_o));
        bufp->chgBit(oldp+219,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_en));
        bufp->chgBit(oldp+220,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data));
        bufp->chgBit(oldp+221,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_done__hw2reg_intr_state_de_o));
        bufp->chgBit(oldp+222,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_en));
        bufp->chgBit(oldp+223,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_data));
        bufp->chgSData(oldp+224,((0x1fffU & (~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we_check)))),13);
        bufp->chgCData(oldp+225,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_wdata__DOT__wr_en)
                                   ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_wdata__DOT__wr_data)
                                   : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_wdata__q))),8);
        bufp->chgCData(oldp+226,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_wdata__DOT__wr_data),8);
        bufp->chgBit(oldp+227,(((0U == (3U & (vlSelf->top_uart_tb__DOT__dut__DOT__reg2hw[2U] 
                                              >> 0xcU)))
                                 ? (2U <= (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_d))
                                 : ((1U == (3U & (vlSelf->top_uart_tb__DOT__dut__DOT__reg2hw[2U] 
                                                  >> 0xcU)))
                                     ? (4U <= (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_d))
                                     : ((2U == (3U 
                                                & (vlSelf->top_uart_tb__DOT__dut__DOT__reg2hw[2U] 
                                                   >> 0xcU)))
                                         ? (8U <= (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_d))
                                         : (0x10U <= (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_d)))))));
        bufp->chgBit(oldp+228,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_break_err));
        bufp->chgBit(oldp+229,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[2U] 
                      | vlSelf->__Vm_traceActivity[3U]) 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgCData(oldp+230,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d),3);
        bufp->chgBit(oldp+231,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_pd));
        bufp->chgBit(oldp+232,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_nd));
        bufp->chgBit(oldp+233,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_d));
        bufp->chgBit(oldp+234,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr));
        bufp->chgBit(oldp+235,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr));
        bufp->chgBit(oldp+236,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger));
        bufp->chgCData(oldp+237,((((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_nd) 
                                   << 1U) | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_pd))),2);
        bufp->chgBit(oldp+238,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we_err));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgWData(oldp+239,(vlSelf->top_uart_tb__DOT__tl_o),66);
        bufp->chgCData(oldp+242,(((2U & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                         << 1U)) | 
                                  (1U & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                         >> 1U)))),2);
        bufp->chgBit(oldp+243,(vlSelf->top_uart_tb__DOT__intr_tx_watermark_o));
        bufp->chgBit(oldp+244,(vlSelf->top_uart_tb__DOT__intr_tx_empty_o));
        bufp->chgBit(oldp+245,(vlSelf->top_uart_tb__DOT__intr_rx_watermark_o));
        bufp->chgBit(oldp+246,(vlSelf->top_uart_tb__DOT__intr_tx_done_o));
        bufp->chgBit(oldp+247,(vlSelf->top_uart_tb__DOT__intr_rx_overflow_o));
        bufp->chgBit(oldp+248,(vlSelf->top_uart_tb__DOT__intr_rx_frame_err_o));
        bufp->chgBit(oldp+249,(vlSelf->top_uart_tb__DOT__intr_rx_break_err_o));
        bufp->chgBit(oldp+250,(vlSelf->top_uart_tb__DOT__intr_rx_timeout_o));
        bufp->chgBit(oldp+251,(vlSelf->top_uart_tb__DOT__intr_rx_parity_err_o));
        bufp->chgBit(oldp+252,(vlSelf->top_uart_tb__DOT__dut__DOT__lsio_trigger_o));
        bufp->chgBit(oldp+253,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q));
        bufp->chgBit(oldp+254,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint));
        bufp->chgBit(oldp+255,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o) 
                                | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o))));
        bufp->chgBit(oldp+256,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint));
        bufp->chgBit(oldp+257,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d));
        bufp->chgCData(oldp+258,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q),3);
        bufp->chgBit(oldp+259,((1U & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o))));
        bufp->chgBit(oldp+260,((1U & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                      >> 1U))));
        bufp->chgBit(oldp+261,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint) 
                                | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint))));
        bufp->chgBit(oldp+262,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q));
        bufp->chgBit(oldp+263,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_set_q));
        bufp->chgBit(oldp+264,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger));
        bufp->chgBit(oldp+265,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o));
        bufp->chgBit(oldp+266,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o));
        bufp->chgBit(oldp+267,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o) 
                                | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o))));
        bufp->chgBit(oldp+268,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_q));
        bufp->chgCData(oldp+269,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d),2);
        bufp->chgCData(oldp+270,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q),2);
        bufp->chgBit(oldp+271,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd) 
                                ^ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq))));
        bufp->chgBit(oldp+272,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd) 
                                ^ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq))));
        bufp->chgBit(oldp+273,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd) 
                                ^ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd))));
        bufp->chgBit(oldp+274,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd));
        bufp->chgBit(oldp+275,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq));
        bufp->chgBit(oldp+276,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq));
        bufp->chgBit(oldp+277,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd));
        bufp->chgBit(oldp+278,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_d));
        bufp->chgBit(oldp+279,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q));
        bufp->chgBit(oldp+280,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_n__DOT__intq));
        bufp->chgBit(oldp+281,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_p__DOT__intq));
        bufp->chgBit(oldp+282,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d));
        bufp->chgBit(oldp+283,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o));
        bufp->chgBit(oldp+284,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o));
        bufp->chgBit(oldp+285,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q));
        bufp->chgCData(oldp+286,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d),2);
        bufp->chgCData(oldp+287,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q),2);
        bufp->chgBit(oldp+288,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd) 
                                ^ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq))));
        bufp->chgBit(oldp+289,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd) 
                                ^ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq))));
        bufp->chgBit(oldp+290,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd) 
                                ^ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd))));
        bufp->chgBit(oldp+291,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd));
        bufp->chgBit(oldp+292,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq));
        bufp->chgBit(oldp+293,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq));
        bufp->chgBit(oldp+294,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd));
        bufp->chgBit(oldp+295,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_d));
        bufp->chgBit(oldp+296,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q));
        bufp->chgBit(oldp+297,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_n__DOT__intq));
        bufp->chgBit(oldp+298,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_p__DOT__intq));
        bufp->chgCData(oldp+299,(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o),2);
        bufp->chgWData(oldp+300,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h),66);
        bufp->chgBit(oldp+303,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__err_q));
        bufp->chgBit(oldp+304,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q));
        bufp->chgBit(oldp+305,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q));
        bufp->chgBit(oldp+306,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q));
        bufp->chgBit(oldp+307,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q));
        bufp->chgBit(oldp+308,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q));
        bufp->chgBit(oldp+309,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q));
        bufp->chgBit(oldp+310,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q));
        bufp->chgBit(oldp+311,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q));
        bufp->chgBit(oldp+312,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q));
        bufp->chgBit(oldp+313,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q));
        bufp->chgBit(oldp+314,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q));
        bufp->chgBit(oldp+315,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_done__q));
        bufp->chgBit(oldp+316,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q));
        bufp->chgBit(oldp+317,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q));
        bufp->chgBit(oldp+318,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q));
        bufp->chgBit(oldp+319,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q));
        bufp->chgBit(oldp+320,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q));
        bufp->chgBit(oldp+321,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q));
        bufp->chgBit(oldp+322,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q));
        bufp->chgBit(oldp+323,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q));
        bufp->chgBit(oldp+324,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q));
        bufp->chgBit(oldp+325,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q));
        bufp->chgBit(oldp+326,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q));
        bufp->chgBit(oldp+327,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q));
        bufp->chgBit(oldp+328,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q));
        bufp->chgCData(oldp+329,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q),2);
        bufp->chgSData(oldp+330,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q),16);
        bufp->chgBit(oldp+331,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_q));
        bufp->chgCData(oldp+332,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q),3);
        bufp->chgCData(oldp+333,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q),3);
        bufp->chgBit(oldp+334,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q));
        bufp->chgBit(oldp+335,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q));
        bufp->chgSData(oldp+336,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_val_q),16);
        bufp->chgIData(oldp+337,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q),24);
        bufp->chgBit(oldp+338,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q));
        bufp->chgBit(oldp+339,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__wdata_qe));
        bufp->chgBit(oldp+340,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__fifo_ctrl_qe));
        bufp->chgBit(oldp+341,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q));
        bufp->chgBit(oldp+342,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q));
        bufp->chgBit(oldp+343,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q));
        bufp->chgIData(oldp+344,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q),32);
        bufp->chgBit(oldp+345,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__error_q));
        bufp->chgCData(oldp+346,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q),8);
        bufp->chgCData(oldp+347,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q),2);
        bufp->chgCData(oldp+348,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q),3);
        __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                  << 0x39U) | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                                << 0x31U) 
                                               | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                                      << 1U) 
                                                                     | (1U 
                                                                        & (~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))))))))));
        __Vtemp_2[1U] = (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                          << 0x1eU) | (IData)(((((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                                 << 0x39U) 
                                                | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                                    << 0x31U) 
                                                   | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                       << 0x10U) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                                          << 1U) 
                                                                         | (1U 
                                                                            & (~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))))))))) 
                                               >> 0x20U)));
        __Vtemp_2[2U] = (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                          << 1U) | ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                                    >> 2U));
        bufp->chgWData(oldp+349,(__Vtemp_2),66);
        bufp->chgBit(oldp+352,((1U & (~ ((((VL_REDXOR_4(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                                            ^ VL_REDXOR_2(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                           ^ VL_REDXOR_8(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                          ^ VL_REDXOR_32(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                         ^ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__error_q))))));
        bufp->chgCData(oldp+353,((0x7fU & (IData)((vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
                                                   >> 0x39U)))),7);
        bufp->chgCData(oldp+354,((0x7fU & (IData)((vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
                                                   >> 0x20U)))),7);
        bufp->chgBit(oldp+355,((1U & VL_REDXOR_32((
                                                   (vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[0U] 
                                                    ^ 
                                                    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[1U]) 
                                                   ^ 
                                                   vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[2U])))));
        bufp->chgIData(oldp+356,((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o)),32);
        bufp->chgIData(oldp+357,(((vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[1U] 
                                   << 0x10U) | (vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[0U] 
                                                >> 0x10U))),32);
        bufp->chgQData(oldp+358,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o),39);
        bufp->chgCData(oldp+360,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp),6);
        bufp->chgQData(oldp+361,((0x1ffffffffffffffULL 
                                  & vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o)),57);
        bufp->chgQData(oldp+363,((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))),57);
        bufp->chgQData(oldp+365,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o),64);
        bufp->chgBit(oldp+367,((1U & (vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__nco_sum_q 
                                      >> 0x10U))));
        bufp->chgBit(oldp+368,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q));
        bufp->chgCData(oldp+369,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth_prev_q),7);
        bufp->chgIData(oldp+370,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_timeout_count_q),24);
        bufp->chgBit(oldp+371,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_fifo_rxrst));
        bufp->chgBit(oldp+372,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_fifo_txrst));
        bufp->chgBit(oldp+373,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle));
        bufp->chgBit(oldp+374,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tx_q));
        bufp->chgBit(oldp+375,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_out_q));
        bufp->chgBit(oldp+376,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q));
        bufp->chgBit(oldp+377,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wvalid));
        bufp->chgBit(oldp+378,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync));
        bufp->chgBit(oldp+379,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_in));
        bufp->chgCData(oldp+380,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_q),5);
        bufp->chgBit(oldp+381,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_frame_err));
        bufp->chgBit(oldp+382,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_timeout));
        bufp->chgBit(oldp+383,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_parity_err));
        bufp->chgBit(oldp+384,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle_q));
        bufp->chgBit(oldp+385,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__break_st_q));
        bufp->chgIData(oldp+386,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__nco_sum_q),17);
        bufp->chgBit(oldp+387,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q1));
        bufp->chgBit(oldp+388,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q2));
        bufp->chgBit(oldp+389,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q)
                                 ? (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync) 
                                     & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q1) 
                                        | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q2))) 
                                    | ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q1) 
                                       & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q2)))
                                 : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync))));
        bufp->chgBit(oldp+390,((((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync) 
                                 & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q1) 
                                    | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q2))) 
                                | ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q1) 
                                   & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q2)))));
        bufp->chgBit(oldp+391,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q));
        bufp->chgBit(oldp+392,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__g_intr_status__DOT__test_q));
        bufp->chgBit(oldp+393,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q));
        bufp->chgBit(oldp+394,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__sync_rx__DOT__intq));
        bufp->chgCData(oldp+395,((0x3fU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))),6);
        bufp->chgBit(oldp+396,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst));
        bufp->chgCData(oldp+397,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q),7);
        bufp->chgCData(oldp+398,((0x40U & ((~ ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                               >> 6U)) 
                                           << 6U))),7);
        bufp->chgBit(oldp+399,((1U & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                      >> 6U))));
        bufp->chgCData(oldp+400,((0x1fU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))),5);
        bufp->chgBit(oldp+401,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst));
        bufp->chgCData(oldp+402,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q),6);
        bufp->chgCData(oldp+403,((0x20U & ((~ ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                               >> 5U)) 
                                           << 5U))),6);
        bufp->chgBit(oldp+404,((1U & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                      >> 5U))));
        bufp->chgSData(oldp+405,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_q),11);
        bufp->chgSData(oldp+406,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_d),11);
        bufp->chgCData(oldp+407,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q),4);
        bufp->chgCData(oldp+408,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d),4);
        bufp->chgCData(oldp+409,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q),4);
        bufp->chgCData(oldp+410,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d),4);
        bufp->chgBit(oldp+411,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d));
        bufp->chgBit(oldp+412,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_d));
        bufp->chgCData(oldp+413,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__baud_div_q),4);
        bufp->chgBit(oldp+414,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q));
        bufp->chgCData(oldp+415,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q),4);
        bufp->chgSData(oldp+416,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_q),11);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+417,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle))));
        bufp->chgIData(oldp+418,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q)
                                   ? ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_timeout)
                                       ? 0U : (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth) 
                                                != (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth_prev_q))
                                                ? 0U
                                                : (
                                                   (0U 
                                                    == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth))
                                                    ? 0U
                                                    : 
                                                   (0xffffffU 
                                                    & (vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_timeout_count_q 
                                                       + (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q))))))
                                   : 0U)),24);
        bufp->chgBit(oldp+419,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth) 
                                != (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth_prev_q))));
        bufp->chgBit(oldp+420,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_frame_err) 
                                & (0U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_data)))));
        bufp->chgBit(oldp+421,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
                                & ((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_frame_err)) 
                                   | (0U != (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_data))))));
        bufp->chgBit(oldp+422,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                & ((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle_q)) 
                                   & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle)))));
        bufp->chgBit(oldp+423,(((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wready)) 
                                & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wvalid))));
        bufp->chgBit(oldp+424,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
                                & (0x1fU == (0x1fU 
                                             & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgWData(oldp+425,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage),512);
        bufp->chgWData(oldp+441,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage),256);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+449,((1U & (~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_wready)))));
        bufp->chgBit(oldp+450,((1U & (~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wready)))));
        bufp->chgBit(oldp+451,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        bufp->chgBit(oldp+452,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        bufp->chgCData(oldp+453,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_depth),8);
        bufp->chgCData(oldp+454,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth),8);
        bufp->chgBit(oldp+455,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_watermark__hw2reg_intr_state_d_o));
        bufp->chgBit(oldp+456,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_empty__hw2reg_intr_state_d_o));
        bufp->chgBit(oldp+457,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_watermark__hw2reg_intr_state_d_o));
        bufp->chgCData(oldp+458,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_wdata__q),8);
        bufp->chgCData(oldp+459,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_depth),6);
        bufp->chgCData(oldp+460,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth),7);
        bufp->chgBit(oldp+461,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_rready));
        bufp->chgBit(oldp+462,((1U & (~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        bufp->chgBit(oldp+463,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_wready));
        bufp->chgCData(oldp+464,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_data),8);
        bufp->chgBit(oldp+465,((1U & (~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        bufp->chgBit(oldp+466,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wready));
        bufp->chgCData(oldp+467,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_d),5);
        bufp->chgBit(oldp+468,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_tx_watermark));
        bufp->chgBit(oldp+469,((0U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_depth))));
        bufp->chgBit(oldp+470,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_watermark));
        bufp->chgCData(oldp+471,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_watermark_thresh),6);
        bufp->chgCData(oldp+472,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_watermark_thresh),7);
        bufp->chgBit(oldp+473,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__full_o));
        bufp->chgCData(oldp+474,((0x3fU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))),6);
        bufp->chgBit(oldp+475,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        bufp->chgCData(oldp+476,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q),7);
        bufp->chgCData(oldp+477,((0x40U & ((~ ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                               >> 6U)) 
                                           << 6U))),7);
        bufp->chgBit(oldp+478,((1U & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                      >> 6U))));
        bufp->chgBit(oldp+479,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                                & (0x3fU == (0x3fU 
                                             & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
        bufp->chgBit(oldp+480,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__full_o));
        bufp->chgCData(oldp+481,((0x1fU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))),5);
        bufp->chgBit(oldp+482,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        bufp->chgBit(oldp+483,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
        bufp->chgCData(oldp+484,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q),6);
        bufp->chgCData(oldp+485,((0x20U & ((~ ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                               >> 5U)) 
                                           << 5U))),6);
        bufp->chgBit(oldp+486,((1U & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                      >> 5U))));
        bufp->chgBit(oldp+487,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                                & (0x1fU == (0x1fU 
                                             & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
        bufp->chgCData(oldp+488,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d),4);
        bufp->chgBit(oldp+489,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tx_d));
    }
    bufp->chgBit(oldp+490,(vlSelf->clk));
    bufp->chgBit(oldp+491,(vlSelf->rst_n));
    bufp->chgBit(oldp+492,(vlSelf->tl_i_a_valid));
    bufp->chgCData(oldp+493,(vlSelf->tl_i_a_opcode),3);
    bufp->chgCData(oldp+494,(vlSelf->tl_i_a_size),2);
    bufp->chgCData(oldp+495,(vlSelf->tl_i_a_mask),4);
    bufp->chgIData(oldp+496,(vlSelf->tl_i_a_address),32);
    bufp->chgIData(oldp+497,(vlSelf->tl_i_a_data),32);
    bufp->chgCData(oldp+498,(vlSelf->tl_i_a_source),8);
    bufp->chgCData(oldp+499,(vlSelf->tl_i_a_param),3);
    bufp->chgBit(oldp+500,(vlSelf->tl_i_d_ready));
    bufp->chgBit(oldp+501,(vlSelf->tl_o_a_ready));
    bufp->chgBit(oldp+502,(vlSelf->tl_o_d_valid));
    bufp->chgCData(oldp+503,(vlSelf->tl_o_d_opcode),3);
    bufp->chgIData(oldp+504,(vlSelf->tl_o_d_data),32);
    bufp->chgCData(oldp+505,(vlSelf->tl_o_d_source),8);
    bufp->chgBit(oldp+506,(vlSelf->tl_o_d_error));
    bufp->chgBit(oldp+507,(vlSelf->cio_tx_o));
    bufp->chgBit(oldp+508,(vlSelf->cio_tx_en_o));
    bufp->chgBit(oldp+509,(vlSelf->cio_rx_i));
    bufp->chgBit(oldp+510,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__err_q) 
                            | ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__intg_err) 
                               | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we_err)))));
    __Vtemp_3[0U] = (IData)((0x140000000000000ULL | 
                             (((QData)((IData)(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_frame_err__hw2reg_intr_state_de_o) 
                                                | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q)))) 
                               << 0x3fU) | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_frame_err__hw2reg_intr_state_de_o)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_overflow__hw2reg_intr_state_de_o) 
                                                                 | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_overflow__hw2reg_intr_state_de_o)) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_done__hw2reg_intr_state_de_o) 
                                                                       | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q)))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_done__hw2reg_intr_state_de_o)) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_watermark__hw2reg_intr_state_d_o)) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_watermark__hw2reg_intr_state_d_o)) 
                                                               << 0x37U) 
                                                              | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                                                  << 0x35U) 
                                                                 | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_q)) 
                                                                     << 0x34U) 
                                                                    | (((QData)((IData)(
                                                                                ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                                                & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle)))) 
                                                                        << 0x33U) 
                                                                       | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                                                           << 0x32U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wready))))) 
                                                                              << 0x31U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_wready))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                                                                 ? 0U
                                                                                 : 
                                                                                (0xffU 
                                                                                & (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(9,9,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                                (((IData)(7U) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & VL_SHIFTL_III(9,9,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(9,9,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                                                                                | (vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                                (0xfU 
                                                                                & (VL_SHIFTL_III(9,9,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(9,9,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))))))) 
                                                                                << 0x28U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_depth) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_val_q))))))))))))))))))))));
    __Vtemp_3[1U] = (IData)(((0x140000000000000ULL 
                              | (((QData)((IData)(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_frame_err__hw2reg_intr_state_de_o) 
                                                   | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q)))) 
                                  << 0x3fU) | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_frame_err__hw2reg_intr_state_de_o)) 
                                                << 0x3eU) 
                                               | (((QData)((IData)(
                                                                   ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_overflow__hw2reg_intr_state_de_o) 
                                                                    | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)))) 
                                                   << 0x3dU) 
                                                  | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_overflow__hw2reg_intr_state_de_o)) 
                                                      << 0x3cU) 
                                                     | (((QData)((IData)(
                                                                         ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_done__hw2reg_intr_state_de_o) 
                                                                          | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q)))) 
                                                         << 0x3bU) 
                                                        | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_done__hw2reg_intr_state_de_o)) 
                                                            << 0x3aU) 
                                                           | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_watermark__hw2reg_intr_state_d_o)) 
                                                               << 0x39U) 
                                                              | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_watermark__hw2reg_intr_state_d_o)) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                                                     << 0x35U) 
                                                                    | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_q)) 
                                                                        << 0x34U) 
                                                                       | (((QData)((IData)(
                                                                                ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                                                & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle)))) 
                                                                           << 0x33U) 
                                                                          | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                                                              << 0x32U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wready))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_wready))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                                                                 ? 0U
                                                                                 : 
                                                                                (0xffU 
                                                                                & (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(9,9,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                                (((IData)(7U) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & VL_SHIFTL_III(9,9,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(9,9,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                                                                                | (vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                                (0xfU 
                                                                                & (VL_SHIFTL_III(9,9,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(9,9,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))))))) 
                                                                                << 0x28U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_depth) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_val_q))))))))))))))))))))) 
                             >> 0x20U));
    __Vtemp_10[0U] = __Vtemp_3[0U];
    __Vtemp_10[1U] = __Vtemp_3[1U];
    __Vtemp_10[2U] = (0x40U | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_empty__hw2reg_intr_state_d_o) 
                                << 7U) | ((((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_parity_err__hw2reg_intr_state_de_o) 
                                            | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q)) 
                                           << 5U) | 
                                          (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_parity_err__hw2reg_intr_state_de_o) 
                                            << 4U) 
                                           | ((((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_timeout__hw2reg_intr_state_de_o) 
                                                | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q)) 
                                               << 3U) 
                                              | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_timeout__hw2reg_intr_state_de_o) 
                                                  << 2U) 
                                                 | ((((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_break_err__hw2reg_intr_state_de_o) 
                                                      | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q)) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_break_err__hw2reg_intr_state_de_o))))))));
    bufp->chgWData(oldp+511,(__Vtemp_10),72);
    bufp->chgBit(oldp+514,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr) 
                            & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q))));
    bufp->chgBit(oldp+515,(((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr)) 
                            & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger))));
    bufp->chgBit(oldp+516,(((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr)) 
                            & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger))));
    bufp->chgBit(oldp+517,((1U & (~ ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__err_q) 
                                     | ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__intg_err) 
                                        | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we_err)))))));
    bufp->chgIData(oldp+518,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next),32);
    bufp->chgCData(oldp+519,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                               ? 0U : (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, 
                                                                   (0x3fU 
                                                                    & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,9,32, 
                                                                     (0x3fU 
                                                                      & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,9,32, 
                                                                    (0x3fU 
                                                                     & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                                                | (vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                   (0xfU 
                                                    & (VL_SHIFTL_III(9,9,32, 
                                                                     (0x3fU 
                                                                      & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,9,32, 
                                                                    (0x3fU 
                                                                     & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))))),8);
    bufp->chgIData(oldp+520,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree),31);
    bufp->chgIData(oldp+521,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree),31);
    bufp->chgIData(oldp+522,(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree),31);
    bufp->chgBit(oldp+523,((1U & ((~ ((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__addrmiss)) 
                                      & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we))) 
                                  & vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))));
    bufp->chgBit(oldp+524,((1U & vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)));
    bufp->chgBit(oldp+525,((1U & VL_REDXOR_32(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree))));
    bufp->chgCData(oldp+526,(((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                               ? 0U : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage_rdata))),8);
    bufp->chgCData(oldp+527,((0xffU & (((0U == (0x1fU 
                                                & VL_SHIFTL_III(9,9,32, 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                         ? 0U : (vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x1ffU 
                                                    & VL_SHIFTL_III(9,9,32, 
                                                                    (0x3fU 
                                                                     & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, 
                                                                   (0x3fU 
                                                                    & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                                       | (vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                          (0xfU & (
                                                   VL_SHIFTL_III(9,9,32, 
                                                                 (0x3fU 
                                                                  & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                                                   >> 5U))] 
                                          >> (0x1fU 
                                              & VL_SHIFTL_III(9,9,32, 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))))),8);
    bufp->chgCData(oldp+528,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage_rdata),8);
    bufp->chgBit(oldp+529,((1U & (((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & VL_REDXOR_8(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage_rdata)) 
                                  ^ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q)))));
    bufp->chgSData(oldp+530,(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_d),11);
}

void Vtop_uart_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root__trace_cleanup\n"); );
    // Init
    Vtop_uart_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_uart_tb___024root*>(voidSelf);
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
}
