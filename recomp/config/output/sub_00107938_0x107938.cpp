#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00107938
// Address: 0x107938 - 0x107a18
void sub_00107938_0x107938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x107938u;

    // 0x107938: 0x2cc20010
    ctx->pc = 0x107938u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 16));
    // 0x10793c: 0x14400026
    ctx->pc = 0x10793Cu;
    {
        const bool branch_taken_0x10793c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x107940u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 255));
        if (branch_taken_0x10793c) {
            ctx->pc = 0x1079D8u;
            goto label_1079d8;
        }
    }
    ctx->pc = 0x107944u;
    // 0x107944: 0x3082000f
    ctx->pc = 0x107944u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 15));
    // 0x107948: 0x14400023
    ctx->pc = 0x107948u;
    {
        const bool branch_taken_0x107948 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10794Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x107948) {
            ctx->pc = 0x1079D8u;
            goto label_1079d8;
        }
    }
    ctx->pc = 0x107950u;
    // 0x107950: 0x51a38
    ctx->pc = 0x107950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 8);
    // 0x107954: 0x3c020101
    ctx->pc = 0x107954u;
    SET_GPR_U32(ctx, 2, ((uint32_t)257 << 16));
    // 0x107958: 0x34420101
    ctx->pc = 0x107958u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 257));
    // 0x10795c: 0x21438
    ctx->pc = 0x10795cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x107960: 0x34420101
    ctx->pc = 0x107960u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 257));
    // 0x107964: 0x21438
    ctx->pc = 0x107964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x107968: 0x34420101
    ctx->pc = 0x107968u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 257));
    // 0x10796c: 0x65502d
    ctx->pc = 0x10796cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x107970: 0x3c038080
    ctx->pc = 0x107970u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32896 << 16));
    // 0x107974: 0x34638080
    ctx->pc = 0x107974u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 32896));
    // 0x107978: 0x31c38
    ctx->pc = 0x107978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x10797c: 0x34638080
    ctx->pc = 0x10797cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 32896));
    // 0x107980: 0x31c38
    ctx->pc = 0x107980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x107984: 0x34638080
    ctx->pc = 0x107984u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 32896));
    // 0x107988: 0x700a46e9
    ctx->pc = 0x107988u;
    { __m128i src = GPR_VEC(ctx, 0); uint16_t l = _mm_extract_epi16(src, 0); uint16_t h = _mm_extract_epi16(src, 4); 
   SET_GPR_VEC(ctx, 8, _mm_set_epi16(h,h,h,h, l,l,l,l)); }
    // 0x10798c: 0x71084b89
    ctx->pc = 0x10798cu;
    SET_GPR_VEC(ctx, 9, _mm_unpacklo_epi64(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x107990: 0x40202d
    ctx->pc = 0x107990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107994: 0x70634389
    ctx->pc = 0x107994u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
label_107998:
    // 0x107998: 0x78e20000
    ctx->pc = 0x107998u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10799c: 0x704914c9
    ctx->pc = 0x10799cu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x1079a0: 0x70845389
    ctx->pc = 0x1079a0u;
    SET_GPR_VEC(ctx, 10, _mm_unpacklo_epi64(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x1079a4: 0x70021ce9
    ctx->pc = 0x1079a4u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1079a8: 0x704a1248
    ctx->pc = 0x1079a8u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x1079ac: 0x70431489
    ctx->pc = 0x1079acu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1079b0: 0x70481489
    ctx->pc = 0x1079b0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x1079b4: 0x70491ba9
    ctx->pc = 0x1079b4u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x1079b8: 0x431025
    ctx->pc = 0x1079b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1079bc: 0x54400006
    ctx->pc = 0x1079BCu;
    {
        const bool branch_taken_0x1079bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1079bc) {
            ctx->pc = 0x1079C0u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x1079D8u;
            goto label_1079d8;
        }
    }
    ctx->pc = 0x1079C4u;
    // 0x1079c4: 0x24c6fff0
    ctx->pc = 0x1079c4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x1079c8: 0x2cc20010
    ctx->pc = 0x1079c8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 16));
    // 0x1079cc: 0x1040fff2
    ctx->pc = 0x1079CCu;
    {
        const bool branch_taken_0x1079cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1079D0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 16));
        if (branch_taken_0x1079cc) {
            ctx->pc = 0x107998u;
            goto label_107998;
        }
    }
    ctx->pc = 0x1079D4u;
    // 0x1079d4: 0xe0202d
    ctx->pc = 0x1079d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1079d8:
    // 0x1079d8: 0x3c02ffff
    ctx->pc = 0x1079d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x1079dc: 0x24c6ffff
    ctx->pc = 0x1079dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1079e0: 0x3442ffff
    ctx->pc = 0x1079e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1079e4: 0x10c20008
    ctx->pc = 0x1079E4u;
    {
        const bool branch_taken_0x1079e4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        if (branch_taken_0x1079e4) {
            ctx->pc = 0x107A08u;
            goto label_107a08;
        }
    }
    ctx->pc = 0x1079ECu;
    // 0x1079ec: 0x3c03ffff
    ctx->pc = 0x1079ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x1079f0: 0x3463ffff
    ctx->pc = 0x1079f0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
label_1079f4:
    // 0x1079f4: 0x90820000
    ctx->pc = 0x1079f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1079f8: 0x10450005
    ctx->pc = 0x1079F8u;
    {
        const bool branch_taken_0x1079f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x1079FCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
        if (branch_taken_0x1079f8) {
            ctx->pc = 0x107A10u;
            goto label_107a10;
        }
    }
    ctx->pc = 0x107A00u;
    // 0x107a00: 0x14c3fffc
    ctx->pc = 0x107A00u;
    {
        const bool branch_taken_0x107a00 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 3));
        ctx->pc = 0x107A04u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x107a00) {
            ctx->pc = 0x1079F4u;
            goto label_1079f4;
        }
    }
    ctx->pc = 0x107A08u;
label_107a08:
    // 0x107a08: 0x3e00008
    ctx->pc = 0x107A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107A0Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107998u: goto label_107998;
            case 0x1079D8u: goto label_1079d8;
            case 0x1079F4u: goto label_1079f4;
            case 0x107A08u: goto label_107a08;
            case 0x107A10u: goto label_107a10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107A10u;
label_107a10:
    // 0x107a10: 0x3e00008
    ctx->pc = 0x107A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107A14u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107998u: goto label_107998;
            case 0x1079D8u: goto label_1079d8;
            case 0x1079F4u: goto label_1079f4;
            case 0x107A08u: goto label_107a08;
            case 0x107A10u: goto label_107a10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107A18u;
}
