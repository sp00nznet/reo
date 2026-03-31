#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AA4A0
// Address: 0x1aa4a0 - 0x1aa4c0
void sub_001AA4A0_0x1aa4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1aa4a0u;

    // 0x1aa4a0: 0x80102d
    ctx->pc = 0x1aa4a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa4a4: 0x3c01002b
    ctx->pc = 0x1aa4a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa4a8: 0x8c241698
    ctx->pc = 0x1aa4a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 5784)));
    // 0x1aa4ac: 0xa0302d
    ctx->pc = 0x1aa4acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa4b0: 0x40282d
    ctx->pc = 0x1aa4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa4b4: 0x806a7c8
    ctx->pc = 0x1AA4B4u;
    ctx->pc = 0x1AA4B8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A9F20u;
    sub_001A9F20_0x1a9f20(rdram, ctx, runtime); return;
    ctx->pc = 0x1AA4BCu;
    // 0x1aa4bc: 0x0
    ctx->pc = 0x1aa4bcu;
    // NOP
}
