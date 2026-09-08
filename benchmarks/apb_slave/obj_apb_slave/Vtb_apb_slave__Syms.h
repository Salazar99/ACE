// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_APB_SLAVE__SYMS_H_
#define VERILATED_VTB_APB_SLAVE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_apb_slave.h"

// INCLUDE MODULE CLASSES
#include "Vtb_apb_slave___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_apb_slave__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_apb_slave* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_apb_slave___024root        TOP;

    // CONSTRUCTORS
    Vtb_apb_slave__Syms(VerilatedContext* contextp, const char* namep, Vtb_apb_slave* modelp);
    ~Vtb_apb_slave__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
