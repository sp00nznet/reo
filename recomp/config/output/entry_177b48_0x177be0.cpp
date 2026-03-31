#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_177b48
// Address: 0x177b48 - 0x177be0
void entry_177b48_0x177be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x177b48u;

label_177b48:
    // 0x177b48: 0x27bdffd0
    ctx->pc = 0x177b48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_177b4c:
    // 0x177b4c: 0xffb20010
    ctx->pc = 0x177b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_177b50:
    // 0x177b50: 0x80902d
    ctx->pc = 0x177b50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_177b54:
    // 0x177b54: 0xffbf0020
    ctx->pc = 0x177b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_177b58:
    // 0x177b58: 0x202d
    ctx->pc = 0x177b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177b5c:
    // 0x177b5c: 0xffb00000
    ctx->pc = 0x177b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_177b60:
    // 0x177b60: 0x26501aa0
    ctx->pc = 0x177b60u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 6816));
label_177b64:
    // 0x177b64: 0xffb10008
    ctx->pc = 0x177b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_177b68:
    // 0x177b68: 0x882d
    ctx->pc = 0x177b68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177b6c:
    // 0x177b6c: 0xffb30018
    ctx->pc = 0x177b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_177b70:
    // 0x177b70: 0x59880
    ctx->pc = 0x177b70u;
    SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 5), 2));
label_177b74:
    // 0x177b74: 0x0
    ctx->pc = 0x177b74u;
    // NOP
label_177b78:
    // 0x177b78: 0x2a220009
    ctx->pc = 0x177b78u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 9));
label_177b7c:
    // 0x177b7c: 0x10400010
label_177b80:
    if (ctx->pc == 0x177B80u) {
        ctx->pc = 0x177B80u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x177B84u;
        goto label_177b84;
    }
    ctx->pc = 0x177B7Cu;
    {
        const bool branch_taken_0x177b7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x177B80u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x177b7c) {
            ctx->pc = 0x177BC0u;
            goto label_177bc0;
        }
    }
    ctx->pc = 0x177B84u;
label_177b84:
    // 0x177b84: 0x8e02000c
    ctx->pc = 0x177b84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_177b88:
    // 0x177b88: 0x26100044
    ctx->pc = 0x177b88u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 68));
label_177b8c:
    // 0x177b8c: 0x0
    ctx->pc = 0x177b8cu;
    // NOP
label_177b90:
    // 0x177b90: 0x0
    ctx->pc = 0x177b90u;
    // NOP
label_177b94:
    // 0x177b94: 0x1040fff8
label_177b98:
    if (ctx->pc == 0x177B98u) {
        ctx->pc = 0x177B98u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->pc = 0x177B9Cu;
        goto label_177b9c;
    }
    ctx->pc = 0x177B94u;
    {
        const bool branch_taken_0x177b94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x177B98u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        if (branch_taken_0x177b94) {
            ctx->pc = 0x177B78u;
            goto label_177b78;
        }
    }
    ctx->pc = 0x177B9Cu;
label_177b9c:
    // 0x177b9c: 0x8c620000
    ctx->pc = 0x177b9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_177ba0:
    // 0x177ba0: 0x240202d
    ctx->pc = 0x177ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_177ba4:
    // 0x177ba4: 0x282d
    ctx->pc = 0x177ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177ba8:
    // 0x177ba8: 0x302d
    ctx->pc = 0x177ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177bac:
    // 0x177bac: 0x40f809
label_177bb0:
    if (ctx->pc == 0x177BB0u) {
        ctx->pc = 0x177BB0u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x177BB4u;
        goto label_177bb4;
    }
    ctx->pc = 0x177BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x177BB4u);
        ctx->pc = 0x177BB0u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177B48u: goto label_177b48;
            case 0x177B4Cu: goto label_177b4c;
            case 0x177B50u: goto label_177b50;
            case 0x177B54u: goto label_177b54;
            case 0x177B58u: goto label_177b58;
            case 0x177B5Cu: goto label_177b5c;
            case 0x177B60u: goto label_177b60;
            case 0x177B64u: goto label_177b64;
            case 0x177B68u: goto label_177b68;
            case 0x177B6Cu: goto label_177b6c;
            case 0x177B70u: goto label_177b70;
            case 0x177B74u: goto label_177b74;
            case 0x177B78u: goto label_177b78;
            case 0x177B7Cu: goto label_177b7c;
            case 0x177B80u: goto label_177b80;
            case 0x177B84u: goto label_177b84;
            case 0x177B88u: goto label_177b88;
            case 0x177B8Cu: goto label_177b8c;
            case 0x177B90u: goto label_177b90;
            case 0x177B94u: goto label_177b94;
            case 0x177B98u: goto label_177b98;
            case 0x177B9Cu: goto label_177b9c;
            case 0x177BA0u: goto label_177ba0;
            case 0x177BA4u: goto label_177ba4;
            case 0x177BA8u: goto label_177ba8;
            case 0x177BACu: goto label_177bac;
            case 0x177BB0u: goto label_177bb0;
            case 0x177BB4u: goto label_177bb4;
            case 0x177BB8u: goto label_177bb8;
            case 0x177BBCu: goto label_177bbc;
            case 0x177BC0u: goto label_177bc0;
            case 0x177BC4u: goto label_177bc4;
            case 0x177BC8u: goto label_177bc8;
            case 0x177BCCu: goto label_177bcc;
            case 0x177BD0u: goto label_177bd0;
            case 0x177BD4u: goto label_177bd4;
            case 0x177BD8u: goto label_177bd8;
            case 0x177BDCu: goto label_177bdc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x177BB4u; }
            if (ctx->pc != 0x177BB4u) { return; }
        }
    }
    ctx->pc = 0x177BB4u;
label_177bb4:
    // 0x177bb4: 0x40202d
    ctx->pc = 0x177bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_177bb8:
    // 0x177bb8: 0x1080fff0
label_177bbc:
    if (ctx->pc == 0x177BBCu) {
        ctx->pc = 0x177BBCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 9));
        ctx->pc = 0x177BC0u;
        goto label_177bc0;
    }
    ctx->pc = 0x177BB8u;
    {
        const bool branch_taken_0x177bb8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x177BBCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 9));
        if (branch_taken_0x177bb8) {
            ctx->pc = 0x177B7Cu;
            goto label_177b7c;
        }
    }
    ctx->pc = 0x177BC0u;
label_177bc0:
    // 0x177bc0: 0xdfb00000
    ctx->pc = 0x177bc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_177bc4:
    // 0x177bc4: 0x80102d
    ctx->pc = 0x177bc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_177bc8:
    // 0x177bc8: 0xdfb10008
    ctx->pc = 0x177bc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_177bcc:
    // 0x177bcc: 0xdfb20010
    ctx->pc = 0x177bccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_177bd0:
    // 0x177bd0: 0xdfb30018
    ctx->pc = 0x177bd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_177bd4:
    // 0x177bd4: 0xdfbf0020
    ctx->pc = 0x177bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_177bd8:
    // 0x177bd8: 0x3e00008
label_177bdc:
    if (ctx->pc == 0x177BDCu) {
        ctx->pc = 0x177BDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x177BE0u;
        goto label_fallthrough_0x177bd8;
    }
    ctx->pc = 0x177BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177BDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177B48u: goto label_177b48;
            case 0x177B4Cu: goto label_177b4c;
            case 0x177B50u: goto label_177b50;
            case 0x177B54u: goto label_177b54;
            case 0x177B58u: goto label_177b58;
            case 0x177B5Cu: goto label_177b5c;
            case 0x177B60u: goto label_177b60;
            case 0x177B64u: goto label_177b64;
            case 0x177B68u: goto label_177b68;
            case 0x177B6Cu: goto label_177b6c;
            case 0x177B70u: goto label_177b70;
            case 0x177B74u: goto label_177b74;
            case 0x177B78u: goto label_177b78;
            case 0x177B7Cu: goto label_177b7c;
            case 0x177B80u: goto label_177b80;
            case 0x177B84u: goto label_177b84;
            case 0x177B88u: goto label_177b88;
            case 0x177B8Cu: goto label_177b8c;
            case 0x177B90u: goto label_177b90;
            case 0x177B94u: goto label_177b94;
            case 0x177B98u: goto label_177b98;
            case 0x177B9Cu: goto label_177b9c;
            case 0x177BA0u: goto label_177ba0;
            case 0x177BA4u: goto label_177ba4;
            case 0x177BA8u: goto label_177ba8;
            case 0x177BACu: goto label_177bac;
            case 0x177BB0u: goto label_177bb0;
            case 0x177BB4u: goto label_177bb4;
            case 0x177BB8u: goto label_177bb8;
            case 0x177BBCu: goto label_177bbc;
            case 0x177BC0u: goto label_177bc0;
            case 0x177BC4u: goto label_177bc4;
            case 0x177BC8u: goto label_177bc8;
            case 0x177BCCu: goto label_177bcc;
            case 0x177BD0u: goto label_177bd0;
            case 0x177BD4u: goto label_177bd4;
            case 0x177BD8u: goto label_177bd8;
            case 0x177BDCu: goto label_177bdc;
            default: break;
        }
        return;
    }
label_fallthrough_0x177bd8:
    ctx->pc = 0x177BE0u;
}
