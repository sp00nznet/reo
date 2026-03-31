#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17f5e4
// Address: 0x17f5e4 - 0x17f688
void entry_17f5e4_0x17f688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17f5e4u;

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
