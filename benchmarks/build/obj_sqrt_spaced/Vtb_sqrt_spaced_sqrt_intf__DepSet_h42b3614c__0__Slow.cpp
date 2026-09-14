// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sqrt_spaced.h for the primary calling header

#include "Vtb_sqrt_spaced__pch.h"
#include "Vtb_sqrt_spaced_sqrt_intf.h"

VL_ATTR_COLD void Vtb_sqrt_spaced_sqrt_intf___ctor_var_reset(Vtb_sqrt_spaced_sqrt_intf* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_sqrt_spaced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sqrt_spaced_sqrt_intf___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    vlSelf->in = VL_RAND_RESET_Q(33);
    vlSelf->out = VL_RAND_RESET_Q(33);
    vlSelf->error = VL_RAND_RESET_I(1);
    vlSelf->done = VL_RAND_RESET_I(1);
}
