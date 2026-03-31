#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012D778
// Address: 0x12d778 - 0x12d790
void sub_0012D778_0x12d778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12d778u;

    // 0x12d778: 0x27bdfff0
    ctx->pc = 0x12d778u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d77c: 0xffbf0000
    ctx->pc = 0x12d77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d780: 0x8c840004
    ctx->pc = 0x12d780u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12d784: 0xdfbf0000
    ctx->pc = 0x12d784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d788: 0x804939a
    ctx->pc = 0x12D788u;
    ctx->pc = 0x12D78Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x124E68u;
    sub_00124E68_0x124e68(rdram, ctx, runtime); return;
    ctx->pc = 0x12D790u;
}
