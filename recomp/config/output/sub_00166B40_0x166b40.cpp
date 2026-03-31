#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00166B40
// Address: 0x166b40 - 0x166c68
void sub_00166B40_0x166b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x166b40u;

    // 0x166b40: 0x710c0
    ctx->pc = 0x166b40u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 3));
    // 0x166b44: 0x27bdffe0
    ctx->pc = 0x166b44u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x166b48: 0x471023
    ctx->pc = 0x166b48u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x166b4c: 0x71880
    ctx->pc = 0x166b4cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 2));
    // 0x166b50: 0xffb00000
    ctx->pc = 0x166b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x166b54: 0x21080
    ctx->pc = 0x166b54u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x166b58: 0xffb10008
    ctx->pc = 0x166b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x166b5c: 0xa38821
    ctx->pc = 0x166b5cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x166b60: 0xffb20010
    ctx->pc = 0x166b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x166b64: 0xc39021
    ctx->pc = 0x166b64u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x166b68: 0xffbf0018
    ctx->pc = 0x166b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x166b6c: 0x471021
    ctx->pc = 0x166b6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x166b70: 0x21080
    ctx->pc = 0x166b70u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x166b74: 0x24050002
    ctx->pc = 0x166b74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x166b78: 0x8e460000
    ctx->pc = 0x166b78u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x166b7c: 0x828021
    ctx->pc = 0x166b7cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x166b80: 0x200202d
    ctx->pc = 0x166b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166b84: 0x26100010
    ctx->pc = 0x166b84u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
    // 0x166b88: 0xc059b2e
    ctx->pc = 0x166B88u;
    SET_GPR_U32(ctx, 31, 0x166B90u);
    ctx->pc = 0x166B8Cu;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    ctx->pc = 0x166CB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166CB8_0x166cb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166B90u; }
    }
    if (ctx->pc != 0x166B90u) { return; }
    ctx->pc = 0x166B90u;
    // 0x166b90: 0x8e220000
    ctx->pc = 0x166b90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x166b94: 0x8e430000
    ctx->pc = 0x166b94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x166b98: 0xae020000
    ctx->pc = 0x166b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x166b9c: 0xae030004
    ctx->pc = 0x166b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x166ba0: 0xae00002c
    ctx->pc = 0x166ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x166ba4: 0xae000008
    ctx->pc = 0x166ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x166ba8: 0xae00000c
    ctx->pc = 0x166ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x166bac: 0xae000010
    ctx->pc = 0x166bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x166bb0: 0xae000014
    ctx->pc = 0x166bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x166bb4: 0xae000018
    ctx->pc = 0x166bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x166bb8: 0xae00001c
    ctx->pc = 0x166bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x166bbc: 0xae000020
    ctx->pc = 0x166bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x166bc0: 0xae000024
    ctx->pc = 0x166bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x166bc4: 0xae000028
    ctx->pc = 0x166bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x166bc8: 0xdfb10008
    ctx->pc = 0x166bc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x166bcc: 0xdfb00000
    ctx->pc = 0x166bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166bd0: 0xdfb20010
    ctx->pc = 0x166bd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166bd4: 0xdfbf0018
    ctx->pc = 0x166bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x166bd8: 0x3e00008
    ctx->pc = 0x166BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166BDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166C34u: goto label_166c34;
            case 0x166C38u: goto label_166c38;
            case 0x166C5Cu: goto label_166c5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166BE0u;
    // 0x166be0: 0x510c0
    ctx->pc = 0x166be0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x166be4: 0xc0582d
    ctx->pc = 0x166be4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166be8: 0x451023
    ctx->pc = 0x166be8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x166bec: 0x25630007
    ctx->pc = 0x166becu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 11), 7));
    // 0x166bf0: 0x21080
    ctx->pc = 0x166bf0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x166bf4: 0xe0502d
    ctx->pc = 0x166bf4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166bf8: 0x451021
    ctx->pc = 0x166bf8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x166bfc: 0x28660000
    ctx->pc = 0x166bfcu;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 3), 0));
    // 0x166c00: 0x21080
    ctx->pc = 0x166c00u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x166c04: 0x2567000e
    ctx->pc = 0x166c04u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 11), 14));
    // 0x166c08: 0x822021
    ctx->pc = 0x166c08u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x166c0c: 0xe6180b
    ctx->pc = 0x166c0cu;
    if (GPR_U32(ctx, 6) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 7));
    // 0x166c10: 0x24841150
    ctx->pc = 0x166c10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4432));
    // 0x166c14: 0x29490002
    ctx->pc = 0x166c14u;
    SET_GPR_U32(ctx, 9, SLT32(GPR_S32(ctx, 10), 2));
    // 0x166c18: 0x328c3
    ctx->pc = 0x166c18u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 3));
    // 0x166c1c: 0x8c820004
    ctx->pc = 0x166c1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x166c20: 0x15200005
    ctx->pc = 0x166C20u;
    {
        const bool branch_taken_0x166c20 = (GPR_U32(ctx, 9) != GPR_U32(ctx, 0));
        ctx->pc = 0x166C24u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x166c20) {
            ctx->pc = 0x166C38u;
            goto label_166c38;
        }
    }
    ctx->pc = 0x166C28u;
    // 0x166c28: 0x4a001a
    ctx->pc = 0x166c28u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x166c2c: 0x51400001
    ctx->pc = 0x166C2Cu;
    {
        const bool branch_taken_0x166c2c = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        if (branch_taken_0x166c2c) {
            ctx->pc = 0x166C30u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x166C34u;
            goto label_166c34;
        }
    }
    ctx->pc = 0x166C34u;
label_166c34:
    // 0x166c34: 0x1012
    ctx->pc = 0x166c34u;
    SET_GPR_U32(ctx, 2, ctx->lo);
label_166c38:
    // 0x166c38: 0x45001a
    ctx->pc = 0x166c38u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x166c3c: 0xc21021
    ctx->pc = 0x166c3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x166c40: 0xac8b000c
    ctx->pc = 0x166c40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 11));
    // 0x166c44: 0xac8a0010
    ctx->pc = 0x166c44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 10));
    // 0x166c48: 0xac880008
    ctx->pc = 0x166c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x166c4c: 0xac860014
    ctx->pc = 0x166c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x166c50: 0xac820018
    ctx->pc = 0x166c50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x166c54: 0x50a00001
    ctx->pc = 0x166C54u;
    {
        const bool branch_taken_0x166c54 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x166c54) {
            ctx->pc = 0x166C58u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x166C5Cu;
            goto label_166c5c;
        }
    }
    ctx->pc = 0x166C5Cu;
label_166c5c:
    // 0x166c5c: 0x1812
    ctx->pc = 0x166c5cu;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x166c60: 0x3e00008
    ctx->pc = 0x166C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166C64u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166C34u: goto label_166c34;
            case 0x166C38u: goto label_166c38;
            case 0x166C5Cu: goto label_166c5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166C68u;
}
