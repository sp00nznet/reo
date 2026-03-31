#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_18f340
// Address: 0x18f340 - 0x18f3f0
void entry_18f340_0x18f3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18f340u;

    // 0x18f340: 0x3c010024
    ctx->pc = 0x18f340u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x18f344: 0xc4201c90
    ctx->pc = 0x18f344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f348: 0x46006036
    ctx->pc = 0x18f348u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f34c: 0x45010006
    ctx->pc = 0x18F34Cu;
    {
        const bool branch_taken_0x18f34c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18F350u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x18f34c) {
            ctx->pc = 0x18F368u;
            goto label_18f368;
        }
    }
    ctx->pc = 0x18F354u;
    // 0x18f354: 0x3c010024
    ctx->pc = 0x18f354u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x18f358: 0xc4201c88
    ctx->pc = 0x18f358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f35c: 0x46006034
    ctx->pc = 0x18f35cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f360: 0x45010013
    ctx->pc = 0x18F360u;
    {
        const bool branch_taken_0x18f360 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f360) {
            ctx->pc = 0x18F3B0u;
            goto label_18f3b0;
        }
    }
    ctx->pc = 0x18F368u;
label_18f368:
    // 0x18f368: 0x2442fe20
    ctx->pc = 0x18f368u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966816));
    // 0x18f36c: 0x44086000
    ctx->pc = 0x18f36cu;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[12]);
    // 0x18f370: 0xd8460000
    ctx->pc = 0x18f370u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f374: 0x48a82000
    ctx->pc = 0x18f374u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x18f378: 0x8402a
    ctx->pc = 0x18f378u;
    SET_GPR_U32(ctx, 8, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 8)));
    // 0x18f37c: 0x48c81000
    ctx->pc = 0x18f37cu;
    ctx->vu0_vpu_stat = GPR_U32(ctx, 8);
    // 0x18f380: 0x4b0621d8
    ctx->pc = 0x18f380u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18f384: 0x4b07397c
    ctx->pc = 0x18f384u;
    { __m128 src = ctx->vu0_vf[7]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18f388: 0x4a013bfc
    ctx->pc = 0x18f388u;
    { float src = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vi[1] = static_cast<uint16_t>(static_cast<int32_t>(src)); }
    // 0x18f38c: 0x4a0307b2
    ctx->pc = 0x18f38cu;
    ctx->vi[3] = ctx->vi[0] + -2;
    // 0x18f390: 0x4a020870
    ctx->pc = 0x18f390u;
    ctx->vi[1] = ctx->vi[1] + ctx->vi[2];
    // 0x18f394: 0x4a030874
    ctx->pc = 0x18f394u;
    ctx->vi[1] = ctx->vi[1] & ctx->vi[3];
    // 0x18f398: 0x4b070bfd
    ctx->pc = 0x18f398u;
    { uint32_t tmp = ctx->vi[1]; float val = *(float*)&tmp; __m128 res = _mm_set1_ps(val); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18f39c: 0x4b07393c
    ctx->pc = 0x18f39cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[7]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18f3a0: 0x4b0639d9
    ctx->pc = 0x18f3a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18f3a4: 0x4b0721ec
    ctx->pc = 0x18f3a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18f3a8: 0x48283800
    ctx->pc = 0x18f3a8u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x18f3ac: 0x44886000
    ctx->pc = 0x18f3acu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 8);
label_18f3b0:
    // 0x18f3b0: 0x3c030023
    ctx->pc = 0x18f3b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x18f3b4: 0x2463fe30
    ctx->pc = 0x18f3b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294966832));
    // 0x18f3b8: 0x44800000
    ctx->pc = 0x18f3b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x18f3bc: 0x0
    ctx->pc = 0x18f3bcu;
    // NOP
    // 0x18f3c0: 0x46006034
    ctx->pc = 0x18f3c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f3c4: 0x3c013fc9
    ctx->pc = 0x18f3c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x18f3c8: 0x34220fdb
    ctx->pc = 0x18f3c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 1), 4059));
    // 0x18f3cc: 0x45000006
    ctx->pc = 0x18F3CCu;
    {
        const bool branch_taken_0x18f3cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18F3D0u;
        *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
        if (branch_taken_0x18f3cc) {
            ctx->pc = 0x18F3E8u;
            goto label_18f3e8;
        }
    }
    ctx->pc = 0x18F3D4u;
    // 0x18f3d4: 0x4a0002ff
    ctx->pc = 0x18f3d4u;
    // NOP operation, no action needed for VU0
    // 0x18f3d8: 0x460c0300
    ctx->pc = 0x18f3d8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x18f3dc: 0x8063cfc
    ctx->pc = 0x18F3DCu;
    ctx->pc = 0x18F3E0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    ctx->pc = 0x18F3F0u;
    entry_18f3f0_0x18f470(rdram, ctx, runtime); return;
    ctx->pc = 0x18F3E4u;
    // 0x18f3e4: 0x4a0002ff
    ctx->pc = 0x18f3e4u;
    // NOP operation, no action needed for VU0
label_18f3e8:
    // 0x18f3e8: 0x460c0301
    ctx->pc = 0x18f3e8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x18f3ec: 0x3821
    ctx->pc = 0x18f3ecu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
}
