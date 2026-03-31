#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001888A0
// Address: 0x1888a0 - 0x1888c0
void sub_001888A0_0x1888a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1888a0u;

    // 0x1888a0: 0x27bdfff0
    ctx->pc = 0x1888a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1888a4: 0x3c020029
    ctx->pc = 0x1888a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x1888a8: 0xffbf0000
    ctx->pc = 0x1888a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1888ac: 0x8c44b8c4
    ctx->pc = 0x1888acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294949060)));
    // 0x1888b0: 0xdfbf0000
    ctx->pc = 0x1888b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1888b4: 0x8045190
    ctx->pc = 0x1888B4u;
    ctx->pc = 0x1888B8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x114640u;
    sub_00114640_0x114640(rdram, ctx, runtime); return;
    ctx->pc = 0x1888BCu;
    // 0x1888bc: 0x0
    ctx->pc = 0x1888bcu;
    // NOP
}
