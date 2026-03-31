#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_188318
// Address: 0x188318 - 0x188348
void entry_188318_0x188348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x188318u;

    // 0x188318: 0x27bdfff0
    ctx->pc = 0x188318u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18831c: 0x410c0
    ctx->pc = 0x18831cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 3));
    // 0x188320: 0xffbf0000
    ctx->pc = 0x188320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x188324: 0x441023
    ctx->pc = 0x188324u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x188328: 0x21080
    ctx->pc = 0x188328u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x18832c: 0x3c080029
    ctx->pc = 0x18832cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)41 << 16));
    // 0x188330: 0x1024021
    ctx->pc = 0x188330u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x188334: 0x8d08b8dc
    ctx->pc = 0x188334u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 8), 4294949084)));
    // 0x188338: 0xdfbf0000
    ctx->pc = 0x188338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18833c: 0x806204e
    ctx->pc = 0x18833Cu;
    ctx->pc = 0x188340u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x188138u;
    sub_00188138_0x188138(rdram, ctx, runtime); return;
    ctx->pc = 0x188344u;
    // 0x188344: 0x0
    ctx->pc = 0x188344u;
    // NOP
}
