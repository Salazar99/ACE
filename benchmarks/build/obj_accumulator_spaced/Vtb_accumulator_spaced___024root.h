// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_accumulator_spaced.h for the primary calling header

#ifndef VERILATED_VTB_ACCUMULATOR_SPACED___024ROOT_H_
#define VERILATED_VTB_ACCUMULATOR_SPACED___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_accumulator_spaced_accu_intf;


class Vtb_accumulator_spaced__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_accumulator_spaced___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_accumulator_spaced_accu_intf* __PVT__tb_accumulator_spaced__DOT__intf;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_accumulator_spaced__DOT__clk;
    CData/*1:0*/ tb_accumulator_spaced__DOT__dut__DOT__count;
    CData/*0:0*/ tb_accumulator_spaced__DOT__dut__DOT__ready_add;
    CData/*0:0*/ tb_accumulator_spaced__DOT__dut__DOT__end_cnt;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_accumulator_spaced__DOT__intf__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_accumulator_spaced__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_accumulator_spaced__DOT__seed;
    IData/*31:0*/ tb_accumulator_spaced__DOT__cycles;
    IData/*31:0*/ tb_accumulator_spaced__DOT__sampled;
    IData/*31:0*/ tb_accumulator_spaced__DOT__fd;
    IData/*31:0*/ __VactIterCount;
    std::string tb_accumulator_spaced__DOT__out;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h3d251462__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_accumulator_spaced__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_accumulator_spaced___024root(Vtb_accumulator_spaced__Syms* symsp, const char* v__name);
    ~Vtb_accumulator_spaced___024root();
    VL_UNCOPYABLE(Vtb_accumulator_spaced___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
