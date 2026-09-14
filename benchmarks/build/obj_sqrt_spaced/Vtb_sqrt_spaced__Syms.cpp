// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_sqrt_spaced__pch.h"
#include "Vtb_sqrt_spaced.h"
#include "Vtb_sqrt_spaced___024root.h"
#include "Vtb_sqrt_spaced_sqrt_intf.h"

// FUNCTIONS
Vtb_sqrt_spaced__Syms::~Vtb_sqrt_spaced__Syms()
{
}

Vtb_sqrt_spaced__Syms::Vtb_sqrt_spaced__Syms(VerilatedContext* contextp, const char* namep, Vtb_sqrt_spaced* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__tb_sqrt_spaced__DOT__intf{this, Verilated::catName(namep, "tb_sqrt_spaced.intf")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__tb_sqrt_spaced__DOT__intf = &TOP__tb_sqrt_spaced__DOT__intf;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_sqrt_spaced__DOT__intf.__Vconfigure(true);
}
