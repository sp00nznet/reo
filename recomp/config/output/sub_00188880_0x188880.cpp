#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00188880
// Address: 0x188880 - 0x1888a0
void sub_00188880_0x188880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x188880u;

    // 0x188880: 0x27bdfff0
    ctx->pc = 0x188880u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x188884: 0x3c020029
    ctx->pc = 0x188884u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x188888: 0xffbf0000
    ctx->pc = 0x188888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18888c: 0x8c44b8c4
    ctx->pc = 0x18888cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294949060)));
    // 0x188890: 0xdfbf0000
    ctx->pc = 0x188890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188894: 0x8045198
    ctx->pc = 0x188894u;
    ctx->pc = 0x188898u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x114660u;
    sub_00114660_0x114660(rdram, ctx, runtime); return;
    ctx->pc = 0x18889Cu;
    // 0x18889c: 0x0
    ctx->pc = 0x18889cu;
    // NOP
}
