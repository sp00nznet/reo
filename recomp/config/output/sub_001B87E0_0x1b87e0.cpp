#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B87E0
// Address: 0x1b87e0 - 0x1b8850
void sub_001B87E0_0x1b87e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b87e0u;

    // 0x1b87e0: 0x80102d
    ctx->pc = 0x1b87e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b87e4: 0x302d
    ctx->pc = 0x1b87e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b87e8: 0xa0202d
    ctx->pc = 0x1b87e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b87ec: 0x806e4ec
    ctx->pc = 0x1B87ECu;
    ctx->pc = 0x1B87F0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B93B0u;
    sub_001B93B0_0x1b93b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1B87F4u;
    // 0x1b87f4: 0x0
    ctx->pc = 0x1b87f4u;
    // NOP
    // 0x1b87f8: 0x0
    ctx->pc = 0x1b87f8u;
    // NOP
    // 0x1b87fc: 0x0
    ctx->pc = 0x1b87fcu;
    // NOP
    // 0x1b8800: 0x202d
    ctx->pc = 0x1b8800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8804: 0x282d
    ctx->pc = 0x1b8804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8808: 0x806e4ec
    ctx->pc = 0x1B8808u;
    ctx->pc = 0x1B880Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B93B0u;
    sub_001B93B0_0x1b93b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1B8810u;
    // 0x1b8810: 0x202d
    ctx->pc = 0x1b8810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8814: 0x24050001
    ctx->pc = 0x1b8814u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8818: 0x806e4ec
    ctx->pc = 0x1B8818u;
    ctx->pc = 0x1B881Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B93B0u;
    sub_001B93B0_0x1b93b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1B8820u;
    // 0x1b8820: 0x202d
    ctx->pc = 0x1b8820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8824: 0x24050002
    ctx->pc = 0x1b8824u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b8828: 0x806e4ec
    ctx->pc = 0x1B8828u;
    ctx->pc = 0x1B882Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B93B0u;
    sub_001B93B0_0x1b93b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1B8830u;
    // 0x1b8830: 0x202d
    ctx->pc = 0x1b8830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8834: 0x24050003
    ctx->pc = 0x1b8834u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b8838: 0x806e4ec
    ctx->pc = 0x1B8838u;
    ctx->pc = 0x1B883Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B93B0u;
    sub_001B93B0_0x1b93b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1B8840u;
    // 0x1b8840: 0x202d
    ctx->pc = 0x1b8840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8844: 0x24050004
    ctx->pc = 0x1b8844u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b8848: 0x806e4ec
    ctx->pc = 0x1B8848u;
    ctx->pc = 0x1B884Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B93B0u;
    sub_001B93B0_0x1b93b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1B8850u;
}
