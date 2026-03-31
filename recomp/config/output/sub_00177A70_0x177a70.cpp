#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00177A70
// Address: 0x177a70 - 0x177a90
void sub_00177A70_0x177a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x177a70u;

    // 0x177a70: 0x27bdfff0
    ctx->pc = 0x177a70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177a74: 0xc0382d
    ctx->pc = 0x177a74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a78: 0xffbf0000
    ctx->pc = 0x177a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177a7c: 0x302d
    ctx->pc = 0x177a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a80: 0xdfbf0000
    ctx->pc = 0x177a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177a84: 0x805deb4
    ctx->pc = 0x177A84u;
    ctx->pc = 0x177A88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x177AD0u;
    entry_177ad0_0x177b10(rdram, ctx, runtime); return;
    ctx->pc = 0x177A8Cu;
    // 0x177a8c: 0x0
    ctx->pc = 0x177a8cu;
    // NOP
}
