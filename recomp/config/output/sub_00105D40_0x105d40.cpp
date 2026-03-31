#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00105D40
// Address: 0x105d40 - 0x1061f0
void sub_00105D40_0x105d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x105d40u;

label_105d40:
    // 0x105d40: 0x27bdff40
    ctx->pc = 0x105d40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
label_105d44:
    // 0x105d44: 0xffb00070
    ctx->pc = 0x105d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_105d48:
    // 0x105d48: 0x80802d
    ctx->pc = 0x105d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_105d4c:
    // 0x105d4c: 0xffb40090
    ctx->pc = 0x105d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_105d50:
    // 0x105d50: 0xc0a02d
    ctx->pc = 0x105d50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_105d54:
    // 0x105d54: 0xffb600a0
    ctx->pc = 0x105d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_105d58:
    // 0x105d58: 0xffb10078
    ctx->pc = 0x105d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
label_105d5c:
    // 0x105d5c: 0xffb20080
    ctx->pc = 0x105d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_105d60:
    // 0x105d60: 0xffb30088
    ctx->pc = 0x105d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
label_105d64:
    // 0x105d64: 0xffb50098
    ctx->pc = 0x105d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
label_105d68:
    // 0x105d68: 0xffb700a8
    ctx->pc = 0x105d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
label_105d6c:
    // 0x105d6c: 0xffbf00b0
    ctx->pc = 0x105d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_105d70:
    // 0x105d70: 0x8e110054
    ctx->pc = 0x105d70u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_105d74:
    // 0x105d74: 0x16200006
label_105d78:
    if (ctx->pc == 0x105D78u) {
        ctx->pc = 0x105D78u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x105D7Cu;
        goto label_105d7c;
    }
    ctx->pc = 0x105D74u;
    {
        const bool branch_taken_0x105d74 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x105D78u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x105d74) {
            ctx->pc = 0x105D90u;
            goto label_105d90;
        }
    }
    ctx->pc = 0x105D7Cu;
label_105d7c:
    // 0x105d7c: 0x3c020021
    ctx->pc = 0x105d7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_105d80:
    // 0x105d80: 0x8c4397f0
    ctx->pc = 0x105d80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294940656)));
label_105d84:
    // 0x105d84: 0xae030054
    ctx->pc = 0x105d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_105d88:
    // 0x105d88: 0x60882d
    ctx->pc = 0x105d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_105d8c:
    // 0x105d8c: 0x0
    ctx->pc = 0x105d8cu;
    // NOP
label_105d90:
    // 0x105d90: 0x8e220038
    ctx->pc = 0x105d90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_105d94:
    // 0x105d94: 0x54400005
label_105d98:
    if (ctx->pc == 0x105D98u) {
        ctx->pc = 0x105D98u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x105D9Cu;
        goto label_105d9c;
    }
    ctx->pc = 0x105D94u;
    {
        const bool branch_taken_0x105d94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x105d94) {
            ctx->pc = 0x105D98u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x105DACu;
            goto label_105dac;
        }
    }
    ctx->pc = 0x105D9Cu;
label_105d9c:
    // 0x105d9c: 0xc041544
label_105da0:
    if (ctx->pc == 0x105DA0u) {
        ctx->pc = 0x105DA0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x105DA4u;
        goto label_105da4;
    }
    ctx->pc = 0x105D9Cu;
    SET_GPR_U32(ctx, 31, 0x105DA4u);
    ctx->pc = 0x105DA0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x105510u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00105510_0x105510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105DA4u; }
    }
    if (ctx->pc != 0x105DA4u) { return; }
    ctx->pc = 0x105DA4u;
label_105da4:
    // 0x105da4: 0x8e110054
    ctx->pc = 0x105da4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_105da8:
    // 0x105da8: 0x8e02000c
    ctx->pc = 0x105da8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_105dac:
    // 0x105dac: 0x24030108
    ctx->pc = 0x105dacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 264));
label_105db0:
    // 0x105db0: 0x30420108
    ctx->pc = 0x105db0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 264));
label_105db4:
    // 0x105db4: 0x54430004
label_105db8:
    if (ctx->pc == 0x105DB8u) {
        ctx->pc = 0x105DB8u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x105DBCu;
        goto label_105dbc;
    }
    ctx->pc = 0x105DB4u;
    {
        const bool branch_taken_0x105db4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x105db4) {
            ctx->pc = 0x105DB8u;
            SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->pc = 0x105DC8u;
            goto label_105dc8;
        }
    }
    ctx->pc = 0x105DBCu;
label_105dbc:
    // 0x105dbc: 0xc04142c
label_105dc0:
    if (ctx->pc == 0x105DC0u) {
        ctx->pc = 0x105DC0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x105DC4u;
        goto label_105dc4;
    }
    ctx->pc = 0x105DBCu;
    SET_GPR_U32(ctx, 31, 0x105DC4u);
    ctx->pc = 0x105DC0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1050B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001050B0_0x1050b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105DC4u; }
    }
    if (ctx->pc != 0x105DC4u) { return; }
    ctx->pc = 0x105DC4u;
label_105dc4:
    // 0x105dc4: 0x8e150028
    ctx->pc = 0x105dc4u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_105dc8:
    // 0x105dc8: 0x56a00003
label_105dcc:
    if (ctx->pc == 0x105DCCu) {
        ctx->pc = 0x105DCCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x105DD0u;
        goto label_105dd0;
    }
    ctx->pc = 0x105DC8u;
    {
        const bool branch_taken_0x105dc8 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        if (branch_taken_0x105dc8) {
            ctx->pc = 0x105DCCu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x105DD8u;
            goto label_105dd8;
        }
    }
    ctx->pc = 0x105DD0u;
label_105dd0:
    // 0x105dd0: 0x1000003b
label_105dd4:
    if (ctx->pc == 0x105DD4u) {
        ctx->pc = 0x105DD4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x105DD8u;
        goto label_105dd8;
    }
    ctx->pc = 0x105DD0u;
    {
        const bool branch_taken_0x105dd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x105DD4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 29));
        if (branch_taken_0x105dd0) {
            ctx->pc = 0x105EC0u;
            goto label_105ec0;
        }
    }
    ctx->pc = 0x105DD8u;
label_105dd8:
    // 0x105dd8: 0x1282000b
label_105ddc:
    if (ctx->pc == 0x105DDCu) {
        ctx->pc = 0x105DDCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 2));
        ctx->pc = 0x105DE0u;
        goto label_105de0;
    }
    ctx->pc = 0x105DD8u;
    {
        const bool branch_taken_0x105dd8 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x105DDCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 2));
        if (branch_taken_0x105dd8) {
            ctx->pc = 0x105E08u;
            goto label_105e08;
        }
    }
    ctx->pc = 0x105DE0u;
label_105de0:
    // 0x105de0: 0x10400005
label_105de4:
    if (ctx->pc == 0x105DE4u) {
        ctx->pc = 0x105DE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x105DE8u;
        goto label_105de8;
    }
    ctx->pc = 0x105DE0u;
    {
        const bool branch_taken_0x105de0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x105DE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x105de0) {
            ctx->pc = 0x105DF8u;
            goto label_105df8;
        }
    }
    ctx->pc = 0x105DE8u;
label_105de8:
    // 0x105de8: 0x12800031
label_105dec:
    if (ctx->pc == 0x105DECu) {
        ctx->pc = 0x105DECu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x105DF0u;
        goto label_105df0;
    }
    ctx->pc = 0x105DE8u;
    {
        const bool branch_taken_0x105de8 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x105DECu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 22));
        if (branch_taken_0x105de8) {
            ctx->pc = 0x105EB0u;
            goto label_105eb0;
        }
    }
    ctx->pc = 0x105DF0u;
label_105df0:
    // 0x105df0: 0x10000034
label_105df4:
    if (ctx->pc == 0x105DF4u) {
        ctx->pc = 0x105DF4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x105DF8u;
        goto label_105df8;
    }
    ctx->pc = 0x105DF0u;
    {
        const bool branch_taken_0x105df0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x105DF4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x105df0) {
            ctx->pc = 0x105EC4u;
            goto label_105ec4;
        }
    }
    ctx->pc = 0x105DF8u;
label_105df8:
    // 0x105df8: 0x1282002d
label_105dfc:
    if (ctx->pc == 0x105DFCu) {
        ctx->pc = 0x105DFCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x105E00u;
        goto label_105e00;
    }
    ctx->pc = 0x105DF8u;
    {
        const bool branch_taken_0x105df8 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x105DFCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 22));
        if (branch_taken_0x105df8) {
            ctx->pc = 0x105EB0u;
            goto label_105eb0;
        }
    }
    ctx->pc = 0x105E00u;
label_105e00:
    // 0x105e00: 0x10000030
label_105e04:
    if (ctx->pc == 0x105E04u) {
        ctx->pc = 0x105E04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x105E08u;
        goto label_105e08;
    }
    ctx->pc = 0x105E00u;
    {
        const bool branch_taken_0x105e00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x105E04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x105e00) {
            ctx->pc = 0x105EC4u;
            goto label_105ec4;
        }
    }
    ctx->pc = 0x105E08u;
label_105e08:
    // 0x105e08: 0xc04142c
label_105e0c:
    if (ctx->pc == 0x105E0Cu) {
        ctx->pc = 0x105E0Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x105E10u;
        goto label_105e10;
    }
    ctx->pc = 0x105E08u;
    SET_GPR_U32(ctx, 31, 0x105E10u);
    ctx->pc = 0x105E0Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1050B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001050B0_0x1050b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105E10u; }
    }
    if (ctx->pc != 0x105E10u) { return; }
    ctx->pc = 0x105E10u;
label_105e10:
    // 0x105e10: 0x9606000c
    ctx->pc = 0x105e10u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_105e14:
    // 0x105e14: 0x30c21000
    ctx->pc = 0x105e14u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 4096));
label_105e18:
    // 0x105e18: 0x50400003
label_105e1c:
    if (ctx->pc == 0x105E1Cu) {
        ctx->pc = 0x105E1Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x105E20u;
        goto label_105e20;
    }
    ctx->pc = 0x105E18u;
    {
        const bool branch_taken_0x105e18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x105e18) {
            ctx->pc = 0x105E1Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->pc = 0x105E28u;
            goto label_105e28;
        }
    }
    ctx->pc = 0x105E20u;
label_105e20:
    // 0x105e20: 0x10000009
label_105e24:
    if (ctx->pc == 0x105E24u) {
        ctx->pc = 0x105E24u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x105E28u;
        goto label_105e28;
    }
    ctx->pc = 0x105E20u;
    {
        const bool branch_taken_0x105e20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x105E24u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 80)));
        if (branch_taken_0x105e20) {
            ctx->pc = 0x105E48u;
            goto label_105e48;
        }
    }
    ctx->pc = 0x105E28u;
label_105e28:
    // 0x105e28: 0x282d
    ctx->pc = 0x105e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_105e2c:
    // 0x105e2c: 0x2a0f809
label_105e30:
    if (ctx->pc == 0x105E30u) {
        ctx->pc = 0x105E30u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x105E34u;
        goto label_105e34;
    }
    ctx->pc = 0x105E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x105E34u);
        ctx->pc = 0x105E30u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x105D40u: goto label_105d40;
            case 0x105D44u: goto label_105d44;
            case 0x105D48u: goto label_105d48;
            case 0x105D4Cu: goto label_105d4c;
            case 0x105D50u: goto label_105d50;
            case 0x105D54u: goto label_105d54;
            case 0x105D58u: goto label_105d58;
            case 0x105D5Cu: goto label_105d5c;
            case 0x105D60u: goto label_105d60;
            case 0x105D64u: goto label_105d64;
            case 0x105D68u: goto label_105d68;
            case 0x105D6Cu: goto label_105d6c;
            case 0x105D70u: goto label_105d70;
            case 0x105D74u: goto label_105d74;
            case 0x105D78u: goto label_105d78;
            case 0x105D7Cu: goto label_105d7c;
            case 0x105D80u: goto label_105d80;
            case 0x105D84u: goto label_105d84;
            case 0x105D88u: goto label_105d88;
            case 0x105D8Cu: goto label_105d8c;
            case 0x105D90u: goto label_105d90;
            case 0x105D94u: goto label_105d94;
            case 0x105D98u: goto label_105d98;
            case 0x105D9Cu: goto label_105d9c;
            case 0x105DA0u: goto label_105da0;
            case 0x105DA4u: goto label_105da4;
            case 0x105DA8u: goto label_105da8;
            case 0x105DACu: goto label_105dac;
            case 0x105DB0u: goto label_105db0;
            case 0x105DB4u: goto label_105db4;
            case 0x105DB8u: goto label_105db8;
            case 0x105DBCu: goto label_105dbc;
            case 0x105DC0u: goto label_105dc0;
            case 0x105DC4u: goto label_105dc4;
            case 0x105DC8u: goto label_105dc8;
            case 0x105DCCu: goto label_105dcc;
            case 0x105DD0u: goto label_105dd0;
            case 0x105DD4u: goto label_105dd4;
            case 0x105DD8u: goto label_105dd8;
            case 0x105DDCu: goto label_105ddc;
            case 0x105DE0u: goto label_105de0;
            case 0x105DE4u: goto label_105de4;
            case 0x105DE8u: goto label_105de8;
            case 0x105DECu: goto label_105dec;
            case 0x105DF0u: goto label_105df0;
            case 0x105DF4u: goto label_105df4;
            case 0x105DF8u: goto label_105df8;
            case 0x105DFCu: goto label_105dfc;
            case 0x105E00u: goto label_105e00;
            case 0x105E04u: goto label_105e04;
            case 0x105E08u: goto label_105e08;
            case 0x105E0Cu: goto label_105e0c;
            case 0x105E10u: goto label_105e10;
            case 0x105E14u: goto label_105e14;
            case 0x105E18u: goto label_105e18;
            case 0x105E1Cu: goto label_105e1c;
            case 0x105E20u: goto label_105e20;
            case 0x105E24u: goto label_105e24;
            case 0x105E28u: goto label_105e28;
            case 0x105E2Cu: goto label_105e2c;
            case 0x105E30u: goto label_105e30;
            case 0x105E34u: goto label_105e34;
            case 0x105E38u: goto label_105e38;
            case 0x105E3Cu: goto label_105e3c;
            case 0x105E40u: goto label_105e40;
            case 0x105E44u: goto label_105e44;
            case 0x105E48u: goto label_105e48;
            case 0x105E4Cu: goto label_105e4c;
            case 0x105E50u: goto label_105e50;
            case 0x105E54u: goto label_105e54;
            case 0x105E58u: goto label_105e58;
            case 0x105E5Cu: goto label_105e5c;
            case 0x105E60u: goto label_105e60;
            case 0x105E64u: goto label_105e64;
            case 0x105E68u: goto label_105e68;
            case 0x105E6Cu: goto label_105e6c;
            case 0x105E70u: goto label_105e70;
            case 0x105E74u: goto label_105e74;
            case 0x105E78u: goto label_105e78;
            case 0x105E7Cu: goto label_105e7c;
            case 0x105E80u: goto label_105e80;
            case 0x105E84u: goto label_105e84;
            case 0x105E88u: goto label_105e88;
            case 0x105E8Cu: goto label_105e8c;
            case 0x105E90u: goto label_105e90;
            case 0x105E94u: goto label_105e94;
            case 0x105E98u: goto label_105e98;
            case 0x105E9Cu: goto label_105e9c;
            case 0x105EA0u: goto label_105ea0;
            case 0x105EA4u: goto label_105ea4;
            case 0x105EA8u: goto label_105ea8;
            case 0x105EACu: goto label_105eac;
            case 0x105EB0u: goto label_105eb0;
            case 0x105EB4u: goto label_105eb4;
            case 0x105EB8u: goto label_105eb8;
            case 0x105EBCu: goto label_105ebc;
            case 0x105EC0u: goto label_105ec0;
            case 0x105EC4u: goto label_105ec4;
            case 0x105EC8u: goto label_105ec8;
            case 0x105ECCu: goto label_105ecc;
            case 0x105ED0u: goto label_105ed0;
            case 0x105ED4u: goto label_105ed4;
            case 0x105ED8u: goto label_105ed8;
            case 0x105EDCu: goto label_105edc;
            case 0x105EE0u: goto label_105ee0;
            case 0x105EE4u: goto label_105ee4;
            case 0x105EE8u: goto label_105ee8;
            case 0x105EECu: goto label_105eec;
            case 0x105EF0u: goto label_105ef0;
            case 0x105EF4u: goto label_105ef4;
            case 0x105EF8u: goto label_105ef8;
            case 0x105EFCu: goto label_105efc;
            case 0x105F00u: goto label_105f00;
            case 0x105F04u: goto label_105f04;
            case 0x105F08u: goto label_105f08;
            case 0x105F0Cu: goto label_105f0c;
            case 0x105F10u: goto label_105f10;
            case 0x105F14u: goto label_105f14;
            case 0x105F18u: goto label_105f18;
            case 0x105F1Cu: goto label_105f1c;
            case 0x105F20u: goto label_105f20;
            case 0x105F24u: goto label_105f24;
            case 0x105F28u: goto label_105f28;
            case 0x105F2Cu: goto label_105f2c;
            case 0x105F30u: goto label_105f30;
            case 0x105F34u: goto label_105f34;
            case 0x105F38u: goto label_105f38;
            case 0x105F3Cu: goto label_105f3c;
            case 0x105F40u: goto label_105f40;
            case 0x105F44u: goto label_105f44;
            case 0x105F48u: goto label_105f48;
            case 0x105F4Cu: goto label_105f4c;
            case 0x105F50u: goto label_105f50;
            case 0x105F54u: goto label_105f54;
            case 0x105F58u: goto label_105f58;
            case 0x105F5Cu: goto label_105f5c;
            case 0x105F60u: goto label_105f60;
            case 0x105F64u: goto label_105f64;
            case 0x105F68u: goto label_105f68;
            case 0x105F6Cu: goto label_105f6c;
            case 0x105F70u: goto label_105f70;
            case 0x105F74u: goto label_105f74;
            case 0x105F78u: goto label_105f78;
            case 0x105F7Cu: goto label_105f7c;
            case 0x105F80u: goto label_105f80;
            case 0x105F84u: goto label_105f84;
            case 0x105F88u: goto label_105f88;
            case 0x105F8Cu: goto label_105f8c;
            case 0x105F90u: goto label_105f90;
            case 0x105F94u: goto label_105f94;
            case 0x105F98u: goto label_105f98;
            case 0x105F9Cu: goto label_105f9c;
            case 0x105FA0u: goto label_105fa0;
            case 0x105FA4u: goto label_105fa4;
            case 0x105FA8u: goto label_105fa8;
            case 0x105FACu: goto label_105fac;
            case 0x105FB0u: goto label_105fb0;
            case 0x105FB4u: goto label_105fb4;
            case 0x105FB8u: goto label_105fb8;
            case 0x105FBCu: goto label_105fbc;
            case 0x105FC0u: goto label_105fc0;
            case 0x105FC4u: goto label_105fc4;
            case 0x105FC8u: goto label_105fc8;
            case 0x105FCCu: goto label_105fcc;
            case 0x105FD0u: goto label_105fd0;
            case 0x105FD4u: goto label_105fd4;
            case 0x105FD8u: goto label_105fd8;
            case 0x105FDCu: goto label_105fdc;
            case 0x105FE0u: goto label_105fe0;
            case 0x105FE4u: goto label_105fe4;
            case 0x105FE8u: goto label_105fe8;
            case 0x105FECu: goto label_105fec;
            case 0x105FF0u: goto label_105ff0;
            case 0x105FF4u: goto label_105ff4;
            case 0x105FF8u: goto label_105ff8;
            case 0x105FFCu: goto label_105ffc;
            case 0x106000u: goto label_106000;
            case 0x106004u: goto label_106004;
            case 0x106008u: goto label_106008;
            case 0x10600Cu: goto label_10600c;
            case 0x106010u: goto label_106010;
            case 0x106014u: goto label_106014;
            case 0x106018u: goto label_106018;
            case 0x10601Cu: goto label_10601c;
            case 0x106020u: goto label_106020;
            case 0x106024u: goto label_106024;
            case 0x106028u: goto label_106028;
            case 0x10602Cu: goto label_10602c;
            case 0x106030u: goto label_106030;
            case 0x106034u: goto label_106034;
            case 0x106038u: goto label_106038;
            case 0x10603Cu: goto label_10603c;
            case 0x106040u: goto label_106040;
            case 0x106044u: goto label_106044;
            case 0x106048u: goto label_106048;
            case 0x10604Cu: goto label_10604c;
            case 0x106050u: goto label_106050;
            case 0x106054u: goto label_106054;
            case 0x106058u: goto label_106058;
            case 0x10605Cu: goto label_10605c;
            case 0x106060u: goto label_106060;
            case 0x106064u: goto label_106064;
            case 0x106068u: goto label_106068;
            case 0x10606Cu: goto label_10606c;
            case 0x106070u: goto label_106070;
            case 0x106074u: goto label_106074;
            case 0x106078u: goto label_106078;
            case 0x10607Cu: goto label_10607c;
            case 0x106080u: goto label_106080;
            case 0x106084u: goto label_106084;
            case 0x106088u: goto label_106088;
            case 0x10608Cu: goto label_10608c;
            case 0x106090u: goto label_106090;
            case 0x106094u: goto label_106094;
            case 0x106098u: goto label_106098;
            case 0x10609Cu: goto label_10609c;
            case 0x1060A0u: goto label_1060a0;
            case 0x1060A4u: goto label_1060a4;
            case 0x1060A8u: goto label_1060a8;
            case 0x1060ACu: goto label_1060ac;
            case 0x1060B0u: goto label_1060b0;
            case 0x1060B4u: goto label_1060b4;
            case 0x1060B8u: goto label_1060b8;
            case 0x1060BCu: goto label_1060bc;
            case 0x1060C0u: goto label_1060c0;
            case 0x1060C4u: goto label_1060c4;
            case 0x1060C8u: goto label_1060c8;
            case 0x1060CCu: goto label_1060cc;
            case 0x1060D0u: goto label_1060d0;
            case 0x1060D4u: goto label_1060d4;
            case 0x1060D8u: goto label_1060d8;
            case 0x1060DCu: goto label_1060dc;
            case 0x1060E0u: goto label_1060e0;
            case 0x1060E4u: goto label_1060e4;
            case 0x1060E8u: goto label_1060e8;
            case 0x1060ECu: goto label_1060ec;
            case 0x1060F0u: goto label_1060f0;
            case 0x1060F4u: goto label_1060f4;
            case 0x1060F8u: goto label_1060f8;
            case 0x1060FCu: goto label_1060fc;
            case 0x106100u: goto label_106100;
            case 0x106104u: goto label_106104;
            case 0x106108u: goto label_106108;
            case 0x10610Cu: goto label_10610c;
            case 0x106110u: goto label_106110;
            case 0x106114u: goto label_106114;
            case 0x106118u: goto label_106118;
            case 0x10611Cu: goto label_10611c;
            case 0x106120u: goto label_106120;
            case 0x106124u: goto label_106124;
            case 0x106128u: goto label_106128;
            case 0x10612Cu: goto label_10612c;
            case 0x106130u: goto label_106130;
            case 0x106134u: goto label_106134;
            case 0x106138u: goto label_106138;
            case 0x10613Cu: goto label_10613c;
            case 0x106140u: goto label_106140;
            case 0x106144u: goto label_106144;
            case 0x106148u: goto label_106148;
            case 0x10614Cu: goto label_10614c;
            case 0x106150u: goto label_106150;
            case 0x106154u: goto label_106154;
            case 0x106158u: goto label_106158;
            case 0x10615Cu: goto label_10615c;
            case 0x106160u: goto label_106160;
            case 0x106164u: goto label_106164;
            case 0x106168u: goto label_106168;
            case 0x10616Cu: goto label_10616c;
            case 0x106170u: goto label_106170;
            case 0x106174u: goto label_106174;
            case 0x106178u: goto label_106178;
            case 0x10617Cu: goto label_10617c;
            case 0x106180u: goto label_106180;
            case 0x106184u: goto label_106184;
            case 0x106188u: goto label_106188;
            case 0x10618Cu: goto label_10618c;
            case 0x106190u: goto label_106190;
            case 0x106194u: goto label_106194;
            case 0x106198u: goto label_106198;
            case 0x10619Cu: goto label_10619c;
            case 0x1061A0u: goto label_1061a0;
            case 0x1061A4u: goto label_1061a4;
            case 0x1061A8u: goto label_1061a8;
            case 0x1061ACu: goto label_1061ac;
            case 0x1061B0u: goto label_1061b0;
            case 0x1061B4u: goto label_1061b4;
            case 0x1061B8u: goto label_1061b8;
            case 0x1061BCu: goto label_1061bc;
            case 0x1061C0u: goto label_1061c0;
            case 0x1061C4u: goto label_1061c4;
            case 0x1061C8u: goto label_1061c8;
            case 0x1061CCu: goto label_1061cc;
            case 0x1061D0u: goto label_1061d0;
            case 0x1061D4u: goto label_1061d4;
            case 0x1061D8u: goto label_1061d8;
            case 0x1061DCu: goto label_1061dc;
            case 0x1061E0u: goto label_1061e0;
            case 0x1061E4u: goto label_1061e4;
            case 0x1061E8u: goto label_1061e8;
            case 0x1061ECu: goto label_1061ec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x105E34u; }
            if (ctx->pc != 0x105E34u) { return; }
        }
    }
    ctx->pc = 0x105E34u;
label_105e34:
    // 0x105e34: 0x2403ffff
    ctx->pc = 0x105e34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_105e38:
    // 0x105e38: 0x40902d
    ctx->pc = 0x105e38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105e3c:
    // 0x105e3c: 0x124300e0
label_105e40:
    if (ctx->pc == 0x105E40u) {
        ctx->pc = 0x105E40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x105E44u;
        goto label_105e44;
    }
    ctx->pc = 0x105E3Cu;
    {
        const bool branch_taken_0x105e3c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 3));
        ctx->pc = 0x105E40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x105e3c) {
            ctx->pc = 0x1061C0u;
            goto label_1061c0;
        }
    }
    ctx->pc = 0x105E44u;
label_105e44:
    // 0x105e44: 0x9606000c
    ctx->pc = 0x105e44u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_105e48:
    // 0x105e48: 0x30c20004
    ctx->pc = 0x105e48u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 4));
label_105e4c:
    // 0x105e4c: 0x1040000a
label_105e50:
    if (ctx->pc == 0x105E50u) {
        ctx->pc = 0x105E50u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 8));
        ctx->pc = 0x105E54u;
        goto label_105e54;
    }
    ctx->pc = 0x105E4Cu;
    {
        const bool branch_taken_0x105e4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x105E50u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x105e4c) {
            ctx->pc = 0x105E78u;
            goto label_105e78;
        }
    }
    ctx->pc = 0x105E54u;
label_105e54:
    // 0x105e54: 0x8e020004
    ctx->pc = 0x105e54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_105e58:
    // 0x105e58: 0x8e050030
    ctx->pc = 0x105e58u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_105e5c:
    // 0x105e5c: 0x10a0000e
label_105e60:
    if (ctx->pc == 0x105E60u) {
        ctx->pc = 0x105E60u;
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->pc = 0x105E64u;
        goto label_105e64;
    }
    ctx->pc = 0x105E5Cu;
    {
        const bool branch_taken_0x105e5c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x105E60u;
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        if (branch_taken_0x105e5c) {
            ctx->pc = 0x105E98u;
            goto label_105e98;
        }
    }
    ctx->pc = 0x105E64u;
label_105e64:
    // 0x105e64: 0x8e02003c
    ctx->pc = 0x105e64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_105e68:
    // 0x105e68: 0x8e070010
    ctx->pc = 0x105e68u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_105e6c:
    // 0x105e6c: 0x1000000b
label_105e70:
    if (ctx->pc == 0x105E70u) {
        ctx->pc = 0x105E70u;
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->pc = 0x105E74u;
        goto label_105e74;
    }
    ctx->pc = 0x105E6Cu;
    {
        const bool branch_taken_0x105e6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x105E70u;
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        if (branch_taken_0x105e6c) {
            ctx->pc = 0x105E9Cu;
            goto label_105e9c;
        }
    }
    ctx->pc = 0x105E74u;
label_105e74:
    // 0x105e74: 0x0
    ctx->pc = 0x105e74u;
    // NOP
label_105e78:
    // 0x105e78: 0x10400008
label_105e7c:
    if (ctx->pc == 0x105E7Cu) {
        ctx->pc = 0x105E7Cu;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x105E80u;
        goto label_105e80;
    }
    ctx->pc = 0x105E78u;
    {
        const bool branch_taken_0x105e78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x105E7Cu;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 16)));
        if (branch_taken_0x105e78) {
            ctx->pc = 0x105E9Cu;
            goto label_105e9c;
        }
    }
    ctx->pc = 0x105E80u;
label_105e80:
    // 0x105e80: 0x8e020000
    ctx->pc = 0x105e80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_105e84:
    // 0x105e84: 0x10400005
label_105e88:
    if (ctx->pc == 0x105E88u) {
        ctx->pc = 0x105E8Cu;
        goto label_105e8c;
    }
    ctx->pc = 0x105E84u;
    {
        const bool branch_taken_0x105e84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x105e84) {
            ctx->pc = 0x105E9Cu;
            goto label_105e9c;
        }
    }
    ctx->pc = 0x105E8Cu;
label_105e8c:
    // 0x105e8c: 0x471023
    ctx->pc = 0x105e8cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_105e90:
    // 0x105e90: 0x10000002
label_105e94:
    if (ctx->pc == 0x105E94u) {
        ctx->pc = 0x105E94u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
        ctx->pc = 0x105E98u;
        goto label_105e98;
    }
    ctx->pc = 0x105E90u;
    {
        const bool branch_taken_0x105e90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x105E94u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
        if (branch_taken_0x105e90) {
            ctx->pc = 0x105E9Cu;
            goto label_105e9c;
        }
    }
    ctx->pc = 0x105E98u;
label_105e98:
    // 0x105e98: 0x8e070010
    ctx->pc = 0x105e98u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_105e9c:
    // 0x105e9c: 0x2d2b02d
    ctx->pc = 0x105e9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 18));
label_105ea0:
    // 0x105ea0: 0xa02d
    ctx->pc = 0x105ea0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_105ea4:
    // 0x105ea4: 0x1000000a
label_105ea8:
    if (ctx->pc == 0x105EA8u) {
        ctx->pc = 0x105EA8u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x105EACu;
        goto label_105eac;
    }
    ctx->pc = 0x105EA4u;
    {
        const bool branch_taken_0x105ea4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x105EA8u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x105ea4) {
            ctx->pc = 0x105ED0u;
            goto label_105ed0;
        }
    }
    ctx->pc = 0x105EACu;
label_105eac:
    // 0x105eac: 0x0
    ctx->pc = 0x105eacu;
    // NOP
label_105eb0:
    // 0x105eb0: 0xb82d
    ctx->pc = 0x105eb0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_105eb4:
    // 0x105eb4: 0x10000006
label_105eb8:
    if (ctx->pc == 0x105EB8u) {
        ctx->pc = 0x105EB8u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x105EBCu;
        goto label_105ebc;
    }
    ctx->pc = 0x105EB4u;
    {
        const bool branch_taken_0x105eb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x105EB8u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 16)));
        if (branch_taken_0x105eb4) {
            ctx->pc = 0x105ED0u;
            goto label_105ed0;
        }
    }
    ctx->pc = 0x105EBCu;
label_105ebc:
    // 0x105ebc: 0x0
    ctx->pc = 0x105ebcu;
    // NOP
label_105ec0:
    // 0x105ec0: 0x2402ffff
    ctx->pc = 0x105ec0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_105ec4:
    // 0x105ec4: 0x100000be
label_105ec8:
    if (ctx->pc == 0x105EC8u) {
        ctx->pc = 0x105EC8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x105ECCu;
        goto label_105ecc;
    }
    ctx->pc = 0x105EC4u;
    {
        const bool branch_taken_0x105ec4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x105EC8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x105ec4) {
            ctx->pc = 0x1061C0u;
            goto label_1061c0;
        }
    }
    ctx->pc = 0x105ECCu;
label_105ecc:
    // 0x105ecc: 0x0
    ctx->pc = 0x105eccu;
    // NOP
label_105ed0:
    // 0x105ed0: 0x54e00004
label_105ed4:
    if (ctx->pc == 0x105ED4u) {
        ctx->pc = 0x105ED4u;
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x105ED8u;
        goto label_105ed8;
    }
    ctx->pc = 0x105ED0u;
    {
        const bool branch_taken_0x105ed0 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        if (branch_taken_0x105ed0) {
            ctx->pc = 0x105ED4u;
            SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x105EE4u;
            goto label_105ee4;
        }
    }
    ctx->pc = 0x105ED8u;
label_105ed8:
    // 0x105ed8: 0xc041ad6
label_105edc:
    if (ctx->pc == 0x105EDCu) {
        ctx->pc = 0x105EDCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x105EE0u;
        goto label_105ee0;
    }
    ctx->pc = 0x105ED8u;
    SET_GPR_U32(ctx, 31, 0x105EE0u);
    ctx->pc = 0x105EDCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x106B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00106B58_0x106b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105EE0u; }
    }
    if (ctx->pc != 0x105EE0u) { return; }
    ctx->pc = 0x105EE0u;
label_105ee0:
    // 0x105ee0: 0x9606000c
    ctx->pc = 0x105ee0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_105ee4:
    // 0x105ee4: 0x30c2081a
    ctx->pc = 0x105ee4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 2074));
label_105ee8:
    // 0x105ee8: 0x14400099
label_105eec:
    if (ctx->pc == 0x105EECu) {
        ctx->pc = 0x105EECu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 1024));
        ctx->pc = 0x105EF0u;
        goto label_105ef0;
    }
    ctx->pc = 0x105EE8u;
    {
        const bool branch_taken_0x105ee8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x105EECu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 1024));
        if (branch_taken_0x105ee8) {
            ctx->pc = 0x106150u;
            goto label_106150;
        }
    }
    ctx->pc = 0x105EF0u;
label_105ef0:
    // 0x105ef0: 0x14400019
label_105ef4:
    if (ctx->pc == 0x105EF4u) {
        ctx->pc = 0x105EF4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)17 << 16));
        ctx->pc = 0x105EF8u;
        goto label_105ef8;
    }
    ctx->pc = 0x105EF0u;
    {
        const bool branch_taken_0x105ef0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x105EF4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)17 << 16));
        if (branch_taken_0x105ef0) {
            ctx->pc = 0x105F58u;
            goto label_105f58;
        }
    }
    ctx->pc = 0x105EF8u;
label_105ef8:
    // 0x105ef8: 0x2442aa58
    ctx->pc = 0x105ef8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945368));
label_105efc:
    // 0x105efc: 0x56a20010
label_105f00:
    if (ctx->pc == 0x105F00u) {
        ctx->pc = 0x105F00u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 6), 2048));
        ctx->pc = 0x105F04u;
        goto label_105f04;
    }
    ctx->pc = 0x105EFCu;
    {
        const bool branch_taken_0x105efc = (GPR_U32(ctx, 21) != GPR_U32(ctx, 2));
        if (branch_taken_0x105efc) {
            ctx->pc = 0x105F00u;
            SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 6), 2048));
            ctx->pc = 0x105F40u;
            goto label_105f40;
        }
    }
    ctx->pc = 0x105F04u;
label_105f04:
    // 0x105f04: 0x8605000e
    ctx->pc = 0x105f04u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_105f08:
    // 0x105f08: 0x4a2000d
label_105f0c:
    if (ctx->pc == 0x105F0Cu) {
        ctx->pc = 0x105F0Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 6), 2048));
        ctx->pc = 0x105F10u;
        goto label_105f10;
    }
    ctx->pc = 0x105F08u;
    {
        const bool branch_taken_0x105f08 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x105f08) {
            ctx->pc = 0x105F0Cu;
            SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 6), 2048));
            ctx->pc = 0x105F40u;
            goto label_105f40;
        }
    }
    ctx->pc = 0x105F10u;
label_105f10:
    // 0x105f10: 0x220202d
    ctx->pc = 0x105f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_105f14:
    // 0x105f14: 0xc04187c
label_105f18:
    if (ctx->pc == 0x105F18u) {
        ctx->pc = 0x105F18u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x105F1Cu;
        goto label_105f1c;
    }
    ctx->pc = 0x105F14u;
    SET_GPR_U32(ctx, 31, 0x105F1Cu);
    ctx->pc = 0x105F18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1061F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001061F0_0x1061f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105F1Cu; }
    }
    if (ctx->pc != 0x105F1Cu) { return; }
    ctx->pc = 0x105F1Cu;
label_105f1c:
    // 0x105f1c: 0x54400007
label_105f20:
    if (ctx->pc == 0x105F20u) {
        ctx->pc = 0x105F20u;
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x105F24u;
        goto label_105f24;
    }
    ctx->pc = 0x105F1Cu;
    {
        const bool branch_taken_0x105f1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x105f1c) {
            ctx->pc = 0x105F20u;
            SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x105F3Cu;
            goto label_105f3c;
        }
    }
    ctx->pc = 0x105F24u;
label_105f24:
    // 0x105f24: 0x8fa20004
    ctx->pc = 0x105f24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_105f28:
    // 0x105f28: 0x34038000
    ctx->pc = 0x105f28u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
label_105f2c:
    // 0x105f2c: 0x3042f000
    ctx->pc = 0x105f2cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 61440));
label_105f30:
    // 0x105f30: 0x50430005
label_105f34:
    if (ctx->pc == 0x105F34u) {
        ctx->pc = 0x105F34u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x105F38u;
        goto label_105f38;
    }
    ctx->pc = 0x105F30u;
    {
        const bool branch_taken_0x105f30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x105f30) {
            ctx->pc = 0x105F34u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x105F48u;
            goto label_105f48;
        }
    }
    ctx->pc = 0x105F38u;
label_105f38:
    // 0x105f38: 0x9606000c
    ctx->pc = 0x105f38u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_105f3c:
    // 0x105f3c: 0x34c20800
    ctx->pc = 0x105f3cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 6), 2048));
label_105f40:
    // 0x105f40: 0x10000083
label_105f44:
    if (ctx->pc == 0x105F44u) {
        ctx->pc = 0x105F44u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x105F48u;
        goto label_105f48;
    }
    ctx->pc = 0x105F40u;
    {
        const bool branch_taken_0x105f40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x105F44u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x105f40) {
            ctx->pc = 0x106150u;
            goto label_106150;
        }
    }
    ctx->pc = 0x105F48u;
label_105f48:
    // 0x105f48: 0x24030400
    ctx->pc = 0x105f48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1024));
label_105f4c:
    // 0x105f4c: 0xae03004c
    ctx->pc = 0x105f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
label_105f50:
    // 0x105f50: 0x34420400
    ctx->pc = 0x105f50u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1024));
label_105f54:
    // 0x105f54: 0xa602000c
    ctx->pc = 0x105f54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_105f58:
    // 0x105f58: 0x12800008
label_105f5c:
    if (ctx->pc == 0x105F5Cu) {
        ctx->pc = 0x105F5Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x105F60u;
        goto label_105f60;
    }
    ctx->pc = 0x105F58u;
    {
        const bool branch_taken_0x105f58 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x105F5Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x105f58) {
            ctx->pc = 0x105F7Cu;
            goto label_105f7c;
        }
    }
    ctx->pc = 0x105F60u;
label_105f60:
    // 0x105f60: 0x8605000e
    ctx->pc = 0x105f60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_105f64:
    // 0x105f64: 0x220202d
    ctx->pc = 0x105f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_105f68:
    // 0x105f68: 0xc04187c
label_105f6c:
    if (ctx->pc == 0x105F6Cu) {
        ctx->pc = 0x105F6Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x105F70u;
        goto label_105f70;
    }
    ctx->pc = 0x105F68u;
    SET_GPR_U32(ctx, 31, 0x105F70u);
    ctx->pc = 0x105F6Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1061F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001061F0_0x1061f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105F70u; }
    }
    if (ctx->pc != 0x105F70u) { return; }
    ctx->pc = 0x105F70u;
label_105f70:
    // 0x105f70: 0x14400077
label_105f74:
    if (ctx->pc == 0x105F74u) {
        ctx->pc = 0x105F74u;
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x105F78u;
        goto label_105f78;
    }
    ctx->pc = 0x105F70u;
    {
        const bool branch_taken_0x105f70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x105F74u;
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x105f70) {
            ctx->pc = 0x106150u;
            goto label_106150;
        }
    }
    ctx->pc = 0x105F78u;
label_105f78:
    // 0x105f78: 0x56982d
    ctx->pc = 0x105f78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 22));
label_105f7c:
    // 0x105f7c: 0x16e00016
label_105f80:
    if (ctx->pc == 0x105F80u) {
        ctx->pc = 0x105F80u;
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x105F84u;
        goto label_105f84;
    }
    ctx->pc = 0x105F7Cu;
    {
        const bool branch_taken_0x105f7c = (GPR_U32(ctx, 23) != GPR_U32(ctx, 0));
        ctx->pc = 0x105F80u;
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        if (branch_taken_0x105f7c) {
            ctx->pc = 0x105FD8u;
            goto label_105fd8;
        }
    }
    ctx->pc = 0x105F84u;
label_105f84:
    // 0x105f84: 0x30c21000
    ctx->pc = 0x105f84u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 4096));
label_105f88:
    // 0x105f88: 0x50400003
label_105f8c:
    if (ctx->pc == 0x105F8Cu) {
        ctx->pc = 0x105F8Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x105F90u;
        goto label_105f90;
    }
    ctx->pc = 0x105F88u;
    {
        const bool branch_taken_0x105f88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x105f88) {
            ctx->pc = 0x105F8Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->pc = 0x105F98u;
            goto label_105f98;
        }
    }
    ctx->pc = 0x105F90u;
label_105f90:
    // 0x105f90: 0x10000009
label_105f94:
    if (ctx->pc == 0x105F94u) {
        ctx->pc = 0x105F94u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x105F98u;
        goto label_105f98;
    }
    ctx->pc = 0x105F90u;
    {
        const bool branch_taken_0x105f90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x105F94u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 80)));
        if (branch_taken_0x105f90) {
            ctx->pc = 0x105FB8u;
            goto label_105fb8;
        }
    }
    ctx->pc = 0x105F98u;
label_105f98:
    // 0x105f98: 0x282d
    ctx->pc = 0x105f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_105f9c:
    // 0x105f9c: 0x2a0f809
label_105fa0:
    if (ctx->pc == 0x105FA0u) {
        ctx->pc = 0x105FA0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x105FA4u;
        goto label_105fa4;
    }
    ctx->pc = 0x105F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x105FA4u);
        ctx->pc = 0x105FA0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x105D40u: goto label_105d40;
            case 0x105D44u: goto label_105d44;
            case 0x105D48u: goto label_105d48;
            case 0x105D4Cu: goto label_105d4c;
            case 0x105D50u: goto label_105d50;
            case 0x105D54u: goto label_105d54;
            case 0x105D58u: goto label_105d58;
            case 0x105D5Cu: goto label_105d5c;
            case 0x105D60u: goto label_105d60;
            case 0x105D64u: goto label_105d64;
            case 0x105D68u: goto label_105d68;
            case 0x105D6Cu: goto label_105d6c;
            case 0x105D70u: goto label_105d70;
            case 0x105D74u: goto label_105d74;
            case 0x105D78u: goto label_105d78;
            case 0x105D7Cu: goto label_105d7c;
            case 0x105D80u: goto label_105d80;
            case 0x105D84u: goto label_105d84;
            case 0x105D88u: goto label_105d88;
            case 0x105D8Cu: goto label_105d8c;
            case 0x105D90u: goto label_105d90;
            case 0x105D94u: goto label_105d94;
            case 0x105D98u: goto label_105d98;
            case 0x105D9Cu: goto label_105d9c;
            case 0x105DA0u: goto label_105da0;
            case 0x105DA4u: goto label_105da4;
            case 0x105DA8u: goto label_105da8;
            case 0x105DACu: goto label_105dac;
            case 0x105DB0u: goto label_105db0;
            case 0x105DB4u: goto label_105db4;
            case 0x105DB8u: goto label_105db8;
            case 0x105DBCu: goto label_105dbc;
            case 0x105DC0u: goto label_105dc0;
            case 0x105DC4u: goto label_105dc4;
            case 0x105DC8u: goto label_105dc8;
            case 0x105DCCu: goto label_105dcc;
            case 0x105DD0u: goto label_105dd0;
            case 0x105DD4u: goto label_105dd4;
            case 0x105DD8u: goto label_105dd8;
            case 0x105DDCu: goto label_105ddc;
            case 0x105DE0u: goto label_105de0;
            case 0x105DE4u: goto label_105de4;
            case 0x105DE8u: goto label_105de8;
            case 0x105DECu: goto label_105dec;
            case 0x105DF0u: goto label_105df0;
            case 0x105DF4u: goto label_105df4;
            case 0x105DF8u: goto label_105df8;
            case 0x105DFCu: goto label_105dfc;
            case 0x105E00u: goto label_105e00;
            case 0x105E04u: goto label_105e04;
            case 0x105E08u: goto label_105e08;
            case 0x105E0Cu: goto label_105e0c;
            case 0x105E10u: goto label_105e10;
            case 0x105E14u: goto label_105e14;
            case 0x105E18u: goto label_105e18;
            case 0x105E1Cu: goto label_105e1c;
            case 0x105E20u: goto label_105e20;
            case 0x105E24u: goto label_105e24;
            case 0x105E28u: goto label_105e28;
            case 0x105E2Cu: goto label_105e2c;
            case 0x105E30u: goto label_105e30;
            case 0x105E34u: goto label_105e34;
            case 0x105E38u: goto label_105e38;
            case 0x105E3Cu: goto label_105e3c;
            case 0x105E40u: goto label_105e40;
            case 0x105E44u: goto label_105e44;
            case 0x105E48u: goto label_105e48;
            case 0x105E4Cu: goto label_105e4c;
            case 0x105E50u: goto label_105e50;
            case 0x105E54u: goto label_105e54;
            case 0x105E58u: goto label_105e58;
            case 0x105E5Cu: goto label_105e5c;
            case 0x105E60u: goto label_105e60;
            case 0x105E64u: goto label_105e64;
            case 0x105E68u: goto label_105e68;
            case 0x105E6Cu: goto label_105e6c;
            case 0x105E70u: goto label_105e70;
            case 0x105E74u: goto label_105e74;
            case 0x105E78u: goto label_105e78;
            case 0x105E7Cu: goto label_105e7c;
            case 0x105E80u: goto label_105e80;
            case 0x105E84u: goto label_105e84;
            case 0x105E88u: goto label_105e88;
            case 0x105E8Cu: goto label_105e8c;
            case 0x105E90u: goto label_105e90;
            case 0x105E94u: goto label_105e94;
            case 0x105E98u: goto label_105e98;
            case 0x105E9Cu: goto label_105e9c;
            case 0x105EA0u: goto label_105ea0;
            case 0x105EA4u: goto label_105ea4;
            case 0x105EA8u: goto label_105ea8;
            case 0x105EACu: goto label_105eac;
            case 0x105EB0u: goto label_105eb0;
            case 0x105EB4u: goto label_105eb4;
            case 0x105EB8u: goto label_105eb8;
            case 0x105EBCu: goto label_105ebc;
            case 0x105EC0u: goto label_105ec0;
            case 0x105EC4u: goto label_105ec4;
            case 0x105EC8u: goto label_105ec8;
            case 0x105ECCu: goto label_105ecc;
            case 0x105ED0u: goto label_105ed0;
            case 0x105ED4u: goto label_105ed4;
            case 0x105ED8u: goto label_105ed8;
            case 0x105EDCu: goto label_105edc;
            case 0x105EE0u: goto label_105ee0;
            case 0x105EE4u: goto label_105ee4;
            case 0x105EE8u: goto label_105ee8;
            case 0x105EECu: goto label_105eec;
            case 0x105EF0u: goto label_105ef0;
            case 0x105EF4u: goto label_105ef4;
            case 0x105EF8u: goto label_105ef8;
            case 0x105EFCu: goto label_105efc;
            case 0x105F00u: goto label_105f00;
            case 0x105F04u: goto label_105f04;
            case 0x105F08u: goto label_105f08;
            case 0x105F0Cu: goto label_105f0c;
            case 0x105F10u: goto label_105f10;
            case 0x105F14u: goto label_105f14;
            case 0x105F18u: goto label_105f18;
            case 0x105F1Cu: goto label_105f1c;
            case 0x105F20u: goto label_105f20;
            case 0x105F24u: goto label_105f24;
            case 0x105F28u: goto label_105f28;
            case 0x105F2Cu: goto label_105f2c;
            case 0x105F30u: goto label_105f30;
            case 0x105F34u: goto label_105f34;
            case 0x105F38u: goto label_105f38;
            case 0x105F3Cu: goto label_105f3c;
            case 0x105F40u: goto label_105f40;
            case 0x105F44u: goto label_105f44;
            case 0x105F48u: goto label_105f48;
            case 0x105F4Cu: goto label_105f4c;
            case 0x105F50u: goto label_105f50;
            case 0x105F54u: goto label_105f54;
            case 0x105F58u: goto label_105f58;
            case 0x105F5Cu: goto label_105f5c;
            case 0x105F60u: goto label_105f60;
            case 0x105F64u: goto label_105f64;
            case 0x105F68u: goto label_105f68;
            case 0x105F6Cu: goto label_105f6c;
            case 0x105F70u: goto label_105f70;
            case 0x105F74u: goto label_105f74;
            case 0x105F78u: goto label_105f78;
            case 0x105F7Cu: goto label_105f7c;
            case 0x105F80u: goto label_105f80;
            case 0x105F84u: goto label_105f84;
            case 0x105F88u: goto label_105f88;
            case 0x105F8Cu: goto label_105f8c;
            case 0x105F90u: goto label_105f90;
            case 0x105F94u: goto label_105f94;
            case 0x105F98u: goto label_105f98;
            case 0x105F9Cu: goto label_105f9c;
            case 0x105FA0u: goto label_105fa0;
            case 0x105FA4u: goto label_105fa4;
            case 0x105FA8u: goto label_105fa8;
            case 0x105FACu: goto label_105fac;
            case 0x105FB0u: goto label_105fb0;
            case 0x105FB4u: goto label_105fb4;
            case 0x105FB8u: goto label_105fb8;
            case 0x105FBCu: goto label_105fbc;
            case 0x105FC0u: goto label_105fc0;
            case 0x105FC4u: goto label_105fc4;
            case 0x105FC8u: goto label_105fc8;
            case 0x105FCCu: goto label_105fcc;
            case 0x105FD0u: goto label_105fd0;
            case 0x105FD4u: goto label_105fd4;
            case 0x105FD8u: goto label_105fd8;
            case 0x105FDCu: goto label_105fdc;
            case 0x105FE0u: goto label_105fe0;
            case 0x105FE4u: goto label_105fe4;
            case 0x105FE8u: goto label_105fe8;
            case 0x105FECu: goto label_105fec;
            case 0x105FF0u: goto label_105ff0;
            case 0x105FF4u: goto label_105ff4;
            case 0x105FF8u: goto label_105ff8;
            case 0x105FFCu: goto label_105ffc;
            case 0x106000u: goto label_106000;
            case 0x106004u: goto label_106004;
            case 0x106008u: goto label_106008;
            case 0x10600Cu: goto label_10600c;
            case 0x106010u: goto label_106010;
            case 0x106014u: goto label_106014;
            case 0x106018u: goto label_106018;
            case 0x10601Cu: goto label_10601c;
            case 0x106020u: goto label_106020;
            case 0x106024u: goto label_106024;
            case 0x106028u: goto label_106028;
            case 0x10602Cu: goto label_10602c;
            case 0x106030u: goto label_106030;
            case 0x106034u: goto label_106034;
            case 0x106038u: goto label_106038;
            case 0x10603Cu: goto label_10603c;
            case 0x106040u: goto label_106040;
            case 0x106044u: goto label_106044;
            case 0x106048u: goto label_106048;
            case 0x10604Cu: goto label_10604c;
            case 0x106050u: goto label_106050;
            case 0x106054u: goto label_106054;
            case 0x106058u: goto label_106058;
            case 0x10605Cu: goto label_10605c;
            case 0x106060u: goto label_106060;
            case 0x106064u: goto label_106064;
            case 0x106068u: goto label_106068;
            case 0x10606Cu: goto label_10606c;
            case 0x106070u: goto label_106070;
            case 0x106074u: goto label_106074;
            case 0x106078u: goto label_106078;
            case 0x10607Cu: goto label_10607c;
            case 0x106080u: goto label_106080;
            case 0x106084u: goto label_106084;
            case 0x106088u: goto label_106088;
            case 0x10608Cu: goto label_10608c;
            case 0x106090u: goto label_106090;
            case 0x106094u: goto label_106094;
            case 0x106098u: goto label_106098;
            case 0x10609Cu: goto label_10609c;
            case 0x1060A0u: goto label_1060a0;
            case 0x1060A4u: goto label_1060a4;
            case 0x1060A8u: goto label_1060a8;
            case 0x1060ACu: goto label_1060ac;
            case 0x1060B0u: goto label_1060b0;
            case 0x1060B4u: goto label_1060b4;
            case 0x1060B8u: goto label_1060b8;
            case 0x1060BCu: goto label_1060bc;
            case 0x1060C0u: goto label_1060c0;
            case 0x1060C4u: goto label_1060c4;
            case 0x1060C8u: goto label_1060c8;
            case 0x1060CCu: goto label_1060cc;
            case 0x1060D0u: goto label_1060d0;
            case 0x1060D4u: goto label_1060d4;
            case 0x1060D8u: goto label_1060d8;
            case 0x1060DCu: goto label_1060dc;
            case 0x1060E0u: goto label_1060e0;
            case 0x1060E4u: goto label_1060e4;
            case 0x1060E8u: goto label_1060e8;
            case 0x1060ECu: goto label_1060ec;
            case 0x1060F0u: goto label_1060f0;
            case 0x1060F4u: goto label_1060f4;
            case 0x1060F8u: goto label_1060f8;
            case 0x1060FCu: goto label_1060fc;
            case 0x106100u: goto label_106100;
            case 0x106104u: goto label_106104;
            case 0x106108u: goto label_106108;
            case 0x10610Cu: goto label_10610c;
            case 0x106110u: goto label_106110;
            case 0x106114u: goto label_106114;
            case 0x106118u: goto label_106118;
            case 0x10611Cu: goto label_10611c;
            case 0x106120u: goto label_106120;
            case 0x106124u: goto label_106124;
            case 0x106128u: goto label_106128;
            case 0x10612Cu: goto label_10612c;
            case 0x106130u: goto label_106130;
            case 0x106134u: goto label_106134;
            case 0x106138u: goto label_106138;
            case 0x10613Cu: goto label_10613c;
            case 0x106140u: goto label_106140;
            case 0x106144u: goto label_106144;
            case 0x106148u: goto label_106148;
            case 0x10614Cu: goto label_10614c;
            case 0x106150u: goto label_106150;
            case 0x106154u: goto label_106154;
            case 0x106158u: goto label_106158;
            case 0x10615Cu: goto label_10615c;
            case 0x106160u: goto label_106160;
            case 0x106164u: goto label_106164;
            case 0x106168u: goto label_106168;
            case 0x10616Cu: goto label_10616c;
            case 0x106170u: goto label_106170;
            case 0x106174u: goto label_106174;
            case 0x106178u: goto label_106178;
            case 0x10617Cu: goto label_10617c;
            case 0x106180u: goto label_106180;
            case 0x106184u: goto label_106184;
            case 0x106188u: goto label_106188;
            case 0x10618Cu: goto label_10618c;
            case 0x106190u: goto label_106190;
            case 0x106194u: goto label_106194;
            case 0x106198u: goto label_106198;
            case 0x10619Cu: goto label_10619c;
            case 0x1061A0u: goto label_1061a0;
            case 0x1061A4u: goto label_1061a4;
            case 0x1061A8u: goto label_1061a8;
            case 0x1061ACu: goto label_1061ac;
            case 0x1061B0u: goto label_1061b0;
            case 0x1061B4u: goto label_1061b4;
            case 0x1061B8u: goto label_1061b8;
            case 0x1061BCu: goto label_1061bc;
            case 0x1061C0u: goto label_1061c0;
            case 0x1061C4u: goto label_1061c4;
            case 0x1061C8u: goto label_1061c8;
            case 0x1061CCu: goto label_1061cc;
            case 0x1061D0u: goto label_1061d0;
            case 0x1061D4u: goto label_1061d4;
            case 0x1061D8u: goto label_1061d8;
            case 0x1061DCu: goto label_1061dc;
            case 0x1061E0u: goto label_1061e0;
            case 0x1061E4u: goto label_1061e4;
            case 0x1061E8u: goto label_1061e8;
            case 0x1061ECu: goto label_1061ec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x105FA4u; }
            if (ctx->pc != 0x105FA4u) { return; }
        }
    }
    ctx->pc = 0x105FA4u;
label_105fa4:
    // 0x105fa4: 0x40902d
    ctx->pc = 0x105fa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105fa8:
    // 0x105fa8: 0x2402ffff
    ctx->pc = 0x105fa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_105fac:
    // 0x105fac: 0x12420068
label_105fb0:
    if (ctx->pc == 0x105FB0u) {
        ctx->pc = 0x105FB4u;
        goto label_105fb4;
    }
    ctx->pc = 0x105FACu;
    {
        const bool branch_taken_0x105fac = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        if (branch_taken_0x105fac) {
            ctx->pc = 0x106150u;
            goto label_106150;
        }
    }
    ctx->pc = 0x105FB4u;
label_105fb4:
    // 0x105fb4: 0x9606000c
    ctx->pc = 0x105fb4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_105fb8:
    // 0x105fb8: 0x8e020004
    ctx->pc = 0x105fb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_105fbc:
    // 0x105fbc: 0x8e050030
    ctx->pc = 0x105fbcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_105fc0:
    // 0x105fc0: 0x10a00013
label_105fc4:
    if (ctx->pc == 0x105FC4u) {
        ctx->pc = 0x105FC4u;
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->pc = 0x105FC8u;
        goto label_105fc8;
    }
    ctx->pc = 0x105FC0u;
    {
        const bool branch_taken_0x105fc0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x105FC4u;
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        if (branch_taken_0x105fc0) {
            ctx->pc = 0x106010u;
            goto label_106010;
        }
    }
    ctx->pc = 0x105FC8u;
label_105fc8:
    // 0x105fc8: 0x8e02003c
    ctx->pc = 0x105fc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_105fcc:
    // 0x105fcc: 0x10000003
label_105fd0:
    if (ctx->pc == 0x105FD0u) {
        ctx->pc = 0x105FD0u;
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->pc = 0x105FD4u;
        goto label_105fd4;
    }
    ctx->pc = 0x105FCCu;
    {
        const bool branch_taken_0x105fcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x105FD0u;
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        if (branch_taken_0x105fcc) {
            ctx->pc = 0x105FDCu;
            goto label_105fdc;
        }
    }
    ctx->pc = 0x105FD4u;
label_105fd4:
    // 0x105fd4: 0x0
    ctx->pc = 0x105fd4u;
    // NOP
label_105fd8:
    // 0x105fd8: 0x8e050030
    ctx->pc = 0x105fd8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_105fdc:
    // 0x105fdc: 0x50a0000d
label_105fe0:
    if (ctx->pc == 0x105FE0u) {
        ctx->pc = 0x105FE0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x105FE4u;
        goto label_105fe4;
    }
    ctx->pc = 0x105FDCu;
    {
        const bool branch_taken_0x105fdc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x105fdc) {
            ctx->pc = 0x105FE0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x106014u;
            goto label_106014;
        }
    }
    ctx->pc = 0x105FE4u;
label_105fe4:
    // 0x105fe4: 0x8e020038
    ctx->pc = 0x105fe4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_105fe8:
    // 0x105fe8: 0x8e070010
    ctx->pc = 0x105fe8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_105fec:
    // 0x105fec: 0x8e030004
    ctx->pc = 0x105fecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_105ff0:
    // 0x105ff0: 0x478823
    ctx->pc = 0x105ff0u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_105ff4:
    // 0x105ff4: 0x8e04003c
    ctx->pc = 0x105ff4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_105ff8:
    // 0x105ff8: 0x11103c
    ctx->pc = 0x105ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_105ffc:
    // 0x105ffc: 0x243902d
    ctx->pc = 0x105ffcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 3));
label_106000:
    // 0x106000: 0x2103e
    ctx->pc = 0x106000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_106004:
    // 0x106004: 0x2248821
    ctx->pc = 0x106004u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_106008:
    // 0x106008: 0x10000009
label_10600c:
    if (ctx->pc == 0x10600Cu) {
        ctx->pc = 0x10600Cu;
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->pc = 0x106010u;
        goto label_106010;
    }
    ctx->pc = 0x106008u;
    {
        const bool branch_taken_0x106008 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10600Cu;
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        if (branch_taken_0x106008) {
            ctx->pc = 0x106030u;
            goto label_106030;
        }
    }
    ctx->pc = 0x106010u;
label_106010:
    // 0x106010: 0x8e020000
    ctx->pc = 0x106010u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_106014:
    // 0x106014: 0x8e070010
    ctx->pc = 0x106014u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_106018:
    // 0x106018: 0x8e040004
    ctx->pc = 0x106018u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10601c:
    // 0x10601c: 0x478823
    ctx->pc = 0x10601cu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_106020:
    // 0x106020: 0x11183c
    ctx->pc = 0x106020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
label_106024:
    // 0x106024: 0x2248821
    ctx->pc = 0x106024u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_106028:
    // 0x106028: 0x3183e
    ctx->pc = 0x106028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_10602c:
    // 0x10602c: 0x243902f
    ctx->pc = 0x10602cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 3));
label_106030:
    // 0x106030: 0x30c22000
    ctx->pc = 0x106030u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 8192));
label_106034:
    // 0x106034: 0x5440001e
label_106038:
    if (ctx->pc == 0x106038u) {
        ctx->pc = 0x106038u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->pc = 0x10603Cu;
        goto label_10603c;
    }
    ctx->pc = 0x106034u;
    {
        const bool branch_taken_0x106034 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x106034) {
            ctx->pc = 0x106038u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->pc = 0x1060B0u;
            goto label_1060b0;
        }
    }
    ctx->pc = 0x10603Cu;
label_10603c:
    // 0x10603c: 0x272102a
    ctx->pc = 0x10603cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 18)));
label_106040:
    // 0x106040: 0x5440001b
label_106044:
    if (ctx->pc == 0x106044u) {
        ctx->pc = 0x106044u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->pc = 0x106048u;
        goto label_106048;
    }
    ctx->pc = 0x106040u;
    {
        const bool branch_taken_0x106040 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x106040) {
            ctx->pc = 0x106044u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->pc = 0x1060B0u;
            goto label_1060b0;
        }
    }
    ctx->pc = 0x106048u;
label_106048:
    // 0x106048: 0x11103c
    ctx->pc = 0x106048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_10604c:
    // 0x10604c: 0x2103e
    ctx->pc = 0x10604cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_106050:
    // 0x106050: 0x242102d
    ctx->pc = 0x106050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
label_106054:
    // 0x106054: 0x262102a
    ctx->pc = 0x106054u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
label_106058:
    // 0x106058: 0x50400015
label_10605c:
    if (ctx->pc == 0x10605Cu) {
        ctx->pc = 0x10605Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->pc = 0x106060u;
        goto label_106060;
    }
    ctx->pc = 0x106058u;
    {
        const bool branch_taken_0x106058 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x106058) {
            ctx->pc = 0x10605Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->pc = 0x1060B0u;
            goto label_1060b0;
        }
    }
    ctx->pc = 0x106060u;
label_106060:
    // 0x106060: 0x272102f
    ctx->pc = 0x106060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) - GPR_U64(ctx, 18));
label_106064:
    // 0x106064: 0x2103c
    ctx->pc = 0x106064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_106068:
    // 0x106068: 0x2103f
    ctx->pc = 0x106068u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_10606c:
    // 0x10606c: 0x2221823
    ctx->pc = 0x10606cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_106070:
    // 0x106070: 0xe21021
    ctx->pc = 0x106070u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_106074:
    // 0x106074: 0xae020000
    ctx->pc = 0x106074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_106078:
    // 0x106078: 0x10a00008
label_10607c:
    if (ctx->pc == 0x10607Cu) {
        ctx->pc = 0x10607Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x106080u;
        goto label_106080;
    }
    ctx->pc = 0x106078u;
    {
        const bool branch_taken_0x106078 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x10607Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x106078) {
            ctx->pc = 0x10609Cu;
            goto label_10609c;
        }
    }
    ctx->pc = 0x106080u;
label_106080:
    // 0x106080: 0x26020040
    ctx->pc = 0x106080u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 64));
label_106084:
    // 0x106084: 0x50a20005
label_106088:
    if (ctx->pc == 0x106088u) {
        ctx->pc = 0x106088u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->pc = 0x10608Cu;
        goto label_10608c;
    }
    ctx->pc = 0x106084u;
    {
        const bool branch_taken_0x106084 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x106084) {
            ctx->pc = 0x106088u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->pc = 0x10609Cu;
            goto label_10609c;
        }
    }
    ctx->pc = 0x10608Cu;
label_10608c:
    // 0x10608c: 0xc041636
label_106090:
    if (ctx->pc == 0x106090u) {
        ctx->pc = 0x106090u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x106094u;
        goto label_106094;
    }
    ctx->pc = 0x10608Cu;
    SET_GPR_U32(ctx, 31, 0x106094u);
    ctx->pc = 0x106090u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->pc = 0x1058D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001058D8_0x1058d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106094u; }
    }
    if (ctx->pc != 0x106094u) { return; }
    ctx->pc = 0x106094u;
label_106094:
    // 0x106094: 0x9606000c
    ctx->pc = 0x106094u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_106098:
    // 0x106098: 0xae000030
    ctx->pc = 0x106098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_10609c:
    // 0x10609c: 0x30c3ffdf
    ctx->pc = 0x10609cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 65503));
label_1060a0:
    // 0x1060a0: 0x102d
    ctx->pc = 0x1060a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1060a4:
    // 0x1060a4: 0x10000046
label_1060a8:
    if (ctx->pc == 0x1060A8u) {
        ctx->pc = 0x1060A8u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1060ACu;
        goto label_1060ac;
    }
    ctx->pc = 0x1060A4u;
    {
        const bool branch_taken_0x1060a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1060A8u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1060a4) {
            ctx->pc = 0x1061C0u;
            goto label_1061c0;
        }
    }
    ctx->pc = 0x1060ACu;
label_1060ac:
    // 0x1060ac: 0x0
    ctx->pc = 0x1060acu;
    // NOP
label_1060b0:
    // 0x1060b0: 0x302d
    ctx->pc = 0x1060b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1060b4:
    // 0x1060b4: 0x8e04001c
    ctx->pc = 0x1060b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1060b8:
    // 0x1060b8: 0x21023
    ctx->pc = 0x1060b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1060bc:
    // 0x1060bc: 0x539024
    ctx->pc = 0x1060bcu;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1060c0:
    // 0x1060c0: 0x2a0f809
label_1060c4:
    if (ctx->pc == 0x1060C4u) {
        ctx->pc = 0x1060C4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1060C8u;
        goto label_1060c8;
    }
    ctx->pc = 0x1060C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x1060C8u);
        ctx->pc = 0x1060C4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x105D40u: goto label_105d40;
            case 0x105D44u: goto label_105d44;
            case 0x105D48u: goto label_105d48;
            case 0x105D4Cu: goto label_105d4c;
            case 0x105D50u: goto label_105d50;
            case 0x105D54u: goto label_105d54;
            case 0x105D58u: goto label_105d58;
            case 0x105D5Cu: goto label_105d5c;
            case 0x105D60u: goto label_105d60;
            case 0x105D64u: goto label_105d64;
            case 0x105D68u: goto label_105d68;
            case 0x105D6Cu: goto label_105d6c;
            case 0x105D70u: goto label_105d70;
            case 0x105D74u: goto label_105d74;
            case 0x105D78u: goto label_105d78;
            case 0x105D7Cu: goto label_105d7c;
            case 0x105D80u: goto label_105d80;
            case 0x105D84u: goto label_105d84;
            case 0x105D88u: goto label_105d88;
            case 0x105D8Cu: goto label_105d8c;
            case 0x105D90u: goto label_105d90;
            case 0x105D94u: goto label_105d94;
            case 0x105D98u: goto label_105d98;
            case 0x105D9Cu: goto label_105d9c;
            case 0x105DA0u: goto label_105da0;
            case 0x105DA4u: goto label_105da4;
            case 0x105DA8u: goto label_105da8;
            case 0x105DACu: goto label_105dac;
            case 0x105DB0u: goto label_105db0;
            case 0x105DB4u: goto label_105db4;
            case 0x105DB8u: goto label_105db8;
            case 0x105DBCu: goto label_105dbc;
            case 0x105DC0u: goto label_105dc0;
            case 0x105DC4u: goto label_105dc4;
            case 0x105DC8u: goto label_105dc8;
            case 0x105DCCu: goto label_105dcc;
            case 0x105DD0u: goto label_105dd0;
            case 0x105DD4u: goto label_105dd4;
            case 0x105DD8u: goto label_105dd8;
            case 0x105DDCu: goto label_105ddc;
            case 0x105DE0u: goto label_105de0;
            case 0x105DE4u: goto label_105de4;
            case 0x105DE8u: goto label_105de8;
            case 0x105DECu: goto label_105dec;
            case 0x105DF0u: goto label_105df0;
            case 0x105DF4u: goto label_105df4;
            case 0x105DF8u: goto label_105df8;
            case 0x105DFCu: goto label_105dfc;
            case 0x105E00u: goto label_105e00;
            case 0x105E04u: goto label_105e04;
            case 0x105E08u: goto label_105e08;
            case 0x105E0Cu: goto label_105e0c;
            case 0x105E10u: goto label_105e10;
            case 0x105E14u: goto label_105e14;
            case 0x105E18u: goto label_105e18;
            case 0x105E1Cu: goto label_105e1c;
            case 0x105E20u: goto label_105e20;
            case 0x105E24u: goto label_105e24;
            case 0x105E28u: goto label_105e28;
            case 0x105E2Cu: goto label_105e2c;
            case 0x105E30u: goto label_105e30;
            case 0x105E34u: goto label_105e34;
            case 0x105E38u: goto label_105e38;
            case 0x105E3Cu: goto label_105e3c;
            case 0x105E40u: goto label_105e40;
            case 0x105E44u: goto label_105e44;
            case 0x105E48u: goto label_105e48;
            case 0x105E4Cu: goto label_105e4c;
            case 0x105E50u: goto label_105e50;
            case 0x105E54u: goto label_105e54;
            case 0x105E58u: goto label_105e58;
            case 0x105E5Cu: goto label_105e5c;
            case 0x105E60u: goto label_105e60;
            case 0x105E64u: goto label_105e64;
            case 0x105E68u: goto label_105e68;
            case 0x105E6Cu: goto label_105e6c;
            case 0x105E70u: goto label_105e70;
            case 0x105E74u: goto label_105e74;
            case 0x105E78u: goto label_105e78;
            case 0x105E7Cu: goto label_105e7c;
            case 0x105E80u: goto label_105e80;
            case 0x105E84u: goto label_105e84;
            case 0x105E88u: goto label_105e88;
            case 0x105E8Cu: goto label_105e8c;
            case 0x105E90u: goto label_105e90;
            case 0x105E94u: goto label_105e94;
            case 0x105E98u: goto label_105e98;
            case 0x105E9Cu: goto label_105e9c;
            case 0x105EA0u: goto label_105ea0;
            case 0x105EA4u: goto label_105ea4;
            case 0x105EA8u: goto label_105ea8;
            case 0x105EACu: goto label_105eac;
            case 0x105EB0u: goto label_105eb0;
            case 0x105EB4u: goto label_105eb4;
            case 0x105EB8u: goto label_105eb8;
            case 0x105EBCu: goto label_105ebc;
            case 0x105EC0u: goto label_105ec0;
            case 0x105EC4u: goto label_105ec4;
            case 0x105EC8u: goto label_105ec8;
            case 0x105ECCu: goto label_105ecc;
            case 0x105ED0u: goto label_105ed0;
            case 0x105ED4u: goto label_105ed4;
            case 0x105ED8u: goto label_105ed8;
            case 0x105EDCu: goto label_105edc;
            case 0x105EE0u: goto label_105ee0;
            case 0x105EE4u: goto label_105ee4;
            case 0x105EE8u: goto label_105ee8;
            case 0x105EECu: goto label_105eec;
            case 0x105EF0u: goto label_105ef0;
            case 0x105EF4u: goto label_105ef4;
            case 0x105EF8u: goto label_105ef8;
            case 0x105EFCu: goto label_105efc;
            case 0x105F00u: goto label_105f00;
            case 0x105F04u: goto label_105f04;
            case 0x105F08u: goto label_105f08;
            case 0x105F0Cu: goto label_105f0c;
            case 0x105F10u: goto label_105f10;
            case 0x105F14u: goto label_105f14;
            case 0x105F18u: goto label_105f18;
            case 0x105F1Cu: goto label_105f1c;
            case 0x105F20u: goto label_105f20;
            case 0x105F24u: goto label_105f24;
            case 0x105F28u: goto label_105f28;
            case 0x105F2Cu: goto label_105f2c;
            case 0x105F30u: goto label_105f30;
            case 0x105F34u: goto label_105f34;
            case 0x105F38u: goto label_105f38;
            case 0x105F3Cu: goto label_105f3c;
            case 0x105F40u: goto label_105f40;
            case 0x105F44u: goto label_105f44;
            case 0x105F48u: goto label_105f48;
            case 0x105F4Cu: goto label_105f4c;
            case 0x105F50u: goto label_105f50;
            case 0x105F54u: goto label_105f54;
            case 0x105F58u: goto label_105f58;
            case 0x105F5Cu: goto label_105f5c;
            case 0x105F60u: goto label_105f60;
            case 0x105F64u: goto label_105f64;
            case 0x105F68u: goto label_105f68;
            case 0x105F6Cu: goto label_105f6c;
            case 0x105F70u: goto label_105f70;
            case 0x105F74u: goto label_105f74;
            case 0x105F78u: goto label_105f78;
            case 0x105F7Cu: goto label_105f7c;
            case 0x105F80u: goto label_105f80;
            case 0x105F84u: goto label_105f84;
            case 0x105F88u: goto label_105f88;
            case 0x105F8Cu: goto label_105f8c;
            case 0x105F90u: goto label_105f90;
            case 0x105F94u: goto label_105f94;
            case 0x105F98u: goto label_105f98;
            case 0x105F9Cu: goto label_105f9c;
            case 0x105FA0u: goto label_105fa0;
            case 0x105FA4u: goto label_105fa4;
            case 0x105FA8u: goto label_105fa8;
            case 0x105FACu: goto label_105fac;
            case 0x105FB0u: goto label_105fb0;
            case 0x105FB4u: goto label_105fb4;
            case 0x105FB8u: goto label_105fb8;
            case 0x105FBCu: goto label_105fbc;
            case 0x105FC0u: goto label_105fc0;
            case 0x105FC4u: goto label_105fc4;
            case 0x105FC8u: goto label_105fc8;
            case 0x105FCCu: goto label_105fcc;
            case 0x105FD0u: goto label_105fd0;
            case 0x105FD4u: goto label_105fd4;
            case 0x105FD8u: goto label_105fd8;
            case 0x105FDCu: goto label_105fdc;
            case 0x105FE0u: goto label_105fe0;
            case 0x105FE4u: goto label_105fe4;
            case 0x105FE8u: goto label_105fe8;
            case 0x105FECu: goto label_105fec;
            case 0x105FF0u: goto label_105ff0;
            case 0x105FF4u: goto label_105ff4;
            case 0x105FF8u: goto label_105ff8;
            case 0x105FFCu: goto label_105ffc;
            case 0x106000u: goto label_106000;
            case 0x106004u: goto label_106004;
            case 0x106008u: goto label_106008;
            case 0x10600Cu: goto label_10600c;
            case 0x106010u: goto label_106010;
            case 0x106014u: goto label_106014;
            case 0x106018u: goto label_106018;
            case 0x10601Cu: goto label_10601c;
            case 0x106020u: goto label_106020;
            case 0x106024u: goto label_106024;
            case 0x106028u: goto label_106028;
            case 0x10602Cu: goto label_10602c;
            case 0x106030u: goto label_106030;
            case 0x106034u: goto label_106034;
            case 0x106038u: goto label_106038;
            case 0x10603Cu: goto label_10603c;
            case 0x106040u: goto label_106040;
            case 0x106044u: goto label_106044;
            case 0x106048u: goto label_106048;
            case 0x10604Cu: goto label_10604c;
            case 0x106050u: goto label_106050;
            case 0x106054u: goto label_106054;
            case 0x106058u: goto label_106058;
            case 0x10605Cu: goto label_10605c;
            case 0x106060u: goto label_106060;
            case 0x106064u: goto label_106064;
            case 0x106068u: goto label_106068;
            case 0x10606Cu: goto label_10606c;
            case 0x106070u: goto label_106070;
            case 0x106074u: goto label_106074;
            case 0x106078u: goto label_106078;
            case 0x10607Cu: goto label_10607c;
            case 0x106080u: goto label_106080;
            case 0x106084u: goto label_106084;
            case 0x106088u: goto label_106088;
            case 0x10608Cu: goto label_10608c;
            case 0x106090u: goto label_106090;
            case 0x106094u: goto label_106094;
            case 0x106098u: goto label_106098;
            case 0x10609Cu: goto label_10609c;
            case 0x1060A0u: goto label_1060a0;
            case 0x1060A4u: goto label_1060a4;
            case 0x1060A8u: goto label_1060a8;
            case 0x1060ACu: goto label_1060ac;
            case 0x1060B0u: goto label_1060b0;
            case 0x1060B4u: goto label_1060b4;
            case 0x1060B8u: goto label_1060b8;
            case 0x1060BCu: goto label_1060bc;
            case 0x1060C0u: goto label_1060c0;
            case 0x1060C4u: goto label_1060c4;
            case 0x1060C8u: goto label_1060c8;
            case 0x1060CCu: goto label_1060cc;
            case 0x1060D0u: goto label_1060d0;
            case 0x1060D4u: goto label_1060d4;
            case 0x1060D8u: goto label_1060d8;
            case 0x1060DCu: goto label_1060dc;
            case 0x1060E0u: goto label_1060e0;
            case 0x1060E4u: goto label_1060e4;
            case 0x1060E8u: goto label_1060e8;
            case 0x1060ECu: goto label_1060ec;
            case 0x1060F0u: goto label_1060f0;
            case 0x1060F4u: goto label_1060f4;
            case 0x1060F8u: goto label_1060f8;
            case 0x1060FCu: goto label_1060fc;
            case 0x106100u: goto label_106100;
            case 0x106104u: goto label_106104;
            case 0x106108u: goto label_106108;
            case 0x10610Cu: goto label_10610c;
            case 0x106110u: goto label_106110;
            case 0x106114u: goto label_106114;
            case 0x106118u: goto label_106118;
            case 0x10611Cu: goto label_10611c;
            case 0x106120u: goto label_106120;
            case 0x106124u: goto label_106124;
            case 0x106128u: goto label_106128;
            case 0x10612Cu: goto label_10612c;
            case 0x106130u: goto label_106130;
            case 0x106134u: goto label_106134;
            case 0x106138u: goto label_106138;
            case 0x10613Cu: goto label_10613c;
            case 0x106140u: goto label_106140;
            case 0x106144u: goto label_106144;
            case 0x106148u: goto label_106148;
            case 0x10614Cu: goto label_10614c;
            case 0x106150u: goto label_106150;
            case 0x106154u: goto label_106154;
            case 0x106158u: goto label_106158;
            case 0x10615Cu: goto label_10615c;
            case 0x106160u: goto label_106160;
            case 0x106164u: goto label_106164;
            case 0x106168u: goto label_106168;
            case 0x10616Cu: goto label_10616c;
            case 0x106170u: goto label_106170;
            case 0x106174u: goto label_106174;
            case 0x106178u: goto label_106178;
            case 0x10617Cu: goto label_10617c;
            case 0x106180u: goto label_106180;
            case 0x106184u: goto label_106184;
            case 0x106188u: goto label_106188;
            case 0x10618Cu: goto label_10618c;
            case 0x106190u: goto label_106190;
            case 0x106194u: goto label_106194;
            case 0x106198u: goto label_106198;
            case 0x10619Cu: goto label_10619c;
            case 0x1061A0u: goto label_1061a0;
            case 0x1061A4u: goto label_1061a4;
            case 0x1061A8u: goto label_1061a8;
            case 0x1061ACu: goto label_1061ac;
            case 0x1061B0u: goto label_1061b0;
            case 0x1061B4u: goto label_1061b4;
            case 0x1061B8u: goto label_1061b8;
            case 0x1061BCu: goto label_1061bc;
            case 0x1061C0u: goto label_1061c0;
            case 0x1061C4u: goto label_1061c4;
            case 0x1061C8u: goto label_1061c8;
            case 0x1061CCu: goto label_1061cc;
            case 0x1061D0u: goto label_1061d0;
            case 0x1061D4u: goto label_1061d4;
            case 0x1061D8u: goto label_1061d8;
            case 0x1061DCu: goto label_1061dc;
            case 0x1061E0u: goto label_1061e0;
            case 0x1061E4u: goto label_1061e4;
            case 0x1061E8u: goto label_1061e8;
            case 0x1061ECu: goto label_1061ec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1060C8u; }
            if (ctx->pc != 0x1060C8u) { return; }
        }
    }
    ctx->pc = 0x1060C8u;
label_1060c8:
    // 0x1060c8: 0x2403ffff
    ctx->pc = 0x1060c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1060cc:
    // 0x1060cc: 0x10430020
label_1060d0:
    if (ctx->pc == 0x1060D0u) {
        ctx->pc = 0x1060D4u;
        goto label_1060d4;
    }
    ctx->pc = 0x1060CCu;
    {
        const bool branch_taken_0x1060cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1060cc) {
            ctx->pc = 0x106150u;
            goto label_106150;
        }
    }
    ctx->pc = 0x1060D4u;
label_1060d4:
    // 0x1060d4: 0x8e050030
    ctx->pc = 0x1060d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1060d8:
    // 0x1060d8: 0x10a00007
label_1060dc:
    if (ctx->pc == 0x1060DCu) {
        ctx->pc = 0x1060DCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x1060E0u;
        goto label_1060e0;
    }
    ctx->pc = 0x1060D8u;
    {
        const bool branch_taken_0x1060d8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1060DCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x1060d8) {
            ctx->pc = 0x1060F8u;
            goto label_1060f8;
        }
    }
    ctx->pc = 0x1060E0u;
label_1060e0:
    // 0x1060e0: 0x26020040
    ctx->pc = 0x1060e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 64));
label_1060e4:
    // 0x1060e4: 0x50a20004
label_1060e8:
    if (ctx->pc == 0x1060E8u) {
        ctx->pc = 0x1060E8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->pc = 0x1060ECu;
        goto label_1060ec;
    }
    ctx->pc = 0x1060E4u;
    {
        const bool branch_taken_0x1060e4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x1060e4) {
            ctx->pc = 0x1060E8u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->pc = 0x1060F8u;
            goto label_1060f8;
        }
    }
    ctx->pc = 0x1060ECu;
label_1060ec:
    // 0x1060ec: 0xc041636
label_1060f0:
    if (ctx->pc == 0x1060F0u) {
        ctx->pc = 0x1060F0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x1060F4u;
        goto label_1060f4;
    }
    ctx->pc = 0x1060ECu;
    SET_GPR_U32(ctx, 31, 0x1060F4u);
    ctx->pc = 0x1060F0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->pc = 0x1058D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001058D8_0x1058d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1060F4u; }
    }
    if (ctx->pc != 0x1060F4u) { return; }
    ctx->pc = 0x1060F4u;
label_1060f4:
    // 0x1060f4: 0xae000030
    ctx->pc = 0x1060f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1060f8:
    // 0x1060f8: 0x9602000c
    ctx->pc = 0x1060f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1060fc:
    // 0x1060fc: 0x272182f
    ctx->pc = 0x1060fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) - GPR_U64(ctx, 18));
label_106100:
    // 0x106100: 0x3883c
    ctx->pc = 0x106100u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 0));
label_106104:
    // 0x106104: 0x11883f
    ctx->pc = 0x106104u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_106108:
    // 0x106108: 0x3042ffdf
    ctx->pc = 0x106108u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65503));
label_10610c:
    // 0x10610c: 0x1220000d
label_106110:
    if (ctx->pc == 0x106110u) {
        ctx->pc = 0x106110u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x106114u;
        goto label_106114;
    }
    ctx->pc = 0x10610Cu;
    {
        const bool branch_taken_0x10610c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x106110u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x10610c) {
            ctx->pc = 0x106144u;
            goto label_106144;
        }
    }
    ctx->pc = 0x106114u;
label_106114:
    // 0x106114: 0xc042814
label_106118:
    if (ctx->pc == 0x106118u) {
        ctx->pc = 0x106118u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10611Cu;
        goto label_10611c;
    }
    ctx->pc = 0x106114u;
    SET_GPR_U32(ctx, 31, 0x10611Cu);
    ctx->pc = 0x106118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A050u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A050_0x10a050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10611Cu; }
    }
    if (ctx->pc != 0x10611Cu) { return; }
    ctx->pc = 0x10611Cu;
label_10611c:
    // 0x10611c: 0x1440000c
label_106120:
    if (ctx->pc == 0x106120u) {
        ctx->pc = 0x106124u;
        goto label_106124;
    }
    ctx->pc = 0x10611Cu;
    {
        const bool branch_taken_0x10611c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10611c) {
            ctx->pc = 0x106150u;
            goto label_106150;
        }
    }
    ctx->pc = 0x106124u;
label_106124:
    // 0x106124: 0x8e030004
    ctx->pc = 0x106124u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_106128:
    // 0x106128: 0x71102b
    ctx->pc = 0x106128u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_10612c:
    // 0x10612c: 0x14400008
label_106130:
    if (ctx->pc == 0x106130u) {
        ctx->pc = 0x106130u;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->pc = 0x106134u;
        goto label_106134;
    }
    ctx->pc = 0x10612Cu;
    {
        const bool branch_taken_0x10612c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x106130u;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        if (branch_taken_0x10612c) {
            ctx->pc = 0x106150u;
            goto label_106150;
        }
    }
    ctx->pc = 0x106134u;
label_106134:
    // 0x106134: 0x8e020000
    ctx->pc = 0x106134u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_106138:
    // 0x106138: 0xae030004
    ctx->pc = 0x106138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_10613c:
    // 0x10613c: 0x511021
    ctx->pc = 0x10613cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_106140:
    // 0x106140: 0xae020000
    ctx->pc = 0x106140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_106144:
    // 0x106144: 0x1000001e
label_106148:
    if (ctx->pc == 0x106148u) {
        ctx->pc = 0x106148u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10614Cu;
        goto label_10614c;
    }
    ctx->pc = 0x106144u;
    {
        const bool branch_taken_0x106144 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x106148u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x106144) {
            ctx->pc = 0x1061C0u;
            goto label_1061c0;
        }
    }
    ctx->pc = 0x10614Cu;
label_10614c:
    // 0x10614c: 0x0
    ctx->pc = 0x10614cu;
    // NOP
label_106150:
    // 0x106150: 0xc04142c
label_106154:
    if (ctx->pc == 0x106154u) {
        ctx->pc = 0x106154u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x106158u;
        goto label_106158;
    }
    ctx->pc = 0x106150u;
    SET_GPR_U32(ctx, 31, 0x106158u);
    ctx->pc = 0x106154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1050B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001050B0_0x1050b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106158u; }
    }
    if (ctx->pc != 0x106158u) { return; }
    ctx->pc = 0x106158u;
label_106158:
    // 0x106158: 0x54400019
label_10615c:
    if (ctx->pc == 0x10615Cu) {
        ctx->pc = 0x10615Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x106160u;
        goto label_106160;
    }
    ctx->pc = 0x106158u;
    {
        const bool branch_taken_0x106158 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x106158) {
            ctx->pc = 0x10615Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x1061C0u;
            goto label_1061c0;
        }
    }
    ctx->pc = 0x106160u;
label_106160:
    // 0x106160: 0x8e04001c
    ctx->pc = 0x106160u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_106164:
    // 0x106164: 0x2c0282d
    ctx->pc = 0x106164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_106168:
    // 0x106168: 0x2a0f809
label_10616c:
    if (ctx->pc == 0x10616Cu) {
        ctx->pc = 0x10616Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x106170u;
        goto label_106170;
    }
    ctx->pc = 0x106168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x106170u);
        ctx->pc = 0x10616Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x105D40u: goto label_105d40;
            case 0x105D44u: goto label_105d44;
            case 0x105D48u: goto label_105d48;
            case 0x105D4Cu: goto label_105d4c;
            case 0x105D50u: goto label_105d50;
            case 0x105D54u: goto label_105d54;
            case 0x105D58u: goto label_105d58;
            case 0x105D5Cu: goto label_105d5c;
            case 0x105D60u: goto label_105d60;
            case 0x105D64u: goto label_105d64;
            case 0x105D68u: goto label_105d68;
            case 0x105D6Cu: goto label_105d6c;
            case 0x105D70u: goto label_105d70;
            case 0x105D74u: goto label_105d74;
            case 0x105D78u: goto label_105d78;
            case 0x105D7Cu: goto label_105d7c;
            case 0x105D80u: goto label_105d80;
            case 0x105D84u: goto label_105d84;
            case 0x105D88u: goto label_105d88;
            case 0x105D8Cu: goto label_105d8c;
            case 0x105D90u: goto label_105d90;
            case 0x105D94u: goto label_105d94;
            case 0x105D98u: goto label_105d98;
            case 0x105D9Cu: goto label_105d9c;
            case 0x105DA0u: goto label_105da0;
            case 0x105DA4u: goto label_105da4;
            case 0x105DA8u: goto label_105da8;
            case 0x105DACu: goto label_105dac;
            case 0x105DB0u: goto label_105db0;
            case 0x105DB4u: goto label_105db4;
            case 0x105DB8u: goto label_105db8;
            case 0x105DBCu: goto label_105dbc;
            case 0x105DC0u: goto label_105dc0;
            case 0x105DC4u: goto label_105dc4;
            case 0x105DC8u: goto label_105dc8;
            case 0x105DCCu: goto label_105dcc;
            case 0x105DD0u: goto label_105dd0;
            case 0x105DD4u: goto label_105dd4;
            case 0x105DD8u: goto label_105dd8;
            case 0x105DDCu: goto label_105ddc;
            case 0x105DE0u: goto label_105de0;
            case 0x105DE4u: goto label_105de4;
            case 0x105DE8u: goto label_105de8;
            case 0x105DECu: goto label_105dec;
            case 0x105DF0u: goto label_105df0;
            case 0x105DF4u: goto label_105df4;
            case 0x105DF8u: goto label_105df8;
            case 0x105DFCu: goto label_105dfc;
            case 0x105E00u: goto label_105e00;
            case 0x105E04u: goto label_105e04;
            case 0x105E08u: goto label_105e08;
            case 0x105E0Cu: goto label_105e0c;
            case 0x105E10u: goto label_105e10;
            case 0x105E14u: goto label_105e14;
            case 0x105E18u: goto label_105e18;
            case 0x105E1Cu: goto label_105e1c;
            case 0x105E20u: goto label_105e20;
            case 0x105E24u: goto label_105e24;
            case 0x105E28u: goto label_105e28;
            case 0x105E2Cu: goto label_105e2c;
            case 0x105E30u: goto label_105e30;
            case 0x105E34u: goto label_105e34;
            case 0x105E38u: goto label_105e38;
            case 0x105E3Cu: goto label_105e3c;
            case 0x105E40u: goto label_105e40;
            case 0x105E44u: goto label_105e44;
            case 0x105E48u: goto label_105e48;
            case 0x105E4Cu: goto label_105e4c;
            case 0x105E50u: goto label_105e50;
            case 0x105E54u: goto label_105e54;
            case 0x105E58u: goto label_105e58;
            case 0x105E5Cu: goto label_105e5c;
            case 0x105E60u: goto label_105e60;
            case 0x105E64u: goto label_105e64;
            case 0x105E68u: goto label_105e68;
            case 0x105E6Cu: goto label_105e6c;
            case 0x105E70u: goto label_105e70;
            case 0x105E74u: goto label_105e74;
            case 0x105E78u: goto label_105e78;
            case 0x105E7Cu: goto label_105e7c;
            case 0x105E80u: goto label_105e80;
            case 0x105E84u: goto label_105e84;
            case 0x105E88u: goto label_105e88;
            case 0x105E8Cu: goto label_105e8c;
            case 0x105E90u: goto label_105e90;
            case 0x105E94u: goto label_105e94;
            case 0x105E98u: goto label_105e98;
            case 0x105E9Cu: goto label_105e9c;
            case 0x105EA0u: goto label_105ea0;
            case 0x105EA4u: goto label_105ea4;
            case 0x105EA8u: goto label_105ea8;
            case 0x105EACu: goto label_105eac;
            case 0x105EB0u: goto label_105eb0;
            case 0x105EB4u: goto label_105eb4;
            case 0x105EB8u: goto label_105eb8;
            case 0x105EBCu: goto label_105ebc;
            case 0x105EC0u: goto label_105ec0;
            case 0x105EC4u: goto label_105ec4;
            case 0x105EC8u: goto label_105ec8;
            case 0x105ECCu: goto label_105ecc;
            case 0x105ED0u: goto label_105ed0;
            case 0x105ED4u: goto label_105ed4;
            case 0x105ED8u: goto label_105ed8;
            case 0x105EDCu: goto label_105edc;
            case 0x105EE0u: goto label_105ee0;
            case 0x105EE4u: goto label_105ee4;
            case 0x105EE8u: goto label_105ee8;
            case 0x105EECu: goto label_105eec;
            case 0x105EF0u: goto label_105ef0;
            case 0x105EF4u: goto label_105ef4;
            case 0x105EF8u: goto label_105ef8;
            case 0x105EFCu: goto label_105efc;
            case 0x105F00u: goto label_105f00;
            case 0x105F04u: goto label_105f04;
            case 0x105F08u: goto label_105f08;
            case 0x105F0Cu: goto label_105f0c;
            case 0x105F10u: goto label_105f10;
            case 0x105F14u: goto label_105f14;
            case 0x105F18u: goto label_105f18;
            case 0x105F1Cu: goto label_105f1c;
            case 0x105F20u: goto label_105f20;
            case 0x105F24u: goto label_105f24;
            case 0x105F28u: goto label_105f28;
            case 0x105F2Cu: goto label_105f2c;
            case 0x105F30u: goto label_105f30;
            case 0x105F34u: goto label_105f34;
            case 0x105F38u: goto label_105f38;
            case 0x105F3Cu: goto label_105f3c;
            case 0x105F40u: goto label_105f40;
            case 0x105F44u: goto label_105f44;
            case 0x105F48u: goto label_105f48;
            case 0x105F4Cu: goto label_105f4c;
            case 0x105F50u: goto label_105f50;
            case 0x105F54u: goto label_105f54;
            case 0x105F58u: goto label_105f58;
            case 0x105F5Cu: goto label_105f5c;
            case 0x105F60u: goto label_105f60;
            case 0x105F64u: goto label_105f64;
            case 0x105F68u: goto label_105f68;
            case 0x105F6Cu: goto label_105f6c;
            case 0x105F70u: goto label_105f70;
            case 0x105F74u: goto label_105f74;
            case 0x105F78u: goto label_105f78;
            case 0x105F7Cu: goto label_105f7c;
            case 0x105F80u: goto label_105f80;
            case 0x105F84u: goto label_105f84;
            case 0x105F88u: goto label_105f88;
            case 0x105F8Cu: goto label_105f8c;
            case 0x105F90u: goto label_105f90;
            case 0x105F94u: goto label_105f94;
            case 0x105F98u: goto label_105f98;
            case 0x105F9Cu: goto label_105f9c;
            case 0x105FA0u: goto label_105fa0;
            case 0x105FA4u: goto label_105fa4;
            case 0x105FA8u: goto label_105fa8;
            case 0x105FACu: goto label_105fac;
            case 0x105FB0u: goto label_105fb0;
            case 0x105FB4u: goto label_105fb4;
            case 0x105FB8u: goto label_105fb8;
            case 0x105FBCu: goto label_105fbc;
            case 0x105FC0u: goto label_105fc0;
            case 0x105FC4u: goto label_105fc4;
            case 0x105FC8u: goto label_105fc8;
            case 0x105FCCu: goto label_105fcc;
            case 0x105FD0u: goto label_105fd0;
            case 0x105FD4u: goto label_105fd4;
            case 0x105FD8u: goto label_105fd8;
            case 0x105FDCu: goto label_105fdc;
            case 0x105FE0u: goto label_105fe0;
            case 0x105FE4u: goto label_105fe4;
            case 0x105FE8u: goto label_105fe8;
            case 0x105FECu: goto label_105fec;
            case 0x105FF0u: goto label_105ff0;
            case 0x105FF4u: goto label_105ff4;
            case 0x105FF8u: goto label_105ff8;
            case 0x105FFCu: goto label_105ffc;
            case 0x106000u: goto label_106000;
            case 0x106004u: goto label_106004;
            case 0x106008u: goto label_106008;
            case 0x10600Cu: goto label_10600c;
            case 0x106010u: goto label_106010;
            case 0x106014u: goto label_106014;
            case 0x106018u: goto label_106018;
            case 0x10601Cu: goto label_10601c;
            case 0x106020u: goto label_106020;
            case 0x106024u: goto label_106024;
            case 0x106028u: goto label_106028;
            case 0x10602Cu: goto label_10602c;
            case 0x106030u: goto label_106030;
            case 0x106034u: goto label_106034;
            case 0x106038u: goto label_106038;
            case 0x10603Cu: goto label_10603c;
            case 0x106040u: goto label_106040;
            case 0x106044u: goto label_106044;
            case 0x106048u: goto label_106048;
            case 0x10604Cu: goto label_10604c;
            case 0x106050u: goto label_106050;
            case 0x106054u: goto label_106054;
            case 0x106058u: goto label_106058;
            case 0x10605Cu: goto label_10605c;
            case 0x106060u: goto label_106060;
            case 0x106064u: goto label_106064;
            case 0x106068u: goto label_106068;
            case 0x10606Cu: goto label_10606c;
            case 0x106070u: goto label_106070;
            case 0x106074u: goto label_106074;
            case 0x106078u: goto label_106078;
            case 0x10607Cu: goto label_10607c;
            case 0x106080u: goto label_106080;
            case 0x106084u: goto label_106084;
            case 0x106088u: goto label_106088;
            case 0x10608Cu: goto label_10608c;
            case 0x106090u: goto label_106090;
            case 0x106094u: goto label_106094;
            case 0x106098u: goto label_106098;
            case 0x10609Cu: goto label_10609c;
            case 0x1060A0u: goto label_1060a0;
            case 0x1060A4u: goto label_1060a4;
            case 0x1060A8u: goto label_1060a8;
            case 0x1060ACu: goto label_1060ac;
            case 0x1060B0u: goto label_1060b0;
            case 0x1060B4u: goto label_1060b4;
            case 0x1060B8u: goto label_1060b8;
            case 0x1060BCu: goto label_1060bc;
            case 0x1060C0u: goto label_1060c0;
            case 0x1060C4u: goto label_1060c4;
            case 0x1060C8u: goto label_1060c8;
            case 0x1060CCu: goto label_1060cc;
            case 0x1060D0u: goto label_1060d0;
            case 0x1060D4u: goto label_1060d4;
            case 0x1060D8u: goto label_1060d8;
            case 0x1060DCu: goto label_1060dc;
            case 0x1060E0u: goto label_1060e0;
            case 0x1060E4u: goto label_1060e4;
            case 0x1060E8u: goto label_1060e8;
            case 0x1060ECu: goto label_1060ec;
            case 0x1060F0u: goto label_1060f0;
            case 0x1060F4u: goto label_1060f4;
            case 0x1060F8u: goto label_1060f8;
            case 0x1060FCu: goto label_1060fc;
            case 0x106100u: goto label_106100;
            case 0x106104u: goto label_106104;
            case 0x106108u: goto label_106108;
            case 0x10610Cu: goto label_10610c;
            case 0x106110u: goto label_106110;
            case 0x106114u: goto label_106114;
            case 0x106118u: goto label_106118;
            case 0x10611Cu: goto label_10611c;
            case 0x106120u: goto label_106120;
            case 0x106124u: goto label_106124;
            case 0x106128u: goto label_106128;
            case 0x10612Cu: goto label_10612c;
            case 0x106130u: goto label_106130;
            case 0x106134u: goto label_106134;
            case 0x106138u: goto label_106138;
            case 0x10613Cu: goto label_10613c;
            case 0x106140u: goto label_106140;
            case 0x106144u: goto label_106144;
            case 0x106148u: goto label_106148;
            case 0x10614Cu: goto label_10614c;
            case 0x106150u: goto label_106150;
            case 0x106154u: goto label_106154;
            case 0x106158u: goto label_106158;
            case 0x10615Cu: goto label_10615c;
            case 0x106160u: goto label_106160;
            case 0x106164u: goto label_106164;
            case 0x106168u: goto label_106168;
            case 0x10616Cu: goto label_10616c;
            case 0x106170u: goto label_106170;
            case 0x106174u: goto label_106174;
            case 0x106178u: goto label_106178;
            case 0x10617Cu: goto label_10617c;
            case 0x106180u: goto label_106180;
            case 0x106184u: goto label_106184;
            case 0x106188u: goto label_106188;
            case 0x10618Cu: goto label_10618c;
            case 0x106190u: goto label_106190;
            case 0x106194u: goto label_106194;
            case 0x106198u: goto label_106198;
            case 0x10619Cu: goto label_10619c;
            case 0x1061A0u: goto label_1061a0;
            case 0x1061A4u: goto label_1061a4;
            case 0x1061A8u: goto label_1061a8;
            case 0x1061ACu: goto label_1061ac;
            case 0x1061B0u: goto label_1061b0;
            case 0x1061B4u: goto label_1061b4;
            case 0x1061B8u: goto label_1061b8;
            case 0x1061BCu: goto label_1061bc;
            case 0x1061C0u: goto label_1061c0;
            case 0x1061C4u: goto label_1061c4;
            case 0x1061C8u: goto label_1061c8;
            case 0x1061CCu: goto label_1061cc;
            case 0x1061D0u: goto label_1061d0;
            case 0x1061D4u: goto label_1061d4;
            case 0x1061D8u: goto label_1061d8;
            case 0x1061DCu: goto label_1061dc;
            case 0x1061E0u: goto label_1061e0;
            case 0x1061E4u: goto label_1061e4;
            case 0x1061E8u: goto label_1061e8;
            case 0x1061ECu: goto label_1061ec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x106170u; }
            if (ctx->pc != 0x106170u) { return; }
        }
    }
    ctx->pc = 0x106170u;
label_106170:
    // 0x106170: 0x2403ffff
    ctx->pc = 0x106170u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_106174:
    // 0x106174: 0x54430004
label_106178:
    if (ctx->pc == 0x106178u) {
        ctx->pc = 0x106178u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x10617Cu;
        goto label_10617c;
    }
    ctx->pc = 0x106174u;
    {
        const bool branch_taken_0x106174 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x106174) {
            ctx->pc = 0x106178u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->pc = 0x106188u;
            goto label_106188;
        }
    }
    ctx->pc = 0x10617Cu;
label_10617c:
    // 0x10617c: 0x10000010
label_106180:
    if (ctx->pc == 0x106180u) {
        ctx->pc = 0x106180u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x106184u;
        goto label_106184;
    }
    ctx->pc = 0x10617Cu;
    {
        const bool branch_taken_0x10617c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x106180u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x10617c) {
            ctx->pc = 0x1061C0u;
            goto label_1061c0;
        }
    }
    ctx->pc = 0x106184u;
label_106184:
    // 0x106184: 0x0
    ctx->pc = 0x106184u;
    // NOP
label_106188:
    // 0x106188: 0x10a00006
label_10618c:
    if (ctx->pc == 0x10618Cu) {
        ctx->pc = 0x10618Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 64));
        ctx->pc = 0x106190u;
        goto label_106190;
    }
    ctx->pc = 0x106188u;
    {
        const bool branch_taken_0x106188 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x10618Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 64));
        if (branch_taken_0x106188) {
            ctx->pc = 0x1061A4u;
            goto label_1061a4;
        }
    }
    ctx->pc = 0x106190u;
label_106190:
    // 0x106190: 0x50a20004
label_106194:
    if (ctx->pc == 0x106194u) {
        ctx->pc = 0x106194u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->pc = 0x106198u;
        goto label_106198;
    }
    ctx->pc = 0x106190u;
    {
        const bool branch_taken_0x106190 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x106190) {
            ctx->pc = 0x106194u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->pc = 0x1061A4u;
            goto label_1061a4;
        }
    }
    ctx->pc = 0x106198u;
label_106198:
    // 0x106198: 0xc041636
label_10619c:
    if (ctx->pc == 0x10619Cu) {
        ctx->pc = 0x10619Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x1061A0u;
        goto label_1061a0;
    }
    ctx->pc = 0x106198u;
    SET_GPR_U32(ctx, 31, 0x1061A0u);
    ctx->pc = 0x10619Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->pc = 0x1058D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001058D8_0x1058d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1061A0u; }
    }
    if (ctx->pc != 0x1061A0u) { return; }
    ctx->pc = 0x1061A0u;
label_1061a0:
    // 0x1061a0: 0xae000030
    ctx->pc = 0x1061a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1061a4:
    // 0x1061a4: 0x9603000c
    ctx->pc = 0x1061a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1061a8:
    // 0x1061a8: 0x102d
    ctx->pc = 0x1061a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1061ac:
    // 0x1061ac: 0x8e040010
    ctx->pc = 0x1061acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1061b0:
    // 0x1061b0: 0x3063ffdf
    ctx->pc = 0x1061b0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65503));
label_1061b4:
    // 0x1061b4: 0xae000004
    ctx->pc = 0x1061b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1061b8:
    // 0x1061b8: 0xa603000c
    ctx->pc = 0x1061b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
label_1061bc:
    // 0x1061bc: 0xae040000
    ctx->pc = 0x1061bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_1061c0:
    // 0x1061c0: 0xdfb00070
    ctx->pc = 0x1061c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1061c4:
    // 0x1061c4: 0xdfb10078
    ctx->pc = 0x1061c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_1061c8:
    // 0x1061c8: 0xdfb20080
    ctx->pc = 0x1061c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1061cc:
    // 0x1061cc: 0xdfb30088
    ctx->pc = 0x1061ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_1061d0:
    // 0x1061d0: 0xdfb40090
    ctx->pc = 0x1061d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1061d4:
    // 0x1061d4: 0xdfb50098
    ctx->pc = 0x1061d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_1061d8:
    // 0x1061d8: 0xdfb600a0
    ctx->pc = 0x1061d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1061dc:
    // 0x1061dc: 0xdfb700a8
    ctx->pc = 0x1061dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_1061e0:
    // 0x1061e0: 0xdfbf00b0
    ctx->pc = 0x1061e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1061e4:
    // 0x1061e4: 0x3e00008
label_1061e8:
    if (ctx->pc == 0x1061E8u) {
        ctx->pc = 0x1061E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1061ECu;
        goto label_1061ec;
    }
    ctx->pc = 0x1061E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1061E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x105D40u: goto label_105d40;
            case 0x105D44u: goto label_105d44;
            case 0x105D48u: goto label_105d48;
            case 0x105D4Cu: goto label_105d4c;
            case 0x105D50u: goto label_105d50;
            case 0x105D54u: goto label_105d54;
            case 0x105D58u: goto label_105d58;
            case 0x105D5Cu: goto label_105d5c;
            case 0x105D60u: goto label_105d60;
            case 0x105D64u: goto label_105d64;
            case 0x105D68u: goto label_105d68;
            case 0x105D6Cu: goto label_105d6c;
            case 0x105D70u: goto label_105d70;
            case 0x105D74u: goto label_105d74;
            case 0x105D78u: goto label_105d78;
            case 0x105D7Cu: goto label_105d7c;
            case 0x105D80u: goto label_105d80;
            case 0x105D84u: goto label_105d84;
            case 0x105D88u: goto label_105d88;
            case 0x105D8Cu: goto label_105d8c;
            case 0x105D90u: goto label_105d90;
            case 0x105D94u: goto label_105d94;
            case 0x105D98u: goto label_105d98;
            case 0x105D9Cu: goto label_105d9c;
            case 0x105DA0u: goto label_105da0;
            case 0x105DA4u: goto label_105da4;
            case 0x105DA8u: goto label_105da8;
            case 0x105DACu: goto label_105dac;
            case 0x105DB0u: goto label_105db0;
            case 0x105DB4u: goto label_105db4;
            case 0x105DB8u: goto label_105db8;
            case 0x105DBCu: goto label_105dbc;
            case 0x105DC0u: goto label_105dc0;
            case 0x105DC4u: goto label_105dc4;
            case 0x105DC8u: goto label_105dc8;
            case 0x105DCCu: goto label_105dcc;
            case 0x105DD0u: goto label_105dd0;
            case 0x105DD4u: goto label_105dd4;
            case 0x105DD8u: goto label_105dd8;
            case 0x105DDCu: goto label_105ddc;
            case 0x105DE0u: goto label_105de0;
            case 0x105DE4u: goto label_105de4;
            case 0x105DE8u: goto label_105de8;
            case 0x105DECu: goto label_105dec;
            case 0x105DF0u: goto label_105df0;
            case 0x105DF4u: goto label_105df4;
            case 0x105DF8u: goto label_105df8;
            case 0x105DFCu: goto label_105dfc;
            case 0x105E00u: goto label_105e00;
            case 0x105E04u: goto label_105e04;
            case 0x105E08u: goto label_105e08;
            case 0x105E0Cu: goto label_105e0c;
            case 0x105E10u: goto label_105e10;
            case 0x105E14u: goto label_105e14;
            case 0x105E18u: goto label_105e18;
            case 0x105E1Cu: goto label_105e1c;
            case 0x105E20u: goto label_105e20;
            case 0x105E24u: goto label_105e24;
            case 0x105E28u: goto label_105e28;
            case 0x105E2Cu: goto label_105e2c;
            case 0x105E30u: goto label_105e30;
            case 0x105E34u: goto label_105e34;
            case 0x105E38u: goto label_105e38;
            case 0x105E3Cu: goto label_105e3c;
            case 0x105E40u: goto label_105e40;
            case 0x105E44u: goto label_105e44;
            case 0x105E48u: goto label_105e48;
            case 0x105E4Cu: goto label_105e4c;
            case 0x105E50u: goto label_105e50;
            case 0x105E54u: goto label_105e54;
            case 0x105E58u: goto label_105e58;
            case 0x105E5Cu: goto label_105e5c;
            case 0x105E60u: goto label_105e60;
            case 0x105E64u: goto label_105e64;
            case 0x105E68u: goto label_105e68;
            case 0x105E6Cu: goto label_105e6c;
            case 0x105E70u: goto label_105e70;
            case 0x105E74u: goto label_105e74;
            case 0x105E78u: goto label_105e78;
            case 0x105E7Cu: goto label_105e7c;
            case 0x105E80u: goto label_105e80;
            case 0x105E84u: goto label_105e84;
            case 0x105E88u: goto label_105e88;
            case 0x105E8Cu: goto label_105e8c;
            case 0x105E90u: goto label_105e90;
            case 0x105E94u: goto label_105e94;
            case 0x105E98u: goto label_105e98;
            case 0x105E9Cu: goto label_105e9c;
            case 0x105EA0u: goto label_105ea0;
            case 0x105EA4u: goto label_105ea4;
            case 0x105EA8u: goto label_105ea8;
            case 0x105EACu: goto label_105eac;
            case 0x105EB0u: goto label_105eb0;
            case 0x105EB4u: goto label_105eb4;
            case 0x105EB8u: goto label_105eb8;
            case 0x105EBCu: goto label_105ebc;
            case 0x105EC0u: goto label_105ec0;
            case 0x105EC4u: goto label_105ec4;
            case 0x105EC8u: goto label_105ec8;
            case 0x105ECCu: goto label_105ecc;
            case 0x105ED0u: goto label_105ed0;
            case 0x105ED4u: goto label_105ed4;
            case 0x105ED8u: goto label_105ed8;
            case 0x105EDCu: goto label_105edc;
            case 0x105EE0u: goto label_105ee0;
            case 0x105EE4u: goto label_105ee4;
            case 0x105EE8u: goto label_105ee8;
            case 0x105EECu: goto label_105eec;
            case 0x105EF0u: goto label_105ef0;
            case 0x105EF4u: goto label_105ef4;
            case 0x105EF8u: goto label_105ef8;
            case 0x105EFCu: goto label_105efc;
            case 0x105F00u: goto label_105f00;
            case 0x105F04u: goto label_105f04;
            case 0x105F08u: goto label_105f08;
            case 0x105F0Cu: goto label_105f0c;
            case 0x105F10u: goto label_105f10;
            case 0x105F14u: goto label_105f14;
            case 0x105F18u: goto label_105f18;
            case 0x105F1Cu: goto label_105f1c;
            case 0x105F20u: goto label_105f20;
            case 0x105F24u: goto label_105f24;
            case 0x105F28u: goto label_105f28;
            case 0x105F2Cu: goto label_105f2c;
            case 0x105F30u: goto label_105f30;
            case 0x105F34u: goto label_105f34;
            case 0x105F38u: goto label_105f38;
            case 0x105F3Cu: goto label_105f3c;
            case 0x105F40u: goto label_105f40;
            case 0x105F44u: goto label_105f44;
            case 0x105F48u: goto label_105f48;
            case 0x105F4Cu: goto label_105f4c;
            case 0x105F50u: goto label_105f50;
            case 0x105F54u: goto label_105f54;
            case 0x105F58u: goto label_105f58;
            case 0x105F5Cu: goto label_105f5c;
            case 0x105F60u: goto label_105f60;
            case 0x105F64u: goto label_105f64;
            case 0x105F68u: goto label_105f68;
            case 0x105F6Cu: goto label_105f6c;
            case 0x105F70u: goto label_105f70;
            case 0x105F74u: goto label_105f74;
            case 0x105F78u: goto label_105f78;
            case 0x105F7Cu: goto label_105f7c;
            case 0x105F80u: goto label_105f80;
            case 0x105F84u: goto label_105f84;
            case 0x105F88u: goto label_105f88;
            case 0x105F8Cu: goto label_105f8c;
            case 0x105F90u: goto label_105f90;
            case 0x105F94u: goto label_105f94;
            case 0x105F98u: goto label_105f98;
            case 0x105F9Cu: goto label_105f9c;
            case 0x105FA0u: goto label_105fa0;
            case 0x105FA4u: goto label_105fa4;
            case 0x105FA8u: goto label_105fa8;
            case 0x105FACu: goto label_105fac;
            case 0x105FB0u: goto label_105fb0;
            case 0x105FB4u: goto label_105fb4;
            case 0x105FB8u: goto label_105fb8;
            case 0x105FBCu: goto label_105fbc;
            case 0x105FC0u: goto label_105fc0;
            case 0x105FC4u: goto label_105fc4;
            case 0x105FC8u: goto label_105fc8;
            case 0x105FCCu: goto label_105fcc;
            case 0x105FD0u: goto label_105fd0;
            case 0x105FD4u: goto label_105fd4;
            case 0x105FD8u: goto label_105fd8;
            case 0x105FDCu: goto label_105fdc;
            case 0x105FE0u: goto label_105fe0;
            case 0x105FE4u: goto label_105fe4;
            case 0x105FE8u: goto label_105fe8;
            case 0x105FECu: goto label_105fec;
            case 0x105FF0u: goto label_105ff0;
            case 0x105FF4u: goto label_105ff4;
            case 0x105FF8u: goto label_105ff8;
            case 0x105FFCu: goto label_105ffc;
            case 0x106000u: goto label_106000;
            case 0x106004u: goto label_106004;
            case 0x106008u: goto label_106008;
            case 0x10600Cu: goto label_10600c;
            case 0x106010u: goto label_106010;
            case 0x106014u: goto label_106014;
            case 0x106018u: goto label_106018;
            case 0x10601Cu: goto label_10601c;
            case 0x106020u: goto label_106020;
            case 0x106024u: goto label_106024;
            case 0x106028u: goto label_106028;
            case 0x10602Cu: goto label_10602c;
            case 0x106030u: goto label_106030;
            case 0x106034u: goto label_106034;
            case 0x106038u: goto label_106038;
            case 0x10603Cu: goto label_10603c;
            case 0x106040u: goto label_106040;
            case 0x106044u: goto label_106044;
            case 0x106048u: goto label_106048;
            case 0x10604Cu: goto label_10604c;
            case 0x106050u: goto label_106050;
            case 0x106054u: goto label_106054;
            case 0x106058u: goto label_106058;
            case 0x10605Cu: goto label_10605c;
            case 0x106060u: goto label_106060;
            case 0x106064u: goto label_106064;
            case 0x106068u: goto label_106068;
            case 0x10606Cu: goto label_10606c;
            case 0x106070u: goto label_106070;
            case 0x106074u: goto label_106074;
            case 0x106078u: goto label_106078;
            case 0x10607Cu: goto label_10607c;
            case 0x106080u: goto label_106080;
            case 0x106084u: goto label_106084;
            case 0x106088u: goto label_106088;
            case 0x10608Cu: goto label_10608c;
            case 0x106090u: goto label_106090;
            case 0x106094u: goto label_106094;
            case 0x106098u: goto label_106098;
            case 0x10609Cu: goto label_10609c;
            case 0x1060A0u: goto label_1060a0;
            case 0x1060A4u: goto label_1060a4;
            case 0x1060A8u: goto label_1060a8;
            case 0x1060ACu: goto label_1060ac;
            case 0x1060B0u: goto label_1060b0;
            case 0x1060B4u: goto label_1060b4;
            case 0x1060B8u: goto label_1060b8;
            case 0x1060BCu: goto label_1060bc;
            case 0x1060C0u: goto label_1060c0;
            case 0x1060C4u: goto label_1060c4;
            case 0x1060C8u: goto label_1060c8;
            case 0x1060CCu: goto label_1060cc;
            case 0x1060D0u: goto label_1060d0;
            case 0x1060D4u: goto label_1060d4;
            case 0x1060D8u: goto label_1060d8;
            case 0x1060DCu: goto label_1060dc;
            case 0x1060E0u: goto label_1060e0;
            case 0x1060E4u: goto label_1060e4;
            case 0x1060E8u: goto label_1060e8;
            case 0x1060ECu: goto label_1060ec;
            case 0x1060F0u: goto label_1060f0;
            case 0x1060F4u: goto label_1060f4;
            case 0x1060F8u: goto label_1060f8;
            case 0x1060FCu: goto label_1060fc;
            case 0x106100u: goto label_106100;
            case 0x106104u: goto label_106104;
            case 0x106108u: goto label_106108;
            case 0x10610Cu: goto label_10610c;
            case 0x106110u: goto label_106110;
            case 0x106114u: goto label_106114;
            case 0x106118u: goto label_106118;
            case 0x10611Cu: goto label_10611c;
            case 0x106120u: goto label_106120;
            case 0x106124u: goto label_106124;
            case 0x106128u: goto label_106128;
            case 0x10612Cu: goto label_10612c;
            case 0x106130u: goto label_106130;
            case 0x106134u: goto label_106134;
            case 0x106138u: goto label_106138;
            case 0x10613Cu: goto label_10613c;
            case 0x106140u: goto label_106140;
            case 0x106144u: goto label_106144;
            case 0x106148u: goto label_106148;
            case 0x10614Cu: goto label_10614c;
            case 0x106150u: goto label_106150;
            case 0x106154u: goto label_106154;
            case 0x106158u: goto label_106158;
            case 0x10615Cu: goto label_10615c;
            case 0x106160u: goto label_106160;
            case 0x106164u: goto label_106164;
            case 0x106168u: goto label_106168;
            case 0x10616Cu: goto label_10616c;
            case 0x106170u: goto label_106170;
            case 0x106174u: goto label_106174;
            case 0x106178u: goto label_106178;
            case 0x10617Cu: goto label_10617c;
            case 0x106180u: goto label_106180;
            case 0x106184u: goto label_106184;
            case 0x106188u: goto label_106188;
            case 0x10618Cu: goto label_10618c;
            case 0x106190u: goto label_106190;
            case 0x106194u: goto label_106194;
            case 0x106198u: goto label_106198;
            case 0x10619Cu: goto label_10619c;
            case 0x1061A0u: goto label_1061a0;
            case 0x1061A4u: goto label_1061a4;
            case 0x1061A8u: goto label_1061a8;
            case 0x1061ACu: goto label_1061ac;
            case 0x1061B0u: goto label_1061b0;
            case 0x1061B4u: goto label_1061b4;
            case 0x1061B8u: goto label_1061b8;
            case 0x1061BCu: goto label_1061bc;
            case 0x1061C0u: goto label_1061c0;
            case 0x1061C4u: goto label_1061c4;
            case 0x1061C8u: goto label_1061c8;
            case 0x1061CCu: goto label_1061cc;
            case 0x1061D0u: goto label_1061d0;
            case 0x1061D4u: goto label_1061d4;
            case 0x1061D8u: goto label_1061d8;
            case 0x1061DCu: goto label_1061dc;
            case 0x1061E0u: goto label_1061e0;
            case 0x1061E4u: goto label_1061e4;
            case 0x1061E8u: goto label_1061e8;
            case 0x1061ECu: goto label_1061ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1061ECu;
label_1061ec:
    // 0x1061ec: 0x0
    ctx->pc = 0x1061ecu;
    // NOP
}
