// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_fifo_sync.h for the primary calling header

#ifndef VERILATED_VTB_FIFO_SYNC___024ROOT_H_
#define VERILATED_VTB_FIFO_SYNC___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_fifo_sync__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_fifo_sync___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_fifo_sync__DOT__clk;
    CData/*0:0*/ tb_fifo_sync__DOT__rst_n;
    CData/*0:0*/ tb_fifo_sync__DOT__wr_en;
    CData/*0:0*/ tb_fifo_sync__DOT__rd_en;
    CData/*7:0*/ tb_fifo_sync__DOT__din;
    CData/*3:0*/ tb_fifo_sync__DOT__count;
    CData/*2:0*/ tb_fifo_sync__DOT__dut__DOT__wr_ptr;
    CData/*2:0*/ tb_fifo_sync__DOT__dut__DOT__rd_ptr;
    CData/*0:0*/ tb_fifo_sync__DOT__dut__DOT__push;
    CData/*0:0*/ tb_fifo_sync__DOT__dut__DOT__pop;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fifo_sync__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_fifo_sync__DOT__seed;
    IData/*31:0*/ tb_fifo_sync__DOT__cycles;
    IData/*31:0*/ tb_fifo_sync__DOT__sampled;
    IData/*31:0*/ tb_fifo_sync__DOT__fd;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 8> tb_fifo_sync__DOT__dut__DOT__mem;
    std::string tb_fifo_sync__DOT__out;
    std::string tb_fifo_sync__DOT__scenario;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h4e81690b__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_fifo_sync__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_fifo_sync___024root(Vtb_fifo_sync__Syms* symsp, const char* v__name);
    ~Vtb_fifo_sync___024root();
    VL_UNCOPYABLE(Vtb_fifo_sync___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
