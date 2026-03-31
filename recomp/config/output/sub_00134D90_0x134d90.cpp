#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00134D90
// Address: 0x134d90 - 0x134db8
void sub_00134D90_0x134d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x134d90u;

    // 0x134d90: 0x27bdfff0
    ctx->pc = 0x134d90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x134d94: 0x3c040022
    ctx->pc = 0x134d94u;
    SET_GPR_U32(ctx, 4, ((uint32_t)34 << 16));
    // 0x134d98: 0xffbf0000
    ctx->pc = 0x134d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x134d9c: 0x282d
    ctx->pc = 0x134d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134da0: 0x2484b7b8
    ctx->pc = 0x134da0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948792));
    // 0x134da4: 0x240603c0
    ctx->pc = 0x134da4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 960));
    // 0x134da8: 0xdfbf0000
    ctx->pc = 0x134da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134dac: 0x8041f1a
    ctx->pc = 0x134DACu;
    ctx->pc = 0x134DB0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x134DB4u;
    // 0x134db4: 0x0
    ctx->pc = 0x134db4u;
    // NOP
}
