// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_uart_tb.h for the primary calling header

#include "Vtop_uart_tb__pch.h"
#include "Vtop_uart_tb__Syms.h"
#include "Vtop_uart_tb___024root.h"

// Parameter definitions for Vtop_uart_tb___024root
constexpr VlUnpacked<CData/*0:0*/, 13> Vtop_uart_tb___024root::top_uart_tb__DOT__dut__DOT__RaclPolicySelVec;
constexpr VlUnpacked<CData/*0:0*/, 13> Vtop_uart_tb___024root::top_uart_tb__DOT__dut__DOT__u_reg__DOT__RaclPolicySelVec;


void Vtop_uart_tb___024root___ctor_var_reset(Vtop_uart_tb___024root* vlSelf);

Vtop_uart_tb___024root::Vtop_uart_tb___024root(Vtop_uart_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_uart_tb___024root___ctor_var_reset(this);
}

void Vtop_uart_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_uart_tb___024root::~Vtop_uart_tb___024root() {
}
