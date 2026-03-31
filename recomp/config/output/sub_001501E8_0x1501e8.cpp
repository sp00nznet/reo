#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001501E8
// Address: 0x1501e8 - 0x150230
void sub_001501E8_0x1501e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1501e8u;

    // 0x1501e8: 0x870018
    ctx->pc = 0x1501e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x1501ec: 0x70c50018
    ctx->pc = 0x1501ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x1501f0: 0x1012
    ctx->pc = 0x1501f0u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x1501f4: 0x2010
    ctx->pc = 0x1501f4u;
    SET_GPR_U32(ctx, 4, ctx->hi);
    // 0x1501f8: 0x2103c
    ctx->pc = 0x1501f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1501fc: 0x4203c
    ctx->pc = 0x1501fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x150200: 0x2103e
    ctx->pc = 0x150200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x150204: 0x70001812
    ctx->pc = 0x150204u;
    SET_GPR_U32(ctx, 3, ctx->lo1);
    // 0x150208: 0x822025
    ctx->pc = 0x150208u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15020c: 0x70001010
    ctx->pc = 0x15020cu;
    SET_GPR_U32(ctx, 2, ctx->hi1);
    // 0x150210: 0x3183c
    ctx->pc = 0x150210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x150214: 0x2103c
    ctx->pc = 0x150214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x150218: 0x3183e
    ctx->pc = 0x150218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x15021c: 0x431025
    ctx->pc = 0x15021cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150220: 0x44102a
    ctx->pc = 0x150220u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x150224: 0x3e00008
    ctx->pc = 0x150224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150228u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15022Cu;
    // 0x15022c: 0x0
    ctx->pc = 0x15022cu;
    // NOP
}
