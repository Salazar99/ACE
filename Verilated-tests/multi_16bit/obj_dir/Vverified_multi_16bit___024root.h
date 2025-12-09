// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vverified_multi_16bit.h for the primary calling header

#ifndef VERILATED_VVERIFIED_MULTI_16BIT___024ROOT_H_
#define VERILATED_VVERIFIED_MULTI_16BIT___024ROOT_H_  // guard

#include "verilated.h"


class Vverified_multi_16bit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vverified_multi_16bit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(start,0,0);
    VL_OUT8(done,0,0);
    CData/*0:0*/ verified_multi_16bit__DOT__done_r;
    CData/*4:0*/ verified_multi_16bit__DOT__i;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(ain,15,0);
    VL_IN16(bin,15,0);
    SData/*15:0*/ verified_multi_16bit__DOT__areg;
    SData/*15:0*/ verified_multi_16bit__DOT__breg;
    VL_OUT(yout,31,0);
    IData/*31:0*/ verified_multi_16bit__DOT__yout_r;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vverified_multi_16bit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vverified_multi_16bit___024root(Vverified_multi_16bit__Syms* symsp, const char* v__name);
    ~Vverified_multi_16bit___024root();
    VL_UNCOPYABLE(Vverified_multi_16bit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
