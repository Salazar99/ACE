// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vibex_csr.h for the primary calling header

#ifndef VERILATED_VIBEX_CSR___024ROOT_H_
#define VERILATED_VIBEX_CSR___024ROOT_H_  // guard

#include "verilated.h"


class Vibex_csr__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vibex_csr___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(wr_en_i,0,0);
    VL_OUT8(rd_error_o,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_ni__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(wr_data_i,31,0);
    VL_OUT(rd_data_o,31,0);
    IData/*31:0*/ ibex_csr__DOT__rdata_q;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vibex_csr__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vibex_csr___024root(Vibex_csr__Syms* symsp, const char* v__name);
    ~Vibex_csr___024root();
    VL_UNCOPYABLE(Vibex_csr___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
