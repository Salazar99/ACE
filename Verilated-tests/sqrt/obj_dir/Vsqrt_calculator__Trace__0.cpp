// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsqrt_calculator__Syms.h"


void Vsqrt_calculator___024root__trace_chg_0_sub_0(Vsqrt_calculator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsqrt_calculator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt_calculator___024root__trace_chg_0\n"); );
    // Init
    Vsqrt_calculator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsqrt_calculator___024root*>(voidSelf);
    Vsqrt_calculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsqrt_calculator___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsqrt_calculator___024root__trace_chg_0_sub_0(Vsqrt_calculator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsqrt_calculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt_calculator___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.sqrt_calculator__DOT__num),32);
        bufp->chgIData(oldp+1,(vlSelfRef.sqrt_calculator__DOT__guess),32);
        bufp->chgIData(oldp+2,(vlSelfRef.sqrt_calculator__DOT__iter),32);
    }
    bufp->chgBit(oldp+3,(vlSelfRef.clk));
    bufp->chgBit(oldp+4,(vlSelfRef.rst));
    bufp->chgBit(oldp+5,(vlSelfRef.start));
    bufp->chgIData(oldp+6,(vlSelfRef.in),32);
    bufp->chgIData(oldp+7,(vlSelfRef.out),32);
    bufp->chgBit(oldp+8,(vlSelfRef.error));
    bufp->chgBit(oldp+9,(vlSelfRef.done));
}

void Vsqrt_calculator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt_calculator___024root__trace_cleanup\n"); );
    // Init
    Vsqrt_calculator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsqrt_calculator___024root*>(voidSelf);
    Vsqrt_calculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
