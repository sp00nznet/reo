#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00115BE8
// Address: 0x115be8 - 0x115d60
void sub_00115BE8_0x115be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x115be8u;

    // 0x115be8: 0x27bdff80
    ctx->pc = 0x115be8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x115bec: 0xffb50050
    ctx->pc = 0x115becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x115bf0: 0xffb40040
    ctx->pc = 0x115bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x115bf4: 0x3c150026
    ctx->pc = 0x115bf4u;
    SET_GPR_U32(ctx, 21, ((uint32_t)38 << 16));
    // 0x115bf8: 0xffb30030
    ctx->pc = 0x115bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x115bfc: 0xa02d
    ctx->pc = 0x115bfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c00: 0xffb20020
    ctx->pc = 0x115c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x115c04: 0x26b3ab90
    ctx->pc = 0x115c04u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 21), 4294945680));
    // 0x115c08: 0xffb10010
    ctx->pc = 0x115c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x115c0c: 0xa0902d
    ctx->pc = 0x115c0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c10: 0xffb00000
    ctx->pc = 0x115c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115c14: 0x882d
    ctx->pc = 0x115c14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c18: 0xffbf0070
    ctx->pc = 0x115c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x115c1c: 0x80802d
    ctx->pc = 0x115c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c20: 0xffb60060
    ctx->pc = 0x115c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x115c24: 0x8e62000c
    ctx->pc = 0x115c24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x115c28: 0x14400042
    ctx->pc = 0x115C28u;
    {
        const bool branch_taken_0x115c28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x115C2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x115c28) {
            ctx->pc = 0x115D34u;
            goto label_115d34;
        }
    }
    ctx->pc = 0x115C30u;
    // 0x115c30: 0xc047598
    ctx->pc = 0x115C30u;
    SET_GPR_U32(ctx, 31, 0x115C38u);
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115C38u; }
    }
    if (ctx->pc != 0x115C38u) { return; }
    ctx->pc = 0x115C38u;
    // 0x115c38: 0x40b02d
    ctx->pc = 0x115c38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c3c: 0x3c042000
    ctx->pc = 0x115c3cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)8192 << 16));
    // 0x115c40: 0x3c020026
    ctx->pc = 0x115c40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x115c44: 0x24030001
    ctx->pc = 0x115c44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x115c48: 0x2442abc0
    ctx->pc = 0x115c48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945728));
    // 0x115c4c: 0xae63000c
    ctx->pc = 0x115c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
    // 0x115c50: 0x443025
    ctx->pc = 0x115c50u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x115c54: 0x2408ffff
    ctx->pc = 0x115c54u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115c58: 0xae660010
    ctx->pc = 0x115c58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 6));
    // 0x115c5c: 0x2407000a
    ctx->pc = 0x115c5cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 10));
    // 0x115c60: 0x2405000d
    ctx->pc = 0x115c60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 13));
    // 0x115c64: 0x24c4000c
    ctx->pc = 0x115c64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 12));
label_115c68:
    // 0x115c68: 0x2652ffff
    ctx->pc = 0x115c68u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x115c6c: 0x52480012
    ctx->pc = 0x115C6Cu;
    {
        const bool branch_taken_0x115c6c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 8));
        if (branch_taken_0x115c6c) {
            ctx->pc = 0x115C70u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 21), 4294945680));
            ctx->pc = 0x115CB8u;
            goto label_115cb8;
        }
    }
    ctx->pc = 0x115C74u;
    // 0x115c74: 0x82020000
    ctx->pc = 0x115c74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x115c78: 0x14470007
    ctx->pc = 0x115C78u;
    {
        const bool branch_taken_0x115c78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 7));
        ctx->pc = 0x115C7Cu;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x115c78) {
            ctx->pc = 0x115C98u;
            goto label_115c98;
        }
    }
    ctx->pc = 0x115C80u;
    // 0x115c80: 0xa0850000
    ctx->pc = 0x115c80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x115c84: 0x26310001
    ctx->pc = 0x115c84u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x115c88: 0x2a220100
    ctx->pc = 0x115c88u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 256));
    // 0x115c8c: 0x10400009
    ctx->pc = 0x115C8Cu;
    {
        const bool branch_taken_0x115c8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x115C90u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x115c8c) {
            ctx->pc = 0x115CB4u;
            goto label_115cb4;
        }
    }
    ctx->pc = 0x115C94u;
    // 0x115c94: 0x92030000
    ctx->pc = 0x115c94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_115c98:
    // 0x115c98: 0xa0830000
    ctx->pc = 0x115c98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x115c9c: 0x26310001
    ctx->pc = 0x115c9cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x115ca0: 0x26100001
    ctx->pc = 0x115ca0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x115ca4: 0x24840001
    ctx->pc = 0x115ca4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x115ca8: 0x2a220100
    ctx->pc = 0x115ca8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 256));
    // 0x115cac: 0x1440ffee
    ctx->pc = 0x115CACu;
    {
        const bool branch_taken_0x115cac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x115CB0u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x115cac) {
            ctx->pc = 0x115C68u;
            goto label_115c68;
        }
    }
    ctx->pc = 0x115CB4u;
label_115cb4:
    // 0x115cb4: 0x26b0ab90
    ctx->pc = 0x115cb4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 21), 4294945680));
label_115cb8:
    // 0x115cb8: 0x2622000c
    ctx->pc = 0x115cb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 12));
    // 0x115cbc: 0xae020004
    ctx->pc = 0x115cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x115cc0: 0x8e030004
    ctx->pc = 0x115cc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x115cc4: 0x80c50007
    ctx->pc = 0x115cc4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
    // 0x115cc8: 0x8ea4ab90
    ctx->pc = 0x115cc8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 4294945680)));
    // 0x115ccc: 0xc0455f8
    ctx->pc = 0x115CCCu;
    SET_GPR_U32(ctx, 31, 0x115CD4u);
    ctx->pc = 0x115CD0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1157E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001157E0_0x1157e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115CD4u; }
    }
    if (ctx->pc != 0x115CD4u) { return; }
    ctx->pc = 0x115CD4u;
    // 0x115cd4: 0x4410008
    ctx->pc = 0x115CD4u;
    {
        const bool branch_taken_0x115cd4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x115cd4) {
            ctx->pc = 0x115CF8u;
            goto label_115cf8;
        }
    }
    ctx->pc = 0x115CDCu;
    // 0x115cdc: 0xae00000c
    ctx->pc = 0x115cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x115ce0: 0x12c00014
    ctx->pc = 0x115CE0u;
    {
        const bool branch_taken_0x115ce0 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x115CE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x115ce0) {
            ctx->pc = 0x115D34u;
            goto label_115d34;
        }
    }
    ctx->pc = 0x115CE8u;
    // 0x115ce8: 0xc0475ae
    ctx->pc = 0x115CE8u;
    SET_GPR_U32(ctx, 31, 0x115CF0u);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115CF0u; }
    }
    if (ctx->pc != 0x115CF0u) { return; }
    ctx->pc = 0x115CF0u;
    // 0x115cf0: 0x10000010
    ctx->pc = 0x115CF0u;
    {
        const bool branch_taken_0x115cf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x115CF4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x115cf0) {
            ctx->pc = 0x115D34u;
            goto label_115d34;
        }
    }
    ctx->pc = 0x115CF8u;
label_115cf8:
    // 0x115cf8: 0x8e02000c
    ctx->pc = 0x115cf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x115cfc: 0x10400008
    ctx->pc = 0x115CFCu;
    {
        const bool branch_taken_0x115cfc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x115D00u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x115cfc) {
            ctx->pc = 0x115D20u;
            goto label_115d20;
        }
    }
    ctx->pc = 0x115D04u;
    // 0x115d04: 0x0
    ctx->pc = 0x115d04u;
    // NOP
label_115d08:
    // 0x115d08: 0x8e24ab90
    ctx->pc = 0x115d08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294945680)));
    // 0x115d0c: 0xc045604
    ctx->pc = 0x115D0Cu;
    SET_GPR_U32(ctx, 31, 0x115D14u);
    ctx->pc = 0x115810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00115810_0x115810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115D14u; }
    }
    if (ctx->pc != 0x115D14u) { return; }
    ctx->pc = 0x115D14u;
    // 0x115d14: 0x8e02000c
    ctx->pc = 0x115d14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x115d18: 0x1440fffb
    ctx->pc = 0x115D18u;
    {
        const bool branch_taken_0x115d18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x115d18) {
            ctx->pc = 0x115D08u;
            goto label_115d08;
        }
    }
    ctx->pc = 0x115D20u;
label_115d20:
    // 0x115d20: 0x12c00004
    ctx->pc = 0x115D20u;
    {
        const bool branch_taken_0x115d20 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x115D24u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x115d20) {
            ctx->pc = 0x115D34u;
            goto label_115d34;
        }
    }
    ctx->pc = 0x115D28u;
    // 0x115d28: 0xc0475ae
    ctx->pc = 0x115D28u;
    SET_GPR_U32(ctx, 31, 0x115D30u);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115D30u; }
    }
    if (ctx->pc != 0x115D30u) { return; }
    ctx->pc = 0x115D30u;
    // 0x115d30: 0x280102d
    ctx->pc = 0x115d30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_115d34:
    // 0x115d34: 0xdfbf0070
    ctx->pc = 0x115d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x115d38: 0xdfb60060
    ctx->pc = 0x115d38u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x115d3c: 0xdfb50050
    ctx->pc = 0x115d3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x115d40: 0xdfb40040
    ctx->pc = 0x115d40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x115d44: 0xdfb30030
    ctx->pc = 0x115d44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115d48: 0xdfb20020
    ctx->pc = 0x115d48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115d4c: 0xdfb10010
    ctx->pc = 0x115d4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115d50: 0xdfb00000
    ctx->pc = 0x115d50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115d54: 0x3e00008
    ctx->pc = 0x115D54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115D58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115C68u: goto label_115c68;
            case 0x115C98u: goto label_115c98;
            case 0x115CB4u: goto label_115cb4;
            case 0x115CB8u: goto label_115cb8;
            case 0x115CF8u: goto label_115cf8;
            case 0x115D08u: goto label_115d08;
            case 0x115D20u: goto label_115d20;
            case 0x115D34u: goto label_115d34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x115D5Cu;
    // 0x115d5c: 0x0
    ctx->pc = 0x115d5cu;
    // NOP
}
