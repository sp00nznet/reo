#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00122708
// Address: 0x122708 - 0x1228f0
void sub_00122708_0x122708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x122708u;

    // 0x122708: 0x27bdfff0
    ctx->pc = 0x122708u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12270c: 0xffbf0000
    ctx->pc = 0x12270cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x122710: 0xdfbf0000
    ctx->pc = 0x122710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122714: 0x80483a6
    ctx->pc = 0x122714u;
    ctx->pc = 0x122718u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x120E98u;
    sub_00120E98_0x120e98(rdram, ctx, runtime); return;
    ctx->pc = 0x12271Cu;
    // 0x12271c: 0x0
    ctx->pc = 0x12271cu;
    // NOP
    // 0x122720: 0x27bdfff0
    ctx->pc = 0x122720u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x122724: 0x3c020021
    ctx->pc = 0x122724u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x122728: 0xffb00000
    ctx->pc = 0x122728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12272c: 0x2450b410
    ctx->pc = 0x12272cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294947856));
    // 0x122730: 0x8e020000
    ctx->pc = 0x122730u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x122734: 0x14400007
    ctx->pc = 0x122734u;
    {
        const bool branch_taken_0x122734 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x122738u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x122734) {
            ctx->pc = 0x122754u;
            goto label_122754;
        }
    }
    ctx->pc = 0x12273Cu;
    // 0x12273c: 0x3c040021
    ctx->pc = 0x12273cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)33 << 16));
    // 0x122740: 0x282d
    ctx->pc = 0x122740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122744: 0x2484b418
    ctx->pc = 0x122744u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947864));
    // 0x122748: 0xc041f1a
    ctx->pc = 0x122748u;
    SET_GPR_U32(ctx, 31, 0x122750u);
    ctx->pc = 0x12274Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 768));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122750u; }
    }
    if (ctx->pc != 0x122750u) { return; }
    ctx->pc = 0x122750u;
    // 0x122750: 0x8e020000
    ctx->pc = 0x122750u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_122754:
    // 0x122754: 0x24420001
    ctx->pc = 0x122754u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x122758: 0xdfbf0008
    ctx->pc = 0x122758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12275c: 0xae020000
    ctx->pc = 0x12275cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x122760: 0xdfb00000
    ctx->pc = 0x122760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122764: 0x3e00008
    ctx->pc = 0x122764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122768u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122754u: goto label_122754;
            case 0x1227B0u: goto label_1227b0;
            case 0x122800u: goto label_122800;
            case 0x122824u: goto label_122824;
            case 0x122860u: goto label_122860;
            case 0x122894u: goto label_122894;
            case 0x1228CCu: goto label_1228cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12276Cu;
    // 0x12276c: 0x0
    ctx->pc = 0x12276cu;
    // NOP
    // 0x122770: 0x27bdfff0
    ctx->pc = 0x122770u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x122774: 0x3c030021
    ctx->pc = 0x122774u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x122778: 0xffbf0000
    ctx->pc = 0x122778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12277c: 0x2463b410
    ctx->pc = 0x12277cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294947856));
    // 0x122780: 0x8c620000
    ctx->pc = 0x122780u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x122784: 0x2442ffff
    ctx->pc = 0x122784u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x122788: 0x14400009
    ctx->pc = 0x122788u;
    {
        const bool branch_taken_0x122788 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12278Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x122788) {
            ctx->pc = 0x1227B0u;
            goto label_1227b0;
        }
    }
    ctx->pc = 0x122790u;
    // 0x122790: 0x3c040021
    ctx->pc = 0x122790u;
    SET_GPR_U32(ctx, 4, ((uint32_t)33 << 16));
    // 0x122794: 0xdfbf0000
    ctx->pc = 0x122794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122798: 0x282d
    ctx->pc = 0x122798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12279c: 0x2484b418
    ctx->pc = 0x12279cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947864));
    // 0x1227a0: 0x24060300
    ctx->pc = 0x1227a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 768));
    // 0x1227a4: 0x8041f1a
    ctx->pc = 0x1227A4u;
    ctx->pc = 0x1227A8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x1227ACu;
    // 0x1227ac: 0x0
    ctx->pc = 0x1227acu;
    // NOP
label_1227b0:
    // 0x1227b0: 0xdfbf0000
    ctx->pc = 0x1227b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1227b4: 0x3e00008
    ctx->pc = 0x1227B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1227B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122754u: goto label_122754;
            case 0x1227B0u: goto label_1227b0;
            case 0x122800u: goto label_122800;
            case 0x122824u: goto label_122824;
            case 0x122860u: goto label_122860;
            case 0x122894u: goto label_122894;
            case 0x1228CCu: goto label_1228cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1227BCu;
    // 0x1227bc: 0x0
    ctx->pc = 0x1227bcu;
    // NOP
    // 0x1227c0: 0x27bdffd0
    ctx->pc = 0x1227c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1227c4: 0xffb00000
    ctx->pc = 0x1227c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1227c8: 0x802d
    ctx->pc = 0x1227c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1227cc: 0xffb10008
    ctx->pc = 0x1227ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1227d0: 0x80882d
    ctx->pc = 0x1227d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1227d4: 0xffb20010
    ctx->pc = 0x1227d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1227d8: 0xc0902d
    ctx->pc = 0x1227d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1227dc: 0xffb30018
    ctx->pc = 0x1227dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1227e0: 0xffb40020
    ctx->pc = 0x1227e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1227e4: 0x3c140021
    ctx->pc = 0x1227e4u;
    SET_GPR_U32(ctx, 20, ((uint32_t)33 << 16));
    // 0x1227e8: 0xffbf0028
    ctx->pc = 0x1227e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1227ec: 0x2683b418
    ctx->pc = 0x1227ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 4294947864));
    // 0x1227f0: 0x80620000
    ctx->pc = 0x1227f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1227f4: 0x1040000b
    ctx->pc = 0x1227F4u;
    {
        const bool branch_taken_0x1227f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1227F8u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1227f4) {
            ctx->pc = 0x122824u;
            goto label_122824;
        }
    }
    ctx->pc = 0x1227FCu;
    // 0x1227fc: 0x26100001
    ctx->pc = 0x1227fcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_122800:
    // 0x122800: 0x2a020010
    ctx->pc = 0x122800u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 16));
    // 0x122804: 0x10400007
    ctx->pc = 0x122804u;
    {
        const bool branch_taken_0x122804 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x122808u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 48));
        if (branch_taken_0x122804) {
            ctx->pc = 0x122824u;
            goto label_122824;
        }
    }
    ctx->pc = 0x12280Cu;
    // 0x12280c: 0x80620000
    ctx->pc = 0x12280cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x122810: 0x0
    ctx->pc = 0x122810u;
    // NOP
    // 0x122814: 0x0
    ctx->pc = 0x122814u;
    // NOP
    // 0x122818: 0x0
    ctx->pc = 0x122818u;
    // NOP
    // 0x12281c: 0x5440fff8
    ctx->pc = 0x12281Cu;
    {
        const bool branch_taken_0x12281c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12281c) {
            ctx->pc = 0x122820u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x122800u;
            goto label_122800;
        }
    }
    ctx->pc = 0x122824u;
label_122824:
    // 0x122824: 0x24030010
    ctx->pc = 0x122824u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x122828: 0x12030028
    ctx->pc = 0x122828u;
    {
        const bool branch_taken_0x122828 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x12282Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x122828) {
            ctx->pc = 0x1228CCu;
            goto label_1228cc;
        }
    }
    ctx->pc = 0x122830u;
    // 0x122830: 0xc049938
    ctx->pc = 0x122830u;
    SET_GPR_U32(ctx, 31, 0x122838u);
    ctx->pc = 0x1264E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264E0_0x1264e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122838u; }
    }
    if (ctx->pc != 0x122838u) { return; }
    ctx->pc = 0x122838u;
    // 0x122838: 0x101040
    ctx->pc = 0x122838u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 1));
    // 0x12283c: 0x501021
    ctx->pc = 0x12283cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x122840: 0x2683b418
    ctx->pc = 0x122840u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 4294947864));
    // 0x122844: 0x21100
    ctx->pc = 0x122844u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x122848: 0x402d
    ctx->pc = 0x122848u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12284c: 0x438021
    ctx->pc = 0x12284cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x122850: 0x1a200010
    ctx->pc = 0x122850u;
    {
        const bool branch_taken_0x122850 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x122854u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
        if (branch_taken_0x122850) {
            ctx->pc = 0x122894u;
            goto label_122894;
        }
    }
    ctx->pc = 0x122858u;
    // 0x122858: 0x2609000c
    ctx->pc = 0x122858u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 12));
    // 0x12285c: 0x26070004
    ctx->pc = 0x12285cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 4));
label_122860:
    // 0x122860: 0x81880
    ctx->pc = 0x122860u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
    // 0x122864: 0x25080001
    ctx->pc = 0x122864u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x122868: 0x731021
    ctx->pc = 0x122868u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x12286c: 0x723021
    ctx->pc = 0x12286cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x122870: 0x8c440000
    ctx->pc = 0x122870u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x122874: 0x111282a
    ctx->pc = 0x122874u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 17)));
    // 0x122878: 0x1231821
    ctx->pc = 0x122878u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x12287c: 0xace00010
    ctx->pc = 0x12287cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x122880: 0xace40000
    ctx->pc = 0x122880u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x122884: 0x24e70004
    ctx->pc = 0x122884u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
    // 0x122888: 0x8cc20000
    ctx->pc = 0x122888u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12288c: 0x14a0fff4
    ctx->pc = 0x12288Cu;
    {
        const bool branch_taken_0x12288c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x122890u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x12288c) {
            ctx->pc = 0x122860u;
            goto label_122860;
        }
    }
    ctx->pc = 0x122894u;
label_122894:
    // 0x122894: 0x3c013dcc
    ctx->pc = 0x122894u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x122898: 0x3421cccc
    ctx->pc = 0x122898u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52428));
    // 0x12289c: 0x44810000
    ctx->pc = 0x12289cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x1228a0: 0x3402ac44
    ctx->pc = 0x1228a0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 44100));
    // 0x1228a4: 0x24030001
    ctx->pc = 0x1228a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1228a8: 0xae020020
    ctx->pc = 0x1228a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1228ac: 0xae11001c
    ctx->pc = 0x1228acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x1228b0: 0xe6000028
    ctx->pc = 0x1228b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1228b4: 0xa2030000
    ctx->pc = 0x1228b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1228b8: 0xa2000001
    ctx->pc = 0x1228b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1228bc: 0xae00002c
    ctx->pc = 0x1228bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1228c0: 0xc04993e
    ctx->pc = 0x1228C0u;
    SET_GPR_U32(ctx, 31, 0x1228C8u);
    ctx->pc = 0x1228C4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    ctx->pc = 0x1264F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264F8_0x1264f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1228C8u; }
    }
    if (ctx->pc != 0x1228C8u) { return; }
    ctx->pc = 0x1228C8u;
    // 0x1228c8: 0x200102d
    ctx->pc = 0x1228c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1228cc:
    // 0x1228cc: 0xdfb00000
    ctx->pc = 0x1228ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1228d0: 0xdfb10008
    ctx->pc = 0x1228d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1228d4: 0xdfb20010
    ctx->pc = 0x1228d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1228d8: 0xdfb30018
    ctx->pc = 0x1228d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1228dc: 0xdfb40020
    ctx->pc = 0x1228dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1228e0: 0xdfbf0028
    ctx->pc = 0x1228e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1228e4: 0x3e00008
    ctx->pc = 0x1228E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1228E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122754u: goto label_122754;
            case 0x1227B0u: goto label_1227b0;
            case 0x122800u: goto label_122800;
            case 0x122824u: goto label_122824;
            case 0x122860u: goto label_122860;
            case 0x122894u: goto label_122894;
            case 0x1228CCu: goto label_1228cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1228ECu;
    // 0x1228ec: 0x0
    ctx->pc = 0x1228ecu;
    // NOP
}
