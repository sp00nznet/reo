#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00187478
// Address: 0x187478 - 0x187490
void sub_00187478_0x187478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x187478u;

    // 0x187478: 0x27bdfff0
    ctx->pc = 0x187478u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18747c: 0xffbf0000
    ctx->pc = 0x18747cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187480: 0xdfbf0000
    ctx->pc = 0x187480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187484: 0x8061ccc
    ctx->pc = 0x187484u;
    ctx->pc = 0x187488u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x187330u;
    entry_187330_0x187478(rdram, ctx, runtime); return;
    ctx->pc = 0x18748Cu;
    // 0x18748c: 0x0
    ctx->pc = 0x18748cu;
    // NOP
}
