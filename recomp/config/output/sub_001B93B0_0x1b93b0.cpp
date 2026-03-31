#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B93B0
// Address: 0x1b93b0 - 0x1b93d0
void sub_001B93B0_0x1b93b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b93b0u;

    // 0x1b93b0: 0x2407ffff
    ctx->pc = 0x1b93b0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b93b4: 0x502d
    ctx->pc = 0x1b93b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b93b8: 0xe0402d
    ctx->pc = 0x1b93b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b93bc: 0x806b1fc
    ctx->pc = 0x1B93BCu;
    ctx->pc = 0x1B93C0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AC7F0u;
    sub_001AC7F0_0x1ac7f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1B93C4u;
    // 0x1b93c4: 0x0
    ctx->pc = 0x1b93c4u;
    // NOP
    // 0x1b93c8: 0x0
    ctx->pc = 0x1b93c8u;
    // NOP
    // 0x1b93cc: 0x0
    ctx->pc = 0x1b93ccu;
    // NOP
}
