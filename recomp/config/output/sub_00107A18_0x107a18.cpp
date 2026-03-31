#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00107A18
// Address: 0x107a18 - 0x107ab0
void sub_00107A18_0x107a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x107a18u;

    // 0x107a18: 0x2cc20010
    ctx->pc = 0x107a18u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 16));
    // 0x107a1c: 0x14400011
    ctx->pc = 0x107A1Cu;
    {
        const bool branch_taken_0x107a1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x107A20u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        if (branch_taken_0x107a1c) {
            ctx->pc = 0x107A64u;
            goto label_107a64;
        }
    }
    ctx->pc = 0x107A24u;
    // 0x107a24: 0x3042000f
    ctx->pc = 0x107a24u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x107a28: 0x1440000e
    ctx->pc = 0x107A28u;
    {
        const bool branch_taken_0x107a28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x107a28) {
            ctx->pc = 0x107A64u;
            goto label_107a64;
        }
    }
    ctx->pc = 0x107A30u;
label_107a30:
    // 0x107a30: 0x78830000
    ctx->pc = 0x107a30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107a34: 0x2cc70020
    ctx->pc = 0x107a34u;
    SET_GPR_U32(ctx, 7, SLTU32(GPR_U32(ctx, 6), 32));
    // 0x107a38: 0x78a20000
    ctx->pc = 0x107a38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107a3c: 0x24840010
    ctx->pc = 0x107a3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
    // 0x107a40: 0x704344c9
    ctx->pc = 0x107a40u;
    SET_GPR_VEC(ctx, 8, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x107a44: 0x24a20010
    ctx->pc = 0x107a44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
    // 0x107a48: 0x710753a9
    ctx->pc = 0x107a48u;
    SET_GPR_VEC(ctx, 10, _mm_unpackhi_epi64(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x107a4c: 0x1484825
    ctx->pc = 0x107a4cu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x107a50: 0x49280a
    ctx->pc = 0x107a50u;
    if (GPR_U32(ctx, 9) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
    // 0x107a54: 0x55200003
    ctx->pc = 0x107A54u;
    {
        const bool branch_taken_0x107a54 = (GPR_U32(ctx, 9) != GPR_U32(ctx, 0));
        if (branch_taken_0x107a54) {
            ctx->pc = 0x107A58u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967280));
            ctx->pc = 0x107A64u;
            goto label_107a64;
        }
    }
    ctx->pc = 0x107A5Cu;
    // 0x107a5c: 0x10e0fff4
    ctx->pc = 0x107A5Cu;
    {
        const bool branch_taken_0x107a5c = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x107A60u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967280));
        if (branch_taken_0x107a5c) {
            ctx->pc = 0x107A30u;
            goto label_107a30;
        }
    }
    ctx->pc = 0x107A64u;
label_107a64:
    // 0x107a64: 0x3c02ffff
    ctx->pc = 0x107a64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x107a68: 0x24c6ffff
    ctx->pc = 0x107a68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x107a6c: 0x3442ffff
    ctx->pc = 0x107a6cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x107a70: 0x10c2000c
    ctx->pc = 0x107A70u;
    {
        const bool branch_taken_0x107a70 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        if (branch_taken_0x107a70) {
            ctx->pc = 0x107AA4u;
            goto label_107aa4;
        }
    }
    ctx->pc = 0x107A78u;
    // 0x107a78: 0x3c07ffff
    ctx->pc = 0x107a78u;
    SET_GPR_U32(ctx, 7, ((uint32_t)65535 << 16));
    // 0x107a7c: 0x34e7ffff
    ctx->pc = 0x107a7cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_107a80:
    // 0x107a80: 0x90830000
    ctx->pc = 0x107a80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107a84: 0x90a20000
    ctx->pc = 0x107a84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107a88: 0x10620003
    ctx->pc = 0x107A88u;
    {
        const bool branch_taken_0x107a88 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x107A8Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x107a88) {
            ctx->pc = 0x107A98u;
            goto label_107a98;
        }
    }
    ctx->pc = 0x107A90u;
    // 0x107a90: 0x3e00008
    ctx->pc = 0x107A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107A94u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107A30u: goto label_107a30;
            case 0x107A64u: goto label_107a64;
            case 0x107A80u: goto label_107a80;
            case 0x107A98u: goto label_107a98;
            case 0x107AA4u: goto label_107aa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107A98u;
label_107a98:
    // 0x107a98: 0x24c6ffff
    ctx->pc = 0x107a98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x107a9c: 0x14c7fff8
    ctx->pc = 0x107A9Cu;
    {
        const bool branch_taken_0x107a9c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 7));
        ctx->pc = 0x107AA0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x107a9c) {
            ctx->pc = 0x107A80u;
            goto label_107a80;
        }
    }
    ctx->pc = 0x107AA4u;
label_107aa4:
    // 0x107aa4: 0x3e00008
    ctx->pc = 0x107AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107AA8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107A30u: goto label_107a30;
            case 0x107A64u: goto label_107a64;
            case 0x107A80u: goto label_107a80;
            case 0x107A98u: goto label_107a98;
            case 0x107AA4u: goto label_107aa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107AACu;
    // 0x107aac: 0x0
    ctx->pc = 0x107aacu;
    // NOP
}
