#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_122af0
// Address: 0x122af0 - 0x122d80
void entry_122af0_0x122d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x122af0u;

label_122af0:
    // 0x122af0: 0x27bdff80
    ctx->pc = 0x122af0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
label_122af4:
    // 0x122af4: 0xffb20040
    ctx->pc = 0x122af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_122af8:
    // 0x122af8: 0xffb40050
    ctx->pc = 0x122af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_122afc:
    // 0x122afc: 0x80a02d
    ctx->pc = 0x122afcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_122b00:
    // 0x122b00: 0xffb00030
    ctx->pc = 0x122b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_122b04:
    // 0x122b04: 0xffb10038
    ctx->pc = 0x122b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_122b08:
    // 0x122b08: 0xffb30048
    ctx->pc = 0x122b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_122b0c:
    // 0x122b0c: 0xffb50058
    ctx->pc = 0x122b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_122b10:
    // 0x122b10: 0xffb60060
    ctx->pc = 0x122b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_122b14:
    // 0x122b14: 0xffb70068
    ctx->pc = 0x122b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
label_122b18:
    // 0x122b18: 0xffbe0070
    ctx->pc = 0x122b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
label_122b1c:
    // 0x122b1c: 0xffbf0078
    ctx->pc = 0x122b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_122b20:
    // 0x122b20: 0xafa00020
    ctx->pc = 0x122b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_122b24:
    // 0x122b24: 0xc6800020
    ctx->pc = 0x122b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122b28:
    // 0x122b28: 0x46800020
    ctx->pc = 0x122b28u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_122b2c:
    // 0x122b2c: 0xc6810024
    ctx->pc = 0x122b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122b30:
    // 0x122b30: 0x8e82001c
    ctx->pc = 0x122b30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_122b34:
    // 0x122b34: 0x46010002
    ctx->pc = 0x122b34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_122b38:
    // 0x122b38: 0x46000064
    ctx->pc = 0x122b38u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_122b3c:
    // 0x122b3c: 0x44120800
    ctx->pc = 0x122b3cu;
    SET_GPR_U32(ctx, 18, *(uint32_t*)&ctx->f[1]);
label_122b40:
    // 0x122b40: 0x18400083
label_122b44:
    if (ctx->pc == 0x122B44u) {
        ctx->pc = 0x122B44u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x122B48u;
        goto label_122b48;
    }
    ctx->pc = 0x122B40u;
    {
        const bool branch_taken_0x122b40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x122B44u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x122b40) {
            ctx->pc = 0x122D50u;
            goto label_122d50;
        }
    }
    ctx->pc = 0x122B48u;
label_122b48:
    // 0x122b48: 0x2697000c
    ctx->pc = 0x122b48u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 20), 12));
label_122b4c:
    // 0x122b4c: 0x26820014
    ctx->pc = 0x122b4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 20));
label_122b50:
    // 0x122b50: 0xafb70028
    ctx->pc = 0x122b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 23));
label_122b54:
    // 0x122b54: 0x269e0004
    ctx->pc = 0x122b54u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 20), 4));
label_122b58:
    // 0x122b58: 0xafa2002c
    ctx->pc = 0x122b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_122b5c:
    // 0x122b5c: 0x0
    ctx->pc = 0x122b5cu;
    // NOP
label_122b60:
    // 0x122b60: 0x8fa30020
    ctx->pc = 0x122b60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_122b64:
    // 0x122b64: 0x8fc40000
    ctx->pc = 0x122b64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_122b68:
    // 0x122b68: 0x38880
    ctx->pc = 0x122b68u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 3), 2));
label_122b6c:
    // 0x122b6c: 0x8c830000
    ctx->pc = 0x122b6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_122b70:
    // 0x122b70: 0x8c620024
    ctx->pc = 0x122b70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_122b74:
    // 0x122b74: 0x40f809
label_122b78:
    if (ctx->pc == 0x122B78u) {
        ctx->pc = 0x122B78u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x122B7Cu;
        goto label_122b7c;
    }
    ctx->pc = 0x122B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x122B7Cu);
        ctx->pc = 0x122B78u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122AF0u: goto label_122af0;
            case 0x122AF4u: goto label_122af4;
            case 0x122AF8u: goto label_122af8;
            case 0x122AFCu: goto label_122afc;
            case 0x122B00u: goto label_122b00;
            case 0x122B04u: goto label_122b04;
            case 0x122B08u: goto label_122b08;
            case 0x122B0Cu: goto label_122b0c;
            case 0x122B10u: goto label_122b10;
            case 0x122B14u: goto label_122b14;
            case 0x122B18u: goto label_122b18;
            case 0x122B1Cu: goto label_122b1c;
            case 0x122B20u: goto label_122b20;
            case 0x122B24u: goto label_122b24;
            case 0x122B28u: goto label_122b28;
            case 0x122B2Cu: goto label_122b2c;
            case 0x122B30u: goto label_122b30;
            case 0x122B34u: goto label_122b34;
            case 0x122B38u: goto label_122b38;
            case 0x122B3Cu: goto label_122b3c;
            case 0x122B40u: goto label_122b40;
            case 0x122B44u: goto label_122b44;
            case 0x122B48u: goto label_122b48;
            case 0x122B4Cu: goto label_122b4c;
            case 0x122B50u: goto label_122b50;
            case 0x122B54u: goto label_122b54;
            case 0x122B58u: goto label_122b58;
            case 0x122B5Cu: goto label_122b5c;
            case 0x122B60u: goto label_122b60;
            case 0x122B64u: goto label_122b64;
            case 0x122B68u: goto label_122b68;
            case 0x122B6Cu: goto label_122b6c;
            case 0x122B70u: goto label_122b70;
            case 0x122B74u: goto label_122b74;
            case 0x122B78u: goto label_122b78;
            case 0x122B7Cu: goto label_122b7c;
            case 0x122B80u: goto label_122b80;
            case 0x122B84u: goto label_122b84;
            case 0x122B88u: goto label_122b88;
            case 0x122B8Cu: goto label_122b8c;
            case 0x122B90u: goto label_122b90;
            case 0x122B94u: goto label_122b94;
            case 0x122B98u: goto label_122b98;
            case 0x122B9Cu: goto label_122b9c;
            case 0x122BA0u: goto label_122ba0;
            case 0x122BA4u: goto label_122ba4;
            case 0x122BA8u: goto label_122ba8;
            case 0x122BACu: goto label_122bac;
            case 0x122BB0u: goto label_122bb0;
            case 0x122BB4u: goto label_122bb4;
            case 0x122BB8u: goto label_122bb8;
            case 0x122BBCu: goto label_122bbc;
            case 0x122BC0u: goto label_122bc0;
            case 0x122BC4u: goto label_122bc4;
            case 0x122BC8u: goto label_122bc8;
            case 0x122BCCu: goto label_122bcc;
            case 0x122BD0u: goto label_122bd0;
            case 0x122BD4u: goto label_122bd4;
            case 0x122BD8u: goto label_122bd8;
            case 0x122BDCu: goto label_122bdc;
            case 0x122BE0u: goto label_122be0;
            case 0x122BE4u: goto label_122be4;
            case 0x122BE8u: goto label_122be8;
            case 0x122BECu: goto label_122bec;
            case 0x122BF0u: goto label_122bf0;
            case 0x122BF4u: goto label_122bf4;
            case 0x122BF8u: goto label_122bf8;
            case 0x122BFCu: goto label_122bfc;
            case 0x122C00u: goto label_122c00;
            case 0x122C04u: goto label_122c04;
            case 0x122C08u: goto label_122c08;
            case 0x122C0Cu: goto label_122c0c;
            case 0x122C10u: goto label_122c10;
            case 0x122C14u: goto label_122c14;
            case 0x122C18u: goto label_122c18;
            case 0x122C1Cu: goto label_122c1c;
            case 0x122C20u: goto label_122c20;
            case 0x122C24u: goto label_122c24;
            case 0x122C28u: goto label_122c28;
            case 0x122C2Cu: goto label_122c2c;
            case 0x122C30u: goto label_122c30;
            case 0x122C34u: goto label_122c34;
            case 0x122C38u: goto label_122c38;
            case 0x122C3Cu: goto label_122c3c;
            case 0x122C40u: goto label_122c40;
            case 0x122C44u: goto label_122c44;
            case 0x122C48u: goto label_122c48;
            case 0x122C4Cu: goto label_122c4c;
            case 0x122C50u: goto label_122c50;
            case 0x122C54u: goto label_122c54;
            case 0x122C58u: goto label_122c58;
            case 0x122C5Cu: goto label_122c5c;
            case 0x122C60u: goto label_122c60;
            case 0x122C64u: goto label_122c64;
            case 0x122C68u: goto label_122c68;
            case 0x122C6Cu: goto label_122c6c;
            case 0x122C70u: goto label_122c70;
            case 0x122C74u: goto label_122c74;
            case 0x122C78u: goto label_122c78;
            case 0x122C7Cu: goto label_122c7c;
            case 0x122C80u: goto label_122c80;
            case 0x122C84u: goto label_122c84;
            case 0x122C88u: goto label_122c88;
            case 0x122C8Cu: goto label_122c8c;
            case 0x122C90u: goto label_122c90;
            case 0x122C94u: goto label_122c94;
            case 0x122C98u: goto label_122c98;
            case 0x122C9Cu: goto label_122c9c;
            case 0x122CA0u: goto label_122ca0;
            case 0x122CA4u: goto label_122ca4;
            case 0x122CA8u: goto label_122ca8;
            case 0x122CACu: goto label_122cac;
            case 0x122CB0u: goto label_122cb0;
            case 0x122CB4u: goto label_122cb4;
            case 0x122CB8u: goto label_122cb8;
            case 0x122CBCu: goto label_122cbc;
            case 0x122CC0u: goto label_122cc0;
            case 0x122CC4u: goto label_122cc4;
            case 0x122CC8u: goto label_122cc8;
            case 0x122CCCu: goto label_122ccc;
            case 0x122CD0u: goto label_122cd0;
            case 0x122CD4u: goto label_122cd4;
            case 0x122CD8u: goto label_122cd8;
            case 0x122CDCu: goto label_122cdc;
            case 0x122CE0u: goto label_122ce0;
            case 0x122CE4u: goto label_122ce4;
            case 0x122CE8u: goto label_122ce8;
            case 0x122CECu: goto label_122cec;
            case 0x122CF0u: goto label_122cf0;
            case 0x122CF4u: goto label_122cf4;
            case 0x122CF8u: goto label_122cf8;
            case 0x122CFCu: goto label_122cfc;
            case 0x122D00u: goto label_122d00;
            case 0x122D04u: goto label_122d04;
            case 0x122D08u: goto label_122d08;
            case 0x122D0Cu: goto label_122d0c;
            case 0x122D10u: goto label_122d10;
            case 0x122D14u: goto label_122d14;
            case 0x122D18u: goto label_122d18;
            case 0x122D1Cu: goto label_122d1c;
            case 0x122D20u: goto label_122d20;
            case 0x122D24u: goto label_122d24;
            case 0x122D28u: goto label_122d28;
            case 0x122D2Cu: goto label_122d2c;
            case 0x122D30u: goto label_122d30;
            case 0x122D34u: goto label_122d34;
            case 0x122D38u: goto label_122d38;
            case 0x122D3Cu: goto label_122d3c;
            case 0x122D40u: goto label_122d40;
            case 0x122D44u: goto label_122d44;
            case 0x122D48u: goto label_122d48;
            case 0x122D4Cu: goto label_122d4c;
            case 0x122D50u: goto label_122d50;
            case 0x122D54u: goto label_122d54;
            case 0x122D58u: goto label_122d58;
            case 0x122D5Cu: goto label_122d5c;
            case 0x122D60u: goto label_122d60;
            case 0x122D64u: goto label_122d64;
            case 0x122D68u: goto label_122d68;
            case 0x122D6Cu: goto label_122d6c;
            case 0x122D70u: goto label_122d70;
            case 0x122D74u: goto label_122d74;
            case 0x122D78u: goto label_122d78;
            case 0x122D7Cu: goto label_122d7c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x122B7Cu; }
            if (ctx->pc != 0x122B7Cu) { return; }
        }
    }
    ctx->pc = 0x122B7Cu;
label_122b7c:
    // 0x122b7c: 0x52400001
label_122b80:
    if (ctx->pc == 0x122B80u) {
        ctx->pc = 0x122B80u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x122B84u;
        goto label_122b84;
    }
    ctx->pc = 0x122B7Cu;
    {
        const bool branch_taken_0x122b7c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x122b7c) {
            ctx->pc = 0x122B80u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x122B84u;
            goto label_122b84;
        }
    }
    ctx->pc = 0x122B84u;
label_122b84:
    // 0x122b84: 0x287c2
    ctx->pc = 0x122b84u;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 2), 31));
label_122b88:
    // 0x122b88: 0x8ee40000
    ctx->pc = 0x122b88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_122b8c:
    // 0x122b8c: 0x2028021
    ctx->pc = 0x122b8cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_122b90:
    // 0x122b90: 0x108043
    ctx->pc = 0x122b90u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_122b94:
    // 0x122b94: 0x8c830000
    ctx->pc = 0x122b94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_122b98:
    // 0x122b98: 0x212001a
    ctx->pc = 0x122b98u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_122b9c:
    // 0x122b9c: 0x8c620024
    ctx->pc = 0x122b9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_122ba0:
    // 0x122ba0: 0x8012
    ctx->pc = 0x122ba0u;
    SET_GPR_U32(ctx, 16, ctx->lo);
label_122ba4:
    // 0x122ba4: 0x40f809
label_122ba8:
    if (ctx->pc == 0x122BA8u) {
        ctx->pc = 0x122BA8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x122BACu;
        goto label_122bac;
    }
    ctx->pc = 0x122BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x122BACu);
        ctx->pc = 0x122BA8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122AF0u: goto label_122af0;
            case 0x122AF4u: goto label_122af4;
            case 0x122AF8u: goto label_122af8;
            case 0x122AFCu: goto label_122afc;
            case 0x122B00u: goto label_122b00;
            case 0x122B04u: goto label_122b04;
            case 0x122B08u: goto label_122b08;
            case 0x122B0Cu: goto label_122b0c;
            case 0x122B10u: goto label_122b10;
            case 0x122B14u: goto label_122b14;
            case 0x122B18u: goto label_122b18;
            case 0x122B1Cu: goto label_122b1c;
            case 0x122B20u: goto label_122b20;
            case 0x122B24u: goto label_122b24;
            case 0x122B28u: goto label_122b28;
            case 0x122B2Cu: goto label_122b2c;
            case 0x122B30u: goto label_122b30;
            case 0x122B34u: goto label_122b34;
            case 0x122B38u: goto label_122b38;
            case 0x122B3Cu: goto label_122b3c;
            case 0x122B40u: goto label_122b40;
            case 0x122B44u: goto label_122b44;
            case 0x122B48u: goto label_122b48;
            case 0x122B4Cu: goto label_122b4c;
            case 0x122B50u: goto label_122b50;
            case 0x122B54u: goto label_122b54;
            case 0x122B58u: goto label_122b58;
            case 0x122B5Cu: goto label_122b5c;
            case 0x122B60u: goto label_122b60;
            case 0x122B64u: goto label_122b64;
            case 0x122B68u: goto label_122b68;
            case 0x122B6Cu: goto label_122b6c;
            case 0x122B70u: goto label_122b70;
            case 0x122B74u: goto label_122b74;
            case 0x122B78u: goto label_122b78;
            case 0x122B7Cu: goto label_122b7c;
            case 0x122B80u: goto label_122b80;
            case 0x122B84u: goto label_122b84;
            case 0x122B88u: goto label_122b88;
            case 0x122B8Cu: goto label_122b8c;
            case 0x122B90u: goto label_122b90;
            case 0x122B94u: goto label_122b94;
            case 0x122B98u: goto label_122b98;
            case 0x122B9Cu: goto label_122b9c;
            case 0x122BA0u: goto label_122ba0;
            case 0x122BA4u: goto label_122ba4;
            case 0x122BA8u: goto label_122ba8;
            case 0x122BACu: goto label_122bac;
            case 0x122BB0u: goto label_122bb0;
            case 0x122BB4u: goto label_122bb4;
            case 0x122BB8u: goto label_122bb8;
            case 0x122BBCu: goto label_122bbc;
            case 0x122BC0u: goto label_122bc0;
            case 0x122BC4u: goto label_122bc4;
            case 0x122BC8u: goto label_122bc8;
            case 0x122BCCu: goto label_122bcc;
            case 0x122BD0u: goto label_122bd0;
            case 0x122BD4u: goto label_122bd4;
            case 0x122BD8u: goto label_122bd8;
            case 0x122BDCu: goto label_122bdc;
            case 0x122BE0u: goto label_122be0;
            case 0x122BE4u: goto label_122be4;
            case 0x122BE8u: goto label_122be8;
            case 0x122BECu: goto label_122bec;
            case 0x122BF0u: goto label_122bf0;
            case 0x122BF4u: goto label_122bf4;
            case 0x122BF8u: goto label_122bf8;
            case 0x122BFCu: goto label_122bfc;
            case 0x122C00u: goto label_122c00;
            case 0x122C04u: goto label_122c04;
            case 0x122C08u: goto label_122c08;
            case 0x122C0Cu: goto label_122c0c;
            case 0x122C10u: goto label_122c10;
            case 0x122C14u: goto label_122c14;
            case 0x122C18u: goto label_122c18;
            case 0x122C1Cu: goto label_122c1c;
            case 0x122C20u: goto label_122c20;
            case 0x122C24u: goto label_122c24;
            case 0x122C28u: goto label_122c28;
            case 0x122C2Cu: goto label_122c2c;
            case 0x122C30u: goto label_122c30;
            case 0x122C34u: goto label_122c34;
            case 0x122C38u: goto label_122c38;
            case 0x122C3Cu: goto label_122c3c;
            case 0x122C40u: goto label_122c40;
            case 0x122C44u: goto label_122c44;
            case 0x122C48u: goto label_122c48;
            case 0x122C4Cu: goto label_122c4c;
            case 0x122C50u: goto label_122c50;
            case 0x122C54u: goto label_122c54;
            case 0x122C58u: goto label_122c58;
            case 0x122C5Cu: goto label_122c5c;
            case 0x122C60u: goto label_122c60;
            case 0x122C64u: goto label_122c64;
            case 0x122C68u: goto label_122c68;
            case 0x122C6Cu: goto label_122c6c;
            case 0x122C70u: goto label_122c70;
            case 0x122C74u: goto label_122c74;
            case 0x122C78u: goto label_122c78;
            case 0x122C7Cu: goto label_122c7c;
            case 0x122C80u: goto label_122c80;
            case 0x122C84u: goto label_122c84;
            case 0x122C88u: goto label_122c88;
            case 0x122C8Cu: goto label_122c8c;
            case 0x122C90u: goto label_122c90;
            case 0x122C94u: goto label_122c94;
            case 0x122C98u: goto label_122c98;
            case 0x122C9Cu: goto label_122c9c;
            case 0x122CA0u: goto label_122ca0;
            case 0x122CA4u: goto label_122ca4;
            case 0x122CA8u: goto label_122ca8;
            case 0x122CACu: goto label_122cac;
            case 0x122CB0u: goto label_122cb0;
            case 0x122CB4u: goto label_122cb4;
            case 0x122CB8u: goto label_122cb8;
            case 0x122CBCu: goto label_122cbc;
            case 0x122CC0u: goto label_122cc0;
            case 0x122CC4u: goto label_122cc4;
            case 0x122CC8u: goto label_122cc8;
            case 0x122CCCu: goto label_122ccc;
            case 0x122CD0u: goto label_122cd0;
            case 0x122CD4u: goto label_122cd4;
            case 0x122CD8u: goto label_122cd8;
            case 0x122CDCu: goto label_122cdc;
            case 0x122CE0u: goto label_122ce0;
            case 0x122CE4u: goto label_122ce4;
            case 0x122CE8u: goto label_122ce8;
            case 0x122CECu: goto label_122cec;
            case 0x122CF0u: goto label_122cf0;
            case 0x122CF4u: goto label_122cf4;
            case 0x122CF8u: goto label_122cf8;
            case 0x122CFCu: goto label_122cfc;
            case 0x122D00u: goto label_122d00;
            case 0x122D04u: goto label_122d04;
            case 0x122D08u: goto label_122d08;
            case 0x122D0Cu: goto label_122d0c;
            case 0x122D10u: goto label_122d10;
            case 0x122D14u: goto label_122d14;
            case 0x122D18u: goto label_122d18;
            case 0x122D1Cu: goto label_122d1c;
            case 0x122D20u: goto label_122d20;
            case 0x122D24u: goto label_122d24;
            case 0x122D28u: goto label_122d28;
            case 0x122D2Cu: goto label_122d2c;
            case 0x122D30u: goto label_122d30;
            case 0x122D34u: goto label_122d34;
            case 0x122D38u: goto label_122d38;
            case 0x122D3Cu: goto label_122d3c;
            case 0x122D40u: goto label_122d40;
            case 0x122D44u: goto label_122d44;
            case 0x122D48u: goto label_122d48;
            case 0x122D4Cu: goto label_122d4c;
            case 0x122D50u: goto label_122d50;
            case 0x122D54u: goto label_122d54;
            case 0x122D58u: goto label_122d58;
            case 0x122D5Cu: goto label_122d5c;
            case 0x122D60u: goto label_122d60;
            case 0x122D64u: goto label_122d64;
            case 0x122D68u: goto label_122d68;
            case 0x122D6Cu: goto label_122d6c;
            case 0x122D70u: goto label_122d70;
            case 0x122D74u: goto label_122d74;
            case 0x122D78u: goto label_122d78;
            case 0x122D7Cu: goto label_122d7c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x122BACu; }
            if (ctx->pc != 0x122BACu) { return; }
        }
    }
    ctx->pc = 0x122BACu;
label_122bac:
    // 0x122bac: 0x28430000
    ctx->pc = 0x122bacu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 0));
label_122bb0:
    // 0x122bb0: 0x2444000f
    ctx->pc = 0x122bb0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 15));
label_122bb4:
    // 0x122bb4: 0x83100b
    ctx->pc = 0x122bb4u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
label_122bb8:
    // 0x122bb8: 0x21903
    ctx->pc = 0x122bb8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
label_122bbc:
    // 0x122bbc: 0x203102a
    ctx->pc = 0x122bbcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
label_122bc0:
    // 0x122bc0: 0x202180b
    ctx->pc = 0x122bc0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 16));
label_122bc4:
    // 0x122bc4: 0x58600057
label_122bc8:
    if (ctx->pc == 0x122BC8u) {
        ctx->pc = 0x122BC8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x122BCCu;
        goto label_122bcc;
    }
    ctx->pc = 0x122BC4u;
    {
        const bool branch_taken_0x122bc4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x122bc4) {
            ctx->pc = 0x122BC8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->pc = 0x122D24u;
            goto label_122d24;
        }
    }
    ctx->pc = 0x122BCCu;
label_122bcc:
    // 0x122bcc: 0x8fa20028
    ctx->pc = 0x122bccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_122bd0:
    // 0x122bd0: 0x60b02d
    ctx->pc = 0x122bd0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_122bd4:
    // 0x122bd4: 0x8fb5002c
    ctx->pc = 0x122bd4u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_122bd8:
    // 0x122bd8: 0x518821
    ctx->pc = 0x122bd8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_122bdc:
    // 0x122bdc: 0xafb10024
    ctx->pc = 0x122bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
label_122be0:
    // 0x122be0: 0x802d
    ctx->pc = 0x122be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122be4:
    // 0x122be4: 0x1a400025
label_122be8:
    if (ctx->pc == 0x122BE8u) {
        ctx->pc = 0x122BE8u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x122BECu;
        goto label_122bec;
    }
    ctx->pc = 0x122BE4u;
    {
        const bool branch_taken_0x122be4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x122BE8u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x122be4) {
            ctx->pc = 0x122C7Cu;
            goto label_122c7c;
        }
    }
    ctx->pc = 0x122BECu;
label_122bec:
    // 0x122bec: 0x3c0882d
    ctx->pc = 0x122becu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_122bf0:
    // 0x122bf0: 0x8e240000
    ctx->pc = 0x122bf0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_122bf4:
    // 0x122bf4: 0x0
    ctx->pc = 0x122bf4u;
    // NOP
label_122bf8:
    // 0x122bf8: 0x2503023
    ctx->pc = 0x122bf8u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_122bfc:
    // 0x122bfc: 0x3a0382d
    ctx->pc = 0x122bfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_122c00:
    // 0x122c00: 0x63040
    ctx->pc = 0x122c00u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 1));
label_122c04:
    // 0x122c04: 0x8c830000
    ctx->pc = 0x122c04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_122c08:
    // 0x122c08: 0x8c620018
    ctx->pc = 0x122c08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_122c0c:
    // 0x122c0c: 0x40f809
label_122c10:
    if (ctx->pc == 0x122C10u) {
        ctx->pc = 0x122C10u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x122C14u;
        goto label_122c14;
    }
    ctx->pc = 0x122C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x122C14u);
        ctx->pc = 0x122C10u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122AF0u: goto label_122af0;
            case 0x122AF4u: goto label_122af4;
            case 0x122AF8u: goto label_122af8;
            case 0x122AFCu: goto label_122afc;
            case 0x122B00u: goto label_122b00;
            case 0x122B04u: goto label_122b04;
            case 0x122B08u: goto label_122b08;
            case 0x122B0Cu: goto label_122b0c;
            case 0x122B10u: goto label_122b10;
            case 0x122B14u: goto label_122b14;
            case 0x122B18u: goto label_122b18;
            case 0x122B1Cu: goto label_122b1c;
            case 0x122B20u: goto label_122b20;
            case 0x122B24u: goto label_122b24;
            case 0x122B28u: goto label_122b28;
            case 0x122B2Cu: goto label_122b2c;
            case 0x122B30u: goto label_122b30;
            case 0x122B34u: goto label_122b34;
            case 0x122B38u: goto label_122b38;
            case 0x122B3Cu: goto label_122b3c;
            case 0x122B40u: goto label_122b40;
            case 0x122B44u: goto label_122b44;
            case 0x122B48u: goto label_122b48;
            case 0x122B4Cu: goto label_122b4c;
            case 0x122B50u: goto label_122b50;
            case 0x122B54u: goto label_122b54;
            case 0x122B58u: goto label_122b58;
            case 0x122B5Cu: goto label_122b5c;
            case 0x122B60u: goto label_122b60;
            case 0x122B64u: goto label_122b64;
            case 0x122B68u: goto label_122b68;
            case 0x122B6Cu: goto label_122b6c;
            case 0x122B70u: goto label_122b70;
            case 0x122B74u: goto label_122b74;
            case 0x122B78u: goto label_122b78;
            case 0x122B7Cu: goto label_122b7c;
            case 0x122B80u: goto label_122b80;
            case 0x122B84u: goto label_122b84;
            case 0x122B88u: goto label_122b88;
            case 0x122B8Cu: goto label_122b8c;
            case 0x122B90u: goto label_122b90;
            case 0x122B94u: goto label_122b94;
            case 0x122B98u: goto label_122b98;
            case 0x122B9Cu: goto label_122b9c;
            case 0x122BA0u: goto label_122ba0;
            case 0x122BA4u: goto label_122ba4;
            case 0x122BA8u: goto label_122ba8;
            case 0x122BACu: goto label_122bac;
            case 0x122BB0u: goto label_122bb0;
            case 0x122BB4u: goto label_122bb4;
            case 0x122BB8u: goto label_122bb8;
            case 0x122BBCu: goto label_122bbc;
            case 0x122BC0u: goto label_122bc0;
            case 0x122BC4u: goto label_122bc4;
            case 0x122BC8u: goto label_122bc8;
            case 0x122BCCu: goto label_122bcc;
            case 0x122BD0u: goto label_122bd0;
            case 0x122BD4u: goto label_122bd4;
            case 0x122BD8u: goto label_122bd8;
            case 0x122BDCu: goto label_122bdc;
            case 0x122BE0u: goto label_122be0;
            case 0x122BE4u: goto label_122be4;
            case 0x122BE8u: goto label_122be8;
            case 0x122BECu: goto label_122bec;
            case 0x122BF0u: goto label_122bf0;
            case 0x122BF4u: goto label_122bf4;
            case 0x122BF8u: goto label_122bf8;
            case 0x122BFCu: goto label_122bfc;
            case 0x122C00u: goto label_122c00;
            case 0x122C04u: goto label_122c04;
            case 0x122C08u: goto label_122c08;
            case 0x122C0Cu: goto label_122c0c;
            case 0x122C10u: goto label_122c10;
            case 0x122C14u: goto label_122c14;
            case 0x122C18u: goto label_122c18;
            case 0x122C1Cu: goto label_122c1c;
            case 0x122C20u: goto label_122c20;
            case 0x122C24u: goto label_122c24;
            case 0x122C28u: goto label_122c28;
            case 0x122C2Cu: goto label_122c2c;
            case 0x122C30u: goto label_122c30;
            case 0x122C34u: goto label_122c34;
            case 0x122C38u: goto label_122c38;
            case 0x122C3Cu: goto label_122c3c;
            case 0x122C40u: goto label_122c40;
            case 0x122C44u: goto label_122c44;
            case 0x122C48u: goto label_122c48;
            case 0x122C4Cu: goto label_122c4c;
            case 0x122C50u: goto label_122c50;
            case 0x122C54u: goto label_122c54;
            case 0x122C58u: goto label_122c58;
            case 0x122C5Cu: goto label_122c5c;
            case 0x122C60u: goto label_122c60;
            case 0x122C64u: goto label_122c64;
            case 0x122C68u: goto label_122c68;
            case 0x122C6Cu: goto label_122c6c;
            case 0x122C70u: goto label_122c70;
            case 0x122C74u: goto label_122c74;
            case 0x122C78u: goto label_122c78;
            case 0x122C7Cu: goto label_122c7c;
            case 0x122C80u: goto label_122c80;
            case 0x122C84u: goto label_122c84;
            case 0x122C88u: goto label_122c88;
            case 0x122C8Cu: goto label_122c8c;
            case 0x122C90u: goto label_122c90;
            case 0x122C94u: goto label_122c94;
            case 0x122C98u: goto label_122c98;
            case 0x122C9Cu: goto label_122c9c;
            case 0x122CA0u: goto label_122ca0;
            case 0x122CA4u: goto label_122ca4;
            case 0x122CA8u: goto label_122ca8;
            case 0x122CACu: goto label_122cac;
            case 0x122CB0u: goto label_122cb0;
            case 0x122CB4u: goto label_122cb4;
            case 0x122CB8u: goto label_122cb8;
            case 0x122CBCu: goto label_122cbc;
            case 0x122CC0u: goto label_122cc0;
            case 0x122CC4u: goto label_122cc4;
            case 0x122CC8u: goto label_122cc8;
            case 0x122CCCu: goto label_122ccc;
            case 0x122CD0u: goto label_122cd0;
            case 0x122CD4u: goto label_122cd4;
            case 0x122CD8u: goto label_122cd8;
            case 0x122CDCu: goto label_122cdc;
            case 0x122CE0u: goto label_122ce0;
            case 0x122CE4u: goto label_122ce4;
            case 0x122CE8u: goto label_122ce8;
            case 0x122CECu: goto label_122cec;
            case 0x122CF0u: goto label_122cf0;
            case 0x122CF4u: goto label_122cf4;
            case 0x122CF8u: goto label_122cf8;
            case 0x122CFCu: goto label_122cfc;
            case 0x122D00u: goto label_122d00;
            case 0x122D04u: goto label_122d04;
            case 0x122D08u: goto label_122d08;
            case 0x122D0Cu: goto label_122d0c;
            case 0x122D10u: goto label_122d10;
            case 0x122D14u: goto label_122d14;
            case 0x122D18u: goto label_122d18;
            case 0x122D1Cu: goto label_122d1c;
            case 0x122D20u: goto label_122d20;
            case 0x122D24u: goto label_122d24;
            case 0x122D28u: goto label_122d28;
            case 0x122D2Cu: goto label_122d2c;
            case 0x122D30u: goto label_122d30;
            case 0x122D34u: goto label_122d34;
            case 0x122D38u: goto label_122d38;
            case 0x122D3Cu: goto label_122d3c;
            case 0x122D40u: goto label_122d40;
            case 0x122D44u: goto label_122d44;
            case 0x122D48u: goto label_122d48;
            case 0x122D4Cu: goto label_122d4c;
            case 0x122D50u: goto label_122d50;
            case 0x122D54u: goto label_122d54;
            case 0x122D58u: goto label_122d58;
            case 0x122D5Cu: goto label_122d5c;
            case 0x122D60u: goto label_122d60;
            case 0x122D64u: goto label_122d64;
            case 0x122D68u: goto label_122d68;
            case 0x122D6Cu: goto label_122d6c;
            case 0x122D70u: goto label_122d70;
            case 0x122D74u: goto label_122d74;
            case 0x122D78u: goto label_122d78;
            case 0x122D7Cu: goto label_122d7c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x122C14u; }
            if (ctx->pc != 0x122C14u) { return; }
        }
    }
    ctx->pc = 0x122C14u;
label_122c14:
    // 0x122c14: 0x8fa30004
    ctx->pc = 0x122c14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_122c18:
    // 0x122c18: 0x317c2
    ctx->pc = 0x122c18u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 31));
label_122c1c:
    // 0x122c1c: 0x621821
    ctx->pc = 0x122c1cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_122c20:
    // 0x122c20: 0x34043
    ctx->pc = 0x122c20u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 1));
label_122c24:
    // 0x122c24: 0x1900000b
label_122c28:
    if (ctx->pc == 0x122C28u) {
        ctx->pc = 0x122C28u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x122C2Cu;
        goto label_122c2c;
    }
    ctx->pc = 0x122C24u;
    {
        const bool branch_taken_0x122c24 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x122C28u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x122c24) {
            ctx->pc = 0x122C54u;
            goto label_122c54;
        }
    }
    ctx->pc = 0x122C2Cu;
label_122c2c:
    // 0x122c2c: 0x100302d
    ctx->pc = 0x122c2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_122c30:
    // 0x122c30: 0x84e40000
    ctx->pc = 0x122c30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_122c34:
    // 0x122c34: 0x24e70002
    ctx->pc = 0x122c34u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
label_122c38:
    // 0x122c38: 0x24c6ffff
    ctx->pc = 0x122c38u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
label_122c3c:
    // 0x122c3c: 0x42823
    ctx->pc = 0x122c3cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_122c40:
    // 0x122c40: 0x28820000
    ctx->pc = 0x122c40u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 0));
label_122c44:
    // 0x122c44: 0xa2200b
    ctx->pc = 0x122c44u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 5));
label_122c48:
    // 0x122c48: 0x264182a
    ctx->pc = 0x122c48u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 4)));
label_122c4c:
    // 0x122c4c: 0x14c0fff8
label_122c50:
    if (ctx->pc == 0x122C50u) {
        ctx->pc = 0x122C50u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 4));
        ctx->pc = 0x122C54u;
        goto label_122c54;
    }
    ctx->pc = 0x122C4Cu;
    {
        const bool branch_taken_0x122c4c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x122C50u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 4));
        if (branch_taken_0x122c4c) {
            ctx->pc = 0x122C30u;
            goto label_122c30;
        }
    }
    ctx->pc = 0x122C54u;
label_122c54:
    // 0x122c54: 0x8e240000
    ctx->pc = 0x122c54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_122c58:
    // 0x122c58: 0x2088021
    ctx->pc = 0x122c58u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_122c5c:
    // 0x122c5c: 0x282d
    ctx->pc = 0x122c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122c60:
    // 0x122c60: 0x8c830000
    ctx->pc = 0x122c60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_122c64:
    // 0x122c64: 0x8c620020
    ctx->pc = 0x122c64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_122c68:
    // 0x122c68: 0x40f809
label_122c6c:
    if (ctx->pc == 0x122C6Cu) {
        ctx->pc = 0x122C6Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x122C70u;
        goto label_122c70;
    }
    ctx->pc = 0x122C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x122C70u);
        ctx->pc = 0x122C6Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122AF0u: goto label_122af0;
            case 0x122AF4u: goto label_122af4;
            case 0x122AF8u: goto label_122af8;
            case 0x122AFCu: goto label_122afc;
            case 0x122B00u: goto label_122b00;
            case 0x122B04u: goto label_122b04;
            case 0x122B08u: goto label_122b08;
            case 0x122B0Cu: goto label_122b0c;
            case 0x122B10u: goto label_122b10;
            case 0x122B14u: goto label_122b14;
            case 0x122B18u: goto label_122b18;
            case 0x122B1Cu: goto label_122b1c;
            case 0x122B20u: goto label_122b20;
            case 0x122B24u: goto label_122b24;
            case 0x122B28u: goto label_122b28;
            case 0x122B2Cu: goto label_122b2c;
            case 0x122B30u: goto label_122b30;
            case 0x122B34u: goto label_122b34;
            case 0x122B38u: goto label_122b38;
            case 0x122B3Cu: goto label_122b3c;
            case 0x122B40u: goto label_122b40;
            case 0x122B44u: goto label_122b44;
            case 0x122B48u: goto label_122b48;
            case 0x122B4Cu: goto label_122b4c;
            case 0x122B50u: goto label_122b50;
            case 0x122B54u: goto label_122b54;
            case 0x122B58u: goto label_122b58;
            case 0x122B5Cu: goto label_122b5c;
            case 0x122B60u: goto label_122b60;
            case 0x122B64u: goto label_122b64;
            case 0x122B68u: goto label_122b68;
            case 0x122B6Cu: goto label_122b6c;
            case 0x122B70u: goto label_122b70;
            case 0x122B74u: goto label_122b74;
            case 0x122B78u: goto label_122b78;
            case 0x122B7Cu: goto label_122b7c;
            case 0x122B80u: goto label_122b80;
            case 0x122B84u: goto label_122b84;
            case 0x122B88u: goto label_122b88;
            case 0x122B8Cu: goto label_122b8c;
            case 0x122B90u: goto label_122b90;
            case 0x122B94u: goto label_122b94;
            case 0x122B98u: goto label_122b98;
            case 0x122B9Cu: goto label_122b9c;
            case 0x122BA0u: goto label_122ba0;
            case 0x122BA4u: goto label_122ba4;
            case 0x122BA8u: goto label_122ba8;
            case 0x122BACu: goto label_122bac;
            case 0x122BB0u: goto label_122bb0;
            case 0x122BB4u: goto label_122bb4;
            case 0x122BB8u: goto label_122bb8;
            case 0x122BBCu: goto label_122bbc;
            case 0x122BC0u: goto label_122bc0;
            case 0x122BC4u: goto label_122bc4;
            case 0x122BC8u: goto label_122bc8;
            case 0x122BCCu: goto label_122bcc;
            case 0x122BD0u: goto label_122bd0;
            case 0x122BD4u: goto label_122bd4;
            case 0x122BD8u: goto label_122bd8;
            case 0x122BDCu: goto label_122bdc;
            case 0x122BE0u: goto label_122be0;
            case 0x122BE4u: goto label_122be4;
            case 0x122BE8u: goto label_122be8;
            case 0x122BECu: goto label_122bec;
            case 0x122BF0u: goto label_122bf0;
            case 0x122BF4u: goto label_122bf4;
            case 0x122BF8u: goto label_122bf8;
            case 0x122BFCu: goto label_122bfc;
            case 0x122C00u: goto label_122c00;
            case 0x122C04u: goto label_122c04;
            case 0x122C08u: goto label_122c08;
            case 0x122C0Cu: goto label_122c0c;
            case 0x122C10u: goto label_122c10;
            case 0x122C14u: goto label_122c14;
            case 0x122C18u: goto label_122c18;
            case 0x122C1Cu: goto label_122c1c;
            case 0x122C20u: goto label_122c20;
            case 0x122C24u: goto label_122c24;
            case 0x122C28u: goto label_122c28;
            case 0x122C2Cu: goto label_122c2c;
            case 0x122C30u: goto label_122c30;
            case 0x122C34u: goto label_122c34;
            case 0x122C38u: goto label_122c38;
            case 0x122C3Cu: goto label_122c3c;
            case 0x122C40u: goto label_122c40;
            case 0x122C44u: goto label_122c44;
            case 0x122C48u: goto label_122c48;
            case 0x122C4Cu: goto label_122c4c;
            case 0x122C50u: goto label_122c50;
            case 0x122C54u: goto label_122c54;
            case 0x122C58u: goto label_122c58;
            case 0x122C5Cu: goto label_122c5c;
            case 0x122C60u: goto label_122c60;
            case 0x122C64u: goto label_122c64;
            case 0x122C68u: goto label_122c68;
            case 0x122C6Cu: goto label_122c6c;
            case 0x122C70u: goto label_122c70;
            case 0x122C74u: goto label_122c74;
            case 0x122C78u: goto label_122c78;
            case 0x122C7Cu: goto label_122c7c;
            case 0x122C80u: goto label_122c80;
            case 0x122C84u: goto label_122c84;
            case 0x122C88u: goto label_122c88;
            case 0x122C8Cu: goto label_122c8c;
            case 0x122C90u: goto label_122c90;
            case 0x122C94u: goto label_122c94;
            case 0x122C98u: goto label_122c98;
            case 0x122C9Cu: goto label_122c9c;
            case 0x122CA0u: goto label_122ca0;
            case 0x122CA4u: goto label_122ca4;
            case 0x122CA8u: goto label_122ca8;
            case 0x122CACu: goto label_122cac;
            case 0x122CB0u: goto label_122cb0;
            case 0x122CB4u: goto label_122cb4;
            case 0x122CB8u: goto label_122cb8;
            case 0x122CBCu: goto label_122cbc;
            case 0x122CC0u: goto label_122cc0;
            case 0x122CC4u: goto label_122cc4;
            case 0x122CC8u: goto label_122cc8;
            case 0x122CCCu: goto label_122ccc;
            case 0x122CD0u: goto label_122cd0;
            case 0x122CD4u: goto label_122cd4;
            case 0x122CD8u: goto label_122cd8;
            case 0x122CDCu: goto label_122cdc;
            case 0x122CE0u: goto label_122ce0;
            case 0x122CE4u: goto label_122ce4;
            case 0x122CE8u: goto label_122ce8;
            case 0x122CECu: goto label_122cec;
            case 0x122CF0u: goto label_122cf0;
            case 0x122CF4u: goto label_122cf4;
            case 0x122CF8u: goto label_122cf8;
            case 0x122CFCu: goto label_122cfc;
            case 0x122D00u: goto label_122d00;
            case 0x122D04u: goto label_122d04;
            case 0x122D08u: goto label_122d08;
            case 0x122D0Cu: goto label_122d0c;
            case 0x122D10u: goto label_122d10;
            case 0x122D14u: goto label_122d14;
            case 0x122D18u: goto label_122d18;
            case 0x122D1Cu: goto label_122d1c;
            case 0x122D20u: goto label_122d20;
            case 0x122D24u: goto label_122d24;
            case 0x122D28u: goto label_122d28;
            case 0x122D2Cu: goto label_122d2c;
            case 0x122D30u: goto label_122d30;
            case 0x122D34u: goto label_122d34;
            case 0x122D38u: goto label_122d38;
            case 0x122D3Cu: goto label_122d3c;
            case 0x122D40u: goto label_122d40;
            case 0x122D44u: goto label_122d44;
            case 0x122D48u: goto label_122d48;
            case 0x122D4Cu: goto label_122d4c;
            case 0x122D50u: goto label_122d50;
            case 0x122D54u: goto label_122d54;
            case 0x122D58u: goto label_122d58;
            case 0x122D5Cu: goto label_122d5c;
            case 0x122D60u: goto label_122d60;
            case 0x122D64u: goto label_122d64;
            case 0x122D68u: goto label_122d68;
            case 0x122D6Cu: goto label_122d6c;
            case 0x122D70u: goto label_122d70;
            case 0x122D74u: goto label_122d74;
            case 0x122D78u: goto label_122d78;
            case 0x122D7Cu: goto label_122d7c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x122C70u; }
            if (ctx->pc != 0x122C70u) { return; }
        }
    }
    ctx->pc = 0x122C70u;
label_122c70:
    // 0x122c70: 0x212182a
    ctx->pc = 0x122c70u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
label_122c74:
    // 0x122c74: 0x5460ffe0
label_122c78:
    if (ctx->pc == 0x122C78u) {
        ctx->pc = 0x122C78u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x122C7Cu;
        goto label_122c7c;
    }
    ctx->pc = 0x122C74u;
    {
        const bool branch_taken_0x122c74 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x122c74) {
            ctx->pc = 0x122C78u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x122BF8u;
            goto label_122bf8;
        }
    }
    ctx->pc = 0x122C7Cu;
label_122c7c:
    // 0x122c7c: 0x8ee40000
    ctx->pc = 0x122c7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_122c80:
    // 0x122c80: 0x27a30010
    ctx->pc = 0x122c80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 16));
label_122c84:
    // 0x122c84: 0x60382d
    ctx->pc = 0x122c84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_122c88:
    // 0x122c88: 0x282d
    ctx->pc = 0x122c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122c8c:
    // 0x122c8c: 0x8c830000
    ctx->pc = 0x122c8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_122c90:
    // 0x122c90: 0x8c620018
    ctx->pc = 0x122c90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_122c94:
    // 0x122c94: 0x40f809
label_122c98:
    if (ctx->pc == 0x122C98u) {
        ctx->pc = 0x122C98u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x122C9Cu;
        goto label_122c9c;
    }
    ctx->pc = 0x122C94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x122C9Cu);
        ctx->pc = 0x122C98u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122AF0u: goto label_122af0;
            case 0x122AF4u: goto label_122af4;
            case 0x122AF8u: goto label_122af8;
            case 0x122AFCu: goto label_122afc;
            case 0x122B00u: goto label_122b00;
            case 0x122B04u: goto label_122b04;
            case 0x122B08u: goto label_122b08;
            case 0x122B0Cu: goto label_122b0c;
            case 0x122B10u: goto label_122b10;
            case 0x122B14u: goto label_122b14;
            case 0x122B18u: goto label_122b18;
            case 0x122B1Cu: goto label_122b1c;
            case 0x122B20u: goto label_122b20;
            case 0x122B24u: goto label_122b24;
            case 0x122B28u: goto label_122b28;
            case 0x122B2Cu: goto label_122b2c;
            case 0x122B30u: goto label_122b30;
            case 0x122B34u: goto label_122b34;
            case 0x122B38u: goto label_122b38;
            case 0x122B3Cu: goto label_122b3c;
            case 0x122B40u: goto label_122b40;
            case 0x122B44u: goto label_122b44;
            case 0x122B48u: goto label_122b48;
            case 0x122B4Cu: goto label_122b4c;
            case 0x122B50u: goto label_122b50;
            case 0x122B54u: goto label_122b54;
            case 0x122B58u: goto label_122b58;
            case 0x122B5Cu: goto label_122b5c;
            case 0x122B60u: goto label_122b60;
            case 0x122B64u: goto label_122b64;
            case 0x122B68u: goto label_122b68;
            case 0x122B6Cu: goto label_122b6c;
            case 0x122B70u: goto label_122b70;
            case 0x122B74u: goto label_122b74;
            case 0x122B78u: goto label_122b78;
            case 0x122B7Cu: goto label_122b7c;
            case 0x122B80u: goto label_122b80;
            case 0x122B84u: goto label_122b84;
            case 0x122B88u: goto label_122b88;
            case 0x122B8Cu: goto label_122b8c;
            case 0x122B90u: goto label_122b90;
            case 0x122B94u: goto label_122b94;
            case 0x122B98u: goto label_122b98;
            case 0x122B9Cu: goto label_122b9c;
            case 0x122BA0u: goto label_122ba0;
            case 0x122BA4u: goto label_122ba4;
            case 0x122BA8u: goto label_122ba8;
            case 0x122BACu: goto label_122bac;
            case 0x122BB0u: goto label_122bb0;
            case 0x122BB4u: goto label_122bb4;
            case 0x122BB8u: goto label_122bb8;
            case 0x122BBCu: goto label_122bbc;
            case 0x122BC0u: goto label_122bc0;
            case 0x122BC4u: goto label_122bc4;
            case 0x122BC8u: goto label_122bc8;
            case 0x122BCCu: goto label_122bcc;
            case 0x122BD0u: goto label_122bd0;
            case 0x122BD4u: goto label_122bd4;
            case 0x122BD8u: goto label_122bd8;
            case 0x122BDCu: goto label_122bdc;
            case 0x122BE0u: goto label_122be0;
            case 0x122BE4u: goto label_122be4;
            case 0x122BE8u: goto label_122be8;
            case 0x122BECu: goto label_122bec;
            case 0x122BF0u: goto label_122bf0;
            case 0x122BF4u: goto label_122bf4;
            case 0x122BF8u: goto label_122bf8;
            case 0x122BFCu: goto label_122bfc;
            case 0x122C00u: goto label_122c00;
            case 0x122C04u: goto label_122c04;
            case 0x122C08u: goto label_122c08;
            case 0x122C0Cu: goto label_122c0c;
            case 0x122C10u: goto label_122c10;
            case 0x122C14u: goto label_122c14;
            case 0x122C18u: goto label_122c18;
            case 0x122C1Cu: goto label_122c1c;
            case 0x122C20u: goto label_122c20;
            case 0x122C24u: goto label_122c24;
            case 0x122C28u: goto label_122c28;
            case 0x122C2Cu: goto label_122c2c;
            case 0x122C30u: goto label_122c30;
            case 0x122C34u: goto label_122c34;
            case 0x122C38u: goto label_122c38;
            case 0x122C3Cu: goto label_122c3c;
            case 0x122C40u: goto label_122c40;
            case 0x122C44u: goto label_122c44;
            case 0x122C48u: goto label_122c48;
            case 0x122C4Cu: goto label_122c4c;
            case 0x122C50u: goto label_122c50;
            case 0x122C54u: goto label_122c54;
            case 0x122C58u: goto label_122c58;
            case 0x122C5Cu: goto label_122c5c;
            case 0x122C60u: goto label_122c60;
            case 0x122C64u: goto label_122c64;
            case 0x122C68u: goto label_122c68;
            case 0x122C6Cu: goto label_122c6c;
            case 0x122C70u: goto label_122c70;
            case 0x122C74u: goto label_122c74;
            case 0x122C78u: goto label_122c78;
            case 0x122C7Cu: goto label_122c7c;
            case 0x122C80u: goto label_122c80;
            case 0x122C84u: goto label_122c84;
            case 0x122C88u: goto label_122c88;
            case 0x122C8Cu: goto label_122c8c;
            case 0x122C90u: goto label_122c90;
            case 0x122C94u: goto label_122c94;
            case 0x122C98u: goto label_122c98;
            case 0x122C9Cu: goto label_122c9c;
            case 0x122CA0u: goto label_122ca0;
            case 0x122CA4u: goto label_122ca4;
            case 0x122CA8u: goto label_122ca8;
            case 0x122CACu: goto label_122cac;
            case 0x122CB0u: goto label_122cb0;
            case 0x122CB4u: goto label_122cb4;
            case 0x122CB8u: goto label_122cb8;
            case 0x122CBCu: goto label_122cbc;
            case 0x122CC0u: goto label_122cc0;
            case 0x122CC4u: goto label_122cc4;
            case 0x122CC8u: goto label_122cc8;
            case 0x122CCCu: goto label_122ccc;
            case 0x122CD0u: goto label_122cd0;
            case 0x122CD4u: goto label_122cd4;
            case 0x122CD8u: goto label_122cd8;
            case 0x122CDCu: goto label_122cdc;
            case 0x122CE0u: goto label_122ce0;
            case 0x122CE4u: goto label_122ce4;
            case 0x122CE8u: goto label_122ce8;
            case 0x122CECu: goto label_122cec;
            case 0x122CF0u: goto label_122cf0;
            case 0x122CF4u: goto label_122cf4;
            case 0x122CF8u: goto label_122cf8;
            case 0x122CFCu: goto label_122cfc;
            case 0x122D00u: goto label_122d00;
            case 0x122D04u: goto label_122d04;
            case 0x122D08u: goto label_122d08;
            case 0x122D0Cu: goto label_122d0c;
            case 0x122D10u: goto label_122d10;
            case 0x122D14u: goto label_122d14;
            case 0x122D18u: goto label_122d18;
            case 0x122D1Cu: goto label_122d1c;
            case 0x122D20u: goto label_122d20;
            case 0x122D24u: goto label_122d24;
            case 0x122D28u: goto label_122d28;
            case 0x122D2Cu: goto label_122d2c;
            case 0x122D30u: goto label_122d30;
            case 0x122D34u: goto label_122d34;
            case 0x122D38u: goto label_122d38;
            case 0x122D3Cu: goto label_122d3c;
            case 0x122D40u: goto label_122d40;
            case 0x122D44u: goto label_122d44;
            case 0x122D48u: goto label_122d48;
            case 0x122D4Cu: goto label_122d4c;
            case 0x122D50u: goto label_122d50;
            case 0x122D54u: goto label_122d54;
            case 0x122D58u: goto label_122d58;
            case 0x122D5Cu: goto label_122d5c;
            case 0x122D60u: goto label_122d60;
            case 0x122D64u: goto label_122d64;
            case 0x122D68u: goto label_122d68;
            case 0x122D6Cu: goto label_122d6c;
            case 0x122D70u: goto label_122d70;
            case 0x122D74u: goto label_122d74;
            case 0x122D78u: goto label_122d78;
            case 0x122D7Cu: goto label_122d7c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x122C9Cu; }
            if (ctx->pc != 0x122C9Cu) { return; }
        }
    }
    ctx->pc = 0x122C9Cu;
label_122c9c:
    // 0x122c9c: 0x8fa30014
    ctx->pc = 0x122c9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_122ca0:
    // 0x122ca0: 0x14600009
label_122ca4:
    if (ctx->pc == 0x122CA4u) {
        ctx->pc = 0x122CA4u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x122CA8u;
        goto label_122ca8;
    }
    ctx->pc = 0x122CA0u;
    {
        const bool branch_taken_0x122ca0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x122CA4u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x122ca0) {
            ctx->pc = 0x122CC8u;
            goto label_122cc8;
        }
    }
    ctx->pc = 0x122CA8u;
label_122ca8:
    // 0x122ca8: 0x0
    ctx->pc = 0x122ca8u;
    // NOP
label_122cac:
    // 0x122cac: 0x0
    ctx->pc = 0x122cacu;
    // NOP
label_122cb0:
    // 0x122cb0: 0x0
    ctx->pc = 0x122cb0u;
    // NOP
label_122cb4:
    // 0x122cb4: 0x0
    ctx->pc = 0x122cb4u;
    // NOP
label_122cb8:
    // 0x122cb8: 0x0
    ctx->pc = 0x122cb8u;
    // NOP
label_122cbc:
    // 0x122cbc: 0x1000fffa
label_122cc0:
    if (ctx->pc == 0x122CC0u) {
        ctx->pc = 0x122CC4u;
        goto label_122cc4;
    }
    ctx->pc = 0x122CBCu;
    {
        const bool branch_taken_0x122cbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x122cbc) {
            ctx->pc = 0x122CA8u;
            goto label_122ca8;
        }
    }
    ctx->pc = 0x122CC4u;
label_122cc4:
    // 0x122cc4: 0x0
    ctx->pc = 0x122cc4u;
    // NOP
label_122cc8:
    // 0x122cc8: 0x27a30010
    ctx->pc = 0x122cc8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 16));
label_122ccc:
    // 0x122ccc: 0x8fa20024
    ctx->pc = 0x122cccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_122cd0:
    // 0x122cd0: 0x60302d
    ctx->pc = 0x122cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_122cd4:
    // 0x122cd4: 0xacf30000
    ctx->pc = 0x122cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 19));
label_122cd8:
    // 0x122cd8: 0x24050001
    ctx->pc = 0x122cd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_122cdc:
    // 0x122cdc: 0x8c440000
    ctx->pc = 0x122cdcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_122ce0:
    // 0x122ce0: 0x26d6ffff
    ctx->pc = 0x122ce0u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 4294967295));
label_122ce4:
    // 0x122ce4: 0x8ea20000
    ctx->pc = 0x122ce4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_122ce8:
    // 0x122ce8: 0x8c830000
    ctx->pc = 0x122ce8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_122cec:
    // 0x122cec: 0xace20004
    ctx->pc = 0x122cecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_122cf0:
    // 0x122cf0: 0x8c680020
    ctx->pc = 0x122cf0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_122cf4:
    // 0x122cf4: 0x8e830020
    ctx->pc = 0x122cf4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_122cf8:
    // 0x122cf8: 0xacf2000c
    ctx->pc = 0x122cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 18));
label_122cfc:
    // 0x122cfc: 0x100f809
label_122d00:
    if (ctx->pc == 0x122D00u) {
        ctx->pc = 0x122D00u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x122D04u;
        goto label_122d04;
    }
    ctx->pc = 0x122CFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x122D04u);
        ctx->pc = 0x122D00u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122AF0u: goto label_122af0;
            case 0x122AF4u: goto label_122af4;
            case 0x122AF8u: goto label_122af8;
            case 0x122AFCu: goto label_122afc;
            case 0x122B00u: goto label_122b00;
            case 0x122B04u: goto label_122b04;
            case 0x122B08u: goto label_122b08;
            case 0x122B0Cu: goto label_122b0c;
            case 0x122B10u: goto label_122b10;
            case 0x122B14u: goto label_122b14;
            case 0x122B18u: goto label_122b18;
            case 0x122B1Cu: goto label_122b1c;
            case 0x122B20u: goto label_122b20;
            case 0x122B24u: goto label_122b24;
            case 0x122B28u: goto label_122b28;
            case 0x122B2Cu: goto label_122b2c;
            case 0x122B30u: goto label_122b30;
            case 0x122B34u: goto label_122b34;
            case 0x122B38u: goto label_122b38;
            case 0x122B3Cu: goto label_122b3c;
            case 0x122B40u: goto label_122b40;
            case 0x122B44u: goto label_122b44;
            case 0x122B48u: goto label_122b48;
            case 0x122B4Cu: goto label_122b4c;
            case 0x122B50u: goto label_122b50;
            case 0x122B54u: goto label_122b54;
            case 0x122B58u: goto label_122b58;
            case 0x122B5Cu: goto label_122b5c;
            case 0x122B60u: goto label_122b60;
            case 0x122B64u: goto label_122b64;
            case 0x122B68u: goto label_122b68;
            case 0x122B6Cu: goto label_122b6c;
            case 0x122B70u: goto label_122b70;
            case 0x122B74u: goto label_122b74;
            case 0x122B78u: goto label_122b78;
            case 0x122B7Cu: goto label_122b7c;
            case 0x122B80u: goto label_122b80;
            case 0x122B84u: goto label_122b84;
            case 0x122B88u: goto label_122b88;
            case 0x122B8Cu: goto label_122b8c;
            case 0x122B90u: goto label_122b90;
            case 0x122B94u: goto label_122b94;
            case 0x122B98u: goto label_122b98;
            case 0x122B9Cu: goto label_122b9c;
            case 0x122BA0u: goto label_122ba0;
            case 0x122BA4u: goto label_122ba4;
            case 0x122BA8u: goto label_122ba8;
            case 0x122BACu: goto label_122bac;
            case 0x122BB0u: goto label_122bb0;
            case 0x122BB4u: goto label_122bb4;
            case 0x122BB8u: goto label_122bb8;
            case 0x122BBCu: goto label_122bbc;
            case 0x122BC0u: goto label_122bc0;
            case 0x122BC4u: goto label_122bc4;
            case 0x122BC8u: goto label_122bc8;
            case 0x122BCCu: goto label_122bcc;
            case 0x122BD0u: goto label_122bd0;
            case 0x122BD4u: goto label_122bd4;
            case 0x122BD8u: goto label_122bd8;
            case 0x122BDCu: goto label_122bdc;
            case 0x122BE0u: goto label_122be0;
            case 0x122BE4u: goto label_122be4;
            case 0x122BE8u: goto label_122be8;
            case 0x122BECu: goto label_122bec;
            case 0x122BF0u: goto label_122bf0;
            case 0x122BF4u: goto label_122bf4;
            case 0x122BF8u: goto label_122bf8;
            case 0x122BFCu: goto label_122bfc;
            case 0x122C00u: goto label_122c00;
            case 0x122C04u: goto label_122c04;
            case 0x122C08u: goto label_122c08;
            case 0x122C0Cu: goto label_122c0c;
            case 0x122C10u: goto label_122c10;
            case 0x122C14u: goto label_122c14;
            case 0x122C18u: goto label_122c18;
            case 0x122C1Cu: goto label_122c1c;
            case 0x122C20u: goto label_122c20;
            case 0x122C24u: goto label_122c24;
            case 0x122C28u: goto label_122c28;
            case 0x122C2Cu: goto label_122c2c;
            case 0x122C30u: goto label_122c30;
            case 0x122C34u: goto label_122c34;
            case 0x122C38u: goto label_122c38;
            case 0x122C3Cu: goto label_122c3c;
            case 0x122C40u: goto label_122c40;
            case 0x122C44u: goto label_122c44;
            case 0x122C48u: goto label_122c48;
            case 0x122C4Cu: goto label_122c4c;
            case 0x122C50u: goto label_122c50;
            case 0x122C54u: goto label_122c54;
            case 0x122C58u: goto label_122c58;
            case 0x122C5Cu: goto label_122c5c;
            case 0x122C60u: goto label_122c60;
            case 0x122C64u: goto label_122c64;
            case 0x122C68u: goto label_122c68;
            case 0x122C6Cu: goto label_122c6c;
            case 0x122C70u: goto label_122c70;
            case 0x122C74u: goto label_122c74;
            case 0x122C78u: goto label_122c78;
            case 0x122C7Cu: goto label_122c7c;
            case 0x122C80u: goto label_122c80;
            case 0x122C84u: goto label_122c84;
            case 0x122C88u: goto label_122c88;
            case 0x122C8Cu: goto label_122c8c;
            case 0x122C90u: goto label_122c90;
            case 0x122C94u: goto label_122c94;
            case 0x122C98u: goto label_122c98;
            case 0x122C9Cu: goto label_122c9c;
            case 0x122CA0u: goto label_122ca0;
            case 0x122CA4u: goto label_122ca4;
            case 0x122CA8u: goto label_122ca8;
            case 0x122CACu: goto label_122cac;
            case 0x122CB0u: goto label_122cb0;
            case 0x122CB4u: goto label_122cb4;
            case 0x122CB8u: goto label_122cb8;
            case 0x122CBCu: goto label_122cbc;
            case 0x122CC0u: goto label_122cc0;
            case 0x122CC4u: goto label_122cc4;
            case 0x122CC8u: goto label_122cc8;
            case 0x122CCCu: goto label_122ccc;
            case 0x122CD0u: goto label_122cd0;
            case 0x122CD4u: goto label_122cd4;
            case 0x122CD8u: goto label_122cd8;
            case 0x122CDCu: goto label_122cdc;
            case 0x122CE0u: goto label_122ce0;
            case 0x122CE4u: goto label_122ce4;
            case 0x122CE8u: goto label_122ce8;
            case 0x122CECu: goto label_122cec;
            case 0x122CF0u: goto label_122cf0;
            case 0x122CF4u: goto label_122cf4;
            case 0x122CF8u: goto label_122cf8;
            case 0x122CFCu: goto label_122cfc;
            case 0x122D00u: goto label_122d00;
            case 0x122D04u: goto label_122d04;
            case 0x122D08u: goto label_122d08;
            case 0x122D0Cu: goto label_122d0c;
            case 0x122D10u: goto label_122d10;
            case 0x122D14u: goto label_122d14;
            case 0x122D18u: goto label_122d18;
            case 0x122D1Cu: goto label_122d1c;
            case 0x122D20u: goto label_122d20;
            case 0x122D24u: goto label_122d24;
            case 0x122D28u: goto label_122d28;
            case 0x122D2Cu: goto label_122d2c;
            case 0x122D30u: goto label_122d30;
            case 0x122D34u: goto label_122d34;
            case 0x122D38u: goto label_122d38;
            case 0x122D3Cu: goto label_122d3c;
            case 0x122D40u: goto label_122d40;
            case 0x122D44u: goto label_122d44;
            case 0x122D48u: goto label_122d48;
            case 0x122D4Cu: goto label_122d4c;
            case 0x122D50u: goto label_122d50;
            case 0x122D54u: goto label_122d54;
            case 0x122D58u: goto label_122d58;
            case 0x122D5Cu: goto label_122d5c;
            case 0x122D60u: goto label_122d60;
            case 0x122D64u: goto label_122d64;
            case 0x122D68u: goto label_122d68;
            case 0x122D6Cu: goto label_122d6c;
            case 0x122D70u: goto label_122d70;
            case 0x122D74u: goto label_122d74;
            case 0x122D78u: goto label_122d78;
            case 0x122D7Cu: goto label_122d7c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x122D04u; }
            if (ctx->pc != 0x122D04u) { return; }
        }
    }
    ctx->pc = 0x122D04u;
label_122d04:
    // 0x122d04: 0x8ea20000
    ctx->pc = 0x122d04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_122d08:
    // 0x122d08: 0x521021
    ctx->pc = 0x122d08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_122d0c:
    // 0x122d0c: 0xaea20000
    ctx->pc = 0x122d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_122d10:
    // 0x122d10: 0x8e83002c
    ctx->pc = 0x122d10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_122d14:
    // 0x122d14: 0x24630001
    ctx->pc = 0x122d14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_122d18:
    // 0x122d18: 0x16c0ffb1
label_122d1c:
    if (ctx->pc == 0x122D1Cu) {
        ctx->pc = 0x122D1Cu;
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 3));
        ctx->pc = 0x122D20u;
        goto label_122d20;
    }
    ctx->pc = 0x122D18u;
    {
        const bool branch_taken_0x122d18 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        ctx->pc = 0x122D1Cu;
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 3));
        if (branch_taken_0x122d18) {
            ctx->pc = 0x122BE0u;
            goto label_122be0;
        }
    }
    ctx->pc = 0x122D20u;
label_122d20:
    // 0x122d20: 0x8fa30020
    ctx->pc = 0x122d20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_122d24:
    // 0x122d24: 0x26f70004
    ctx->pc = 0x122d24u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4));
label_122d28:
    // 0x122d28: 0x8e82001c
    ctx->pc = 0x122d28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_122d2c:
    // 0x122d2c: 0x27de0004
    ctx->pc = 0x122d2cu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 4));
label_122d30:
    // 0x122d30: 0x24630001
    ctx->pc = 0x122d30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_122d34:
    // 0x122d34: 0xafa30020
    ctx->pc = 0x122d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_122d38:
    // 0x122d38: 0x62102a
    ctx->pc = 0x122d38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_122d3c:
    // 0x122d3c: 0x8fa3002c
    ctx->pc = 0x122d3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_122d40:
    // 0x122d40: 0x24630004
    ctx->pc = 0x122d40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
label_122d44:
    // 0x122d44: 0x1440ff86
label_122d48:
    if (ctx->pc == 0x122D48u) {
        ctx->pc = 0x122D48u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
        ctx->pc = 0x122D4Cu;
        goto label_122d4c;
    }
    ctx->pc = 0x122D44u;
    {
        const bool branch_taken_0x122d44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x122D48u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
        if (branch_taken_0x122d44) {
            ctx->pc = 0x122B60u;
            goto label_122b60;
        }
    }
    ctx->pc = 0x122D4Cu;
label_122d4c:
    // 0x122d4c: 0xdfb00030
    ctx->pc = 0x122d4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_122d50:
    // 0x122d50: 0xdfb10038
    ctx->pc = 0x122d50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_122d54:
    // 0x122d54: 0xdfb20040
    ctx->pc = 0x122d54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_122d58:
    // 0x122d58: 0xdfb30048
    ctx->pc = 0x122d58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_122d5c:
    // 0x122d5c: 0xdfb40050
    ctx->pc = 0x122d5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_122d60:
    // 0x122d60: 0xdfb50058
    ctx->pc = 0x122d60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_122d64:
    // 0x122d64: 0xdfb60060
    ctx->pc = 0x122d64u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_122d68:
    // 0x122d68: 0xdfb70068
    ctx->pc = 0x122d68u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_122d6c:
    // 0x122d6c: 0xdfbe0070
    ctx->pc = 0x122d6cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_122d70:
    // 0x122d70: 0xdfbf0078
    ctx->pc = 0x122d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_122d74:
    // 0x122d74: 0x3e00008
label_122d78:
    if (ctx->pc == 0x122D78u) {
        ctx->pc = 0x122D78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x122D7Cu;
        goto label_122d7c;
    }
    ctx->pc = 0x122D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122D78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122AF0u: goto label_122af0;
            case 0x122AF4u: goto label_122af4;
            case 0x122AF8u: goto label_122af8;
            case 0x122AFCu: goto label_122afc;
            case 0x122B00u: goto label_122b00;
            case 0x122B04u: goto label_122b04;
            case 0x122B08u: goto label_122b08;
            case 0x122B0Cu: goto label_122b0c;
            case 0x122B10u: goto label_122b10;
            case 0x122B14u: goto label_122b14;
            case 0x122B18u: goto label_122b18;
            case 0x122B1Cu: goto label_122b1c;
            case 0x122B20u: goto label_122b20;
            case 0x122B24u: goto label_122b24;
            case 0x122B28u: goto label_122b28;
            case 0x122B2Cu: goto label_122b2c;
            case 0x122B30u: goto label_122b30;
            case 0x122B34u: goto label_122b34;
            case 0x122B38u: goto label_122b38;
            case 0x122B3Cu: goto label_122b3c;
            case 0x122B40u: goto label_122b40;
            case 0x122B44u: goto label_122b44;
            case 0x122B48u: goto label_122b48;
            case 0x122B4Cu: goto label_122b4c;
            case 0x122B50u: goto label_122b50;
            case 0x122B54u: goto label_122b54;
            case 0x122B58u: goto label_122b58;
            case 0x122B5Cu: goto label_122b5c;
            case 0x122B60u: goto label_122b60;
            case 0x122B64u: goto label_122b64;
            case 0x122B68u: goto label_122b68;
            case 0x122B6Cu: goto label_122b6c;
            case 0x122B70u: goto label_122b70;
            case 0x122B74u: goto label_122b74;
            case 0x122B78u: goto label_122b78;
            case 0x122B7Cu: goto label_122b7c;
            case 0x122B80u: goto label_122b80;
            case 0x122B84u: goto label_122b84;
            case 0x122B88u: goto label_122b88;
            case 0x122B8Cu: goto label_122b8c;
            case 0x122B90u: goto label_122b90;
            case 0x122B94u: goto label_122b94;
            case 0x122B98u: goto label_122b98;
            case 0x122B9Cu: goto label_122b9c;
            case 0x122BA0u: goto label_122ba0;
            case 0x122BA4u: goto label_122ba4;
            case 0x122BA8u: goto label_122ba8;
            case 0x122BACu: goto label_122bac;
            case 0x122BB0u: goto label_122bb0;
            case 0x122BB4u: goto label_122bb4;
            case 0x122BB8u: goto label_122bb8;
            case 0x122BBCu: goto label_122bbc;
            case 0x122BC0u: goto label_122bc0;
            case 0x122BC4u: goto label_122bc4;
            case 0x122BC8u: goto label_122bc8;
            case 0x122BCCu: goto label_122bcc;
            case 0x122BD0u: goto label_122bd0;
            case 0x122BD4u: goto label_122bd4;
            case 0x122BD8u: goto label_122bd8;
            case 0x122BDCu: goto label_122bdc;
            case 0x122BE0u: goto label_122be0;
            case 0x122BE4u: goto label_122be4;
            case 0x122BE8u: goto label_122be8;
            case 0x122BECu: goto label_122bec;
            case 0x122BF0u: goto label_122bf0;
            case 0x122BF4u: goto label_122bf4;
            case 0x122BF8u: goto label_122bf8;
            case 0x122BFCu: goto label_122bfc;
            case 0x122C00u: goto label_122c00;
            case 0x122C04u: goto label_122c04;
            case 0x122C08u: goto label_122c08;
            case 0x122C0Cu: goto label_122c0c;
            case 0x122C10u: goto label_122c10;
            case 0x122C14u: goto label_122c14;
            case 0x122C18u: goto label_122c18;
            case 0x122C1Cu: goto label_122c1c;
            case 0x122C20u: goto label_122c20;
            case 0x122C24u: goto label_122c24;
            case 0x122C28u: goto label_122c28;
            case 0x122C2Cu: goto label_122c2c;
            case 0x122C30u: goto label_122c30;
            case 0x122C34u: goto label_122c34;
            case 0x122C38u: goto label_122c38;
            case 0x122C3Cu: goto label_122c3c;
            case 0x122C40u: goto label_122c40;
            case 0x122C44u: goto label_122c44;
            case 0x122C48u: goto label_122c48;
            case 0x122C4Cu: goto label_122c4c;
            case 0x122C50u: goto label_122c50;
            case 0x122C54u: goto label_122c54;
            case 0x122C58u: goto label_122c58;
            case 0x122C5Cu: goto label_122c5c;
            case 0x122C60u: goto label_122c60;
            case 0x122C64u: goto label_122c64;
            case 0x122C68u: goto label_122c68;
            case 0x122C6Cu: goto label_122c6c;
            case 0x122C70u: goto label_122c70;
            case 0x122C74u: goto label_122c74;
            case 0x122C78u: goto label_122c78;
            case 0x122C7Cu: goto label_122c7c;
            case 0x122C80u: goto label_122c80;
            case 0x122C84u: goto label_122c84;
            case 0x122C88u: goto label_122c88;
            case 0x122C8Cu: goto label_122c8c;
            case 0x122C90u: goto label_122c90;
            case 0x122C94u: goto label_122c94;
            case 0x122C98u: goto label_122c98;
            case 0x122C9Cu: goto label_122c9c;
            case 0x122CA0u: goto label_122ca0;
            case 0x122CA4u: goto label_122ca4;
            case 0x122CA8u: goto label_122ca8;
            case 0x122CACu: goto label_122cac;
            case 0x122CB0u: goto label_122cb0;
            case 0x122CB4u: goto label_122cb4;
            case 0x122CB8u: goto label_122cb8;
            case 0x122CBCu: goto label_122cbc;
            case 0x122CC0u: goto label_122cc0;
            case 0x122CC4u: goto label_122cc4;
            case 0x122CC8u: goto label_122cc8;
            case 0x122CCCu: goto label_122ccc;
            case 0x122CD0u: goto label_122cd0;
            case 0x122CD4u: goto label_122cd4;
            case 0x122CD8u: goto label_122cd8;
            case 0x122CDCu: goto label_122cdc;
            case 0x122CE0u: goto label_122ce0;
            case 0x122CE4u: goto label_122ce4;
            case 0x122CE8u: goto label_122ce8;
            case 0x122CECu: goto label_122cec;
            case 0x122CF0u: goto label_122cf0;
            case 0x122CF4u: goto label_122cf4;
            case 0x122CF8u: goto label_122cf8;
            case 0x122CFCu: goto label_122cfc;
            case 0x122D00u: goto label_122d00;
            case 0x122D04u: goto label_122d04;
            case 0x122D08u: goto label_122d08;
            case 0x122D0Cu: goto label_122d0c;
            case 0x122D10u: goto label_122d10;
            case 0x122D14u: goto label_122d14;
            case 0x122D18u: goto label_122d18;
            case 0x122D1Cu: goto label_122d1c;
            case 0x122D20u: goto label_122d20;
            case 0x122D24u: goto label_122d24;
            case 0x122D28u: goto label_122d28;
            case 0x122D2Cu: goto label_122d2c;
            case 0x122D30u: goto label_122d30;
            case 0x122D34u: goto label_122d34;
            case 0x122D38u: goto label_122d38;
            case 0x122D3Cu: goto label_122d3c;
            case 0x122D40u: goto label_122d40;
            case 0x122D44u: goto label_122d44;
            case 0x122D48u: goto label_122d48;
            case 0x122D4Cu: goto label_122d4c;
            case 0x122D50u: goto label_122d50;
            case 0x122D54u: goto label_122d54;
            case 0x122D58u: goto label_122d58;
            case 0x122D5Cu: goto label_122d5c;
            case 0x122D60u: goto label_122d60;
            case 0x122D64u: goto label_122d64;
            case 0x122D68u: goto label_122d68;
            case 0x122D6Cu: goto label_122d6c;
            case 0x122D70u: goto label_122d70;
            case 0x122D74u: goto label_122d74;
            case 0x122D78u: goto label_122d78;
            case 0x122D7Cu: goto label_122d7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122D7Cu;
label_122d7c:
    // 0x122d7c: 0x0
    ctx->pc = 0x122d7cu;
    // NOP
}
