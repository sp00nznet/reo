#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"

// Function: sub_00371B40
// Address: 0x371B40
// Overlay function - calls 0x1AF9C0 then other targets
// STUB: Returns 0 until full implementation available
void sub_00371B40_0x371b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    ctx->pc = 0x371b40u;
    SET_GPR_U32(ctx, 2, 0);
}
