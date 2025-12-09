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
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelfRef.top_uart_tb__DOT__alert_rx_i),4);
        bufp->chgBit(oldp+1,((1U & ((IData)(vlSelfRef.top_uart_tb__DOT__alert_rx_i) 
                                    >> 2U))));
        bufp->chgBit(oldp+2,((1U & ((IData)(vlSelfRef.top_uart_tb__DOT__alert_rx_i) 
                                    >> 3U))));
        bufp->chgBit(oldp+3,((1U & (IData)(vlSelfRef.top_uart_tb__DOT__alert_rx_i))));
        bufp->chgBit(oldp+4,((1U & ((IData)(vlSelfRef.top_uart_tb__DOT__alert_rx_i) 
                                    >> 1U))));
        bufp->chgCData(oldp+5,(((2U & ((IData)(vlSelfRef.top_uart_tb__DOT__alert_rx_i) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlSelfRef.top_uart_tb__DOT__alert_rx_i) 
                                                     >> 1U)))),2);
        bufp->chgCData(oldp+6,((3U & (~ ((2U & ((IData)(vlSelfRef.top_uart_tb__DOT__alert_rx_i) 
                                                << 1U)) 
                                         | (1U & ((IData)(vlSelfRef.top_uart_tb__DOT__alert_rx_i) 
                                                  >> 1U)))))),2);
        bufp->chgCData(oldp+7,(((2U & ((IData)(vlSelfRef.top_uart_tb__DOT__alert_rx_i) 
                                       >> 1U)) | (1U 
                                                  & ((IData)(vlSelfRef.top_uart_tb__DOT__alert_rx_i) 
                                                     >> 3U)))),2);
        bufp->chgCData(oldp+8,((3U & (~ ((2U & ((IData)(vlSelfRef.top_uart_tb__DOT__alert_rx_i) 
                                                >> 1U)) 
                                         | (1U & ((IData)(vlSelfRef.top_uart_tb__DOT__alert_rx_i) 
                                                  >> 3U)))))),2);
        bufp->chgCData(oldp+9,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[0]),3);
        bufp->chgCData(oldp+10,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[1]),3);
        bufp->chgCData(oldp+11,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[2]),3);
        bufp->chgCData(oldp+12,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[3]),3);
        bufp->chgCData(oldp+13,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[4]),3);
        bufp->chgCData(oldp+14,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[5]),3);
        bufp->chgCData(oldp+15,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[6]),3);
        bufp->chgCData(oldp+16,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[7]),3);
        bufp->chgCData(oldp+17,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[8]),3);
        bufp->chgCData(oldp+18,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[9]),3);
        bufp->chgCData(oldp+19,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[10]),3);
        bufp->chgCData(oldp+20,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[11]),3);
        bufp->chgCData(oldp+21,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[12]),3);
        bufp->chgCData(oldp+22,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[13]),3);
        bufp->chgCData(oldp+23,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[14]),3);
        bufp->chgCData(oldp+24,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_role_vec[15]),3);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgWData(oldp+25,(vlSelfRef.top_uart_tb__DOT__tl_i_raw),107);
        bufp->chgWData(oldp+29,(vlSelfRef.top_uart_tb__DOT__tl_i),107);
        bufp->chgCData(oldp+33,((0x3cU & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                          >> 0x1aU))),6);
        bufp->chgIData(oldp+34,(((vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                  << 0xaU) | (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                              >> 0x16U))),32);
        bufp->chgCData(oldp+35,((0xfU & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                         >> 0x16U))),4);
        bufp->chgBit(oldp+36,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intg_err));
        bufp->chgBit(oldp+37,((1U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                     >> 0x18U))));
        bufp->chgBit(oldp+38,((1U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                     >> 0x19U))));
        bufp->chgBit(oldp+39,((1U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                     >> 0x1aU))));
        bufp->chgBit(oldp+40,((1U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                     >> 0x1bU))));
        bufp->chgBit(oldp+41,((1U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                     >> 0x1cU))));
        bufp->chgBit(oldp+42,((1U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+43,((1U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                     >> 0x16U))));
        bufp->chgBit(oldp+44,((1U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                     >> 0x17U))));
        bufp->chgBit(oldp+45,((1U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+46,((vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                 >> 0x1eU)),2);
        bufp->chgSData(oldp+47,((0xffffU & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                            >> 6U))),16);
        bufp->chgCData(oldp+48,((0xffU & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                          >> 0x16U))),8);
        bufp->chgCData(oldp+49,((7U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                       >> 0x18U))),3);
        bufp->chgCData(oldp+50,((7U & (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                       >> 0x1bU))),3);
        bufp->chgIData(oldp+51,((0xffffffU & ((vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                               << 0xaU) 
                                              | (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                                 >> 0x16U)))),24);
        bufp->chgBit(oldp+52,((1U & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                     >> 0x15U))));
        bufp->chgSData(oldp+53,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit),13);
        bufp->chgSData(oldp+54,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read),13);
        bufp->chgSData(oldp+55,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write),13);
        bufp->chgBit(oldp+56,((1U & VL_REDXOR_32(((
                                                   vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                   << 0xaU) 
                                                  | (vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                                     >> 0x16U))))));
        bufp->chgBit(oldp+57,((1U & VL_REDXOR_32((0xfU 
                                                  & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                     >> 0x16U))))));
        bufp->chgCData(oldp+58,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__err),2);
        bufp->chgBit(oldp+59,((0U != (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err))));
        bufp->chgQData(oldp+60,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__cmd),43);
        bufp->chgBit(oldp+62,((0U != (((vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                        | vlSelfRef.top_uart_tb__DOT__tl_i[1U]) 
                                       | vlSelfRef.top_uart_tb__DOT__tl_i[2U]) 
                                      | vlSelfRef.top_uart_tb__DOT__tl_i[3U]))));
        bufp->chgQData(oldp+63,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i),64);
        bufp->chgQData(oldp+65,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o),57);
        bufp->chgCData(oldp+67,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o),7);
        bufp->chgQData(oldp+68,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i),39);
        bufp->chgCData(oldp+70,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err),2);
        bufp->chgIData(oldp+71,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o),32);
        bufp->chgCData(oldp+72,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o),7);
        bufp->chgBit(oldp+73,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__instr_error));
        bufp->chgBit(oldp+74,((1U & ((~ (((0U == (7U 
                                                  & (vlSelfRef.top_uart_tb__DOT__tl_i[3U] 
                                                     >> 7U))) 
                                          | ((1U == 
                                              (7U & 
                                               (vlSelfRef.top_uart_tb__DOT__tl_i[3U] 
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
        bufp->chgBit(oldp+75,(((0U == (7U & (vlSelfRef.top_uart_tb__DOT__tl_i[3U] 
                                             >> 7U))) 
                               | ((1U == (7U & (vlSelfRef.top_uart_tb__DOT__tl_i[3U] 
                                                >> 7U))) 
                                  | (4U == (7U & (vlSelfRef.top_uart_tb__DOT__tl_i[3U] 
                                                  >> 7U)))))));
        bufp->chgBit(oldp+76,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                               & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk) 
                                  & ((4U == (7U & (
                                                   vlSelfRef.top_uart_tb__DOT__tl_i[3U] 
                                                   >> 7U))) 
                                     | ((1U == (7U 
                                                & (vlSelfRef.top_uart_tb__DOT__tl_i[3U] 
                                                   >> 7U))) 
                                        | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))))));
        bufp->chgBit(oldp+77,((0U == (7U & (vlSelfRef.top_uart_tb__DOT__tl_i[3U] 
                                            >> 7U)))));
        bufp->chgBit(oldp+78,((1U == (7U & (vlSelfRef.top_uart_tb__DOT__tl_i[3U] 
                                            >> 7U)))));
        bufp->chgBit(oldp+79,((4U == (7U & (vlSelfRef.top_uart_tb__DOT__tl_i[3U] 
                                            >> 7U)))));
        bufp->chgBit(oldp+80,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err));
        bufp->chgBit(oldp+81,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err));
        bufp->chgBit(oldp+82,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk));
        bufp->chgBit(oldp+83,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk));
        bufp->chgBit(oldp+84,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk));
        bufp->chgCData(oldp+85,((0xfU & ((IData)(1U) 
                                         << (3U & (
                                                   vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                   >> 0x1aU))))),4);
        bufp->chgQData(oldp+86,(vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT__cmd),43);
        bufp->chgQData(oldp+88,((0x1ffffffffffffffULL 
                                 & vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o)),57);
        bufp->chgCData(oldp+90,((0x7fU & (IData)((vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o 
                                                  >> 0x39U)))),7);
        bufp->chgIData(oldp+91,(((vlSelfRef.top_uart_tb__DOT__tl_i_raw[1U] 
                                  << 0xaU) | (vlSelfRef.top_uart_tb__DOT__tl_i_raw[0U] 
                                              >> 0x16U))),32);
        bufp->chgCData(oldp+92,((0x7fU & (IData)((vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
                                                  >> 0x20U)))),7);
        bufp->chgBit(oldp+93,((1U & VL_REDXOR_32(((
                                                   (vlSelfRef.top_uart_tb__DOT__tl_i_raw[0U] 
                                                    ^ 
                                                    vlSelfRef.top_uart_tb__DOT__tl_i_raw[1U]) 
                                                   ^ 
                                                   vlSelfRef.top_uart_tb__DOT__tl_i_raw[2U]) 
                                                  ^ 
                                                  vlSelfRef.top_uart_tb__DOT__tl_i_raw[3U])))));
        bufp->chgIData(oldp+94,((IData)(vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o)),32);
        bufp->chgQData(oldp+95,(vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o),39);
        bufp->chgQData(oldp+97,(vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT__cmd),57);
        bufp->chgQData(oldp+99,(vlSelfRef.top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o),64);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [4U]))) {
        bufp->chgQData(oldp+101,((((QData)((IData)(
                                                   ((0U 
                                                     != (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit)) 
                                                    & (((~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read)))) 
                                                        & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_re)) 
                                                       | ((~ (IData)(
                                                                     (0U 
                                                                      != (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write)))) 
                                                          & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we)))))) 
                                   << 0x26U) | (QData)((IData)(
                                                               (0xf00U 
                                                                & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                                   >> 0x14U)))))),39);
        bufp->chgBit(oldp+103,(((vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                 >> 0x16U) & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__alert_test_we))));
        bufp->chgBit(oldp+104,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger));
        bufp->chgBit(oldp+105,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we));
        bufp->chgBit(oldp+106,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_re));
        bufp->chgBit(oldp+107,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_error));
        bufp->chgBit(oldp+108,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__addrmiss));
        bufp->chgBit(oldp+109,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__wr_err));
        bufp->chgBit(oldp+110,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_state_we));
        bufp->chgBit(oldp+111,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en));
        bufp->chgBit(oldp+112,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_test_we));
        bufp->chgBit(oldp+113,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__alert_test_we));
        bufp->chgBit(oldp+114,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_en));
        bufp->chgBit(oldp+115,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__status_re));
        bufp->chgBit(oldp+116,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__rdata_re));
        bufp->chgBit(oldp+117,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_en));
        bufp->chgBit(oldp+118,((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read) 
                                 >> 9U) & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_h30875415_2_16))));
        bufp->chgBit(oldp+119,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_en));
        bufp->chgBit(oldp+120,((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read) 
                                 >> 0xbU) & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgRegularize_h30875415_2_16))));
        bufp->chgBit(oldp+121,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_en));
        bufp->chgBit(oldp+122,((0x1ffU == (0x1ffU & 
                                           (- (IData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_test_we)))))));
        bufp->chgSData(oldp+123,((0x1ffU & (- (IData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intr_test_we))))),9);
        bufp->chgCData(oldp+124,((0xfU & (- (IData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_en))))),4);
        bufp->chgBit(oldp+125,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q))));
        bufp->chgBit(oldp+126,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_data));
        bufp->chgSData(oldp+127,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_en)
                                   ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_nco__DOT__wr_data)
                                   : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q))),16);
        bufp->chgSData(oldp+128,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_nco__DOT__wr_data),16);
        bufp->chgBit(oldp+129,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_nf__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q))));
        bufp->chgBit(oldp+130,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_nf__DOT__wr_data));
        bufp->chgBit(oldp+131,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_parity_en__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q))));
        bufp->chgBit(oldp+132,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_parity_en__DOT__wr_data));
        bufp->chgBit(oldp+133,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_parity_odd__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q))));
        bufp->chgBit(oldp+134,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_parity_odd__DOT__wr_data));
        bufp->chgBit(oldp+135,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_rx__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q))));
        bufp->chgBit(oldp+136,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_rx__DOT__wr_data));
        bufp->chgCData(oldp+137,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_en)
                                   ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_rxblvl__DOT__wr_data)
                                   : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))),2);
        bufp->chgCData(oldp+138,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_rxblvl__DOT__wr_data),2);
        bufp->chgBit(oldp+139,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_slpbk__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q))));
        bufp->chgBit(oldp+140,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_slpbk__DOT__wr_data));
        bufp->chgBit(oldp+141,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_tx__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q))));
        bufp->chgBit(oldp+142,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_tx__DOT__wr_data));
        bufp->chgBit(oldp+143,((0xfU == (0xfU & (- (IData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_en)))))));
        bufp->chgCData(oldp+144,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_en)
                                   ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_data)
                                   : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q))),3);
        bufp->chgCData(oldp+145,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_data),3);
        bufp->chgBit(oldp+146,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxrst__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q))));
        bufp->chgBit(oldp+147,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxrst__DOT__wr_data));
        bufp->chgCData(oldp+148,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_en)
                                   ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_txilvl__DOT__wr_data)
                                   : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q))),3);
        bufp->chgCData(oldp+149,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_txilvl__DOT__wr_data),3);
        bufp->chgBit(oldp+150,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_rxilvl__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_txrst__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q))));
        bufp->chgBit(oldp+151,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_fifo_ctrl_txrst__DOT__wr_data));
        bufp->chgBit(oldp+152,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q))));
        bufp->chgBit(oldp+153,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_data));
        bufp->chgBit(oldp+154,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_frame_err__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q))));
        bufp->chgBit(oldp+155,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_frame_err__DOT__wr_data));
        bufp->chgBit(oldp+156,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_overflow__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q))));
        bufp->chgBit(oldp+157,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_overflow__DOT__wr_data));
        bufp->chgBit(oldp+158,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_parity_err__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q))));
        bufp->chgBit(oldp+159,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_parity_err__DOT__wr_data));
        bufp->chgBit(oldp+160,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_timeout__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q))));
        bufp->chgBit(oldp+161,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_timeout__DOT__wr_data));
        bufp->chgBit(oldp+162,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_watermark__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q))));
        bufp->chgBit(oldp+163,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_watermark__DOT__wr_data));
        bufp->chgBit(oldp+164,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_tx_done__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_done__q))));
        bufp->chgBit(oldp+165,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_tx_done__DOT__wr_data));
        bufp->chgBit(oldp+166,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_tx_empty__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q))));
        bufp->chgBit(oldp+167,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_tx_empty__DOT__wr_data));
        bufp->chgBit(oldp+168,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_tx_watermark__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q))));
        bufp->chgBit(oldp+169,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_tx_watermark__DOT__wr_data));
        bufp->chgBit(oldp+170,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__g_intr_event__DOT__new_event));
        bufp->chgBit(oldp+171,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__g_intr_event__DOT__new_event) 
                                | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q))));
        bufp->chgBit(oldp+172,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q))));
        bufp->chgBit(oldp+173,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_en));
        bufp->chgBit(oldp+174,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data));
        bufp->chgBit(oldp+175,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__g_intr_event__DOT__new_event));
        bufp->chgBit(oldp+176,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__g_intr_event__DOT__new_event) 
                                | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q))));
        bufp->chgBit(oldp+177,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q))));
        bufp->chgBit(oldp+178,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_en));
        bufp->chgBit(oldp+179,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data));
        bufp->chgBit(oldp+180,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__g_intr_event__DOT__new_event));
        bufp->chgBit(oldp+181,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__g_intr_event__DOT__new_event) 
                                | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q))));
        bufp->chgBit(oldp+182,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q))));
        bufp->chgBit(oldp+183,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_en));
        bufp->chgBit(oldp+184,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data));
        bufp->chgBit(oldp+185,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q))));
        bufp->chgBit(oldp+186,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_data));
        bufp->chgBit(oldp+187,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txval__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q))));
        bufp->chgBit(oldp+188,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txval__DOT__wr_data));
        bufp->chgBit(oldp+189,(((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__addrmiss)) 
                                & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we))));
        bufp->chgBit(oldp+190,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__a_ack));
        bufp->chgBit(oldp+191,((IData)(((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[2U] 
                                         >> 1U) & vlSelfRef.top_uart_tb__DOT__tl_i[0U]))));
        bufp->chgBit(oldp+192,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
        bufp->chgBit(oldp+193,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                                & (0U != (3U & (vlSelfRef.top_uart_tb__DOT__tl_i[1U] 
                                                >> 0x1aU))))));
        bufp->chgBit(oldp+194,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
        bufp->chgBit(oldp+195,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
        bufp->chgBit(oldp+196,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q))));
        bufp->chgBit(oldp+197,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_data));
        bufp->chgIData(oldp+198,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_en)
                                   ? vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_val__DOT__wr_data
                                   : vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q)),24);
        bufp->chgIData(oldp+199,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_val__DOT__wr_data),24);
        bufp->chgBit(oldp+200,((1U & ((vlSelfRef.top_uart_tb__DOT__tl_i[0U] 
                                       >> 0x16U) ^ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__alert_test_we)))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U]) | vlSelfRef.__Vm_traceActivity
                     [6U]))) {
        bufp->chgBit(oldp+201,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__g_intr_event__DOT__new_event) 
                                | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q))));
        bufp->chgBit(oldp+202,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q))));
        bufp->chgBit(oldp+203,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__g_intr_event__DOT__new_event) 
                                | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q))));
        bufp->chgBit(oldp+204,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q))));
        bufp->chgBit(oldp+205,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_done__DOT__g_intr_event__DOT__new_event) 
                                | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q))));
        bufp->chgBit(oldp+206,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_en)
                                 ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_data)
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q))));
        bufp->chgBit(oldp+207,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
                                & (0x3fU == (0x3fU 
                                             & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [6U]))) {
        bufp->chgWData(oldp+208,(vlSelfRef.top_uart_tb__DOT__dut__DOT__reg2hw),132);
        bufp->chgIData(oldp+213,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next),32);
        bufp->chgSData(oldp+214,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we_check),13);
        bufp->chgBit(oldp+215,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_wdata__DOT__wr_en));
        bufp->chgBit(oldp+216,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__g_intr_event__DOT__new_event));
        bufp->chgBit(oldp+217,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_en));
        bufp->chgBit(oldp+218,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data));
        bufp->chgBit(oldp+219,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__g_intr_event__DOT__new_event));
        bufp->chgBit(oldp+220,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_en));
        bufp->chgBit(oldp+221,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data));
        bufp->chgBit(oldp+222,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_done__DOT__g_intr_event__DOT__new_event));
        bufp->chgBit(oldp+223,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_en));
        bufp->chgBit(oldp+224,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_data));
        bufp->chgSData(oldp+225,((0x1fffU & (~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we_check)))),13);
        bufp->chgCData(oldp+226,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_wdata__DOT__wr_en)
                                   ? (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_wdata__DOT__wr_data)
                                   : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_wdata__q))),8);
        bufp->chgCData(oldp+227,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_wdata__DOT__wr_data),8);
        bufp->chgBit(oldp+228,(((0U == (3U & (vlSelfRef.top_uart_tb__DOT__dut__DOT__reg2hw[2U] 
                                              >> 0xcU)))
                                 ? (2U <= (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_d))
                                 : ((1U == (3U & (vlSelfRef.top_uart_tb__DOT__dut__DOT__reg2hw[2U] 
                                                  >> 0xcU)))
                                     ? (4U <= (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_d))
                                     : ((2U == (3U 
                                                & (vlSelfRef.top_uart_tb__DOT__dut__DOT__reg2hw[2U] 
                                                   >> 0xcU)))
                                         ? (8U <= (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_d))
                                         : (0x10U <= (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_d)))))));
        bufp->chgBit(oldp+229,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_break_err));
        bufp->chgBit(oldp+230,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [3U]) | vlSelfRef.__Vm_traceActivity
                     [7U]))) {
        bufp->chgCData(oldp+231,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d),3);
        bufp->chgBit(oldp+232,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_pd));
        bufp->chgBit(oldp+233,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_nd));
        bufp->chgBit(oldp+234,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_d));
        bufp->chgBit(oldp+235,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr));
        bufp->chgBit(oldp+236,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr));
        bufp->chgBit(oldp+237,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger));
        bufp->chgCData(oldp+238,((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_nd) 
                                   << 1U) | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_pd))),2);
        bufp->chgBit(oldp+239,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we_err));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgWData(oldp+240,(vlSelfRef.top_uart_tb__DOT__tl_o),66);
        bufp->chgCData(oldp+243,(((2U & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                         << 1U)) | 
                                  (1U & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                         >> 1U)))),2);
        bufp->chgBit(oldp+244,(vlSelfRef.top_uart_tb__DOT__intr_tx_watermark_o));
        bufp->chgBit(oldp+245,(vlSelfRef.top_uart_tb__DOT__intr_tx_empty_o));
        bufp->chgBit(oldp+246,(vlSelfRef.top_uart_tb__DOT__intr_rx_watermark_o));
        bufp->chgBit(oldp+247,(vlSelfRef.top_uart_tb__DOT__intr_tx_done_o));
        bufp->chgBit(oldp+248,(vlSelfRef.top_uart_tb__DOT__intr_rx_overflow_o));
        bufp->chgBit(oldp+249,(vlSelfRef.top_uart_tb__DOT__intr_rx_frame_err_o));
        bufp->chgBit(oldp+250,(vlSelfRef.top_uart_tb__DOT__intr_rx_break_err_o));
        bufp->chgBit(oldp+251,(vlSelfRef.top_uart_tb__DOT__intr_rx_timeout_o));
        bufp->chgBit(oldp+252,(vlSelfRef.top_uart_tb__DOT__intr_rx_parity_err_o));
        bufp->chgBit(oldp+253,(vlSelfRef.top_uart_tb__DOT__dut__DOT__lsio_trigger_o));
        bufp->chgBit(oldp+254,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q));
        bufp->chgBit(oldp+255,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint));
        bufp->chgBit(oldp+256,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o) 
                                | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o))));
        bufp->chgBit(oldp+257,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint));
        bufp->chgBit(oldp+258,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d));
        bufp->chgCData(oldp+259,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q),3);
        bufp->chgBit(oldp+260,((1U & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o))));
        bufp->chgBit(oldp+261,((1U & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                      >> 1U))));
        bufp->chgBit(oldp+262,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint) 
                                | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint))));
        bufp->chgBit(oldp+263,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q));
        bufp->chgBit(oldp+264,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_set_q));
        bufp->chgBit(oldp+265,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger));
        bufp->chgBit(oldp+266,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o));
        bufp->chgBit(oldp+267,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o));
        bufp->chgBit(oldp+268,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o) 
                                | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o))));
        bufp->chgBit(oldp+269,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_q));
        bufp->chgCData(oldp+270,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d),2);
        bufp->chgCData(oldp+271,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q),2);
        bufp->chgBit(oldp+272,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd) 
                                ^ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq))));
        bufp->chgBit(oldp+273,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd) 
                                ^ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq))));
        bufp->chgBit(oldp+274,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd) 
                                ^ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd))));
        bufp->chgBit(oldp+275,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd));
        bufp->chgBit(oldp+276,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq));
        bufp->chgBit(oldp+277,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq));
        bufp->chgBit(oldp+278,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd));
        bufp->chgBit(oldp+279,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_d));
        bufp->chgBit(oldp+280,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q));
        bufp->chgBit(oldp+281,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_n__DOT__intq));
        bufp->chgBit(oldp+282,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_p__DOT__intq));
        bufp->chgBit(oldp+283,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d));
        bufp->chgBit(oldp+284,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o));
        bufp->chgBit(oldp+285,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o));
        bufp->chgBit(oldp+286,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q));
        bufp->chgCData(oldp+287,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d),2);
        bufp->chgCData(oldp+288,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q),2);
        bufp->chgBit(oldp+289,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd) 
                                ^ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq))));
        bufp->chgBit(oldp+290,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd) 
                                ^ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq))));
        bufp->chgBit(oldp+291,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd) 
                                ^ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd))));
        bufp->chgBit(oldp+292,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd));
        bufp->chgBit(oldp+293,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq));
        bufp->chgBit(oldp+294,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq));
        bufp->chgBit(oldp+295,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd));
        bufp->chgBit(oldp+296,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_d));
        bufp->chgBit(oldp+297,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q));
        bufp->chgBit(oldp+298,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_n__DOT__intq));
        bufp->chgBit(oldp+299,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_p__DOT__intq));
        bufp->chgCData(oldp+300,(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o),2);
        bufp->chgWData(oldp+301,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h),66);
        bufp->chgBit(oldp+304,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__err_q));
        bufp->chgBit(oldp+305,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q));
        bufp->chgBit(oldp+306,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q));
        bufp->chgBit(oldp+307,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q));
        bufp->chgBit(oldp+308,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q));
        bufp->chgBit(oldp+309,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q));
        bufp->chgBit(oldp+310,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q));
        bufp->chgBit(oldp+311,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q));
        bufp->chgBit(oldp+312,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q));
        bufp->chgBit(oldp+313,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q));
        bufp->chgBit(oldp+314,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q));
        bufp->chgBit(oldp+315,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q));
        bufp->chgBit(oldp+316,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_done__q));
        bufp->chgBit(oldp+317,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q));
        bufp->chgBit(oldp+318,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q));
        bufp->chgBit(oldp+319,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q));
        bufp->chgBit(oldp+320,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q));
        bufp->chgBit(oldp+321,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q));
        bufp->chgBit(oldp+322,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q));
        bufp->chgBit(oldp+323,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q));
        bufp->chgBit(oldp+324,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q));
        bufp->chgBit(oldp+325,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q));
        bufp->chgBit(oldp+326,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q));
        bufp->chgBit(oldp+327,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q));
        bufp->chgBit(oldp+328,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q));
        bufp->chgBit(oldp+329,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q));
        bufp->chgCData(oldp+330,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q),2);
        bufp->chgSData(oldp+331,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q),16);
        bufp->chgBit(oldp+332,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_q));
        bufp->chgCData(oldp+333,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q),3);
        bufp->chgCData(oldp+334,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q),3);
        bufp->chgBit(oldp+335,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q));
        bufp->chgBit(oldp+336,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q));
        bufp->chgSData(oldp+337,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_val_q),16);
        bufp->chgIData(oldp+338,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q),24);
        bufp->chgBit(oldp+339,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q));
        bufp->chgBit(oldp+340,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__wdata_qe));
        bufp->chgBit(oldp+341,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__fifo_ctrl_qe));
        bufp->chgBit(oldp+342,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q));
        bufp->chgBit(oldp+343,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q));
        bufp->chgBit(oldp+344,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q));
        bufp->chgIData(oldp+345,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q),32);
        bufp->chgBit(oldp+346,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__error_q));
        bufp->chgCData(oldp+347,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q),8);
        bufp->chgCData(oldp+348,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q),2);
        bufp->chgCData(oldp+349,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q),3);
        __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                  << 0x39U) | (((QData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                                << 0x31U) 
                                               | (((QData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                                      << 1U) 
                                                                     | (1U 
                                                                        & (~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))))))))));
        __Vtemp_2[1U] = (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                          << 0x1eU) | (IData)(((((QData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                                 << 0x39U) 
                                                | (((QData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                                    << 0x31U) 
                                                   | (((QData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                       << 0x10U) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                                          << 1U) 
                                                                         | (1U 
                                                                            & (~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))))))))) 
                                               >> 0x20U)));
        __Vtemp_2[2U] = (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                          << 1U) | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                                    >> 2U));
        bufp->chgWData(oldp+350,(__Vtemp_2),66);
        bufp->chgBit(oldp+353,((1U & (~ ((((VL_REDXOR_4(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                                            ^ VL_REDXOR_2(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                           ^ VL_REDXOR_8(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                          ^ VL_REDXOR_32(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                         ^ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__error_q))))));
        bufp->chgCData(oldp+354,((0x7fU & (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
                                                   >> 0x39U)))),7);
        bufp->chgCData(oldp+355,((0x7fU & (IData)((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
                                                   >> 0x20U)))),7);
        bufp->chgBit(oldp+356,((1U & VL_REDXOR_32((
                                                   (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[0U] 
                                                    ^ 
                                                    vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[1U]) 
                                                   ^ 
                                                   vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[2U])))));
        bufp->chgIData(oldp+357,((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o)),32);
        bufp->chgIData(oldp+358,(((vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[1U] 
                                   << 0x10U) | (vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[0U] 
                                                >> 0x10U))),32);
        bufp->chgQData(oldp+359,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o),39);
        bufp->chgCData(oldp+361,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp),6);
        bufp->chgQData(oldp+362,((0x1ffffffffffffffULL 
                                  & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o)),57);
        bufp->chgQData(oldp+364,((QData)((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))),57);
        bufp->chgQData(oldp+366,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o),64);
        bufp->chgBit(oldp+368,((1U & (vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__nco_sum_q 
                                      >> 0x10U))));
        bufp->chgBit(oldp+369,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q));
        bufp->chgCData(oldp+370,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth_prev_q),7);
        bufp->chgIData(oldp+371,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_timeout_count_q),24);
        bufp->chgBit(oldp+372,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_fifo_rxrst));
        bufp->chgBit(oldp+373,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_fifo_txrst));
        bufp->chgBit(oldp+374,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle));
        bufp->chgBit(oldp+375,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tx_q));
        bufp->chgBit(oldp+376,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_out_q));
        bufp->chgBit(oldp+377,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q));
        bufp->chgBit(oldp+378,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wvalid));
        bufp->chgBit(oldp+379,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync));
        bufp->chgBit(oldp+380,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_in));
        bufp->chgCData(oldp+381,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_q),5);
        bufp->chgBit(oldp+382,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_frame_err));
        bufp->chgBit(oldp+383,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_timeout));
        bufp->chgBit(oldp+384,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_parity_err));
        bufp->chgBit(oldp+385,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle_q));
        bufp->chgBit(oldp+386,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__break_st_q));
        bufp->chgIData(oldp+387,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__nco_sum_q),17);
        bufp->chgBit(oldp+388,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q1));
        bufp->chgBit(oldp+389,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q2));
        bufp->chgBit(oldp+390,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q)
                                 ? (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync) 
                                     & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q1) 
                                        | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q2))) 
                                    | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q1) 
                                       & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q2)))
                                 : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync))));
        bufp->chgBit(oldp+391,((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync) 
                                 & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q1) 
                                    | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q2))) 
                                | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q1) 
                                   & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q2)))));
        bufp->chgBit(oldp+392,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q));
        bufp->chgBit(oldp+393,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__g_intr_status__DOT__test_q));
        bufp->chgBit(oldp+394,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q));
        bufp->chgBit(oldp+395,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__sync_rx__DOT__intq));
        bufp->chgCData(oldp+396,((0x3fU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))),6);
        bufp->chgBit(oldp+397,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst));
        bufp->chgCData(oldp+398,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q),7);
        bufp->chgCData(oldp+399,((0x40U & ((~ ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                               >> 6U)) 
                                           << 6U))),7);
        bufp->chgBit(oldp+400,((1U & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                      >> 6U))));
        bufp->chgCData(oldp+401,((0x1fU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))),5);
        bufp->chgBit(oldp+402,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst));
        bufp->chgCData(oldp+403,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q),6);
        bufp->chgCData(oldp+404,((0x20U & ((~ ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                               >> 5U)) 
                                           << 5U))),6);
        bufp->chgBit(oldp+405,((1U & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                      >> 5U))));
        bufp->chgSData(oldp+406,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_q),11);
        bufp->chgSData(oldp+407,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_d),11);
        bufp->chgCData(oldp+408,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q),4);
        bufp->chgCData(oldp+409,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d),4);
        bufp->chgCData(oldp+410,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q),4);
        bufp->chgCData(oldp+411,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d),4);
        bufp->chgBit(oldp+412,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d));
        bufp->chgBit(oldp+413,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_d));
        bufp->chgCData(oldp+414,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__baud_div_q),4);
        bufp->chgBit(oldp+415,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q));
        bufp->chgCData(oldp+416,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q),4);
        bufp->chgSData(oldp+417,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_q),11);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U] 
                     | vlSelfRef.__Vm_traceActivity
                     [6U]))) {
        bufp->chgBit(oldp+418,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle))));
        bufp->chgIData(oldp+419,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q)
                                   ? ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_timeout)
                                       ? 0U : (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth) 
                                                != (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth_prev_q))
                                                ? 0U
                                                : (
                                                   (0U 
                                                    == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth))
                                                    ? 0U
                                                    : 
                                                   (0xffffffU 
                                                    & (vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_timeout_count_q 
                                                       + (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q))))))
                                   : 0U)),24);
        bufp->chgBit(oldp+420,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth) 
                                != (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth_prev_q))));
        bufp->chgBit(oldp+421,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_frame_err) 
                                & (0U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_data)))));
        bufp->chgBit(oldp+422,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
                                & ((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_frame_err)) 
                                   | (0U != (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_data))))));
        bufp->chgBit(oldp+423,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                & ((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle_q)) 
                                   & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle)))));
        bufp->chgBit(oldp+424,(((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wready)) 
                                & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wvalid))));
        bufp->chgBit(oldp+425,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
                                & (0x1fU == (0x1fU 
                                             & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))));
        bufp->chgBit(oldp+426,((1U & (((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                       & VL_REDXOR_8(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage_rdata)) 
                                      ^ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q)))));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[5U])) {
        bufp->chgWData(oldp+427,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage),512);
        bufp->chgWData(oldp+443,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage),256);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+451,((1U & (~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_wready)))));
        bufp->chgBit(oldp+452,((1U & (~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wready)))));
        bufp->chgBit(oldp+453,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        bufp->chgBit(oldp+454,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        bufp->chgCData(oldp+455,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_depth),8);
        bufp->chgCData(oldp+456,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth),8);
        bufp->chgBit(oldp+457,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__status));
        bufp->chgBit(oldp+458,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__status));
        bufp->chgBit(oldp+459,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__status));
        bufp->chgCData(oldp+460,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_wdata__q),8);
        bufp->chgCData(oldp+461,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_depth),6);
        bufp->chgCData(oldp+462,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth),7);
        bufp->chgCData(oldp+463,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                   ? 0U : (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage_rdata))),8);
        bufp->chgBit(oldp+464,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_rready));
        bufp->chgBit(oldp+465,((1U & (~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        bufp->chgBit(oldp+466,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_wready));
        bufp->chgCData(oldp+467,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_data),8);
        bufp->chgBit(oldp+468,((1U & (~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        bufp->chgBit(oldp+469,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wready));
        bufp->chgCData(oldp+470,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_d),5);
        bufp->chgBit(oldp+471,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_tx_watermark));
        bufp->chgBit(oldp+472,((0U == (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_depth))));
        bufp->chgBit(oldp+473,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_watermark));
        bufp->chgCData(oldp+474,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_watermark_thresh),6);
        bufp->chgCData(oldp+475,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_watermark_thresh),7);
        bufp->chgBit(oldp+476,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__full_o));
        bufp->chgCData(oldp+477,((0x3fU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))),6);
        bufp->chgBit(oldp+478,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        bufp->chgCData(oldp+479,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q),7);
        bufp->chgCData(oldp+480,((0x40U & ((~ ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                               >> 6U)) 
                                           << 6U))),7);
        bufp->chgBit(oldp+481,((1U & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                      >> 6U))));
        bufp->chgBit(oldp+482,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                                & (0x3fU == (0x3fU 
                                             & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
        bufp->chgBit(oldp+483,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__full_o));
        bufp->chgCData(oldp+484,((0x1fU & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))),5);
        bufp->chgBit(oldp+485,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        bufp->chgBit(oldp+486,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
        bufp->chgCData(oldp+487,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage_rdata),8);
        bufp->chgCData(oldp+488,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q),6);
        bufp->chgCData(oldp+489,((0x20U & ((~ ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                               >> 5U)) 
                                           << 5U))),6);
        bufp->chgBit(oldp+490,((1U & ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                      >> 5U))));
        bufp->chgBit(oldp+491,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                                & (0x1fU == (0x1fU 
                                             & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
        bufp->chgCData(oldp+492,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d),4);
        bufp->chgSData(oldp+493,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_d),11);
        bufp->chgBit(oldp+494,(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tx_d));
    }
    bufp->chgBit(oldp+495,(vlSelfRef.clk));
    bufp->chgBit(oldp+496,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+497,(vlSelfRef.tl_i_a_valid));
    bufp->chgCData(oldp+498,(vlSelfRef.tl_i_a_opcode),3);
    bufp->chgCData(oldp+499,(vlSelfRef.tl_i_a_size),2);
    bufp->chgCData(oldp+500,(vlSelfRef.tl_i_a_mask),4);
    bufp->chgIData(oldp+501,(vlSelfRef.tl_i_a_address),32);
    bufp->chgIData(oldp+502,(vlSelfRef.tl_i_a_data),32);
    bufp->chgCData(oldp+503,(vlSelfRef.tl_i_a_source),8);
    bufp->chgCData(oldp+504,(vlSelfRef.tl_i_a_param),3);
    bufp->chgBit(oldp+505,(vlSelfRef.tl_i_d_ready));
    bufp->chgBit(oldp+506,(vlSelfRef.tl_o_a_ready));
    bufp->chgBit(oldp+507,(vlSelfRef.tl_o_d_valid));
    bufp->chgCData(oldp+508,(vlSelfRef.tl_o_d_opcode),3);
    bufp->chgIData(oldp+509,(vlSelfRef.tl_o_d_data),32);
    bufp->chgCData(oldp+510,(vlSelfRef.tl_o_d_source),8);
    bufp->chgBit(oldp+511,(vlSelfRef.tl_o_d_error));
    bufp->chgBit(oldp+512,(vlSelfRef.cio_tx_o));
    bufp->chgBit(oldp+513,(vlSelfRef.cio_tx_en_o));
    bufp->chgBit(oldp+514,(vlSelfRef.cio_rx_i));
    bufp->chgBit(oldp+515,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__err_q) 
                            | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intg_err) 
                               | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we_err)))));
    __Vtemp_3[0U] = (IData)((((QData)((IData)((0x14U 
                                               | ((((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__g_intr_event__DOT__new_event) 
                                                      | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q)) 
                                                     << 0xbU) 
                                                    | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__g_intr_event__DOT__new_event) 
                                                        << 0xaU) 
                                                       | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__g_intr_event__DOT__new_event) 
                                                           | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)) 
                                                          << 9U))) 
                                                   | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__g_intr_event__DOT__new_event) 
                                                       << 8U) 
                                                      | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_done__DOT__g_intr_event__DOT__new_event) 
                                                           | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q)) 
                                                          << 7U) 
                                                         | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_done__DOT__g_intr_event__DOT__new_event) 
                                                            << 6U)))) 
                                                  | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__status) 
                                                       << 5U) 
                                                      | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__status) 
                                                         << 3U)) 
                                                     | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_q))))))) 
                              << 0x34U) | (((QData)((IData)(
                                                            ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                               & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle)) 
                                                              << 1U) 
                                                             | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wready))))) 
                                               << 0x31U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_wready))))) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(
                                                                     ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                                                       ? 0U
                                                                       : 
                                                                      (0xffU 
                                                                       & (((0U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & VL_SHIFTL_III(9,9,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                                                            ? 0U
                                                                            : 
                                                                           (vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                            (((IData)(7U) 
                                                                              + 
                                                                              (0x1ffU 
                                                                               & VL_SHIFTL_III(9,9,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                                                             >> 5U)] 
                                                                            << 
                                                                            ((IData)(0x20U) 
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
                                                                             >> 
                                                                             (0x1fU 
                                                                              & VL_SHIFTL_III(9,9,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))))))) 
                                                     << 0x28U) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth) 
                                                                        << 0x18U) 
                                                                       | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_depth) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_val_q)))))))))));
    __Vtemp_3[1U] = (IData)(((((QData)((IData)((0x14U 
                                                | ((((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__g_intr_event__DOT__new_event) 
                                                       | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q)) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__g_intr_event__DOT__new_event) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__g_intr_event__DOT__new_event) 
                                                            | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)) 
                                                           << 9U))) 
                                                    | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__g_intr_event__DOT__new_event) 
                                                        << 8U) 
                                                       | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_done__DOT__g_intr_event__DOT__new_event) 
                                                            | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q)) 
                                                           << 7U) 
                                                          | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_done__DOT__g_intr_event__DOT__new_event) 
                                                             << 6U)))) 
                                                   | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__status) 
                                                        << 5U) 
                                                       | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__status) 
                                                          << 3U)) 
                                                      | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_q))))))) 
                               << 0x34U) | (((QData)((IData)(
                                                             ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                                & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle)) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))) 
                                             << 0x32U) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wready))))) 
                                                << 0x31U) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_wready))))) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(
                                                                      ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                                                        ? 0U
                                                                        : 
                                                                       (0xffU 
                                                                        & (((0U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & VL_SHIFTL_III(9,9,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                                                             ? 0U
                                                                             : 
                                                                            (vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                             (((IData)(7U) 
                                                                               + 
                                                                               (0x1ffU 
                                                                                & VL_SHIFTL_III(9,9,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                                                              >> 5U)] 
                                                                             << 
                                                                             ((IData)(0x20U) 
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
                                                                              >> 
                                                                              (0x1fU 
                                                                               & VL_SHIFTL_III(9,9,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))))))) 
                                                      << 0x28U) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth) 
                                                                         << 0x18U) 
                                                                        | (((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_depth) 
                                                                            << 0x10U) 
                                                                           | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_val_q)))))))))) 
                             >> 0x20U));
    __Vtemp_3[2U] = (0x40U | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__status) 
                                << 7U) | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__g_intr_event__DOT__new_event) 
                                            | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q)) 
                                           << 5U) | 
                                          ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__g_intr_event__DOT__new_event) 
                                           << 4U))) 
                              | (((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__g_intr_event__DOT__new_event) 
                                    | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q)) 
                                   << 3U) | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__g_intr_event__DOT__new_event) 
                                             << 2U)) 
                                 | ((((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__g_intr_event__DOT__new_event) 
                                      | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q)) 
                                     << 1U) | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__g_intr_event__DOT__new_event)))));
    bufp->chgWData(oldp+516,(__Vtemp_3),72);
    bufp->chgBit(oldp+519,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr) 
                            & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q))));
    bufp->chgBit(oldp+520,(((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr)) 
                            & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger))));
    bufp->chgBit(oldp+521,(((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr)) 
                            & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger))));
    bufp->chgBit(oldp+522,((1U & (~ ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__err_q) 
                                     | ((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__intg_err) 
                                        | (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we_err)))))));
    bufp->chgCData(oldp+523,(((IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                               ? 0U : (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, 
                                                                   (0x3fU 
                                                                    & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,9,32, 
                                                                     (0x3fU 
                                                                      & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
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
                                                   >> 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,9,32, 
                                                                    (0x3fU 
                                                                     & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))))),8);
    bufp->chgIData(oldp+524,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree),31);
    bufp->chgIData(oldp+525,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree),31);
    bufp->chgIData(oldp+526,(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree),31);
    bufp->chgBit(oldp+527,((1U & ((~ ((~ (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__addrmiss)) 
                                      & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we))) 
                                  & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))));
    bufp->chgBit(oldp+528,((1U & vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)));
    bufp->chgBit(oldp+529,((1U & VL_REDXOR_32(vlSelfRef.top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree))));
    bufp->chgCData(oldp+530,((0xffU & (((0U == (0x1fU 
                                                & VL_SHIFTL_III(9,9,32, 
                                                                (0x3fU 
                                                                 & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                         ? 0U : (vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x1ffU 
                                                    & VL_SHIFTL_III(9,9,32, 
                                                                    (0x3fU 
                                                                     & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, 
                                                                   (0x3fU 
                                                                    & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                                       | (vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                          (0xfU & (
                                                   VL_SHIFTL_III(9,9,32, 
                                                                 (0x3fU 
                                                                  & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                                                   >> 5U))] 
                                          >> (0x1fU 
                                              & VL_SHIFTL_III(9,9,32, 
                                                              (0x3fU 
                                                               & (IData)(vlSelfRef.top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))))),8);
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
