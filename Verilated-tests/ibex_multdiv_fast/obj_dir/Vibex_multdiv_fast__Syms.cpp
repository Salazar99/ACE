// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vibex_multdiv_fast__pch.h"
#include "Vibex_multdiv_fast.h"
#include "Vibex_multdiv_fast___024root.h"
#include "Vibex_multdiv_fast_ibex_pkg.h"

// FUNCTIONS
Vibex_multdiv_fast__Syms::~Vibex_multdiv_fast__Syms()
{
}

Vibex_multdiv_fast__Syms::Vibex_multdiv_fast__Syms(VerilatedContext* contextp, const char* namep, Vibex_multdiv_fast* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__ibex_pkg{this, Verilated::catName(namep, "ibex_pkg")}
{
        // Check resources
        Verilated::stackCheck(25);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__ibex_pkg = &TOP__ibex_pkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__ibex_pkg.__Vconfigure(true);
}
