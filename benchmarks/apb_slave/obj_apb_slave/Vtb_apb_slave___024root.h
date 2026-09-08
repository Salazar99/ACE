// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_apb_slave.h for the primary calling header

#ifndef VERILATED_VTB_APB_SLAVE___024ROOT_H_
#define VERILATED_VTB_APB_SLAVE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_apb_slave__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_apb_slave___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_apb_slave__DOT__clk;
    CData/*0:0*/ tb_apb_slave__DOT__presetn;
    CData/*0:0*/ tb_apb_slave__DOT__psel;
    CData/*0:0*/ tb_apb_slave__DOT__penable;
    CData/*0:0*/ tb_apb_slave__DOT__pwrite;
    CData/*2:0*/ tb_apb_slave__DOT__paddr;
    CData/*7:0*/ tb_apb_slave__DOT__pwdata;
    CData/*7:0*/ tb_apb_slave__DOT__prdata;
    CData/*0:0*/ tb_apb_slave__DOT__pready;
    CData/*0:0*/ tb_apb_slave__DOT__pslverr;
    CData/*1:0*/ tb_apb_slave__DOT__dut__DOT__waits;
    CData/*0:0*/ tb_apb_slave__DOT__dut__DOT__access;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_apb_slave__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_apb_slave__DOT__seed;
    IData/*31:0*/ tb_apb_slave__DOT__cycles;
    IData/*31:0*/ tb_apb_slave__DOT__sampled;
    IData/*31:0*/ tb_apb_slave__DOT__fd;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 8> tb_apb_slave__DOT__shadow;
    VlUnpacked<CData/*7:0*/, 4> tb_apb_slave__DOT__dut__DOT__regs;
    std::string tb_apb_slave__DOT__out;
    std::string tb_apb_slave__DOT__scenario;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h311d8ba7__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_apb_slave__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_apb_slave___024root(Vtb_apb_slave__Syms* symsp, const char* v__name);
    ~Vtb_apb_slave___024root();
    VL_UNCOPYABLE(Vtb_apb_slave___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
