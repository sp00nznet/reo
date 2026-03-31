#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00177A50
// Address: 0x177a50 - 0x177a70
void sub_00177A50_0x177a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x177a50u;

    // 0x177a50: 0x27bdfff0
    ctx->pc = 0x177a50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177a54: 0xc0382d
    ctx->pc = 0x177a54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a58: 0xffbf0000
    ctx->pc = 0x177a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177a5c: 0x302d
    ctx->pc = 0x177a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a60: 0xdfbf0000
    ctx->pc = 0x177a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177a64: 0x805deb4
    ctx->pc = 0x177A64u;
    ctx->pc = 0x177A68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x177AD0u;
    entry_177ad0_0x177b10(rdram, ctx, runtime); return;
    ctx->pc = 0x177A6Cu;
    // 0x177a6c: 0x0
    ctx->pc = 0x177a6cu;
    // NOP
}
