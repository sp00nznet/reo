#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00144748
// Address: 0x144748 - 0x144948
void sub_00144748_0x144748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x144748u;

    // 0x144748: 0x27bdff50
    ctx->pc = 0x144748u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x14474c: 0xffb30090
    ctx->pc = 0x14474cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x144750: 0x27a60040
    ctx->pc = 0x144750u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 64));
    // 0x144754: 0xffb00060
    ctx->pc = 0x144754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x144758: 0xa0982d
    ctx->pc = 0x144758u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14475c: 0x80802d
    ctx->pc = 0x14475cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144760: 0xafa00040
    ctx->pc = 0x144760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x144764: 0xafa00044
    ctx->pc = 0x144764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x144768: 0x27a70044
    ctx->pc = 0x144768u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 68));
    // 0x14476c: 0x3a0402d
    ctx->pc = 0x14476cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144770: 0xffbf00a0
    ctx->pc = 0x144770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x144774: 0xffb20080
    ctx->pc = 0x144774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x144778: 0xc051186
    ctx->pc = 0x144778u;
    SET_GPR_U32(ctx, 31, 0x144780u);
    ctx->pc = 0x14477Cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    ctx->pc = 0x144618u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00144618_0x144618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144780u; }
    }
    if (ctx->pc != 0x144780u) { return; }
    ctx->pc = 0x144780u;
    // 0x144780: 0x1440006a
    ctx->pc = 0x144780u;
    {
        const bool branch_taken_0x144780 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x144784u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x144780) {
            ctx->pc = 0x14492Cu;
            goto label_14492c;
        }
    }
    ctx->pc = 0x144788u;
    // 0x144788: 0xae000134
    ctx->pc = 0x144788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    // 0x14478c: 0x0
    ctx->pc = 0x14478cu;
    // NOP
label_144790:
    // 0x144790: 0x8fa20040
    ctx->pc = 0x144790u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144794: 0x53102a
    ctx->pc = 0x144794u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 19)));
    // 0x144798: 0x54400003
    ctx->pc = 0x144798u;
    {
        const bool branch_taken_0x144798 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x144798) {
            ctx->pc = 0x14479Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2088)));
            ctx->pc = 0x1447A8u;
            goto label_1447a8;
        }
    }
    ctx->pc = 0x1447A0u;
    // 0x1447a0: 0x10000061
    ctx->pc = 0x1447A0u;
    {
        const bool branch_taken_0x1447a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1447A4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1447a0) {
            ctx->pc = 0x144928u;
            goto label_144928;
        }
    }
    ctx->pc = 0x1447A8u;
label_1447a8:
    // 0x1447a8: 0x24030140
    ctx->pc = 0x1447a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 320));
    // 0x1447ac: 0x200202d
    ctx->pc = 0x1447acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1447b0: 0x432818
    ctx->pc = 0x1447b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x1447b4: 0xb01021
    ctx->pc = 0x1447b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1447b8: 0xc050fec
    ctx->pc = 0x1447B8u;
    SET_GPR_U32(ctx, 31, 0x1447C0u);
    ctx->pc = 0x1447BCu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1764), GPR_U32(ctx, 0));
    ctx->pc = 0x143FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00143FB0_0x143fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1447C0u; }
    }
    if (ctx->pc != 0x1447C0u) { return; }
    ctx->pc = 0x1447C0u;
    // 0x1447c0: 0x54400006
    ctx->pc = 0x1447C0u;
    {
        const bool branch_taken_0x1447c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1447c0) {
            ctx->pc = 0x1447C4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 68)));
            ctx->pc = 0x1447DCu;
            goto label_1447dc;
        }
    }
    ctx->pc = 0x1447C8u;
    // 0x1447c8: 0x8e0410a0
    ctx->pc = 0x1447c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4256)));
    // 0x1447cc: 0x24030004
    ctx->pc = 0x1447ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1447d0: 0x24020002
    ctx->pc = 0x1447d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1447d4: 0x10000054
    ctx->pc = 0x1447D4u;
    {
        const bool branch_taken_0x1447d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1447D8u;
        if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
        if (branch_taken_0x1447d4) {
            ctx->pc = 0x144928u;
            goto label_144928;
        }
    }
    ctx->pc = 0x1447DCu;
label_1447dc:
    // 0x1447dc: 0x14400012
    ctx->pc = 0x1447DCu;
    {
        const bool branch_taken_0x1447dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1447E0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x1447dc) {
            ctx->pc = 0x144828u;
            goto label_144828;
        }
    }
    ctx->pc = 0x1447E4u;
    // 0x1447e4: 0x200202d
    ctx->pc = 0x1447e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1447e8: 0xc0515ee
    ctx->pc = 0x1447E8u;
    SET_GPR_U32(ctx, 31, 0x1447F0u);
    ctx->pc = 0x1447ECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 23));
    ctx->pc = 0x1457B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001457B8_0x1457b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1447F0u; }
    }
    if (ctx->pc != 0x1447F0u) { return; }
    ctx->pc = 0x1447F0u;
    // 0x1447f0: 0x50400005
    ctx->pc = 0x1447F0u;
    {
        const bool branch_taken_0x1447f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1447f0) {
            ctx->pc = 0x1447F4u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
            ctx->pc = 0x144808u;
            goto label_144808;
        }
    }
    ctx->pc = 0x1447F8u;
    // 0x1447f8: 0x8e020134
    ctx->pc = 0x1447f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x1447fc: 0x10400004
    ctx->pc = 0x1447FCu;
    {
        const bool branch_taken_0x1447fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1447fc) {
            ctx->pc = 0x144810u;
            goto label_144810;
        }
    }
    ctx->pc = 0x144804u;
    // 0x144804: 0xae000134
    ctx->pc = 0x144804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
label_144808:
    // 0x144808: 0x10000047
    ctx->pc = 0x144808u;
    {
        const bool branch_taken_0x144808 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14480Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x144808) {
            ctx->pc = 0x144928u;
            goto label_144928;
        }
    }
    ctx->pc = 0x144810u;
label_144810:
    // 0x144810: 0xc0510fc
    ctx->pc = 0x144810u;
    SET_GPR_U32(ctx, 31, 0x144818u);
    ctx->pc = 0x144814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1443F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001443F0_0x1443f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144818u; }
    }
    if (ctx->pc != 0x144818u) { return; }
    ctx->pc = 0x144818u;
    // 0x144818: 0x8e030134
    ctx->pc = 0x144818u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x14481c: 0x14600019
    ctx->pc = 0x14481Cu;
    {
        const bool branch_taken_0x14481c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x144820u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        if (branch_taken_0x14481c) {
            ctx->pc = 0x144884u;
            goto label_144884;
        }
    }
    ctx->pc = 0x144824u;
    // 0x144824: 0x8fa20040
    ctx->pc = 0x144824u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_144828:
    // 0x144828: 0x53102a
    ctx->pc = 0x144828u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 19)));
    // 0x14482c: 0x14400007
    ctx->pc = 0x14482Cu;
    {
        const bool branch_taken_0x14482c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x144830u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 68)));
        if (branch_taken_0x14482c) {
            ctx->pc = 0x14484Cu;
            goto label_14484c;
        }
    }
    ctx->pc = 0x144834u;
    // 0x144834: 0x3c050024
    ctx->pc = 0x144834u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x144838: 0x200202d
    ctx->pc = 0x144838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14483c: 0xc05221c
    ctx->pc = 0x14483Cu;
    SET_GPR_U32(ctx, 31, 0x144844u);
    ctx->pc = 0x144840u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958728));
    ctx->pc = 0x148870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00148870_0x148870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144844u; }
    }
    if (ctx->pc != 0x144844u) { return; }
    ctx->pc = 0x144844u;
    // 0x144844: 0x10000038
    ctx->pc = 0x144844u;
    {
        const bool branch_taken_0x144844 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144848u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x144844) {
            ctx->pc = 0x144928u;
            goto label_144928;
        }
    }
    ctx->pc = 0x14484Cu;
label_14484c:
    // 0x14484c: 0x24020001
    ctx->pc = 0x14484cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x144850: 0x1462000f
    ctx->pc = 0x144850u;
    {
        const bool branch_taken_0x144850 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x144854u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x144850) {
            ctx->pc = 0x144890u;
            goto label_144890;
        }
    }
    ctx->pc = 0x144858u;
    // 0x144858: 0x27b10030
    ctx->pc = 0x144858u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 48));
    // 0x14485c: 0x200202d
    ctx->pc = 0x14485cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144860: 0x27a50048
    ctx->pc = 0x144860u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 72));
    // 0x144864: 0x27a6004c
    ctx->pc = 0x144864u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 76));
    // 0x144868: 0x27a70050
    ctx->pc = 0x144868u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 80));
    // 0x14486c: 0x3a0402d
    ctx->pc = 0x14486cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144870: 0x240482d
    ctx->pc = 0x144870u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144874: 0xc051282
    ctx->pc = 0x144874u;
    SET_GPR_U32(ctx, 31, 0x14487Cu);
    ctx->pc = 0x144878u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x144A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00144A08_0x144a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14487Cu; }
    }
    if (ctx->pc != 0x14487Cu) { return; }
    ctx->pc = 0x14487Cu;
    // 0x14487c: 0x1440000d
    ctx->pc = 0x14487Cu;
    {
        const bool branch_taken_0x14487c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x144880u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x14487c) {
            ctx->pc = 0x1448B4u;
            goto label_1448b4;
        }
    }
    ctx->pc = 0x144884u;
label_144884:
    // 0x144884: 0xae000134
    ctx->pc = 0x144884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    // 0x144888: 0x10000027
    ctx->pc = 0x144888u;
    {
        const bool branch_taken_0x144888 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14488Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x144888) {
            ctx->pc = 0x144928u;
            goto label_144928;
        }
    }
    ctx->pc = 0x144890u;
label_144890:
    // 0x144890: 0x200202d
    ctx->pc = 0x144890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144894: 0x3a0282d
    ctx->pc = 0x144894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144898: 0x27a6004c
    ctx->pc = 0x144898u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 76));
    // 0x14489c: 0x240382d
    ctx->pc = 0x14489cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1448a0: 0xc051252
    ctx->pc = 0x1448A0u;
    SET_GPR_U32(ctx, 31, 0x1448A8u);
    ctx->pc = 0x1448A4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 72));
    ctx->pc = 0x144948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00144948_0x144948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1448A8u; }
    }
    if (ctx->pc != 0x1448A8u) { return; }
    ctx->pc = 0x1448A8u;
    // 0x1448a8: 0x1040000c
    ctx->pc = 0x1448A8u;
    {
        const bool branch_taken_0x1448a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1448ACu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 48));
        if (branch_taken_0x1448a8) {
            ctx->pc = 0x1448DCu;
            goto label_1448dc;
        }
    }
    ctx->pc = 0x1448B0u;
    // 0x1448b0: 0x8fa50040
    ctx->pc = 0x1448b0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1448b4:
    // 0x1448b4: 0x240502d
    ctx->pc = 0x1448b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1448b8: 0x8fa60044
    ctx->pc = 0x1448b8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1448bc: 0x220582d
    ctx->pc = 0x1448bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1448c0: 0x8fa70048
    ctx->pc = 0x1448c0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1448c4: 0x200202d
    ctx->pc = 0x1448c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1448c8: 0x8fa8004c
    ctx->pc = 0x1448c8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1448cc: 0xc050890
    ctx->pc = 0x1448CCu;
    SET_GPR_U32(ctx, 31, 0x1448D4u);
    ctx->pc = 0x1448D0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x142240u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00142240_0x142240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1448D4u; }
    }
    if (ctx->pc != 0x1448D4u) { return; }
    ctx->pc = 0x1448D4u;
    // 0x1448d4: 0x14400004
    ctx->pc = 0x1448D4u;
    {
        const bool branch_taken_0x1448d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1448D8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x1448d4) {
            ctx->pc = 0x1448E8u;
            goto label_1448e8;
        }
    }
    ctx->pc = 0x1448DCu;
label_1448dc:
    // 0x1448dc: 0xae000134
    ctx->pc = 0x1448dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    // 0x1448e0: 0x10000011
    ctx->pc = 0x1448E0u;
    {
        const bool branch_taken_0x1448e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1448E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1448e0) {
            ctx->pc = 0x144928u;
            goto label_144928;
        }
    }
    ctx->pc = 0x1448E8u;
label_1448e8:
    // 0x1448e8: 0x50800007
    ctx->pc = 0x1448E8u;
    {
        const bool branch_taken_0x1448e8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1448e8) {
            ctx->pc = 0x1448ECu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2088)));
            ctx->pc = 0x144908u;
            goto label_144908;
        }
    }
    ctx->pc = 0x1448F0u;
    // 0x1448f0: 0x8e050828
    ctx->pc = 0x1448f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x1448f4: 0x200202d
    ctx->pc = 0x1448f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1448f8: 0xc050bee
    ctx->pc = 0x1448F8u;
    SET_GPR_U32(ctx, 31, 0x144900u);
    ctx->pc = 0x1448FCu;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x142FB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00142FB8_0x142fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144900u; }
    }
    if (ctx->pc != 0x144900u) { return; }
    ctx->pc = 0x144900u;
    // 0x144900: 0x8fa40040
    ctx->pc = 0x144900u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144904: 0x8e020828
    ctx->pc = 0x144904u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2088)));
label_144908:
    // 0x144908: 0x24840001
    ctx->pc = 0x144908u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x14490c: 0x8fa30044
    ctx->pc = 0x14490cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x144910: 0x38420001
    ctx->pc = 0x144910u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x144914: 0xafa40040
    ctx->pc = 0x144914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x144918: 0x2463ffff
    ctx->pc = 0x144918u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14491c: 0xae020828
    ctx->pc = 0x14491cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
    // 0x144920: 0x1000ff9b
    ctx->pc = 0x144920u;
    {
        const bool branch_taken_0x144920 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144924u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        if (branch_taken_0x144920) {
            ctx->pc = 0x144790u;
            goto label_144790;
        }
    }
    ctx->pc = 0x144928u;
label_144928:
    // 0x144928: 0xdfbf00a0
    ctx->pc = 0x144928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_14492c:
    // 0x14492c: 0xdfb30090
    ctx->pc = 0x14492cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x144930: 0xdfb20080
    ctx->pc = 0x144930u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x144934: 0xdfb10070
    ctx->pc = 0x144934u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x144938: 0xdfb00060
    ctx->pc = 0x144938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14493c: 0x3e00008
    ctx->pc = 0x14493Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144940u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144790u: goto label_144790;
            case 0x1447A8u: goto label_1447a8;
            case 0x1447DCu: goto label_1447dc;
            case 0x144808u: goto label_144808;
            case 0x144810u: goto label_144810;
            case 0x144828u: goto label_144828;
            case 0x14484Cu: goto label_14484c;
            case 0x144884u: goto label_144884;
            case 0x144890u: goto label_144890;
            case 0x1448B4u: goto label_1448b4;
            case 0x1448DCu: goto label_1448dc;
            case 0x1448E8u: goto label_1448e8;
            case 0x144908u: goto label_144908;
            case 0x144928u: goto label_144928;
            case 0x14492Cu: goto label_14492c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144944u;
    // 0x144944: 0x0
    ctx->pc = 0x144944u;
    // NOP
}
