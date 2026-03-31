#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016DF80
// Address: 0x16df80 - 0x16e038
void sub_0016DF80_0x16df80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16df80u;

    // 0x16df80: 0x8c880018
    ctx->pc = 0x16df80u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x16df84: 0x52880
    ctx->pc = 0x16df84u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x16df88: 0x8c820014
    ctx->pc = 0x16df88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x16df8c: 0x2409003c
    ctx->pc = 0x16df8cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 60));
    // 0x16df90: 0x3c030024
    ctx->pc = 0x16df90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x16df94: 0x651821
    ctx->pc = 0x16df94u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16df98: 0x8c630898
    ctx->pc = 0x16df98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 2200)));
    // 0x16df9c: 0x240d003c
    ctx->pc = 0x16df9cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 60));
    // 0x16dfa0: 0x481021
    ctx->pc = 0x16dfa0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x16dfa4: 0x8c88000c
    ctx->pc = 0x16dfa4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x16dfa8: 0x244b0001
    ctx->pc = 0x16dfa8u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 2), 1));
    // 0x16dfac: 0x2402003c
    ctx->pc = 0x16dfacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x16dfb0: 0x163001a
    ctx->pc = 0x16dfb0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 11);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x16dfb4: 0x8c850010
    ctx->pc = 0x16dfb4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x16dfb8: 0x8c8e0008
    ctx->pc = 0x16dfb8u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16dfbc: 0x240c003c
    ctx->pc = 0x16dfbcu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 60));
    // 0x16dfc0: 0x50600001
    ctx->pc = 0x16DFC0u;
    {
        const bool branch_taken_0x16dfc0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x16dfc0) {
            ctx->pc = 0x16DFC4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x16DFC8u;
            goto label_16dfc8;
        }
    }
    ctx->pc = 0x16DFC8u;
label_16dfc8:
    // 0x16dfc8: 0x5012
    ctx->pc = 0x16dfc8u;
    SET_GPR_U32(ctx, 10, ctx->lo);
    // 0x16dfcc: 0x5810
    ctx->pc = 0x16dfccu;
    SET_GPR_U32(ctx, 11, ctx->hi);
    // 0x16dfd0: 0xaa2821
    ctx->pc = 0x16dfd0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x16dfd4: 0xa9001a
    ctx->pc = 0x16dfd4u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x16dfd8: 0x2812
    ctx->pc = 0x16dfd8u;
    SET_GPR_U32(ctx, 5, ctx->lo);
    // 0x16dfdc: 0x5010
    ctx->pc = 0x16dfdcu;
    SET_GPR_U32(ctx, 10, ctx->hi);
    // 0x16dfe0: 0x1054021
    ctx->pc = 0x16dfe0u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x16dfe4: 0x109001a
    ctx->pc = 0x16dfe4u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x16dfe8: 0x4012
    ctx->pc = 0x16dfe8u;
    SET_GPR_U32(ctx, 8, ctx->lo);
    // 0x16dfec: 0x2010
    ctx->pc = 0x16dfecu;
    SET_GPR_U32(ctx, 4, ctx->hi);
    // 0x16dff0: 0x10c0000c
    ctx->pc = 0x16DFF0u;
    {
        const bool branch_taken_0x16dff0 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x16DFF4u;
        SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        if (branch_taken_0x16dff0) {
            ctx->pc = 0x16E024u;
            goto label_16e024;
        }
    }
    ctx->pc = 0x16DFF8u;
    // 0x16dff8: 0x5540000b
    ctx->pc = 0x16DFF8u;
    {
        const bool branch_taken_0x16dff8 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        if (branch_taken_0x16dff8) {
            ctx->pc = 0x16DFFCu;
            WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 11));
            ctx->pc = 0x16E028u;
            goto label_16e028;
        }
    }
    ctx->pc = 0x16E000u;
    // 0x16e000: 0x2402000a
    ctx->pc = 0x16e000u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x16e004: 0x82001a
    ctx->pc = 0x16e004u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x16e008: 0x50400001
    ctx->pc = 0x16E008u;
    {
        const bool branch_taken_0x16e008 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16e008) {
            ctx->pc = 0x16E00Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x16E010u;
            goto label_16e010;
        }
    }
    ctx->pc = 0x16E010u;
label_16e010:
    // 0x16e010: 0x1810
    ctx->pc = 0x16e010u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x16e014: 0x10600003
    ctx->pc = 0x16E014u;
    {
        const bool branch_taken_0x16e014 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16E018u;
        SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 11), 2));
        if (branch_taken_0x16e014) {
            ctx->pc = 0x16E024u;
            goto label_16e024;
        }
    }
    ctx->pc = 0x16E01Cu;
    // 0x16e01c: 0x24020002
    ctx->pc = 0x16e01cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16e020: 0x43580b
    ctx->pc = 0x16e020u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 11, GPR_U32(ctx, 2));
label_16e024:
    // 0x16e024: 0xaceb0014
    ctx->pc = 0x16e024u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 11));
label_16e028:
    // 0x16e028: 0xacee0008
    ctx->pc = 0x16e028u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 14));
    // 0x16e02c: 0xace4000c
    ctx->pc = 0x16e02cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 4));
    // 0x16e030: 0x3e00008
    ctx->pc = 0x16E030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E034u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 10));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16DFC8u: goto label_16dfc8;
            case 0x16E010u: goto label_16e010;
            case 0x16E024u: goto label_16e024;
            case 0x16E028u: goto label_16e028;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16E038u;
}
