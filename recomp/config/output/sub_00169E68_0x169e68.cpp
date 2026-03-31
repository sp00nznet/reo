#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00169E68
// Address: 0x169e68 - 0x169e80
void sub_00169E68_0x169e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x169e68u;

    // 0x169e68: 0x27bdfff0
    ctx->pc = 0x169e68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169e6c: 0xffbf0000
    ctx->pc = 0x169e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169e70: 0xdfbf0000
    ctx->pc = 0x169e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169e74: 0x804fe16
    ctx->pc = 0x169E74u;
    ctx->pc = 0x169E78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13F858u;
    sub_0013F858_0x13f858(rdram, ctx, runtime); return;
    ctx->pc = 0x169E7Cu;
    // 0x169e7c: 0x0
    ctx->pc = 0x169e7cu;
    // NOP
}
