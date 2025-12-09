// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcomparator_3bit.h for the primary calling header

#ifndef VERILATED_VCOMPARATOR_3BIT___024ROOT_H_
#define VERILATED_VCOMPARATOR_3BIT___024ROOT_H_  // guard

#include "verilated.h"


class Vcomparator_3bit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcomparator_3bit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(A,2,0);
    VL_IN8(B,2,0);
    VL_OUT8(A_greater,0,0);
    VL_OUT8(A_equal,0,0);
    VL_OUT8(A_less,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcomparator_3bit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcomparator_3bit___024root(Vcomparator_3bit__Syms* symsp, const char* v__name);
    ~Vcomparator_3bit___024root();
    VL_UNCOPYABLE(Vcomparator_3bit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
