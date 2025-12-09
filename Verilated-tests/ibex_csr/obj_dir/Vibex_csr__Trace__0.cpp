// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vibex_csr__Syms.h"


void Vibex_csr___024root__trace_chg_0_sub_0(Vibex_csr___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vibex_csr___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_csr___024root__trace_chg_0\n"); );
    // Init
    Vibex_csr___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_csr___024root*>(voidSelf);
    Vibex_csr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vibex_csr___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vibex_csr___024root__trace_chg_0_sub_0(Vibex_csr___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_csr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_csr___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk_i));
    bufp->chgBit(oldp+1,(vlSelfRef.rst_ni));
    bufp->chgIData(oldp+2,(vlSelfRef.wr_data_i),32);
    bufp->chgBit(oldp+3,(vlSelfRef.wr_en_i));
    bufp->chgIData(oldp+4,(vlSelfRef.rd_data_o),32);
    bufp->chgBit(oldp+5,(vlSelfRef.rd_error_o));
    bufp->chgIData(oldp+6,(vlSelfRef.ibex_csr__DOT__rdata_q),32);
}

void Vibex_csr___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_csr___024root__trace_cleanup\n"); );
    // Init
    Vibex_csr___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_csr___024root*>(voidSelf);
    Vibex_csr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
