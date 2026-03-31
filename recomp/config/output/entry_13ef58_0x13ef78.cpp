#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13ef58
// Address: 0x13ef58 - 0x13ef78
void entry_13ef58_0x13ef78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13ef58u;

    // 0x13ef58: 0x27bdfff0
    ctx->pc = 0x13ef58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13ef5c: 0x3c040024
    ctx->pc = 0x13ef5cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13ef60: 0xffbf0000
    ctx->pc = 0x13ef60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13ef64: 0x2484d898
    ctx->pc = 0x13ef64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957208));
    // 0x13ef68: 0xdfbf0000
    ctx->pc = 0x13ef68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ef6c: 0x8045a12
    ctx->pc = 0x13EF6Cu;
    ctx->pc = 0x13EF70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x116848u;
    sub_00116848_0x116848(rdram, ctx, runtime); return;
    ctx->pc = 0x13EF74u;
    // 0x13ef74: 0x0
    ctx->pc = 0x13ef74u;
    // NOP
}
