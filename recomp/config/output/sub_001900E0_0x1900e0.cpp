#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001900E0
// Address: 0x1900e0 - 0x190a10
void sub_001900E0_0x1900e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1900e0u;

    // 0x1900e0: 0xc4a00030
    ctx->pc = 0x1900e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1900e4: 0xe4800000
    ctx->pc = 0x1900e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1900e8: 0xc4a00034
    ctx->pc = 0x1900e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1900ec: 0xe4800004
    ctx->pc = 0x1900ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1900f0: 0xc4a00038
    ctx->pc = 0x1900f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1900f4: 0x3e00008
    ctx->pc = 0x1900F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1900F8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1900FCu;
    // 0x1900fc: 0x0
    ctx->pc = 0x1900fcu;
    // NOP
    // 0x190100: 0x27bdffe0
    ctx->pc = 0x190100u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x190104: 0x80482d
    ctx->pc = 0x190104u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190108: 0xffbf0000
    ctx->pc = 0x190108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19010c: 0xc063d5c
    ctx->pc = 0x19010Cu;
    SET_GPR_U32(ctx, 31, 0x190114u);
    ctx->pc = 0x190110u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x18F570u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F570_0x18f570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190114u; }
    }
    if (ctx->pc != 0x190114u) { return; }
    ctx->pc = 0x190114u;
    // 0x190114: 0xc7a10010
    ctx->pc = 0x190114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190118: 0xc7a00014
    ctx->pc = 0x190118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19011c: 0x44060800
    ctx->pc = 0x19011cu;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x190120: 0x44070000
    ctx->pc = 0x190120u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[0]);
    // 0x190124: 0xd9240000
    ctx->pc = 0x190124u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190128: 0xd9250010
    ctx->pc = 0x190128u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x19012c: 0x48a6a000
    ctx->pc = 0x19012cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x190130: 0x48a7a800
    ctx->pc = 0x190130u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x190134: 0x4ac002a8
    ctx->pc = 0x190134u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x190138: 0x4b000283
    ctx->pc = 0x190138u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x19013c: 0x4b0002e8
    ctx->pc = 0x19013cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x190140: 0x4a9502c0
    ctx->pc = 0x190140u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x190144: 0x4a5402c0
    ctx->pc = 0x190144u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x190148: 0x4b000328
    ctx->pc = 0x190148u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x19014c: 0x4a940304
    ctx->pc = 0x19014cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x190150: 0x4a550300
    ctx->pc = 0x190150u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x190154: 0xd9260020
    ctx->pc = 0x190154u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x190158: 0x4bc451bc
    ctx->pc = 0x190158u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19015c: 0x4bc458bd
    ctx->pc = 0x19015cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x190160: 0x4bc4610a
    ctx->pc = 0x190160u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x190164: 0x4bc551bc
    ctx->pc = 0x190164u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x190168: 0x4bc558bd
    ctx->pc = 0x190168u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19016c: 0x4bc5614a
    ctx->pc = 0x19016cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x190170: 0x4bc651bc
    ctx->pc = 0x190170u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x190174: 0x4bc658bd
    ctx->pc = 0x190174u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x190178: 0x4bc6618a
    ctx->pc = 0x190178u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19017c: 0xf9240000
    ctx->pc = 0x19017cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x190180: 0xf9250010
    ctx->pc = 0x190180u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x190184: 0xf9260020
    ctx->pc = 0x190184u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x190188: 0xdfbf0000
    ctx->pc = 0x190188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19018c: 0x3e00008
    ctx->pc = 0x19018Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190190u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190194u;
    // 0x190194: 0x0
    ctx->pc = 0x190194u;
    // NOP
    // 0x190198: 0x0
    ctx->pc = 0x190198u;
    // NOP
    // 0x19019c: 0x0
    ctx->pc = 0x19019cu;
    // NOP
    // 0x1901a0: 0x27bdffe0
    ctx->pc = 0x1901a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1901a4: 0x80482d
    ctx->pc = 0x1901a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1901a8: 0xffbf0000
    ctx->pc = 0x1901a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1901ac: 0xc063d5c
    ctx->pc = 0x1901ACu;
    SET_GPR_U32(ctx, 31, 0x1901B4u);
    ctx->pc = 0x1901B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x18F570u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F570_0x18f570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1901B4u; }
    }
    if (ctx->pc != 0x1901B4u) { return; }
    ctx->pc = 0x1901B4u;
    // 0x1901b4: 0xc7a10010
    ctx->pc = 0x1901b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1901b8: 0xc7a00014
    ctx->pc = 0x1901b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1901bc: 0x44060800
    ctx->pc = 0x1901bcu;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x1901c0: 0x44070000
    ctx->pc = 0x1901c0u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[0]);
    // 0x1901c4: 0xd9240000
    ctx->pc = 0x1901c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1901c8: 0xd9250010
    ctx->pc = 0x1901c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1901cc: 0x48a6a000
    ctx->pc = 0x1901ccu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1901d0: 0x48a7a800
    ctx->pc = 0x1901d0u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1901d4: 0x4b4002e8
    ctx->pc = 0x1901d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1901d8: 0x4a8002c3
    ctx->pc = 0x1901d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1901dc: 0x4a8002a8
    ctx->pc = 0x1901dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1901e0: 0x4b150280
    ctx->pc = 0x1901e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1901e4: 0x4a540284
    ctx->pc = 0x1901e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1901e8: 0x4a800328
    ctx->pc = 0x1901e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1901ec: 0x4b140300
    ctx->pc = 0x1901ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1901f0: 0x4a550300
    ctx->pc = 0x1901f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1901f4: 0xd9260020
    ctx->pc = 0x1901f4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x1901f8: 0x4bc451bc
    ctx->pc = 0x1901f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1901fc: 0x4bc458bd
    ctx->pc = 0x1901fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x190200: 0x4bc4610a
    ctx->pc = 0x190200u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x190204: 0x4bc551bc
    ctx->pc = 0x190204u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x190208: 0x4bc558bd
    ctx->pc = 0x190208u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19020c: 0x4bc5614a
    ctx->pc = 0x19020cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x190210: 0x4bc651bc
    ctx->pc = 0x190210u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x190214: 0x4bc658bd
    ctx->pc = 0x190214u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x190218: 0x4bc6618a
    ctx->pc = 0x190218u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19021c: 0xf9240000
    ctx->pc = 0x19021cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x190220: 0xf9250010
    ctx->pc = 0x190220u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x190224: 0xf9260020
    ctx->pc = 0x190224u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x190228: 0xdfbf0000
    ctx->pc = 0x190228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19022c: 0x3e00008
    ctx->pc = 0x19022Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190230u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190234u;
    // 0x190234: 0x0
    ctx->pc = 0x190234u;
    // NOP
    // 0x190238: 0x0
    ctx->pc = 0x190238u;
    // NOP
    // 0x19023c: 0x0
    ctx->pc = 0x19023cu;
    // NOP
    // 0x190240: 0x27bdffe0
    ctx->pc = 0x190240u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x190244: 0x80482d
    ctx->pc = 0x190244u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190248: 0xffbf0000
    ctx->pc = 0x190248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19024c: 0xc063d5c
    ctx->pc = 0x19024Cu;
    SET_GPR_U32(ctx, 31, 0x190254u);
    ctx->pc = 0x190250u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x18F570u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F570_0x18f570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190254u; }
    }
    if (ctx->pc != 0x190254u) { return; }
    ctx->pc = 0x190254u;
    // 0x190254: 0xc7a10010
    ctx->pc = 0x190254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190258: 0xc7a00014
    ctx->pc = 0x190258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19025c: 0x44060800
    ctx->pc = 0x19025cu;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x190260: 0x44070000
    ctx->pc = 0x190260u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[0]);
    // 0x190264: 0xd9240000
    ctx->pc = 0x190264u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x190268: 0xd9250010
    ctx->pc = 0x190268u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x19026c: 0x48a6a000
    ctx->pc = 0x19026cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x190270: 0x48a7a800
    ctx->pc = 0x190270u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x190274: 0x4a4002a8
    ctx->pc = 0x190274u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x190278: 0x4a940280
    ctx->pc = 0x190278u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x19027c: 0x4b150280
    ctx->pc = 0x19027cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x190280: 0x4a4002e8
    ctx->pc = 0x190280u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x190284: 0x4b1402c4
    ctx->pc = 0x190284u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x190288: 0x4a9502c0
    ctx->pc = 0x190288u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x19028c: 0x4bcc033d
    ctx->pc = 0x19028cu;
    ctx->vu0_vf[12] = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,1));
    // 0x190290: 0xd9260020
    ctx->pc = 0x190290u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x190294: 0x4bc451bc
    ctx->pc = 0x190294u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x190298: 0x4bc458bd
    ctx->pc = 0x190298u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19029c: 0x4bc4610a
    ctx->pc = 0x19029cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1902a0: 0x4bc551bc
    ctx->pc = 0x1902a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1902a4: 0x4bc558bd
    ctx->pc = 0x1902a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1902a8: 0x4bc5614a
    ctx->pc = 0x1902a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1902ac: 0x4bc651bc
    ctx->pc = 0x1902acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1902b0: 0x4bc658bd
    ctx->pc = 0x1902b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1902b4: 0x4bc6618a
    ctx->pc = 0x1902b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1902b8: 0xf9240000
    ctx->pc = 0x1902b8u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1902bc: 0xf9250010
    ctx->pc = 0x1902bcu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1902c0: 0xf9260020
    ctx->pc = 0x1902c0u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1902c4: 0xdfbf0000
    ctx->pc = 0x1902c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1902c8: 0x3e00008
    ctx->pc = 0x1902C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1902CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1902D0u;
    // 0x1902d0: 0x27bdffa0
    ctx->pc = 0x1902d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1902d4: 0xffbf0020
    ctx->pc = 0x1902d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1902d8: 0x7fb00010
    ctx->pc = 0x1902d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1902dc: 0xe7b60008
    ctx->pc = 0x1902dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1902e0: 0x80802d
    ctx->pc = 0x1902e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1902e4: 0xe7b50004
    ctx->pc = 0x1902e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1902e8: 0xe7b40000
    ctx->pc = 0x1902e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1902ec: 0x46006586
    ctx->pc = 0x1902ecu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1902f0: 0x46006d46
    ctx->pc = 0x1902f0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1902f4: 0xc063f88
    ctx->pc = 0x1902F4u;
    SET_GPR_U32(ctx, 31, 0x1902FCu);
    ctx->pc = 0x1902F8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    ctx->pc = 0x18FE20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FE20_0x18fe20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1902FCu; }
    }
    if (ctx->pc != 0x1902FCu) { return; }
    ctx->pc = 0x1902FCu;
    // 0x1902fc: 0x4600b306
    ctx->pc = 0x1902fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x190300: 0xc063d5c
    ctx->pc = 0x190300u;
    SET_GPR_U32(ctx, 31, 0x190308u);
    ctx->pc = 0x190304u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x18F570u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F570_0x18f570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190308u; }
    }
    if (ctx->pc != 0x190308u) { return; }
    ctx->pc = 0x190308u;
    // 0x190308: 0xc7a10050
    ctx->pc = 0x190308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19030c: 0xc7a00054
    ctx->pc = 0x19030cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190310: 0x44060800
    ctx->pc = 0x190310u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x190314: 0x44070000
    ctx->pc = 0x190314u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[0]);
    // 0x190318: 0xda040000
    ctx->pc = 0x190318u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19031c: 0xda050010
    ctx->pc = 0x19031cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x190320: 0x48a6a000
    ctx->pc = 0x190320u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x190324: 0x48a7a800
    ctx->pc = 0x190324u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x190328: 0x4ac002a8
    ctx->pc = 0x190328u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x19032c: 0x4b000283
    ctx->pc = 0x19032cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x190330: 0x4b0002e8
    ctx->pc = 0x190330u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x190334: 0x4a9502c0
    ctx->pc = 0x190334u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x190338: 0x4a5402c0
    ctx->pc = 0x190338u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x19033c: 0x4b000328
    ctx->pc = 0x19033cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x190340: 0x4a940304
    ctx->pc = 0x190340u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x190344: 0x4a550300
    ctx->pc = 0x190344u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x190348: 0xda060020
    ctx->pc = 0x190348u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x19034c: 0x4bc451bc
    ctx->pc = 0x19034cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x190350: 0x4bc458bd
    ctx->pc = 0x190350u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x190354: 0x4bc4610a
    ctx->pc = 0x190354u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x190358: 0x4bc551bc
    ctx->pc = 0x190358u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19035c: 0x4bc558bd
    ctx->pc = 0x19035cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x190360: 0x4bc5614a
    ctx->pc = 0x190360u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x190364: 0x4bc651bc
    ctx->pc = 0x190364u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x190368: 0x4bc658bd
    ctx->pc = 0x190368u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19036c: 0x4bc6618a
    ctx->pc = 0x19036cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x190370: 0xfa040000
    ctx->pc = 0x190370u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x190374: 0xfa050010
    ctx->pc = 0x190374u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x190378: 0xfa060020
    ctx->pc = 0x190378u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x19037c: 0x4600ab06
    ctx->pc = 0x19037cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x190380: 0xc063d5c
    ctx->pc = 0x190380u;
    SET_GPR_U32(ctx, 31, 0x190388u);
    ctx->pc = 0x190384u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x18F570u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F570_0x18f570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190388u; }
    }
    if (ctx->pc != 0x190388u) { return; }
    ctx->pc = 0x190388u;
    // 0x190388: 0xc7a10040
    ctx->pc = 0x190388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19038c: 0xc7a00044
    ctx->pc = 0x19038cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190390: 0x44060800
    ctx->pc = 0x190390u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x190394: 0x44070000
    ctx->pc = 0x190394u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[0]);
    // 0x190398: 0xda040000
    ctx->pc = 0x190398u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19039c: 0xda050010
    ctx->pc = 0x19039cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1903a0: 0x48a6a000
    ctx->pc = 0x1903a0u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1903a4: 0x48a7a800
    ctx->pc = 0x1903a4u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1903a8: 0x4b4002e8
    ctx->pc = 0x1903a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1903ac: 0x4a8002c3
    ctx->pc = 0x1903acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1903b0: 0x4a8002a8
    ctx->pc = 0x1903b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1903b4: 0x4b150280
    ctx->pc = 0x1903b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1903b8: 0x4a540284
    ctx->pc = 0x1903b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1903bc: 0x4a800328
    ctx->pc = 0x1903bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1903c0: 0x4b140300
    ctx->pc = 0x1903c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1903c4: 0x4a550300
    ctx->pc = 0x1903c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1903c8: 0xda060020
    ctx->pc = 0x1903c8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1903cc: 0x4bc451bc
    ctx->pc = 0x1903ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1903d0: 0x4bc458bd
    ctx->pc = 0x1903d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1903d4: 0x4bc4610a
    ctx->pc = 0x1903d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1903d8: 0x4bc551bc
    ctx->pc = 0x1903d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1903dc: 0x4bc558bd
    ctx->pc = 0x1903dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1903e0: 0x4bc5614a
    ctx->pc = 0x1903e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1903e4: 0x4bc651bc
    ctx->pc = 0x1903e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1903e8: 0x4bc658bd
    ctx->pc = 0x1903e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1903ec: 0x4bc6618a
    ctx->pc = 0x1903ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1903f0: 0xfa040000
    ctx->pc = 0x1903f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1903f4: 0xfa050010
    ctx->pc = 0x1903f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1903f8: 0xfa060020
    ctx->pc = 0x1903f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1903fc: 0x4600a306
    ctx->pc = 0x1903fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x190400: 0xc063d5c
    ctx->pc = 0x190400u;
    SET_GPR_U32(ctx, 31, 0x190408u);
    ctx->pc = 0x190404u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x18F570u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F570_0x18f570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190408u; }
    }
    if (ctx->pc != 0x190408u) { return; }
    ctx->pc = 0x190408u;
    // 0x190408: 0xc7a10030
    ctx->pc = 0x190408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19040c: 0xc7a00034
    ctx->pc = 0x19040cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190410: 0x44060800
    ctx->pc = 0x190410u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x190414: 0x44070000
    ctx->pc = 0x190414u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[0]);
    // 0x190418: 0xda040000
    ctx->pc = 0x190418u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19041c: 0xda050010
    ctx->pc = 0x19041cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x190420: 0x48a6a000
    ctx->pc = 0x190420u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x190424: 0x48a7a800
    ctx->pc = 0x190424u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x190428: 0x4a4002a8
    ctx->pc = 0x190428u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x19042c: 0x4a940280
    ctx->pc = 0x19042cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x190430: 0x4b150280
    ctx->pc = 0x190430u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x190434: 0x4a4002e8
    ctx->pc = 0x190434u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x190438: 0x4b1402c4
    ctx->pc = 0x190438u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x19043c: 0x4a9502c0
    ctx->pc = 0x19043cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x190440: 0x4bcc033d
    ctx->pc = 0x190440u;
    ctx->vu0_vf[12] = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,1));
    // 0x190444: 0xda060020
    ctx->pc = 0x190444u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x190448: 0x4bc451bc
    ctx->pc = 0x190448u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19044c: 0x4bc458bd
    ctx->pc = 0x19044cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x190450: 0x4bc4610a
    ctx->pc = 0x190450u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x190454: 0x4bc551bc
    ctx->pc = 0x190454u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x190458: 0x4bc558bd
    ctx->pc = 0x190458u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19045c: 0x4bc5614a
    ctx->pc = 0x19045cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x190460: 0x4bc651bc
    ctx->pc = 0x190460u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x190464: 0x4bc658bd
    ctx->pc = 0x190464u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x190468: 0x4bc6618a
    ctx->pc = 0x190468u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19046c: 0xfa040000
    ctx->pc = 0x19046cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x190470: 0xfa050010
    ctx->pc = 0x190470u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x190474: 0xfa060020
    ctx->pc = 0x190474u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x190478: 0xdfbf0020
    ctx->pc = 0x190478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19047c: 0xc7b60008
    ctx->pc = 0x19047cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x190480: 0x7bb00010
    ctx->pc = 0x190480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190484: 0xc7b50004
    ctx->pc = 0x190484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x190488: 0xc7b40000
    ctx->pc = 0x190488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19048c: 0x3e00008
    ctx->pc = 0x19048Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190490u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190494u;
    // 0x190494: 0x0
    ctx->pc = 0x190494u;
    // NOP
    // 0x190498: 0x0
    ctx->pc = 0x190498u;
    // NOP
    // 0x19049c: 0x0
    ctx->pc = 0x19049cu;
    // NOP
    // 0x1904a0: 0x27bdffa0
    ctx->pc = 0x1904a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1904a4: 0xffbf0020
    ctx->pc = 0x1904a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1904a8: 0x7fb00010
    ctx->pc = 0x1904a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1904ac: 0xe7b60008
    ctx->pc = 0x1904acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1904b0: 0x80802d
    ctx->pc = 0x1904b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1904b4: 0xe7b50004
    ctx->pc = 0x1904b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1904b8: 0xe7b40000
    ctx->pc = 0x1904b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1904bc: 0x46006586
    ctx->pc = 0x1904bcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1904c0: 0x46006d46
    ctx->pc = 0x1904c0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1904c4: 0xc063f88
    ctx->pc = 0x1904C4u;
    SET_GPR_U32(ctx, 31, 0x1904CCu);
    ctx->pc = 0x1904C8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    ctx->pc = 0x18FE20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FE20_0x18fe20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1904CCu; }
    }
    if (ctx->pc != 0x1904CCu) { return; }
    ctx->pc = 0x1904CCu;
    // 0x1904cc: 0x4600b306
    ctx->pc = 0x1904ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1904d0: 0xc063d5c
    ctx->pc = 0x1904D0u;
    SET_GPR_U32(ctx, 31, 0x1904D8u);
    ctx->pc = 0x1904D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x18F570u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F570_0x18f570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1904D8u; }
    }
    if (ctx->pc != 0x1904D8u) { return; }
    ctx->pc = 0x1904D8u;
    // 0x1904d8: 0xc7a10050
    ctx->pc = 0x1904d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1904dc: 0xc7a00054
    ctx->pc = 0x1904dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1904e0: 0x44060800
    ctx->pc = 0x1904e0u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x1904e4: 0x44070000
    ctx->pc = 0x1904e4u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[0]);
    // 0x1904e8: 0xda040000
    ctx->pc = 0x1904e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1904ec: 0xda050010
    ctx->pc = 0x1904ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1904f0: 0x48a6a000
    ctx->pc = 0x1904f0u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1904f4: 0x48a7a800
    ctx->pc = 0x1904f4u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1904f8: 0x4ac002a8
    ctx->pc = 0x1904f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1904fc: 0x4b000283
    ctx->pc = 0x1904fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x190500: 0x4b0002e8
    ctx->pc = 0x190500u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x190504: 0x4a9502c0
    ctx->pc = 0x190504u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x190508: 0x4a5402c0
    ctx->pc = 0x190508u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x19050c: 0x4b000328
    ctx->pc = 0x19050cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x190510: 0x4a940304
    ctx->pc = 0x190510u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x190514: 0x4a550300
    ctx->pc = 0x190514u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x190518: 0xda060020
    ctx->pc = 0x190518u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x19051c: 0x4bc451bc
    ctx->pc = 0x19051cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x190520: 0x4bc458bd
    ctx->pc = 0x190520u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x190524: 0x4bc4610a
    ctx->pc = 0x190524u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x190528: 0x4bc551bc
    ctx->pc = 0x190528u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19052c: 0x4bc558bd
    ctx->pc = 0x19052cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x190530: 0x4bc5614a
    ctx->pc = 0x190530u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x190534: 0x4bc651bc
    ctx->pc = 0x190534u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x190538: 0x4bc658bd
    ctx->pc = 0x190538u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19053c: 0x4bc6618a
    ctx->pc = 0x19053cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x190540: 0xfa040000
    ctx->pc = 0x190540u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x190544: 0xfa050010
    ctx->pc = 0x190544u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x190548: 0xfa060020
    ctx->pc = 0x190548u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x19054c: 0x4600a306
    ctx->pc = 0x19054cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x190550: 0xc063d5c
    ctx->pc = 0x190550u;
    SET_GPR_U32(ctx, 31, 0x190558u);
    ctx->pc = 0x190554u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x18F570u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F570_0x18f570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190558u; }
    }
    if (ctx->pc != 0x190558u) { return; }
    ctx->pc = 0x190558u;
    // 0x190558: 0xc7a10040
    ctx->pc = 0x190558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19055c: 0xc7a00044
    ctx->pc = 0x19055cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190560: 0x44060800
    ctx->pc = 0x190560u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x190564: 0x44070000
    ctx->pc = 0x190564u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[0]);
    // 0x190568: 0xda040000
    ctx->pc = 0x190568u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19056c: 0xda050010
    ctx->pc = 0x19056cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x190570: 0x48a6a000
    ctx->pc = 0x190570u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x190574: 0x48a7a800
    ctx->pc = 0x190574u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x190578: 0x4a4002a8
    ctx->pc = 0x190578u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x19057c: 0x4a940280
    ctx->pc = 0x19057cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x190580: 0x4b150280
    ctx->pc = 0x190580u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x190584: 0x4a4002e8
    ctx->pc = 0x190584u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x190588: 0x4b1402c4
    ctx->pc = 0x190588u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x19058c: 0x4a9502c0
    ctx->pc = 0x19058cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x190590: 0x4bcc033d
    ctx->pc = 0x190590u;
    ctx->vu0_vf[12] = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,1));
    // 0x190594: 0xda060020
    ctx->pc = 0x190594u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x190598: 0x4bc451bc
    ctx->pc = 0x190598u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19059c: 0x4bc458bd
    ctx->pc = 0x19059cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1905a0: 0x4bc4610a
    ctx->pc = 0x1905a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1905a4: 0x4bc551bc
    ctx->pc = 0x1905a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1905a8: 0x4bc558bd
    ctx->pc = 0x1905a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1905ac: 0x4bc5614a
    ctx->pc = 0x1905acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1905b0: 0x4bc651bc
    ctx->pc = 0x1905b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1905b4: 0x4bc658bd
    ctx->pc = 0x1905b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1905b8: 0x4bc6618a
    ctx->pc = 0x1905b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1905bc: 0xfa040000
    ctx->pc = 0x1905bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1905c0: 0xfa050010
    ctx->pc = 0x1905c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1905c4: 0xfa060020
    ctx->pc = 0x1905c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1905c8: 0x4600ab06
    ctx->pc = 0x1905c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1905cc: 0xc063d5c
    ctx->pc = 0x1905CCu;
    SET_GPR_U32(ctx, 31, 0x1905D4u);
    ctx->pc = 0x1905D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x18F570u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F570_0x18f570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1905D4u; }
    }
    if (ctx->pc != 0x1905D4u) { return; }
    ctx->pc = 0x1905D4u;
    // 0x1905d4: 0xc7a10030
    ctx->pc = 0x1905d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1905d8: 0xc7a00034
    ctx->pc = 0x1905d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1905dc: 0x44060800
    ctx->pc = 0x1905dcu;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x1905e0: 0x44070000
    ctx->pc = 0x1905e0u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[0]);
    // 0x1905e4: 0xda040000
    ctx->pc = 0x1905e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1905e8: 0xda050010
    ctx->pc = 0x1905e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1905ec: 0x48a6a000
    ctx->pc = 0x1905ecu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1905f0: 0x48a7a800
    ctx->pc = 0x1905f0u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1905f4: 0x4b4002e8
    ctx->pc = 0x1905f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1905f8: 0x4a8002c3
    ctx->pc = 0x1905f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1905fc: 0x4a8002a8
    ctx->pc = 0x1905fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x190600: 0x4b150280
    ctx->pc = 0x190600u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x190604: 0x4a540284
    ctx->pc = 0x190604u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x190608: 0x4a800328
    ctx->pc = 0x190608u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x19060c: 0x4b140300
    ctx->pc = 0x19060cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x190610: 0x4a550300
    ctx->pc = 0x190610u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x190614: 0xda060020
    ctx->pc = 0x190614u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x190618: 0x4bc451bc
    ctx->pc = 0x190618u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19061c: 0x4bc458bd
    ctx->pc = 0x19061cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x190620: 0x4bc4610a
    ctx->pc = 0x190620u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x190624: 0x4bc551bc
    ctx->pc = 0x190624u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x190628: 0x4bc558bd
    ctx->pc = 0x190628u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19062c: 0x4bc5614a
    ctx->pc = 0x19062cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x190630: 0x4bc651bc
    ctx->pc = 0x190630u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x190634: 0x4bc658bd
    ctx->pc = 0x190634u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x190638: 0x4bc6618a
    ctx->pc = 0x190638u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19063c: 0xfa040000
    ctx->pc = 0x19063cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x190640: 0xfa050010
    ctx->pc = 0x190640u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x190644: 0xfa060020
    ctx->pc = 0x190644u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x190648: 0xdfbf0020
    ctx->pc = 0x190648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19064c: 0xc7b60008
    ctx->pc = 0x19064cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x190650: 0x7bb00010
    ctx->pc = 0x190650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190654: 0xc7b50004
    ctx->pc = 0x190654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x190658: 0xc7b40000
    ctx->pc = 0x190658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19065c: 0x3e00008
    ctx->pc = 0x19065Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190660u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190664u;
    // 0x190664: 0x0
    ctx->pc = 0x190664u;
    // NOP
    // 0x190668: 0x0
    ctx->pc = 0x190668u;
    // NOP
    // 0x19066c: 0x0
    ctx->pc = 0x19066cu;
    // NOP
    // 0x190670: 0x27bdffa0
    ctx->pc = 0x190670u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x190674: 0xffbf0020
    ctx->pc = 0x190674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x190678: 0x7fb00010
    ctx->pc = 0x190678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19067c: 0xe7b60008
    ctx->pc = 0x19067cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x190680: 0x80802d
    ctx->pc = 0x190680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190684: 0xe7b50004
    ctx->pc = 0x190684u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x190688: 0xe7b40000
    ctx->pc = 0x190688u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19068c: 0x46006586
    ctx->pc = 0x19068cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x190690: 0x46006d46
    ctx->pc = 0x190690u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x190694: 0xc063f88
    ctx->pc = 0x190694u;
    SET_GPR_U32(ctx, 31, 0x19069Cu);
    ctx->pc = 0x190698u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    ctx->pc = 0x18FE20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FE20_0x18fe20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19069Cu; }
    }
    if (ctx->pc != 0x19069Cu) { return; }
    ctx->pc = 0x19069Cu;
    // 0x19069c: 0x4600ab06
    ctx->pc = 0x19069cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1906a0: 0xc063d5c
    ctx->pc = 0x1906A0u;
    SET_GPR_U32(ctx, 31, 0x1906A8u);
    ctx->pc = 0x1906A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x18F570u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F570_0x18f570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1906A8u; }
    }
    if (ctx->pc != 0x1906A8u) { return; }
    ctx->pc = 0x1906A8u;
    // 0x1906a8: 0xc7a10050
    ctx->pc = 0x1906a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1906ac: 0xc7a00054
    ctx->pc = 0x1906acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1906b0: 0x44060800
    ctx->pc = 0x1906b0u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x1906b4: 0x44070000
    ctx->pc = 0x1906b4u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[0]);
    // 0x1906b8: 0xda040000
    ctx->pc = 0x1906b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1906bc: 0xda050010
    ctx->pc = 0x1906bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1906c0: 0x48a6a000
    ctx->pc = 0x1906c0u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1906c4: 0x48a7a800
    ctx->pc = 0x1906c4u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1906c8: 0x4b4002e8
    ctx->pc = 0x1906c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1906cc: 0x4a8002c3
    ctx->pc = 0x1906ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1906d0: 0x4a8002a8
    ctx->pc = 0x1906d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1906d4: 0x4b150280
    ctx->pc = 0x1906d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1906d8: 0x4a540284
    ctx->pc = 0x1906d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1906dc: 0x4a800328
    ctx->pc = 0x1906dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1906e0: 0x4b140300
    ctx->pc = 0x1906e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1906e4: 0x4a550300
    ctx->pc = 0x1906e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1906e8: 0xda060020
    ctx->pc = 0x1906e8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1906ec: 0x4bc451bc
    ctx->pc = 0x1906ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1906f0: 0x4bc458bd
    ctx->pc = 0x1906f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1906f4: 0x4bc4610a
    ctx->pc = 0x1906f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1906f8: 0x4bc551bc
    ctx->pc = 0x1906f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1906fc: 0x4bc558bd
    ctx->pc = 0x1906fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x190700: 0x4bc5614a
    ctx->pc = 0x190700u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x190704: 0x4bc651bc
    ctx->pc = 0x190704u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x190708: 0x4bc658bd
    ctx->pc = 0x190708u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19070c: 0x4bc6618a
    ctx->pc = 0x19070cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x190710: 0xfa040000
    ctx->pc = 0x190710u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x190714: 0xfa050010
    ctx->pc = 0x190714u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x190718: 0xfa060020
    ctx->pc = 0x190718u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x19071c: 0x4600b306
    ctx->pc = 0x19071cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x190720: 0xc063d5c
    ctx->pc = 0x190720u;
    SET_GPR_U32(ctx, 31, 0x190728u);
    ctx->pc = 0x190724u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x18F570u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F570_0x18f570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190728u; }
    }
    if (ctx->pc != 0x190728u) { return; }
    ctx->pc = 0x190728u;
    // 0x190728: 0xc7a10040
    ctx->pc = 0x190728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19072c: 0xc7a00044
    ctx->pc = 0x19072cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190730: 0x44060800
    ctx->pc = 0x190730u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x190734: 0x44070000
    ctx->pc = 0x190734u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[0]);
    // 0x190738: 0xda040000
    ctx->pc = 0x190738u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19073c: 0xda050010
    ctx->pc = 0x19073cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x190740: 0x48a6a000
    ctx->pc = 0x190740u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x190744: 0x48a7a800
    ctx->pc = 0x190744u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x190748: 0x4ac002a8
    ctx->pc = 0x190748u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x19074c: 0x4b000283
    ctx->pc = 0x19074cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x190750: 0x4b0002e8
    ctx->pc = 0x190750u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x190754: 0x4a9502c0
    ctx->pc = 0x190754u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x190758: 0x4a5402c0
    ctx->pc = 0x190758u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x19075c: 0x4b000328
    ctx->pc = 0x19075cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x190760: 0x4a940304
    ctx->pc = 0x190760u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x190764: 0x4a550300
    ctx->pc = 0x190764u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x190768: 0xda060020
    ctx->pc = 0x190768u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x19076c: 0x4bc451bc
    ctx->pc = 0x19076cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x190770: 0x4bc458bd
    ctx->pc = 0x190770u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x190774: 0x4bc4610a
    ctx->pc = 0x190774u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x190778: 0x4bc551bc
    ctx->pc = 0x190778u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19077c: 0x4bc558bd
    ctx->pc = 0x19077cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x190780: 0x4bc5614a
    ctx->pc = 0x190780u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x190784: 0x4bc651bc
    ctx->pc = 0x190784u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x190788: 0x4bc658bd
    ctx->pc = 0x190788u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19078c: 0x4bc6618a
    ctx->pc = 0x19078cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x190790: 0xfa040000
    ctx->pc = 0x190790u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x190794: 0xfa050010
    ctx->pc = 0x190794u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x190798: 0xfa060020
    ctx->pc = 0x190798u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x19079c: 0x4600a306
    ctx->pc = 0x19079cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1907a0: 0xc063d5c
    ctx->pc = 0x1907A0u;
    SET_GPR_U32(ctx, 31, 0x1907A8u);
    ctx->pc = 0x1907A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x18F570u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F570_0x18f570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1907A8u; }
    }
    if (ctx->pc != 0x1907A8u) { return; }
    ctx->pc = 0x1907A8u;
    // 0x1907a8: 0xc7a10030
    ctx->pc = 0x1907a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1907ac: 0xc7a00034
    ctx->pc = 0x1907acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1907b0: 0x44060800
    ctx->pc = 0x1907b0u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x1907b4: 0x44070000
    ctx->pc = 0x1907b4u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[0]);
    // 0x1907b8: 0xda040000
    ctx->pc = 0x1907b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1907bc: 0xda050010
    ctx->pc = 0x1907bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1907c0: 0x48a6a000
    ctx->pc = 0x1907c0u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1907c4: 0x48a7a800
    ctx->pc = 0x1907c4u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1907c8: 0x4a4002a8
    ctx->pc = 0x1907c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1907cc: 0x4a940280
    ctx->pc = 0x1907ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1907d0: 0x4b150280
    ctx->pc = 0x1907d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1907d4: 0x4a4002e8
    ctx->pc = 0x1907d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1907d8: 0x4b1402c4
    ctx->pc = 0x1907d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1907dc: 0x4a9502c0
    ctx->pc = 0x1907dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1907e0: 0x4bcc033d
    ctx->pc = 0x1907e0u;
    ctx->vu0_vf[12] = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,1));
    // 0x1907e4: 0xda060020
    ctx->pc = 0x1907e4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1907e8: 0x4bc451bc
    ctx->pc = 0x1907e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1907ec: 0x4bc458bd
    ctx->pc = 0x1907ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1907f0: 0x4bc4610a
    ctx->pc = 0x1907f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1907f4: 0x4bc551bc
    ctx->pc = 0x1907f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1907f8: 0x4bc558bd
    ctx->pc = 0x1907f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1907fc: 0x4bc5614a
    ctx->pc = 0x1907fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x190800: 0x4bc651bc
    ctx->pc = 0x190800u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x190804: 0x4bc658bd
    ctx->pc = 0x190804u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x190808: 0x4bc6618a
    ctx->pc = 0x190808u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19080c: 0xfa040000
    ctx->pc = 0x19080cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x190810: 0xfa050010
    ctx->pc = 0x190810u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x190814: 0xfa060020
    ctx->pc = 0x190814u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x190818: 0xdfbf0020
    ctx->pc = 0x190818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19081c: 0xc7b60008
    ctx->pc = 0x19081cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x190820: 0x7bb00010
    ctx->pc = 0x190820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190824: 0xc7b50004
    ctx->pc = 0x190824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x190828: 0xc7b40000
    ctx->pc = 0x190828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19082c: 0x3e00008
    ctx->pc = 0x19082Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190830u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190834u;
    // 0x190834: 0x0
    ctx->pc = 0x190834u;
    // NOP
    // 0x190838: 0x0
    ctx->pc = 0x190838u;
    // NOP
    // 0x19083c: 0x0
    ctx->pc = 0x19083cu;
    // NOP
    // 0x190840: 0x27bdffa0
    ctx->pc = 0x190840u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x190844: 0xffbf0020
    ctx->pc = 0x190844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x190848: 0x7fb00010
    ctx->pc = 0x190848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19084c: 0xe7b60008
    ctx->pc = 0x19084cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x190850: 0x80802d
    ctx->pc = 0x190850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190854: 0xe7b50004
    ctx->pc = 0x190854u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x190858: 0xe7b40000
    ctx->pc = 0x190858u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19085c: 0x46006586
    ctx->pc = 0x19085cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x190860: 0x46006d46
    ctx->pc = 0x190860u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x190864: 0xc063f88
    ctx->pc = 0x190864u;
    SET_GPR_U32(ctx, 31, 0x19086Cu);
    ctx->pc = 0x190868u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    ctx->pc = 0x18FE20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FE20_0x18fe20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19086Cu; }
    }
    if (ctx->pc != 0x19086Cu) { return; }
    ctx->pc = 0x19086Cu;
    // 0x19086c: 0x4600a306
    ctx->pc = 0x19086cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x190870: 0xc063d5c
    ctx->pc = 0x190870u;
    SET_GPR_U32(ctx, 31, 0x190878u);
    ctx->pc = 0x190874u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x18F570u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F570_0x18f570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190878u; }
    }
    if (ctx->pc != 0x190878u) { return; }
    ctx->pc = 0x190878u;
    // 0x190878: 0xc7a10050
    ctx->pc = 0x190878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19087c: 0xc7a00054
    ctx->pc = 0x19087cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190880: 0x44060800
    ctx->pc = 0x190880u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x190884: 0x44070000
    ctx->pc = 0x190884u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[0]);
    // 0x190888: 0xda040000
    ctx->pc = 0x190888u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19088c: 0xda050010
    ctx->pc = 0x19088cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x190890: 0x48a6a000
    ctx->pc = 0x190890u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x190894: 0x48a7a800
    ctx->pc = 0x190894u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x190898: 0x4a4002a8
    ctx->pc = 0x190898u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x19089c: 0x4a940280
    ctx->pc = 0x19089cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1908a0: 0x4b150280
    ctx->pc = 0x1908a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1908a4: 0x4a4002e8
    ctx->pc = 0x1908a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1908a8: 0x4b1402c4
    ctx->pc = 0x1908a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1908ac: 0x4a9502c0
    ctx->pc = 0x1908acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1908b0: 0x4bcc033d
    ctx->pc = 0x1908b0u;
    ctx->vu0_vf[12] = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,1));
    // 0x1908b4: 0xda060020
    ctx->pc = 0x1908b4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1908b8: 0x4bc451bc
    ctx->pc = 0x1908b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1908bc: 0x4bc458bd
    ctx->pc = 0x1908bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1908c0: 0x4bc4610a
    ctx->pc = 0x1908c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1908c4: 0x4bc551bc
    ctx->pc = 0x1908c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1908c8: 0x4bc558bd
    ctx->pc = 0x1908c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1908cc: 0x4bc5614a
    ctx->pc = 0x1908ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1908d0: 0x4bc651bc
    ctx->pc = 0x1908d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1908d4: 0x4bc658bd
    ctx->pc = 0x1908d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1908d8: 0x4bc6618a
    ctx->pc = 0x1908d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1908dc: 0xfa040000
    ctx->pc = 0x1908dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1908e0: 0xfa050010
    ctx->pc = 0x1908e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1908e4: 0xfa060020
    ctx->pc = 0x1908e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1908e8: 0x4600ab06
    ctx->pc = 0x1908e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1908ec: 0xc063d5c
    ctx->pc = 0x1908ECu;
    SET_GPR_U32(ctx, 31, 0x1908F4u);
    ctx->pc = 0x1908F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x18F570u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F570_0x18f570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1908F4u; }
    }
    if (ctx->pc != 0x1908F4u) { return; }
    ctx->pc = 0x1908F4u;
    // 0x1908f4: 0xc7a10040
    ctx->pc = 0x1908f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1908f8: 0xc7a00044
    ctx->pc = 0x1908f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1908fc: 0x44060800
    ctx->pc = 0x1908fcu;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x190900: 0x44070000
    ctx->pc = 0x190900u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[0]);
    // 0x190904: 0xda040000
    ctx->pc = 0x190904u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x190908: 0xda050010
    ctx->pc = 0x190908u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19090c: 0x48a6a000
    ctx->pc = 0x19090cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x190910: 0x48a7a800
    ctx->pc = 0x190910u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x190914: 0x4b4002e8
    ctx->pc = 0x190914u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x190918: 0x4a8002c3
    ctx->pc = 0x190918u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x19091c: 0x4a8002a8
    ctx->pc = 0x19091cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x190920: 0x4b150280
    ctx->pc = 0x190920u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x190924: 0x4a540284
    ctx->pc = 0x190924u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x190928: 0x4a800328
    ctx->pc = 0x190928u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x19092c: 0x4b140300
    ctx->pc = 0x19092cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x190930: 0x4a550300
    ctx->pc = 0x190930u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x190934: 0xda060020
    ctx->pc = 0x190934u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x190938: 0x4bc451bc
    ctx->pc = 0x190938u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x19093c: 0x4bc458bd
    ctx->pc = 0x19093cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x190940: 0x4bc4610a
    ctx->pc = 0x190940u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x190944: 0x4bc551bc
    ctx->pc = 0x190944u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x190948: 0x4bc558bd
    ctx->pc = 0x190948u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x19094c: 0x4bc5614a
    ctx->pc = 0x19094cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x190950: 0x4bc651bc
    ctx->pc = 0x190950u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x190954: 0x4bc658bd
    ctx->pc = 0x190954u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x190958: 0x4bc6618a
    ctx->pc = 0x190958u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x19095c: 0xfa040000
    ctx->pc = 0x19095cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x190960: 0xfa050010
    ctx->pc = 0x190960u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x190964: 0xfa060020
    ctx->pc = 0x190964u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x190968: 0x4600b306
    ctx->pc = 0x190968u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x19096c: 0xc063d5c
    ctx->pc = 0x19096Cu;
    SET_GPR_U32(ctx, 31, 0x190974u);
    ctx->pc = 0x190970u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x18F570u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F570_0x18f570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190974u; }
    }
    if (ctx->pc != 0x190974u) { return; }
    ctx->pc = 0x190974u;
    // 0x190974: 0xc7a10030
    ctx->pc = 0x190974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190978: 0xc7a00034
    ctx->pc = 0x190978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19097c: 0x44060800
    ctx->pc = 0x19097cu;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x190980: 0x44070000
    ctx->pc = 0x190980u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[0]);
    // 0x190984: 0xda040000
    ctx->pc = 0x190984u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x190988: 0xda050010
    ctx->pc = 0x190988u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19098c: 0x48a6a000
    ctx->pc = 0x19098cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x190990: 0x48a7a800
    ctx->pc = 0x190990u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x190994: 0x4ac002a8
    ctx->pc = 0x190994u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x190998: 0x4b000283
    ctx->pc = 0x190998u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x19099c: 0x4b0002e8
    ctx->pc = 0x19099cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1909a0: 0x4a9502c0
    ctx->pc = 0x1909a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1909a4: 0x4a5402c0
    ctx->pc = 0x1909a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1909a8: 0x4b000328
    ctx->pc = 0x1909a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1909ac: 0x4a940304
    ctx->pc = 0x1909acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1909b0: 0x4a550300
    ctx->pc = 0x1909b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1909b4: 0xda060020
    ctx->pc = 0x1909b4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1909b8: 0x4bc451bc
    ctx->pc = 0x1909b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1909bc: 0x4bc458bd
    ctx->pc = 0x1909bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1909c0: 0x4bc4610a
    ctx->pc = 0x1909c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1909c4: 0x4bc551bc
    ctx->pc = 0x1909c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1909c8: 0x4bc558bd
    ctx->pc = 0x1909c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1909cc: 0x4bc5614a
    ctx->pc = 0x1909ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1909d0: 0x4bc651bc
    ctx->pc = 0x1909d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1909d4: 0x4bc658bd
    ctx->pc = 0x1909d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1909d8: 0x4bc6618a
    ctx->pc = 0x1909d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1909dc: 0xfa040000
    ctx->pc = 0x1909dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1909e0: 0xfa050010
    ctx->pc = 0x1909e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1909e4: 0xfa060020
    ctx->pc = 0x1909e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1909e8: 0xdfbf0020
    ctx->pc = 0x1909e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1909ec: 0xc7b60008
    ctx->pc = 0x1909ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1909f0: 0x7bb00010
    ctx->pc = 0x1909f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1909f4: 0xc7b50004
    ctx->pc = 0x1909f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1909f8: 0xc7b40000
    ctx->pc = 0x1909f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1909fc: 0x3e00008
    ctx->pc = 0x1909FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190A00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190A04u;
    // 0x190a04: 0x0
    ctx->pc = 0x190a04u;
    // NOP
    // 0x190a08: 0x0
    ctx->pc = 0x190a08u;
    // NOP
    // 0x190a0c: 0x0
    ctx->pc = 0x190a0cu;
    // NOP
}
