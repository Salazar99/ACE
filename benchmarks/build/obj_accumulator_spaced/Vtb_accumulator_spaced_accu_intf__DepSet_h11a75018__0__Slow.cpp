// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_accumulator_spaced.h for the primary calling header

#include "Vtb_accumulator_spaced__pch.h"
#include "Vtb_accumulator_spaced_accu_intf.h"

VL_ATTR_COLD void Vtb_accumulator_spaced_accu_intf___ctor_var_reset(Vtb_accumulator_spaced_accu_intf* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_accumulator_spaced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_accumulator_spaced_accu_intf___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->data_in = VL_RAND_RESET_I(8);
    vlSelf->valid_in = VL_RAND_RESET_I(1);
    vlSelf->valid_out = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(10);
}
