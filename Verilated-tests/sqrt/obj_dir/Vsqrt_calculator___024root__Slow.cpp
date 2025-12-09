// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsqrt_calculator.h for the primary calling header

#include "Vsqrt_calculator__pch.h"
#include "Vsqrt_calculator__Syms.h"
#include "Vsqrt_calculator___024root.h"

void Vsqrt_calculator___024root___ctor_var_reset(Vsqrt_calculator___024root* vlSelf);

Vsqrt_calculator___024root::Vsqrt_calculator___024root(Vsqrt_calculator__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsqrt_calculator___024root___ctor_var_reset(this);
}

void Vsqrt_calculator___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsqrt_calculator___024root::~Vsqrt_calculator___024root() {
}
