#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1417c0
// Address: 0x1417c0 - 0x141800
void entry_1417c0_0x141800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1417c0u;

    // 0x1417c0: 0x27bdfff0
    ctx->pc = 0x1417c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1417c4: 0x24040005
    ctx->pc = 0x1417c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1417c8: 0xffbf0000
    ctx->pc = 0x1417c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1417cc: 0xdfbf0000
    ctx->pc = 0x1417ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1417d0: 0x8050590
    ctx->pc = 0x1417D0u;
    ctx->pc = 0x1417D4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141640u;
    entry_141640_0x1416d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1417D8u;
    // 0x1417d8: 0x27bdfff0
    ctx->pc = 0x1417d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1417dc: 0x240403e8
    ctx->pc = 0x1417dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1417e0: 0xffbf0000
    ctx->pc = 0x1417e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1417e4: 0xdfbf0000
    ctx->pc = 0x1417e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1417e8: 0x8050590
    ctx->pc = 0x1417E8u;
    ctx->pc = 0x1417ECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141640u;
    entry_141640_0x1416d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1417F0u;
    // 0x1417f0: 0x3c030023
    ctx->pc = 0x1417f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1417f4: 0x2463a5f4
    ctx->pc = 0x1417f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294944244));
    // 0x1417f8: 0x3e00008
    ctx->pc = 0x1417F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1417FCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141800u;
}
