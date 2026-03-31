#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C5970
// Address: 0x1c5970 - 0x1c5980
void sub_001C5970_0x1c5970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c5970u;

    // 0x1c5970: 0x202d
    ctx->pc = 0x1c5970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5974: 0x806e1f8
    ctx->pc = 0x1C5974u;
    ctx->pc = 0x1C5978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B87E0u;
    sub_001B87E0_0x1b87e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C597Cu;
    // 0x1c597c: 0x0
    ctx->pc = 0x1c597cu;
    // NOP
}
