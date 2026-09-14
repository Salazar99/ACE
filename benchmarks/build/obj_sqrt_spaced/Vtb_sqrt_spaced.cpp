// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_sqrt_spaced__pch.h"

//============================================================
// Constructors

Vtb_sqrt_spaced::Vtb_sqrt_spaced(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_sqrt_spaced__Syms(contextp(), _vcname__, this)}
    , __PVT__tb_sqrt_spaced__DOT__intf{vlSymsp->TOP.__PVT__tb_sqrt_spaced__DOT__intf}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_sqrt_spaced::Vtb_sqrt_spaced(const char* _vcname__)
    : Vtb_sqrt_spaced(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_sqrt_spaced::~Vtb_sqrt_spaced() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_sqrt_spaced___024root___eval_debug_assertions(Vtb_sqrt_spaced___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_sqrt_spaced___024root___eval_static(Vtb_sqrt_spaced___024root* vlSelf);
void Vtb_sqrt_spaced___024root___eval_initial(Vtb_sqrt_spaced___024root* vlSelf);
void Vtb_sqrt_spaced___024root___eval_settle(Vtb_sqrt_spaced___024root* vlSelf);
void Vtb_sqrt_spaced___024root___eval(Vtb_sqrt_spaced___024root* vlSelf);

void Vtb_sqrt_spaced::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_sqrt_spaced::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_sqrt_spaced___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_sqrt_spaced___024root___eval_static(&(vlSymsp->TOP));
        Vtb_sqrt_spaced___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_sqrt_spaced___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_sqrt_spaced___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_sqrt_spaced::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_sqrt_spaced::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_sqrt_spaced::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_sqrt_spaced___024root___eval_final(Vtb_sqrt_spaced___024root* vlSelf);

VL_ATTR_COLD void Vtb_sqrt_spaced::final() {
    Vtb_sqrt_spaced___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_sqrt_spaced::hierName() const { return vlSymsp->name(); }
const char* Vtb_sqrt_spaced::modelName() const { return "Vtb_sqrt_spaced"; }
unsigned Vtb_sqrt_spaced::threads() const { return 1; }
void Vtb_sqrt_spaced::prepareClone() const { contextp()->prepareClone(); }
void Vtb_sqrt_spaced::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtb_sqrt_spaced::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_sqrt_spaced::trace()' called on model that was Verilated without --trace option");
}
