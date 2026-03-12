#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"

// Function: sub_003719E0
// Address: 0x3719E0
// Jump trampoline: j 0x1CC4B0 (mid-function entry in sub_001CC260)
// STUB: Target is a mid-function entry point not in dispatch table
void sub_003719E0_0x3719e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    ctx->pc = 0x3719e0u;
    SET_GPR_U32(ctx, 2, 0);
}
