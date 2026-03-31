#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001748C0
// Address: 0x1748c0 - 0x174a28
void sub_001748C0_0x1748c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1748c0u;

    // 0x1748c0: 0x27bdffb0
    ctx->pc = 0x1748c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1748c4: 0xffb10018
    ctx->pc = 0x1748c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1748c8: 0xffb20020
    ctx->pc = 0x1748c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1748cc: 0xffb30028
    ctx->pc = 0x1748ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1748d0: 0xffb40030
    ctx->pc = 0x1748d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1748d4: 0xffb50038
    ctx->pc = 0x1748d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1748d8: 0x80a82d
    ctx->pc = 0x1748d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1748dc: 0xffb00010
    ctx->pc = 0x1748dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1748e0: 0xffbf0040
    ctx->pc = 0x1748e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1748e4: 0x8eb02ab0
    ctx->pc = 0x1748e4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 21), 10928)));
    // 0x1748e8: 0x8e020000
    ctx->pc = 0x1748e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1748ec: 0x2613000c
    ctx->pc = 0x1748ecu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 16), 12));
    // 0x1748f0: 0x261408a0
    ctx->pc = 0x1748f0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 16), 2208));
    // 0x1748f4: 0x26110ac4
    ctx->pc = 0x1748f4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 2756));
    // 0x1748f8: 0x14400041
    ctx->pc = 0x1748F8u;
    {
        const bool branch_taken_0x1748f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1748FCu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 3324));
        if (branch_taken_0x1748f8) {
            ctx->pc = 0x174A00u;
            goto label_174a00;
        }
    }
    ctx->pc = 0x174900u;
    // 0x174900: 0x240282d
    ctx->pc = 0x174900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174904: 0xc05d28a
    ctx->pc = 0x174904u;
    SET_GPR_U32(ctx, 31, 0x17490Cu);
    ctx->pc = 0x174908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174A28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00174A28_0x174a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17490Cu; }
    }
    if (ctx->pc != 0x17490Cu) { return; }
    ctx->pc = 0x17490Cu;
    // 0x17490c: 0x5440003d
    ctx->pc = 0x17490Cu;
    {
        const bool branch_taken_0x17490c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17490c) {
            ctx->pc = 0x174910u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x174A04u;
            goto label_174a04;
        }
    }
    ctx->pc = 0x174914u;
    // 0x174914: 0x2a0202d
    ctx->pc = 0x174914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174918: 0x220282d
    ctx->pc = 0x174918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17491c: 0xc05d2aa
    ctx->pc = 0x17491Cu;
    SET_GPR_U32(ctx, 31, 0x174924u);
    ctx->pc = 0x174920u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x174AA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00174AA8_0x174aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174924u; }
    }
    if (ctx->pc != 0x174924u) { return; }
    ctx->pc = 0x174924u;
    // 0x174924: 0x54400037
    ctx->pc = 0x174924u;
    {
        const bool branch_taken_0x174924 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x174924) {
            ctx->pc = 0x174928u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x174A04u;
            goto label_174a04;
        }
    }
    ctx->pc = 0x17492Cu;
    // 0x17492c: 0xc05d2ca
    ctx->pc = 0x17492Cu;
    SET_GPR_U32(ctx, 31, 0x174934u);
    ctx->pc = 0x174930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00174B28_0x174b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174934u; }
    }
    if (ctx->pc != 0x174934u) { return; }
    ctx->pc = 0x174934u;
    // 0x174934: 0x10400022
    ctx->pc = 0x174934u;
    {
        const bool branch_taken_0x174934 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x174938u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x174934) {
            ctx->pc = 0x1749C0u;
            goto label_1749c0;
        }
    }
    ctx->pc = 0x17493Cu;
    // 0x17493c: 0xae820000
    ctx->pc = 0x17493cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x174940: 0x8e630000
    ctx->pc = 0x174940u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x174944: 0x5060001b
    ctx->pc = 0x174944u;
    {
        const bool branch_taken_0x174944 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x174944) {
            ctx->pc = 0x174948u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->pc = 0x1749B4u;
            goto label_1749b4;
        }
    }
    ctx->pc = 0x17494Cu;
    // 0x17494c: 0x8e62000c
    ctx->pc = 0x17494cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x174950: 0x1840000b
    ctx->pc = 0x174950u;
    {
        const bool branch_taken_0x174950 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x174950) {
            ctx->pc = 0x174980u;
            goto label_174980;
        }
    }
    ctx->pc = 0x174958u;
    // 0x174958: 0x8e040db0
    ctx->pc = 0x174958u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 3504)));
    // 0x17495c: 0x18800005
    ctx->pc = 0x17495Cu;
    {
        const bool branch_taken_0x17495c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x174960u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 52)));
        if (branch_taken_0x17495c) {
            ctx->pc = 0x174974u;
            goto label_174974;
        }
    }
    ctx->pc = 0x174964u;
    // 0x174964: 0x58c00013
    ctx->pc = 0x174964u;
    {
        const bool branch_taken_0x174964 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x174964) {
            ctx->pc = 0x174968u;
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x1749B4u;
            goto label_1749b4;
        }
    }
    ctx->pc = 0x17496Cu;
    // 0x17496c: 0xc056ea0
    ctx->pc = 0x17496Cu;
    SET_GPR_U32(ctx, 31, 0x174974u);
    ctx->pc = 0x174970u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1000));
    ctx->pc = 0x15BA80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BA80_0x15ba80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174974u; }
    }
    if (ctx->pc != 0x174974u) { return; }
    ctx->pc = 0x174974u;
label_174974:
    // 0x174974: 0x1000000f
    ctx->pc = 0x174974u;
    {
        const bool branch_taken_0x174974 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x174978u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174974) {
            ctx->pc = 0x1749B4u;
            goto label_1749b4;
        }
    }
    ctx->pc = 0x17497Cu;
    // 0x17497c: 0x0
    ctx->pc = 0x17497cu;
    // NOP
label_174980:
    // 0x174980: 0xc05a660
    ctx->pc = 0x174980u;
    SET_GPR_U32(ctx, 31, 0x174988u);
    ctx->pc = 0x174984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169980u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169980_0x169980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174988u; }
    }
    if (ctx->pc != 0x174988u) { return; }
    ctx->pc = 0x174988u;
    // 0x174988: 0x2842006c
    ctx->pc = 0x174988u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 108));
    // 0x17498c: 0x50400009
    ctx->pc = 0x17498Cu;
    {
        const bool branch_taken_0x17498c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17498c) {
            ctx->pc = 0x174990u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->pc = 0x1749B4u;
            goto label_1749b4;
        }
    }
    ctx->pc = 0x174994u;
    // 0x174994: 0x8e820004
    ctx->pc = 0x174994u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x174998: 0x240307e2
    ctx->pc = 0x174998u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2018));
    // 0x17499c: 0x50600001
    ctx->pc = 0x17499Cu;
    {
        const bool branch_taken_0x17499c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x17499c) {
            ctx->pc = 0x1749A0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1749A4u;
            goto label_1749a4;
        }
    }
    ctx->pc = 0x1749A4u;
label_1749a4:
    // 0x1749a4: 0x212c0
    ctx->pc = 0x1749a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
    // 0x1749a8: 0x43001a
    ctx->pc = 0x1749a8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1749ac: 0x1012
    ctx->pc = 0x1749acu;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x1749b0: 0x40282d
    ctx->pc = 0x1749b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1749b4:
    // 0x1749b4: 0x1000000c
    ctx->pc = 0x1749B4u;
    {
        const bool branch_taken_0x1749b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1749B8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 8)));
        if (branch_taken_0x1749b4) {
            ctx->pc = 0x1749E8u;
            goto label_1749e8;
        }
    }
    ctx->pc = 0x1749BCu;
    // 0x1749bc: 0x0
    ctx->pc = 0x1749bcu;
    // NOP
label_1749c0:
    // 0x1749c0: 0x8fa20004
    ctx->pc = 0x1749c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1749c4: 0x10400004
    ctx->pc = 0x1749C4u;
    {
        const bool branch_taken_0x1749c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1749C8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1749c4) {
            ctx->pc = 0x1749D8u;
            goto label_1749d8;
        }
    }
    ctx->pc = 0x1749CCu;
    // 0x1749cc: 0x8e230008
    ctx->pc = 0x1749ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1749d0: 0x10000005
    ctx->pc = 0x1749D0u;
    {
        const bool branch_taken_0x1749d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1749D4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        if (branch_taken_0x1749d0) {
            ctx->pc = 0x1749E8u;
            goto label_1749e8;
        }
    }
    ctx->pc = 0x1749D8u;
label_1749d8:
    // 0x1749d8: 0x5040000a
    ctx->pc = 0x1749D8u;
    {
        const bool branch_taken_0x1749d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1749d8) {
            ctx->pc = 0x1749DCu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x174A04u;
            goto label_174a04;
        }
    }
    ctx->pc = 0x1749E0u;
    // 0x1749e0: 0x8e430008
    ctx->pc = 0x1749e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1749e4: 0x8e450004
    ctx->pc = 0x1749e4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1749e8:
    // 0x1749e8: 0x24020001
    ctx->pc = 0x1749e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1749ec: 0xae050004
    ctx->pc = 0x1749ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x1749f0: 0xae020000
    ctx->pc = 0x1749f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1749f4: 0x2a0202d
    ctx->pc = 0x1749f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1749f8: 0xc05d496
    ctx->pc = 0x1749F8u;
    SET_GPR_U32(ctx, 31, 0x174A00u);
    ctx->pc = 0x1749FCu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x175258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175258_0x175258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A00u; }
    }
    if (ctx->pc != 0x174A00u) { return; }
    ctx->pc = 0x174A00u;
label_174a00:
    // 0x174a00: 0xdfb00010
    ctx->pc = 0x174a00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_174a04:
    // 0x174a04: 0xdfb10018
    ctx->pc = 0x174a04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174a08: 0xdfb20020
    ctx->pc = 0x174a08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174a0c: 0xdfb30028
    ctx->pc = 0x174a0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x174a10: 0xdfb40030
    ctx->pc = 0x174a10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174a14: 0xdfb50038
    ctx->pc = 0x174a14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x174a18: 0xdfbf0040
    ctx->pc = 0x174a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174a1c: 0x3e00008
    ctx->pc = 0x174A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174A20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174974u: goto label_174974;
            case 0x174980u: goto label_174980;
            case 0x1749A4u: goto label_1749a4;
            case 0x1749B4u: goto label_1749b4;
            case 0x1749C0u: goto label_1749c0;
            case 0x1749D8u: goto label_1749d8;
            case 0x1749E8u: goto label_1749e8;
            case 0x174A00u: goto label_174a00;
            case 0x174A04u: goto label_174a04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174A24u;
    // 0x174a24: 0x0
    ctx->pc = 0x174a24u;
    // NOP
}
