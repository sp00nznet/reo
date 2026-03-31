#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010EA10
// Address: 0x10ea10 - 0x10eaf0
void sub_0010EA10_0x10ea10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10ea10u;

    // 0x10ea10: 0xa0860000
    ctx->pc = 0x10ea10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x10ea14: 0x24860001
    ctx->pc = 0x10ea14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 1));
    // 0x10ea18: 0x4a10005
    ctx->pc = 0x10EA18u;
    {
        const bool branch_taken_0x10ea18 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x10EA1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966976));
        if (branch_taken_0x10ea18) {
            ctx->pc = 0x10EA30u;
            goto label_10ea30;
        }
    }
    ctx->pc = 0x10EA20u;
    // 0x10ea20: 0x2402002d
    ctx->pc = 0x10ea20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 45));
    // 0x10ea24: 0x10000003
    ctx->pc = 0x10EA24u;
    {
        const bool branch_taken_0x10ea24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10EA28u;
        SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        if (branch_taken_0x10ea24) {
            ctx->pc = 0x10EA34u;
            goto label_10ea34;
        }
    }
    ctx->pc = 0x10EA2Cu;
    // 0x10ea2c: 0x0
    ctx->pc = 0x10ea2cu;
    // NOP
label_10ea30:
    // 0x10ea30: 0x2402002b
    ctx->pc = 0x10ea30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
label_10ea34:
    // 0x10ea34: 0xa0c20000
    ctx->pc = 0x10ea34u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x10ea38: 0x24860002
    ctx->pc = 0x10ea38u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 2));
    // 0x10ea3c: 0x27a70134
    ctx->pc = 0x10ea3cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 308));
    // 0x10ea40: 0x28a2000a
    ctx->pc = 0x10ea40u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 10));
    // 0x10ea44: 0x14400020
    ctx->pc = 0x10EA44u;
    {
        const bool branch_taken_0x10ea44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10EA48u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10ea44) {
            ctx->pc = 0x10EAC8u;
            goto label_10eac8;
        }
    }
    ctx->pc = 0x10EA4Cu;
    // 0x10ea4c: 0x2408000a
    ctx->pc = 0x10ea4cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
    // 0x10ea50: 0xa8001a
    ctx->pc = 0x10ea50u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x10ea54: 0x0
    ctx->pc = 0x10ea54u;
    // NOP
label_10ea58:
    // 0x10ea58: 0x24e7ffff
    ctx->pc = 0x10ea58u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x10ea5c: 0x51000001
    ctx->pc = 0x10EA5Cu;
    {
        const bool branch_taken_0x10ea5c = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        if (branch_taken_0x10ea5c) {
            ctx->pc = 0x10EA60u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x10EA64u;
            goto label_10ea64;
        }
    }
    ctx->pc = 0x10EA64u;
label_10ea64:
    // 0x10ea64: 0x1812
    ctx->pc = 0x10ea64u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x10ea68: 0x1010
    ctx->pc = 0x10ea68u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x10ea6c: 0x60282d
    ctx->pc = 0x10ea6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea70: 0x24420030
    ctx->pc = 0x10ea70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 48));
    // 0x10ea74: 0x28a3000a
    ctx->pc = 0x10ea74u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 10));
    // 0x10ea78: 0xa0e20000
    ctx->pc = 0x10ea78u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x10ea7c: 0x5060fff6
    ctx->pc = 0x10EA7Cu;
    {
        const bool branch_taken_0x10ea7c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x10ea7c) {
            ctx->pc = 0x10EA80u;
            { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
            ctx->pc = 0x10EA58u;
            goto label_10ea58;
        }
    }
    ctx->pc = 0x10EA84u;
    // 0x10ea84: 0x24e7ffff
    ctx->pc = 0x10ea84u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x10ea88: 0x24a20030
    ctx->pc = 0x10ea88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 48));
    // 0x10ea8c: 0xe9182b
    ctx->pc = 0x10ea8cu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x10ea90: 0x10600013
    ctx->pc = 0x10EA90u;
    {
        const bool branch_taken_0x10ea90 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x10EA94u;
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x10ea90) {
            ctx->pc = 0x10EAE0u;
            goto label_10eae0;
        }
    }
    ctx->pc = 0x10EA98u;
    // 0x10ea98: 0x120282d
    ctx->pc = 0x10ea98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea9c: 0x0
    ctx->pc = 0x10ea9cu;
    // NOP
label_10eaa0:
    // 0x10eaa0: 0x90e20000
    ctx->pc = 0x10eaa0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10eaa4: 0x24e70001
    ctx->pc = 0x10eaa4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x10eaa8: 0xe5182b
    ctx->pc = 0x10eaa8u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x10eaac: 0xa0c20000
    ctx->pc = 0x10eaacu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x10eab0: 0x0
    ctx->pc = 0x10eab0u;
    // NOP
    // 0x10eab4: 0x1460fffa
    ctx->pc = 0x10EAB4u;
    {
        const bool branch_taken_0x10eab4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x10EAB8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x10eab4) {
            ctx->pc = 0x10EAA0u;
            goto label_10eaa0;
        }
    }
    ctx->pc = 0x10EABCu;
    // 0x10eabc: 0x10000009
    ctx->pc = 0x10EABCu;
    {
        const bool branch_taken_0x10eabc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10EAC0u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        if (branch_taken_0x10eabc) {
            ctx->pc = 0x10EAE4u;
            goto label_10eae4;
        }
    }
    ctx->pc = 0x10EAC4u;
    // 0x10eac4: 0x0
    ctx->pc = 0x10eac4u;
    // NOP
label_10eac8:
    // 0x10eac8: 0x24020030
    ctx->pc = 0x10eac8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x10eacc: 0x24a30030
    ctx->pc = 0x10eaccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 48));
    // 0x10ead0: 0xa0c20000
    ctx->pc = 0x10ead0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x10ead4: 0x24c60001
    ctx->pc = 0x10ead4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x10ead8: 0xa0c30000
    ctx->pc = 0x10ead8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x10eadc: 0x24c60001
    ctx->pc = 0x10eadcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_10eae0:
    // 0x10eae0: 0xc41023
    ctx->pc = 0x10eae0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_10eae4:
    // 0x10eae4: 0x3e00008
    ctx->pc = 0x10EAE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EAE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10EA30u: goto label_10ea30;
            case 0x10EA34u: goto label_10ea34;
            case 0x10EA58u: goto label_10ea58;
            case 0x10EA64u: goto label_10ea64;
            case 0x10EAA0u: goto label_10eaa0;
            case 0x10EAC8u: goto label_10eac8;
            case 0x10EAE0u: goto label_10eae0;
            case 0x10EAE4u: goto label_10eae4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10EAECu;
    // 0x10eaec: 0x0
    ctx->pc = 0x10eaecu;
    // NOP
}
