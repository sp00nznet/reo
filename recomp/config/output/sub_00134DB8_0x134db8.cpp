#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00134DB8
// Address: 0x134db8 - 0x134de0
void sub_00134DB8_0x134db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x134db8u;

    // 0x134db8: 0x27bdfff0
    ctx->pc = 0x134db8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x134dbc: 0x3c040022
    ctx->pc = 0x134dbcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)34 << 16));
    // 0x134dc0: 0xffbf0000
    ctx->pc = 0x134dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x134dc4: 0x282d
    ctx->pc = 0x134dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134dc8: 0x2484b7b8
    ctx->pc = 0x134dc8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948792));
    // 0x134dcc: 0x240603c0
    ctx->pc = 0x134dccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 960));
    // 0x134dd0: 0xdfbf0000
    ctx->pc = 0x134dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134dd4: 0x8041f1a
    ctx->pc = 0x134DD4u;
    ctx->pc = 0x134DD8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x134DDCu;
    // 0x134ddc: 0x0
    ctx->pc = 0x134ddcu;
    // NOP
}
