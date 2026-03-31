#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F340C
// Address: 0x1f340c - 0x1f343c
void sub_001F340C_0x1f340c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f340cu;

    // 0x1f340c: 0x27bdfff0
    ctx->pc = 0x1f340cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f3410: 0xffbe0000
    ctx->pc = 0x1f3410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x1f3414: 0x3a0f02d
    ctx->pc = 0x1f3414u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3418: 0x80182d
    ctx->pc = 0x1f3418u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f341c: 0x8c620020
    ctx->pc = 0x1f341cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f3420: 0x24420001
    ctx->pc = 0x1f3420u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f3424: 0xac620020
    ctx->pc = 0x1f3424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x1f3428: 0x3c0e82d
    ctx->pc = 0x1f3428u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f342c: 0xdfbe0000
    ctx->pc = 0x1f342cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3430: 0x27bd0010
    ctx->pc = 0x1f3430u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f3434: 0x3e00008
    ctx->pc = 0x1F3434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F343Cu;
}
