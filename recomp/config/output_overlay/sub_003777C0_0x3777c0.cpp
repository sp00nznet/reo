#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_003777C0
// Address: 0x3777c0 - 0x377800
void sub_003777C0_0x3777c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3777c0u;

    // 0x3777c0: 0x24031324
    ctx->pc = 0x3777c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4900));
    // 0x3777c4: 0x3c010057
    ctx->pc = 0x3777c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3777c8: 0xa33018
    ctx->pc = 0x3777c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)(uint32_t)result); }
    // 0x3777cc: 0x8c25aef8
    ctx->pc = 0x3777ccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294946552)));
    // 0x3777d0: 0x8c830034
    ctx->pc = 0x3777d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3777d4: 0xa62821
    ctx->pc = 0x3777d4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3777d8: 0x3c010057
    ctx->pc = 0x3777d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3777dc: 0xac651460
    ctx->pc = 0x3777dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5216), GPR_U32(ctx, 5));
    // 0x3777e0: 0x8c830034
    ctx->pc = 0x3777e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3777e4: 0x8c24aef8
    ctx->pc = 0x3777e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294946552)));
    // 0x3777e8: 0x862021
    ctx->pc = 0x3777e8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3777ec: 0x24840074
    ctx->pc = 0x3777ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 116));
    // 0x3777f0: 0x3e00008
    ctx->pc = 0x3777F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3777F4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 5220), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3777F8u;
    // 0x3777f8: 0x0
    ctx->pc = 0x3777f8u;
    // NOP
    // 0x3777fc: 0x0
    ctx->pc = 0x3777fcu;
    // NOP
}
