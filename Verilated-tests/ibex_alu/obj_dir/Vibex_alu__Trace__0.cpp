// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vibex_alu__Syms.h"


void Vibex_alu___024root__trace_chg_0_sub_0(Vibex_alu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vibex_alu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_alu___024root__trace_chg_0\n"); );
    // Init
    Vibex_alu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_alu___024root*>(voidSelf);
    Vibex_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vibex_alu___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vibex_alu___024root__trace_chg_0_sub_0(Vibex_alu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_alu___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.ibex_alu__DOT__operand_a_rev),32);
        bufp->chgBit(oldp+1,(vlSelfRef.ibex_alu__DOT__adder_op_a_shift1));
        bufp->chgBit(oldp+2,(vlSelfRef.ibex_alu__DOT__adder_op_a_shift2));
        bufp->chgBit(oldp+3,(vlSelfRef.ibex_alu__DOT__adder_op_a_shift3));
        bufp->chgBit(oldp+4,(vlSelfRef.ibex_alu__DOT__adder_op_b_negate));
        bufp->chgBit(oldp+5,(vlSelfRef.ibex_alu__DOT__cmp_signed));
        bufp->chgBit(oldp+6,(vlSelfRef.ibex_alu__DOT__cmp_result));
        bufp->chgBit(oldp+7,(vlSelfRef.ibex_alu__DOT__shift_left));
        bufp->chgIData(oldp+8,(vlSelfRef.ibex_alu__DOT__shift_operand),32);
        bufp->chgQData(oldp+9,(vlSelfRef.ibex_alu__DOT__shift_result_ext_signed),33);
        bufp->chgQData(oldp+11,(vlSelfRef.ibex_alu__DOT__shift_result_ext),33);
        bufp->chgBit(oldp+13,(vlSelfRef.ibex_alu__DOT__unused_shift_result_ext));
        bufp->chgIData(oldp+14,(vlSelfRef.ibex_alu__DOT__shift_result),32);
        bufp->chgIData(oldp+15,(vlSelfRef.ibex_alu__DOT__shift_result_rev),32);
        bufp->chgIData(oldp+16,(vlSelfRef.ibex_alu__DOT__bwlogic_result),32);
        bufp->chgIData(oldp+17,(vlSelfRef.ibex_alu__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[0]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.ibex_alu__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[1]),32);
    }
    bufp->chgBit(oldp+19,(vlSelfRef.clk));
    bufp->chgCData(oldp+20,(vlSelfRef.operator_i),7);
    bufp->chgIData(oldp+21,(vlSelfRef.operand_a_i),32);
    bufp->chgIData(oldp+22,(vlSelfRef.operand_b_i),32);
    bufp->chgBit(oldp+23,(vlSelfRef.instr_first_cycle_i));
    bufp->chgQData(oldp+24,(vlSelfRef.multdiv_operand_a_i),33);
    bufp->chgQData(oldp+26,(vlSelfRef.multdiv_operand_b_i),33);
    bufp->chgBit(oldp+28,(vlSelfRef.multdiv_sel_i));
    bufp->chgIData(oldp+29,(vlSelfRef.imd_val_q_i[0]),32);
    bufp->chgIData(oldp+30,(vlSelfRef.imd_val_q_i[1]),32);
    bufp->chgIData(oldp+31,(vlSelfRef.imd_val_d_o[0]),32);
    bufp->chgIData(oldp+32,(vlSelfRef.imd_val_d_o[1]),32);
    bufp->chgCData(oldp+33,(vlSelfRef.imd_val_we_o),2);
    bufp->chgIData(oldp+34,(vlSelfRef.adder_result_o),32);
    bufp->chgQData(oldp+35,(vlSelfRef.adder_result_ext_o),34);
    bufp->chgIData(oldp+37,(vlSelfRef.result_o),32);
    bufp->chgBit(oldp+38,(vlSelfRef.comparison_result_o));
    bufp->chgBit(oldp+39,(vlSelfRef.is_equal_result_o));
    bufp->chgQData(oldp+40,((0x1ffffffffULL & (~ ((QData)((IData)(vlSelfRef.operand_b_i)) 
                                                  << 1U)))),33);
    bufp->chgQData(oldp+42,(((IData)(vlSelfRef.multdiv_sel_i)
                              ? vlSelfRef.multdiv_operand_a_i
                              : ((IData)(vlSelfRef.ibex_alu__DOT__adder_op_a_shift1)
                                  ? (1ULL | ((QData)((IData)(
                                                             (0x7fffffffU 
                                                              & vlSelfRef.operand_a_i))) 
                                             << 2U))
                                  : ((IData)(vlSelfRef.ibex_alu__DOT__adder_op_a_shift2)
                                      ? (1ULL | ((QData)((IData)(
                                                                 (0x3fffffffU 
                                                                  & vlSelfRef.operand_a_i))) 
                                                 << 3U))
                                      : ((IData)(vlSelfRef.ibex_alu__DOT__adder_op_a_shift3)
                                          ? (1ULL | 
                                             ((QData)((IData)(
                                                              (0x1fffffffU 
                                                               & vlSelfRef.operand_a_i))) 
                                              << 4U))
                                          : (1ULL | 
                                             ((QData)((IData)(vlSelfRef.operand_a_i)) 
                                              << 1U))))))),33);
    bufp->chgQData(oldp+44,((0x1ffffffffULL & ((IData)(vlSelfRef.multdiv_sel_i)
                                                ? vlSelfRef.multdiv_operand_b_i
                                                : ((IData)(vlSelfRef.ibex_alu__DOT__adder_op_b_negate)
                                                    ? 
                                                   (~ 
                                                    ((QData)((IData)(vlSelfRef.operand_b_i)) 
                                                     << 1U))
                                                    : 
                                                   ((QData)((IData)(vlSelfRef.operand_b_i)) 
                                                    << 1U))))),33);
    bufp->chgBit(oldp+46,((1U & (((vlSelfRef.operand_a_i 
                                   ^ vlSelfRef.operand_b_i) 
                                  >> 0x1fU) ? ((vlSelfRef.operand_a_i 
                                                >> 0x1fU) 
                                               ^ (IData)(vlSelfRef.ibex_alu__DOT__cmp_signed))
                                  : (~ (IData)((vlSelfRef.adder_result_ext_o 
                                                >> 0x20U)))))));
    bufp->chgBit(oldp+47,((8U == (IData)(vlSelfRef.operator_i))));
    bufp->chgCData(oldp+48,((0x1fU & ((IData)(vlSelfRef.instr_first_cycle_i)
                                       ? vlSelfRef.operand_b_i
                                       : (- vlSelfRef.operand_b_i)))),6);
    bufp->chgCData(oldp+49,((0x3fU & ((IData)(0x20U) 
                                      - (0x1fU & vlSelfRef.operand_b_i)))),6);
    bufp->chgCData(oldp+50,(((0x10U & ((~ (IData)((0U 
                                                   != 
                                                   (0xfU 
                                                    & (vlSelfRef.operand_b_i 
                                                       >> 0x18U))))) 
                                       << 4U)) | (0xfU 
                                                  & (vlSelfRef.operand_b_i 
                                                     >> 0x18U)))),5);
    bufp->chgCData(oldp+51,((0x1fU & (vlSelfRef.operand_b_i 
                                      >> 0x10U))),5);
    bufp->chgBit(oldp+52,(((3U == (IData)(vlSelfRef.operator_i)) 
                           | (6U == (IData)(vlSelfRef.operator_i)))));
    bufp->chgBit(oldp+53,(((4U == (IData)(vlSelfRef.operator_i)) 
                           | (7U == (IData)(vlSelfRef.operator_i)))));
    bufp->chgIData(oldp+54,((vlSelfRef.operand_a_i 
                             | vlSelfRef.operand_b_i)),32);
    bufp->chgIData(oldp+55,((vlSelfRef.operand_a_i 
                             & vlSelfRef.operand_b_i)),32);
    bufp->chgIData(oldp+56,((vlSelfRef.operand_a_i 
                             ^ vlSelfRef.operand_b_i)),32);
    bufp->chgBit(oldp+57,((1U & (((IData)(0x20U) - 
                                  (0x1fU & vlSelfRef.operand_b_i)) 
                                 >> 5U))));
}

void Vibex_alu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_alu___024root__trace_cleanup\n"); );
    // Init
    Vibex_alu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_alu___024root*>(voidSelf);
    Vibex_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
