#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013C7C0
// Address: 0x13c7c0 - 0x13c7e8
void sub_0013C7C0_0x13c7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13c7c0u;

    // 0x13c7c0: 0x27bdfff0
    ctx->pc = 0x13c7c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13c7c4: 0x3c040022
    ctx->pc = 0x13c7c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)34 << 16));
    // 0x13c7c8: 0xffbf0000
    ctx->pc = 0x13c7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c7cc: 0x282d
    ctx->pc = 0x13c7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c7d0: 0x2484de90
    ctx->pc = 0x13c7d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958736));
    // 0x13c7d4: 0x24060010
    ctx->pc = 0x13c7d4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x13c7d8: 0xdfbf0000
    ctx->pc = 0x13c7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c7dc: 0x8041f1a
    ctx->pc = 0x13C7DCu;
    ctx->pc = 0x13C7E0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x13C7E4u;
    // 0x13c7e4: 0x0
    ctx->pc = 0x13c7e4u;
    // NOP
}
