// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sqrt_spaced.h for the primary calling header

#include "Vtb_sqrt_spaced__pch.h"
#include "Vtb_sqrt_spaced_sqrt_intf.h"

std::string VL_TO_STRING(const Vtb_sqrt_spaced_sqrt_intf* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sqrt_spaced_sqrt_intf::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
