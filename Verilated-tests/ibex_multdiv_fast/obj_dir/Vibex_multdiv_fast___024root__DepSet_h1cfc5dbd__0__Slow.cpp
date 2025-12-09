// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_multdiv_fast.h for the primary calling header

#include "Vibex_multdiv_fast__pch.h"
#include "Vibex_multdiv_fast__Syms.h"
#include "Vibex_multdiv_fast___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_multdiv_fast___024root___dump_triggers__stl(Vibex_multdiv_fast___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vibex_multdiv_fast___024root___eval_triggers__stl(Vibex_multdiv_fast___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_multdiv_fast___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vibex_multdiv_fast___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
