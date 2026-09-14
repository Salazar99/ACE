// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_ACCUMULATOR_SPACED__SYMS_H_
#define VERILATED_VTB_ACCUMULATOR_SPACED__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_accumulator_spaced.h"

// INCLUDE MODULE CLASSES
#include "Vtb_accumulator_spaced___024root.h"
#include "Vtb_accumulator_spaced_accu_intf.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_accumulator_spaced__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_accumulator_spaced* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_accumulator_spaced___024root TOP;
    Vtb_accumulator_spaced_accu_intf TOP__tb_accumulator_spaced__DOT__intf;

    // CONSTRUCTORS
    Vtb_accumulator_spaced__Syms(VerilatedContext* contextp, const char* namep, Vtb_accumulator_spaced* modelp);
    ~Vtb_accumulator_spaced__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
