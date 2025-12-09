// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vibex_alu.h for the primary calling header

#ifndef VERILATED_VIBEX_ALU___024ROOT_H_
#define VERILATED_VIBEX_ALU___024ROOT_H_  // guard

#include "verilated.h"
class Vibex_alu_ibex_pkg;


class Vibex_alu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vibex_alu___024root final : public VerilatedModule {
  public:
    // CELLS
    Vibex_alu_ibex_pkg* __PVT__ibex_pkg;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(operator_i,6,0);
    VL_IN8(instr_first_cycle_i,0,0);
    VL_IN8(multdiv_sel_i,0,0);
    VL_OUT8(imd_val_we_o,1,0);
    VL_OUT8(comparison_result_o,0,0);
    VL_OUT8(is_equal_result_o,0,0);
    CData/*0:0*/ ibex_alu__DOT__adder_op_a_shift1;
    CData/*0:0*/ ibex_alu__DOT__adder_op_a_shift2;
    CData/*0:0*/ ibex_alu__DOT__adder_op_a_shift3;
    CData/*0:0*/ ibex_alu__DOT__adder_op_b_negate;
    CData/*0:0*/ ibex_alu__DOT__cmp_signed;
    CData/*0:0*/ ibex_alu__DOT__cmp_result;
    CData/*0:0*/ ibex_alu__DOT__shift_left;
    CData/*0:0*/ ibex_alu__DOT__unused_shift_result_ext;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(operand_a_i,31,0);
    VL_IN(operand_b_i,31,0);
    VL_OUT(adder_result_o,31,0);
    VL_OUT(result_o,31,0);
    IData/*31:0*/ ibex_alu__DOT__operand_a_rev;
    IData/*31:0*/ ibex_alu__DOT__shift_operand;
    IData/*31:0*/ ibex_alu__DOT__shift_result;
    IData/*31:0*/ ibex_alu__DOT__shift_result_rev;
    IData/*31:0*/ ibex_alu__DOT__bwlogic_result;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(multdiv_operand_a_i,32,0);
    VL_IN64(multdiv_operand_b_i,32,0);
    VL_OUT64(adder_result_ext_o,33,0);
    QData/*32:0*/ ibex_alu__DOT__shift_result_ext_signed;
    QData/*32:0*/ ibex_alu__DOT__shift_result_ext;
    VL_IN(imd_val_q_i[2],31,0);
    VL_OUT(imd_val_d_o[2],31,0);
    VlUnpacked<IData/*31:0*/, 2> ibex_alu__DOT__g_no_alu_rvb__DOT__unused_imd_val_q;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vibex_alu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vibex_alu___024root(Vibex_alu__Syms* symsp, const char* v__name);
    ~Vibex_alu___024root();
    VL_UNCOPYABLE(Vibex_alu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
