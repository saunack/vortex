// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVortex.h for the primary calling header

#ifndef VERILATED_VVORTEX_VX_MEM_BUS_IF__D40_T9_H_
#define VERILATED_VVORTEX_VX_MEM_BUS_IF__D40_T9_H_  // guard

#include "verilated.h"

class VVortex__Syms;

class VVortex_VX_mem_bus_if__D40_T9 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VlWide<20>/*611:0*/ __PVT__req_data;
    VlWide<17>/*520:0*/ __PVT__rsp_data;

    // INTERNAL VARIABLES
    VVortex__Syms* const vlSymsp;

    // CONSTRUCTORS
    VVortex_VX_mem_bus_if__D40_T9(VVortex__Syms* symsp, const char* name);
    ~VVortex_VX_mem_bus_if__D40_T9();
    VL_UNCOPYABLE(VVortex_VX_mem_bus_if__D40_T9);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
