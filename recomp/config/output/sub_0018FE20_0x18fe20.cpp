#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018FE20
// Address: 0x18fe20 - 0x18fe60
void sub_0018FE20_0x18fe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18fe20u;

    // 0x18fe20: 0x3c030029
    ctx->pc = 0x18fe20u;
    SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
    // 0x18fe24: 0x24634e00
    ctx->pc = 0x18fe24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 19968));
    // 0x18fe28: 0xd8640000
    ctx->pc = 0x18fe28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18fe2c: 0xd8650010
    ctx->pc = 0x18fe2cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x18fe30: 0xd8660020
    ctx->pc = 0x18fe30u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18fe34: 0xd8880000
    ctx->pc = 0x18fe34u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18fe38: 0xd8890010
    ctx->pc = 0x18fe38u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x18fe3c: 0xd88a0020
    ctx->pc = 0x18fe3cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x18fe40: 0x4bc40228
    ctx->pc = 0x18fe40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x18fe44: 0x4bc50268
    ctx->pc = 0x18fe44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x18fe48: 0x4bc602a8
    ctx->pc = 0x18fe48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x18fe4c: 0xf8880000
    ctx->pc = 0x18fe4cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x18fe50: 0xf8890010
    ctx->pc = 0x18fe50u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x18fe54: 0x3e00008
    ctx->pc = 0x18FE54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FE58u;
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[10]));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18FE5Cu;
    // 0x18fe5c: 0x0
    ctx->pc = 0x18fe5cu;
    // NOP
}
