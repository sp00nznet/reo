#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00141748
// Address: 0x141748 - 0x141778
void sub_00141748_0x141748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x141748u;

    // 0x141748: 0x27bdfff0
    ctx->pc = 0x141748u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14174c: 0x24040005
    ctx->pc = 0x14174cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x141750: 0xffbf0000
    ctx->pc = 0x141750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141754: 0xdfbf0000
    ctx->pc = 0x141754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141758: 0x8050578
    ctx->pc = 0x141758u;
    ctx->pc = 0x14175Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1415E0u;
    entry_1415e0_0x141640(rdram, ctx, runtime); return;
    ctx->pc = 0x141760u;
    // 0x141760: 0x27bdfff0
    ctx->pc = 0x141760u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141764: 0x240403e8
    ctx->pc = 0x141764u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1000));
    // 0x141768: 0xffbf0000
    ctx->pc = 0x141768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14176c: 0xdfbf0000
    ctx->pc = 0x14176cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141770: 0x8050578
    ctx->pc = 0x141770u;
    ctx->pc = 0x141774u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1415E0u;
    entry_1415e0_0x141640(rdram, ctx, runtime); return;
    ctx->pc = 0x141778u;
}
