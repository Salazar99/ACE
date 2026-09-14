// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sqrt_spaced.h for the primary calling header

#ifndef VERILATED_VTB_SQRT_SPACED___024ROOT_H_
#define VERILATED_VTB_SQRT_SPACED___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_sqrt_spaced_sqrt_intf;


class Vtb_sqrt_spaced__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_sqrt_spaced___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_sqrt_spaced_sqrt_intf* __PVT__tb_sqrt_spaced__DOT__intf;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_sqrt_spaced__DOT__clk;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sqrt_spaced__DOT__intf__rst__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sqrt_spaced__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_sqrt_spaced__DOT__seed;
    IData/*31:0*/ tb_sqrt_spaced__DOT__cycles;
    IData/*31:0*/ tb_sqrt_spaced__DOT__sampled;
    IData/*31:0*/ tb_sqrt_spaced__DOT__fd;
    IData/*31:0*/ __VactIterCount;
    QData/*32:0*/ tb_sqrt_spaced__DOT__dut__DOT__num;
    QData/*32:0*/ tb_sqrt_spaced__DOT__dut__DOT__guess;
    QData/*32:0*/ tb_sqrt_spaced__DOT__dut__DOT__iter;
    std::string tb_sqrt_spaced__DOT__out;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h41eab6ff__0;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_sqrt_spaced__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_sqrt_spaced___024root(Vtb_sqrt_spaced__Syms* symsp, const char* v__name);
    ~Vtb_sqrt_spaced___024root();
    VL_UNCOPYABLE(Vtb_sqrt_spaced___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
