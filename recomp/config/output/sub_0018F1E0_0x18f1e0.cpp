#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018F1E0
// Address: 0x18f1e0 - 0x18f260
void sub_0018F1E0_0x18f1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18f1e0u;

    // 0x18f1e0: 0x44086000
    ctx->pc = 0x18f1e0u;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[12]);
    // 0x18f1e4: 0x0
    ctx->pc = 0x18f1e4u;
    // NOP
    // 0x18f1e8: 0x48a81800
    ctx->pc = 0x18f1e8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x18f1ec: 0x44087000
    ctx->pc = 0x18f1ecu;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[14]);
    // 0x18f1f0: 0x0
    ctx->pc = 0x18f1f0u;
    // NOP
    // 0x18f1f4: 0x48a82000
    ctx->pc = 0x18f1f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x18f1f8: 0x44088000
    ctx->pc = 0x18f1f8u;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[16]);
    // 0x18f1fc: 0x0
    ctx->pc = 0x18f1fcu;
    // NOP
    // 0x18f200: 0x48a82800
    ctx->pc = 0x18f200u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x18f204: 0x44086800
    ctx->pc = 0x18f204u;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[13]);
    // 0x18f208: 0x0
    ctx->pc = 0x18f208u;
    // NOP
    // 0x18f20c: 0x48a83000
    ctx->pc = 0x18f20cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x18f210: 0x44087800
    ctx->pc = 0x18f210u;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[15]);
    // 0x18f214: 0x0
    ctx->pc = 0x18f214u;
    // NOP
    // 0x18f218: 0x48a83800
    ctx->pc = 0x18f218u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x18f21c: 0x4b042a2c
    ctx->pc = 0x18f21cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x18f220: 0x4a6803bc
    ctx->pc = 0x18f220u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x18f224: 0x4b063a6c
    ctx->pc = 0x18f224u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x18f228: 0x4b062aaa
    ctx->pc = 0x18f228u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x18f22c: 0x4b0722ea
    ctx->pc = 0x18f22cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x18f230: 0x4b0b52ac
    ctx->pc = 0x18f230u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x18f234: 0x4a0003bf
    ctx->pc = 0x18f234u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18f238: 0x4b004a5c
    ctx->pc = 0x18f238u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x18f23c: 0x4b00529c
    ctx->pc = 0x18f23cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x18f240: 0x4b03492a
    ctx->pc = 0x18f240u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18f244: 0x4b0a2128
    ctx->pc = 0x18f244u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18f248: 0x48282000
    ctx->pc = 0x18f248u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18f24c: 0x44880000
    ctx->pc = 0x18f24cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 8);
    // 0x18f250: 0x3e00008
    ctx->pc = 0x18F250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F258u;
    // 0x18f258: 0x0
    ctx->pc = 0x18f258u;
    // NOP
    // 0x18f25c: 0x0
    ctx->pc = 0x18f25cu;
    // NOP
}
