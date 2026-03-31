#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00142008
// Address: 0x142008 - 0x142020
void sub_00142008_0x142008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x142008u;

    // 0x142008: 0x27bdfff0
    ctx->pc = 0x142008u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14200c: 0x24040005
    ctx->pc = 0x14200cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x142010: 0xffbf0000
    ctx->pc = 0x142010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x142014: 0xdfbf0000
    ctx->pc = 0x142014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142018: 0x8050788
    ctx->pc = 0x142018u;
    ctx->pc = 0x14201Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141E20u;
    entry_141e20_0x141f90(rdram, ctx, runtime); return;
    ctx->pc = 0x142020u;
}
