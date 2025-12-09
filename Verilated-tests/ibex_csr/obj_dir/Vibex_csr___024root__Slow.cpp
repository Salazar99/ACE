// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_csr.h for the primary calling header

#include "Vibex_csr__pch.h"
#include "Vibex_csr__Syms.h"
#include "Vibex_csr___024root.h"

void Vibex_csr___024root___ctor_var_reset(Vibex_csr___024root* vlSelf);

Vibex_csr___024root::Vibex_csr___024root(Vibex_csr__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vibex_csr___024root___ctor_var_reset(this);
}

void Vibex_csr___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vibex_csr___024root::~Vibex_csr___024root() {
}
