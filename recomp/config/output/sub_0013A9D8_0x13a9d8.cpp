#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013A9D8
// Address: 0x13a9d8 - 0x13aa00
void sub_0013A9D8_0x13a9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13a9d8u;

    // 0x13a9d8: 0x27bdfff0
    ctx->pc = 0x13a9d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13a9dc: 0x3c040022
    ctx->pc = 0x13a9dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)34 << 16));
    // 0x13a9e0: 0xffbf0000
    ctx->pc = 0x13a9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13a9e4: 0x282d
    ctx->pc = 0x13a9e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a9e8: 0x2484d8d0
    ctx->pc = 0x13a9e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957264));
    // 0x13a9ec: 0x24060010
    ctx->pc = 0x13a9ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x13a9f0: 0xdfbf0000
    ctx->pc = 0x13a9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a9f4: 0x8041f1a
    ctx->pc = 0x13A9F4u;
    ctx->pc = 0x13A9F8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x13A9FCu;
    // 0x13a9fc: 0x0
    ctx->pc = 0x13a9fcu;
    // NOP
}
