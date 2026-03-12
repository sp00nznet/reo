#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00370760
// Address: 0x370760 - 0x3707a0
void sub_00370760_0x370760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x370760u;

    // 0x370760: 0x8c890004
    ctx->pc = 0x370760u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x370764: 0x8c880000
    ctx->pc = 0x370764u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x370768: 0x8ca20004
    ctx->pc = 0x370768u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37076c: 0x8ca70000
    ctx->pc = 0x37076cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x370770: 0x8cc30000
    ctx->pc = 0x370770u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x370774: 0x8cc40004
    ctx->pc = 0x370774u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x370778: 0x491023
    ctx->pc = 0x370778u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x37077c: 0xe82823
    ctx->pc = 0x37077cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x370780: 0x681823
    ctx->pc = 0x370780u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x370784: 0x70621018
    ctx->pc = 0x370784u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x370788: 0x892023
    ctx->pc = 0x370788u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x37078c: 0xa42018
    ctx->pc = 0x37078cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x370790: 0x3e00008
    ctx->pc = 0x370790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370794u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x370798u;
    // 0x370798: 0x0
    ctx->pc = 0x370798u;
    // NOP
    // 0x37079c: 0x0
    ctx->pc = 0x37079cu;
    // NOP
}
