// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vverified_multi_16bit__pch.h"
#include "Vverified_multi_16bit.h"
#include "Vverified_multi_16bit___024root.h"

// FUNCTIONS
Vverified_multi_16bit__Syms::~Vverified_multi_16bit__Syms()
{
}

Vverified_multi_16bit__Syms::Vverified_multi_16bit__Syms(VerilatedContext* contextp, const char* namep, Vverified_multi_16bit* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(20);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
