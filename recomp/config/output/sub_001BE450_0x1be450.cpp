#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BE450
// Address: 0x1be450 - 0x1be460
void sub_001BE450_0x1be450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1be450u;

    // 0x1be450: 0xa0302d
    ctx->pc = 0x1be450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be454: 0x3c050025
    ctx->pc = 0x1be454u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1be458: 0x8042a0c
    ctx->pc = 0x1BE458u;
    ctx->pc = 0x1BE45Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1200));
    ctx->pc = 0x10A830u;
    sub_0010A830_0x10a830(rdram, ctx, runtime); return;
    ctx->pc = 0x1BE460u;
}
