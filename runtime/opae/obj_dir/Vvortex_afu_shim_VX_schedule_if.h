// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvortex_afu_shim.h for the primary calling header

#ifndef VERILATED_VVORTEX_AFU_SHIM_VX_SCHEDULE_IF_H_
#define VERILATED_VVORTEX_AFU_SHIM_VX_SCHEDULE_IF_H_  // guard

#include "verilated.h"

class Vvortex_afu_shim__Syms;

class Vvortex_afu_shim_VX_schedule_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    QData/*38:0*/ __PVT__data;

    // INTERNAL VARIABLES
    Vvortex_afu_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vvortex_afu_shim_VX_schedule_if(Vvortex_afu_shim__Syms* symsp, const char* name);
    ~Vvortex_afu_shim_VX_schedule_if();
    VL_UNCOPYABLE(Vvortex_afu_shim_VX_schedule_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
