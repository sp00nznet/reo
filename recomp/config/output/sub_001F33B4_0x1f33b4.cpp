#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F33B4
// Address: 0x1f33b4 - 0x1f340c
void sub_001F33B4_0x1f33b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f33b4u;

    // 0x1f33b4: 0x27bdfff0
    ctx->pc = 0x1f33b4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f33b8: 0xffbe0000
    ctx->pc = 0x1f33b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x1f33bc: 0x3a0f02d
    ctx->pc = 0x1f33bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f33c0: 0x80102d
    ctx->pc = 0x1f33c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f33c4: 0x8c420020
    ctx->pc = 0x1f33c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1f33c8: 0x3c0e82d
    ctx->pc = 0x1f33c8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f33cc: 0xdfbe0000
    ctx->pc = 0x1f33ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f33d0: 0x27bd0010
    ctx->pc = 0x1f33d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f33d4: 0x3e00008
    ctx->pc = 0x1F33D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F33DCu;
    // 0x1f33dc: 0x27bdfff0
    ctx->pc = 0x1f33dcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f33e0: 0xffbe0000
    ctx->pc = 0x1f33e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x1f33e4: 0x3a0f02d
    ctx->pc = 0x1f33e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f33e8: 0x80102d
    ctx->pc = 0x1f33e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f33ec: 0xa0182d
    ctx->pc = 0x1f33ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f33f0: 0xac430020
    ctx->pc = 0x1f33f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x1f33f4: 0x8c420020
    ctx->pc = 0x1f33f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1f33f8: 0x3c0e82d
    ctx->pc = 0x1f33f8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f33fc: 0xdfbe0000
    ctx->pc = 0x1f33fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3400: 0x27bd0010
    ctx->pc = 0x1f3400u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f3404: 0x3e00008
    ctx->pc = 0x1F3404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F340Cu;
}
