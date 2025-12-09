// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vverified_multi_16bit__Syms.h"


void Vverified_multi_16bit___024root__trace_chg_0_sub_0(Vverified_multi_16bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vverified_multi_16bit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_multi_16bit___024root__trace_chg_0\n"); );
    // Init
    Vverified_multi_16bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vverified_multi_16bit___024root*>(voidSelf);
    Vverified_multi_16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vverified_multi_16bit___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vverified_multi_16bit___024root__trace_chg_0_sub_0(Vverified_multi_16bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_multi_16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_multi_16bit___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelfRef.verified_multi_16bit__DOT__areg),16);
        bufp->chgSData(oldp+1,(vlSelfRef.verified_multi_16bit__DOT__breg),16);
        bufp->chgIData(oldp+2,(vlSelfRef.verified_multi_16bit__DOT__yout_r),32);
        bufp->chgBit(oldp+3,(vlSelfRef.verified_multi_16bit__DOT__done_r));
        bufp->chgCData(oldp+4,(vlSelfRef.verified_multi_16bit__DOT__i),5);
    }
    bufp->chgBit(oldp+5,(vlSelfRef.clk));
    bufp->chgBit(oldp+6,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+7,(vlSelfRef.start));
    bufp->chgSData(oldp+8,(vlSelfRef.ain),16);
    bufp->chgSData(oldp+9,(vlSelfRef.bin),16);
    bufp->chgIData(oldp+10,(vlSelfRef.yout),32);
    bufp->chgBit(oldp+11,(vlSelfRef.done));
}

void Vverified_multi_16bit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_multi_16bit___024root__trace_cleanup\n"); );
    // Init
    Vverified_multi_16bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vverified_multi_16bit___024root*>(voidSelf);
    Vverified_multi_16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
