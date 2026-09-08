// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_arbiter4.h for the primary calling header

#ifndef VERILATED_VTB_ARBITER4___024ROOT_H_
#define VERILATED_VTB_ARBITER4___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_arbiter4__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_arbiter4___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_arbiter4__DOT__clk;
    CData/*0:0*/ tb_arbiter4__DOT__rst_n;
    CData/*0:0*/ tb_arbiter4__DOT__req0;
    CData/*0:0*/ tb_arbiter4__DOT__req1;
    CData/*0:0*/ tb_arbiter4__DOT__req2;
    CData/*0:0*/ tb_arbiter4__DOT__req3;
    CData/*0:0*/ tb_arbiter4__DOT__gnt0;
    CData/*0:0*/ tb_arbiter4__DOT__gnt1;
    CData/*0:0*/ tb_arbiter4__DOT__gnt2;
    CData/*0:0*/ tb_arbiter4__DOT__gnt3;
    CData/*0:0*/ tb_arbiter4__DOT__gnt_valid;
    CData/*1:0*/ tb_arbiter4__DOT__gnt_id;
    CData/*3:0*/ tb_arbiter4__DOT__dut__DOT__req;
    CData/*1:0*/ tb_arbiter4__DOT__dut__DOT__pointer;
    CData/*1:0*/ tb_arbiter4__DOT__dut__DOT__winner;
    CData/*1:0*/ tb_arbiter4__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__candidate;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_arbiter4__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_arbiter4__DOT__seed;
    IData/*31:0*/ tb_arbiter4__DOT__cycles;
    IData/*31:0*/ tb_arbiter4__DOT__sampled;
    IData/*31:0*/ tb_arbiter4__DOT__fd;
    IData/*31:0*/ __VactIterCount;
    std::string tb_arbiter4__DOT__out;
    std::string tb_arbiter4__DOT__scenario;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hee9636a4__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_arbiter4__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_arbiter4___024root(Vtb_arbiter4__Syms* symsp, const char* v__name);
    ~Vtb_arbiter4___024root();
    VL_UNCOPYABLE(Vtb_arbiter4___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
