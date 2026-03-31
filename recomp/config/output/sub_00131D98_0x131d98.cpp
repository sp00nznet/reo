#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00131D98
// Address: 0x131d98 - 0x131e38
void sub_00131D98_0x131d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x131d98u;

label_131d98:
    // 0x131d98: 0x27bdfff0
    ctx->pc = 0x131d98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_131d9c:
    // 0x131d9c: 0xffb00000
    ctx->pc = 0x131d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_131da0:
    // 0x131da0: 0xffbf0008
    ctx->pc = 0x131da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_131da4:
    // 0x131da4: 0xc049938
label_131da8:
    if (ctx->pc == 0x131DA8u) {
        ctx->pc = 0x131DA8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x131DACu;
        goto label_131dac;
    }
    ctx->pc = 0x131DA4u;
    SET_GPR_U32(ctx, 31, 0x131DACu);
    ctx->pc = 0x131DA8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1264E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264E0_0x1264e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131DACu; }
    }
    if (ctx->pc != 0x131DACu) { return; }
    ctx->pc = 0x131DACu;
label_131dac:
    // 0x131dac: 0x8e04000c
    ctx->pc = 0x131dacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_131db0:
    // 0x131db0: 0xc04b1ba
label_131db4:
    if (ctx->pc == 0x131DB4u) {
        ctx->pc = 0x131DB4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x131DB8u;
        goto label_131db8;
    }
    ctx->pc = 0x131DB0u;
    SET_GPR_U32(ctx, 31, 0x131DB8u);
    ctx->pc = 0x131DB4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12C6E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C6E8_0x12c6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131DB8u; }
    }
    if (ctx->pc != 0x131DB8u) { return; }
    ctx->pc = 0x131DB8u;
label_131db8:
    // 0x131db8: 0x8e04000c
    ctx->pc = 0x131db8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_131dbc:
    // 0x131dbc: 0xc04b1c0
label_131dc0:
    if (ctx->pc == 0x131DC0u) {
        ctx->pc = 0x131DC0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x131DC4u;
        goto label_131dc4;
    }
    ctx->pc = 0x131DBCu;
    SET_GPR_U32(ctx, 31, 0x131DC4u);
    ctx->pc = 0x131DC0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12C700u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C700_0x12c700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131DC4u; }
    }
    if (ctx->pc != 0x131DC4u) { return; }
    ctx->pc = 0x131DC4u;
label_131dc4:
    // 0x131dc4: 0x8e04000c
    ctx->pc = 0x131dc4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_131dc8:
    // 0x131dc8: 0xc04fb16
label_131dcc:
    if (ctx->pc == 0x131DCCu) {
        ctx->pc = 0x131DCCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x131DD0u;
        goto label_131dd0;
    }
    ctx->pc = 0x131DC8u;
    SET_GPR_U32(ctx, 31, 0x131DD0u);
    ctx->pc = 0x131DCCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x13EC58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013EC58_0x13ec58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131DD0u; }
    }
    if (ctx->pc != 0x131DD0u) { return; }
    ctx->pc = 0x131DD0u;
label_131dd0:
    // 0x131dd0: 0xc04b32c
label_131dd4:
    if (ctx->pc == 0x131DD4u) {
        ctx->pc = 0x131DD4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x131DD8u;
        goto label_131dd8;
    }
    ctx->pc = 0x131DD0u;
    SET_GPR_U32(ctx, 31, 0x131DD8u);
    ctx->pc = 0x131DD4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x12CCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012CCB0_0x12ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131DD8u; }
    }
    if (ctx->pc != 0x131DD8u) { return; }
    ctx->pc = 0x131DD8u;
label_131dd8:
    // 0x131dd8: 0x82030002
    ctx->pc = 0x131dd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_131ddc:
    // 0x131ddc: 0x24020002
    ctx->pc = 0x131ddcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_131de0:
    // 0x131de0: 0x5462000a
label_131de4:
    if (ctx->pc == 0x131DE4u) {
        ctx->pc = 0x131DE4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->pc = 0x131DE8u;
        goto label_131de8;
    }
    ctx->pc = 0x131DE0u;
    {
        const bool branch_taken_0x131de0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x131de0) {
            ctx->pc = 0x131DE4u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->pc = 0x131E0Cu;
            goto label_131e0c;
        }
    }
    ctx->pc = 0x131DE8u;
label_131de8:
    // 0x131de8: 0x8e040014
    ctx->pc = 0x131de8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_131dec:
    // 0x131dec: 0x50800007
label_131df0:
    if (ctx->pc == 0x131DF0u) {
        ctx->pc = 0x131DF0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->pc = 0x131DF4u;
        goto label_131df4;
    }
    ctx->pc = 0x131DECu;
    {
        const bool branch_taken_0x131dec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x131dec) {
            ctx->pc = 0x131DF0u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->pc = 0x131E0Cu;
            goto label_131e0c;
        }
    }
    ctx->pc = 0x131DF4u;
label_131df4:
    // 0x131df4: 0x8c830000
    ctx->pc = 0x131df4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_131df8:
    // 0x131df8: 0xae000014
    ctx->pc = 0x131df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_131dfc:
    // 0x131dfc: 0x8c62000c
    ctx->pc = 0x131dfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_131e00:
    // 0x131e00: 0x40f809
label_131e04:
    if (ctx->pc == 0x131E04u) {
        ctx->pc = 0x131E08u;
        goto label_131e08;
    }
    ctx->pc = 0x131E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x131E08u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131D98u: goto label_131d98;
            case 0x131D9Cu: goto label_131d9c;
            case 0x131DA0u: goto label_131da0;
            case 0x131DA4u: goto label_131da4;
            case 0x131DA8u: goto label_131da8;
            case 0x131DACu: goto label_131dac;
            case 0x131DB0u: goto label_131db0;
            case 0x131DB4u: goto label_131db4;
            case 0x131DB8u: goto label_131db8;
            case 0x131DBCu: goto label_131dbc;
            case 0x131DC0u: goto label_131dc0;
            case 0x131DC4u: goto label_131dc4;
            case 0x131DC8u: goto label_131dc8;
            case 0x131DCCu: goto label_131dcc;
            case 0x131DD0u: goto label_131dd0;
            case 0x131DD4u: goto label_131dd4;
            case 0x131DD8u: goto label_131dd8;
            case 0x131DDCu: goto label_131ddc;
            case 0x131DE0u: goto label_131de0;
            case 0x131DE4u: goto label_131de4;
            case 0x131DE8u: goto label_131de8;
            case 0x131DECu: goto label_131dec;
            case 0x131DF0u: goto label_131df0;
            case 0x131DF4u: goto label_131df4;
            case 0x131DF8u: goto label_131df8;
            case 0x131DFCu: goto label_131dfc;
            case 0x131E00u: goto label_131e00;
            case 0x131E04u: goto label_131e04;
            case 0x131E08u: goto label_131e08;
            case 0x131E0Cu: goto label_131e0c;
            case 0x131E10u: goto label_131e10;
            case 0x131E14u: goto label_131e14;
            case 0x131E18u: goto label_131e18;
            case 0x131E1Cu: goto label_131e1c;
            case 0x131E20u: goto label_131e20;
            case 0x131E24u: goto label_131e24;
            case 0x131E28u: goto label_131e28;
            case 0x131E2Cu: goto label_131e2c;
            case 0x131E30u: goto label_131e30;
            case 0x131E34u: goto label_131e34;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x131E08u; }
            if (ctx->pc != 0x131E08u) { return; }
        }
    }
    ctx->pc = 0x131E08u;
label_131e08:
    // 0x131e08: 0x8e040074
    ctx->pc = 0x131e08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_131e0c:
    // 0x131e0c: 0x50800004
label_131e10:
    if (ctx->pc == 0x131E10u) {
        ctx->pc = 0x131E10u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x131E14u;
        goto label_131e14;
    }
    ctx->pc = 0x131E0Cu;
    {
        const bool branch_taken_0x131e0c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x131e0c) {
            ctx->pc = 0x131E10u;
            WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x131E20u;
            goto label_131e20;
        }
    }
    ctx->pc = 0x131E14u;
label_131e14:
    // 0x131e14: 0xc048aba
label_131e18:
    if (ctx->pc == 0x131E18u) {
        ctx->pc = 0x131E1Cu;
        goto label_131e1c;
    }
    ctx->pc = 0x131E14u;
    SET_GPR_U32(ctx, 31, 0x131E1Cu);
    ctx->pc = 0x122AE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00122AE8_0x122ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131E1Cu; }
    }
    if (ctx->pc != 0x131E1Cu) { return; }
    ctx->pc = 0x131E1Cu;
label_131e1c:
    // 0x131e1c: 0xa20000ac
    ctx->pc = 0x131e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 0));
label_131e20:
    // 0x131e20: 0xae000014
    ctx->pc = 0x131e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_131e24:
    // 0x131e24: 0xa2000001
    ctx->pc = 0x131e24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_131e28:
    // 0x131e28: 0xdfbf0008
    ctx->pc = 0x131e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_131e2c:
    // 0x131e2c: 0xdfb00000
    ctx->pc = 0x131e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_131e30:
    // 0x131e30: 0x804993e
label_131e34:
    if (ctx->pc == 0x131E34u) {
        ctx->pc = 0x131E34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x131E38u;
        goto label_fallthrough_0x131e30;
    }
    ctx->pc = 0x131E30u;
    ctx->pc = 0x131E34u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1264F8u;
    sub_001264F8_0x1264f8(rdram, ctx, runtime); return;
label_fallthrough_0x131e30:
    ctx->pc = 0x131E38u;
}
