#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013D4B8
// Address: 0x13d4b8 - 0x13d4d0
void sub_0013D4B8_0x13d4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13d4b8u;

    // 0x13d4b8: 0x27bdfff0
    ctx->pc = 0x13d4b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d4bc: 0xffbf0000
    ctx->pc = 0x13d4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d4c0: 0xdfbf0000
    ctx->pc = 0x13d4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d4c4: 0x804fc9c
    ctx->pc = 0x13D4C4u;
    ctx->pc = 0x13D4C8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13F270u;
    sub_0013F270_0x13f270(rdram, ctx, runtime); return;
    ctx->pc = 0x13D4CCu;
    // 0x13d4cc: 0x0
    ctx->pc = 0x13d4ccu;
    // NOP
}
