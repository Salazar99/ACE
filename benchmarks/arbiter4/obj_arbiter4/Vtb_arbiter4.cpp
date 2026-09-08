// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_arbiter4__pch.h"

//============================================================
// Constructors

Vtb_arbiter4::Vtb_arbiter4(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_arbiter4__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_arbiter4::Vtb_arbiter4(const char* _vcname__)
    : Vtb_arbiter4(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_arbiter4::~Vtb_arbiter4() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_arbiter4___024root___eval_debug_assertions(Vtb_arbiter4___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_arbiter4___024root___eval_static(Vtb_arbiter4___024root* vlSelf);
void Vtb_arbiter4___024root___eval_initial(Vtb_arbiter4___024root* vlSelf);
void Vtb_arbiter4___024root___eval_settle(Vtb_arbiter4___024root* vlSelf);
void Vtb_arbiter4___024root___eval(Vtb_arbiter4___024root* vlSelf);

void Vtb_arbiter4::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_arbiter4::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_arbiter4___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_arbiter4___024root___eval_static(&(vlSymsp->TOP));
        Vtb_arbiter4___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_arbiter4___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_arbiter4___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_arbiter4::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_arbiter4::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_arbiter4::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_arbiter4___024root___eval_final(Vtb_arbiter4___024root* vlSelf);

VL_ATTR_COLD void Vtb_arbiter4::final() {
    Vtb_arbiter4___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_arbiter4::hierName() const { return vlSymsp->name(); }
const char* Vtb_arbiter4::modelName() const { return "Vtb_arbiter4"; }
unsigned Vtb_arbiter4::threads() const { return 1; }
void Vtb_arbiter4::prepareClone() const { contextp()->prepareClone(); }
void Vtb_arbiter4::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtb_arbiter4::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_arbiter4::trace()' called on model that was Verilated without --trace option");
}
