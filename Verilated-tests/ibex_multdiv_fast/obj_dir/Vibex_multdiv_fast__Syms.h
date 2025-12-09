// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VIBEX_MULTDIV_FAST__SYMS_H_
#define VERILATED_VIBEX_MULTDIV_FAST__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vibex_multdiv_fast.h"

// INCLUDE MODULE CLASSES
#include "Vibex_multdiv_fast___024root.h"
#include "Vibex_multdiv_fast_ibex_pkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vibex_multdiv_fast__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vibex_multdiv_fast* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vibex_multdiv_fast___024root   TOP;
    Vibex_multdiv_fast_ibex_pkg    TOP__ibex_pkg;

    // CONSTRUCTORS
    Vibex_multdiv_fast__Syms(VerilatedContext* contextp, const char* namep, Vibex_multdiv_fast* modelp);
    ~Vibex_multdiv_fast__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
