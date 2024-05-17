// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVortex.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVortex_VX_fpu_dpi__N4_T1_O3.h"
#include "VVortex__Syms.h"

extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_he5873c6d_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_hf4e66895_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_hea639f5c_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_h654ca46e_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_h638a629f_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_hc6d37415_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_hcbfd6d22_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_h454b5b0c_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_hca5c4cb8_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_h54d78c29_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_h83052c29_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_h32021d26_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_hb62e4706_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_hc80541b1_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_hc6b7c1e1_0;
extern const VlUnpacked<CData/*1:0*/, 16> VVortex__ConstPool__TABLE_h57ee0b9c_0;
extern const VlUnpacked<CData/*3:0*/, 64> VVortex__ConstPool__TABLE_hd4629e97_0;
extern const VlUnpacked<CData/*1:0*/, 64> VVortex__ConstPool__TABLE_hf73fbda4_0;
void VVortex___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ &result);
void VVortex___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ &result);
void VVortex___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result);
void VVortex___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result);
void VVortex___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result);
void VVortex___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);

VL_ATTR_COLD void VVortex_VX_fpu_dpi__N4_T1_O3___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_dpi__0(VVortex_VX_fpu_dpi__N4_T1_O3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_fpu_dpi__N4_T1_O3___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_dpi__0\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_h642f943c__0;
    // Body
    vlSelf->__PVT__per_core_has_fflags = (1U | (IData)(vlSelf->__PVT__per_core_has_fflags));
    vlSelf->__PVT__per_core_tag_out = ((0xbU & (IData)(vlSelf->__PVT__per_core_tag_out)) 
                                       | (4U & (vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                >> 3U)));
    vlSelf->__PVT__per_core_result[8U] = ((vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
                                           << 0x1bU) 
                                          | (vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                             >> 5U));
    vlSelf->__PVT__per_core_result[9U] = ((vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                           << 0x1bU) 
                                          | (vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
                                             >> 5U));
    vlSelf->__PVT__per_core_result[0xaU] = ((vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
                                             << 0x1bU) 
                                            | (vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                               >> 5U));
    vlSelf->__PVT__per_core_result[0xbU] = ((vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                             << 0x1bU) 
                                            | (vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
                                               >> 5U));
    vlSelf->__PVT__per_core_fflags = ((0xf83ffU & vlSelf->__PVT__per_core_fflags) 
                                      | (0x7c00U & 
                                         (vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                          << 0xaU)));
    vlSelf->__PVT__per_core_tag_out = ((7U & (IData)(vlSelf->__PVT__per_core_tag_out)) 
                                       | (8U & (vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                >> 3U)));
    vlSelf->__PVT__per_core_has_fflags = ((7U & (IData)(vlSelf->__PVT__per_core_has_fflags)) 
                                          | (8U & (
                                                   vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                   >> 2U)));
    vlSelf->__PVT__per_core_result[0xcU] = ((vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
                                             << 0x1bU) 
                                            | (vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                               >> 5U));
    vlSelf->__PVT__per_core_result[0xdU] = ((vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                             << 0x1bU) 
                                            | (vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
                                               >> 5U));
    vlSelf->__PVT__per_core_result[0xeU] = ((vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
                                             << 0x1bU) 
                                            | (vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                               >> 5U));
    vlSelf->__PVT__per_core_result[0xfU] = ((vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                             << 0x1bU) 
                                            | (vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
                                               >> 5U));
    vlSelf->__PVT__per_core_fflags = ((0x7fffU & vlSelf->__PVT__per_core_fflags) 
                                      | (0xf8000U & 
                                         (vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                          << 0xfU)));
    vlSelf->__Vcellinp__div_sqrt_arb__valid_in = ((2U 
                                                   & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                        >> 6U)));
    vlSelf->__PVT__per_core_valid_out = ((3U & (IData)(vlSelf->__PVT__per_core_valid_out)) 
                                         | ((8U & (
                                                   vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                   >> 4U)) 
                                            | (4U & 
                                               (vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                >> 4U))));
    vlSelf->__PVT__operands[0U][0U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[9U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[8U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][1U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[9U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[8U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][0U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[5U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[4U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][1U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[5U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[4U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][0U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[1U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][1U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[1U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[0U][2U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xaU] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[9U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][3U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xaU] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[9U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][2U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[6U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[5U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][3U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[6U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[5U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][2U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[2U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[1U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][3U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[2U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[1U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[0U][4U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xbU] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xaU] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][5U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xbU] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xaU] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][4U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[7U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[6U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][5U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[7U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[6U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][4U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[3U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[2U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][5U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[3U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[2U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[0U][6U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xcU] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xbU] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][7U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xcU] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xbU] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][6U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[8U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[7U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][7U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[8U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[7U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][6U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[4U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[3U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][7U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[4U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[3U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__Vtableidx5 = (0xfU & (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU] 
                                    >> 0x11U));
    vlSelf->__PVT__is_fadd = VVortex__ConstPool__TABLE_he5873c6d_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__is_fsub = VVortex__ConstPool__TABLE_hf4e66895_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__is_fmul = VVortex__ConstPool__TABLE_hea639f5c_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__is_fmadd = VVortex__ConstPool__TABLE_h654ca46e_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__is_fmsub = VVortex__ConstPool__TABLE_h638a629f_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__is_fnmadd = VVortex__ConstPool__TABLE_hc6d37415_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__is_fnmsub = VVortex__ConstPool__TABLE_hcbfd6d22_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__is_div = VVortex__ConstPool__TABLE_h454b5b0c_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__is_fcmp = VVortex__ConstPool__TABLE_hca5c4cb8_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__is_itof = VVortex__ConstPool__TABLE_h54d78c29_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__is_utof = VVortex__ConstPool__TABLE_h83052c29_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__is_ftoi = VVortex__ConstPool__TABLE_h32021d26_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__is_ftou = VVortex__ConstPool__TABLE_hb62e4706_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__is_f2f = VVortex__ConstPool__TABLE_hc80541b1_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__dst_fmt = VVortex__ConstPool__TABLE_hc6b7c1e1_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__int_fmt = VVortex__ConstPool__TABLE_hc6b7c1e1_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__core_select = VVortex__ConstPool__TABLE_h57ee0b9c_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__stall_out 
        = ((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__valid_out_r) 
           & (~ ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__gather_unit__DOT__commit_in_ready) 
                 >> 2U)));
    vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r 
        = (1U & (~ ((1U == (((IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state) 
                             << 2U) | (IData)(vlSelf->__Vcellinp__div_sqrt_arb__valid_in))) 
                    | (5U == (5U & (((IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state) 
                                     << 2U) | (IData)(vlSelf->__Vcellinp__div_sqrt_arb__valid_in)))))));
    vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r 
        = (((1U == (((IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state) 
                     << 2U) | (IData)(vlSelf->__Vcellinp__div_sqrt_arb__valid_in))) 
            | (5U == (5U & (((IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state) 
                             << 2U) | (IData)(vlSelf->__Vcellinp__div_sqrt_arb__valid_in)))))
            ? 1U : 2U);
    vlSelf->__PVT__per_core_valid_out = ((0xcU & (IData)(vlSelf->__PVT__per_core_valid_out)) 
                                         | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->__Vcellinp__div_sqrt_arb__valid_in))) 
                                             << 1U) 
                                            | (1U & 
                                               (vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                >> 6U))));
    vlSelf->__PVT__fncp__DOT__result_fmvf[0U] = (IData)(
                                                        ((IData)(vlSelf->__PVT__dst_fmt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__operands
                                                                           [0U][1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][0U])))
                                                          : 
                                                         (0xffffffff00000000ULL 
                                                          | (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))))));
    vlSelf->__PVT__fncp__DOT__result_fmvf[1U] = (IData)(
                                                        (((IData)(vlSelf->__PVT__dst_fmt)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][0U])))
                                                           : 
                                                          (0xffffffff00000000ULL 
                                                           | (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))))) 
                                                         >> 0x20U));
    vlSelf->__PVT__fncp__DOT__result_fmvf[2U] = (IData)(
                                                        ((IData)(vlSelf->__PVT__dst_fmt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__operands
                                                                           [0U][3U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][2U])))
                                                          : 
                                                         (0xffffffff00000000ULL 
                                                          | (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))))));
    vlSelf->__PVT__fncp__DOT__result_fmvf[3U] = (IData)(
                                                        (((IData)(vlSelf->__PVT__dst_fmt)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][3U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][2U])))
                                                           : 
                                                          (0xffffffff00000000ULL 
                                                           | (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))))) 
                                                         >> 0x20U));
    vlSelf->__PVT__fncp__DOT__result_fmvf[4U] = (IData)(
                                                        ((IData)(vlSelf->__PVT__dst_fmt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__operands
                                                                           [0U][5U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][4U])))
                                                          : 
                                                         (0xffffffff00000000ULL 
                                                          | (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][4U]))))));
    vlSelf->__PVT__fncp__DOT__result_fmvf[5U] = (IData)(
                                                        (((IData)(vlSelf->__PVT__dst_fmt)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][5U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][4U])))
                                                           : 
                                                          (0xffffffff00000000ULL 
                                                           | (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))))) 
                                                         >> 0x20U));
    vlSelf->__PVT__fncp__DOT__result_fmvf[6U] = (IData)(
                                                        ((IData)(vlSelf->__PVT__dst_fmt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__operands
                                                                           [0U][7U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][6U])))
                                                          : 
                                                         (0xffffffff00000000ULL 
                                                          | (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][6U]))))));
    vlSelf->__PVT__fncp__DOT__result_fmvf[7U] = (IData)(
                                                        (((IData)(vlSelf->__PVT__dst_fmt)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][7U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][6U])))
                                                           : 
                                                          (0xffffffff00000000ULL 
                                                           | (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))))) 
                                                         >> 0x20U));
    vlSelf->__PVT__fncp__DOT__result_fmvx[0U] = (IData)(
                                                        ((IData)(vlSelf->__PVT__dst_fmt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__operands
                                                                           [0U][1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][0U])))
                                                          : 
                                                         VL_EXTENDS_QI(64,32, 
                                                                       vlSelf->__PVT__operands
                                                                       [0U][0U])));
    vlSelf->__PVT__fncp__DOT__result_fmvx[1U] = (IData)(
                                                        (((IData)(vlSelf->__PVT__dst_fmt)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][0U])))
                                                           : 
                                                          VL_EXTENDS_QI(64,32, 
                                                                        vlSelf->__PVT__operands
                                                                        [0U][0U])) 
                                                         >> 0x20U));
    vlSelf->__PVT__fncp__DOT__result_fmvx[2U] = (IData)(
                                                        ((IData)(vlSelf->__PVT__dst_fmt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__operands
                                                                           [0U][3U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][2U])))
                                                          : 
                                                         VL_EXTENDS_QI(64,32, 
                                                                       vlSelf->__PVT__operands
                                                                       [0U][2U])));
    vlSelf->__PVT__fncp__DOT__result_fmvx[3U] = (IData)(
                                                        (((IData)(vlSelf->__PVT__dst_fmt)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][3U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][2U])))
                                                           : 
                                                          VL_EXTENDS_QI(64,32, 
                                                                        vlSelf->__PVT__operands
                                                                        [0U][2U])) 
                                                         >> 0x20U));
    vlSelf->__PVT__fncp__DOT__result_fmvx[4U] = (IData)(
                                                        ((IData)(vlSelf->__PVT__dst_fmt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__operands
                                                                           [0U][5U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][4U])))
                                                          : 
                                                         VL_EXTENDS_QI(64,32, 
                                                                       vlSelf->__PVT__operands
                                                                       [0U][4U])));
    vlSelf->__PVT__fncp__DOT__result_fmvx[5U] = (IData)(
                                                        (((IData)(vlSelf->__PVT__dst_fmt)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][5U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][4U])))
                                                           : 
                                                          VL_EXTENDS_QI(64,32, 
                                                                        vlSelf->__PVT__operands
                                                                        [0U][4U])) 
                                                         >> 0x20U));
    vlSelf->__PVT__fncp__DOT__result_fmvx[6U] = (IData)(
                                                        ((IData)(vlSelf->__PVT__dst_fmt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__operands
                                                                           [0U][7U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][6U])))
                                                          : 
                                                         VL_EXTENDS_QI(64,32, 
                                                                       vlSelf->__PVT__operands
                                                                       [0U][6U])));
    vlSelf->__PVT__fncp__DOT__result_fmvx[7U] = (IData)(
                                                        (((IData)(vlSelf->__PVT__dst_fmt)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][7U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][6U])))
                                                           : 
                                                          VL_EXTENDS_QI(64,32, 
                                                                        vlSelf->__PVT__operands
                                                                        [0U][6U])) 
                                                         >> 0x20U));
    vlSelf->__PVT__fdiv__DOT__fdiv_valid = (((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_valid) 
                                             & (1U 
                                                == (IData)(vlSelf->__PVT__core_select))) 
                                            & (IData)(vlSelf->__PVT__is_div));
    vlSelf->__PVT__fsqrt__DOT__fsqrt_valid = (((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_valid) 
                                               & (1U 
                                                  == (IData)(vlSelf->__PVT__core_select))) 
                                              & (~ (IData)(vlSelf->__PVT__is_div)));
    vlSelf->__PVT__fcvt__DOT__fcvt_valid = ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_valid) 
                                            & (2U == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__fma__DOT__fma_valid = ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_valid) 
                                          & (0U == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__fncp__DOT__fncp_valid = ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_valid) 
                                            & (3U == (IData)(vlSelf->__PVT__core_select)));
    __Vtemp_h642f943c__0[0U] = (0x40U | ((0xffffff80U 
                                          & (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                             << 2U)) 
                                         | ((0x3eU 
                                             & (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                                << 1U)) 
                                            | (1U & 
                                               (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                >> 5U)))));
    __Vtemp_h642f943c__0[1U] = (((0x7cU & (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
                                           << 2U)) 
                                 | (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                    >> 0x1eU)) | (0xffffff80U 
                                                  & (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
                                                     << 2U)));
    __Vtemp_h642f943c__0[2U] = (((0x7cU & (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                           << 2U)) 
                                 | (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
                                    >> 0x1eU)) | (0xffffff80U 
                                                  & (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                     << 2U)));
    __Vtemp_h642f943c__0[3U] = (((0x7cU & (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
                                           << 2U)) 
                                 | (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                    >> 0x1eU)) | (0xffffff80U 
                                                  & (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
                                                     << 2U)));
    __Vtemp_h642f943c__0[4U] = (0x2000U | (((0xffffc000U 
                                             & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                                << 9U)) 
                                            | ((0x1f00U 
                                                & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                                   << 8U)) 
                                               | (0x80U 
                                                  & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                     << 2U)))) 
                                           | ((0x7cU 
                                               & (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                  << 2U)) 
                                              | (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
                                                 >> 0x1eU))));
    __Vtemp_h642f943c__0[5U] = ((0x7fU & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                          >> 0x17U)) 
                                | (((0x3e00U & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
                                                << 9U)) 
                                    | (0x180U & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                                 >> 0x17U))) 
                                   | (0xffffc000U & 
                                      (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
                                       << 9U))));
    __Vtemp_h642f943c__0[6U] = ((0x7fU & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
                                          >> 0x17U)) 
                                | (((0x3e00U & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                << 9U)) 
                                    | (0x180U & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
                                                 >> 0x17U))) 
                                   | (0xffffc000U & 
                                      (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                       << 9U))));
    __Vtemp_h642f943c__0[7U] = ((0x7fU & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                          >> 0x17U)) 
                                | (((0x3e00U & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
                                                << 9U)) 
                                    | (0x180U & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                 >> 0x17U))) 
                                   | (0xffffc000U & 
                                      (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
                                       << 9U))));
    __Vtemp_h642f943c__0[8U] = ((0x7fU & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
                                          >> 0x17U)) 
                                | ((0x3e00U & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                               << 9U)) 
                                   | (0x180U & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
                                                >> 0x17U))));
    if ((0x10dU >= (0x1ffU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))) {
        vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
            = (((0U == (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                 ? 0U : (__Vtemp_h642f943c__0[((IData)(1U) 
                                               + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                     >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x87U) 
                                                  * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
               | (__Vtemp_h642f943c__0[(0xfU & (((IData)(0x87U) 
                                                 * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                >> 5U))] 
                  >> (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))));
        vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[1U] 
            = (((0U == (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                 ? 0U : (__Vtemp_h642f943c__0[((IData)(2U) 
                                               + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                     >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x87U) 
                                                  * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
               | (__Vtemp_h642f943c__0[((IData)(1U) 
                                        + (0xfU & (
                                                   ((IData)(0x87U) 
                                                    * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                   >> 5U)))] 
                  >> (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))));
        vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[2U] 
            = (((0U == (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                 ? 0U : (__Vtemp_h642f943c__0[((IData)(3U) 
                                               + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                     >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x87U) 
                                                  * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
               | (__Vtemp_h642f943c__0[((IData)(2U) 
                                        + (0xfU & (
                                                   ((IData)(0x87U) 
                                                    * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                   >> 5U)))] 
                  >> (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))));
        vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[3U] 
            = (((0U == (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                 ? 0U : (__Vtemp_h642f943c__0[((IData)(4U) 
                                               + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                     >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x87U) 
                                                  * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
               | (__Vtemp_h642f943c__0[((IData)(3U) 
                                        + (0xfU & (
                                                   ((IData)(0x87U) 
                                                    * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                   >> 5U)))] 
                  >> (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))));
    } else {
        vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
            = vlSelf->div_sqrt_arb__DOT____Vxrand_h3a5e75a1__0[0U];
        vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[1U] 
            = vlSelf->div_sqrt_arb__DOT____Vxrand_h3a5e75a1__0[1U];
        vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[2U] 
            = vlSelf->div_sqrt_arb__DOT____Vxrand_h3a5e75a1__0[2U];
        vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[3U] 
            = vlSelf->div_sqrt_arb__DOT____Vxrand_h3a5e75a1__0[3U];
    }
    vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[4U] 
        = (((IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r) 
            << 7U) | (0x7fU & ((0x10dU >= (0x1ffU & 
                                           ((IData)(0x87U) 
                                            * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                                ? (((0U == (0x1fU & 
                                            ((IData)(0x87U) 
                                             * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                                     ? 0U : (__Vtemp_h642f943c__0[
                                             ((IData)(5U) 
                                              + (0xfU 
                                                 & (((IData)(0x87U) 
                                                     * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x87U) 
                                                     * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
                                   | (__Vtemp_h642f943c__0[
                                      ((IData)(4U) 
                                       + (0xfU & (((IData)(0x87U) 
                                                   * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                  >> 5U)))] 
                                      >> (0x1fU & ((IData)(0x87U) 
                                                   * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))
                                : vlSelf->div_sqrt_arb__DOT____Vxrand_h3a5e75a1__0[4U])));
    vlSelf->__Vtableidx6 = (((IData)(vlSelf->__PVT__per_core_valid_out) 
                             << 2U) | (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state));
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r 
        = VVortex__ConstPool__TABLE_hd4629e97_0[vlSelf->__Vtableidx6];
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r 
        = VVortex__ConstPool__TABLE_hf73fbda4_0[vlSelf->__Vtableidx6];
    vlSelf->__PVT__per_core_has_fflags = ((9U & (IData)(vlSelf->__PVT__per_core_has_fflags)) 
                                          | (4U | (2U 
                                                   & (vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
                                                      >> 5U))));
    vlSelf->__PVT__per_core_result[0U] = ((vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
                                           << 0x1bU) 
                                          | (vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                             >> 5U));
    vlSelf->__PVT__per_core_result[1U] = ((vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                           << 0x1bU) 
                                          | (vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
                                             >> 5U));
    vlSelf->__PVT__per_core_result[2U] = ((vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
                                           << 0x1bU) 
                                          | (vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                             >> 5U));
    vlSelf->__PVT__per_core_result[3U] = ((vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                           << 0x1bU) 
                                          | (vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
                                             >> 5U));
    vlSelf->__PVT__per_core_result[4U] = ((vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[1U] 
                                           << 0x19U) 
                                          | (vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
                                             >> 7U));
    vlSelf->__PVT__per_core_result[5U] = ((vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[2U] 
                                           << 0x19U) 
                                          | (vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[1U] 
                                             >> 7U));
    vlSelf->__PVT__per_core_result[6U] = ((vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[3U] 
                                           << 0x19U) 
                                          | (vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[2U] 
                                             >> 7U));
    vlSelf->__PVT__per_core_result[7U] = ((vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[4U] 
                                           << 0x19U) 
                                          | (vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[3U] 
                                             >> 7U));
    vlSelf->__PVT__per_core_fflags = ((0xffc00U & vlSelf->__PVT__per_core_fflags) 
                                      | ((0x3e0U & 
                                          (vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
                                           << 4U)) 
                                         | (0x1fU & 
                                            vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])));
    vlSelf->__PVT__per_core_tag_out = ((0xcU & (IData)(vlSelf->__PVT__per_core_tag_out)) 
                                       | ((2U & (vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
                                                 << 1U)) 
                                          | (1U & (
                                                   vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                   >> 5U))));
    vlSelf->__PVT__per_core_ready_out = ((8U & (IData)(vlSelf->__PVT__per_core_ready_out)) 
                                         | ((4U & (
                                                   ((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__use_buffer)) 
                                                    << 2U) 
                                                   & (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r))) 
                                            | (3U & 
                                               ((- (IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__use_buffer))))) 
                                                & (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r)))));
    vlSelf->__PVT__per_core_ready_out = ((7U & (IData)(vlSelf->__PVT__per_core_ready_out)) 
                                         | (((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__use_buffer)) 
                                             & ((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r) 
                                                >> 3U)) 
                                            << 3U));
    vlSelf->__PVT__per_core_data_out[0U] = ((vlSelf->__PVT__per_core_result[0U] 
                                             << 7U) 
                                            | ((0x40U 
                                                & ((IData)(vlSelf->__PVT__per_core_has_fflags) 
                                                   << 6U)) 
                                               | ((0x3eU 
                                                   & (vlSelf->__PVT__per_core_fflags 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->__PVT__per_core_tag_out)))));
    vlSelf->__PVT__per_core_data_out[1U] = ((vlSelf->__PVT__per_core_result[0U] 
                                             >> 0x19U) 
                                            | (vlSelf->__PVT__per_core_result[1U] 
                                               << 7U));
    vlSelf->__PVT__per_core_data_out[2U] = ((vlSelf->__PVT__per_core_result[1U] 
                                             >> 0x19U) 
                                            | (vlSelf->__PVT__per_core_result[2U] 
                                               << 7U));
    vlSelf->__PVT__per_core_data_out[3U] = ((vlSelf->__PVT__per_core_result[2U] 
                                             >> 0x19U) 
                                            | (vlSelf->__PVT__per_core_result[3U] 
                                               << 7U));
    vlSelf->__PVT__per_core_data_out[4U] = ((0xffffff80U 
                                             & vlSelf->__PVT__per_core_data_out[4U]) 
                                            | (vlSelf->__PVT__per_core_result[3U] 
                                               >> 0x19U));
    vlSelf->__PVT__per_core_data_out[4U] = ((0x7fU 
                                             & vlSelf->__PVT__per_core_data_out[4U]) 
                                            | ((vlSelf->__PVT__per_core_result[4U] 
                                                << 0xeU) 
                                               | ((0x2000U 
                                                   & ((IData)(vlSelf->__PVT__per_core_has_fflags) 
                                                      << 0xcU)) 
                                                  | ((0x1f00U 
                                                      & (vlSelf->__PVT__per_core_fflags 
                                                         << 3U)) 
                                                     | (0x80U 
                                                        & ((IData)(vlSelf->__PVT__per_core_tag_out) 
                                                           << 6U))))));
    vlSelf->__PVT__per_core_data_out[5U] = ((0x7fU 
                                             & (vlSelf->__PVT__per_core_result[4U] 
                                                >> 0x12U)) 
                                            | ((0x3f80U 
                                                & (vlSelf->__PVT__per_core_result[4U] 
                                                   >> 0x12U)) 
                                               | (vlSelf->__PVT__per_core_result[5U] 
                                                  << 0xeU)));
    vlSelf->__PVT__per_core_data_out[6U] = ((0x7fU 
                                             & (vlSelf->__PVT__per_core_result[5U] 
                                                >> 0x12U)) 
                                            | ((0x3f80U 
                                                & (vlSelf->__PVT__per_core_result[5U] 
                                                   >> 0x12U)) 
                                               | (vlSelf->__PVT__per_core_result[6U] 
                                                  << 0xeU)));
    vlSelf->__PVT__per_core_data_out[7U] = ((0x7fU 
                                             & (vlSelf->__PVT__per_core_result[6U] 
                                                >> 0x12U)) 
                                            | ((0x3f80U 
                                                & (vlSelf->__PVT__per_core_result[6U] 
                                                   >> 0x12U)) 
                                               | (vlSelf->__PVT__per_core_result[7U] 
                                                  << 0xeU)));
    vlSelf->__PVT__per_core_data_out[8U] = ((0xffffc000U 
                                             & vlSelf->__PVT__per_core_data_out[8U]) 
                                            | ((0x7fU 
                                                & (vlSelf->__PVT__per_core_result[7U] 
                                                   >> 0x12U)) 
                                               | (0x3f80U 
                                                  & (vlSelf->__PVT__per_core_result[7U] 
                                                     >> 0x12U))));
    vlSelf->__PVT__per_core_data_out[8U] = ((0x3fffU 
                                             & vlSelf->__PVT__per_core_data_out[8U]) 
                                            | ((vlSelf->__PVT__per_core_result[8U] 
                                                << 0x15U) 
                                               | ((0x100000U 
                                                   & ((IData)(vlSelf->__PVT__per_core_has_fflags) 
                                                      << 0x12U)) 
                                                  | ((0xf8000U 
                                                      & (vlSelf->__PVT__per_core_fflags 
                                                         << 5U)) 
                                                     | (0x4000U 
                                                        & ((IData)(vlSelf->__PVT__per_core_tag_out) 
                                                           << 0xcU))))));
    vlSelf->__PVT__per_core_data_out[9U] = ((0x3fffU 
                                             & (vlSelf->__PVT__per_core_result[8U] 
                                                >> 0xbU)) 
                                            | ((0x1fc000U 
                                                & (vlSelf->__PVT__per_core_result[8U] 
                                                   >> 0xbU)) 
                                               | (vlSelf->__PVT__per_core_result[9U] 
                                                  << 0x15U)));
    vlSelf->__PVT__per_core_data_out[0xaU] = ((0x3fffU 
                                               & (vlSelf->__PVT__per_core_result[9U] 
                                                  >> 0xbU)) 
                                              | ((0x1fc000U 
                                                  & (vlSelf->__PVT__per_core_result[9U] 
                                                     >> 0xbU)) 
                                                 | (vlSelf->__PVT__per_core_result[0xaU] 
                                                    << 0x15U)));
    vlSelf->__PVT__per_core_data_out[0xbU] = ((0x3fffU 
                                               & (vlSelf->__PVT__per_core_result[0xaU] 
                                                  >> 0xbU)) 
                                              | ((0x1fc000U 
                                                  & (vlSelf->__PVT__per_core_result[0xaU] 
                                                     >> 0xbU)) 
                                                 | (vlSelf->__PVT__per_core_result[0xbU] 
                                                    << 0x15U)));
    vlSelf->__PVT__per_core_data_out[0xcU] = ((0xffe00000U 
                                               & vlSelf->__PVT__per_core_data_out[0xcU]) 
                                              | ((0x3fffU 
                                                  & (vlSelf->__PVT__per_core_result[0xbU] 
                                                     >> 0xbU)) 
                                                 | (0x1fc000U 
                                                    & (vlSelf->__PVT__per_core_result[0xbU] 
                                                       >> 0xbU))));
    vlSelf->__PVT__per_core_data_out[0xcU] = ((0x1fffffU 
                                               & vlSelf->__PVT__per_core_data_out[0xcU]) 
                                              | ((vlSelf->__PVT__per_core_result[0xcU] 
                                                  << 0x1cU) 
                                                 | ((0x8000000U 
                                                     & ((IData)(vlSelf->__PVT__per_core_has_fflags) 
                                                        << 0x18U)) 
                                                    | ((0x7c00000U 
                                                        & (vlSelf->__PVT__per_core_fflags 
                                                           << 7U)) 
                                                       | (0x200000U 
                                                          & ((IData)(vlSelf->__PVT__per_core_tag_out) 
                                                             << 0x12U))))));
    vlSelf->__PVT__per_core_data_out[0xdU] = ((0x1fffffU 
                                               & (vlSelf->__PVT__per_core_result[0xcU] 
                                                  >> 4U)) 
                                              | ((0xfe00000U 
                                                  & (vlSelf->__PVT__per_core_result[0xcU] 
                                                     >> 4U)) 
                                                 | (vlSelf->__PVT__per_core_result[0xdU] 
                                                    << 0x1cU)));
    vlSelf->__PVT__per_core_data_out[0xeU] = ((0x1fffffU 
                                               & (vlSelf->__PVT__per_core_result[0xdU] 
                                                  >> 4U)) 
                                              | ((0xfe00000U 
                                                  & (vlSelf->__PVT__per_core_result[0xdU] 
                                                     >> 4U)) 
                                                 | (vlSelf->__PVT__per_core_result[0xeU] 
                                                    << 0x1cU)));
    vlSelf->__PVT__per_core_data_out[0xfU] = ((0x1fffffU 
                                               & (vlSelf->__PVT__per_core_result[0xeU] 
                                                  >> 4U)) 
                                              | ((0xfe00000U 
                                                  & (vlSelf->__PVT__per_core_result[0xeU] 
                                                     >> 4U)) 
                                                 | (vlSelf->__PVT__per_core_result[0xfU] 
                                                    << 0x1cU)));
    vlSelf->__PVT__per_core_data_out[0x10U] = (0xfffffffU 
                                               & ((0x1fffffU 
                                                   & (vlSelf->__PVT__per_core_result[0xfU] 
                                                      >> 4U)) 
                                                  | (0xfe00000U 
                                                     & (vlSelf->__PVT__per_core_result[0xfU] 
                                                        >> 4U))));
    vlSelf->__PVT__fcvt__DOT__fcvt_ready = (1U & (((IData)(vlSelf->__PVT__per_core_ready_out) 
                                                   >> 2U) 
                                                  | (~ 
                                                     ((IData)(vlSelf->__PVT__per_core_valid_out) 
                                                      >> 2U))));
    vlSelf->__PVT__fma__DOT__fma_ready = (1U & ((IData)(vlSelf->__PVT__per_core_ready_out) 
                                                | (~ (IData)(vlSelf->__PVT__per_core_valid_out))));
    vlSelf->__PVT__fncp__DOT__fncp_ready = (1U & (((IData)(vlSelf->__PVT__per_core_ready_out) 
                                                   >> 3U) 
                                                  | (~ 
                                                     ((IData)(vlSelf->__PVT__per_core_valid_out) 
                                                      >> 3U))));
    vlSelf->__Vcellout__div_sqrt_arb__ready_in = ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__per_core_ready_out) 
                                                                 >> 1U)))) 
                                                  & (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r));
    if ((0x21bU >= (0x3ffU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))) {
        vlSelf->rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
            = (((0U == (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                 ? 0U : (vlSelf->__PVT__per_core_data_out[
                         ((IData)(1U) + (0x1fU & (((IData)(0x87U) 
                                                   * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x87U) 
                                                  * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
               | (vlSelf->__PVT__per_core_data_out[
                  (0x1fU & (((IData)(0x87U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x87U) 
                                                  * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))));
        vlSelf->rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[1U] 
            = (((0U == (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                 ? 0U : (vlSelf->__PVT__per_core_data_out[
                         ((IData)(2U) + (0x1fU & (((IData)(0x87U) 
                                                   * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x87U) 
                                                  * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
               | (vlSelf->__PVT__per_core_data_out[
                  ((IData)(1U) + (0x1fU & (((IData)(0x87U) 
                                            * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))));
        vlSelf->rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[2U] 
            = (((0U == (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                 ? 0U : (vlSelf->__PVT__per_core_data_out[
                         ((IData)(3U) + (0x1fU & (((IData)(0x87U) 
                                                   * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x87U) 
                                                  * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
               | (vlSelf->__PVT__per_core_data_out[
                  ((IData)(2U) + (0x1fU & (((IData)(0x87U) 
                                            * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))));
        vlSelf->rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[3U] 
            = (((0U == (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                 ? 0U : (vlSelf->__PVT__per_core_data_out[
                         ((IData)(4U) + (0x1fU & (((IData)(0x87U) 
                                                   * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x87U) 
                                                  * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
               | (vlSelf->__PVT__per_core_data_out[
                  ((IData)(3U) + (0x1fU & (((IData)(0x87U) 
                                            * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))));
    } else {
        vlSelf->rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
            = vlSelf->rsp_arb__DOT____Vxrand_h3a5e75a1__0[0U];
        vlSelf->rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[1U] 
            = vlSelf->rsp_arb__DOT____Vxrand_h3a5e75a1__0[1U];
        vlSelf->rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[2U] 
            = vlSelf->rsp_arb__DOT____Vxrand_h3a5e75a1__0[2U];
        vlSelf->rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[3U] 
            = vlSelf->rsp_arb__DOT____Vxrand_h3a5e75a1__0[3U];
    }
    vlSelf->rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[4U] 
        = (((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r) 
            << 7U) | (0x7fU & ((0x21bU >= (0x3ffU & 
                                           ((IData)(0x87U) 
                                            * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                                ? (((0U == (0x1fU & 
                                            ((IData)(0x87U) 
                                             * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                                     ? 0U : (vlSelf->__PVT__per_core_data_out[
                                             ((IData)(5U) 
                                              + (0x1fU 
                                                 & (((IData)(0x87U) 
                                                     * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x87U) 
                                                     * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
                                   | (vlSelf->__PVT__per_core_data_out[
                                      ((IData)(4U) 
                                       + (0x1fU & (
                                                   ((IData)(0x87U) 
                                                    * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                   >> 5U)))] 
                                      >> (0x1fU & ((IData)(0x87U) 
                                                   * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))
                                : vlSelf->rsp_arb__DOT____Vxrand_h3a5e75a1__0[4U])));
    vlSelf->__PVT__fcvt__DOT__fcvt_fire = ((IData)(vlSelf->__PVT__fcvt__DOT__fcvt_valid) 
                                           & (IData)(vlSelf->__PVT__fcvt__DOT__fcvt_ready));
    vlSelf->__PVT__per_core_ready_in = ((0xbU & (IData)(vlSelf->__PVT__per_core_ready_in)) 
                                        | ((IData)(vlSelf->__PVT__fcvt__DOT__fcvt_ready) 
                                           << 2U));
    vlSelf->__PVT__fma__DOT__fma_fire = ((IData)(vlSelf->__PVT__fma__DOT__fma_valid) 
                                         & (IData)(vlSelf->__PVT__fma__DOT__fma_ready));
    vlSelf->__PVT__per_core_ready_in = ((0xeU & (IData)(vlSelf->__PVT__per_core_ready_in)) 
                                        | (IData)(vlSelf->__PVT__fma__DOT__fma_ready));
    vlSelf->__PVT__per_core_ready_in = ((7U & (IData)(vlSelf->__PVT__per_core_ready_in)) 
                                        | ((IData)(vlSelf->__PVT__fncp__DOT__fncp_ready) 
                                           << 3U));
    vlSelf->__PVT__fncp__DOT__fncp_fire = ((IData)(vlSelf->__PVT__fncp__DOT__fncp_valid) 
                                           & (IData)(vlSelf->__PVT__fncp__DOT__fncp_ready));
    vlSelf->__PVT__fdiv__DOT__fdiv_ready = (1U & ((IData)(vlSelf->__Vcellout__div_sqrt_arb__ready_in) 
                                                  | (~ 
                                                     (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                      >> 6U))));
    vlSelf->__PVT__fsqrt__DOT__fsqrt_ready = (1U & 
                                              (((IData)(vlSelf->__Vcellout__div_sqrt_arb__ready_in) 
                                                >> 1U) 
                                               | (~ 
                                                  (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                   >> 6U))));
    VVortex___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), vlSelf->__PVT__int_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__55__result, vlSelf->__Vtask_dpi_itof__55__fflags);
    vlSelf->__PVT__fcvt__DOT__result_itof[0U] = (IData)(vlSelf->__Vtask_dpi_itof__55__result);
    vlSelf->__PVT__fcvt__DOT__result_itof[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_itof__55__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_ha816653d__0 = vlSelf->__Vtask_dpi_itof__55__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_itof = ((0xfffe0U 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_itof) 
                                             | (IData)(vlSelf->__Vlvbound_ha816653d__0));
    VVortex___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), vlSelf->__PVT__int_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__56__result, vlSelf->__Vtask_dpi_utof__56__fflags);
    vlSelf->__PVT__fcvt__DOT__result_utof[0U] = (IData)(vlSelf->__Vtask_dpi_utof__56__result);
    vlSelf->__PVT__fcvt__DOT__result_utof[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_utof__56__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h24bf1863__0 = vlSelf->__Vtask_dpi_utof__56__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_utof = ((0xfffe0U 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_utof) 
                                             | (IData)(vlSelf->__Vlvbound_h24bf1863__0));
    VVortex___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__int_fmt), vlSelf->__PVT__dst_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__57__result, vlSelf->__Vtask_dpi_ftoi__57__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[0U] = (IData)(vlSelf->__Vtask_dpi_ftoi__57__result);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftoi__57__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h8d4e7366__0 = vlSelf->__Vtask_dpi_ftoi__57__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_ftoi = ((0xfffe0U 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_ftoi) 
                                             | (IData)(vlSelf->__Vlvbound_h8d4e7366__0));
    VVortex___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__int_fmt), vlSelf->__PVT__dst_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__58__result, vlSelf->__Vtask_dpi_ftou__58__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftou[0U] = (IData)(vlSelf->__Vtask_dpi_ftou__58__result);
    vlSelf->__PVT__fcvt__DOT__result_ftou[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftou__58__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h6ce28c5f__0 = vlSelf->__Vtask_dpi_ftou__58__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_ftou = ((0xfffe0U 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_ftou) 
                                             | (IData)(vlSelf->__Vlvbound_h6ce28c5f__0));
    VVortex___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][0U]))), vlSelf->__Vtask_dpi_f2f__59__result);
    vlSelf->__PVT__fcvt__DOT__result_f2f[0U] = (IData)(vlSelf->__Vtask_dpi_f2f__59__result);
    vlSelf->__PVT__fcvt__DOT__result_f2f[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_f2f__59__result 
                                                        >> 0x20U));
    if (vlSelf->__PVT__is_itof) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[0U] = 
            vlSelf->__PVT__fcvt__DOT__result_itof[0U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & vlSelf->__PVT__fcvt__DOT__fflags_itof);
    } else if (vlSelf->__PVT__is_utof) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[0U] = 
            vlSelf->__PVT__fcvt__DOT__result_utof[0U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & vlSelf->__PVT__fcvt__DOT__fflags_utof);
    } else if (vlSelf->__PVT__is_ftoi) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[0U] = 
            vlSelf->__PVT__fcvt__DOT__result_ftoi[0U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & vlSelf->__PVT__fcvt__DOT__fflags_ftoi);
    } else if (vlSelf->__PVT__is_ftou) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[0U] = 
            vlSelf->__PVT__fcvt__DOT__result_ftou[0U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & vlSelf->__PVT__fcvt__DOT__fflags_ftou);
    } else {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[0U] = 
            ((IData)(vlSelf->__PVT__is_f2f) ? vlSelf->__PVT__fcvt__DOT__result_f2f[0U]
              : 0U);
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__fcvt__DOT__fflags_fcvt = ((0xfffe0U 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_fcvt) 
                                             | (IData)(vlSelf->__Vlvbound_h268775a1__0));
    VVortex___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), vlSelf->__PVT__int_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__55__result, vlSelf->__Vtask_dpi_itof__55__fflags);
    vlSelf->__PVT__fcvt__DOT__result_itof[2U] = (IData)(vlSelf->__Vtask_dpi_itof__55__result);
    vlSelf->__PVT__fcvt__DOT__result_itof[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_itof__55__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_ha816653d__0 = vlSelf->__Vtask_dpi_itof__55__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_itof = ((0xffc1fU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_itof) 
                                             | ((IData)(vlSelf->__Vlvbound_ha816653d__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), vlSelf->__PVT__int_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__56__result, vlSelf->__Vtask_dpi_utof__56__fflags);
    vlSelf->__PVT__fcvt__DOT__result_utof[2U] = (IData)(vlSelf->__Vtask_dpi_utof__56__result);
    vlSelf->__PVT__fcvt__DOT__result_utof[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_utof__56__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h24bf1863__0 = vlSelf->__Vtask_dpi_utof__56__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_utof = ((0xffc1fU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_utof) 
                                             | ((IData)(vlSelf->__Vlvbound_h24bf1863__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__int_fmt), vlSelf->__PVT__dst_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__57__result, vlSelf->__Vtask_dpi_ftoi__57__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[2U] = (IData)(vlSelf->__Vtask_dpi_ftoi__57__result);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftoi__57__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h8d4e7366__0 = vlSelf->__Vtask_dpi_ftoi__57__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_ftoi = ((0xffc1fU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_ftoi) 
                                             | ((IData)(vlSelf->__Vlvbound_h8d4e7366__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__int_fmt), vlSelf->__PVT__dst_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__58__result, vlSelf->__Vtask_dpi_ftou__58__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftou[2U] = (IData)(vlSelf->__Vtask_dpi_ftou__58__result);
    vlSelf->__PVT__fcvt__DOT__result_ftou[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftou__58__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h6ce28c5f__0 = vlSelf->__Vtask_dpi_ftou__58__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_ftou = ((0xffc1fU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_ftou) 
                                             | ((IData)(vlSelf->__Vlvbound_h6ce28c5f__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][2U]))), vlSelf->__Vtask_dpi_f2f__59__result);
    vlSelf->__PVT__fcvt__DOT__result_f2f[2U] = (IData)(vlSelf->__Vtask_dpi_f2f__59__result);
    vlSelf->__PVT__fcvt__DOT__result_f2f[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_f2f__59__result 
                                                        >> 0x20U));
    if (vlSelf->__PVT__is_itof) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[1U] = 
            vlSelf->__PVT__fcvt__DOT__result_itof[2U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 
                                           (vlSelf->__PVT__fcvt__DOT__fflags_itof 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_utof) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[1U] = 
            vlSelf->__PVT__fcvt__DOT__result_utof[2U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 
                                           (vlSelf->__PVT__fcvt__DOT__fflags_utof 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_ftoi) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[1U] = 
            vlSelf->__PVT__fcvt__DOT__result_ftoi[2U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 
                                           (vlSelf->__PVT__fcvt__DOT__fflags_ftoi 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_ftou) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[1U] = 
            vlSelf->__PVT__fcvt__DOT__result_ftou[2U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 
                                           (vlSelf->__PVT__fcvt__DOT__fflags_ftou 
                                            >> 5U));
    } else {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[1U] = 
            ((IData)(vlSelf->__PVT__is_f2f) ? vlSelf->__PVT__fcvt__DOT__result_f2f[2U]
              : 0U);
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__fcvt__DOT__fflags_fcvt = ((0xffc1fU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_fcvt) 
                                             | ((IData)(vlSelf->__Vlvbound_h268775a1__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), vlSelf->__PVT__int_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][4U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__55__result, vlSelf->__Vtask_dpi_itof__55__fflags);
    vlSelf->__PVT__fcvt__DOT__result_itof[4U] = (IData)(vlSelf->__Vtask_dpi_itof__55__result);
    vlSelf->__PVT__fcvt__DOT__result_itof[5U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_itof__55__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_ha816653d__0 = vlSelf->__Vtask_dpi_itof__55__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_itof = ((0xf83ffU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_itof) 
                                             | ((IData)(vlSelf->__Vlvbound_ha816653d__0) 
                                                << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), vlSelf->__PVT__int_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][4U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__56__result, vlSelf->__Vtask_dpi_utof__56__fflags);
    vlSelf->__PVT__fcvt__DOT__result_utof[4U] = (IData)(vlSelf->__Vtask_dpi_utof__56__result);
    vlSelf->__PVT__fcvt__DOT__result_utof[5U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_utof__56__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h24bf1863__0 = vlSelf->__Vtask_dpi_utof__56__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_utof = ((0xf83ffU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_utof) 
                                             | ((IData)(vlSelf->__Vlvbound_h24bf1863__0) 
                                                << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__int_fmt), vlSelf->__PVT__dst_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][4U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__57__result, vlSelf->__Vtask_dpi_ftoi__57__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[4U] = (IData)(vlSelf->__Vtask_dpi_ftoi__57__result);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[5U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftoi__57__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h8d4e7366__0 = vlSelf->__Vtask_dpi_ftoi__57__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_ftoi = ((0xf83ffU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_ftoi) 
                                             | ((IData)(vlSelf->__Vlvbound_h8d4e7366__0) 
                                                << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__int_fmt), vlSelf->__PVT__dst_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][4U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__58__result, vlSelf->__Vtask_dpi_ftou__58__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftou[4U] = (IData)(vlSelf->__Vtask_dpi_ftou__58__result);
    vlSelf->__PVT__fcvt__DOT__result_ftou[5U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftou__58__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h6ce28c5f__0 = vlSelf->__Vtask_dpi_ftou__58__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_ftou = ((0xf83ffU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_ftou) 
                                             | ((IData)(vlSelf->__Vlvbound_h6ce28c5f__0) 
                                                << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][5U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][4U]))), vlSelf->__Vtask_dpi_f2f__59__result);
    vlSelf->__PVT__fcvt__DOT__result_f2f[4U] = (IData)(vlSelf->__Vtask_dpi_f2f__59__result);
    vlSelf->__PVT__fcvt__DOT__result_f2f[5U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_f2f__59__result 
                                                        >> 0x20U));
    if (vlSelf->__PVT__is_itof) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[2U] = 
            vlSelf->__PVT__fcvt__DOT__result_itof[4U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 
                                           (vlSelf->__PVT__fcvt__DOT__fflags_itof 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_utof) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[2U] = 
            vlSelf->__PVT__fcvt__DOT__result_utof[4U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 
                                           (vlSelf->__PVT__fcvt__DOT__fflags_utof 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_ftoi) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[2U] = 
            vlSelf->__PVT__fcvt__DOT__result_ftoi[4U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 
                                           (vlSelf->__PVT__fcvt__DOT__fflags_ftoi 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_ftou) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[2U] = 
            vlSelf->__PVT__fcvt__DOT__result_ftou[4U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 
                                           (vlSelf->__PVT__fcvt__DOT__fflags_ftou 
                                            >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[2U] = 
            ((IData)(vlSelf->__PVT__is_f2f) ? vlSelf->__PVT__fcvt__DOT__result_f2f[4U]
              : 0U);
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__fcvt__DOT__fflags_fcvt = ((0xf83ffU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_fcvt) 
                                             | ((IData)(vlSelf->__Vlvbound_h268775a1__0) 
                                                << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), vlSelf->__PVT__int_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][6U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__55__result, vlSelf->__Vtask_dpi_itof__55__fflags);
    vlSelf->__PVT__fcvt__DOT__result_itof[6U] = (IData)(vlSelf->__Vtask_dpi_itof__55__result);
    vlSelf->__PVT__fcvt__DOT__result_itof[7U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_itof__55__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_ha816653d__0 = vlSelf->__Vtask_dpi_itof__55__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_itof = ((0x7fffU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_itof) 
                                             | ((IData)(vlSelf->__Vlvbound_ha816653d__0) 
                                                << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), vlSelf->__PVT__int_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][6U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__56__result, vlSelf->__Vtask_dpi_utof__56__fflags);
    vlSelf->__PVT__fcvt__DOT__result_utof[6U] = (IData)(vlSelf->__Vtask_dpi_utof__56__result);
    vlSelf->__PVT__fcvt__DOT__result_utof[7U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_utof__56__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h24bf1863__0 = vlSelf->__Vtask_dpi_utof__56__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_utof = ((0x7fffU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_utof) 
                                             | ((IData)(vlSelf->__Vlvbound_h24bf1863__0) 
                                                << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__int_fmt), vlSelf->__PVT__dst_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][6U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__57__result, vlSelf->__Vtask_dpi_ftoi__57__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[6U] = (IData)(vlSelf->__Vtask_dpi_ftoi__57__result);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[7U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftoi__57__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h8d4e7366__0 = vlSelf->__Vtask_dpi_ftoi__57__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_ftoi = ((0x7fffU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_ftoi) 
                                             | ((IData)(vlSelf->__Vlvbound_h8d4e7366__0) 
                                                << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__int_fmt), vlSelf->__PVT__dst_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][6U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__58__result, vlSelf->__Vtask_dpi_ftou__58__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftou[6U] = (IData)(vlSelf->__Vtask_dpi_ftou__58__result);
    vlSelf->__PVT__fcvt__DOT__result_ftou[7U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftou__58__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h6ce28c5f__0 = vlSelf->__Vtask_dpi_ftou__58__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_ftou = ((0x7fffU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_ftou) 
                                             | ((IData)(vlSelf->__Vlvbound_h6ce28c5f__0) 
                                                << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][7U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][6U]))), vlSelf->__Vtask_dpi_f2f__59__result);
    vlSelf->__PVT__fcvt__DOT__result_f2f[6U] = (IData)(vlSelf->__Vtask_dpi_f2f__59__result);
    vlSelf->__PVT__fcvt__DOT__result_f2f[7U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_f2f__59__result 
                                                        >> 0x20U));
    if (vlSelf->__PVT__is_itof) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[3U] = 
            vlSelf->__PVT__fcvt__DOT__result_itof[6U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 
                                           (vlSelf->__PVT__fcvt__DOT__fflags_itof 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_utof) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[3U] = 
            vlSelf->__PVT__fcvt__DOT__result_utof[6U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 
                                           (vlSelf->__PVT__fcvt__DOT__fflags_utof 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_ftoi) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[3U] = 
            vlSelf->__PVT__fcvt__DOT__result_ftoi[6U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 
                                           (vlSelf->__PVT__fcvt__DOT__fflags_ftoi 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_ftou) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[3U] = 
            vlSelf->__PVT__fcvt__DOT__result_ftou[6U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 
                                           (vlSelf->__PVT__fcvt__DOT__fflags_ftou 
                                            >> 0xfU));
    } else {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[3U] = 
            ((IData)(vlSelf->__PVT__is_f2f) ? vlSelf->__PVT__fcvt__DOT__result_f2f[6U]
              : 0U);
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__fcvt__DOT__fflags_fcvt = ((0x7fffU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_fcvt) 
                                             | ((IData)(vlSelf->__Vlvbound_h268775a1__0) 
                                                << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__46__result, vlSelf->__Vtask_dpi_fadd__46__fflags);
    vlSelf->__PVT__fma__DOT__result_fadd[0U] = (IData)(vlSelf->__Vtask_dpi_fadd__46__result);
    vlSelf->__PVT__fma__DOT__result_fadd[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fadd__46__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h41c8a5b5__0 = vlSelf->__Vtask_dpi_fadd__46__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fadd = ((0xfffe0U 
                                             & vlSelf->__PVT__fma__DOT__fflags_fadd) 
                                            | (IData)(vlSelf->__Vlvbound_h41c8a5b5__0));
    VVortex___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__47__result, vlSelf->__Vtask_dpi_fsub__47__fflags);
    vlSelf->__PVT__fma__DOT__result_fsub[0U] = (IData)(vlSelf->__Vtask_dpi_fsub__47__result);
    vlSelf->__PVT__fma__DOT__result_fsub[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fsub__47__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hc3f8bfe1__0 = vlSelf->__Vtask_dpi_fsub__47__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fsub = ((0xfffe0U 
                                             & vlSelf->__PVT__fma__DOT__fflags_fsub) 
                                            | (IData)(vlSelf->__Vlvbound_hc3f8bfe1__0));
    VVortex___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__48__result, vlSelf->__Vtask_dpi_fmul__48__fflags);
    vlSelf->__PVT__fma__DOT__result_fmul[0U] = (IData)(vlSelf->__Vtask_dpi_fmul__48__result);
    vlSelf->__PVT__fma__DOT__result_fmul[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fmul__48__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h49eb26c4__0 = vlSelf->__Vtask_dpi_fmul__48__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmul = ((0xfffe0U 
                                             & vlSelf->__PVT__fma__DOT__fflags_fmul) 
                                            | (IData)(vlSelf->__Vlvbound_h49eb26c4__0));
    VVortex___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [2U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__49__result, vlSelf->__Vtask_dpi_fmadd__49__fflags);
    vlSelf->__PVT__fma__DOT__result_fmadd[0U] = (IData)(vlSelf->__Vtask_dpi_fmadd__49__result);
    vlSelf->__PVT__fma__DOT__result_fmadd[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmadd__49__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h147cf4e8__0 = vlSelf->__Vtask_dpi_fmadd__49__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmadd = ((0xfffe0U 
                                              & vlSelf->__PVT__fma__DOT__fflags_fmadd) 
                                             | (IData)(vlSelf->__Vlvbound_h147cf4e8__0));
    VVortex___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [2U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__50__result, vlSelf->__Vtask_dpi_fmsub__50__fflags);
    vlSelf->__PVT__fma__DOT__result_fmsub[0U] = (IData)(vlSelf->__Vtask_dpi_fmsub__50__result);
    vlSelf->__PVT__fma__DOT__result_fmsub[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmsub__50__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h71951e49__0 = vlSelf->__Vtask_dpi_fmsub__50__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmsub = ((0xfffe0U 
                                              & vlSelf->__PVT__fma__DOT__fflags_fmsub) 
                                             | (IData)(vlSelf->__Vlvbound_h71951e49__0));
    VVortex___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__51__result, vlSelf->__Vtask_dpi_fnmadd__51__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmadd[0U] = (IData)(vlSelf->__Vtask_dpi_fnmadd__51__result);
    vlSelf->__PVT__fma__DOT__result_fnmadd[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmadd__51__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h01b131d5__0 = vlSelf->__Vtask_dpi_fnmadd__51__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fnmadd = ((0xfffe0U 
                                               & vlSelf->__PVT__fma__DOT__fflags_fnmadd) 
                                              | (IData)(vlSelf->__Vlvbound_h01b131d5__0));
    VVortex___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__52__result, vlSelf->__Vtask_dpi_fnmsub__52__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmsub[0U] = (IData)(vlSelf->__Vtask_dpi_fnmsub__52__result);
    vlSelf->__PVT__fma__DOT__result_fnmsub[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmsub__52__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hacab2bfc__0 = vlSelf->__Vtask_dpi_fnmsub__52__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fnmsub = ((0xfffe0U 
                                               & vlSelf->__PVT__fma__DOT__fflags_fnmsub) 
                                              | (IData)(vlSelf->__Vlvbound_hacab2bfc__0));
    if (vlSelf->__PVT__is_fadd) {
        vlSelf->__PVT__fma__DOT__result_fma[0U] = vlSelf->__PVT__fma__DOT__result_fadd[0U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & vlSelf->__PVT__fma__DOT__fflags_fadd);
    } else if (vlSelf->__PVT__is_fsub) {
        vlSelf->__PVT__fma__DOT__result_fma[0U] = vlSelf->__PVT__fma__DOT__result_fsub[0U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & vlSelf->__PVT__fma__DOT__fflags_fsub);
    } else if (vlSelf->__PVT__is_fmul) {
        vlSelf->__PVT__fma__DOT__result_fma[0U] = vlSelf->__PVT__fma__DOT__result_fmul[0U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & vlSelf->__PVT__fma__DOT__fflags_fmul);
    } else if (vlSelf->__PVT__is_fmadd) {
        vlSelf->__PVT__fma__DOT__result_fma[0U] = vlSelf->__PVT__fma__DOT__result_fmadd[0U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & vlSelf->__PVT__fma__DOT__fflags_fmadd);
    } else if (vlSelf->__PVT__is_fmsub) {
        vlSelf->__PVT__fma__DOT__result_fma[0U] = vlSelf->__PVT__fma__DOT__result_fmsub[0U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & vlSelf->__PVT__fma__DOT__fflags_fmsub);
    } else if (vlSelf->__PVT__is_fnmadd) {
        vlSelf->__PVT__fma__DOT__result_fma[0U] = vlSelf->__PVT__fma__DOT__result_fnmadd[0U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & vlSelf->__PVT__fma__DOT__fflags_fnmadd);
    } else if (vlSelf->__PVT__is_fnmsub) {
        vlSelf->__PVT__fma__DOT__result_fma[0U] = vlSelf->__PVT__fma__DOT__result_fnmsub[0U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & vlSelf->__PVT__fma__DOT__fflags_fnmsub);
    } else {
        vlSelf->__PVT__fma__DOT__result_fma[0U] = 0U;
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__fma__DOT__fflags_fma = ((0xfffe0U 
                                            & vlSelf->__PVT__fma__DOT__fflags_fma) 
                                           | (IData)(vlSelf->__Vlvbound_h198ed5c2__0));
    VVortex___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__46__result, vlSelf->__Vtask_dpi_fadd__46__fflags);
    vlSelf->__PVT__fma__DOT__result_fadd[2U] = (IData)(vlSelf->__Vtask_dpi_fadd__46__result);
    vlSelf->__PVT__fma__DOT__result_fadd[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fadd__46__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h41c8a5b5__0 = vlSelf->__Vtask_dpi_fadd__46__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fadd = ((0xffc1fU 
                                             & vlSelf->__PVT__fma__DOT__fflags_fadd) 
                                            | ((IData)(vlSelf->__Vlvbound_h41c8a5b5__0) 
                                               << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__47__result, vlSelf->__Vtask_dpi_fsub__47__fflags);
    vlSelf->__PVT__fma__DOT__result_fsub[2U] = (IData)(vlSelf->__Vtask_dpi_fsub__47__result);
    vlSelf->__PVT__fma__DOT__result_fsub[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fsub__47__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hc3f8bfe1__0 = vlSelf->__Vtask_dpi_fsub__47__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fsub = ((0xffc1fU 
                                             & vlSelf->__PVT__fma__DOT__fflags_fsub) 
                                            | ((IData)(vlSelf->__Vlvbound_hc3f8bfe1__0) 
                                               << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__48__result, vlSelf->__Vtask_dpi_fmul__48__fflags);
    vlSelf->__PVT__fma__DOT__result_fmul[2U] = (IData)(vlSelf->__Vtask_dpi_fmul__48__result);
    vlSelf->__PVT__fma__DOT__result_fmul[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fmul__48__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h49eb26c4__0 = vlSelf->__Vtask_dpi_fmul__48__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmul = ((0xffc1fU 
                                             & vlSelf->__PVT__fma__DOT__fflags_fmul) 
                                            | ((IData)(vlSelf->__Vlvbound_h49eb26c4__0) 
                                               << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [2U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__49__result, vlSelf->__Vtask_dpi_fmadd__49__fflags);
    vlSelf->__PVT__fma__DOT__result_fmadd[2U] = (IData)(vlSelf->__Vtask_dpi_fmadd__49__result);
    vlSelf->__PVT__fma__DOT__result_fmadd[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmadd__49__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h147cf4e8__0 = vlSelf->__Vtask_dpi_fmadd__49__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmadd = ((0xffc1fU 
                                              & vlSelf->__PVT__fma__DOT__fflags_fmadd) 
                                             | ((IData)(vlSelf->__Vlvbound_h147cf4e8__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [2U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__50__result, vlSelf->__Vtask_dpi_fmsub__50__fflags);
    vlSelf->__PVT__fma__DOT__result_fmsub[2U] = (IData)(vlSelf->__Vtask_dpi_fmsub__50__result);
    vlSelf->__PVT__fma__DOT__result_fmsub[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmsub__50__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h71951e49__0 = vlSelf->__Vtask_dpi_fmsub__50__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmsub = ((0xffc1fU 
                                              & vlSelf->__PVT__fma__DOT__fflags_fmsub) 
                                             | ((IData)(vlSelf->__Vlvbound_h71951e49__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__51__result, vlSelf->__Vtask_dpi_fnmadd__51__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmadd[2U] = (IData)(vlSelf->__Vtask_dpi_fnmadd__51__result);
    vlSelf->__PVT__fma__DOT__result_fnmadd[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmadd__51__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h01b131d5__0 = vlSelf->__Vtask_dpi_fnmadd__51__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fnmadd = ((0xffc1fU 
                                               & vlSelf->__PVT__fma__DOT__fflags_fnmadd) 
                                              | ((IData)(vlSelf->__Vlvbound_h01b131d5__0) 
                                                 << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__52__result, vlSelf->__Vtask_dpi_fnmsub__52__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmsub[2U] = (IData)(vlSelf->__Vtask_dpi_fnmsub__52__result);
    vlSelf->__PVT__fma__DOT__result_fnmsub[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmsub__52__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hacab2bfc__0 = vlSelf->__Vtask_dpi_fnmsub__52__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fnmsub = ((0xffc1fU 
                                               & vlSelf->__PVT__fma__DOT__fflags_fnmsub) 
                                              | ((IData)(vlSelf->__Vlvbound_hacab2bfc__0) 
                                                 << 5U));
    if (vlSelf->__PVT__is_fadd) {
        vlSelf->__PVT__fma__DOT__result_fma[1U] = vlSelf->__PVT__fma__DOT__result_fadd[2U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fadd 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_fsub) {
        vlSelf->__PVT__fma__DOT__result_fma[1U] = vlSelf->__PVT__fma__DOT__result_fsub[2U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fsub 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_fmul) {
        vlSelf->__PVT__fma__DOT__result_fma[1U] = vlSelf->__PVT__fma__DOT__result_fmul[2U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fmul 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_fmadd) {
        vlSelf->__PVT__fma__DOT__result_fma[1U] = vlSelf->__PVT__fma__DOT__result_fmadd[2U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fmadd 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_fmsub) {
        vlSelf->__PVT__fma__DOT__result_fma[1U] = vlSelf->__PVT__fma__DOT__result_fmsub[2U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fmsub 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_fnmadd) {
        vlSelf->__PVT__fma__DOT__result_fma[1U] = vlSelf->__PVT__fma__DOT__result_fnmadd[2U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fnmadd 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_fnmsub) {
        vlSelf->__PVT__fma__DOT__result_fma[1U] = vlSelf->__PVT__fma__DOT__result_fnmsub[2U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fnmsub 
                                            >> 5U));
    } else {
        vlSelf->__PVT__fma__DOT__result_fma[1U] = 0U;
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__fma__DOT__fflags_fma = ((0xffc1fU 
                                            & vlSelf->__PVT__fma__DOT__fflags_fma) 
                                           | ((IData)(vlSelf->__Vlvbound_h198ed5c2__0) 
                                              << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][4U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][4U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__46__result, vlSelf->__Vtask_dpi_fadd__46__fflags);
    vlSelf->__PVT__fma__DOT__result_fadd[4U] = (IData)(vlSelf->__Vtask_dpi_fadd__46__result);
    vlSelf->__PVT__fma__DOT__result_fadd[5U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fadd__46__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h41c8a5b5__0 = vlSelf->__Vtask_dpi_fadd__46__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fadd = ((0xf83ffU 
                                             & vlSelf->__PVT__fma__DOT__fflags_fadd) 
                                            | ((IData)(vlSelf->__Vlvbound_h41c8a5b5__0) 
                                               << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][4U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][4U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__47__result, vlSelf->__Vtask_dpi_fsub__47__fflags);
    vlSelf->__PVT__fma__DOT__result_fsub[4U] = (IData)(vlSelf->__Vtask_dpi_fsub__47__result);
    vlSelf->__PVT__fma__DOT__result_fsub[5U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fsub__47__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hc3f8bfe1__0 = vlSelf->__Vtask_dpi_fsub__47__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fsub = ((0xf83ffU 
                                             & vlSelf->__PVT__fma__DOT__fflags_fsub) 
                                            | ((IData)(vlSelf->__Vlvbound_hc3f8bfe1__0) 
                                               << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][4U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][4U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__48__result, vlSelf->__Vtask_dpi_fmul__48__fflags);
    vlSelf->__PVT__fma__DOT__result_fmul[4U] = (IData)(vlSelf->__Vtask_dpi_fmul__48__result);
    vlSelf->__PVT__fma__DOT__result_fmul[5U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fmul__48__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h49eb26c4__0 = vlSelf->__Vtask_dpi_fmul__48__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmul = ((0xf83ffU 
                                             & vlSelf->__PVT__fma__DOT__fflags_fmul) 
                                            | ((IData)(vlSelf->__Vlvbound_h49eb26c4__0) 
                                               << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [2U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][4U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__49__result, vlSelf->__Vtask_dpi_fmadd__49__fflags);
    vlSelf->__PVT__fma__DOT__result_fmadd[4U] = (IData)(vlSelf->__Vtask_dpi_fmadd__49__result);
    vlSelf->__PVT__fma__DOT__result_fmadd[5U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmadd__49__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h147cf4e8__0 = vlSelf->__Vtask_dpi_fmadd__49__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmadd = ((0xf83ffU 
                                              & vlSelf->__PVT__fma__DOT__fflags_fmadd) 
                                             | ((IData)(vlSelf->__Vlvbound_h147cf4e8__0) 
                                                << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [2U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][4U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__50__result, vlSelf->__Vtask_dpi_fmsub__50__fflags);
    vlSelf->__PVT__fma__DOT__result_fmsub[4U] = (IData)(vlSelf->__Vtask_dpi_fmsub__50__result);
    vlSelf->__PVT__fma__DOT__result_fmsub[5U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmsub__50__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h71951e49__0 = vlSelf->__Vtask_dpi_fmsub__50__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmsub = ((0xf83ffU 
                                              & vlSelf->__PVT__fma__DOT__fflags_fmsub) 
                                             | ((IData)(vlSelf->__Vlvbound_h71951e49__0) 
                                                << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][4U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__51__result, vlSelf->__Vtask_dpi_fnmadd__51__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmadd[4U] = (IData)(vlSelf->__Vtask_dpi_fnmadd__51__result);
    vlSelf->__PVT__fma__DOT__result_fnmadd[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmadd__51__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h01b131d5__0 = vlSelf->__Vtask_dpi_fnmadd__51__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fnmadd = ((0xf83ffU 
                                               & vlSelf->__PVT__fma__DOT__fflags_fnmadd) 
                                              | ((IData)(vlSelf->__Vlvbound_h01b131d5__0) 
                                                 << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][4U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__52__result, vlSelf->__Vtask_dpi_fnmsub__52__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmsub[4U] = (IData)(vlSelf->__Vtask_dpi_fnmsub__52__result);
    vlSelf->__PVT__fma__DOT__result_fnmsub[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmsub__52__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hacab2bfc__0 = vlSelf->__Vtask_dpi_fnmsub__52__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fnmsub = ((0xf83ffU 
                                               & vlSelf->__PVT__fma__DOT__fflags_fnmsub) 
                                              | ((IData)(vlSelf->__Vlvbound_hacab2bfc__0) 
                                                 << 0xaU));
    if (vlSelf->__PVT__is_fadd) {
        vlSelf->__PVT__fma__DOT__result_fma[2U] = vlSelf->__PVT__fma__DOT__result_fadd[4U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fadd 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_fsub) {
        vlSelf->__PVT__fma__DOT__result_fma[2U] = vlSelf->__PVT__fma__DOT__result_fsub[4U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fsub 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_fmul) {
        vlSelf->__PVT__fma__DOT__result_fma[2U] = vlSelf->__PVT__fma__DOT__result_fmul[4U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fmul 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_fmadd) {
        vlSelf->__PVT__fma__DOT__result_fma[2U] = vlSelf->__PVT__fma__DOT__result_fmadd[4U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fmadd 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_fmsub) {
        vlSelf->__PVT__fma__DOT__result_fma[2U] = vlSelf->__PVT__fma__DOT__result_fmsub[4U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fmsub 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_fnmadd) {
        vlSelf->__PVT__fma__DOT__result_fma[2U] = vlSelf->__PVT__fma__DOT__result_fnmadd[4U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fnmadd 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_fnmsub) {
        vlSelf->__PVT__fma__DOT__result_fma[2U] = vlSelf->__PVT__fma__DOT__result_fnmsub[4U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fnmsub 
                                            >> 0xaU));
    } else {
        vlSelf->__PVT__fma__DOT__result_fma[2U] = 0U;
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__fma__DOT__fflags_fma = ((0xf83ffU 
                                            & vlSelf->__PVT__fma__DOT__fflags_fma) 
                                           | ((IData)(vlSelf->__Vlvbound_h198ed5c2__0) 
                                              << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][6U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][6U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__46__result, vlSelf->__Vtask_dpi_fadd__46__fflags);
    vlSelf->__PVT__fma__DOT__result_fadd[6U] = (IData)(vlSelf->__Vtask_dpi_fadd__46__result);
    vlSelf->__PVT__fma__DOT__result_fadd[7U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fadd__46__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h41c8a5b5__0 = vlSelf->__Vtask_dpi_fadd__46__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fadd = ((0x7fffU 
                                             & vlSelf->__PVT__fma__DOT__fflags_fadd) 
                                            | ((IData)(vlSelf->__Vlvbound_h41c8a5b5__0) 
                                               << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][6U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][6U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__47__result, vlSelf->__Vtask_dpi_fsub__47__fflags);
    vlSelf->__PVT__fma__DOT__result_fsub[6U] = (IData)(vlSelf->__Vtask_dpi_fsub__47__result);
    vlSelf->__PVT__fma__DOT__result_fsub[7U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fsub__47__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hc3f8bfe1__0 = vlSelf->__Vtask_dpi_fsub__47__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fsub = ((0x7fffU 
                                             & vlSelf->__PVT__fma__DOT__fflags_fsub) 
                                            | ((IData)(vlSelf->__Vlvbound_hc3f8bfe1__0) 
                                               << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][6U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][6U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__48__result, vlSelf->__Vtask_dpi_fmul__48__fflags);
    vlSelf->__PVT__fma__DOT__result_fmul[6U] = (IData)(vlSelf->__Vtask_dpi_fmul__48__result);
    vlSelf->__PVT__fma__DOT__result_fmul[7U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fmul__48__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h49eb26c4__0 = vlSelf->__Vtask_dpi_fmul__48__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmul = ((0x7fffU 
                                             & vlSelf->__PVT__fma__DOT__fflags_fmul) 
                                            | ((IData)(vlSelf->__Vlvbound_h49eb26c4__0) 
                                               << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [2U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][6U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__49__result, vlSelf->__Vtask_dpi_fmadd__49__fflags);
    vlSelf->__PVT__fma__DOT__result_fmadd[6U] = (IData)(vlSelf->__Vtask_dpi_fmadd__49__result);
    vlSelf->__PVT__fma__DOT__result_fmadd[7U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmadd__49__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h147cf4e8__0 = vlSelf->__Vtask_dpi_fmadd__49__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmadd = ((0x7fffU 
                                              & vlSelf->__PVT__fma__DOT__fflags_fmadd) 
                                             | ((IData)(vlSelf->__Vlvbound_h147cf4e8__0) 
                                                << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [2U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][6U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__50__result, vlSelf->__Vtask_dpi_fmsub__50__fflags);
    vlSelf->__PVT__fma__DOT__result_fmsub[6U] = (IData)(vlSelf->__Vtask_dpi_fmsub__50__result);
    vlSelf->__PVT__fma__DOT__result_fmsub[7U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmsub__50__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h71951e49__0 = vlSelf->__Vtask_dpi_fmsub__50__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmsub = ((0x7fffU 
                                              & vlSelf->__PVT__fma__DOT__fflags_fmsub) 
                                             | ((IData)(vlSelf->__Vlvbound_h71951e49__0) 
                                                << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][6U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__51__result, vlSelf->__Vtask_dpi_fnmadd__51__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmadd[6U] = (IData)(vlSelf->__Vtask_dpi_fnmadd__51__result);
    vlSelf->__PVT__fma__DOT__result_fnmadd[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmadd__51__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h01b131d5__0 = vlSelf->__Vtask_dpi_fnmadd__51__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fnmadd = ((0x7fffU 
                                               & vlSelf->__PVT__fma__DOT__fflags_fnmadd) 
                                              | ((IData)(vlSelf->__Vlvbound_h01b131d5__0) 
                                                 << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][6U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__52__result, vlSelf->__Vtask_dpi_fnmsub__52__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmsub[6U] = (IData)(vlSelf->__Vtask_dpi_fnmsub__52__result);
    vlSelf->__PVT__fma__DOT__result_fnmsub[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmsub__52__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hacab2bfc__0 = vlSelf->__Vtask_dpi_fnmsub__52__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fnmsub = ((0x7fffU 
                                               & vlSelf->__PVT__fma__DOT__fflags_fnmsub) 
                                              | ((IData)(vlSelf->__Vlvbound_hacab2bfc__0) 
                                                 << 0xfU));
    if (vlSelf->__PVT__is_fadd) {
        vlSelf->__PVT__fma__DOT__result_fma[3U] = vlSelf->__PVT__fma__DOT__result_fadd[6U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fadd 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_fsub) {
        vlSelf->__PVT__fma__DOT__result_fma[3U] = vlSelf->__PVT__fma__DOT__result_fsub[6U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fsub 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_fmul) {
        vlSelf->__PVT__fma__DOT__result_fma[3U] = vlSelf->__PVT__fma__DOT__result_fmul[6U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fmul 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_fmadd) {
        vlSelf->__PVT__fma__DOT__result_fma[3U] = vlSelf->__PVT__fma__DOT__result_fmadd[6U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fmadd 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_fmsub) {
        vlSelf->__PVT__fma__DOT__result_fma[3U] = vlSelf->__PVT__fma__DOT__result_fmsub[6U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fmsub 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_fnmadd) {
        vlSelf->__PVT__fma__DOT__result_fma[3U] = vlSelf->__PVT__fma__DOT__result_fnmadd[6U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fnmadd 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_fnmsub) {
        vlSelf->__PVT__fma__DOT__result_fma[3U] = vlSelf->__PVT__fma__DOT__result_fnmsub[6U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fnmsub 
                                            >> 0xfU));
    } else {
        vlSelf->__PVT__fma__DOT__result_fma[3U] = 0U;
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__fma__DOT__fflags_fma = ((0x7fffU 
                                            & vlSelf->__PVT__fma__DOT__fflags_fma) 
                                           | ((IData)(vlSelf->__Vlvbound_h198ed5c2__0) 
                                              << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), vlSelf->__Vtask_dpi_fclss__60__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[0U] = (IData)(vlSelf->__Vtask_dpi_fclss__60__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fclss__60__result 
                                                          >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][0U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][0U]))), vlSelf->__Vtask_dpi_fle__61__result, vlSelf->__Vtask_dpi_fle__61__fflags);
    vlSelf->__PVT__fncp__DOT__result_fle[0U] = (IData)(vlSelf->__Vtask_dpi_fle__61__result);
    vlSelf->__PVT__fncp__DOT__result_fle[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fle__61__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hc8074bd5__0 = vlSelf->__Vtask_dpi_fle__61__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fle = ((0xfffe0U 
                                             & vlSelf->__PVT__fncp__DOT__fflags_fle) 
                                            | (IData)(vlSelf->__Vlvbound_hc8074bd5__0));
    VVortex___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][0U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][0U]))), vlSelf->__Vtask_dpi_flt__62__result, vlSelf->__Vtask_dpi_flt__62__fflags);
    vlSelf->__PVT__fncp__DOT__result_flt[0U] = (IData)(vlSelf->__Vtask_dpi_flt__62__result);
    vlSelf->__PVT__fncp__DOT__result_flt[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_flt__62__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h876b3e60__0 = vlSelf->__Vtask_dpi_flt__62__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_flt = ((0xfffe0U 
                                             & vlSelf->__PVT__fncp__DOT__fflags_flt) 
                                            | (IData)(vlSelf->__Vlvbound_h876b3e60__0));
    VVortex___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][0U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][0U]))), vlSelf->__Vtask_dpi_feq__63__result, vlSelf->__Vtask_dpi_feq__63__fflags);
    vlSelf->__PVT__fncp__DOT__result_feq[0U] = (IData)(vlSelf->__Vtask_dpi_feq__63__result);
    vlSelf->__PVT__fncp__DOT__result_feq[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_feq__63__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hf8131c8b__0 = vlSelf->__Vtask_dpi_feq__63__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_feq = ((0xfffe0U 
                                             & vlSelf->__PVT__fncp__DOT__fflags_feq) 
                                            | (IData)(vlSelf->__Vlvbound_hf8131c8b__0));
    VVortex___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][0U]))), vlSelf->__Vtask_dpi_fmin__64__result, vlSelf->__Vtask_dpi_fmin__64__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmin[0U] = (IData)(vlSelf->__Vtask_dpi_fmin__64__result);
    vlSelf->__PVT__fncp__DOT__result_fmin[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmin__64__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h63cd8b65__0 = vlSelf->__Vtask_dpi_fmin__64__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fmin = ((0xfffe0U 
                                              & vlSelf->__PVT__fncp__DOT__fflags_fmin) 
                                             | (IData)(vlSelf->__Vlvbound_h63cd8b65__0));
    VVortex___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][0U]))), vlSelf->__Vtask_dpi_fmax__65__result, vlSelf->__Vtask_dpi_fmax__65__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmax[0U] = (IData)(vlSelf->__Vtask_dpi_fmax__65__result);
    vlSelf->__PVT__fncp__DOT__result_fmax[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmax__65__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h82db57c2__0 = vlSelf->__Vtask_dpi_fmax__65__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fmax = ((0xfffe0U 
                                              & vlSelf->__PVT__fncp__DOT__fflags_fmax) 
                                             | (IData)(vlSelf->__Vlvbound_h82db57c2__0));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fsgnj__66__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[0U] = (IData)(vlSelf->__Vtask_dpi_fsgnj__66__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fsgnj__66__result 
                                                          >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fsgnjn__67__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[0U] = (IData)(vlSelf->__Vtask_dpi_fsgnjn__67__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjn__67__result 
                                                           >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fsgnjx__68__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[0U] = (IData)(vlSelf->__Vtask_dpi_fsgnjx__68__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjx__68__result 
                                                           >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), vlSelf->__Vtask_dpi_fclss__60__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[2U] = (IData)(vlSelf->__Vtask_dpi_fclss__60__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fclss__60__result 
                                                          >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][2U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][2U]))), vlSelf->__Vtask_dpi_fle__61__result, vlSelf->__Vtask_dpi_fle__61__fflags);
    vlSelf->__PVT__fncp__DOT__result_fle[2U] = (IData)(vlSelf->__Vtask_dpi_fle__61__result);
    vlSelf->__PVT__fncp__DOT__result_fle[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fle__61__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hc8074bd5__0 = vlSelf->__Vtask_dpi_fle__61__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fle = ((0xffc1fU 
                                             & vlSelf->__PVT__fncp__DOT__fflags_fle) 
                                            | ((IData)(vlSelf->__Vlvbound_hc8074bd5__0) 
                                               << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][2U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][2U]))), vlSelf->__Vtask_dpi_flt__62__result, vlSelf->__Vtask_dpi_flt__62__fflags);
    vlSelf->__PVT__fncp__DOT__result_flt[2U] = (IData)(vlSelf->__Vtask_dpi_flt__62__result);
    vlSelf->__PVT__fncp__DOT__result_flt[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_flt__62__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h876b3e60__0 = vlSelf->__Vtask_dpi_flt__62__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_flt = ((0xffc1fU 
                                             & vlSelf->__PVT__fncp__DOT__fflags_flt) 
                                            | ((IData)(vlSelf->__Vlvbound_h876b3e60__0) 
                                               << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][2U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][2U]))), vlSelf->__Vtask_dpi_feq__63__result, vlSelf->__Vtask_dpi_feq__63__fflags);
    vlSelf->__PVT__fncp__DOT__result_feq[2U] = (IData)(vlSelf->__Vtask_dpi_feq__63__result);
    vlSelf->__PVT__fncp__DOT__result_feq[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_feq__63__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hf8131c8b__0 = vlSelf->__Vtask_dpi_feq__63__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_feq = ((0xffc1fU 
                                             & vlSelf->__PVT__fncp__DOT__fflags_feq) 
                                            | ((IData)(vlSelf->__Vlvbound_hf8131c8b__0) 
                                               << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][2U]))), vlSelf->__Vtask_dpi_fmin__64__result, vlSelf->__Vtask_dpi_fmin__64__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmin[2U] = (IData)(vlSelf->__Vtask_dpi_fmin__64__result);
    vlSelf->__PVT__fncp__DOT__result_fmin[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmin__64__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h63cd8b65__0 = vlSelf->__Vtask_dpi_fmin__64__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fmin = ((0xffc1fU 
                                              & vlSelf->__PVT__fncp__DOT__fflags_fmin) 
                                             | ((IData)(vlSelf->__Vlvbound_h63cd8b65__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][2U]))), vlSelf->__Vtask_dpi_fmax__65__result, vlSelf->__Vtask_dpi_fmax__65__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmax[2U] = (IData)(vlSelf->__Vtask_dpi_fmax__65__result);
    vlSelf->__PVT__fncp__DOT__result_fmax[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmax__65__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h82db57c2__0 = vlSelf->__Vtask_dpi_fmax__65__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fmax = ((0xffc1fU 
                                              & vlSelf->__PVT__fncp__DOT__fflags_fmax) 
                                             | ((IData)(vlSelf->__Vlvbound_h82db57c2__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fsgnj__66__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[2U] = (IData)(vlSelf->__Vtask_dpi_fsgnj__66__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fsgnj__66__result 
                                                          >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fsgnjn__67__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[2U] = (IData)(vlSelf->__Vtask_dpi_fsgnjn__67__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjn__67__result 
                                                           >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fsgnjx__68__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[2U] = (IData)(vlSelf->__Vtask_dpi_fsgnjx__68__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjx__68__result 
                                                           >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), vlSelf->__Vtask_dpi_fclss__60__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[4U] = (IData)(vlSelf->__Vtask_dpi_fclss__60__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fclss__60__result 
                                                          >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][5U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][4U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][5U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][4U]))), vlSelf->__Vtask_dpi_fle__61__result, vlSelf->__Vtask_dpi_fle__61__fflags);
    vlSelf->__PVT__fncp__DOT__result_fle[4U] = (IData)(vlSelf->__Vtask_dpi_fle__61__result);
    vlSelf->__PVT__fncp__DOT__result_fle[5U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fle__61__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hc8074bd5__0 = vlSelf->__Vtask_dpi_fle__61__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fle = ((0xf83ffU 
                                             & vlSelf->__PVT__fncp__DOT__fflags_fle) 
                                            | ((IData)(vlSelf->__Vlvbound_hc8074bd5__0) 
                                               << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][5U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][4U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][5U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][4U]))), vlSelf->__Vtask_dpi_flt__62__result, vlSelf->__Vtask_dpi_flt__62__fflags);
    vlSelf->__PVT__fncp__DOT__result_flt[4U] = (IData)(vlSelf->__Vtask_dpi_flt__62__result);
    vlSelf->__PVT__fncp__DOT__result_flt[5U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_flt__62__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h876b3e60__0 = vlSelf->__Vtask_dpi_flt__62__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_flt = ((0xf83ffU 
                                             & vlSelf->__PVT__fncp__DOT__fflags_flt) 
                                            | ((IData)(vlSelf->__Vlvbound_h876b3e60__0) 
                                               << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][5U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][4U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][5U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][4U]))), vlSelf->__Vtask_dpi_feq__63__result, vlSelf->__Vtask_dpi_feq__63__fflags);
    vlSelf->__PVT__fncp__DOT__result_feq[4U] = (IData)(vlSelf->__Vtask_dpi_feq__63__result);
    vlSelf->__PVT__fncp__DOT__result_feq[5U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_feq__63__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hf8131c8b__0 = vlSelf->__Vtask_dpi_feq__63__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_feq = ((0xf83ffU 
                                             & vlSelf->__PVT__fncp__DOT__fflags_feq) 
                                            | ((IData)(vlSelf->__Vlvbound_hf8131c8b__0) 
                                               << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][4U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][4U]))), vlSelf->__Vtask_dpi_fmin__64__result, vlSelf->__Vtask_dpi_fmin__64__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmin[4U] = (IData)(vlSelf->__Vtask_dpi_fmin__64__result);
    vlSelf->__PVT__fncp__DOT__result_fmin[5U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmin__64__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h63cd8b65__0 = vlSelf->__Vtask_dpi_fmin__64__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fmin = ((0xf83ffU 
                                              & vlSelf->__PVT__fncp__DOT__fflags_fmin) 
                                             | ((IData)(vlSelf->__Vlvbound_h63cd8b65__0) 
                                                << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][4U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][4U]))), vlSelf->__Vtask_dpi_fmax__65__result, vlSelf->__Vtask_dpi_fmax__65__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmax[4U] = (IData)(vlSelf->__Vtask_dpi_fmax__65__result);
    vlSelf->__PVT__fncp__DOT__result_fmax[5U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmax__65__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h82db57c2__0 = vlSelf->__Vtask_dpi_fmax__65__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fmax = ((0xf83ffU 
                                              & vlSelf->__PVT__fncp__DOT__fflags_fmax) 
                                             | ((IData)(vlSelf->__Vlvbound_h82db57c2__0) 
                                                << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_fsgnj__66__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[4U] = (IData)(vlSelf->__Vtask_dpi_fsgnj__66__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fsgnj__66__result 
                                                          >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_fsgnjn__67__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[4U] = (IData)(vlSelf->__Vtask_dpi_fsgnjn__67__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjn__67__result 
                                                           >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_fsgnjx__68__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[4U] = (IData)(vlSelf->__Vtask_dpi_fsgnjx__68__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjx__68__result 
                                                           >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), vlSelf->__Vtask_dpi_fclss__60__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[6U] = (IData)(vlSelf->__Vtask_dpi_fclss__60__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fclss__60__result 
                                                          >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][7U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][6U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][7U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][6U]))), vlSelf->__Vtask_dpi_fle__61__result, vlSelf->__Vtask_dpi_fle__61__fflags);
    vlSelf->__PVT__fncp__DOT__result_fle[6U] = (IData)(vlSelf->__Vtask_dpi_fle__61__result);
    vlSelf->__PVT__fncp__DOT__result_fle[7U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fle__61__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hc8074bd5__0 = vlSelf->__Vtask_dpi_fle__61__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fle = ((0x7fffU 
                                             & vlSelf->__PVT__fncp__DOT__fflags_fle) 
                                            | ((IData)(vlSelf->__Vlvbound_hc8074bd5__0) 
                                               << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][7U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][6U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][7U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][6U]))), vlSelf->__Vtask_dpi_flt__62__result, vlSelf->__Vtask_dpi_flt__62__fflags);
    vlSelf->__PVT__fncp__DOT__result_flt[6U] = (IData)(vlSelf->__Vtask_dpi_flt__62__result);
    vlSelf->__PVT__fncp__DOT__result_flt[7U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_flt__62__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h876b3e60__0 = vlSelf->__Vtask_dpi_flt__62__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_flt = ((0x7fffU 
                                             & vlSelf->__PVT__fncp__DOT__fflags_flt) 
                                            | ((IData)(vlSelf->__Vlvbound_h876b3e60__0) 
                                               << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][7U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][6U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][7U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][6U]))), vlSelf->__Vtask_dpi_feq__63__result, vlSelf->__Vtask_dpi_feq__63__fflags);
    vlSelf->__PVT__fncp__DOT__result_feq[6U] = (IData)(vlSelf->__Vtask_dpi_feq__63__result);
    vlSelf->__PVT__fncp__DOT__result_feq[7U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_feq__63__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hf8131c8b__0 = vlSelf->__Vtask_dpi_feq__63__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_feq = ((0x7fffU 
                                             & vlSelf->__PVT__fncp__DOT__fflags_feq) 
                                            | ((IData)(vlSelf->__Vlvbound_hf8131c8b__0) 
                                               << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][6U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][6U]))), vlSelf->__Vtask_dpi_fmin__64__result, vlSelf->__Vtask_dpi_fmin__64__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmin[6U] = (IData)(vlSelf->__Vtask_dpi_fmin__64__result);
    vlSelf->__PVT__fncp__DOT__result_fmin[7U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmin__64__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h63cd8b65__0 = vlSelf->__Vtask_dpi_fmin__64__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fmin = ((0x7fffU 
                                              & vlSelf->__PVT__fncp__DOT__fflags_fmin) 
                                             | ((IData)(vlSelf->__Vlvbound_h63cd8b65__0) 
                                                << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][6U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][6U]))), vlSelf->__Vtask_dpi_fmax__65__result, vlSelf->__Vtask_dpi_fmax__65__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmax[6U] = (IData)(vlSelf->__Vtask_dpi_fmax__65__result);
    vlSelf->__PVT__fncp__DOT__result_fmax[7U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmax__65__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h82db57c2__0 = vlSelf->__Vtask_dpi_fmax__65__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fmax = ((0x7fffU 
                                              & vlSelf->__PVT__fncp__DOT__fflags_fmax) 
                                             | ((IData)(vlSelf->__Vlvbound_h82db57c2__0) 
                                                << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_fsgnj__66__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[6U] = (IData)(vlSelf->__Vtask_dpi_fsgnj__66__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fsgnj__66__result 
                                                          >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_fsgnjn__67__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[6U] = (IData)(vlSelf->__Vtask_dpi_fsgnjn__67__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjn__67__result 
                                                           >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_fsgnjx__68__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[6U] = (IData)(vlSelf->__Vtask_dpi_fsgnjx__68__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjx__68__result 
                                                           >> 0x20U));
    vlSelf->__PVT__fdiv__DOT__fdiv_fire = ((IData)(vlSelf->__PVT__fdiv__DOT__fdiv_valid) 
                                           & (IData)(vlSelf->__PVT__fdiv__DOT__fdiv_ready));
    vlSelf->__PVT__fsqrt__DOT__fsqrt_fire = ((IData)(vlSelf->__PVT__fsqrt__DOT__fsqrt_valid) 
                                             & (IData)(vlSelf->__PVT__fsqrt__DOT__fsqrt_ready));
    vlSelf->__PVT__per_core_ready_in = ((0xdU & (IData)(vlSelf->__PVT__per_core_ready_in)) 
                                        | (((IData)(vlSelf->__PVT__is_div)
                                             ? (IData)(vlSelf->__PVT__fdiv__DOT__fdiv_ready)
                                             : (IData)(vlSelf->__PVT__fsqrt__DOT__fsqrt_ready)) 
                                           << 1U));
    vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged = 0U;
    vlSelf->__PVT__fma__DOT_____05Ffflags_merged = 0U;
    if ((0x200000U & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU])) {
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fcvt__DOT__fflags_fcvt)));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fcvt__DOT__fflags_fcvt)));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fcvt__DOT__fflags_fcvt)));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fcvt__DOT__fflags_fcvt)));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                           | vlSelf->__PVT__fcvt__DOT__fflags_fcvt)));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fma__DOT__fflags_fma)));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fma__DOT__fflags_fma)));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fma__DOT__fflags_fma)));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fma__DOT__fflags_fma)));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                           | vlSelf->__PVT__fma__DOT__fflags_fma)));
    }
    vlSelf->__PVT__fncp__DOT__result_fncp[0U] = vlSelf->__Vxrand_hdbee654f__0[0U];
    vlSelf->__PVT__fncp__DOT__result_fncp[1U] = vlSelf->__Vxrand_hdbee654f__0[1U];
    vlSelf->__PVT__fncp__DOT__result_fncp[2U] = vlSelf->__Vxrand_hdbee654f__0[2U];
    vlSelf->__PVT__fncp__DOT__result_fncp[3U] = vlSelf->__Vxrand_hdbee654f__0[3U];
    vlSelf->__PVT__fncp__DOT__fflags_fncp = vlSelf->__Vxrand_h9763b5f5__0;
    if (((((((((0U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm)) 
               | (1U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) 
              | (2U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) 
             | (3U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) 
            | (4U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) 
           | (5U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) 
          | (6U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) 
         | (7U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm)))) {
        if ((0U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) {
            if (vlSelf->__PVT__is_fcmp) {
                vlSelf->__PVT__fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__fncp__DOT__result_fle[0U];
                vlSelf->__PVT__fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__fncp__DOT__result_fle[2U];
                vlSelf->__PVT__fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__fncp__DOT__result_fle[4U];
                vlSelf->__PVT__fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__fncp__DOT__result_fle[6U];
            } else {
                vlSelf->__PVT__fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__fncp__DOT__result_fsgnj[0U];
                vlSelf->__PVT__fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__fncp__DOT__result_fsgnj[2U];
                vlSelf->__PVT__fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__fncp__DOT__result_fsgnj[4U];
                vlSelf->__PVT__fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__fncp__DOT__result_fsgnj[6U];
            }
            vlSelf->__Vlvbound_h98d9d482__0 = (0x1fU 
                                               & vlSelf->__PVT__fncp__DOT__fflags_fle);
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0xfffe0U & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                 | (IData)(vlSelf->__Vlvbound_h98d9d482__0));
            vlSelf->__Vlvbound_h98d9d482__0 = (0x1fU 
                                               & (vlSelf->__PVT__fncp__DOT__fflags_fle 
                                                  >> 5U));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0xffc1fU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                 | ((IData)(vlSelf->__Vlvbound_h98d9d482__0) 
                    << 5U));
            vlSelf->__Vlvbound_h98d9d482__0 = (0x1fU 
                                               & (vlSelf->__PVT__fncp__DOT__fflags_fle 
                                                  >> 0xaU));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0xf83ffU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                 | ((IData)(vlSelf->__Vlvbound_h98d9d482__0) 
                    << 0xaU));
            vlSelf->__Vlvbound_h98d9d482__0 = (0x1fU 
                                               & (vlSelf->__PVT__fncp__DOT__fflags_fle 
                                                  >> 0xfU));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0x7fffU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                 | ((IData)(vlSelf->__Vlvbound_h98d9d482__0) 
                    << 0xfU));
        } else if ((1U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) {
            if (vlSelf->__PVT__is_fcmp) {
                vlSelf->__PVT__fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__fncp__DOT__result_flt[0U];
                vlSelf->__PVT__fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__fncp__DOT__result_flt[2U];
                vlSelf->__PVT__fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__fncp__DOT__result_flt[4U];
                vlSelf->__PVT__fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__fncp__DOT__result_flt[6U];
            } else {
                vlSelf->__PVT__fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__fncp__DOT__result_fsgnjn[0U];
                vlSelf->__PVT__fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__fncp__DOT__result_fsgnjn[2U];
                vlSelf->__PVT__fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__fncp__DOT__result_fsgnjn[4U];
                vlSelf->__PVT__fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__fncp__DOT__result_fsgnjn[6U];
            }
            vlSelf->__Vlvbound_h98d9d482__1 = (0x1fU 
                                               & vlSelf->__PVT__fncp__DOT__fflags_flt);
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0xfffe0U & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                 | (IData)(vlSelf->__Vlvbound_h98d9d482__1));
            vlSelf->__Vlvbound_h98d9d482__1 = (0x1fU 
                                               & (vlSelf->__PVT__fncp__DOT__fflags_flt 
                                                  >> 5U));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0xffc1fU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                 | ((IData)(vlSelf->__Vlvbound_h98d9d482__1) 
                    << 5U));
            vlSelf->__Vlvbound_h98d9d482__1 = (0x1fU 
                                               & (vlSelf->__PVT__fncp__DOT__fflags_flt 
                                                  >> 0xaU));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0xf83ffU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                 | ((IData)(vlSelf->__Vlvbound_h98d9d482__1) 
                    << 0xaU));
            vlSelf->__Vlvbound_h98d9d482__1 = (0x1fU 
                                               & (vlSelf->__PVT__fncp__DOT__fflags_flt 
                                                  >> 0xfU));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0x7fffU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                 | ((IData)(vlSelf->__Vlvbound_h98d9d482__1) 
                    << 0xfU));
        } else if ((2U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) {
            if (vlSelf->__PVT__is_fcmp) {
                vlSelf->__PVT__fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__fncp__DOT__result_feq[0U];
                vlSelf->__PVT__fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__fncp__DOT__result_feq[2U];
                vlSelf->__PVT__fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__fncp__DOT__result_feq[4U];
                vlSelf->__PVT__fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__fncp__DOT__result_feq[6U];
            } else {
                vlSelf->__PVT__fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__fncp__DOT__result_fsgnjx[0U];
                vlSelf->__PVT__fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__fncp__DOT__result_fsgnjx[2U];
                vlSelf->__PVT__fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__fncp__DOT__result_fsgnjx[4U];
                vlSelf->__PVT__fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__fncp__DOT__result_fsgnjx[6U];
            }
            vlSelf->__Vlvbound_h98d9d482__2 = (0x1fU 
                                               & vlSelf->__PVT__fncp__DOT__fflags_feq);
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0xfffe0U & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                 | (IData)(vlSelf->__Vlvbound_h98d9d482__2));
            vlSelf->__Vlvbound_h98d9d482__2 = (0x1fU 
                                               & (vlSelf->__PVT__fncp__DOT__fflags_feq 
                                                  >> 5U));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0xffc1fU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                 | ((IData)(vlSelf->__Vlvbound_h98d9d482__2) 
                    << 5U));
            vlSelf->__Vlvbound_h98d9d482__2 = (0x1fU 
                                               & (vlSelf->__PVT__fncp__DOT__fflags_feq 
                                                  >> 0xaU));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0xf83ffU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                 | ((IData)(vlSelf->__Vlvbound_h98d9d482__2) 
                    << 0xaU));
            vlSelf->__Vlvbound_h98d9d482__2 = (0x1fU 
                                               & (vlSelf->__PVT__fncp__DOT__fflags_feq 
                                                  >> 0xfU));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0x7fffU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                 | ((IData)(vlSelf->__Vlvbound_h98d9d482__2) 
                    << 0xfU));
        } else {
            if ((3U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) {
                vlSelf->__PVT__fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__fncp__DOT__result_fclss[0U];
                vlSelf->__PVT__fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__fncp__DOT__result_fclss[2U];
                vlSelf->__PVT__fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__fncp__DOT__result_fclss[4U];
                vlSelf->__PVT__fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__fncp__DOT__result_fclss[6U];
            } else if ((4U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) {
                vlSelf->__PVT__fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmvx[0U];
                vlSelf->__PVT__fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmvx[2U];
                vlSelf->__PVT__fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmvx[4U];
                vlSelf->__PVT__fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmvx[6U];
            } else if ((5U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) {
                vlSelf->__PVT__fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmvf[0U];
                vlSelf->__PVT__fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmvf[2U];
                vlSelf->__PVT__fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmvf[4U];
                vlSelf->__PVT__fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmvf[6U];
            } else if ((6U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) {
                vlSelf->__PVT__fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmin[0U];
                vlSelf->__PVT__fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmin[2U];
                vlSelf->__PVT__fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmin[4U];
                vlSelf->__PVT__fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmin[6U];
            } else {
                vlSelf->__PVT__fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmax[0U];
                vlSelf->__PVT__fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmax[2U];
                vlSelf->__PVT__fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmax[4U];
                vlSelf->__PVT__fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmax[6U];
            }
            if ((3U != (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) {
                if ((4U != (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) {
                    if ((5U != (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) {
                        if ((6U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) {
                            vlSelf->__Vlvbound_h98d9d482__3 
                                = (0x1fU & vlSelf->__PVT__fncp__DOT__fflags_fmin);
                            vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                = ((0xfffe0U & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                                   | (IData)(vlSelf->__Vlvbound_h98d9d482__3));
                            vlSelf->__Vlvbound_h98d9d482__3 
                                = (0x1fU & (vlSelf->__PVT__fncp__DOT__fflags_fmin 
                                            >> 5U));
                            vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                = ((0xffc1fU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                                   | ((IData)(vlSelf->__Vlvbound_h98d9d482__3) 
                                      << 5U));
                            vlSelf->__Vlvbound_h98d9d482__3 
                                = (0x1fU & (vlSelf->__PVT__fncp__DOT__fflags_fmin 
                                            >> 0xaU));
                            vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                = ((0xf83ffU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                                   | ((IData)(vlSelf->__Vlvbound_h98d9d482__3) 
                                      << 0xaU));
                            vlSelf->__Vlvbound_h98d9d482__3 
                                = (0x1fU & (vlSelf->__PVT__fncp__DOT__fflags_fmin 
                                            >> 0xfU));
                            vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                = ((0x7fffU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                                   | ((IData)(vlSelf->__Vlvbound_h98d9d482__3) 
                                      << 0xfU));
                        } else {
                            vlSelf->__Vlvbound_h98d9d482__4 
                                = (0x1fU & vlSelf->__PVT__fncp__DOT__fflags_fmax);
                            vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                = ((0xfffe0U & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                                   | (IData)(vlSelf->__Vlvbound_h98d9d482__4));
                            vlSelf->__Vlvbound_h98d9d482__4 
                                = (0x1fU & (vlSelf->__PVT__fncp__DOT__fflags_fmax 
                                            >> 5U));
                            vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                = ((0xffc1fU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                                   | ((IData)(vlSelf->__Vlvbound_h98d9d482__4) 
                                      << 5U));
                            vlSelf->__Vlvbound_h98d9d482__4 
                                = (0x1fU & (vlSelf->__PVT__fncp__DOT__fflags_fmax 
                                            >> 0xaU));
                            vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                = ((0xf83ffU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                                   | ((IData)(vlSelf->__Vlvbound_h98d9d482__4) 
                                      << 0xaU));
                            vlSelf->__Vlvbound_h98d9d482__4 
                                = (0x1fU & (vlSelf->__PVT__fncp__DOT__fflags_fmax 
                                            >> 0xfU));
                            vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                = ((0x7fffU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                                   | ((IData)(vlSelf->__Vlvbound_h98d9d482__4) 
                                      << 0xfU));
                        }
                    }
                }
            }
        }
    }
    if ((0x400000U & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU])) {
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                           >> 5U))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                                         >> 5U)))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                                         >> 5U)))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                                         >> 5U)))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                           | (0x7fffff0U & (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                                            >> 5U)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fma__DOT__fflags_fma 
                           >> 5U))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & (vlSelf->__PVT__fma__DOT__fflags_fma 
                                         >> 5U)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & (vlSelf->__PVT__fma__DOT__fflags_fma 
                                         >> 5U)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & (vlSelf->__PVT__fma__DOT__fflags_fma 
                                         >> 5U)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                           | (0x7fffff0U & (vlSelf->__PVT__fma__DOT__fflags_fma 
                                            >> 5U)))));
    }
    if ((0x800000U & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU])) {
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                           >> 0xaU))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                        | (0x3ffffeU & (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                                        >> 0xaU)))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                        | (0x3ffffcU & (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                                        >> 0xaU)))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                        | (0x3ffff8U & (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                                        >> 0xaU)))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                           | (0x3ffff0U & (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                                           >> 0xaU)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fma__DOT__fflags_fma 
                           >> 0xaU))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                        | (0x3ffffeU & (vlSelf->__PVT__fma__DOT__fflags_fma 
                                        >> 0xaU)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                        | (0x3ffffcU & (vlSelf->__PVT__fma__DOT__fflags_fma 
                                        >> 0xaU)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                        | (0x3ffff8U & (vlSelf->__PVT__fma__DOT__fflags_fma 
                                        >> 0xaU)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                           | (0x3ffff0U & (vlSelf->__PVT__fma__DOT__fflags_fma 
                                           >> 0xaU)))));
    }
    if ((0x1000000U & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU])) {
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                           >> 0xfU))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                        | (0x1fffeU & (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                                       >> 0xfU)))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                        | (0x1fffcU & (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                                       >> 0xfU)))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                        | (0x1fff8U & (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                                       >> 0xfU)))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                                      >> 0x13U))) << 4U));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fma__DOT__fflags_fma 
                           >> 0xfU))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                        | (0x1fffeU & (vlSelf->__PVT__fma__DOT__fflags_fma 
                                       >> 0xfU)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                        | (0x1fffcU & (vlSelf->__PVT__fma__DOT__fflags_fma 
                                       >> 0xfU)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                        | (0x1fff8U & (vlSelf->__PVT__fma__DOT__fflags_fma 
                                       >> 0xfU)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelf->__PVT__fma__DOT__fflags_fma 
                                      >> 0x13U))) << 4U));
    }
    VVortex___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__fdiv__DOT__fdiv_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__53__result, vlSelf->__Vtask_dpi_fdiv__53__fflags);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[0U] = (IData)(vlSelf->__Vtask_dpi_fdiv__53__result);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fdiv__53__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h8d23a7ba__0 = vlSelf->__Vtask_dpi_fdiv__53__fflags;
    vlSelf->__PVT__fdiv__DOT__fflags_fdiv = ((0xfffe0U 
                                              & vlSelf->__PVT__fdiv__DOT__fflags_fdiv) 
                                             | (IData)(vlSelf->__Vlvbound_h8d23a7ba__0));
    vlSelf->__PVT__fdiv__DOT__result_fdiv_r[0U] = vlSelf->__PVT__fdiv__DOT__result_fdiv[0U];
    VVortex___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__fdiv__DOT__fdiv_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__53__result, vlSelf->__Vtask_dpi_fdiv__53__fflags);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[2U] = (IData)(vlSelf->__Vtask_dpi_fdiv__53__result);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fdiv__53__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h8d23a7ba__0 = vlSelf->__Vtask_dpi_fdiv__53__fflags;
    vlSelf->__PVT__fdiv__DOT__fflags_fdiv = ((0xffc1fU 
                                              & vlSelf->__PVT__fdiv__DOT__fflags_fdiv) 
                                             | ((IData)(vlSelf->__Vlvbound_h8d23a7ba__0) 
                                                << 5U));
    vlSelf->__PVT__fdiv__DOT__result_fdiv_r[1U] = vlSelf->__PVT__fdiv__DOT__result_fdiv[2U];
    VVortex___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__fdiv__DOT__fdiv_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][4U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][4U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__53__result, vlSelf->__Vtask_dpi_fdiv__53__fflags);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[4U] = (IData)(vlSelf->__Vtask_dpi_fdiv__53__result);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[5U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fdiv__53__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h8d23a7ba__0 = vlSelf->__Vtask_dpi_fdiv__53__fflags;
    vlSelf->__PVT__fdiv__DOT__fflags_fdiv = ((0xf83ffU 
                                              & vlSelf->__PVT__fdiv__DOT__fflags_fdiv) 
                                             | ((IData)(vlSelf->__Vlvbound_h8d23a7ba__0) 
                                                << 0xaU));
    vlSelf->__PVT__fdiv__DOT__result_fdiv_r[2U] = vlSelf->__PVT__fdiv__DOT__result_fdiv[4U];
    VVortex___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__fdiv__DOT__fdiv_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][6U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][6U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__53__result, vlSelf->__Vtask_dpi_fdiv__53__fflags);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[6U] = (IData)(vlSelf->__Vtask_dpi_fdiv__53__result);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[7U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fdiv__53__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h8d23a7ba__0 = vlSelf->__Vtask_dpi_fdiv__53__fflags;
    vlSelf->__PVT__fdiv__DOT__fflags_fdiv = ((0x7fffU 
                                              & vlSelf->__PVT__fdiv__DOT__fflags_fdiv) 
                                             | ((IData)(vlSelf->__Vlvbound_h8d23a7ba__0) 
                                                << 0xfU));
    vlSelf->__PVT__fdiv__DOT__result_fdiv_r[3U] = vlSelf->__PVT__fdiv__DOT__result_fdiv[6U];
    VVortex___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__fsqrt__DOT__fsqrt_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__54__result, vlSelf->__Vtask_dpi_fsqrt__54__fflags);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[0U] = (IData)(vlSelf->__Vtask_dpi_fsqrt__54__result);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsqrt__54__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h790a2257__0 = vlSelf->__Vtask_dpi_fsqrt__54__fflags;
    vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt = ((0xfffe0U 
                                                & vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt) 
                                               | (IData)(vlSelf->__Vlvbound_h790a2257__0));
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt_r[0U] = 
        vlSelf->__PVT__fsqrt__DOT__result_fsqrt[0U];
    VVortex___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__fsqrt__DOT__fsqrt_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__54__result, vlSelf->__Vtask_dpi_fsqrt__54__fflags);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[2U] = (IData)(vlSelf->__Vtask_dpi_fsqrt__54__result);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsqrt__54__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h790a2257__0 = vlSelf->__Vtask_dpi_fsqrt__54__fflags;
    vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt = ((0xffc1fU 
                                                & vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt) 
                                               | ((IData)(vlSelf->__Vlvbound_h790a2257__0) 
                                                  << 5U));
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt_r[1U] = 
        vlSelf->__PVT__fsqrt__DOT__result_fsqrt[2U];
    VVortex___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__fsqrt__DOT__fsqrt_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__54__result, vlSelf->__Vtask_dpi_fsqrt__54__fflags);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[4U] = (IData)(vlSelf->__Vtask_dpi_fsqrt__54__result);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsqrt__54__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h790a2257__0 = vlSelf->__Vtask_dpi_fsqrt__54__fflags;
    vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt = ((0xf83ffU 
                                                & vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt) 
                                               | ((IData)(vlSelf->__Vlvbound_h790a2257__0) 
                                                  << 0xaU));
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt_r[2U] = 
        vlSelf->__PVT__fsqrt__DOT__result_fsqrt[4U];
    VVortex___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__fsqrt__DOT__fsqrt_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__54__result, vlSelf->__Vtask_dpi_fsqrt__54__fflags);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[6U] = (IData)(vlSelf->__Vtask_dpi_fsqrt__54__result);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsqrt__54__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h790a2257__0 = vlSelf->__Vtask_dpi_fsqrt__54__fflags;
    vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt = ((0x7fffU 
                                                & vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt) 
                                               | ((IData)(vlSelf->__Vlvbound_h790a2257__0) 
                                                  << 0xfU));
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt_r[3U] = 
        vlSelf->__PVT__fsqrt__DOT__result_fsqrt[6U];
    vlSelf->__PVT__fncp__DOT_____05Ffflags_merged = 0U;
    if ((0x200000U & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU])) {
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fncp__DOT__fflags_fncp)));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fncp__DOT__fflags_fncp)));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fncp__DOT__fflags_fncp)));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fncp__DOT__fflags_fncp)));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                           | vlSelf->__PVT__fncp__DOT__fflags_fncp)));
    }
    if ((0x400000U & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU])) {
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                           >> 5U))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                         >> 5U)))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                         >> 5U)))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                         >> 5U)))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                           | (0x7fffff0U & (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                            >> 5U)))));
    }
    vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged = 0U;
    if ((0x200000U & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU])) {
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fdiv__DOT__fflags_fdiv)));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fdiv__DOT__fflags_fdiv)));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fdiv__DOT__fflags_fdiv)));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fdiv__DOT__fflags_fdiv)));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                           | vlSelf->__PVT__fdiv__DOT__fflags_fdiv)));
    }
    if ((0x400000U & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU])) {
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                           >> 5U))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                                         >> 5U)))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                                         >> 5U)))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                                         >> 5U)))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                           | (0x7fffff0U & (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                                            >> 5U)))));
    }
    if ((0x800000U & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU])) {
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                           >> 0xaU))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                        | (0x3ffffeU & (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                        >> 0xaU)))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                        | (0x3ffffcU & (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                        >> 0xaU)))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                        | (0x3ffff8U & (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                        >> 0xaU)))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                           | (0x3ffff0U & (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                           >> 0xaU)))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                           >> 0xaU))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                        | (0x3ffffeU & (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                                        >> 0xaU)))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                        | (0x3ffffcU & (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                                        >> 0xaU)))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                        | (0x3ffff8U & (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                                        >> 0xaU)))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                           | (0x3ffff0U & (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                                           >> 0xaU)))));
    }
    vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged = 0U;
    if ((0x200000U & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU])) {
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt)));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt)));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt)));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt)));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                           | vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt)));
    }
    if ((0x400000U & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU])) {
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                           >> 5U))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                                         >> 5U)))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                                         >> 5U)))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                                         >> 5U)))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                           | (0x7fffff0U & (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                                            >> 5U)))));
    }
    if ((0x800000U & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU])) {
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                           >> 0xaU))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x3ffffeU & (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                                        >> 0xaU)))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x3ffffcU & (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                                        >> 0xaU)))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x3ffff8U & (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                                        >> 0xaU)))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                           | (0x3ffff0U & (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                                           >> 0xaU)))));
    }
    if ((0x1000000U & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__2__KET____DOT__buf_out__data_in[0xeU])) {
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                           >> 0xfU))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                        | (0x1fffeU & (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                       >> 0xfU)))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                        | (0x1fffcU & (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                       >> 0xfU)))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                        | (0x1fff8U & (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                       >> 0xfU)))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                      >> 0x13U))) << 4U));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                           >> 0xfU))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                        | (0x1fffeU & (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                                       >> 0xfU)))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                        | (0x1fffcU & (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                                       >> 0xfU)))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                        | (0x1fff8U & (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                                       >> 0xfU)))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                                      >> 0x13U))) << 4U));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                           >> 0xfU))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x1fffeU & (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                                       >> 0xfU)))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x1fffcU & (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                                       >> 0xfU)))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x1fff8U & (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                                       >> 0xfU)))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                                      >> 0x13U))) << 4U));
    }
}

VL_ATTR_COLD void VVortex_VX_fpu_dpi__N4_T1_O3___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_dpi__0(VVortex_VX_fpu_dpi__N4_T1_O3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_fpu_dpi__N4_T1_O3___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_dpi__0\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_h642f943c__0;
    // Body
    vlSelf->__PVT__per_core_has_fflags = (1U | (IData)(vlSelf->__PVT__per_core_has_fflags));
    vlSelf->__PVT__per_core_tag_out = ((0xbU & (IData)(vlSelf->__PVT__per_core_tag_out)) 
                                       | (4U & (vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                >> 3U)));
    vlSelf->__PVT__per_core_result[8U] = ((vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
                                           << 0x1bU) 
                                          | (vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                             >> 5U));
    vlSelf->__PVT__per_core_result[9U] = ((vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                           << 0x1bU) 
                                          | (vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
                                             >> 5U));
    vlSelf->__PVT__per_core_result[0xaU] = ((vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
                                             << 0x1bU) 
                                            | (vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                               >> 5U));
    vlSelf->__PVT__per_core_result[0xbU] = ((vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                             << 0x1bU) 
                                            | (vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
                                               >> 5U));
    vlSelf->__PVT__per_core_fflags = ((0xf83ffU & vlSelf->__PVT__per_core_fflags) 
                                      | (0x7c00U & 
                                         (vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                          << 0xaU)));
    vlSelf->__PVT__per_core_tag_out = ((7U & (IData)(vlSelf->__PVT__per_core_tag_out)) 
                                       | (8U & (vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                >> 3U)));
    vlSelf->__PVT__per_core_has_fflags = ((7U & (IData)(vlSelf->__PVT__per_core_has_fflags)) 
                                          | (8U & (
                                                   vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                   >> 2U)));
    vlSelf->__PVT__per_core_result[0xcU] = ((vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
                                             << 0x1bU) 
                                            | (vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                               >> 5U));
    vlSelf->__PVT__per_core_result[0xdU] = ((vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                             << 0x1bU) 
                                            | (vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
                                               >> 5U));
    vlSelf->__PVT__per_core_result[0xeU] = ((vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
                                             << 0x1bU) 
                                            | (vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                               >> 5U));
    vlSelf->__PVT__per_core_result[0xfU] = ((vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                             << 0x1bU) 
                                            | (vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
                                               >> 5U));
    vlSelf->__PVT__per_core_fflags = ((0x7fffU & vlSelf->__PVT__per_core_fflags) 
                                      | (0xf8000U & 
                                         (vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                          << 0xfU)));
    vlSelf->__Vcellinp__div_sqrt_arb__valid_in = ((2U 
                                                   & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                        >> 6U)));
    vlSelf->__PVT__per_core_valid_out = ((3U & (IData)(vlSelf->__PVT__per_core_valid_out)) 
                                         | ((8U & (
                                                   vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                   >> 4U)) 
                                            | (4U & 
                                               (vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                >> 4U))));
    vlSelf->__PVT__operands[0U][0U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[9U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[8U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][1U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[9U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[8U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][0U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[5U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[4U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][1U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[5U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[4U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][0U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[1U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][1U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[1U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[0U][2U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xaU] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[9U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][3U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xaU] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[9U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][2U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[6U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[5U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][3U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[6U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[5U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][2U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[2U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[1U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][3U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[2U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[1U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[0U][4U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xbU] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xaU] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][5U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xbU] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xaU] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][4U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[7U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[6U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][5U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[7U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[6U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][4U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[3U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[2U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][5U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[3U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[2U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[0U][6U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xcU] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xbU] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][7U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xcU] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xbU] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][6U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[8U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[7U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][7U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[8U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[7U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][6U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[4U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[3U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][7U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[4U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[3U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__Vtableidx7 = (0xfU & (vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU] 
                                    >> 0x11U));
    vlSelf->__PVT__is_fadd = VVortex__ConstPool__TABLE_he5873c6d_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__is_fsub = VVortex__ConstPool__TABLE_hf4e66895_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__is_fmul = VVortex__ConstPool__TABLE_hea639f5c_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__is_fmadd = VVortex__ConstPool__TABLE_h654ca46e_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__is_fmsub = VVortex__ConstPool__TABLE_h638a629f_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__is_fnmadd = VVortex__ConstPool__TABLE_hc6d37415_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__is_fnmsub = VVortex__ConstPool__TABLE_hcbfd6d22_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__is_div = VVortex__ConstPool__TABLE_h454b5b0c_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__is_fcmp = VVortex__ConstPool__TABLE_hca5c4cb8_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__is_itof = VVortex__ConstPool__TABLE_h54d78c29_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__is_utof = VVortex__ConstPool__TABLE_h83052c29_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__is_ftoi = VVortex__ConstPool__TABLE_h32021d26_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__is_ftou = VVortex__ConstPool__TABLE_hb62e4706_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__is_f2f = VVortex__ConstPool__TABLE_hc80541b1_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__dst_fmt = VVortex__ConstPool__TABLE_hc6b7c1e1_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__int_fmt = VVortex__ConstPool__TABLE_hc6b7c1e1_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__core_select = VVortex__ConstPool__TABLE_h57ee0b9c_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__stall_out 
        = ((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__valid_out_r) 
           & (~ ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__gather_unit__DOT__commit_in_ready) 
                 >> 3U)));
    vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r 
        = (1U & (~ ((1U == (((IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state) 
                             << 2U) | (IData)(vlSelf->__Vcellinp__div_sqrt_arb__valid_in))) 
                    | (5U == (5U & (((IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state) 
                                     << 2U) | (IData)(vlSelf->__Vcellinp__div_sqrt_arb__valid_in)))))));
    vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r 
        = (((1U == (((IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state) 
                     << 2U) | (IData)(vlSelf->__Vcellinp__div_sqrt_arb__valid_in))) 
            | (5U == (5U & (((IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state) 
                             << 2U) | (IData)(vlSelf->__Vcellinp__div_sqrt_arb__valid_in)))))
            ? 1U : 2U);
    vlSelf->__PVT__per_core_valid_out = ((0xcU & (IData)(vlSelf->__PVT__per_core_valid_out)) 
                                         | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->__Vcellinp__div_sqrt_arb__valid_in))) 
                                             << 1U) 
                                            | (1U & 
                                               (vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                >> 6U))));
    vlSelf->__PVT__fncp__DOT__result_fmvf[0U] = (IData)(
                                                        ((IData)(vlSelf->__PVT__dst_fmt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__operands
                                                                           [0U][1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][0U])))
                                                          : 
                                                         (0xffffffff00000000ULL 
                                                          | (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))))));
    vlSelf->__PVT__fncp__DOT__result_fmvf[1U] = (IData)(
                                                        (((IData)(vlSelf->__PVT__dst_fmt)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][0U])))
                                                           : 
                                                          (0xffffffff00000000ULL 
                                                           | (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))))) 
                                                         >> 0x20U));
    vlSelf->__PVT__fncp__DOT__result_fmvf[2U] = (IData)(
                                                        ((IData)(vlSelf->__PVT__dst_fmt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__operands
                                                                           [0U][3U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][2U])))
                                                          : 
                                                         (0xffffffff00000000ULL 
                                                          | (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))))));
    vlSelf->__PVT__fncp__DOT__result_fmvf[3U] = (IData)(
                                                        (((IData)(vlSelf->__PVT__dst_fmt)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][3U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][2U])))
                                                           : 
                                                          (0xffffffff00000000ULL 
                                                           | (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))))) 
                                                         >> 0x20U));
    vlSelf->__PVT__fncp__DOT__result_fmvf[4U] = (IData)(
                                                        ((IData)(vlSelf->__PVT__dst_fmt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__operands
                                                                           [0U][5U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][4U])))
                                                          : 
                                                         (0xffffffff00000000ULL 
                                                          | (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][4U]))))));
    vlSelf->__PVT__fncp__DOT__result_fmvf[5U] = (IData)(
                                                        (((IData)(vlSelf->__PVT__dst_fmt)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][5U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][4U])))
                                                           : 
                                                          (0xffffffff00000000ULL 
                                                           | (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))))) 
                                                         >> 0x20U));
    vlSelf->__PVT__fncp__DOT__result_fmvf[6U] = (IData)(
                                                        ((IData)(vlSelf->__PVT__dst_fmt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__operands
                                                                           [0U][7U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][6U])))
                                                          : 
                                                         (0xffffffff00000000ULL 
                                                          | (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][6U]))))));
    vlSelf->__PVT__fncp__DOT__result_fmvf[7U] = (IData)(
                                                        (((IData)(vlSelf->__PVT__dst_fmt)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][7U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][6U])))
                                                           : 
                                                          (0xffffffff00000000ULL 
                                                           | (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))))) 
                                                         >> 0x20U));
    vlSelf->__PVT__fncp__DOT__result_fmvx[0U] = (IData)(
                                                        ((IData)(vlSelf->__PVT__dst_fmt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__operands
                                                                           [0U][1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][0U])))
                                                          : 
                                                         VL_EXTENDS_QI(64,32, 
                                                                       vlSelf->__PVT__operands
                                                                       [0U][0U])));
    vlSelf->__PVT__fncp__DOT__result_fmvx[1U] = (IData)(
                                                        (((IData)(vlSelf->__PVT__dst_fmt)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][0U])))
                                                           : 
                                                          VL_EXTENDS_QI(64,32, 
                                                                        vlSelf->__PVT__operands
                                                                        [0U][0U])) 
                                                         >> 0x20U));
    vlSelf->__PVT__fncp__DOT__result_fmvx[2U] = (IData)(
                                                        ((IData)(vlSelf->__PVT__dst_fmt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__operands
                                                                           [0U][3U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][2U])))
                                                          : 
                                                         VL_EXTENDS_QI(64,32, 
                                                                       vlSelf->__PVT__operands
                                                                       [0U][2U])));
    vlSelf->__PVT__fncp__DOT__result_fmvx[3U] = (IData)(
                                                        (((IData)(vlSelf->__PVT__dst_fmt)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][3U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][2U])))
                                                           : 
                                                          VL_EXTENDS_QI(64,32, 
                                                                        vlSelf->__PVT__operands
                                                                        [0U][2U])) 
                                                         >> 0x20U));
    vlSelf->__PVT__fncp__DOT__result_fmvx[4U] = (IData)(
                                                        ((IData)(vlSelf->__PVT__dst_fmt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__operands
                                                                           [0U][5U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][4U])))
                                                          : 
                                                         VL_EXTENDS_QI(64,32, 
                                                                       vlSelf->__PVT__operands
                                                                       [0U][4U])));
    vlSelf->__PVT__fncp__DOT__result_fmvx[5U] = (IData)(
                                                        (((IData)(vlSelf->__PVT__dst_fmt)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][5U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][4U])))
                                                           : 
                                                          VL_EXTENDS_QI(64,32, 
                                                                        vlSelf->__PVT__operands
                                                                        [0U][4U])) 
                                                         >> 0x20U));
    vlSelf->__PVT__fncp__DOT__result_fmvx[6U] = (IData)(
                                                        ((IData)(vlSelf->__PVT__dst_fmt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__operands
                                                                           [0U][7U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][6U])))
                                                          : 
                                                         VL_EXTENDS_QI(64,32, 
                                                                       vlSelf->__PVT__operands
                                                                       [0U][6U])));
    vlSelf->__PVT__fncp__DOT__result_fmvx[7U] = (IData)(
                                                        (((IData)(vlSelf->__PVT__dst_fmt)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][7U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][6U])))
                                                           : 
                                                          VL_EXTENDS_QI(64,32, 
                                                                        vlSelf->__PVT__operands
                                                                        [0U][6U])) 
                                                         >> 0x20U));
    vlSelf->__PVT__fdiv__DOT__fdiv_valid = (((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_valid) 
                                             & (1U 
                                                == (IData)(vlSelf->__PVT__core_select))) 
                                            & (IData)(vlSelf->__PVT__is_div));
    vlSelf->__PVT__fsqrt__DOT__fsqrt_valid = (((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_valid) 
                                               & (1U 
                                                  == (IData)(vlSelf->__PVT__core_select))) 
                                              & (~ (IData)(vlSelf->__PVT__is_div)));
    vlSelf->__PVT__fcvt__DOT__fcvt_valid = ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_valid) 
                                            & (2U == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__fma__DOT__fma_valid = ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_valid) 
                                          & (0U == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__fncp__DOT__fncp_valid = ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_valid) 
                                            & (3U == (IData)(vlSelf->__PVT__core_select)));
    __Vtemp_h642f943c__0[0U] = (0x40U | ((0xffffff80U 
                                          & (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                             << 2U)) 
                                         | ((0x3eU 
                                             & (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                                << 1U)) 
                                            | (1U & 
                                               (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                >> 5U)))));
    __Vtemp_h642f943c__0[1U] = (((0x7cU & (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
                                           << 2U)) 
                                 | (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                    >> 0x1eU)) | (0xffffff80U 
                                                  & (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
                                                     << 2U)));
    __Vtemp_h642f943c__0[2U] = (((0x7cU & (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                           << 2U)) 
                                 | (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
                                    >> 0x1eU)) | (0xffffff80U 
                                                  & (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                     << 2U)));
    __Vtemp_h642f943c__0[3U] = (((0x7cU & (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
                                           << 2U)) 
                                 | (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                    >> 0x1eU)) | (0xffffff80U 
                                                  & (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
                                                     << 2U)));
    __Vtemp_h642f943c__0[4U] = (0x2000U | (((0xffffc000U 
                                             & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                                << 9U)) 
                                            | ((0x1f00U 
                                                & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                                   << 8U)) 
                                               | (0x80U 
                                                  & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                     << 2U)))) 
                                           | ((0x7cU 
                                               & (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                  << 2U)) 
                                              | (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
                                                 >> 0x1eU))));
    __Vtemp_h642f943c__0[5U] = ((0x7fU & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                          >> 0x17U)) 
                                | (((0x3e00U & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
                                                << 9U)) 
                                    | (0x180U & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                                 >> 0x17U))) 
                                   | (0xffffc000U & 
                                      (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
                                       << 9U))));
    __Vtemp_h642f943c__0[6U] = ((0x7fU & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
                                          >> 0x17U)) 
                                | (((0x3e00U & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                << 9U)) 
                                    | (0x180U & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
                                                 >> 0x17U))) 
                                   | (0xffffc000U & 
                                      (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                       << 9U))));
    __Vtemp_h642f943c__0[7U] = ((0x7fU & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                          >> 0x17U)) 
                                | (((0x3e00U & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
                                                << 9U)) 
                                    | (0x180U & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                 >> 0x17U))) 
                                   | (0xffffc000U & 
                                      (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
                                       << 9U))));
    __Vtemp_h642f943c__0[8U] = ((0x7fU & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
                                          >> 0x17U)) 
                                | ((0x3e00U & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                               << 9U)) 
                                   | (0x180U & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
                                                >> 0x17U))));
    if ((0x10dU >= (0x1ffU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))) {
        vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
            = (((0U == (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                 ? 0U : (__Vtemp_h642f943c__0[((IData)(1U) 
                                               + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                     >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x87U) 
                                                  * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
               | (__Vtemp_h642f943c__0[(0xfU & (((IData)(0x87U) 
                                                 * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                >> 5U))] 
                  >> (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))));
        vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[1U] 
            = (((0U == (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                 ? 0U : (__Vtemp_h642f943c__0[((IData)(2U) 
                                               + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                     >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x87U) 
                                                  * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
               | (__Vtemp_h642f943c__0[((IData)(1U) 
                                        + (0xfU & (
                                                   ((IData)(0x87U) 
                                                    * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                   >> 5U)))] 
                  >> (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))));
        vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[2U] 
            = (((0U == (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                 ? 0U : (__Vtemp_h642f943c__0[((IData)(3U) 
                                               + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                     >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x87U) 
                                                  * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
               | (__Vtemp_h642f943c__0[((IData)(2U) 
                                        + (0xfU & (
                                                   ((IData)(0x87U) 
                                                    * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                   >> 5U)))] 
                  >> (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))));
        vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[3U] 
            = (((0U == (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                 ? 0U : (__Vtemp_h642f943c__0[((IData)(4U) 
                                               + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                     >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x87U) 
                                                  * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
               | (__Vtemp_h642f943c__0[((IData)(3U) 
                                        + (0xfU & (
                                                   ((IData)(0x87U) 
                                                    * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                   >> 5U)))] 
                  >> (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))));
    } else {
        vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
            = vlSelf->div_sqrt_arb__DOT____Vxrand_h3a5e75a1__0[0U];
        vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[1U] 
            = vlSelf->div_sqrt_arb__DOT____Vxrand_h3a5e75a1__0[1U];
        vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[2U] 
            = vlSelf->div_sqrt_arb__DOT____Vxrand_h3a5e75a1__0[2U];
        vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[3U] 
            = vlSelf->div_sqrt_arb__DOT____Vxrand_h3a5e75a1__0[3U];
    }
    vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[4U] 
        = (((IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r) 
            << 7U) | (0x7fU & ((0x10dU >= (0x1ffU & 
                                           ((IData)(0x87U) 
                                            * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                                ? (((0U == (0x1fU & 
                                            ((IData)(0x87U) 
                                             * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                                     ? 0U : (__Vtemp_h642f943c__0[
                                             ((IData)(5U) 
                                              + (0xfU 
                                                 & (((IData)(0x87U) 
                                                     * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x87U) 
                                                     * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
                                   | (__Vtemp_h642f943c__0[
                                      ((IData)(4U) 
                                       + (0xfU & (((IData)(0x87U) 
                                                   * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                  >> 5U)))] 
                                      >> (0x1fU & ((IData)(0x87U) 
                                                   * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))
                                : vlSelf->div_sqrt_arb__DOT____Vxrand_h3a5e75a1__0[4U])));
    vlSelf->__Vtableidx8 = (((IData)(vlSelf->__PVT__per_core_valid_out) 
                             << 2U) | (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state));
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r 
        = VVortex__ConstPool__TABLE_hd4629e97_0[vlSelf->__Vtableidx8];
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r 
        = VVortex__ConstPool__TABLE_hf73fbda4_0[vlSelf->__Vtableidx8];
    vlSelf->__PVT__per_core_has_fflags = ((9U & (IData)(vlSelf->__PVT__per_core_has_fflags)) 
                                          | (4U | (2U 
                                                   & (vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
                                                      >> 5U))));
    vlSelf->__PVT__per_core_result[0U] = ((vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
                                           << 0x1bU) 
                                          | (vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                             >> 5U));
    vlSelf->__PVT__per_core_result[1U] = ((vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                           << 0x1bU) 
                                          | (vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
                                             >> 5U));
    vlSelf->__PVT__per_core_result[2U] = ((vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
                                           << 0x1bU) 
                                          | (vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                             >> 5U));
    vlSelf->__PVT__per_core_result[3U] = ((vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                           << 0x1bU) 
                                          | (vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
                                             >> 5U));
    vlSelf->__PVT__per_core_result[4U] = ((vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[1U] 
                                           << 0x19U) 
                                          | (vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
                                             >> 7U));
    vlSelf->__PVT__per_core_result[5U] = ((vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[2U] 
                                           << 0x19U) 
                                          | (vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[1U] 
                                             >> 7U));
    vlSelf->__PVT__per_core_result[6U] = ((vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[3U] 
                                           << 0x19U) 
                                          | (vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[2U] 
                                             >> 7U));
    vlSelf->__PVT__per_core_result[7U] = ((vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[4U] 
                                           << 0x19U) 
                                          | (vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[3U] 
                                             >> 7U));
    vlSelf->__PVT__per_core_fflags = ((0xffc00U & vlSelf->__PVT__per_core_fflags) 
                                      | ((0x3e0U & 
                                          (vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
                                           << 4U)) 
                                         | (0x1fU & 
                                            vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])));
    vlSelf->__PVT__per_core_tag_out = ((0xcU & (IData)(vlSelf->__PVT__per_core_tag_out)) 
                                       | ((2U & (vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
                                                 << 1U)) 
                                          | (1U & (
                                                   vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                   >> 5U))));
    vlSelf->__PVT__per_core_ready_out = ((8U & (IData)(vlSelf->__PVT__per_core_ready_out)) 
                                         | ((4U & (
                                                   ((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__use_buffer)) 
                                                    << 2U) 
                                                   & (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r))) 
                                            | (3U & 
                                               ((- (IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__use_buffer))))) 
                                                & (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r)))));
    vlSelf->__PVT__per_core_ready_out = ((7U & (IData)(vlSelf->__PVT__per_core_ready_out)) 
                                         | (((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__use_buffer)) 
                                             & ((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r) 
                                                >> 3U)) 
                                            << 3U));
    vlSelf->__PVT__per_core_data_out[0U] = ((vlSelf->__PVT__per_core_result[0U] 
                                             << 7U) 
                                            | ((0x40U 
                                                & ((IData)(vlSelf->__PVT__per_core_has_fflags) 
                                                   << 6U)) 
                                               | ((0x3eU 
                                                   & (vlSelf->__PVT__per_core_fflags 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->__PVT__per_core_tag_out)))));
    vlSelf->__PVT__per_core_data_out[1U] = ((vlSelf->__PVT__per_core_result[0U] 
                                             >> 0x19U) 
                                            | (vlSelf->__PVT__per_core_result[1U] 
                                               << 7U));
    vlSelf->__PVT__per_core_data_out[2U] = ((vlSelf->__PVT__per_core_result[1U] 
                                             >> 0x19U) 
                                            | (vlSelf->__PVT__per_core_result[2U] 
                                               << 7U));
    vlSelf->__PVT__per_core_data_out[3U] = ((vlSelf->__PVT__per_core_result[2U] 
                                             >> 0x19U) 
                                            | (vlSelf->__PVT__per_core_result[3U] 
                                               << 7U));
    vlSelf->__PVT__per_core_data_out[4U] = ((0xffffff80U 
                                             & vlSelf->__PVT__per_core_data_out[4U]) 
                                            | (vlSelf->__PVT__per_core_result[3U] 
                                               >> 0x19U));
    vlSelf->__PVT__per_core_data_out[4U] = ((0x7fU 
                                             & vlSelf->__PVT__per_core_data_out[4U]) 
                                            | ((vlSelf->__PVT__per_core_result[4U] 
                                                << 0xeU) 
                                               | ((0x2000U 
                                                   & ((IData)(vlSelf->__PVT__per_core_has_fflags) 
                                                      << 0xcU)) 
                                                  | ((0x1f00U 
                                                      & (vlSelf->__PVT__per_core_fflags 
                                                         << 3U)) 
                                                     | (0x80U 
                                                        & ((IData)(vlSelf->__PVT__per_core_tag_out) 
                                                           << 6U))))));
    vlSelf->__PVT__per_core_data_out[5U] = ((0x7fU 
                                             & (vlSelf->__PVT__per_core_result[4U] 
                                                >> 0x12U)) 
                                            | ((0x3f80U 
                                                & (vlSelf->__PVT__per_core_result[4U] 
                                                   >> 0x12U)) 
                                               | (vlSelf->__PVT__per_core_result[5U] 
                                                  << 0xeU)));
    vlSelf->__PVT__per_core_data_out[6U] = ((0x7fU 
                                             & (vlSelf->__PVT__per_core_result[5U] 
                                                >> 0x12U)) 
                                            | ((0x3f80U 
                                                & (vlSelf->__PVT__per_core_result[5U] 
                                                   >> 0x12U)) 
                                               | (vlSelf->__PVT__per_core_result[6U] 
                                                  << 0xeU)));
    vlSelf->__PVT__per_core_data_out[7U] = ((0x7fU 
                                             & (vlSelf->__PVT__per_core_result[6U] 
                                                >> 0x12U)) 
                                            | ((0x3f80U 
                                                & (vlSelf->__PVT__per_core_result[6U] 
                                                   >> 0x12U)) 
                                               | (vlSelf->__PVT__per_core_result[7U] 
                                                  << 0xeU)));
    vlSelf->__PVT__per_core_data_out[8U] = ((0xffffc000U 
                                             & vlSelf->__PVT__per_core_data_out[8U]) 
                                            | ((0x7fU 
                                                & (vlSelf->__PVT__per_core_result[7U] 
                                                   >> 0x12U)) 
                                               | (0x3f80U 
                                                  & (vlSelf->__PVT__per_core_result[7U] 
                                                     >> 0x12U))));
    vlSelf->__PVT__per_core_data_out[8U] = ((0x3fffU 
                                             & vlSelf->__PVT__per_core_data_out[8U]) 
                                            | ((vlSelf->__PVT__per_core_result[8U] 
                                                << 0x15U) 
                                               | ((0x100000U 
                                                   & ((IData)(vlSelf->__PVT__per_core_has_fflags) 
                                                      << 0x12U)) 
                                                  | ((0xf8000U 
                                                      & (vlSelf->__PVT__per_core_fflags 
                                                         << 5U)) 
                                                     | (0x4000U 
                                                        & ((IData)(vlSelf->__PVT__per_core_tag_out) 
                                                           << 0xcU))))));
    vlSelf->__PVT__per_core_data_out[9U] = ((0x3fffU 
                                             & (vlSelf->__PVT__per_core_result[8U] 
                                                >> 0xbU)) 
                                            | ((0x1fc000U 
                                                & (vlSelf->__PVT__per_core_result[8U] 
                                                   >> 0xbU)) 
                                               | (vlSelf->__PVT__per_core_result[9U] 
                                                  << 0x15U)));
    vlSelf->__PVT__per_core_data_out[0xaU] = ((0x3fffU 
                                               & (vlSelf->__PVT__per_core_result[9U] 
                                                  >> 0xbU)) 
                                              | ((0x1fc000U 
                                                  & (vlSelf->__PVT__per_core_result[9U] 
                                                     >> 0xbU)) 
                                                 | (vlSelf->__PVT__per_core_result[0xaU] 
                                                    << 0x15U)));
    vlSelf->__PVT__per_core_data_out[0xbU] = ((0x3fffU 
                                               & (vlSelf->__PVT__per_core_result[0xaU] 
                                                  >> 0xbU)) 
                                              | ((0x1fc000U 
                                                  & (vlSelf->__PVT__per_core_result[0xaU] 
                                                     >> 0xbU)) 
                                                 | (vlSelf->__PVT__per_core_result[0xbU] 
                                                    << 0x15U)));
    vlSelf->__PVT__per_core_data_out[0xcU] = ((0xffe00000U 
                                               & vlSelf->__PVT__per_core_data_out[0xcU]) 
                                              | ((0x3fffU 
                                                  & (vlSelf->__PVT__per_core_result[0xbU] 
                                                     >> 0xbU)) 
                                                 | (0x1fc000U 
                                                    & (vlSelf->__PVT__per_core_result[0xbU] 
                                                       >> 0xbU))));
    vlSelf->__PVT__per_core_data_out[0xcU] = ((0x1fffffU 
                                               & vlSelf->__PVT__per_core_data_out[0xcU]) 
                                              | ((vlSelf->__PVT__per_core_result[0xcU] 
                                                  << 0x1cU) 
                                                 | ((0x8000000U 
                                                     & ((IData)(vlSelf->__PVT__per_core_has_fflags) 
                                                        << 0x18U)) 
                                                    | ((0x7c00000U 
                                                        & (vlSelf->__PVT__per_core_fflags 
                                                           << 7U)) 
                                                       | (0x200000U 
                                                          & ((IData)(vlSelf->__PVT__per_core_tag_out) 
                                                             << 0x12U))))));
    vlSelf->__PVT__per_core_data_out[0xdU] = ((0x1fffffU 
                                               & (vlSelf->__PVT__per_core_result[0xcU] 
                                                  >> 4U)) 
                                              | ((0xfe00000U 
                                                  & (vlSelf->__PVT__per_core_result[0xcU] 
                                                     >> 4U)) 
                                                 | (vlSelf->__PVT__per_core_result[0xdU] 
                                                    << 0x1cU)));
    vlSelf->__PVT__per_core_data_out[0xeU] = ((0x1fffffU 
                                               & (vlSelf->__PVT__per_core_result[0xdU] 
                                                  >> 4U)) 
                                              | ((0xfe00000U 
                                                  & (vlSelf->__PVT__per_core_result[0xdU] 
                                                     >> 4U)) 
                                                 | (vlSelf->__PVT__per_core_result[0xeU] 
                                                    << 0x1cU)));
    vlSelf->__PVT__per_core_data_out[0xfU] = ((0x1fffffU 
                                               & (vlSelf->__PVT__per_core_result[0xeU] 
                                                  >> 4U)) 
                                              | ((0xfe00000U 
                                                  & (vlSelf->__PVT__per_core_result[0xeU] 
                                                     >> 4U)) 
                                                 | (vlSelf->__PVT__per_core_result[0xfU] 
                                                    << 0x1cU)));
    vlSelf->__PVT__per_core_data_out[0x10U] = (0xfffffffU 
                                               & ((0x1fffffU 
                                                   & (vlSelf->__PVT__per_core_result[0xfU] 
                                                      >> 4U)) 
                                                  | (0xfe00000U 
                                                     & (vlSelf->__PVT__per_core_result[0xfU] 
                                                        >> 4U))));
    vlSelf->__PVT__fcvt__DOT__fcvt_ready = (1U & (((IData)(vlSelf->__PVT__per_core_ready_out) 
                                                   >> 2U) 
                                                  | (~ 
                                                     ((IData)(vlSelf->__PVT__per_core_valid_out) 
                                                      >> 2U))));
    vlSelf->__PVT__fma__DOT__fma_ready = (1U & ((IData)(vlSelf->__PVT__per_core_ready_out) 
                                                | (~ (IData)(vlSelf->__PVT__per_core_valid_out))));
    vlSelf->__PVT__fncp__DOT__fncp_ready = (1U & (((IData)(vlSelf->__PVT__per_core_ready_out) 
                                                   >> 3U) 
                                                  | (~ 
                                                     ((IData)(vlSelf->__PVT__per_core_valid_out) 
                                                      >> 3U))));
    vlSelf->__Vcellout__div_sqrt_arb__ready_in = ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__per_core_ready_out) 
                                                                 >> 1U)))) 
                                                  & (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r));
    if ((0x21bU >= (0x3ffU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))) {
        vlSelf->rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
            = (((0U == (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                 ? 0U : (vlSelf->__PVT__per_core_data_out[
                         ((IData)(1U) + (0x1fU & (((IData)(0x87U) 
                                                   * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x87U) 
                                                  * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
               | (vlSelf->__PVT__per_core_data_out[
                  (0x1fU & (((IData)(0x87U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x87U) 
                                                  * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))));
        vlSelf->rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[1U] 
            = (((0U == (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                 ? 0U : (vlSelf->__PVT__per_core_data_out[
                         ((IData)(2U) + (0x1fU & (((IData)(0x87U) 
                                                   * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x87U) 
                                                  * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
               | (vlSelf->__PVT__per_core_data_out[
                  ((IData)(1U) + (0x1fU & (((IData)(0x87U) 
                                            * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))));
        vlSelf->rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[2U] 
            = (((0U == (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                 ? 0U : (vlSelf->__PVT__per_core_data_out[
                         ((IData)(3U) + (0x1fU & (((IData)(0x87U) 
                                                   * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x87U) 
                                                  * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
               | (vlSelf->__PVT__per_core_data_out[
                  ((IData)(2U) + (0x1fU & (((IData)(0x87U) 
                                            * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))));
        vlSelf->rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[3U] 
            = (((0U == (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                 ? 0U : (vlSelf->__PVT__per_core_data_out[
                         ((IData)(4U) + (0x1fU & (((IData)(0x87U) 
                                                   * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x87U) 
                                                  * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
               | (vlSelf->__PVT__per_core_data_out[
                  ((IData)(3U) + (0x1fU & (((IData)(0x87U) 
                                            * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x87U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))));
    } else {
        vlSelf->rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
            = vlSelf->rsp_arb__DOT____Vxrand_h3a5e75a1__0[0U];
        vlSelf->rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[1U] 
            = vlSelf->rsp_arb__DOT____Vxrand_h3a5e75a1__0[1U];
        vlSelf->rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[2U] 
            = vlSelf->rsp_arb__DOT____Vxrand_h3a5e75a1__0[2U];
        vlSelf->rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[3U] 
            = vlSelf->rsp_arb__DOT____Vxrand_h3a5e75a1__0[3U];
    }
    vlSelf->rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[4U] 
        = (((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r) 
            << 7U) | (0x7fU & ((0x21bU >= (0x3ffU & 
                                           ((IData)(0x87U) 
                                            * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                                ? (((0U == (0x1fU & 
                                            ((IData)(0x87U) 
                                             * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                                     ? 0U : (vlSelf->__PVT__per_core_data_out[
                                             ((IData)(5U) 
                                              + (0x1fU 
                                                 & (((IData)(0x87U) 
                                                     * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x87U) 
                                                     * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
                                   | (vlSelf->__PVT__per_core_data_out[
                                      ((IData)(4U) 
                                       + (0x1fU & (
                                                   ((IData)(0x87U) 
                                                    * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                   >> 5U)))] 
                                      >> (0x1fU & ((IData)(0x87U) 
                                                   * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))
                                : vlSelf->rsp_arb__DOT____Vxrand_h3a5e75a1__0[4U])));
    vlSelf->__PVT__fcvt__DOT__fcvt_fire = ((IData)(vlSelf->__PVT__fcvt__DOT__fcvt_valid) 
                                           & (IData)(vlSelf->__PVT__fcvt__DOT__fcvt_ready));
    vlSelf->__PVT__per_core_ready_in = ((0xbU & (IData)(vlSelf->__PVT__per_core_ready_in)) 
                                        | ((IData)(vlSelf->__PVT__fcvt__DOT__fcvt_ready) 
                                           << 2U));
    vlSelf->__PVT__fma__DOT__fma_fire = ((IData)(vlSelf->__PVT__fma__DOT__fma_valid) 
                                         & (IData)(vlSelf->__PVT__fma__DOT__fma_ready));
    vlSelf->__PVT__per_core_ready_in = ((0xeU & (IData)(vlSelf->__PVT__per_core_ready_in)) 
                                        | (IData)(vlSelf->__PVT__fma__DOT__fma_ready));
    vlSelf->__PVT__per_core_ready_in = ((7U & (IData)(vlSelf->__PVT__per_core_ready_in)) 
                                        | ((IData)(vlSelf->__PVT__fncp__DOT__fncp_ready) 
                                           << 3U));
    vlSelf->__PVT__fncp__DOT__fncp_fire = ((IData)(vlSelf->__PVT__fncp__DOT__fncp_valid) 
                                           & (IData)(vlSelf->__PVT__fncp__DOT__fncp_ready));
    vlSelf->__PVT__fdiv__DOT__fdiv_ready = (1U & ((IData)(vlSelf->__Vcellout__div_sqrt_arb__ready_in) 
                                                  | (~ 
                                                     (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                      >> 6U))));
    vlSelf->__PVT__fsqrt__DOT__fsqrt_ready = (1U & 
                                              (((IData)(vlSelf->__Vcellout__div_sqrt_arb__ready_in) 
                                                >> 1U) 
                                               | (~ 
                                                  (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
                                                   >> 6U))));
    VVortex___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), vlSelf->__PVT__int_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__78__result, vlSelf->__Vtask_dpi_itof__78__fflags);
    vlSelf->__PVT__fcvt__DOT__result_itof[0U] = (IData)(vlSelf->__Vtask_dpi_itof__78__result);
    vlSelf->__PVT__fcvt__DOT__result_itof[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_itof__78__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_ha816653d__0 = vlSelf->__Vtask_dpi_itof__78__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_itof = ((0xfffe0U 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_itof) 
                                             | (IData)(vlSelf->__Vlvbound_ha816653d__0));
    VVortex___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), vlSelf->__PVT__int_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__79__result, vlSelf->__Vtask_dpi_utof__79__fflags);
    vlSelf->__PVT__fcvt__DOT__result_utof[0U] = (IData)(vlSelf->__Vtask_dpi_utof__79__result);
    vlSelf->__PVT__fcvt__DOT__result_utof[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_utof__79__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h24bf1863__0 = vlSelf->__Vtask_dpi_utof__79__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_utof = ((0xfffe0U 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_utof) 
                                             | (IData)(vlSelf->__Vlvbound_h24bf1863__0));
    VVortex___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__int_fmt), vlSelf->__PVT__dst_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__80__result, vlSelf->__Vtask_dpi_ftoi__80__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[0U] = (IData)(vlSelf->__Vtask_dpi_ftoi__80__result);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftoi__80__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h8d4e7366__0 = vlSelf->__Vtask_dpi_ftoi__80__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_ftoi = ((0xfffe0U 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_ftoi) 
                                             | (IData)(vlSelf->__Vlvbound_h8d4e7366__0));
    VVortex___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__int_fmt), vlSelf->__PVT__dst_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__81__result, vlSelf->__Vtask_dpi_ftou__81__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftou[0U] = (IData)(vlSelf->__Vtask_dpi_ftou__81__result);
    vlSelf->__PVT__fcvt__DOT__result_ftou[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftou__81__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h6ce28c5f__0 = vlSelf->__Vtask_dpi_ftou__81__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_ftou = ((0xfffe0U 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_ftou) 
                                             | (IData)(vlSelf->__Vlvbound_h6ce28c5f__0));
    VVortex___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][0U]))), vlSelf->__Vtask_dpi_f2f__82__result);
    vlSelf->__PVT__fcvt__DOT__result_f2f[0U] = (IData)(vlSelf->__Vtask_dpi_f2f__82__result);
    vlSelf->__PVT__fcvt__DOT__result_f2f[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_f2f__82__result 
                                                        >> 0x20U));
    if (vlSelf->__PVT__is_itof) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[0U] = 
            vlSelf->__PVT__fcvt__DOT__result_itof[0U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & vlSelf->__PVT__fcvt__DOT__fflags_itof);
    } else if (vlSelf->__PVT__is_utof) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[0U] = 
            vlSelf->__PVT__fcvt__DOT__result_utof[0U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & vlSelf->__PVT__fcvt__DOT__fflags_utof);
    } else if (vlSelf->__PVT__is_ftoi) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[0U] = 
            vlSelf->__PVT__fcvt__DOT__result_ftoi[0U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & vlSelf->__PVT__fcvt__DOT__fflags_ftoi);
    } else if (vlSelf->__PVT__is_ftou) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[0U] = 
            vlSelf->__PVT__fcvt__DOT__result_ftou[0U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & vlSelf->__PVT__fcvt__DOT__fflags_ftou);
    } else {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[0U] = 
            ((IData)(vlSelf->__PVT__is_f2f) ? vlSelf->__PVT__fcvt__DOT__result_f2f[0U]
              : 0U);
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__fcvt__DOT__fflags_fcvt = ((0xfffe0U 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_fcvt) 
                                             | (IData)(vlSelf->__Vlvbound_h268775a1__0));
    VVortex___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), vlSelf->__PVT__int_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__78__result, vlSelf->__Vtask_dpi_itof__78__fflags);
    vlSelf->__PVT__fcvt__DOT__result_itof[2U] = (IData)(vlSelf->__Vtask_dpi_itof__78__result);
    vlSelf->__PVT__fcvt__DOT__result_itof[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_itof__78__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_ha816653d__0 = vlSelf->__Vtask_dpi_itof__78__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_itof = ((0xffc1fU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_itof) 
                                             | ((IData)(vlSelf->__Vlvbound_ha816653d__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), vlSelf->__PVT__int_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__79__result, vlSelf->__Vtask_dpi_utof__79__fflags);
    vlSelf->__PVT__fcvt__DOT__result_utof[2U] = (IData)(vlSelf->__Vtask_dpi_utof__79__result);
    vlSelf->__PVT__fcvt__DOT__result_utof[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_utof__79__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h24bf1863__0 = vlSelf->__Vtask_dpi_utof__79__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_utof = ((0xffc1fU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_utof) 
                                             | ((IData)(vlSelf->__Vlvbound_h24bf1863__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__int_fmt), vlSelf->__PVT__dst_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__80__result, vlSelf->__Vtask_dpi_ftoi__80__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[2U] = (IData)(vlSelf->__Vtask_dpi_ftoi__80__result);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftoi__80__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h8d4e7366__0 = vlSelf->__Vtask_dpi_ftoi__80__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_ftoi = ((0xffc1fU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_ftoi) 
                                             | ((IData)(vlSelf->__Vlvbound_h8d4e7366__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__int_fmt), vlSelf->__PVT__dst_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__81__result, vlSelf->__Vtask_dpi_ftou__81__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftou[2U] = (IData)(vlSelf->__Vtask_dpi_ftou__81__result);
    vlSelf->__PVT__fcvt__DOT__result_ftou[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftou__81__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h6ce28c5f__0 = vlSelf->__Vtask_dpi_ftou__81__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_ftou = ((0xffc1fU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_ftou) 
                                             | ((IData)(vlSelf->__Vlvbound_h6ce28c5f__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][2U]))), vlSelf->__Vtask_dpi_f2f__82__result);
    vlSelf->__PVT__fcvt__DOT__result_f2f[2U] = (IData)(vlSelf->__Vtask_dpi_f2f__82__result);
    vlSelf->__PVT__fcvt__DOT__result_f2f[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_f2f__82__result 
                                                        >> 0x20U));
    if (vlSelf->__PVT__is_itof) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[1U] = 
            vlSelf->__PVT__fcvt__DOT__result_itof[2U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 
                                           (vlSelf->__PVT__fcvt__DOT__fflags_itof 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_utof) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[1U] = 
            vlSelf->__PVT__fcvt__DOT__result_utof[2U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 
                                           (vlSelf->__PVT__fcvt__DOT__fflags_utof 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_ftoi) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[1U] = 
            vlSelf->__PVT__fcvt__DOT__result_ftoi[2U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 
                                           (vlSelf->__PVT__fcvt__DOT__fflags_ftoi 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_ftou) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[1U] = 
            vlSelf->__PVT__fcvt__DOT__result_ftou[2U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 
                                           (vlSelf->__PVT__fcvt__DOT__fflags_ftou 
                                            >> 5U));
    } else {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[1U] = 
            ((IData)(vlSelf->__PVT__is_f2f) ? vlSelf->__PVT__fcvt__DOT__result_f2f[2U]
              : 0U);
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__fcvt__DOT__fflags_fcvt = ((0xffc1fU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_fcvt) 
                                             | ((IData)(vlSelf->__Vlvbound_h268775a1__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), vlSelf->__PVT__int_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][4U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__78__result, vlSelf->__Vtask_dpi_itof__78__fflags);
    vlSelf->__PVT__fcvt__DOT__result_itof[4U] = (IData)(vlSelf->__Vtask_dpi_itof__78__result);
    vlSelf->__PVT__fcvt__DOT__result_itof[5U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_itof__78__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_ha816653d__0 = vlSelf->__Vtask_dpi_itof__78__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_itof = ((0xf83ffU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_itof) 
                                             | ((IData)(vlSelf->__Vlvbound_ha816653d__0) 
                                                << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), vlSelf->__PVT__int_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][4U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__79__result, vlSelf->__Vtask_dpi_utof__79__fflags);
    vlSelf->__PVT__fcvt__DOT__result_utof[4U] = (IData)(vlSelf->__Vtask_dpi_utof__79__result);
    vlSelf->__PVT__fcvt__DOT__result_utof[5U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_utof__79__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h24bf1863__0 = vlSelf->__Vtask_dpi_utof__79__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_utof = ((0xf83ffU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_utof) 
                                             | ((IData)(vlSelf->__Vlvbound_h24bf1863__0) 
                                                << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__int_fmt), vlSelf->__PVT__dst_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][4U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__80__result, vlSelf->__Vtask_dpi_ftoi__80__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[4U] = (IData)(vlSelf->__Vtask_dpi_ftoi__80__result);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[5U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftoi__80__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h8d4e7366__0 = vlSelf->__Vtask_dpi_ftoi__80__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_ftoi = ((0xf83ffU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_ftoi) 
                                             | ((IData)(vlSelf->__Vlvbound_h8d4e7366__0) 
                                                << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__int_fmt), vlSelf->__PVT__dst_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][4U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__81__result, vlSelf->__Vtask_dpi_ftou__81__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftou[4U] = (IData)(vlSelf->__Vtask_dpi_ftou__81__result);
    vlSelf->__PVT__fcvt__DOT__result_ftou[5U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftou__81__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h6ce28c5f__0 = vlSelf->__Vtask_dpi_ftou__81__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_ftou = ((0xf83ffU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_ftou) 
                                             | ((IData)(vlSelf->__Vlvbound_h6ce28c5f__0) 
                                                << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][5U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][4U]))), vlSelf->__Vtask_dpi_f2f__82__result);
    vlSelf->__PVT__fcvt__DOT__result_f2f[4U] = (IData)(vlSelf->__Vtask_dpi_f2f__82__result);
    vlSelf->__PVT__fcvt__DOT__result_f2f[5U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_f2f__82__result 
                                                        >> 0x20U));
    if (vlSelf->__PVT__is_itof) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[2U] = 
            vlSelf->__PVT__fcvt__DOT__result_itof[4U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 
                                           (vlSelf->__PVT__fcvt__DOT__fflags_itof 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_utof) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[2U] = 
            vlSelf->__PVT__fcvt__DOT__result_utof[4U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 
                                           (vlSelf->__PVT__fcvt__DOT__fflags_utof 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_ftoi) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[2U] = 
            vlSelf->__PVT__fcvt__DOT__result_ftoi[4U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 
                                           (vlSelf->__PVT__fcvt__DOT__fflags_ftoi 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_ftou) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[2U] = 
            vlSelf->__PVT__fcvt__DOT__result_ftou[4U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 
                                           (vlSelf->__PVT__fcvt__DOT__fflags_ftou 
                                            >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[2U] = 
            ((IData)(vlSelf->__PVT__is_f2f) ? vlSelf->__PVT__fcvt__DOT__result_f2f[4U]
              : 0U);
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__fcvt__DOT__fflags_fcvt = ((0xf83ffU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_fcvt) 
                                             | ((IData)(vlSelf->__Vlvbound_h268775a1__0) 
                                                << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), vlSelf->__PVT__int_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][6U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__78__result, vlSelf->__Vtask_dpi_itof__78__fflags);
    vlSelf->__PVT__fcvt__DOT__result_itof[6U] = (IData)(vlSelf->__Vtask_dpi_itof__78__result);
    vlSelf->__PVT__fcvt__DOT__result_itof[7U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_itof__78__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_ha816653d__0 = vlSelf->__Vtask_dpi_itof__78__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_itof = ((0x7fffU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_itof) 
                                             | ((IData)(vlSelf->__Vlvbound_ha816653d__0) 
                                                << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), vlSelf->__PVT__int_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][6U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__79__result, vlSelf->__Vtask_dpi_utof__79__fflags);
    vlSelf->__PVT__fcvt__DOT__result_utof[6U] = (IData)(vlSelf->__Vtask_dpi_utof__79__result);
    vlSelf->__PVT__fcvt__DOT__result_utof[7U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_utof__79__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h24bf1863__0 = vlSelf->__Vtask_dpi_utof__79__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_utof = ((0x7fffU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_utof) 
                                             | ((IData)(vlSelf->__Vlvbound_h24bf1863__0) 
                                                << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__int_fmt), vlSelf->__PVT__dst_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][6U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__80__result, vlSelf->__Vtask_dpi_ftoi__80__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[6U] = (IData)(vlSelf->__Vtask_dpi_ftoi__80__result);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[7U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftoi__80__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h8d4e7366__0 = vlSelf->__Vtask_dpi_ftoi__80__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_ftoi = ((0x7fffU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_ftoi) 
                                             | ((IData)(vlSelf->__Vlvbound_h8d4e7366__0) 
                                                << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__int_fmt), vlSelf->__PVT__dst_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][6U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__81__result, vlSelf->__Vtask_dpi_ftou__81__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftou[6U] = (IData)(vlSelf->__Vtask_dpi_ftou__81__result);
    vlSelf->__PVT__fcvt__DOT__result_ftou[7U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftou__81__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h6ce28c5f__0 = vlSelf->__Vtask_dpi_ftou__81__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_ftou = ((0x7fffU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_ftou) 
                                             | ((IData)(vlSelf->__Vlvbound_h6ce28c5f__0) 
                                                << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][7U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][6U]))), vlSelf->__Vtask_dpi_f2f__82__result);
    vlSelf->__PVT__fcvt__DOT__result_f2f[6U] = (IData)(vlSelf->__Vtask_dpi_f2f__82__result);
    vlSelf->__PVT__fcvt__DOT__result_f2f[7U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_f2f__82__result 
                                                        >> 0x20U));
    if (vlSelf->__PVT__is_itof) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[3U] = 
            vlSelf->__PVT__fcvt__DOT__result_itof[6U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 
                                           (vlSelf->__PVT__fcvt__DOT__fflags_itof 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_utof) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[3U] = 
            vlSelf->__PVT__fcvt__DOT__result_utof[6U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 
                                           (vlSelf->__PVT__fcvt__DOT__fflags_utof 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_ftoi) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[3U] = 
            vlSelf->__PVT__fcvt__DOT__result_ftoi[6U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 
                                           (vlSelf->__PVT__fcvt__DOT__fflags_ftoi 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_ftou) {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[3U] = 
            vlSelf->__PVT__fcvt__DOT__result_ftou[6U];
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 
                                           (vlSelf->__PVT__fcvt__DOT__fflags_ftou 
                                            >> 0xfU));
    } else {
        vlSelf->__PVT__fcvt__DOT__result_fcvt[3U] = 
            ((IData)(vlSelf->__PVT__is_f2f) ? vlSelf->__PVT__fcvt__DOT__result_f2f[6U]
              : 0U);
        vlSelf->__Vlvbound_h268775a1__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__fcvt__DOT__fflags_fcvt = ((0x7fffU 
                                              & vlSelf->__PVT__fcvt__DOT__fflags_fcvt) 
                                             | ((IData)(vlSelf->__Vlvbound_h268775a1__0) 
                                                << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__69__result, vlSelf->__Vtask_dpi_fadd__69__fflags);
    vlSelf->__PVT__fma__DOT__result_fadd[0U] = (IData)(vlSelf->__Vtask_dpi_fadd__69__result);
    vlSelf->__PVT__fma__DOT__result_fadd[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fadd__69__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h41c8a5b5__0 = vlSelf->__Vtask_dpi_fadd__69__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fadd = ((0xfffe0U 
                                             & vlSelf->__PVT__fma__DOT__fflags_fadd) 
                                            | (IData)(vlSelf->__Vlvbound_h41c8a5b5__0));
    VVortex___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__70__result, vlSelf->__Vtask_dpi_fsub__70__fflags);
    vlSelf->__PVT__fma__DOT__result_fsub[0U] = (IData)(vlSelf->__Vtask_dpi_fsub__70__result);
    vlSelf->__PVT__fma__DOT__result_fsub[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fsub__70__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hc3f8bfe1__0 = vlSelf->__Vtask_dpi_fsub__70__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fsub = ((0xfffe0U 
                                             & vlSelf->__PVT__fma__DOT__fflags_fsub) 
                                            | (IData)(vlSelf->__Vlvbound_hc3f8bfe1__0));
    VVortex___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__71__result, vlSelf->__Vtask_dpi_fmul__71__fflags);
    vlSelf->__PVT__fma__DOT__result_fmul[0U] = (IData)(vlSelf->__Vtask_dpi_fmul__71__result);
    vlSelf->__PVT__fma__DOT__result_fmul[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fmul__71__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h49eb26c4__0 = vlSelf->__Vtask_dpi_fmul__71__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmul = ((0xfffe0U 
                                             & vlSelf->__PVT__fma__DOT__fflags_fmul) 
                                            | (IData)(vlSelf->__Vlvbound_h49eb26c4__0));
    VVortex___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [2U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__72__result, vlSelf->__Vtask_dpi_fmadd__72__fflags);
    vlSelf->__PVT__fma__DOT__result_fmadd[0U] = (IData)(vlSelf->__Vtask_dpi_fmadd__72__result);
    vlSelf->__PVT__fma__DOT__result_fmadd[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmadd__72__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h147cf4e8__0 = vlSelf->__Vtask_dpi_fmadd__72__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmadd = ((0xfffe0U 
                                              & vlSelf->__PVT__fma__DOT__fflags_fmadd) 
                                             | (IData)(vlSelf->__Vlvbound_h147cf4e8__0));
    VVortex___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [2U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__73__result, vlSelf->__Vtask_dpi_fmsub__73__fflags);
    vlSelf->__PVT__fma__DOT__result_fmsub[0U] = (IData)(vlSelf->__Vtask_dpi_fmsub__73__result);
    vlSelf->__PVT__fma__DOT__result_fmsub[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmsub__73__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h71951e49__0 = vlSelf->__Vtask_dpi_fmsub__73__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmsub = ((0xfffe0U 
                                              & vlSelf->__PVT__fma__DOT__fflags_fmsub) 
                                             | (IData)(vlSelf->__Vlvbound_h71951e49__0));
    VVortex___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__74__result, vlSelf->__Vtask_dpi_fnmadd__74__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmadd[0U] = (IData)(vlSelf->__Vtask_dpi_fnmadd__74__result);
    vlSelf->__PVT__fma__DOT__result_fnmadd[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmadd__74__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h01b131d5__0 = vlSelf->__Vtask_dpi_fnmadd__74__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fnmadd = ((0xfffe0U 
                                               & vlSelf->__PVT__fma__DOT__fflags_fnmadd) 
                                              | (IData)(vlSelf->__Vlvbound_h01b131d5__0));
    VVortex___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__75__result, vlSelf->__Vtask_dpi_fnmsub__75__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmsub[0U] = (IData)(vlSelf->__Vtask_dpi_fnmsub__75__result);
    vlSelf->__PVT__fma__DOT__result_fnmsub[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmsub__75__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hacab2bfc__0 = vlSelf->__Vtask_dpi_fnmsub__75__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fnmsub = ((0xfffe0U 
                                               & vlSelf->__PVT__fma__DOT__fflags_fnmsub) 
                                              | (IData)(vlSelf->__Vlvbound_hacab2bfc__0));
    if (vlSelf->__PVT__is_fadd) {
        vlSelf->__PVT__fma__DOT__result_fma[0U] = vlSelf->__PVT__fma__DOT__result_fadd[0U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & vlSelf->__PVT__fma__DOT__fflags_fadd);
    } else if (vlSelf->__PVT__is_fsub) {
        vlSelf->__PVT__fma__DOT__result_fma[0U] = vlSelf->__PVT__fma__DOT__result_fsub[0U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & vlSelf->__PVT__fma__DOT__fflags_fsub);
    } else if (vlSelf->__PVT__is_fmul) {
        vlSelf->__PVT__fma__DOT__result_fma[0U] = vlSelf->__PVT__fma__DOT__result_fmul[0U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & vlSelf->__PVT__fma__DOT__fflags_fmul);
    } else if (vlSelf->__PVT__is_fmadd) {
        vlSelf->__PVT__fma__DOT__result_fma[0U] = vlSelf->__PVT__fma__DOT__result_fmadd[0U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & vlSelf->__PVT__fma__DOT__fflags_fmadd);
    } else if (vlSelf->__PVT__is_fmsub) {
        vlSelf->__PVT__fma__DOT__result_fma[0U] = vlSelf->__PVT__fma__DOT__result_fmsub[0U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & vlSelf->__PVT__fma__DOT__fflags_fmsub);
    } else if (vlSelf->__PVT__is_fnmadd) {
        vlSelf->__PVT__fma__DOT__result_fma[0U] = vlSelf->__PVT__fma__DOT__result_fnmadd[0U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & vlSelf->__PVT__fma__DOT__fflags_fnmadd);
    } else if (vlSelf->__PVT__is_fnmsub) {
        vlSelf->__PVT__fma__DOT__result_fma[0U] = vlSelf->__PVT__fma__DOT__result_fnmsub[0U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & vlSelf->__PVT__fma__DOT__fflags_fnmsub);
    } else {
        vlSelf->__PVT__fma__DOT__result_fma[0U] = 0U;
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__fma__DOT__fflags_fma = ((0xfffe0U 
                                            & vlSelf->__PVT__fma__DOT__fflags_fma) 
                                           | (IData)(vlSelf->__Vlvbound_h198ed5c2__0));
    VVortex___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__69__result, vlSelf->__Vtask_dpi_fadd__69__fflags);
    vlSelf->__PVT__fma__DOT__result_fadd[2U] = (IData)(vlSelf->__Vtask_dpi_fadd__69__result);
    vlSelf->__PVT__fma__DOT__result_fadd[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fadd__69__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h41c8a5b5__0 = vlSelf->__Vtask_dpi_fadd__69__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fadd = ((0xffc1fU 
                                             & vlSelf->__PVT__fma__DOT__fflags_fadd) 
                                            | ((IData)(vlSelf->__Vlvbound_h41c8a5b5__0) 
                                               << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__70__result, vlSelf->__Vtask_dpi_fsub__70__fflags);
    vlSelf->__PVT__fma__DOT__result_fsub[2U] = (IData)(vlSelf->__Vtask_dpi_fsub__70__result);
    vlSelf->__PVT__fma__DOT__result_fsub[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fsub__70__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hc3f8bfe1__0 = vlSelf->__Vtask_dpi_fsub__70__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fsub = ((0xffc1fU 
                                             & vlSelf->__PVT__fma__DOT__fflags_fsub) 
                                            | ((IData)(vlSelf->__Vlvbound_hc3f8bfe1__0) 
                                               << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__71__result, vlSelf->__Vtask_dpi_fmul__71__fflags);
    vlSelf->__PVT__fma__DOT__result_fmul[2U] = (IData)(vlSelf->__Vtask_dpi_fmul__71__result);
    vlSelf->__PVT__fma__DOT__result_fmul[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fmul__71__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h49eb26c4__0 = vlSelf->__Vtask_dpi_fmul__71__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmul = ((0xffc1fU 
                                             & vlSelf->__PVT__fma__DOT__fflags_fmul) 
                                            | ((IData)(vlSelf->__Vlvbound_h49eb26c4__0) 
                                               << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [2U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__72__result, vlSelf->__Vtask_dpi_fmadd__72__fflags);
    vlSelf->__PVT__fma__DOT__result_fmadd[2U] = (IData)(vlSelf->__Vtask_dpi_fmadd__72__result);
    vlSelf->__PVT__fma__DOT__result_fmadd[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmadd__72__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h147cf4e8__0 = vlSelf->__Vtask_dpi_fmadd__72__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmadd = ((0xffc1fU 
                                              & vlSelf->__PVT__fma__DOT__fflags_fmadd) 
                                             | ((IData)(vlSelf->__Vlvbound_h147cf4e8__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [2U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__73__result, vlSelf->__Vtask_dpi_fmsub__73__fflags);
    vlSelf->__PVT__fma__DOT__result_fmsub[2U] = (IData)(vlSelf->__Vtask_dpi_fmsub__73__result);
    vlSelf->__PVT__fma__DOT__result_fmsub[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmsub__73__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h71951e49__0 = vlSelf->__Vtask_dpi_fmsub__73__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmsub = ((0xffc1fU 
                                              & vlSelf->__PVT__fma__DOT__fflags_fmsub) 
                                             | ((IData)(vlSelf->__Vlvbound_h71951e49__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__74__result, vlSelf->__Vtask_dpi_fnmadd__74__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmadd[2U] = (IData)(vlSelf->__Vtask_dpi_fnmadd__74__result);
    vlSelf->__PVT__fma__DOT__result_fnmadd[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmadd__74__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h01b131d5__0 = vlSelf->__Vtask_dpi_fnmadd__74__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fnmadd = ((0xffc1fU 
                                               & vlSelf->__PVT__fma__DOT__fflags_fnmadd) 
                                              | ((IData)(vlSelf->__Vlvbound_h01b131d5__0) 
                                                 << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__75__result, vlSelf->__Vtask_dpi_fnmsub__75__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmsub[2U] = (IData)(vlSelf->__Vtask_dpi_fnmsub__75__result);
    vlSelf->__PVT__fma__DOT__result_fnmsub[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmsub__75__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hacab2bfc__0 = vlSelf->__Vtask_dpi_fnmsub__75__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fnmsub = ((0xffc1fU 
                                               & vlSelf->__PVT__fma__DOT__fflags_fnmsub) 
                                              | ((IData)(vlSelf->__Vlvbound_hacab2bfc__0) 
                                                 << 5U));
    if (vlSelf->__PVT__is_fadd) {
        vlSelf->__PVT__fma__DOT__result_fma[1U] = vlSelf->__PVT__fma__DOT__result_fadd[2U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fadd 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_fsub) {
        vlSelf->__PVT__fma__DOT__result_fma[1U] = vlSelf->__PVT__fma__DOT__result_fsub[2U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fsub 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_fmul) {
        vlSelf->__PVT__fma__DOT__result_fma[1U] = vlSelf->__PVT__fma__DOT__result_fmul[2U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fmul 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_fmadd) {
        vlSelf->__PVT__fma__DOT__result_fma[1U] = vlSelf->__PVT__fma__DOT__result_fmadd[2U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fmadd 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_fmsub) {
        vlSelf->__PVT__fma__DOT__result_fma[1U] = vlSelf->__PVT__fma__DOT__result_fmsub[2U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fmsub 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_fnmadd) {
        vlSelf->__PVT__fma__DOT__result_fma[1U] = vlSelf->__PVT__fma__DOT__result_fnmadd[2U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fnmadd 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_fnmsub) {
        vlSelf->__PVT__fma__DOT__result_fma[1U] = vlSelf->__PVT__fma__DOT__result_fnmsub[2U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fnmsub 
                                            >> 5U));
    } else {
        vlSelf->__PVT__fma__DOT__result_fma[1U] = 0U;
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__fma__DOT__fflags_fma = ((0xffc1fU 
                                            & vlSelf->__PVT__fma__DOT__fflags_fma) 
                                           | ((IData)(vlSelf->__Vlvbound_h198ed5c2__0) 
                                              << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][4U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][4U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__69__result, vlSelf->__Vtask_dpi_fadd__69__fflags);
    vlSelf->__PVT__fma__DOT__result_fadd[4U] = (IData)(vlSelf->__Vtask_dpi_fadd__69__result);
    vlSelf->__PVT__fma__DOT__result_fadd[5U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fadd__69__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h41c8a5b5__0 = vlSelf->__Vtask_dpi_fadd__69__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fadd = ((0xf83ffU 
                                             & vlSelf->__PVT__fma__DOT__fflags_fadd) 
                                            | ((IData)(vlSelf->__Vlvbound_h41c8a5b5__0) 
                                               << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][4U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][4U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__70__result, vlSelf->__Vtask_dpi_fsub__70__fflags);
    vlSelf->__PVT__fma__DOT__result_fsub[4U] = (IData)(vlSelf->__Vtask_dpi_fsub__70__result);
    vlSelf->__PVT__fma__DOT__result_fsub[5U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fsub__70__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hc3f8bfe1__0 = vlSelf->__Vtask_dpi_fsub__70__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fsub = ((0xf83ffU 
                                             & vlSelf->__PVT__fma__DOT__fflags_fsub) 
                                            | ((IData)(vlSelf->__Vlvbound_hc3f8bfe1__0) 
                                               << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][4U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][4U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__71__result, vlSelf->__Vtask_dpi_fmul__71__fflags);
    vlSelf->__PVT__fma__DOT__result_fmul[4U] = (IData)(vlSelf->__Vtask_dpi_fmul__71__result);
    vlSelf->__PVT__fma__DOT__result_fmul[5U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fmul__71__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h49eb26c4__0 = vlSelf->__Vtask_dpi_fmul__71__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmul = ((0xf83ffU 
                                             & vlSelf->__PVT__fma__DOT__fflags_fmul) 
                                            | ((IData)(vlSelf->__Vlvbound_h49eb26c4__0) 
                                               << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [2U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][4U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__72__result, vlSelf->__Vtask_dpi_fmadd__72__fflags);
    vlSelf->__PVT__fma__DOT__result_fmadd[4U] = (IData)(vlSelf->__Vtask_dpi_fmadd__72__result);
    vlSelf->__PVT__fma__DOT__result_fmadd[5U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmadd__72__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h147cf4e8__0 = vlSelf->__Vtask_dpi_fmadd__72__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmadd = ((0xf83ffU 
                                              & vlSelf->__PVT__fma__DOT__fflags_fmadd) 
                                             | ((IData)(vlSelf->__Vlvbound_h147cf4e8__0) 
                                                << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [2U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][4U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__73__result, vlSelf->__Vtask_dpi_fmsub__73__fflags);
    vlSelf->__PVT__fma__DOT__result_fmsub[4U] = (IData)(vlSelf->__Vtask_dpi_fmsub__73__result);
    vlSelf->__PVT__fma__DOT__result_fmsub[5U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmsub__73__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h71951e49__0 = vlSelf->__Vtask_dpi_fmsub__73__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmsub = ((0xf83ffU 
                                              & vlSelf->__PVT__fma__DOT__fflags_fmsub) 
                                             | ((IData)(vlSelf->__Vlvbound_h71951e49__0) 
                                                << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][4U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__74__result, vlSelf->__Vtask_dpi_fnmadd__74__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmadd[4U] = (IData)(vlSelf->__Vtask_dpi_fnmadd__74__result);
    vlSelf->__PVT__fma__DOT__result_fnmadd[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmadd__74__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h01b131d5__0 = vlSelf->__Vtask_dpi_fnmadd__74__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fnmadd = ((0xf83ffU 
                                               & vlSelf->__PVT__fma__DOT__fflags_fnmadd) 
                                              | ((IData)(vlSelf->__Vlvbound_h01b131d5__0) 
                                                 << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][4U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__75__result, vlSelf->__Vtask_dpi_fnmsub__75__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmsub[4U] = (IData)(vlSelf->__Vtask_dpi_fnmsub__75__result);
    vlSelf->__PVT__fma__DOT__result_fnmsub[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmsub__75__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hacab2bfc__0 = vlSelf->__Vtask_dpi_fnmsub__75__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fnmsub = ((0xf83ffU 
                                               & vlSelf->__PVT__fma__DOT__fflags_fnmsub) 
                                              | ((IData)(vlSelf->__Vlvbound_hacab2bfc__0) 
                                                 << 0xaU));
    if (vlSelf->__PVT__is_fadd) {
        vlSelf->__PVT__fma__DOT__result_fma[2U] = vlSelf->__PVT__fma__DOT__result_fadd[4U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fadd 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_fsub) {
        vlSelf->__PVT__fma__DOT__result_fma[2U] = vlSelf->__PVT__fma__DOT__result_fsub[4U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fsub 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_fmul) {
        vlSelf->__PVT__fma__DOT__result_fma[2U] = vlSelf->__PVT__fma__DOT__result_fmul[4U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fmul 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_fmadd) {
        vlSelf->__PVT__fma__DOT__result_fma[2U] = vlSelf->__PVT__fma__DOT__result_fmadd[4U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fmadd 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_fmsub) {
        vlSelf->__PVT__fma__DOT__result_fma[2U] = vlSelf->__PVT__fma__DOT__result_fmsub[4U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fmsub 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_fnmadd) {
        vlSelf->__PVT__fma__DOT__result_fma[2U] = vlSelf->__PVT__fma__DOT__result_fnmadd[4U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fnmadd 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_fnmsub) {
        vlSelf->__PVT__fma__DOT__result_fma[2U] = vlSelf->__PVT__fma__DOT__result_fnmsub[4U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fnmsub 
                                            >> 0xaU));
    } else {
        vlSelf->__PVT__fma__DOT__result_fma[2U] = 0U;
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__fma__DOT__fflags_fma = ((0xf83ffU 
                                            & vlSelf->__PVT__fma__DOT__fflags_fma) 
                                           | ((IData)(vlSelf->__Vlvbound_h198ed5c2__0) 
                                              << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][6U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][6U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__69__result, vlSelf->__Vtask_dpi_fadd__69__fflags);
    vlSelf->__PVT__fma__DOT__result_fadd[6U] = (IData)(vlSelf->__Vtask_dpi_fadd__69__result);
    vlSelf->__PVT__fma__DOT__result_fadd[7U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fadd__69__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h41c8a5b5__0 = vlSelf->__Vtask_dpi_fadd__69__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fadd = ((0x7fffU 
                                             & vlSelf->__PVT__fma__DOT__fflags_fadd) 
                                            | ((IData)(vlSelf->__Vlvbound_h41c8a5b5__0) 
                                               << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][6U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][6U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__70__result, vlSelf->__Vtask_dpi_fsub__70__fflags);
    vlSelf->__PVT__fma__DOT__result_fsub[6U] = (IData)(vlSelf->__Vtask_dpi_fsub__70__result);
    vlSelf->__PVT__fma__DOT__result_fsub[7U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fsub__70__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hc3f8bfe1__0 = vlSelf->__Vtask_dpi_fsub__70__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fsub = ((0x7fffU 
                                             & vlSelf->__PVT__fma__DOT__fflags_fsub) 
                                            | ((IData)(vlSelf->__Vlvbound_hc3f8bfe1__0) 
                                               << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][6U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][6U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__71__result, vlSelf->__Vtask_dpi_fmul__71__fflags);
    vlSelf->__PVT__fma__DOT__result_fmul[6U] = (IData)(vlSelf->__Vtask_dpi_fmul__71__result);
    vlSelf->__PVT__fma__DOT__result_fmul[7U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fmul__71__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h49eb26c4__0 = vlSelf->__Vtask_dpi_fmul__71__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmul = ((0x7fffU 
                                             & vlSelf->__PVT__fma__DOT__fflags_fmul) 
                                            | ((IData)(vlSelf->__Vlvbound_h49eb26c4__0) 
                                               << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [2U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][6U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__72__result, vlSelf->__Vtask_dpi_fmadd__72__fflags);
    vlSelf->__PVT__fma__DOT__result_fmadd[6U] = (IData)(vlSelf->__Vtask_dpi_fmadd__72__result);
    vlSelf->__PVT__fma__DOT__result_fmadd[7U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmadd__72__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h147cf4e8__0 = vlSelf->__Vtask_dpi_fmadd__72__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmadd = ((0x7fffU 
                                              & vlSelf->__PVT__fma__DOT__fflags_fmadd) 
                                             | ((IData)(vlSelf->__Vlvbound_h147cf4e8__0) 
                                                << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [2U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][6U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__73__result, vlSelf->__Vtask_dpi_fmsub__73__fflags);
    vlSelf->__PVT__fma__DOT__result_fmsub[6U] = (IData)(vlSelf->__Vtask_dpi_fmsub__73__result);
    vlSelf->__PVT__fma__DOT__result_fmsub[7U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmsub__73__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h71951e49__0 = vlSelf->__Vtask_dpi_fmsub__73__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmsub = ((0x7fffU 
                                              & vlSelf->__PVT__fma__DOT__fflags_fmsub) 
                                             | ((IData)(vlSelf->__Vlvbound_h71951e49__0) 
                                                << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][6U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__74__result, vlSelf->__Vtask_dpi_fnmadd__74__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmadd[6U] = (IData)(vlSelf->__Vtask_dpi_fnmadd__74__result);
    vlSelf->__PVT__fma__DOT__result_fnmadd[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmadd__74__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h01b131d5__0 = vlSelf->__Vtask_dpi_fnmadd__74__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fnmadd = ((0x7fffU 
                                               & vlSelf->__PVT__fma__DOT__fflags_fnmadd) 
                                              | ((IData)(vlSelf->__Vlvbound_h01b131d5__0) 
                                                 << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][6U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__75__result, vlSelf->__Vtask_dpi_fnmsub__75__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmsub[6U] = (IData)(vlSelf->__Vtask_dpi_fnmsub__75__result);
    vlSelf->__PVT__fma__DOT__result_fnmsub[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmsub__75__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hacab2bfc__0 = vlSelf->__Vtask_dpi_fnmsub__75__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fnmsub = ((0x7fffU 
                                               & vlSelf->__PVT__fma__DOT__fflags_fnmsub) 
                                              | ((IData)(vlSelf->__Vlvbound_hacab2bfc__0) 
                                                 << 0xfU));
    if (vlSelf->__PVT__is_fadd) {
        vlSelf->__PVT__fma__DOT__result_fma[3U] = vlSelf->__PVT__fma__DOT__result_fadd[6U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fadd 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_fsub) {
        vlSelf->__PVT__fma__DOT__result_fma[3U] = vlSelf->__PVT__fma__DOT__result_fsub[6U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fsub 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_fmul) {
        vlSelf->__PVT__fma__DOT__result_fma[3U] = vlSelf->__PVT__fma__DOT__result_fmul[6U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fmul 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_fmadd) {
        vlSelf->__PVT__fma__DOT__result_fma[3U] = vlSelf->__PVT__fma__DOT__result_fmadd[6U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fmadd 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_fmsub) {
        vlSelf->__PVT__fma__DOT__result_fma[3U] = vlSelf->__PVT__fma__DOT__result_fmsub[6U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fmsub 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_fnmadd) {
        vlSelf->__PVT__fma__DOT__result_fma[3U] = vlSelf->__PVT__fma__DOT__result_fnmadd[6U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fnmadd 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_fnmsub) {
        vlSelf->__PVT__fma__DOT__result_fma[3U] = vlSelf->__PVT__fma__DOT__result_fnmsub[6U];
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 
                                           (vlSelf->__PVT__fma__DOT__fflags_fnmsub 
                                            >> 0xfU));
    } else {
        vlSelf->__PVT__fma__DOT__result_fma[3U] = 0U;
        vlSelf->__Vlvbound_h198ed5c2__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__fma__DOT__fflags_fma = ((0x7fffU 
                                            & vlSelf->__PVT__fma__DOT__fflags_fma) 
                                           | ((IData)(vlSelf->__Vlvbound_h198ed5c2__0) 
                                              << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), vlSelf->__Vtask_dpi_fclss__83__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[0U] = (IData)(vlSelf->__Vtask_dpi_fclss__83__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fclss__83__result 
                                                          >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][0U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][0U]))), vlSelf->__Vtask_dpi_fle__84__result, vlSelf->__Vtask_dpi_fle__84__fflags);
    vlSelf->__PVT__fncp__DOT__result_fle[0U] = (IData)(vlSelf->__Vtask_dpi_fle__84__result);
    vlSelf->__PVT__fncp__DOT__result_fle[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fle__84__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hc8074bd5__0 = vlSelf->__Vtask_dpi_fle__84__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fle = ((0xfffe0U 
                                             & vlSelf->__PVT__fncp__DOT__fflags_fle) 
                                            | (IData)(vlSelf->__Vlvbound_hc8074bd5__0));
    VVortex___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][0U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][0U]))), vlSelf->__Vtask_dpi_flt__85__result, vlSelf->__Vtask_dpi_flt__85__fflags);
    vlSelf->__PVT__fncp__DOT__result_flt[0U] = (IData)(vlSelf->__Vtask_dpi_flt__85__result);
    vlSelf->__PVT__fncp__DOT__result_flt[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_flt__85__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h876b3e60__0 = vlSelf->__Vtask_dpi_flt__85__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_flt = ((0xfffe0U 
                                             & vlSelf->__PVT__fncp__DOT__fflags_flt) 
                                            | (IData)(vlSelf->__Vlvbound_h876b3e60__0));
    VVortex___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][0U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][0U]))), vlSelf->__Vtask_dpi_feq__86__result, vlSelf->__Vtask_dpi_feq__86__fflags);
    vlSelf->__PVT__fncp__DOT__result_feq[0U] = (IData)(vlSelf->__Vtask_dpi_feq__86__result);
    vlSelf->__PVT__fncp__DOT__result_feq[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_feq__86__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hf8131c8b__0 = vlSelf->__Vtask_dpi_feq__86__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_feq = ((0xfffe0U 
                                             & vlSelf->__PVT__fncp__DOT__fflags_feq) 
                                            | (IData)(vlSelf->__Vlvbound_hf8131c8b__0));
    VVortex___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][0U]))), vlSelf->__Vtask_dpi_fmin__87__result, vlSelf->__Vtask_dpi_fmin__87__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmin[0U] = (IData)(vlSelf->__Vtask_dpi_fmin__87__result);
    vlSelf->__PVT__fncp__DOT__result_fmin[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmin__87__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h63cd8b65__0 = vlSelf->__Vtask_dpi_fmin__87__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fmin = ((0xfffe0U 
                                              & vlSelf->__PVT__fncp__DOT__fflags_fmin) 
                                             | (IData)(vlSelf->__Vlvbound_h63cd8b65__0));
    VVortex___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][0U]))), vlSelf->__Vtask_dpi_fmax__88__result, vlSelf->__Vtask_dpi_fmax__88__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmax[0U] = (IData)(vlSelf->__Vtask_dpi_fmax__88__result);
    vlSelf->__PVT__fncp__DOT__result_fmax[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmax__88__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h82db57c2__0 = vlSelf->__Vtask_dpi_fmax__88__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fmax = ((0xfffe0U 
                                              & vlSelf->__PVT__fncp__DOT__fflags_fmax) 
                                             | (IData)(vlSelf->__Vlvbound_h82db57c2__0));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fsgnj__89__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[0U] = (IData)(vlSelf->__Vtask_dpi_fsgnj__89__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fsgnj__89__result 
                                                          >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fsgnjn__90__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[0U] = (IData)(vlSelf->__Vtask_dpi_fsgnjn__90__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjn__90__result 
                                                           >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fsgnjx__91__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[0U] = (IData)(vlSelf->__Vtask_dpi_fsgnjx__91__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjx__91__result 
                                                           >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), vlSelf->__Vtask_dpi_fclss__83__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[2U] = (IData)(vlSelf->__Vtask_dpi_fclss__83__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fclss__83__result 
                                                          >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][2U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][2U]))), vlSelf->__Vtask_dpi_fle__84__result, vlSelf->__Vtask_dpi_fle__84__fflags);
    vlSelf->__PVT__fncp__DOT__result_fle[2U] = (IData)(vlSelf->__Vtask_dpi_fle__84__result);
    vlSelf->__PVT__fncp__DOT__result_fle[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fle__84__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hc8074bd5__0 = vlSelf->__Vtask_dpi_fle__84__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fle = ((0xffc1fU 
                                             & vlSelf->__PVT__fncp__DOT__fflags_fle) 
                                            | ((IData)(vlSelf->__Vlvbound_hc8074bd5__0) 
                                               << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][2U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][2U]))), vlSelf->__Vtask_dpi_flt__85__result, vlSelf->__Vtask_dpi_flt__85__fflags);
    vlSelf->__PVT__fncp__DOT__result_flt[2U] = (IData)(vlSelf->__Vtask_dpi_flt__85__result);
    vlSelf->__PVT__fncp__DOT__result_flt[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_flt__85__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h876b3e60__0 = vlSelf->__Vtask_dpi_flt__85__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_flt = ((0xffc1fU 
                                             & vlSelf->__PVT__fncp__DOT__fflags_flt) 
                                            | ((IData)(vlSelf->__Vlvbound_h876b3e60__0) 
                                               << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][2U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][2U]))), vlSelf->__Vtask_dpi_feq__86__result, vlSelf->__Vtask_dpi_feq__86__fflags);
    vlSelf->__PVT__fncp__DOT__result_feq[2U] = (IData)(vlSelf->__Vtask_dpi_feq__86__result);
    vlSelf->__PVT__fncp__DOT__result_feq[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_feq__86__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hf8131c8b__0 = vlSelf->__Vtask_dpi_feq__86__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_feq = ((0xffc1fU 
                                             & vlSelf->__PVT__fncp__DOT__fflags_feq) 
                                            | ((IData)(vlSelf->__Vlvbound_hf8131c8b__0) 
                                               << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][2U]))), vlSelf->__Vtask_dpi_fmin__87__result, vlSelf->__Vtask_dpi_fmin__87__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmin[2U] = (IData)(vlSelf->__Vtask_dpi_fmin__87__result);
    vlSelf->__PVT__fncp__DOT__result_fmin[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmin__87__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h63cd8b65__0 = vlSelf->__Vtask_dpi_fmin__87__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fmin = ((0xffc1fU 
                                              & vlSelf->__PVT__fncp__DOT__fflags_fmin) 
                                             | ((IData)(vlSelf->__Vlvbound_h63cd8b65__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][2U]))), vlSelf->__Vtask_dpi_fmax__88__result, vlSelf->__Vtask_dpi_fmax__88__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmax[2U] = (IData)(vlSelf->__Vtask_dpi_fmax__88__result);
    vlSelf->__PVT__fncp__DOT__result_fmax[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmax__88__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h82db57c2__0 = vlSelf->__Vtask_dpi_fmax__88__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fmax = ((0xffc1fU 
                                              & vlSelf->__PVT__fncp__DOT__fflags_fmax) 
                                             | ((IData)(vlSelf->__Vlvbound_h82db57c2__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fsgnj__89__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[2U] = (IData)(vlSelf->__Vtask_dpi_fsgnj__89__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fsgnj__89__result 
                                                          >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fsgnjn__90__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[2U] = (IData)(vlSelf->__Vtask_dpi_fsgnjn__90__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjn__90__result 
                                                           >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fsgnjx__91__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[2U] = (IData)(vlSelf->__Vtask_dpi_fsgnjx__91__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjx__91__result 
                                                           >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), vlSelf->__Vtask_dpi_fclss__83__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[4U] = (IData)(vlSelf->__Vtask_dpi_fclss__83__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fclss__83__result 
                                                          >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][5U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][4U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][5U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][4U]))), vlSelf->__Vtask_dpi_fle__84__result, vlSelf->__Vtask_dpi_fle__84__fflags);
    vlSelf->__PVT__fncp__DOT__result_fle[4U] = (IData)(vlSelf->__Vtask_dpi_fle__84__result);
    vlSelf->__PVT__fncp__DOT__result_fle[5U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fle__84__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hc8074bd5__0 = vlSelf->__Vtask_dpi_fle__84__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fle = ((0xf83ffU 
                                             & vlSelf->__PVT__fncp__DOT__fflags_fle) 
                                            | ((IData)(vlSelf->__Vlvbound_hc8074bd5__0) 
                                               << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][5U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][4U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][5U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][4U]))), vlSelf->__Vtask_dpi_flt__85__result, vlSelf->__Vtask_dpi_flt__85__fflags);
    vlSelf->__PVT__fncp__DOT__result_flt[4U] = (IData)(vlSelf->__Vtask_dpi_flt__85__result);
    vlSelf->__PVT__fncp__DOT__result_flt[5U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_flt__85__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h876b3e60__0 = vlSelf->__Vtask_dpi_flt__85__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_flt = ((0xf83ffU 
                                             & vlSelf->__PVT__fncp__DOT__fflags_flt) 
                                            | ((IData)(vlSelf->__Vlvbound_h876b3e60__0) 
                                               << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][5U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][4U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][5U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][4U]))), vlSelf->__Vtask_dpi_feq__86__result, vlSelf->__Vtask_dpi_feq__86__fflags);
    vlSelf->__PVT__fncp__DOT__result_feq[4U] = (IData)(vlSelf->__Vtask_dpi_feq__86__result);
    vlSelf->__PVT__fncp__DOT__result_feq[5U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_feq__86__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hf8131c8b__0 = vlSelf->__Vtask_dpi_feq__86__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_feq = ((0xf83ffU 
                                             & vlSelf->__PVT__fncp__DOT__fflags_feq) 
                                            | ((IData)(vlSelf->__Vlvbound_hf8131c8b__0) 
                                               << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][4U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][4U]))), vlSelf->__Vtask_dpi_fmin__87__result, vlSelf->__Vtask_dpi_fmin__87__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmin[4U] = (IData)(vlSelf->__Vtask_dpi_fmin__87__result);
    vlSelf->__PVT__fncp__DOT__result_fmin[5U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmin__87__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h63cd8b65__0 = vlSelf->__Vtask_dpi_fmin__87__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fmin = ((0xf83ffU 
                                              & vlSelf->__PVT__fncp__DOT__fflags_fmin) 
                                             | ((IData)(vlSelf->__Vlvbound_h63cd8b65__0) 
                                                << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][4U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][4U]))), vlSelf->__Vtask_dpi_fmax__88__result, vlSelf->__Vtask_dpi_fmax__88__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmax[4U] = (IData)(vlSelf->__Vtask_dpi_fmax__88__result);
    vlSelf->__PVT__fncp__DOT__result_fmax[5U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmax__88__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h82db57c2__0 = vlSelf->__Vtask_dpi_fmax__88__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fmax = ((0xf83ffU 
                                              & vlSelf->__PVT__fncp__DOT__fflags_fmax) 
                                             | ((IData)(vlSelf->__Vlvbound_h82db57c2__0) 
                                                << 0xaU));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_fsgnj__89__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[4U] = (IData)(vlSelf->__Vtask_dpi_fsgnj__89__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fsgnj__89__result 
                                                          >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_fsgnjn__90__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[4U] = (IData)(vlSelf->__Vtask_dpi_fsgnjn__90__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjn__90__result 
                                                           >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_fsgnjx__91__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[4U] = (IData)(vlSelf->__Vtask_dpi_fsgnjx__91__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjx__91__result 
                                                           >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), vlSelf->__Vtask_dpi_fclss__83__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[6U] = (IData)(vlSelf->__Vtask_dpi_fclss__83__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fclss__83__result 
                                                          >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][7U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][6U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][7U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][6U]))), vlSelf->__Vtask_dpi_fle__84__result, vlSelf->__Vtask_dpi_fle__84__fflags);
    vlSelf->__PVT__fncp__DOT__result_fle[6U] = (IData)(vlSelf->__Vtask_dpi_fle__84__result);
    vlSelf->__PVT__fncp__DOT__result_fle[7U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fle__84__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hc8074bd5__0 = vlSelf->__Vtask_dpi_fle__84__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fle = ((0x7fffU 
                                             & vlSelf->__PVT__fncp__DOT__fflags_fle) 
                                            | ((IData)(vlSelf->__Vlvbound_hc8074bd5__0) 
                                               << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][7U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][6U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][7U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][6U]))), vlSelf->__Vtask_dpi_flt__85__result, vlSelf->__Vtask_dpi_flt__85__fflags);
    vlSelf->__PVT__fncp__DOT__result_flt[6U] = (IData)(vlSelf->__Vtask_dpi_flt__85__result);
    vlSelf->__PVT__fncp__DOT__result_flt[7U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_flt__85__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h876b3e60__0 = vlSelf->__Vtask_dpi_flt__85__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_flt = ((0x7fffU 
                                             & vlSelf->__PVT__fncp__DOT__fflags_flt) 
                                            | ((IData)(vlSelf->__Vlvbound_h876b3e60__0) 
                                               << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][7U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][6U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][7U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][6U]))), vlSelf->__Vtask_dpi_feq__86__result, vlSelf->__Vtask_dpi_feq__86__fflags);
    vlSelf->__PVT__fncp__DOT__result_feq[6U] = (IData)(vlSelf->__Vtask_dpi_feq__86__result);
    vlSelf->__PVT__fncp__DOT__result_feq[7U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_feq__86__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hf8131c8b__0 = vlSelf->__Vtask_dpi_feq__86__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_feq = ((0x7fffU 
                                             & vlSelf->__PVT__fncp__DOT__fflags_feq) 
                                            | ((IData)(vlSelf->__Vlvbound_hf8131c8b__0) 
                                               << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][6U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][6U]))), vlSelf->__Vtask_dpi_fmin__87__result, vlSelf->__Vtask_dpi_fmin__87__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmin[6U] = (IData)(vlSelf->__Vtask_dpi_fmin__87__result);
    vlSelf->__PVT__fncp__DOT__result_fmin[7U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmin__87__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h63cd8b65__0 = vlSelf->__Vtask_dpi_fmin__87__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fmin = ((0x7fffU 
                                              & vlSelf->__PVT__fncp__DOT__fflags_fmin) 
                                             | ((IData)(vlSelf->__Vlvbound_h63cd8b65__0) 
                                                << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][6U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][6U]))), vlSelf->__Vtask_dpi_fmax__88__result, vlSelf->__Vtask_dpi_fmax__88__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmax[6U] = (IData)(vlSelf->__Vtask_dpi_fmax__88__result);
    vlSelf->__PVT__fncp__DOT__result_fmax[7U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmax__88__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h82db57c2__0 = vlSelf->__Vtask_dpi_fmax__88__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fmax = ((0x7fffU 
                                              & vlSelf->__PVT__fncp__DOT__fflags_fmax) 
                                             | ((IData)(vlSelf->__Vlvbound_h82db57c2__0) 
                                                << 0xfU));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_fsgnj__89__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[6U] = (IData)(vlSelf->__Vtask_dpi_fsgnj__89__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fsgnj__89__result 
                                                          >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_fsgnjn__90__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[6U] = (IData)(vlSelf->__Vtask_dpi_fsgnjn__90__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjn__90__result 
                                                           >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_fsgnjx__91__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[6U] = (IData)(vlSelf->__Vtask_dpi_fsgnjx__91__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjx__91__result 
                                                           >> 0x20U));
    vlSelf->__PVT__fdiv__DOT__fdiv_fire = ((IData)(vlSelf->__PVT__fdiv__DOT__fdiv_valid) 
                                           & (IData)(vlSelf->__PVT__fdiv__DOT__fdiv_ready));
    vlSelf->__PVT__fsqrt__DOT__fsqrt_fire = ((IData)(vlSelf->__PVT__fsqrt__DOT__fsqrt_valid) 
                                             & (IData)(vlSelf->__PVT__fsqrt__DOT__fsqrt_ready));
    vlSelf->__PVT__per_core_ready_in = ((0xdU & (IData)(vlSelf->__PVT__per_core_ready_in)) 
                                        | (((IData)(vlSelf->__PVT__is_div)
                                             ? (IData)(vlSelf->__PVT__fdiv__DOT__fdiv_ready)
                                             : (IData)(vlSelf->__PVT__fsqrt__DOT__fsqrt_ready)) 
                                           << 1U));
    vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged = 0U;
    vlSelf->__PVT__fma__DOT_____05Ffflags_merged = 0U;
    if ((0x200000U & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU])) {
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fcvt__DOT__fflags_fcvt)));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fcvt__DOT__fflags_fcvt)));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fcvt__DOT__fflags_fcvt)));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fcvt__DOT__fflags_fcvt)));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                           | vlSelf->__PVT__fcvt__DOT__fflags_fcvt)));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fma__DOT__fflags_fma)));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fma__DOT__fflags_fma)));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fma__DOT__fflags_fma)));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fma__DOT__fflags_fma)));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                           | vlSelf->__PVT__fma__DOT__fflags_fma)));
    }
    vlSelf->__PVT__fncp__DOT__result_fncp[0U] = vlSelf->__Vxrand_hdbee654f__0[0U];
    vlSelf->__PVT__fncp__DOT__result_fncp[1U] = vlSelf->__Vxrand_hdbee654f__0[1U];
    vlSelf->__PVT__fncp__DOT__result_fncp[2U] = vlSelf->__Vxrand_hdbee654f__0[2U];
    vlSelf->__PVT__fncp__DOT__result_fncp[3U] = vlSelf->__Vxrand_hdbee654f__0[3U];
    vlSelf->__PVT__fncp__DOT__fflags_fncp = vlSelf->__Vxrand_h9763b5f5__0;
    if (((((((((0U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm)) 
               | (1U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) 
              | (2U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) 
             | (3U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) 
            | (4U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) 
           | (5U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) 
          | (6U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) 
         | (7U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm)))) {
        if ((0U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) {
            if (vlSelf->__PVT__is_fcmp) {
                vlSelf->__PVT__fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__fncp__DOT__result_fle[0U];
                vlSelf->__PVT__fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__fncp__DOT__result_fle[2U];
                vlSelf->__PVT__fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__fncp__DOT__result_fle[4U];
                vlSelf->__PVT__fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__fncp__DOT__result_fle[6U];
            } else {
                vlSelf->__PVT__fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__fncp__DOT__result_fsgnj[0U];
                vlSelf->__PVT__fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__fncp__DOT__result_fsgnj[2U];
                vlSelf->__PVT__fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__fncp__DOT__result_fsgnj[4U];
                vlSelf->__PVT__fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__fncp__DOT__result_fsgnj[6U];
            }
            vlSelf->__Vlvbound_h98d9d482__0 = (0x1fU 
                                               & vlSelf->__PVT__fncp__DOT__fflags_fle);
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0xfffe0U & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                 | (IData)(vlSelf->__Vlvbound_h98d9d482__0));
            vlSelf->__Vlvbound_h98d9d482__0 = (0x1fU 
                                               & (vlSelf->__PVT__fncp__DOT__fflags_fle 
                                                  >> 5U));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0xffc1fU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                 | ((IData)(vlSelf->__Vlvbound_h98d9d482__0) 
                    << 5U));
            vlSelf->__Vlvbound_h98d9d482__0 = (0x1fU 
                                               & (vlSelf->__PVT__fncp__DOT__fflags_fle 
                                                  >> 0xaU));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0xf83ffU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                 | ((IData)(vlSelf->__Vlvbound_h98d9d482__0) 
                    << 0xaU));
            vlSelf->__Vlvbound_h98d9d482__0 = (0x1fU 
                                               & (vlSelf->__PVT__fncp__DOT__fflags_fle 
                                                  >> 0xfU));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0x7fffU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                 | ((IData)(vlSelf->__Vlvbound_h98d9d482__0) 
                    << 0xfU));
        } else if ((1U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) {
            if (vlSelf->__PVT__is_fcmp) {
                vlSelf->__PVT__fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__fncp__DOT__result_flt[0U];
                vlSelf->__PVT__fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__fncp__DOT__result_flt[2U];
                vlSelf->__PVT__fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__fncp__DOT__result_flt[4U];
                vlSelf->__PVT__fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__fncp__DOT__result_flt[6U];
            } else {
                vlSelf->__PVT__fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__fncp__DOT__result_fsgnjn[0U];
                vlSelf->__PVT__fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__fncp__DOT__result_fsgnjn[2U];
                vlSelf->__PVT__fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__fncp__DOT__result_fsgnjn[4U];
                vlSelf->__PVT__fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__fncp__DOT__result_fsgnjn[6U];
            }
            vlSelf->__Vlvbound_h98d9d482__1 = (0x1fU 
                                               & vlSelf->__PVT__fncp__DOT__fflags_flt);
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0xfffe0U & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                 | (IData)(vlSelf->__Vlvbound_h98d9d482__1));
            vlSelf->__Vlvbound_h98d9d482__1 = (0x1fU 
                                               & (vlSelf->__PVT__fncp__DOT__fflags_flt 
                                                  >> 5U));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0xffc1fU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                 | ((IData)(vlSelf->__Vlvbound_h98d9d482__1) 
                    << 5U));
            vlSelf->__Vlvbound_h98d9d482__1 = (0x1fU 
                                               & (vlSelf->__PVT__fncp__DOT__fflags_flt 
                                                  >> 0xaU));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0xf83ffU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                 | ((IData)(vlSelf->__Vlvbound_h98d9d482__1) 
                    << 0xaU));
            vlSelf->__Vlvbound_h98d9d482__1 = (0x1fU 
                                               & (vlSelf->__PVT__fncp__DOT__fflags_flt 
                                                  >> 0xfU));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0x7fffU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                 | ((IData)(vlSelf->__Vlvbound_h98d9d482__1) 
                    << 0xfU));
        } else if ((2U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) {
            if (vlSelf->__PVT__is_fcmp) {
                vlSelf->__PVT__fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__fncp__DOT__result_feq[0U];
                vlSelf->__PVT__fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__fncp__DOT__result_feq[2U];
                vlSelf->__PVT__fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__fncp__DOT__result_feq[4U];
                vlSelf->__PVT__fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__fncp__DOT__result_feq[6U];
            } else {
                vlSelf->__PVT__fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__fncp__DOT__result_fsgnjx[0U];
                vlSelf->__PVT__fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__fncp__DOT__result_fsgnjx[2U];
                vlSelf->__PVT__fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__fncp__DOT__result_fsgnjx[4U];
                vlSelf->__PVT__fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__fncp__DOT__result_fsgnjx[6U];
            }
            vlSelf->__Vlvbound_h98d9d482__2 = (0x1fU 
                                               & vlSelf->__PVT__fncp__DOT__fflags_feq);
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0xfffe0U & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                 | (IData)(vlSelf->__Vlvbound_h98d9d482__2));
            vlSelf->__Vlvbound_h98d9d482__2 = (0x1fU 
                                               & (vlSelf->__PVT__fncp__DOT__fflags_feq 
                                                  >> 5U));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0xffc1fU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                 | ((IData)(vlSelf->__Vlvbound_h98d9d482__2) 
                    << 5U));
            vlSelf->__Vlvbound_h98d9d482__2 = (0x1fU 
                                               & (vlSelf->__PVT__fncp__DOT__fflags_feq 
                                                  >> 0xaU));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0xf83ffU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                 | ((IData)(vlSelf->__Vlvbound_h98d9d482__2) 
                    << 0xaU));
            vlSelf->__Vlvbound_h98d9d482__2 = (0x1fU 
                                               & (vlSelf->__PVT__fncp__DOT__fflags_feq 
                                                  >> 0xfU));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0x7fffU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                 | ((IData)(vlSelf->__Vlvbound_h98d9d482__2) 
                    << 0xfU));
        } else {
            if ((3U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) {
                vlSelf->__PVT__fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__fncp__DOT__result_fclss[0U];
                vlSelf->__PVT__fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__fncp__DOT__result_fclss[2U];
                vlSelf->__PVT__fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__fncp__DOT__result_fclss[4U];
                vlSelf->__PVT__fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__fncp__DOT__result_fclss[6U];
            } else if ((4U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) {
                vlSelf->__PVT__fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmvx[0U];
                vlSelf->__PVT__fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmvx[2U];
                vlSelf->__PVT__fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmvx[4U];
                vlSelf->__PVT__fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmvx[6U];
            } else if ((5U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) {
                vlSelf->__PVT__fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmvf[0U];
                vlSelf->__PVT__fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmvf[2U];
                vlSelf->__PVT__fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmvf[4U];
                vlSelf->__PVT__fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmvf[6U];
            } else if ((6U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) {
                vlSelf->__PVT__fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmin[0U];
                vlSelf->__PVT__fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmin[2U];
                vlSelf->__PVT__fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmin[4U];
                vlSelf->__PVT__fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmin[6U];
            } else {
                vlSelf->__PVT__fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmax[0U];
                vlSelf->__PVT__fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmax[2U];
                vlSelf->__PVT__fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmax[4U];
                vlSelf->__PVT__fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__fncp__DOT__result_fmax[6U];
            }
            if ((3U != (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) {
                if ((4U != (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) {
                    if ((5U != (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) {
                        if ((6U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) {
                            vlSelf->__Vlvbound_h98d9d482__3 
                                = (0x1fU & vlSelf->__PVT__fncp__DOT__fflags_fmin);
                            vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                = ((0xfffe0U & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                                   | (IData)(vlSelf->__Vlvbound_h98d9d482__3));
                            vlSelf->__Vlvbound_h98d9d482__3 
                                = (0x1fU & (vlSelf->__PVT__fncp__DOT__fflags_fmin 
                                            >> 5U));
                            vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                = ((0xffc1fU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                                   | ((IData)(vlSelf->__Vlvbound_h98d9d482__3) 
                                      << 5U));
                            vlSelf->__Vlvbound_h98d9d482__3 
                                = (0x1fU & (vlSelf->__PVT__fncp__DOT__fflags_fmin 
                                            >> 0xaU));
                            vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                = ((0xf83ffU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                                   | ((IData)(vlSelf->__Vlvbound_h98d9d482__3) 
                                      << 0xaU));
                            vlSelf->__Vlvbound_h98d9d482__3 
                                = (0x1fU & (vlSelf->__PVT__fncp__DOT__fflags_fmin 
                                            >> 0xfU));
                            vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                = ((0x7fffU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                                   | ((IData)(vlSelf->__Vlvbound_h98d9d482__3) 
                                      << 0xfU));
                        } else {
                            vlSelf->__Vlvbound_h98d9d482__4 
                                = (0x1fU & vlSelf->__PVT__fncp__DOT__fflags_fmax);
                            vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                = ((0xfffe0U & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                                   | (IData)(vlSelf->__Vlvbound_h98d9d482__4));
                            vlSelf->__Vlvbound_h98d9d482__4 
                                = (0x1fU & (vlSelf->__PVT__fncp__DOT__fflags_fmax 
                                            >> 5U));
                            vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                = ((0xffc1fU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                                   | ((IData)(vlSelf->__Vlvbound_h98d9d482__4) 
                                      << 5U));
                            vlSelf->__Vlvbound_h98d9d482__4 
                                = (0x1fU & (vlSelf->__PVT__fncp__DOT__fflags_fmax 
                                            >> 0xaU));
                            vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                = ((0xf83ffU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                                   | ((IData)(vlSelf->__Vlvbound_h98d9d482__4) 
                                      << 0xaU));
                            vlSelf->__Vlvbound_h98d9d482__4 
                                = (0x1fU & (vlSelf->__PVT__fncp__DOT__fflags_fmax 
                                            >> 0xfU));
                            vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                = ((0x7fffU & vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                                   | ((IData)(vlSelf->__Vlvbound_h98d9d482__4) 
                                      << 0xfU));
                        }
                    }
                }
            }
        }
    }
    if ((0x400000U & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU])) {
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                           >> 5U))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                                         >> 5U)))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                                         >> 5U)))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                                         >> 5U)))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                           | (0x7fffff0U & (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                                            >> 5U)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fma__DOT__fflags_fma 
                           >> 5U))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & (vlSelf->__PVT__fma__DOT__fflags_fma 
                                         >> 5U)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & (vlSelf->__PVT__fma__DOT__fflags_fma 
                                         >> 5U)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & (vlSelf->__PVT__fma__DOT__fflags_fma 
                                         >> 5U)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                           | (0x7fffff0U & (vlSelf->__PVT__fma__DOT__fflags_fma 
                                            >> 5U)))));
    }
    if ((0x800000U & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU])) {
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                           >> 0xaU))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                        | (0x3ffffeU & (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                                        >> 0xaU)))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                        | (0x3ffffcU & (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                                        >> 0xaU)))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                        | (0x3ffff8U & (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                                        >> 0xaU)))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                           | (0x3ffff0U & (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                                           >> 0xaU)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fma__DOT__fflags_fma 
                           >> 0xaU))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                        | (0x3ffffeU & (vlSelf->__PVT__fma__DOT__fflags_fma 
                                        >> 0xaU)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                        | (0x3ffffcU & (vlSelf->__PVT__fma__DOT__fflags_fma 
                                        >> 0xaU)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                        | (0x3ffff8U & (vlSelf->__PVT__fma__DOT__fflags_fma 
                                        >> 0xaU)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                           | (0x3ffff0U & (vlSelf->__PVT__fma__DOT__fflags_fma 
                                           >> 0xaU)))));
    }
    if ((0x1000000U & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU])) {
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                           >> 0xfU))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                        | (0x1fffeU & (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                                       >> 0xfU)))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                        | (0x1fffcU & (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                                       >> 0xfU)))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                        | (0x1fff8U & (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                                       >> 0xfU)))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelf->__PVT__fcvt__DOT__fflags_fcvt 
                                      >> 0x13U))) << 4U));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fma__DOT__fflags_fma 
                           >> 0xfU))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                        | (0x1fffeU & (vlSelf->__PVT__fma__DOT__fflags_fma 
                                       >> 0xfU)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                        | (0x1fffcU & (vlSelf->__PVT__fma__DOT__fflags_fma 
                                       >> 0xfU)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                        | (0x1fff8U & (vlSelf->__PVT__fma__DOT__fflags_fma 
                                       >> 0xfU)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelf->__PVT__fma__DOT__fflags_fma 
                                      >> 0x13U))) << 4U));
    }
    VVortex___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__fdiv__DOT__fdiv_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__76__result, vlSelf->__Vtask_dpi_fdiv__76__fflags);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[0U] = (IData)(vlSelf->__Vtask_dpi_fdiv__76__result);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fdiv__76__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h8d23a7ba__0 = vlSelf->__Vtask_dpi_fdiv__76__fflags;
    vlSelf->__PVT__fdiv__DOT__fflags_fdiv = ((0xfffe0U 
                                              & vlSelf->__PVT__fdiv__DOT__fflags_fdiv) 
                                             | (IData)(vlSelf->__Vlvbound_h8d23a7ba__0));
    vlSelf->__PVT__fdiv__DOT__result_fdiv_r[0U] = vlSelf->__PVT__fdiv__DOT__result_fdiv[0U];
    VVortex___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__fdiv__DOT__fdiv_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__76__result, vlSelf->__Vtask_dpi_fdiv__76__fflags);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[2U] = (IData)(vlSelf->__Vtask_dpi_fdiv__76__result);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fdiv__76__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h8d23a7ba__0 = vlSelf->__Vtask_dpi_fdiv__76__fflags;
    vlSelf->__PVT__fdiv__DOT__fflags_fdiv = ((0xffc1fU 
                                              & vlSelf->__PVT__fdiv__DOT__fflags_fdiv) 
                                             | ((IData)(vlSelf->__Vlvbound_h8d23a7ba__0) 
                                                << 5U));
    vlSelf->__PVT__fdiv__DOT__result_fdiv_r[1U] = vlSelf->__PVT__fdiv__DOT__result_fdiv[2U];
    VVortex___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__fdiv__DOT__fdiv_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][4U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][4U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__76__result, vlSelf->__Vtask_dpi_fdiv__76__fflags);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[4U] = (IData)(vlSelf->__Vtask_dpi_fdiv__76__result);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[5U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fdiv__76__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h8d23a7ba__0 = vlSelf->__Vtask_dpi_fdiv__76__fflags;
    vlSelf->__PVT__fdiv__DOT__fflags_fdiv = ((0xf83ffU 
                                              & vlSelf->__PVT__fdiv__DOT__fflags_fdiv) 
                                             | ((IData)(vlSelf->__Vlvbound_h8d23a7ba__0) 
                                                << 0xaU));
    vlSelf->__PVT__fdiv__DOT__result_fdiv_r[2U] = vlSelf->__PVT__fdiv__DOT__result_fdiv[4U];
    VVortex___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__fdiv__DOT__fdiv_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][6U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][6U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__76__result, vlSelf->__Vtask_dpi_fdiv__76__fflags);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[6U] = (IData)(vlSelf->__Vtask_dpi_fdiv__76__result);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[7U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fdiv__76__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h8d23a7ba__0 = vlSelf->__Vtask_dpi_fdiv__76__fflags;
    vlSelf->__PVT__fdiv__DOT__fflags_fdiv = ((0x7fffU 
                                              & vlSelf->__PVT__fdiv__DOT__fflags_fdiv) 
                                             | ((IData)(vlSelf->__Vlvbound_h8d23a7ba__0) 
                                                << 0xfU));
    vlSelf->__PVT__fdiv__DOT__result_fdiv_r[3U] = vlSelf->__PVT__fdiv__DOT__result_fdiv[6U];
    VVortex___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__fsqrt__DOT__fsqrt_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__77__result, vlSelf->__Vtask_dpi_fsqrt__77__fflags);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[0U] = (IData)(vlSelf->__Vtask_dpi_fsqrt__77__result);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsqrt__77__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h790a2257__0 = vlSelf->__Vtask_dpi_fsqrt__77__fflags;
    vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt = ((0xfffe0U 
                                                & vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt) 
                                               | (IData)(vlSelf->__Vlvbound_h790a2257__0));
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt_r[0U] = 
        vlSelf->__PVT__fsqrt__DOT__result_fsqrt[0U];
    VVortex___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__fsqrt__DOT__fsqrt_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__77__result, vlSelf->__Vtask_dpi_fsqrt__77__fflags);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[2U] = (IData)(vlSelf->__Vtask_dpi_fsqrt__77__result);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsqrt__77__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h790a2257__0 = vlSelf->__Vtask_dpi_fsqrt__77__fflags;
    vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt = ((0xffc1fU 
                                                & vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt) 
                                               | ((IData)(vlSelf->__Vlvbound_h790a2257__0) 
                                                  << 5U));
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt_r[1U] = 
        vlSelf->__PVT__fsqrt__DOT__result_fsqrt[2U];
    VVortex___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__fsqrt__DOT__fsqrt_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__77__result, vlSelf->__Vtask_dpi_fsqrt__77__fflags);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[4U] = (IData)(vlSelf->__Vtask_dpi_fsqrt__77__result);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsqrt__77__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h790a2257__0 = vlSelf->__Vtask_dpi_fsqrt__77__fflags;
    vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt = ((0xf83ffU 
                                                & vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt) 
                                               | ((IData)(vlSelf->__Vlvbound_h790a2257__0) 
                                                  << 0xaU));
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt_r[2U] = 
        vlSelf->__PVT__fsqrt__DOT__result_fsqrt[4U];
    VVortex___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__fsqrt__DOT__fsqrt_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__77__result, vlSelf->__Vtask_dpi_fsqrt__77__fflags);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[6U] = (IData)(vlSelf->__Vtask_dpi_fsqrt__77__result);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsqrt__77__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h790a2257__0 = vlSelf->__Vtask_dpi_fsqrt__77__fflags;
    vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt = ((0x7fffU 
                                                & vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt) 
                                               | ((IData)(vlSelf->__Vlvbound_h790a2257__0) 
                                                  << 0xfU));
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt_r[3U] = 
        vlSelf->__PVT__fsqrt__DOT__result_fsqrt[6U];
    vlSelf->__PVT__fncp__DOT_____05Ffflags_merged = 0U;
    if ((0x200000U & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU])) {
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fncp__DOT__fflags_fncp)));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fncp__DOT__fflags_fncp)));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fncp__DOT__fflags_fncp)));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fncp__DOT__fflags_fncp)));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                           | vlSelf->__PVT__fncp__DOT__fflags_fncp)));
    }
    if ((0x400000U & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU])) {
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                           >> 5U))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                         >> 5U)))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                         >> 5U)))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                         >> 5U)))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                           | (0x7fffff0U & (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                            >> 5U)))));
    }
    vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged = 0U;
    if ((0x200000U & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU])) {
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fdiv__DOT__fflags_fdiv)));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fdiv__DOT__fflags_fdiv)));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fdiv__DOT__fflags_fdiv)));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fdiv__DOT__fflags_fdiv)));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                           | vlSelf->__PVT__fdiv__DOT__fflags_fdiv)));
    }
    if ((0x400000U & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU])) {
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                           >> 5U))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                                         >> 5U)))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                                         >> 5U)))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                                         >> 5U)))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                           | (0x7fffff0U & (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                                            >> 5U)))));
    }
    if ((0x800000U & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU])) {
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                           >> 0xaU))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                        | (0x3ffffeU & (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                        >> 0xaU)))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                        | (0x3ffffcU & (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                        >> 0xaU)))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                        | (0x3ffff8U & (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                        >> 0xaU)))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                           | (0x3ffff0U & (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                           >> 0xaU)))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                           >> 0xaU))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                        | (0x3ffffeU & (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                                        >> 0xaU)))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                        | (0x3ffffcU & (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                                        >> 0xaU)))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                        | (0x3ffff8U & (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                                        >> 0xaU)))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                           | (0x3ffff0U & (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                                           >> 0xaU)))));
    }
    vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged = 0U;
    if ((0x200000U & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU])) {
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt)));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt)));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt)));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt)));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                           | vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt)));
    }
    if ((0x400000U & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU])) {
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                           >> 5U))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                                         >> 5U)))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                                         >> 5U)))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                                         >> 5U)))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                           | (0x7fffff0U & (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                                            >> 5U)))));
    }
    if ((0x800000U & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU])) {
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                           >> 0xaU))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x3ffffeU & (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                                        >> 0xaU)))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x3ffffcU & (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                                        >> 0xaU)))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x3ffff8U & (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                                        >> 0xaU)))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                           | (0x3ffff0U & (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                                           >> 0xaU)))));
    }
    if ((0x1000000U & vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__genblk4__BRA__3__KET____DOT__buf_out__data_in[0xeU])) {
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                           >> 0xfU))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                        | (0x1fffeU & (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                       >> 0xfU)))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                        | (0x1fffcU & (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                       >> 0xfU)))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                        | (0x1fff8U & (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                       >> 0xfU)))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelf->__PVT__fncp__DOT__fflags_fncp 
                                      >> 0x13U))) << 4U));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                           >> 0xfU))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                        | (0x1fffeU & (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                                       >> 0xfU)))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                        | (0x1fffcU & (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                                       >> 0xfU)))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                        | (0x1fff8U & (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                                       >> 0xfU)))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelf->__PVT__fdiv__DOT__fflags_fdiv 
                                      >> 0x13U))) << 4U));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                           >> 0xfU))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x1fffeU & (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                                       >> 0xfU)))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x1fffcU & (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                                       >> 0xfU)))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x1fff8U & (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                                       >> 0xfU)))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt 
                                      >> 0x13U))) << 4U));
    }
}
