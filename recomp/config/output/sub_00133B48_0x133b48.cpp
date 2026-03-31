#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00133B48
// Address: 0x133b48 - 0x133fe0
void sub_00133B48_0x133b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x133b48u;

label_133b48:
    // 0x133b48: 0x27bdffc0
    ctx->pc = 0x133b48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_133b4c:
    // 0x133b4c: 0xffb00010
    ctx->pc = 0x133b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_133b50:
    // 0x133b50: 0x80802d
    ctx->pc = 0x133b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_133b54:
    // 0x133b54: 0xffb10018
    ctx->pc = 0x133b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_133b58:
    // 0x133b58: 0x882d
    ctx->pc = 0x133b58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133b5c:
    // 0x133b5c: 0xffb20020
    ctx->pc = 0x133b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_133b60:
    // 0x133b60: 0xffb30028
    ctx->pc = 0x133b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_133b64:
    // 0x133b64: 0xffbf0030
    ctx->pc = 0x133b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_133b68:
    // 0x133b68: 0xc04b5ea
label_133b6c:
    if (ctx->pc == 0x133B6Cu) {
        ctx->pc = 0x133B6Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x133B70u;
        goto label_133b70;
    }
    ctx->pc = 0x133B68u;
    SET_GPR_U32(ctx, 31, 0x133B70u);
    ctx->pc = 0x133B6Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x12D7A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D7A8_0x12d7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133B70u; }
    }
    if (ctx->pc != 0x133B70u) { return; }
    ctx->pc = 0x133B70u;
label_133b70:
    // 0x133b70: 0x40982d
    ctx->pc = 0x133b70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133b74:
    // 0x133b74: 0x3a0902d
    ctx->pc = 0x133b74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_133b78:
    // 0x133b78: 0x8e040004
    ctx->pc = 0x133b78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_133b7c:
    // 0x133b7c: 0x220282d
    ctx->pc = 0x133b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133b80:
    // 0x133b80: 0xc04b654
label_133b84:
    if (ctx->pc == 0x133B84u) {
        ctx->pc = 0x133B84u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x133B88u;
        goto label_133b88;
    }
    ctx->pc = 0x133B80u;
    SET_GPR_U32(ctx, 31, 0x133B88u);
    ctx->pc = 0x133B84u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x12D950u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D950_0x12d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133B88u; }
    }
    if (ctx->pc != 0x133B88u) { return; }
    ctx->pc = 0x133B88u;
label_133b88:
    // 0x133b88: 0x2a230002
    ctx->pc = 0x133b88u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 2));
label_133b8c:
    // 0x133b8c: 0xae420000
    ctx->pc = 0x133b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_133b90:
    // 0x133b90: 0x1460fff9
label_133b94:
    if (ctx->pc == 0x133B94u) {
        ctx->pc = 0x133B94u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x133B98u;
        goto label_133b98;
    }
    ctx->pc = 0x133B90u;
    {
        const bool branch_taken_0x133b90 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x133B94u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
        if (branch_taken_0x133b90) {
            ctx->pc = 0x133B78u;
            goto label_133b78;
        }
    }
    ctx->pc = 0x133B98u;
label_133b98:
    // 0x133b98: 0x24020001
    ctx->pc = 0x133b98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_133b9c:
    // 0x133b9c: 0x16620020
label_133ba0:
    if (ctx->pc == 0x133BA0u) {
        ctx->pc = 0x133BA0u;
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
        ctx->pc = 0x133BA4u;
        goto label_133ba4;
    }
    ctx->pc = 0x133B9Cu;
    {
        const bool branch_taken_0x133b9c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x133BA0u;
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
        if (branch_taken_0x133b9c) {
            ctx->pc = 0x133C20u;
            goto label_133c20;
        }
    }
    ctx->pc = 0x133BA4u;
label_133ba4:
    // 0x133ba4: 0x2404ff80
    ctx->pc = 0x133ba4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967168));
label_133ba8:
    // 0x133ba8: 0x14c40009
label_133bac:
    if (ctx->pc == 0x133BACu) {
        ctx->pc = 0x133BACu;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
        ctx->pc = 0x133BB0u;
        goto label_133bb0;
    }
    ctx->pc = 0x133BA8u;
    {
        const bool branch_taken_0x133ba8 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 4));
        ctx->pc = 0x133BACu;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
        if (branch_taken_0x133ba8) {
            ctx->pc = 0x133BD0u;
            goto label_133bd0;
        }
    }
    ctx->pc = 0x133BB0u;
label_133bb0:
    // 0x133bb0: 0x8fa20000
    ctx->pc = 0x133bb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_133bb4:
    // 0x133bb4: 0x1446000c
label_133bb8:
    if (ctx->pc == 0x133BB8u) {
        ctx->pc = 0x133BB8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x133BBCu;
        goto label_133bbc;
    }
    ctx->pc = 0x133BB4u;
    {
        const bool branch_taken_0x133bb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 6));
        ctx->pc = 0x133BB8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        if (branch_taken_0x133bb4) {
            ctx->pc = 0x133BE8u;
            goto label_133be8;
        }
    }
    ctx->pc = 0x133BBCu;
label_133bbc:
    // 0x133bbc: 0x282d
    ctx->pc = 0x133bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133bc0:
    // 0x133bc0: 0xc04b204
label_133bc4:
    if (ctx->pc == 0x133BC4u) {
        ctx->pc = 0x133BC4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133BC8u;
        goto label_133bc8;
    }
    ctx->pc = 0x133BC0u;
    SET_GPR_U32(ctx, 31, 0x133BC8u);
    ctx->pc = 0x133BC4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12C810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C810_0x12c810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133BC8u; }
    }
    if (ctx->pc != 0x133BC8u) { return; }
    ctx->pc = 0x133BC8u;
label_133bc8:
    // 0x133bc8: 0x1000004b
label_133bcc:
    if (ctx->pc == 0x133BCCu) {
        ctx->pc = 0x133BCCu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x133BD0u;
        goto label_133bd0;
    }
    ctx->pc = 0x133BC8u;
    {
        const bool branch_taken_0x133bc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x133BCCu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x133bc8) {
            ctx->pc = 0x133CF8u;
            goto label_133cf8;
        }
    }
    ctx->pc = 0x133BD0u;
label_133bd0:
    // 0x133bd0: 0x8fa20000
    ctx->pc = 0x133bd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_133bd4:
    // 0x133bd4: 0x5444000a
label_133bd8:
    if (ctx->pc == 0x133BD8u) {
        ctx->pc = 0x133BD8u;
        SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x133BDCu;
        goto label_133bdc;
    }
    ctx->pc = 0x133BD4u;
    {
        const bool branch_taken_0x133bd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x133bd4) {
            ctx->pc = 0x133BD8u;
            SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 16));
            ctx->pc = 0x133C00u;
            goto label_133c00;
        }
    }
    ctx->pc = 0x133BDCu;
label_133bdc:
    // 0x133bdc: 0x10000003
label_133be0:
    if (ctx->pc == 0x133BE0u) {
        ctx->pc = 0x133BE0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x133BE4u;
        goto label_133be4;
    }
    ctx->pc = 0x133BDCu;
    {
        const bool branch_taken_0x133bdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x133BE0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        if (branch_taken_0x133bdc) {
            ctx->pc = 0x133BECu;
            goto label_133bec;
        }
    }
    ctx->pc = 0x133BE4u;
label_133be4:
    // 0x133be4: 0x0
    ctx->pc = 0x133be4u;
    // NOP
label_133be8:
    // 0x133be8: 0x40302d
    ctx->pc = 0x133be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133bec:
    // 0x133bec: 0xc04b204
label_133bf0:
    if (ctx->pc == 0x133BF0u) {
        ctx->pc = 0x133BF0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133BF4u;
        goto label_133bf4;
    }
    ctx->pc = 0x133BECu;
    SET_GPR_U32(ctx, 31, 0x133BF4u);
    ctx->pc = 0x133BF0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12C810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C810_0x12c810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133BF4u; }
    }
    if (ctx->pc != 0x133BF4u) { return; }
    ctx->pc = 0x133BF4u;
label_133bf4:
    // 0x133bf4: 0x10000040
label_133bf8:
    if (ctx->pc == 0x133BF8u) {
        ctx->pc = 0x133BF8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x133BFCu;
        goto label_133bfc;
    }
    ctx->pc = 0x133BF4u;
    {
        const bool branch_taken_0x133bf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x133BF8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x133bf4) {
            ctx->pc = 0x133CF8u;
            goto label_133cf8;
        }
    }
    ctx->pc = 0x133BFCu;
label_133bfc:
    // 0x133bfc: 0x0
    ctx->pc = 0x133bfcu;
    // NOP
label_133c00:
    // 0x133c00: 0x8e04000c
    ctx->pc = 0x133c00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_133c04:
    // 0x133c04: 0x63403
    ctx->pc = 0x133c04u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
label_133c08:
    // 0x133c08: 0x282d
    ctx->pc = 0x133c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133c0c:
    // 0x133c0c: 0xc04b204
label_133c10:
    if (ctx->pc == 0x133C10u) {
        ctx->pc = 0x133C10u;
        SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x133C14u;
        goto label_133c14;
    }
    ctx->pc = 0x133C0Cu;
    SET_GPR_U32(ctx, 31, 0x133C14u);
    ctx->pc = 0x133C10u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->pc = 0x12C810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C810_0x12c810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133C14u; }
    }
    if (ctx->pc != 0x133C14u) { return; }
    ctx->pc = 0x133C14u;
label_133c14:
    // 0x133c14: 0x10000038
label_133c18:
    if (ctx->pc == 0x133C18u) {
        ctx->pc = 0x133C18u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x133C1Cu;
        goto label_133c1c;
    }
    ctx->pc = 0x133C14u;
    {
        const bool branch_taken_0x133c14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x133C18u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x133c14) {
            ctx->pc = 0x133CF8u;
            goto label_133cf8;
        }
    }
    ctx->pc = 0x133C1Cu;
label_133c1c:
    // 0x133c1c: 0x0
    ctx->pc = 0x133c1cu;
    // NOP
label_133c20:
    // 0x133c20: 0x2403ff80
    ctx->pc = 0x133c20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967168));
label_133c24:
    // 0x133c24: 0x14c30008
label_133c28:
    if (ctx->pc == 0x133C28u) {
        ctx->pc = 0x133C28u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x133C2Cu;
        goto label_133c2c;
    }
    ctx->pc = 0x133C24u;
    {
        const bool branch_taken_0x133c24 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 3));
        ctx->pc = 0x133C28u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x133c24) {
            ctx->pc = 0x133C48u;
            goto label_133c48;
        }
    }
    ctx->pc = 0x133C2Cu;
label_133c2c:
    // 0x133c2c: 0x1446000a
label_133c30:
    if (ctx->pc == 0x133C30u) {
        ctx->pc = 0x133C30u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x133C34u;
        goto label_133c34;
    }
    ctx->pc = 0x133C2Cu;
    {
        const bool branch_taken_0x133c2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 6));
        ctx->pc = 0x133C30u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        if (branch_taken_0x133c2c) {
            ctx->pc = 0x133C58u;
            goto label_133c58;
        }
    }
    ctx->pc = 0x133C34u;
label_133c34:
    // 0x133c34: 0x282d
    ctx->pc = 0x133c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133c38:
    // 0x133c38: 0xc04b204
label_133c3c:
    if (ctx->pc == 0x133C3Cu) {
        ctx->pc = 0x133C3Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967281));
        ctx->pc = 0x133C40u;
        goto label_133c40;
    }
    ctx->pc = 0x133C38u;
    SET_GPR_U32(ctx, 31, 0x133C40u);
    ctx->pc = 0x133C3Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967281));
    ctx->pc = 0x12C810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C810_0x12c810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133C40u; }
    }
    if (ctx->pc != 0x133C40u) { return; }
    ctx->pc = 0x133C40u;
label_133c40:
    // 0x133c40: 0x1000000f
label_133c44:
    if (ctx->pc == 0x133C44u) {
        ctx->pc = 0x133C44u;
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->pc = 0x133C48u;
        goto label_133c48;
    }
    ctx->pc = 0x133C40u;
    {
        const bool branch_taken_0x133c40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x133C44u;
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
        if (branch_taken_0x133c40) {
            ctx->pc = 0x133C80u;
            goto label_133c80;
        }
    }
    ctx->pc = 0x133C48u;
label_133c48:
    // 0x133c48: 0x14430009
label_133c4c:
    if (ctx->pc == 0x133C4Cu) {
        ctx->pc = 0x133C4Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x133C50u;
        goto label_133c50;
    }
    ctx->pc = 0x133C48u;
    {
        const bool branch_taken_0x133c48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x133C4Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        if (branch_taken_0x133c48) {
            ctx->pc = 0x133C70u;
            goto label_133c70;
        }
    }
    ctx->pc = 0x133C50u;
label_133c50:
    // 0x133c50: 0x10000002
label_133c54:
    if (ctx->pc == 0x133C54u) {
        ctx->pc = 0x133C58u;
        goto label_133c58;
    }
    ctx->pc = 0x133C50u;
    {
        const bool branch_taken_0x133c50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x133c50) {
            ctx->pc = 0x133C5Cu;
            goto label_133c5c;
        }
    }
    ctx->pc = 0x133C58u;
label_133c58:
    // 0x133c58: 0x40302d
    ctx->pc = 0x133c58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133c5c:
    // 0x133c5c: 0xc04b204
label_133c60:
    if (ctx->pc == 0x133C60u) {
        ctx->pc = 0x133C60u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133C64u;
        goto label_133c64;
    }
    ctx->pc = 0x133C5Cu;
    SET_GPR_U32(ctx, 31, 0x133C64u);
    ctx->pc = 0x133C60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12C810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C810_0x12c810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133C64u; }
    }
    if (ctx->pc != 0x133C64u) { return; }
    ctx->pc = 0x133C64u;
label_133c64:
    // 0x133c64: 0x10000006
label_133c68:
    if (ctx->pc == 0x133C68u) {
        ctx->pc = 0x133C68u;
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->pc = 0x133C6Cu;
        goto label_133c6c;
    }
    ctx->pc = 0x133C64u;
    {
        const bool branch_taken_0x133c64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x133C68u;
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
        if (branch_taken_0x133c64) {
            ctx->pc = 0x133C80u;
            goto label_133c80;
        }
    }
    ctx->pc = 0x133C6Cu;
label_133c6c:
    // 0x133c6c: 0x0
    ctx->pc = 0x133c6cu;
    // NOP
label_133c70:
    // 0x133c70: 0xc23021
    ctx->pc = 0x133c70u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_133c74:
    // 0x133c74: 0xc04b204
label_133c78:
    if (ctx->pc == 0x133C78u) {
        ctx->pc = 0x133C78u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133C7Cu;
        goto label_133c7c;
    }
    ctx->pc = 0x133C74u;
    SET_GPR_U32(ctx, 31, 0x133C7Cu);
    ctx->pc = 0x133C78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12C810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C810_0x12c810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133C7Cu; }
    }
    if (ctx->pc != 0x133C7Cu) { return; }
    ctx->pc = 0x133C7Cu;
label_133c7c:
    // 0x133c7c: 0x86060044
    ctx->pc = 0x133c7cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
label_133c80:
    // 0x133c80: 0x2404ff80
    ctx->pc = 0x133c80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967168));
label_133c84:
    // 0x133c84: 0x14c4000a
label_133c88:
    if (ctx->pc == 0x133C88u) {
        ctx->pc = 0x133C88u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->pc = 0x133C8Cu;
        goto label_133c8c;
    }
    ctx->pc = 0x133C84u;
    {
        const bool branch_taken_0x133c84 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 4));
        ctx->pc = 0x133C88u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
        if (branch_taken_0x133c84) {
            ctx->pc = 0x133CB0u;
            goto label_133cb0;
        }
    }
    ctx->pc = 0x133C8Cu;
label_133c8c:
    // 0x133c8c: 0x8fa20004
    ctx->pc = 0x133c8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_133c90:
    // 0x133c90: 0x1446000d
label_133c94:
    if (ctx->pc == 0x133C94u) {
        ctx->pc = 0x133C94u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x133C98u;
        goto label_133c98;
    }
    ctx->pc = 0x133C90u;
    {
        const bool branch_taken_0x133c90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 6));
        ctx->pc = 0x133C94u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        if (branch_taken_0x133c90) {
            ctx->pc = 0x133CC8u;
            goto label_133cc8;
        }
    }
    ctx->pc = 0x133C98u;
label_133c98:
    // 0x133c98: 0x24050001
    ctx->pc = 0x133c98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_133c9c:
    // 0x133c9c: 0xc04b204
label_133ca0:
    if (ctx->pc == 0x133CA0u) {
        ctx->pc = 0x133CA0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x133CA4u;
        goto label_133ca4;
    }
    ctx->pc = 0x133C9Cu;
    SET_GPR_U32(ctx, 31, 0x133CA4u);
    ctx->pc = 0x133CA0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x12C810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C810_0x12c810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133CA4u; }
    }
    if (ctx->pc != 0x133CA4u) { return; }
    ctx->pc = 0x133CA4u;
label_133ca4:
    // 0x133ca4: 0x10000014
label_133ca8:
    if (ctx->pc == 0x133CA8u) {
        ctx->pc = 0x133CA8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x133CACu;
        goto label_133cac;
    }
    ctx->pc = 0x133CA4u;
    {
        const bool branch_taken_0x133ca4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x133CA8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x133ca4) {
            ctx->pc = 0x133CF8u;
            goto label_133cf8;
        }
    }
    ctx->pc = 0x133CACu;
label_133cac:
    // 0x133cac: 0x0
    ctx->pc = 0x133cacu;
    // NOP
label_133cb0:
    // 0x133cb0: 0x8fa20004
    ctx->pc = 0x133cb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_133cb4:
    // 0x133cb4: 0x5444000a
label_133cb8:
    if (ctx->pc == 0x133CB8u) {
        ctx->pc = 0x133CB8u;
        SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x133CBCu;
        goto label_133cbc;
    }
    ctx->pc = 0x133CB4u;
    {
        const bool branch_taken_0x133cb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x133cb4) {
            ctx->pc = 0x133CB8u;
            SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 16));
            ctx->pc = 0x133CE0u;
            goto label_133ce0;
        }
    }
    ctx->pc = 0x133CBCu;
label_133cbc:
    // 0x133cbc: 0x10000003
label_133cc0:
    if (ctx->pc == 0x133CC0u) {
        ctx->pc = 0x133CC0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x133CC4u;
        goto label_133cc4;
    }
    ctx->pc = 0x133CBCu;
    {
        const bool branch_taken_0x133cbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x133CC0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        if (branch_taken_0x133cbc) {
            ctx->pc = 0x133CCCu;
            goto label_133ccc;
        }
    }
    ctx->pc = 0x133CC4u;
label_133cc4:
    // 0x133cc4: 0x0
    ctx->pc = 0x133cc4u;
    // NOP
label_133cc8:
    // 0x133cc8: 0x40302d
    ctx->pc = 0x133cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133ccc:
    // 0x133ccc: 0xc04b204
label_133cd0:
    if (ctx->pc == 0x133CD0u) {
        ctx->pc = 0x133CD0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x133CD4u;
        goto label_133cd4;
    }
    ctx->pc = 0x133CCCu;
    SET_GPR_U32(ctx, 31, 0x133CD4u);
    ctx->pc = 0x133CD0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x12C810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C810_0x12c810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133CD4u; }
    }
    if (ctx->pc != 0x133CD4u) { return; }
    ctx->pc = 0x133CD4u;
label_133cd4:
    // 0x133cd4: 0x10000008
label_133cd8:
    if (ctx->pc == 0x133CD8u) {
        ctx->pc = 0x133CD8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x133CDCu;
        goto label_133cdc;
    }
    ctx->pc = 0x133CD4u;
    {
        const bool branch_taken_0x133cd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x133CD8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x133cd4) {
            ctx->pc = 0x133CF8u;
            goto label_133cf8;
        }
    }
    ctx->pc = 0x133CDCu;
label_133cdc:
    // 0x133cdc: 0x0
    ctx->pc = 0x133cdcu;
    // NOP
label_133ce0:
    // 0x133ce0: 0x8e04000c
    ctx->pc = 0x133ce0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_133ce4:
    // 0x133ce4: 0x63403
    ctx->pc = 0x133ce4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
label_133ce8:
    // 0x133ce8: 0x24050001
    ctx->pc = 0x133ce8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_133cec:
    // 0x133cec: 0xc04b204
label_133cf0:
    if (ctx->pc == 0x133CF0u) {
        ctx->pc = 0x133CF0u;
        SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x133CF4u;
        goto label_133cf4;
    }
    ctx->pc = 0x133CECu;
    SET_GPR_U32(ctx, 31, 0x133CF4u);
    ctx->pc = 0x133CF0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->pc = 0x12C810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C810_0x12c810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133CF4u; }
    }
    if (ctx->pc != 0x133CF4u) { return; }
    ctx->pc = 0x133CF4u;
label_133cf4:
    // 0x133cf4: 0xdfb00010
    ctx->pc = 0x133cf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_133cf8:
    // 0x133cf8: 0xdfb10018
    ctx->pc = 0x133cf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_133cfc:
    // 0x133cfc: 0xdfb20020
    ctx->pc = 0x133cfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_133d00:
    // 0x133d00: 0xdfb30028
    ctx->pc = 0x133d00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_133d04:
    // 0x133d04: 0xdfbf0030
    ctx->pc = 0x133d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_133d08:
    // 0x133d08: 0x3e00008
label_133d0c:
    if (ctx->pc == 0x133D0Cu) {
        ctx->pc = 0x133D0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x133D10u;
        goto label_133d10;
    }
    ctx->pc = 0x133D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133D0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133B48u: goto label_133b48;
            case 0x133B4Cu: goto label_133b4c;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B58u: goto label_133b58;
            case 0x133B5Cu: goto label_133b5c;
            case 0x133B60u: goto label_133b60;
            case 0x133B64u: goto label_133b64;
            case 0x133B68u: goto label_133b68;
            case 0x133B6Cu: goto label_133b6c;
            case 0x133B70u: goto label_133b70;
            case 0x133B74u: goto label_133b74;
            case 0x133B78u: goto label_133b78;
            case 0x133B7Cu: goto label_133b7c;
            case 0x133B80u: goto label_133b80;
            case 0x133B84u: goto label_133b84;
            case 0x133B88u: goto label_133b88;
            case 0x133B8Cu: goto label_133b8c;
            case 0x133B90u: goto label_133b90;
            case 0x133B94u: goto label_133b94;
            case 0x133B98u: goto label_133b98;
            case 0x133B9Cu: goto label_133b9c;
            case 0x133BA0u: goto label_133ba0;
            case 0x133BA4u: goto label_133ba4;
            case 0x133BA8u: goto label_133ba8;
            case 0x133BACu: goto label_133bac;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BB4u: goto label_133bb4;
            case 0x133BB8u: goto label_133bb8;
            case 0x133BBCu: goto label_133bbc;
            case 0x133BC0u: goto label_133bc0;
            case 0x133BC4u: goto label_133bc4;
            case 0x133BC8u: goto label_133bc8;
            case 0x133BCCu: goto label_133bcc;
            case 0x133BD0u: goto label_133bd0;
            case 0x133BD4u: goto label_133bd4;
            case 0x133BD8u: goto label_133bd8;
            case 0x133BDCu: goto label_133bdc;
            case 0x133BE0u: goto label_133be0;
            case 0x133BE4u: goto label_133be4;
            case 0x133BE8u: goto label_133be8;
            case 0x133BECu: goto label_133bec;
            case 0x133BF0u: goto label_133bf0;
            case 0x133BF4u: goto label_133bf4;
            case 0x133BF8u: goto label_133bf8;
            case 0x133BFCu: goto label_133bfc;
            case 0x133C00u: goto label_133c00;
            case 0x133C04u: goto label_133c04;
            case 0x133C08u: goto label_133c08;
            case 0x133C0Cu: goto label_133c0c;
            case 0x133C10u: goto label_133c10;
            case 0x133C14u: goto label_133c14;
            case 0x133C18u: goto label_133c18;
            case 0x133C1Cu: goto label_133c1c;
            case 0x133C20u: goto label_133c20;
            case 0x133C24u: goto label_133c24;
            case 0x133C28u: goto label_133c28;
            case 0x133C2Cu: goto label_133c2c;
            case 0x133C30u: goto label_133c30;
            case 0x133C34u: goto label_133c34;
            case 0x133C38u: goto label_133c38;
            case 0x133C3Cu: goto label_133c3c;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            case 0x133C48u: goto label_133c48;
            case 0x133C4Cu: goto label_133c4c;
            case 0x133C50u: goto label_133c50;
            case 0x133C54u: goto label_133c54;
            case 0x133C58u: goto label_133c58;
            case 0x133C5Cu: goto label_133c5c;
            case 0x133C60u: goto label_133c60;
            case 0x133C64u: goto label_133c64;
            case 0x133C68u: goto label_133c68;
            case 0x133C6Cu: goto label_133c6c;
            case 0x133C70u: goto label_133c70;
            case 0x133C74u: goto label_133c74;
            case 0x133C78u: goto label_133c78;
            case 0x133C7Cu: goto label_133c7c;
            case 0x133C80u: goto label_133c80;
            case 0x133C84u: goto label_133c84;
            case 0x133C88u: goto label_133c88;
            case 0x133C8Cu: goto label_133c8c;
            case 0x133C90u: goto label_133c90;
            case 0x133C94u: goto label_133c94;
            case 0x133C98u: goto label_133c98;
            case 0x133C9Cu: goto label_133c9c;
            case 0x133CA0u: goto label_133ca0;
            case 0x133CA4u: goto label_133ca4;
            case 0x133CA8u: goto label_133ca8;
            case 0x133CACu: goto label_133cac;
            case 0x133CB0u: goto label_133cb0;
            case 0x133CB4u: goto label_133cb4;
            case 0x133CB8u: goto label_133cb8;
            case 0x133CBCu: goto label_133cbc;
            case 0x133CC0u: goto label_133cc0;
            case 0x133CC4u: goto label_133cc4;
            case 0x133CC8u: goto label_133cc8;
            case 0x133CCCu: goto label_133ccc;
            case 0x133CD0u: goto label_133cd0;
            case 0x133CD4u: goto label_133cd4;
            case 0x133CD8u: goto label_133cd8;
            case 0x133CDCu: goto label_133cdc;
            case 0x133CE0u: goto label_133ce0;
            case 0x133CE4u: goto label_133ce4;
            case 0x133CE8u: goto label_133ce8;
            case 0x133CECu: goto label_133cec;
            case 0x133CF0u: goto label_133cf0;
            case 0x133CF4u: goto label_133cf4;
            case 0x133CF8u: goto label_133cf8;
            case 0x133CFCu: goto label_133cfc;
            case 0x133D00u: goto label_133d00;
            case 0x133D04u: goto label_133d04;
            case 0x133D08u: goto label_133d08;
            case 0x133D0Cu: goto label_133d0c;
            case 0x133D10u: goto label_133d10;
            case 0x133D14u: goto label_133d14;
            case 0x133D18u: goto label_133d18;
            case 0x133D1Cu: goto label_133d1c;
            case 0x133D20u: goto label_133d20;
            case 0x133D24u: goto label_133d24;
            case 0x133D28u: goto label_133d28;
            case 0x133D2Cu: goto label_133d2c;
            case 0x133D30u: goto label_133d30;
            case 0x133D34u: goto label_133d34;
            case 0x133D38u: goto label_133d38;
            case 0x133D3Cu: goto label_133d3c;
            case 0x133D40u: goto label_133d40;
            case 0x133D44u: goto label_133d44;
            case 0x133D48u: goto label_133d48;
            case 0x133D4Cu: goto label_133d4c;
            case 0x133D50u: goto label_133d50;
            case 0x133D54u: goto label_133d54;
            case 0x133D58u: goto label_133d58;
            case 0x133D5Cu: goto label_133d5c;
            case 0x133D60u: goto label_133d60;
            case 0x133D64u: goto label_133d64;
            case 0x133D68u: goto label_133d68;
            case 0x133D6Cu: goto label_133d6c;
            case 0x133D70u: goto label_133d70;
            case 0x133D74u: goto label_133d74;
            case 0x133D78u: goto label_133d78;
            case 0x133D7Cu: goto label_133d7c;
            case 0x133D80u: goto label_133d80;
            case 0x133D84u: goto label_133d84;
            case 0x133D88u: goto label_133d88;
            case 0x133D8Cu: goto label_133d8c;
            case 0x133D90u: goto label_133d90;
            case 0x133D94u: goto label_133d94;
            case 0x133D98u: goto label_133d98;
            case 0x133D9Cu: goto label_133d9c;
            case 0x133DA0u: goto label_133da0;
            case 0x133DA4u: goto label_133da4;
            case 0x133DA8u: goto label_133da8;
            case 0x133DACu: goto label_133dac;
            case 0x133DB0u: goto label_133db0;
            case 0x133DB4u: goto label_133db4;
            case 0x133DB8u: goto label_133db8;
            case 0x133DBCu: goto label_133dbc;
            case 0x133DC0u: goto label_133dc0;
            case 0x133DC4u: goto label_133dc4;
            case 0x133DC8u: goto label_133dc8;
            case 0x133DCCu: goto label_133dcc;
            case 0x133DD0u: goto label_133dd0;
            case 0x133DD4u: goto label_133dd4;
            case 0x133DD8u: goto label_133dd8;
            case 0x133DDCu: goto label_133ddc;
            case 0x133DE0u: goto label_133de0;
            case 0x133DE4u: goto label_133de4;
            case 0x133DE8u: goto label_133de8;
            case 0x133DECu: goto label_133dec;
            case 0x133DF0u: goto label_133df0;
            case 0x133DF4u: goto label_133df4;
            case 0x133DF8u: goto label_133df8;
            case 0x133DFCu: goto label_133dfc;
            case 0x133E00u: goto label_133e00;
            case 0x133E04u: goto label_133e04;
            case 0x133E08u: goto label_133e08;
            case 0x133E0Cu: goto label_133e0c;
            case 0x133E10u: goto label_133e10;
            case 0x133E14u: goto label_133e14;
            case 0x133E18u: goto label_133e18;
            case 0x133E1Cu: goto label_133e1c;
            case 0x133E20u: goto label_133e20;
            case 0x133E24u: goto label_133e24;
            case 0x133E28u: goto label_133e28;
            case 0x133E2Cu: goto label_133e2c;
            case 0x133E30u: goto label_133e30;
            case 0x133E34u: goto label_133e34;
            case 0x133E38u: goto label_133e38;
            case 0x133E3Cu: goto label_133e3c;
            case 0x133E40u: goto label_133e40;
            case 0x133E44u: goto label_133e44;
            case 0x133E48u: goto label_133e48;
            case 0x133E4Cu: goto label_133e4c;
            case 0x133E50u: goto label_133e50;
            case 0x133E54u: goto label_133e54;
            case 0x133E58u: goto label_133e58;
            case 0x133E5Cu: goto label_133e5c;
            case 0x133E60u: goto label_133e60;
            case 0x133E64u: goto label_133e64;
            case 0x133E68u: goto label_133e68;
            case 0x133E6Cu: goto label_133e6c;
            case 0x133E70u: goto label_133e70;
            case 0x133E74u: goto label_133e74;
            case 0x133E78u: goto label_133e78;
            case 0x133E7Cu: goto label_133e7c;
            case 0x133E80u: goto label_133e80;
            case 0x133E84u: goto label_133e84;
            case 0x133E88u: goto label_133e88;
            case 0x133E8Cu: goto label_133e8c;
            case 0x133E90u: goto label_133e90;
            case 0x133E94u: goto label_133e94;
            case 0x133E98u: goto label_133e98;
            case 0x133E9Cu: goto label_133e9c;
            case 0x133EA0u: goto label_133ea0;
            case 0x133EA4u: goto label_133ea4;
            case 0x133EA8u: goto label_133ea8;
            case 0x133EACu: goto label_133eac;
            case 0x133EB0u: goto label_133eb0;
            case 0x133EB4u: goto label_133eb4;
            case 0x133EB8u: goto label_133eb8;
            case 0x133EBCu: goto label_133ebc;
            case 0x133EC0u: goto label_133ec0;
            case 0x133EC4u: goto label_133ec4;
            case 0x133EC8u: goto label_133ec8;
            case 0x133ECCu: goto label_133ecc;
            case 0x133ED0u: goto label_133ed0;
            case 0x133ED4u: goto label_133ed4;
            case 0x133ED8u: goto label_133ed8;
            case 0x133EDCu: goto label_133edc;
            case 0x133EE0u: goto label_133ee0;
            case 0x133EE4u: goto label_133ee4;
            case 0x133EE8u: goto label_133ee8;
            case 0x133EECu: goto label_133eec;
            case 0x133EF0u: goto label_133ef0;
            case 0x133EF4u: goto label_133ef4;
            case 0x133EF8u: goto label_133ef8;
            case 0x133EFCu: goto label_133efc;
            case 0x133F00u: goto label_133f00;
            case 0x133F04u: goto label_133f04;
            case 0x133F08u: goto label_133f08;
            case 0x133F0Cu: goto label_133f0c;
            case 0x133F10u: goto label_133f10;
            case 0x133F14u: goto label_133f14;
            case 0x133F18u: goto label_133f18;
            case 0x133F1Cu: goto label_133f1c;
            case 0x133F20u: goto label_133f20;
            case 0x133F24u: goto label_133f24;
            case 0x133F28u: goto label_133f28;
            case 0x133F2Cu: goto label_133f2c;
            case 0x133F30u: goto label_133f30;
            case 0x133F34u: goto label_133f34;
            case 0x133F38u: goto label_133f38;
            case 0x133F3Cu: goto label_133f3c;
            case 0x133F40u: goto label_133f40;
            case 0x133F44u: goto label_133f44;
            case 0x133F48u: goto label_133f48;
            case 0x133F4Cu: goto label_133f4c;
            case 0x133F50u: goto label_133f50;
            case 0x133F54u: goto label_133f54;
            case 0x133F58u: goto label_133f58;
            case 0x133F5Cu: goto label_133f5c;
            case 0x133F60u: goto label_133f60;
            case 0x133F64u: goto label_133f64;
            case 0x133F68u: goto label_133f68;
            case 0x133F6Cu: goto label_133f6c;
            case 0x133F70u: goto label_133f70;
            case 0x133F74u: goto label_133f74;
            case 0x133F78u: goto label_133f78;
            case 0x133F7Cu: goto label_133f7c;
            case 0x133F80u: goto label_133f80;
            case 0x133F84u: goto label_133f84;
            case 0x133F88u: goto label_133f88;
            case 0x133F8Cu: goto label_133f8c;
            case 0x133F90u: goto label_133f90;
            case 0x133F94u: goto label_133f94;
            case 0x133F98u: goto label_133f98;
            case 0x133F9Cu: goto label_133f9c;
            case 0x133FA0u: goto label_133fa0;
            case 0x133FA4u: goto label_133fa4;
            case 0x133FA8u: goto label_133fa8;
            case 0x133FACu: goto label_133fac;
            case 0x133FB0u: goto label_133fb0;
            case 0x133FB4u: goto label_133fb4;
            case 0x133FB8u: goto label_133fb8;
            case 0x133FBCu: goto label_133fbc;
            case 0x133FC0u: goto label_133fc0;
            case 0x133FC4u: goto label_133fc4;
            case 0x133FC8u: goto label_133fc8;
            case 0x133FCCu: goto label_133fcc;
            case 0x133FD0u: goto label_133fd0;
            case 0x133FD4u: goto label_133fd4;
            case 0x133FD8u: goto label_133fd8;
            case 0x133FDCu: goto label_133fdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x133D10u;
label_133d10:
    // 0x133d10: 0x27bdff70
    ctx->pc = 0x133d10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
label_133d14:
    // 0x133d14: 0xffb40070
    ctx->pc = 0x133d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_133d18:
    // 0x133d18: 0x80a02d
    ctx->pc = 0x133d18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_133d1c:
    // 0x133d1c: 0xffb00050
    ctx->pc = 0x133d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_133d20:
    // 0x133d20: 0xffb10058
    ctx->pc = 0x133d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_133d24:
    // 0x133d24: 0xffb20060
    ctx->pc = 0x133d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_133d28:
    // 0x133d28: 0xffb30068
    ctx->pc = 0x133d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_133d2c:
    // 0x133d2c: 0xffb50078
    ctx->pc = 0x133d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_133d30:
    // 0x133d30: 0xffb60080
    ctx->pc = 0x133d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_133d34:
    // 0x133d34: 0xffbf0088
    ctx->pc = 0x133d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
label_133d38:
    // 0x133d38: 0x82820098
    ctx->pc = 0x133d38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 152)));
label_133d3c:
    // 0x133d3c: 0x8e920004
    ctx->pc = 0x133d3cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_133d40:
    // 0x133d40: 0x1040009c
label_133d44:
    if (ctx->pc == 0x133D44u) {
        ctx->pc = 0x133D44u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->pc = 0x133D48u;
        goto label_133d48;
    }
    ctx->pc = 0x133D40u;
    {
        const bool branch_taken_0x133d40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x133D44u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 20), 20)));
        if (branch_taken_0x133d40) {
            ctx->pc = 0x133FB4u;
            goto label_133fb4;
        }
    }
    ctx->pc = 0x133D48u;
label_133d48:
    // 0x133d48: 0x8e220000
    ctx->pc = 0x133d48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_133d4c:
    // 0x133d4c: 0x3c067fff
    ctx->pc = 0x133d4cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
label_133d50:
    // 0x133d50: 0xa7a00042
    ctx->pc = 0x133d50u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 66), (uint16_t)GPR_U32(ctx, 0));
label_133d54:
    // 0x133d54: 0x3a0382d
    ctx->pc = 0x133d54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_133d58:
    // 0x133d58: 0x8c430018
    ctx->pc = 0x133d58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_133d5c:
    // 0x133d5c: 0x220202d
    ctx->pc = 0x133d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133d60:
    // 0x133d60: 0x24050001
    ctx->pc = 0x133d60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_133d64:
    // 0x133d64: 0x60f809
label_133d68:
    if (ctx->pc == 0x133D68u) {
        ctx->pc = 0x133D68u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
        ctx->pc = 0x133D6Cu;
        goto label_133d6c;
    }
    ctx->pc = 0x133D64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x133D6Cu);
        ctx->pc = 0x133D68u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133B48u: goto label_133b48;
            case 0x133B4Cu: goto label_133b4c;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B58u: goto label_133b58;
            case 0x133B5Cu: goto label_133b5c;
            case 0x133B60u: goto label_133b60;
            case 0x133B64u: goto label_133b64;
            case 0x133B68u: goto label_133b68;
            case 0x133B6Cu: goto label_133b6c;
            case 0x133B70u: goto label_133b70;
            case 0x133B74u: goto label_133b74;
            case 0x133B78u: goto label_133b78;
            case 0x133B7Cu: goto label_133b7c;
            case 0x133B80u: goto label_133b80;
            case 0x133B84u: goto label_133b84;
            case 0x133B88u: goto label_133b88;
            case 0x133B8Cu: goto label_133b8c;
            case 0x133B90u: goto label_133b90;
            case 0x133B94u: goto label_133b94;
            case 0x133B98u: goto label_133b98;
            case 0x133B9Cu: goto label_133b9c;
            case 0x133BA0u: goto label_133ba0;
            case 0x133BA4u: goto label_133ba4;
            case 0x133BA8u: goto label_133ba8;
            case 0x133BACu: goto label_133bac;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BB4u: goto label_133bb4;
            case 0x133BB8u: goto label_133bb8;
            case 0x133BBCu: goto label_133bbc;
            case 0x133BC0u: goto label_133bc0;
            case 0x133BC4u: goto label_133bc4;
            case 0x133BC8u: goto label_133bc8;
            case 0x133BCCu: goto label_133bcc;
            case 0x133BD0u: goto label_133bd0;
            case 0x133BD4u: goto label_133bd4;
            case 0x133BD8u: goto label_133bd8;
            case 0x133BDCu: goto label_133bdc;
            case 0x133BE0u: goto label_133be0;
            case 0x133BE4u: goto label_133be4;
            case 0x133BE8u: goto label_133be8;
            case 0x133BECu: goto label_133bec;
            case 0x133BF0u: goto label_133bf0;
            case 0x133BF4u: goto label_133bf4;
            case 0x133BF8u: goto label_133bf8;
            case 0x133BFCu: goto label_133bfc;
            case 0x133C00u: goto label_133c00;
            case 0x133C04u: goto label_133c04;
            case 0x133C08u: goto label_133c08;
            case 0x133C0Cu: goto label_133c0c;
            case 0x133C10u: goto label_133c10;
            case 0x133C14u: goto label_133c14;
            case 0x133C18u: goto label_133c18;
            case 0x133C1Cu: goto label_133c1c;
            case 0x133C20u: goto label_133c20;
            case 0x133C24u: goto label_133c24;
            case 0x133C28u: goto label_133c28;
            case 0x133C2Cu: goto label_133c2c;
            case 0x133C30u: goto label_133c30;
            case 0x133C34u: goto label_133c34;
            case 0x133C38u: goto label_133c38;
            case 0x133C3Cu: goto label_133c3c;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            case 0x133C48u: goto label_133c48;
            case 0x133C4Cu: goto label_133c4c;
            case 0x133C50u: goto label_133c50;
            case 0x133C54u: goto label_133c54;
            case 0x133C58u: goto label_133c58;
            case 0x133C5Cu: goto label_133c5c;
            case 0x133C60u: goto label_133c60;
            case 0x133C64u: goto label_133c64;
            case 0x133C68u: goto label_133c68;
            case 0x133C6Cu: goto label_133c6c;
            case 0x133C70u: goto label_133c70;
            case 0x133C74u: goto label_133c74;
            case 0x133C78u: goto label_133c78;
            case 0x133C7Cu: goto label_133c7c;
            case 0x133C80u: goto label_133c80;
            case 0x133C84u: goto label_133c84;
            case 0x133C88u: goto label_133c88;
            case 0x133C8Cu: goto label_133c8c;
            case 0x133C90u: goto label_133c90;
            case 0x133C94u: goto label_133c94;
            case 0x133C98u: goto label_133c98;
            case 0x133C9Cu: goto label_133c9c;
            case 0x133CA0u: goto label_133ca0;
            case 0x133CA4u: goto label_133ca4;
            case 0x133CA8u: goto label_133ca8;
            case 0x133CACu: goto label_133cac;
            case 0x133CB0u: goto label_133cb0;
            case 0x133CB4u: goto label_133cb4;
            case 0x133CB8u: goto label_133cb8;
            case 0x133CBCu: goto label_133cbc;
            case 0x133CC0u: goto label_133cc0;
            case 0x133CC4u: goto label_133cc4;
            case 0x133CC8u: goto label_133cc8;
            case 0x133CCCu: goto label_133ccc;
            case 0x133CD0u: goto label_133cd0;
            case 0x133CD4u: goto label_133cd4;
            case 0x133CD8u: goto label_133cd8;
            case 0x133CDCu: goto label_133cdc;
            case 0x133CE0u: goto label_133ce0;
            case 0x133CE4u: goto label_133ce4;
            case 0x133CE8u: goto label_133ce8;
            case 0x133CECu: goto label_133cec;
            case 0x133CF0u: goto label_133cf0;
            case 0x133CF4u: goto label_133cf4;
            case 0x133CF8u: goto label_133cf8;
            case 0x133CFCu: goto label_133cfc;
            case 0x133D00u: goto label_133d00;
            case 0x133D04u: goto label_133d04;
            case 0x133D08u: goto label_133d08;
            case 0x133D0Cu: goto label_133d0c;
            case 0x133D10u: goto label_133d10;
            case 0x133D14u: goto label_133d14;
            case 0x133D18u: goto label_133d18;
            case 0x133D1Cu: goto label_133d1c;
            case 0x133D20u: goto label_133d20;
            case 0x133D24u: goto label_133d24;
            case 0x133D28u: goto label_133d28;
            case 0x133D2Cu: goto label_133d2c;
            case 0x133D30u: goto label_133d30;
            case 0x133D34u: goto label_133d34;
            case 0x133D38u: goto label_133d38;
            case 0x133D3Cu: goto label_133d3c;
            case 0x133D40u: goto label_133d40;
            case 0x133D44u: goto label_133d44;
            case 0x133D48u: goto label_133d48;
            case 0x133D4Cu: goto label_133d4c;
            case 0x133D50u: goto label_133d50;
            case 0x133D54u: goto label_133d54;
            case 0x133D58u: goto label_133d58;
            case 0x133D5Cu: goto label_133d5c;
            case 0x133D60u: goto label_133d60;
            case 0x133D64u: goto label_133d64;
            case 0x133D68u: goto label_133d68;
            case 0x133D6Cu: goto label_133d6c;
            case 0x133D70u: goto label_133d70;
            case 0x133D74u: goto label_133d74;
            case 0x133D78u: goto label_133d78;
            case 0x133D7Cu: goto label_133d7c;
            case 0x133D80u: goto label_133d80;
            case 0x133D84u: goto label_133d84;
            case 0x133D88u: goto label_133d88;
            case 0x133D8Cu: goto label_133d8c;
            case 0x133D90u: goto label_133d90;
            case 0x133D94u: goto label_133d94;
            case 0x133D98u: goto label_133d98;
            case 0x133D9Cu: goto label_133d9c;
            case 0x133DA0u: goto label_133da0;
            case 0x133DA4u: goto label_133da4;
            case 0x133DA8u: goto label_133da8;
            case 0x133DACu: goto label_133dac;
            case 0x133DB0u: goto label_133db0;
            case 0x133DB4u: goto label_133db4;
            case 0x133DB8u: goto label_133db8;
            case 0x133DBCu: goto label_133dbc;
            case 0x133DC0u: goto label_133dc0;
            case 0x133DC4u: goto label_133dc4;
            case 0x133DC8u: goto label_133dc8;
            case 0x133DCCu: goto label_133dcc;
            case 0x133DD0u: goto label_133dd0;
            case 0x133DD4u: goto label_133dd4;
            case 0x133DD8u: goto label_133dd8;
            case 0x133DDCu: goto label_133ddc;
            case 0x133DE0u: goto label_133de0;
            case 0x133DE4u: goto label_133de4;
            case 0x133DE8u: goto label_133de8;
            case 0x133DECu: goto label_133dec;
            case 0x133DF0u: goto label_133df0;
            case 0x133DF4u: goto label_133df4;
            case 0x133DF8u: goto label_133df8;
            case 0x133DFCu: goto label_133dfc;
            case 0x133E00u: goto label_133e00;
            case 0x133E04u: goto label_133e04;
            case 0x133E08u: goto label_133e08;
            case 0x133E0Cu: goto label_133e0c;
            case 0x133E10u: goto label_133e10;
            case 0x133E14u: goto label_133e14;
            case 0x133E18u: goto label_133e18;
            case 0x133E1Cu: goto label_133e1c;
            case 0x133E20u: goto label_133e20;
            case 0x133E24u: goto label_133e24;
            case 0x133E28u: goto label_133e28;
            case 0x133E2Cu: goto label_133e2c;
            case 0x133E30u: goto label_133e30;
            case 0x133E34u: goto label_133e34;
            case 0x133E38u: goto label_133e38;
            case 0x133E3Cu: goto label_133e3c;
            case 0x133E40u: goto label_133e40;
            case 0x133E44u: goto label_133e44;
            case 0x133E48u: goto label_133e48;
            case 0x133E4Cu: goto label_133e4c;
            case 0x133E50u: goto label_133e50;
            case 0x133E54u: goto label_133e54;
            case 0x133E58u: goto label_133e58;
            case 0x133E5Cu: goto label_133e5c;
            case 0x133E60u: goto label_133e60;
            case 0x133E64u: goto label_133e64;
            case 0x133E68u: goto label_133e68;
            case 0x133E6Cu: goto label_133e6c;
            case 0x133E70u: goto label_133e70;
            case 0x133E74u: goto label_133e74;
            case 0x133E78u: goto label_133e78;
            case 0x133E7Cu: goto label_133e7c;
            case 0x133E80u: goto label_133e80;
            case 0x133E84u: goto label_133e84;
            case 0x133E88u: goto label_133e88;
            case 0x133E8Cu: goto label_133e8c;
            case 0x133E90u: goto label_133e90;
            case 0x133E94u: goto label_133e94;
            case 0x133E98u: goto label_133e98;
            case 0x133E9Cu: goto label_133e9c;
            case 0x133EA0u: goto label_133ea0;
            case 0x133EA4u: goto label_133ea4;
            case 0x133EA8u: goto label_133ea8;
            case 0x133EACu: goto label_133eac;
            case 0x133EB0u: goto label_133eb0;
            case 0x133EB4u: goto label_133eb4;
            case 0x133EB8u: goto label_133eb8;
            case 0x133EBCu: goto label_133ebc;
            case 0x133EC0u: goto label_133ec0;
            case 0x133EC4u: goto label_133ec4;
            case 0x133EC8u: goto label_133ec8;
            case 0x133ECCu: goto label_133ecc;
            case 0x133ED0u: goto label_133ed0;
            case 0x133ED4u: goto label_133ed4;
            case 0x133ED8u: goto label_133ed8;
            case 0x133EDCu: goto label_133edc;
            case 0x133EE0u: goto label_133ee0;
            case 0x133EE4u: goto label_133ee4;
            case 0x133EE8u: goto label_133ee8;
            case 0x133EECu: goto label_133eec;
            case 0x133EF0u: goto label_133ef0;
            case 0x133EF4u: goto label_133ef4;
            case 0x133EF8u: goto label_133ef8;
            case 0x133EFCu: goto label_133efc;
            case 0x133F00u: goto label_133f00;
            case 0x133F04u: goto label_133f04;
            case 0x133F08u: goto label_133f08;
            case 0x133F0Cu: goto label_133f0c;
            case 0x133F10u: goto label_133f10;
            case 0x133F14u: goto label_133f14;
            case 0x133F18u: goto label_133f18;
            case 0x133F1Cu: goto label_133f1c;
            case 0x133F20u: goto label_133f20;
            case 0x133F24u: goto label_133f24;
            case 0x133F28u: goto label_133f28;
            case 0x133F2Cu: goto label_133f2c;
            case 0x133F30u: goto label_133f30;
            case 0x133F34u: goto label_133f34;
            case 0x133F38u: goto label_133f38;
            case 0x133F3Cu: goto label_133f3c;
            case 0x133F40u: goto label_133f40;
            case 0x133F44u: goto label_133f44;
            case 0x133F48u: goto label_133f48;
            case 0x133F4Cu: goto label_133f4c;
            case 0x133F50u: goto label_133f50;
            case 0x133F54u: goto label_133f54;
            case 0x133F58u: goto label_133f58;
            case 0x133F5Cu: goto label_133f5c;
            case 0x133F60u: goto label_133f60;
            case 0x133F64u: goto label_133f64;
            case 0x133F68u: goto label_133f68;
            case 0x133F6Cu: goto label_133f6c;
            case 0x133F70u: goto label_133f70;
            case 0x133F74u: goto label_133f74;
            case 0x133F78u: goto label_133f78;
            case 0x133F7Cu: goto label_133f7c;
            case 0x133F80u: goto label_133f80;
            case 0x133F84u: goto label_133f84;
            case 0x133F88u: goto label_133f88;
            case 0x133F8Cu: goto label_133f8c;
            case 0x133F90u: goto label_133f90;
            case 0x133F94u: goto label_133f94;
            case 0x133F98u: goto label_133f98;
            case 0x133F9Cu: goto label_133f9c;
            case 0x133FA0u: goto label_133fa0;
            case 0x133FA4u: goto label_133fa4;
            case 0x133FA8u: goto label_133fa8;
            case 0x133FACu: goto label_133fac;
            case 0x133FB0u: goto label_133fb0;
            case 0x133FB4u: goto label_133fb4;
            case 0x133FB8u: goto label_133fb8;
            case 0x133FBCu: goto label_133fbc;
            case 0x133FC0u: goto label_133fc0;
            case 0x133FC4u: goto label_133fc4;
            case 0x133FC8u: goto label_133fc8;
            case 0x133FCCu: goto label_133fcc;
            case 0x133FD0u: goto label_133fd0;
            case 0x133FD4u: goto label_133fd4;
            case 0x133FD8u: goto label_133fd8;
            case 0x133FDCu: goto label_133fdc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133D6Cu; }
            if (ctx->pc != 0x133D6Cu) { return; }
        }
    }
    ctx->pc = 0x133D6Cu;
label_133d6c:
    // 0x133d6c: 0x8e220000
    ctx->pc = 0x133d6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_133d70:
    // 0x133d70: 0x27b50020
    ctx->pc = 0x133d70u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 32));
label_133d74:
    // 0x133d74: 0x3c067fff
    ctx->pc = 0x133d74u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
label_133d78:
    // 0x133d78: 0x8c430018
    ctx->pc = 0x133d78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_133d7c:
    // 0x133d7c: 0x220202d
    ctx->pc = 0x133d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133d80:
    // 0x133d80: 0x24050001
    ctx->pc = 0x133d80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_133d84:
    // 0x133d84: 0x34c6ffff
    ctx->pc = 0x133d84u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
label_133d88:
    // 0x133d88: 0x60f809
label_133d8c:
    if (ctx->pc == 0x133D8Cu) {
        ctx->pc = 0x133D8Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133D90u;
        goto label_133d90;
    }
    ctx->pc = 0x133D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x133D90u);
        ctx->pc = 0x133D8Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133B48u: goto label_133b48;
            case 0x133B4Cu: goto label_133b4c;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B58u: goto label_133b58;
            case 0x133B5Cu: goto label_133b5c;
            case 0x133B60u: goto label_133b60;
            case 0x133B64u: goto label_133b64;
            case 0x133B68u: goto label_133b68;
            case 0x133B6Cu: goto label_133b6c;
            case 0x133B70u: goto label_133b70;
            case 0x133B74u: goto label_133b74;
            case 0x133B78u: goto label_133b78;
            case 0x133B7Cu: goto label_133b7c;
            case 0x133B80u: goto label_133b80;
            case 0x133B84u: goto label_133b84;
            case 0x133B88u: goto label_133b88;
            case 0x133B8Cu: goto label_133b8c;
            case 0x133B90u: goto label_133b90;
            case 0x133B94u: goto label_133b94;
            case 0x133B98u: goto label_133b98;
            case 0x133B9Cu: goto label_133b9c;
            case 0x133BA0u: goto label_133ba0;
            case 0x133BA4u: goto label_133ba4;
            case 0x133BA8u: goto label_133ba8;
            case 0x133BACu: goto label_133bac;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BB4u: goto label_133bb4;
            case 0x133BB8u: goto label_133bb8;
            case 0x133BBCu: goto label_133bbc;
            case 0x133BC0u: goto label_133bc0;
            case 0x133BC4u: goto label_133bc4;
            case 0x133BC8u: goto label_133bc8;
            case 0x133BCCu: goto label_133bcc;
            case 0x133BD0u: goto label_133bd0;
            case 0x133BD4u: goto label_133bd4;
            case 0x133BD8u: goto label_133bd8;
            case 0x133BDCu: goto label_133bdc;
            case 0x133BE0u: goto label_133be0;
            case 0x133BE4u: goto label_133be4;
            case 0x133BE8u: goto label_133be8;
            case 0x133BECu: goto label_133bec;
            case 0x133BF0u: goto label_133bf0;
            case 0x133BF4u: goto label_133bf4;
            case 0x133BF8u: goto label_133bf8;
            case 0x133BFCu: goto label_133bfc;
            case 0x133C00u: goto label_133c00;
            case 0x133C04u: goto label_133c04;
            case 0x133C08u: goto label_133c08;
            case 0x133C0Cu: goto label_133c0c;
            case 0x133C10u: goto label_133c10;
            case 0x133C14u: goto label_133c14;
            case 0x133C18u: goto label_133c18;
            case 0x133C1Cu: goto label_133c1c;
            case 0x133C20u: goto label_133c20;
            case 0x133C24u: goto label_133c24;
            case 0x133C28u: goto label_133c28;
            case 0x133C2Cu: goto label_133c2c;
            case 0x133C30u: goto label_133c30;
            case 0x133C34u: goto label_133c34;
            case 0x133C38u: goto label_133c38;
            case 0x133C3Cu: goto label_133c3c;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            case 0x133C48u: goto label_133c48;
            case 0x133C4Cu: goto label_133c4c;
            case 0x133C50u: goto label_133c50;
            case 0x133C54u: goto label_133c54;
            case 0x133C58u: goto label_133c58;
            case 0x133C5Cu: goto label_133c5c;
            case 0x133C60u: goto label_133c60;
            case 0x133C64u: goto label_133c64;
            case 0x133C68u: goto label_133c68;
            case 0x133C6Cu: goto label_133c6c;
            case 0x133C70u: goto label_133c70;
            case 0x133C74u: goto label_133c74;
            case 0x133C78u: goto label_133c78;
            case 0x133C7Cu: goto label_133c7c;
            case 0x133C80u: goto label_133c80;
            case 0x133C84u: goto label_133c84;
            case 0x133C88u: goto label_133c88;
            case 0x133C8Cu: goto label_133c8c;
            case 0x133C90u: goto label_133c90;
            case 0x133C94u: goto label_133c94;
            case 0x133C98u: goto label_133c98;
            case 0x133C9Cu: goto label_133c9c;
            case 0x133CA0u: goto label_133ca0;
            case 0x133CA4u: goto label_133ca4;
            case 0x133CA8u: goto label_133ca8;
            case 0x133CACu: goto label_133cac;
            case 0x133CB0u: goto label_133cb0;
            case 0x133CB4u: goto label_133cb4;
            case 0x133CB8u: goto label_133cb8;
            case 0x133CBCu: goto label_133cbc;
            case 0x133CC0u: goto label_133cc0;
            case 0x133CC4u: goto label_133cc4;
            case 0x133CC8u: goto label_133cc8;
            case 0x133CCCu: goto label_133ccc;
            case 0x133CD0u: goto label_133cd0;
            case 0x133CD4u: goto label_133cd4;
            case 0x133CD8u: goto label_133cd8;
            case 0x133CDCu: goto label_133cdc;
            case 0x133CE0u: goto label_133ce0;
            case 0x133CE4u: goto label_133ce4;
            case 0x133CE8u: goto label_133ce8;
            case 0x133CECu: goto label_133cec;
            case 0x133CF0u: goto label_133cf0;
            case 0x133CF4u: goto label_133cf4;
            case 0x133CF8u: goto label_133cf8;
            case 0x133CFCu: goto label_133cfc;
            case 0x133D00u: goto label_133d00;
            case 0x133D04u: goto label_133d04;
            case 0x133D08u: goto label_133d08;
            case 0x133D0Cu: goto label_133d0c;
            case 0x133D10u: goto label_133d10;
            case 0x133D14u: goto label_133d14;
            case 0x133D18u: goto label_133d18;
            case 0x133D1Cu: goto label_133d1c;
            case 0x133D20u: goto label_133d20;
            case 0x133D24u: goto label_133d24;
            case 0x133D28u: goto label_133d28;
            case 0x133D2Cu: goto label_133d2c;
            case 0x133D30u: goto label_133d30;
            case 0x133D34u: goto label_133d34;
            case 0x133D38u: goto label_133d38;
            case 0x133D3Cu: goto label_133d3c;
            case 0x133D40u: goto label_133d40;
            case 0x133D44u: goto label_133d44;
            case 0x133D48u: goto label_133d48;
            case 0x133D4Cu: goto label_133d4c;
            case 0x133D50u: goto label_133d50;
            case 0x133D54u: goto label_133d54;
            case 0x133D58u: goto label_133d58;
            case 0x133D5Cu: goto label_133d5c;
            case 0x133D60u: goto label_133d60;
            case 0x133D64u: goto label_133d64;
            case 0x133D68u: goto label_133d68;
            case 0x133D6Cu: goto label_133d6c;
            case 0x133D70u: goto label_133d70;
            case 0x133D74u: goto label_133d74;
            case 0x133D78u: goto label_133d78;
            case 0x133D7Cu: goto label_133d7c;
            case 0x133D80u: goto label_133d80;
            case 0x133D84u: goto label_133d84;
            case 0x133D88u: goto label_133d88;
            case 0x133D8Cu: goto label_133d8c;
            case 0x133D90u: goto label_133d90;
            case 0x133D94u: goto label_133d94;
            case 0x133D98u: goto label_133d98;
            case 0x133D9Cu: goto label_133d9c;
            case 0x133DA0u: goto label_133da0;
            case 0x133DA4u: goto label_133da4;
            case 0x133DA8u: goto label_133da8;
            case 0x133DACu: goto label_133dac;
            case 0x133DB0u: goto label_133db0;
            case 0x133DB4u: goto label_133db4;
            case 0x133DB8u: goto label_133db8;
            case 0x133DBCu: goto label_133dbc;
            case 0x133DC0u: goto label_133dc0;
            case 0x133DC4u: goto label_133dc4;
            case 0x133DC8u: goto label_133dc8;
            case 0x133DCCu: goto label_133dcc;
            case 0x133DD0u: goto label_133dd0;
            case 0x133DD4u: goto label_133dd4;
            case 0x133DD8u: goto label_133dd8;
            case 0x133DDCu: goto label_133ddc;
            case 0x133DE0u: goto label_133de0;
            case 0x133DE4u: goto label_133de4;
            case 0x133DE8u: goto label_133de8;
            case 0x133DECu: goto label_133dec;
            case 0x133DF0u: goto label_133df0;
            case 0x133DF4u: goto label_133df4;
            case 0x133DF8u: goto label_133df8;
            case 0x133DFCu: goto label_133dfc;
            case 0x133E00u: goto label_133e00;
            case 0x133E04u: goto label_133e04;
            case 0x133E08u: goto label_133e08;
            case 0x133E0Cu: goto label_133e0c;
            case 0x133E10u: goto label_133e10;
            case 0x133E14u: goto label_133e14;
            case 0x133E18u: goto label_133e18;
            case 0x133E1Cu: goto label_133e1c;
            case 0x133E20u: goto label_133e20;
            case 0x133E24u: goto label_133e24;
            case 0x133E28u: goto label_133e28;
            case 0x133E2Cu: goto label_133e2c;
            case 0x133E30u: goto label_133e30;
            case 0x133E34u: goto label_133e34;
            case 0x133E38u: goto label_133e38;
            case 0x133E3Cu: goto label_133e3c;
            case 0x133E40u: goto label_133e40;
            case 0x133E44u: goto label_133e44;
            case 0x133E48u: goto label_133e48;
            case 0x133E4Cu: goto label_133e4c;
            case 0x133E50u: goto label_133e50;
            case 0x133E54u: goto label_133e54;
            case 0x133E58u: goto label_133e58;
            case 0x133E5Cu: goto label_133e5c;
            case 0x133E60u: goto label_133e60;
            case 0x133E64u: goto label_133e64;
            case 0x133E68u: goto label_133e68;
            case 0x133E6Cu: goto label_133e6c;
            case 0x133E70u: goto label_133e70;
            case 0x133E74u: goto label_133e74;
            case 0x133E78u: goto label_133e78;
            case 0x133E7Cu: goto label_133e7c;
            case 0x133E80u: goto label_133e80;
            case 0x133E84u: goto label_133e84;
            case 0x133E88u: goto label_133e88;
            case 0x133E8Cu: goto label_133e8c;
            case 0x133E90u: goto label_133e90;
            case 0x133E94u: goto label_133e94;
            case 0x133E98u: goto label_133e98;
            case 0x133E9Cu: goto label_133e9c;
            case 0x133EA0u: goto label_133ea0;
            case 0x133EA4u: goto label_133ea4;
            case 0x133EA8u: goto label_133ea8;
            case 0x133EACu: goto label_133eac;
            case 0x133EB0u: goto label_133eb0;
            case 0x133EB4u: goto label_133eb4;
            case 0x133EB8u: goto label_133eb8;
            case 0x133EBCu: goto label_133ebc;
            case 0x133EC0u: goto label_133ec0;
            case 0x133EC4u: goto label_133ec4;
            case 0x133EC8u: goto label_133ec8;
            case 0x133ECCu: goto label_133ecc;
            case 0x133ED0u: goto label_133ed0;
            case 0x133ED4u: goto label_133ed4;
            case 0x133ED8u: goto label_133ed8;
            case 0x133EDCu: goto label_133edc;
            case 0x133EE0u: goto label_133ee0;
            case 0x133EE4u: goto label_133ee4;
            case 0x133EE8u: goto label_133ee8;
            case 0x133EECu: goto label_133eec;
            case 0x133EF0u: goto label_133ef0;
            case 0x133EF4u: goto label_133ef4;
            case 0x133EF8u: goto label_133ef8;
            case 0x133EFCu: goto label_133efc;
            case 0x133F00u: goto label_133f00;
            case 0x133F04u: goto label_133f04;
            case 0x133F08u: goto label_133f08;
            case 0x133F0Cu: goto label_133f0c;
            case 0x133F10u: goto label_133f10;
            case 0x133F14u: goto label_133f14;
            case 0x133F18u: goto label_133f18;
            case 0x133F1Cu: goto label_133f1c;
            case 0x133F20u: goto label_133f20;
            case 0x133F24u: goto label_133f24;
            case 0x133F28u: goto label_133f28;
            case 0x133F2Cu: goto label_133f2c;
            case 0x133F30u: goto label_133f30;
            case 0x133F34u: goto label_133f34;
            case 0x133F38u: goto label_133f38;
            case 0x133F3Cu: goto label_133f3c;
            case 0x133F40u: goto label_133f40;
            case 0x133F44u: goto label_133f44;
            case 0x133F48u: goto label_133f48;
            case 0x133F4Cu: goto label_133f4c;
            case 0x133F50u: goto label_133f50;
            case 0x133F54u: goto label_133f54;
            case 0x133F58u: goto label_133f58;
            case 0x133F5Cu: goto label_133f5c;
            case 0x133F60u: goto label_133f60;
            case 0x133F64u: goto label_133f64;
            case 0x133F68u: goto label_133f68;
            case 0x133F6Cu: goto label_133f6c;
            case 0x133F70u: goto label_133f70;
            case 0x133F74u: goto label_133f74;
            case 0x133F78u: goto label_133f78;
            case 0x133F7Cu: goto label_133f7c;
            case 0x133F80u: goto label_133f80;
            case 0x133F84u: goto label_133f84;
            case 0x133F88u: goto label_133f88;
            case 0x133F8Cu: goto label_133f8c;
            case 0x133F90u: goto label_133f90;
            case 0x133F94u: goto label_133f94;
            case 0x133F98u: goto label_133f98;
            case 0x133F9Cu: goto label_133f9c;
            case 0x133FA0u: goto label_133fa0;
            case 0x133FA4u: goto label_133fa4;
            case 0x133FA8u: goto label_133fa8;
            case 0x133FACu: goto label_133fac;
            case 0x133FB0u: goto label_133fb0;
            case 0x133FB4u: goto label_133fb4;
            case 0x133FB8u: goto label_133fb8;
            case 0x133FBCu: goto label_133fbc;
            case 0x133FC0u: goto label_133fc0;
            case 0x133FC4u: goto label_133fc4;
            case 0x133FC8u: goto label_133fc8;
            case 0x133FCCu: goto label_133fcc;
            case 0x133FD0u: goto label_133fd0;
            case 0x133FD4u: goto label_133fd4;
            case 0x133FD8u: goto label_133fd8;
            case 0x133FDCu: goto label_133fdc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133D90u; }
            if (ctx->pc != 0x133D90u) { return; }
        }
    }
    ctx->pc = 0x133D90u;
label_133d90:
    // 0x133d90: 0x27b30040
    ctx->pc = 0x133d90u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 64));
label_133d94:
    // 0x133d94: 0x8fa40000
    ctx->pc = 0x133d94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_133d98:
    // 0x133d98: 0x8fa50004
    ctx->pc = 0x133d98u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_133d9c:
    // 0x133d9c: 0xc049bc8
label_133da0:
    if (ctx->pc == 0x133DA0u) {
        ctx->pc = 0x133DA0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133DA4u;
        goto label_133da4;
    }
    ctx->pc = 0x133D9Cu;
    SET_GPR_U32(ctx, 31, 0x133DA4u);
    ctx->pc = 0x133DA0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x126F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00126F20_0x126f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133DA4u; }
    }
    if (ctx->pc != 0x133DA4u) { return; }
    ctx->pc = 0x133DA4u;
label_133da4:
    // 0x133da4: 0x10400010
label_133da8:
    if (ctx->pc == 0x133DA8u) {
        ctx->pc = 0x133DA8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133DACu;
        goto label_133dac;
    }
    ctx->pc = 0x133DA4u;
    {
        const bool branch_taken_0x133da4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x133DA8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x133da4) {
            ctx->pc = 0x133DE8u;
            goto label_133de8;
        }
    }
    ctx->pc = 0x133DACu;
label_133dac:
    // 0x133dac: 0xa2800098
    ctx->pc = 0x133dacu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 152), (uint8_t)GPR_U32(ctx, 0));
label_133db0:
    // 0x133db0: 0x220202d
    ctx->pc = 0x133db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133db4:
    // 0x133db4: 0x8e220000
    ctx->pc = 0x133db4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_133db8:
    // 0x133db8: 0x8c43001c
    ctx->pc = 0x133db8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_133dbc:
    // 0x133dbc: 0x60f809
label_133dc0:
    if (ctx->pc == 0x133DC0u) {
        ctx->pc = 0x133DC0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x133DC4u;
        goto label_133dc4;
    }
    ctx->pc = 0x133DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x133DC4u);
        ctx->pc = 0x133DC0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133B48u: goto label_133b48;
            case 0x133B4Cu: goto label_133b4c;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B58u: goto label_133b58;
            case 0x133B5Cu: goto label_133b5c;
            case 0x133B60u: goto label_133b60;
            case 0x133B64u: goto label_133b64;
            case 0x133B68u: goto label_133b68;
            case 0x133B6Cu: goto label_133b6c;
            case 0x133B70u: goto label_133b70;
            case 0x133B74u: goto label_133b74;
            case 0x133B78u: goto label_133b78;
            case 0x133B7Cu: goto label_133b7c;
            case 0x133B80u: goto label_133b80;
            case 0x133B84u: goto label_133b84;
            case 0x133B88u: goto label_133b88;
            case 0x133B8Cu: goto label_133b8c;
            case 0x133B90u: goto label_133b90;
            case 0x133B94u: goto label_133b94;
            case 0x133B98u: goto label_133b98;
            case 0x133B9Cu: goto label_133b9c;
            case 0x133BA0u: goto label_133ba0;
            case 0x133BA4u: goto label_133ba4;
            case 0x133BA8u: goto label_133ba8;
            case 0x133BACu: goto label_133bac;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BB4u: goto label_133bb4;
            case 0x133BB8u: goto label_133bb8;
            case 0x133BBCu: goto label_133bbc;
            case 0x133BC0u: goto label_133bc0;
            case 0x133BC4u: goto label_133bc4;
            case 0x133BC8u: goto label_133bc8;
            case 0x133BCCu: goto label_133bcc;
            case 0x133BD0u: goto label_133bd0;
            case 0x133BD4u: goto label_133bd4;
            case 0x133BD8u: goto label_133bd8;
            case 0x133BDCu: goto label_133bdc;
            case 0x133BE0u: goto label_133be0;
            case 0x133BE4u: goto label_133be4;
            case 0x133BE8u: goto label_133be8;
            case 0x133BECu: goto label_133bec;
            case 0x133BF0u: goto label_133bf0;
            case 0x133BF4u: goto label_133bf4;
            case 0x133BF8u: goto label_133bf8;
            case 0x133BFCu: goto label_133bfc;
            case 0x133C00u: goto label_133c00;
            case 0x133C04u: goto label_133c04;
            case 0x133C08u: goto label_133c08;
            case 0x133C0Cu: goto label_133c0c;
            case 0x133C10u: goto label_133c10;
            case 0x133C14u: goto label_133c14;
            case 0x133C18u: goto label_133c18;
            case 0x133C1Cu: goto label_133c1c;
            case 0x133C20u: goto label_133c20;
            case 0x133C24u: goto label_133c24;
            case 0x133C28u: goto label_133c28;
            case 0x133C2Cu: goto label_133c2c;
            case 0x133C30u: goto label_133c30;
            case 0x133C34u: goto label_133c34;
            case 0x133C38u: goto label_133c38;
            case 0x133C3Cu: goto label_133c3c;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            case 0x133C48u: goto label_133c48;
            case 0x133C4Cu: goto label_133c4c;
            case 0x133C50u: goto label_133c50;
            case 0x133C54u: goto label_133c54;
            case 0x133C58u: goto label_133c58;
            case 0x133C5Cu: goto label_133c5c;
            case 0x133C60u: goto label_133c60;
            case 0x133C64u: goto label_133c64;
            case 0x133C68u: goto label_133c68;
            case 0x133C6Cu: goto label_133c6c;
            case 0x133C70u: goto label_133c70;
            case 0x133C74u: goto label_133c74;
            case 0x133C78u: goto label_133c78;
            case 0x133C7Cu: goto label_133c7c;
            case 0x133C80u: goto label_133c80;
            case 0x133C84u: goto label_133c84;
            case 0x133C88u: goto label_133c88;
            case 0x133C8Cu: goto label_133c8c;
            case 0x133C90u: goto label_133c90;
            case 0x133C94u: goto label_133c94;
            case 0x133C98u: goto label_133c98;
            case 0x133C9Cu: goto label_133c9c;
            case 0x133CA0u: goto label_133ca0;
            case 0x133CA4u: goto label_133ca4;
            case 0x133CA8u: goto label_133ca8;
            case 0x133CACu: goto label_133cac;
            case 0x133CB0u: goto label_133cb0;
            case 0x133CB4u: goto label_133cb4;
            case 0x133CB8u: goto label_133cb8;
            case 0x133CBCu: goto label_133cbc;
            case 0x133CC0u: goto label_133cc0;
            case 0x133CC4u: goto label_133cc4;
            case 0x133CC8u: goto label_133cc8;
            case 0x133CCCu: goto label_133ccc;
            case 0x133CD0u: goto label_133cd0;
            case 0x133CD4u: goto label_133cd4;
            case 0x133CD8u: goto label_133cd8;
            case 0x133CDCu: goto label_133cdc;
            case 0x133CE0u: goto label_133ce0;
            case 0x133CE4u: goto label_133ce4;
            case 0x133CE8u: goto label_133ce8;
            case 0x133CECu: goto label_133cec;
            case 0x133CF0u: goto label_133cf0;
            case 0x133CF4u: goto label_133cf4;
            case 0x133CF8u: goto label_133cf8;
            case 0x133CFCu: goto label_133cfc;
            case 0x133D00u: goto label_133d00;
            case 0x133D04u: goto label_133d04;
            case 0x133D08u: goto label_133d08;
            case 0x133D0Cu: goto label_133d0c;
            case 0x133D10u: goto label_133d10;
            case 0x133D14u: goto label_133d14;
            case 0x133D18u: goto label_133d18;
            case 0x133D1Cu: goto label_133d1c;
            case 0x133D20u: goto label_133d20;
            case 0x133D24u: goto label_133d24;
            case 0x133D28u: goto label_133d28;
            case 0x133D2Cu: goto label_133d2c;
            case 0x133D30u: goto label_133d30;
            case 0x133D34u: goto label_133d34;
            case 0x133D38u: goto label_133d38;
            case 0x133D3Cu: goto label_133d3c;
            case 0x133D40u: goto label_133d40;
            case 0x133D44u: goto label_133d44;
            case 0x133D48u: goto label_133d48;
            case 0x133D4Cu: goto label_133d4c;
            case 0x133D50u: goto label_133d50;
            case 0x133D54u: goto label_133d54;
            case 0x133D58u: goto label_133d58;
            case 0x133D5Cu: goto label_133d5c;
            case 0x133D60u: goto label_133d60;
            case 0x133D64u: goto label_133d64;
            case 0x133D68u: goto label_133d68;
            case 0x133D6Cu: goto label_133d6c;
            case 0x133D70u: goto label_133d70;
            case 0x133D74u: goto label_133d74;
            case 0x133D78u: goto label_133d78;
            case 0x133D7Cu: goto label_133d7c;
            case 0x133D80u: goto label_133d80;
            case 0x133D84u: goto label_133d84;
            case 0x133D88u: goto label_133d88;
            case 0x133D8Cu: goto label_133d8c;
            case 0x133D90u: goto label_133d90;
            case 0x133D94u: goto label_133d94;
            case 0x133D98u: goto label_133d98;
            case 0x133D9Cu: goto label_133d9c;
            case 0x133DA0u: goto label_133da0;
            case 0x133DA4u: goto label_133da4;
            case 0x133DA8u: goto label_133da8;
            case 0x133DACu: goto label_133dac;
            case 0x133DB0u: goto label_133db0;
            case 0x133DB4u: goto label_133db4;
            case 0x133DB8u: goto label_133db8;
            case 0x133DBCu: goto label_133dbc;
            case 0x133DC0u: goto label_133dc0;
            case 0x133DC4u: goto label_133dc4;
            case 0x133DC8u: goto label_133dc8;
            case 0x133DCCu: goto label_133dcc;
            case 0x133DD0u: goto label_133dd0;
            case 0x133DD4u: goto label_133dd4;
            case 0x133DD8u: goto label_133dd8;
            case 0x133DDCu: goto label_133ddc;
            case 0x133DE0u: goto label_133de0;
            case 0x133DE4u: goto label_133de4;
            case 0x133DE8u: goto label_133de8;
            case 0x133DECu: goto label_133dec;
            case 0x133DF0u: goto label_133df0;
            case 0x133DF4u: goto label_133df4;
            case 0x133DF8u: goto label_133df8;
            case 0x133DFCu: goto label_133dfc;
            case 0x133E00u: goto label_133e00;
            case 0x133E04u: goto label_133e04;
            case 0x133E08u: goto label_133e08;
            case 0x133E0Cu: goto label_133e0c;
            case 0x133E10u: goto label_133e10;
            case 0x133E14u: goto label_133e14;
            case 0x133E18u: goto label_133e18;
            case 0x133E1Cu: goto label_133e1c;
            case 0x133E20u: goto label_133e20;
            case 0x133E24u: goto label_133e24;
            case 0x133E28u: goto label_133e28;
            case 0x133E2Cu: goto label_133e2c;
            case 0x133E30u: goto label_133e30;
            case 0x133E34u: goto label_133e34;
            case 0x133E38u: goto label_133e38;
            case 0x133E3Cu: goto label_133e3c;
            case 0x133E40u: goto label_133e40;
            case 0x133E44u: goto label_133e44;
            case 0x133E48u: goto label_133e48;
            case 0x133E4Cu: goto label_133e4c;
            case 0x133E50u: goto label_133e50;
            case 0x133E54u: goto label_133e54;
            case 0x133E58u: goto label_133e58;
            case 0x133E5Cu: goto label_133e5c;
            case 0x133E60u: goto label_133e60;
            case 0x133E64u: goto label_133e64;
            case 0x133E68u: goto label_133e68;
            case 0x133E6Cu: goto label_133e6c;
            case 0x133E70u: goto label_133e70;
            case 0x133E74u: goto label_133e74;
            case 0x133E78u: goto label_133e78;
            case 0x133E7Cu: goto label_133e7c;
            case 0x133E80u: goto label_133e80;
            case 0x133E84u: goto label_133e84;
            case 0x133E88u: goto label_133e88;
            case 0x133E8Cu: goto label_133e8c;
            case 0x133E90u: goto label_133e90;
            case 0x133E94u: goto label_133e94;
            case 0x133E98u: goto label_133e98;
            case 0x133E9Cu: goto label_133e9c;
            case 0x133EA0u: goto label_133ea0;
            case 0x133EA4u: goto label_133ea4;
            case 0x133EA8u: goto label_133ea8;
            case 0x133EACu: goto label_133eac;
            case 0x133EB0u: goto label_133eb0;
            case 0x133EB4u: goto label_133eb4;
            case 0x133EB8u: goto label_133eb8;
            case 0x133EBCu: goto label_133ebc;
            case 0x133EC0u: goto label_133ec0;
            case 0x133EC4u: goto label_133ec4;
            case 0x133EC8u: goto label_133ec8;
            case 0x133ECCu: goto label_133ecc;
            case 0x133ED0u: goto label_133ed0;
            case 0x133ED4u: goto label_133ed4;
            case 0x133ED8u: goto label_133ed8;
            case 0x133EDCu: goto label_133edc;
            case 0x133EE0u: goto label_133ee0;
            case 0x133EE4u: goto label_133ee4;
            case 0x133EE8u: goto label_133ee8;
            case 0x133EECu: goto label_133eec;
            case 0x133EF0u: goto label_133ef0;
            case 0x133EF4u: goto label_133ef4;
            case 0x133EF8u: goto label_133ef8;
            case 0x133EFCu: goto label_133efc;
            case 0x133F00u: goto label_133f00;
            case 0x133F04u: goto label_133f04;
            case 0x133F08u: goto label_133f08;
            case 0x133F0Cu: goto label_133f0c;
            case 0x133F10u: goto label_133f10;
            case 0x133F14u: goto label_133f14;
            case 0x133F18u: goto label_133f18;
            case 0x133F1Cu: goto label_133f1c;
            case 0x133F20u: goto label_133f20;
            case 0x133F24u: goto label_133f24;
            case 0x133F28u: goto label_133f28;
            case 0x133F2Cu: goto label_133f2c;
            case 0x133F30u: goto label_133f30;
            case 0x133F34u: goto label_133f34;
            case 0x133F38u: goto label_133f38;
            case 0x133F3Cu: goto label_133f3c;
            case 0x133F40u: goto label_133f40;
            case 0x133F44u: goto label_133f44;
            case 0x133F48u: goto label_133f48;
            case 0x133F4Cu: goto label_133f4c;
            case 0x133F50u: goto label_133f50;
            case 0x133F54u: goto label_133f54;
            case 0x133F58u: goto label_133f58;
            case 0x133F5Cu: goto label_133f5c;
            case 0x133F60u: goto label_133f60;
            case 0x133F64u: goto label_133f64;
            case 0x133F68u: goto label_133f68;
            case 0x133F6Cu: goto label_133f6c;
            case 0x133F70u: goto label_133f70;
            case 0x133F74u: goto label_133f74;
            case 0x133F78u: goto label_133f78;
            case 0x133F7Cu: goto label_133f7c;
            case 0x133F80u: goto label_133f80;
            case 0x133F84u: goto label_133f84;
            case 0x133F88u: goto label_133f88;
            case 0x133F8Cu: goto label_133f8c;
            case 0x133F90u: goto label_133f90;
            case 0x133F94u: goto label_133f94;
            case 0x133F98u: goto label_133f98;
            case 0x133F9Cu: goto label_133f9c;
            case 0x133FA0u: goto label_133fa0;
            case 0x133FA4u: goto label_133fa4;
            case 0x133FA8u: goto label_133fa8;
            case 0x133FACu: goto label_133fac;
            case 0x133FB0u: goto label_133fb0;
            case 0x133FB4u: goto label_133fb4;
            case 0x133FB8u: goto label_133fb8;
            case 0x133FBCu: goto label_133fbc;
            case 0x133FC0u: goto label_133fc0;
            case 0x133FC4u: goto label_133fc4;
            case 0x133FC8u: goto label_133fc8;
            case 0x133FCCu: goto label_133fcc;
            case 0x133FD0u: goto label_133fd0;
            case 0x133FD4u: goto label_133fd4;
            case 0x133FD8u: goto label_133fd8;
            case 0x133FDCu: goto label_133fdc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133DC4u; }
            if (ctx->pc != 0x133DC4u) { return; }
        }
    }
    ctx->pc = 0x133DC4u;
label_133dc4:
    // 0x133dc4: 0x8e260000
    ctx->pc = 0x133dc4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_133dc8:
    // 0x133dc8: 0x220202d
    ctx->pc = 0x133dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133dcc:
    // 0x133dcc: 0x24050001
    ctx->pc = 0x133dccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_133dd0:
    // 0x133dd0: 0x8cc2001c
    ctx->pc = 0x133dd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_133dd4:
    // 0x133dd4: 0x40f809
label_133dd8:
    if (ctx->pc == 0x133DD8u) {
        ctx->pc = 0x133DD8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133DDCu;
        goto label_133ddc;
    }
    ctx->pc = 0x133DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133DDCu);
        ctx->pc = 0x133DD8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133B48u: goto label_133b48;
            case 0x133B4Cu: goto label_133b4c;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B58u: goto label_133b58;
            case 0x133B5Cu: goto label_133b5c;
            case 0x133B60u: goto label_133b60;
            case 0x133B64u: goto label_133b64;
            case 0x133B68u: goto label_133b68;
            case 0x133B6Cu: goto label_133b6c;
            case 0x133B70u: goto label_133b70;
            case 0x133B74u: goto label_133b74;
            case 0x133B78u: goto label_133b78;
            case 0x133B7Cu: goto label_133b7c;
            case 0x133B80u: goto label_133b80;
            case 0x133B84u: goto label_133b84;
            case 0x133B88u: goto label_133b88;
            case 0x133B8Cu: goto label_133b8c;
            case 0x133B90u: goto label_133b90;
            case 0x133B94u: goto label_133b94;
            case 0x133B98u: goto label_133b98;
            case 0x133B9Cu: goto label_133b9c;
            case 0x133BA0u: goto label_133ba0;
            case 0x133BA4u: goto label_133ba4;
            case 0x133BA8u: goto label_133ba8;
            case 0x133BACu: goto label_133bac;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BB4u: goto label_133bb4;
            case 0x133BB8u: goto label_133bb8;
            case 0x133BBCu: goto label_133bbc;
            case 0x133BC0u: goto label_133bc0;
            case 0x133BC4u: goto label_133bc4;
            case 0x133BC8u: goto label_133bc8;
            case 0x133BCCu: goto label_133bcc;
            case 0x133BD0u: goto label_133bd0;
            case 0x133BD4u: goto label_133bd4;
            case 0x133BD8u: goto label_133bd8;
            case 0x133BDCu: goto label_133bdc;
            case 0x133BE0u: goto label_133be0;
            case 0x133BE4u: goto label_133be4;
            case 0x133BE8u: goto label_133be8;
            case 0x133BECu: goto label_133bec;
            case 0x133BF0u: goto label_133bf0;
            case 0x133BF4u: goto label_133bf4;
            case 0x133BF8u: goto label_133bf8;
            case 0x133BFCu: goto label_133bfc;
            case 0x133C00u: goto label_133c00;
            case 0x133C04u: goto label_133c04;
            case 0x133C08u: goto label_133c08;
            case 0x133C0Cu: goto label_133c0c;
            case 0x133C10u: goto label_133c10;
            case 0x133C14u: goto label_133c14;
            case 0x133C18u: goto label_133c18;
            case 0x133C1Cu: goto label_133c1c;
            case 0x133C20u: goto label_133c20;
            case 0x133C24u: goto label_133c24;
            case 0x133C28u: goto label_133c28;
            case 0x133C2Cu: goto label_133c2c;
            case 0x133C30u: goto label_133c30;
            case 0x133C34u: goto label_133c34;
            case 0x133C38u: goto label_133c38;
            case 0x133C3Cu: goto label_133c3c;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            case 0x133C48u: goto label_133c48;
            case 0x133C4Cu: goto label_133c4c;
            case 0x133C50u: goto label_133c50;
            case 0x133C54u: goto label_133c54;
            case 0x133C58u: goto label_133c58;
            case 0x133C5Cu: goto label_133c5c;
            case 0x133C60u: goto label_133c60;
            case 0x133C64u: goto label_133c64;
            case 0x133C68u: goto label_133c68;
            case 0x133C6Cu: goto label_133c6c;
            case 0x133C70u: goto label_133c70;
            case 0x133C74u: goto label_133c74;
            case 0x133C78u: goto label_133c78;
            case 0x133C7Cu: goto label_133c7c;
            case 0x133C80u: goto label_133c80;
            case 0x133C84u: goto label_133c84;
            case 0x133C88u: goto label_133c88;
            case 0x133C8Cu: goto label_133c8c;
            case 0x133C90u: goto label_133c90;
            case 0x133C94u: goto label_133c94;
            case 0x133C98u: goto label_133c98;
            case 0x133C9Cu: goto label_133c9c;
            case 0x133CA0u: goto label_133ca0;
            case 0x133CA4u: goto label_133ca4;
            case 0x133CA8u: goto label_133ca8;
            case 0x133CACu: goto label_133cac;
            case 0x133CB0u: goto label_133cb0;
            case 0x133CB4u: goto label_133cb4;
            case 0x133CB8u: goto label_133cb8;
            case 0x133CBCu: goto label_133cbc;
            case 0x133CC0u: goto label_133cc0;
            case 0x133CC4u: goto label_133cc4;
            case 0x133CC8u: goto label_133cc8;
            case 0x133CCCu: goto label_133ccc;
            case 0x133CD0u: goto label_133cd0;
            case 0x133CD4u: goto label_133cd4;
            case 0x133CD8u: goto label_133cd8;
            case 0x133CDCu: goto label_133cdc;
            case 0x133CE0u: goto label_133ce0;
            case 0x133CE4u: goto label_133ce4;
            case 0x133CE8u: goto label_133ce8;
            case 0x133CECu: goto label_133cec;
            case 0x133CF0u: goto label_133cf0;
            case 0x133CF4u: goto label_133cf4;
            case 0x133CF8u: goto label_133cf8;
            case 0x133CFCu: goto label_133cfc;
            case 0x133D00u: goto label_133d00;
            case 0x133D04u: goto label_133d04;
            case 0x133D08u: goto label_133d08;
            case 0x133D0Cu: goto label_133d0c;
            case 0x133D10u: goto label_133d10;
            case 0x133D14u: goto label_133d14;
            case 0x133D18u: goto label_133d18;
            case 0x133D1Cu: goto label_133d1c;
            case 0x133D20u: goto label_133d20;
            case 0x133D24u: goto label_133d24;
            case 0x133D28u: goto label_133d28;
            case 0x133D2Cu: goto label_133d2c;
            case 0x133D30u: goto label_133d30;
            case 0x133D34u: goto label_133d34;
            case 0x133D38u: goto label_133d38;
            case 0x133D3Cu: goto label_133d3c;
            case 0x133D40u: goto label_133d40;
            case 0x133D44u: goto label_133d44;
            case 0x133D48u: goto label_133d48;
            case 0x133D4Cu: goto label_133d4c;
            case 0x133D50u: goto label_133d50;
            case 0x133D54u: goto label_133d54;
            case 0x133D58u: goto label_133d58;
            case 0x133D5Cu: goto label_133d5c;
            case 0x133D60u: goto label_133d60;
            case 0x133D64u: goto label_133d64;
            case 0x133D68u: goto label_133d68;
            case 0x133D6Cu: goto label_133d6c;
            case 0x133D70u: goto label_133d70;
            case 0x133D74u: goto label_133d74;
            case 0x133D78u: goto label_133d78;
            case 0x133D7Cu: goto label_133d7c;
            case 0x133D80u: goto label_133d80;
            case 0x133D84u: goto label_133d84;
            case 0x133D88u: goto label_133d88;
            case 0x133D8Cu: goto label_133d8c;
            case 0x133D90u: goto label_133d90;
            case 0x133D94u: goto label_133d94;
            case 0x133D98u: goto label_133d98;
            case 0x133D9Cu: goto label_133d9c;
            case 0x133DA0u: goto label_133da0;
            case 0x133DA4u: goto label_133da4;
            case 0x133DA8u: goto label_133da8;
            case 0x133DACu: goto label_133dac;
            case 0x133DB0u: goto label_133db0;
            case 0x133DB4u: goto label_133db4;
            case 0x133DB8u: goto label_133db8;
            case 0x133DBCu: goto label_133dbc;
            case 0x133DC0u: goto label_133dc0;
            case 0x133DC4u: goto label_133dc4;
            case 0x133DC8u: goto label_133dc8;
            case 0x133DCCu: goto label_133dcc;
            case 0x133DD0u: goto label_133dd0;
            case 0x133DD4u: goto label_133dd4;
            case 0x133DD8u: goto label_133dd8;
            case 0x133DDCu: goto label_133ddc;
            case 0x133DE0u: goto label_133de0;
            case 0x133DE4u: goto label_133de4;
            case 0x133DE8u: goto label_133de8;
            case 0x133DECu: goto label_133dec;
            case 0x133DF0u: goto label_133df0;
            case 0x133DF4u: goto label_133df4;
            case 0x133DF8u: goto label_133df8;
            case 0x133DFCu: goto label_133dfc;
            case 0x133E00u: goto label_133e00;
            case 0x133E04u: goto label_133e04;
            case 0x133E08u: goto label_133e08;
            case 0x133E0Cu: goto label_133e0c;
            case 0x133E10u: goto label_133e10;
            case 0x133E14u: goto label_133e14;
            case 0x133E18u: goto label_133e18;
            case 0x133E1Cu: goto label_133e1c;
            case 0x133E20u: goto label_133e20;
            case 0x133E24u: goto label_133e24;
            case 0x133E28u: goto label_133e28;
            case 0x133E2Cu: goto label_133e2c;
            case 0x133E30u: goto label_133e30;
            case 0x133E34u: goto label_133e34;
            case 0x133E38u: goto label_133e38;
            case 0x133E3Cu: goto label_133e3c;
            case 0x133E40u: goto label_133e40;
            case 0x133E44u: goto label_133e44;
            case 0x133E48u: goto label_133e48;
            case 0x133E4Cu: goto label_133e4c;
            case 0x133E50u: goto label_133e50;
            case 0x133E54u: goto label_133e54;
            case 0x133E58u: goto label_133e58;
            case 0x133E5Cu: goto label_133e5c;
            case 0x133E60u: goto label_133e60;
            case 0x133E64u: goto label_133e64;
            case 0x133E68u: goto label_133e68;
            case 0x133E6Cu: goto label_133e6c;
            case 0x133E70u: goto label_133e70;
            case 0x133E74u: goto label_133e74;
            case 0x133E78u: goto label_133e78;
            case 0x133E7Cu: goto label_133e7c;
            case 0x133E80u: goto label_133e80;
            case 0x133E84u: goto label_133e84;
            case 0x133E88u: goto label_133e88;
            case 0x133E8Cu: goto label_133e8c;
            case 0x133E90u: goto label_133e90;
            case 0x133E94u: goto label_133e94;
            case 0x133E98u: goto label_133e98;
            case 0x133E9Cu: goto label_133e9c;
            case 0x133EA0u: goto label_133ea0;
            case 0x133EA4u: goto label_133ea4;
            case 0x133EA8u: goto label_133ea8;
            case 0x133EACu: goto label_133eac;
            case 0x133EB0u: goto label_133eb0;
            case 0x133EB4u: goto label_133eb4;
            case 0x133EB8u: goto label_133eb8;
            case 0x133EBCu: goto label_133ebc;
            case 0x133EC0u: goto label_133ec0;
            case 0x133EC4u: goto label_133ec4;
            case 0x133EC8u: goto label_133ec8;
            case 0x133ECCu: goto label_133ecc;
            case 0x133ED0u: goto label_133ed0;
            case 0x133ED4u: goto label_133ed4;
            case 0x133ED8u: goto label_133ed8;
            case 0x133EDCu: goto label_133edc;
            case 0x133EE0u: goto label_133ee0;
            case 0x133EE4u: goto label_133ee4;
            case 0x133EE8u: goto label_133ee8;
            case 0x133EECu: goto label_133eec;
            case 0x133EF0u: goto label_133ef0;
            case 0x133EF4u: goto label_133ef4;
            case 0x133EF8u: goto label_133ef8;
            case 0x133EFCu: goto label_133efc;
            case 0x133F00u: goto label_133f00;
            case 0x133F04u: goto label_133f04;
            case 0x133F08u: goto label_133f08;
            case 0x133F0Cu: goto label_133f0c;
            case 0x133F10u: goto label_133f10;
            case 0x133F14u: goto label_133f14;
            case 0x133F18u: goto label_133f18;
            case 0x133F1Cu: goto label_133f1c;
            case 0x133F20u: goto label_133f20;
            case 0x133F24u: goto label_133f24;
            case 0x133F28u: goto label_133f28;
            case 0x133F2Cu: goto label_133f2c;
            case 0x133F30u: goto label_133f30;
            case 0x133F34u: goto label_133f34;
            case 0x133F38u: goto label_133f38;
            case 0x133F3Cu: goto label_133f3c;
            case 0x133F40u: goto label_133f40;
            case 0x133F44u: goto label_133f44;
            case 0x133F48u: goto label_133f48;
            case 0x133F4Cu: goto label_133f4c;
            case 0x133F50u: goto label_133f50;
            case 0x133F54u: goto label_133f54;
            case 0x133F58u: goto label_133f58;
            case 0x133F5Cu: goto label_133f5c;
            case 0x133F60u: goto label_133f60;
            case 0x133F64u: goto label_133f64;
            case 0x133F68u: goto label_133f68;
            case 0x133F6Cu: goto label_133f6c;
            case 0x133F70u: goto label_133f70;
            case 0x133F74u: goto label_133f74;
            case 0x133F78u: goto label_133f78;
            case 0x133F7Cu: goto label_133f7c;
            case 0x133F80u: goto label_133f80;
            case 0x133F84u: goto label_133f84;
            case 0x133F88u: goto label_133f88;
            case 0x133F8Cu: goto label_133f8c;
            case 0x133F90u: goto label_133f90;
            case 0x133F94u: goto label_133f94;
            case 0x133F98u: goto label_133f98;
            case 0x133F9Cu: goto label_133f9c;
            case 0x133FA0u: goto label_133fa0;
            case 0x133FA4u: goto label_133fa4;
            case 0x133FA8u: goto label_133fa8;
            case 0x133FACu: goto label_133fac;
            case 0x133FB0u: goto label_133fb0;
            case 0x133FB4u: goto label_133fb4;
            case 0x133FB8u: goto label_133fb8;
            case 0x133FBCu: goto label_133fbc;
            case 0x133FC0u: goto label_133fc0;
            case 0x133FC4u: goto label_133fc4;
            case 0x133FC8u: goto label_133fc8;
            case 0x133FCCu: goto label_133fcc;
            case 0x133FD0u: goto label_133fd0;
            case 0x133FD4u: goto label_133fd4;
            case 0x133FD8u: goto label_133fd8;
            case 0x133FDCu: goto label_133fdc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133DDCu; }
            if (ctx->pc != 0x133DDCu) { return; }
        }
    }
    ctx->pc = 0x133DDCu;
label_133ddc:
    // 0x133ddc: 0x10000076
label_133de0:
    if (ctx->pc == 0x133DE0u) {
        ctx->pc = 0x133DE0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x133DE4u;
        goto label_133de4;
    }
    ctx->pc = 0x133DDCu;
    {
        const bool branch_taken_0x133ddc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x133DE0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x133ddc) {
            ctx->pc = 0x133FB8u;
            goto label_133fb8;
        }
    }
    ctx->pc = 0x133DE4u;
label_133de4:
    // 0x133de4: 0x0
    ctx->pc = 0x133de4u;
    // NOP
label_133de8:
    // 0x133de8: 0x87b00040
    ctx->pc = 0x133de8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
label_133dec:
    // 0x133dec: 0x260302d
    ctx->pc = 0x133decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_133df0:
    // 0x133df0: 0x8fa40000
    ctx->pc = 0x133df0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_133df4:
    // 0x133df4: 0x8fa50004
    ctx->pc = 0x133df4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_133df8:
    // 0x133df8: 0x902021
    ctx->pc = 0x133df8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_133dfc:
    // 0x133dfc: 0xc04999c
label_133e00:
    if (ctx->pc == 0x133E00u) {
        ctx->pc = 0x133E00u;
        SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->pc = 0x133E04u;
        goto label_133e04;
    }
    ctx->pc = 0x133DFCu;
    SET_GPR_U32(ctx, 31, 0x133E04u);
    ctx->pc = 0x133E00u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->pc = 0x126670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00126670_0x126670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133E04u; }
    }
    if (ctx->pc != 0x133E04u) { return; }
    ctx->pc = 0x133E04u;
label_133e04:
    // 0x133e04: 0x40982d
    ctx->pc = 0x133e04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133e08:
    // 0x133e08: 0x12600006
label_133e0c:
    if (ctx->pc == 0x133E0Cu) {
        ctx->pc = 0x133E0Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x133E10u;
        goto label_133e10;
    }
    ctx->pc = 0x133E08u;
    {
        const bool branch_taken_0x133e08 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x133E0Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x133e08) {
            ctx->pc = 0x133E24u;
            goto label_133e24;
        }
    }
    ctx->pc = 0x133E10u;
label_133e10:
    // 0x133e10: 0x8fa40020
    ctx->pc = 0x133e10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_133e14:
    // 0x133e14: 0x27a60042
    ctx->pc = 0x133e14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 66));
label_133e18:
    // 0x133e18: 0xc04999c
label_133e1c:
    if (ctx->pc == 0x133E1Cu) {
        ctx->pc = 0x133E1Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->pc = 0x133E20u;
        goto label_133e20;
    }
    ctx->pc = 0x133E18u;
    SET_GPR_U32(ctx, 31, 0x133E20u);
    ctx->pc = 0x133E1Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->pc = 0x126670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00126670_0x126670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133E20u; }
    }
    if (ctx->pc != 0x133E20u) { return; }
    ctx->pc = 0x133E20u;
label_133e20:
    // 0x133e20: 0x40182d
    ctx->pc = 0x133e20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133e24:
    // 0x133e24: 0x87a20040
    ctx->pc = 0x133e24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
label_133e28:
    // 0x133e28: 0x87b60042
    ctx->pc = 0x133e28u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 66)));
label_133e2c:
    // 0x133e2c: 0x12600010
label_133e30:
    if (ctx->pc == 0x133E30u) {
        ctx->pc = 0x133E30u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->pc = 0x133E34u;
        goto label_133e34;
    }
    ctx->pc = 0x133E2Cu;
    {
        const bool branch_taken_0x133e2c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x133E30u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x133e2c) {
            ctx->pc = 0x133E70u;
            goto label_133e70;
        }
    }
    ctx->pc = 0x133E34u;
label_133e34:
    // 0x133e34: 0x10600028
label_133e38:
    if (ctx->pc == 0x133E38u) {
        ctx->pc = 0x133E38u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133E3Cu;
        goto label_133e3c;
    }
    ctx->pc = 0x133E34u;
    {
        const bool branch_taken_0x133e34 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x133E38u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x133e34) {
            ctx->pc = 0x133ED8u;
            goto label_133ed8;
        }
    }
    ctx->pc = 0x133E3Cu;
label_133e3c:
    // 0x133e3c: 0x8e230000
    ctx->pc = 0x133e3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_133e40:
    // 0x133e40: 0x220202d
    ctx->pc = 0x133e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133e44:
    // 0x133e44: 0x8c62001c
    ctx->pc = 0x133e44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_133e48:
    // 0x133e48: 0x40f809
label_133e4c:
    if (ctx->pc == 0x133E4Cu) {
        ctx->pc = 0x133E4Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x133E50u;
        goto label_133e50;
    }
    ctx->pc = 0x133E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133E50u);
        ctx->pc = 0x133E4Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133B48u: goto label_133b48;
            case 0x133B4Cu: goto label_133b4c;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B58u: goto label_133b58;
            case 0x133B5Cu: goto label_133b5c;
            case 0x133B60u: goto label_133b60;
            case 0x133B64u: goto label_133b64;
            case 0x133B68u: goto label_133b68;
            case 0x133B6Cu: goto label_133b6c;
            case 0x133B70u: goto label_133b70;
            case 0x133B74u: goto label_133b74;
            case 0x133B78u: goto label_133b78;
            case 0x133B7Cu: goto label_133b7c;
            case 0x133B80u: goto label_133b80;
            case 0x133B84u: goto label_133b84;
            case 0x133B88u: goto label_133b88;
            case 0x133B8Cu: goto label_133b8c;
            case 0x133B90u: goto label_133b90;
            case 0x133B94u: goto label_133b94;
            case 0x133B98u: goto label_133b98;
            case 0x133B9Cu: goto label_133b9c;
            case 0x133BA0u: goto label_133ba0;
            case 0x133BA4u: goto label_133ba4;
            case 0x133BA8u: goto label_133ba8;
            case 0x133BACu: goto label_133bac;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BB4u: goto label_133bb4;
            case 0x133BB8u: goto label_133bb8;
            case 0x133BBCu: goto label_133bbc;
            case 0x133BC0u: goto label_133bc0;
            case 0x133BC4u: goto label_133bc4;
            case 0x133BC8u: goto label_133bc8;
            case 0x133BCCu: goto label_133bcc;
            case 0x133BD0u: goto label_133bd0;
            case 0x133BD4u: goto label_133bd4;
            case 0x133BD8u: goto label_133bd8;
            case 0x133BDCu: goto label_133bdc;
            case 0x133BE0u: goto label_133be0;
            case 0x133BE4u: goto label_133be4;
            case 0x133BE8u: goto label_133be8;
            case 0x133BECu: goto label_133bec;
            case 0x133BF0u: goto label_133bf0;
            case 0x133BF4u: goto label_133bf4;
            case 0x133BF8u: goto label_133bf8;
            case 0x133BFCu: goto label_133bfc;
            case 0x133C00u: goto label_133c00;
            case 0x133C04u: goto label_133c04;
            case 0x133C08u: goto label_133c08;
            case 0x133C0Cu: goto label_133c0c;
            case 0x133C10u: goto label_133c10;
            case 0x133C14u: goto label_133c14;
            case 0x133C18u: goto label_133c18;
            case 0x133C1Cu: goto label_133c1c;
            case 0x133C20u: goto label_133c20;
            case 0x133C24u: goto label_133c24;
            case 0x133C28u: goto label_133c28;
            case 0x133C2Cu: goto label_133c2c;
            case 0x133C30u: goto label_133c30;
            case 0x133C34u: goto label_133c34;
            case 0x133C38u: goto label_133c38;
            case 0x133C3Cu: goto label_133c3c;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            case 0x133C48u: goto label_133c48;
            case 0x133C4Cu: goto label_133c4c;
            case 0x133C50u: goto label_133c50;
            case 0x133C54u: goto label_133c54;
            case 0x133C58u: goto label_133c58;
            case 0x133C5Cu: goto label_133c5c;
            case 0x133C60u: goto label_133c60;
            case 0x133C64u: goto label_133c64;
            case 0x133C68u: goto label_133c68;
            case 0x133C6Cu: goto label_133c6c;
            case 0x133C70u: goto label_133c70;
            case 0x133C74u: goto label_133c74;
            case 0x133C78u: goto label_133c78;
            case 0x133C7Cu: goto label_133c7c;
            case 0x133C80u: goto label_133c80;
            case 0x133C84u: goto label_133c84;
            case 0x133C88u: goto label_133c88;
            case 0x133C8Cu: goto label_133c8c;
            case 0x133C90u: goto label_133c90;
            case 0x133C94u: goto label_133c94;
            case 0x133C98u: goto label_133c98;
            case 0x133C9Cu: goto label_133c9c;
            case 0x133CA0u: goto label_133ca0;
            case 0x133CA4u: goto label_133ca4;
            case 0x133CA8u: goto label_133ca8;
            case 0x133CACu: goto label_133cac;
            case 0x133CB0u: goto label_133cb0;
            case 0x133CB4u: goto label_133cb4;
            case 0x133CB8u: goto label_133cb8;
            case 0x133CBCu: goto label_133cbc;
            case 0x133CC0u: goto label_133cc0;
            case 0x133CC4u: goto label_133cc4;
            case 0x133CC8u: goto label_133cc8;
            case 0x133CCCu: goto label_133ccc;
            case 0x133CD0u: goto label_133cd0;
            case 0x133CD4u: goto label_133cd4;
            case 0x133CD8u: goto label_133cd8;
            case 0x133CDCu: goto label_133cdc;
            case 0x133CE0u: goto label_133ce0;
            case 0x133CE4u: goto label_133ce4;
            case 0x133CE8u: goto label_133ce8;
            case 0x133CECu: goto label_133cec;
            case 0x133CF0u: goto label_133cf0;
            case 0x133CF4u: goto label_133cf4;
            case 0x133CF8u: goto label_133cf8;
            case 0x133CFCu: goto label_133cfc;
            case 0x133D00u: goto label_133d00;
            case 0x133D04u: goto label_133d04;
            case 0x133D08u: goto label_133d08;
            case 0x133D0Cu: goto label_133d0c;
            case 0x133D10u: goto label_133d10;
            case 0x133D14u: goto label_133d14;
            case 0x133D18u: goto label_133d18;
            case 0x133D1Cu: goto label_133d1c;
            case 0x133D20u: goto label_133d20;
            case 0x133D24u: goto label_133d24;
            case 0x133D28u: goto label_133d28;
            case 0x133D2Cu: goto label_133d2c;
            case 0x133D30u: goto label_133d30;
            case 0x133D34u: goto label_133d34;
            case 0x133D38u: goto label_133d38;
            case 0x133D3Cu: goto label_133d3c;
            case 0x133D40u: goto label_133d40;
            case 0x133D44u: goto label_133d44;
            case 0x133D48u: goto label_133d48;
            case 0x133D4Cu: goto label_133d4c;
            case 0x133D50u: goto label_133d50;
            case 0x133D54u: goto label_133d54;
            case 0x133D58u: goto label_133d58;
            case 0x133D5Cu: goto label_133d5c;
            case 0x133D60u: goto label_133d60;
            case 0x133D64u: goto label_133d64;
            case 0x133D68u: goto label_133d68;
            case 0x133D6Cu: goto label_133d6c;
            case 0x133D70u: goto label_133d70;
            case 0x133D74u: goto label_133d74;
            case 0x133D78u: goto label_133d78;
            case 0x133D7Cu: goto label_133d7c;
            case 0x133D80u: goto label_133d80;
            case 0x133D84u: goto label_133d84;
            case 0x133D88u: goto label_133d88;
            case 0x133D8Cu: goto label_133d8c;
            case 0x133D90u: goto label_133d90;
            case 0x133D94u: goto label_133d94;
            case 0x133D98u: goto label_133d98;
            case 0x133D9Cu: goto label_133d9c;
            case 0x133DA0u: goto label_133da0;
            case 0x133DA4u: goto label_133da4;
            case 0x133DA8u: goto label_133da8;
            case 0x133DACu: goto label_133dac;
            case 0x133DB0u: goto label_133db0;
            case 0x133DB4u: goto label_133db4;
            case 0x133DB8u: goto label_133db8;
            case 0x133DBCu: goto label_133dbc;
            case 0x133DC0u: goto label_133dc0;
            case 0x133DC4u: goto label_133dc4;
            case 0x133DC8u: goto label_133dc8;
            case 0x133DCCu: goto label_133dcc;
            case 0x133DD0u: goto label_133dd0;
            case 0x133DD4u: goto label_133dd4;
            case 0x133DD8u: goto label_133dd8;
            case 0x133DDCu: goto label_133ddc;
            case 0x133DE0u: goto label_133de0;
            case 0x133DE4u: goto label_133de4;
            case 0x133DE8u: goto label_133de8;
            case 0x133DECu: goto label_133dec;
            case 0x133DF0u: goto label_133df0;
            case 0x133DF4u: goto label_133df4;
            case 0x133DF8u: goto label_133df8;
            case 0x133DFCu: goto label_133dfc;
            case 0x133E00u: goto label_133e00;
            case 0x133E04u: goto label_133e04;
            case 0x133E08u: goto label_133e08;
            case 0x133E0Cu: goto label_133e0c;
            case 0x133E10u: goto label_133e10;
            case 0x133E14u: goto label_133e14;
            case 0x133E18u: goto label_133e18;
            case 0x133E1Cu: goto label_133e1c;
            case 0x133E20u: goto label_133e20;
            case 0x133E24u: goto label_133e24;
            case 0x133E28u: goto label_133e28;
            case 0x133E2Cu: goto label_133e2c;
            case 0x133E30u: goto label_133e30;
            case 0x133E34u: goto label_133e34;
            case 0x133E38u: goto label_133e38;
            case 0x133E3Cu: goto label_133e3c;
            case 0x133E40u: goto label_133e40;
            case 0x133E44u: goto label_133e44;
            case 0x133E48u: goto label_133e48;
            case 0x133E4Cu: goto label_133e4c;
            case 0x133E50u: goto label_133e50;
            case 0x133E54u: goto label_133e54;
            case 0x133E58u: goto label_133e58;
            case 0x133E5Cu: goto label_133e5c;
            case 0x133E60u: goto label_133e60;
            case 0x133E64u: goto label_133e64;
            case 0x133E68u: goto label_133e68;
            case 0x133E6Cu: goto label_133e6c;
            case 0x133E70u: goto label_133e70;
            case 0x133E74u: goto label_133e74;
            case 0x133E78u: goto label_133e78;
            case 0x133E7Cu: goto label_133e7c;
            case 0x133E80u: goto label_133e80;
            case 0x133E84u: goto label_133e84;
            case 0x133E88u: goto label_133e88;
            case 0x133E8Cu: goto label_133e8c;
            case 0x133E90u: goto label_133e90;
            case 0x133E94u: goto label_133e94;
            case 0x133E98u: goto label_133e98;
            case 0x133E9Cu: goto label_133e9c;
            case 0x133EA0u: goto label_133ea0;
            case 0x133EA4u: goto label_133ea4;
            case 0x133EA8u: goto label_133ea8;
            case 0x133EACu: goto label_133eac;
            case 0x133EB0u: goto label_133eb0;
            case 0x133EB4u: goto label_133eb4;
            case 0x133EB8u: goto label_133eb8;
            case 0x133EBCu: goto label_133ebc;
            case 0x133EC0u: goto label_133ec0;
            case 0x133EC4u: goto label_133ec4;
            case 0x133EC8u: goto label_133ec8;
            case 0x133ECCu: goto label_133ecc;
            case 0x133ED0u: goto label_133ed0;
            case 0x133ED4u: goto label_133ed4;
            case 0x133ED8u: goto label_133ed8;
            case 0x133EDCu: goto label_133edc;
            case 0x133EE0u: goto label_133ee0;
            case 0x133EE4u: goto label_133ee4;
            case 0x133EE8u: goto label_133ee8;
            case 0x133EECu: goto label_133eec;
            case 0x133EF0u: goto label_133ef0;
            case 0x133EF4u: goto label_133ef4;
            case 0x133EF8u: goto label_133ef8;
            case 0x133EFCu: goto label_133efc;
            case 0x133F00u: goto label_133f00;
            case 0x133F04u: goto label_133f04;
            case 0x133F08u: goto label_133f08;
            case 0x133F0Cu: goto label_133f0c;
            case 0x133F10u: goto label_133f10;
            case 0x133F14u: goto label_133f14;
            case 0x133F18u: goto label_133f18;
            case 0x133F1Cu: goto label_133f1c;
            case 0x133F20u: goto label_133f20;
            case 0x133F24u: goto label_133f24;
            case 0x133F28u: goto label_133f28;
            case 0x133F2Cu: goto label_133f2c;
            case 0x133F30u: goto label_133f30;
            case 0x133F34u: goto label_133f34;
            case 0x133F38u: goto label_133f38;
            case 0x133F3Cu: goto label_133f3c;
            case 0x133F40u: goto label_133f40;
            case 0x133F44u: goto label_133f44;
            case 0x133F48u: goto label_133f48;
            case 0x133F4Cu: goto label_133f4c;
            case 0x133F50u: goto label_133f50;
            case 0x133F54u: goto label_133f54;
            case 0x133F58u: goto label_133f58;
            case 0x133F5Cu: goto label_133f5c;
            case 0x133F60u: goto label_133f60;
            case 0x133F64u: goto label_133f64;
            case 0x133F68u: goto label_133f68;
            case 0x133F6Cu: goto label_133f6c;
            case 0x133F70u: goto label_133f70;
            case 0x133F74u: goto label_133f74;
            case 0x133F78u: goto label_133f78;
            case 0x133F7Cu: goto label_133f7c;
            case 0x133F80u: goto label_133f80;
            case 0x133F84u: goto label_133f84;
            case 0x133F88u: goto label_133f88;
            case 0x133F8Cu: goto label_133f8c;
            case 0x133F90u: goto label_133f90;
            case 0x133F94u: goto label_133f94;
            case 0x133F98u: goto label_133f98;
            case 0x133F9Cu: goto label_133f9c;
            case 0x133FA0u: goto label_133fa0;
            case 0x133FA4u: goto label_133fa4;
            case 0x133FA8u: goto label_133fa8;
            case 0x133FACu: goto label_133fac;
            case 0x133FB0u: goto label_133fb0;
            case 0x133FB4u: goto label_133fb4;
            case 0x133FB8u: goto label_133fb8;
            case 0x133FBCu: goto label_133fbc;
            case 0x133FC0u: goto label_133fc0;
            case 0x133FC4u: goto label_133fc4;
            case 0x133FC8u: goto label_133fc8;
            case 0x133FCCu: goto label_133fcc;
            case 0x133FD0u: goto label_133fd0;
            case 0x133FD4u: goto label_133fd4;
            case 0x133FD8u: goto label_133fd8;
            case 0x133FDCu: goto label_133fdc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133E50u; }
            if (ctx->pc != 0x133E50u) { return; }
        }
    }
    ctx->pc = 0x133E50u;
label_133e50:
    // 0x133e50: 0x8e230000
    ctx->pc = 0x133e50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_133e54:
    // 0x133e54: 0x220202d
    ctx->pc = 0x133e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133e58:
    // 0x133e58: 0x24050001
    ctx->pc = 0x133e58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_133e5c:
    // 0x133e5c: 0x8c62001c
    ctx->pc = 0x133e5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_133e60:
    // 0x133e60: 0x40f809
label_133e64:
    if (ctx->pc == 0x133E64u) {
        ctx->pc = 0x133E64u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133E68u;
        goto label_133e68;
    }
    ctx->pc = 0x133E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133E68u);
        ctx->pc = 0x133E64u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133B48u: goto label_133b48;
            case 0x133B4Cu: goto label_133b4c;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B58u: goto label_133b58;
            case 0x133B5Cu: goto label_133b5c;
            case 0x133B60u: goto label_133b60;
            case 0x133B64u: goto label_133b64;
            case 0x133B68u: goto label_133b68;
            case 0x133B6Cu: goto label_133b6c;
            case 0x133B70u: goto label_133b70;
            case 0x133B74u: goto label_133b74;
            case 0x133B78u: goto label_133b78;
            case 0x133B7Cu: goto label_133b7c;
            case 0x133B80u: goto label_133b80;
            case 0x133B84u: goto label_133b84;
            case 0x133B88u: goto label_133b88;
            case 0x133B8Cu: goto label_133b8c;
            case 0x133B90u: goto label_133b90;
            case 0x133B94u: goto label_133b94;
            case 0x133B98u: goto label_133b98;
            case 0x133B9Cu: goto label_133b9c;
            case 0x133BA0u: goto label_133ba0;
            case 0x133BA4u: goto label_133ba4;
            case 0x133BA8u: goto label_133ba8;
            case 0x133BACu: goto label_133bac;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BB4u: goto label_133bb4;
            case 0x133BB8u: goto label_133bb8;
            case 0x133BBCu: goto label_133bbc;
            case 0x133BC0u: goto label_133bc0;
            case 0x133BC4u: goto label_133bc4;
            case 0x133BC8u: goto label_133bc8;
            case 0x133BCCu: goto label_133bcc;
            case 0x133BD0u: goto label_133bd0;
            case 0x133BD4u: goto label_133bd4;
            case 0x133BD8u: goto label_133bd8;
            case 0x133BDCu: goto label_133bdc;
            case 0x133BE0u: goto label_133be0;
            case 0x133BE4u: goto label_133be4;
            case 0x133BE8u: goto label_133be8;
            case 0x133BECu: goto label_133bec;
            case 0x133BF0u: goto label_133bf0;
            case 0x133BF4u: goto label_133bf4;
            case 0x133BF8u: goto label_133bf8;
            case 0x133BFCu: goto label_133bfc;
            case 0x133C00u: goto label_133c00;
            case 0x133C04u: goto label_133c04;
            case 0x133C08u: goto label_133c08;
            case 0x133C0Cu: goto label_133c0c;
            case 0x133C10u: goto label_133c10;
            case 0x133C14u: goto label_133c14;
            case 0x133C18u: goto label_133c18;
            case 0x133C1Cu: goto label_133c1c;
            case 0x133C20u: goto label_133c20;
            case 0x133C24u: goto label_133c24;
            case 0x133C28u: goto label_133c28;
            case 0x133C2Cu: goto label_133c2c;
            case 0x133C30u: goto label_133c30;
            case 0x133C34u: goto label_133c34;
            case 0x133C38u: goto label_133c38;
            case 0x133C3Cu: goto label_133c3c;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            case 0x133C48u: goto label_133c48;
            case 0x133C4Cu: goto label_133c4c;
            case 0x133C50u: goto label_133c50;
            case 0x133C54u: goto label_133c54;
            case 0x133C58u: goto label_133c58;
            case 0x133C5Cu: goto label_133c5c;
            case 0x133C60u: goto label_133c60;
            case 0x133C64u: goto label_133c64;
            case 0x133C68u: goto label_133c68;
            case 0x133C6Cu: goto label_133c6c;
            case 0x133C70u: goto label_133c70;
            case 0x133C74u: goto label_133c74;
            case 0x133C78u: goto label_133c78;
            case 0x133C7Cu: goto label_133c7c;
            case 0x133C80u: goto label_133c80;
            case 0x133C84u: goto label_133c84;
            case 0x133C88u: goto label_133c88;
            case 0x133C8Cu: goto label_133c8c;
            case 0x133C90u: goto label_133c90;
            case 0x133C94u: goto label_133c94;
            case 0x133C98u: goto label_133c98;
            case 0x133C9Cu: goto label_133c9c;
            case 0x133CA0u: goto label_133ca0;
            case 0x133CA4u: goto label_133ca4;
            case 0x133CA8u: goto label_133ca8;
            case 0x133CACu: goto label_133cac;
            case 0x133CB0u: goto label_133cb0;
            case 0x133CB4u: goto label_133cb4;
            case 0x133CB8u: goto label_133cb8;
            case 0x133CBCu: goto label_133cbc;
            case 0x133CC0u: goto label_133cc0;
            case 0x133CC4u: goto label_133cc4;
            case 0x133CC8u: goto label_133cc8;
            case 0x133CCCu: goto label_133ccc;
            case 0x133CD0u: goto label_133cd0;
            case 0x133CD4u: goto label_133cd4;
            case 0x133CD8u: goto label_133cd8;
            case 0x133CDCu: goto label_133cdc;
            case 0x133CE0u: goto label_133ce0;
            case 0x133CE4u: goto label_133ce4;
            case 0x133CE8u: goto label_133ce8;
            case 0x133CECu: goto label_133cec;
            case 0x133CF0u: goto label_133cf0;
            case 0x133CF4u: goto label_133cf4;
            case 0x133CF8u: goto label_133cf8;
            case 0x133CFCu: goto label_133cfc;
            case 0x133D00u: goto label_133d00;
            case 0x133D04u: goto label_133d04;
            case 0x133D08u: goto label_133d08;
            case 0x133D0Cu: goto label_133d0c;
            case 0x133D10u: goto label_133d10;
            case 0x133D14u: goto label_133d14;
            case 0x133D18u: goto label_133d18;
            case 0x133D1Cu: goto label_133d1c;
            case 0x133D20u: goto label_133d20;
            case 0x133D24u: goto label_133d24;
            case 0x133D28u: goto label_133d28;
            case 0x133D2Cu: goto label_133d2c;
            case 0x133D30u: goto label_133d30;
            case 0x133D34u: goto label_133d34;
            case 0x133D38u: goto label_133d38;
            case 0x133D3Cu: goto label_133d3c;
            case 0x133D40u: goto label_133d40;
            case 0x133D44u: goto label_133d44;
            case 0x133D48u: goto label_133d48;
            case 0x133D4Cu: goto label_133d4c;
            case 0x133D50u: goto label_133d50;
            case 0x133D54u: goto label_133d54;
            case 0x133D58u: goto label_133d58;
            case 0x133D5Cu: goto label_133d5c;
            case 0x133D60u: goto label_133d60;
            case 0x133D64u: goto label_133d64;
            case 0x133D68u: goto label_133d68;
            case 0x133D6Cu: goto label_133d6c;
            case 0x133D70u: goto label_133d70;
            case 0x133D74u: goto label_133d74;
            case 0x133D78u: goto label_133d78;
            case 0x133D7Cu: goto label_133d7c;
            case 0x133D80u: goto label_133d80;
            case 0x133D84u: goto label_133d84;
            case 0x133D88u: goto label_133d88;
            case 0x133D8Cu: goto label_133d8c;
            case 0x133D90u: goto label_133d90;
            case 0x133D94u: goto label_133d94;
            case 0x133D98u: goto label_133d98;
            case 0x133D9Cu: goto label_133d9c;
            case 0x133DA0u: goto label_133da0;
            case 0x133DA4u: goto label_133da4;
            case 0x133DA8u: goto label_133da8;
            case 0x133DACu: goto label_133dac;
            case 0x133DB0u: goto label_133db0;
            case 0x133DB4u: goto label_133db4;
            case 0x133DB8u: goto label_133db8;
            case 0x133DBCu: goto label_133dbc;
            case 0x133DC0u: goto label_133dc0;
            case 0x133DC4u: goto label_133dc4;
            case 0x133DC8u: goto label_133dc8;
            case 0x133DCCu: goto label_133dcc;
            case 0x133DD0u: goto label_133dd0;
            case 0x133DD4u: goto label_133dd4;
            case 0x133DD8u: goto label_133dd8;
            case 0x133DDCu: goto label_133ddc;
            case 0x133DE0u: goto label_133de0;
            case 0x133DE4u: goto label_133de4;
            case 0x133DE8u: goto label_133de8;
            case 0x133DECu: goto label_133dec;
            case 0x133DF0u: goto label_133df0;
            case 0x133DF4u: goto label_133df4;
            case 0x133DF8u: goto label_133df8;
            case 0x133DFCu: goto label_133dfc;
            case 0x133E00u: goto label_133e00;
            case 0x133E04u: goto label_133e04;
            case 0x133E08u: goto label_133e08;
            case 0x133E0Cu: goto label_133e0c;
            case 0x133E10u: goto label_133e10;
            case 0x133E14u: goto label_133e14;
            case 0x133E18u: goto label_133e18;
            case 0x133E1Cu: goto label_133e1c;
            case 0x133E20u: goto label_133e20;
            case 0x133E24u: goto label_133e24;
            case 0x133E28u: goto label_133e28;
            case 0x133E2Cu: goto label_133e2c;
            case 0x133E30u: goto label_133e30;
            case 0x133E34u: goto label_133e34;
            case 0x133E38u: goto label_133e38;
            case 0x133E3Cu: goto label_133e3c;
            case 0x133E40u: goto label_133e40;
            case 0x133E44u: goto label_133e44;
            case 0x133E48u: goto label_133e48;
            case 0x133E4Cu: goto label_133e4c;
            case 0x133E50u: goto label_133e50;
            case 0x133E54u: goto label_133e54;
            case 0x133E58u: goto label_133e58;
            case 0x133E5Cu: goto label_133e5c;
            case 0x133E60u: goto label_133e60;
            case 0x133E64u: goto label_133e64;
            case 0x133E68u: goto label_133e68;
            case 0x133E6Cu: goto label_133e6c;
            case 0x133E70u: goto label_133e70;
            case 0x133E74u: goto label_133e74;
            case 0x133E78u: goto label_133e78;
            case 0x133E7Cu: goto label_133e7c;
            case 0x133E80u: goto label_133e80;
            case 0x133E84u: goto label_133e84;
            case 0x133E88u: goto label_133e88;
            case 0x133E8Cu: goto label_133e8c;
            case 0x133E90u: goto label_133e90;
            case 0x133E94u: goto label_133e94;
            case 0x133E98u: goto label_133e98;
            case 0x133E9Cu: goto label_133e9c;
            case 0x133EA0u: goto label_133ea0;
            case 0x133EA4u: goto label_133ea4;
            case 0x133EA8u: goto label_133ea8;
            case 0x133EACu: goto label_133eac;
            case 0x133EB0u: goto label_133eb0;
            case 0x133EB4u: goto label_133eb4;
            case 0x133EB8u: goto label_133eb8;
            case 0x133EBCu: goto label_133ebc;
            case 0x133EC0u: goto label_133ec0;
            case 0x133EC4u: goto label_133ec4;
            case 0x133EC8u: goto label_133ec8;
            case 0x133ECCu: goto label_133ecc;
            case 0x133ED0u: goto label_133ed0;
            case 0x133ED4u: goto label_133ed4;
            case 0x133ED8u: goto label_133ed8;
            case 0x133EDCu: goto label_133edc;
            case 0x133EE0u: goto label_133ee0;
            case 0x133EE4u: goto label_133ee4;
            case 0x133EE8u: goto label_133ee8;
            case 0x133EECu: goto label_133eec;
            case 0x133EF0u: goto label_133ef0;
            case 0x133EF4u: goto label_133ef4;
            case 0x133EF8u: goto label_133ef8;
            case 0x133EFCu: goto label_133efc;
            case 0x133F00u: goto label_133f00;
            case 0x133F04u: goto label_133f04;
            case 0x133F08u: goto label_133f08;
            case 0x133F0Cu: goto label_133f0c;
            case 0x133F10u: goto label_133f10;
            case 0x133F14u: goto label_133f14;
            case 0x133F18u: goto label_133f18;
            case 0x133F1Cu: goto label_133f1c;
            case 0x133F20u: goto label_133f20;
            case 0x133F24u: goto label_133f24;
            case 0x133F28u: goto label_133f28;
            case 0x133F2Cu: goto label_133f2c;
            case 0x133F30u: goto label_133f30;
            case 0x133F34u: goto label_133f34;
            case 0x133F38u: goto label_133f38;
            case 0x133F3Cu: goto label_133f3c;
            case 0x133F40u: goto label_133f40;
            case 0x133F44u: goto label_133f44;
            case 0x133F48u: goto label_133f48;
            case 0x133F4Cu: goto label_133f4c;
            case 0x133F50u: goto label_133f50;
            case 0x133F54u: goto label_133f54;
            case 0x133F58u: goto label_133f58;
            case 0x133F5Cu: goto label_133f5c;
            case 0x133F60u: goto label_133f60;
            case 0x133F64u: goto label_133f64;
            case 0x133F68u: goto label_133f68;
            case 0x133F6Cu: goto label_133f6c;
            case 0x133F70u: goto label_133f70;
            case 0x133F74u: goto label_133f74;
            case 0x133F78u: goto label_133f78;
            case 0x133F7Cu: goto label_133f7c;
            case 0x133F80u: goto label_133f80;
            case 0x133F84u: goto label_133f84;
            case 0x133F88u: goto label_133f88;
            case 0x133F8Cu: goto label_133f8c;
            case 0x133F90u: goto label_133f90;
            case 0x133F94u: goto label_133f94;
            case 0x133F98u: goto label_133f98;
            case 0x133F9Cu: goto label_133f9c;
            case 0x133FA0u: goto label_133fa0;
            case 0x133FA4u: goto label_133fa4;
            case 0x133FA8u: goto label_133fa8;
            case 0x133FACu: goto label_133fac;
            case 0x133FB0u: goto label_133fb0;
            case 0x133FB4u: goto label_133fb4;
            case 0x133FB8u: goto label_133fb8;
            case 0x133FBCu: goto label_133fbc;
            case 0x133FC0u: goto label_133fc0;
            case 0x133FC4u: goto label_133fc4;
            case 0x133FC8u: goto label_133fc8;
            case 0x133FCCu: goto label_133fcc;
            case 0x133FD0u: goto label_133fd0;
            case 0x133FD4u: goto label_133fd4;
            case 0x133FD8u: goto label_133fd8;
            case 0x133FDCu: goto label_133fdc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133E68u; }
            if (ctx->pc != 0x133E68u) { return; }
        }
    }
    ctx->pc = 0x133E68u;
label_133e68:
    // 0x133e68: 0x10000052
label_133e6c:
    if (ctx->pc == 0x133E6Cu) {
        ctx->pc = 0x133E6Cu;
        WRITE8(ADD32(GPR_U32(ctx, 20), 152), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x133E70u;
        goto label_133e70;
    }
    ctx->pc = 0x133E68u;
    {
        const bool branch_taken_0x133e68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x133E6Cu;
        WRITE8(ADD32(GPR_U32(ctx, 20), 152), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x133e68) {
            ctx->pc = 0x133FB4u;
            goto label_133fb4;
        }
    }
    ctx->pc = 0x133E70u;
label_133e70:
    // 0x133e70: 0x8e230000
    ctx->pc = 0x133e70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_133e74:
    // 0x133e74: 0x2a0302d
    ctx->pc = 0x133e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_133e78:
    // 0x133e78: 0x220202d
    ctx->pc = 0x133e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133e7c:
    // 0x133e7c: 0x8c62001c
    ctx->pc = 0x133e7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_133e80:
    // 0x133e80: 0x40f809
label_133e84:
    if (ctx->pc == 0x133E84u) {
        ctx->pc = 0x133E84u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x133E88u;
        goto label_133e88;
    }
    ctx->pc = 0x133E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133E88u);
        ctx->pc = 0x133E84u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133B48u: goto label_133b48;
            case 0x133B4Cu: goto label_133b4c;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B58u: goto label_133b58;
            case 0x133B5Cu: goto label_133b5c;
            case 0x133B60u: goto label_133b60;
            case 0x133B64u: goto label_133b64;
            case 0x133B68u: goto label_133b68;
            case 0x133B6Cu: goto label_133b6c;
            case 0x133B70u: goto label_133b70;
            case 0x133B74u: goto label_133b74;
            case 0x133B78u: goto label_133b78;
            case 0x133B7Cu: goto label_133b7c;
            case 0x133B80u: goto label_133b80;
            case 0x133B84u: goto label_133b84;
            case 0x133B88u: goto label_133b88;
            case 0x133B8Cu: goto label_133b8c;
            case 0x133B90u: goto label_133b90;
            case 0x133B94u: goto label_133b94;
            case 0x133B98u: goto label_133b98;
            case 0x133B9Cu: goto label_133b9c;
            case 0x133BA0u: goto label_133ba0;
            case 0x133BA4u: goto label_133ba4;
            case 0x133BA8u: goto label_133ba8;
            case 0x133BACu: goto label_133bac;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BB4u: goto label_133bb4;
            case 0x133BB8u: goto label_133bb8;
            case 0x133BBCu: goto label_133bbc;
            case 0x133BC0u: goto label_133bc0;
            case 0x133BC4u: goto label_133bc4;
            case 0x133BC8u: goto label_133bc8;
            case 0x133BCCu: goto label_133bcc;
            case 0x133BD0u: goto label_133bd0;
            case 0x133BD4u: goto label_133bd4;
            case 0x133BD8u: goto label_133bd8;
            case 0x133BDCu: goto label_133bdc;
            case 0x133BE0u: goto label_133be0;
            case 0x133BE4u: goto label_133be4;
            case 0x133BE8u: goto label_133be8;
            case 0x133BECu: goto label_133bec;
            case 0x133BF0u: goto label_133bf0;
            case 0x133BF4u: goto label_133bf4;
            case 0x133BF8u: goto label_133bf8;
            case 0x133BFCu: goto label_133bfc;
            case 0x133C00u: goto label_133c00;
            case 0x133C04u: goto label_133c04;
            case 0x133C08u: goto label_133c08;
            case 0x133C0Cu: goto label_133c0c;
            case 0x133C10u: goto label_133c10;
            case 0x133C14u: goto label_133c14;
            case 0x133C18u: goto label_133c18;
            case 0x133C1Cu: goto label_133c1c;
            case 0x133C20u: goto label_133c20;
            case 0x133C24u: goto label_133c24;
            case 0x133C28u: goto label_133c28;
            case 0x133C2Cu: goto label_133c2c;
            case 0x133C30u: goto label_133c30;
            case 0x133C34u: goto label_133c34;
            case 0x133C38u: goto label_133c38;
            case 0x133C3Cu: goto label_133c3c;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            case 0x133C48u: goto label_133c48;
            case 0x133C4Cu: goto label_133c4c;
            case 0x133C50u: goto label_133c50;
            case 0x133C54u: goto label_133c54;
            case 0x133C58u: goto label_133c58;
            case 0x133C5Cu: goto label_133c5c;
            case 0x133C60u: goto label_133c60;
            case 0x133C64u: goto label_133c64;
            case 0x133C68u: goto label_133c68;
            case 0x133C6Cu: goto label_133c6c;
            case 0x133C70u: goto label_133c70;
            case 0x133C74u: goto label_133c74;
            case 0x133C78u: goto label_133c78;
            case 0x133C7Cu: goto label_133c7c;
            case 0x133C80u: goto label_133c80;
            case 0x133C84u: goto label_133c84;
            case 0x133C88u: goto label_133c88;
            case 0x133C8Cu: goto label_133c8c;
            case 0x133C90u: goto label_133c90;
            case 0x133C94u: goto label_133c94;
            case 0x133C98u: goto label_133c98;
            case 0x133C9Cu: goto label_133c9c;
            case 0x133CA0u: goto label_133ca0;
            case 0x133CA4u: goto label_133ca4;
            case 0x133CA8u: goto label_133ca8;
            case 0x133CACu: goto label_133cac;
            case 0x133CB0u: goto label_133cb0;
            case 0x133CB4u: goto label_133cb4;
            case 0x133CB8u: goto label_133cb8;
            case 0x133CBCu: goto label_133cbc;
            case 0x133CC0u: goto label_133cc0;
            case 0x133CC4u: goto label_133cc4;
            case 0x133CC8u: goto label_133cc8;
            case 0x133CCCu: goto label_133ccc;
            case 0x133CD0u: goto label_133cd0;
            case 0x133CD4u: goto label_133cd4;
            case 0x133CD8u: goto label_133cd8;
            case 0x133CDCu: goto label_133cdc;
            case 0x133CE0u: goto label_133ce0;
            case 0x133CE4u: goto label_133ce4;
            case 0x133CE8u: goto label_133ce8;
            case 0x133CECu: goto label_133cec;
            case 0x133CF0u: goto label_133cf0;
            case 0x133CF4u: goto label_133cf4;
            case 0x133CF8u: goto label_133cf8;
            case 0x133CFCu: goto label_133cfc;
            case 0x133D00u: goto label_133d00;
            case 0x133D04u: goto label_133d04;
            case 0x133D08u: goto label_133d08;
            case 0x133D0Cu: goto label_133d0c;
            case 0x133D10u: goto label_133d10;
            case 0x133D14u: goto label_133d14;
            case 0x133D18u: goto label_133d18;
            case 0x133D1Cu: goto label_133d1c;
            case 0x133D20u: goto label_133d20;
            case 0x133D24u: goto label_133d24;
            case 0x133D28u: goto label_133d28;
            case 0x133D2Cu: goto label_133d2c;
            case 0x133D30u: goto label_133d30;
            case 0x133D34u: goto label_133d34;
            case 0x133D38u: goto label_133d38;
            case 0x133D3Cu: goto label_133d3c;
            case 0x133D40u: goto label_133d40;
            case 0x133D44u: goto label_133d44;
            case 0x133D48u: goto label_133d48;
            case 0x133D4Cu: goto label_133d4c;
            case 0x133D50u: goto label_133d50;
            case 0x133D54u: goto label_133d54;
            case 0x133D58u: goto label_133d58;
            case 0x133D5Cu: goto label_133d5c;
            case 0x133D60u: goto label_133d60;
            case 0x133D64u: goto label_133d64;
            case 0x133D68u: goto label_133d68;
            case 0x133D6Cu: goto label_133d6c;
            case 0x133D70u: goto label_133d70;
            case 0x133D74u: goto label_133d74;
            case 0x133D78u: goto label_133d78;
            case 0x133D7Cu: goto label_133d7c;
            case 0x133D80u: goto label_133d80;
            case 0x133D84u: goto label_133d84;
            case 0x133D88u: goto label_133d88;
            case 0x133D8Cu: goto label_133d8c;
            case 0x133D90u: goto label_133d90;
            case 0x133D94u: goto label_133d94;
            case 0x133D98u: goto label_133d98;
            case 0x133D9Cu: goto label_133d9c;
            case 0x133DA0u: goto label_133da0;
            case 0x133DA4u: goto label_133da4;
            case 0x133DA8u: goto label_133da8;
            case 0x133DACu: goto label_133dac;
            case 0x133DB0u: goto label_133db0;
            case 0x133DB4u: goto label_133db4;
            case 0x133DB8u: goto label_133db8;
            case 0x133DBCu: goto label_133dbc;
            case 0x133DC0u: goto label_133dc0;
            case 0x133DC4u: goto label_133dc4;
            case 0x133DC8u: goto label_133dc8;
            case 0x133DCCu: goto label_133dcc;
            case 0x133DD0u: goto label_133dd0;
            case 0x133DD4u: goto label_133dd4;
            case 0x133DD8u: goto label_133dd8;
            case 0x133DDCu: goto label_133ddc;
            case 0x133DE0u: goto label_133de0;
            case 0x133DE4u: goto label_133de4;
            case 0x133DE8u: goto label_133de8;
            case 0x133DECu: goto label_133dec;
            case 0x133DF0u: goto label_133df0;
            case 0x133DF4u: goto label_133df4;
            case 0x133DF8u: goto label_133df8;
            case 0x133DFCu: goto label_133dfc;
            case 0x133E00u: goto label_133e00;
            case 0x133E04u: goto label_133e04;
            case 0x133E08u: goto label_133e08;
            case 0x133E0Cu: goto label_133e0c;
            case 0x133E10u: goto label_133e10;
            case 0x133E14u: goto label_133e14;
            case 0x133E18u: goto label_133e18;
            case 0x133E1Cu: goto label_133e1c;
            case 0x133E20u: goto label_133e20;
            case 0x133E24u: goto label_133e24;
            case 0x133E28u: goto label_133e28;
            case 0x133E2Cu: goto label_133e2c;
            case 0x133E30u: goto label_133e30;
            case 0x133E34u: goto label_133e34;
            case 0x133E38u: goto label_133e38;
            case 0x133E3Cu: goto label_133e3c;
            case 0x133E40u: goto label_133e40;
            case 0x133E44u: goto label_133e44;
            case 0x133E48u: goto label_133e48;
            case 0x133E4Cu: goto label_133e4c;
            case 0x133E50u: goto label_133e50;
            case 0x133E54u: goto label_133e54;
            case 0x133E58u: goto label_133e58;
            case 0x133E5Cu: goto label_133e5c;
            case 0x133E60u: goto label_133e60;
            case 0x133E64u: goto label_133e64;
            case 0x133E68u: goto label_133e68;
            case 0x133E6Cu: goto label_133e6c;
            case 0x133E70u: goto label_133e70;
            case 0x133E74u: goto label_133e74;
            case 0x133E78u: goto label_133e78;
            case 0x133E7Cu: goto label_133e7c;
            case 0x133E80u: goto label_133e80;
            case 0x133E84u: goto label_133e84;
            case 0x133E88u: goto label_133e88;
            case 0x133E8Cu: goto label_133e8c;
            case 0x133E90u: goto label_133e90;
            case 0x133E94u: goto label_133e94;
            case 0x133E98u: goto label_133e98;
            case 0x133E9Cu: goto label_133e9c;
            case 0x133EA0u: goto label_133ea0;
            case 0x133EA4u: goto label_133ea4;
            case 0x133EA8u: goto label_133ea8;
            case 0x133EACu: goto label_133eac;
            case 0x133EB0u: goto label_133eb0;
            case 0x133EB4u: goto label_133eb4;
            case 0x133EB8u: goto label_133eb8;
            case 0x133EBCu: goto label_133ebc;
            case 0x133EC0u: goto label_133ec0;
            case 0x133EC4u: goto label_133ec4;
            case 0x133EC8u: goto label_133ec8;
            case 0x133ECCu: goto label_133ecc;
            case 0x133ED0u: goto label_133ed0;
            case 0x133ED4u: goto label_133ed4;
            case 0x133ED8u: goto label_133ed8;
            case 0x133EDCu: goto label_133edc;
            case 0x133EE0u: goto label_133ee0;
            case 0x133EE4u: goto label_133ee4;
            case 0x133EE8u: goto label_133ee8;
            case 0x133EECu: goto label_133eec;
            case 0x133EF0u: goto label_133ef0;
            case 0x133EF4u: goto label_133ef4;
            case 0x133EF8u: goto label_133ef8;
            case 0x133EFCu: goto label_133efc;
            case 0x133F00u: goto label_133f00;
            case 0x133F04u: goto label_133f04;
            case 0x133F08u: goto label_133f08;
            case 0x133F0Cu: goto label_133f0c;
            case 0x133F10u: goto label_133f10;
            case 0x133F14u: goto label_133f14;
            case 0x133F18u: goto label_133f18;
            case 0x133F1Cu: goto label_133f1c;
            case 0x133F20u: goto label_133f20;
            case 0x133F24u: goto label_133f24;
            case 0x133F28u: goto label_133f28;
            case 0x133F2Cu: goto label_133f2c;
            case 0x133F30u: goto label_133f30;
            case 0x133F34u: goto label_133f34;
            case 0x133F38u: goto label_133f38;
            case 0x133F3Cu: goto label_133f3c;
            case 0x133F40u: goto label_133f40;
            case 0x133F44u: goto label_133f44;
            case 0x133F48u: goto label_133f48;
            case 0x133F4Cu: goto label_133f4c;
            case 0x133F50u: goto label_133f50;
            case 0x133F54u: goto label_133f54;
            case 0x133F58u: goto label_133f58;
            case 0x133F5Cu: goto label_133f5c;
            case 0x133F60u: goto label_133f60;
            case 0x133F64u: goto label_133f64;
            case 0x133F68u: goto label_133f68;
            case 0x133F6Cu: goto label_133f6c;
            case 0x133F70u: goto label_133f70;
            case 0x133F74u: goto label_133f74;
            case 0x133F78u: goto label_133f78;
            case 0x133F7Cu: goto label_133f7c;
            case 0x133F80u: goto label_133f80;
            case 0x133F84u: goto label_133f84;
            case 0x133F88u: goto label_133f88;
            case 0x133F8Cu: goto label_133f8c;
            case 0x133F90u: goto label_133f90;
            case 0x133F94u: goto label_133f94;
            case 0x133F98u: goto label_133f98;
            case 0x133F9Cu: goto label_133f9c;
            case 0x133FA0u: goto label_133fa0;
            case 0x133FA4u: goto label_133fa4;
            case 0x133FA8u: goto label_133fa8;
            case 0x133FACu: goto label_133fac;
            case 0x133FB0u: goto label_133fb0;
            case 0x133FB4u: goto label_133fb4;
            case 0x133FB8u: goto label_133fb8;
            case 0x133FBCu: goto label_133fbc;
            case 0x133FC0u: goto label_133fc0;
            case 0x133FC4u: goto label_133fc4;
            case 0x133FC8u: goto label_133fc8;
            case 0x133FCCu: goto label_133fcc;
            case 0x133FD0u: goto label_133fd0;
            case 0x133FD4u: goto label_133fd4;
            case 0x133FD8u: goto label_133fd8;
            case 0x133FDCu: goto label_133fdc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133E88u; }
            if (ctx->pc != 0x133E88u) { return; }
        }
    }
    ctx->pc = 0x133E88u;
label_133e88:
    // 0x133e88: 0x200282d
    ctx->pc = 0x133e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133e8c:
    // 0x133e8c: 0x27b00010
    ctx->pc = 0x133e8cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
label_133e90:
    // 0x133e90: 0x3a0202d
    ctx->pc = 0x133e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_133e94:
    // 0x133e94: 0x3a0302d
    ctx->pc = 0x133e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_133e98:
    // 0x133e98: 0xc0501f8
label_133e9c:
    if (ctx->pc == 0x133E9Cu) {
        ctx->pc = 0x133E9Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133EA0u;
        goto label_133ea0;
    }
    ctx->pc = 0x133E98u;
    SET_GPR_U32(ctx, 31, 0x133EA0u);
    ctx->pc = 0x133E9Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1407E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001407E0_0x1407e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133EA0u; }
    }
    if (ctx->pc != 0x133EA0u) { return; }
    ctx->pc = 0x133EA0u;
label_133ea0:
    // 0x133ea0: 0x8e230000
    ctx->pc = 0x133ea0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_133ea4:
    // 0x133ea4: 0x220202d
    ctx->pc = 0x133ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133ea8:
    // 0x133ea8: 0x282d
    ctx->pc = 0x133ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133eac:
    // 0x133eac: 0x8c620020
    ctx->pc = 0x133eacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_133eb0:
    // 0x133eb0: 0x40f809
label_133eb4:
    if (ctx->pc == 0x133EB4u) {
        ctx->pc = 0x133EB4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133EB8u;
        goto label_133eb8;
    }
    ctx->pc = 0x133EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133EB8u);
        ctx->pc = 0x133EB4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133B48u: goto label_133b48;
            case 0x133B4Cu: goto label_133b4c;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B58u: goto label_133b58;
            case 0x133B5Cu: goto label_133b5c;
            case 0x133B60u: goto label_133b60;
            case 0x133B64u: goto label_133b64;
            case 0x133B68u: goto label_133b68;
            case 0x133B6Cu: goto label_133b6c;
            case 0x133B70u: goto label_133b70;
            case 0x133B74u: goto label_133b74;
            case 0x133B78u: goto label_133b78;
            case 0x133B7Cu: goto label_133b7c;
            case 0x133B80u: goto label_133b80;
            case 0x133B84u: goto label_133b84;
            case 0x133B88u: goto label_133b88;
            case 0x133B8Cu: goto label_133b8c;
            case 0x133B90u: goto label_133b90;
            case 0x133B94u: goto label_133b94;
            case 0x133B98u: goto label_133b98;
            case 0x133B9Cu: goto label_133b9c;
            case 0x133BA0u: goto label_133ba0;
            case 0x133BA4u: goto label_133ba4;
            case 0x133BA8u: goto label_133ba8;
            case 0x133BACu: goto label_133bac;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BB4u: goto label_133bb4;
            case 0x133BB8u: goto label_133bb8;
            case 0x133BBCu: goto label_133bbc;
            case 0x133BC0u: goto label_133bc0;
            case 0x133BC4u: goto label_133bc4;
            case 0x133BC8u: goto label_133bc8;
            case 0x133BCCu: goto label_133bcc;
            case 0x133BD0u: goto label_133bd0;
            case 0x133BD4u: goto label_133bd4;
            case 0x133BD8u: goto label_133bd8;
            case 0x133BDCu: goto label_133bdc;
            case 0x133BE0u: goto label_133be0;
            case 0x133BE4u: goto label_133be4;
            case 0x133BE8u: goto label_133be8;
            case 0x133BECu: goto label_133bec;
            case 0x133BF0u: goto label_133bf0;
            case 0x133BF4u: goto label_133bf4;
            case 0x133BF8u: goto label_133bf8;
            case 0x133BFCu: goto label_133bfc;
            case 0x133C00u: goto label_133c00;
            case 0x133C04u: goto label_133c04;
            case 0x133C08u: goto label_133c08;
            case 0x133C0Cu: goto label_133c0c;
            case 0x133C10u: goto label_133c10;
            case 0x133C14u: goto label_133c14;
            case 0x133C18u: goto label_133c18;
            case 0x133C1Cu: goto label_133c1c;
            case 0x133C20u: goto label_133c20;
            case 0x133C24u: goto label_133c24;
            case 0x133C28u: goto label_133c28;
            case 0x133C2Cu: goto label_133c2c;
            case 0x133C30u: goto label_133c30;
            case 0x133C34u: goto label_133c34;
            case 0x133C38u: goto label_133c38;
            case 0x133C3Cu: goto label_133c3c;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            case 0x133C48u: goto label_133c48;
            case 0x133C4Cu: goto label_133c4c;
            case 0x133C50u: goto label_133c50;
            case 0x133C54u: goto label_133c54;
            case 0x133C58u: goto label_133c58;
            case 0x133C5Cu: goto label_133c5c;
            case 0x133C60u: goto label_133c60;
            case 0x133C64u: goto label_133c64;
            case 0x133C68u: goto label_133c68;
            case 0x133C6Cu: goto label_133c6c;
            case 0x133C70u: goto label_133c70;
            case 0x133C74u: goto label_133c74;
            case 0x133C78u: goto label_133c78;
            case 0x133C7Cu: goto label_133c7c;
            case 0x133C80u: goto label_133c80;
            case 0x133C84u: goto label_133c84;
            case 0x133C88u: goto label_133c88;
            case 0x133C8Cu: goto label_133c8c;
            case 0x133C90u: goto label_133c90;
            case 0x133C94u: goto label_133c94;
            case 0x133C98u: goto label_133c98;
            case 0x133C9Cu: goto label_133c9c;
            case 0x133CA0u: goto label_133ca0;
            case 0x133CA4u: goto label_133ca4;
            case 0x133CA8u: goto label_133ca8;
            case 0x133CACu: goto label_133cac;
            case 0x133CB0u: goto label_133cb0;
            case 0x133CB4u: goto label_133cb4;
            case 0x133CB8u: goto label_133cb8;
            case 0x133CBCu: goto label_133cbc;
            case 0x133CC0u: goto label_133cc0;
            case 0x133CC4u: goto label_133cc4;
            case 0x133CC8u: goto label_133cc8;
            case 0x133CCCu: goto label_133ccc;
            case 0x133CD0u: goto label_133cd0;
            case 0x133CD4u: goto label_133cd4;
            case 0x133CD8u: goto label_133cd8;
            case 0x133CDCu: goto label_133cdc;
            case 0x133CE0u: goto label_133ce0;
            case 0x133CE4u: goto label_133ce4;
            case 0x133CE8u: goto label_133ce8;
            case 0x133CECu: goto label_133cec;
            case 0x133CF0u: goto label_133cf0;
            case 0x133CF4u: goto label_133cf4;
            case 0x133CF8u: goto label_133cf8;
            case 0x133CFCu: goto label_133cfc;
            case 0x133D00u: goto label_133d00;
            case 0x133D04u: goto label_133d04;
            case 0x133D08u: goto label_133d08;
            case 0x133D0Cu: goto label_133d0c;
            case 0x133D10u: goto label_133d10;
            case 0x133D14u: goto label_133d14;
            case 0x133D18u: goto label_133d18;
            case 0x133D1Cu: goto label_133d1c;
            case 0x133D20u: goto label_133d20;
            case 0x133D24u: goto label_133d24;
            case 0x133D28u: goto label_133d28;
            case 0x133D2Cu: goto label_133d2c;
            case 0x133D30u: goto label_133d30;
            case 0x133D34u: goto label_133d34;
            case 0x133D38u: goto label_133d38;
            case 0x133D3Cu: goto label_133d3c;
            case 0x133D40u: goto label_133d40;
            case 0x133D44u: goto label_133d44;
            case 0x133D48u: goto label_133d48;
            case 0x133D4Cu: goto label_133d4c;
            case 0x133D50u: goto label_133d50;
            case 0x133D54u: goto label_133d54;
            case 0x133D58u: goto label_133d58;
            case 0x133D5Cu: goto label_133d5c;
            case 0x133D60u: goto label_133d60;
            case 0x133D64u: goto label_133d64;
            case 0x133D68u: goto label_133d68;
            case 0x133D6Cu: goto label_133d6c;
            case 0x133D70u: goto label_133d70;
            case 0x133D74u: goto label_133d74;
            case 0x133D78u: goto label_133d78;
            case 0x133D7Cu: goto label_133d7c;
            case 0x133D80u: goto label_133d80;
            case 0x133D84u: goto label_133d84;
            case 0x133D88u: goto label_133d88;
            case 0x133D8Cu: goto label_133d8c;
            case 0x133D90u: goto label_133d90;
            case 0x133D94u: goto label_133d94;
            case 0x133D98u: goto label_133d98;
            case 0x133D9Cu: goto label_133d9c;
            case 0x133DA0u: goto label_133da0;
            case 0x133DA4u: goto label_133da4;
            case 0x133DA8u: goto label_133da8;
            case 0x133DACu: goto label_133dac;
            case 0x133DB0u: goto label_133db0;
            case 0x133DB4u: goto label_133db4;
            case 0x133DB8u: goto label_133db8;
            case 0x133DBCu: goto label_133dbc;
            case 0x133DC0u: goto label_133dc0;
            case 0x133DC4u: goto label_133dc4;
            case 0x133DC8u: goto label_133dc8;
            case 0x133DCCu: goto label_133dcc;
            case 0x133DD0u: goto label_133dd0;
            case 0x133DD4u: goto label_133dd4;
            case 0x133DD8u: goto label_133dd8;
            case 0x133DDCu: goto label_133ddc;
            case 0x133DE0u: goto label_133de0;
            case 0x133DE4u: goto label_133de4;
            case 0x133DE8u: goto label_133de8;
            case 0x133DECu: goto label_133dec;
            case 0x133DF0u: goto label_133df0;
            case 0x133DF4u: goto label_133df4;
            case 0x133DF8u: goto label_133df8;
            case 0x133DFCu: goto label_133dfc;
            case 0x133E00u: goto label_133e00;
            case 0x133E04u: goto label_133e04;
            case 0x133E08u: goto label_133e08;
            case 0x133E0Cu: goto label_133e0c;
            case 0x133E10u: goto label_133e10;
            case 0x133E14u: goto label_133e14;
            case 0x133E18u: goto label_133e18;
            case 0x133E1Cu: goto label_133e1c;
            case 0x133E20u: goto label_133e20;
            case 0x133E24u: goto label_133e24;
            case 0x133E28u: goto label_133e28;
            case 0x133E2Cu: goto label_133e2c;
            case 0x133E30u: goto label_133e30;
            case 0x133E34u: goto label_133e34;
            case 0x133E38u: goto label_133e38;
            case 0x133E3Cu: goto label_133e3c;
            case 0x133E40u: goto label_133e40;
            case 0x133E44u: goto label_133e44;
            case 0x133E48u: goto label_133e48;
            case 0x133E4Cu: goto label_133e4c;
            case 0x133E50u: goto label_133e50;
            case 0x133E54u: goto label_133e54;
            case 0x133E58u: goto label_133e58;
            case 0x133E5Cu: goto label_133e5c;
            case 0x133E60u: goto label_133e60;
            case 0x133E64u: goto label_133e64;
            case 0x133E68u: goto label_133e68;
            case 0x133E6Cu: goto label_133e6c;
            case 0x133E70u: goto label_133e70;
            case 0x133E74u: goto label_133e74;
            case 0x133E78u: goto label_133e78;
            case 0x133E7Cu: goto label_133e7c;
            case 0x133E80u: goto label_133e80;
            case 0x133E84u: goto label_133e84;
            case 0x133E88u: goto label_133e88;
            case 0x133E8Cu: goto label_133e8c;
            case 0x133E90u: goto label_133e90;
            case 0x133E94u: goto label_133e94;
            case 0x133E98u: goto label_133e98;
            case 0x133E9Cu: goto label_133e9c;
            case 0x133EA0u: goto label_133ea0;
            case 0x133EA4u: goto label_133ea4;
            case 0x133EA8u: goto label_133ea8;
            case 0x133EACu: goto label_133eac;
            case 0x133EB0u: goto label_133eb0;
            case 0x133EB4u: goto label_133eb4;
            case 0x133EB8u: goto label_133eb8;
            case 0x133EBCu: goto label_133ebc;
            case 0x133EC0u: goto label_133ec0;
            case 0x133EC4u: goto label_133ec4;
            case 0x133EC8u: goto label_133ec8;
            case 0x133ECCu: goto label_133ecc;
            case 0x133ED0u: goto label_133ed0;
            case 0x133ED4u: goto label_133ed4;
            case 0x133ED8u: goto label_133ed8;
            case 0x133EDCu: goto label_133edc;
            case 0x133EE0u: goto label_133ee0;
            case 0x133EE4u: goto label_133ee4;
            case 0x133EE8u: goto label_133ee8;
            case 0x133EECu: goto label_133eec;
            case 0x133EF0u: goto label_133ef0;
            case 0x133EF4u: goto label_133ef4;
            case 0x133EF8u: goto label_133ef8;
            case 0x133EFCu: goto label_133efc;
            case 0x133F00u: goto label_133f00;
            case 0x133F04u: goto label_133f04;
            case 0x133F08u: goto label_133f08;
            case 0x133F0Cu: goto label_133f0c;
            case 0x133F10u: goto label_133f10;
            case 0x133F14u: goto label_133f14;
            case 0x133F18u: goto label_133f18;
            case 0x133F1Cu: goto label_133f1c;
            case 0x133F20u: goto label_133f20;
            case 0x133F24u: goto label_133f24;
            case 0x133F28u: goto label_133f28;
            case 0x133F2Cu: goto label_133f2c;
            case 0x133F30u: goto label_133f30;
            case 0x133F34u: goto label_133f34;
            case 0x133F38u: goto label_133f38;
            case 0x133F3Cu: goto label_133f3c;
            case 0x133F40u: goto label_133f40;
            case 0x133F44u: goto label_133f44;
            case 0x133F48u: goto label_133f48;
            case 0x133F4Cu: goto label_133f4c;
            case 0x133F50u: goto label_133f50;
            case 0x133F54u: goto label_133f54;
            case 0x133F58u: goto label_133f58;
            case 0x133F5Cu: goto label_133f5c;
            case 0x133F60u: goto label_133f60;
            case 0x133F64u: goto label_133f64;
            case 0x133F68u: goto label_133f68;
            case 0x133F6Cu: goto label_133f6c;
            case 0x133F70u: goto label_133f70;
            case 0x133F74u: goto label_133f74;
            case 0x133F78u: goto label_133f78;
            case 0x133F7Cu: goto label_133f7c;
            case 0x133F80u: goto label_133f80;
            case 0x133F84u: goto label_133f84;
            case 0x133F88u: goto label_133f88;
            case 0x133F8Cu: goto label_133f8c;
            case 0x133F90u: goto label_133f90;
            case 0x133F94u: goto label_133f94;
            case 0x133F98u: goto label_133f98;
            case 0x133F9Cu: goto label_133f9c;
            case 0x133FA0u: goto label_133fa0;
            case 0x133FA4u: goto label_133fa4;
            case 0x133FA8u: goto label_133fa8;
            case 0x133FACu: goto label_133fac;
            case 0x133FB0u: goto label_133fb0;
            case 0x133FB4u: goto label_133fb4;
            case 0x133FB8u: goto label_133fb8;
            case 0x133FBCu: goto label_133fbc;
            case 0x133FC0u: goto label_133fc0;
            case 0x133FC4u: goto label_133fc4;
            case 0x133FC8u: goto label_133fc8;
            case 0x133FCCu: goto label_133fcc;
            case 0x133FD0u: goto label_133fd0;
            case 0x133FD4u: goto label_133fd4;
            case 0x133FD8u: goto label_133fd8;
            case 0x133FDCu: goto label_133fdc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133EB8u; }
            if (ctx->pc != 0x133EB8u) { return; }
        }
    }
    ctx->pc = 0x133EB8u;
label_133eb8:
    // 0x133eb8: 0x8e230000
    ctx->pc = 0x133eb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_133ebc:
    // 0x133ebc: 0x220202d
    ctx->pc = 0x133ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133ec0:
    // 0x133ec0: 0x200302d
    ctx->pc = 0x133ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133ec4:
    // 0x133ec4: 0x8c62001c
    ctx->pc = 0x133ec4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_133ec8:
    // 0x133ec8: 0x40f809
label_133ecc:
    if (ctx->pc == 0x133ECCu) {
        ctx->pc = 0x133ECCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x133ED0u;
        goto label_133ed0;
    }
    ctx->pc = 0x133EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133ED0u);
        ctx->pc = 0x133ECCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133B48u: goto label_133b48;
            case 0x133B4Cu: goto label_133b4c;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B58u: goto label_133b58;
            case 0x133B5Cu: goto label_133b5c;
            case 0x133B60u: goto label_133b60;
            case 0x133B64u: goto label_133b64;
            case 0x133B68u: goto label_133b68;
            case 0x133B6Cu: goto label_133b6c;
            case 0x133B70u: goto label_133b70;
            case 0x133B74u: goto label_133b74;
            case 0x133B78u: goto label_133b78;
            case 0x133B7Cu: goto label_133b7c;
            case 0x133B80u: goto label_133b80;
            case 0x133B84u: goto label_133b84;
            case 0x133B88u: goto label_133b88;
            case 0x133B8Cu: goto label_133b8c;
            case 0x133B90u: goto label_133b90;
            case 0x133B94u: goto label_133b94;
            case 0x133B98u: goto label_133b98;
            case 0x133B9Cu: goto label_133b9c;
            case 0x133BA0u: goto label_133ba0;
            case 0x133BA4u: goto label_133ba4;
            case 0x133BA8u: goto label_133ba8;
            case 0x133BACu: goto label_133bac;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BB4u: goto label_133bb4;
            case 0x133BB8u: goto label_133bb8;
            case 0x133BBCu: goto label_133bbc;
            case 0x133BC0u: goto label_133bc0;
            case 0x133BC4u: goto label_133bc4;
            case 0x133BC8u: goto label_133bc8;
            case 0x133BCCu: goto label_133bcc;
            case 0x133BD0u: goto label_133bd0;
            case 0x133BD4u: goto label_133bd4;
            case 0x133BD8u: goto label_133bd8;
            case 0x133BDCu: goto label_133bdc;
            case 0x133BE0u: goto label_133be0;
            case 0x133BE4u: goto label_133be4;
            case 0x133BE8u: goto label_133be8;
            case 0x133BECu: goto label_133bec;
            case 0x133BF0u: goto label_133bf0;
            case 0x133BF4u: goto label_133bf4;
            case 0x133BF8u: goto label_133bf8;
            case 0x133BFCu: goto label_133bfc;
            case 0x133C00u: goto label_133c00;
            case 0x133C04u: goto label_133c04;
            case 0x133C08u: goto label_133c08;
            case 0x133C0Cu: goto label_133c0c;
            case 0x133C10u: goto label_133c10;
            case 0x133C14u: goto label_133c14;
            case 0x133C18u: goto label_133c18;
            case 0x133C1Cu: goto label_133c1c;
            case 0x133C20u: goto label_133c20;
            case 0x133C24u: goto label_133c24;
            case 0x133C28u: goto label_133c28;
            case 0x133C2Cu: goto label_133c2c;
            case 0x133C30u: goto label_133c30;
            case 0x133C34u: goto label_133c34;
            case 0x133C38u: goto label_133c38;
            case 0x133C3Cu: goto label_133c3c;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            case 0x133C48u: goto label_133c48;
            case 0x133C4Cu: goto label_133c4c;
            case 0x133C50u: goto label_133c50;
            case 0x133C54u: goto label_133c54;
            case 0x133C58u: goto label_133c58;
            case 0x133C5Cu: goto label_133c5c;
            case 0x133C60u: goto label_133c60;
            case 0x133C64u: goto label_133c64;
            case 0x133C68u: goto label_133c68;
            case 0x133C6Cu: goto label_133c6c;
            case 0x133C70u: goto label_133c70;
            case 0x133C74u: goto label_133c74;
            case 0x133C78u: goto label_133c78;
            case 0x133C7Cu: goto label_133c7c;
            case 0x133C80u: goto label_133c80;
            case 0x133C84u: goto label_133c84;
            case 0x133C88u: goto label_133c88;
            case 0x133C8Cu: goto label_133c8c;
            case 0x133C90u: goto label_133c90;
            case 0x133C94u: goto label_133c94;
            case 0x133C98u: goto label_133c98;
            case 0x133C9Cu: goto label_133c9c;
            case 0x133CA0u: goto label_133ca0;
            case 0x133CA4u: goto label_133ca4;
            case 0x133CA8u: goto label_133ca8;
            case 0x133CACu: goto label_133cac;
            case 0x133CB0u: goto label_133cb0;
            case 0x133CB4u: goto label_133cb4;
            case 0x133CB8u: goto label_133cb8;
            case 0x133CBCu: goto label_133cbc;
            case 0x133CC0u: goto label_133cc0;
            case 0x133CC4u: goto label_133cc4;
            case 0x133CC8u: goto label_133cc8;
            case 0x133CCCu: goto label_133ccc;
            case 0x133CD0u: goto label_133cd0;
            case 0x133CD4u: goto label_133cd4;
            case 0x133CD8u: goto label_133cd8;
            case 0x133CDCu: goto label_133cdc;
            case 0x133CE0u: goto label_133ce0;
            case 0x133CE4u: goto label_133ce4;
            case 0x133CE8u: goto label_133ce8;
            case 0x133CECu: goto label_133cec;
            case 0x133CF0u: goto label_133cf0;
            case 0x133CF4u: goto label_133cf4;
            case 0x133CF8u: goto label_133cf8;
            case 0x133CFCu: goto label_133cfc;
            case 0x133D00u: goto label_133d00;
            case 0x133D04u: goto label_133d04;
            case 0x133D08u: goto label_133d08;
            case 0x133D0Cu: goto label_133d0c;
            case 0x133D10u: goto label_133d10;
            case 0x133D14u: goto label_133d14;
            case 0x133D18u: goto label_133d18;
            case 0x133D1Cu: goto label_133d1c;
            case 0x133D20u: goto label_133d20;
            case 0x133D24u: goto label_133d24;
            case 0x133D28u: goto label_133d28;
            case 0x133D2Cu: goto label_133d2c;
            case 0x133D30u: goto label_133d30;
            case 0x133D34u: goto label_133d34;
            case 0x133D38u: goto label_133d38;
            case 0x133D3Cu: goto label_133d3c;
            case 0x133D40u: goto label_133d40;
            case 0x133D44u: goto label_133d44;
            case 0x133D48u: goto label_133d48;
            case 0x133D4Cu: goto label_133d4c;
            case 0x133D50u: goto label_133d50;
            case 0x133D54u: goto label_133d54;
            case 0x133D58u: goto label_133d58;
            case 0x133D5Cu: goto label_133d5c;
            case 0x133D60u: goto label_133d60;
            case 0x133D64u: goto label_133d64;
            case 0x133D68u: goto label_133d68;
            case 0x133D6Cu: goto label_133d6c;
            case 0x133D70u: goto label_133d70;
            case 0x133D74u: goto label_133d74;
            case 0x133D78u: goto label_133d78;
            case 0x133D7Cu: goto label_133d7c;
            case 0x133D80u: goto label_133d80;
            case 0x133D84u: goto label_133d84;
            case 0x133D88u: goto label_133d88;
            case 0x133D8Cu: goto label_133d8c;
            case 0x133D90u: goto label_133d90;
            case 0x133D94u: goto label_133d94;
            case 0x133D98u: goto label_133d98;
            case 0x133D9Cu: goto label_133d9c;
            case 0x133DA0u: goto label_133da0;
            case 0x133DA4u: goto label_133da4;
            case 0x133DA8u: goto label_133da8;
            case 0x133DACu: goto label_133dac;
            case 0x133DB0u: goto label_133db0;
            case 0x133DB4u: goto label_133db4;
            case 0x133DB8u: goto label_133db8;
            case 0x133DBCu: goto label_133dbc;
            case 0x133DC0u: goto label_133dc0;
            case 0x133DC4u: goto label_133dc4;
            case 0x133DC8u: goto label_133dc8;
            case 0x133DCCu: goto label_133dcc;
            case 0x133DD0u: goto label_133dd0;
            case 0x133DD4u: goto label_133dd4;
            case 0x133DD8u: goto label_133dd8;
            case 0x133DDCu: goto label_133ddc;
            case 0x133DE0u: goto label_133de0;
            case 0x133DE4u: goto label_133de4;
            case 0x133DE8u: goto label_133de8;
            case 0x133DECu: goto label_133dec;
            case 0x133DF0u: goto label_133df0;
            case 0x133DF4u: goto label_133df4;
            case 0x133DF8u: goto label_133df8;
            case 0x133DFCu: goto label_133dfc;
            case 0x133E00u: goto label_133e00;
            case 0x133E04u: goto label_133e04;
            case 0x133E08u: goto label_133e08;
            case 0x133E0Cu: goto label_133e0c;
            case 0x133E10u: goto label_133e10;
            case 0x133E14u: goto label_133e14;
            case 0x133E18u: goto label_133e18;
            case 0x133E1Cu: goto label_133e1c;
            case 0x133E20u: goto label_133e20;
            case 0x133E24u: goto label_133e24;
            case 0x133E28u: goto label_133e28;
            case 0x133E2Cu: goto label_133e2c;
            case 0x133E30u: goto label_133e30;
            case 0x133E34u: goto label_133e34;
            case 0x133E38u: goto label_133e38;
            case 0x133E3Cu: goto label_133e3c;
            case 0x133E40u: goto label_133e40;
            case 0x133E44u: goto label_133e44;
            case 0x133E48u: goto label_133e48;
            case 0x133E4Cu: goto label_133e4c;
            case 0x133E50u: goto label_133e50;
            case 0x133E54u: goto label_133e54;
            case 0x133E58u: goto label_133e58;
            case 0x133E5Cu: goto label_133e5c;
            case 0x133E60u: goto label_133e60;
            case 0x133E64u: goto label_133e64;
            case 0x133E68u: goto label_133e68;
            case 0x133E6Cu: goto label_133e6c;
            case 0x133E70u: goto label_133e70;
            case 0x133E74u: goto label_133e74;
            case 0x133E78u: goto label_133e78;
            case 0x133E7Cu: goto label_133e7c;
            case 0x133E80u: goto label_133e80;
            case 0x133E84u: goto label_133e84;
            case 0x133E88u: goto label_133e88;
            case 0x133E8Cu: goto label_133e8c;
            case 0x133E90u: goto label_133e90;
            case 0x133E94u: goto label_133e94;
            case 0x133E98u: goto label_133e98;
            case 0x133E9Cu: goto label_133e9c;
            case 0x133EA0u: goto label_133ea0;
            case 0x133EA4u: goto label_133ea4;
            case 0x133EA8u: goto label_133ea8;
            case 0x133EACu: goto label_133eac;
            case 0x133EB0u: goto label_133eb0;
            case 0x133EB4u: goto label_133eb4;
            case 0x133EB8u: goto label_133eb8;
            case 0x133EBCu: goto label_133ebc;
            case 0x133EC0u: goto label_133ec0;
            case 0x133EC4u: goto label_133ec4;
            case 0x133EC8u: goto label_133ec8;
            case 0x133ECCu: goto label_133ecc;
            case 0x133ED0u: goto label_133ed0;
            case 0x133ED4u: goto label_133ed4;
            case 0x133ED8u: goto label_133ed8;
            case 0x133EDCu: goto label_133edc;
            case 0x133EE0u: goto label_133ee0;
            case 0x133EE4u: goto label_133ee4;
            case 0x133EE8u: goto label_133ee8;
            case 0x133EECu: goto label_133eec;
            case 0x133EF0u: goto label_133ef0;
            case 0x133EF4u: goto label_133ef4;
            case 0x133EF8u: goto label_133ef8;
            case 0x133EFCu: goto label_133efc;
            case 0x133F00u: goto label_133f00;
            case 0x133F04u: goto label_133f04;
            case 0x133F08u: goto label_133f08;
            case 0x133F0Cu: goto label_133f0c;
            case 0x133F10u: goto label_133f10;
            case 0x133F14u: goto label_133f14;
            case 0x133F18u: goto label_133f18;
            case 0x133F1Cu: goto label_133f1c;
            case 0x133F20u: goto label_133f20;
            case 0x133F24u: goto label_133f24;
            case 0x133F28u: goto label_133f28;
            case 0x133F2Cu: goto label_133f2c;
            case 0x133F30u: goto label_133f30;
            case 0x133F34u: goto label_133f34;
            case 0x133F38u: goto label_133f38;
            case 0x133F3Cu: goto label_133f3c;
            case 0x133F40u: goto label_133f40;
            case 0x133F44u: goto label_133f44;
            case 0x133F48u: goto label_133f48;
            case 0x133F4Cu: goto label_133f4c;
            case 0x133F50u: goto label_133f50;
            case 0x133F54u: goto label_133f54;
            case 0x133F58u: goto label_133f58;
            case 0x133F5Cu: goto label_133f5c;
            case 0x133F60u: goto label_133f60;
            case 0x133F64u: goto label_133f64;
            case 0x133F68u: goto label_133f68;
            case 0x133F6Cu: goto label_133f6c;
            case 0x133F70u: goto label_133f70;
            case 0x133F74u: goto label_133f74;
            case 0x133F78u: goto label_133f78;
            case 0x133F7Cu: goto label_133f7c;
            case 0x133F80u: goto label_133f80;
            case 0x133F84u: goto label_133f84;
            case 0x133F88u: goto label_133f88;
            case 0x133F8Cu: goto label_133f8c;
            case 0x133F90u: goto label_133f90;
            case 0x133F94u: goto label_133f94;
            case 0x133F98u: goto label_133f98;
            case 0x133F9Cu: goto label_133f9c;
            case 0x133FA0u: goto label_133fa0;
            case 0x133FA4u: goto label_133fa4;
            case 0x133FA8u: goto label_133fa8;
            case 0x133FACu: goto label_133fac;
            case 0x133FB0u: goto label_133fb0;
            case 0x133FB4u: goto label_133fb4;
            case 0x133FB8u: goto label_133fb8;
            case 0x133FBCu: goto label_133fbc;
            case 0x133FC0u: goto label_133fc0;
            case 0x133FC4u: goto label_133fc4;
            case 0x133FC8u: goto label_133fc8;
            case 0x133FCCu: goto label_133fcc;
            case 0x133FD0u: goto label_133fd0;
            case 0x133FD4u: goto label_133fd4;
            case 0x133FD8u: goto label_133fd8;
            case 0x133FDCu: goto label_133fdc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133ED0u; }
            if (ctx->pc != 0x133ED0u) { return; }
        }
    }
    ctx->pc = 0x133ED0u;
label_133ed0:
    // 0x133ed0: 0x10000019
label_133ed4:
    if (ctx->pc == 0x133ED4u) {
        ctx->pc = 0x133ED8u;
        goto label_133ed8;
    }
    ctx->pc = 0x133ED0u;
    {
        const bool branch_taken_0x133ed0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x133ed0) {
            ctx->pc = 0x133F38u;
            goto label_133f38;
        }
    }
    ctx->pc = 0x133ED8u;
label_133ed8:
    // 0x133ed8: 0x8e230000
    ctx->pc = 0x133ed8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_133edc:
    // 0x133edc: 0x3a0302d
    ctx->pc = 0x133edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_133ee0:
    // 0x133ee0: 0x220202d
    ctx->pc = 0x133ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133ee4:
    // 0x133ee4: 0x8c620020
    ctx->pc = 0x133ee4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_133ee8:
    // 0x133ee8: 0x40f809
label_133eec:
    if (ctx->pc == 0x133EECu) {
        ctx->pc = 0x133EECu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133EF0u;
        goto label_133ef0;
    }
    ctx->pc = 0x133EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133EF0u);
        ctx->pc = 0x133EECu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133B48u: goto label_133b48;
            case 0x133B4Cu: goto label_133b4c;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B58u: goto label_133b58;
            case 0x133B5Cu: goto label_133b5c;
            case 0x133B60u: goto label_133b60;
            case 0x133B64u: goto label_133b64;
            case 0x133B68u: goto label_133b68;
            case 0x133B6Cu: goto label_133b6c;
            case 0x133B70u: goto label_133b70;
            case 0x133B74u: goto label_133b74;
            case 0x133B78u: goto label_133b78;
            case 0x133B7Cu: goto label_133b7c;
            case 0x133B80u: goto label_133b80;
            case 0x133B84u: goto label_133b84;
            case 0x133B88u: goto label_133b88;
            case 0x133B8Cu: goto label_133b8c;
            case 0x133B90u: goto label_133b90;
            case 0x133B94u: goto label_133b94;
            case 0x133B98u: goto label_133b98;
            case 0x133B9Cu: goto label_133b9c;
            case 0x133BA0u: goto label_133ba0;
            case 0x133BA4u: goto label_133ba4;
            case 0x133BA8u: goto label_133ba8;
            case 0x133BACu: goto label_133bac;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BB4u: goto label_133bb4;
            case 0x133BB8u: goto label_133bb8;
            case 0x133BBCu: goto label_133bbc;
            case 0x133BC0u: goto label_133bc0;
            case 0x133BC4u: goto label_133bc4;
            case 0x133BC8u: goto label_133bc8;
            case 0x133BCCu: goto label_133bcc;
            case 0x133BD0u: goto label_133bd0;
            case 0x133BD4u: goto label_133bd4;
            case 0x133BD8u: goto label_133bd8;
            case 0x133BDCu: goto label_133bdc;
            case 0x133BE0u: goto label_133be0;
            case 0x133BE4u: goto label_133be4;
            case 0x133BE8u: goto label_133be8;
            case 0x133BECu: goto label_133bec;
            case 0x133BF0u: goto label_133bf0;
            case 0x133BF4u: goto label_133bf4;
            case 0x133BF8u: goto label_133bf8;
            case 0x133BFCu: goto label_133bfc;
            case 0x133C00u: goto label_133c00;
            case 0x133C04u: goto label_133c04;
            case 0x133C08u: goto label_133c08;
            case 0x133C0Cu: goto label_133c0c;
            case 0x133C10u: goto label_133c10;
            case 0x133C14u: goto label_133c14;
            case 0x133C18u: goto label_133c18;
            case 0x133C1Cu: goto label_133c1c;
            case 0x133C20u: goto label_133c20;
            case 0x133C24u: goto label_133c24;
            case 0x133C28u: goto label_133c28;
            case 0x133C2Cu: goto label_133c2c;
            case 0x133C30u: goto label_133c30;
            case 0x133C34u: goto label_133c34;
            case 0x133C38u: goto label_133c38;
            case 0x133C3Cu: goto label_133c3c;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            case 0x133C48u: goto label_133c48;
            case 0x133C4Cu: goto label_133c4c;
            case 0x133C50u: goto label_133c50;
            case 0x133C54u: goto label_133c54;
            case 0x133C58u: goto label_133c58;
            case 0x133C5Cu: goto label_133c5c;
            case 0x133C60u: goto label_133c60;
            case 0x133C64u: goto label_133c64;
            case 0x133C68u: goto label_133c68;
            case 0x133C6Cu: goto label_133c6c;
            case 0x133C70u: goto label_133c70;
            case 0x133C74u: goto label_133c74;
            case 0x133C78u: goto label_133c78;
            case 0x133C7Cu: goto label_133c7c;
            case 0x133C80u: goto label_133c80;
            case 0x133C84u: goto label_133c84;
            case 0x133C88u: goto label_133c88;
            case 0x133C8Cu: goto label_133c8c;
            case 0x133C90u: goto label_133c90;
            case 0x133C94u: goto label_133c94;
            case 0x133C98u: goto label_133c98;
            case 0x133C9Cu: goto label_133c9c;
            case 0x133CA0u: goto label_133ca0;
            case 0x133CA4u: goto label_133ca4;
            case 0x133CA8u: goto label_133ca8;
            case 0x133CACu: goto label_133cac;
            case 0x133CB0u: goto label_133cb0;
            case 0x133CB4u: goto label_133cb4;
            case 0x133CB8u: goto label_133cb8;
            case 0x133CBCu: goto label_133cbc;
            case 0x133CC0u: goto label_133cc0;
            case 0x133CC4u: goto label_133cc4;
            case 0x133CC8u: goto label_133cc8;
            case 0x133CCCu: goto label_133ccc;
            case 0x133CD0u: goto label_133cd0;
            case 0x133CD4u: goto label_133cd4;
            case 0x133CD8u: goto label_133cd8;
            case 0x133CDCu: goto label_133cdc;
            case 0x133CE0u: goto label_133ce0;
            case 0x133CE4u: goto label_133ce4;
            case 0x133CE8u: goto label_133ce8;
            case 0x133CECu: goto label_133cec;
            case 0x133CF0u: goto label_133cf0;
            case 0x133CF4u: goto label_133cf4;
            case 0x133CF8u: goto label_133cf8;
            case 0x133CFCu: goto label_133cfc;
            case 0x133D00u: goto label_133d00;
            case 0x133D04u: goto label_133d04;
            case 0x133D08u: goto label_133d08;
            case 0x133D0Cu: goto label_133d0c;
            case 0x133D10u: goto label_133d10;
            case 0x133D14u: goto label_133d14;
            case 0x133D18u: goto label_133d18;
            case 0x133D1Cu: goto label_133d1c;
            case 0x133D20u: goto label_133d20;
            case 0x133D24u: goto label_133d24;
            case 0x133D28u: goto label_133d28;
            case 0x133D2Cu: goto label_133d2c;
            case 0x133D30u: goto label_133d30;
            case 0x133D34u: goto label_133d34;
            case 0x133D38u: goto label_133d38;
            case 0x133D3Cu: goto label_133d3c;
            case 0x133D40u: goto label_133d40;
            case 0x133D44u: goto label_133d44;
            case 0x133D48u: goto label_133d48;
            case 0x133D4Cu: goto label_133d4c;
            case 0x133D50u: goto label_133d50;
            case 0x133D54u: goto label_133d54;
            case 0x133D58u: goto label_133d58;
            case 0x133D5Cu: goto label_133d5c;
            case 0x133D60u: goto label_133d60;
            case 0x133D64u: goto label_133d64;
            case 0x133D68u: goto label_133d68;
            case 0x133D6Cu: goto label_133d6c;
            case 0x133D70u: goto label_133d70;
            case 0x133D74u: goto label_133d74;
            case 0x133D78u: goto label_133d78;
            case 0x133D7Cu: goto label_133d7c;
            case 0x133D80u: goto label_133d80;
            case 0x133D84u: goto label_133d84;
            case 0x133D88u: goto label_133d88;
            case 0x133D8Cu: goto label_133d8c;
            case 0x133D90u: goto label_133d90;
            case 0x133D94u: goto label_133d94;
            case 0x133D98u: goto label_133d98;
            case 0x133D9Cu: goto label_133d9c;
            case 0x133DA0u: goto label_133da0;
            case 0x133DA4u: goto label_133da4;
            case 0x133DA8u: goto label_133da8;
            case 0x133DACu: goto label_133dac;
            case 0x133DB0u: goto label_133db0;
            case 0x133DB4u: goto label_133db4;
            case 0x133DB8u: goto label_133db8;
            case 0x133DBCu: goto label_133dbc;
            case 0x133DC0u: goto label_133dc0;
            case 0x133DC4u: goto label_133dc4;
            case 0x133DC8u: goto label_133dc8;
            case 0x133DCCu: goto label_133dcc;
            case 0x133DD0u: goto label_133dd0;
            case 0x133DD4u: goto label_133dd4;
            case 0x133DD8u: goto label_133dd8;
            case 0x133DDCu: goto label_133ddc;
            case 0x133DE0u: goto label_133de0;
            case 0x133DE4u: goto label_133de4;
            case 0x133DE8u: goto label_133de8;
            case 0x133DECu: goto label_133dec;
            case 0x133DF0u: goto label_133df0;
            case 0x133DF4u: goto label_133df4;
            case 0x133DF8u: goto label_133df8;
            case 0x133DFCu: goto label_133dfc;
            case 0x133E00u: goto label_133e00;
            case 0x133E04u: goto label_133e04;
            case 0x133E08u: goto label_133e08;
            case 0x133E0Cu: goto label_133e0c;
            case 0x133E10u: goto label_133e10;
            case 0x133E14u: goto label_133e14;
            case 0x133E18u: goto label_133e18;
            case 0x133E1Cu: goto label_133e1c;
            case 0x133E20u: goto label_133e20;
            case 0x133E24u: goto label_133e24;
            case 0x133E28u: goto label_133e28;
            case 0x133E2Cu: goto label_133e2c;
            case 0x133E30u: goto label_133e30;
            case 0x133E34u: goto label_133e34;
            case 0x133E38u: goto label_133e38;
            case 0x133E3Cu: goto label_133e3c;
            case 0x133E40u: goto label_133e40;
            case 0x133E44u: goto label_133e44;
            case 0x133E48u: goto label_133e48;
            case 0x133E4Cu: goto label_133e4c;
            case 0x133E50u: goto label_133e50;
            case 0x133E54u: goto label_133e54;
            case 0x133E58u: goto label_133e58;
            case 0x133E5Cu: goto label_133e5c;
            case 0x133E60u: goto label_133e60;
            case 0x133E64u: goto label_133e64;
            case 0x133E68u: goto label_133e68;
            case 0x133E6Cu: goto label_133e6c;
            case 0x133E70u: goto label_133e70;
            case 0x133E74u: goto label_133e74;
            case 0x133E78u: goto label_133e78;
            case 0x133E7Cu: goto label_133e7c;
            case 0x133E80u: goto label_133e80;
            case 0x133E84u: goto label_133e84;
            case 0x133E88u: goto label_133e88;
            case 0x133E8Cu: goto label_133e8c;
            case 0x133E90u: goto label_133e90;
            case 0x133E94u: goto label_133e94;
            case 0x133E98u: goto label_133e98;
            case 0x133E9Cu: goto label_133e9c;
            case 0x133EA0u: goto label_133ea0;
            case 0x133EA4u: goto label_133ea4;
            case 0x133EA8u: goto label_133ea8;
            case 0x133EACu: goto label_133eac;
            case 0x133EB0u: goto label_133eb0;
            case 0x133EB4u: goto label_133eb4;
            case 0x133EB8u: goto label_133eb8;
            case 0x133EBCu: goto label_133ebc;
            case 0x133EC0u: goto label_133ec0;
            case 0x133EC4u: goto label_133ec4;
            case 0x133EC8u: goto label_133ec8;
            case 0x133ECCu: goto label_133ecc;
            case 0x133ED0u: goto label_133ed0;
            case 0x133ED4u: goto label_133ed4;
            case 0x133ED8u: goto label_133ed8;
            case 0x133EDCu: goto label_133edc;
            case 0x133EE0u: goto label_133ee0;
            case 0x133EE4u: goto label_133ee4;
            case 0x133EE8u: goto label_133ee8;
            case 0x133EECu: goto label_133eec;
            case 0x133EF0u: goto label_133ef0;
            case 0x133EF4u: goto label_133ef4;
            case 0x133EF8u: goto label_133ef8;
            case 0x133EFCu: goto label_133efc;
            case 0x133F00u: goto label_133f00;
            case 0x133F04u: goto label_133f04;
            case 0x133F08u: goto label_133f08;
            case 0x133F0Cu: goto label_133f0c;
            case 0x133F10u: goto label_133f10;
            case 0x133F14u: goto label_133f14;
            case 0x133F18u: goto label_133f18;
            case 0x133F1Cu: goto label_133f1c;
            case 0x133F20u: goto label_133f20;
            case 0x133F24u: goto label_133f24;
            case 0x133F28u: goto label_133f28;
            case 0x133F2Cu: goto label_133f2c;
            case 0x133F30u: goto label_133f30;
            case 0x133F34u: goto label_133f34;
            case 0x133F38u: goto label_133f38;
            case 0x133F3Cu: goto label_133f3c;
            case 0x133F40u: goto label_133f40;
            case 0x133F44u: goto label_133f44;
            case 0x133F48u: goto label_133f48;
            case 0x133F4Cu: goto label_133f4c;
            case 0x133F50u: goto label_133f50;
            case 0x133F54u: goto label_133f54;
            case 0x133F58u: goto label_133f58;
            case 0x133F5Cu: goto label_133f5c;
            case 0x133F60u: goto label_133f60;
            case 0x133F64u: goto label_133f64;
            case 0x133F68u: goto label_133f68;
            case 0x133F6Cu: goto label_133f6c;
            case 0x133F70u: goto label_133f70;
            case 0x133F74u: goto label_133f74;
            case 0x133F78u: goto label_133f78;
            case 0x133F7Cu: goto label_133f7c;
            case 0x133F80u: goto label_133f80;
            case 0x133F84u: goto label_133f84;
            case 0x133F88u: goto label_133f88;
            case 0x133F8Cu: goto label_133f8c;
            case 0x133F90u: goto label_133f90;
            case 0x133F94u: goto label_133f94;
            case 0x133F98u: goto label_133f98;
            case 0x133F9Cu: goto label_133f9c;
            case 0x133FA0u: goto label_133fa0;
            case 0x133FA4u: goto label_133fa4;
            case 0x133FA8u: goto label_133fa8;
            case 0x133FACu: goto label_133fac;
            case 0x133FB0u: goto label_133fb0;
            case 0x133FB4u: goto label_133fb4;
            case 0x133FB8u: goto label_133fb8;
            case 0x133FBCu: goto label_133fbc;
            case 0x133FC0u: goto label_133fc0;
            case 0x133FC4u: goto label_133fc4;
            case 0x133FC8u: goto label_133fc8;
            case 0x133FCCu: goto label_133fcc;
            case 0x133FD0u: goto label_133fd0;
            case 0x133FD4u: goto label_133fd4;
            case 0x133FD8u: goto label_133fd8;
            case 0x133FDCu: goto label_133fdc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133EF0u; }
            if (ctx->pc != 0x133EF0u) { return; }
        }
    }
    ctx->pc = 0x133EF0u;
label_133ef0:
    // 0x133ef0: 0x2a0202d
    ctx->pc = 0x133ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_133ef4:
    // 0x133ef4: 0x27b00030
    ctx->pc = 0x133ef4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 48));
label_133ef8:
    // 0x133ef8: 0x2c0282d
    ctx->pc = 0x133ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_133efc:
    // 0x133efc: 0x2a0302d
    ctx->pc = 0x133efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_133f00:
    // 0x133f00: 0xc0501f8
label_133f04:
    if (ctx->pc == 0x133F04u) {
        ctx->pc = 0x133F04u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133F08u;
        goto label_133f08;
    }
    ctx->pc = 0x133F00u;
    SET_GPR_U32(ctx, 31, 0x133F08u);
    ctx->pc = 0x133F04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1407E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001407E0_0x1407e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133F08u; }
    }
    if (ctx->pc != 0x133F08u) { return; }
    ctx->pc = 0x133F08u;
label_133f08:
    // 0x133f08: 0x8e230000
    ctx->pc = 0x133f08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_133f0c:
    // 0x133f0c: 0x2a0302d
    ctx->pc = 0x133f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_133f10:
    // 0x133f10: 0x220202d
    ctx->pc = 0x133f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133f14:
    // 0x133f14: 0x8c620020
    ctx->pc = 0x133f14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_133f18:
    // 0x133f18: 0x40f809
label_133f1c:
    if (ctx->pc == 0x133F1Cu) {
        ctx->pc = 0x133F1Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133F20u;
        goto label_133f20;
    }
    ctx->pc = 0x133F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133F20u);
        ctx->pc = 0x133F1Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133B48u: goto label_133b48;
            case 0x133B4Cu: goto label_133b4c;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B58u: goto label_133b58;
            case 0x133B5Cu: goto label_133b5c;
            case 0x133B60u: goto label_133b60;
            case 0x133B64u: goto label_133b64;
            case 0x133B68u: goto label_133b68;
            case 0x133B6Cu: goto label_133b6c;
            case 0x133B70u: goto label_133b70;
            case 0x133B74u: goto label_133b74;
            case 0x133B78u: goto label_133b78;
            case 0x133B7Cu: goto label_133b7c;
            case 0x133B80u: goto label_133b80;
            case 0x133B84u: goto label_133b84;
            case 0x133B88u: goto label_133b88;
            case 0x133B8Cu: goto label_133b8c;
            case 0x133B90u: goto label_133b90;
            case 0x133B94u: goto label_133b94;
            case 0x133B98u: goto label_133b98;
            case 0x133B9Cu: goto label_133b9c;
            case 0x133BA0u: goto label_133ba0;
            case 0x133BA4u: goto label_133ba4;
            case 0x133BA8u: goto label_133ba8;
            case 0x133BACu: goto label_133bac;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BB4u: goto label_133bb4;
            case 0x133BB8u: goto label_133bb8;
            case 0x133BBCu: goto label_133bbc;
            case 0x133BC0u: goto label_133bc0;
            case 0x133BC4u: goto label_133bc4;
            case 0x133BC8u: goto label_133bc8;
            case 0x133BCCu: goto label_133bcc;
            case 0x133BD0u: goto label_133bd0;
            case 0x133BD4u: goto label_133bd4;
            case 0x133BD8u: goto label_133bd8;
            case 0x133BDCu: goto label_133bdc;
            case 0x133BE0u: goto label_133be0;
            case 0x133BE4u: goto label_133be4;
            case 0x133BE8u: goto label_133be8;
            case 0x133BECu: goto label_133bec;
            case 0x133BF0u: goto label_133bf0;
            case 0x133BF4u: goto label_133bf4;
            case 0x133BF8u: goto label_133bf8;
            case 0x133BFCu: goto label_133bfc;
            case 0x133C00u: goto label_133c00;
            case 0x133C04u: goto label_133c04;
            case 0x133C08u: goto label_133c08;
            case 0x133C0Cu: goto label_133c0c;
            case 0x133C10u: goto label_133c10;
            case 0x133C14u: goto label_133c14;
            case 0x133C18u: goto label_133c18;
            case 0x133C1Cu: goto label_133c1c;
            case 0x133C20u: goto label_133c20;
            case 0x133C24u: goto label_133c24;
            case 0x133C28u: goto label_133c28;
            case 0x133C2Cu: goto label_133c2c;
            case 0x133C30u: goto label_133c30;
            case 0x133C34u: goto label_133c34;
            case 0x133C38u: goto label_133c38;
            case 0x133C3Cu: goto label_133c3c;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            case 0x133C48u: goto label_133c48;
            case 0x133C4Cu: goto label_133c4c;
            case 0x133C50u: goto label_133c50;
            case 0x133C54u: goto label_133c54;
            case 0x133C58u: goto label_133c58;
            case 0x133C5Cu: goto label_133c5c;
            case 0x133C60u: goto label_133c60;
            case 0x133C64u: goto label_133c64;
            case 0x133C68u: goto label_133c68;
            case 0x133C6Cu: goto label_133c6c;
            case 0x133C70u: goto label_133c70;
            case 0x133C74u: goto label_133c74;
            case 0x133C78u: goto label_133c78;
            case 0x133C7Cu: goto label_133c7c;
            case 0x133C80u: goto label_133c80;
            case 0x133C84u: goto label_133c84;
            case 0x133C88u: goto label_133c88;
            case 0x133C8Cu: goto label_133c8c;
            case 0x133C90u: goto label_133c90;
            case 0x133C94u: goto label_133c94;
            case 0x133C98u: goto label_133c98;
            case 0x133C9Cu: goto label_133c9c;
            case 0x133CA0u: goto label_133ca0;
            case 0x133CA4u: goto label_133ca4;
            case 0x133CA8u: goto label_133ca8;
            case 0x133CACu: goto label_133cac;
            case 0x133CB0u: goto label_133cb0;
            case 0x133CB4u: goto label_133cb4;
            case 0x133CB8u: goto label_133cb8;
            case 0x133CBCu: goto label_133cbc;
            case 0x133CC0u: goto label_133cc0;
            case 0x133CC4u: goto label_133cc4;
            case 0x133CC8u: goto label_133cc8;
            case 0x133CCCu: goto label_133ccc;
            case 0x133CD0u: goto label_133cd0;
            case 0x133CD4u: goto label_133cd4;
            case 0x133CD8u: goto label_133cd8;
            case 0x133CDCu: goto label_133cdc;
            case 0x133CE0u: goto label_133ce0;
            case 0x133CE4u: goto label_133ce4;
            case 0x133CE8u: goto label_133ce8;
            case 0x133CECu: goto label_133cec;
            case 0x133CF0u: goto label_133cf0;
            case 0x133CF4u: goto label_133cf4;
            case 0x133CF8u: goto label_133cf8;
            case 0x133CFCu: goto label_133cfc;
            case 0x133D00u: goto label_133d00;
            case 0x133D04u: goto label_133d04;
            case 0x133D08u: goto label_133d08;
            case 0x133D0Cu: goto label_133d0c;
            case 0x133D10u: goto label_133d10;
            case 0x133D14u: goto label_133d14;
            case 0x133D18u: goto label_133d18;
            case 0x133D1Cu: goto label_133d1c;
            case 0x133D20u: goto label_133d20;
            case 0x133D24u: goto label_133d24;
            case 0x133D28u: goto label_133d28;
            case 0x133D2Cu: goto label_133d2c;
            case 0x133D30u: goto label_133d30;
            case 0x133D34u: goto label_133d34;
            case 0x133D38u: goto label_133d38;
            case 0x133D3Cu: goto label_133d3c;
            case 0x133D40u: goto label_133d40;
            case 0x133D44u: goto label_133d44;
            case 0x133D48u: goto label_133d48;
            case 0x133D4Cu: goto label_133d4c;
            case 0x133D50u: goto label_133d50;
            case 0x133D54u: goto label_133d54;
            case 0x133D58u: goto label_133d58;
            case 0x133D5Cu: goto label_133d5c;
            case 0x133D60u: goto label_133d60;
            case 0x133D64u: goto label_133d64;
            case 0x133D68u: goto label_133d68;
            case 0x133D6Cu: goto label_133d6c;
            case 0x133D70u: goto label_133d70;
            case 0x133D74u: goto label_133d74;
            case 0x133D78u: goto label_133d78;
            case 0x133D7Cu: goto label_133d7c;
            case 0x133D80u: goto label_133d80;
            case 0x133D84u: goto label_133d84;
            case 0x133D88u: goto label_133d88;
            case 0x133D8Cu: goto label_133d8c;
            case 0x133D90u: goto label_133d90;
            case 0x133D94u: goto label_133d94;
            case 0x133D98u: goto label_133d98;
            case 0x133D9Cu: goto label_133d9c;
            case 0x133DA0u: goto label_133da0;
            case 0x133DA4u: goto label_133da4;
            case 0x133DA8u: goto label_133da8;
            case 0x133DACu: goto label_133dac;
            case 0x133DB0u: goto label_133db0;
            case 0x133DB4u: goto label_133db4;
            case 0x133DB8u: goto label_133db8;
            case 0x133DBCu: goto label_133dbc;
            case 0x133DC0u: goto label_133dc0;
            case 0x133DC4u: goto label_133dc4;
            case 0x133DC8u: goto label_133dc8;
            case 0x133DCCu: goto label_133dcc;
            case 0x133DD0u: goto label_133dd0;
            case 0x133DD4u: goto label_133dd4;
            case 0x133DD8u: goto label_133dd8;
            case 0x133DDCu: goto label_133ddc;
            case 0x133DE0u: goto label_133de0;
            case 0x133DE4u: goto label_133de4;
            case 0x133DE8u: goto label_133de8;
            case 0x133DECu: goto label_133dec;
            case 0x133DF0u: goto label_133df0;
            case 0x133DF4u: goto label_133df4;
            case 0x133DF8u: goto label_133df8;
            case 0x133DFCu: goto label_133dfc;
            case 0x133E00u: goto label_133e00;
            case 0x133E04u: goto label_133e04;
            case 0x133E08u: goto label_133e08;
            case 0x133E0Cu: goto label_133e0c;
            case 0x133E10u: goto label_133e10;
            case 0x133E14u: goto label_133e14;
            case 0x133E18u: goto label_133e18;
            case 0x133E1Cu: goto label_133e1c;
            case 0x133E20u: goto label_133e20;
            case 0x133E24u: goto label_133e24;
            case 0x133E28u: goto label_133e28;
            case 0x133E2Cu: goto label_133e2c;
            case 0x133E30u: goto label_133e30;
            case 0x133E34u: goto label_133e34;
            case 0x133E38u: goto label_133e38;
            case 0x133E3Cu: goto label_133e3c;
            case 0x133E40u: goto label_133e40;
            case 0x133E44u: goto label_133e44;
            case 0x133E48u: goto label_133e48;
            case 0x133E4Cu: goto label_133e4c;
            case 0x133E50u: goto label_133e50;
            case 0x133E54u: goto label_133e54;
            case 0x133E58u: goto label_133e58;
            case 0x133E5Cu: goto label_133e5c;
            case 0x133E60u: goto label_133e60;
            case 0x133E64u: goto label_133e64;
            case 0x133E68u: goto label_133e68;
            case 0x133E6Cu: goto label_133e6c;
            case 0x133E70u: goto label_133e70;
            case 0x133E74u: goto label_133e74;
            case 0x133E78u: goto label_133e78;
            case 0x133E7Cu: goto label_133e7c;
            case 0x133E80u: goto label_133e80;
            case 0x133E84u: goto label_133e84;
            case 0x133E88u: goto label_133e88;
            case 0x133E8Cu: goto label_133e8c;
            case 0x133E90u: goto label_133e90;
            case 0x133E94u: goto label_133e94;
            case 0x133E98u: goto label_133e98;
            case 0x133E9Cu: goto label_133e9c;
            case 0x133EA0u: goto label_133ea0;
            case 0x133EA4u: goto label_133ea4;
            case 0x133EA8u: goto label_133ea8;
            case 0x133EACu: goto label_133eac;
            case 0x133EB0u: goto label_133eb0;
            case 0x133EB4u: goto label_133eb4;
            case 0x133EB8u: goto label_133eb8;
            case 0x133EBCu: goto label_133ebc;
            case 0x133EC0u: goto label_133ec0;
            case 0x133EC4u: goto label_133ec4;
            case 0x133EC8u: goto label_133ec8;
            case 0x133ECCu: goto label_133ecc;
            case 0x133ED0u: goto label_133ed0;
            case 0x133ED4u: goto label_133ed4;
            case 0x133ED8u: goto label_133ed8;
            case 0x133EDCu: goto label_133edc;
            case 0x133EE0u: goto label_133ee0;
            case 0x133EE4u: goto label_133ee4;
            case 0x133EE8u: goto label_133ee8;
            case 0x133EECu: goto label_133eec;
            case 0x133EF0u: goto label_133ef0;
            case 0x133EF4u: goto label_133ef4;
            case 0x133EF8u: goto label_133ef8;
            case 0x133EFCu: goto label_133efc;
            case 0x133F00u: goto label_133f00;
            case 0x133F04u: goto label_133f04;
            case 0x133F08u: goto label_133f08;
            case 0x133F0Cu: goto label_133f0c;
            case 0x133F10u: goto label_133f10;
            case 0x133F14u: goto label_133f14;
            case 0x133F18u: goto label_133f18;
            case 0x133F1Cu: goto label_133f1c;
            case 0x133F20u: goto label_133f20;
            case 0x133F24u: goto label_133f24;
            case 0x133F28u: goto label_133f28;
            case 0x133F2Cu: goto label_133f2c;
            case 0x133F30u: goto label_133f30;
            case 0x133F34u: goto label_133f34;
            case 0x133F38u: goto label_133f38;
            case 0x133F3Cu: goto label_133f3c;
            case 0x133F40u: goto label_133f40;
            case 0x133F44u: goto label_133f44;
            case 0x133F48u: goto label_133f48;
            case 0x133F4Cu: goto label_133f4c;
            case 0x133F50u: goto label_133f50;
            case 0x133F54u: goto label_133f54;
            case 0x133F58u: goto label_133f58;
            case 0x133F5Cu: goto label_133f5c;
            case 0x133F60u: goto label_133f60;
            case 0x133F64u: goto label_133f64;
            case 0x133F68u: goto label_133f68;
            case 0x133F6Cu: goto label_133f6c;
            case 0x133F70u: goto label_133f70;
            case 0x133F74u: goto label_133f74;
            case 0x133F78u: goto label_133f78;
            case 0x133F7Cu: goto label_133f7c;
            case 0x133F80u: goto label_133f80;
            case 0x133F84u: goto label_133f84;
            case 0x133F88u: goto label_133f88;
            case 0x133F8Cu: goto label_133f8c;
            case 0x133F90u: goto label_133f90;
            case 0x133F94u: goto label_133f94;
            case 0x133F98u: goto label_133f98;
            case 0x133F9Cu: goto label_133f9c;
            case 0x133FA0u: goto label_133fa0;
            case 0x133FA4u: goto label_133fa4;
            case 0x133FA8u: goto label_133fa8;
            case 0x133FACu: goto label_133fac;
            case 0x133FB0u: goto label_133fb0;
            case 0x133FB4u: goto label_133fb4;
            case 0x133FB8u: goto label_133fb8;
            case 0x133FBCu: goto label_133fbc;
            case 0x133FC0u: goto label_133fc0;
            case 0x133FC4u: goto label_133fc4;
            case 0x133FC8u: goto label_133fc8;
            case 0x133FCCu: goto label_133fcc;
            case 0x133FD0u: goto label_133fd0;
            case 0x133FD4u: goto label_133fd4;
            case 0x133FD8u: goto label_133fd8;
            case 0x133FDCu: goto label_133fdc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133F20u; }
            if (ctx->pc != 0x133F20u) { return; }
        }
    }
    ctx->pc = 0x133F20u;
label_133f20:
    // 0x133f20: 0x8e230000
    ctx->pc = 0x133f20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_133f24:
    // 0x133f24: 0x220202d
    ctx->pc = 0x133f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133f28:
    // 0x133f28: 0x200302d
    ctx->pc = 0x133f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133f2c:
    // 0x133f2c: 0x8c62001c
    ctx->pc = 0x133f2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_133f30:
    // 0x133f30: 0x40f809
label_133f34:
    if (ctx->pc == 0x133F34u) {
        ctx->pc = 0x133F34u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x133F38u;
        goto label_133f38;
    }
    ctx->pc = 0x133F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133F38u);
        ctx->pc = 0x133F34u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133B48u: goto label_133b48;
            case 0x133B4Cu: goto label_133b4c;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B58u: goto label_133b58;
            case 0x133B5Cu: goto label_133b5c;
            case 0x133B60u: goto label_133b60;
            case 0x133B64u: goto label_133b64;
            case 0x133B68u: goto label_133b68;
            case 0x133B6Cu: goto label_133b6c;
            case 0x133B70u: goto label_133b70;
            case 0x133B74u: goto label_133b74;
            case 0x133B78u: goto label_133b78;
            case 0x133B7Cu: goto label_133b7c;
            case 0x133B80u: goto label_133b80;
            case 0x133B84u: goto label_133b84;
            case 0x133B88u: goto label_133b88;
            case 0x133B8Cu: goto label_133b8c;
            case 0x133B90u: goto label_133b90;
            case 0x133B94u: goto label_133b94;
            case 0x133B98u: goto label_133b98;
            case 0x133B9Cu: goto label_133b9c;
            case 0x133BA0u: goto label_133ba0;
            case 0x133BA4u: goto label_133ba4;
            case 0x133BA8u: goto label_133ba8;
            case 0x133BACu: goto label_133bac;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BB4u: goto label_133bb4;
            case 0x133BB8u: goto label_133bb8;
            case 0x133BBCu: goto label_133bbc;
            case 0x133BC0u: goto label_133bc0;
            case 0x133BC4u: goto label_133bc4;
            case 0x133BC8u: goto label_133bc8;
            case 0x133BCCu: goto label_133bcc;
            case 0x133BD0u: goto label_133bd0;
            case 0x133BD4u: goto label_133bd4;
            case 0x133BD8u: goto label_133bd8;
            case 0x133BDCu: goto label_133bdc;
            case 0x133BE0u: goto label_133be0;
            case 0x133BE4u: goto label_133be4;
            case 0x133BE8u: goto label_133be8;
            case 0x133BECu: goto label_133bec;
            case 0x133BF0u: goto label_133bf0;
            case 0x133BF4u: goto label_133bf4;
            case 0x133BF8u: goto label_133bf8;
            case 0x133BFCu: goto label_133bfc;
            case 0x133C00u: goto label_133c00;
            case 0x133C04u: goto label_133c04;
            case 0x133C08u: goto label_133c08;
            case 0x133C0Cu: goto label_133c0c;
            case 0x133C10u: goto label_133c10;
            case 0x133C14u: goto label_133c14;
            case 0x133C18u: goto label_133c18;
            case 0x133C1Cu: goto label_133c1c;
            case 0x133C20u: goto label_133c20;
            case 0x133C24u: goto label_133c24;
            case 0x133C28u: goto label_133c28;
            case 0x133C2Cu: goto label_133c2c;
            case 0x133C30u: goto label_133c30;
            case 0x133C34u: goto label_133c34;
            case 0x133C38u: goto label_133c38;
            case 0x133C3Cu: goto label_133c3c;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            case 0x133C48u: goto label_133c48;
            case 0x133C4Cu: goto label_133c4c;
            case 0x133C50u: goto label_133c50;
            case 0x133C54u: goto label_133c54;
            case 0x133C58u: goto label_133c58;
            case 0x133C5Cu: goto label_133c5c;
            case 0x133C60u: goto label_133c60;
            case 0x133C64u: goto label_133c64;
            case 0x133C68u: goto label_133c68;
            case 0x133C6Cu: goto label_133c6c;
            case 0x133C70u: goto label_133c70;
            case 0x133C74u: goto label_133c74;
            case 0x133C78u: goto label_133c78;
            case 0x133C7Cu: goto label_133c7c;
            case 0x133C80u: goto label_133c80;
            case 0x133C84u: goto label_133c84;
            case 0x133C88u: goto label_133c88;
            case 0x133C8Cu: goto label_133c8c;
            case 0x133C90u: goto label_133c90;
            case 0x133C94u: goto label_133c94;
            case 0x133C98u: goto label_133c98;
            case 0x133C9Cu: goto label_133c9c;
            case 0x133CA0u: goto label_133ca0;
            case 0x133CA4u: goto label_133ca4;
            case 0x133CA8u: goto label_133ca8;
            case 0x133CACu: goto label_133cac;
            case 0x133CB0u: goto label_133cb0;
            case 0x133CB4u: goto label_133cb4;
            case 0x133CB8u: goto label_133cb8;
            case 0x133CBCu: goto label_133cbc;
            case 0x133CC0u: goto label_133cc0;
            case 0x133CC4u: goto label_133cc4;
            case 0x133CC8u: goto label_133cc8;
            case 0x133CCCu: goto label_133ccc;
            case 0x133CD0u: goto label_133cd0;
            case 0x133CD4u: goto label_133cd4;
            case 0x133CD8u: goto label_133cd8;
            case 0x133CDCu: goto label_133cdc;
            case 0x133CE0u: goto label_133ce0;
            case 0x133CE4u: goto label_133ce4;
            case 0x133CE8u: goto label_133ce8;
            case 0x133CECu: goto label_133cec;
            case 0x133CF0u: goto label_133cf0;
            case 0x133CF4u: goto label_133cf4;
            case 0x133CF8u: goto label_133cf8;
            case 0x133CFCu: goto label_133cfc;
            case 0x133D00u: goto label_133d00;
            case 0x133D04u: goto label_133d04;
            case 0x133D08u: goto label_133d08;
            case 0x133D0Cu: goto label_133d0c;
            case 0x133D10u: goto label_133d10;
            case 0x133D14u: goto label_133d14;
            case 0x133D18u: goto label_133d18;
            case 0x133D1Cu: goto label_133d1c;
            case 0x133D20u: goto label_133d20;
            case 0x133D24u: goto label_133d24;
            case 0x133D28u: goto label_133d28;
            case 0x133D2Cu: goto label_133d2c;
            case 0x133D30u: goto label_133d30;
            case 0x133D34u: goto label_133d34;
            case 0x133D38u: goto label_133d38;
            case 0x133D3Cu: goto label_133d3c;
            case 0x133D40u: goto label_133d40;
            case 0x133D44u: goto label_133d44;
            case 0x133D48u: goto label_133d48;
            case 0x133D4Cu: goto label_133d4c;
            case 0x133D50u: goto label_133d50;
            case 0x133D54u: goto label_133d54;
            case 0x133D58u: goto label_133d58;
            case 0x133D5Cu: goto label_133d5c;
            case 0x133D60u: goto label_133d60;
            case 0x133D64u: goto label_133d64;
            case 0x133D68u: goto label_133d68;
            case 0x133D6Cu: goto label_133d6c;
            case 0x133D70u: goto label_133d70;
            case 0x133D74u: goto label_133d74;
            case 0x133D78u: goto label_133d78;
            case 0x133D7Cu: goto label_133d7c;
            case 0x133D80u: goto label_133d80;
            case 0x133D84u: goto label_133d84;
            case 0x133D88u: goto label_133d88;
            case 0x133D8Cu: goto label_133d8c;
            case 0x133D90u: goto label_133d90;
            case 0x133D94u: goto label_133d94;
            case 0x133D98u: goto label_133d98;
            case 0x133D9Cu: goto label_133d9c;
            case 0x133DA0u: goto label_133da0;
            case 0x133DA4u: goto label_133da4;
            case 0x133DA8u: goto label_133da8;
            case 0x133DACu: goto label_133dac;
            case 0x133DB0u: goto label_133db0;
            case 0x133DB4u: goto label_133db4;
            case 0x133DB8u: goto label_133db8;
            case 0x133DBCu: goto label_133dbc;
            case 0x133DC0u: goto label_133dc0;
            case 0x133DC4u: goto label_133dc4;
            case 0x133DC8u: goto label_133dc8;
            case 0x133DCCu: goto label_133dcc;
            case 0x133DD0u: goto label_133dd0;
            case 0x133DD4u: goto label_133dd4;
            case 0x133DD8u: goto label_133dd8;
            case 0x133DDCu: goto label_133ddc;
            case 0x133DE0u: goto label_133de0;
            case 0x133DE4u: goto label_133de4;
            case 0x133DE8u: goto label_133de8;
            case 0x133DECu: goto label_133dec;
            case 0x133DF0u: goto label_133df0;
            case 0x133DF4u: goto label_133df4;
            case 0x133DF8u: goto label_133df8;
            case 0x133DFCu: goto label_133dfc;
            case 0x133E00u: goto label_133e00;
            case 0x133E04u: goto label_133e04;
            case 0x133E08u: goto label_133e08;
            case 0x133E0Cu: goto label_133e0c;
            case 0x133E10u: goto label_133e10;
            case 0x133E14u: goto label_133e14;
            case 0x133E18u: goto label_133e18;
            case 0x133E1Cu: goto label_133e1c;
            case 0x133E20u: goto label_133e20;
            case 0x133E24u: goto label_133e24;
            case 0x133E28u: goto label_133e28;
            case 0x133E2Cu: goto label_133e2c;
            case 0x133E30u: goto label_133e30;
            case 0x133E34u: goto label_133e34;
            case 0x133E38u: goto label_133e38;
            case 0x133E3Cu: goto label_133e3c;
            case 0x133E40u: goto label_133e40;
            case 0x133E44u: goto label_133e44;
            case 0x133E48u: goto label_133e48;
            case 0x133E4Cu: goto label_133e4c;
            case 0x133E50u: goto label_133e50;
            case 0x133E54u: goto label_133e54;
            case 0x133E58u: goto label_133e58;
            case 0x133E5Cu: goto label_133e5c;
            case 0x133E60u: goto label_133e60;
            case 0x133E64u: goto label_133e64;
            case 0x133E68u: goto label_133e68;
            case 0x133E6Cu: goto label_133e6c;
            case 0x133E70u: goto label_133e70;
            case 0x133E74u: goto label_133e74;
            case 0x133E78u: goto label_133e78;
            case 0x133E7Cu: goto label_133e7c;
            case 0x133E80u: goto label_133e80;
            case 0x133E84u: goto label_133e84;
            case 0x133E88u: goto label_133e88;
            case 0x133E8Cu: goto label_133e8c;
            case 0x133E90u: goto label_133e90;
            case 0x133E94u: goto label_133e94;
            case 0x133E98u: goto label_133e98;
            case 0x133E9Cu: goto label_133e9c;
            case 0x133EA0u: goto label_133ea0;
            case 0x133EA4u: goto label_133ea4;
            case 0x133EA8u: goto label_133ea8;
            case 0x133EACu: goto label_133eac;
            case 0x133EB0u: goto label_133eb0;
            case 0x133EB4u: goto label_133eb4;
            case 0x133EB8u: goto label_133eb8;
            case 0x133EBCu: goto label_133ebc;
            case 0x133EC0u: goto label_133ec0;
            case 0x133EC4u: goto label_133ec4;
            case 0x133EC8u: goto label_133ec8;
            case 0x133ECCu: goto label_133ecc;
            case 0x133ED0u: goto label_133ed0;
            case 0x133ED4u: goto label_133ed4;
            case 0x133ED8u: goto label_133ed8;
            case 0x133EDCu: goto label_133edc;
            case 0x133EE0u: goto label_133ee0;
            case 0x133EE4u: goto label_133ee4;
            case 0x133EE8u: goto label_133ee8;
            case 0x133EECu: goto label_133eec;
            case 0x133EF0u: goto label_133ef0;
            case 0x133EF4u: goto label_133ef4;
            case 0x133EF8u: goto label_133ef8;
            case 0x133EFCu: goto label_133efc;
            case 0x133F00u: goto label_133f00;
            case 0x133F04u: goto label_133f04;
            case 0x133F08u: goto label_133f08;
            case 0x133F0Cu: goto label_133f0c;
            case 0x133F10u: goto label_133f10;
            case 0x133F14u: goto label_133f14;
            case 0x133F18u: goto label_133f18;
            case 0x133F1Cu: goto label_133f1c;
            case 0x133F20u: goto label_133f20;
            case 0x133F24u: goto label_133f24;
            case 0x133F28u: goto label_133f28;
            case 0x133F2Cu: goto label_133f2c;
            case 0x133F30u: goto label_133f30;
            case 0x133F34u: goto label_133f34;
            case 0x133F38u: goto label_133f38;
            case 0x133F3Cu: goto label_133f3c;
            case 0x133F40u: goto label_133f40;
            case 0x133F44u: goto label_133f44;
            case 0x133F48u: goto label_133f48;
            case 0x133F4Cu: goto label_133f4c;
            case 0x133F50u: goto label_133f50;
            case 0x133F54u: goto label_133f54;
            case 0x133F58u: goto label_133f58;
            case 0x133F5Cu: goto label_133f5c;
            case 0x133F60u: goto label_133f60;
            case 0x133F64u: goto label_133f64;
            case 0x133F68u: goto label_133f68;
            case 0x133F6Cu: goto label_133f6c;
            case 0x133F70u: goto label_133f70;
            case 0x133F74u: goto label_133f74;
            case 0x133F78u: goto label_133f78;
            case 0x133F7Cu: goto label_133f7c;
            case 0x133F80u: goto label_133f80;
            case 0x133F84u: goto label_133f84;
            case 0x133F88u: goto label_133f88;
            case 0x133F8Cu: goto label_133f8c;
            case 0x133F90u: goto label_133f90;
            case 0x133F94u: goto label_133f94;
            case 0x133F98u: goto label_133f98;
            case 0x133F9Cu: goto label_133f9c;
            case 0x133FA0u: goto label_133fa0;
            case 0x133FA4u: goto label_133fa4;
            case 0x133FA8u: goto label_133fa8;
            case 0x133FACu: goto label_133fac;
            case 0x133FB0u: goto label_133fb0;
            case 0x133FB4u: goto label_133fb4;
            case 0x133FB8u: goto label_133fb8;
            case 0x133FBCu: goto label_133fbc;
            case 0x133FC0u: goto label_133fc0;
            case 0x133FC4u: goto label_133fc4;
            case 0x133FC8u: goto label_133fc8;
            case 0x133FCCu: goto label_133fcc;
            case 0x133FD0u: goto label_133fd0;
            case 0x133FD4u: goto label_133fd4;
            case 0x133FD8u: goto label_133fd8;
            case 0x133FDCu: goto label_133fdc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133F38u; }
            if (ctx->pc != 0x133F38u) { return; }
        }
    }
    ctx->pc = 0x133F38u;
label_133f38:
    // 0x133f38: 0xc04b5b8
label_133f3c:
    if (ctx->pc == 0x133F3Cu) {
        ctx->pc = 0x133F3Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133F40u;
        goto label_133f40;
    }
    ctx->pc = 0x133F38u;
    SET_GPR_U32(ctx, 31, 0x133F40u);
    ctx->pc = 0x133F3Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D6E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D6E0_0x12d6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133F40u; }
    }
    if (ctx->pc != 0x133F40u) { return; }
    ctx->pc = 0x133F40u;
label_133f40:
    // 0x133f40: 0x8e8300a4
    ctx->pc = 0x133f40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 164)));
label_133f44:
    // 0x133f44: 0x240202d
    ctx->pc = 0x133f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_133f48:
    // 0x133f48: 0x621821
    ctx->pc = 0x133f48u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_133f4c:
    // 0x133f4c: 0xc04b32c
label_133f50:
    if (ctx->pc == 0x133F50u) {
        ctx->pc = 0x133F50u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 3));
        ctx->pc = 0x133F54u;
        goto label_133f54;
    }
    ctx->pc = 0x133F4Cu;
    SET_GPR_U32(ctx, 31, 0x133F54u);
    ctx->pc = 0x133F50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 3));
    ctx->pc = 0x12CCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012CCB0_0x12ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133F54u; }
    }
    if (ctx->pc != 0x133F54u) { return; }
    ctx->pc = 0x133F54u;
label_133f54:
    // 0x133f54: 0xc04b320
label_133f58:
    if (ctx->pc == 0x133F58u) {
        ctx->pc = 0x133F58u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133F5Cu;
        goto label_133f5c;
    }
    ctx->pc = 0x133F54u;
    SET_GPR_U32(ctx, 31, 0x133F5Cu);
    ctx->pc = 0x133F58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12CC80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012CC80_0x12cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133F5Cu; }
    }
    if (ctx->pc != 0x133F5Cu) { return; }
    ctx->pc = 0x133F5Cu;
label_133f5c:
    // 0x133f5c: 0xc04b58e
label_133f60:
    if (ctx->pc == 0x133F60u) {
        ctx->pc = 0x133F60u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133F64u;
        goto label_133f64;
    }
    ctx->pc = 0x133F5Cu;
    SET_GPR_U32(ctx, 31, 0x133F64u);
    ctx->pc = 0x133F60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D638_0x12d638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133F64u; }
    }
    if (ctx->pc != 0x133F64u) { return; }
    ctx->pc = 0x133F64u;
label_133f64:
    // 0x133f64: 0xc04b2ee
label_133f68:
    if (ctx->pc == 0x133F68u) {
        ctx->pc = 0x133F68u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133F6Cu;
        goto label_133f6c;
    }
    ctx->pc = 0x133F64u;
    SET_GPR_U32(ctx, 31, 0x133F6Cu);
    ctx->pc = 0x133F68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12CBB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012CBB8_0x12cbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133F6Cu; }
    }
    if (ctx->pc != 0x133F6Cu) { return; }
    ctx->pc = 0x133F6Cu;
label_133f6c:
    // 0x133f6c: 0x24030002
    ctx->pc = 0x133f6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_133f70:
    // 0x133f70: 0x50430003
label_133f74:
    if (ctx->pc == 0x133F74u) {
        ctx->pc = 0x133F74u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 72)));
        ctx->pc = 0x133F78u;
        goto label_133f78;
    }
    ctx->pc = 0x133F70u;
    {
        const bool branch_taken_0x133f70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x133f70) {
            ctx->pc = 0x133F74u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 72)));
            ctx->pc = 0x133F80u;
            goto label_133f80;
        }
    }
    ctx->pc = 0x133F78u;
label_133f78:
    // 0x133f78: 0x1000000e
label_133f7c:
    if (ctx->pc == 0x133F7Cu) {
        ctx->pc = 0x133F7Cu;
        WRITE8(ADD32(GPR_U32(ctx, 20), 152), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x133F80u;
        goto label_133f80;
    }
    ctx->pc = 0x133F78u;
    {
        const bool branch_taken_0x133f78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x133F7Cu;
        WRITE8(ADD32(GPR_U32(ctx, 20), 152), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x133f78) {
            ctx->pc = 0x133FB4u;
            goto label_133fb4;
        }
    }
    ctx->pc = 0x133F80u;
label_133f80:
    // 0x133f80: 0xc04b304
label_133f84:
    if (ctx->pc == 0x133F84u) {
        ctx->pc = 0x133F84u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133F88u;
        goto label_133f88;
    }
    ctx->pc = 0x133F80u;
    SET_GPR_U32(ctx, 31, 0x133F88u);
    ctx->pc = 0x133F84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12CC10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012CC10_0x12cc10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133F88u; }
    }
    if (ctx->pc != 0x133F88u) { return; }
    ctx->pc = 0x133F88u;
label_133f88:
    // 0x133f88: 0xc04b602
label_133f8c:
    if (ctx->pc == 0x133F8Cu) {
        ctx->pc = 0x133F8Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133F90u;
        goto label_133f90;
    }
    ctx->pc = 0x133F88u;
    SET_GPR_U32(ctx, 31, 0x133F90u);
    ctx->pc = 0x133F8Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D808_0x12d808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133F90u; }
    }
    if (ctx->pc != 0x133F90u) { return; }
    ctx->pc = 0x133F90u;
label_133f90:
    // 0x133f90: 0x240202d
    ctx->pc = 0x133f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_133f94:
    // 0x133f94: 0xc04b5d2
label_133f98:
    if (ctx->pc == 0x133F98u) {
        ctx->pc = 0x133F98u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133F9Cu;
        goto label_133f9c;
    }
    ctx->pc = 0x133F94u;
    SET_GPR_U32(ctx, 31, 0x133F9Cu);
    ctx->pc = 0x133F98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D748u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D748_0x12d748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133F9Cu; }
    }
    if (ctx->pc != 0x133F9Cu) { return; }
    ctx->pc = 0x133F9Cu;
label_133f9c:
    // 0x133f9c: 0x240202d
    ctx->pc = 0x133f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_133fa0:
    // 0x133fa0: 0xc04b5da
label_133fa4:
    if (ctx->pc == 0x133FA4u) {
        ctx->pc = 0x133FA4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133FA8u;
        goto label_133fa8;
    }
    ctx->pc = 0x133FA0u;
    SET_GPR_U32(ctx, 31, 0x133FA8u);
    ctx->pc = 0x133FA4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D768u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D768_0x12d768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133FA8u; }
    }
    if (ctx->pc != 0x133FA8u) { return; }
    ctx->pc = 0x133FA8u;
label_133fa8:
    // 0x133fa8: 0x240202d
    ctx->pc = 0x133fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_133fac:
    // 0x133fac: 0xc04b5d6
label_133fb0:
    if (ctx->pc == 0x133FB0u) {
        ctx->pc = 0x133FB0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133FB4u;
        goto label_133fb4;
    }
    ctx->pc = 0x133FACu;
    SET_GPR_U32(ctx, 31, 0x133FB4u);
    ctx->pc = 0x133FB0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D758u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D758_0x12d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133FB4u; }
    }
    if (ctx->pc != 0x133FB4u) { return; }
    ctx->pc = 0x133FB4u;
label_133fb4:
    // 0x133fb4: 0xdfb00050
    ctx->pc = 0x133fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_133fb8:
    // 0x133fb8: 0xdfb10058
    ctx->pc = 0x133fb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_133fbc:
    // 0x133fbc: 0xdfb20060
    ctx->pc = 0x133fbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_133fc0:
    // 0x133fc0: 0xdfb30068
    ctx->pc = 0x133fc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_133fc4:
    // 0x133fc4: 0xdfb40070
    ctx->pc = 0x133fc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_133fc8:
    // 0x133fc8: 0xdfb50078
    ctx->pc = 0x133fc8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_133fcc:
    // 0x133fcc: 0xdfb60080
    ctx->pc = 0x133fccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_133fd0:
    // 0x133fd0: 0xdfbf0088
    ctx->pc = 0x133fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_133fd4:
    // 0x133fd4: 0x3e00008
label_133fd8:
    if (ctx->pc == 0x133FD8u) {
        ctx->pc = 0x133FD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x133FDCu;
        goto label_133fdc;
    }
    ctx->pc = 0x133FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133FD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133B48u: goto label_133b48;
            case 0x133B4Cu: goto label_133b4c;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B58u: goto label_133b58;
            case 0x133B5Cu: goto label_133b5c;
            case 0x133B60u: goto label_133b60;
            case 0x133B64u: goto label_133b64;
            case 0x133B68u: goto label_133b68;
            case 0x133B6Cu: goto label_133b6c;
            case 0x133B70u: goto label_133b70;
            case 0x133B74u: goto label_133b74;
            case 0x133B78u: goto label_133b78;
            case 0x133B7Cu: goto label_133b7c;
            case 0x133B80u: goto label_133b80;
            case 0x133B84u: goto label_133b84;
            case 0x133B88u: goto label_133b88;
            case 0x133B8Cu: goto label_133b8c;
            case 0x133B90u: goto label_133b90;
            case 0x133B94u: goto label_133b94;
            case 0x133B98u: goto label_133b98;
            case 0x133B9Cu: goto label_133b9c;
            case 0x133BA0u: goto label_133ba0;
            case 0x133BA4u: goto label_133ba4;
            case 0x133BA8u: goto label_133ba8;
            case 0x133BACu: goto label_133bac;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BB4u: goto label_133bb4;
            case 0x133BB8u: goto label_133bb8;
            case 0x133BBCu: goto label_133bbc;
            case 0x133BC0u: goto label_133bc0;
            case 0x133BC4u: goto label_133bc4;
            case 0x133BC8u: goto label_133bc8;
            case 0x133BCCu: goto label_133bcc;
            case 0x133BD0u: goto label_133bd0;
            case 0x133BD4u: goto label_133bd4;
            case 0x133BD8u: goto label_133bd8;
            case 0x133BDCu: goto label_133bdc;
            case 0x133BE0u: goto label_133be0;
            case 0x133BE4u: goto label_133be4;
            case 0x133BE8u: goto label_133be8;
            case 0x133BECu: goto label_133bec;
            case 0x133BF0u: goto label_133bf0;
            case 0x133BF4u: goto label_133bf4;
            case 0x133BF8u: goto label_133bf8;
            case 0x133BFCu: goto label_133bfc;
            case 0x133C00u: goto label_133c00;
            case 0x133C04u: goto label_133c04;
            case 0x133C08u: goto label_133c08;
            case 0x133C0Cu: goto label_133c0c;
            case 0x133C10u: goto label_133c10;
            case 0x133C14u: goto label_133c14;
            case 0x133C18u: goto label_133c18;
            case 0x133C1Cu: goto label_133c1c;
            case 0x133C20u: goto label_133c20;
            case 0x133C24u: goto label_133c24;
            case 0x133C28u: goto label_133c28;
            case 0x133C2Cu: goto label_133c2c;
            case 0x133C30u: goto label_133c30;
            case 0x133C34u: goto label_133c34;
            case 0x133C38u: goto label_133c38;
            case 0x133C3Cu: goto label_133c3c;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            case 0x133C48u: goto label_133c48;
            case 0x133C4Cu: goto label_133c4c;
            case 0x133C50u: goto label_133c50;
            case 0x133C54u: goto label_133c54;
            case 0x133C58u: goto label_133c58;
            case 0x133C5Cu: goto label_133c5c;
            case 0x133C60u: goto label_133c60;
            case 0x133C64u: goto label_133c64;
            case 0x133C68u: goto label_133c68;
            case 0x133C6Cu: goto label_133c6c;
            case 0x133C70u: goto label_133c70;
            case 0x133C74u: goto label_133c74;
            case 0x133C78u: goto label_133c78;
            case 0x133C7Cu: goto label_133c7c;
            case 0x133C80u: goto label_133c80;
            case 0x133C84u: goto label_133c84;
            case 0x133C88u: goto label_133c88;
            case 0x133C8Cu: goto label_133c8c;
            case 0x133C90u: goto label_133c90;
            case 0x133C94u: goto label_133c94;
            case 0x133C98u: goto label_133c98;
            case 0x133C9Cu: goto label_133c9c;
            case 0x133CA0u: goto label_133ca0;
            case 0x133CA4u: goto label_133ca4;
            case 0x133CA8u: goto label_133ca8;
            case 0x133CACu: goto label_133cac;
            case 0x133CB0u: goto label_133cb0;
            case 0x133CB4u: goto label_133cb4;
            case 0x133CB8u: goto label_133cb8;
            case 0x133CBCu: goto label_133cbc;
            case 0x133CC0u: goto label_133cc0;
            case 0x133CC4u: goto label_133cc4;
            case 0x133CC8u: goto label_133cc8;
            case 0x133CCCu: goto label_133ccc;
            case 0x133CD0u: goto label_133cd0;
            case 0x133CD4u: goto label_133cd4;
            case 0x133CD8u: goto label_133cd8;
            case 0x133CDCu: goto label_133cdc;
            case 0x133CE0u: goto label_133ce0;
            case 0x133CE4u: goto label_133ce4;
            case 0x133CE8u: goto label_133ce8;
            case 0x133CECu: goto label_133cec;
            case 0x133CF0u: goto label_133cf0;
            case 0x133CF4u: goto label_133cf4;
            case 0x133CF8u: goto label_133cf8;
            case 0x133CFCu: goto label_133cfc;
            case 0x133D00u: goto label_133d00;
            case 0x133D04u: goto label_133d04;
            case 0x133D08u: goto label_133d08;
            case 0x133D0Cu: goto label_133d0c;
            case 0x133D10u: goto label_133d10;
            case 0x133D14u: goto label_133d14;
            case 0x133D18u: goto label_133d18;
            case 0x133D1Cu: goto label_133d1c;
            case 0x133D20u: goto label_133d20;
            case 0x133D24u: goto label_133d24;
            case 0x133D28u: goto label_133d28;
            case 0x133D2Cu: goto label_133d2c;
            case 0x133D30u: goto label_133d30;
            case 0x133D34u: goto label_133d34;
            case 0x133D38u: goto label_133d38;
            case 0x133D3Cu: goto label_133d3c;
            case 0x133D40u: goto label_133d40;
            case 0x133D44u: goto label_133d44;
            case 0x133D48u: goto label_133d48;
            case 0x133D4Cu: goto label_133d4c;
            case 0x133D50u: goto label_133d50;
            case 0x133D54u: goto label_133d54;
            case 0x133D58u: goto label_133d58;
            case 0x133D5Cu: goto label_133d5c;
            case 0x133D60u: goto label_133d60;
            case 0x133D64u: goto label_133d64;
            case 0x133D68u: goto label_133d68;
            case 0x133D6Cu: goto label_133d6c;
            case 0x133D70u: goto label_133d70;
            case 0x133D74u: goto label_133d74;
            case 0x133D78u: goto label_133d78;
            case 0x133D7Cu: goto label_133d7c;
            case 0x133D80u: goto label_133d80;
            case 0x133D84u: goto label_133d84;
            case 0x133D88u: goto label_133d88;
            case 0x133D8Cu: goto label_133d8c;
            case 0x133D90u: goto label_133d90;
            case 0x133D94u: goto label_133d94;
            case 0x133D98u: goto label_133d98;
            case 0x133D9Cu: goto label_133d9c;
            case 0x133DA0u: goto label_133da0;
            case 0x133DA4u: goto label_133da4;
            case 0x133DA8u: goto label_133da8;
            case 0x133DACu: goto label_133dac;
            case 0x133DB0u: goto label_133db0;
            case 0x133DB4u: goto label_133db4;
            case 0x133DB8u: goto label_133db8;
            case 0x133DBCu: goto label_133dbc;
            case 0x133DC0u: goto label_133dc0;
            case 0x133DC4u: goto label_133dc4;
            case 0x133DC8u: goto label_133dc8;
            case 0x133DCCu: goto label_133dcc;
            case 0x133DD0u: goto label_133dd0;
            case 0x133DD4u: goto label_133dd4;
            case 0x133DD8u: goto label_133dd8;
            case 0x133DDCu: goto label_133ddc;
            case 0x133DE0u: goto label_133de0;
            case 0x133DE4u: goto label_133de4;
            case 0x133DE8u: goto label_133de8;
            case 0x133DECu: goto label_133dec;
            case 0x133DF0u: goto label_133df0;
            case 0x133DF4u: goto label_133df4;
            case 0x133DF8u: goto label_133df8;
            case 0x133DFCu: goto label_133dfc;
            case 0x133E00u: goto label_133e00;
            case 0x133E04u: goto label_133e04;
            case 0x133E08u: goto label_133e08;
            case 0x133E0Cu: goto label_133e0c;
            case 0x133E10u: goto label_133e10;
            case 0x133E14u: goto label_133e14;
            case 0x133E18u: goto label_133e18;
            case 0x133E1Cu: goto label_133e1c;
            case 0x133E20u: goto label_133e20;
            case 0x133E24u: goto label_133e24;
            case 0x133E28u: goto label_133e28;
            case 0x133E2Cu: goto label_133e2c;
            case 0x133E30u: goto label_133e30;
            case 0x133E34u: goto label_133e34;
            case 0x133E38u: goto label_133e38;
            case 0x133E3Cu: goto label_133e3c;
            case 0x133E40u: goto label_133e40;
            case 0x133E44u: goto label_133e44;
            case 0x133E48u: goto label_133e48;
            case 0x133E4Cu: goto label_133e4c;
            case 0x133E50u: goto label_133e50;
            case 0x133E54u: goto label_133e54;
            case 0x133E58u: goto label_133e58;
            case 0x133E5Cu: goto label_133e5c;
            case 0x133E60u: goto label_133e60;
            case 0x133E64u: goto label_133e64;
            case 0x133E68u: goto label_133e68;
            case 0x133E6Cu: goto label_133e6c;
            case 0x133E70u: goto label_133e70;
            case 0x133E74u: goto label_133e74;
            case 0x133E78u: goto label_133e78;
            case 0x133E7Cu: goto label_133e7c;
            case 0x133E80u: goto label_133e80;
            case 0x133E84u: goto label_133e84;
            case 0x133E88u: goto label_133e88;
            case 0x133E8Cu: goto label_133e8c;
            case 0x133E90u: goto label_133e90;
            case 0x133E94u: goto label_133e94;
            case 0x133E98u: goto label_133e98;
            case 0x133E9Cu: goto label_133e9c;
            case 0x133EA0u: goto label_133ea0;
            case 0x133EA4u: goto label_133ea4;
            case 0x133EA8u: goto label_133ea8;
            case 0x133EACu: goto label_133eac;
            case 0x133EB0u: goto label_133eb0;
            case 0x133EB4u: goto label_133eb4;
            case 0x133EB8u: goto label_133eb8;
            case 0x133EBCu: goto label_133ebc;
            case 0x133EC0u: goto label_133ec0;
            case 0x133EC4u: goto label_133ec4;
            case 0x133EC8u: goto label_133ec8;
            case 0x133ECCu: goto label_133ecc;
            case 0x133ED0u: goto label_133ed0;
            case 0x133ED4u: goto label_133ed4;
            case 0x133ED8u: goto label_133ed8;
            case 0x133EDCu: goto label_133edc;
            case 0x133EE0u: goto label_133ee0;
            case 0x133EE4u: goto label_133ee4;
            case 0x133EE8u: goto label_133ee8;
            case 0x133EECu: goto label_133eec;
            case 0x133EF0u: goto label_133ef0;
            case 0x133EF4u: goto label_133ef4;
            case 0x133EF8u: goto label_133ef8;
            case 0x133EFCu: goto label_133efc;
            case 0x133F00u: goto label_133f00;
            case 0x133F04u: goto label_133f04;
            case 0x133F08u: goto label_133f08;
            case 0x133F0Cu: goto label_133f0c;
            case 0x133F10u: goto label_133f10;
            case 0x133F14u: goto label_133f14;
            case 0x133F18u: goto label_133f18;
            case 0x133F1Cu: goto label_133f1c;
            case 0x133F20u: goto label_133f20;
            case 0x133F24u: goto label_133f24;
            case 0x133F28u: goto label_133f28;
            case 0x133F2Cu: goto label_133f2c;
            case 0x133F30u: goto label_133f30;
            case 0x133F34u: goto label_133f34;
            case 0x133F38u: goto label_133f38;
            case 0x133F3Cu: goto label_133f3c;
            case 0x133F40u: goto label_133f40;
            case 0x133F44u: goto label_133f44;
            case 0x133F48u: goto label_133f48;
            case 0x133F4Cu: goto label_133f4c;
            case 0x133F50u: goto label_133f50;
            case 0x133F54u: goto label_133f54;
            case 0x133F58u: goto label_133f58;
            case 0x133F5Cu: goto label_133f5c;
            case 0x133F60u: goto label_133f60;
            case 0x133F64u: goto label_133f64;
            case 0x133F68u: goto label_133f68;
            case 0x133F6Cu: goto label_133f6c;
            case 0x133F70u: goto label_133f70;
            case 0x133F74u: goto label_133f74;
            case 0x133F78u: goto label_133f78;
            case 0x133F7Cu: goto label_133f7c;
            case 0x133F80u: goto label_133f80;
            case 0x133F84u: goto label_133f84;
            case 0x133F88u: goto label_133f88;
            case 0x133F8Cu: goto label_133f8c;
            case 0x133F90u: goto label_133f90;
            case 0x133F94u: goto label_133f94;
            case 0x133F98u: goto label_133f98;
            case 0x133F9Cu: goto label_133f9c;
            case 0x133FA0u: goto label_133fa0;
            case 0x133FA4u: goto label_133fa4;
            case 0x133FA8u: goto label_133fa8;
            case 0x133FACu: goto label_133fac;
            case 0x133FB0u: goto label_133fb0;
            case 0x133FB4u: goto label_133fb4;
            case 0x133FB8u: goto label_133fb8;
            case 0x133FBCu: goto label_133fbc;
            case 0x133FC0u: goto label_133fc0;
            case 0x133FC4u: goto label_133fc4;
            case 0x133FC8u: goto label_133fc8;
            case 0x133FCCu: goto label_133fcc;
            case 0x133FD0u: goto label_133fd0;
            case 0x133FD4u: goto label_133fd4;
            case 0x133FD8u: goto label_133fd8;
            case 0x133FDCu: goto label_133fdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x133FDCu;
label_133fdc:
    // 0x133fdc: 0x0
    ctx->pc = 0x133fdcu;
    // NOP
}
