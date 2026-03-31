#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017E998
// Address: 0x17e998 - 0x17eb28
void sub_0017E998_0x17e998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17e998u;

    // 0x17e998: 0x3c030023
    ctx->pc = 0x17e998u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x17e99c: 0x3e00008
    ctx->pc = 0x17E99Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E9A0u;
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294965632)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17EB10u: goto label_17eb10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E9A4u;
    // 0x17e9a4: 0x0
    ctx->pc = 0x17e9a4u;
    // NOP
    // 0x17e9a8: 0x80182d
    ctx->pc = 0x17e9a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9ac: 0x3c040023
    ctx->pc = 0x17e9acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x17e9b0: 0x31178
    ctx->pc = 0x17e9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 5);
    // 0x17e9b4: 0xdc85f980
    ctx->pc = 0x17e9b4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 4294965632)));
    // 0x17e9b8: 0x43102f
    ctx->pc = 0x17e9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x17e9bc: 0x27bdfff0
    ctx->pc = 0x17e9bcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e9c0: 0x221b8
    ctx->pc = 0x17e9c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 6);
    // 0x17e9c4: 0xffbf0000
    ctx->pc = 0x17e9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e9c8: 0x82202f
    ctx->pc = 0x17e9c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x17e9cc: 0x420f8
    ctx->pc = 0x17e9ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 3);
    // 0x17e9d0: 0x83202d
    ctx->pc = 0x17e9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x17e9d4: 0xc043ec6
    ctx->pc = 0x17E9D4u;
    SET_GPR_U32(ctx, 31, 0x17E9DCu);
    ctx->pc = 0x17E9D8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
    ctx->pc = 0x10FB18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FB18_0x10fb18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E9DCu; }
    }
    if (ctx->pc != 0x17E9DCu) { return; }
    ctx->pc = 0x17E9DCu;
    // 0x17e9dc: 0xdfbf0000
    ctx->pc = 0x17e9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e9e0: 0x3e00008
    ctx->pc = 0x17E9E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E9E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17EB10u: goto label_17eb10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E9E8u;
    // 0x17e9e8: 0x41178
    ctx->pc = 0x17e9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 5);
    // 0x17e9ec: 0x3c030023
    ctx->pc = 0x17e9ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x17e9f0: 0x44102f
    ctx->pc = 0x17e9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
    // 0x17e9f4: 0xdc65f980
    ctx->pc = 0x17e9f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 4294965632)));
    // 0x17e9f8: 0x210b8
    ctx->pc = 0x17e9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x17e9fc: 0x27bdfff0
    ctx->pc = 0x17e9fcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17ea00: 0x44102d
    ctx->pc = 0x17ea00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x17ea04: 0xffbf0000
    ctx->pc = 0x17ea04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ea08: 0xc043ec6
    ctx->pc = 0x17EA08u;
    SET_GPR_U32(ctx, 31, 0x17EA10u);
    ctx->pc = 0x17EA0Cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 3);
    ctx->pc = 0x10FB18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FB18_0x10fb18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA10u; }
    }
    if (ctx->pc != 0x17EA10u) { return; }
    ctx->pc = 0x17EA10u;
    // 0x17ea10: 0xdfbf0000
    ctx->pc = 0x17ea10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ea14: 0x3e00008
    ctx->pc = 0x17EA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EA18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17EB10u: goto label_17eb10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17EA1Cu;
    // 0x17ea1c: 0x0
    ctx->pc = 0x17ea1cu;
    // NOP
    // 0x17ea20: 0x3c020023
    ctx->pc = 0x17ea20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x17ea24: 0x27bdfff0
    ctx->pc = 0x17ea24u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17ea28: 0xdc45f980
    ctx->pc = 0x17ea28u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294965632)));
    // 0x17ea2c: 0xffbf0000
    ctx->pc = 0x17ea2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ea30: 0xc043ec6
    ctx->pc = 0x17EA30u;
    SET_GPR_U32(ctx, 31, 0x17EA38u);
    ctx->pc = 0x10FB18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FB18_0x10fb18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA38u; }
    }
    if (ctx->pc != 0x17EA38u) { return; }
    ctx->pc = 0x17EA38u;
    // 0x17ea38: 0xdfbf0000
    ctx->pc = 0x17ea38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ea3c: 0x3e00008
    ctx->pc = 0x17EA3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EA40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17EB10u: goto label_17eb10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17EA44u;
    // 0x17ea44: 0x0
    ctx->pc = 0x17ea44u;
    // NOP
    // 0x17ea48: 0x2402ffff
    ctx->pc = 0x17ea48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17ea4c: 0x2107a
    ctx->pc = 0x17ea4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x17ea50: 0xac800018
    ctx->pc = 0x17ea50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x17ea54: 0xfc820008
    ctx->pc = 0x17ea54u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x17ea58: 0xfc800000
    ctx->pc = 0x17ea58u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x17ea5c: 0x3e00008
    ctx->pc = 0x17EA5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EA60u;
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17EB10u: goto label_17eb10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17EA64u;
    // 0x17ea64: 0x0
    ctx->pc = 0x17ea64u;
    // NOP
    // 0x17ea68: 0xdc870008
    ctx->pc = 0x17ea68u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17ea6c: 0xdc880010
    ctx->pc = 0x17ea6cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17ea70: 0xdc860000
    ctx->pc = 0x17ea70u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17ea74: 0xa7482a
    ctx->pc = 0x17ea74u;
    SET_GPR_U32(ctx, 9, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 7)));
    // 0x17ea78: 0x8c830018
    ctx->pc = 0x17ea78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x17ea7c: 0x105102a
    ctx->pc = 0x17ea7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 5)));
    // 0x17ea80: 0xa2400b
    ctx->pc = 0x17ea80u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 5));
    // 0x17ea84: 0xc5302d
    ctx->pc = 0x17ea84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 5));
    // 0x17ea88: 0xa9380b
    ctx->pc = 0x17ea88u;
    if (GPR_U32(ctx, 9) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 5));
    // 0x17ea8c: 0x24630001
    ctx->pc = 0x17ea8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x17ea90: 0xac830018
    ctx->pc = 0x17ea90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x17ea94: 0xfc860000
    ctx->pc = 0x17ea94u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x17ea98: 0xfc870008
    ctx->pc = 0x17ea98u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x17ea9c: 0x3e00008
    ctx->pc = 0x17EA9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EAA0u;
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17EB10u: goto label_17eb10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17EAA4u;
    // 0x17eaa4: 0x0
    ctx->pc = 0x17eaa4u;
    // NOP
    // 0x17eaa8: 0x27bdffc0
    ctx->pc = 0x17eaa8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17eaac: 0xffb20020
    ctx->pc = 0x17eaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17eab0: 0xffb10010
    ctx->pc = 0x17eab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17eab4: 0x80902d
    ctx->pc = 0x17eab4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eab8: 0xffb00000
    ctx->pc = 0x17eab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17eabc: 0xa0882d
    ctx->pc = 0x17eabcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eac0: 0xffbf0030
    ctx->pc = 0x17eac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17eac4: 0xc047598
    ctx->pc = 0x17EAC4u;
    SET_GPR_U32(ctx, 31, 0x17EACCu);
    ctx->pc = 0x17EAC8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EACCu; }
    }
    if (ctx->pc != 0x17EACCu) { return; }
    ctx->pc = 0x17EACCu;
    // 0x17eacc: 0xda240000
    ctx->pc = 0x17eaccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17ead0: 0xda250010
    ctx->pc = 0x17ead0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17ead4: 0xda260020
    ctx->pc = 0x17ead4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x17ead8: 0xda270030
    ctx->pc = 0x17ead8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x17eadc: 0xda080000
    ctx->pc = 0x17eadcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17eae0: 0x4be821bc
    ctx->pc = 0x17eae0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x17eae4: 0x4be828bd
    ctx->pc = 0x17eae4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x17eae8: 0x4be830be
    ctx->pc = 0x17eae8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x17eaec: 0x4be83a4b
    ctx->pc = 0x17eaecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x17eaf0: 0xfa490000
    ctx->pc = 0x17eaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x17eaf4: 0x10400006
    ctx->pc = 0x17EAF4u;
    {
        const bool branch_taken_0x17eaf4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17EAF8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17eaf4) {
            ctx->pc = 0x17EB10u;
            goto label_17eb10;
        }
    }
    ctx->pc = 0x17EAFCu;
    // 0x17eafc: 0xdfb20020
    ctx->pc = 0x17eafcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17eb00: 0xdfb10010
    ctx->pc = 0x17eb00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17eb04: 0xdfb00000
    ctx->pc = 0x17eb04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17eb08: 0x80475ae
    ctx->pc = 0x17EB08u;
    ctx->pc = 0x17EB0Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x11D6B8u;
    sub_0011D6B8_0x11d6b8(rdram, ctx, runtime); return;
    ctx->pc = 0x17EB10u;
label_17eb10:
    // 0x17eb10: 0xdfb20020
    ctx->pc = 0x17eb10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17eb14: 0xdfb10010
    ctx->pc = 0x17eb14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17eb18: 0xdfb00000
    ctx->pc = 0x17eb18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17eb1c: 0x3e00008
    ctx->pc = 0x17EB1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EB20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17EB10u: goto label_17eb10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17EB24u;
    // 0x17eb24: 0x0
    ctx->pc = 0x17eb24u;
    // NOP
}
