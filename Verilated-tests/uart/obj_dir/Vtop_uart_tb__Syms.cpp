// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop_uart_tb__pch.h"
#include "Vtop_uart_tb.h"
#include "Vtop_uart_tb___024root.h"
#include "Vtop_uart_tb_uart_reg_pkg.h"
#include "Vtop_uart_tb_prim_sha2_pkg.h"

// FUNCTIONS
Vtop_uart_tb__Syms::~Vtop_uart_tb__Syms()
{
}

Vtop_uart_tb__Syms::Vtop_uart_tb__Syms(VerilatedContext* contextp, const char* namep, Vtop_uart_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__prim_sha2_pkg{this, Verilated::catName(namep, "prim_sha2_pkg")}
    , TOP__uart_reg_pkg{this, Verilated::catName(namep, "uart_reg_pkg")}
{
        // Check resources
        Verilated::stackCheck(469);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__prim_sha2_pkg = &TOP__prim_sha2_pkg;
    TOP.__PVT__uart_reg_pkg = &TOP__uart_reg_pkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__prim_sha2_pkg.__Vconfigure(true);
    TOP__uart_reg_pkg.__Vconfigure(true);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
