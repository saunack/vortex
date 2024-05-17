// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVortex.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVortex_VX_muldiv_unit__C0_N4_Ez41.h"
#include "VVortex__Syms.h"

VL_ATTR_COLD void VVortex_VX_muldiv_unit__C0_N4_Ez41___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_unit__0(VVortex_VX_muldiv_unit__C0_N4_Ez41* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_muldiv_unit__C0_N4_Ez41___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_unit__0\n"); );
    // Init
    VlWide<12>/*383:0*/ __Vtemp_ha341bc8d__0;
    VlWide<6>/*191:0*/ __Vtemp_h87daec14__0;
    VlWide<6>/*191:0*/ __Vtemp_h493664cb__0;
    // Body
    vlSelf->__Vcellinp__rsp_buf__valid_in = ((2U & 
                                              (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[5U] 
                                               >> 0x10U)) 
                                             | (1U 
                                                & (vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[5U] 
                                                   >> 0x11U)));
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[0U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[1U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[2U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[3U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[4U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
        = (((IData)(vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r) 
            << 0x12U) | vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[5U]);
    vlSelf->__PVT__div_in1[0U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[9U] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[8U] 
                                                >> 3U));
    vlSelf->__PVT__div_in2[0U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[4U] 
                                                >> 3U));
    vlSelf->__PVT__div_in1[1U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[9U] 
                                                >> 3U));
    vlSelf->__PVT__div_in2[1U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                                >> 3U));
    vlSelf->__PVT__div_in1[2U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
                                                >> 3U));
    vlSelf->__PVT__div_in2[2U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[7U] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                >> 3U));
    vlSelf->__PVT__div_in1[3U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xcU] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
                                                >> 3U));
    vlSelf->__PVT__div_in2[3U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[8U] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[7U] 
                                                >> 3U));
    vlSelf->__PVT__mul_valid_in = ((IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_execute_if.__PVT__valid) 
                                   & (~ (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xeU] 
                                         >> 0x13U)));
    vlSelf->__PVT__div_valid_in = ((IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_execute_if.__PVT__valid) 
                                   & (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xeU] 
                                      >> 0x13U));
    __Vtemp_ha341bc8d__0[0U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[0U];
    __Vtemp_ha341bc8d__0[1U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[1U];
    __Vtemp_ha341bc8d__0[2U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[2U];
    __Vtemp_ha341bc8d__0[3U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[3U];
    __Vtemp_ha341bc8d__0[4U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[4U];
    __Vtemp_ha341bc8d__0[5U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[0U] 
                                 << 0x11U) | (0x1ffffU 
                                              & vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[5U]));
    __Vtemp_ha341bc8d__0[6U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[0U] 
                                 >> 0xfU) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[1U] 
                                             << 0x11U));
    __Vtemp_ha341bc8d__0[7U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[1U] 
                                 >> 0xfU) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[2U] 
                                             << 0x11U));
    __Vtemp_ha341bc8d__0[8U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[2U] 
                                 >> 0xfU) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                             << 0x11U));
    __Vtemp_ha341bc8d__0[9U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                 >> 0xfU) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[4U] 
                                             << 0x11U));
    __Vtemp_ha341bc8d__0[0xaU] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[4U] 
                                   >> 0xfU) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[5U] 
                                               << 0x11U));
    __Vtemp_ha341bc8d__0[0xbU] = (3U & (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[5U] 
                                        >> 0xfU));
    if ((0x161U >= (0x1ffU & ((IData)(0xb1U) * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))) {
        __Vtemp_h87daec14__0[0U] = (((0U == (0x1fU 
                                             & ((IData)(0xb1U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_ha341bc8d__0[
                                              ((IData)(1U) 
                                               + (0xfU 
                                                  & (((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_ha341bc8d__0[
                                       (0xfU & (((IData)(0xb1U) 
                                                 * 
                                                 (1U 
                                                  & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(0xb1U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h87daec14__0[1U] = (((0U == (0x1fU 
                                             & ((IData)(0xb1U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_ha341bc8d__0[
                                              ((IData)(2U) 
                                               + (0xfU 
                                                  & (((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_ha341bc8d__0[
                                       ((IData)(1U) 
                                        + (0xfU & (
                                                   ((IData)(0xb1U) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                   >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0xb1U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h87daec14__0[2U] = (((0U == (0x1fU 
                                             & ((IData)(0xb1U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_ha341bc8d__0[
                                              ((IData)(3U) 
                                               + (0xfU 
                                                  & (((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_ha341bc8d__0[
                                       ((IData)(2U) 
                                        + (0xfU & (
                                                   ((IData)(0xb1U) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                   >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0xb1U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h87daec14__0[3U] = (((0U == (0x1fU 
                                             & ((IData)(0xb1U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_ha341bc8d__0[
                                              ((IData)(4U) 
                                               + (0xfU 
                                                  & (((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_ha341bc8d__0[
                                       ((IData)(3U) 
                                        + (0xfU & (
                                                   ((IData)(0xb1U) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                   >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0xb1U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h87daec14__0[4U] = (((0U == (0x1fU 
                                             & ((IData)(0xb1U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_ha341bc8d__0[
                                              ((IData)(5U) 
                                               + (0xfU 
                                                  & (((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_ha341bc8d__0[
                                       ((IData)(4U) 
                                        + (0xfU & (
                                                   ((IData)(0xb1U) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                   >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0xb1U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h87daec14__0[5U] = (((0U == (0x1fU 
                                             & ((IData)(0xb1U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_ha341bc8d__0[
                                              ((IData)(6U) 
                                               + (0xfU 
                                                  & (((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_ha341bc8d__0[
                                       ((IData)(5U) 
                                        + (0xfU & (
                                                   ((IData)(0xb1U) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                   >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0xb1U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
    } else {
        __Vtemp_h87daec14__0[0U] = vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[0U];
        __Vtemp_h87daec14__0[1U] = vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[1U];
        __Vtemp_h87daec14__0[2U] = vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[2U];
        __Vtemp_h87daec14__0[3U] = vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[3U];
        __Vtemp_h87daec14__0[4U] = vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[4U];
        __Vtemp_h87daec14__0[5U] = vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[5U];
    }
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[0U] 
        = __Vtemp_h87daec14__0[0U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[1U] 
        = __Vtemp_h87daec14__0[1U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[2U] 
        = __Vtemp_h87daec14__0[2U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[3U] 
        = __Vtemp_h87daec14__0[3U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[4U] 
        = __Vtemp_h87daec14__0[4U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[5U] 
        = (((IData)((0U != (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))) 
            << 0x12U) | ((0x20000U & ((~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)) 
                                      << 0x11U)) | 
                         (0x1ffffU & __Vtemp_h87daec14__0[5U])));
    __Vtemp_h493664cb__0[5U] = (((IData)(((0x3fffffffff80ULL 
                                           & (((QData)((IData)(
                                                               vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U])) 
                                               << 0x1dU) 
                                              | (0x1fffffffffffff80ULL 
                                                 & ((QData)((IData)(
                                                                    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U])) 
                                                    >> 3U)))) 
                                          | (QData)((IData)(
                                                            ((0x40U 
                                                              & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                 << 3U)) 
                                                             | (0x3fU 
                                                                & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                   >> 4U))))))) 
                                 >> 0x1dU) | ((IData)(
                                                      (((0x3fffffffff80ULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U])) 
                                                             << 0x1dU) 
                                                            | (0x1fffffffffffff80ULL 
                                                               & ((QData)((IData)(
                                                                                vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U])) 
                                                                  >> 3U)))) 
                                                        | (QData)((IData)(
                                                                          ((0x40U 
                                                                            & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                               << 3U)) 
                                                                           | (0x3fU 
                                                                              & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                                >> 4U)))))) 
                                                       >> 0x20U)) 
                                              << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_commit_if.__PVT__data[0U] 
        = ((vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
            << 3U) | (7U & vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U]));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_commit_if.__PVT__data[1U] 
        = ((vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
            >> 0x1dU) | (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
                         << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_commit_if.__PVT__data[2U] 
        = ((vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
            >> 0x1dU) | (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                         << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_commit_if.__PVT__data[3U] 
        = ((vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
            >> 0x1dU) | (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                         << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_commit_if.__PVT__data[4U] 
        = (((IData)(((0x3fffffffff80ULL & (((QData)((IData)(
                                                            vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U])) 
                                            << 0x1dU) 
                                           | (0x1fffffffffffff80ULL 
                                              & ((QData)((IData)(
                                                                 vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U])) 
                                                 >> 3U)))) 
                     | (QData)((IData)(((0x40U & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                  << 3U)) 
                                        | (0x3fU & 
                                           (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                            >> 4U))))))) 
            << 3U) | (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                      >> 0x1dU));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_commit_if.__PVT__data[5U] 
        = __Vtemp_h493664cb__0[5U];
}

void VVortex___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(CData/*0:0*/ enable, CData/*0:0*/ is_signed_a, CData/*0:0*/ is_signed_b, IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ &resultl, IData/*31:0*/ &resulth);
void VVortex___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(CData/*0:0*/ enable, CData/*0:0*/ is_signed, IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ &quotient, IData/*31:0*/ &remainder);

VL_ATTR_COLD void VVortex_VX_muldiv_unit__C0_N4_Ez41___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_unit__1(VVortex_VX_muldiv_unit__C0_N4_Ez41* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_muldiv_unit__C0_N4_Ez41___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_unit__1\n"); );
    // Body
    vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__stall 
        = (IData)(((vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                    >> 0x12U) & (~ ((IData)(vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__rsp_arb__ready_in) 
                                    >> 1U))));
    vlSelf->__Vcellout__rsp_buf__ready_in = ((- (IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__stall))))) 
                                             & ((2U 
                                                 & ((~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))));
    vlSelf->__PVT__mul_ready_in = (1U & ((IData)(vlSelf->__Vcellout__rsp_buf__ready_in) 
                                         | (~ (vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[5U] 
                                               >> 0x11U))));
    vlSelf->__PVT__div_ready_in = (1U & (((IData)(vlSelf->__Vcellout__rsp_buf__ready_in) 
                                          >> 1U) | 
                                         (~ (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[5U] 
                                             >> 0x11U))));
    vlSelf->__PVT__mul_fire_in = ((IData)(vlSelf->__PVT__mul_valid_in) 
                                  & (IData)(vlSelf->__PVT__mul_ready_in));
    vlSelf->__PVT__div_fire_in = ((IData)(vlSelf->__PVT__div_valid_in) 
                                  & (IData)(vlSelf->__PVT__div_ready_in));
    VVortex___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->__PVT__mul_fire_in, 
                                                            (1U 
                                                             != 
                                                             (3U 
                                                              & (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[9U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[8U] 
                                                                >> 3U)), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[4U] 
                                                                >> 3U)), vlSelf->__Vtask_dpi_imul__0__resultl, vlSelf->__Vtask_dpi_imul__0__resulth);
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__0__resultl;
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__0__resulth;
    VVortex___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->__PVT__mul_fire_in, 
                                                            (1U 
                                                             != 
                                                             (3U 
                                                              & (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[9U] 
                                                                >> 3U)), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                                                >> 3U)), vlSelf->__Vtask_dpi_imul__1__resultl, vlSelf->__Vtask_dpi_imul__1__resulth);
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__1__resultl;
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__1__resulth;
    VVortex___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->__PVT__mul_fire_in, 
                                                            (1U 
                                                             != 
                                                             (3U 
                                                              & (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
                                                                >> 3U)), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[7U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                >> 3U)), vlSelf->__Vtask_dpi_imul__2__resultl, vlSelf->__Vtask_dpi_imul__2__resulth);
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__2__resultl;
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__2__resulth;
    VVortex___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->__PVT__mul_fire_in, 
                                                            (1U 
                                                             != 
                                                             (3U 
                                                              & (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xcU] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
                                                                >> 3U)), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[8U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[7U] 
                                                                >> 3U)), vlSelf->__Vtask_dpi_imul__3__resultl, vlSelf->__Vtask_dpi_imul__3__resulth);
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__3__resultl;
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__3__resulth;
    VVortex___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->__PVT__div_fire_in, 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            vlSelf->__PVT__div_in1[0U], 
                                                            vlSelf->__PVT__div_in2[0U], vlSelf->__Vtask_dpi_idiv__4__quotient, vlSelf->__Vtask_dpi_idiv__4__remainder);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__4__quotient;
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__4__remainder;
    VVortex___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->__PVT__div_fire_in, 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            vlSelf->__PVT__div_in1[1U], 
                                                            vlSelf->__PVT__div_in2[1U], vlSelf->__Vtask_dpi_idiv__5__quotient, vlSelf->__Vtask_dpi_idiv__5__remainder);
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__5__quotient;
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__5__remainder;
    VVortex___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->__PVT__div_fire_in, 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            vlSelf->__PVT__div_in1[2U], 
                                                            vlSelf->__PVT__div_in2[2U], vlSelf->__Vtask_dpi_idiv__6__quotient, vlSelf->__Vtask_dpi_idiv__6__remainder);
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__6__quotient;
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__6__remainder;
    VVortex___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->__PVT__div_fire_in, 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            vlSelf->__PVT__div_in1[3U], 
                                                            vlSelf->__PVT__div_in2[3U], vlSelf->__Vtask_dpi_idiv__7__quotient, vlSelf->__Vtask_dpi_idiv__7__remainder);
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__7__quotient;
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__7__remainder;
    if ((0U != (3U & (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xeU] 
                      >> 0x11U)))) {
        vlSelf->__PVT__mul_result_tmp[0U] = vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resulth;
        vlSelf->__PVT__mul_result_tmp[1U] = vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resulth;
        vlSelf->__PVT__mul_result_tmp[2U] = vlSelf->__PVT__genblk2__BRA__2__KET____DOT__mul_resulth;
        vlSelf->__PVT__mul_result_tmp[3U] = vlSelf->__PVT__genblk2__BRA__3__KET____DOT__mul_resulth;
    } else {
        vlSelf->__PVT__mul_result_tmp[0U] = vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resultl;
        vlSelf->__PVT__mul_result_tmp[1U] = vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resultl;
        vlSelf->__PVT__mul_result_tmp[2U] = vlSelf->__PVT__genblk2__BRA__2__KET____DOT__mul_resultl;
        vlSelf->__PVT__mul_result_tmp[3U] = vlSelf->__PVT__genblk2__BRA__3__KET____DOT__mul_resultl;
    }
    vlSelf->__PVT__div_result_in[0U] = (IData)((((QData)((IData)(
                                                                 ((0x40000U 
                                                                   & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xeU])
                                                                   ? vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_remainder
                                                                   : vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_quotient))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((0x40000U 
                                                                    & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xeU])
                                                                    ? vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_remainder
                                                                    : vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_quotient)))));
    vlSelf->__PVT__div_result_in[1U] = (IData)(((((QData)((IData)(
                                                                  ((0x40000U 
                                                                    & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xeU])
                                                                    ? vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_remainder
                                                                    : vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_quotient))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((0x40000U 
                                                                     & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xeU])
                                                                     ? vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_remainder
                                                                     : vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_quotient)))) 
                                                >> 0x20U));
    vlSelf->__PVT__div_result_in[2U] = (IData)((((QData)((IData)(
                                                                 ((0x40000U 
                                                                   & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xeU])
                                                                   ? vlSelf->__PVT__genblk4__BRA__3__KET____DOT__div_remainder
                                                                   : vlSelf->__PVT__genblk4__BRA__3__KET____DOT__div_quotient))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((0x40000U 
                                                                    & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xeU])
                                                                    ? vlSelf->__PVT__genblk4__BRA__2__KET____DOT__div_remainder
                                                                    : vlSelf->__PVT__genblk4__BRA__2__KET____DOT__div_quotient)))));
    vlSelf->__PVT__div_result_in[3U] = (IData)(((((QData)((IData)(
                                                                  ((0x40000U 
                                                                    & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xeU])
                                                                    ? vlSelf->__PVT__genblk4__BRA__3__KET____DOT__div_remainder
                                                                    : vlSelf->__PVT__genblk4__BRA__3__KET____DOT__div_quotient))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((0x40000U 
                                                                     & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__0__KET____DOT__buf_out__data_in[0xeU])
                                                                     ? vlSelf->__PVT__genblk4__BRA__2__KET____DOT__div_remainder
                                                                     : vlSelf->__PVT__genblk4__BRA__2__KET____DOT__div_quotient)))) 
                                                >> 0x20U));
}

VL_ATTR_COLD void VVortex_VX_muldiv_unit__C0_N4_Ez41___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_unit__0(VVortex_VX_muldiv_unit__C0_N4_Ez41* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_muldiv_unit__C0_N4_Ez41___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_unit__0\n"); );
    // Init
    VlWide<12>/*383:0*/ __Vtemp_ha341bc8d__0;
    VlWide<6>/*191:0*/ __Vtemp_h87daec14__0;
    VlWide<6>/*191:0*/ __Vtemp_h493664cb__0;
    // Body
    vlSelf->__Vcellinp__rsp_buf__valid_in = ((2U & 
                                              (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[5U] 
                                               >> 0x10U)) 
                                             | (1U 
                                                & (vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[5U] 
                                                   >> 0x11U)));
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[0U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[1U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[2U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[3U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[4U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
        = (((IData)(vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r) 
            << 0x12U) | vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[5U]);
    vlSelf->__PVT__div_in1[0U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[9U] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[8U] 
                                                >> 3U));
    vlSelf->__PVT__div_in2[0U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[5U] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[4U] 
                                                >> 3U));
    vlSelf->__PVT__div_in1[1U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xaU] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[9U] 
                                                >> 3U));
    vlSelf->__PVT__div_in2[1U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[6U] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[5U] 
                                                >> 3U));
    vlSelf->__PVT__div_in1[2U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xbU] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xaU] 
                                                >> 3U));
    vlSelf->__PVT__div_in2[2U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[7U] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[6U] 
                                                >> 3U));
    vlSelf->__PVT__div_in1[3U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xcU] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xbU] 
                                                >> 3U));
    vlSelf->__PVT__div_in2[3U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[8U] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[7U] 
                                                >> 3U));
    vlSelf->__PVT__mul_valid_in = ((IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_execute_if.__PVT__valid) 
                                   & (~ (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xeU] 
                                         >> 0x13U)));
    vlSelf->__PVT__div_valid_in = ((IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_execute_if.__PVT__valid) 
                                   & (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xeU] 
                                      >> 0x13U));
    __Vtemp_ha341bc8d__0[0U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[0U];
    __Vtemp_ha341bc8d__0[1U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[1U];
    __Vtemp_ha341bc8d__0[2U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[2U];
    __Vtemp_ha341bc8d__0[3U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[3U];
    __Vtemp_ha341bc8d__0[4U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[4U];
    __Vtemp_ha341bc8d__0[5U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[0U] 
                                 << 0x11U) | (0x1ffffU 
                                              & vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[5U]));
    __Vtemp_ha341bc8d__0[6U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[0U] 
                                 >> 0xfU) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[1U] 
                                             << 0x11U));
    __Vtemp_ha341bc8d__0[7U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[1U] 
                                 >> 0xfU) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[2U] 
                                             << 0x11U));
    __Vtemp_ha341bc8d__0[8U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[2U] 
                                 >> 0xfU) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                             << 0x11U));
    __Vtemp_ha341bc8d__0[9U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                 >> 0xfU) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[4U] 
                                             << 0x11U));
    __Vtemp_ha341bc8d__0[0xaU] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[4U] 
                                   >> 0xfU) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[5U] 
                                               << 0x11U));
    __Vtemp_ha341bc8d__0[0xbU] = (3U & (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[5U] 
                                        >> 0xfU));
    if ((0x161U >= (0x1ffU & ((IData)(0xb1U) * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))) {
        __Vtemp_h87daec14__0[0U] = (((0U == (0x1fU 
                                             & ((IData)(0xb1U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_ha341bc8d__0[
                                              ((IData)(1U) 
                                               + (0xfU 
                                                  & (((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_ha341bc8d__0[
                                       (0xfU & (((IData)(0xb1U) 
                                                 * 
                                                 (1U 
                                                  & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(0xb1U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h87daec14__0[1U] = (((0U == (0x1fU 
                                             & ((IData)(0xb1U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_ha341bc8d__0[
                                              ((IData)(2U) 
                                               + (0xfU 
                                                  & (((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_ha341bc8d__0[
                                       ((IData)(1U) 
                                        + (0xfU & (
                                                   ((IData)(0xb1U) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                   >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0xb1U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h87daec14__0[2U] = (((0U == (0x1fU 
                                             & ((IData)(0xb1U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_ha341bc8d__0[
                                              ((IData)(3U) 
                                               + (0xfU 
                                                  & (((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_ha341bc8d__0[
                                       ((IData)(2U) 
                                        + (0xfU & (
                                                   ((IData)(0xb1U) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                   >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0xb1U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h87daec14__0[3U] = (((0U == (0x1fU 
                                             & ((IData)(0xb1U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_ha341bc8d__0[
                                              ((IData)(4U) 
                                               + (0xfU 
                                                  & (((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_ha341bc8d__0[
                                       ((IData)(3U) 
                                        + (0xfU & (
                                                   ((IData)(0xb1U) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                   >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0xb1U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h87daec14__0[4U] = (((0U == (0x1fU 
                                             & ((IData)(0xb1U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_ha341bc8d__0[
                                              ((IData)(5U) 
                                               + (0xfU 
                                                  & (((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_ha341bc8d__0[
                                       ((IData)(4U) 
                                        + (0xfU & (
                                                   ((IData)(0xb1U) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                   >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0xb1U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h87daec14__0[5U] = (((0U == (0x1fU 
                                             & ((IData)(0xb1U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_ha341bc8d__0[
                                              ((IData)(6U) 
                                               + (0xfU 
                                                  & (((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_ha341bc8d__0[
                                       ((IData)(5U) 
                                        + (0xfU & (
                                                   ((IData)(0xb1U) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                   >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0xb1U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
    } else {
        __Vtemp_h87daec14__0[0U] = vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[0U];
        __Vtemp_h87daec14__0[1U] = vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[1U];
        __Vtemp_h87daec14__0[2U] = vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[2U];
        __Vtemp_h87daec14__0[3U] = vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[3U];
        __Vtemp_h87daec14__0[4U] = vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[4U];
        __Vtemp_h87daec14__0[5U] = vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[5U];
    }
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[0U] 
        = __Vtemp_h87daec14__0[0U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[1U] 
        = __Vtemp_h87daec14__0[1U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[2U] 
        = __Vtemp_h87daec14__0[2U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[3U] 
        = __Vtemp_h87daec14__0[3U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[4U] 
        = __Vtemp_h87daec14__0[4U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[5U] 
        = (((IData)((0U != (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))) 
            << 0x12U) | ((0x20000U & ((~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)) 
                                      << 0x11U)) | 
                         (0x1ffffU & __Vtemp_h87daec14__0[5U])));
    __Vtemp_h493664cb__0[5U] = (((IData)(((0x3fffffffff80ULL 
                                           & (((QData)((IData)(
                                                               vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U])) 
                                               << 0x1dU) 
                                              | (0x1fffffffffffff80ULL 
                                                 & ((QData)((IData)(
                                                                    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U])) 
                                                    >> 3U)))) 
                                          | (QData)((IData)(
                                                            ((0x40U 
                                                              & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                 << 3U)) 
                                                             | (0x3fU 
                                                                & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                   >> 4U))))))) 
                                 >> 0x1dU) | ((IData)(
                                                      (((0x3fffffffff80ULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U])) 
                                                             << 0x1dU) 
                                                            | (0x1fffffffffffff80ULL 
                                                               & ((QData)((IData)(
                                                                                vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U])) 
                                                                  >> 3U)))) 
                                                        | (QData)((IData)(
                                                                          ((0x40U 
                                                                            & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                               << 3U)) 
                                                                           | (0x3fU 
                                                                              & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                                >> 4U)))))) 
                                                       >> 0x20U)) 
                                              << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_commit_if.__PVT__data[0U] 
        = ((vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
            << 3U) | (7U & vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U]));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_commit_if.__PVT__data[1U] 
        = ((vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
            >> 0x1dU) | (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
                         << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_commit_if.__PVT__data[2U] 
        = ((vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
            >> 0x1dU) | (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                         << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_commit_if.__PVT__data[3U] 
        = ((vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
            >> 0x1dU) | (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                         << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_commit_if.__PVT__data[4U] 
        = (((IData)(((0x3fffffffff80ULL & (((QData)((IData)(
                                                            vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U])) 
                                            << 0x1dU) 
                                           | (0x1fffffffffffff80ULL 
                                              & ((QData)((IData)(
                                                                 vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U])) 
                                                 >> 3U)))) 
                     | (QData)((IData)(((0x40U & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                  << 3U)) 
                                        | (0x3fU & 
                                           (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                            >> 4U))))))) 
            << 3U) | (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                      >> 0x1dU));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_commit_if.__PVT__data[5U] 
        = __Vtemp_h493664cb__0[5U];
}

VL_ATTR_COLD void VVortex_VX_muldiv_unit__C0_N4_Ez41___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_unit__1(VVortex_VX_muldiv_unit__C0_N4_Ez41* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_muldiv_unit__C0_N4_Ez41___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_unit__1\n"); );
    // Body
    vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__stall 
        = (IData)(((vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                    >> 0x12U) & (~ ((IData)(vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__rsp_arb__ready_in) 
                                    >> 1U))));
    vlSelf->__Vcellout__rsp_buf__ready_in = ((- (IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__stall))))) 
                                             & ((2U 
                                                 & ((~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))));
    vlSelf->__PVT__mul_ready_in = (1U & ((IData)(vlSelf->__Vcellout__rsp_buf__ready_in) 
                                         | (~ (vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[5U] 
                                               >> 0x11U))));
    vlSelf->__PVT__div_ready_in = (1U & (((IData)(vlSelf->__Vcellout__rsp_buf__ready_in) 
                                          >> 1U) | 
                                         (~ (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[5U] 
                                             >> 0x11U))));
    vlSelf->__PVT__mul_fire_in = ((IData)(vlSelf->__PVT__mul_valid_in) 
                                  & (IData)(vlSelf->__PVT__mul_ready_in));
    vlSelf->__PVT__div_fire_in = ((IData)(vlSelf->__PVT__div_valid_in) 
                                  & (IData)(vlSelf->__PVT__div_ready_in));
    VVortex___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->__PVT__mul_fire_in, 
                                                            (1U 
                                                             != 
                                                             (3U 
                                                              & (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[9U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[8U] 
                                                                >> 3U)), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[5U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[4U] 
                                                                >> 3U)), vlSelf->__Vtask_dpi_imul__8__resultl, vlSelf->__Vtask_dpi_imul__8__resulth);
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__8__resultl;
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__8__resulth;
    VVortex___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->__PVT__mul_fire_in, 
                                                            (1U 
                                                             != 
                                                             (3U 
                                                              & (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xaU] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[9U] 
                                                                >> 3U)), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[6U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[5U] 
                                                                >> 3U)), vlSelf->__Vtask_dpi_imul__9__resultl, vlSelf->__Vtask_dpi_imul__9__resulth);
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__9__resultl;
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__9__resulth;
    VVortex___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->__PVT__mul_fire_in, 
                                                            (1U 
                                                             != 
                                                             (3U 
                                                              & (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xbU] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xaU] 
                                                                >> 3U)), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[7U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[6U] 
                                                                >> 3U)), vlSelf->__Vtask_dpi_imul__10__resultl, vlSelf->__Vtask_dpi_imul__10__resulth);
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__10__resultl;
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__10__resulth;
    VVortex___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->__PVT__mul_fire_in, 
                                                            (1U 
                                                             != 
                                                             (3U 
                                                              & (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xcU] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xbU] 
                                                                >> 3U)), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[8U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[7U] 
                                                                >> 3U)), vlSelf->__Vtask_dpi_imul__11__resultl, vlSelf->__Vtask_dpi_imul__11__resulth);
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__11__resultl;
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__11__resulth;
    VVortex___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->__PVT__div_fire_in, 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            vlSelf->__PVT__div_in1[0U], 
                                                            vlSelf->__PVT__div_in2[0U], vlSelf->__Vtask_dpi_idiv__12__quotient, vlSelf->__Vtask_dpi_idiv__12__remainder);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__12__quotient;
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__12__remainder;
    VVortex___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->__PVT__div_fire_in, 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            vlSelf->__PVT__div_in1[1U], 
                                                            vlSelf->__PVT__div_in2[1U], vlSelf->__Vtask_dpi_idiv__13__quotient, vlSelf->__Vtask_dpi_idiv__13__remainder);
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__13__quotient;
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__13__remainder;
    VVortex___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->__PVT__div_fire_in, 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            vlSelf->__PVT__div_in1[2U], 
                                                            vlSelf->__PVT__div_in2[2U], vlSelf->__Vtask_dpi_idiv__14__quotient, vlSelf->__Vtask_dpi_idiv__14__remainder);
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__14__quotient;
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__14__remainder;
    VVortex___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->__PVT__div_fire_in, 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            vlSelf->__PVT__div_in1[3U], 
                                                            vlSelf->__PVT__div_in2[3U], vlSelf->__Vtask_dpi_idiv__15__quotient, vlSelf->__Vtask_dpi_idiv__15__remainder);
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__15__quotient;
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__15__remainder;
    if ((0U != (3U & (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xeU] 
                      >> 0x11U)))) {
        vlSelf->__PVT__mul_result_tmp[0U] = vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resulth;
        vlSelf->__PVT__mul_result_tmp[1U] = vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resulth;
        vlSelf->__PVT__mul_result_tmp[2U] = vlSelf->__PVT__genblk2__BRA__2__KET____DOT__mul_resulth;
        vlSelf->__PVT__mul_result_tmp[3U] = vlSelf->__PVT__genblk2__BRA__3__KET____DOT__mul_resulth;
    } else {
        vlSelf->__PVT__mul_result_tmp[0U] = vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resultl;
        vlSelf->__PVT__mul_result_tmp[1U] = vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resultl;
        vlSelf->__PVT__mul_result_tmp[2U] = vlSelf->__PVT__genblk2__BRA__2__KET____DOT__mul_resultl;
        vlSelf->__PVT__mul_result_tmp[3U] = vlSelf->__PVT__genblk2__BRA__3__KET____DOT__mul_resultl;
    }
    vlSelf->__PVT__div_result_in[0U] = (IData)((((QData)((IData)(
                                                                 ((0x40000U 
                                                                   & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xeU])
                                                                   ? vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_remainder
                                                                   : vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_quotient))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((0x40000U 
                                                                    & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xeU])
                                                                    ? vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_remainder
                                                                    : vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_quotient)))));
    vlSelf->__PVT__div_result_in[1U] = (IData)(((((QData)((IData)(
                                                                  ((0x40000U 
                                                                    & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xeU])
                                                                    ? vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_remainder
                                                                    : vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_quotient))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((0x40000U 
                                                                     & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xeU])
                                                                     ? vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_remainder
                                                                     : vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_quotient)))) 
                                                >> 0x20U));
    vlSelf->__PVT__div_result_in[2U] = (IData)((((QData)((IData)(
                                                                 ((0x40000U 
                                                                   & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xeU])
                                                                   ? vlSelf->__PVT__genblk4__BRA__3__KET____DOT__div_remainder
                                                                   : vlSelf->__PVT__genblk4__BRA__3__KET____DOT__div_quotient))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((0x40000U 
                                                                    & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xeU])
                                                                    ? vlSelf->__PVT__genblk4__BRA__2__KET____DOT__div_remainder
                                                                    : vlSelf->__PVT__genblk4__BRA__2__KET____DOT__div_quotient)))));
    vlSelf->__PVT__div_result_in[3U] = (IData)(((((QData)((IData)(
                                                                  ((0x40000U 
                                                                    & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xeU])
                                                                    ? vlSelf->__PVT__genblk4__BRA__3__KET____DOT__div_remainder
                                                                    : vlSelf->__PVT__genblk4__BRA__3__KET____DOT__div_quotient))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((0x40000U 
                                                                     & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__1__KET____DOT__buf_out__data_in[0xeU])
                                                                     ? vlSelf->__PVT__genblk4__BRA__2__KET____DOT__div_remainder
                                                                     : vlSelf->__PVT__genblk4__BRA__2__KET____DOT__div_quotient)))) 
                                                >> 0x20U));
}

VL_ATTR_COLD void VVortex_VX_muldiv_unit__C0_N4_Ez41___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_unit__0(VVortex_VX_muldiv_unit__C0_N4_Ez41* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_muldiv_unit__C0_N4_Ez41___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_unit__0\n"); );
    // Init
    VlWide<12>/*383:0*/ __Vtemp_ha341bc8d__0;
    VlWide<6>/*191:0*/ __Vtemp_h87daec14__0;
    VlWide<6>/*191:0*/ __Vtemp_h493664cb__0;
    // Body
    vlSelf->__Vcellinp__rsp_buf__valid_in = ((2U & 
                                              (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[5U] 
                                               >> 0x10U)) 
                                             | (1U 
                                                & (vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[5U] 
                                                   >> 0x11U)));
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[0U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[1U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[2U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[3U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[4U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
        = (((IData)(vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r) 
            << 0x12U) | vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[5U]);
    vlSelf->__PVT__div_in1[0U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[9U] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[8U] 
                                                >> 3U));
    vlSelf->__PVT__div_in2[0U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[5U] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[4U] 
                                                >> 3U));
    vlSelf->__PVT__div_in1[1U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xaU] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[9U] 
                                                >> 3U));
    vlSelf->__PVT__div_in2[1U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[6U] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[5U] 
                                                >> 3U));
    vlSelf->__PVT__div_in1[2U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xbU] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xaU] 
                                                >> 3U));
    vlSelf->__PVT__div_in2[2U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[7U] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[6U] 
                                                >> 3U));
    vlSelf->__PVT__div_in1[3U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xcU] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xbU] 
                                                >> 3U));
    vlSelf->__PVT__div_in2[3U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[8U] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[7U] 
                                                >> 3U));
    vlSelf->__PVT__mul_valid_in = ((IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_execute_if.__PVT__valid) 
                                   & (~ (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU] 
                                         >> 0x13U)));
    vlSelf->__PVT__div_valid_in = ((IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_execute_if.__PVT__valid) 
                                   & (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU] 
                                      >> 0x13U));
    __Vtemp_ha341bc8d__0[0U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[0U];
    __Vtemp_ha341bc8d__0[1U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[1U];
    __Vtemp_ha341bc8d__0[2U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[2U];
    __Vtemp_ha341bc8d__0[3U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[3U];
    __Vtemp_ha341bc8d__0[4U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[4U];
    __Vtemp_ha341bc8d__0[5U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[0U] 
                                 << 0x11U) | (0x1ffffU 
                                              & vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[5U]));
    __Vtemp_ha341bc8d__0[6U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[0U] 
                                 >> 0xfU) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[1U] 
                                             << 0x11U));
    __Vtemp_ha341bc8d__0[7U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[1U] 
                                 >> 0xfU) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[2U] 
                                             << 0x11U));
    __Vtemp_ha341bc8d__0[8U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[2U] 
                                 >> 0xfU) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                             << 0x11U));
    __Vtemp_ha341bc8d__0[9U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                 >> 0xfU) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[4U] 
                                             << 0x11U));
    __Vtemp_ha341bc8d__0[0xaU] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[4U] 
                                   >> 0xfU) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[5U] 
                                               << 0x11U));
    __Vtemp_ha341bc8d__0[0xbU] = (3U & (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[5U] 
                                        >> 0xfU));
    if ((0x161U >= (0x1ffU & ((IData)(0xb1U) * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))) {
        __Vtemp_h87daec14__0[0U] = (((0U == (0x1fU 
                                             & ((IData)(0xb1U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_ha341bc8d__0[
                                              ((IData)(1U) 
                                               + (0xfU 
                                                  & (((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_ha341bc8d__0[
                                       (0xfU & (((IData)(0xb1U) 
                                                 * 
                                                 (1U 
                                                  & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(0xb1U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h87daec14__0[1U] = (((0U == (0x1fU 
                                             & ((IData)(0xb1U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_ha341bc8d__0[
                                              ((IData)(2U) 
                                               + (0xfU 
                                                  & (((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_ha341bc8d__0[
                                       ((IData)(1U) 
                                        + (0xfU & (
                                                   ((IData)(0xb1U) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                   >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0xb1U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h87daec14__0[2U] = (((0U == (0x1fU 
                                             & ((IData)(0xb1U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_ha341bc8d__0[
                                              ((IData)(3U) 
                                               + (0xfU 
                                                  & (((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_ha341bc8d__0[
                                       ((IData)(2U) 
                                        + (0xfU & (
                                                   ((IData)(0xb1U) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                   >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0xb1U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h87daec14__0[3U] = (((0U == (0x1fU 
                                             & ((IData)(0xb1U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_ha341bc8d__0[
                                              ((IData)(4U) 
                                               + (0xfU 
                                                  & (((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_ha341bc8d__0[
                                       ((IData)(3U) 
                                        + (0xfU & (
                                                   ((IData)(0xb1U) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                   >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0xb1U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h87daec14__0[4U] = (((0U == (0x1fU 
                                             & ((IData)(0xb1U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_ha341bc8d__0[
                                              ((IData)(5U) 
                                               + (0xfU 
                                                  & (((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_ha341bc8d__0[
                                       ((IData)(4U) 
                                        + (0xfU & (
                                                   ((IData)(0xb1U) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                   >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0xb1U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h87daec14__0[5U] = (((0U == (0x1fU 
                                             & ((IData)(0xb1U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_ha341bc8d__0[
                                              ((IData)(6U) 
                                               + (0xfU 
                                                  & (((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_ha341bc8d__0[
                                       ((IData)(5U) 
                                        + (0xfU & (
                                                   ((IData)(0xb1U) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                   >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0xb1U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
    } else {
        __Vtemp_h87daec14__0[0U] = vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[0U];
        __Vtemp_h87daec14__0[1U] = vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[1U];
        __Vtemp_h87daec14__0[2U] = vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[2U];
        __Vtemp_h87daec14__0[3U] = vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[3U];
        __Vtemp_h87daec14__0[4U] = vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[4U];
        __Vtemp_h87daec14__0[5U] = vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[5U];
    }
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[0U] 
        = __Vtemp_h87daec14__0[0U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[1U] 
        = __Vtemp_h87daec14__0[1U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[2U] 
        = __Vtemp_h87daec14__0[2U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[3U] 
        = __Vtemp_h87daec14__0[3U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[4U] 
        = __Vtemp_h87daec14__0[4U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[5U] 
        = (((IData)((0U != (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))) 
            << 0x12U) | ((0x20000U & ((~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)) 
                                      << 0x11U)) | 
                         (0x1ffffU & __Vtemp_h87daec14__0[5U])));
    __Vtemp_h493664cb__0[5U] = (((IData)(((0x3fffffffff80ULL 
                                           & (((QData)((IData)(
                                                               vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U])) 
                                               << 0x1dU) 
                                              | (0x1fffffffffffff80ULL 
                                                 & ((QData)((IData)(
                                                                    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U])) 
                                                    >> 3U)))) 
                                          | (QData)((IData)(
                                                            ((0x40U 
                                                              & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                 << 3U)) 
                                                             | (0x3fU 
                                                                & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                   >> 4U))))))) 
                                 >> 0x1dU) | ((IData)(
                                                      (((0x3fffffffff80ULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U])) 
                                                             << 0x1dU) 
                                                            | (0x1fffffffffffff80ULL 
                                                               & ((QData)((IData)(
                                                                                vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U])) 
                                                                  >> 3U)))) 
                                                        | (QData)((IData)(
                                                                          ((0x40U 
                                                                            & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                               << 3U)) 
                                                                           | (0x3fU 
                                                                              & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                                >> 4U)))))) 
                                                       >> 0x20U)) 
                                              << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_commit_if.__PVT__data[0U] 
        = ((vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
            << 3U) | (7U & vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U]));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_commit_if.__PVT__data[1U] 
        = ((vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
            >> 0x1dU) | (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
                         << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_commit_if.__PVT__data[2U] 
        = ((vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
            >> 0x1dU) | (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                         << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_commit_if.__PVT__data[3U] 
        = ((vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
            >> 0x1dU) | (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                         << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_commit_if.__PVT__data[4U] 
        = (((IData)(((0x3fffffffff80ULL & (((QData)((IData)(
                                                            vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U])) 
                                            << 0x1dU) 
                                           | (0x1fffffffffffff80ULL 
                                              & ((QData)((IData)(
                                                                 vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U])) 
                                                 >> 3U)))) 
                     | (QData)((IData)(((0x40U & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                  << 3U)) 
                                        | (0x3fU & 
                                           (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                            >> 4U))))))) 
            << 3U) | (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                      >> 0x1dU));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_commit_if.__PVT__data[5U] 
        = __Vtemp_h493664cb__0[5U];
}

VL_ATTR_COLD void VVortex_VX_muldiv_unit__C0_N4_Ez41___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_unit__1(VVortex_VX_muldiv_unit__C0_N4_Ez41* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_muldiv_unit__C0_N4_Ez41___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_unit__1\n"); );
    // Body
    vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__stall 
        = (IData)(((vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                    >> 0x12U) & (~ ((IData)(vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__rsp_arb__ready_in) 
                                    >> 1U))));
    vlSelf->__Vcellout__rsp_buf__ready_in = ((- (IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__stall))))) 
                                             & ((2U 
                                                 & ((~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))));
    vlSelf->__PVT__mul_ready_in = (1U & ((IData)(vlSelf->__Vcellout__rsp_buf__ready_in) 
                                         | (~ (vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[5U] 
                                               >> 0x11U))));
    vlSelf->__PVT__div_ready_in = (1U & (((IData)(vlSelf->__Vcellout__rsp_buf__ready_in) 
                                          >> 1U) | 
                                         (~ (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[5U] 
                                             >> 0x11U))));
    vlSelf->__PVT__mul_fire_in = ((IData)(vlSelf->__PVT__mul_valid_in) 
                                  & (IData)(vlSelf->__PVT__mul_ready_in));
    vlSelf->__PVT__div_fire_in = ((IData)(vlSelf->__PVT__div_valid_in) 
                                  & (IData)(vlSelf->__PVT__div_ready_in));
    VVortex___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->__PVT__mul_fire_in, 
                                                            (1U 
                                                             != 
                                                             (3U 
                                                              & (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[9U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[8U] 
                                                                >> 3U)), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[5U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[4U] 
                                                                >> 3U)), vlSelf->__Vtask_dpi_imul__16__resultl, vlSelf->__Vtask_dpi_imul__16__resulth);
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__16__resultl;
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__16__resulth;
    VVortex___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->__PVT__mul_fire_in, 
                                                            (1U 
                                                             != 
                                                             (3U 
                                                              & (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xaU] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[9U] 
                                                                >> 3U)), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[6U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[5U] 
                                                                >> 3U)), vlSelf->__Vtask_dpi_imul__17__resultl, vlSelf->__Vtask_dpi_imul__17__resulth);
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__17__resultl;
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__17__resulth;
    VVortex___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->__PVT__mul_fire_in, 
                                                            (1U 
                                                             != 
                                                             (3U 
                                                              & (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xbU] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xaU] 
                                                                >> 3U)), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[7U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[6U] 
                                                                >> 3U)), vlSelf->__Vtask_dpi_imul__18__resultl, vlSelf->__Vtask_dpi_imul__18__resulth);
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__18__resultl;
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__18__resulth;
    VVortex___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->__PVT__mul_fire_in, 
                                                            (1U 
                                                             != 
                                                             (3U 
                                                              & (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xcU] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xbU] 
                                                                >> 3U)), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[8U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[7U] 
                                                                >> 3U)), vlSelf->__Vtask_dpi_imul__19__resultl, vlSelf->__Vtask_dpi_imul__19__resulth);
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__19__resultl;
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__19__resulth;
    VVortex___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->__PVT__div_fire_in, 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            vlSelf->__PVT__div_in1[0U], 
                                                            vlSelf->__PVT__div_in2[0U], vlSelf->__Vtask_dpi_idiv__20__quotient, vlSelf->__Vtask_dpi_idiv__20__remainder);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__20__quotient;
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__20__remainder;
    VVortex___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->__PVT__div_fire_in, 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            vlSelf->__PVT__div_in1[1U], 
                                                            vlSelf->__PVT__div_in2[1U], vlSelf->__Vtask_dpi_idiv__21__quotient, vlSelf->__Vtask_dpi_idiv__21__remainder);
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__21__quotient;
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__21__remainder;
    VVortex___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->__PVT__div_fire_in, 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            vlSelf->__PVT__div_in1[2U], 
                                                            vlSelf->__PVT__div_in2[2U], vlSelf->__Vtask_dpi_idiv__22__quotient, vlSelf->__Vtask_dpi_idiv__22__remainder);
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__22__quotient;
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__22__remainder;
    VVortex___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->__PVT__div_fire_in, 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            vlSelf->__PVT__div_in1[3U], 
                                                            vlSelf->__PVT__div_in2[3U], vlSelf->__Vtask_dpi_idiv__23__quotient, vlSelf->__Vtask_dpi_idiv__23__remainder);
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__23__quotient;
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__23__remainder;
    if ((0U != (3U & (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU] 
                      >> 0x11U)))) {
        vlSelf->__PVT__mul_result_tmp[0U] = vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resulth;
        vlSelf->__PVT__mul_result_tmp[1U] = vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resulth;
        vlSelf->__PVT__mul_result_tmp[2U] = vlSelf->__PVT__genblk2__BRA__2__KET____DOT__mul_resulth;
        vlSelf->__PVT__mul_result_tmp[3U] = vlSelf->__PVT__genblk2__BRA__3__KET____DOT__mul_resulth;
    } else {
        vlSelf->__PVT__mul_result_tmp[0U] = vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resultl;
        vlSelf->__PVT__mul_result_tmp[1U] = vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resultl;
        vlSelf->__PVT__mul_result_tmp[2U] = vlSelf->__PVT__genblk2__BRA__2__KET____DOT__mul_resultl;
        vlSelf->__PVT__mul_result_tmp[3U] = vlSelf->__PVT__genblk2__BRA__3__KET____DOT__mul_resultl;
    }
    vlSelf->__PVT__div_result_in[0U] = (IData)((((QData)((IData)(
                                                                 ((0x40000U 
                                                                   & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU])
                                                                   ? vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_remainder
                                                                   : vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_quotient))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((0x40000U 
                                                                    & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU])
                                                                    ? vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_remainder
                                                                    : vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_quotient)))));
    vlSelf->__PVT__div_result_in[1U] = (IData)(((((QData)((IData)(
                                                                  ((0x40000U 
                                                                    & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU])
                                                                    ? vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_remainder
                                                                    : vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_quotient))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((0x40000U 
                                                                     & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU])
                                                                     ? vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_remainder
                                                                     : vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_quotient)))) 
                                                >> 0x20U));
    vlSelf->__PVT__div_result_in[2U] = (IData)((((QData)((IData)(
                                                                 ((0x40000U 
                                                                   & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU])
                                                                   ? vlSelf->__PVT__genblk4__BRA__3__KET____DOT__div_remainder
                                                                   : vlSelf->__PVT__genblk4__BRA__3__KET____DOT__div_quotient))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((0x40000U 
                                                                    & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU])
                                                                    ? vlSelf->__PVT__genblk4__BRA__2__KET____DOT__div_remainder
                                                                    : vlSelf->__PVT__genblk4__BRA__2__KET____DOT__div_quotient)))));
    vlSelf->__PVT__div_result_in[3U] = (IData)(((((QData)((IData)(
                                                                  ((0x40000U 
                                                                    & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU])
                                                                    ? vlSelf->__PVT__genblk4__BRA__3__KET____DOT__div_remainder
                                                                    : vlSelf->__PVT__genblk4__BRA__3__KET____DOT__div_quotient))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((0x40000U 
                                                                     & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU])
                                                                     ? vlSelf->__PVT__genblk4__BRA__2__KET____DOT__div_remainder
                                                                     : vlSelf->__PVT__genblk4__BRA__2__KET____DOT__div_quotient)))) 
                                                >> 0x20U));
}

VL_ATTR_COLD void VVortex_VX_muldiv_unit__C0_N4_Ez41___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_unit__0(VVortex_VX_muldiv_unit__C0_N4_Ez41* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_muldiv_unit__C0_N4_Ez41___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_unit__0\n"); );
    // Init
    VlWide<12>/*383:0*/ __Vtemp_ha341bc8d__0;
    VlWide<6>/*191:0*/ __Vtemp_h87daec14__0;
    VlWide<6>/*191:0*/ __Vtemp_h493664cb__0;
    // Body
    vlSelf->__Vcellinp__rsp_buf__valid_in = ((2U & 
                                              (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[5U] 
                                               >> 0x10U)) 
                                             | (1U 
                                                & (vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[5U] 
                                                   >> 0x11U)));
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[0U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[1U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[2U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[3U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[4U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
        = (((IData)(vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r) 
            << 0x12U) | vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[5U]);
    vlSelf->__PVT__div_in1[0U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[9U] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[8U] 
                                                >> 3U));
    vlSelf->__PVT__div_in2[0U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[5U] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[4U] 
                                                >> 3U));
    vlSelf->__PVT__div_in1[1U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xaU] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[9U] 
                                                >> 3U));
    vlSelf->__PVT__div_in2[1U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[6U] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[5U] 
                                                >> 3U));
    vlSelf->__PVT__div_in1[2U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xbU] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xaU] 
                                                >> 3U));
    vlSelf->__PVT__div_in2[2U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[7U] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[6U] 
                                                >> 3U));
    vlSelf->__PVT__div_in1[3U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xcU] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xbU] 
                                                >> 3U));
    vlSelf->__PVT__div_in2[3U] = ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[8U] 
                                   << 0x1dU) | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[7U] 
                                                >> 3U));
    vlSelf->__PVT__mul_valid_in = ((IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_execute_if.__PVT__valid) 
                                   & (~ (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU] 
                                         >> 0x13U)));
    vlSelf->__PVT__div_valid_in = ((IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_execute_if.__PVT__valid) 
                                   & (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU] 
                                      >> 0x13U));
    __Vtemp_ha341bc8d__0[0U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[0U];
    __Vtemp_ha341bc8d__0[1U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[1U];
    __Vtemp_ha341bc8d__0[2U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[2U];
    __Vtemp_ha341bc8d__0[3U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[3U];
    __Vtemp_ha341bc8d__0[4U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[4U];
    __Vtemp_ha341bc8d__0[5U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[0U] 
                                 << 0x11U) | (0x1ffffU 
                                              & vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[5U]));
    __Vtemp_ha341bc8d__0[6U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[0U] 
                                 >> 0xfU) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[1U] 
                                             << 0x11U));
    __Vtemp_ha341bc8d__0[7U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[1U] 
                                 >> 0xfU) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[2U] 
                                             << 0x11U));
    __Vtemp_ha341bc8d__0[8U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[2U] 
                                 >> 0xfU) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                             << 0x11U));
    __Vtemp_ha341bc8d__0[9U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                 >> 0xfU) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[4U] 
                                             << 0x11U));
    __Vtemp_ha341bc8d__0[0xaU] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[4U] 
                                   >> 0xfU) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[5U] 
                                               << 0x11U));
    __Vtemp_ha341bc8d__0[0xbU] = (3U & (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[5U] 
                                        >> 0xfU));
    if ((0x161U >= (0x1ffU & ((IData)(0xb1U) * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))) {
        __Vtemp_h87daec14__0[0U] = (((0U == (0x1fU 
                                             & ((IData)(0xb1U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_ha341bc8d__0[
                                              ((IData)(1U) 
                                               + (0xfU 
                                                  & (((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_ha341bc8d__0[
                                       (0xfU & (((IData)(0xb1U) 
                                                 * 
                                                 (1U 
                                                  & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(0xb1U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h87daec14__0[1U] = (((0U == (0x1fU 
                                             & ((IData)(0xb1U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_ha341bc8d__0[
                                              ((IData)(2U) 
                                               + (0xfU 
                                                  & (((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_ha341bc8d__0[
                                       ((IData)(1U) 
                                        + (0xfU & (
                                                   ((IData)(0xb1U) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                   >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0xb1U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h87daec14__0[2U] = (((0U == (0x1fU 
                                             & ((IData)(0xb1U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_ha341bc8d__0[
                                              ((IData)(3U) 
                                               + (0xfU 
                                                  & (((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_ha341bc8d__0[
                                       ((IData)(2U) 
                                        + (0xfU & (
                                                   ((IData)(0xb1U) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                   >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0xb1U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h87daec14__0[3U] = (((0U == (0x1fU 
                                             & ((IData)(0xb1U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_ha341bc8d__0[
                                              ((IData)(4U) 
                                               + (0xfU 
                                                  & (((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_ha341bc8d__0[
                                       ((IData)(3U) 
                                        + (0xfU & (
                                                   ((IData)(0xb1U) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                   >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0xb1U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h87daec14__0[4U] = (((0U == (0x1fU 
                                             & ((IData)(0xb1U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_ha341bc8d__0[
                                              ((IData)(5U) 
                                               + (0xfU 
                                                  & (((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_ha341bc8d__0[
                                       ((IData)(4U) 
                                        + (0xfU & (
                                                   ((IData)(0xb1U) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                   >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0xb1U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h87daec14__0[5U] = (((0U == (0x1fU 
                                             & ((IData)(0xb1U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_ha341bc8d__0[
                                              ((IData)(6U) 
                                               + (0xfU 
                                                  & (((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xb1U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_ha341bc8d__0[
                                       ((IData)(5U) 
                                        + (0xfU & (
                                                   ((IData)(0xb1U) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                   >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0xb1U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
    } else {
        __Vtemp_h87daec14__0[0U] = vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[0U];
        __Vtemp_h87daec14__0[1U] = vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[1U];
        __Vtemp_h87daec14__0[2U] = vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[2U];
        __Vtemp_h87daec14__0[3U] = vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[3U];
        __Vtemp_h87daec14__0[4U] = vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[4U];
        __Vtemp_h87daec14__0[5U] = vlSelf->rsp_buf__DOT____Vxrand_h3f38f95a__0[5U];
    }
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[0U] 
        = __Vtemp_h87daec14__0[0U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[1U] 
        = __Vtemp_h87daec14__0[1U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[2U] 
        = __Vtemp_h87daec14__0[2U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[3U] 
        = __Vtemp_h87daec14__0[3U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[4U] 
        = __Vtemp_h87daec14__0[4U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[5U] 
        = (((IData)((0U != (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))) 
            << 0x12U) | ((0x20000U & ((~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)) 
                                      << 0x11U)) | 
                         (0x1ffffU & __Vtemp_h87daec14__0[5U])));
    __Vtemp_h493664cb__0[5U] = (((IData)(((0x3fffffffff80ULL 
                                           & (((QData)((IData)(
                                                               vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U])) 
                                               << 0x1dU) 
                                              | (0x1fffffffffffff80ULL 
                                                 & ((QData)((IData)(
                                                                    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U])) 
                                                    >> 3U)))) 
                                          | (QData)((IData)(
                                                            ((0x40U 
                                                              & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                 << 3U)) 
                                                             | (0x3fU 
                                                                & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                   >> 4U))))))) 
                                 >> 0x1dU) | ((IData)(
                                                      (((0x3fffffffff80ULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U])) 
                                                             << 0x1dU) 
                                                            | (0x1fffffffffffff80ULL 
                                                               & ((QData)((IData)(
                                                                                vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U])) 
                                                                  >> 3U)))) 
                                                        | (QData)((IData)(
                                                                          ((0x40U 
                                                                            & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                               << 3U)) 
                                                                           | (0x3fU 
                                                                              & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                                >> 4U)))))) 
                                                       >> 0x20U)) 
                                              << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_commit_if.__PVT__data[0U] 
        = ((vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
            << 3U) | (7U & vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U]));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_commit_if.__PVT__data[1U] 
        = ((vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
            >> 0x1dU) | (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
                         << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_commit_if.__PVT__data[2U] 
        = ((vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
            >> 0x1dU) | (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                         << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_commit_if.__PVT__data[3U] 
        = ((vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
            >> 0x1dU) | (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                         << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_commit_if.__PVT__data[4U] 
        = (((IData)(((0x3fffffffff80ULL & (((QData)((IData)(
                                                            vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U])) 
                                            << 0x1dU) 
                                           | (0x1fffffffffffff80ULL 
                                              & ((QData)((IData)(
                                                                 vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U])) 
                                                 >> 3U)))) 
                     | (QData)((IData)(((0x40U & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                  << 3U)) 
                                        | (0x3fU & 
                                           (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                            >> 4U))))))) 
            << 3U) | (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                      >> 0x1dU));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_commit_if.__PVT__data[5U] 
        = __Vtemp_h493664cb__0[5U];
}

VL_ATTR_COLD void VVortex_VX_muldiv_unit__C0_N4_Ez41___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_unit__1(VVortex_VX_muldiv_unit__C0_N4_Ez41* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_muldiv_unit__C0_N4_Ez41___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_unit__1\n"); );
    // Body
    vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__stall 
        = (IData)(((vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                    >> 0x12U) & (~ ((IData)(vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__rsp_arb__ready_in) 
                                    >> 1U))));
    vlSelf->__Vcellout__rsp_buf__ready_in = ((- (IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__stall))))) 
                                             & ((2U 
                                                 & ((~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))));
    vlSelf->__PVT__mul_ready_in = (1U & ((IData)(vlSelf->__Vcellout__rsp_buf__ready_in) 
                                         | (~ (vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[5U] 
                                               >> 0x11U))));
    vlSelf->__PVT__div_ready_in = (1U & (((IData)(vlSelf->__Vcellout__rsp_buf__ready_in) 
                                          >> 1U) | 
                                         (~ (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[5U] 
                                             >> 0x11U))));
    vlSelf->__PVT__mul_fire_in = ((IData)(vlSelf->__PVT__mul_valid_in) 
                                  & (IData)(vlSelf->__PVT__mul_ready_in));
    vlSelf->__PVT__div_fire_in = ((IData)(vlSelf->__PVT__div_valid_in) 
                                  & (IData)(vlSelf->__PVT__div_ready_in));
    VVortex___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->__PVT__mul_fire_in, 
                                                            (1U 
                                                             != 
                                                             (3U 
                                                              & (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[9U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[8U] 
                                                                >> 3U)), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[5U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[4U] 
                                                                >> 3U)), vlSelf->__Vtask_dpi_imul__24__resultl, vlSelf->__Vtask_dpi_imul__24__resulth);
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__24__resultl;
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__24__resulth;
    VVortex___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->__PVT__mul_fire_in, 
                                                            (1U 
                                                             != 
                                                             (3U 
                                                              & (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xaU] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[9U] 
                                                                >> 3U)), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[6U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[5U] 
                                                                >> 3U)), vlSelf->__Vtask_dpi_imul__25__resultl, vlSelf->__Vtask_dpi_imul__25__resulth);
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__25__resultl;
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__25__resulth;
    VVortex___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->__PVT__mul_fire_in, 
                                                            (1U 
                                                             != 
                                                             (3U 
                                                              & (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xbU] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xaU] 
                                                                >> 3U)), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[7U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[6U] 
                                                                >> 3U)), vlSelf->__Vtask_dpi_imul__26__resultl, vlSelf->__Vtask_dpi_imul__26__resulth);
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__26__resultl;
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__26__resulth;
    VVortex___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->__PVT__mul_fire_in, 
                                                            (1U 
                                                             != 
                                                             (3U 
                                                              & (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xcU] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xbU] 
                                                                >> 3U)), 
                                                            ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[8U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[7U] 
                                                                >> 3U)), vlSelf->__Vtask_dpi_imul__27__resultl, vlSelf->__Vtask_dpi_imul__27__resulth);
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__27__resultl;
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__27__resulth;
    VVortex___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->__PVT__div_fire_in, 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            vlSelf->__PVT__div_in1[0U], 
                                                            vlSelf->__PVT__div_in2[0U], vlSelf->__Vtask_dpi_idiv__28__quotient, vlSelf->__Vtask_dpi_idiv__28__remainder);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__28__quotient;
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__28__remainder;
    VVortex___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->__PVT__div_fire_in, 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            vlSelf->__PVT__div_in1[1U], 
                                                            vlSelf->__PVT__div_in2[1U], vlSelf->__Vtask_dpi_idiv__29__quotient, vlSelf->__Vtask_dpi_idiv__29__remainder);
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__29__quotient;
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__29__remainder;
    VVortex___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->__PVT__div_fire_in, 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            vlSelf->__PVT__div_in1[2U], 
                                                            vlSelf->__PVT__div_in2[2U], vlSelf->__Vtask_dpi_idiv__30__quotient, vlSelf->__Vtask_dpi_idiv__30__remainder);
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__30__quotient;
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__30__remainder;
    VVortex___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->__PVT__div_fire_in, 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU] 
                                                                 >> 0x11U))), 
                                                            vlSelf->__PVT__div_in1[3U], 
                                                            vlSelf->__PVT__div_in2[3U], vlSelf->__Vtask_dpi_idiv__31__quotient, vlSelf->__Vtask_dpi_idiv__31__remainder);
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__31__quotient;
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__31__remainder;
    if ((0U != (3U & (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU] 
                      >> 0x11U)))) {
        vlSelf->__PVT__mul_result_tmp[0U] = vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resulth;
        vlSelf->__PVT__mul_result_tmp[1U] = vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resulth;
        vlSelf->__PVT__mul_result_tmp[2U] = vlSelf->__PVT__genblk2__BRA__2__KET____DOT__mul_resulth;
        vlSelf->__PVT__mul_result_tmp[3U] = vlSelf->__PVT__genblk2__BRA__3__KET____DOT__mul_resulth;
    } else {
        vlSelf->__PVT__mul_result_tmp[0U] = vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resultl;
        vlSelf->__PVT__mul_result_tmp[1U] = vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resultl;
        vlSelf->__PVT__mul_result_tmp[2U] = vlSelf->__PVT__genblk2__BRA__2__KET____DOT__mul_resultl;
        vlSelf->__PVT__mul_result_tmp[3U] = vlSelf->__PVT__genblk2__BRA__3__KET____DOT__mul_resultl;
    }
    vlSelf->__PVT__div_result_in[0U] = (IData)((((QData)((IData)(
                                                                 ((0x40000U 
                                                                   & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU])
                                                                   ? vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_remainder
                                                                   : vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_quotient))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((0x40000U 
                                                                    & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU])
                                                                    ? vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_remainder
                                                                    : vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_quotient)))));
    vlSelf->__PVT__div_result_in[1U] = (IData)(((((QData)((IData)(
                                                                  ((0x40000U 
                                                                    & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU])
                                                                    ? vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_remainder
                                                                    : vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_quotient))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((0x40000U 
                                                                     & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU])
                                                                     ? vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_remainder
                                                                     : vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_quotient)))) 
                                                >> 0x20U));
    vlSelf->__PVT__div_result_in[2U] = (IData)((((QData)((IData)(
                                                                 ((0x40000U 
                                                                   & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU])
                                                                   ? vlSelf->__PVT__genblk4__BRA__3__KET____DOT__div_remainder
                                                                   : vlSelf->__PVT__genblk4__BRA__3__KET____DOT__div_quotient))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((0x40000U 
                                                                    & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU])
                                                                    ? vlSelf->__PVT__genblk4__BRA__2__KET____DOT__div_remainder
                                                                    : vlSelf->__PVT__genblk4__BRA__2__KET____DOT__div_quotient)))));
    vlSelf->__PVT__div_result_in[3U] = (IData)(((((QData)((IData)(
                                                                  ((0x40000U 
                                                                    & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU])
                                                                    ? vlSelf->__PVT__genblk4__BRA__3__KET____DOT__div_remainder
                                                                    : vlSelf->__PVT__genblk4__BRA__3__KET____DOT__div_quotient))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((0x40000U 
                                                                     & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU])
                                                                     ? vlSelf->__PVT__genblk4__BRA__2__KET____DOT__div_remainder
                                                                     : vlSelf->__PVT__genblk4__BRA__2__KET____DOT__div_quotient)))) 
                                                >> 0x20U));
}
