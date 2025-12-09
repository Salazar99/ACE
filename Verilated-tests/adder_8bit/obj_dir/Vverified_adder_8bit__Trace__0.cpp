// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vverified_adder_8bit__Syms.h"


void Vverified_adder_8bit___024root__trace_chg_0_sub_0(Vverified_adder_8bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vverified_adder_8bit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root__trace_chg_0\n"); );
    // Init
    Vverified_adder_8bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vverified_adder_8bit___024root*>(voidSelf);
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vverified_adder_8bit___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vverified_adder_8bit___024root__trace_chg_0_sub_0(Vverified_adder_8bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgSData(oldp+0,(vlSelfRef.verified_adder_8bit__DOT__c),9);
        bufp->chgBit(oldp+1,((1U & (IData)(vlSelfRef.verified_adder_8bit__DOT__c))));
        bufp->chgBit(oldp+2,((1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                    >> 1U))));
        bufp->chgBit(oldp+3,((1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                    >> 2U))));
        bufp->chgBit(oldp+4,((1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                    >> 3U))));
        bufp->chgBit(oldp+5,((1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                    >> 4U))));
        bufp->chgBit(oldp+6,((1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                    >> 5U))));
        bufp->chgBit(oldp+7,((1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                    >> 6U))));
    }
    bufp->chgBit(oldp+8,(vlSelfRef.clk));
    bufp->chgCData(oldp+9,(vlSelfRef.a),8);
    bufp->chgCData(oldp+10,(vlSelfRef.b),8);
    bufp->chgBit(oldp+11,(vlSelfRef.cin));
    bufp->chgCData(oldp+12,(vlSelfRef.sum),8);
    bufp->chgBit(oldp+13,(vlSelfRef.cout));
    bufp->chgBit(oldp+14,((1U & (IData)(vlSelfRef.a))));
    bufp->chgBit(oldp+15,((1U & (IData)(vlSelfRef.b))));
    bufp->chgBit(oldp+16,((1U & ((IData)(vlSelfRef.a) 
                                 + ((IData)(vlSelfRef.b) 
                                    + (IData)(vlSelfRef.cin))))));
    bufp->chgBit(oldp+17,((1U & (((1U & (IData)(vlSelfRef.a)) 
                                  + ((1U & (IData)(vlSelfRef.b)) 
                                     + (IData)(vlSelfRef.cin))) 
                                 >> 1U))));
    bufp->chgBit(oldp+18,((1U & ((IData)(vlSelfRef.a) 
                                 >> 1U))));
    bufp->chgBit(oldp+19,((1U & ((IData)(vlSelfRef.b) 
                                 >> 1U))));
    bufp->chgBit(oldp+20,((1U & (((IData)(vlSelfRef.a) 
                                  >> 1U) + (((IData)(vlSelfRef.b) 
                                             >> 1U) 
                                            + (IData)(vlSelfRef.verified_adder_8bit__DOT__c))))));
    bufp->chgBit(oldp+21,((1U & (((1U & ((IData)(vlSelfRef.a) 
                                         >> 1U)) + 
                                  ((1U & ((IData)(vlSelfRef.b) 
                                          >> 1U)) + 
                                   (1U & (IData)(vlSelfRef.verified_adder_8bit__DOT__c)))) 
                                 >> 1U))));
    bufp->chgBit(oldp+22,((1U & ((IData)(vlSelfRef.a) 
                                 >> 2U))));
    bufp->chgBit(oldp+23,((1U & ((IData)(vlSelfRef.b) 
                                 >> 2U))));
    bufp->chgBit(oldp+24,((1U & (((IData)(vlSelfRef.a) 
                                  >> 2U) + (((IData)(vlSelfRef.b) 
                                             >> 2U) 
                                            + ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                               >> 1U))))));
    bufp->chgBit(oldp+25,((1U & (((1U & ((IData)(vlSelfRef.a) 
                                         >> 2U)) + 
                                  ((1U & ((IData)(vlSelfRef.b) 
                                          >> 2U)) + 
                                   (1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                          >> 1U)))) 
                                 >> 1U))));
    bufp->chgBit(oldp+26,((1U & ((IData)(vlSelfRef.a) 
                                 >> 3U))));
    bufp->chgBit(oldp+27,((1U & ((IData)(vlSelfRef.b) 
                                 >> 3U))));
    bufp->chgBit(oldp+28,((1U & (((IData)(vlSelfRef.a) 
                                  >> 3U) + (((IData)(vlSelfRef.b) 
                                             >> 3U) 
                                            + ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                               >> 2U))))));
    bufp->chgBit(oldp+29,((1U & (((1U & ((IData)(vlSelfRef.a) 
                                         >> 3U)) + 
                                  ((1U & ((IData)(vlSelfRef.b) 
                                          >> 3U)) + 
                                   (1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                          >> 2U)))) 
                                 >> 1U))));
    bufp->chgBit(oldp+30,((1U & ((IData)(vlSelfRef.a) 
                                 >> 4U))));
    bufp->chgBit(oldp+31,((1U & ((IData)(vlSelfRef.b) 
                                 >> 4U))));
    bufp->chgBit(oldp+32,((1U & (((IData)(vlSelfRef.a) 
                                  >> 4U) + (((IData)(vlSelfRef.b) 
                                             >> 4U) 
                                            + ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                               >> 3U))))));
    bufp->chgBit(oldp+33,((1U & (((1U & ((IData)(vlSelfRef.a) 
                                         >> 4U)) + 
                                  ((1U & ((IData)(vlSelfRef.b) 
                                          >> 4U)) + 
                                   (1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                          >> 3U)))) 
                                 >> 1U))));
    bufp->chgBit(oldp+34,((1U & ((IData)(vlSelfRef.a) 
                                 >> 5U))));
    bufp->chgBit(oldp+35,((1U & ((IData)(vlSelfRef.b) 
                                 >> 5U))));
    bufp->chgBit(oldp+36,((1U & (((IData)(vlSelfRef.a) 
                                  >> 5U) + (((IData)(vlSelfRef.b) 
                                             >> 5U) 
                                            + ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                               >> 4U))))));
    bufp->chgBit(oldp+37,((1U & (((1U & ((IData)(vlSelfRef.a) 
                                         >> 5U)) + 
                                  ((1U & ((IData)(vlSelfRef.b) 
                                          >> 5U)) + 
                                   (1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                          >> 4U)))) 
                                 >> 1U))));
    bufp->chgBit(oldp+38,((1U & ((IData)(vlSelfRef.a) 
                                 >> 6U))));
    bufp->chgBit(oldp+39,((1U & ((IData)(vlSelfRef.b) 
                                 >> 6U))));
    bufp->chgBit(oldp+40,((1U & (((IData)(vlSelfRef.a) 
                                  >> 6U) + (((IData)(vlSelfRef.b) 
                                             >> 6U) 
                                            + ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                               >> 5U))))));
    bufp->chgBit(oldp+41,((1U & (((1U & ((IData)(vlSelfRef.a) 
                                         >> 6U)) + 
                                  ((1U & ((IData)(vlSelfRef.b) 
                                          >> 6U)) + 
                                   (1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                          >> 5U)))) 
                                 >> 1U))));
    bufp->chgBit(oldp+42,((1U & ((IData)(vlSelfRef.a) 
                                 >> 7U))));
    bufp->chgBit(oldp+43,((1U & ((IData)(vlSelfRef.b) 
                                 >> 7U))));
    bufp->chgBit(oldp+44,((1U & (((IData)(vlSelfRef.a) 
                                  >> 7U) + (((IData)(vlSelfRef.b) 
                                             >> 7U) 
                                            + ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                               >> 6U))))));
    bufp->chgBit(oldp+45,((1U & (((1U & ((IData)(vlSelfRef.a) 
                                         >> 7U)) + 
                                  ((1U & ((IData)(vlSelfRef.b) 
                                          >> 7U)) + 
                                   (1U & ((IData)(vlSelfRef.verified_adder_8bit__DOT__c) 
                                          >> 6U)))) 
                                 >> 1U))));
}

void Vverified_adder_8bit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverified_adder_8bit___024root__trace_cleanup\n"); );
    // Init
    Vverified_adder_8bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vverified_adder_8bit___024root*>(voidSelf);
    Vverified_adder_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
