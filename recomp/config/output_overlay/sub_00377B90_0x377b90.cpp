#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"

// Function: sub_00377B90
// Address: 0x377B90
// Overlay function with prologue: addiu sp,sp,-16
// Checks byte at 0x324405, calls 0x19C9B0 if nonzero
// Stub: return immediately (rendering-related, needs full implementation later)
void sub_00377B90_0x377b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    ctx->pc = 0x377b90u;
    SET_GPR_U32(ctx, 2, 0); // return 0
}
