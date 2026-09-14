// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sqrt_spaced.h for the primary calling header

#ifndef VERILATED_VTB_SQRT_SPACED_SQRT_INTF_H_
#define VERILATED_VTB_SQRT_SPACED_SQRT_INTF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_sqrt_spaced__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_sqrt_spaced_sqrt_intf final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ rst;
    CData/*0:0*/ start;
    CData/*0:0*/ error;
    CData/*0:0*/ done;
    QData/*32:0*/ in;
    QData/*32:0*/ out;

    // INTERNAL VARIABLES
    Vtb_sqrt_spaced__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_sqrt_spaced_sqrt_intf(Vtb_sqrt_spaced__Syms* symsp, const char* v__name);
    ~Vtb_sqrt_spaced_sqrt_intf();
    VL_UNCOPYABLE(Vtb_sqrt_spaced_sqrt_intf);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtb_sqrt_spaced_sqrt_intf* obj);

#endif  // guard
