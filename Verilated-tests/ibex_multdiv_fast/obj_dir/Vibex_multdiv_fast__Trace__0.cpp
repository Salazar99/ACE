// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vibex_multdiv_fast__Syms.h"


void Vibex_multdiv_fast___024root__trace_chg_0_sub_0(Vibex_multdiv_fast___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vibex_multdiv_fast___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root__trace_chg_0\n"); );
    // Init
    Vibex_multdiv_fast___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_multdiv_fast___024root*>(voidSelf);
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vibex_multdiv_fast___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vibex_multdiv_fast___024root__trace_chg_0_sub_0(Vibex_multdiv_fast___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelfRef.ibex_multdiv_fast__DOT__div_sign_a));
        bufp->chgBit(oldp+1,(vlSelfRef.ibex_multdiv_fast__DOT__div_sign_b));
        bufp->chgBit(oldp+2,(vlSelfRef.ibex_multdiv_fast__DOT__is_greater_equal));
        bufp->chgIData(oldp+3,(vlSelfRef.ibex_multdiv_fast__DOT__next_remainder),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgQData(oldp+4,((0x7ffffffffULL & (VL_MULS_QQQ(35, 
                                                              (0x7ffffffffULL 
                                                               & VL_EXTENDS_QI(35,17, 
                                                                               (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_a) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                              (0x7ffffffffULL 
                                                               & VL_EXTENDS_QI(35,17, 
                                                                               (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_b) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                                  + 
                                                  VL_EXTENDS_QQ(35,34, vlSelfRef.ibex_multdiv_fast__DOT__accum)))),35);
        bufp->chgQData(oldp+6,(vlSelfRef.ibex_multdiv_fast__DOT__accum),34);
        bufp->chgBit(oldp+8,(vlSelfRef.ibex_multdiv_fast__DOT__sign_a));
        bufp->chgBit(oldp+9,(vlSelfRef.ibex_multdiv_fast__DOT__sign_b));
        bufp->chgBit(oldp+10,(vlSelfRef.ibex_multdiv_fast__DOT__mult_valid));
        bufp->chgQData(oldp+11,(vlSelfRef.ibex_multdiv_fast__DOT__mac_res_d),34);
        bufp->chgQData(oldp+13,(vlSelfRef.ibex_multdiv_fast__DOT__op_remainder_d),34);
        bufp->chgQData(oldp+15,((0x3ffffffffULL & (
                                                   (0x7ffffffffULL 
                                                    & VL_MULS_QQQ(35, 
                                                                  (0x7ffffffffULL 
                                                                   & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_a) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                                  (0x7ffffffffULL 
                                                                   & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_b) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                                   + 
                                                   (0x7ffffffffULL 
                                                    & VL_EXTENDS_QQ(35,34, vlSelfRef.ibex_multdiv_fast__DOT__accum))))),34);
        bufp->chgBit(oldp+17,(((~ (IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_by_zero_q)) 
                               & ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_sign_a) 
                                  ^ (IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_sign_b)))));
        bufp->chgIData(oldp+18,(vlSelfRef.ibex_multdiv_fast__DOT__op_denominator_d),32);
        bufp->chgIData(oldp+19,(vlSelfRef.ibex_multdiv_fast__DOT__op_numerator_d),32);
        bufp->chgIData(oldp+20,(vlSelfRef.ibex_multdiv_fast__DOT__op_quotient_d),32);
        bufp->chgQData(oldp+21,(vlSelfRef.ibex_multdiv_fast__DOT__next_quotient),33);
        bufp->chgCData(oldp+23,(vlSelfRef.ibex_multdiv_fast__DOT__div_counter_d),5);
        bufp->chgBit(oldp+24,(((IData)(vlSelfRef.ibex_multdiv_fast__DOT__mult_en_internal) 
                               | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_en_internal))));
        bufp->chgBit(oldp+25,(vlSelfRef.ibex_multdiv_fast__DOT__mult_hold));
        bufp->chgBit(oldp+26,(vlSelfRef.ibex_multdiv_fast__DOT__div_hold));
        bufp->chgBit(oldp+27,(vlSelfRef.ibex_multdiv_fast__DOT__div_by_zero_d));
        bufp->chgBit(oldp+28,(vlSelfRef.ibex_multdiv_fast__DOT__mult_en_internal));
        bufp->chgBit(oldp+29,(vlSelfRef.ibex_multdiv_fast__DOT__div_en_internal));
        bufp->chgCData(oldp+30,(vlSelfRef.ibex_multdiv_fast__DOT__md_state_d),3);
        bufp->chgBit(oldp+31,((1U & (IData)((1ULL & 
                                             ((VL_MULS_QQQ(35, 
                                                           (0x7ffffffffULL 
                                                            & VL_EXTENDS_QI(35,17, 
                                                                            (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_a) 
                                                                              << 0x10U) 
                                                                             | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                           (0x7ffffffffULL 
                                                            & VL_EXTENDS_QI(35,17, 
                                                                            (((IData)(vlSelfRef.ibex_multdiv_fast__DOT__sign_b) 
                                                                              << 0x10U) 
                                                                             | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                               + VL_EXTENDS_QQ(35,34, vlSelfRef.ibex_multdiv_fast__DOT__accum)) 
                                              >> 0x22U))))));
        bufp->chgSData(oldp+32,(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_a),16);
        bufp->chgSData(oldp+33,(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_b),16);
        bufp->chgCData(oldp+34,(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_d),2);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+35,(((IData)(1U) << (IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_counter_q))),32);
        bufp->chgIData(oldp+36,(vlSelfRef.ibex_multdiv_fast__DOT__op_numerator_q),32);
        bufp->chgIData(oldp+37,(vlSelfRef.ibex_multdiv_fast__DOT__op_quotient_q),32);
        bufp->chgBit(oldp+38,(vlSelfRef.ibex_multdiv_fast__DOT__div_valid));
        bufp->chgCData(oldp+39,(vlSelfRef.ibex_multdiv_fast__DOT__div_counter_q),5);
        bufp->chgBit(oldp+40,(vlSelfRef.ibex_multdiv_fast__DOT__div_by_zero_q));
        bufp->chgBit(oldp+41,((0U == (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_q))));
        bufp->chgCData(oldp+42,(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q),3);
        bufp->chgCData(oldp+43,(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_q),2);
    }
    bufp->chgBit(oldp+44,(vlSelfRef.clk_i));
    bufp->chgBit(oldp+45,(vlSelfRef.rst_ni));
    bufp->chgBit(oldp+46,(vlSelfRef.mult_en_i));
    bufp->chgBit(oldp+47,(vlSelfRef.div_en_i));
    bufp->chgBit(oldp+48,(vlSelfRef.mult_sel_i));
    bufp->chgBit(oldp+49,(vlSelfRef.div_sel_i));
    bufp->chgCData(oldp+50,(vlSelfRef.operator_i),2);
    bufp->chgCData(oldp+51,(vlSelfRef.signed_mode_i),2);
    bufp->chgIData(oldp+52,(vlSelfRef.op_a_i),32);
    bufp->chgIData(oldp+53,(vlSelfRef.op_b_i),32);
    bufp->chgQData(oldp+54,(vlSelfRef.alu_adder_ext_i),34);
    bufp->chgIData(oldp+56,(vlSelfRef.alu_adder_i),32);
    bufp->chgBit(oldp+57,(vlSelfRef.equal_to_zero_i));
    bufp->chgBit(oldp+58,(vlSelfRef.data_ind_timing_i));
    bufp->chgQData(oldp+59,(vlSelfRef.alu_operand_a_o),33);
    bufp->chgQData(oldp+61,(vlSelfRef.alu_operand_b_o),33);
    bufp->chgQData(oldp+63,(vlSelfRef.imd_val_q_i[0]),34);
    bufp->chgQData(oldp+65,(vlSelfRef.imd_val_q_i[1]),34);
    bufp->chgQData(oldp+67,(vlSelfRef.imd_val_d_o[0]),34);
    bufp->chgQData(oldp+69,(vlSelfRef.imd_val_d_o[1]),34);
    bufp->chgCData(oldp+71,(vlSelfRef.imd_val_we_o),2);
    bufp->chgBit(oldp+72,(vlSelfRef.multdiv_ready_id_i));
    bufp->chgIData(oldp+73,(vlSelfRef.multdiv_result_o),32);
    bufp->chgBit(oldp+74,(vlSelfRef.valid_o));
    bufp->chgBit(oldp+75,((0U != (IData)(vlSelfRef.signed_mode_i))));
    bufp->chgIData(oldp+76,((IData)(vlSelfRef.imd_val_q_i
                                    [1U])),32);
    bufp->chgIData(oldp+77,((IData)((vlSelfRef.alu_adder_ext_i 
                                     >> 1U))),32);
    bufp->chgCData(oldp+78,((3U & (IData)((vlSelfRef.imd_val_q_i
                                           [1U] >> 0x20U)))),2);
    bufp->chgCData(oldp+79,(((2U & ((IData)((vlSelfRef.alu_adder_ext_i 
                                             >> 0x21U)) 
                                    << 1U)) | (1U & (IData)(vlSelfRef.alu_adder_ext_i)))),2);
}

void Vibex_multdiv_fast___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root__trace_cleanup\n"); );
    // Init
    Vibex_multdiv_fast___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_multdiv_fast___024root*>(voidSelf);
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
