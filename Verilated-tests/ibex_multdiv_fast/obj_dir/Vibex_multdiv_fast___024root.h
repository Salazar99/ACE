// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vibex_multdiv_fast.h for the primary calling header

#ifndef VERILATED_VIBEX_MULTDIV_FAST___024ROOT_H_
#define VERILATED_VIBEX_MULTDIV_FAST___024ROOT_H_  // guard

#include "verilated.h"
class Vibex_multdiv_fast_ibex_pkg;


class Vibex_multdiv_fast__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vibex_multdiv_fast___024root final : public VerilatedModule {
  public:
    // CELLS
    Vibex_multdiv_fast_ibex_pkg* __PVT__ibex_pkg;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(mult_en_i,0,0);
    VL_IN8(div_en_i,0,0);
    VL_IN8(mult_sel_i,0,0);
    VL_IN8(div_sel_i,0,0);
    VL_IN8(operator_i,1,0);
    VL_IN8(signed_mode_i,1,0);
    VL_IN8(equal_to_zero_i,0,0);
    VL_IN8(data_ind_timing_i,0,0);
    VL_OUT8(imd_val_we_o,1,0);
    VL_IN8(multdiv_ready_id_i,0,0);
    VL_OUT8(valid_o,0,0);
    CData/*0:0*/ ibex_multdiv_fast__DOT__sign_a;
    CData/*0:0*/ ibex_multdiv_fast__DOT__sign_b;
    CData/*0:0*/ ibex_multdiv_fast__DOT__mult_valid;
    CData/*0:0*/ ibex_multdiv_fast__DOT__div_sign_a;
    CData/*0:0*/ ibex_multdiv_fast__DOT__div_sign_b;
    CData/*0:0*/ ibex_multdiv_fast__DOT__is_greater_equal;
    CData/*0:0*/ ibex_multdiv_fast__DOT__div_valid;
    CData/*4:0*/ ibex_multdiv_fast__DOT__div_counter_q;
    CData/*4:0*/ ibex_multdiv_fast__DOT__div_counter_d;
    CData/*0:0*/ ibex_multdiv_fast__DOT__mult_hold;
    CData/*0:0*/ ibex_multdiv_fast__DOT__div_hold;
    CData/*0:0*/ ibex_multdiv_fast__DOT__div_by_zero_d;
    CData/*0:0*/ ibex_multdiv_fast__DOT__div_by_zero_q;
    CData/*0:0*/ ibex_multdiv_fast__DOT__mult_en_internal;
    CData/*0:0*/ ibex_multdiv_fast__DOT__div_en_internal;
    CData/*2:0*/ ibex_multdiv_fast__DOT__md_state_q;
    CData/*2:0*/ ibex_multdiv_fast__DOT__md_state_d;
    CData/*1:0*/ ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_q;
    CData/*1:0*/ ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_state_d;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_ni__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_a;
    SData/*15:0*/ ibex_multdiv_fast__DOT__gen_mult_fast__DOT__mult_op_b;
    VL_IN(op_a_i,31,0);
    VL_IN(op_b_i,31,0);
    VL_IN(alu_adder_i,31,0);
    VL_OUT(multdiv_result_o,31,0);
    IData/*31:0*/ ibex_multdiv_fast__DOT__op_numerator_q;
    IData/*31:0*/ ibex_multdiv_fast__DOT__op_quotient_q;
    IData/*31:0*/ ibex_multdiv_fast__DOT__op_denominator_d;
    IData/*31:0*/ ibex_multdiv_fast__DOT__op_numerator_d;
    IData/*31:0*/ ibex_multdiv_fast__DOT__op_quotient_d;
    IData/*31:0*/ ibex_multdiv_fast__DOT__next_remainder;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(alu_adder_ext_i,33,0);
    VL_OUT64(alu_operand_a_o,32,0);
    VL_OUT64(alu_operand_b_o,32,0);
    QData/*33:0*/ ibex_multdiv_fast__DOT__accum;
    QData/*33:0*/ ibex_multdiv_fast__DOT__mac_res_d;
    QData/*33:0*/ ibex_multdiv_fast__DOT__op_remainder_d;
    QData/*32:0*/ ibex_multdiv_fast__DOT__next_quotient;
    VL_IN64(imd_val_q_i[2],33,0);
    VL_OUT64(imd_val_d_o[2],33,0);
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vibex_multdiv_fast__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vibex_multdiv_fast___024root(Vibex_multdiv_fast__Syms* symsp, const char* v__name);
    ~Vibex_multdiv_fast___024root();
    VL_UNCOPYABLE(Vibex_multdiv_fast___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
