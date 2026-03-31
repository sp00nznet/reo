#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00173A48
// Address: 0x173a48 - 0x173a70
void sub_00173A48_0x173a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x173a48u;

    // 0x173a48: 0x27bdfff0
    ctx->pc = 0x173a48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173a4c: 0x80102d
    ctx->pc = 0x173a4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a50: 0xffbf0000
    ctx->pc = 0x173a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173a54: 0x24050004
    ctx->pc = 0x173a54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x173a58: 0xac40004c
    ctx->pc = 0x173a58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x173a5c: 0xdfbf0000
    ctx->pc = 0x173a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173a60: 0xac400048
    ctx->pc = 0x173a60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x173a64: 0x805ded2
    ctx->pc = 0x173A64u;
    ctx->pc = 0x173A68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x177B48u;
    entry_177b48_0x177be0(rdram, ctx, runtime); return;
    ctx->pc = 0x173A6Cu;
    // 0x173a6c: 0x0
    ctx->pc = 0x173a6cu;
    // NOP
}
