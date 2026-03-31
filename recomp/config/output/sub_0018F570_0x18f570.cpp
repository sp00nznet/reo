#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018F570
// Address: 0x18f570 - 0x18f710
void sub_0018F570_0x18f570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18f570u;

    // 0x18f570: 0x3c010024
    ctx->pc = 0x18f570u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x18f574: 0xc4201c90
    ctx->pc = 0x18f574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f578: 0x46006036
    ctx->pc = 0x18f578u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f57c: 0x45010006
    ctx->pc = 0x18F57Cu;
    {
        const bool branch_taken_0x18f57c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f57c) {
            ctx->pc = 0x18F598u;
            goto label_18f598;
        }
    }
    ctx->pc = 0x18F584u;
    // 0x18f584: 0x3c010024
    ctx->pc = 0x18f584u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x18f588: 0xc4201c88
    ctx->pc = 0x18f588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f58c: 0x46006034
    ctx->pc = 0x18f58cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f590: 0x45010014
    ctx->pc = 0x18F590u;
    {
        const bool branch_taken_0x18f590 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f590) {
            ctx->pc = 0x18F5E4u;
            goto label_18f5e4;
        }
    }
    ctx->pc = 0x18F598u;
label_18f598:
    // 0x18f598: 0x3c030023
    ctx->pc = 0x18f598u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x18f59c: 0x2463fe20
    ctx->pc = 0x18f59cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294966816));
    // 0x18f5a0: 0x44086000
    ctx->pc = 0x18f5a0u;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[12]);
    // 0x18f5a4: 0xd8660000
    ctx->pc = 0x18f5a4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f5a8: 0x48a82000
    ctx->pc = 0x18f5a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x18f5ac: 0x8402a
    ctx->pc = 0x18f5acu;
    SET_GPR_U32(ctx, 8, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 8)));
    // 0x18f5b0: 0x48c81000
    ctx->pc = 0x18f5b0u;
    ctx->vu0_vpu_stat = GPR_U32(ctx, 8);
    // 0x18f5b4: 0x4b0621d8
    ctx->pc = 0x18f5b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18f5b8: 0x4b07397c
    ctx->pc = 0x18f5b8u;
    { __m128 src = ctx->vu0_vf[7]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18f5bc: 0x4a013bfc
    ctx->pc = 0x18f5bcu;
    { float src = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vi[1] = static_cast<uint16_t>(static_cast<int32_t>(src)); }
    // 0x18f5c0: 0x4a0307b2
    ctx->pc = 0x18f5c0u;
    ctx->vi[3] = ctx->vi[0] + -2;
    // 0x18f5c4: 0x4a020870
    ctx->pc = 0x18f5c4u;
    ctx->vi[1] = ctx->vi[1] + ctx->vi[2];
    // 0x18f5c8: 0x4a030874
    ctx->pc = 0x18f5c8u;
    ctx->vi[1] = ctx->vi[1] & ctx->vi[3];
    // 0x18f5cc: 0x4b070bfd
    ctx->pc = 0x18f5ccu;
    { uint32_t tmp = ctx->vi[1]; float val = *(float*)&tmp; __m128 res = _mm_set1_ps(val); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18f5d0: 0x4b07393c
    ctx->pc = 0x18f5d0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[7]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18f5d4: 0x4b0639d9
    ctx->pc = 0x18f5d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18f5d8: 0x4b0721ec
    ctx->pc = 0x18f5d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18f5dc: 0x48283800
    ctx->pc = 0x18f5dcu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x18f5e0: 0x44886000
    ctx->pc = 0x18f5e0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 8);
label_18f5e4:
    // 0x18f5e4: 0x3c050023
    ctx->pc = 0x18f5e4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x18f5e8: 0x24a5fe30
    ctx->pc = 0x18f5e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294966832));
    // 0x18f5ec: 0x44800000
    ctx->pc = 0x18f5ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x18f5f0: 0x0
    ctx->pc = 0x18f5f0u;
    // NOP
    // 0x18f5f4: 0x46006034
    ctx->pc = 0x18f5f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f5f8: 0x3c013fc9
    ctx->pc = 0x18f5f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x18f5fc: 0x34230fdb
    ctx->pc = 0x18f5fcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 1), 4059));
    // 0x18f600: 0x45000006
    ctx->pc = 0x18F600u;
    {
        const bool branch_taken_0x18f600 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18F604u;
        *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
        if (branch_taken_0x18f600) {
            ctx->pc = 0x18F61Cu;
            goto label_18f61c;
        }
    }
    ctx->pc = 0x18F608u;
    // 0x18f608: 0x4a0002ff
    ctx->pc = 0x18f608u;
    // NOP operation, no action needed for VU0
    // 0x18f60c: 0x460c0300
    ctx->pc = 0x18f60cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x18f610: 0x8063d89
    ctx->pc = 0x18F610u;
    ctx->pc = 0x18F614u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    ctx->pc = 0x18F624u;
    goto label_18f624;
    ctx->pc = 0x18F618u;
    // 0x18f618: 0x4a0002ff
    ctx->pc = 0x18f618u;
    // NOP operation, no action needed for VU0
label_18f61c:
    // 0x18f61c: 0x460c0301
    ctx->pc = 0x18f61cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x18f620: 0x3821
    ctx->pc = 0x18f620u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_18f624:
    // 0x18f624: 0x44086000
    ctx->pc = 0x18f624u;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[12]);
    // 0x18f628: 0x0
    ctx->pc = 0x18f628u;
    // NOP
    // 0x18f62c: 0x48a83000
    ctx->pc = 0x18f62cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x18f630: 0x4b0631d8
    ctx->pc = 0x18f630u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18f634: 0xd8a50000
    ctx->pc = 0x18f634u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18f638: 0x4be62958
    ctx->pc = 0x18f638u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18f63c: 0x4b0031bf
    ctx->pc = 0x18f63cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x18f640: 0x4b073a18
    ctx->pc = 0x18f640u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x18f644: 0x4a6001ac
    ctx->pc = 0x18f644u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18f648: 0x4b083a58
    ctx->pc = 0x18f648u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x18f64c: 0x4b084298
    ctx->pc = 0x18f64cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x18f650: 0x4b0538bf
    ctx->pc = 0x18f650u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x18f654: 0x4b0540be
    ctx->pc = 0x18f654u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x18f658: 0x4b0548bd
    ctx->pc = 0x18f658u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x18f65c: 0x4b055188
    ctx->pc = 0x18f65cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x18f660: 0x4b0631ea
    ctx->pc = 0x18f660u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18f664: 0x4a860180
    ctx->pc = 0x18f664u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18f668: 0x4a2701c4
    ctx->pc = 0x18f668u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x18f66c: 0x4b8703bd
    ctx->pc = 0x18f66cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x18f670: 0x14e00005
    ctx->pc = 0x18F670u;
    {
        const bool branch_taken_0x18f670 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x18F674u;
        // VWAITQ (Q already resolved in this runtime)
        if (branch_taken_0x18f670) {
            ctx->pc = 0x18F688u;
            goto label_18f688;
        }
    }
    ctx->pc = 0x18F678u;
    // 0x18f678: 0x4a0002ff
    ctx->pc = 0x18f678u;
    // NOP operation, no action needed for VU0
    // 0x18f67c: 0x10000003
    ctx->pc = 0x18F67Cu;
    {
        const bool branch_taken_0x18f67c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F680u;
        { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x18f67c) {
            ctx->pc = 0x18F68Cu;
            goto label_18f68c;
        }
    }
    ctx->pc = 0x18F684u;
    // 0x18f684: 0x4a0002ff
    ctx->pc = 0x18f684u;
    // NOP operation, no action needed for VU0
label_18f688:
    // 0x18f688: 0x4b0001a4
    ctx->pc = 0x18f688u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18f68c:
    // 0x18f68c: 0x3e00008
    ctx->pc = 0x18F68Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F690u;
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F598u: goto label_18f598;
            case 0x18F5E4u: goto label_18f5e4;
            case 0x18F61Cu: goto label_18f61c;
            case 0x18F624u: goto label_18f624;
            case 0x18F688u: goto label_18f688;
            case 0x18F68Cu: goto label_18f68c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18F694u;
    // 0x18f694: 0x0
    ctx->pc = 0x18f694u;
    // NOP
    // 0x18f698: 0x0
    ctx->pc = 0x18f698u;
    // NOP
    // 0x18f69c: 0x0
    ctx->pc = 0x18f69cu;
    // NOP
    // 0x18f6a0: 0x27bdffe0
    ctx->pc = 0x18f6a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18f6a4: 0x3c017000
    ctx->pc = 0x18f6a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x18f6a8: 0xffbf0010
    ctx->pc = 0x18f6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18f6ac: 0x41180
    ctx->pc = 0x18f6acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 6));
    // 0x18f6b0: 0x7fb00000
    ctx->pc = 0x18f6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18f6b4: 0x34213700
    ctx->pc = 0x18f6b4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 14080));
    // 0x18f6b8: 0x418021
    ctx->pc = 0x18f6b8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x18f6bc: 0xc063dc4
    ctx->pc = 0x18F6BCu;
    SET_GPR_U32(ctx, 31, 0x18F6C4u);
    ctx->pc = 0x18F6C0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18F710u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F710_0x18f710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F6C4u; }
    }
    if (ctx->pc != 0x18F6C4u) { return; }
    ctx->pc = 0x18F6C4u;
    // 0x18f6c4: 0xc063df8
    ctx->pc = 0x18F6C4u;
    SET_GPR_U32(ctx, 31, 0x18F6CCu);
    ctx->pc = 0x18F6C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18F7E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F7E0_0x18f7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F6CCu; }
    }
    if (ctx->pc != 0x18F6CCu) { return; }
    ctx->pc = 0x18F6CCu;
    // 0x18f6cc: 0x3c027000
    ctx->pc = 0x18f6ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
    // 0x18f6d0: 0x3c040029
    ctx->pc = 0x18f6d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)41 << 16));
    // 0x18f6d4: 0x24844d40
    ctx->pc = 0x18f6d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19776));
    // 0x18f6d8: 0x34453f00
    ctx->pc = 0x18f6d8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 16128));
    // 0x18f6dc: 0xc0644a0
    ctx->pc = 0x18F6DCu;
    SET_GPR_U32(ctx, 31, 0x18F6E4u);
    ctx->pc = 0x18F6E0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 16256));
    ctx->pc = 0x191280u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00191280_0x191280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F6E4u; }
    }
    if (ctx->pc != 0x18F6E4u) { return; }
    ctx->pc = 0x18F6E4u;
    // 0x18f6e4: 0x3c040029
    ctx->pc = 0x18f6e4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)41 << 16));
    // 0x18f6e8: 0x3c027000
    ctx->pc = 0x18f6e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
    // 0x18f6ec: 0x3c060029
    ctx->pc = 0x18f6ecu;
    SET_GPR_U32(ctx, 6, ((uint32_t)41 << 16));
    // 0x18f6f0: 0x24844d80
    ctx->pc = 0x18f6f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19840));
    // 0x18f6f4: 0x34453f00
    ctx->pc = 0x18f6f4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 16128));
    // 0x18f6f8: 0xc0644a0
    ctx->pc = 0x18F6F8u;
    SET_GPR_U32(ctx, 31, 0x18F700u);
    ctx->pc = 0x18F6FCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 19904));
    ctx->pc = 0x191280u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00191280_0x191280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F700u; }
    }
    if (ctx->pc != 0x18F700u) { return; }
    ctx->pc = 0x18F700u;
    // 0x18f700: 0xdfbf0010
    ctx->pc = 0x18f700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f704: 0x7bb00000
    ctx->pc = 0x18f704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f708: 0x3e00008
    ctx->pc = 0x18F708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F70Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F598u: goto label_18f598;
            case 0x18F5E4u: goto label_18f5e4;
            case 0x18F61Cu: goto label_18f61c;
            case 0x18F624u: goto label_18f624;
            case 0x18F688u: goto label_18f688;
            case 0x18F68Cu: goto label_18f68c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18F710u;
}
