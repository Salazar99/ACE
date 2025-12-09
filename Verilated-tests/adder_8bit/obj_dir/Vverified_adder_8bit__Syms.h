// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VVERIFIED_ADDER_8BIT__SYMS_H_
#define VERILATED_VVERIFIED_ADDER_8BIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vverified_adder_8bit.h"

// INCLUDE MODULE CLASSES
#include "Vverified_adder_8bit___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vverified_adder_8bit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vverified_adder_8bit* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vverified_adder_8bit___024root TOP;

    // CONSTRUCTORS
    Vverified_adder_8bit__Syms(VerilatedContext* contextp, const char* namep, Vverified_adder_8bit* modelp);
    ~Vverified_adder_8bit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
