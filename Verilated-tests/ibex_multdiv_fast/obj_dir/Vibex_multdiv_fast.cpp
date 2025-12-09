// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vibex_multdiv_fast__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vibex_multdiv_fast::Vibex_multdiv_fast(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vibex_multdiv_fast__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , mult_en_i{vlSymsp->TOP.mult_en_i}
    , div_en_i{vlSymsp->TOP.div_en_i}
    , mult_sel_i{vlSymsp->TOP.mult_sel_i}
    , div_sel_i{vlSymsp->TOP.div_sel_i}
    , operator_i{vlSymsp->TOP.operator_i}
    , signed_mode_i{vlSymsp->TOP.signed_mode_i}
    , equal_to_zero_i{vlSymsp->TOP.equal_to_zero_i}
    , data_ind_timing_i{vlSymsp->TOP.data_ind_timing_i}
    , imd_val_we_o{vlSymsp->TOP.imd_val_we_o}
    , multdiv_ready_id_i{vlSymsp->TOP.multdiv_ready_id_i}
    , valid_o{vlSymsp->TOP.valid_o}
    , op_a_i{vlSymsp->TOP.op_a_i}
    , op_b_i{vlSymsp->TOP.op_b_i}
    , alu_adder_i{vlSymsp->TOP.alu_adder_i}
    , multdiv_result_o{vlSymsp->TOP.multdiv_result_o}
    , alu_adder_ext_i{vlSymsp->TOP.alu_adder_ext_i}
    , alu_operand_a_o{vlSymsp->TOP.alu_operand_a_o}
    , alu_operand_b_o{vlSymsp->TOP.alu_operand_b_o}
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

Vibex_multdiv_fast::Vibex_multdiv_fast(const char* _vcname__)
    : Vibex_multdiv_fast(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vibex_multdiv_fast::~Vibex_multdiv_fast() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vibex_multdiv_fast___024root___eval_debug_assertions(Vibex_multdiv_fast___024root* vlSelf);
#endif  // VL_DEBUG
void Vibex_multdiv_fast___024root___eval_static(Vibex_multdiv_fast___024root* vlSelf);
void Vibex_multdiv_fast___024root___eval_initial(Vibex_multdiv_fast___024root* vlSelf);
void Vibex_multdiv_fast___024root___eval_settle(Vibex_multdiv_fast___024root* vlSelf);
void Vibex_multdiv_fast___024root___eval(Vibex_multdiv_fast___024root* vlSelf);

void Vibex_multdiv_fast::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vibex_multdiv_fast::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vibex_multdiv_fast___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vibex_multdiv_fast___024root___eval_static(&(vlSymsp->TOP));
        Vibex_multdiv_fast___024root___eval_initial(&(vlSymsp->TOP));
        Vibex_multdiv_fast___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vibex_multdiv_fast___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vibex_multdiv_fast::eventsPending() { return false; }

uint64_t Vibex_multdiv_fast::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vibex_multdiv_fast::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vibex_multdiv_fast___024root___eval_final(Vibex_multdiv_fast___024root* vlSelf);

VL_ATTR_COLD void Vibex_multdiv_fast::final() {
    Vibex_multdiv_fast___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vibex_multdiv_fast::hierName() const { return vlSymsp->name(); }
const char* Vibex_multdiv_fast::modelName() const { return "Vibex_multdiv_fast"; }
unsigned Vibex_multdiv_fast::threads() const { return 1; }
void Vibex_multdiv_fast::prepareClone() const { contextp()->prepareClone(); }
void Vibex_multdiv_fast::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vibex_multdiv_fast::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vibex_multdiv_fast___024root__trace_decl_types(VerilatedVcd* tracep);

void Vibex_multdiv_fast___024root__trace_init_top(Vibex_multdiv_fast___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vibex_multdiv_fast___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_multdiv_fast___024root*>(voidSelf);
    Vibex_multdiv_fast__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vibex_multdiv_fast___024root__trace_decl_types(tracep);
    Vibex_multdiv_fast___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vibex_multdiv_fast___024root__trace_register(Vibex_multdiv_fast___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vibex_multdiv_fast::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vibex_multdiv_fast::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vibex_multdiv_fast___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
