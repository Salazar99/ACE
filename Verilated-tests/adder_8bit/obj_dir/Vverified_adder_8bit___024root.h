// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vverified_adder_8bit.h for the primary calling header

#ifndef VERILATED_VVERIFIED_ADDER_8BIT___024ROOT_H_
#define VERILATED_VVERIFIED_ADDER_8BIT___024ROOT_H_  // guard

#include "verilated.h"


class Vverified_adder_8bit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vverified_adder_8bit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(a,7,0);
    VL_IN8(b,7,0);
    VL_IN8(cin,0,0);
    VL_OUT8(sum,7,0);
    VL_OUT8(cout,0,0);
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ verified_adder_8bit__DOT__c;
    SData/*8:0*/ __Vtrigprevexpr___TOP__verified_adder_8bit__DOT__c__0;
    SData/*8:0*/ __Vtrigprevexpr___TOP__verified_adder_8bit__DOT__c__1;
    SData/*8:0*/ __Vtrigprevexpr___TOP__verified_adder_8bit__DOT__c__2;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vverified_adder_8bit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vverified_adder_8bit___024root(Vverified_adder_8bit__Syms* symsp, const char* v__name);
    ~Vverified_adder_8bit___024root();
    VL_UNCOPYABLE(Vverified_adder_8bit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
