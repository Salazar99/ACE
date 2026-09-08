// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_ARBITER4__SYMS_H_
#define VERILATED_VTB_ARBITER4__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_arbiter4.h"

// INCLUDE MODULE CLASSES
#include "Vtb_arbiter4___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_arbiter4__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_arbiter4* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_arbiter4___024root         TOP;

    // CONSTRUCTORS
    Vtb_arbiter4__Syms(VerilatedContext* contextp, const char* namep, Vtb_arbiter4* modelp);
    ~Vtb_arbiter4__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
