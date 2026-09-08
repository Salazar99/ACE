// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_apb_slave__pch.h"

//============================================================
// Constructors

Vtb_apb_slave::Vtb_apb_slave(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_apb_slave__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_apb_slave::Vtb_apb_slave(const char* _vcname__)
    : Vtb_apb_slave(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_apb_slave::~Vtb_apb_slave() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_apb_slave___024root___eval_debug_assertions(Vtb_apb_slave___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_apb_slave___024root___eval_static(Vtb_apb_slave___024root* vlSelf);
void Vtb_apb_slave___024root___eval_initial(Vtb_apb_slave___024root* vlSelf);
void Vtb_apb_slave___024root___eval_settle(Vtb_apb_slave___024root* vlSelf);
void Vtb_apb_slave___024root___eval(Vtb_apb_slave___024root* vlSelf);

void Vtb_apb_slave::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_apb_slave::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_apb_slave___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_apb_slave___024root___eval_static(&(vlSymsp->TOP));
        Vtb_apb_slave___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_apb_slave___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_apb_slave___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_apb_slave::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_apb_slave::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_apb_slave::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_apb_slave___024root___eval_final(Vtb_apb_slave___024root* vlSelf);

VL_ATTR_COLD void Vtb_apb_slave::final() {
    Vtb_apb_slave___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_apb_slave::hierName() const { return vlSymsp->name(); }
const char* Vtb_apb_slave::modelName() const { return "Vtb_apb_slave"; }
unsigned Vtb_apb_slave::threads() const { return 1; }
void Vtb_apb_slave::prepareClone() const { contextp()->prepareClone(); }
void Vtb_apb_slave::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtb_apb_slave::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_apb_slave::trace()' called on model that was Verilated without --trace option");
}
