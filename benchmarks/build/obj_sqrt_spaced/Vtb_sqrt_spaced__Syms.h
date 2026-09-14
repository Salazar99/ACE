// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_SQRT_SPACED__SYMS_H_
#define VERILATED_VTB_SQRT_SPACED__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_sqrt_spaced.h"

// INCLUDE MODULE CLASSES
#include "Vtb_sqrt_spaced___024root.h"
#include "Vtb_sqrt_spaced_sqrt_intf.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_sqrt_spaced__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_sqrt_spaced* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_sqrt_spaced___024root      TOP;
    Vtb_sqrt_spaced_sqrt_intf      TOP__tb_sqrt_spaced__DOT__intf;

    // CONSTRUCTORS
    Vtb_sqrt_spaced__Syms(VerilatedContext* contextp, const char* namep, Vtb_sqrt_spaced* modelp);
    ~Vtb_sqrt_spaced__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
