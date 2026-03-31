#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00107C68
// Address: 0x107c68 - 0x107d28
void sub_00107C68_0x107c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x107c68u;

    // 0x107c68: 0x2cc20008
    ctx->pc = 0x107c68u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 8));
    // 0x107c6c: 0x1440001e
    ctx->pc = 0x107C6Cu;
    {
        const bool branch_taken_0x107c6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x107C70u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x107c6c) {
            ctx->pc = 0x107CE8u;
            goto label_107ce8;
        }
    }
    ctx->pc = 0x107C74u;
    // 0x107c74: 0x3082000f
    ctx->pc = 0x107c74u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 15));
    // 0x107c78: 0x1440001b
    ctx->pc = 0x107C78u;
    {
        const bool branch_taken_0x107c78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x107C7Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x107c78) {
            ctx->pc = 0x107CE8u;
            goto label_107ce8;
        }
    }
    ctx->pc = 0x107C80u;
    // 0x107c80: 0x30a900ff
    ctx->pc = 0x107c80u;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 5), 255));
    // 0x107c84: 0x2cca0020
    ctx->pc = 0x107c84u;
    SET_GPR_U32(ctx, 10, SLTU32(GPR_U32(ctx, 6), 32));
    // 0x107c88: 0x120402d
    ctx->pc = 0x107c88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c8c: 0x81a38
    ctx->pc = 0x107c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << 8);
    // 0x107c90: 0x694025
    ctx->pc = 0x107c90u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x107c94: 0x70081ee9
    ctx->pc = 0x107c94u;
    { __m128i src = GPR_VEC(ctx, 0); uint16_t l = _mm_extract_epi16(src, 0); uint16_t h = _mm_extract_epi16(src, 4); 
   SET_GPR_VEC(ctx, 3, _mm_set_epi16(h,h,h,h, l,l,l,l)); }
    // 0x107c98: 0x1540000e
    ctx->pc = 0x107C98u;
    {
        const bool branch_taken_0x107c98 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x107C9Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x107c98) {
            ctx->pc = 0x107CD4u;
            goto label_107cd4;
        }
    }
    ctx->pc = 0x107CA0u;
    // 0x107ca0: 0x70634389
    ctx->pc = 0x107ca0u;
    SET_GPR_VEC(ctx, 8, _mm_unpacklo_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
label_107ca4:
    // 0x107ca4: 0x7ce80000
    ctx->pc = 0x107ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x107ca8: 0x24c6ffe0
    ctx->pc = 0x107ca8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x107cac: 0x24e70010
    ctx->pc = 0x107cacu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 16));
    // 0x107cb0: 0x2cc20020
    ctx->pc = 0x107cb0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 32));
    // 0x107cb4: 0x7ce80000
    ctx->pc = 0x107cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x107cb8: 0x1040fffa
    ctx->pc = 0x107CB8u;
    {
        const bool branch_taken_0x107cb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x107CBCu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 16));
        if (branch_taken_0x107cb8) {
            ctx->pc = 0x107CA4u;
            goto label_107ca4;
        }
    }
    ctx->pc = 0x107CC0u;
    // 0x107cc0: 0x10000004
    ctx->pc = 0x107CC0u;
    {
        const bool branch_taken_0x107cc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x107CC4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x107cc0) {
            ctx->pc = 0x107CD4u;
            goto label_107cd4;
        }
    }
    ctx->pc = 0x107CC8u;
label_107cc8:
    // 0x107cc8: 0x24c6fff8
    ctx->pc = 0x107cc8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x107ccc: 0x24e70008
    ctx->pc = 0x107cccu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
    // 0x107cd0: 0x2cc20008
    ctx->pc = 0x107cd0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 8));
label_107cd4:
    // 0x107cd4: 0x0
    ctx->pc = 0x107cd4u;
    // NOP
    // 0x107cd8: 0x0
    ctx->pc = 0x107cd8u;
    // NOP
    // 0x107cdc: 0x5040fffa
    ctx->pc = 0x107CDCu;
    {
        const bool branch_taken_0x107cdc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x107cdc) {
            ctx->pc = 0x107CE0u;
            WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
            ctx->pc = 0x107CC8u;
            goto label_107cc8;
        }
    }
    ctx->pc = 0x107CE4u;
    // 0x107ce4: 0xe0182d
    ctx->pc = 0x107ce4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_107ce8:
    // 0x107ce8: 0x3c02ffff
    ctx->pc = 0x107ce8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x107cec: 0x24c6ffff
    ctx->pc = 0x107cecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x107cf0: 0x3442ffff
    ctx->pc = 0x107cf0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x107cf4: 0x10c2000a
    ctx->pc = 0x107CF4u;
    {
        const bool branch_taken_0x107cf4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        if (branch_taken_0x107cf4) {
            ctx->pc = 0x107D20u;
            goto label_107d20;
        }
    }
    ctx->pc = 0x107CFCu;
    // 0x107cfc: 0x3c02ffff
    ctx->pc = 0x107cfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x107d00: 0x3442ffff
    ctx->pc = 0x107d00u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_107d04:
    // 0x107d04: 0xa0650000
    ctx->pc = 0x107d04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x107d08: 0x24c6ffff
    ctx->pc = 0x107d08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x107d0c: 0x24630001
    ctx->pc = 0x107d0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x107d10: 0x0
    ctx->pc = 0x107d10u;
    // NOP
    // 0x107d14: 0x0
    ctx->pc = 0x107d14u;
    // NOP
    // 0x107d18: 0x14c2fffa
    ctx->pc = 0x107D18u;
    {
        const bool branch_taken_0x107d18 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        if (branch_taken_0x107d18) {
            ctx->pc = 0x107D04u;
            goto label_107d04;
        }
    }
    ctx->pc = 0x107D20u;
label_107d20:
    // 0x107d20: 0x3e00008
    ctx->pc = 0x107D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107D24u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107CA4u: goto label_107ca4;
            case 0x107CC8u: goto label_107cc8;
            case 0x107CD4u: goto label_107cd4;
            case 0x107CE8u: goto label_107ce8;
            case 0x107D04u: goto label_107d04;
            case 0x107D20u: goto label_107d20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107D28u;
}
