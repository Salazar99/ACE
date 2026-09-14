// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_accumulator_spaced.h for the primary calling header

#include "Vtb_accumulator_spaced__pch.h"
#include "Vtb_accumulator_spaced_accu_intf.h"

std::string VL_TO_STRING(const Vtb_accumulator_spaced_accu_intf* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_accumulator_spaced_accu_intf::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
