#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00131B60
// Address: 0x131b60 - 0x131c50
void sub_00131B60_0x131b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x131b60u;

label_131b60:
    // 0x131b60: 0x27bdffd0
    ctx->pc = 0x131b60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_131b64:
    // 0x131b64: 0xffb00000
    ctx->pc = 0x131b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_131b68:
    // 0x131b68: 0x80802d
    ctx->pc = 0x131b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_131b6c:
    // 0x131b6c: 0xffb20010
    ctx->pc = 0x131b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_131b70:
    // 0x131b70: 0x902d
    ctx->pc = 0x131b70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_131b74:
    // 0x131b74: 0xffb30018
    ctx->pc = 0x131b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_131b78:
    // 0x131b78: 0xffb10008
    ctx->pc = 0x131b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_131b7c:
    // 0x131b7c: 0xffbf0020
    ctx->pc = 0x131b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_131b80:
    // 0x131b80: 0x82020003
    ctx->pc = 0x131b80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_131b84:
    // 0x131b84: 0x1840000d
label_131b88:
    if (ctx->pc == 0x131B88u) {
        ctx->pc = 0x131B88u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x131B8Cu;
        goto label_131b8c;
    }
    ctx->pc = 0x131B84u;
    {
        const bool branch_taken_0x131b84 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x131B88u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x131b84) {
            ctx->pc = 0x131BBCu;
            goto label_131bbc;
        }
    }
    ctx->pc = 0x131B8Cu;
label_131b8c:
    // 0x131b8c: 0x26110018
    ctx->pc = 0x131b8cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 24));
label_131b90:
    // 0x131b90: 0x8e240000
    ctx->pc = 0x131b90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_131b94:
    // 0x131b94: 0x0
    ctx->pc = 0x131b94u;
    // NOP
label_131b98:
    // 0x131b98: 0x26310004
    ctx->pc = 0x131b98u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
label_131b9c:
    // 0x131b9c: 0x8c820000
    ctx->pc = 0x131b9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_131ba0:
    // 0x131ba0: 0x8c430014
    ctx->pc = 0x131ba0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_131ba4:
    // 0x131ba4: 0x60f809
label_131ba8:
    if (ctx->pc == 0x131BA8u) {
        ctx->pc = 0x131BA8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x131BACu;
        goto label_131bac;
    }
    ctx->pc = 0x131BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x131BACu);
        ctx->pc = 0x131BA8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131B60u: goto label_131b60;
            case 0x131B64u: goto label_131b64;
            case 0x131B68u: goto label_131b68;
            case 0x131B6Cu: goto label_131b6c;
            case 0x131B70u: goto label_131b70;
            case 0x131B74u: goto label_131b74;
            case 0x131B78u: goto label_131b78;
            case 0x131B7Cu: goto label_131b7c;
            case 0x131B80u: goto label_131b80;
            case 0x131B84u: goto label_131b84;
            case 0x131B88u: goto label_131b88;
            case 0x131B8Cu: goto label_131b8c;
            case 0x131B90u: goto label_131b90;
            case 0x131B94u: goto label_131b94;
            case 0x131B98u: goto label_131b98;
            case 0x131B9Cu: goto label_131b9c;
            case 0x131BA0u: goto label_131ba0;
            case 0x131BA4u: goto label_131ba4;
            case 0x131BA8u: goto label_131ba8;
            case 0x131BACu: goto label_131bac;
            case 0x131BB0u: goto label_131bb0;
            case 0x131BB4u: goto label_131bb4;
            case 0x131BB8u: goto label_131bb8;
            case 0x131BBCu: goto label_131bbc;
            case 0x131BC0u: goto label_131bc0;
            case 0x131BC4u: goto label_131bc4;
            case 0x131BC8u: goto label_131bc8;
            case 0x131BCCu: goto label_131bcc;
            case 0x131BD0u: goto label_131bd0;
            case 0x131BD4u: goto label_131bd4;
            case 0x131BD8u: goto label_131bd8;
            case 0x131BDCu: goto label_131bdc;
            case 0x131BE0u: goto label_131be0;
            case 0x131BE4u: goto label_131be4;
            case 0x131BE8u: goto label_131be8;
            case 0x131BECu: goto label_131bec;
            case 0x131BF0u: goto label_131bf0;
            case 0x131BF4u: goto label_131bf4;
            case 0x131BF8u: goto label_131bf8;
            case 0x131BFCu: goto label_131bfc;
            case 0x131C00u: goto label_131c00;
            case 0x131C04u: goto label_131c04;
            case 0x131C08u: goto label_131c08;
            case 0x131C0Cu: goto label_131c0c;
            case 0x131C10u: goto label_131c10;
            case 0x131C14u: goto label_131c14;
            case 0x131C18u: goto label_131c18;
            case 0x131C1Cu: goto label_131c1c;
            case 0x131C20u: goto label_131c20;
            case 0x131C24u: goto label_131c24;
            case 0x131C28u: goto label_131c28;
            case 0x131C2Cu: goto label_131c2c;
            case 0x131C30u: goto label_131c30;
            case 0x131C34u: goto label_131c34;
            case 0x131C38u: goto label_131c38;
            case 0x131C3Cu: goto label_131c3c;
            case 0x131C40u: goto label_131c40;
            case 0x131C44u: goto label_131c44;
            case 0x131C48u: goto label_131c48;
            case 0x131C4Cu: goto label_131c4c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x131BACu; }
            if (ctx->pc != 0x131BACu) { return; }
        }
    }
    ctx->pc = 0x131BACu;
label_131bac:
    // 0x131bac: 0x82020003
    ctx->pc = 0x131bacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_131bb0:
    // 0x131bb0: 0x242102a
    ctx->pc = 0x131bb0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
label_131bb4:
    // 0x131bb4: 0x5440fff8
label_131bb8:
    if (ctx->pc == 0x131BB8u) {
        ctx->pc = 0x131BB8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x131BBCu;
        goto label_131bbc;
    }
    ctx->pc = 0x131BB4u;
    {
        const bool branch_taken_0x131bb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x131bb4) {
            ctx->pc = 0x131BB8u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x131B98u;
            goto label_131b98;
        }
    }
    ctx->pc = 0x131BBCu;
label_131bbc:
    // 0x131bbc: 0x8e040004
    ctx->pc = 0x131bbcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_131bc0:
    // 0x131bc0: 0xc04b2f0
label_131bc4:
    if (ctx->pc == 0x131BC4u) {
        ctx->pc = 0x131BC4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x131BC8u;
        goto label_131bc8;
    }
    ctx->pc = 0x131BC0u;
    SET_GPR_U32(ctx, 31, 0x131BC8u);
    ctx->pc = 0x131BC4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12CBC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012CBC0_0x12cbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131BC8u; }
    }
    if (ctx->pc != 0x131BC8u) { return; }
    ctx->pc = 0x131BC8u;
label_131bc8:
    // 0x131bc8: 0xae130014
    ctx->pc = 0x131bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
label_131bcc:
    // 0x131bcc: 0xc04b320
label_131bd0:
    if (ctx->pc == 0x131BD0u) {
        ctx->pc = 0x131BD0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x131BD4u;
        goto label_131bd4;
    }
    ctx->pc = 0x131BCCu;
    SET_GPR_U32(ctx, 31, 0x131BD4u);
    ctx->pc = 0x131BD0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x12CC80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012CC80_0x12cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131BD4u; }
    }
    if (ctx->pc != 0x131BD4u) { return; }
    ctx->pc = 0x131BD4u;
label_131bd4:
    // 0x131bd4: 0x24030001
    ctx->pc = 0x131bd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_131bd8:
    // 0x131bd8: 0x3c027fff
    ctx->pc = 0x131bd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
label_131bdc:
    // 0x131bdc: 0x2404ffff
    ctx->pc = 0x131bdcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_131be0:
    // 0x131be0: 0x3442ffff
    ctx->pc = 0x131be0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_131be4:
    // 0x131be4: 0xa2030001
    ctx->pc = 0x131be4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_131be8:
    // 0x131be8: 0xae040090
    ctx->pc = 0x131be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 4));
label_131bec:
    // 0x131bec: 0x3c030021
    ctx->pc = 0x131becu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
label_131bf0:
    // 0x131bf0: 0xae02008c
    ctx->pc = 0x131bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_131bf4:
    // 0x131bf4: 0xae00004c
    ctx->pc = 0x131bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_131bf8:
    // 0x131bf8: 0xa2000071
    ctx->pc = 0x131bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
label_131bfc:
    // 0x131bfc: 0xae00009c
    ctx->pc = 0x131bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_131c00:
    // 0x131c00: 0xae0000a4
    ctx->pc = 0x131c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_131c04:
    // 0x131c04: 0x8e040074
    ctx->pc = 0x131c04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_131c08:
    // 0x131c08: 0x8c62f3c4
    ctx->pc = 0x131c08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294964164)));
label_131c0c:
    // 0x131c0c: 0x10800008
label_131c10:
    if (ctx->pc == 0x131C10u) {
        ctx->pc = 0x131C10u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x131C14u;
        goto label_131c14;
    }
    ctx->pc = 0x131C0Cu;
    {
        const bool branch_taken_0x131c0c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x131C10u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        if (branch_taken_0x131c0c) {
            ctx->pc = 0x131C30u;
            goto label_131c30;
        }
    }
    ctx->pc = 0x131C14u;
label_131c14:
    // 0x131c14: 0xdfb00000
    ctx->pc = 0x131c14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_131c18:
    // 0x131c18: 0xdfb10008
    ctx->pc = 0x131c18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_131c1c:
    // 0x131c1c: 0xdfb20010
    ctx->pc = 0x131c1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_131c20:
    // 0x131c20: 0xdfb30018
    ctx->pc = 0x131c20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_131c24:
    // 0x131c24: 0xdfbf0020
    ctx->pc = 0x131c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_131c28:
    // 0x131c28: 0x8048a52
label_131c2c:
    if (ctx->pc == 0x131C2Cu) {
        ctx->pc = 0x131C2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x131C30u;
        goto label_131c30;
    }
    ctx->pc = 0x131C28u;
    ctx->pc = 0x131C2Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x122948u;
    entry_122948_0x122ae8(rdram, ctx, runtime); return;
    ctx->pc = 0x131C30u;
label_131c30:
    // 0x131c30: 0xdfb00000
    ctx->pc = 0x131c30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_131c34:
    // 0x131c34: 0xdfb10008
    ctx->pc = 0x131c34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_131c38:
    // 0x131c38: 0xdfb20010
    ctx->pc = 0x131c38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_131c3c:
    // 0x131c3c: 0xdfb30018
    ctx->pc = 0x131c3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_131c40:
    // 0x131c40: 0xdfbf0020
    ctx->pc = 0x131c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_131c44:
    // 0x131c44: 0x3e00008
label_131c48:
    if (ctx->pc == 0x131C48u) {
        ctx->pc = 0x131C48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x131C4Cu;
        goto label_131c4c;
    }
    ctx->pc = 0x131C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131C48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131B60u: goto label_131b60;
            case 0x131B64u: goto label_131b64;
            case 0x131B68u: goto label_131b68;
            case 0x131B6Cu: goto label_131b6c;
            case 0x131B70u: goto label_131b70;
            case 0x131B74u: goto label_131b74;
            case 0x131B78u: goto label_131b78;
            case 0x131B7Cu: goto label_131b7c;
            case 0x131B80u: goto label_131b80;
            case 0x131B84u: goto label_131b84;
            case 0x131B88u: goto label_131b88;
            case 0x131B8Cu: goto label_131b8c;
            case 0x131B90u: goto label_131b90;
            case 0x131B94u: goto label_131b94;
            case 0x131B98u: goto label_131b98;
            case 0x131B9Cu: goto label_131b9c;
            case 0x131BA0u: goto label_131ba0;
            case 0x131BA4u: goto label_131ba4;
            case 0x131BA8u: goto label_131ba8;
            case 0x131BACu: goto label_131bac;
            case 0x131BB0u: goto label_131bb0;
            case 0x131BB4u: goto label_131bb4;
            case 0x131BB8u: goto label_131bb8;
            case 0x131BBCu: goto label_131bbc;
            case 0x131BC0u: goto label_131bc0;
            case 0x131BC4u: goto label_131bc4;
            case 0x131BC8u: goto label_131bc8;
            case 0x131BCCu: goto label_131bcc;
            case 0x131BD0u: goto label_131bd0;
            case 0x131BD4u: goto label_131bd4;
            case 0x131BD8u: goto label_131bd8;
            case 0x131BDCu: goto label_131bdc;
            case 0x131BE0u: goto label_131be0;
            case 0x131BE4u: goto label_131be4;
            case 0x131BE8u: goto label_131be8;
            case 0x131BECu: goto label_131bec;
            case 0x131BF0u: goto label_131bf0;
            case 0x131BF4u: goto label_131bf4;
            case 0x131BF8u: goto label_131bf8;
            case 0x131BFCu: goto label_131bfc;
            case 0x131C00u: goto label_131c00;
            case 0x131C04u: goto label_131c04;
            case 0x131C08u: goto label_131c08;
            case 0x131C0Cu: goto label_131c0c;
            case 0x131C10u: goto label_131c10;
            case 0x131C14u: goto label_131c14;
            case 0x131C18u: goto label_131c18;
            case 0x131C1Cu: goto label_131c1c;
            case 0x131C20u: goto label_131c20;
            case 0x131C24u: goto label_131c24;
            case 0x131C28u: goto label_131c28;
            case 0x131C2Cu: goto label_131c2c;
            case 0x131C30u: goto label_131c30;
            case 0x131C34u: goto label_131c34;
            case 0x131C38u: goto label_131c38;
            case 0x131C3Cu: goto label_131c3c;
            case 0x131C40u: goto label_131c40;
            case 0x131C44u: goto label_131c44;
            case 0x131C48u: goto label_131c48;
            case 0x131C4Cu: goto label_131c4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x131C4Cu;
label_131c4c:
    // 0x131c4c: 0x0
    ctx->pc = 0x131c4cu;
    // NOP
}
