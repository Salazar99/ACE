// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vibex_alu__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vibex_alu::Vibex_alu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vibex_alu__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , operator_i{vlSymsp->TOP.operator_i}
    , instr_first_cycle_i{vlSymsp->TOP.instr_first_cycle_i}
    , multdiv_sel_i{vlSymsp->TOP.multdiv_sel_i}
    , imd_val_we_o{vlSymsp->TOP.imd_val_we_o}
    , comparison_result_o{vlSymsp->TOP.comparison_result_o}
    , is_equal_result_o{vlSymsp->TOP.is_equal_result_o}
    , operand_a_i{vlSymsp->TOP.operand_a_i}
    , operand_b_i{vlSymsp->TOP.operand_b_i}
    , adder_result_o{vlSymsp->TOP.adder_result_o}
    , result_o{vlSymsp->TOP.result_o}
    , multdiv_operand_a_i{vlSymsp->TOP.multdiv_operand_a_i}
    , multdiv_operand_b_i{vlSymsp->TOP.multdiv_operand_b_i}
    , adder_result_ext_o{vlSymsp->TOP.adder_result_ext_o}
    , imd_val_q_i{vlSymsp->TOP.imd_val_q_i}
    , imd_val_d_o{vlSymsp->TOP.imd_val_d_o}
    , __PVT__ibex_pkg{vlSymsp->TOP.__PVT__ibex_pkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vibex_alu::Vibex_alu(const char* _vcname__)
    : Vibex_alu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vibex_alu::~Vibex_alu() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vibex_alu___024root___eval_debug_assertions(Vibex_alu___024root* vlSelf);
#endif  // VL_DEBUG
void Vibex_alu___024root___eval_static(Vibex_alu___024root* vlSelf);
void Vibex_alu___024root___eval_initial(Vibex_alu___024root* vlSelf);
void Vibex_alu___024root___eval_settle(Vibex_alu___024root* vlSelf);
void Vibex_alu___024root___eval(Vibex_alu___024root* vlSelf);

void Vibex_alu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vibex_alu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vibex_alu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vibex_alu___024root___eval_static(&(vlSymsp->TOP));
        Vibex_alu___024root___eval_initial(&(vlSymsp->TOP));
        Vibex_alu___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vibex_alu___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vibex_alu::eventsPending() { return false; }

uint64_t Vibex_alu::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vibex_alu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vibex_alu___024root___eval_final(Vibex_alu___024root* vlSelf);

VL_ATTR_COLD void Vibex_alu::final() {
    Vibex_alu___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vibex_alu::hierName() const { return vlSymsp->name(); }
const char* Vibex_alu::modelName() const { return "Vibex_alu"; }
unsigned Vibex_alu::threads() const { return 1; }
void Vibex_alu::prepareClone() const { contextp()->prepareClone(); }
void Vibex_alu::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vibex_alu::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vibex_alu___024root__trace_decl_types(VerilatedVcd* tracep);

void Vibex_alu___024root__trace_init_top(Vibex_alu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vibex_alu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_alu___024root*>(voidSelf);
    Vibex_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vibex_alu___024root__trace_decl_types(tracep);
    Vibex_alu___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vibex_alu___024root__trace_register(Vibex_alu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vibex_alu::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vibex_alu::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vibex_alu___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
