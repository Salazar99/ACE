// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VVERIFIED_ACCU__SYMS_H_
#define VERILATED_VVERIFIED_ACCU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vverified_accu.h"

// INCLUDE MODULE CLASSES
#include "Vverified_accu___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vverified_accu__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vverified_accu* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vverified_accu___024root       TOP;

    // CONSTRUCTORS
    Vverified_accu__Syms(VerilatedContext* contextp, const char* namep, Vverified_accu* modelp);
    ~Vverified_accu__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
