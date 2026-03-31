#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00172CF8
// Address: 0x172cf8 - 0x172e78
void sub_00172CF8_0x172cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x172cf8u;

    // 0x172cf8: 0x27bdffd0
    ctx->pc = 0x172cf8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x172cfc: 0x24050043
    ctx->pc = 0x172cfcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 67));
    // 0x172d00: 0xffb00010
    ctx->pc = 0x172d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x172d04: 0x80802d
    ctx->pc = 0x172d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172d08: 0xffb10018
    ctx->pc = 0x172d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x172d0c: 0xffbf0020
    ctx->pc = 0x172d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x172d10: 0xc05d58a
    ctx->pc = 0x172D10u;
    SET_GPR_U32(ctx, 31, 0x172D18u);
    ctx->pc = 0x172D14u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 2380));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172D18u; }
    }
    if (ctx->pc != 0x172D18u) { return; }
    ctx->pc = 0x172D18u;
    // 0x172d18: 0x10400051
    ctx->pc = 0x172D18u;
    {
        const bool branch_taken_0x172d18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x172D1Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172d18) {
            ctx->pc = 0x172E60u;
            goto label_172e60;
        }
    }
    ctx->pc = 0x172D20u;
    // 0x172d20: 0xc05d58a
    ctx->pc = 0x172D20u;
    SET_GPR_U32(ctx, 31, 0x172D28u);
    ctx->pc = 0x172D24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172D28u; }
    }
    if (ctx->pc != 0x172D28u) { return; }
    ctx->pc = 0x172D28u;
    // 0x172d28: 0x5040004e
    ctx->pc = 0x172D28u;
    {
        const bool branch_taken_0x172d28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x172d28) {
            ctx->pc = 0x172D2Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x172E64u;
            goto label_172e64;
        }
    }
    ctx->pc = 0x172D30u;
    // 0x172d30: 0x8e030050
    ctx->pc = 0x172d30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x172d34: 0x1460004a
    ctx->pc = 0x172D34u;
    {
        const bool branch_taken_0x172d34 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x172D38u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172d34) {
            ctx->pc = 0x172E60u;
            goto label_172e60;
        }
    }
    ctx->pc = 0x172D3Cu;
    // 0x172d3c: 0x8e040048
    ctx->pc = 0x172d3cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x172d40: 0x24030004
    ctx->pc = 0x172d40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x172d44: 0x54830047
    ctx->pc = 0x172D44u;
    {
        const bool branch_taken_0x172d44 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x172d44) {
            ctx->pc = 0x172D48u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x172E64u;
            goto label_172e64;
        }
    }
    ctx->pc = 0x172D4Cu;
    // 0x172d4c: 0xc05cbd6
    ctx->pc = 0x172D4Cu;
    SET_GPR_U32(ctx, 31, 0x172D54u);
    ctx->pc = 0x172D50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172F58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00172F58_0x172f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172D54u; }
    }
    if (ctx->pc != 0x172D54u) { return; }
    ctx->pc = 0x172D54u;
    // 0x172d54: 0x54400042
    ctx->pc = 0x172D54u;
    {
        const bool branch_taken_0x172d54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x172d54) {
            ctx->pc = 0x172D58u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x172E60u;
            goto label_172e60;
        }
    }
    ctx->pc = 0x172D5Cu;
    // 0x172d5c: 0x200202d
    ctx->pc = 0x172d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172d60: 0xc05d58a
    ctx->pc = 0x172D60u;
    SET_GPR_U32(ctx, 31, 0x172D68u);
    ctx->pc = 0x172D64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172D68u; }
    }
    if (ctx->pc != 0x172D68u) { return; }
    ctx->pc = 0x172D68u;
    // 0x172d68: 0x24030001
    ctx->pc = 0x172d68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x172d6c: 0x14430005
    ctx->pc = 0x172D6Cu;
    {
        const bool branch_taken_0x172d6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x172D70u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172d6c) {
            ctx->pc = 0x172D84u;
            goto label_172d84;
        }
    }
    ctx->pc = 0x172D74u;
    // 0x172d74: 0x8e230020
    ctx->pc = 0x172d74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x172d78: 0x10600039
    ctx->pc = 0x172D78u;
    {
        const bool branch_taken_0x172d78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x172D7Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172d78) {
            ctx->pc = 0x172E60u;
            goto label_172e60;
        }
    }
    ctx->pc = 0x172D80u;
    // 0x172d80: 0x200202d
    ctx->pc = 0x172d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172d84:
    // 0x172d84: 0xc05d58a
    ctx->pc = 0x172D84u;
    SET_GPR_U32(ctx, 31, 0x172D8Cu);
    ctx->pc = 0x172D88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172D8Cu; }
    }
    if (ctx->pc != 0x172D8Cu) { return; }
    ctx->pc = 0x172D8Cu;
    // 0x172d8c: 0x24030001
    ctx->pc = 0x172d8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x172d90: 0x14430006
    ctx->pc = 0x172D90u;
    {
        const bool branch_taken_0x172d90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x172D94u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172d90) {
            ctx->pc = 0x172DACu;
            goto label_172dac;
        }
    }
    ctx->pc = 0x172D98u;
    // 0x172d98: 0xc059f48
    ctx->pc = 0x172D98u;
    SET_GPR_U32(ctx, 31, 0x172DA0u);
    ctx->pc = 0x172D9Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x167D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D20_0x167d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172DA0u; }
    }
    if (ctx->pc != 0x172DA0u) { return; }
    ctx->pc = 0x172DA0u;
    // 0x172da0: 0x1c40002f
    ctx->pc = 0x172DA0u;
    {
        const bool branch_taken_0x172da0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x172DA4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172da0) {
            ctx->pc = 0x172E60u;
            goto label_172e60;
        }
    }
    ctx->pc = 0x172DA8u;
    // 0x172da8: 0x200202d
    ctx->pc = 0x172da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172dac:
    // 0x172dac: 0xc05df24
    ctx->pc = 0x172DACu;
    SET_GPR_U32(ctx, 31, 0x172DB4u);
    ctx->pc = 0x172DB0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x177C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177C90_0x177c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172DB4u; }
    }
    if (ctx->pc != 0x172DB4u) { return; }
    ctx->pc = 0x172DB4u;
    // 0x172db4: 0x10400005
    ctx->pc = 0x172DB4u;
    {
        const bool branch_taken_0x172db4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x172DB8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172db4) {
            ctx->pc = 0x172DCCu;
            goto label_172dcc;
        }
    }
    ctx->pc = 0x172DBCu;
    // 0x172dbc: 0xc059f48
    ctx->pc = 0x172DBCu;
    SET_GPR_U32(ctx, 31, 0x172DC4u);
    ctx->pc = 0x172DC0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D20_0x167d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172DC4u; }
    }
    if (ctx->pc != 0x172DC4u) { return; }
    ctx->pc = 0x172DC4u;
    // 0x172dc4: 0x1c400026
    ctx->pc = 0x172DC4u;
    {
        const bool branch_taken_0x172dc4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x172DC8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172dc4) {
            ctx->pc = 0x172E60u;
            goto label_172e60;
        }
    }
    ctx->pc = 0x172DCCu;
label_172dcc:
    // 0x172dcc: 0x200202d
    ctx->pc = 0x172dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172dd0: 0xc05d58a
    ctx->pc = 0x172DD0u;
    SET_GPR_U32(ctx, 31, 0x172DD8u);
    ctx->pc = 0x172DD4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172DD8u; }
    }
    if (ctx->pc != 0x172DD8u) { return; }
    ctx->pc = 0x172DD8u;
    // 0x172dd8: 0x24030001
    ctx->pc = 0x172dd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x172ddc: 0x54430006
    ctx->pc = 0x172DDCu;
    {
        const bool branch_taken_0x172ddc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x172ddc) {
            ctx->pc = 0x172DE0u;
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x172DF8u;
            goto label_172df8;
        }
    }
    ctx->pc = 0x172DE4u;
    // 0x172de4: 0xc05cbfe
    ctx->pc = 0x172DE4u;
    SET_GPR_U32(ctx, 31, 0x172DECu);
    ctx->pc = 0x172DE8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172FF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00172FF8_0x172ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172DECu; }
    }
    if (ctx->pc != 0x172DECu) { return; }
    ctx->pc = 0x172DECu;
    // 0x172dec: 0x1440001c
    ctx->pc = 0x172DECu;
    {
        const bool branch_taken_0x172dec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x172DF0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172dec) {
            ctx->pc = 0x172E60u;
            goto label_172e60;
        }
    }
    ctx->pc = 0x172DF4u;
    // 0x172df4: 0x3a0282d
    ctx->pc = 0x172df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_172df8:
    // 0x172df8: 0x27a60004
    ctx->pc = 0x172df8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    // 0x172dfc: 0xc05d8d4
    ctx->pc = 0x172DFCu;
    SET_GPR_U32(ctx, 31, 0x172E04u);
    ctx->pc = 0x172E00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176350u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176350_0x176350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172E04u; }
    }
    if (ctx->pc != 0x172E04u) { return; }
    ctx->pc = 0x172E04u;
    // 0x172e04: 0x26030cc0
    ctx->pc = 0x172e04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 3264));
    // 0x172e08: 0x8c710244
    ctx->pc = 0x172e08u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 580)));
    // 0x172e0c: 0x200202d
    ctx->pc = 0x172e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e10: 0x24050044
    ctx->pc = 0x172e10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 68));
    // 0x172e14: 0xc05d58a
    ctx->pc = 0x172E14u;
    SET_GPR_U32(ctx, 31, 0x172E1Cu);
    ctx->pc = 0x172E18u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 576)));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172E1Cu; }
    }
    if (ctx->pc != 0x172E1Cu) { return; }
    ctx->pc = 0x172E1Cu;
    // 0x172e1c: 0x220282d
    ctx->pc = 0x172e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e20: 0x3c06000f
    ctx->pc = 0x172e20u;
    SET_GPR_U32(ctx, 6, ((uint32_t)15 << 16));
    // 0x172e24: 0x40202d
    ctx->pc = 0x172e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e28: 0xc056ea0
    ctx->pc = 0x172E28u;
    SET_GPR_U32(ctx, 31, 0x172E30u);
    ctx->pc = 0x172E2Cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 16960));
    ctx->pc = 0x15BA80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BA80_0x15ba80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172E30u; }
    }
    if (ctx->pc != 0x172E30u) { return; }
    ctx->pc = 0x172E30u;
    // 0x172e30: 0x8fa40000
    ctx->pc = 0x172e30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172e34: 0x18800003
    ctx->pc = 0x172E34u;
    {
        const bool branch_taken_0x172e34 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x172E38u;
        SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x172e34) {
            ctx->pc = 0x172E44u;
            goto label_172e44;
        }
    }
    ctx->pc = 0x172E3Cu;
    // 0x172e3c: 0x1e000004
    ctx->pc = 0x172E3Cu;
    {
        const bool branch_taken_0x172e3c = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x172E40u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x172e3c) {
            ctx->pc = 0x172E50u;
            goto label_172e50;
        }
    }
    ctx->pc = 0x172E44u;
label_172e44:
    // 0x172e44: 0x10000006
    ctx->pc = 0x172E44u;
    {
        const bool branch_taken_0x172e44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x172E48u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172e44) {
            ctx->pc = 0x172E60u;
            goto label_172e60;
        }
    }
    ctx->pc = 0x172E4Cu;
    // 0x172e4c: 0x0
    ctx->pc = 0x172e4cu;
    // NOP
label_172e50:
    // 0x172e50: 0x200302d
    ctx->pc = 0x172e50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e54: 0xc05d9de
    ctx->pc = 0x172E54u;
    SET_GPR_U32(ctx, 31, 0x172E5Cu);
    ctx->pc = 0x172E58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176778u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176778_0x176778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172E5Cu; }
    }
    if (ctx->pc != 0x172E5Cu) { return; }
    ctx->pc = 0x172E5Cu;
    // 0x172e5c: 0x2c420001
    ctx->pc = 0x172e5cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_172e60:
    // 0x172e60: 0xdfb00010
    ctx->pc = 0x172e60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_172e64:
    // 0x172e64: 0xdfb10018
    ctx->pc = 0x172e64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x172e68: 0xdfbf0020
    ctx->pc = 0x172e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172e6c: 0x3e00008
    ctx->pc = 0x172E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172E70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172D84u: goto label_172d84;
            case 0x172DACu: goto label_172dac;
            case 0x172DCCu: goto label_172dcc;
            case 0x172DF8u: goto label_172df8;
            case 0x172E44u: goto label_172e44;
            case 0x172E50u: goto label_172e50;
            case 0x172E60u: goto label_172e60;
            case 0x172E64u: goto label_172e64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172E74u;
    // 0x172e74: 0x0
    ctx->pc = 0x172e74u;
    // NOP
}
