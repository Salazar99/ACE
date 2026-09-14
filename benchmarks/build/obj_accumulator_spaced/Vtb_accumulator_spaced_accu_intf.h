// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_accumulator_spaced.h for the primary calling header

#ifndef VERILATED_VTB_ACCUMULATOR_SPACED_ACCU_INTF_H_
#define VERILATED_VTB_ACCUMULATOR_SPACED_ACCU_INTF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_accumulator_spaced__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_accumulator_spaced_accu_intf final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ rst_n;
    CData/*7:0*/ data_in;
    CData/*0:0*/ valid_in;
    CData/*0:0*/ valid_out;
    SData/*9:0*/ data_out;

    // INTERNAL VARIABLES
    Vtb_accumulator_spaced__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_accumulator_spaced_accu_intf(Vtb_accumulator_spaced__Syms* symsp, const char* v__name);
    ~Vtb_accumulator_spaced_accu_intf();
    VL_UNCOPYABLE(Vtb_accumulator_spaced_accu_intf);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtb_accumulator_spaced_accu_intf* obj);

#endif  // guard
