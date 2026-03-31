#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012C978
// Address: 0x12c978 - 0x12c9a0
void sub_0012C978_0x12c978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12c978u;

    // 0x12c978: 0x27bdfff0
    ctx->pc = 0x12c978u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c97c: 0x3c040021
    ctx->pc = 0x12c97cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)33 << 16));
    // 0x12c980: 0xffbf0000
    ctx->pc = 0x12c980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c984: 0x282d
    ctx->pc = 0x12c984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c988: 0x24847d88
    ctx->pc = 0x12c988u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32136));
    // 0x12c98c: 0x240609c0
    ctx->pc = 0x12c98cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2496));
    // 0x12c990: 0xdfbf0000
    ctx->pc = 0x12c990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c994: 0x8041f1a
    ctx->pc = 0x12C994u;
    ctx->pc = 0x12C998u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x12C99Cu;
    // 0x12c99c: 0x0
    ctx->pc = 0x12c99cu;
    // NOP
}
