// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCOMPARATOR_3BIT__SYMS_H_
#define VERILATED_VCOMPARATOR_3BIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcomparator_3bit.h"

// INCLUDE MODULE CLASSES
#include "Vcomparator_3bit___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vcomparator_3bit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcomparator_3bit* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcomparator_3bit___024root     TOP;

    // CONSTRUCTORS
    Vcomparator_3bit__Syms(VerilatedContext* contextp, const char* namep, Vcomparator_3bit* modelp);
    ~Vcomparator_3bit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
