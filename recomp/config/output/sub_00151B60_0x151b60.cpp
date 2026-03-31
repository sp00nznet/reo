#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00151B60
// Address: 0x151b60 - 0x151cc0
void sub_00151B60_0x151b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x151b60u;

label_151b60:
    // 0x151b60: 0x27bdffa0
    ctx->pc = 0x151b60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_151b64:
    // 0x151b64: 0xffb10028
    ctx->pc = 0x151b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_151b68:
    // 0x151b68: 0x80882d
    ctx->pc = 0x151b68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_151b6c:
    // 0x151b6c: 0xffb30038
    ctx->pc = 0x151b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_151b70:
    // 0x151b70: 0xffb40040
    ctx->pc = 0x151b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_151b74:
    // 0x151b74: 0xc0a02d
    ctx->pc = 0x151b74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_151b78:
    // 0x151b78: 0xffb50048
    ctx->pc = 0x151b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_151b7c:
    // 0x151b7c: 0xa0a82d
    ctx->pc = 0x151b7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_151b80:
    // 0x151b80: 0xffb00020
    ctx->pc = 0x151b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_151b84:
    // 0x151b84: 0x282d
    ctx->pc = 0x151b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_151b88:
    // 0x151b88: 0xffb20030
    ctx->pc = 0x151b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_151b8c:
    // 0x151b8c: 0xffb60050
    ctx->pc = 0x151b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_151b90:
    // 0x151b90: 0xffbf0058
    ctx->pc = 0x151b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_151b94:
    // 0x151b94: 0x8e320604
    ctx->pc = 0x151b94u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 1540)));
label_151b98:
    // 0x151b98: 0x121040
    ctx->pc = 0x151b98u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 1));
label_151b9c:
    // 0x151b9c: 0x521021
    ctx->pc = 0x151b9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_151ba0:
    // 0x151ba0: 0x21080
    ctx->pc = 0x151ba0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_151ba4:
    // 0x151ba4: 0x245300e0
    ctx->pc = 0x151ba4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 224));
label_151ba8:
    // 0x151ba8: 0x2331821
    ctx->pc = 0x151ba8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_151bac:
    // 0x151bac: 0x8c70000c
    ctx->pc = 0x151bacu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_151bb0:
    // 0x151bb0: 0x1200002d
label_151bb4:
    if (ctx->pc == 0x151BB4u) {
        ctx->pc = 0x151BB4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x151BB8u;
        goto label_151bb8;
    }
    ctx->pc = 0x151BB0u;
    {
        const bool branch_taken_0x151bb0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x151BB4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x151bb0) {
            ctx->pc = 0x151C68u;
            goto label_151c68;
        }
    }
    ctx->pc = 0x151BB8u;
label_151bb8:
    // 0x151bb8: 0x8e030000
    ctx->pc = 0x151bb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_151bbc:
    // 0x151bbc: 0x8c620018
    ctx->pc = 0x151bbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_151bc0:
    // 0x151bc0: 0x40f809
label_151bc4:
    if (ctx->pc == 0x151BC4u) {
        ctx->pc = 0x151BC4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x151BC8u;
        goto label_151bc8;
    }
    ctx->pc = 0x151BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x151BC8u);
        ctx->pc = 0x151BC4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151B60u: goto label_151b60;
            case 0x151B64u: goto label_151b64;
            case 0x151B68u: goto label_151b68;
            case 0x151B6Cu: goto label_151b6c;
            case 0x151B70u: goto label_151b70;
            case 0x151B74u: goto label_151b74;
            case 0x151B78u: goto label_151b78;
            case 0x151B7Cu: goto label_151b7c;
            case 0x151B80u: goto label_151b80;
            case 0x151B84u: goto label_151b84;
            case 0x151B88u: goto label_151b88;
            case 0x151B8Cu: goto label_151b8c;
            case 0x151B90u: goto label_151b90;
            case 0x151B94u: goto label_151b94;
            case 0x151B98u: goto label_151b98;
            case 0x151B9Cu: goto label_151b9c;
            case 0x151BA0u: goto label_151ba0;
            case 0x151BA4u: goto label_151ba4;
            case 0x151BA8u: goto label_151ba8;
            case 0x151BACu: goto label_151bac;
            case 0x151BB0u: goto label_151bb0;
            case 0x151BB4u: goto label_151bb4;
            case 0x151BB8u: goto label_151bb8;
            case 0x151BBCu: goto label_151bbc;
            case 0x151BC0u: goto label_151bc0;
            case 0x151BC4u: goto label_151bc4;
            case 0x151BC8u: goto label_151bc8;
            case 0x151BCCu: goto label_151bcc;
            case 0x151BD0u: goto label_151bd0;
            case 0x151BD4u: goto label_151bd4;
            case 0x151BD8u: goto label_151bd8;
            case 0x151BDCu: goto label_151bdc;
            case 0x151BE0u: goto label_151be0;
            case 0x151BE4u: goto label_151be4;
            case 0x151BE8u: goto label_151be8;
            case 0x151BECu: goto label_151bec;
            case 0x151BF0u: goto label_151bf0;
            case 0x151BF4u: goto label_151bf4;
            case 0x151BF8u: goto label_151bf8;
            case 0x151BFCu: goto label_151bfc;
            case 0x151C00u: goto label_151c00;
            case 0x151C04u: goto label_151c04;
            case 0x151C08u: goto label_151c08;
            case 0x151C0Cu: goto label_151c0c;
            case 0x151C10u: goto label_151c10;
            case 0x151C14u: goto label_151c14;
            case 0x151C18u: goto label_151c18;
            case 0x151C1Cu: goto label_151c1c;
            case 0x151C20u: goto label_151c20;
            case 0x151C24u: goto label_151c24;
            case 0x151C28u: goto label_151c28;
            case 0x151C2Cu: goto label_151c2c;
            case 0x151C30u: goto label_151c30;
            case 0x151C34u: goto label_151c34;
            case 0x151C38u: goto label_151c38;
            case 0x151C3Cu: goto label_151c3c;
            case 0x151C40u: goto label_151c40;
            case 0x151C44u: goto label_151c44;
            case 0x151C48u: goto label_151c48;
            case 0x151C4Cu: goto label_151c4c;
            case 0x151C50u: goto label_151c50;
            case 0x151C54u: goto label_151c54;
            case 0x151C58u: goto label_151c58;
            case 0x151C5Cu: goto label_151c5c;
            case 0x151C60u: goto label_151c60;
            case 0x151C64u: goto label_151c64;
            case 0x151C68u: goto label_151c68;
            case 0x151C6Cu: goto label_151c6c;
            case 0x151C70u: goto label_151c70;
            case 0x151C74u: goto label_151c74;
            case 0x151C78u: goto label_151c78;
            case 0x151C7Cu: goto label_151c7c;
            case 0x151C80u: goto label_151c80;
            case 0x151C84u: goto label_151c84;
            case 0x151C88u: goto label_151c88;
            case 0x151C8Cu: goto label_151c8c;
            case 0x151C90u: goto label_151c90;
            case 0x151C94u: goto label_151c94;
            case 0x151C98u: goto label_151c98;
            case 0x151C9Cu: goto label_151c9c;
            case 0x151CA0u: goto label_151ca0;
            case 0x151CA4u: goto label_151ca4;
            case 0x151CA8u: goto label_151ca8;
            case 0x151CACu: goto label_151cac;
            case 0x151CB0u: goto label_151cb0;
            case 0x151CB4u: goto label_151cb4;
            case 0x151CB8u: goto label_151cb8;
            case 0x151CBCu: goto label_151cbc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x151BC8u; }
            if (ctx->pc != 0x151BC8u) { return; }
        }
    }
    ctx->pc = 0x151BC8u;
label_151bc8:
    // 0x151bc8: 0x2a0282d
    ctx->pc = 0x151bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_151bcc:
    // 0x151bcc: 0x8fa40000
    ctx->pc = 0x151bccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_151bd0:
    // 0x151bd0: 0xc041eac
label_151bd4:
    if (ctx->pc == 0x151BD4u) {
        ctx->pc = 0x151BD4u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x151BD8u;
        goto label_151bd8;
    }
    ctx->pc = 0x151BD0u;
    SET_GPR_U32(ctx, 31, 0x151BD8u);
    ctx->pc = 0x151BD4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151BD8u; }
    }
    if (ctx->pc != 0x151BD8u) { return; }
    ctx->pc = 0x151BD8u;
label_151bd8:
    // 0x151bd8: 0x8e030000
    ctx->pc = 0x151bd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_151bdc:
    // 0x151bdc: 0x200202d
    ctx->pc = 0x151bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151be0:
    // 0x151be0: 0x24050001
    ctx->pc = 0x151be0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_151be4:
    // 0x151be4: 0x8c620020
    ctx->pc = 0x151be4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_151be8:
    // 0x151be8: 0x40f809
label_151bec:
    if (ctx->pc == 0x151BECu) {
        ctx->pc = 0x151BECu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x151BF0u;
        goto label_151bf0;
    }
    ctx->pc = 0x151BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x151BF0u);
        ctx->pc = 0x151BECu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151B60u: goto label_151b60;
            case 0x151B64u: goto label_151b64;
            case 0x151B68u: goto label_151b68;
            case 0x151B6Cu: goto label_151b6c;
            case 0x151B70u: goto label_151b70;
            case 0x151B74u: goto label_151b74;
            case 0x151B78u: goto label_151b78;
            case 0x151B7Cu: goto label_151b7c;
            case 0x151B80u: goto label_151b80;
            case 0x151B84u: goto label_151b84;
            case 0x151B88u: goto label_151b88;
            case 0x151B8Cu: goto label_151b8c;
            case 0x151B90u: goto label_151b90;
            case 0x151B94u: goto label_151b94;
            case 0x151B98u: goto label_151b98;
            case 0x151B9Cu: goto label_151b9c;
            case 0x151BA0u: goto label_151ba0;
            case 0x151BA4u: goto label_151ba4;
            case 0x151BA8u: goto label_151ba8;
            case 0x151BACu: goto label_151bac;
            case 0x151BB0u: goto label_151bb0;
            case 0x151BB4u: goto label_151bb4;
            case 0x151BB8u: goto label_151bb8;
            case 0x151BBCu: goto label_151bbc;
            case 0x151BC0u: goto label_151bc0;
            case 0x151BC4u: goto label_151bc4;
            case 0x151BC8u: goto label_151bc8;
            case 0x151BCCu: goto label_151bcc;
            case 0x151BD0u: goto label_151bd0;
            case 0x151BD4u: goto label_151bd4;
            case 0x151BD8u: goto label_151bd8;
            case 0x151BDCu: goto label_151bdc;
            case 0x151BE0u: goto label_151be0;
            case 0x151BE4u: goto label_151be4;
            case 0x151BE8u: goto label_151be8;
            case 0x151BECu: goto label_151bec;
            case 0x151BF0u: goto label_151bf0;
            case 0x151BF4u: goto label_151bf4;
            case 0x151BF8u: goto label_151bf8;
            case 0x151BFCu: goto label_151bfc;
            case 0x151C00u: goto label_151c00;
            case 0x151C04u: goto label_151c04;
            case 0x151C08u: goto label_151c08;
            case 0x151C0Cu: goto label_151c0c;
            case 0x151C10u: goto label_151c10;
            case 0x151C14u: goto label_151c14;
            case 0x151C18u: goto label_151c18;
            case 0x151C1Cu: goto label_151c1c;
            case 0x151C20u: goto label_151c20;
            case 0x151C24u: goto label_151c24;
            case 0x151C28u: goto label_151c28;
            case 0x151C2Cu: goto label_151c2c;
            case 0x151C30u: goto label_151c30;
            case 0x151C34u: goto label_151c34;
            case 0x151C38u: goto label_151c38;
            case 0x151C3Cu: goto label_151c3c;
            case 0x151C40u: goto label_151c40;
            case 0x151C44u: goto label_151c44;
            case 0x151C48u: goto label_151c48;
            case 0x151C4Cu: goto label_151c4c;
            case 0x151C50u: goto label_151c50;
            case 0x151C54u: goto label_151c54;
            case 0x151C58u: goto label_151c58;
            case 0x151C5Cu: goto label_151c5c;
            case 0x151C60u: goto label_151c60;
            case 0x151C64u: goto label_151c64;
            case 0x151C68u: goto label_151c68;
            case 0x151C6Cu: goto label_151c6c;
            case 0x151C70u: goto label_151c70;
            case 0x151C74u: goto label_151c74;
            case 0x151C78u: goto label_151c78;
            case 0x151C7Cu: goto label_151c7c;
            case 0x151C80u: goto label_151c80;
            case 0x151C84u: goto label_151c84;
            case 0x151C88u: goto label_151c88;
            case 0x151C8Cu: goto label_151c8c;
            case 0x151C90u: goto label_151c90;
            case 0x151C94u: goto label_151c94;
            case 0x151C98u: goto label_151c98;
            case 0x151C9Cu: goto label_151c9c;
            case 0x151CA0u: goto label_151ca0;
            case 0x151CA4u: goto label_151ca4;
            case 0x151CA8u: goto label_151ca8;
            case 0x151CACu: goto label_151cac;
            case 0x151CB0u: goto label_151cb0;
            case 0x151CB4u: goto label_151cb4;
            case 0x151CB8u: goto label_151cb8;
            case 0x151CBCu: goto label_151cbc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x151BF0u; }
            if (ctx->pc != 0x151BF0u) { return; }
        }
    }
    ctx->pc = 0x151BF0u;
label_151bf0:
    // 0x151bf0: 0x200202d
    ctx->pc = 0x151bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151bf4:
    // 0x151bf4: 0x8fa20004
    ctx->pc = 0x151bf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_151bf8:
    // 0x151bf8: 0x27b60010
    ctx->pc = 0x151bf8u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 16));
label_151bfc:
    // 0x151bfc: 0x282d
    ctx->pc = 0x151bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_151c00:
    // 0x151c00: 0x2823023
    ctx->pc = 0x151c00u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_151c04:
    // 0x151c04: 0x54102a
    ctx->pc = 0x151c04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 20)));
label_151c08:
    // 0x151c08: 0x10400010
label_151c0c:
    if (ctx->pc == 0x151C0Cu) {
        ctx->pc = 0x151C0Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x151C10u;
        goto label_151c10;
    }
    ctx->pc = 0x151C08u;
    {
        const bool branch_taken_0x151c08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x151C0Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x151c08) {
            ctx->pc = 0x151C4Cu;
            goto label_151c4c;
        }
    }
    ctx->pc = 0x151C10u;
label_151c10:
    // 0x151c10: 0x8e020000
    ctx->pc = 0x151c10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_151c14:
    // 0x151c14: 0x8c430018
    ctx->pc = 0x151c14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_151c18:
    // 0x151c18: 0x60f809
label_151c1c:
    if (ctx->pc == 0x151C1Cu) {
        ctx->pc = 0x151C20u;
        goto label_151c20;
    }
    ctx->pc = 0x151C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x151C20u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151B60u: goto label_151b60;
            case 0x151B64u: goto label_151b64;
            case 0x151B68u: goto label_151b68;
            case 0x151B6Cu: goto label_151b6c;
            case 0x151B70u: goto label_151b70;
            case 0x151B74u: goto label_151b74;
            case 0x151B78u: goto label_151b78;
            case 0x151B7Cu: goto label_151b7c;
            case 0x151B80u: goto label_151b80;
            case 0x151B84u: goto label_151b84;
            case 0x151B88u: goto label_151b88;
            case 0x151B8Cu: goto label_151b8c;
            case 0x151B90u: goto label_151b90;
            case 0x151B94u: goto label_151b94;
            case 0x151B98u: goto label_151b98;
            case 0x151B9Cu: goto label_151b9c;
            case 0x151BA0u: goto label_151ba0;
            case 0x151BA4u: goto label_151ba4;
            case 0x151BA8u: goto label_151ba8;
            case 0x151BACu: goto label_151bac;
            case 0x151BB0u: goto label_151bb0;
            case 0x151BB4u: goto label_151bb4;
            case 0x151BB8u: goto label_151bb8;
            case 0x151BBCu: goto label_151bbc;
            case 0x151BC0u: goto label_151bc0;
            case 0x151BC4u: goto label_151bc4;
            case 0x151BC8u: goto label_151bc8;
            case 0x151BCCu: goto label_151bcc;
            case 0x151BD0u: goto label_151bd0;
            case 0x151BD4u: goto label_151bd4;
            case 0x151BD8u: goto label_151bd8;
            case 0x151BDCu: goto label_151bdc;
            case 0x151BE0u: goto label_151be0;
            case 0x151BE4u: goto label_151be4;
            case 0x151BE8u: goto label_151be8;
            case 0x151BECu: goto label_151bec;
            case 0x151BF0u: goto label_151bf0;
            case 0x151BF4u: goto label_151bf4;
            case 0x151BF8u: goto label_151bf8;
            case 0x151BFCu: goto label_151bfc;
            case 0x151C00u: goto label_151c00;
            case 0x151C04u: goto label_151c04;
            case 0x151C08u: goto label_151c08;
            case 0x151C0Cu: goto label_151c0c;
            case 0x151C10u: goto label_151c10;
            case 0x151C14u: goto label_151c14;
            case 0x151C18u: goto label_151c18;
            case 0x151C1Cu: goto label_151c1c;
            case 0x151C20u: goto label_151c20;
            case 0x151C24u: goto label_151c24;
            case 0x151C28u: goto label_151c28;
            case 0x151C2Cu: goto label_151c2c;
            case 0x151C30u: goto label_151c30;
            case 0x151C34u: goto label_151c34;
            case 0x151C38u: goto label_151c38;
            case 0x151C3Cu: goto label_151c3c;
            case 0x151C40u: goto label_151c40;
            case 0x151C44u: goto label_151c44;
            case 0x151C48u: goto label_151c48;
            case 0x151C4Cu: goto label_151c4c;
            case 0x151C50u: goto label_151c50;
            case 0x151C54u: goto label_151c54;
            case 0x151C58u: goto label_151c58;
            case 0x151C5Cu: goto label_151c5c;
            case 0x151C60u: goto label_151c60;
            case 0x151C64u: goto label_151c64;
            case 0x151C68u: goto label_151c68;
            case 0x151C6Cu: goto label_151c6c;
            case 0x151C70u: goto label_151c70;
            case 0x151C74u: goto label_151c74;
            case 0x151C78u: goto label_151c78;
            case 0x151C7Cu: goto label_151c7c;
            case 0x151C80u: goto label_151c80;
            case 0x151C84u: goto label_151c84;
            case 0x151C88u: goto label_151c88;
            case 0x151C8Cu: goto label_151c8c;
            case 0x151C90u: goto label_151c90;
            case 0x151C94u: goto label_151c94;
            case 0x151C98u: goto label_151c98;
            case 0x151C9Cu: goto label_151c9c;
            case 0x151CA0u: goto label_151ca0;
            case 0x151CA4u: goto label_151ca4;
            case 0x151CA8u: goto label_151ca8;
            case 0x151CACu: goto label_151cac;
            case 0x151CB0u: goto label_151cb0;
            case 0x151CB4u: goto label_151cb4;
            case 0x151CB8u: goto label_151cb8;
            case 0x151CBCu: goto label_151cbc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x151C20u; }
            if (ctx->pc != 0x151C20u) { return; }
        }
    }
    ctx->pc = 0x151C20u;
label_151c20:
    // 0x151c20: 0x8fa50004
    ctx->pc = 0x151c20u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_151c24:
    // 0x151c24: 0x8fa40010
    ctx->pc = 0x151c24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_151c28:
    // 0x151c28: 0x8fa60014
    ctx->pc = 0x151c28u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_151c2c:
    // 0x151c2c: 0xc041eac
label_151c30:
    if (ctx->pc == 0x151C30u) {
        ctx->pc = 0x151C30u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->pc = 0x151C34u;
        goto label_151c34;
    }
    ctx->pc = 0x151C2Cu;
    SET_GPR_U32(ctx, 31, 0x151C34u);
    ctx->pc = 0x151C30u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151C34u; }
    }
    if (ctx->pc != 0x151C34u) { return; }
    ctx->pc = 0x151C34u;
label_151c34:
    // 0x151c34: 0x8e030000
    ctx->pc = 0x151c34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_151c38:
    // 0x151c38: 0x200202d
    ctx->pc = 0x151c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151c3c:
    // 0x151c3c: 0x2c0302d
    ctx->pc = 0x151c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_151c40:
    // 0x151c40: 0x8c620020
    ctx->pc = 0x151c40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_151c44:
    // 0x151c44: 0x40f809
label_151c48:
    if (ctx->pc == 0x151C48u) {
        ctx->pc = 0x151C48u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x151C4Cu;
        goto label_151c4c;
    }
    ctx->pc = 0x151C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x151C4Cu);
        ctx->pc = 0x151C48u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151B60u: goto label_151b60;
            case 0x151B64u: goto label_151b64;
            case 0x151B68u: goto label_151b68;
            case 0x151B6Cu: goto label_151b6c;
            case 0x151B70u: goto label_151b70;
            case 0x151B74u: goto label_151b74;
            case 0x151B78u: goto label_151b78;
            case 0x151B7Cu: goto label_151b7c;
            case 0x151B80u: goto label_151b80;
            case 0x151B84u: goto label_151b84;
            case 0x151B88u: goto label_151b88;
            case 0x151B8Cu: goto label_151b8c;
            case 0x151B90u: goto label_151b90;
            case 0x151B94u: goto label_151b94;
            case 0x151B98u: goto label_151b98;
            case 0x151B9Cu: goto label_151b9c;
            case 0x151BA0u: goto label_151ba0;
            case 0x151BA4u: goto label_151ba4;
            case 0x151BA8u: goto label_151ba8;
            case 0x151BACu: goto label_151bac;
            case 0x151BB0u: goto label_151bb0;
            case 0x151BB4u: goto label_151bb4;
            case 0x151BB8u: goto label_151bb8;
            case 0x151BBCu: goto label_151bbc;
            case 0x151BC0u: goto label_151bc0;
            case 0x151BC4u: goto label_151bc4;
            case 0x151BC8u: goto label_151bc8;
            case 0x151BCCu: goto label_151bcc;
            case 0x151BD0u: goto label_151bd0;
            case 0x151BD4u: goto label_151bd4;
            case 0x151BD8u: goto label_151bd8;
            case 0x151BDCu: goto label_151bdc;
            case 0x151BE0u: goto label_151be0;
            case 0x151BE4u: goto label_151be4;
            case 0x151BE8u: goto label_151be8;
            case 0x151BECu: goto label_151bec;
            case 0x151BF0u: goto label_151bf0;
            case 0x151BF4u: goto label_151bf4;
            case 0x151BF8u: goto label_151bf8;
            case 0x151BFCu: goto label_151bfc;
            case 0x151C00u: goto label_151c00;
            case 0x151C04u: goto label_151c04;
            case 0x151C08u: goto label_151c08;
            case 0x151C0Cu: goto label_151c0c;
            case 0x151C10u: goto label_151c10;
            case 0x151C14u: goto label_151c14;
            case 0x151C18u: goto label_151c18;
            case 0x151C1Cu: goto label_151c1c;
            case 0x151C20u: goto label_151c20;
            case 0x151C24u: goto label_151c24;
            case 0x151C28u: goto label_151c28;
            case 0x151C2Cu: goto label_151c2c;
            case 0x151C30u: goto label_151c30;
            case 0x151C34u: goto label_151c34;
            case 0x151C38u: goto label_151c38;
            case 0x151C3Cu: goto label_151c3c;
            case 0x151C40u: goto label_151c40;
            case 0x151C44u: goto label_151c44;
            case 0x151C48u: goto label_151c48;
            case 0x151C4Cu: goto label_151c4c;
            case 0x151C50u: goto label_151c50;
            case 0x151C54u: goto label_151c54;
            case 0x151C58u: goto label_151c58;
            case 0x151C5Cu: goto label_151c5c;
            case 0x151C60u: goto label_151c60;
            case 0x151C64u: goto label_151c64;
            case 0x151C68u: goto label_151c68;
            case 0x151C6Cu: goto label_151c6c;
            case 0x151C70u: goto label_151c70;
            case 0x151C74u: goto label_151c74;
            case 0x151C78u: goto label_151c78;
            case 0x151C7Cu: goto label_151c7c;
            case 0x151C80u: goto label_151c80;
            case 0x151C84u: goto label_151c84;
            case 0x151C88u: goto label_151c88;
            case 0x151C8Cu: goto label_151c8c;
            case 0x151C90u: goto label_151c90;
            case 0x151C94u: goto label_151c94;
            case 0x151C98u: goto label_151c98;
            case 0x151C9Cu: goto label_151c9c;
            case 0x151CA0u: goto label_151ca0;
            case 0x151CA4u: goto label_151ca4;
            case 0x151CA8u: goto label_151ca8;
            case 0x151CACu: goto label_151cac;
            case 0x151CB0u: goto label_151cb0;
            case 0x151CB4u: goto label_151cb4;
            case 0x151CB8u: goto label_151cb8;
            case 0x151CBCu: goto label_151cbc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x151C4Cu; }
            if (ctx->pc != 0x151C4Cu) { return; }
        }
    }
    ctx->pc = 0x151C4Cu;
label_151c4c:
    // 0x151c4c: 0x2331021
    ctx->pc = 0x151c4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_151c50:
    // 0x151c50: 0x8c430010
    ctx->pc = 0x151c50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_151c54:
    // 0x151c54: 0x50600005
label_151c58:
    if (ctx->pc == 0x151C58u) {
        ctx->pc = 0x151C58u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x151C5Cu;
        goto label_151c5c;
    }
    ctx->pc = 0x151C54u;
    {
        const bool branch_taken_0x151c54 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x151c54) {
            ctx->pc = 0x151C58u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
            ctx->pc = 0x151C6Cu;
            goto label_151c6c;
        }
    }
    ctx->pc = 0x151C5Cu;
label_151c5c:
    // 0x151c5c: 0x8c440014
    ctx->pc = 0x151c5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_151c60:
    // 0x151c60: 0x60f809
label_151c64:
    if (ctx->pc == 0x151C64u) {
        ctx->pc = 0x151C64u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x151C68u;
        goto label_151c68;
    }
    ctx->pc = 0x151C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x151C68u);
        ctx->pc = 0x151C64u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151B60u: goto label_151b60;
            case 0x151B64u: goto label_151b64;
            case 0x151B68u: goto label_151b68;
            case 0x151B6Cu: goto label_151b6c;
            case 0x151B70u: goto label_151b70;
            case 0x151B74u: goto label_151b74;
            case 0x151B78u: goto label_151b78;
            case 0x151B7Cu: goto label_151b7c;
            case 0x151B80u: goto label_151b80;
            case 0x151B84u: goto label_151b84;
            case 0x151B88u: goto label_151b88;
            case 0x151B8Cu: goto label_151b8c;
            case 0x151B90u: goto label_151b90;
            case 0x151B94u: goto label_151b94;
            case 0x151B98u: goto label_151b98;
            case 0x151B9Cu: goto label_151b9c;
            case 0x151BA0u: goto label_151ba0;
            case 0x151BA4u: goto label_151ba4;
            case 0x151BA8u: goto label_151ba8;
            case 0x151BACu: goto label_151bac;
            case 0x151BB0u: goto label_151bb0;
            case 0x151BB4u: goto label_151bb4;
            case 0x151BB8u: goto label_151bb8;
            case 0x151BBCu: goto label_151bbc;
            case 0x151BC0u: goto label_151bc0;
            case 0x151BC4u: goto label_151bc4;
            case 0x151BC8u: goto label_151bc8;
            case 0x151BCCu: goto label_151bcc;
            case 0x151BD0u: goto label_151bd0;
            case 0x151BD4u: goto label_151bd4;
            case 0x151BD8u: goto label_151bd8;
            case 0x151BDCu: goto label_151bdc;
            case 0x151BE0u: goto label_151be0;
            case 0x151BE4u: goto label_151be4;
            case 0x151BE8u: goto label_151be8;
            case 0x151BECu: goto label_151bec;
            case 0x151BF0u: goto label_151bf0;
            case 0x151BF4u: goto label_151bf4;
            case 0x151BF8u: goto label_151bf8;
            case 0x151BFCu: goto label_151bfc;
            case 0x151C00u: goto label_151c00;
            case 0x151C04u: goto label_151c04;
            case 0x151C08u: goto label_151c08;
            case 0x151C0Cu: goto label_151c0c;
            case 0x151C10u: goto label_151c10;
            case 0x151C14u: goto label_151c14;
            case 0x151C18u: goto label_151c18;
            case 0x151C1Cu: goto label_151c1c;
            case 0x151C20u: goto label_151c20;
            case 0x151C24u: goto label_151c24;
            case 0x151C28u: goto label_151c28;
            case 0x151C2Cu: goto label_151c2c;
            case 0x151C30u: goto label_151c30;
            case 0x151C34u: goto label_151c34;
            case 0x151C38u: goto label_151c38;
            case 0x151C3Cu: goto label_151c3c;
            case 0x151C40u: goto label_151c40;
            case 0x151C44u: goto label_151c44;
            case 0x151C48u: goto label_151c48;
            case 0x151C4Cu: goto label_151c4c;
            case 0x151C50u: goto label_151c50;
            case 0x151C54u: goto label_151c54;
            case 0x151C58u: goto label_151c58;
            case 0x151C5Cu: goto label_151c5c;
            case 0x151C60u: goto label_151c60;
            case 0x151C64u: goto label_151c64;
            case 0x151C68u: goto label_151c68;
            case 0x151C6Cu: goto label_151c6c;
            case 0x151C70u: goto label_151c70;
            case 0x151C74u: goto label_151c74;
            case 0x151C78u: goto label_151c78;
            case 0x151C7Cu: goto label_151c7c;
            case 0x151C80u: goto label_151c80;
            case 0x151C84u: goto label_151c84;
            case 0x151C88u: goto label_151c88;
            case 0x151C8Cu: goto label_151c8c;
            case 0x151C90u: goto label_151c90;
            case 0x151C94u: goto label_151c94;
            case 0x151C98u: goto label_151c98;
            case 0x151C9Cu: goto label_151c9c;
            case 0x151CA0u: goto label_151ca0;
            case 0x151CA4u: goto label_151ca4;
            case 0x151CA8u: goto label_151ca8;
            case 0x151CACu: goto label_151cac;
            case 0x151CB0u: goto label_151cb0;
            case 0x151CB4u: goto label_151cb4;
            case 0x151CB8u: goto label_151cb8;
            case 0x151CBCu: goto label_151cbc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x151C68u; }
            if (ctx->pc != 0x151C68u) { return; }
        }
    }
    ctx->pc = 0x151C68u;
label_151c68:
    // 0x151c68: 0x24020003
    ctx->pc = 0x151c68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_151c6c:
    // 0x151c6c: 0x1642000a
label_151c70:
    if (ctx->pc == 0x151C70u) {
        ctx->pc = 0x151C70u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x151C74u;
        goto label_151c74;
    }
    ctx->pc = 0x151C6Cu;
    {
        const bool branch_taken_0x151c6c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x151C70u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x151c6c) {
            ctx->pc = 0x151C98u;
            goto label_151c98;
        }
    }
    ctx->pc = 0x151C74u;
label_151c74:
    // 0x151c74: 0x8e24011c
    ctx->pc = 0x151c74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_151c78:
    // 0x151c78: 0x10800007
label_151c7c:
    if (ctx->pc == 0x151C7Cu) {
        ctx->pc = 0x151C7Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x151C80u;
        goto label_151c80;
    }
    ctx->pc = 0x151C78u;
    {
        const bool branch_taken_0x151c78 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x151C7Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x151c78) {
            ctx->pc = 0x151C98u;
            goto label_151c98;
        }
    }
    ctx->pc = 0x151C80u;
label_151c80:
    // 0x151c80: 0x8e260120
    ctx->pc = 0x151c80u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_151c84:
    // 0x151c84: 0x286102a
    ctx->pc = 0x151c84u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 6)));
label_151c88:
    // 0x151c88: 0x282300b
    ctx->pc = 0x151c88u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 20));
label_151c8c:
    // 0x151c8c: 0xc041eac
label_151c90:
    if (ctx->pc == 0x151C90u) {
        ctx->pc = 0x151C90u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 6));
        ctx->pc = 0x151C94u;
        goto label_151c94;
    }
    ctx->pc = 0x151C8Cu;
    SET_GPR_U32(ctx, 31, 0x151C94u);
    ctx->pc = 0x151C90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 6));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151C94u; }
    }
    if (ctx->pc != 0x151C94u) { return; }
    ctx->pc = 0x151C94u;
label_151c94:
    // 0x151c94: 0xdfb00020
    ctx->pc = 0x151c94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_151c98:
    // 0x151c98: 0xdfb10028
    ctx->pc = 0x151c98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_151c9c:
    // 0x151c9c: 0xdfb20030
    ctx->pc = 0x151c9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_151ca0:
    // 0x151ca0: 0xdfb30038
    ctx->pc = 0x151ca0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_151ca4:
    // 0x151ca4: 0xdfb40040
    ctx->pc = 0x151ca4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_151ca8:
    // 0x151ca8: 0xdfb50048
    ctx->pc = 0x151ca8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_151cac:
    // 0x151cac: 0xdfb60050
    ctx->pc = 0x151cacu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_151cb0:
    // 0x151cb0: 0xdfbf0058
    ctx->pc = 0x151cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_151cb4:
    // 0x151cb4: 0x3e00008
label_151cb8:
    if (ctx->pc == 0x151CB8u) {
        ctx->pc = 0x151CB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x151CBCu;
        goto label_151cbc;
    }
    ctx->pc = 0x151CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151CB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151B60u: goto label_151b60;
            case 0x151B64u: goto label_151b64;
            case 0x151B68u: goto label_151b68;
            case 0x151B6Cu: goto label_151b6c;
            case 0x151B70u: goto label_151b70;
            case 0x151B74u: goto label_151b74;
            case 0x151B78u: goto label_151b78;
            case 0x151B7Cu: goto label_151b7c;
            case 0x151B80u: goto label_151b80;
            case 0x151B84u: goto label_151b84;
            case 0x151B88u: goto label_151b88;
            case 0x151B8Cu: goto label_151b8c;
            case 0x151B90u: goto label_151b90;
            case 0x151B94u: goto label_151b94;
            case 0x151B98u: goto label_151b98;
            case 0x151B9Cu: goto label_151b9c;
            case 0x151BA0u: goto label_151ba0;
            case 0x151BA4u: goto label_151ba4;
            case 0x151BA8u: goto label_151ba8;
            case 0x151BACu: goto label_151bac;
            case 0x151BB0u: goto label_151bb0;
            case 0x151BB4u: goto label_151bb4;
            case 0x151BB8u: goto label_151bb8;
            case 0x151BBCu: goto label_151bbc;
            case 0x151BC0u: goto label_151bc0;
            case 0x151BC4u: goto label_151bc4;
            case 0x151BC8u: goto label_151bc8;
            case 0x151BCCu: goto label_151bcc;
            case 0x151BD0u: goto label_151bd0;
            case 0x151BD4u: goto label_151bd4;
            case 0x151BD8u: goto label_151bd8;
            case 0x151BDCu: goto label_151bdc;
            case 0x151BE0u: goto label_151be0;
            case 0x151BE4u: goto label_151be4;
            case 0x151BE8u: goto label_151be8;
            case 0x151BECu: goto label_151bec;
            case 0x151BF0u: goto label_151bf0;
            case 0x151BF4u: goto label_151bf4;
            case 0x151BF8u: goto label_151bf8;
            case 0x151BFCu: goto label_151bfc;
            case 0x151C00u: goto label_151c00;
            case 0x151C04u: goto label_151c04;
            case 0x151C08u: goto label_151c08;
            case 0x151C0Cu: goto label_151c0c;
            case 0x151C10u: goto label_151c10;
            case 0x151C14u: goto label_151c14;
            case 0x151C18u: goto label_151c18;
            case 0x151C1Cu: goto label_151c1c;
            case 0x151C20u: goto label_151c20;
            case 0x151C24u: goto label_151c24;
            case 0x151C28u: goto label_151c28;
            case 0x151C2Cu: goto label_151c2c;
            case 0x151C30u: goto label_151c30;
            case 0x151C34u: goto label_151c34;
            case 0x151C38u: goto label_151c38;
            case 0x151C3Cu: goto label_151c3c;
            case 0x151C40u: goto label_151c40;
            case 0x151C44u: goto label_151c44;
            case 0x151C48u: goto label_151c48;
            case 0x151C4Cu: goto label_151c4c;
            case 0x151C50u: goto label_151c50;
            case 0x151C54u: goto label_151c54;
            case 0x151C58u: goto label_151c58;
            case 0x151C5Cu: goto label_151c5c;
            case 0x151C60u: goto label_151c60;
            case 0x151C64u: goto label_151c64;
            case 0x151C68u: goto label_151c68;
            case 0x151C6Cu: goto label_151c6c;
            case 0x151C70u: goto label_151c70;
            case 0x151C74u: goto label_151c74;
            case 0x151C78u: goto label_151c78;
            case 0x151C7Cu: goto label_151c7c;
            case 0x151C80u: goto label_151c80;
            case 0x151C84u: goto label_151c84;
            case 0x151C88u: goto label_151c88;
            case 0x151C8Cu: goto label_151c8c;
            case 0x151C90u: goto label_151c90;
            case 0x151C94u: goto label_151c94;
            case 0x151C98u: goto label_151c98;
            case 0x151C9Cu: goto label_151c9c;
            case 0x151CA0u: goto label_151ca0;
            case 0x151CA4u: goto label_151ca4;
            case 0x151CA8u: goto label_151ca8;
            case 0x151CACu: goto label_151cac;
            case 0x151CB0u: goto label_151cb0;
            case 0x151CB4u: goto label_151cb4;
            case 0x151CB8u: goto label_151cb8;
            case 0x151CBCu: goto label_151cbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x151CBCu;
label_151cbc:
    // 0x151cbc: 0x0
    ctx->pc = 0x151cbcu;
    // NOP
}
