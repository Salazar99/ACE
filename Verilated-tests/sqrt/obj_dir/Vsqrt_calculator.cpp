// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsqrt_calculator__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsqrt_calculator::Vsqrt_calculator(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsqrt_calculator__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , start{vlSymsp->TOP.start}
    , error{vlSymsp->TOP.error}
    , done{vlSymsp->TOP.done}
    , in{vlSymsp->TOP.in}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vsqrt_calculator::Vsqrt_calculator(const char* _vcname__)
    : Vsqrt_calculator(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsqrt_calculator::~Vsqrt_calculator() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsqrt_calculator___024root___eval_debug_assertions(Vsqrt_calculator___024root* vlSelf);
#endif  // VL_DEBUG
void Vsqrt_calculator___024root___eval_static(Vsqrt_calculator___024root* vlSelf);
void Vsqrt_calculator___024root___eval_initial(Vsqrt_calculator___024root* vlSelf);
void Vsqrt_calculator___024root___eval_settle(Vsqrt_calculator___024root* vlSelf);
void Vsqrt_calculator___024root___eval(Vsqrt_calculator___024root* vlSelf);

void Vsqrt_calculator::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsqrt_calculator::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsqrt_calculator___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsqrt_calculator___024root___eval_static(&(vlSymsp->TOP));
        Vsqrt_calculator___024root___eval_initial(&(vlSymsp->TOP));
        Vsqrt_calculator___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsqrt_calculator___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsqrt_calculator::eventsPending() { return false; }

uint64_t Vsqrt_calculator::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsqrt_calculator::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsqrt_calculator___024root___eval_final(Vsqrt_calculator___024root* vlSelf);

VL_ATTR_COLD void Vsqrt_calculator::final() {
    Vsqrt_calculator___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsqrt_calculator::hierName() const { return vlSymsp->name(); }
const char* Vsqrt_calculator::modelName() const { return "Vsqrt_calculator"; }
unsigned Vsqrt_calculator::threads() const { return 1; }
void Vsqrt_calculator::prepareClone() const { contextp()->prepareClone(); }
void Vsqrt_calculator::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsqrt_calculator::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsqrt_calculator___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsqrt_calculator___024root__trace_init_top(Vsqrt_calculator___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsqrt_calculator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsqrt_calculator___024root*>(voidSelf);
    Vsqrt_calculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vsqrt_calculator___024root__trace_decl_types(tracep);
    Vsqrt_calculator___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsqrt_calculator___024root__trace_register(Vsqrt_calculator___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsqrt_calculator::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsqrt_calculator::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsqrt_calculator___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
