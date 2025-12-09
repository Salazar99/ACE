// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsqrt_calculator.h for the primary calling header

#ifndef VERILATED_VSQRT_CALCULATOR___024ROOT_H_
#define VERILATED_VSQRT_CALCULATOR___024ROOT_H_  // guard

#include "verilated.h"


class Vsqrt_calculator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsqrt_calculator___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(start,0,0);
    VL_OUT8(error,0,0);
    VL_OUT8(done,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(in,31,0);
    VL_OUT(out,31,0);
    IData/*31:0*/ sqrt_calculator__DOT__num;
    IData/*31:0*/ sqrt_calculator__DOT__guess;
    IData/*31:0*/ sqrt_calculator__DOT__iter;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsqrt_calculator__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsqrt_calculator___024root(Vsqrt_calculator__Syms* symsp, const char* v__name);
    ~Vsqrt_calculator___024root();
    VL_UNCOPYABLE(Vsqrt_calculator___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
