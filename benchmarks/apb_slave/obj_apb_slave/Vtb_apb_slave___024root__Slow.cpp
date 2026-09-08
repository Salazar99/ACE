// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_apb_slave.h for the primary calling header

#include "Vtb_apb_slave__pch.h"
#include "Vtb_apb_slave__Syms.h"
#include "Vtb_apb_slave___024root.h"

void Vtb_apb_slave___024root___ctor_var_reset(Vtb_apb_slave___024root* vlSelf);

Vtb_apb_slave___024root::Vtb_apb_slave___024root(Vtb_apb_slave__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_apb_slave___024root___ctor_var_reset(this);
}

void Vtb_apb_slave___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_apb_slave___024root::~Vtb_apb_slave___024root() {
}
