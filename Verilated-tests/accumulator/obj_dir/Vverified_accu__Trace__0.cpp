// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vverified_accu__Syms.h"


void Vverified_accu___024root__trace_chg_0_sub_0(Vverified_accu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vverified_accu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_accu___024root__trace_chg_0\n"); );
    // Init
    Vverified_accu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vverified_accu___024root*>(voidSelf);
    Vverified_accu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vverified_accu___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vverified_accu___024root__trace_chg_0_sub_0(Vverified_accu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_accu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_accu___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst_n));
    bufp->chgCData(oldp+2,(vlSelfRef.data_in),8);
    bufp->chgBit(oldp+3,(vlSelfRef.valid_in));
    bufp->chgBit(oldp+4,(vlSelfRef.valid_out));
    bufp->chgSData(oldp+5,(vlSelfRef.data_out),10);
    bufp->chgCData(oldp+6,(vlSelfRef.verified_accu__DOT__count),2);
    bufp->chgBit(oldp+7,(vlSelfRef.verified_accu__DOT__add_cnt));
    bufp->chgBit(oldp+8,(vlSelfRef.verified_accu__DOT__end_cnt));
    bufp->chgSData(oldp+9,(vlSelfRef.verified_accu__DOT__data_out_reg),10);
}

void Vverified_accu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_accu___024root__trace_cleanup\n"); );
    // Init
    Vverified_accu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vverified_accu___024root*>(voidSelf);
    Vverified_accu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
