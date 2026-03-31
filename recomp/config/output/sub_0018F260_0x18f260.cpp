#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018F260
// Address: 0x18f260 - 0x18f570
void sub_0018F260_0x18f260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18f260u;

    // 0x18f260: 0x44086000
    ctx->pc = 0x18f260u;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[12]);
    // 0x18f264: 0x0
    ctx->pc = 0x18f264u;
    // NOP
    // 0x18f268: 0x48a81800
    ctx->pc = 0x18f268u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x18f26c: 0x44087000
    ctx->pc = 0x18f26cu;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[14]);
    // 0x18f270: 0x0
    ctx->pc = 0x18f270u;
    // NOP
    // 0x18f274: 0x48a82000
    ctx->pc = 0x18f274u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x18f278: 0x44088800
    ctx->pc = 0x18f278u;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[17]);
    // 0x18f27c: 0x0
    ctx->pc = 0x18f27cu;
    // NOP
    // 0x18f280: 0x48a82800
    ctx->pc = 0x18f280u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x18f284: 0x44086800
    ctx->pc = 0x18f284u;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[13]);
    // 0x18f288: 0x0
    ctx->pc = 0x18f288u;
    // NOP
    // 0x18f28c: 0x48a83000
    ctx->pc = 0x18f28cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x18f290: 0x44088000
    ctx->pc = 0x18f290u;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[16]);
    // 0x18f294: 0x0
    ctx->pc = 0x18f294u;
    // NOP
    // 0x18f298: 0x48a83800
    ctx->pc = 0x18f298u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x18f29c: 0x44087800
    ctx->pc = 0x18f29cu;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[15]);
    // 0x18f2a0: 0x0
    ctx->pc = 0x18f2a0u;
    // NOP
    // 0x18f2a4: 0x48a84000
    ctx->pc = 0x18f2a4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x18f2a8: 0x44089000
    ctx->pc = 0x18f2a8u;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[18]);
    // 0x18f2ac: 0x0
    ctx->pc = 0x18f2acu;
    // NOP
    // 0x18f2b0: 0x48a81000
    ctx->pc = 0x18f2b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x18f2b4: 0x4b041a6c
    ctx->pc = 0x18f2b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x18f2b8: 0x4b042aac
    ctx->pc = 0x18f2b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x18f2bc: 0x4a6a03bc
    ctx->pc = 0x18f2bcu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x18f2c0: 0x4a0003bf
    ctx->pc = 0x18f2c0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18f2c4: 0x4b0002a0
    ctx->pc = 0x18f2c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x18f2c8: 0x4b0a52ea
    ctx->pc = 0x18f2c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x18f2cc: 0x4b094b2a
    ctx->pc = 0x18f2ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18f2d0: 0x4b0a636a
    ctx->pc = 0x18f2d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x18f2d4: 0x4b0963aa
    ctx->pc = 0x18f2d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x18f2d8: 0x4b0b73aa
    ctx->pc = 0x18f2d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[14], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x18f2dc: 0x4b000043
    ctx->pc = 0x18f2dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18f2e0: 0x4b010868
    ctx->pc = 0x18f2e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18f2e4: 0x4b0e0bea
    ctx->pc = 0x18f2e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x18f2e8: 0x4b0a7bea
    ctx->pc = 0x18f2e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[15], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x18f2ec: 0x4b000843
    ctx->pc = 0x18f2ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18f2f0: 0x4b0c0c2a
    ctx->pc = 0x18f2f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x18f2f4: 0x4b0b842a
    ctx->pc = 0x18f2f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x18f2f8: 0x4b107c6c
    ctx->pc = 0x18f2f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x18f2fc: 0x4b008c43
    ctx->pc = 0x18f2fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x18f300: 0x4b11346a
    ctx->pc = 0x18f300u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x18f304: 0x4b0f84ac
    ctx->pc = 0x18f304u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[15]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x18f308: 0x4b123caa
    ctx->pc = 0x18f308u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x18f30c: 0x4b128c68
    ctx->pc = 0x18f30cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x18f310: 0x4b0d74ac
    ctx->pc = 0x18f310u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[13]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x18f314: 0x4b0d94ac
    ctx->pc = 0x18f314u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[18], ctx->vu0_vf[13]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x18f318: 0x4b0994a8
    ctx->pc = 0x18f318u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[18], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x18f31c: 0x4b1244aa
    ctx->pc = 0x18f31cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x18f320: 0x4b128c68
    ctx->pc = 0x18f320u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x18f324: 0x4b0d74ac
    ctx->pc = 0x18f324u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[13]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x18f328: 0x4b1214aa
    ctx->pc = 0x18f328u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x18f32c: 0x4b128c68
    ctx->pc = 0x18f32cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x18f330: 0x48288800
    ctx->pc = 0x18f330u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x18f334: 0x44880000
    ctx->pc = 0x18f334u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 8);
    // 0x18f338: 0x3e00008
    ctx->pc = 0x18F338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F368u: goto label_18f368;
            case 0x18F3B0u: goto label_18f3b0;
            case 0x18F3E8u: goto label_18f3e8;
            case 0x18F3F0u: goto label_18f3f0;
            case 0x18F450u: goto label_18f450;
            case 0x18F454u: goto label_18f454;
            case 0x18F498u: goto label_18f498;
            case 0x18F4E0u: goto label_18f4e0;
            case 0x18F514u: goto label_18f514;
            case 0x18F518u: goto label_18f518;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18F340u;
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
    goto label_18f3f0;
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
label_18f3f0:
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
            case 0x18F368u: goto label_18f368;
            case 0x18F3B0u: goto label_18f3b0;
            case 0x18F3E8u: goto label_18f3e8;
            case 0x18F3F0u: goto label_18f3f0;
            case 0x18F450u: goto label_18f450;
            case 0x18F454u: goto label_18f454;
            case 0x18F498u: goto label_18f498;
            case 0x18F4E0u: goto label_18f4e0;
            case 0x18F514u: goto label_18f514;
            case 0x18F518u: goto label_18f518;
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
    goto label_18f518;
    ctx->pc = 0x18F510u;
    // 0x18f510: 0x4a0002ff
    ctx->pc = 0x18f510u;
    // NOP operation, no action needed for VU0
label_18f514:
    // 0x18f514: 0x460c0301
    ctx->pc = 0x18f514u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
label_18f518:
    // 0x18f518: 0x44086000
    ctx->pc = 0x18f518u;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[12]);
    // 0x18f51c: 0x0
    ctx->pc = 0x18f51cu;
    // NOP
    // 0x18f520: 0x48a83000
    ctx->pc = 0x18f520u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x18f524: 0x4b0631d8
    ctx->pc = 0x18f524u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18f528: 0xd8650000
    ctx->pc = 0x18f528u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f52c: 0x4be62958
    ctx->pc = 0x18f52cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18f530: 0x4b0031bf
    ctx->pc = 0x18f530u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x18f534: 0x4b073a18
    ctx->pc = 0x18f534u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x18f538: 0x4ae001ac
    ctx->pc = 0x18f538u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18f53c: 0x4b083a58
    ctx->pc = 0x18f53cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x18f540: 0x4b084298
    ctx->pc = 0x18f540u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x18f544: 0x4b0538bf
    ctx->pc = 0x18f544u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x18f548: 0x4b0540be
    ctx->pc = 0x18f548u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x18f54c: 0x4b0548bd
    ctx->pc = 0x18f54cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x18f550: 0x4b055188
    ctx->pc = 0x18f550u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x18f554: 0x4a0002ff
    ctx->pc = 0x18f554u;
    // NOP operation, no action needed for VU0
    // 0x18f558: 0x48293000
    ctx->pc = 0x18f558u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x18f55c: 0x44890000
    ctx->pc = 0x18f55cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 9);
    // 0x18f560: 0x3e00008
    ctx->pc = 0x18F560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F368u: goto label_18f368;
            case 0x18F3B0u: goto label_18f3b0;
            case 0x18F3E8u: goto label_18f3e8;
            case 0x18F3F0u: goto label_18f3f0;
            case 0x18F450u: goto label_18f450;
            case 0x18F454u: goto label_18f454;
            case 0x18F498u: goto label_18f498;
            case 0x18F4E0u: goto label_18f4e0;
            case 0x18F514u: goto label_18f514;
            case 0x18F518u: goto label_18f518;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18F568u;
    // 0x18f568: 0x0
    ctx->pc = 0x18f568u;
    // NOP
    // 0x18f56c: 0x0
    ctx->pc = 0x18f56cu;
    // NOP
}
