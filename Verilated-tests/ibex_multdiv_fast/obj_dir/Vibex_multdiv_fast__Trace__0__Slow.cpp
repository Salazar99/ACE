// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vibex_multdiv_fast__Syms.h"


VL_ATTR_COLD void Vibex_multdiv_fast___024root__trace_init_sub__TOP__ibex_pkg__0(Vibex_multdiv_fast___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vibex_multdiv_fast___024root__trace_init_sub__TOP__0(Vibex_multdiv_fast___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("ibex_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vibex_multdiv_fast___024root__trace_init_sub__TOP__ibex_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+45,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"mult_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"div_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"mult_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"div_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"operator_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+52,0,"signed_mode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+53,0,"op_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"op_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+55,0,"alu_adder_ext_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBus(c+57,0,"alu_adder_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+58,0,"equal_to_zero_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"data_ind_timing_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+60,0,"alu_operand_a_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+62,0,"alu_operand_b_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("imd_val_q_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+64+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("imd_val_d_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+68+i*2,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+72,0,"imd_val_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+73,0,"multdiv_ready_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"multdiv_result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+75,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ibex_multdiv_fast", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+81,0,"RV32M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+45,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"mult_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"div_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"mult_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"div_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"operator_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+52,0,"signed_mode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+53,0,"op_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"op_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+55,0,"alu_adder_ext_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBus(c+57,0,"alu_adder_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+58,0,"equal_to_zero_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"data_ind_timing_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+60,0,"alu_operand_a_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+62,0,"alu_operand_b_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("imd_val_q_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+64+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("imd_val_d_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+68+i*2,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+72,0,"imd_val_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+73,0,"multdiv_ready_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"multdiv_result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+75,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+5,0,"mac_res_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declQuad(c+5,0,"mac_res_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declQuad(c+7,0,"accum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+9,0,"sign_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"sign_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"mult_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"signed_mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+12,0,"mac_res_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+14,0,"op_remainder_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+16,0,"mac_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+1,0,"div_sign_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"div_sign_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"is_greater_equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"div_change_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rem_change_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"one_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"op_denominator_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"op_numerator_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"op_quotient_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"op_denominator_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"op_numerator_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"op_quotient_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"next_remainder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+22,0,"next_quotient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+78,0,"res_adder_h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+39,0,"div_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"div_counter_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+24,0,"div_counter_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+25,0,"multdiv_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"mult_hold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"div_hold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"div_by_zero_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"div_by_zero_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"mult_en_internal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"div_en_internal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"sva_mul_fsm_idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"md_state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+31,0,"md_state_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+49,0,"unused_mult_sel_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"unused_imd_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+32,0,"unused_mac_res_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"unused_alu_adder_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+42,0,"unused_sva_mul_fsm_idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_mult_fast", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"mult_op_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+34,0,"mult_op_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+44,0,"mult_state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+35,0,"mult_state_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vibex_multdiv_fast___024root__trace_init_sub__TOP__ibex_pkg__0(Vibex_multdiv_fast___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root__trace_init_sub__TOP__ibex_pkg__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+82,0,"ExcCauseIrqSoftwareM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+83,0,"ExcCauseIrqTimerM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+84,0,"ExcCauseIrqExternalM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+85,0,"ExcCauseIrqNm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+86,0,"ExcCauseInsnAddrMisa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+87,0,"ExcCauseInstrAccessFault",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+88,0,"ExcCauseIllegalInsn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+89,0,"ExcCauseBreakpoint",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+90,0,"ExcCauseLoadAccessFault",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+91,0,"ExcCauseStoreAccessFault",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+92,0,"ExcCauseEcallUMode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+93,0,"ExcCauseEcallMMode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+94,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+94,0,"BUS_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+95,0,"BUS_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+96,0,"BUS_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+97,0,"IC_SIZE_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+96,0,"IC_NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+98,0,"IC_LINE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+99,0,"IC_LINE_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+100,0,"IC_LINE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+101,0,"IC_NUM_LINES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+96,0,"IC_LINE_BEATS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+102,0,"IC_LINE_BEATS_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+99,0,"IC_INDEX_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+103,0,"IC_INDEX_HI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+104,0,"IC_TAG_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+96,0,"IC_OUTPUT_BEATS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+105,0,"SCRAMBLE_KEY_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+98,0,"SCRAMBLE_NONCE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+106,0,"PMP_MAX_REGIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+99,0,"PMP_CFG_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+107,0,"PMP_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+102,0,"PMP_I2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+96,0,"PMP_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+108,0,"CSR_OFF_PMP_CFG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+109,0,"CSR_OFF_PMP_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+100,0,"CSR_MSTATUS_MIE_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+110,0,"CSR_MSTATUS_MPIE_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+111,0,"CSR_MSTATUS_MPP_BIT_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+112,0,"CSR_MSTATUS_MPP_BIT_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+113,0,"CSR_MSTATUS_MPRV_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+114,0,"CSR_MSTATUS_TW_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+115,0,"CSR_MISA_MXL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+100,0,"CSR_MSIX_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+110,0,"CSR_MTIX_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+111,0,"CSR_MEIX_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+106,0,"CSR_MFIX_BIT_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+116,0,"CSR_MFIX_BIT_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+107,0,"CSR_MSECCFG_MML_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+102,0,"CSR_MSECCFG_MMWP_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+96,0,"CSR_MSECCFG_RLB_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+117,0,"CSR_MARCHID_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"CSR_MCONFIGPTR_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"LfsrWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+120,0,"RndCnstLfsrSeedDefault",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+121,0,"RndCnstLfsrPermDefault",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 159,0);
    tracep->declArray(c+126,0,"RndCnstIbexKeyDefault",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+130,0,"RndCnstIbexNonceDefault",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+132,0,"IbexMuBiWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+133,0,"IbexMuBiOn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+134,0,"IbexMuBiOff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("PmpCfgRst", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+135,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+135,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+135,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+135,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+135,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+135,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+135,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+135,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+135,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+135,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+135,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+135,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+135,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+135,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+135,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+135,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("PmpAddrRst", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+136+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+168,0,"PmpMseccfgRst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
}

VL_ATTR_COLD void Vibex_multdiv_fast___024root__trace_init_top(Vibex_multdiv_fast___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vibex_multdiv_fast___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vibex_multdiv_fast___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vibex_multdiv_fast___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vibex_multdiv_fast___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vibex_multdiv_fast___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vibex_multdiv_fast___024root__trace_register(Vibex_multdiv_fast___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vibex_multdiv_fast___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vibex_multdiv_fast___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vibex_multdiv_fast___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vibex_multdiv_fast___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vibex_multdiv_fast___024root__trace_const_0_sub_0(Vibex_multdiv_fast___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vibex_multdiv_fast___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root__trace_const_0\n"); );
    // Init
    Vibex_multdiv_fast___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_multdiv_fast___024root*>(voidSelf);
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vibex_multdiv_fast___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vibex_multdiv_fast___024root__trace_const_0_sub_0(Vibex_multdiv_fast___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    bufp->fullIData(oldp+81,(2U),32);
    bufp->fullCData(oldp+82,(0x23U),7);
    bufp->fullCData(oldp+83,(0x27U),7);
    bufp->fullCData(oldp+84,(0x2bU),7);
    bufp->fullCData(oldp+85,(0x3fU),7);
    bufp->fullCData(oldp+86,(0U),7);
    bufp->fullCData(oldp+87,(1U),7);
    bufp->fullCData(oldp+88,(2U),7);
    bufp->fullCData(oldp+89,(3U),7);
    bufp->fullCData(oldp+90,(5U),7);
    bufp->fullCData(oldp+91,(7U),7);
    bufp->fullCData(oldp+92,(8U),7);
    bufp->fullCData(oldp+93,(0xbU),7);
    bufp->fullIData(oldp+94,(0x20U),32);
    bufp->fullIData(oldp+95,(4U),32);
    bufp->fullIData(oldp+96,(2U),32);
    bufp->fullIData(oldp+97,(0x1000U),32);
    bufp->fullIData(oldp+98,(0x40U),32);
    bufp->fullIData(oldp+99,(8U),32);
    bufp->fullIData(oldp+100,(3U),32);
    bufp->fullIData(oldp+101,(0x100U),32);
    bufp->fullIData(oldp+102,(1U),32);
    bufp->fullIData(oldp+103,(0xaU),32);
    bufp->fullIData(oldp+104,(0x16U),32);
    bufp->fullIData(oldp+105,(0x80U),32);
    bufp->fullIData(oldp+106,(0x10U),32);
    bufp->fullIData(oldp+107,(0U),32);
    bufp->fullSData(oldp+108,(0x3a0U),12);
    bufp->fullSData(oldp+109,(0x3b0U),12);
    bufp->fullIData(oldp+110,(7U),32);
    bufp->fullIData(oldp+111,(0xbU),32);
    bufp->fullIData(oldp+112,(0xcU),32);
    bufp->fullIData(oldp+113,(0x11U),32);
    bufp->fullIData(oldp+114,(0x15U),32);
    bufp->fullCData(oldp+115,(1U),2);
    bufp->fullIData(oldp+116,(0x1eU),32);
    bufp->fullIData(oldp+117,(0x16U),32);
    bufp->fullIData(oldp+118,(0U),32);
    bufp->fullIData(oldp+119,(0x20U),32);
    bufp->fullIData(oldp+120,(0xac533bf4U),32);
    __Vtemp_1[0U] = 0x78a8daedU;
    __Vtemp_1[1U] = 0xc04fa438U;
    __Vtemp_1[2U] = 0x2e958152U;
    __Vtemp_1[3U] = 0x467fd1b1U;
    __Vtemp_1[4U] = 0x1e35ecbaU;
    bufp->fullWData(oldp+121,(__Vtemp_1),160);
    __Vtemp_2[0U] = 0xcc113298U;
    __Vtemp_2[1U] = 0x12286bb3U;
    __Vtemp_2[2U] = 0xe3040d5eU;
    __Vtemp_2[3U] = 0x14e8cecaU;
    bufp->fullWData(oldp+126,(__Vtemp_2),128);
    bufp->fullQData(oldp+130,(0xf79780bc735f3843ULL),64);
    bufp->fullIData(oldp+132,(4U),32);
    bufp->fullCData(oldp+133,(5U),4);
    bufp->fullCData(oldp+134,(0xaU),4);
    bufp->fullCData(oldp+135,(0U),6);
    bufp->fullQData(oldp+136,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[0]),34);
    bufp->fullQData(oldp+138,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[1]),34);
    bufp->fullQData(oldp+140,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[2]),34);
    bufp->fullQData(oldp+142,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[3]),34);
    bufp->fullQData(oldp+144,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[4]),34);
    bufp->fullQData(oldp+146,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[5]),34);
    bufp->fullQData(oldp+148,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[6]),34);
    bufp->fullQData(oldp+150,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[7]),34);
    bufp->fullQData(oldp+152,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[8]),34);
    bufp->fullQData(oldp+154,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[9]),34);
    bufp->fullQData(oldp+156,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[10]),34);
    bufp->fullQData(oldp+158,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[11]),34);
    bufp->fullQData(oldp+160,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[12]),34);
    bufp->fullQData(oldp+162,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[13]),34);
    bufp->fullQData(oldp+164,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[14]),34);
    bufp->fullQData(oldp+166,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[15]),34);
    bufp->fullCData(oldp+168,(0U),3);
}

VL_ATTR_COLD void Vibex_multdiv_fast___024root__trace_full_0_sub_0(Vibex_multdiv_fast___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vibex_multdiv_fast___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root__trace_full_0\n"); );
    // Init
    Vibex_multdiv_fast___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_multdiv_fast___024root*>(voidSelf);
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vibex_multdiv_fast___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vibex_multdiv_fast___024root__trace_full_0_sub_0(Vibex_multdiv_fast___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.ibex_multdiv_fast__DOT__div_sign_a));
    bufp->fullBit(oldp+2,(vlSelfRef.ibex_multdiv_fast__DOT__div_sign_b));
    bufp->fullBit(oldp+3,(vlSelfRef.ibex_multdiv_fast__DOT__is_greater_equal));
    bufp->fullIData(oldp+4,(vlSelfRef.ibex_multdiv_fast__DOT__next_remainder),32);
    bufp->fullQData(oldp+5,((0x7ffffffffULL & (VL_MULS_QQQ(35, 
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
                                               + VL_EXTENDS_QQ(35,34, vlSelfRef.ibex_multdiv_fast__DOT__accum)))),35);
    bufp->fullQData(oldp+7,(vlSelfRef.ibex_multdiv_fast__DOT__accum),34);
    bufp->fullBit(oldp+9,(vlSelfRef.ibex_multdiv_fast__DOT__sign_a));
    bufp->fullBit(oldp+10,(vlSelfRef.ibex_multdiv_fast__DOT__sign_b));
    bufp->fullBit(oldp+11,(vlSelfRef.ibex_multdiv_fast__DOT__mult_valid));
    bufp->fullQData(oldp+12,(vlSelfRef.ibex_multdiv_fast__DOT__mac_res_d),34);
    bufp->fullQData(oldp+14,(vlSelfRef.ibex_multdiv_fast__DOT__op_remainder_d),34);
    bufp->fullQData(oldp+16,((0x3ffffffffULL & ((0x7ffffffffULL 
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
                                                + (0x7ffffffffULL 
                                                   & VL_EXTENDS_QQ(35,34, vlSelfRef.ibex_multdiv_fast__DOT__accum))))),34);
    bufp->fullBit(oldp+18,(((~ (IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_by_zero_q)) 
                            & ((IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_sign_a) 
                               ^ (IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_sign_b)))));
    bufp->fullIData(oldp+19,(vlSelfRef.ibex_multdiv_fast__DOT__op_denominator_d),32);
    bufp->fullIData(oldp+20,(vlSelfRef.ibex_multdiv_fast__DOT__op_numerator_d),32);
    bufp->fullIData(oldp+21,(vlSelfRef.ibex_multdiv_fast__DOT__op_quotient_d),32);
    bufp->fullQData(oldp+22,(vlSelfRef.ibex_multdiv_fast__DOT__next_quotient),33);
    bufp->fullCData(oldp+24,(vlSelfRef.ibex_multdiv_fast__DOT__div_counter_d),5);
    bufp->fullBit(oldp+25,(((IData)(vlSelfRef.ibex_multdiv_fast__DOT__mult_en_internal) 
                            | (IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_en_internal))));
    bufp->fullBit(oldp+26,(vlSelfRef.ibex_multdiv_fast__DOT__mult_hold));
    bufp->fullBit(oldp+27,(vlSelfRef.ibex_multdiv_fast__DOT__div_hold));
    bufp->fullBit(oldp+28,(vlSelfRef.ibex_multdiv_fast__DOT__div_by_zero_d));
    bufp->fullBit(oldp+29,(vlSelfRef.ibex_multdiv_fast__DOT__mult_en_internal));
    bufp->fullBit(oldp+30,(vlSelfRef.ibex_multdiv_fast__DOT__div_en_internal));
    bufp->fullCData(oldp+31,(vlSelfRef.ibex_multdiv_fast__DOT__md_state_d),3);
    bufp->fullBit(oldp+32,((1U & (IData)((1ULL & ((
                                                   VL_MULS_QQQ(35, 
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
                                                   VL_EXTENDS_QQ(35,34, vlSelfRef.ibex_multdiv_fast__DOT__accum)) 
                                                  >> 0x22U))))));
    bufp->fullSData(oldp+33,(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_a),16);
    bufp->fullSData(oldp+34,(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_b),16);
    bufp->fullCData(oldp+35,(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_d),2);
    bufp->fullIData(oldp+36,(((IData)(1U) << (IData)(vlSelfRef.ibex_multdiv_fast__DOT__div_counter_q))),32);
    bufp->fullIData(oldp+37,(vlSelfRef.ibex_multdiv_fast__DOT__op_numerator_q),32);
    bufp->fullIData(oldp+38,(vlSelfRef.ibex_multdiv_fast__DOT__op_quotient_q),32);
    bufp->fullBit(oldp+39,(vlSelfRef.ibex_multdiv_fast__DOT__div_valid));
    bufp->fullCData(oldp+40,(vlSelfRef.ibex_multdiv_fast__DOT__div_counter_q),5);
    bufp->fullBit(oldp+41,(vlSelfRef.ibex_multdiv_fast__DOT__div_by_zero_q));
    bufp->fullBit(oldp+42,((0U == (IData)(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_q))));
    bufp->fullCData(oldp+43,(vlSelfRef.ibex_multdiv_fast__DOT__md_state_q),3);
    bufp->fullCData(oldp+44,(vlSelfRef.ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_q),2);
    bufp->fullBit(oldp+45,(vlSelfRef.clk_i));
    bufp->fullBit(oldp+46,(vlSelfRef.rst_ni));
    bufp->fullBit(oldp+47,(vlSelfRef.mult_en_i));
    bufp->fullBit(oldp+48,(vlSelfRef.div_en_i));
    bufp->fullBit(oldp+49,(vlSelfRef.mult_sel_i));
    bufp->fullBit(oldp+50,(vlSelfRef.div_sel_i));
    bufp->fullCData(oldp+51,(vlSelfRef.operator_i),2);
    bufp->fullCData(oldp+52,(vlSelfRef.signed_mode_i),2);
    bufp->fullIData(oldp+53,(vlSelfRef.op_a_i),32);
    bufp->fullIData(oldp+54,(vlSelfRef.op_b_i),32);
    bufp->fullQData(oldp+55,(vlSelfRef.alu_adder_ext_i),34);
    bufp->fullIData(oldp+57,(vlSelfRef.alu_adder_i),32);
    bufp->fullBit(oldp+58,(vlSelfRef.equal_to_zero_i));
    bufp->fullBit(oldp+59,(vlSelfRef.data_ind_timing_i));
    bufp->fullQData(oldp+60,(vlSelfRef.alu_operand_a_o),33);
    bufp->fullQData(oldp+62,(vlSelfRef.alu_operand_b_o),33);
    bufp->fullQData(oldp+64,(vlSelfRef.imd_val_q_i[0]),34);
    bufp->fullQData(oldp+66,(vlSelfRef.imd_val_q_i[1]),34);
    bufp->fullQData(oldp+68,(vlSelfRef.imd_val_d_o[0]),34);
    bufp->fullQData(oldp+70,(vlSelfRef.imd_val_d_o[1]),34);
    bufp->fullCData(oldp+72,(vlSelfRef.imd_val_we_o),2);
    bufp->fullBit(oldp+73,(vlSelfRef.multdiv_ready_id_i));
    bufp->fullIData(oldp+74,(vlSelfRef.multdiv_result_o),32);
    bufp->fullBit(oldp+75,(vlSelfRef.valid_o));
    bufp->fullBit(oldp+76,((0U != (IData)(vlSelfRef.signed_mode_i))));
    bufp->fullIData(oldp+77,((IData)(vlSelfRef.imd_val_q_i
                                     [1U])),32);
    bufp->fullIData(oldp+78,((IData)((vlSelfRef.alu_adder_ext_i 
                                      >> 1U))),32);
    bufp->fullCData(oldp+79,((3U & (IData)((vlSelfRef.imd_val_q_i
                                            [1U] >> 0x20U)))),2);
    bufp->fullCData(oldp+80,(((2U & ((IData)((vlSelfRef.alu_adder_ext_i 
                                              >> 0x21U)) 
                                     << 1U)) | (1U 
                                                & (IData)(vlSelfRef.alu_adder_ext_i)))),2);
}
