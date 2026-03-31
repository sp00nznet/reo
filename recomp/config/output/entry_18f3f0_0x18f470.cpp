#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_18f3f0
// Address: 0x18f3f0 - 0x18f470
void entry_18f3f0_0x18f470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18f3f0u;

    // 0x18f3f0: 0x44086000
    ctx->pc = 0x18f3f0u;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[12]);
    // 0x18f3f4: 0x0
    ctx->pc = 0x18f3f4u;
    // NOP
    // 0x18f3f8: 0x48a83000
    ctx->pc = 0x18f3f8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x18f3fc: 0x4b0631d8
    ctx->pc = 0x18f3fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18f400: 0xd8650000
    ctx->pc = 0x18f400u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f404: 0x4be62958
    ctx->pc = 0x18f404u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18f408: 0x4b0031bf
    ctx->pc = 0x18f408u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x18f40c: 0x4b073a18
    ctx->pc = 0x18f40cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x18f410: 0x4a6001ac
    ctx->pc = 0x18f410u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18f414: 0x4b083a58
    ctx->pc = 0x18f414u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x18f418: 0x4b084298
    ctx->pc = 0x18f418u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x18f41c: 0x4b0538bf
    ctx->pc = 0x18f41cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x18f420: 0x4b0540be
    ctx->pc = 0x18f420u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x18f424: 0x4b0548bd
    ctx->pc = 0x18f424u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x18f428: 0x4b055188
    ctx->pc = 0x18f428u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x18f42c: 0x4b0631ea
    ctx->pc = 0x18f42cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18f430: 0x4a2701c4
    ctx->pc = 0x18f430u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18f434: 0x4b8703bd
    ctx->pc = 0x18f434u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x18f438: 0x14e00005
    ctx->pc = 0x18F438u;
    {
        const bool branch_taken_0x18f438 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x18F43Cu;
        // VWAITQ (Q already resolved in this runtime)
        if (branch_taken_0x18f438) {
            ctx->pc = 0x18F450u;
            goto label_18f450;
        }
    }
    ctx->pc = 0x18F440u;
    // 0x18f440: 0x4a0002ff
    ctx->pc = 0x18f440u;
    // NOP operation, no action needed for VU0
    // 0x18f444: 0x10000003
    ctx->pc = 0x18F444u;
    {
        const bool branch_taken_0x18f444 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F448u;
        { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x18f444) {
            ctx->pc = 0x18F454u;
            goto label_18f454;
        }
    }
    ctx->pc = 0x18F44Cu;
    // 0x18f44c: 0x4a0002ff
    ctx->pc = 0x18f44cu;
    // NOP operation, no action needed for VU0
label_18f450:
    // 0x18f450: 0x4b0001a4
    ctx->pc = 0x18f450u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18f454:
    // 0x18f454: 0x48283000
    ctx->pc = 0x18f454u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x18f458: 0x44880000
    ctx->pc = 0x18f458u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 8);
    // 0x18f45c: 0x3e00008
    ctx->pc = 0x18F45Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F450u: goto label_18f450;
            case 0x18F454u: goto label_18f454;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18F464u;
    // 0x18f464: 0x0
    ctx->pc = 0x18f464u;
    // NOP
    // 0x18f468: 0x0
    ctx->pc = 0x18f468u;
    // NOP
    // 0x18f46c: 0x0
    ctx->pc = 0x18f46cu;
    // NOP
}
