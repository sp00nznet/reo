#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"

// Function: sub_0037E920
// Address: 0x37e920 - 0x38cd24
// STUB: Original was 2.3M lines (58KB of MIPS as single function).
// The analyzer couldn't split this overlay block. Needs manual analysis.
void sub_0037E920_0x37e920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    ctx->pc = 0x37e920u;
    // Return a0 (common pattern for processing functions)
    SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
}
