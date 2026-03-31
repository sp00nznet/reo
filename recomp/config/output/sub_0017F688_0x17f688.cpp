#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017F688
// Address: 0x17f688 - 0x180170
void sub_0017F688_0x17f688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17f688u;

label_17f688:
    // 0x17f688: 0x27bdffc0
    ctx->pc = 0x17f688u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17f68c: 0xffb10010
    ctx->pc = 0x17f68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17f690: 0xffb00000
    ctx->pc = 0x17f690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f694: 0x80882d
    ctx->pc = 0x17f694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f698: 0xe7b40030
    ctx->pc = 0x17f698u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17f69c: 0xa0802d
    ctx->pc = 0x17f69cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f6a0: 0xffbf0020
    ctx->pc = 0x17f6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17f6a4: 0xc047598
    ctx->pc = 0x17F6A4u;
    SET_GPR_U32(ctx, 31, 0x17F6ACu);
    ctx->pc = 0x17F6A8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F6ACu; }
    }
    if (ctx->pc != 0x17F6ACu) { return; }
    ctx->pc = 0x17F6ACu;
    // 0x17f6ac: 0x44800000
    ctx->pc = 0x17f6acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x17f6b0: 0x4600a034
    ctx->pc = 0x17f6b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17f6b4: 0x3c013fc9
    ctx->pc = 0x17f6b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x17f6b8: 0x34210fdb
    ctx->pc = 0x17f6b8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x17f6bc: 0x44810000
    ctx->pc = 0x17f6bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x17f6c0: 0x45000004
    ctx->pc = 0x17F6C0u;
    {
        const bool branch_taken_0x17f6c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17f6c0) {
            ctx->pc = 0x17F6D4u;
            goto label_17f6d4;
        }
    }
    ctx->pc = 0x17F6C8u;
    // 0x17f6c8: 0x46140500
    ctx->pc = 0x17f6c8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x17f6cc: 0x805fdb7
    ctx->pc = 0x17F6CCu;
    ctx->pc = 0x17F6D0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x17F6DCu;
    goto label_17f6dc;
    ctx->pc = 0x17F6D4u;
label_17f6d4:
    // 0x17f6d4: 0x46140501
    ctx->pc = 0x17f6d4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x17f6d8: 0x382d
    ctx->pc = 0x17f6d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f6dc:
    // 0x17f6dc: 0x4408a000
    ctx->pc = 0x17f6dcu;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[20]);
    // 0x17f6e0: 0x48a83000
    ctx->pc = 0x17f6e0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x17f6e4: 0x3e0302d
    ctx->pc = 0x17f6e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 31) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f6e8: 0xc05fd0a
    ctx->pc = 0x17F6E8u;
    SET_GPR_U32(ctx, 31, 0x17F6F0u);
    ctx->pc = 0x17F428u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F428_0x17f428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F6F0u; }
    }
    if (ctx->pc != 0x17F6F0u) { return; }
    ctx->pc = 0x17F6F0u;
    // 0x17f6f0: 0xc0f82d
    ctx->pc = 0x17f6f0u;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f6f4: 0x4be62b3c
    ctx->pc = 0x17f6f4u;
    ctx->vu0_vf[6] = ctx->vu0_vf[5];
    // 0x17f6f8: 0x4be72b3c
    ctx->pc = 0x17f6f8u;
    ctx->vu0_vf[7] = ctx->vu0_vf[5];
    // 0x17f6fc: 0x4be82b3c
    ctx->pc = 0x17f6fcu;
    ctx->vu0_vf[8] = ctx->vu0_vf[5];
    // 0x17f700: 0x4be92b3c
    ctx->pc = 0x17f700u;
    ctx->vu0_vf[9] = ctx->vu0_vf[5];
    // 0x17f704: 0x4a8029c3
    ctx->pc = 0x17f704u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x17f708: 0x4a202a43
    ctx->pc = 0x17f708u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x17f70c: 0x4a64212c
    ctx->pc = 0x17f70cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17f710: 0x4a442984
    ctx->pc = 0x17f710u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17f714: 0x4b042981
    ctx->pc = 0x17f714u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17f718: 0x4b042a00
    ctx->pc = 0x17f718u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x17f71c: 0x4a442a01
    ctx->pc = 0x17f71cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x17f720: 0x24070004
    ctx->pc = 0x17f720u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4));
label_17f724:
    // 0x17f724: 0xda040000
    ctx->pc = 0x17f724u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f728: 0x4be431bc
    ctx->pc = 0x17f728u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x17f72c: 0x4be438bd
    ctx->pc = 0x17f72cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x17f730: 0x4be440be
    ctx->pc = 0x17f730u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x17f734: 0x4be4494b
    ctx->pc = 0x17f734u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x17f738: 0xfa250000
    ctx->pc = 0x17f738u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x17f73c: 0x20e7ffff
    ctx->pc = 0x17f73cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x17f740: 0x22100010
    ctx->pc = 0x17f740u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 16), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
    // 0x17f744: 0x1407fff7
    ctx->pc = 0x17F744u;
    {
        const bool branch_taken_0x17f744 = (GPR_U32(ctx, 0) != GPR_U32(ctx, 7));
        ctx->pc = 0x17F748u;
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 17), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
        if (branch_taken_0x17f744) {
            ctx->pc = 0x17F724u;
            goto label_17f724;
        }
    }
    ctx->pc = 0x17F74Cu;
    // 0x17f74c: 0x10400006
    ctx->pc = 0x17F74Cu;
    {
        const bool branch_taken_0x17f74c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F750u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x17f74c) {
            ctx->pc = 0x17F768u;
            goto label_17f768;
        }
    }
    ctx->pc = 0x17F754u;
    // 0x17f754: 0xdfb10010
    ctx->pc = 0x17f754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f758: 0xdfb00000
    ctx->pc = 0x17f758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f75c: 0xc7b40030
    ctx->pc = 0x17f75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17f760: 0x80475ae
    ctx->pc = 0x17F760u;
    ctx->pc = 0x17F764u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x11D6B8u;
    sub_0011D6B8_0x11d6b8(rdram, ctx, runtime); return;
    ctx->pc = 0x17F768u;
label_17f768:
    // 0x17f768: 0xdfb10010
    ctx->pc = 0x17f768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f76c: 0xdfb00000
    ctx->pc = 0x17f76cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f770: 0xc7b40030
    ctx->pc = 0x17f770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17f774: 0x3e00008
    ctx->pc = 0x17F774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F778u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F688u: goto label_17f688;
            case 0x17F6D4u: goto label_17f6d4;
            case 0x17F6DCu: goto label_17f6dc;
            case 0x17F724u: goto label_17f724;
            case 0x17F768u: goto label_17f768;
            case 0x17F7B0u: goto label_17f7b0;
            case 0x17F83Cu: goto label_17f83c;
            case 0x17FBE8u: goto label_17fbe8;
            case 0x17FD0Cu: goto label_17fd0c;
            case 0x17FD38u: goto label_17fd38;
            case 0x17FD70u: goto label_17fd70;
            case 0x17FDF8u: goto label_17fdf8;
            case 0x17FE1Cu: goto label_17fe1c;
            case 0x17FECCu: goto label_17fecc;
            case 0x17FF3Cu: goto label_17ff3c;
            case 0x17FFB8u: goto label_17ffb8;
            case 0x180060u: goto label_180060;
            case 0x1800D8u: goto label_1800d8;
            case 0x180138u: goto label_180138;
            case 0x180148u: goto label_180148;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17F77Cu;
    // 0x17f77c: 0x0
    ctx->pc = 0x17f77cu;
    // NOP
    // 0x17f780: 0x27bdffd0
    ctx->pc = 0x17f780u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17f784: 0xffb10010
    ctx->pc = 0x17f784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17f788: 0xffb00000
    ctx->pc = 0x17f788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f78c: 0xc0882d
    ctx->pc = 0x17f78cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f790: 0xffbf0020
    ctx->pc = 0x17f790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17f794: 0x80802d
    ctx->pc = 0x17f794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f798: 0xc05fd28
    ctx->pc = 0x17F798u;
    SET_GPR_U32(ctx, 31, 0x17F7A0u);
    ctx->pc = 0x17F79Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x17F4A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F4A0_0x17f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F7A0u; }
    }
    if (ctx->pc != 0x17F7A0u) { return; }
    ctx->pc = 0x17F7A0u;
    // 0x17f7a0: 0xc62c0004
    ctx->pc = 0x17f7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17f7a4: 0x200202d
    ctx->pc = 0x17f7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7a8: 0xc05fda2
    ctx->pc = 0x17F7A8u;
    SET_GPR_U32(ctx, 31, 0x17F7B0u);
    ctx->pc = 0x17F7ACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17F688u;
    goto label_17f688;
    ctx->pc = 0x17F7B0u;
label_17f7b0:
    // 0x17f7b0: 0x200202d
    ctx->pc = 0x17f7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7b4: 0xc62c0000
    ctx->pc = 0x17f7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17f7b8: 0xdfbf0020
    ctx->pc = 0x17f7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f7bc: 0x80282d
    ctx->pc = 0x17f7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7c0: 0xdfb10010
    ctx->pc = 0x17f7c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f7c4: 0xdfb00000
    ctx->pc = 0x17f7c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f7c8: 0x805fd64
    ctx->pc = 0x17F7C8u;
    ctx->pc = 0x17F7CCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x17F590u;
    entry_17f590_0x17f5e4(rdram, ctx, runtime); return;
    ctx->pc = 0x17F7D0u;
    // 0x17f7d0: 0x27bdffc0
    ctx->pc = 0x17f7d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17f7d4: 0xffb10010
    ctx->pc = 0x17f7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17f7d8: 0xffb00000
    ctx->pc = 0x17f7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f7dc: 0x80882d
    ctx->pc = 0x17f7dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7e0: 0xe7b50038
    ctx->pc = 0x17f7e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x17f7e4: 0xa0802d
    ctx->pc = 0x17f7e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7e8: 0xe7b40030
    ctx->pc = 0x17f7e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17f7ec: 0x46006546
    ctx->pc = 0x17f7ecu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x17f7f0: 0xffbf0020
    ctx->pc = 0x17f7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17f7f4: 0xc047598
    ctx->pc = 0x17F7F4u;
    SET_GPR_U32(ctx, 31, 0x17F7FCu);
    ctx->pc = 0x17F7F8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F7FCu; }
    }
    if (ctx->pc != 0x17F7FCu) { return; }
    ctx->pc = 0x17F7FCu;
    // 0x17f7fc: 0x4408a800
    ctx->pc = 0x17f7fcu;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[21]);
    // 0x17f800: 0x4409a000
    ctx->pc = 0x17f800u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[20]);
    // 0x17f804: 0xda060000
    ctx->pc = 0x17f804u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f808: 0x48a82000
    ctx->pc = 0x17f808u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x17f80c: 0x48a92800
    ctx->pc = 0x17f80cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x17f810: 0x4be43190
    ctx->pc = 0x17f810u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17f814: 0x4be53194
    ctx->pc = 0x17f814u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17f818: 0xfa260000
    ctx->pc = 0x17f818u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x17f81c: 0x10400007
    ctx->pc = 0x17F81Cu;
    {
        const bool branch_taken_0x17f81c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F820u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x17f81c) {
            ctx->pc = 0x17F83Cu;
            goto label_17f83c;
        }
    }
    ctx->pc = 0x17F824u;
    // 0x17f824: 0xdfb10010
    ctx->pc = 0x17f824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f828: 0xdfb00000
    ctx->pc = 0x17f828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f82c: 0xc7b50038
    ctx->pc = 0x17f82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17f830: 0xc7b40030
    ctx->pc = 0x17f830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17f834: 0x80475ae
    ctx->pc = 0x17F834u;
    ctx->pc = 0x17F838u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x11D6B8u;
    sub_0011D6B8_0x11d6b8(rdram, ctx, runtime); return;
    ctx->pc = 0x17F83Cu;
label_17f83c:
    // 0x17f83c: 0xdfb10010
    ctx->pc = 0x17f83cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f840: 0xdfb00000
    ctx->pc = 0x17f840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f844: 0xc7b50038
    ctx->pc = 0x17f844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17f848: 0xc7b40030
    ctx->pc = 0x17f848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17f84c: 0x3e00008
    ctx->pc = 0x17F84Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F850u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F688u: goto label_17f688;
            case 0x17F6D4u: goto label_17f6d4;
            case 0x17F6DCu: goto label_17f6dc;
            case 0x17F724u: goto label_17f724;
            case 0x17F768u: goto label_17f768;
            case 0x17F7B0u: goto label_17f7b0;
            case 0x17F83Cu: goto label_17f83c;
            case 0x17FBE8u: goto label_17fbe8;
            case 0x17FD0Cu: goto label_17fd0c;
            case 0x17FD38u: goto label_17fd38;
            case 0x17FD70u: goto label_17fd70;
            case 0x17FDF8u: goto label_17fdf8;
            case 0x17FE1Cu: goto label_17fe1c;
            case 0x17FECCu: goto label_17fecc;
            case 0x17FF3Cu: goto label_17ff3c;
            case 0x17FFB8u: goto label_17ffb8;
            case 0x180060u: goto label_180060;
            case 0x1800D8u: goto label_1800d8;
            case 0x180138u: goto label_180138;
            case 0x180148u: goto label_180148;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17F854u;
    // 0x17f854: 0x0
    ctx->pc = 0x17f854u;
    // NOP
    // 0x17f858: 0x27bdff50
    ctx->pc = 0x17f858u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x17f85c: 0xffb40090
    ctx->pc = 0x17f85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x17f860: 0x80a02d
    ctx->pc = 0x17f860u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f864: 0xffb30080
    ctx->pc = 0x17f864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x17f868: 0xffb20070
    ctx->pc = 0x17f868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x17f86c: 0xa0982d
    ctx->pc = 0x17f86cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f870: 0xffb10060
    ctx->pc = 0x17f870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x17f874: 0xc0902d
    ctx->pc = 0x17f874u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f878: 0xe0882d
    ctx->pc = 0x17f878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f87c: 0xffb00050
    ctx->pc = 0x17f87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x17f880: 0xffbf00a0
    ctx->pc = 0x17f880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x17f884: 0xc05fcf4
    ctx->pc = 0x17F884u;
    SET_GPR_U32(ctx, 31, 0x17F88Cu);
    ctx->pc = 0x17F888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17F3D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F3D0_0x17f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F88Cu; }
    }
    if (ctx->pc != 0x17F88Cu) { return; }
    ctx->pc = 0x17F88Cu;
    // 0x17f88c: 0x27b00040
    ctx->pc = 0x17f88cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 64));
    // 0x17f890: 0x220282d
    ctx->pc = 0x17f890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f894: 0x200202d
    ctx->pc = 0x17f894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f898: 0xc05faee
    ctx->pc = 0x17F898u;
    SET_GPR_U32(ctx, 31, 0x17F8A0u);
    ctx->pc = 0x17F89Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17EBB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017EBB8_0x17ebb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F8A0u; }
    }
    if (ctx->pc != 0x17F8A0u) { return; }
    ctx->pc = 0x17F8A0u;
    // 0x17f8a0: 0x200282d
    ctx->pc = 0x17f8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f8a4: 0xc05fb26
    ctx->pc = 0x17F8A4u;
    SET_GPR_U32(ctx, 31, 0x17F8ACu);
    ctx->pc = 0x17F8A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17EC98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017EC98_0x17ec98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F8ACu; }
    }
    if (ctx->pc != 0x17F8ACu) { return; }
    ctx->pc = 0x17F8ACu;
    // 0x17f8ac: 0x27b00020
    ctx->pc = 0x17f8acu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
    // 0x17f8b0: 0x240282d
    ctx->pc = 0x17f8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f8b4: 0xc05fb26
    ctx->pc = 0x17F8B4u;
    SET_GPR_U32(ctx, 31, 0x17F8BCu);
    ctx->pc = 0x17F8B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17EC98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017EC98_0x17ec98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F8BCu; }
    }
    if (ctx->pc != 0x17F8BCu) { return; }
    ctx->pc = 0x17F8BCu;
    // 0x17f8bc: 0x200282d
    ctx->pc = 0x17f8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f8c0: 0x27a40010
    ctx->pc = 0x17f8c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x17f8c4: 0xc05faee
    ctx->pc = 0x17F8C4u;
    SET_GPR_U32(ctx, 31, 0x17F8CCu);
    ctx->pc = 0x17F8C8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17EBB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017EBB8_0x17ebb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F8CCu; }
    }
    if (ctx->pc != 0x17F8CCu) { return; }
    ctx->pc = 0x17F8CCu;
    // 0x17f8cc: 0x260302d
    ctx->pc = 0x17f8ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f8d0: 0x3a0202d
    ctx->pc = 0x17f8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f8d4: 0xc05fc56
    ctx->pc = 0x17F8D4u;
    SET_GPR_U32(ctx, 31, 0x17F8DCu);
    ctx->pc = 0x17F8D8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17F158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F158_0x17f158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F8DCu; }
    }
    if (ctx->pc != 0x17F8DCu) { return; }
    ctx->pc = 0x17F8DCu;
    // 0x17f8dc: 0x280202d
    ctx->pc = 0x17f8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f8e0: 0xc05fb68
    ctx->pc = 0x17F8E0u;
    SET_GPR_U32(ctx, 31, 0x17F8E8u);
    ctx->pc = 0x17F8E4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17EDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017EDA0_0x17eda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F8E8u; }
    }
    if (ctx->pc != 0x17F8E8u) { return; }
    ctx->pc = 0x17F8E8u;
    // 0x17f8e8: 0xdfbf00a0
    ctx->pc = 0x17f8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17f8ec: 0xdfb40090
    ctx->pc = 0x17f8ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17f8f0: 0xdfb30080
    ctx->pc = 0x17f8f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17f8f4: 0xdfb20070
    ctx->pc = 0x17f8f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17f8f8: 0xdfb10060
    ctx->pc = 0x17f8f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17f8fc: 0xdfb00050
    ctx->pc = 0x17f8fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17f900: 0x3e00008
    ctx->pc = 0x17F900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F904u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F688u: goto label_17f688;
            case 0x17F6D4u: goto label_17f6d4;
            case 0x17F6DCu: goto label_17f6dc;
            case 0x17F724u: goto label_17f724;
            case 0x17F768u: goto label_17f768;
            case 0x17F7B0u: goto label_17f7b0;
            case 0x17F83Cu: goto label_17f83c;
            case 0x17FBE8u: goto label_17fbe8;
            case 0x17FD0Cu: goto label_17fd0c;
            case 0x17FD38u: goto label_17fd38;
            case 0x17FD70u: goto label_17fd70;
            case 0x17FDF8u: goto label_17fdf8;
            case 0x17FE1Cu: goto label_17fe1c;
            case 0x17FECCu: goto label_17fecc;
            case 0x17FF3Cu: goto label_17ff3c;
            case 0x17FFB8u: goto label_17ffb8;
            case 0x180060u: goto label_180060;
            case 0x1800D8u: goto label_1800d8;
            case 0x180138u: goto label_180138;
            case 0x180148u: goto label_180148;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17F908u;
    // 0x17f908: 0x27bdffa0
    ctx->pc = 0x17f908u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17f90c: 0xe7b40050
    ctx->pc = 0x17f90cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x17f910: 0x3c01bf80
    ctx->pc = 0x17f910u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x17f914: 0x4481a000
    ctx->pc = 0x17f914u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x17f918: 0xffb00010
    ctx->pc = 0x17f918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17f91c: 0x80802d
    ctx->pc = 0x17f91cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f920: 0xffb20030
    ctx->pc = 0x17f920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x17f924: 0xffb10020
    ctx->pc = 0x17f924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x17f928: 0xe0902d
    ctx->pc = 0x17f928u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f92c: 0xc0882d
    ctx->pc = 0x17f92cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f930: 0x4600a306
    ctx->pc = 0x17f930u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x17f934: 0xffbf0040
    ctx->pc = 0x17f934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17f938: 0xc05fc3c
    ctx->pc = 0x17F938u;
    SET_GPR_U32(ctx, 31, 0x17F940u);
    ctx->pc = 0x17F93Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17F0F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F0F0_0x17f0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F940u; }
    }
    if (ctx->pc != 0x17F940u) { return; }
    ctx->pc = 0x17F940u;
    // 0x17f940: 0x200202d
    ctx->pc = 0x17f940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f944: 0xc05fb26
    ctx->pc = 0x17F944u;
    SET_GPR_U32(ctx, 31, 0x17F94Cu);
    ctx->pc = 0x17F948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17EC98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017EC98_0x17ec98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F94Cu; }
    }
    if (ctx->pc != 0x17F94Cu) { return; }
    ctx->pc = 0x17F94Cu;
    // 0x17f94c: 0x220282d
    ctx->pc = 0x17f94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f950: 0x4600a306
    ctx->pc = 0x17f950u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x17f954: 0xc05fc3c
    ctx->pc = 0x17F954u;
    SET_GPR_U32(ctx, 31, 0x17F95Cu);
    ctx->pc = 0x17F958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17F0F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F0F0_0x17f0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F95Cu; }
    }
    if (ctx->pc != 0x17F95Cu) { return; }
    ctx->pc = 0x17F95Cu;
    // 0x17f95c: 0x26040010
    ctx->pc = 0x17f95cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 16));
    // 0x17f960: 0xc05fb26
    ctx->pc = 0x17F960u;
    SET_GPR_U32(ctx, 31, 0x17F968u);
    ctx->pc = 0x17F964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17EC98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017EC98_0x17ec98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F968u; }
    }
    if (ctx->pc != 0x17F968u) { return; }
    ctx->pc = 0x17F968u;
    // 0x17f968: 0x240282d
    ctx->pc = 0x17f968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f96c: 0x4600a306
    ctx->pc = 0x17f96cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x17f970: 0xc05fc3c
    ctx->pc = 0x17F970u;
    SET_GPR_U32(ctx, 31, 0x17F978u);
    ctx->pc = 0x17F974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17F0F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F0F0_0x17f0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F978u; }
    }
    if (ctx->pc != 0x17F978u) { return; }
    ctx->pc = 0x17F978u;
    // 0x17f978: 0x26040020
    ctx->pc = 0x17f978u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 32));
    // 0x17f97c: 0xc05fb26
    ctx->pc = 0x17F97Cu;
    SET_GPR_U32(ctx, 31, 0x17F984u);
    ctx->pc = 0x17F980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17EC98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017EC98_0x17ec98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F984u; }
    }
    if (ctx->pc != 0x17F984u) { return; }
    ctx->pc = 0x17F984u;
    // 0x17f984: 0x44800000
    ctx->pc = 0x17f984u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x17f988: 0x200202d
    ctx->pc = 0x17f988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f98c: 0x3c013f80
    ctx->pc = 0x17f98cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x17f990: 0x44810800
    ctx->pc = 0x17f990u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x17f994: 0x80282d
    ctx->pc = 0x17f994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f998: 0xe6000030
    ctx->pc = 0x17f998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x17f99c: 0xe601003c
    ctx->pc = 0x17f99cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x17f9a0: 0xe6000038
    ctx->pc = 0x17f9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x17f9a4: 0xc05fb46
    ctx->pc = 0x17F9A4u;
    SET_GPR_U32(ctx, 31, 0x17F9ACu);
    ctx->pc = 0x17F9A8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->pc = 0x17ED18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017ED18_0x17ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F9ACu; }
    }
    if (ctx->pc != 0x17F9ACu) { return; }
    ctx->pc = 0x17F9ACu;
    // 0x17f9ac: 0xdfbf0040
    ctx->pc = 0x17f9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17f9b0: 0xdfb20030
    ctx->pc = 0x17f9b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f9b4: 0xdfb10020
    ctx->pc = 0x17f9b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f9b8: 0xdfb00010
    ctx->pc = 0x17f9b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f9bc: 0xc7b40050
    ctx->pc = 0x17f9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17f9c0: 0x3e00008
    ctx->pc = 0x17F9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F9C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F688u: goto label_17f688;
            case 0x17F6D4u: goto label_17f6d4;
            case 0x17F6DCu: goto label_17f6dc;
            case 0x17F724u: goto label_17f724;
            case 0x17F768u: goto label_17f768;
            case 0x17F7B0u: goto label_17f7b0;
            case 0x17F83Cu: goto label_17f83c;
            case 0x17FBE8u: goto label_17fbe8;
            case 0x17FD0Cu: goto label_17fd0c;
            case 0x17FD38u: goto label_17fd38;
            case 0x17FD70u: goto label_17fd70;
            case 0x17FDF8u: goto label_17fdf8;
            case 0x17FE1Cu: goto label_17fe1c;
            case 0x17FECCu: goto label_17fecc;
            case 0x17FF3Cu: goto label_17ff3c;
            case 0x17FFB8u: goto label_17ffb8;
            case 0x180060u: goto label_180060;
            case 0x1800D8u: goto label_1800d8;
            case 0x180138u: goto label_180138;
            case 0x180148u: goto label_180148;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17F9C8u;
    // 0x17f9c8: 0x27bdffb0
    ctx->pc = 0x17f9c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17f9cc: 0xffb00000
    ctx->pc = 0x17f9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f9d0: 0x80802d
    ctx->pc = 0x17f9d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f9d4: 0xffb30030
    ctx->pc = 0x17f9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x17f9d8: 0xffb20020
    ctx->pc = 0x17f9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17f9dc: 0x100982d
    ctx->pc = 0x17f9dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f9e0: 0xffb10010
    ctx->pc = 0x17f9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17f9e4: 0xe0902d
    ctx->pc = 0x17f9e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f9e8: 0xffbf0040
    ctx->pc = 0x17f9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17f9ec: 0xc05fc76
    ctx->pc = 0x17F9ECu;
    SET_GPR_U32(ctx, 31, 0x17F9F4u);
    ctx->pc = 0x17F9F0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17F1D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F1D8_0x17f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F9F4u; }
    }
    if (ctx->pc != 0x17F9F4u) { return; }
    ctx->pc = 0x17F9F4u;
    // 0x17f9f4: 0x220282d
    ctx->pc = 0x17f9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f9f8: 0xc05fc76
    ctx->pc = 0x17F9F8u;
    SET_GPR_U32(ctx, 31, 0x17FA00u);
    ctx->pc = 0x17F9FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x17F1D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F1D8_0x17f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FA00u; }
    }
    if (ctx->pc != 0x17FA00u) { return; }
    ctx->pc = 0x17FA00u;
    // 0x17fa00: 0x240282d
    ctx->pc = 0x17fa00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa04: 0xc05fc76
    ctx->pc = 0x17FA04u;
    SET_GPR_U32(ctx, 31, 0x17FA0Cu);
    ctx->pc = 0x17FA08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 32));
    ctx->pc = 0x17F1D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F1D8_0x17f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FA0Cu; }
    }
    if (ctx->pc != 0x17FA0Cu) { return; }
    ctx->pc = 0x17FA0Cu;
    // 0x17fa0c: 0x26040030
    ctx->pc = 0x17fa0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 48));
    // 0x17fa10: 0x260282d
    ctx->pc = 0x17fa10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa14: 0xdfbf0040
    ctx->pc = 0x17fa14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17fa18: 0xdfb30030
    ctx->pc = 0x17fa18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fa1c: 0xdfb20020
    ctx->pc = 0x17fa1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fa20: 0xdfb10010
    ctx->pc = 0x17fa20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fa24: 0xdfb00000
    ctx->pc = 0x17fa24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fa28: 0x805fc76
    ctx->pc = 0x17FA28u;
    ctx->pc = 0x17FA2Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x17F1D8u;
    sub_0017F1D8_0x17f1d8(rdram, ctx, runtime); return;
    ctx->pc = 0x17FA30u;
    // 0x17fa30: 0x27bdff60
    ctx->pc = 0x17fa30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x17fa34: 0x46008807
    ctx->pc = 0x17fa34u;
    ctx->f[0] = FPU_NEG_S(ctx->f[17]);
    // 0x17fa38: 0xe7b40060
    ctx->pc = 0x17fa38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x17fa3c: 0x46009507
    ctx->pc = 0x17fa3cu;
    ctx->f[20] = FPU_NEG_S(ctx->f[18]);
    // 0x17fa40: 0xc7a100a0
    ctx->pc = 0x17fa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17fa44: 0xe7b50068
    ctx->pc = 0x17fa44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x17fa48: 0x46120000
    ctx->pc = 0x17fa48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[18]);
    // 0x17fa4c: 0x46130d42
    ctx->pc = 0x17fa4cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[19]);
    // 0x17fa50: 0xffb00040
    ctx->pc = 0x17fa50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x17fa54: 0x4613a502
    ctx->pc = 0x17fa54u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[19]);
    // 0x17fa58: 0x80802d
    ctx->pc = 0x17fa58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa5c: 0x46018c42
    ctx->pc = 0x17fa5cu;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[1]);
    // 0x17fa60: 0xe7ba0090
    ctx->pc = 0x17fa60u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x17fa64: 0x46009cc7
    ctx->pc = 0x17fa64u;
    ctx->f[19] = FPU_NEG_S(ctx->f[19]);
    // 0x17fa68: 0xe7b90088
    ctx->pc = 0x17fa68u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x17fa6c: 0x4600ad42
    ctx->pc = 0x17fa6cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x17fa70: 0xe7b80080
    ctx->pc = 0x17fa70u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x17fa74: 0x4611a500
    ctx->pc = 0x17fa74u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[17]);
    // 0x17fa78: 0xe7b70078
    ctx->pc = 0x17fa78u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x17fa7c: 0x46019cc0
    ctx->pc = 0x17fa7cu;
    ctx->f[19] = FPU_ADD_S(ctx->f[19], ctx->f[1]);
    // 0x17fa80: 0xe7b60070
    ctx->pc = 0x17fa80u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x17fa84: 0x46006586
    ctx->pc = 0x17fa84u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x17fa88: 0x46006e06
    ctx->pc = 0x17fa88u;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
    // 0x17fa8c: 0x460075c6
    ctx->pc = 0x17fa8cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x17fa90: 0x46007e86
    ctx->pc = 0x17fa90u;
    ctx->f[26] = FPU_MOV_S(ctx->f[15]);
    // 0x17fa94: 0x0
    ctx->pc = 0x17fa94u;
    // NOP
    // 0x17fa98: 0x0
    ctx->pc = 0x17fa98u;
    // NOP
    // 0x17fa9c: 0x4613ad43
    ctx->pc = 0x17fa9cu;
    if (ctx->f[19] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[19];
    // 0x17faa0: 0x0
    ctx->pc = 0x17faa0u;
    // NOP
    // 0x17faa4: 0x0
    ctx->pc = 0x17faa4u;
    // NOP
    // 0x17faa8: 0x4613a503
    ctx->pc = 0x17faa8u;
    if (ctx->f[19] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[19];
    // 0x17faac: 0xffbf0050
    ctx->pc = 0x17faacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17fab0: 0xc05fcf4
    ctx->pc = 0x17FAB0u;
    SET_GPR_U32(ctx, 31, 0x17FAB8u);
    ctx->pc = 0x17FAB4u;
    ctx->f[25] = FPU_MOV_S(ctx->f[16]);
    ctx->pc = 0x17F3D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F3D0_0x17f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FAB8u; }
    }
    if (ctx->pc != 0x17FAB8u) { return; }
    ctx->pc = 0x17FAB8u;
    // 0x17fab8: 0x3c013f80
    ctx->pc = 0x17fab8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x17fabc: 0x44810000
    ctx->pc = 0x17fabcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x17fac0: 0x3a0202d
    ctx->pc = 0x17fac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fac4: 0xe6160014
    ctx->pc = 0x17fac4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x17fac8: 0xe6160000
    ctx->pc = 0x17fac8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x17facc: 0xae000028
    ctx->pc = 0x17faccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x17fad0: 0xae00003c
    ctx->pc = 0x17fad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x17fad4: 0xe600002c
    ctx->pc = 0x17fad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x17fad8: 0xc05fcf4
    ctx->pc = 0x17FAD8u;
    SET_GPR_U32(ctx, 31, 0x17FAE0u);
    ctx->pc = 0x17FADCu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->pc = 0x17F3D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F3D0_0x17f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FAE0u; }
    }
    if (ctx->pc != 0x17FAE0u) { return; }
    ctx->pc = 0x17FAE0u;
    // 0x17fae0: 0x200202d
    ctx->pc = 0x17fae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fae4: 0xe7b80000
    ctx->pc = 0x17fae4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17fae8: 0xe7b70014
    ctx->pc = 0x17fae8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x17faec: 0x3a0282d
    ctx->pc = 0x17faecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17faf0: 0xe7b50028
    ctx->pc = 0x17faf0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x17faf4: 0x80302d
    ctx->pc = 0x17faf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17faf8: 0xe7ba0030
    ctx->pc = 0x17faf8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17fafc: 0xe7b90034
    ctx->pc = 0x17fafcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x17fb00: 0xc05faca
    ctx->pc = 0x17FB00u;
    SET_GPR_U32(ctx, 31, 0x17FB08u);
    ctx->pc = 0x17FB04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->pc = 0x17EB28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017EB28_0x17eb28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FB08u; }
    }
    if (ctx->pc != 0x17FB08u) { return; }
    ctx->pc = 0x17FB08u;
    // 0x17fb08: 0xdfbf0050
    ctx->pc = 0x17fb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17fb0c: 0xdfb00040
    ctx->pc = 0x17fb0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17fb10: 0xc7ba0090
    ctx->pc = 0x17fb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x17fb14: 0xc7b90088
    ctx->pc = 0x17fb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x17fb18: 0xc7b80080
    ctx->pc = 0x17fb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x17fb1c: 0xc7b70078
    ctx->pc = 0x17fb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x17fb20: 0xc7b60070
    ctx->pc = 0x17fb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x17fb24: 0xc7b50068
    ctx->pc = 0x17fb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17fb28: 0xc7b40060
    ctx->pc = 0x17fb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17fb2c: 0x3e00008
    ctx->pc = 0x17FB2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FB30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F688u: goto label_17f688;
            case 0x17F6D4u: goto label_17f6d4;
            case 0x17F6DCu: goto label_17f6dc;
            case 0x17F724u: goto label_17f724;
            case 0x17F768u: goto label_17f768;
            case 0x17F7B0u: goto label_17f7b0;
            case 0x17F83Cu: goto label_17f83c;
            case 0x17FBE8u: goto label_17fbe8;
            case 0x17FD0Cu: goto label_17fd0c;
            case 0x17FD38u: goto label_17fd38;
            case 0x17FD70u: goto label_17fd70;
            case 0x17FDF8u: goto label_17fdf8;
            case 0x17FE1Cu: goto label_17fe1c;
            case 0x17FECCu: goto label_17fecc;
            case 0x17FF3Cu: goto label_17ff3c;
            case 0x17FFB8u: goto label_17ffb8;
            case 0x180060u: goto label_180060;
            case 0x1800D8u: goto label_1800d8;
            case 0x180138u: goto label_180138;
            case 0x180148u: goto label_180148;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17FB34u;
    // 0x17fb34: 0x0
    ctx->pc = 0x17fb34u;
    // NOP
    // 0x17fb38: 0x46006406
    ctx->pc = 0x17fb38u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    // 0x17fb3c: 0x10c0002a
    ctx->pc = 0x17FB3Cu;
    {
        const bool branch_taken_0x17fb3c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x17FB40u;
        ctx->f[15] = FPU_MOV_S(ctx->f[13]);
        if (branch_taken_0x17fb3c) {
            ctx->pc = 0x17FBE8u;
            goto label_17fbe8;
        }
    }
    ctx->pc = 0x17FB44u;
    // 0x17fb44: 0xc4a10000
    ctx->pc = 0x17fb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17fb48: 0xc4a20004
    ctx->pc = 0x17fb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17fb4c: 0x46018242
    ctx->pc = 0x17fb4cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[16], ctx->f[1]);
    // 0x17fb50: 0xc4a30008
    ctx->pc = 0x17fb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17fb54: 0x46027a82
    ctx->pc = 0x17fb54u;
    ctx->f[10] = FPU_MUL_S(ctx->f[15], ctx->f[2]);
    // 0x17fb58: 0x3c013f80
    ctx->pc = 0x17fb58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x17fb5c: 0x44812800
    ctx->pc = 0x17fb5cu;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 1);
    // 0x17fb60: 0x46037182
    ctx->pc = 0x17fb60u;
    ctx->f[6] = FPU_MUL_S(ctx->f[14], ctx->f[3]);
    // 0x17fb64: 0xe490000c
    ctx->pc = 0x17fb64u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x17fb68: 0x460009c7
    ctx->pc = 0x17fb68u;
    ctx->f[7] = FPU_NEG_S(ctx->f[1]);
    // 0x17fb6c: 0xe48f001c
    ctx->pc = 0x17fb6cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x17fb70: 0x460a4800
    ctx->pc = 0x17fb70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[10]);
    // 0x17fb74: 0xe48e002c
    ctx->pc = 0x17fb74u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x17fb78: 0x46001107
    ctx->pc = 0x17fb78u;
    ctx->f[4] = FPU_NEG_S(ctx->f[2]);
    // 0x17fb7c: 0xe4870030
    ctx->pc = 0x17fb7cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x17fb80: 0x46001a07
    ctx->pc = 0x17fb80u;
    ctx->f[8] = FPU_NEG_S(ctx->f[3]);
    // 0x17fb84: 0x46060000
    ctx->pc = 0x17fb84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x17fb88: 0xe4840034
    ctx->pc = 0x17fb88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x17fb8c: 0x460179c2
    ctx->pc = 0x17fb8cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
    // 0x17fb90: 0x46028102
    ctx->pc = 0x17fb90u;
    ctx->f[4] = FPU_MUL_S(ctx->f[16], ctx->f[2]);
    // 0x17fb94: 0xe4880038
    ctx->pc = 0x17fb94u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x17fb98: 0x46002801
    ctx->pc = 0x17fb98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x17fb9c: 0x46017042
    ctx->pc = 0x17fb9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x17fba0: 0xe4870010
    ctx->pc = 0x17fba0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x17fba4: 0x46027082
    ctx->pc = 0x17fba4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x17fba8: 0xe4840004
    ctx->pc = 0x17fba8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x17fbac: 0x46050141
    ctx->pc = 0x17fbacu;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x17fbb0: 0x46004a40
    ctx->pc = 0x17fbb0u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x17fbb4: 0xe4810020
    ctx->pc = 0x17fbb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x17fbb8: 0x46005280
    ctx->pc = 0x17fbb8u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
    // 0x17fbbc: 0xe4820024
    ctx->pc = 0x17fbbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x17fbc0: 0x46003180
    ctx->pc = 0x17fbc0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x17fbc4: 0xe485003c
    ctx->pc = 0x17fbc4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x17fbc8: 0x46038002
    ctx->pc = 0x17fbc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[16], ctx->f[3]);
    // 0x17fbcc: 0xe4890000
    ctx->pc = 0x17fbccu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x17fbd0: 0x460378c2
    ctx->pc = 0x17fbd0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[15], ctx->f[3]);
    // 0x17fbd4: 0xe48a0014
    ctx->pc = 0x17fbd4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x17fbd8: 0xe4860028
    ctx->pc = 0x17fbd8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x17fbdc: 0xe4800008
    ctx->pc = 0x17fbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x17fbe0: 0x3e00008
    ctx->pc = 0x17FBE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FBE4u;
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F688u: goto label_17f688;
            case 0x17F6D4u: goto label_17f6d4;
            case 0x17F6DCu: goto label_17f6dc;
            case 0x17F724u: goto label_17f724;
            case 0x17F768u: goto label_17f768;
            case 0x17F7B0u: goto label_17f7b0;
            case 0x17F83Cu: goto label_17f83c;
            case 0x17FBE8u: goto label_17fbe8;
            case 0x17FD0Cu: goto label_17fd0c;
            case 0x17FD38u: goto label_17fd38;
            case 0x17FD70u: goto label_17fd70;
            case 0x17FDF8u: goto label_17fdf8;
            case 0x17FE1Cu: goto label_17fe1c;
            case 0x17FECCu: goto label_17fecc;
            case 0x17FF3Cu: goto label_17ff3c;
            case 0x17FFB8u: goto label_17ffb8;
            case 0x180060u: goto label_180060;
            case 0x1800D8u: goto label_1800d8;
            case 0x180138u: goto label_180138;
            case 0x180148u: goto label_180148;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17FBE8u;
label_17fbe8:
    // 0x17fbe8: 0xc4a20000
    ctx->pc = 0x17fbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17fbec: 0xc4a40004
    ctx->pc = 0x17fbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17fbf0: 0x46028142
    ctx->pc = 0x17fbf0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[16], ctx->f[2]);
    // 0x17fbf4: 0xc4a70008
    ctx->pc = 0x17fbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x17fbf8: 0x46047982
    ctx->pc = 0x17fbf8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[15], ctx->f[4]);
    // 0x17fbfc: 0x3c01bf80
    ctx->pc = 0x17fbfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x17fc00: 0x44810800
    ctx->pc = 0x17fc00u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x17fc04: 0x46077202
    ctx->pc = 0x17fc04u;
    ctx->f[8] = FPU_MUL_S(ctx->f[14], ctx->f[7]);
    // 0x17fc08: 0xac80000c
    ctx->pc = 0x17fc08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x17fc0c: 0x46001247
    ctx->pc = 0x17fc0cu;
    ctx->f[9] = FPU_NEG_S(ctx->f[2]);
    // 0x17fc10: 0xac80001c
    ctx->pc = 0x17fc10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x17fc14: 0x46062800
    ctx->pc = 0x17fc14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x17fc18: 0xac80002c
    ctx->pc = 0x17fc18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x17fc1c: 0x46047282
    ctx->pc = 0x17fc1cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[14], ctx->f[4]);
    // 0x17fc20: 0x460022c7
    ctx->pc = 0x17fc20u;
    ctx->f[11] = FPU_NEG_S(ctx->f[4]);
    // 0x17fc24: 0x46080000
    ctx->pc = 0x17fc24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x17fc28: 0x460278c2
    ctx->pc = 0x17fc28u;
    ctx->f[3] = FPU_MUL_S(ctx->f[15], ctx->f[2]);
    // 0x17fc2c: 0x46078302
    ctx->pc = 0x17fc2cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[16], ctx->f[7]);
    // 0x17fc30: 0x0
    ctx->pc = 0x17fc30u;
    // NOP
    // 0x17fc34: 0x0
    ctx->pc = 0x17fc34u;
    // NOP
    // 0x17fc38: 0x46000843
    ctx->pc = 0x17fc38u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x17fc3c: 0x46002941
    ctx->pc = 0x17fc3cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x17fc40: 0x46003181
    ctx->pc = 0x17fc40u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x17fc44: 0x46004201
    ctx->pc = 0x17fc44u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x17fc48: 0x46077b42
    ctx->pc = 0x17fc48u;
    ctx->f[13] = FPU_MUL_S(ctx->f[15], ctx->f[7]);
    // 0x17fc4c: 0x46000007
    ctx->pc = 0x17fc4cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17fc50: 0x46027082
    ctx->pc = 0x17fc50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x17fc54: 0x46048102
    ctx->pc = 0x17fc54u;
    ctx->f[4] = FPU_MUL_S(ctx->f[16], ctx->f[4]);
    // 0x17fc58: 0x460039c7
    ctx->pc = 0x17fc58u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
    // 0x17fc5c: 0x46000802
    ctx->pc = 0x17fc5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17fc60: 0x46050942
    ctx->pc = 0x17fc60u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x17fc64: 0x460308c2
    ctx->pc = 0x17fc64u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x17fc68: 0x46020882
    ctx->pc = 0x17fc68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x17fc6c: 0xe480003c
    ctx->pc = 0x17fc6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x17fc70: 0x46090a42
    ctx->pc = 0x17fc70u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x17fc74: 0xe4850000
    ctx->pc = 0x17fc74u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x17fc78: 0x46040902
    ctx->pc = 0x17fc78u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x17fc7c: 0xe4830010
    ctx->pc = 0x17fc7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x17fc80: 0x46060982
    ctx->pc = 0x17fc80u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x17fc84: 0xe4820020
    ctx->pc = 0x17fc84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x17fc88: 0x460a0a82
    ctx->pc = 0x17fc88u;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x17fc8c: 0xe4890030
    ctx->pc = 0x17fc8cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x17fc90: 0x460b0ac2
    ctx->pc = 0x17fc90u;
    ctx->f[11] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x17fc94: 0xe4840004
    ctx->pc = 0x17fc94u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x17fc98: 0x460c0b02
    ctx->pc = 0x17fc98u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x17fc9c: 0xe4860014
    ctx->pc = 0x17fc9cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x17fca0: 0x460d0b42
    ctx->pc = 0x17fca0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x17fca4: 0xe48a0024
    ctx->pc = 0x17fca4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x17fca8: 0x46080a02
    ctx->pc = 0x17fca8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x17fcac: 0xe48b0034
    ctx->pc = 0x17fcacu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x17fcb0: 0x46070842
    ctx->pc = 0x17fcb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x17fcb4: 0xe48c0008
    ctx->pc = 0x17fcb4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x17fcb8: 0xe48d0018
    ctx->pc = 0x17fcb8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x17fcbc: 0xe4880028
    ctx->pc = 0x17fcbcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x17fcc0: 0x3e00008
    ctx->pc = 0x17FCC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FCC4u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F688u: goto label_17f688;
            case 0x17F6D4u: goto label_17f6d4;
            case 0x17F6DCu: goto label_17f6dc;
            case 0x17F724u: goto label_17f724;
            case 0x17F768u: goto label_17f768;
            case 0x17F7B0u: goto label_17f7b0;
            case 0x17F83Cu: goto label_17f83c;
            case 0x17FBE8u: goto label_17fbe8;
            case 0x17FD0Cu: goto label_17fd0c;
            case 0x17FD38u: goto label_17fd38;
            case 0x17FD70u: goto label_17fd70;
            case 0x17FDF8u: goto label_17fdf8;
            case 0x17FE1Cu: goto label_17fe1c;
            case 0x17FECCu: goto label_17fecc;
            case 0x17FF3Cu: goto label_17ff3c;
            case 0x17FFB8u: goto label_17ffb8;
            case 0x180060u: goto label_180060;
            case 0x1800D8u: goto label_1800d8;
            case 0x180138u: goto label_180138;
            case 0x180148u: goto label_180148;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17FCC8u;
    // 0x17fcc8: 0x27bdffa0
    ctx->pc = 0x17fcc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17fccc: 0xffb40040
    ctx->pc = 0x17fcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x17fcd0: 0xffb30030
    ctx->pc = 0x17fcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x17fcd4: 0x80a02d
    ctx->pc = 0x17fcd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fcd8: 0xffb20020
    ctx->pc = 0x17fcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17fcdc: 0xa0982d
    ctx->pc = 0x17fcdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fce0: 0xffb10010
    ctx->pc = 0x17fce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17fce4: 0xc0902d
    ctx->pc = 0x17fce4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fce8: 0xffb00000
    ctx->pc = 0x17fce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17fcec: 0xe0882d
    ctx->pc = 0x17fcecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fcf0: 0xffbf0050
    ctx->pc = 0x17fcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17fcf4: 0xc047598
    ctx->pc = 0x17FCF4u;
    SET_GPR_U32(ctx, 31, 0x17FCFCu);
    ctx->pc = 0x17FCF8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FCFCu; }
    }
    if (ctx->pc != 0x17FCFCu) { return; }
    ctx->pc = 0x17FCFCu;
    // 0x17fcfc: 0xda640000
    ctx->pc = 0x17fcfcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17fd00: 0xda650010
    ctx->pc = 0x17fd00u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x17fd04: 0xda660020
    ctx->pc = 0x17fd04u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x17fd08: 0xda670030
    ctx->pc = 0x17fd08u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
label_17fd0c:
    // 0x17fd0c: 0xda480000
    ctx->pc = 0x17fd0cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17fd10: 0x4be821bc
    ctx->pc = 0x17fd10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x17fd14: 0x4be828bd
    ctx->pc = 0x17fd14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x17fd18: 0x4be830be
    ctx->pc = 0x17fd18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x17fd1c: 0x4be83a4b
    ctx->pc = 0x17fd1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x17fd20: 0x4be903bc
    ctx->pc = 0x17fd20u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x17fd24: 0x4a0003bf
    ctx->pc = 0x17fd24u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x17fd28: 0x4bc04a5c
    ctx->pc = 0x17fd28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x17fd2c: 0x12000002
    ctx->pc = 0x17FD2Cu;
    {
        const bool branch_taken_0x17fd2c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x17FD30u;
        { __m128 src = ctx->vu0_vf[9]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x17fd2c) {
            ctx->pc = 0x17FD38u;
            goto label_17fd38;
        }
    }
    ctx->pc = 0x17FD34u;
    // 0x17fd34: 0x4a6a497c
    ctx->pc = 0x17fd34u;
    { __m128 src = ctx->vu0_vf[9]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_17fd38:
    // 0x17fd38: 0xfa8a0000
    ctx->pc = 0x17fd38u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x17fd3c: 0x2231ffff
    ctx->pc = 0x17fd3cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 17), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
    // 0x17fd40: 0x22520010
    ctx->pc = 0x17fd40u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 18), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
    // 0x17fd44: 0x1411fff1
    ctx->pc = 0x17FD44u;
    {
        const bool branch_taken_0x17fd44 = (GPR_U32(ctx, 0) != GPR_U32(ctx, 17));
        ctx->pc = 0x17FD48u;
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 20), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
        if (branch_taken_0x17fd44) {
            ctx->pc = 0x17FD0Cu;
            goto label_17fd0c;
        }
    }
    ctx->pc = 0x17FD4Cu;
    // 0x17fd4c: 0x10400008
    ctx->pc = 0x17FD4Cu;
    {
        const bool branch_taken_0x17fd4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17FD50u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x17fd4c) {
            ctx->pc = 0x17FD70u;
            goto label_17fd70;
        }
    }
    ctx->pc = 0x17FD54u;
    // 0x17fd54: 0xdfb40040
    ctx->pc = 0x17fd54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17fd58: 0xdfb30030
    ctx->pc = 0x17fd58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fd5c: 0xdfb20020
    ctx->pc = 0x17fd5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fd60: 0xdfb10010
    ctx->pc = 0x17fd60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fd64: 0xdfb00000
    ctx->pc = 0x17fd64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fd68: 0x80475ae
    ctx->pc = 0x17FD68u;
    ctx->pc = 0x17FD6Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x11D6B8u;
    sub_0011D6B8_0x11d6b8(rdram, ctx, runtime); return;
    ctx->pc = 0x17FD70u;
label_17fd70:
    // 0x17fd70: 0xdfb40040
    ctx->pc = 0x17fd70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17fd74: 0xdfb30030
    ctx->pc = 0x17fd74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fd78: 0xdfb20020
    ctx->pc = 0x17fd78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fd7c: 0xdfb10010
    ctx->pc = 0x17fd7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fd80: 0xdfb00000
    ctx->pc = 0x17fd80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fd84: 0x3e00008
    ctx->pc = 0x17FD84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FD88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F688u: goto label_17f688;
            case 0x17F6D4u: goto label_17f6d4;
            case 0x17F6DCu: goto label_17f6dc;
            case 0x17F724u: goto label_17f724;
            case 0x17F768u: goto label_17f768;
            case 0x17F7B0u: goto label_17f7b0;
            case 0x17F83Cu: goto label_17f83c;
            case 0x17FBE8u: goto label_17fbe8;
            case 0x17FD0Cu: goto label_17fd0c;
            case 0x17FD38u: goto label_17fd38;
            case 0x17FD70u: goto label_17fd70;
            case 0x17FDF8u: goto label_17fdf8;
            case 0x17FE1Cu: goto label_17fe1c;
            case 0x17FECCu: goto label_17fecc;
            case 0x17FF3Cu: goto label_17ff3c;
            case 0x17FFB8u: goto label_17ffb8;
            case 0x180060u: goto label_180060;
            case 0x1800D8u: goto label_1800d8;
            case 0x180138u: goto label_180138;
            case 0x180148u: goto label_180148;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17FD8Cu;
    // 0x17fd8c: 0x0
    ctx->pc = 0x17fd8cu;
    // NOP
    // 0x17fd90: 0x27bdffb0
    ctx->pc = 0x17fd90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17fd94: 0xffb30030
    ctx->pc = 0x17fd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x17fd98: 0xffb20020
    ctx->pc = 0x17fd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17fd9c: 0x80982d
    ctx->pc = 0x17fd9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fda0: 0xffb10010
    ctx->pc = 0x17fda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17fda4: 0xa0902d
    ctx->pc = 0x17fda4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fda8: 0xffb00000
    ctx->pc = 0x17fda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17fdac: 0xc0882d
    ctx->pc = 0x17fdacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fdb0: 0xffbf0040
    ctx->pc = 0x17fdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17fdb4: 0xc047598
    ctx->pc = 0x17FDB4u;
    SET_GPR_U32(ctx, 31, 0x17FDBCu);
    ctx->pc = 0x17FDB8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FDBCu; }
    }
    if (ctx->pc != 0x17FDBCu) { return; }
    ctx->pc = 0x17FDBCu;
    // 0x17fdbc: 0xda440000
    ctx->pc = 0x17fdbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17fdc0: 0xda450010
    ctx->pc = 0x17fdc0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x17fdc4: 0xda460020
    ctx->pc = 0x17fdc4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x17fdc8: 0xda470030
    ctx->pc = 0x17fdc8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x17fdcc: 0xda280000
    ctx->pc = 0x17fdccu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17fdd0: 0x4be821bc
    ctx->pc = 0x17fdd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x17fdd4: 0x4be828bd
    ctx->pc = 0x17fdd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x17fdd8: 0x4be830be
    ctx->pc = 0x17fdd8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x17fddc: 0x4be83a4b
    ctx->pc = 0x17fddcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x17fde0: 0x4be903bc
    ctx->pc = 0x17fde0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x17fde4: 0x4a0003bf
    ctx->pc = 0x17fde4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x17fde8: 0x4bc04a5c
    ctx->pc = 0x17fde8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x17fdec: 0x12000002
    ctx->pc = 0x17FDECu;
    {
        const bool branch_taken_0x17fdec = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x17FDF0u;
        { __m128 src = ctx->vu0_vf[9]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x17fdec) {
            ctx->pc = 0x17FDF8u;
            goto label_17fdf8;
        }
    }
    ctx->pc = 0x17FDF4u;
    // 0x17fdf4: 0x4a6a497c
    ctx->pc = 0x17fdf4u;
    { __m128 src = ctx->vu0_vf[9]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_17fdf8:
    // 0x17fdf8: 0xfa6a0000
    ctx->pc = 0x17fdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x17fdfc: 0x10400007
    ctx->pc = 0x17FDFCu;
    {
        const bool branch_taken_0x17fdfc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17FE00u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x17fdfc) {
            ctx->pc = 0x17FE1Cu;
            goto label_17fe1c;
        }
    }
    ctx->pc = 0x17FE04u;
    // 0x17fe04: 0xdfb30030
    ctx->pc = 0x17fe04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fe08: 0xdfb20020
    ctx->pc = 0x17fe08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fe0c: 0xdfb10010
    ctx->pc = 0x17fe0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fe10: 0xdfb00000
    ctx->pc = 0x17fe10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fe14: 0x80475ae
    ctx->pc = 0x17FE14u;
    ctx->pc = 0x17FE18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x11D6B8u;
    sub_0011D6B8_0x11d6b8(rdram, ctx, runtime); return;
    ctx->pc = 0x17FE1Cu;
label_17fe1c:
    // 0x17fe1c: 0xdfb30030
    ctx->pc = 0x17fe1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fe20: 0xdfb20020
    ctx->pc = 0x17fe20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fe24: 0xdfb10010
    ctx->pc = 0x17fe24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fe28: 0xdfb00000
    ctx->pc = 0x17fe28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fe2c: 0x3e00008
    ctx->pc = 0x17FE2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FE30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F688u: goto label_17f688;
            case 0x17F6D4u: goto label_17f6d4;
            case 0x17F6DCu: goto label_17f6dc;
            case 0x17F724u: goto label_17f724;
            case 0x17F768u: goto label_17f768;
            case 0x17F7B0u: goto label_17f7b0;
            case 0x17F83Cu: goto label_17f83c;
            case 0x17FBE8u: goto label_17fbe8;
            case 0x17FD0Cu: goto label_17fd0c;
            case 0x17FD38u: goto label_17fd38;
            case 0x17FD70u: goto label_17fd70;
            case 0x17FDF8u: goto label_17fdf8;
            case 0x17FE1Cu: goto label_17fe1c;
            case 0x17FECCu: goto label_17fecc;
            case 0x17FF3Cu: goto label_17ff3c;
            case 0x17FFB8u: goto label_17ffb8;
            case 0x180060u: goto label_180060;
            case 0x1800D8u: goto label_1800d8;
            case 0x180138u: goto label_180138;
            case 0x180148u: goto label_180148;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17FE34u;
    // 0x17fe34: 0x0
    ctx->pc = 0x17fe34u;
    // NOP
    // 0x17fe38: 0xc4a00000
    ctx->pc = 0x17fe38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fe3c: 0xe4800000
    ctx->pc = 0x17fe3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x17fe40: 0xc4a10004
    ctx->pc = 0x17fe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17fe44: 0xe4810004
    ctx->pc = 0x17fe44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x17fe48: 0xc4a00008
    ctx->pc = 0x17fe48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fe4c: 0x3e00008
    ctx->pc = 0x17FE4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FE50u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F688u: goto label_17f688;
            case 0x17F6D4u: goto label_17f6d4;
            case 0x17F6DCu: goto label_17f6dc;
            case 0x17F724u: goto label_17f724;
            case 0x17F768u: goto label_17f768;
            case 0x17F7B0u: goto label_17f7b0;
            case 0x17F83Cu: goto label_17f83c;
            case 0x17FBE8u: goto label_17fbe8;
            case 0x17FD0Cu: goto label_17fd0c;
            case 0x17FD38u: goto label_17fd38;
            case 0x17FD70u: goto label_17fd70;
            case 0x17FDF8u: goto label_17fdf8;
            case 0x17FE1Cu: goto label_17fe1c;
            case 0x17FECCu: goto label_17fecc;
            case 0x17FF3Cu: goto label_17ff3c;
            case 0x17FFB8u: goto label_17ffb8;
            case 0x180060u: goto label_180060;
            case 0x1800D8u: goto label_1800d8;
            case 0x180138u: goto label_180138;
            case 0x180148u: goto label_180148;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17FE54u;
    // 0x17fe54: 0x0
    ctx->pc = 0x17fe54u;
    // NOP
    // 0x17fe58: 0x27bdffb0
    ctx->pc = 0x17fe58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17fe5c: 0xffb20020
    ctx->pc = 0x17fe5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17fe60: 0xffb10010
    ctx->pc = 0x17fe60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17fe64: 0x80902d
    ctx->pc = 0x17fe64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe68: 0xffb00000
    ctx->pc = 0x17fe68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17fe6c: 0xa0882d
    ctx->pc = 0x17fe6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe70: 0xe7b40040
    ctx->pc = 0x17fe70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x17fe74: 0xc0802d
    ctx->pc = 0x17fe74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe78: 0xffbf0030
    ctx->pc = 0x17fe78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17fe7c: 0xc047598
    ctx->pc = 0x17FE7Cu;
    SET_GPR_U32(ctx, 31, 0x17FE84u);
    ctx->pc = 0x17FE80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FE84u; }
    }
    if (ctx->pc != 0x17FE84u) { return; }
    ctx->pc = 0x17FE84u;
    // 0x17fe84: 0xda240000
    ctx->pc = 0x17fe84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17fe88: 0xda050000
    ctx->pc = 0x17fe88u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17fe8c: 0x4408a000
    ctx->pc = 0x17fe8cu;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[20]);
    // 0x17fe90: 0x48a83000
    ctx->pc = 0x17fe90u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x17fe94: 0x4a29233c
    ctx->pc = 0x17fe94u;
    ctx->vu0_vf[9] = ctx->vu0_vf[4];
    // 0x17fe98: 0x4b0001c3
    ctx->pc = 0x17fe98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x17fe9c: 0x4b063a2c
    ctx->pc = 0x17fe9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x17fea0: 0x4bc621bc
    ctx->pc = 0x17fea0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x17fea4: 0x4bc82a48
    ctx->pc = 0x17fea4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x17fea8: 0xfa490000
    ctx->pc = 0x17fea8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x17feac: 0x10400007
    ctx->pc = 0x17FEACu;
    {
        const bool branch_taken_0x17feac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17FEB0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17feac) {
            ctx->pc = 0x17FECCu;
            goto label_17fecc;
        }
    }
    ctx->pc = 0x17FEB4u;
    // 0x17feb4: 0xdfb20020
    ctx->pc = 0x17feb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17feb8: 0xdfb10010
    ctx->pc = 0x17feb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17febc: 0xdfb00000
    ctx->pc = 0x17febcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fec0: 0xc7b40040
    ctx->pc = 0x17fec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17fec4: 0x80475ae
    ctx->pc = 0x17FEC4u;
    ctx->pc = 0x17FEC8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x11D6B8u;
    sub_0011D6B8_0x11d6b8(rdram, ctx, runtime); return;
    ctx->pc = 0x17FECCu;
label_17fecc:
    // 0x17fecc: 0xdfb20020
    ctx->pc = 0x17feccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fed0: 0xdfb10010
    ctx->pc = 0x17fed0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fed4: 0xdfb00000
    ctx->pc = 0x17fed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fed8: 0xc7b40040
    ctx->pc = 0x17fed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17fedc: 0x3e00008
    ctx->pc = 0x17FEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FEE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F688u: goto label_17f688;
            case 0x17F6D4u: goto label_17f6d4;
            case 0x17F6DCu: goto label_17f6dc;
            case 0x17F724u: goto label_17f724;
            case 0x17F768u: goto label_17f768;
            case 0x17F7B0u: goto label_17f7b0;
            case 0x17F83Cu: goto label_17f83c;
            case 0x17FBE8u: goto label_17fbe8;
            case 0x17FD0Cu: goto label_17fd0c;
            case 0x17FD38u: goto label_17fd38;
            case 0x17FD70u: goto label_17fd70;
            case 0x17FDF8u: goto label_17fdf8;
            case 0x17FE1Cu: goto label_17fe1c;
            case 0x17FECCu: goto label_17fecc;
            case 0x17FF3Cu: goto label_17ff3c;
            case 0x17FFB8u: goto label_17ffb8;
            case 0x180060u: goto label_180060;
            case 0x1800D8u: goto label_1800d8;
            case 0x180138u: goto label_180138;
            case 0x180148u: goto label_180148;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17FEE4u;
    // 0x17fee4: 0x0
    ctx->pc = 0x17fee4u;
    // NOP
    // 0x17fee8: 0x27bdffc0
    ctx->pc = 0x17fee8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17feec: 0xffb10010
    ctx->pc = 0x17feecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17fef0: 0xffb00000
    ctx->pc = 0x17fef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17fef4: 0x80882d
    ctx->pc = 0x17fef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fef8: 0xe7b40030
    ctx->pc = 0x17fef8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17fefc: 0xa0802d
    ctx->pc = 0x17fefcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ff00: 0xffbf0020
    ctx->pc = 0x17ff00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17ff04: 0xc047598
    ctx->pc = 0x17FF04u;
    SET_GPR_U32(ctx, 31, 0x17FF0Cu);
    ctx->pc = 0x17FF08u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF0Cu; }
    }
    if (ctx->pc != 0x17FF0Cu) { return; }
    ctx->pc = 0x17FF0Cu;
    // 0x17ff0c: 0xda040000
    ctx->pc = 0x17ff0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17ff10: 0x4408a000
    ctx->pc = 0x17ff10u;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[20]);
    // 0x17ff14: 0x48a82800
    ctx->pc = 0x17ff14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x17ff18: 0x4bc52118
    ctx->pc = 0x17ff18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17ff1c: 0xfa240000
    ctx->pc = 0x17ff1cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17ff20: 0x10400006
    ctx->pc = 0x17FF20u;
    {
        const bool branch_taken_0x17ff20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17FF24u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x17ff20) {
            ctx->pc = 0x17FF3Cu;
            goto label_17ff3c;
        }
    }
    ctx->pc = 0x17FF28u;
    // 0x17ff28: 0xdfb10010
    ctx->pc = 0x17ff28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ff2c: 0xdfb00000
    ctx->pc = 0x17ff2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ff30: 0xc7b40030
    ctx->pc = 0x17ff30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17ff34: 0x80475ae
    ctx->pc = 0x17FF34u;
    ctx->pc = 0x17FF38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x11D6B8u;
    sub_0011D6B8_0x11d6b8(rdram, ctx, runtime); return;
    ctx->pc = 0x17FF3Cu;
label_17ff3c:
    // 0x17ff3c: 0xdfb10010
    ctx->pc = 0x17ff3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ff40: 0xdfb00000
    ctx->pc = 0x17ff40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ff44: 0xc7b40030
    ctx->pc = 0x17ff44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17ff48: 0x3e00008
    ctx->pc = 0x17FF48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FF4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F688u: goto label_17f688;
            case 0x17F6D4u: goto label_17f6d4;
            case 0x17F6DCu: goto label_17f6dc;
            case 0x17F724u: goto label_17f724;
            case 0x17F768u: goto label_17f768;
            case 0x17F7B0u: goto label_17f7b0;
            case 0x17F83Cu: goto label_17f83c;
            case 0x17FBE8u: goto label_17fbe8;
            case 0x17FD0Cu: goto label_17fd0c;
            case 0x17FD38u: goto label_17fd38;
            case 0x17FD70u: goto label_17fd70;
            case 0x17FDF8u: goto label_17fdf8;
            case 0x17FE1Cu: goto label_17fe1c;
            case 0x17FECCu: goto label_17fecc;
            case 0x17FF3Cu: goto label_17ff3c;
            case 0x17FFB8u: goto label_17ffb8;
            case 0x180060u: goto label_180060;
            case 0x1800D8u: goto label_1800d8;
            case 0x180138u: goto label_180138;
            case 0x180148u: goto label_180148;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17FF50u;
    // 0x17ff50: 0x27bdffe0
    ctx->pc = 0x17ff50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17ff54: 0xffb00000
    ctx->pc = 0x17ff54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ff58: 0xffbf0010
    ctx->pc = 0x17ff58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17ff5c: 0xc047598
    ctx->pc = 0x17FF5Cu;
    SET_GPR_U32(ctx, 31, 0x17FF64u);
    ctx->pc = 0x17FF60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF64u; }
    }
    if (ctx->pc != 0x17FF64u) { return; }
    ctx->pc = 0x17FF64u;
    // 0x17ff64: 0x4be0012c
    ctx->pc = 0x17ff64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17ff68: 0x3c034580
    ctx->pc = 0x17ff68u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17792 << 16));
    // 0x17ff6c: 0x31c38
    ctx->pc = 0x17ff6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x17ff70: 0x34634580
    ctx->pc = 0x17ff70u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 17792));
    // 0x17ff74: 0x31c38
    ctx->pc = 0x17ff74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x17ff78: 0xda070000
    ctx->pc = 0x17ff78u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17ff7c: 0x48a33000
    ctx->pc = 0x17ff7cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x17ff80: 0x48c08000
    ctx->pc = 0x17ff80u;
    ctx->vu0_vpu_stat4 = GPR_U32(ctx, 0);
    // 0x17ff84: 0x4ba4396c
    ctx->pc = 0x17ff84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17ff88: 0x4b87316c
    ctx->pc = 0x17ff88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17ff8c: 0x4a0002ff
    ctx->pc = 0x17ff8cu;
    // NOP operation, no action needed for VU0
    // 0x17ff90: 0x4a0002ff
    ctx->pc = 0x17ff90u;
    // NOP operation, no action needed for VU0
    // 0x17ff94: 0x4a0002ff
    ctx->pc = 0x17ff94u;
    // NOP operation, no action needed for VU0
    // 0x17ff98: 0x4a0002ff
    ctx->pc = 0x17ff98u;
    // NOP operation, no action needed for VU0
    // 0x17ff9c: 0x4a0002ff
    ctx->pc = 0x17ff9cu;
    // NOP operation, no action needed for VU0
    // 0x17ffa0: 0x48438000
    ctx->pc = 0x17ffa0u;
    SET_GPR_U32(ctx, 3, ctx->vu0_vpu_stat4);
    // 0x17ffa4: 0x306300c0
    ctx->pc = 0x17ffa4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 192));
    // 0x17ffa8: 0x10400003
    ctx->pc = 0x17FFA8u;
    {
        const bool branch_taken_0x17ffa8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17FFACu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17ffa8) {
            ctx->pc = 0x17FFB8u;
            goto label_17ffb8;
        }
    }
    ctx->pc = 0x17FFB0u;
    // 0x17ffb0: 0xc0475ae
    ctx->pc = 0x17FFB0u;
    SET_GPR_U32(ctx, 31, 0x17FFB8u);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FFB8u; }
    }
    if (ctx->pc != 0x17FFB8u) { return; }
    ctx->pc = 0x17FFB8u;
label_17ffb8:
    // 0x17ffb8: 0x200102d
    ctx->pc = 0x17ffb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ffbc: 0xdfbf0010
    ctx->pc = 0x17ffbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ffc0: 0xdfb00000
    ctx->pc = 0x17ffc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ffc4: 0x3e00008
    ctx->pc = 0x17FFC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FFC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F688u: goto label_17f688;
            case 0x17F6D4u: goto label_17f6d4;
            case 0x17F6DCu: goto label_17f6dc;
            case 0x17F724u: goto label_17f724;
            case 0x17F768u: goto label_17f768;
            case 0x17F7B0u: goto label_17f7b0;
            case 0x17F83Cu: goto label_17f83c;
            case 0x17FBE8u: goto label_17fbe8;
            case 0x17FD0Cu: goto label_17fd0c;
            case 0x17FD38u: goto label_17fd38;
            case 0x17FD70u: goto label_17fd70;
            case 0x17FDF8u: goto label_17fdf8;
            case 0x17FE1Cu: goto label_17fe1c;
            case 0x17FECCu: goto label_17fecc;
            case 0x17FF3Cu: goto label_17ff3c;
            case 0x17FFB8u: goto label_17ffb8;
            case 0x180060u: goto label_180060;
            case 0x1800D8u: goto label_1800d8;
            case 0x180138u: goto label_180138;
            case 0x180148u: goto label_180148;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17FFCCu;
    // 0x17ffcc: 0x0
    ctx->pc = 0x17ffccu;
    // NOP
    // 0x17ffd0: 0x27bdffc0
    ctx->pc = 0x17ffd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17ffd4: 0xffb20020
    ctx->pc = 0x17ffd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17ffd8: 0xffb10010
    ctx->pc = 0x17ffd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17ffdc: 0x80902d
    ctx->pc = 0x17ffdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ffe0: 0xffb00000
    ctx->pc = 0x17ffe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ffe4: 0xa0882d
    ctx->pc = 0x17ffe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ffe8: 0xffbf0030
    ctx->pc = 0x17ffe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17ffec: 0xc047598
    ctx->pc = 0x17FFECu;
    SET_GPR_U32(ctx, 31, 0x17FFF4u);
    ctx->pc = 0x17FFF0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FFF4u; }
    }
    if (ctx->pc != 0x17FFF4u) { return; }
    ctx->pc = 0x17FFF4u;
    // 0x17fff4: 0x4be0012c
    ctx->pc = 0x17fff4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17fff8: 0x3c034580
    ctx->pc = 0x17fff8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17792 << 16));
    // 0x17fffc: 0x31c38
    ctx->pc = 0x17fffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x180000: 0x34634580
    ctx->pc = 0x180000u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 17792));
    // 0x180004: 0x31c38
    ctx->pc = 0x180004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x180008: 0xda460000
    ctx->pc = 0x180008u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18000c: 0xda280000
    ctx->pc = 0x18000cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x180010: 0xda090000
    ctx->pc = 0x180010u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x180014: 0x48a33800
    ctx->pc = 0x180014u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x180018: 0x48c08000
    ctx->pc = 0x180018u;
    ctx->vu0_vpu_stat4 = GPR_U32(ctx, 0);
    // 0x18001c: 0x4ba4316c
    ctx->pc = 0x18001cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x180020: 0x4b86396c
    ctx->pc = 0x180020u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x180024: 0x4ba4416c
    ctx->pc = 0x180024u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x180028: 0x4b88396c
    ctx->pc = 0x180028u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18002c: 0x4ba4496c
    ctx->pc = 0x18002cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x180030: 0x4b89396c
    ctx->pc = 0x180030u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x180034: 0x4a0002ff
    ctx->pc = 0x180034u;
    // NOP operation, no action needed for VU0
    // 0x180038: 0x4a0002ff
    ctx->pc = 0x180038u;
    // NOP operation, no action needed for VU0
    // 0x18003c: 0x4a0002ff
    ctx->pc = 0x18003cu;
    // NOP operation, no action needed for VU0
    // 0x180040: 0x4a0002ff
    ctx->pc = 0x180040u;
    // NOP operation, no action needed for VU0
    // 0x180044: 0x4a0002ff
    ctx->pc = 0x180044u;
    // NOP operation, no action needed for VU0
    // 0x180048: 0x48438000
    ctx->pc = 0x180048u;
    SET_GPR_U32(ctx, 3, ctx->vu0_vpu_stat4);
    // 0x18004c: 0x306300c0
    ctx->pc = 0x18004cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 192));
    // 0x180050: 0x10400003
    ctx->pc = 0x180050u;
    {
        const bool branch_taken_0x180050 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x180054u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x180050) {
            ctx->pc = 0x180060u;
            goto label_180060;
        }
    }
    ctx->pc = 0x180058u;
    // 0x180058: 0xc0475ae
    ctx->pc = 0x180058u;
    SET_GPR_U32(ctx, 31, 0x180060u);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180060u; }
    }
    if (ctx->pc != 0x180060u) { return; }
    ctx->pc = 0x180060u;
label_180060:
    // 0x180060: 0x200102d
    ctx->pc = 0x180060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180064: 0xdfbf0030
    ctx->pc = 0x180064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180068: 0xdfb20020
    ctx->pc = 0x180068u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18006c: 0xdfb10010
    ctx->pc = 0x18006cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180070: 0xdfb00000
    ctx->pc = 0x180070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180074: 0x3e00008
    ctx->pc = 0x180074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180078u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F688u: goto label_17f688;
            case 0x17F6D4u: goto label_17f6d4;
            case 0x17F6DCu: goto label_17f6dc;
            case 0x17F724u: goto label_17f724;
            case 0x17F768u: goto label_17f768;
            case 0x17F7B0u: goto label_17f7b0;
            case 0x17F83Cu: goto label_17f83c;
            case 0x17FBE8u: goto label_17fbe8;
            case 0x17FD0Cu: goto label_17fd0c;
            case 0x17FD38u: goto label_17fd38;
            case 0x17FD70u: goto label_17fd70;
            case 0x17FDF8u: goto label_17fdf8;
            case 0x17FE1Cu: goto label_17fe1c;
            case 0x17FECCu: goto label_17fecc;
            case 0x17FF3Cu: goto label_17ff3c;
            case 0x17FFB8u: goto label_17ffb8;
            case 0x180060u: goto label_180060;
            case 0x1800D8u: goto label_1800d8;
            case 0x180138u: goto label_180138;
            case 0x180148u: goto label_180148;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18007Cu;
    // 0x18007c: 0x0
    ctx->pc = 0x18007cu;
    // NOP
    // 0x180080: 0x27bdffa0
    ctx->pc = 0x180080u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x180084: 0xffb40040
    ctx->pc = 0x180084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x180088: 0xffb30030
    ctx->pc = 0x180088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x18008c: 0x80a02d
    ctx->pc = 0x18008cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180090: 0xffb20020
    ctx->pc = 0x180090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x180094: 0xa0982d
    ctx->pc = 0x180094u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180098: 0xffb10010
    ctx->pc = 0x180098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18009c: 0xc0902d
    ctx->pc = 0x18009cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1800a0: 0xffb00000
    ctx->pc = 0x1800a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1800a4: 0xe0882d
    ctx->pc = 0x1800a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1800a8: 0xffbf0050
    ctx->pc = 0x1800a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1800ac: 0xc047598
    ctx->pc = 0x1800ACu;
    SET_GPR_U32(ctx, 31, 0x1800B4u);
    ctx->pc = 0x1800B0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1800B4u; }
    }
    if (ctx->pc != 0x1800B4u) { return; }
    ctx->pc = 0x1800B4u;
    // 0x1800b4: 0xda280000
    ctx->pc = 0x1800b4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1800b8: 0xda440000
    ctx->pc = 0x1800b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1800bc: 0xda450010
    ctx->pc = 0x1800bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1800c0: 0xda460020
    ctx->pc = 0x1800c0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1800c4: 0xda470030
    ctx->pc = 0x1800c4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1800c8: 0xda890000
    ctx->pc = 0x1800c8u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1800cc: 0xda6a0000
    ctx->pc = 0x1800ccu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1800d0: 0xda8b0000
    ctx->pc = 0x1800d0u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1800d4: 0xda6c0000
    ctx->pc = 0x1800d4u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1800d8:
    // 0x1800d8: 0x4be821bc
    ctx->pc = 0x1800d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1800dc: 0x4be828bd
    ctx->pc = 0x1800dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1800e0: 0x4be830be
    ctx->pc = 0x1800e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1800e4: 0x4be83a0b
    ctx->pc = 0x1800e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1800e8: 0x4bc84adb
    ctx->pc = 0x1800e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1800ec: 0x4bc8531b
    ctx->pc = 0x1800ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1800f0: 0x4a0002ff
    ctx->pc = 0x1800f0u;
    // NOP operation, no action needed for VU0
    // 0x1800f4: 0x4a0002ff
    ctx->pc = 0x1800f4u;
    // NOP operation, no action needed for VU0
    // 0x1800f8: 0x48c08000
    ctx->pc = 0x1800f8u;
    ctx->vu0_vpu_stat4 = GPR_U32(ctx, 0);
    // 0x1800fc: 0x4bab42ec
    ctx->pc = 0x1800fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x180100: 0x4ba8632c
    ctx->pc = 0x180100u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[12], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x180104: 0x4a2b4b3c
    ctx->pc = 0x180104u;
    ctx->vu0_vf[11] = ctx->vu0_vf[9];
    // 0x180108: 0x4a2c533c
    ctx->pc = 0x180108u;
    ctx->vu0_vf[12] = ctx->vu0_vf[10];
    // 0x18010c: 0x4a0002ff
    ctx->pc = 0x18010cu;
    // NOP operation, no action needed for VU0
    // 0x180110: 0x22310010
    ctx->pc = 0x180110u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 17), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
    // 0x180114: 0xda280000
    ctx->pc = 0x180114u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x180118: 0x2210ffff
    ctx->pc = 0x180118u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 16), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
    // 0x18011c: 0x48438000
    ctx->pc = 0x18011cu;
    SET_GPR_U32(ctx, 3, ctx->vu0_vpu_stat4);
    // 0x180120: 0x306300c0
    ctx->pc = 0x180120u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 192));
    // 0x180124: 0x10600004
    ctx->pc = 0x180124u;
    {
        const bool branch_taken_0x180124 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x180124) {
            ctx->pc = 0x180138u;
            goto label_180138;
        }
    }
    ctx->pc = 0x18012Cu;
    // 0x18012c: 0x1410ffea
    ctx->pc = 0x18012Cu;
    {
        const bool branch_taken_0x18012c = (GPR_U32(ctx, 0) != GPR_U32(ctx, 16));
        if (branch_taken_0x18012c) {
            ctx->pc = 0x1800D8u;
            goto label_1800d8;
        }
    }
    ctx->pc = 0x180134u;
    // 0x180134: 0x20030001
    ctx->pc = 0x180134u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_180138:
    // 0x180138: 0x10400003
    ctx->pc = 0x180138u;
    {
        const bool branch_taken_0x180138 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18013Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x180138) {
            ctx->pc = 0x180148u;
            goto label_180148;
        }
    }
    ctx->pc = 0x180140u;
    // 0x180140: 0xc0475ae
    ctx->pc = 0x180140u;
    SET_GPR_U32(ctx, 31, 0x180148u);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180148u; }
    }
    if (ctx->pc != 0x180148u) { return; }
    ctx->pc = 0x180148u;
label_180148:
    // 0x180148: 0x200102d
    ctx->pc = 0x180148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18014c: 0xdfbf0050
    ctx->pc = 0x18014cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180150: 0xdfb40040
    ctx->pc = 0x180150u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x180154: 0xdfb30030
    ctx->pc = 0x180154u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180158: 0xdfb20020
    ctx->pc = 0x180158u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18015c: 0xdfb10010
    ctx->pc = 0x18015cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180160: 0xdfb00000
    ctx->pc = 0x180160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180164: 0x3e00008
    ctx->pc = 0x180164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180168u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F688u: goto label_17f688;
            case 0x17F6D4u: goto label_17f6d4;
            case 0x17F6DCu: goto label_17f6dc;
            case 0x17F724u: goto label_17f724;
            case 0x17F768u: goto label_17f768;
            case 0x17F7B0u: goto label_17f7b0;
            case 0x17F83Cu: goto label_17f83c;
            case 0x17FBE8u: goto label_17fbe8;
            case 0x17FD0Cu: goto label_17fd0c;
            case 0x17FD38u: goto label_17fd38;
            case 0x17FD70u: goto label_17fd70;
            case 0x17FDF8u: goto label_17fdf8;
            case 0x17FE1Cu: goto label_17fe1c;
            case 0x17FECCu: goto label_17fecc;
            case 0x17FF3Cu: goto label_17ff3c;
            case 0x17FFB8u: goto label_17ffb8;
            case 0x180060u: goto label_180060;
            case 0x1800D8u: goto label_1800d8;
            case 0x180138u: goto label_180138;
            case 0x180148u: goto label_180148;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18016Cu;
    // 0x18016c: 0x0
    ctx->pc = 0x18016cu;
    // NOP
}
