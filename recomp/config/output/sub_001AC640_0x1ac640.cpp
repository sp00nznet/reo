#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AC640
// Address: 0x1ac640 (mid-function entry point within sub_001AC630)
// This is a secondary entry point that just does jr $ra (return immediately).
// Called via function pointer dispatch from the game loop.
void sub_001AC640_0x1ac640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    ctx->pc = getRegU32(ctx, 31);
}
