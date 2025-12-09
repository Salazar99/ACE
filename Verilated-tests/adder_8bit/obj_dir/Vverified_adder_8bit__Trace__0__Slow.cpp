// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vverified_adder_8bit__Syms.h"


VL_ATTR_COLD void Vverified_adder_8bit___024root__trace_init_sub__TOP__0(Vverified_adder_8bit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+9,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+12,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+14,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("verified_adder_8bit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+9,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+12,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+14,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("FA0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+15,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+19,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+23,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+27,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+31,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+35,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+39,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("FA7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+43,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vverified_adder_8bit___024root__trace_init_top(Vverified_adder_8bit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vverified_adder_8bit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vverified_adder_8bit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vverified_adder_8bit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vverified_adder_8bit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vverified_adder_8bit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vverified_adder_8bit___024root__trace_register(Vverified_adder_8bit___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vverified_adder_8bit___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vverified_adder_8bit___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vverified_adder_8bit___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vverified_adder_8bit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vverified_adder_8bit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root__trace_const_0\n"); );
    // Init
    Vverified_adder_8bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vverified_adder_8bit___024root*>(voidSelf);
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vverified_adder_8bit___024root__trace_full_0_sub_0(Vverified_adder_8bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vverified_adder_8bit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root__trace_full_0\n"); );
    // Init
    Vverified_adder_8bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vverified_adder_8bit___024root*>(voidSelf);
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vverified_adder_8bit___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vverified_adder_8bit___024root__trace_full_0_sub_0(Vverified_adder_8bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelfRef.verified_adder_8bit__DOT__c),9);
    bufp->fullBit(oldp+2,((1U & (IData)(vlSelfRef.verified_adder_8bit__DOT__c))));
    bufp->fullBit(oldp+3,((1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                 >> 1U))));
    bufp->fullBit(oldp+4,((1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                 >> 2U))));
    bufp->fullBit(oldp+5,((1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                 >> 3U))));
    bufp->fullBit(oldp+6,((1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                 >> 4U))));
    bufp->fullBit(oldp+7,((1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                 >> 5U))));
    bufp->fullBit(oldp+8,((1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                 >> 6U))));
    bufp->fullBit(oldp+9,(vlSelfRef.clk));
    bufp->fullCData(oldp+10,(vlSelfRef.a),8);
    bufp->fullCData(oldp+11,(vlSelfRef.b),8);
    bufp->fullBit(oldp+12,(vlSelfRef.cin));
    bufp->fullCData(oldp+13,(vlSelfRef.sum),8);
    bufp->fullBit(oldp+14,(vlSelfRef.cout));
    bufp->fullBit(oldp+15,((1U & (IData)(vlSelfRef.a))));
    bufp->fullBit(oldp+16,((1U & (IData)(vlSelfRef.b))));
    bufp->fullBit(oldp+17,((1U & ((IData)(vlSelfRef.a) 
                                  + ((IData)(vlSelfRef.b) 
                                     + (IData)(vlSelfRef.cin))))));
    bufp->fullBit(oldp+18,((1U & (((1U & (IData)(vlSelfRef.a)) 
                                   + ((1U & (IData)(vlSelfRef.b)) 
                                      + (IData)(vlSelfRef.cin))) 
                                  >> 1U))));
    bufp->fullBit(oldp+19,((1U & ((IData)(vlSelfRef.a) 
                                  >> 1U))));
    bufp->fullBit(oldp+20,((1U & ((IData)(vlSelfRef.b) 
                                  >> 1U))));
    bufp->fullBit(oldp+21,((1U & (((IData)(vlSelfRef.a) 
                                   >> 1U) + (((IData)(vlSelfRef.b) 
                                              >> 1U) 
                                             + (IData)(vlSelfRef.verified_adder_8bit__DOT__c))))));
    bufp->fullBit(oldp+22,((1U & (((1U & ((IData)(vlSelfRef.a) 
                                          >> 1U)) + 
                                   ((1U & ((IData)(vlSelfRef.b) 
                                           >> 1U)) 
                                    + (1U & (IData)(vlSelfRef.verified_adder_8bit__DOT__c)))) 
                                  >> 1U))));
    bufp->fullBit(oldp+23,((1U & ((IData)(vlSelfRef.a) 
                                  >> 2U))));
    bufp->fullBit(oldp+24,((1U & ((IData)(vlSelfRef.b) 
                                  >> 2U))));
    bufp->fullBit(oldp+25,((1U & (((IData)(vlSelfRef.a) 
                                   >> 2U) + (((IData)(vlSelfRef.b) 
                                              >> 2U) 
                                             + ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                                >> 1U))))));
    bufp->fullBit(oldp+26,((1U & (((1U & ((IData)(vlSelfRef.a) 
                                          >> 2U)) + 
                                   ((1U & ((IData)(vlSelfRef.b) 
                                           >> 2U)) 
                                    + (1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                             >> 1U)))) 
                                  >> 1U))));
    bufp->fullBit(oldp+27,((1U & ((IData)(vlSelfRef.a) 
                                  >> 3U))));
    bufp->fullBit(oldp+28,((1U & ((IData)(vlSelfRef.b) 
                                  >> 3U))));
    bufp->fullBit(oldp+29,((1U & (((IData)(vlSelfRef.a) 
                                   >> 3U) + (((IData)(vlSelfRef.b) 
                                              >> 3U) 
                                             + ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                                >> 2U))))));
    bufp->fullBit(oldp+30,((1U & (((1U & ((IData)(vlSelfRef.a) 
                                          >> 3U)) + 
                                   ((1U & ((IData)(vlSelfRef.b) 
                                           >> 3U)) 
                                    + (1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                             >> 2U)))) 
                                  >> 1U))));
    bufp->fullBit(oldp+31,((1U & ((IData)(vlSelfRef.a) 
                                  >> 4U))));
    bufp->fullBit(oldp+32,((1U & ((IData)(vlSelfRef.b) 
                                  >> 4U))));
    bufp->fullBit(oldp+33,((1U & (((IData)(vlSelfRef.a) 
                                   >> 4U) + (((IData)(vlSelfRef.b) 
                                              >> 4U) 
                                             + ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                                >> 3U))))));
    bufp->fullBit(oldp+34,((1U & (((1U & ((IData)(vlSelfRef.a) 
                                          >> 4U)) + 
                                   ((1U & ((IData)(vlSelfRef.b) 
                                           >> 4U)) 
                                    + (1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                             >> 3U)))) 
                                  >> 1U))));
    bufp->fullBit(oldp+35,((1U & ((IData)(vlSelfRef.a) 
                                  >> 5U))));
    bufp->fullBit(oldp+36,((1U & ((IData)(vlSelfRef.b) 
                                  >> 5U))));
    bufp->fullBit(oldp+37,((1U & (((IData)(vlSelfRef.a) 
                                   >> 5U) + (((IData)(vlSelfRef.b) 
                                              >> 5U) 
                                             + ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                                >> 4U))))));
    bufp->fullBit(oldp+38,((1U & (((1U & ((IData)(vlSelfRef.a) 
                                          >> 5U)) + 
                                   ((1U & ((IData)(vlSelfRef.b) 
                                           >> 5U)) 
                                    + (1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                             >> 4U)))) 
                                  >> 1U))));
    bufp->fullBit(oldp+39,((1U & ((IData)(vlSelfRef.a) 
                                  >> 6U))));
    bufp->fullBit(oldp+40,((1U & ((IData)(vlSelfRef.b) 
                                  >> 6U))));
    bufp->fullBit(oldp+41,((1U & (((IData)(vlSelfRef.a) 
                                   >> 6U) + (((IData)(vlSelfRef.b) 
                                              >> 6U) 
                                             + ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                                >> 5U))))));
    bufp->fullBit(oldp+42,((1U & (((1U & ((IData)(vlSelfRef.a) 
                                          >> 6U)) + 
                                   ((1U & ((IData)(vlSelfRef.b) 
                                           >> 6U)) 
                                    + (1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                             >> 5U)))) 
                                  >> 1U))));
    bufp->fullBit(oldp+43,((1U & ((IData)(vlSelfRef.a) 
                                  >> 7U))));
    bufp->fullBit(oldp+44,((1U & ((IData)(vlSelfRef.b) 
                                  >> 7U))));
    bufp->fullBit(oldp+45,((1U & (((IData)(vlSelfRef.a) 
                                   >> 7U) + (((IData)(vlSelfRef.b) 
                                              >> 7U) 
                                             + ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                                >> 6U))))));
    bufp->fullBit(oldp+46,((1U & (((1U & ((IData)(vlSelfRef.a) 
                                          >> 7U)) + 
                                   ((1U & ((IData)(vlSelfRef.b) 
                                           >> 7U)) 
                                    + (1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                             >> 6U)))) 
                                  >> 1U))));
}
