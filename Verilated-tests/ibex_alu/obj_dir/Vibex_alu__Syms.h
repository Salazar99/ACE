// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VIBEX_ALU__SYMS_H_
#define VERILATED_VIBEX_ALU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vibex_alu.h"

// INCLUDE MODULE CLASSES
#include "Vibex_alu___024root.h"
#include "Vibex_alu_ibex_pkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vibex_alu__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vibex_alu* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vibex_alu___024root            TOP;
    Vibex_alu_ibex_pkg             TOP__ibex_pkg;

    // CONSTRUCTORS
    Vibex_alu__Syms(VerilatedContext* contextp, const char* namep, Vibex_alu* modelp);
    ~Vibex_alu__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
