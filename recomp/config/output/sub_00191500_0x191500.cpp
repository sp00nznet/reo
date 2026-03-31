#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00191500
// Address: 0x191500 - 0x191900
void sub_00191500_0x191500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x191500u;

    // 0x191500: 0x78a60000
    ctx->pc = 0x191500u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x191504: 0x78a70010
    ctx->pc = 0x191504u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x191508: 0x78a80020
    ctx->pc = 0x191508u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x19150c: 0x78a90030
    ctx->pc = 0x19150cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x191510: 0x7c860000
    ctx->pc = 0x191510u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x191514: 0x7c870010
    ctx->pc = 0x191514u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 7));
    // 0x191518: 0x7c880020
    ctx->pc = 0x191518u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 8));
    // 0x19151c: 0x3e00008
    ctx->pc = 0x19151Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191520u;
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 9));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x191524u;
    // 0x191524: 0x0
    ctx->pc = 0x191524u;
    // NOP
    // 0x191528: 0x0
    ctx->pc = 0x191528u;
    // NOP
    // 0x19152c: 0x0
    ctx->pc = 0x19152cu;
    // NOP
    // 0x191530: 0xc4a00000
    ctx->pc = 0x191530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191534: 0xe4800000
    ctx->pc = 0x191534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x191538: 0xc4a00004
    ctx->pc = 0x191538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19153c: 0xe4800004
    ctx->pc = 0x19153cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x191540: 0xc4a00008
    ctx->pc = 0x191540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191544: 0xe4800008
    ctx->pc = 0x191544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x191548: 0xc4a00010
    ctx->pc = 0x191548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19154c: 0xe4800010
    ctx->pc = 0x19154cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x191550: 0xc4a00014
    ctx->pc = 0x191550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191554: 0xe4800014
    ctx->pc = 0x191554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x191558: 0xc4a00018
    ctx->pc = 0x191558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19155c: 0xe4800018
    ctx->pc = 0x19155cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x191560: 0xc4a00020
    ctx->pc = 0x191560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191564: 0xe4800020
    ctx->pc = 0x191564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x191568: 0xc4a00024
    ctx->pc = 0x191568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19156c: 0xe4800024
    ctx->pc = 0x19156cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x191570: 0xc4a00028
    ctx->pc = 0x191570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191574: 0x3e00008
    ctx->pc = 0x191574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191578u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19157Cu;
    // 0x19157c: 0x0
    ctx->pc = 0x19157cu;
    // NOP
    // 0x191580: 0xc4a20000
    ctx->pc = 0x191580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191584: 0x27bdffe0
    ctx->pc = 0x191584u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x191588: 0xc4a10004
    ctx->pc = 0x191588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19158c: 0x27a70010
    ctx->pc = 0x19158cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    // 0x191590: 0xc4a00008
    ctx->pc = 0x191590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191594: 0x27a30000
    ctx->pc = 0x191594u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 0));
    // 0x191598: 0xe4e20000
    ctx->pc = 0x191598u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x19159c: 0xe4e10004
    ctx->pc = 0x19159cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x1915a0: 0xe4e00008
    ctx->pc = 0x1915a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x1915a4: 0xc4c20000
    ctx->pc = 0x1915a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1915a8: 0xc4c10004
    ctx->pc = 0x1915a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1915ac: 0xc4c00008
    ctx->pc = 0x1915acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1915b0: 0xe4620000
    ctx->pc = 0x1915b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1915b4: 0xe4610004
    ctx->pc = 0x1915b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1915b8: 0xe4600008
    ctx->pc = 0x1915b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1915bc: 0xd8e40000
    ctx->pc = 0x1915bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1915c0: 0xd8650000
    ctx->pc = 0x1915c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1915c4: 0x4bc422aa
    ctx->pc = 0x1915c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1915c8: 0x4b0a5281
    ctx->pc = 0x1915c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1915cc: 0x4b0a5282
    ctx->pc = 0x1915ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1915d0: 0x4a6a03be
    ctx->pc = 0x1915d0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1915d4: 0x4a0003bf
    ctx->pc = 0x1915d4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1915d8: 0x4bc0211c
    ctx->pc = 0x1915d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1915dc: 0x4bc52aaa
    ctx->pc = 0x1915dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1915e0: 0x4b0a5281
    ctx->pc = 0x1915e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1915e4: 0x4b0a5282
    ctx->pc = 0x1915e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1915e8: 0x4a6a03be
    ctx->pc = 0x1915e8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1915ec: 0x4a0003bf
    ctx->pc = 0x1915ecu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1915f0: 0x4bc0295c
    ctx->pc = 0x1915f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1915f4: 0x4bc522fe
    ctx->pc = 0x1915f4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]);
    // 0x1915f8: 0x4bc429ae
    ctx->pc = 0x1915f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1915fc: 0x4bc6322a
    ctx->pc = 0x1915fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x191600: 0x4b084201
    ctx->pc = 0x191600u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x191604: 0x4b084202
    ctx->pc = 0x191604u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x191608: 0x4a6803be
    ctx->pc = 0x191608u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x19160c: 0x4a0003bf
    ctx->pc = 0x19160cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x191610: 0x4bc0319c
    ctx->pc = 0x191610u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x191614: 0x4bc432fe
    ctx->pc = 0x191614u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[4]);
    // 0x191618: 0x4bc6216e
    ctx->pc = 0x191618u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19161c: 0xf8840000
    ctx->pc = 0x19161cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x191620: 0xf8850010
    ctx->pc = 0x191620u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x191624: 0xf8860020
    ctx->pc = 0x191624u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x191628: 0x44801800
    ctx->pc = 0x191628u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 0);
    // 0x19162c: 0x3c033f80
    ctx->pc = 0x19162cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x191630: 0x44801000
    ctx->pc = 0x191630u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x191634: 0x44800800
    ctx->pc = 0x191634u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x191638: 0xe483000c
    ctx->pc = 0x191638u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x19163c: 0xe482001c
    ctx->pc = 0x19163cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x191640: 0x44830000
    ctx->pc = 0x191640u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x191644: 0x0
    ctx->pc = 0x191644u;
    // NOP
    // 0x191648: 0xe481002c
    ctx->pc = 0x191648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x19164c: 0xe480003c
    ctx->pc = 0x19164cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x191650: 0x3e00008
    ctx->pc = 0x191650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191654u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x191658u;
    // 0x191658: 0x0
    ctx->pc = 0x191658u;
    // NOP
    // 0x19165c: 0x0
    ctx->pc = 0x19165cu;
    // NOP
    // 0x191660: 0xc4a20000
    ctx->pc = 0x191660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191664: 0x27bdffe0
    ctx->pc = 0x191664u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x191668: 0xc4a10004
    ctx->pc = 0x191668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19166c: 0x27a70010
    ctx->pc = 0x19166cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    // 0x191670: 0xc4a00008
    ctx->pc = 0x191670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191674: 0x27a30000
    ctx->pc = 0x191674u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 0));
    // 0x191678: 0xe4e20000
    ctx->pc = 0x191678u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x19167c: 0xe4e10004
    ctx->pc = 0x19167cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x191680: 0xe4e00008
    ctx->pc = 0x191680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x191684: 0xc4c20000
    ctx->pc = 0x191684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191688: 0xc4c10004
    ctx->pc = 0x191688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19168c: 0xc4c00008
    ctx->pc = 0x19168cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191690: 0xe4620000
    ctx->pc = 0x191690u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x191694: 0xe4610004
    ctx->pc = 0x191694u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x191698: 0xe4600008
    ctx->pc = 0x191698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x19169c: 0xd8e40000
    ctx->pc = 0x19169cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1916a0: 0xd8650000
    ctx->pc = 0x1916a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1916a4: 0x4bc422aa
    ctx->pc = 0x1916a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1916a8: 0x4b0a5281
    ctx->pc = 0x1916a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1916ac: 0x4b0a5282
    ctx->pc = 0x1916acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1916b0: 0x4a6a03be
    ctx->pc = 0x1916b0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1916b4: 0x4a0003bf
    ctx->pc = 0x1916b4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1916b8: 0x4bc0211c
    ctx->pc = 0x1916b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1916bc: 0x4bc52aaa
    ctx->pc = 0x1916bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1916c0: 0x4b0a5281
    ctx->pc = 0x1916c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1916c4: 0x4b0a5282
    ctx->pc = 0x1916c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1916c8: 0x4a6a03be
    ctx->pc = 0x1916c8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1916cc: 0x4a0003bf
    ctx->pc = 0x1916ccu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1916d0: 0x4bc0295c
    ctx->pc = 0x1916d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1916d4: 0x4bc42afe
    ctx->pc = 0x1916d4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]);
    // 0x1916d8: 0x4bc5216e
    ctx->pc = 0x1916d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1916dc: 0x4bc52a2a
    ctx->pc = 0x1916dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1916e0: 0x4b084201
    ctx->pc = 0x1916e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1916e4: 0x4b084202
    ctx->pc = 0x1916e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1916e8: 0x4a6803be
    ctx->pc = 0x1916e8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1916ec: 0x4a0003bf
    ctx->pc = 0x1916ecu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1916f0: 0x4bc0295c
    ctx->pc = 0x1916f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1916f4: 0x4bc522fe
    ctx->pc = 0x1916f4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]);
    // 0x1916f8: 0x4bc429ae
    ctx->pc = 0x1916f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1916fc: 0xf8840000
    ctx->pc = 0x1916fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x191700: 0xf8850010
    ctx->pc = 0x191700u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x191704: 0xf8860020
    ctx->pc = 0x191704u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x191708: 0x44801800
    ctx->pc = 0x191708u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 0);
    // 0x19170c: 0x3c033f80
    ctx->pc = 0x19170cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x191710: 0x44801000
    ctx->pc = 0x191710u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x191714: 0x44800800
    ctx->pc = 0x191714u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x191718: 0xe483000c
    ctx->pc = 0x191718u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x19171c: 0xe482001c
    ctx->pc = 0x19171cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x191720: 0x44830000
    ctx->pc = 0x191720u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x191724: 0x0
    ctx->pc = 0x191724u;
    // NOP
    // 0x191728: 0xe481002c
    ctx->pc = 0x191728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x19172c: 0xe480003c
    ctx->pc = 0x19172cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x191730: 0x3e00008
    ctx->pc = 0x191730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191734u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x191738u;
    // 0x191738: 0x0
    ctx->pc = 0x191738u;
    // NOP
    // 0x19173c: 0x0
    ctx->pc = 0x19173cu;
    // NOP
    // 0x191740: 0xc4a20000
    ctx->pc = 0x191740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191744: 0x27bdffe0
    ctx->pc = 0x191744u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x191748: 0xc4a10004
    ctx->pc = 0x191748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19174c: 0x27a70010
    ctx->pc = 0x19174cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    // 0x191750: 0xc4a00008
    ctx->pc = 0x191750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191754: 0x27a30000
    ctx->pc = 0x191754u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 0));
    // 0x191758: 0xe4e20000
    ctx->pc = 0x191758u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x19175c: 0xe4e10004
    ctx->pc = 0x19175cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x191760: 0xe4e00008
    ctx->pc = 0x191760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x191764: 0xc4c20000
    ctx->pc = 0x191764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191768: 0xc4c10004
    ctx->pc = 0x191768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19176c: 0xc4c00008
    ctx->pc = 0x19176cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191770: 0xe4620000
    ctx->pc = 0x191770u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x191774: 0xe4610004
    ctx->pc = 0x191774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x191778: 0xe4600008
    ctx->pc = 0x191778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x19177c: 0xd8640000
    ctx->pc = 0x19177cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191780: 0xd8e50000
    ctx->pc = 0x191780u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x191784: 0x4bc422aa
    ctx->pc = 0x191784u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x191788: 0x4b0a5281
    ctx->pc = 0x191788u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x19178c: 0x4b0a5282
    ctx->pc = 0x19178cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x191790: 0x4a6a03be
    ctx->pc = 0x191790u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x191794: 0x4a0003bf
    ctx->pc = 0x191794u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x191798: 0x4bc0211c
    ctx->pc = 0x191798u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19179c: 0x4bc52aaa
    ctx->pc = 0x19179cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1917a0: 0x4b0a5281
    ctx->pc = 0x1917a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1917a4: 0x4b0a5282
    ctx->pc = 0x1917a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1917a8: 0x4a6a03be
    ctx->pc = 0x1917a8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1917ac: 0x4a0003bf
    ctx->pc = 0x1917acu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1917b0: 0x4bc0295c
    ctx->pc = 0x1917b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1917b4: 0x4bc42afe
    ctx->pc = 0x1917b4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]);
    // 0x1917b8: 0x4bc5212e
    ctx->pc = 0x1917b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1917bc: 0x4bc4222a
    ctx->pc = 0x1917bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1917c0: 0x4b084201
    ctx->pc = 0x1917c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1917c4: 0x4b084202
    ctx->pc = 0x1917c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1917c8: 0x4a6803be
    ctx->pc = 0x1917c8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1917cc: 0x4a0003bf
    ctx->pc = 0x1917ccu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1917d0: 0x4bc0211c
    ctx->pc = 0x1917d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1917d4: 0x4bc522fe
    ctx->pc = 0x1917d4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]);
    // 0x1917d8: 0x4bc429ae
    ctx->pc = 0x1917d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1917dc: 0xf8840000
    ctx->pc = 0x1917dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1917e0: 0xf8850010
    ctx->pc = 0x1917e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1917e4: 0xf8860020
    ctx->pc = 0x1917e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1917e8: 0x44801800
    ctx->pc = 0x1917e8u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 0);
    // 0x1917ec: 0x3c033f80
    ctx->pc = 0x1917ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1917f0: 0x44801000
    ctx->pc = 0x1917f0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x1917f4: 0x44800800
    ctx->pc = 0x1917f4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x1917f8: 0xe483000c
    ctx->pc = 0x1917f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1917fc: 0xe482001c
    ctx->pc = 0x1917fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x191800: 0x44830000
    ctx->pc = 0x191800u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x191804: 0x0
    ctx->pc = 0x191804u;
    // NOP
    // 0x191808: 0xe481002c
    ctx->pc = 0x191808u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x19180c: 0xe480003c
    ctx->pc = 0x19180cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x191810: 0x3e00008
    ctx->pc = 0x191810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191814u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x191818u;
    // 0x191818: 0x0
    ctx->pc = 0x191818u;
    // NOP
    // 0x19181c: 0x0
    ctx->pc = 0x19181cu;
    // NOP
    // 0x191820: 0xc4a20000
    ctx->pc = 0x191820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191824: 0x27bdffe0
    ctx->pc = 0x191824u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x191828: 0xc4a10004
    ctx->pc = 0x191828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19182c: 0x27a70010
    ctx->pc = 0x19182cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    // 0x191830: 0xc4a00008
    ctx->pc = 0x191830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191834: 0x27a30000
    ctx->pc = 0x191834u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 0));
    // 0x191838: 0xe4e20000
    ctx->pc = 0x191838u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x19183c: 0xe4e10004
    ctx->pc = 0x19183cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x191840: 0xe4e00008
    ctx->pc = 0x191840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x191844: 0xc4c20000
    ctx->pc = 0x191844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191848: 0xc4c10004
    ctx->pc = 0x191848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19184c: 0xc4c00008
    ctx->pc = 0x19184cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191850: 0xe4620000
    ctx->pc = 0x191850u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x191854: 0xe4610004
    ctx->pc = 0x191854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x191858: 0xe4600008
    ctx->pc = 0x191858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x19185c: 0xd8640000
    ctx->pc = 0x19185cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191860: 0xd8e60000
    ctx->pc = 0x191860u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x191864: 0x4bc422aa
    ctx->pc = 0x191864u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x191868: 0x4b0a5281
    ctx->pc = 0x191868u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x19186c: 0x4b0a5282
    ctx->pc = 0x19186cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x191870: 0x4a6a03be
    ctx->pc = 0x191870u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x191874: 0x4a0003bf
    ctx->pc = 0x191874u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x191878: 0x4bc0211c
    ctx->pc = 0x191878u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19187c: 0x4bc632aa
    ctx->pc = 0x19187cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x191880: 0x4b0a5281
    ctx->pc = 0x191880u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x191884: 0x4b0a5282
    ctx->pc = 0x191884u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x191888: 0x4a6a03be
    ctx->pc = 0x191888u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x19188c: 0x4a0003bf
    ctx->pc = 0x19188cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x191890: 0x4bc0319c
    ctx->pc = 0x191890u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x191894: 0x4bc622fe
    ctx->pc = 0x191894u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[6]);
    // 0x191898: 0x4bc4312e
    ctx->pc = 0x191898u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19189c: 0x4bc4222a
    ctx->pc = 0x19189cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1918a0: 0x4b084201
    ctx->pc = 0x1918a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1918a4: 0x4b084202
    ctx->pc = 0x1918a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1918a8: 0x4a6803be
    ctx->pc = 0x1918a8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1918ac: 0x4a0003bf
    ctx->pc = 0x1918acu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1918b0: 0x4bc0211c
    ctx->pc = 0x1918b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1918b4: 0x4bc432fe
    ctx->pc = 0x1918b4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[4]);
    // 0x1918b8: 0x4bc6216e
    ctx->pc = 0x1918b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1918bc: 0xf8840000
    ctx->pc = 0x1918bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1918c0: 0xf8850010
    ctx->pc = 0x1918c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1918c4: 0xf8860020
    ctx->pc = 0x1918c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1918c8: 0x44801800
    ctx->pc = 0x1918c8u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 0);
    // 0x1918cc: 0x3c033f80
    ctx->pc = 0x1918ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1918d0: 0x44801000
    ctx->pc = 0x1918d0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x1918d4: 0x44800800
    ctx->pc = 0x1918d4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x1918d8: 0xe483000c
    ctx->pc = 0x1918d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1918dc: 0xe482001c
    ctx->pc = 0x1918dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x1918e0: 0x44830000
    ctx->pc = 0x1918e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1918e4: 0x0
    ctx->pc = 0x1918e4u;
    // NOP
    // 0x1918e8: 0xe481002c
    ctx->pc = 0x1918e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x1918ec: 0xe480003c
    ctx->pc = 0x1918ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x1918f0: 0x3e00008
    ctx->pc = 0x1918F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1918F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1918F8u;
    // 0x1918f8: 0x0
    ctx->pc = 0x1918f8u;
    // NOP
    // 0x1918fc: 0x0
    ctx->pc = 0x1918fcu;
    // NOP
}
