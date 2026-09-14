// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_accumulator_spaced.h for the primary calling header

#include "Vtb_accumulator_spaced__pch.h"
#include "Vtb_accumulator_spaced__Syms.h"
#include "Vtb_accumulator_spaced___024root.h"

void Vtb_accumulator_spaced___024root___ctor_var_reset(Vtb_accumulator_spaced___024root* vlSelf);

Vtb_accumulator_spaced___024root::Vtb_accumulator_spaced___024root(Vtb_accumulator_spaced__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_accumulator_spaced___024root___ctor_var_reset(this);
}

void Vtb_accumulator_spaced___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_accumulator_spaced___024root::~Vtb_accumulator_spaced___024root() {
}
