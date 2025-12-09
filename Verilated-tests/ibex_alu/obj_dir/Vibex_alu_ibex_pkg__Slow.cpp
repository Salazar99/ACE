// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_alu.h for the primary calling header

#include "Vibex_alu__pch.h"
#include "Vibex_alu__Syms.h"
#include "Vibex_alu_ibex_pkg.h"

// Parameter definitions for Vibex_alu_ibex_pkg
constexpr VlUnpacked<QData/*33:0*/, 16> Vibex_alu_ibex_pkg::__PVT__PmpAddrRst;


void Vibex_alu_ibex_pkg___ctor_var_reset(Vibex_alu_ibex_pkg* vlSelf);

Vibex_alu_ibex_pkg::Vibex_alu_ibex_pkg(Vibex_alu__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vibex_alu_ibex_pkg___ctor_var_reset(this);
}

void Vibex_alu_ibex_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vibex_alu_ibex_pkg::~Vibex_alu_ibex_pkg() {
}
