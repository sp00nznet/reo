#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00148490
// Address: 0x148490 - 0x148608
void sub_00148490_0x148490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x148490u;

    // 0x148490: 0x27bdffa0
    ctx->pc = 0x148490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x148494: 0x2402ffff
    ctx->pc = 0x148494u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x148498: 0xffb30030
    ctx->pc = 0x148498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x14849c: 0xffb20020
    ctx->pc = 0x14849cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1484a0: 0x982d
    ctx->pc = 0x1484a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1484a4: 0xffbf0050
    ctx->pc = 0x1484a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1484a8: 0x80902d
    ctx->pc = 0x1484a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1484ac: 0xffb40040
    ctx->pc = 0x1484acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1484b0: 0xffb10010
    ctx->pc = 0x1484b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1484b4: 0xffb00000
    ctx->pc = 0x1484b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1484b8: 0x8e500040
    ctx->pc = 0x1484b8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1484bc: 0x10c20004
    ctx->pc = 0x1484BCu;
    {
        const bool branch_taken_0x1484bc = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x1484C0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
        if (branch_taken_0x1484bc) {
            ctx->pc = 0x1484D0u;
            goto label_1484d0;
        }
    }
    ctx->pc = 0x1484C4u;
    // 0x1484c4: 0xa6102a
    ctx->pc = 0x1484c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x1484c8: 0x50400003
    ctx->pc = 0x1484C8u;
    {
        const bool branch_taken_0x1484c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1484c8) {
            ctx->pc = 0x1484CCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x1484D8u;
            goto label_1484d8;
        }
    }
    ctx->pc = 0x1484D0u;
label_1484d0:
    // 0x1484d0: 0x24130001
    ctx->pc = 0x1484d0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1484d4: 0x8e020008
    ctx->pc = 0x1484d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1484d8:
    // 0x1484d8: 0x14400004
    ctx->pc = 0x1484D8u;
    {
        const bool branch_taken_0x1484d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1484DCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1484d8) {
            ctx->pc = 0x1484ECu;
            goto label_1484ec;
        }
    }
    ctx->pc = 0x1484E0u;
    // 0x1484e0: 0xae400008
    ctx->pc = 0x1484e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x1484e4: 0x24020001
    ctx->pc = 0x1484e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1484e8: 0xae020008
    ctx->pc = 0x1484e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1484ec:
    // 0x1484ec: 0xc051994
    ctx->pc = 0x1484ECu;
    SET_GPR_U32(ctx, 31, 0x1484F4u);
    ctx->pc = 0x1484F0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x146650u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00146650_0x146650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1484F4u; }
    }
    if (ctx->pc != 0x1484F4u) { return; }
    ctx->pc = 0x1484F4u;
    // 0x1484f4: 0x50400006
    ctx->pc = 0x1484F4u;
    {
        const bool branch_taken_0x1484f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1484f4) {
            ctx->pc = 0x1484F8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4256)));
            ctx->pc = 0x148510u;
            goto label_148510;
        }
    }
    ctx->pc = 0x1484FCu;
    // 0x1484fc: 0x52600004
    ctx->pc = 0x1484FCu;
    {
        const bool branch_taken_0x1484fc = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x1484fc) {
            ctx->pc = 0x148500u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4256)));
            ctx->pc = 0x148510u;
            goto label_148510;
        }
    }
    ctx->pc = 0x148504u;
    // 0x148504: 0xc05193c
    ctx->pc = 0x148504u;
    SET_GPR_U32(ctx, 31, 0x14850Cu);
    ctx->pc = 0x148508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1464F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001464F0_0x1464f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14850Cu; }
    }
    if (ctx->pc != 0x14850Cu) { return; }
    ctx->pc = 0x14850Cu;
    // 0x14850c: 0x8e0210a0
    ctx->pc = 0x14850cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4256)));
label_148510:
    // 0x148510: 0x14400034
    ctx->pc = 0x148510u;
    {
        const bool branch_taken_0x148510 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x148514u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x148510) {
            ctx->pc = 0x1485E4u;
            goto label_1485e4;
        }
    }
    ctx->pc = 0x148518u;
    // 0x148518: 0x24110001
    ctx->pc = 0x148518u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x14851c: 0x200202d
    ctx->pc = 0x14851cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148520: 0xc051710
    ctx->pc = 0x148520u;
    SET_GPR_U32(ctx, 31, 0x148528u);
    ctx->pc = 0x148524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 17));
    ctx->pc = 0x145C40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00145C40_0x145c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148528u; }
    }
    if (ctx->pc != 0x148528u) { return; }
    ctx->pc = 0x148528u;
    // 0x148528: 0x54400006
    ctx->pc = 0x148528u;
    {
        const bool branch_taken_0x148528 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x148528) {
            ctx->pc = 0x14852Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 236)));
            ctx->pc = 0x148544u;
            goto label_148544;
        }
    }
    ctx->pc = 0x148530u;
    // 0x148530: 0xc052182
    ctx->pc = 0x148530u;
    SET_GPR_U32(ctx, 31, 0x148538u);
    ctx->pc = 0x148534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x148608u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00148608_0x148608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148538u; }
    }
    if (ctx->pc != 0x148538u) { return; }
    ctx->pc = 0x148538u;
    // 0x148538: 0xae110000
    ctx->pc = 0x148538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x14853c: 0x10000029
    ctx->pc = 0x14853Cu;
    {
        const bool branch_taken_0x14853c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x148540u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14853c) {
            ctx->pc = 0x1485E4u;
            goto label_1485e4;
        }
    }
    ctx->pc = 0x148544u;
label_148544:
    // 0x148544: 0x24030002
    ctx->pc = 0x148544u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x148548: 0x8e04018c
    ctx->pc = 0x148548u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x14854c: 0x38420001
    ctx->pc = 0x14854cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x148550: 0x222180b
    ctx->pc = 0x148550u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 17));
    // 0x148554: 0x14830023
    ctx->pc = 0x148554u;
    {
        const bool branch_taken_0x148554 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x148558u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x148554) {
            ctx->pc = 0x1485E4u;
            goto label_1485e4;
        }
    }
    ctx->pc = 0x14855Cu;
    // 0x14855c: 0x200202d
    ctx->pc = 0x14855cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148560: 0xc051994
    ctx->pc = 0x148560u;
    SET_GPR_U32(ctx, 31, 0x148568u);
    ctx->pc = 0x148564u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x146650u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00146650_0x146650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148568u; }
    }
    if (ctx->pc != 0x148568u) { return; }
    ctx->pc = 0x148568u;
    // 0x148568: 0x182d
    ctx->pc = 0x148568u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14856c: 0x222180b
    ctx->pc = 0x14856cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 17));
    // 0x148570: 0x10600006
    ctx->pc = 0x148570u;
    {
        const bool branch_taken_0x148570 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x148574u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x148570) {
            ctx->pc = 0x14858Cu;
            goto label_14858c;
        }
    }
    ctx->pc = 0x148578u;
    // 0x148578: 0x52600005
    ctx->pc = 0x148578u;
    {
        const bool branch_taken_0x148578 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x148578) {
            ctx->pc = 0x14857Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4256)));
            ctx->pc = 0x148590u;
            goto label_148590;
        }
    }
    ctx->pc = 0x148580u;
    // 0x148580: 0xc05193c
    ctx->pc = 0x148580u;
    SET_GPR_U32(ctx, 31, 0x148588u);
    ctx->pc = 0x148584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1464F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001464F0_0x1464f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148588u; }
    }
    if (ctx->pc != 0x148588u) { return; }
    ctx->pc = 0x148588u;
    // 0x148588: 0x222a00b
    ctx->pc = 0x148588u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 17));
label_14858c:
    // 0x14858c: 0x8e0210a0
    ctx->pc = 0x14858cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4256)));
label_148590:
    // 0x148590: 0x14400014
    ctx->pc = 0x148590u;
    {
        const bool branch_taken_0x148590 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x148594u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x148590) {
            ctx->pc = 0x1485E4u;
            goto label_1485e4;
        }
    }
    ctx->pc = 0x148598u;
    // 0x148598: 0x8e050130
    ctx->pc = 0x148598u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x14859c: 0x200202d
    ctx->pc = 0x14859cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1485a0: 0xc051970
    ctx->pc = 0x1485A0u;
    SET_GPR_U32(ctx, 31, 0x1485A8u);
    ctx->pc = 0x1485A4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x1465C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001465C0_0x1465c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1485A8u; }
    }
    if (ctx->pc != 0x1485A8u) { return; }
    ctx->pc = 0x1485A8u;
    // 0x1485a8: 0x8e020130
    ctx->pc = 0x1485a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1485ac: 0x8e0300c4
    ctx->pc = 0x1485acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1485b0: 0xae000138
    ctx->pc = 0x1485b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
    // 0x1485b4: 0x431023
    ctx->pc = 0x1485b4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1485b8: 0xae420008
    ctx->pc = 0x1485b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1485bc: 0x8e030130
    ctx->pc = 0x1485bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1485c0: 0x8e020004
    ctx->pc = 0x1485c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1485c4: 0x24630001
    ctx->pc = 0x1485c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1485c8: 0x24420001
    ctx->pc = 0x1485c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1485cc: 0xae030130
    ctx->pc = 0x1485ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 3));
    // 0x1485d0: 0x16600003
    ctx->pc = 0x1485D0u;
    {
        const bool branch_taken_0x1485d0 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x1485D4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x1485d0) {
            ctx->pc = 0x1485E0u;
            goto label_1485e0;
        }
    }
    ctx->pc = 0x1485D8u;
    // 0x1485d8: 0xc051ff8
    ctx->pc = 0x1485D8u;
    SET_GPR_U32(ctx, 31, 0x1485E0u);
    ctx->pc = 0x1485DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x147FE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00147FE0_0x147fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1485E0u; }
    }
    if (ctx->pc != 0x1485E0u) { return; }
    ctx->pc = 0x1485E0u;
label_1485e0:
    // 0x1485e0: 0x280102d
    ctx->pc = 0x1485e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1485e4:
    // 0x1485e4: 0xdfbf0050
    ctx->pc = 0x1485e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1485e8: 0xdfb40040
    ctx->pc = 0x1485e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1485ec: 0xdfb30030
    ctx->pc = 0x1485ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1485f0: 0xdfb20020
    ctx->pc = 0x1485f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1485f4: 0xdfb10010
    ctx->pc = 0x1485f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1485f8: 0xdfb00000
    ctx->pc = 0x1485f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1485fc: 0x3e00008
    ctx->pc = 0x1485FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148600u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1484D0u: goto label_1484d0;
            case 0x1484D8u: goto label_1484d8;
            case 0x1484ECu: goto label_1484ec;
            case 0x148510u: goto label_148510;
            case 0x148544u: goto label_148544;
            case 0x14858Cu: goto label_14858c;
            case 0x148590u: goto label_148590;
            case 0x1485E0u: goto label_1485e0;
            case 0x1485E4u: goto label_1485e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x148604u;
    // 0x148604: 0x0
    ctx->pc = 0x148604u;
    // NOP
}
