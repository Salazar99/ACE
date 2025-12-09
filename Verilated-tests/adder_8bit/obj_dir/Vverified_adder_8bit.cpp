// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vverified_adder_8bit__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vverified_adder_8bit::Vverified_adder_8bit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vverified_adder_8bit__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , cin{vlSymsp->TOP.cin}
    , sum{vlSymsp->TOP.sum}
    , cout{vlSymsp->TOP.cout}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vverified_adder_8bit::Vverified_adder_8bit(const char* _vcname__)
    : Vverified_adder_8bit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vverified_adder_8bit::~Vverified_adder_8bit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vverified_adder_8bit___024root___eval_debug_assertions(Vverified_adder_8bit___024root* vlSelf);
#endif  // VL_DEBUG
void Vverified_adder_8bit___024root___eval_static(Vverified_adder_8bit___024root* vlSelf);
void Vverified_adder_8bit___024root___eval_initial(Vverified_adder_8bit___024root* vlSelf);
void Vverified_adder_8bit___024root___eval_settle(Vverified_adder_8bit___024root* vlSelf);
void Vverified_adder_8bit___024root___eval(Vverified_adder_8bit___024root* vlSelf);

void Vverified_adder_8bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vverified_adder_8bit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vverified_adder_8bit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vverified_adder_8bit___024root___eval_static(&(vlSymsp->TOP));
        Vverified_adder_8bit___024root___eval_initial(&(vlSymsp->TOP));
        Vverified_adder_8bit___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vverified_adder_8bit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vverified_adder_8bit::eventsPending() { return false; }

uint64_t Vverified_adder_8bit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vverified_adder_8bit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vverified_adder_8bit___024root___eval_final(Vverified_adder_8bit___024root* vlSelf);

VL_ATTR_COLD void Vverified_adder_8bit::final() {
    Vverified_adder_8bit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vverified_adder_8bit::hierName() const { return vlSymsp->name(); }
const char* Vverified_adder_8bit::modelName() const { return "Vverified_adder_8bit"; }
unsigned Vverified_adder_8bit::threads() const { return 1; }
void Vverified_adder_8bit::prepareClone() const { contextp()->prepareClone(); }
void Vverified_adder_8bit::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vverified_adder_8bit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vverified_adder_8bit___024root__trace_decl_types(VerilatedVcd* tracep);

void Vverified_adder_8bit___024root__trace_init_top(Vverified_adder_8bit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vverified_adder_8bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vverified_adder_8bit___024root*>(voidSelf);
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vverified_adder_8bit___024root__trace_decl_types(tracep);
    Vverified_adder_8bit___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vverified_adder_8bit___024root__trace_register(Vverified_adder_8bit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vverified_adder_8bit::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vverified_adder_8bit::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vverified_adder_8bit___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
