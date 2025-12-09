// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vibex_multdiv_fast.h for the primary calling header

#ifndef VERILATED_VIBEX_MULTDIV_FAST_IBEX_PKG_H_
#define VERILATED_VIBEX_MULTDIV_FAST_IBEX_PKG_H_  // guard

#include "verilated.h"


class Vibex_multdiv_fast__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vibex_multdiv_fast_ibex_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vibex_multdiv_fast__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<QData/*33:0*/, 16> __PVT__PmpAddrRst = {{
        0x0000000000000000ULL, 0x0000000000000000ULL,
        0x0000000000000000ULL, 0x0000000000000000ULL,
        0x0000000000000000ULL, 0x0000000000000000ULL,
        0x0000000000000000ULL, 0x0000000000000000ULL,
        0x0000000000000000ULL, 0x0000000000000000ULL,
        0x0000000000000000ULL, 0x0000000000000000ULL,
        0x0000000000000000ULL, 0x0000000000000000ULL,
        0x0000000000000000ULL, 0x0000000000000000ULL
    }};

    // CONSTRUCTORS
    Vibex_multdiv_fast_ibex_pkg(Vibex_multdiv_fast__Syms* symsp, const char* v__name);
    ~Vibex_multdiv_fast_ibex_pkg();
    VL_UNCOPYABLE(Vibex_multdiv_fast_ibex_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
