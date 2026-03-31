#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016CC98
// Address: 0x16cc98 - 0x16cdf0
void sub_0016CC98_0x16cc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16cc98u;

    // 0x16cc98: 0x27bdffb0
    ctx->pc = 0x16cc98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16cc9c: 0xffb10018
    ctx->pc = 0x16cc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16cca0: 0xffb20020
    ctx->pc = 0x16cca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16cca4: 0x80902d
    ctx->pc = 0x16cca4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cca8: 0xffb50038
    ctx->pc = 0x16cca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x16ccac: 0xa0a82d
    ctx->pc = 0x16ccacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ccb0: 0xffb60040
    ctx->pc = 0x16ccb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x16ccb4: 0xc0b02d
    ctx->pc = 0x16ccb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ccb8: 0xffb00010
    ctx->pc = 0x16ccb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16ccbc: 0x2a0302d
    ctx->pc = 0x16ccbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ccc0: 0xffb30028
    ctx->pc = 0x16ccc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x16ccc4: 0xffb40030
    ctx->pc = 0x16ccc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x16ccc8: 0xffbf0048
    ctx->pc = 0x16ccc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x16cccc: 0xaec00000
    ctx->pc = 0x16ccccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x16ccd0: 0x8e450004
    ctx->pc = 0x16ccd0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x16ccd4: 0xc0561d4
    ctx->pc = 0x16CCD4u;
    SET_GPR_U32(ctx, 31, 0x16CCDCu);
    ctx->pc = 0x16CCD8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x158750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158750_0x158750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CCDCu; }
    }
    if (ctx->pc != 0x16CCDCu) { return; }
    ctx->pc = 0x16CCDCu;
    // 0x16ccdc: 0x40882d
    ctx->pc = 0x16ccdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cce0: 0x52200009
    ctx->pc = 0x16CCE0u;
    {
        const bool branch_taken_0x16cce0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x16cce0) {
            ctx->pc = 0x16CCE4u;
            SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->pc = 0x16CD08u;
            goto label_16cd08;
        }
    }
    ctx->pc = 0x16CCE8u;
    // 0x16cce8: 0x10000032
    ctx->pc = 0x16CCE8u;
    {
        const bool branch_taken_0x16cce8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x16cce8) {
            ctx->pc = 0x16CDB4u;
            goto label_16cdb4;
        }
    }
    ctx->pc = 0x16CCF0u;
label_16ccf0:
    // 0x16ccf0: 0x8e420000
    ctx->pc = 0x16ccf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16ccf4: 0xaec60000
    ctx->pc = 0x16ccf4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
    // 0x16ccf8: 0x431021
    ctx->pc = 0x16ccf8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16ccfc: 0x531023
    ctx->pc = 0x16ccfcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x16cd00: 0x10000030
    ctx->pc = 0x16CD00u;
    {
        const bool branch_taken_0x16cd00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16CD04u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        if (branch_taken_0x16cd00) {
            ctx->pc = 0x16CDC4u;
            goto label_16cdc4;
        }
    }
    ctx->pc = 0x16CD08u;
label_16cd08:
    // 0x16cd08: 0x10e0002e
    ctx->pc = 0x16CD08u;
    {
        const bool branch_taken_0x16cd08 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x16CD0Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x16cd08) {
            ctx->pc = 0x16CDC4u;
            goto label_16cdc4;
        }
    }
    ctx->pc = 0x16CD10u;
    // 0x16cd10: 0x8e530004
    ctx->pc = 0x16cd10u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x16cd14: 0x8e450000
    ctx->pc = 0x16cd14u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16cd18: 0x60802d
    ctx->pc = 0x16cd18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cd1c: 0x260302d
    ctx->pc = 0x16cd1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cd20: 0x2a620004
    ctx->pc = 0x16cd20u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
    // 0x16cd24: 0x62980a
    ctx->pc = 0x16cd24u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 3));
    // 0x16cd28: 0x28e20004
    ctx->pc = 0x16cd28u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 4));
    // 0x16cd2c: 0xa62821
    ctx->pc = 0x16cd2cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x16cd30: 0x260302d
    ctx->pc = 0x16cd30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cd34: 0xe2800b
    ctx->pc = 0x16cd34u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 7));
    // 0x16cd38: 0x3a0202d
    ctx->pc = 0x16cd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cd3c: 0xb32823
    ctx->pc = 0x16cd3cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x16cd40: 0xc041eac
    ctx->pc = 0x16CD40u;
    SET_GPR_U32(ctx, 31, 0x16CD48u);
    ctx->pc = 0x16CD44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CD48u; }
    }
    if (ctx->pc != 0x16CD48u) { return; }
    ctx->pc = 0x16CD48u;
    // 0x16cd48: 0x8e450008
    ctx->pc = 0x16cd48u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x16cd4c: 0x200302d
    ctx->pc = 0x16cd4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cd50: 0x2708021
    ctx->pc = 0x16cd50u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x16cd54: 0x3b32021
    ctx->pc = 0x16cd54u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 19)));
    // 0x16cd58: 0xc041eac
    ctx->pc = 0x16CD58u;
    SET_GPR_U32(ctx, 31, 0x16CD60u);
    ctx->pc = 0x16CD5Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967293));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CD60u; }
    }
    if (ctx->pc != 0x16CD60u) { return; }
    ctx->pc = 0x16CD60u;
    // 0x16cd60: 0x230102a
    ctx->pc = 0x16cd60u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 16)));
    // 0x16cd64: 0x5040000d
    ctx->pc = 0x16CD64u;
    {
        const bool branch_taken_0x16cd64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16cd64) {
            ctx->pc = 0x16CD68u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->pc = 0x16CD9Cu;
            goto label_16cd9c;
        }
    }
    ctx->pc = 0x16CD6Cu;
    // 0x16cd6c: 0x0
    ctx->pc = 0x16cd6cu;
    // NOP
label_16cd70:
    // 0x16cd70: 0xc05616e
    ctx->pc = 0x16CD70u;
    SET_GPR_U32(ctx, 31, 0x16CD78u);
    ctx->pc = 0x16CD74u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
    ctx->pc = 0x1585B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001585B8_0x1585b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CD78u; }
    }
    if (ctx->pc != 0x16CD78u) { return; }
    ctx->pc = 0x16CD78u;
    // 0x16cd78: 0x40302d
    ctx->pc = 0x16cd78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cd7c: 0xd51024
    ctx->pc = 0x16cd7cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x16cd80: 0x5440ffdb
    ctx->pc = 0x16CD80u;
    {
        const bool branch_taken_0x16cd80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16cd80) {
            ctx->pc = 0x16CD84u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->pc = 0x16CCF0u;
            goto label_16ccf0;
        }
    }
    ctx->pc = 0x16CD88u;
    // 0x16cd88: 0x26940001
    ctx->pc = 0x16cd88u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x16cd8c: 0x290102a
    ctx->pc = 0x16cd8cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 16)));
    // 0x16cd90: 0x1440fff7
    ctx->pc = 0x16CD90u;
    {
        const bool branch_taken_0x16cd90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16cd90) {
            ctx->pc = 0x16CD70u;
            goto label_16cd70;
        }
    }
    ctx->pc = 0x16CD98u;
    // 0x16cd98: 0x8e45000c
    ctx->pc = 0x16cd98u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_16cd9c:
    // 0x16cd9c: 0x2a0302d
    ctx->pc = 0x16cd9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cda0: 0xc0561d4
    ctx->pc = 0x16CDA0u;
    SET_GPR_U32(ctx, 31, 0x16CDA8u);
    ctx->pc = 0x16CDA4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->pc = 0x158750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158750_0x158750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CDA8u; }
    }
    if (ctx->pc != 0x16CDA8u) { return; }
    ctx->pc = 0x16CDA8u;
    // 0x16cda8: 0x40882d
    ctx->pc = 0x16cda8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cdac: 0x52200006
    ctx->pc = 0x16CDACu;
    {
        const bool branch_taken_0x16cdac = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x16cdac) {
            ctx->pc = 0x16CDB0u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x16CDC8u;
            goto label_16cdc8;
        }
    }
    ctx->pc = 0x16CDB4u;
label_16cdb4:
    // 0x16cdb4: 0xc05616e
    ctx->pc = 0x16CDB4u;
    SET_GPR_U32(ctx, 31, 0x16CDBCu);
    ctx->pc = 0x16CDB8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1585B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001585B8_0x1585b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CDBCu; }
    }
    if (ctx->pc != 0x16CDBCu) { return; }
    ctx->pc = 0x16CDBCu;
    // 0x16cdbc: 0xaec20000
    ctx->pc = 0x16cdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x16cdc0: 0x220102d
    ctx->pc = 0x16cdc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16cdc4:
    // 0x16cdc4: 0xdfb00010
    ctx->pc = 0x16cdc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16cdc8:
    // 0x16cdc8: 0xdfb10018
    ctx->pc = 0x16cdc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16cdcc: 0xdfb20020
    ctx->pc = 0x16cdccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16cdd0: 0xdfb30028
    ctx->pc = 0x16cdd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16cdd4: 0xdfb40030
    ctx->pc = 0x16cdd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16cdd8: 0xdfb50038
    ctx->pc = 0x16cdd8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16cddc: 0xdfb60040
    ctx->pc = 0x16cddcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16cde0: 0xdfbf0048
    ctx->pc = 0x16cde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16cde4: 0x3e00008
    ctx->pc = 0x16CDE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CDE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16CCF0u: goto label_16ccf0;
            case 0x16CD08u: goto label_16cd08;
            case 0x16CD70u: goto label_16cd70;
            case 0x16CD9Cu: goto label_16cd9c;
            case 0x16CDB4u: goto label_16cdb4;
            case 0x16CDC4u: goto label_16cdc4;
            case 0x16CDC8u: goto label_16cdc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16CDECu;
    // 0x16cdec: 0x0
    ctx->pc = 0x16cdecu;
    // NOP
}
