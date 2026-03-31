#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C0710
// Address: 0x1c0710 - 0x1c09d0
void sub_001C0710_0x1c0710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c0710u;

    // 0x1c0710: 0x27bdffe0
    ctx->pc = 0x1c0710u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c0714: 0x3c070023
    ctx->pc = 0x1c0714u;
    SET_GPR_U32(ctx, 7, ((uint32_t)35 << 16));
    // 0x1c0718: 0xffbf0010
    ctx->pc = 0x1c0718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c071c: 0x3c010032
    ctx->pc = 0x1c071cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c0720: 0x7fb00000
    ctx->pc = 0x1c0720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c0724: 0x24e75160
    ctx->pc = 0x1c0724u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 20832));
    // 0x1c0728: 0x8c286cf0
    ctx->pc = 0x1c0728u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 27888)));
    // 0x1c072c: 0x24030003
    ctx->pc = 0x1c072cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0730: 0x2402ffff
    ctx->pc = 0x1c0730u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c0734: 0x84080
    ctx->pc = 0x1c0734u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 2));
    // 0x1c0738: 0x3c010032
    ctx->pc = 0x1c0738u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c073c: 0xe83821
    ctx->pc = 0x1c073cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1c0740: 0x8cf00000
    ctx->pc = 0x1c0740u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1c0744: 0xac236ce8
    ctx->pc = 0x1c0744u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27880), GPR_U32(ctx, 3));
    // 0x1c0748: 0x3c010032
    ctx->pc = 0x1c0748u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c074c: 0xac226c74
    ctx->pc = 0x1c074cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27764), GPR_U32(ctx, 2));
    // 0x1c0750: 0x3c010032
    ctx->pc = 0x1c0750u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c0754: 0xac206c50
    ctx->pc = 0x1c0754u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27728), GPR_U32(ctx, 0));
    // 0x1c0758: 0x3c010032
    ctx->pc = 0x1c0758u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c075c: 0xac206c54
    ctx->pc = 0x1c075cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27732), GPR_U32(ctx, 0));
    // 0x1c0760: 0x3c010032
    ctx->pc = 0x1c0760u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c0764: 0xac246c64
    ctx->pc = 0x1c0764u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27748), GPR_U32(ctx, 4));
    // 0x1c0768: 0x3c010032
    ctx->pc = 0x1c0768u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c076c: 0x3c040032
    ctx->pc = 0x1c076cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x1c0770: 0xac256cec
    ctx->pc = 0x1c0770u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27884), GPR_U32(ctx, 5));
    // 0x1c0774: 0x24846c94
    ctx->pc = 0x1c0774u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27796));
    // 0x1c0778: 0x3c010032
    ctx->pc = 0x1c0778u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c077c: 0x3c050025
    ctx->pc = 0x1c077cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1c0780: 0xac266ce0
    ctx->pc = 0x1c0780u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27872), GPR_U32(ctx, 6));
    // 0x1c0784: 0x24a50640
    ctx->pc = 0x1c0784u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1600));
    // 0x1c0788: 0x8e060010
    ctx->pc = 0x1c0788u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c078c: 0xc042a0c
    ctx->pc = 0x1C078Cu;
    SET_GPR_U32(ctx, 31, 0x1C0794u);
    ctx->pc = 0x1C0790u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0794u; }
    }
    if (ctx->pc != 0x1C0794u) { return; }
    ctx->pc = 0x1C0794u;
    // 0x1c0794: 0x8e030018
    ctx->pc = 0x1c0794u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c0798: 0x3c010032
    ctx->pc = 0x1c0798u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c079c: 0xac236cd8
    ctx->pc = 0x1c079cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27864), GPR_U32(ctx, 3));
    // 0x1c07a0: 0xdfbf0010
    ctx->pc = 0x1c07a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c07a4: 0x7bb00000
    ctx->pc = 0x1c07a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c07a8: 0x3e00008
    ctx->pc = 0x1C07A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C07ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0804u: goto label_1c0804;
            case 0x1C083Cu: goto label_1c083c;
            case 0x1C0848u: goto label_1c0848;
            case 0x1C0854u: goto label_1c0854;
            case 0x1C0864u: goto label_1c0864;
            case 0x1C089Cu: goto label_1c089c;
            case 0x1C08BCu: goto label_1c08bc;
            case 0x1C08D4u: goto label_1c08d4;
            case 0x1C08E4u: goto label_1c08e4;
            case 0x1C0914u: goto label_1c0914;
            case 0x1C091Cu: goto label_1c091c;
            case 0x1C092Cu: goto label_1c092c;
            case 0x1C093Cu: goto label_1c093c;
            case 0x1C0960u: goto label_1c0960;
            case 0x1C097Cu: goto label_1c097c;
            case 0x1C0984u: goto label_1c0984;
            case 0x1C09A0u: goto label_1c09a0;
            case 0x1C09A8u: goto label_1c09a8;
            case 0x1C09ACu: goto label_1c09ac;
            case 0x1C09B0u: goto label_1c09b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C07B0u;
    // 0x1c07b0: 0x27bdffd0
    ctx->pc = 0x1c07b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c07b4: 0x3c050023
    ctx->pc = 0x1c07b4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x1c07b8: 0xffbf0020
    ctx->pc = 0x1c07b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c07bc: 0x24a55160
    ctx->pc = 0x1c07bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20832));
    // 0x1c07c0: 0x7fb10010
    ctx->pc = 0x1c07c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c07c4: 0x24020002
    ctx->pc = 0x1c07c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c07c8: 0x7fb00000
    ctx->pc = 0x1c07c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c07cc: 0x8c8600a0
    ctx->pc = 0x1c07ccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x1c07d0: 0x8c830000
    ctx->pc = 0x1c07d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c07d4: 0x63080
    ctx->pc = 0x1c07d4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1c07d8: 0xa62821
    ctx->pc = 0x1c07d8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1c07dc: 0x8cb00000
    ctx->pc = 0x1c07dcu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c07e0: 0x10620056
    ctx->pc = 0x1C07E0u;
    {
        const bool branch_taken_0x1c07e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C07E4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c07e0) {
            ctx->pc = 0x1C093Cu;
            goto label_1c093c;
        }
    }
    ctx->pc = 0x1C07E8u;
    // 0x1c07e8: 0x24020001
    ctx->pc = 0x1c07e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c07ec: 0x1062001d
    ctx->pc = 0x1C07ECu;
    {
        const bool branch_taken_0x1c07ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1c07ec) {
            ctx->pc = 0x1C0864u;
            goto label_1c0864;
        }
    }
    ctx->pc = 0x1C07F4u;
    // 0x1c07f4: 0x10600003
    ctx->pc = 0x1C07F4u;
    {
        const bool branch_taken_0x1c07f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c07f4) {
            ctx->pc = 0x1C0804u;
            goto label_1c0804;
        }
    }
    ctx->pc = 0x1C07FCu;
    // 0x1c07fc: 0x1000006c
    ctx->pc = 0x1C07FCu;
    {
        const bool branch_taken_0x1c07fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0800u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c07fc) {
            ctx->pc = 0x1C09B0u;
            goto label_1c09b0;
        }
    }
    ctx->pc = 0x1C0804u;
label_1c0804:
    // 0x1c0804: 0xc06fe10
    ctx->pc = 0x1C0804u;
    SET_GPR_U32(ctx, 31, 0x1C080Cu);
    ctx->pc = 0x1BF840u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF840_0x1bf840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C080Cu; }
    }
    if (ctx->pc != 0x1C080Cu) { return; }
    ctx->pc = 0x1C080Cu;
    // 0x1c080c: 0x24030002
    ctx->pc = 0x1c080cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0810: 0x10430010
    ctx->pc = 0x1C0810u;
    {
        const bool branch_taken_0x1c0810 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C0814u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c0810) {
            ctx->pc = 0x1C0854u;
            goto label_1c0854;
        }
    }
    ctx->pc = 0x1C0818u;
    // 0x1c0818: 0x1043000e
    ctx->pc = 0x1C0818u;
    {
        const bool branch_taken_0x1c0818 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c0818) {
            ctx->pc = 0x1C0854u;
            goto label_1c0854;
        }
    }
    ctx->pc = 0x1C0820u;
    // 0x1c0820: 0x24030003
    ctx->pc = 0x1c0820u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0824: 0x10430008
    ctx->pc = 0x1C0824u;
    {
        const bool branch_taken_0x1c0824 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c0824) {
            ctx->pc = 0x1C0848u;
            goto label_1c0848;
        }
    }
    ctx->pc = 0x1C082Cu;
    // 0x1c082c: 0x10400003
    ctx->pc = 0x1C082Cu;
    {
        const bool branch_taken_0x1c082c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c082c) {
            ctx->pc = 0x1C083Cu;
            goto label_1c083c;
        }
    }
    ctx->pc = 0x1C0834u;
    // 0x1c0834: 0x1000005d
    ctx->pc = 0x1C0834u;
    {
        const bool branch_taken_0x1c0834 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c0834) {
            ctx->pc = 0x1C09ACu;
            goto label_1c09ac;
        }
    }
    ctx->pc = 0x1C083Cu;
label_1c083c:
    // 0x1c083c: 0x2402ff01
    ctx->pc = 0x1c083cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x1c0840: 0x1000005a
    ctx->pc = 0x1C0840u;
    {
        const bool branch_taken_0x1c0840 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0844u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x1c0840) {
            ctx->pc = 0x1C09ACu;
            goto label_1c09ac;
        }
    }
    ctx->pc = 0x1C0848u;
label_1c0848:
    // 0x1c0848: 0x2402ff02
    ctx->pc = 0x1c0848u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967042));
    // 0x1c084c: 0x10000057
    ctx->pc = 0x1C084Cu;
    {
        const bool branch_taken_0x1c084c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0850u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x1c084c) {
            ctx->pc = 0x1C09ACu;
            goto label_1c09ac;
        }
    }
    ctx->pc = 0x1C0854u;
label_1c0854:
    // 0x1c0854: 0x8e220000
    ctx->pc = 0x1c0854u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c0858: 0x24420001
    ctx->pc = 0x1c0858u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c085c: 0x10000053
    ctx->pc = 0x1C085Cu;
    {
        const bool branch_taken_0x1c085c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0860u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1c085c) {
            ctx->pc = 0x1C09ACu;
            goto label_1c09ac;
        }
    }
    ctx->pc = 0x1C0864u;
label_1c0864:
    // 0x1c0864: 0xc06fe94
    ctx->pc = 0x1C0864u;
    SET_GPR_U32(ctx, 31, 0x1C086Cu);
    ctx->pc = 0x1BFA50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFA50_0x1bfa50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C086Cu; }
    }
    if (ctx->pc != 0x1C086Cu) { return; }
    ctx->pc = 0x1C086Cu;
    // 0x1c086c: 0x24030003
    ctx->pc = 0x1c086cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0870: 0x1043002e
    ctx->pc = 0x1C0870u;
    {
        const bool branch_taken_0x1c0870 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C0874u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1c0870) {
            ctx->pc = 0x1C092Cu;
            goto label_1c092c;
        }
    }
    ctx->pc = 0x1C0878u;
    // 0x1c0878: 0x10430028
    ctx->pc = 0x1C0878u;
    {
        const bool branch_taken_0x1c0878 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c0878) {
            ctx->pc = 0x1C091Cu;
            goto label_1c091c;
        }
    }
    ctx->pc = 0x1C0880u;
    // 0x1c0880: 0x24030001
    ctx->pc = 0x1c0880u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0884: 0x10430017
    ctx->pc = 0x1C0884u;
    {
        const bool branch_taken_0x1c0884 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c0884) {
            ctx->pc = 0x1C08E4u;
            goto label_1c08e4;
        }
    }
    ctx->pc = 0x1C088Cu;
    // 0x1c088c: 0x10400003
    ctx->pc = 0x1C088Cu;
    {
        const bool branch_taken_0x1c088c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0890u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1c088c) {
            ctx->pc = 0x1C089Cu;
            goto label_1c089c;
        }
    }
    ctx->pc = 0x1C0894u;
    // 0x1c0894: 0x10000045
    ctx->pc = 0x1C0894u;
    {
        const bool branch_taken_0x1c0894 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c0894) {
            ctx->pc = 0x1C09ACu;
            goto label_1c09ac;
        }
    }
    ctx->pc = 0x1C089Cu;
label_1c089c:
    // 0x1c089c: 0x8e220088
    ctx->pc = 0x1c089cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x1c08a0: 0x8c236ac0
    ctx->pc = 0x1c08a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 27328)));
    // 0x1c08a4: 0x10620005
    ctx->pc = 0x1C08A4u;
    {
        const bool branch_taken_0x1c08a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1c08a4) {
            ctx->pc = 0x1C08BCu;
            goto label_1c08bc;
        }
    }
    ctx->pc = 0x1C08ACu;
    // 0x1c08ac: 0xae200000
    ctx->pc = 0x1c08acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1c08b0: 0x2402ff05
    ctx->pc = 0x1c08b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967045));
    // 0x1c08b4: 0x1000003d
    ctx->pc = 0x1C08B4u;
    {
        const bool branch_taken_0x1c08b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C08B8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x1c08b4) {
            ctx->pc = 0x1C09ACu;
            goto label_1c09ac;
        }
    }
    ctx->pc = 0x1C08BCu;
label_1c08bc:
    // 0x1c08bc: 0x8e220090
    ctx->pc = 0x1c08bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1c08c0: 0x14400004
    ctx->pc = 0x1C08C0u;
    {
        const bool branch_taken_0x1c08c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c08c0) {
            ctx->pc = 0x1C08D4u;
            goto label_1c08d4;
        }
    }
    ctx->pc = 0x1C08C8u;
    // 0x1c08c8: 0xae200000
    ctx->pc = 0x1c08c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1c08cc: 0x10000037
    ctx->pc = 0x1C08CCu;
    {
        const bool branch_taken_0x1c08cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C08D0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        if (branch_taken_0x1c08cc) {
            ctx->pc = 0x1C09ACu;
            goto label_1c09ac;
        }
    }
    ctx->pc = 0x1C08D4u;
label_1c08d4:
    // 0x1c08d4: 0x8e220000
    ctx->pc = 0x1c08d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c08d8: 0x24420001
    ctx->pc = 0x1c08d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c08dc: 0x10000033
    ctx->pc = 0x1C08DCu;
    {
        const bool branch_taken_0x1c08dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C08E0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1c08dc) {
            ctx->pc = 0x1C09ACu;
            goto label_1c09ac;
        }
    }
    ctx->pc = 0x1C08E4u;
label_1c08e4:
    // 0x1c08e4: 0xae200000
    ctx->pc = 0x1c08e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1c08e8: 0x8e230014
    ctx->pc = 0x1c08e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1c08ec: 0x8e02005c
    ctx->pc = 0x1c08ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1c08f0: 0x31880
    ctx->pc = 0x1c08f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c08f4: 0x711821
    ctx->pc = 0x1c08f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1c08f8: 0x8c630034
    ctx->pc = 0x1c08f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1c08fc: 0x62102a
    ctx->pc = 0x1c08fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x1c0900: 0x14400004
    ctx->pc = 0x1C0900u;
    {
        const bool branch_taken_0x1c0900 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C0904u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967044));
        if (branch_taken_0x1c0900) {
            ctx->pc = 0x1C0914u;
            goto label_1c0914;
        }
    }
    ctx->pc = 0x1C0908u;
    // 0x1c0908: 0x2402ff03
    ctx->pc = 0x1c0908u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967043));
    // 0x1c090c: 0x10000027
    ctx->pc = 0x1C090Cu;
    {
        const bool branch_taken_0x1c090c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0910u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x1c090c) {
            ctx->pc = 0x1C09ACu;
            goto label_1c09ac;
        }
    }
    ctx->pc = 0x1C0914u;
label_1c0914:
    // 0x1c0914: 0x10000025
    ctx->pc = 0x1C0914u;
    {
        const bool branch_taken_0x1c0914 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0918u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x1c0914) {
            ctx->pc = 0x1C09ACu;
            goto label_1c09ac;
        }
    }
    ctx->pc = 0x1C091Cu;
label_1c091c:
    // 0x1c091c: 0xae200000
    ctx->pc = 0x1c091cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1c0920: 0x2402ff01
    ctx->pc = 0x1c0920u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x1c0924: 0x10000021
    ctx->pc = 0x1C0924u;
    {
        const bool branch_taken_0x1c0924 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0928u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x1c0924) {
            ctx->pc = 0x1C09ACu;
            goto label_1c09ac;
        }
    }
    ctx->pc = 0x1C092Cu;
label_1c092c:
    // 0x1c092c: 0xae200000
    ctx->pc = 0x1c092cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1c0930: 0x2402ff00
    ctx->pc = 0x1c0930u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1c0934: 0x1000001d
    ctx->pc = 0x1C0934u;
    {
        const bool branch_taken_0x1c0934 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0938u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x1c0934) {
            ctx->pc = 0x1C09ACu;
            goto label_1c09ac;
        }
    }
    ctx->pc = 0x1C093Cu;
label_1c093c:
    // 0x1c093c: 0xc06fed0
    ctx->pc = 0x1C093Cu;
    SET_GPR_U32(ctx, 31, 0x1C0944u);
    ctx->pc = 0x1BFB40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFB40_0x1bfb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0944u; }
    }
    if (ctx->pc != 0x1C0944u) { return; }
    ctx->pc = 0x1C0944u;
    // 0x1c0944: 0x24030001
    ctx->pc = 0x1c0944u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0948: 0x1043000e
    ctx->pc = 0x1C0948u;
    {
        const bool branch_taken_0x1c0948 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c0948) {
            ctx->pc = 0x1C0984u;
            goto label_1c0984;
        }
    }
    ctx->pc = 0x1C0950u;
    // 0x1c0950: 0x10400003
    ctx->pc = 0x1C0950u;
    {
        const bool branch_taken_0x1c0950 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c0950) {
            ctx->pc = 0x1C0960u;
            goto label_1c0960;
        }
    }
    ctx->pc = 0x1C0958u;
    // 0x1c0958: 0x10000014
    ctx->pc = 0x1C0958u;
    {
        const bool branch_taken_0x1c0958 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c0958) {
            ctx->pc = 0x1C09ACu;
            goto label_1c09ac;
        }
    }
    ctx->pc = 0x1C0960u;
label_1c0960:
    // 0x1c0960: 0xae200000
    ctx->pc = 0x1c0960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1c0964: 0x8e23001c
    ctx->pc = 0x1c0964u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c0968: 0x8e220088
    ctx->pc = 0x1c0968u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x1c096c: 0x14620003
    ctx->pc = 0x1C096Cu;
    {
        const bool branch_taken_0x1c096c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1C0970u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967040));
        if (branch_taken_0x1c096c) {
            ctx->pc = 0x1C097Cu;
            goto label_1c097c;
        }
    }
    ctx->pc = 0x1C0974u;
    // 0x1c0974: 0x1000000d
    ctx->pc = 0x1C0974u;
    {
        const bool branch_taken_0x1c0974 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0978u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        if (branch_taken_0x1c0974) {
            ctx->pc = 0x1C09ACu;
            goto label_1c09ac;
        }
    }
    ctx->pc = 0x1C097Cu;
label_1c097c:
    // 0x1c097c: 0x1000000b
    ctx->pc = 0x1C097Cu;
    {
        const bool branch_taken_0x1c097c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0980u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x1c097c) {
            ctx->pc = 0x1C09ACu;
            goto label_1c09ac;
        }
    }
    ctx->pc = 0x1C0984u;
label_1c0984:
    // 0x1c0984: 0xae200000
    ctx->pc = 0x1c0984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1c0988: 0x24020013
    ctx->pc = 0x1c0988u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 19));
    // 0x1c098c: 0x9623001c
    ctx->pc = 0x1c098cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c0990: 0x10620003
    ctx->pc = 0x1C0990u;
    {
        const bool branch_taken_0x1c0990 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C0994u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967041));
        if (branch_taken_0x1c0990) {
            ctx->pc = 0x1C09A0u;
            goto label_1c09a0;
        }
    }
    ctx->pc = 0x1C0998u;
    // 0x1c0998: 0x10000003
    ctx->pc = 0x1C0998u;
    {
        const bool branch_taken_0x1c0998 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C099Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967040));
        if (branch_taken_0x1c0998) {
            ctx->pc = 0x1C09A8u;
            goto label_1c09a8;
        }
    }
    ctx->pc = 0x1C09A0u;
label_1c09a0:
    // 0x1c09a0: 0x10000002
    ctx->pc = 0x1C09A0u;
    {
        const bool branch_taken_0x1c09a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C09A4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x1c09a0) {
            ctx->pc = 0x1C09ACu;
            goto label_1c09ac;
        }
    }
    ctx->pc = 0x1C09A8u;
label_1c09a8:
    // 0x1c09a8: 0xae220024
    ctx->pc = 0x1c09a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_1c09ac:
    // 0x1c09ac: 0x220202d
    ctx->pc = 0x1c09acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c09b0:
    // 0x1c09b0: 0xc070108
    ctx->pc = 0x1C09B0u;
    SET_GPR_U32(ctx, 31, 0x1C09B8u);
    ctx->pc = 0x1C0420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0420_0x1c0420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C09B8u; }
    }
    if (ctx->pc != 0x1C09B8u) { return; }
    ctx->pc = 0x1C09B8u;
    // 0x1c09b8: 0xdfbf0020
    ctx->pc = 0x1c09b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c09bc: 0x7bb10010
    ctx->pc = 0x1c09bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c09c0: 0x7bb00000
    ctx->pc = 0x1c09c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c09c4: 0x3e00008
    ctx->pc = 0x1C09C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C09C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0804u: goto label_1c0804;
            case 0x1C083Cu: goto label_1c083c;
            case 0x1C0848u: goto label_1c0848;
            case 0x1C0854u: goto label_1c0854;
            case 0x1C0864u: goto label_1c0864;
            case 0x1C089Cu: goto label_1c089c;
            case 0x1C08BCu: goto label_1c08bc;
            case 0x1C08D4u: goto label_1c08d4;
            case 0x1C08E4u: goto label_1c08e4;
            case 0x1C0914u: goto label_1c0914;
            case 0x1C091Cu: goto label_1c091c;
            case 0x1C092Cu: goto label_1c092c;
            case 0x1C093Cu: goto label_1c093c;
            case 0x1C0960u: goto label_1c0960;
            case 0x1C097Cu: goto label_1c097c;
            case 0x1C0984u: goto label_1c0984;
            case 0x1C09A0u: goto label_1c09a0;
            case 0x1C09A8u: goto label_1c09a8;
            case 0x1C09ACu: goto label_1c09ac;
            case 0x1C09B0u: goto label_1c09b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C09CCu;
    // 0x1c09cc: 0x0
    ctx->pc = 0x1c09ccu;
    // NOP
}
