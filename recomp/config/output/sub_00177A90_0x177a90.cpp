#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00177A90
// Address: 0x177a90 - 0x177ab0
void sub_00177A90_0x177a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x177a90u;

    // 0x177a90: 0x27bdfff0
    ctx->pc = 0x177a90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177a94: 0xc0382d
    ctx->pc = 0x177a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a98: 0xffbf0000
    ctx->pc = 0x177a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177a9c: 0x24060001
    ctx->pc = 0x177a9cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x177aa0: 0xdfbf0000
    ctx->pc = 0x177aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177aa4: 0x805deb4
    ctx->pc = 0x177AA4u;
    ctx->pc = 0x177AA8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x177AD0u;
    entry_177ad0_0x177b10(rdram, ctx, runtime); return;
    ctx->pc = 0x177AACu;
    // 0x177aac: 0x0
    ctx->pc = 0x177aacu;
    // NOP
}
