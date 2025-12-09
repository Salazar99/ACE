// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsqrt_calculator__pch.h"
#include "Vsqrt_calculator.h"
#include "Vsqrt_calculator___024root.h"

// FUNCTIONS
Vsqrt_calculator__Syms::~Vsqrt_calculator__Syms()
{
}

Vsqrt_calculator__Syms::Vsqrt_calculator__Syms(VerilatedContext* contextp, const char* namep, Vsqrt_calculator* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(29);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
