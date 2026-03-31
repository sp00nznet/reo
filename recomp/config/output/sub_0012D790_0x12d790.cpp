#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012D790
// Address: 0x12d790 - 0x12d7a8
void sub_0012D790_0x12d790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12d790u;

    // 0x12d790: 0x27bdfff0
    ctx->pc = 0x12d790u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d794: 0xffbf0000
    ctx->pc = 0x12d794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d798: 0x8c840004
    ctx->pc = 0x12d798u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12d79c: 0xdfbf0000
    ctx->pc = 0x12d79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d7a0: 0x804939c
    ctx->pc = 0x12D7A0u;
    ctx->pc = 0x12D7A4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x124E70u;
    entry_124e70_0x124e78(rdram, ctx, runtime); return;
    ctx->pc = 0x12D7A8u;
}
