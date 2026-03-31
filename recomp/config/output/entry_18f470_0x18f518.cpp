#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_18f470
// Address: 0x18f470 - 0x18f518
void entry_18f470_0x18f518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18f470u;

    // 0x18f470: 0x3c010024
    ctx->pc = 0x18f470u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x18f474: 0xc4201c90
    ctx->pc = 0x18f474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f478: 0x46006036
    ctx->pc = 0x18f478u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f47c: 0x45010006
    ctx->pc = 0x18F47Cu;
    {
        const bool branch_taken_0x18f47c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18F480u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x18f47c) {
            ctx->pc = 0x18F498u;
            goto label_18f498;
        }
    }
    ctx->pc = 0x18F484u;
    // 0x18f484: 0x3c010024
    ctx->pc = 0x18f484u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x18f488: 0xc4201c88
    ctx->pc = 0x18f488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f48c: 0x46006034
    ctx->pc = 0x18f48cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f490: 0x45010013
    ctx->pc = 0x18F490u;
    {
        const bool branch_taken_0x18f490 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f490) {
            ctx->pc = 0x18F4E0u;
            goto label_18f4e0;
        }
    }
    ctx->pc = 0x18F498u;
label_18f498:
    // 0x18f498: 0x2442fe20
    ctx->pc = 0x18f498u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966816));
    // 0x18f49c: 0x44086000
    ctx->pc = 0x18f49cu;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[12]);
    // 0x18f4a0: 0xd8460000
    ctx->pc = 0x18f4a0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f4a4: 0x48a82000
    ctx->pc = 0x18f4a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x18f4a8: 0x8402a
    ctx->pc = 0x18f4a8u;
    SET_GPR_U32(ctx, 8, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 8)));
    // 0x18f4ac: 0x48c81000
    ctx->pc = 0x18f4acu;
    ctx->vu0_vpu_stat = GPR_U32(ctx, 8);
    // 0x18f4b0: 0x4b0621d8
    ctx->pc = 0x18f4b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18f4b4: 0x4b07397c
    ctx->pc = 0x18f4b4u;
    { __m128 src = ctx->vu0_vf[7]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18f4b8: 0x4a013bfc
    ctx->pc = 0x18f4b8u;
    { float src = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vi[1] = static_cast<uint16_t>(static_cast<int32_t>(src)); }
    // 0x18f4bc: 0x4a0307b2
    ctx->pc = 0x18f4bcu;
    ctx->vi[3] = ctx->vi[0] + -2;
    // 0x18f4c0: 0x4a020870
    ctx->pc = 0x18f4c0u;
    ctx->vi[1] = ctx->vi[1] + ctx->vi[2];
    // 0x18f4c4: 0x4a030874
    ctx->pc = 0x18f4c4u;
    ctx->vi[1] = ctx->vi[1] & ctx->vi[3];
    // 0x18f4c8: 0x4b070bfd
    ctx->pc = 0x18f4c8u;
    { uint32_t tmp = ctx->vi[1]; float val = *(float*)&tmp; __m128 res = _mm_set1_ps(val); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18f4cc: 0x4b07393c
    ctx->pc = 0x18f4ccu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[7]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18f4d0: 0x4b0639d9
    ctx->pc = 0x18f4d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18f4d4: 0x4b0721ec
    ctx->pc = 0x18f4d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18f4d8: 0x48283800
    ctx->pc = 0x18f4d8u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x18f4dc: 0x44886000
    ctx->pc = 0x18f4dcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 8);
label_18f4e0:
    // 0x18f4e0: 0x3c030023
    ctx->pc = 0x18f4e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x18f4e4: 0x2463fe30
    ctx->pc = 0x18f4e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294966832));
    // 0x18f4e8: 0x44800000
    ctx->pc = 0x18f4e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x18f4ec: 0x0
    ctx->pc = 0x18f4ecu;
    // NOP
    // 0x18f4f0: 0x46006034
    ctx->pc = 0x18f4f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f4f4: 0x3c013fc9
    ctx->pc = 0x18f4f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x18f4f8: 0x34220fdb
    ctx->pc = 0x18f4f8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 1), 4059));
    // 0x18f4fc: 0x45000005
    ctx->pc = 0x18F4FCu;
    {
        const bool branch_taken_0x18f4fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18F500u;
        *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
        if (branch_taken_0x18f4fc) {
            ctx->pc = 0x18F514u;
            goto label_18f514;
        }
    }
    ctx->pc = 0x18F504u;
    // 0x18f504: 0x4a0002ff
    ctx->pc = 0x18f504u;
    // NOP operation, no action needed for VU0
    // 0x18f508: 0x8063d46
    ctx->pc = 0x18F508u;
    ctx->pc = 0x18F50Cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->pc = 0x18F518u;
    entry_18f518_0x18f570(rdram, ctx, runtime); return;
    ctx->pc = 0x18F510u;
    // 0x18f510: 0x4a0002ff
    ctx->pc = 0x18f510u;
    // NOP operation, no action needed for VU0
label_18f514:
    // 0x18f514: 0x460c0301
    ctx->pc = 0x18f514u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
}
