#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_125698
// Address: 0x125698 - 0x125768
void entry_125698_0x125768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125698u;

label_125698:
    // 0x125698: 0x27bdffe0
    ctx->pc = 0x125698u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_12569c:
    // 0x12569c: 0x24020001
    ctx->pc = 0x12569cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1256a0:
    // 0x1256a0: 0xffb00000
    ctx->pc = 0x1256a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1256a4:
    // 0x1256a4: 0x80802d
    ctx->pc = 0x1256a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1256a8:
    // 0x1256a8: 0xffb10008
    ctx->pc = 0x1256a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1256ac:
    // 0x1256ac: 0xffbf0010
    ctx->pc = 0x1256acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1256b0:
    // 0x1256b0: 0x8e030004
    ctx->pc = 0x1256b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1256b4:
    // 0x1256b4: 0x54620012
label_1256b8:
    if (ctx->pc == 0x1256B8u) {
        ctx->pc = 0x1256B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1256BCu;
        goto label_1256bc;
    }
    ctx->pc = 0x1256B4u;
    {
        const bool branch_taken_0x1256b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1256b4) {
            ctx->pc = 0x1256B8u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x125700u;
            goto label_125700;
        }
    }
    ctx->pc = 0x1256BCu;
label_1256bc:
    // 0x1256bc: 0xc04d3e6
label_1256c0:
    if (ctx->pc == 0x1256C0u) {
        ctx->pc = 0x1256C0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1256C4u;
        goto label_1256c4;
    }
    ctx->pc = 0x1256BCu;
    SET_GPR_U32(ctx, 31, 0x1256C4u);
    ctx->pc = 0x1256C0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x134F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134F98_0x134f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1256C4u; }
    }
    if (ctx->pc != 0x1256C4u) { return; }
    ctx->pc = 0x1256C4u;
label_1256c4:
    // 0x1256c4: 0x26050068
    ctx->pc = 0x1256c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 104));
label_1256c8:
    // 0x1256c8: 0x2606006c
    ctx->pc = 0x1256c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 108));
label_1256cc:
    // 0x1256cc: 0x1440000a
label_1256d0:
    if (ctx->pc == 0x1256D0u) {
        ctx->pc = 0x1256D0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x1256D4u;
        goto label_1256d4;
    }
    ctx->pc = 0x1256CCu;
    {
        const bool branch_taken_0x1256cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1256D0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        if (branch_taken_0x1256cc) {
            ctx->pc = 0x1256F8u;
            goto label_1256f8;
        }
    }
    ctx->pc = 0x1256D4u;
label_1256d4:
    // 0x1256d4: 0x8e020078
    ctx->pc = 0x1256d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1256d8:
    // 0x1256d8: 0x40f809
label_1256dc:
    if (ctx->pc == 0x1256DCu) {
        ctx->pc = 0x1256DCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->pc = 0x1256E0u;
        goto label_1256e0;
    }
    ctx->pc = 0x1256D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1256E0u);
        ctx->pc = 0x1256DCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125698u: goto label_125698;
            case 0x12569Cu: goto label_12569c;
            case 0x1256A0u: goto label_1256a0;
            case 0x1256A4u: goto label_1256a4;
            case 0x1256A8u: goto label_1256a8;
            case 0x1256ACu: goto label_1256ac;
            case 0x1256B0u: goto label_1256b0;
            case 0x1256B4u: goto label_1256b4;
            case 0x1256B8u: goto label_1256b8;
            case 0x1256BCu: goto label_1256bc;
            case 0x1256C0u: goto label_1256c0;
            case 0x1256C4u: goto label_1256c4;
            case 0x1256C8u: goto label_1256c8;
            case 0x1256CCu: goto label_1256cc;
            case 0x1256D0u: goto label_1256d0;
            case 0x1256D4u: goto label_1256d4;
            case 0x1256D8u: goto label_1256d8;
            case 0x1256DCu: goto label_1256dc;
            case 0x1256E0u: goto label_1256e0;
            case 0x1256E4u: goto label_1256e4;
            case 0x1256E8u: goto label_1256e8;
            case 0x1256ECu: goto label_1256ec;
            case 0x1256F0u: goto label_1256f0;
            case 0x1256F4u: goto label_1256f4;
            case 0x1256F8u: goto label_1256f8;
            case 0x1256FCu: goto label_1256fc;
            case 0x125700u: goto label_125700;
            case 0x125704u: goto label_125704;
            case 0x125708u: goto label_125708;
            case 0x12570Cu: goto label_12570c;
            case 0x125710u: goto label_125710;
            case 0x125714u: goto label_125714;
            case 0x125718u: goto label_125718;
            case 0x12571Cu: goto label_12571c;
            case 0x125720u: goto label_125720;
            case 0x125724u: goto label_125724;
            case 0x125728u: goto label_125728;
            case 0x12572Cu: goto label_12572c;
            case 0x125730u: goto label_125730;
            case 0x125734u: goto label_125734;
            case 0x125738u: goto label_125738;
            case 0x12573Cu: goto label_12573c;
            case 0x125740u: goto label_125740;
            case 0x125744u: goto label_125744;
            case 0x125748u: goto label_125748;
            case 0x12574Cu: goto label_12574c;
            case 0x125750u: goto label_125750;
            case 0x125754u: goto label_125754;
            case 0x125758u: goto label_125758;
            case 0x12575Cu: goto label_12575c;
            case 0x125760u: goto label_125760;
            case 0x125764u: goto label_125764;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1256E0u; }
            if (ctx->pc != 0x1256E0u) { return; }
        }
    }
    ctx->pc = 0x1256E0u;
label_1256e0:
    // 0x1256e0: 0xc0494dc
label_1256e4:
    if (ctx->pc == 0x1256E4u) {
        ctx->pc = 0x1256E4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1256E8u;
        goto label_1256e8;
    }
    ctx->pc = 0x1256E0u;
    SET_GPR_U32(ctx, 31, 0x1256E8u);
    ctx->pc = 0x1256E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x125370u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00125370_0x125370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1256E8u; }
    }
    if (ctx->pc != 0x1256E8u) { return; }
    ctx->pc = 0x1256E8u;
label_1256e8:
    // 0x1256e8: 0x24020002
    ctx->pc = 0x1256e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1256ec:
    // 0x1256ec: 0xae020004
    ctx->pc = 0x1256ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1256f0:
    // 0x1256f0: 0x10000003
label_1256f4:
    if (ctx->pc == 0x1256F4u) {
        ctx->pc = 0x1256F4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1256F8u;
        goto label_1256f8;
    }
    ctx->pc = 0x1256F0u;
    {
        const bool branch_taken_0x1256f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1256F4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1256f0) {
            ctx->pc = 0x125700u;
            goto label_125700;
        }
    }
    ctx->pc = 0x1256F8u;
label_1256f8:
    // 0x1256f8: 0x8e030004
    ctx->pc = 0x1256f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1256fc:
    // 0x1256fc: 0x24020002
    ctx->pc = 0x1256fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_125700:
    // 0x125700: 0x54620014
label_125704:
    if (ctx->pc == 0x125704u) {
        ctx->pc = 0x125704u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x125708u;
        goto label_125708;
    }
    ctx->pc = 0x125700u;
    {
        const bool branch_taken_0x125700 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x125700) {
            ctx->pc = 0x125704u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x125754u;
            goto label_125754;
        }
    }
    ctx->pc = 0x125708u;
label_125708:
    // 0x125708: 0xc04d41e
label_12570c:
    if (ctx->pc == 0x12570Cu) {
        ctx->pc = 0x12570Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x125710u;
        goto label_125710;
    }
    ctx->pc = 0x125708u;
    SET_GPR_U32(ctx, 31, 0x125710u);
    ctx->pc = 0x12570Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x135078u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135078_0x135078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125710u; }
    }
    if (ctx->pc != 0x125710u) { return; }
    ctx->pc = 0x125710u;
label_125710:
    // 0x125710: 0xc04d3e6
label_125714:
    if (ctx->pc == 0x125714u) {
        ctx->pc = 0x125714u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x125718u;
        goto label_125718;
    }
    ctx->pc = 0x125710u;
    SET_GPR_U32(ctx, 31, 0x125718u);
    ctx->pc = 0x125714u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x134F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134F98_0x134f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125718u; }
    }
    if (ctx->pc != 0x125718u) { return; }
    ctx->pc = 0x125718u;
label_125718:
    // 0x125718: 0x40882d
    ctx->pc = 0x125718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12571c:
    // 0x12571c: 0x24020003
    ctx->pc = 0x12571cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_125720:
    // 0x125720: 0x1622000b
label_125724:
    if (ctx->pc == 0x125724u) {
        ctx->pc = 0x125724u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125728u;
        goto label_125728;
    }
    ctx->pc = 0x125720u;
    {
        const bool branch_taken_0x125720 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x125724u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x125720) {
            ctx->pc = 0x125750u;
            goto label_125750;
        }
    }
    ctx->pc = 0x125728u;
label_125728:
    // 0x125728: 0xc049546
label_12572c:
    if (ctx->pc == 0x12572Cu) {
        ctx->pc = 0x125730u;
        goto label_125730;
    }
    ctx->pc = 0x125728u;
    SET_GPR_U32(ctx, 31, 0x125730u);
    ctx->pc = 0x125518u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00125518_0x125518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125730u; }
    }
    if (ctx->pc != 0x125730u) { return; }
    ctx->pc = 0x125730u;
label_125730:
    // 0x125730: 0xc04d412
label_125734:
    if (ctx->pc == 0x125734u) {
        ctx->pc = 0x125734u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x125738u;
        goto label_125738;
    }
    ctx->pc = 0x125730u;
    SET_GPR_U32(ctx, 31, 0x125738u);
    ctx->pc = 0x125734u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x135048u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135048_0x135048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125738u; }
    }
    if (ctx->pc != 0x125738u) { return; }
    ctx->pc = 0x125738u;
label_125738:
    // 0x125738: 0x8e020080
    ctx->pc = 0x125738u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_12573c:
    // 0x12573c: 0x8e040084
    ctx->pc = 0x12573cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_125740:
    // 0x125740: 0x8e050094
    ctx->pc = 0x125740u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_125744:
    // 0x125744: 0x40f809
label_125748:
    if (ctx->pc == 0x125748u) {
        ctx->pc = 0x125748u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x12574Cu;
        goto label_12574c;
    }
    ctx->pc = 0x125744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12574Cu);
        ctx->pc = 0x125748u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125698u: goto label_125698;
            case 0x12569Cu: goto label_12569c;
            case 0x1256A0u: goto label_1256a0;
            case 0x1256A4u: goto label_1256a4;
            case 0x1256A8u: goto label_1256a8;
            case 0x1256ACu: goto label_1256ac;
            case 0x1256B0u: goto label_1256b0;
            case 0x1256B4u: goto label_1256b4;
            case 0x1256B8u: goto label_1256b8;
            case 0x1256BCu: goto label_1256bc;
            case 0x1256C0u: goto label_1256c0;
            case 0x1256C4u: goto label_1256c4;
            case 0x1256C8u: goto label_1256c8;
            case 0x1256CCu: goto label_1256cc;
            case 0x1256D0u: goto label_1256d0;
            case 0x1256D4u: goto label_1256d4;
            case 0x1256D8u: goto label_1256d8;
            case 0x1256DCu: goto label_1256dc;
            case 0x1256E0u: goto label_1256e0;
            case 0x1256E4u: goto label_1256e4;
            case 0x1256E8u: goto label_1256e8;
            case 0x1256ECu: goto label_1256ec;
            case 0x1256F0u: goto label_1256f0;
            case 0x1256F4u: goto label_1256f4;
            case 0x1256F8u: goto label_1256f8;
            case 0x1256FCu: goto label_1256fc;
            case 0x125700u: goto label_125700;
            case 0x125704u: goto label_125704;
            case 0x125708u: goto label_125708;
            case 0x12570Cu: goto label_12570c;
            case 0x125710u: goto label_125710;
            case 0x125714u: goto label_125714;
            case 0x125718u: goto label_125718;
            case 0x12571Cu: goto label_12571c;
            case 0x125720u: goto label_125720;
            case 0x125724u: goto label_125724;
            case 0x125728u: goto label_125728;
            case 0x12572Cu: goto label_12572c;
            case 0x125730u: goto label_125730;
            case 0x125734u: goto label_125734;
            case 0x125738u: goto label_125738;
            case 0x12573Cu: goto label_12573c;
            case 0x125740u: goto label_125740;
            case 0x125744u: goto label_125744;
            case 0x125748u: goto label_125748;
            case 0x12574Cu: goto label_12574c;
            case 0x125750u: goto label_125750;
            case 0x125754u: goto label_125754;
            case 0x125758u: goto label_125758;
            case 0x12575Cu: goto label_12575c;
            case 0x125760u: goto label_125760;
            case 0x125764u: goto label_125764;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12574Cu; }
            if (ctx->pc != 0x12574Cu) { return; }
        }
    }
    ctx->pc = 0x12574Cu;
label_12574c:
    // 0x12574c: 0xae110004
    ctx->pc = 0x12574cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_125750:
    // 0x125750: 0xdfb00000
    ctx->pc = 0x125750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_125754:
    // 0x125754: 0xdfb10008
    ctx->pc = 0x125754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_125758:
    // 0x125758: 0xdfbf0010
    ctx->pc = 0x125758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12575c:
    // 0x12575c: 0x3e00008
label_125760:
    if (ctx->pc == 0x125760u) {
        ctx->pc = 0x125760u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x125764u;
        goto label_125764;
    }
    ctx->pc = 0x12575Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125760u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125698u: goto label_125698;
            case 0x12569Cu: goto label_12569c;
            case 0x1256A0u: goto label_1256a0;
            case 0x1256A4u: goto label_1256a4;
            case 0x1256A8u: goto label_1256a8;
            case 0x1256ACu: goto label_1256ac;
            case 0x1256B0u: goto label_1256b0;
            case 0x1256B4u: goto label_1256b4;
            case 0x1256B8u: goto label_1256b8;
            case 0x1256BCu: goto label_1256bc;
            case 0x1256C0u: goto label_1256c0;
            case 0x1256C4u: goto label_1256c4;
            case 0x1256C8u: goto label_1256c8;
            case 0x1256CCu: goto label_1256cc;
            case 0x1256D0u: goto label_1256d0;
            case 0x1256D4u: goto label_1256d4;
            case 0x1256D8u: goto label_1256d8;
            case 0x1256DCu: goto label_1256dc;
            case 0x1256E0u: goto label_1256e0;
            case 0x1256E4u: goto label_1256e4;
            case 0x1256E8u: goto label_1256e8;
            case 0x1256ECu: goto label_1256ec;
            case 0x1256F0u: goto label_1256f0;
            case 0x1256F4u: goto label_1256f4;
            case 0x1256F8u: goto label_1256f8;
            case 0x1256FCu: goto label_1256fc;
            case 0x125700u: goto label_125700;
            case 0x125704u: goto label_125704;
            case 0x125708u: goto label_125708;
            case 0x12570Cu: goto label_12570c;
            case 0x125710u: goto label_125710;
            case 0x125714u: goto label_125714;
            case 0x125718u: goto label_125718;
            case 0x12571Cu: goto label_12571c;
            case 0x125720u: goto label_125720;
            case 0x125724u: goto label_125724;
            case 0x125728u: goto label_125728;
            case 0x12572Cu: goto label_12572c;
            case 0x125730u: goto label_125730;
            case 0x125734u: goto label_125734;
            case 0x125738u: goto label_125738;
            case 0x12573Cu: goto label_12573c;
            case 0x125740u: goto label_125740;
            case 0x125744u: goto label_125744;
            case 0x125748u: goto label_125748;
            case 0x12574Cu: goto label_12574c;
            case 0x125750u: goto label_125750;
            case 0x125754u: goto label_125754;
            case 0x125758u: goto label_125758;
            case 0x12575Cu: goto label_12575c;
            case 0x125760u: goto label_125760;
            case 0x125764u: goto label_125764;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125764u;
label_125764:
    // 0x125764: 0x0
    ctx->pc = 0x125764u;
    // NOP
}
