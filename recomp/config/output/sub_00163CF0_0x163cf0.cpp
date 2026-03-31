#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00163CF0
// Address: 0x163cf0 - 0x163e88
void sub_00163CF0_0x163cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x163cf0u;

    // 0x163cf0: 0x27bdfff0
    ctx->pc = 0x163cf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x163cf4: 0xffb00000
    ctx->pc = 0x163cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x163cf8: 0x80802d
    ctx->pc = 0x163cf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163cfc: 0xffbf0008
    ctx->pc = 0x163cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x163d00: 0x8e020044
    ctx->pc = 0x163d00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x163d04: 0x10400006
    ctx->pc = 0x163D04u;
    {
        const bool branch_taken_0x163d04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x163D08u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x163d04) {
            ctx->pc = 0x163D20u;
            goto label_163d20;
        }
    }
    ctx->pc = 0x163D0Cu;
    // 0x163d0c: 0xc059144
    ctx->pc = 0x163D0Cu;
    SET_GPR_U32(ctx, 31, 0x163D14u);
    ctx->pc = 0x164510u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00164510_0x164510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163D14u; }
    }
    if (ctx->pc != 0x163D14u) { return; }
    ctx->pc = 0x163D14u;
    // 0x163d14: 0x10400002
    ctx->pc = 0x163D14u;
    {
        const bool branch_taken_0x163d14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x163D18u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x163d14) {
            ctx->pc = 0x163D20u;
            goto label_163d20;
        }
    }
    ctx->pc = 0x163D1Cu;
    // 0x163d1c: 0xae020008
    ctx->pc = 0x163d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_163d20:
    // 0x163d20: 0x8e04004c
    ctx->pc = 0x163d20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x163d24: 0x50800009
    ctx->pc = 0x163D24u;
    {
        const bool branch_taken_0x163d24 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x163d24) {
            ctx->pc = 0x163D28u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x163D4Cu;
            goto label_163d4c;
        }
    }
    ctx->pc = 0x163D2Cu;
    // 0x163d2c: 0xc058a9c
    ctx->pc = 0x163D2Cu;
    SET_GPR_U32(ctx, 31, 0x163D34u);
    ctx->pc = 0x162A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00162A70_0x162a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163D34u; }
    }
    if (ctx->pc != 0x163D34u) { return; }
    ctx->pc = 0x163D34u;
    // 0x163d34: 0x24030001
    ctx->pc = 0x163d34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x163d38: 0x54430004
    ctx->pc = 0x163D38u;
    {
        const bool branch_taken_0x163d38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x163d38) {
            ctx->pc = 0x163D3Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x163D4Cu;
            goto label_163d4c;
        }
    }
    ctx->pc = 0x163D40u;
    // 0x163d40: 0x24020004
    ctx->pc = 0x163d40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x163d44: 0xae020008
    ctx->pc = 0x163d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x163d48: 0xdfb00000
    ctx->pc = 0x163d48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_163d4c:
    // 0x163d4c: 0xdfbf0008
    ctx->pc = 0x163d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x163d50: 0x3e00008
    ctx->pc = 0x163D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163D54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163D20u: goto label_163d20;
            case 0x163D4Cu: goto label_163d4c;
            case 0x163D88u: goto label_163d88;
            case 0x163DF0u: goto label_163df0;
            case 0x163E04u: goto label_163e04;
            case 0x163E6Cu: goto label_163e6c;
            case 0x163E70u: goto label_163e70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x163D58u;
    // 0x163d58: 0x27bdfff0
    ctx->pc = 0x163d58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x163d5c: 0xffb00000
    ctx->pc = 0x163d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x163d60: 0xffbf0008
    ctx->pc = 0x163d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x163d64: 0xc04ad84
    ctx->pc = 0x163D64u;
    SET_GPR_U32(ctx, 31, 0x163D6Cu);
    ctx->pc = 0x163D68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B610u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B610_0x12b610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163D6Cu; }
    }
    if (ctx->pc != 0x163D6Cu) { return; }
    ctx->pc = 0x163D6Cu;
    // 0x163d6c: 0x24030001
    ctx->pc = 0x163d6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x163d70: 0x200202d
    ctx->pc = 0x163d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163d74: 0x14430004
    ctx->pc = 0x163D74u;
    {
        const bool branch_taken_0x163d74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x163D78u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x163d74) {
            ctx->pc = 0x163D88u;
            goto label_163d88;
        }
    }
    ctx->pc = 0x163D7Cu;
    // 0x163d7c: 0xc058faa
    ctx->pc = 0x163D7Cu;
    SET_GPR_U32(ctx, 31, 0x163D84u);
    ctx->pc = 0x163EA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163EA8_0x163ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163D84u; }
    }
    if (ctx->pc != 0x163D84u) { return; }
    ctx->pc = 0x163D84u;
    // 0x163d84: 0x40282d
    ctx->pc = 0x163d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163d88:
    // 0x163d88: 0xdfb00000
    ctx->pc = 0x163d88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163d8c: 0xa0102d
    ctx->pc = 0x163d8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163d90: 0xdfbf0008
    ctx->pc = 0x163d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x163d94: 0x3e00008
    ctx->pc = 0x163D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163D98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163D20u: goto label_163d20;
            case 0x163D4Cu: goto label_163d4c;
            case 0x163D88u: goto label_163d88;
            case 0x163DF0u: goto label_163df0;
            case 0x163E04u: goto label_163e04;
            case 0x163E6Cu: goto label_163e6c;
            case 0x163E70u: goto label_163e70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x163D9Cu;
    // 0x163d9c: 0x0
    ctx->pc = 0x163d9cu;
    // NOP
    // 0x163da0: 0x27bdffe0
    ctx->pc = 0x163da0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x163da4: 0xffb00000
    ctx->pc = 0x163da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x163da8: 0x80802d
    ctx->pc = 0x163da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163dac: 0xffb10008
    ctx->pc = 0x163dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x163db0: 0xffb20010
    ctx->pc = 0x163db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x163db4: 0xffbf0018
    ctx->pc = 0x163db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x163db8: 0xc04ad84
    ctx->pc = 0x163DB8u;
    SET_GPR_U32(ctx, 31, 0x163DC0u);
    ctx->pc = 0x163DBCu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B610u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B610_0x12b610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163DC0u; }
    }
    if (ctx->pc != 0x163DC0u) { return; }
    ctx->pc = 0x163DC0u;
    // 0x163dc0: 0x40902d
    ctx->pc = 0x163dc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163dc4: 0x24020001
    ctx->pc = 0x163dc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x163dc8: 0x16420009
    ctx->pc = 0x163DC8u;
    {
        const bool branch_taken_0x163dc8 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x163DCCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x163dc8) {
            ctx->pc = 0x163DF0u;
            goto label_163df0;
        }
    }
    ctx->pc = 0x163DD0u;
    // 0x163dd0: 0xc058fa2
    ctx->pc = 0x163DD0u;
    SET_GPR_U32(ctx, 31, 0x163DD8u);
    ctx->pc = 0x163E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163E88_0x163e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163DD8u; }
    }
    if (ctx->pc != 0x163DD8u) { return; }
    ctx->pc = 0x163DD8u;
    // 0x163dd8: 0x1452000a
    ctx->pc = 0x163DD8u;
    {
        const bool branch_taken_0x163dd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        ctx->pc = 0x163DDCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x163dd8) {
            ctx->pc = 0x163E04u;
            goto label_163e04;
        }
    }
    ctx->pc = 0x163DE0u;
    // 0x163de0: 0xc05900e
    ctx->pc = 0x163DE0u;
    SET_GPR_U32(ctx, 31, 0x163DE8u);
    ctx->pc = 0x164038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00164038_0x164038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163DE8u; }
    }
    if (ctx->pc != 0x163DE8u) { return; }
    ctx->pc = 0x163DE8u;
    // 0x163de8: 0x10000006
    ctx->pc = 0x163DE8u;
    {
        const bool branch_taken_0x163de8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x163DECu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x163de8) {
            ctx->pc = 0x163E04u;
            goto label_163e04;
        }
    }
    ctx->pc = 0x163DF0u;
label_163df0:
    // 0x163df0: 0xc058faa
    ctx->pc = 0x163DF0u;
    SET_GPR_U32(ctx, 31, 0x163DF8u);
    ctx->pc = 0x163EA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163EA8_0x163ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163DF8u; }
    }
    if (ctx->pc != 0x163DF8u) { return; }
    ctx->pc = 0x163DF8u;
    // 0x163df8: 0xc05900e
    ctx->pc = 0x163DF8u;
    SET_GPR_U32(ctx, 31, 0x163E00u);
    ctx->pc = 0x163DFCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x164038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00164038_0x164038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163E00u; }
    }
    if (ctx->pc != 0x163E00u) { return; }
    ctx->pc = 0x163E00u;
    // 0x163e00: 0x40882d
    ctx->pc = 0x163e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163e04:
    // 0x163e04: 0x220102d
    ctx->pc = 0x163e04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163e08: 0xdfb00000
    ctx->pc = 0x163e08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163e0c: 0xdfb10008
    ctx->pc = 0x163e0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x163e10: 0xdfb20010
    ctx->pc = 0x163e10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163e14: 0xdfbf0018
    ctx->pc = 0x163e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x163e18: 0x3e00008
    ctx->pc = 0x163E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163E1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163D20u: goto label_163d20;
            case 0x163D4Cu: goto label_163d4c;
            case 0x163D88u: goto label_163d88;
            case 0x163DF0u: goto label_163df0;
            case 0x163E04u: goto label_163e04;
            case 0x163E6Cu: goto label_163e6c;
            case 0x163E70u: goto label_163e70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x163E20u;
    // 0x163e20: 0x27bdffe0
    ctx->pc = 0x163e20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x163e24: 0xffb00000
    ctx->pc = 0x163e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x163e28: 0xffb10008
    ctx->pc = 0x163e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x163e2c: 0x80882d
    ctx->pc = 0x163e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163e30: 0xffb20010
    ctx->pc = 0x163e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x163e34: 0xffbf0018
    ctx->pc = 0x163e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x163e38: 0xc04ad84
    ctx->pc = 0x163E38u;
    SET_GPR_U32(ctx, 31, 0x163E40u);
    ctx->pc = 0x163E3Cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B610u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B610_0x12b610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163E40u; }
    }
    if (ctx->pc != 0x163E40u) { return; }
    ctx->pc = 0x163E40u;
    // 0x163e40: 0x40802d
    ctx->pc = 0x163e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163e44: 0x24020001
    ctx->pc = 0x163e44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x163e48: 0x56020009
    ctx->pc = 0x163E48u;
    {
        const bool branch_taken_0x163e48 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x163e48) {
            ctx->pc = 0x163E4Cu;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x163E70u;
            goto label_163e70;
        }
    }
    ctx->pc = 0x163E50u;
    // 0x163e50: 0xc058fa2
    ctx->pc = 0x163E50u;
    SET_GPR_U32(ctx, 31, 0x163E58u);
    ctx->pc = 0x163E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163E88_0x163e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163E58u; }
    }
    if (ctx->pc != 0x163E58u) { return; }
    ctx->pc = 0x163E58u;
    // 0x163e58: 0x10500004
    ctx->pc = 0x163E58u;
    {
        const bool branch_taken_0x163e58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        ctx->pc = 0x163E5Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x163e58) {
            ctx->pc = 0x163E6Cu;
            goto label_163e6c;
        }
    }
    ctx->pc = 0x163E60u;
    // 0x163e60: 0xc05900e
    ctx->pc = 0x163E60u;
    SET_GPR_U32(ctx, 31, 0x163E68u);
    ctx->pc = 0x164038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00164038_0x164038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163E68u; }
    }
    if (ctx->pc != 0x163E68u) { return; }
    ctx->pc = 0x163E68u;
    // 0x163e68: 0x40902d
    ctx->pc = 0x163e68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163e6c:
    // 0x163e6c: 0x240102d
    ctx->pc = 0x163e6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_163e70:
    // 0x163e70: 0xdfb00000
    ctx->pc = 0x163e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163e74: 0xdfb10008
    ctx->pc = 0x163e74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x163e78: 0xdfb20010
    ctx->pc = 0x163e78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163e7c: 0xdfbf0018
    ctx->pc = 0x163e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x163e80: 0x3e00008
    ctx->pc = 0x163E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163E84u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163D20u: goto label_163d20;
            case 0x163D4Cu: goto label_163d4c;
            case 0x163D88u: goto label_163d88;
            case 0x163DF0u: goto label_163df0;
            case 0x163E04u: goto label_163e04;
            case 0x163E6Cu: goto label_163e6c;
            case 0x163E70u: goto label_163e70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x163E88u;
}
