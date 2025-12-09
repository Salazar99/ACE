// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vverified_multi_16bit__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vverified_multi_16bit::Vverified_multi_16bit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vverified_multi_16bit__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , start{vlSymsp->TOP.start}
    , done{vlSymsp->TOP.done}
    , ain{vlSymsp->TOP.ain}
    , bin{vlSymsp->TOP.bin}
    , yout{vlSymsp->TOP.yout}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vverified_multi_16bit::Vverified_multi_16bit(const char* _vcname__)
    : Vverified_multi_16bit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vverified_multi_16bit::~Vverified_multi_16bit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vverified_multi_16bit___024root___eval_debug_assertions(Vverified_multi_16bit___024root* vlSelf);
#endif  // VL_DEBUG
void Vverified_multi_16bit___024root___eval_static(Vverified_multi_16bit___024root* vlSelf);
void Vverified_multi_16bit___024root___eval_initial(Vverified_multi_16bit___024root* vlSelf);
void Vverified_multi_16bit___024root___eval_settle(Vverified_multi_16bit___024root* vlSelf);
void Vverified_multi_16bit___024root___eval(Vverified_multi_16bit___024root* vlSelf);

void Vverified_multi_16bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vverified_multi_16bit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vverified_multi_16bit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vverified_multi_16bit___024root___eval_static(&(vlSymsp->TOP));
        Vverified_multi_16bit___024root___eval_initial(&(vlSymsp->TOP));
        Vverified_multi_16bit___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vverified_multi_16bit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vverified_multi_16bit::eventsPending() { return false; }

uint64_t Vverified_multi_16bit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vverified_multi_16bit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vverified_multi_16bit___024root___eval_final(Vverified_multi_16bit___024root* vlSelf);

VL_ATTR_COLD void Vverified_multi_16bit::final() {
    Vverified_multi_16bit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vverified_multi_16bit::hierName() const { return vlSymsp->name(); }
const char* Vverified_multi_16bit::modelName() const { return "Vverified_multi_16bit"; }
unsigned Vverified_multi_16bit::threads() const { return 1; }
void Vverified_multi_16bit::prepareClone() const { contextp()->prepareClone(); }
void Vverified_multi_16bit::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vverified_multi_16bit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vverified_multi_16bit___024root__trace_decl_types(VerilatedVcd* tracep);

void Vverified_multi_16bit___024root__trace_init_top(Vverified_multi_16bit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vverified_multi_16bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vverified_multi_16bit___024root*>(voidSelf);
    Vverified_multi_16bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vverified_multi_16bit___024root__trace_decl_types(tracep);
    Vverified_multi_16bit___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vverified_multi_16bit___024root__trace_register(Vverified_multi_16bit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vverified_multi_16bit::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vverified_multi_16bit::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vverified_multi_16bit___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
