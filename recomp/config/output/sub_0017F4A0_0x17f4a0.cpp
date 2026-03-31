#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017F4A0
// Address: 0x17f4a0 - 0x17f688
void sub_0017F4A0_0x17f4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17f4a0u;

    // 0x17f4a0: 0x27bdffc0
    ctx->pc = 0x17f4a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17f4a4: 0xffb10010
    ctx->pc = 0x17f4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17f4a8: 0xffb00000
    ctx->pc = 0x17f4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f4ac: 0x80882d
    ctx->pc = 0x17f4acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f4b0: 0xe7b40030
    ctx->pc = 0x17f4b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17f4b4: 0xa0802d
    ctx->pc = 0x17f4b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f4b8: 0xffbf0020
    ctx->pc = 0x17f4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17f4bc: 0xc047598
    ctx->pc = 0x17F4BCu;
    SET_GPR_U32(ctx, 31, 0x17F4C4u);
    ctx->pc = 0x17F4C0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F4C4u; }
    }
    if (ctx->pc != 0x17F4C4u) { return; }
    ctx->pc = 0x17F4C4u;
    // 0x17f4c4: 0x44800000
    ctx->pc = 0x17f4c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x17f4c8: 0x4600a034
    ctx->pc = 0x17f4c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17f4cc: 0x3c013fc9
    ctx->pc = 0x17f4ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x17f4d0: 0x34210fdb
    ctx->pc = 0x17f4d0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x17f4d4: 0x44810000
    ctx->pc = 0x17f4d4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x17f4d8: 0x45000004
    ctx->pc = 0x17F4D8u;
    {
        const bool branch_taken_0x17f4d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17f4d8) {
            ctx->pc = 0x17F4ECu;
            goto label_17f4ec;
        }
    }
    ctx->pc = 0x17F4E0u;
    // 0x17f4e0: 0x46140500
    ctx->pc = 0x17f4e0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x17f4e4: 0x805fd3d
    ctx->pc = 0x17F4E4u;
    ctx->pc = 0x17F4E8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x17F4F4u;
    goto label_17f4f4;
    ctx->pc = 0x17F4ECu;
label_17f4ec:
    // 0x17f4ec: 0x46140501
    ctx->pc = 0x17f4ecu;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x17f4f0: 0x382d
    ctx->pc = 0x17f4f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f4f4:
    // 0x17f4f4: 0x4408a000
    ctx->pc = 0x17f4f4u;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[20]);
    // 0x17f4f8: 0x48a83000
    ctx->pc = 0x17f4f8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x17f4fc: 0x3e0302d
    ctx->pc = 0x17f4fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 31) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f500: 0xc05fd0a
    ctx->pc = 0x17F500u;
    SET_GPR_U32(ctx, 31, 0x17F508u);
    ctx->pc = 0x17F428u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F428_0x17f428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F508u; }
    }
    if (ctx->pc != 0x17F508u) { return; }
    ctx->pc = 0x17F508u;
    // 0x17f508: 0xc0f82d
    ctx->pc = 0x17f508u;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f50c: 0x4be62b3c
    ctx->pc = 0x17f50cu;
    ctx->vu0_vf[6] = ctx->vu0_vf[5];
    // 0x17f510: 0x4be72b3c
    ctx->pc = 0x17f510u;
    ctx->vu0_vf[7] = ctx->vu0_vf[5];
    // 0x17f514: 0x4be9033c
    ctx->pc = 0x17f514u;
    ctx->vu0_vf[9] = ctx->vu0_vf[0];
    // 0x17f518: 0x4bc94a6c
    ctx->pc = 0x17f518u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x17f51c: 0x4be84b3d
    ctx->pc = 0x17f51cu;
    ctx->vu0_vf[8] = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,1));
    // 0x17f520: 0x4a64212c
    ctx->pc = 0x17f520u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17f524: 0x4a842980
    ctx->pc = 0x17f524u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17f528: 0x4b042981
    ctx->pc = 0x17f528u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17f52c: 0x4b0429c4
    ctx->pc = 0x17f52cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x17f530: 0x4a8429c1
    ctx->pc = 0x17f530u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x17f534: 0x24070004
    ctx->pc = 0x17f534u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4));
label_17f538:
    // 0x17f538: 0xda040000
    ctx->pc = 0x17f538u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f53c: 0x4be431bc
    ctx->pc = 0x17f53cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x17f540: 0x4be438bd
    ctx->pc = 0x17f540u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x17f544: 0x4be440be
    ctx->pc = 0x17f544u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x17f548: 0x4be4494b
    ctx->pc = 0x17f548u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x17f54c: 0xfa250000
    ctx->pc = 0x17f54cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x17f550: 0x20e7ffff
    ctx->pc = 0x17f550u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x17f554: 0x22100010
    ctx->pc = 0x17f554u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 16), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
    // 0x17f558: 0x1407fff7
    ctx->pc = 0x17F558u;
    {
        const bool branch_taken_0x17f558 = (GPR_U32(ctx, 0) != GPR_U32(ctx, 7));
        ctx->pc = 0x17F55Cu;
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 17), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
        if (branch_taken_0x17f558) {
            ctx->pc = 0x17F538u;
            goto label_17f538;
        }
    }
    ctx->pc = 0x17F560u;
    // 0x17f560: 0x10400006
    ctx->pc = 0x17F560u;
    {
        const bool branch_taken_0x17f560 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F564u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x17f560) {
            ctx->pc = 0x17F57Cu;
            goto label_17f57c;
        }
    }
    ctx->pc = 0x17F568u;
    // 0x17f568: 0xdfb10010
    ctx->pc = 0x17f568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f56c: 0xdfb00000
    ctx->pc = 0x17f56cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f570: 0xc7b40030
    ctx->pc = 0x17f570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17f574: 0x80475ae
    ctx->pc = 0x17F574u;
    ctx->pc = 0x17F578u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x11D6B8u;
    sub_0011D6B8_0x11d6b8(rdram, ctx, runtime); return;
    ctx->pc = 0x17F57Cu;
label_17f57c:
    // 0x17f57c: 0xdfb10010
    ctx->pc = 0x17f57cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f580: 0xdfb00000
    ctx->pc = 0x17f580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f584: 0xc7b40030
    ctx->pc = 0x17f584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17f588: 0x3e00008
    ctx->pc = 0x17F588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F58Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F4ECu: goto label_17f4ec;
            case 0x17F4F4u: goto label_17f4f4;
            case 0x17F538u: goto label_17f538;
            case 0x17F57Cu: goto label_17f57c;
            case 0x17F5DCu: goto label_17f5dc;
            case 0x17F5E4u: goto label_17f5e4;
            case 0x17F62Cu: goto label_17f62c;
            case 0x17F670u: goto label_17f670;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17F590u;
    // 0x17f590: 0x27bdffc0
    ctx->pc = 0x17f590u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17f594: 0xffb10010
    ctx->pc = 0x17f594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17f598: 0xffb00000
    ctx->pc = 0x17f598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f59c: 0x80882d
    ctx->pc = 0x17f59cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f5a0: 0xe7b40030
    ctx->pc = 0x17f5a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17f5a4: 0xa0802d
    ctx->pc = 0x17f5a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f5a8: 0xffbf0020
    ctx->pc = 0x17f5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17f5ac: 0xc047598
    ctx->pc = 0x17F5ACu;
    SET_GPR_U32(ctx, 31, 0x17F5B4u);
    ctx->pc = 0x17F5B0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F5B4u; }
    }
    if (ctx->pc != 0x17F5B4u) { return; }
    ctx->pc = 0x17F5B4u;
    // 0x17f5b4: 0x44800000
    ctx->pc = 0x17f5b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x17f5b8: 0x4600a034
    ctx->pc = 0x17f5b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17f5bc: 0x3c013fc9
    ctx->pc = 0x17f5bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x17f5c0: 0x34210fdb
    ctx->pc = 0x17f5c0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x17f5c4: 0x44810000
    ctx->pc = 0x17f5c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x17f5c8: 0x45000004
    ctx->pc = 0x17F5C8u;
    {
        const bool branch_taken_0x17f5c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17f5c8) {
            ctx->pc = 0x17F5DCu;
            goto label_17f5dc;
        }
    }
    ctx->pc = 0x17F5D0u;
    // 0x17f5d0: 0x46140500
    ctx->pc = 0x17f5d0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x17f5d4: 0x805fd79
    ctx->pc = 0x17F5D4u;
    ctx->pc = 0x17F5D8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x17F5E4u;
    goto label_17f5e4;
    ctx->pc = 0x17F5DCu;
label_17f5dc:
    // 0x17f5dc: 0x46140501
    ctx->pc = 0x17f5dcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x17f5e0: 0x382d
    ctx->pc = 0x17f5e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f5e4:
    // 0x17f5e4: 0x4408a000
    ctx->pc = 0x17f5e4u;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[20]);
    // 0x17f5e8: 0x48a83000
    ctx->pc = 0x17f5e8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x17f5ec: 0x3e0302d
    ctx->pc = 0x17f5ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 31) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f5f0: 0xc05fd0a
    ctx->pc = 0x17F5F0u;
    SET_GPR_U32(ctx, 31, 0x17F5F8u);
    ctx->pc = 0x17F428u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F428_0x17f428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F5F8u; }
    }
    if (ctx->pc != 0x17F5F8u) { return; }
    ctx->pc = 0x17F5F8u;
    // 0x17f5f8: 0xc0f82d
    ctx->pc = 0x17f5f8u;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f5fc: 0x4be62b3c
    ctx->pc = 0x17f5fcu;
    ctx->vu0_vf[6] = ctx->vu0_vf[5];
    // 0x17f600: 0x4be72b3c
    ctx->pc = 0x17f600u;
    ctx->vu0_vf[7] = ctx->vu0_vf[5];
    // 0x17f604: 0x4be82b3c
    ctx->pc = 0x17f604u;
    ctx->vu0_vf[8] = ctx->vu0_vf[5];
    // 0x17f608: 0x4be92b3c
    ctx->pc = 0x17f608u;
    ctx->vu0_vf[9] = ctx->vu0_vf[5];
    // 0x17f60c: 0x4b002983
    ctx->pc = 0x17f60cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x17f610: 0x4a202a43
    ctx->pc = 0x17f610u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x17f614: 0x4a64212c
    ctx->pc = 0x17f614u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17f618: 0x4a4429c0
    ctx->pc = 0x17f618u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x17f61c: 0x4a8429c1
    ctx->pc = 0x17f61cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x17f620: 0x4a842a04
    ctx->pc = 0x17f620u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x17f624: 0x4a442a01
    ctx->pc = 0x17f624u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x17f628: 0x24070004
    ctx->pc = 0x17f628u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4));
label_17f62c:
    // 0x17f62c: 0xda040000
    ctx->pc = 0x17f62cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f630: 0x4be431bc
    ctx->pc = 0x17f630u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x17f634: 0x4be438bd
    ctx->pc = 0x17f634u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x17f638: 0x4be440be
    ctx->pc = 0x17f638u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x17f63c: 0x4be4494b
    ctx->pc = 0x17f63cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x17f640: 0xfa250000
    ctx->pc = 0x17f640u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x17f644: 0x20e7ffff
    ctx->pc = 0x17f644u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x17f648: 0x22100010
    ctx->pc = 0x17f648u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 16), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
    // 0x17f64c: 0x1407fff7
    ctx->pc = 0x17F64Cu;
    {
        const bool branch_taken_0x17f64c = (GPR_U32(ctx, 0) != GPR_U32(ctx, 7));
        ctx->pc = 0x17F650u;
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 17), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
        if (branch_taken_0x17f64c) {
            ctx->pc = 0x17F62Cu;
            goto label_17f62c;
        }
    }
    ctx->pc = 0x17F654u;
    // 0x17f654: 0x10400006
    ctx->pc = 0x17F654u;
    {
        const bool branch_taken_0x17f654 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F658u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x17f654) {
            ctx->pc = 0x17F670u;
            goto label_17f670;
        }
    }
    ctx->pc = 0x17F65Cu;
    // 0x17f65c: 0xdfb10010
    ctx->pc = 0x17f65cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f660: 0xdfb00000
    ctx->pc = 0x17f660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f664: 0xc7b40030
    ctx->pc = 0x17f664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17f668: 0x80475ae
    ctx->pc = 0x17F668u;
    ctx->pc = 0x17F66Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x11D6B8u;
    sub_0011D6B8_0x11d6b8(rdram, ctx, runtime); return;
    ctx->pc = 0x17F670u;
label_17f670:
    // 0x17f670: 0xdfb10010
    ctx->pc = 0x17f670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f674: 0xdfb00000
    ctx->pc = 0x17f674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f678: 0xc7b40030
    ctx->pc = 0x17f678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17f67c: 0x3e00008
    ctx->pc = 0x17F67Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F680u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F4ECu: goto label_17f4ec;
            case 0x17F4F4u: goto label_17f4f4;
            case 0x17F538u: goto label_17f538;
            case 0x17F57Cu: goto label_17f57c;
            case 0x17F5DCu: goto label_17f5dc;
            case 0x17F5E4u: goto label_17f5e4;
            case 0x17F62Cu: goto label_17f62c;
            case 0x17F670u: goto label_17f670;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17F684u;
    // 0x17f684: 0x0
    ctx->pc = 0x17f684u;
    // NOP
}
