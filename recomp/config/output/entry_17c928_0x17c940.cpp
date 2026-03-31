#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17c928
// Address: 0x17c928 - 0x17c940
void entry_17c928_0x17c940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17c928u;

    // 0x17c928: 0x27bdfff0
    ctx->pc = 0x17c928u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c92c: 0xffbf0000
    ctx->pc = 0x17c92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c930: 0x8c84003c
    ctx->pc = 0x17c930u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x17c934: 0xdfbf0000
    ctx->pc = 0x17c934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c938: 0x8053fa2
    ctx->pc = 0x17C938u;
    ctx->pc = 0x17C93Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x14FE88u;
    entry_14fe88_0x14fe90(rdram, ctx, runtime); return;
    ctx->pc = 0x17C940u;
}
