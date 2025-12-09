// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsqrt_calculator.h for the primary calling header

#include "Vsqrt_calculator__pch.h"
#include "Vsqrt_calculator__Syms.h"
#include "Vsqrt_calculator___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsqrt_calculator___024root___dump_triggers__act(Vsqrt_calculator___024root* vlSelf);
#endif  // VL_DEBUG

void Vsqrt_calculator___024root___eval_triggers__act(Vsqrt_calculator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsqrt_calculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt_calculator___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((~ (IData)(vlSelfRef.clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsqrt_calculator___024root___dump_triggers__act(vlSelf);
    }
#endif
}
