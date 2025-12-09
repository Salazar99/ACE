// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_multdiv_fast.h for the primary calling header

#include "Vibex_multdiv_fast__pch.h"
#include "Vibex_multdiv_fast__Syms.h"
#include "Vibex_multdiv_fast_ibex_pkg.h"

// Parameter definitions for Vibex_multdiv_fast_ibex_pkg
constexpr VlUnpacked<QData/*33:0*/, 16> Vibex_multdiv_fast_ibex_pkg::__PVT__PmpAddrRst;


void Vibex_multdiv_fast_ibex_pkg___ctor_var_reset(Vibex_multdiv_fast_ibex_pkg* vlSelf);

Vibex_multdiv_fast_ibex_pkg::Vibex_multdiv_fast_ibex_pkg(Vibex_multdiv_fast__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vibex_multdiv_fast_ibex_pkg___ctor_var_reset(this);
}

void Vibex_multdiv_fast_ibex_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vibex_multdiv_fast_ibex_pkg::~Vibex_multdiv_fast_ibex_pkg() {
}
