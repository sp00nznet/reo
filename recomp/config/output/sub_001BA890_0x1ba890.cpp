#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BA890
// Address: 0x1ba890 - 0x1ba8a0
void sub_001BA890_0x1ba890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ba890u;

    // 0x1ba890: 0x806ea10
    ctx->pc = 0x1BA890u;
    ctx->pc = 0x1BA894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1BA840u;
    sub_001BA840_0x1ba840(rdram, ctx, runtime); return;
    ctx->pc = 0x1BA898u;
    // 0x1ba898: 0x0
    ctx->pc = 0x1ba898u;
    // NOP
    // 0x1ba89c: 0x0
    ctx->pc = 0x1ba89cu;
    // NOP
}
