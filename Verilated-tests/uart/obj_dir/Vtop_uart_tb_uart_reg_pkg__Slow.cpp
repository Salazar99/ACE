// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_uart_tb.h for the primary calling header

#include "Vtop_uart_tb__pch.h"
#include "Vtop_uart_tb__Syms.h"
#include "Vtop_uart_tb_uart_reg_pkg.h"

// Parameter definitions for Vtop_uart_tb_uart_reg_pkg
constexpr VlUnpacked<CData/*3:0*/, 13> Vtop_uart_tb_uart_reg_pkg::__PVT__UART_PERMIT;


void Vtop_uart_tb_uart_reg_pkg___ctor_var_reset(Vtop_uart_tb_uart_reg_pkg* vlSelf);

Vtop_uart_tb_uart_reg_pkg::Vtop_uart_tb_uart_reg_pkg(Vtop_uart_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_uart_tb_uart_reg_pkg___ctor_var_reset(this);
}

void Vtop_uart_tb_uart_reg_pkg::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_uart_tb_uart_reg_pkg::~Vtop_uart_tb_uart_reg_pkg() {
}
