// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vverified_accu.h for the primary calling header

#ifndef VERILATED_VVERIFIED_ACCU___024ROOT_H_
#define VERILATED_VVERIFIED_ACCU___024ROOT_H_  // guard

#include "verilated.h"


class Vverified_accu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vverified_accu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(data_in,7,0);
    VL_IN8(valid_in,0,0);
    VL_OUT8(valid_out,0,0);
    CData/*1:0*/ verified_accu__DOT__count;
    CData/*0:0*/ verified_accu__DOT__add_cnt;
    CData/*0:0*/ verified_accu__DOT__end_cnt;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(data_out,9,0);
    SData/*9:0*/ verified_accu__DOT__data_out_reg;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vverified_accu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vverified_accu___024root(Vverified_accu__Syms* symsp, const char* v__name);
    ~Vverified_accu___024root();
    VL_UNCOPYABLE(Vverified_accu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
