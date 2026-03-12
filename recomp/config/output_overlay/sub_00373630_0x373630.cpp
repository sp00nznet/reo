#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00373630
// Address: 0x373630 - 0x373f40
void sub_00373630_0x373630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x373630u;

label_373630:
    // 0x373630: 0x27bdfef0
    ctx->pc = 0x373630u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967024));
label_373634:
    // 0x373634: 0xffbf0090
    ctx->pc = 0x373634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_373638:
    // 0x373638: 0x44806000
    ctx->pc = 0x373638u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_37363c:
    // 0x37363c: 0x7fbe0080
    ctx->pc = 0x37363cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_373640:
    // 0x373640: 0x7fb70070
    ctx->pc = 0x373640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_373644:
    // 0x373644: 0xe0f02d
    ctx->pc = 0x373644u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_373648:
    // 0x373648: 0x7fb60060
    ctx->pc = 0x373648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_37364c:
    // 0x37364c: 0x46006346
    ctx->pc = 0x37364cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_373650:
    // 0x373650: 0x7fb50050
    ctx->pc = 0x373650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_373654:
    // 0x373654: 0x46006386
    ctx->pc = 0x373654u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_373658:
    // 0x373658: 0x7fb40040
    ctx->pc = 0x373658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_37365c:
    // 0x37365c: 0x80a82d
    ctx->pc = 0x37365cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_373660:
    // 0x373660: 0x7fb30030
    ctx->pc = 0x373660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_373664:
    // 0x373664: 0x7fb20020
    ctx->pc = 0x373664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_373668:
    // 0x373668: 0xc0982d
    ctx->pc = 0x373668u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37366c:
    // 0x37366c: 0x7fb10010
    ctx->pc = 0x37366cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_373670:
    // 0x373670: 0x7fb00000
    ctx->pc = 0x373670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_373674:
    // 0x373674: 0xafa800bc
    ctx->pc = 0x373674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 8));
label_373678:
    // 0x373678: 0xafa500b8
    ctx->pc = 0x373678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
label_37367c:
    // 0x37367c: 0x8c920034
    ctx->pc = 0x37367cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_373680:
    // 0x373680: 0xc063fc4
label_373684:
    if (ctx->pc == 0x373684u) {
        ctx->pc = 0x373684u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x373688u;
        goto label_373688;
    }
    ctx->pc = 0x373680u;
    SET_GPR_U32(ctx, 31, 0x373688u);
    ctx->pc = 0x373684u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 208));
    ctx->pc = 0x18FF10u;
    {
        auto targetFn = runtime->lookupFunction(0x18FF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373688u; }
        if (ctx->pc != 0x373688u) { return; }
    }
    ctx->pc = 0x373688u;
label_373688:
    // 0x373688: 0x44806000
    ctx->pc = 0x373688u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_37368c:
    // 0x37368c: 0x27a400d0
    ctx->pc = 0x37368cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 208));
label_373690:
    // 0x373690: 0x46006346
    ctx->pc = 0x373690u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_373694:
    // 0x373694: 0xc0640b4
label_373698:
    if (ctx->pc == 0x373698u) {
        ctx->pc = 0x373698u;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x37369Cu;
        goto label_37369c;
    }
    ctx->pc = 0x373694u;
    SET_GPR_U32(ctx, 31, 0x37369Cu);
    ctx->pc = 0x373698u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1902D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1902D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37369Cu; }
        if (ctx->pc != 0x37369Cu) { return; }
    }
    ctx->pc = 0x37369Cu;
label_37369c:
    // 0x37369c: 0x27a500d0
    ctx->pc = 0x37369cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 208));
label_3736a0:
    // 0x3736a0: 0xc06bde0
label_3736a4:
    if (ctx->pc == 0x3736A4u) {
        ctx->pc = 0x3736A4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x3736A8u;
        goto label_3736a8;
    }
    ctx->pc = 0x3736A0u;
    SET_GPR_U32(ctx, 31, 0x3736A8u);
    ctx->pc = 0x3736A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 25));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3736A8u; }
        if (ctx->pc != 0x3736A8u) { return; }
    }
    ctx->pc = 0x3736A8u;
label_3736a8:
    // 0x3736a8: 0x2404005e
    ctx->pc = 0x3736a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 94));
label_3736ac:
    // 0x3736ac: 0xc06bde0
label_3736b0:
    if (ctx->pc == 0x3736B0u) {
        ctx->pc = 0x3736B0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x3736B4u;
        goto label_3736b4;
    }
    ctx->pc = 0x3736ACu;
    SET_GPR_U32(ctx, 31, 0x3736B4u);
    ctx->pc = 0x3736B0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 50));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3736B4u; }
        if (ctx->pc != 0x3736B4u) { return; }
    }
    ctx->pc = 0x3736B4u;
label_3736b4:
    // 0x3736b4: 0x240400ff
    ctx->pc = 0x3736b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 255));
label_3736b8:
    // 0x3736b8: 0xc0dd31c
label_3736bc:
    if (ctx->pc == 0x3736BCu) {
        ctx->pc = 0x3736BCu;
        WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3736C0u;
        goto label_3736c0;
    }
    ctx->pc = 0x3736B8u;
    SET_GPR_U32(ctx, 31, 0x3736C0u);
    ctx->pc = 0x3736BCu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x374C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00374C70_0x374c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3736C0u; }
    }
    if (ctx->pc != 0x3736C0u) { return; }
    ctx->pc = 0x3736C0u;
label_3736c0:
    // 0x3736c0: 0xafa200b4
    ctx->pc = 0x3736c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_3736c4:
    // 0x3736c4: 0x8e420818
    ctx->pc = 0x3736c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2072)));
label_3736c8:
    // 0x3736c8: 0x10400007
label_3736cc:
    if (ctx->pc == 0x3736CCu) {
        ctx->pc = 0x3736D0u;
        goto label_3736d0;
    }
    ctx->pc = 0x3736C8u;
    {
        const bool branch_taken_0x3736c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x3736c8) {
            ctx->pc = 0x3736E8u;
            goto label_3736e8;
        }
    }
    ctx->pc = 0x3736D0u;
label_3736d0:
    // 0x3736d0: 0x8e420000
    ctx->pc = 0x3736d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3736d4:
    // 0x3736d4: 0x8c450000
    ctx->pc = 0x3736d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3736d8:
    // 0x3736d8: 0xc064a38
label_3736dc:
    if (ctx->pc == 0x3736DCu) {
        ctx->pc = 0x3736DCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->pc = 0x3736E0u;
        goto label_3736e0;
    }
    ctx->pc = 0x3736D8u;
    SET_GPR_U32(ctx, 31, 0x3736E0u);
    ctx->pc = 0x3736DCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 180)));
    ctx->pc = 0x1928E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1928E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3736E0u; }
        if (ctx->pc != 0x3736E0u) { return; }
    }
    ctx->pc = 0x3736E0u;
label_3736e0:
    // 0x3736e0: 0x10000005
label_3736e4:
    if (ctx->pc == 0x3736E4u) {
        ctx->pc = 0x3736E4u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3736E8u;
        goto label_3736e8;
    }
    ctx->pc = 0x3736E0u;
    {
        const bool branch_taken_0x3736e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3736E4u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3736e0) {
            ctx->pc = 0x3736F8u;
            goto label_3736f8;
        }
    }
    ctx->pc = 0x3736E8u;
label_3736e8:
    // 0x3736e8: 0x8e420000
    ctx->pc = 0x3736e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3736ec:
    // 0x3736ec: 0xc064a10
label_3736f0:
    if (ctx->pc == 0x3736F0u) {
        ctx->pc = 0x3736F0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3736F4u;
        goto label_3736f4;
    }
    ctx->pc = 0x3736ECu;
    SET_GPR_U32(ctx, 31, 0x3736F4u);
    ctx->pc = 0x3736F0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x192840u;
    {
        auto targetFn = runtime->lookupFunction(0x192840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3736F4u; }
        if (ctx->pc != 0x3736F4u) { return; }
    }
    ctx->pc = 0x3736F4u;
label_3736f4:
    // 0x3736f4: 0xa02d
    ctx->pc = 0x3736f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3736f8:
    // 0x3736f8: 0x27b000c4
    ctx->pc = 0x3736f8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 196));
label_3736fc:
    // 0x3736fc: 0x100001f7
label_373700:
    if (ctx->pc == 0x373700u) {
        ctx->pc = 0x373700u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 29), 200));
        ctx->pc = 0x373704u;
        goto label_373704;
    }
    ctx->pc = 0x3736FCu;
    {
        const bool branch_taken_0x3736fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x373700u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 29), 200));
        if (branch_taken_0x3736fc) {
            ctx->pc = 0x373EDCu;
            goto label_373edc;
        }
    }
    ctx->pc = 0x373704u;
label_373704:
    // 0x373704: 0x8e440808
    ctx->pc = 0x373704u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 2056)));
label_373708:
    // 0x373708: 0x1418c0
    ctx->pc = 0x373708u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 3));
label_37370c:
    // 0x37370c: 0x742821
    ctx->pc = 0x37370cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_373710:
    // 0x373710: 0x52840
    ctx->pc = 0x373710u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
label_373714:
    // 0x373714: 0x2403ffff
    ctx->pc = 0x373714u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_373718:
    // 0x373718: 0xb42821
    ctx->pc = 0x373718u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_37371c:
    // 0x37371c: 0x5b0c0
    ctx->pc = 0x37371cu;
    SET_GPR_U32(ctx, 22, SLL32(GPR_U32(ctx, 5), 3));
label_373720:
    // 0x373720: 0x962021
    ctx->pc = 0x373720u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_373724:
    // 0x373724: 0x8c840000
    ctx->pc = 0x373724u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_373728:
    // 0x373728: 0x108301eb
label_37372c:
    if (ctx->pc == 0x37372Cu) {
        ctx->pc = 0x373730u;
        goto label_373730;
    }
    ctx->pc = 0x373728u;
    {
        const bool branch_taken_0x373728 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x373728) {
            ctx->pc = 0x373ED8u;
            goto label_373ed8;
        }
    }
    ctx->pc = 0x373730u;
label_373730:
    // 0x373730: 0x108001e9
label_373734:
    if (ctx->pc == 0x373734u) {
        ctx->pc = 0x373738u;
        goto label_373738;
    }
    ctx->pc = 0x373730u;
    {
        const bool branch_taken_0x373730 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x373730) {
            ctx->pc = 0x373ED8u;
            goto label_373ed8;
        }
    }
    ctx->pc = 0x373738u;
label_373738:
    // 0x373738: 0x8fa300b8
    ctx->pc = 0x373738u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_37373c:
    // 0x37373c: 0x741821
    ctx->pc = 0x37373cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_373740:
    // 0x373740: 0x90630000
    ctx->pc = 0x373740u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_373744:
    // 0x373744: 0x106001e4
label_373748:
    if (ctx->pc == 0x373748u) {
        ctx->pc = 0x37374Cu;
        goto label_37374c;
    }
    ctx->pc = 0x373744u;
    {
        const bool branch_taken_0x373744 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x373744) {
            ctx->pc = 0x373ED8u;
            goto label_373ed8;
        }
    }
    ctx->pc = 0x37374Cu;
label_37374c:
    // 0x37374c: 0x126000e3
label_373750:
    if (ctx->pc == 0x373750u) {
        ctx->pc = 0x373754u;
        goto label_373754;
    }
    ctx->pc = 0x37374Cu;
    {
        const bool branch_taken_0x37374c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x37374c) {
            ctx->pc = 0x373ADCu;
            goto label_373adc;
        }
    }
    ctx->pc = 0x373754u;
label_373754:
    // 0x373754: 0x86640000
    ctx->pc = 0x373754u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_373758:
    // 0x373758: 0x284082a
    ctx->pc = 0x373758u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 4)));
label_37375c:
    // 0x37375c: 0x142000df
label_373760:
    if (ctx->pc == 0x373760u) {
        ctx->pc = 0x373764u;
        goto label_373764;
    }
    ctx->pc = 0x37375Cu;
    {
        const bool branch_taken_0x37375c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37375c) {
            ctx->pc = 0x373ADCu;
            goto label_373adc;
        }
    }
    ctx->pc = 0x373764u;
label_373764:
    // 0x373764: 0x86630002
    ctx->pc = 0x373764u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_373768:
    // 0x373768: 0x831821
    ctx->pc = 0x373768u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_37376c:
    // 0x37376c: 0x283082a
    ctx->pc = 0x37376cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
label_373770:
    // 0x373770: 0x102000da
label_373774:
    if (ctx->pc == 0x373774u) {
        ctx->pc = 0x373774u;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        ctx->pc = 0x373778u;
        goto label_373778;
    }
    ctx->pc = 0x373770u;
    {
        const bool branch_taken_0x373770 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x373774u;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x373770) {
            ctx->pc = 0x373ADCu;
            goto label_373adc;
        }
    }
    ctx->pc = 0x373778u;
label_373778:
    // 0x373778: 0x8c24aee8
    ctx->pc = 0x373778u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_37377c:
    // 0x37377c: 0x28810100
    ctx->pc = 0x37377cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 256));
label_373780:
    // 0x373780: 0x102001d5
label_373784:
    if (ctx->pc == 0x373784u) {
        ctx->pc = 0x373788u;
        goto label_373788;
    }
    ctx->pc = 0x373780u;
    {
        const bool branch_taken_0x373780 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x373780) {
            ctx->pc = 0x373ED8u;
            goto label_373ed8;
        }
    }
    ctx->pc = 0x373788u;
label_373788:
    // 0x373788: 0x3c010057
    ctx->pc = 0x373788u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_37378c:
    // 0x37378c: 0x41840
    ctx->pc = 0x37378cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
label_373790:
    // 0x373790: 0x8c22aee0
    ctx->pc = 0x373790u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
label_373794:
    // 0x373794: 0x641821
    ctx->pc = 0x373794u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_373798:
    // 0x373798: 0x31940
    ctx->pc = 0x373798u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
label_37379c:
    // 0x37379c: 0x24050008
    ctx->pc = 0x37379cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
label_3737a0:
    // 0x3737a0: 0x431021
    ctx->pc = 0x3737a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3737a4:
    // 0x3737a4: 0x3c010057
    ctx->pc = 0x3737a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_3737a8:
    // 0x3737a8: 0xac550000
    ctx->pc = 0x3737a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_3737ac:
    // 0x3737ac: 0x8c24aee8
    ctx->pc = 0x3737acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_3737b0:
    // 0x3737b0: 0x3c010057
    ctx->pc = 0x3737b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_3737b4:
    // 0x3737b4: 0x41840
    ctx->pc = 0x3737b4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
label_3737b8:
    // 0x3737b8: 0x8c22aee0
    ctx->pc = 0x3737b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
label_3737bc:
    // 0x3737bc: 0x641821
    ctx->pc = 0x3737bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3737c0:
    // 0x3737c0: 0x31940
    ctx->pc = 0x3737c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
label_3737c4:
    // 0x3737c4: 0x431021
    ctx->pc = 0x3737c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3737c8:
    // 0x3737c8: 0x3c010057
    ctx->pc = 0x3737c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_3737cc:
    // 0x3737cc: 0xac520004
    ctx->pc = 0x3737ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
label_3737d0:
    // 0x3737d0: 0x8c24aee8
    ctx->pc = 0x3737d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_3737d4:
    // 0x3737d4: 0x3c010057
    ctx->pc = 0x3737d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_3737d8:
    // 0x3737d8: 0x41840
    ctx->pc = 0x3737d8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
label_3737dc:
    // 0x3737dc: 0x8c22aee0
    ctx->pc = 0x3737dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
label_3737e0:
    // 0x3737e0: 0x641821
    ctx->pc = 0x3737e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3737e4:
    // 0x3737e4: 0x31940
    ctx->pc = 0x3737e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
label_3737e8:
    // 0x3737e8: 0x431021
    ctx->pc = 0x3737e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3737ec:
    // 0x3737ec: 0x3c010057
    ctx->pc = 0x3737ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_3737f0:
    // 0x3737f0: 0xac540008
    ctx->pc = 0x3737f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
label_3737f4:
    // 0x3737f4: 0x86640000
    ctx->pc = 0x3737f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_3737f8:
    // 0x3737f8: 0x8c28aee8
    ctx->pc = 0x3737f8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_3737fc:
    // 0x3737fc: 0x8e62000c
    ctx->pc = 0x3737fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_373800:
    // 0x373800: 0x8e430000
    ctx->pc = 0x373800u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_373804:
    // 0x373804: 0x2842023
    ctx->pc = 0x373804u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_373808:
    // 0x373808: 0x42100
    ctx->pc = 0x373808u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
label_37380c:
    // 0x37380c: 0x3c010057
    ctx->pc = 0x37380cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373810:
    // 0x373810: 0x442021
    ctx->pc = 0x373810u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_373814:
    // 0x373814: 0x83840
    ctx->pc = 0x373814u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 8), 1));
label_373818:
    // 0x373818: 0x8c840000
    ctx->pc = 0x373818u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37381c:
    // 0x37381c: 0xe83821
    ctx->pc = 0x37381cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_373820:
    // 0x373820: 0x8c26aee0
    ctx->pc = 0x373820u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
label_373824:
    // 0x373824: 0x73940
    ctx->pc = 0x373824u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 5));
label_373828:
    // 0x373828: 0x42080
    ctx->pc = 0x373828u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
label_37382c:
    // 0x37382c: 0xc74021
    ctx->pc = 0x37382cu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_373830:
    // 0x373830: 0x641821
    ctx->pc = 0x373830u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_373834:
    // 0x373834: 0x8c670000
    ctx->pc = 0x373834u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_373838:
    // 0x373838: 0x25060010
    ctx->pc = 0x373838u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 8), 16));
label_37383c:
    // 0x37383c: 0x8ce40000
    ctx->pc = 0x37383cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_373840:
    // 0x373840: 0x24a5ffff
    ctx->pc = 0x373840u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
label_373844:
    // 0x373844: 0x8ce30004
    ctx->pc = 0x373844u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_373848:
    // 0x373848: 0xacc40000
    ctx->pc = 0x373848u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_37384c:
    // 0x37384c: 0x24e70008
    ctx->pc = 0x37384cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
label_373850:
    // 0x373850: 0xacc30004
    ctx->pc = 0x373850u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_373854:
    // 0x373854: 0x1ca0fff9
label_373858:
    if (ctx->pc == 0x373858u) {
        ctx->pc = 0x373858u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
        ctx->pc = 0x37385Cu;
        goto label_37385c;
    }
    ctx->pc = 0x373854u;
    {
        const bool branch_taken_0x373854 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x373858u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x373854) {
            ctx->pc = 0x37383Cu;
            goto label_37383c;
        }
    }
    ctx->pc = 0x37385Cu;
label_37385c:
    // 0x37385c: 0x86630000
    ctx->pc = 0x37385cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_373860:
    // 0x373860: 0x25060010
    ctx->pc = 0x373860u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 8), 16));
label_373864:
    // 0x373864: 0x27a400c0
    ctx->pc = 0x373864u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 192));
label_373868:
    // 0x373868: 0x2831823
    ctx->pc = 0x373868u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_37386c:
    // 0x37386c: 0x31900
    ctx->pc = 0x37386cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
label_373870:
    // 0x373870: 0x431021
    ctx->pc = 0x373870u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_373874:
    // 0x373874: 0xc064674
label_373878:
    if (ctx->pc == 0x373878u) {
        ctx->pc = 0x373878u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x37387Cu;
        goto label_37387c;
    }
    ctx->pc = 0x373874u;
    SET_GPR_U32(ctx, 31, 0x37387Cu);
    ctx->pc = 0x373878u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4));
    ctx->pc = 0x1919D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1919D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37387Cu; }
        if (ctx->pc != 0x37387Cu) { return; }
    }
    ctx->pc = 0x37387Cu;
label_37387c:
    // 0x37387c: 0x3c010057
    ctx->pc = 0x37387cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373880:
    // 0x373880: 0x3c033f80
    ctx->pc = 0x373880u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
label_373884:
    // 0x373884: 0x8c25aee8
    ctx->pc = 0x373884u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_373888:
    // 0x373888: 0xc7a000c0
    ctx->pc = 0x373888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37388c:
    // 0x37388c: 0x3c010057
    ctx->pc = 0x37388cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373890:
    // 0x373890: 0x52040
    ctx->pc = 0x373890u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
label_373894:
    // 0x373894: 0x8c22aee0
    ctx->pc = 0x373894u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
label_373898:
    // 0x373898: 0x852021
    ctx->pc = 0x373898u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_37389c:
    // 0x37389c: 0x42140
    ctx->pc = 0x37389cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
label_3738a0:
    // 0x3738a0: 0x441021
    ctx->pc = 0x3738a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3738a4:
    // 0x3738a4: 0x3c010057
    ctx->pc = 0x3738a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_3738a8:
    // 0x3738a8: 0xc4410040
    ctx->pc = 0x3738a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3738ac:
    // 0x3738ac: 0x46010000
    ctx->pc = 0x3738acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3738b0:
    // 0x3738b0: 0xe7a000c0
    ctx->pc = 0x3738b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_3738b4:
    // 0x3738b4: 0xc4410044
    ctx->pc = 0x3738b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3738b8:
    // 0x3738b8: 0xc6000000
    ctx->pc = 0x3738b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3738bc:
    // 0x3738bc: 0x46010000
    ctx->pc = 0x3738bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3738c0:
    // 0x3738c0: 0xe6000000
    ctx->pc = 0x3738c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_3738c4:
    // 0x3738c4: 0x8c25aee8
    ctx->pc = 0x3738c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_3738c8:
    // 0x3738c8: 0xc6e00000
    ctx->pc = 0x3738c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3738cc:
    // 0x3738cc: 0x3c010057
    ctx->pc = 0x3738ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_3738d0:
    // 0x3738d0: 0x52040
    ctx->pc = 0x3738d0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
label_3738d4:
    // 0x3738d4: 0x8c22aee0
    ctx->pc = 0x3738d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
label_3738d8:
    // 0x3738d8: 0x852021
    ctx->pc = 0x3738d8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3738dc:
    // 0x3738dc: 0x42140
    ctx->pc = 0x3738dcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
label_3738e0:
    // 0x3738e0: 0x441021
    ctx->pc = 0x3738e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3738e4:
    // 0x3738e4: 0x3c010057
    ctx->pc = 0x3738e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_3738e8:
    // 0x3738e8: 0xc4410048
    ctx->pc = 0x3738e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3738ec:
    // 0x3738ec: 0x46010000
    ctx->pc = 0x3738ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3738f0:
    // 0x3738f0: 0xe6e00000
    ctx->pc = 0x3738f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_3738f4:
    // 0x3738f4: 0x8c25aee8
    ctx->pc = 0x3738f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_3738f8:
    // 0x3738f8: 0xc7a000c0
    ctx->pc = 0x3738f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3738fc:
    // 0x3738fc: 0x3c010057
    ctx->pc = 0x3738fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373900:
    // 0x373900: 0x52040
    ctx->pc = 0x373900u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
label_373904:
    // 0x373904: 0x8c22aee0
    ctx->pc = 0x373904u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
label_373908:
    // 0x373908: 0x852021
    ctx->pc = 0x373908u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_37390c:
    // 0x37390c: 0x42140
    ctx->pc = 0x37390cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
label_373910:
    // 0x373910: 0x441021
    ctx->pc = 0x373910u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_373914:
    // 0x373914: 0x3c010057
    ctx->pc = 0x373914u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373918:
    // 0x373918: 0xe4400040
    ctx->pc = 0x373918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_37391c:
    // 0x37391c: 0x8c25aee8
    ctx->pc = 0x37391cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_373920:
    // 0x373920: 0xc6000000
    ctx->pc = 0x373920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373924:
    // 0x373924: 0x3c010057
    ctx->pc = 0x373924u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373928:
    // 0x373928: 0x52040
    ctx->pc = 0x373928u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
label_37392c:
    // 0x37392c: 0x8c22aee0
    ctx->pc = 0x37392cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
label_373930:
    // 0x373930: 0x852021
    ctx->pc = 0x373930u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_373934:
    // 0x373934: 0x42140
    ctx->pc = 0x373934u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
label_373938:
    // 0x373938: 0x441021
    ctx->pc = 0x373938u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_37393c:
    // 0x37393c: 0x3c010057
    ctx->pc = 0x37393cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373940:
    // 0x373940: 0xe4400044
    ctx->pc = 0x373940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
label_373944:
    // 0x373944: 0x8c25aee8
    ctx->pc = 0x373944u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_373948:
    // 0x373948: 0xc6e00000
    ctx->pc = 0x373948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37394c:
    // 0x37394c: 0x3c010057
    ctx->pc = 0x37394cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373950:
    // 0x373950: 0x52040
    ctx->pc = 0x373950u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
label_373954:
    // 0x373954: 0x8c22aee0
    ctx->pc = 0x373954u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
label_373958:
    // 0x373958: 0x852021
    ctx->pc = 0x373958u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_37395c:
    // 0x37395c: 0x42140
    ctx->pc = 0x37395cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
label_373960:
    // 0x373960: 0x441021
    ctx->pc = 0x373960u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_373964:
    // 0x373964: 0xe4400048
    ctx->pc = 0x373964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
label_373968:
    // 0x373968: 0x27a200cc
    ctx->pc = 0x373968u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 204));
label_37396c:
    // 0x37396c: 0xac430000
    ctx->pc = 0x37396cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_373970:
    // 0x373970: 0x86630004
    ctx->pc = 0x373970u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_373974:
    // 0x373974: 0x283082a
    ctx->pc = 0x373974u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
label_373978:
    // 0x373978: 0x14200022
label_37397c:
    if (ctx->pc == 0x37397Cu) {
        ctx->pc = 0x373980u;
        goto label_373980;
    }
    ctx->pc = 0x373978u;
    {
        const bool branch_taken_0x373978 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x373978) {
            ctx->pc = 0x373A04u;
            goto label_373a04;
        }
    }
    ctx->pc = 0x373980u;
label_373980:
    // 0x373980: 0x86620006
    ctx->pc = 0x373980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
label_373984:
    // 0x373984: 0x621021
    ctx->pc = 0x373984u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_373988:
    // 0x373988: 0x282082a
    ctx->pc = 0x373988u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 2)));
label_37398c:
    // 0x37398c: 0x1020001d
label_373990:
    if (ctx->pc == 0x373990u) {
        ctx->pc = 0x373994u;
        goto label_373994;
    }
    ctx->pc = 0x37398Cu;
    {
        const bool branch_taken_0x37398c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x37398c) {
            ctx->pc = 0x373A04u;
            goto label_373a04;
        }
    }
    ctx->pc = 0x373994u;
label_373994:
    // 0x373994: 0x3c010057
    ctx->pc = 0x373994u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373998:
    // 0x373998: 0x24070001
    ctx->pc = 0x373998u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
label_37399c:
    // 0x37399c: 0x8c26aee8
    ctx->pc = 0x37399cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_3739a0:
    // 0x3739a0: 0x26a40038
    ctx->pc = 0x3739a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 56));
label_3739a4:
    // 0x3739a4: 0x26a50090
    ctx->pc = 0x3739a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 144));
label_3739a8:
    // 0x3739a8: 0x3c010057
    ctx->pc = 0x3739a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_3739ac:
    // 0x3739ac: 0x61840
    ctx->pc = 0x3739acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
label_3739b0:
    // 0x3739b0: 0x8c22aee0
    ctx->pc = 0x3739b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
label_3739b4:
    // 0x3739b4: 0x661821
    ctx->pc = 0x3739b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3739b8:
    // 0x3739b8: 0x31940
    ctx->pc = 0x3739b8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
label_3739bc:
    // 0x3739bc: 0x431021
    ctx->pc = 0x3739bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3739c0:
    // 0x3739c0: 0x3c010057
    ctx->pc = 0x3739c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_3739c4:
    // 0x3739c4: 0xa047000c
    ctx->pc = 0x3739c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 7));
label_3739c8:
    // 0x3739c8: 0x8c27aee8
    ctx->pc = 0x3739c8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_3739cc:
    // 0x3739cc: 0x8e420000
    ctx->pc = 0x3739ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3739d0:
    // 0x3739d0: 0x3c010057
    ctx->pc = 0x3739d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_3739d4:
    // 0x3739d4: 0x73040
    ctx->pc = 0x3739d4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 7), 1));
label_3739d8:
    // 0x3739d8: 0x8c23aee0
    ctx->pc = 0x3739d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
label_3739dc:
    // 0x3739dc: 0xc73021
    ctx->pc = 0x3739dcu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_3739e0:
    // 0x3739e0: 0x8c42000c
    ctx->pc = 0x3739e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3739e4:
    // 0x3739e4: 0x63140
    ctx->pc = 0x3739e4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 5));
label_3739e8:
    // 0x3739e8: 0x661821
    ctx->pc = 0x3739e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3739ec:
    // 0x3739ec: 0x24670050
    ctx->pc = 0x3739ecu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 80));
label_3739f0:
    // 0x3739f0: 0x24680054
    ctx->pc = 0x3739f0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 3), 84));
label_3739f4:
    // 0x3739f4: 0xc0dd330
label_3739f8:
    if (ctx->pc == 0x3739F8u) {
        ctx->pc = 0x3739F8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 64));
        ctx->pc = 0x3739FCu;
        goto label_3739fc;
    }
    ctx->pc = 0x3739F4u;
    SET_GPR_U32(ctx, 31, 0x3739FCu);
    ctx->pc = 0x3739F8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x374CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00374CC0_0x374cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3739FCu; }
    }
    if (ctx->pc != 0x3739FCu) { return; }
    ctx->pc = 0x3739FCu;
label_3739fc:
    // 0x3739fc: 0x10000025
label_373a00:
    if (ctx->pc == 0x373A00u) {
        ctx->pc = 0x373A04u;
        goto label_373a04;
    }
    ctx->pc = 0x3739FCu;
    {
        const bool branch_taken_0x3739fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x3739fc) {
            ctx->pc = 0x373A94u;
            goto label_373a94;
        }
    }
    ctx->pc = 0x373A04u;
label_373a04:
    // 0x373a04: 0x3c010057
    ctx->pc = 0x373a04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373a08:
    // 0x373a08: 0x8c24aee8
    ctx->pc = 0x373a08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_373a0c:
    // 0x373a0c: 0x3c010057
    ctx->pc = 0x373a0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373a10:
    // 0x373a10: 0x41840
    ctx->pc = 0x373a10u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
label_373a14:
    // 0x373a14: 0x8c22aee0
    ctx->pc = 0x373a14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
label_373a18:
    // 0x373a18: 0x641821
    ctx->pc = 0x373a18u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_373a1c:
    // 0x373a1c: 0x31940
    ctx->pc = 0x373a1cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
label_373a20:
    // 0x373a20: 0x431021
    ctx->pc = 0x373a20u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_373a24:
    // 0x373a24: 0x3c010057
    ctx->pc = 0x373a24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373a28:
    // 0x373a28: 0xa040000c
    ctx->pc = 0x373a28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 0));
label_373a2c:
    // 0x373a2c: 0x8c24aee8
    ctx->pc = 0x373a2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_373a30:
    // 0x373a30: 0x3c010057
    ctx->pc = 0x373a30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373a34:
    // 0x373a34: 0x41840
    ctx->pc = 0x373a34u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
label_373a38:
    // 0x373a38: 0x8c22aee0
    ctx->pc = 0x373a38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
label_373a3c:
    // 0x373a3c: 0x641821
    ctx->pc = 0x373a3cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_373a40:
    // 0x373a40: 0x31940
    ctx->pc = 0x373a40u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
label_373a44:
    // 0x373a44: 0x431021
    ctx->pc = 0x373a44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_373a48:
    // 0x373a48: 0x3c010057
    ctx->pc = 0x373a48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373a4c:
    // 0x373a4c: 0xac400058
    ctx->pc = 0x373a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_373a50:
    // 0x373a50: 0x8c24aee8
    ctx->pc = 0x373a50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_373a54:
    // 0x373a54: 0x3c010057
    ctx->pc = 0x373a54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373a58:
    // 0x373a58: 0x41840
    ctx->pc = 0x373a58u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
label_373a5c:
    // 0x373a5c: 0x8c22aee0
    ctx->pc = 0x373a5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
label_373a60:
    // 0x373a60: 0x641821
    ctx->pc = 0x373a60u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_373a64:
    // 0x373a64: 0x31940
    ctx->pc = 0x373a64u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
label_373a68:
    // 0x373a68: 0x431021
    ctx->pc = 0x373a68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_373a6c:
    // 0x373a6c: 0x3c010057
    ctx->pc = 0x373a6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373a70:
    // 0x373a70: 0xac400054
    ctx->pc = 0x373a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
label_373a74:
    // 0x373a74: 0x8c24aee8
    ctx->pc = 0x373a74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_373a78:
    // 0x373a78: 0x3c010057
    ctx->pc = 0x373a78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373a7c:
    // 0x373a7c: 0x41840
    ctx->pc = 0x373a7cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
label_373a80:
    // 0x373a80: 0x8c22aee0
    ctx->pc = 0x373a80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
label_373a84:
    // 0x373a84: 0x641821
    ctx->pc = 0x373a84u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_373a88:
    // 0x373a88: 0x31940
    ctx->pc = 0x373a88u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
label_373a8c:
    // 0x373a8c: 0x431021
    ctx->pc = 0x373a8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_373a90:
    // 0x373a90: 0xac400050
    ctx->pc = 0x373a90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_373a94:
    // 0x373a94: 0x3c010057
    ctx->pc = 0x373a94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373a98:
    // 0x373a98: 0x3c040037
    ctx->pc = 0x373a98u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
label_373a9c:
    // 0x373a9c: 0x8c25aee8
    ctx->pc = 0x373a9cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_373aa0:
    // 0x373aa0: 0x24844350
    ctx->pc = 0x373aa0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17232));
label_373aa4:
    // 0x373aa4: 0x27a600c0
    ctx->pc = 0x373aa4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 192));
label_373aa8:
    // 0x373aa8: 0x3c010057
    ctx->pc = 0x373aa8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373aac:
    // 0x373aac: 0x51840
    ctx->pc = 0x373aacu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
label_373ab0:
    // 0x373ab0: 0x8c22aee0
    ctx->pc = 0x373ab0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
label_373ab4:
    // 0x373ab4: 0x651821
    ctx->pc = 0x373ab4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_373ab8:
    // 0x373ab8: 0x31940
    ctx->pc = 0x373ab8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
label_373abc:
    // 0x373abc: 0xc06c8f8
label_373ac0:
    if (ctx->pc == 0x373AC0u) {
        ctx->pc = 0x373AC0u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x373AC4u;
        goto label_373ac4;
    }
    ctx->pc = 0x373ABCu;
    SET_GPR_U32(ctx, 31, 0x373AC4u);
    ctx->pc = 0x373AC0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1B23E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B23E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373AC4u; }
        if (ctx->pc != 0x373AC4u) { return; }
    }
    ctx->pc = 0x373AC4u;
label_373ac4:
    // 0x373ac4: 0x3c010057
    ctx->pc = 0x373ac4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373ac8:
    // 0x373ac8: 0x8c23aee8
    ctx->pc = 0x373ac8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_373acc:
    // 0x373acc: 0x24630001
    ctx->pc = 0x373accu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_373ad0:
    // 0x373ad0: 0x3c010057
    ctx->pc = 0x373ad0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373ad4:
    // 0x373ad4: 0x10000100
label_373ad8:
    if (ctx->pc == 0x373AD8u) {
        ctx->pc = 0x373AD8u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294946536), GPR_U32(ctx, 3));
        ctx->pc = 0x373ADCu;
        goto label_373adc;
    }
    ctx->pc = 0x373AD4u;
    {
        const bool branch_taken_0x373ad4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x373AD8u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294946536), GPR_U32(ctx, 3));
        if (branch_taken_0x373ad4) {
            ctx->pc = 0x373ED8u;
            goto label_373ed8;
        }
    }
    ctx->pc = 0x373ADCu;
label_373adc:
    // 0x373adc: 0x126000ac
label_373ae0:
    if (ctx->pc == 0x373AE0u) {
        ctx->pc = 0x373AE0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x373AE4u;
        goto label_373ae4;
    }
    ctx->pc = 0x373ADCu;
    {
        const bool branch_taken_0x373adc = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x373AE0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x373adc) {
            ctx->pc = 0x373D90u;
            goto label_373d90;
        }
    }
    ctx->pc = 0x373AE4u;
label_373ae4:
    // 0x373ae4: 0x86640008
    ctx->pc = 0x373ae4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
label_373ae8:
    // 0x373ae8: 0x284082a
    ctx->pc = 0x373ae8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 4)));
label_373aec:
    // 0x373aec: 0x142000a7
label_373af0:
    if (ctx->pc == 0x373AF0u) {
        ctx->pc = 0x373AF4u;
        goto label_373af4;
    }
    ctx->pc = 0x373AECu;
    {
        const bool branch_taken_0x373aec = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x373aec) {
            ctx->pc = 0x373D8Cu;
            goto label_373d8c;
        }
    }
    ctx->pc = 0x373AF4u;
label_373af4:
    // 0x373af4: 0x8663000a
    ctx->pc = 0x373af4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
label_373af8:
    // 0x373af8: 0x831821
    ctx->pc = 0x373af8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_373afc:
    // 0x373afc: 0x283082a
    ctx->pc = 0x373afcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
label_373b00:
    // 0x373b00: 0x102000a2
label_373b04:
    if (ctx->pc == 0x373B04u) {
        ctx->pc = 0x373B04u;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        ctx->pc = 0x373B08u;
        goto label_373b08;
    }
    ctx->pc = 0x373B00u;
    {
        const bool branch_taken_0x373b00 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x373B04u;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x373b00) {
            ctx->pc = 0x373D8Cu;
            goto label_373d8c;
        }
    }
    ctx->pc = 0x373B08u;
label_373b08:
    // 0x373b08: 0x8c24aee8
    ctx->pc = 0x373b08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_373b0c:
    // 0x373b0c: 0x28810100
    ctx->pc = 0x373b0cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 256));
label_373b10:
    // 0x373b10: 0x102000f1
label_373b14:
    if (ctx->pc == 0x373B14u) {
        ctx->pc = 0x373B18u;
        goto label_373b18;
    }
    ctx->pc = 0x373B10u;
    {
        const bool branch_taken_0x373b10 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x373b10) {
            ctx->pc = 0x373ED8u;
            goto label_373ed8;
        }
    }
    ctx->pc = 0x373B18u;
label_373b18:
    // 0x373b18: 0x3c010057
    ctx->pc = 0x373b18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373b1c:
    // 0x373b1c: 0x41840
    ctx->pc = 0x373b1cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
label_373b20:
    // 0x373b20: 0x8c22aee0
    ctx->pc = 0x373b20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
label_373b24:
    // 0x373b24: 0x641821
    ctx->pc = 0x373b24u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_373b28:
    // 0x373b28: 0x31940
    ctx->pc = 0x373b28u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
label_373b2c:
    // 0x373b2c: 0x27a400c0
    ctx->pc = 0x373b2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 192));
label_373b30:
    // 0x373b30: 0x431021
    ctx->pc = 0x373b30u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_373b34:
    // 0x373b34: 0x3c010057
    ctx->pc = 0x373b34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373b38:
    // 0x373b38: 0xac550000
    ctx->pc = 0x373b38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_373b3c:
    // 0x373b3c: 0x8c25aee8
    ctx->pc = 0x373b3cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_373b40:
    // 0x373b40: 0x3c010057
    ctx->pc = 0x373b40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373b44:
    // 0x373b44: 0x51840
    ctx->pc = 0x373b44u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
label_373b48:
    // 0x373b48: 0x8c22aee0
    ctx->pc = 0x373b48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
label_373b4c:
    // 0x373b4c: 0x651821
    ctx->pc = 0x373b4cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_373b50:
    // 0x373b50: 0x31940
    ctx->pc = 0x373b50u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
label_373b54:
    // 0x373b54: 0x431021
    ctx->pc = 0x373b54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_373b58:
    // 0x373b58: 0x3c010057
    ctx->pc = 0x373b58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373b5c:
    // 0x373b5c: 0xac520004
    ctx->pc = 0x373b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
label_373b60:
    // 0x373b60: 0x8c25aee8
    ctx->pc = 0x373b60u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_373b64:
    // 0x373b64: 0x3c010057
    ctx->pc = 0x373b64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373b68:
    // 0x373b68: 0x51840
    ctx->pc = 0x373b68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
label_373b6c:
    // 0x373b6c: 0x8c22aee0
    ctx->pc = 0x373b6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
label_373b70:
    // 0x373b70: 0x651821
    ctx->pc = 0x373b70u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_373b74:
    // 0x373b74: 0x31940
    ctx->pc = 0x373b74u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
label_373b78:
    // 0x373b78: 0x431021
    ctx->pc = 0x373b78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_373b7c:
    // 0x373b7c: 0xac540008
    ctx->pc = 0x373b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
label_373b80:
    // 0x373b80: 0x86650008
    ctx->pc = 0x373b80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
label_373b84:
    // 0x373b84: 0x8e630010
    ctx->pc = 0x373b84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_373b88:
    // 0x373b88: 0x8e420000
    ctx->pc = 0x373b88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_373b8c:
    // 0x373b8c: 0x2852823
    ctx->pc = 0x373b8cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_373b90:
    // 0x373b90: 0x52900
    ctx->pc = 0x373b90u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
label_373b94:
    // 0x373b94: 0x652821
    ctx->pc = 0x373b94u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_373b98:
    // 0x373b98: 0x8ca30000
    ctx->pc = 0x373b98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_373b9c:
    // 0x373b9c: 0x31880
    ctx->pc = 0x373b9cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_373ba0:
    // 0x373ba0: 0x24a50004
    ctx->pc = 0x373ba0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
label_373ba4:
    // 0x373ba4: 0x431021
    ctx->pc = 0x373ba4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_373ba8:
    // 0x373ba8: 0x8c510000
    ctx->pc = 0x373ba8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_373bac:
    // 0x373bac: 0xc064674
label_373bb0:
    if (ctx->pc == 0x373BB0u) {
        ctx->pc = 0x373BB0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x373BB4u;
        goto label_373bb4;
    }
    ctx->pc = 0x373BACu;
    SET_GPR_U32(ctx, 31, 0x373BB4u);
    ctx->pc = 0x373BB0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1919D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1919D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373BB4u; }
        if (ctx->pc != 0x373BB4u) { return; }
    }
    ctx->pc = 0x373BB4u;
label_373bb4:
    // 0x373bb4: 0xc6210030
    ctx->pc = 0x373bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_373bb8:
    // 0x373bb8: 0x64020001
    ctx->pc = 0x373bb8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)1);
label_373bbc:
    // 0x373bbc: 0xc7a000c0
    ctx->pc = 0x373bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373bc0:
    // 0x373bc0: 0x3c033f80
    ctx->pc = 0x373bc0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
label_373bc4:
    // 0x373bc4: 0x3c010057
    ctx->pc = 0x373bc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373bc8:
    // 0x373bc8: 0xa3a200a0
    ctx->pc = 0x373bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 2));
label_373bcc:
    // 0x373bcc: 0x46010000
    ctx->pc = 0x373bccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_373bd0:
    // 0x373bd0: 0x27a200cc
    ctx->pc = 0x373bd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 204));
label_373bd4:
    // 0x373bd4: 0xe7a000c0
    ctx->pc = 0x373bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_373bd8:
    // 0x373bd8: 0xc6210034
    ctx->pc = 0x373bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_373bdc:
    // 0x373bdc: 0xc6000000
    ctx->pc = 0x373bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373be0:
    // 0x373be0: 0x46010000
    ctx->pc = 0x373be0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_373be4:
    // 0x373be4: 0xe6000000
    ctx->pc = 0x373be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_373be8:
    // 0x373be8: 0xc6210038
    ctx->pc = 0x373be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_373bec:
    // 0x373bec: 0xc6e00000
    ctx->pc = 0x373becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373bf0:
    // 0x373bf0: 0x46010000
    ctx->pc = 0x373bf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_373bf4:
    // 0x373bf4: 0xe6e00000
    ctx->pc = 0x373bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_373bf8:
    // 0x373bf8: 0xac430000
    ctx->pc = 0x373bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_373bfc:
    // 0x373bfc: 0x9025aed8
    ctx->pc = 0x373bfcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946520)));
label_373c00:
    // 0x373c00: 0x3c010057
    ctx->pc = 0x373c00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373c04:
    // 0x373c04: 0x8c24aee8
    ctx->pc = 0x373c04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_373c08:
    // 0x373c08: 0x3c010057
    ctx->pc = 0x373c08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373c0c:
    // 0x373c0c: 0x41840
    ctx->pc = 0x373c0cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
label_373c10:
    // 0x373c10: 0x8c22aee0
    ctx->pc = 0x373c10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
label_373c14:
    // 0x373c14: 0x641821
    ctx->pc = 0x373c14u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_373c18:
    // 0x373c18: 0x31940
    ctx->pc = 0x373c18u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
label_373c1c:
    // 0x373c1c: 0x431021
    ctx->pc = 0x373c1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_373c20:
    // 0x373c20: 0xa045000d
    ctx->pc = 0x373c20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 13), (uint8_t)GPR_U32(ctx, 5));
label_373c24:
    // 0x373c24: 0x86630004
    ctx->pc = 0x373c24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_373c28:
    // 0x373c28: 0x283082a
    ctx->pc = 0x373c28u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
label_373c2c:
    // 0x373c2c: 0x14200021
label_373c30:
    if (ctx->pc == 0x373C30u) {
        ctx->pc = 0x373C30u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x373C34u;
        goto label_373c34;
    }
    ctx->pc = 0x373C2Cu;
    {
        const bool branch_taken_0x373c2c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x373C30u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x373c2c) {
            ctx->pc = 0x373CB4u;
            goto label_373cb4;
        }
    }
    ctx->pc = 0x373C34u;
label_373c34:
    // 0x373c34: 0x86620006
    ctx->pc = 0x373c34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
label_373c38:
    // 0x373c38: 0x621021
    ctx->pc = 0x373c38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_373c3c:
    // 0x373c3c: 0x282082a
    ctx->pc = 0x373c3cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 2)));
label_373c40:
    // 0x373c40: 0x1020001c
label_373c44:
    if (ctx->pc == 0x373C44u) {
        ctx->pc = 0x373C48u;
        goto label_373c48;
    }
    ctx->pc = 0x373C40u;
    {
        const bool branch_taken_0x373c40 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x373c40) {
            ctx->pc = 0x373CB4u;
            goto label_373cb4;
        }
    }
    ctx->pc = 0x373C48u;
label_373c48:
    // 0x373c48: 0x3c010057
    ctx->pc = 0x373c48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373c4c:
    // 0x373c4c: 0x26a40038
    ctx->pc = 0x373c4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 56));
label_373c50:
    // 0x373c50: 0x8c26aee8
    ctx->pc = 0x373c50u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_373c54:
    // 0x373c54: 0x26a50090
    ctx->pc = 0x373c54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 144));
label_373c58:
    // 0x373c58: 0x3c010057
    ctx->pc = 0x373c58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373c5c:
    // 0x373c5c: 0x61840
    ctx->pc = 0x373c5cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
label_373c60:
    // 0x373c60: 0x8c22aee0
    ctx->pc = 0x373c60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
label_373c64:
    // 0x373c64: 0x661821
    ctx->pc = 0x373c64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_373c68:
    // 0x373c68: 0x31940
    ctx->pc = 0x373c68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
label_373c6c:
    // 0x373c6c: 0x431021
    ctx->pc = 0x373c6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_373c70:
    // 0x373c70: 0x3c010057
    ctx->pc = 0x373c70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373c74:
    // 0x373c74: 0xa047000c
    ctx->pc = 0x373c74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 7));
label_373c78:
    // 0x373c78: 0x8c27aee8
    ctx->pc = 0x373c78u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_373c7c:
    // 0x373c7c: 0x8e420000
    ctx->pc = 0x373c7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_373c80:
    // 0x373c80: 0x3c010057
    ctx->pc = 0x373c80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373c84:
    // 0x373c84: 0x73040
    ctx->pc = 0x373c84u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 7), 1));
label_373c88:
    // 0x373c88: 0x8c23aee0
    ctx->pc = 0x373c88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
label_373c8c:
    // 0x373c8c: 0xc73021
    ctx->pc = 0x373c8cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_373c90:
    // 0x373c90: 0x8c42000c
    ctx->pc = 0x373c90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_373c94:
    // 0x373c94: 0x63140
    ctx->pc = 0x373c94u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 5));
label_373c98:
    // 0x373c98: 0x661821
    ctx->pc = 0x373c98u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_373c9c:
    // 0x373c9c: 0x24670050
    ctx->pc = 0x373c9cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 80));
label_373ca0:
    // 0x373ca0: 0x24680054
    ctx->pc = 0x373ca0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 3), 84));
label_373ca4:
    // 0x373ca4: 0xc0dd330
label_373ca8:
    if (ctx->pc == 0x373CA8u) {
        ctx->pc = 0x373CA8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 64));
        ctx->pc = 0x373CACu;
        goto label_373cac;
    }
    ctx->pc = 0x373CA4u;
    SET_GPR_U32(ctx, 31, 0x373CACu);
    ctx->pc = 0x373CA8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x374CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00374CC0_0x374cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373CACu; }
    }
    if (ctx->pc != 0x373CACu) { return; }
    ctx->pc = 0x373CACu;
label_373cac:
    // 0x373cac: 0x10000025
label_373cb0:
    if (ctx->pc == 0x373CB0u) {
        ctx->pc = 0x373CB4u;
        goto label_373cb4;
    }
    ctx->pc = 0x373CACu;
    {
        const bool branch_taken_0x373cac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x373cac) {
            ctx->pc = 0x373D44u;
            goto label_373d44;
        }
    }
    ctx->pc = 0x373CB4u;
label_373cb4:
    // 0x373cb4: 0x3c010057
    ctx->pc = 0x373cb4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373cb8:
    // 0x373cb8: 0x8c24aee8
    ctx->pc = 0x373cb8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_373cbc:
    // 0x373cbc: 0x3c010057
    ctx->pc = 0x373cbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373cc0:
    // 0x373cc0: 0x41840
    ctx->pc = 0x373cc0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
label_373cc4:
    // 0x373cc4: 0x8c22aee0
    ctx->pc = 0x373cc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
label_373cc8:
    // 0x373cc8: 0x641821
    ctx->pc = 0x373cc8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_373ccc:
    // 0x373ccc: 0x31940
    ctx->pc = 0x373cccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
label_373cd0:
    // 0x373cd0: 0x431021
    ctx->pc = 0x373cd0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_373cd4:
    // 0x373cd4: 0x3c010057
    ctx->pc = 0x373cd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373cd8:
    // 0x373cd8: 0xa040000c
    ctx->pc = 0x373cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 0));
label_373cdc:
    // 0x373cdc: 0x8c24aee8
    ctx->pc = 0x373cdcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_373ce0:
    // 0x373ce0: 0x3c010057
    ctx->pc = 0x373ce0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373ce4:
    // 0x373ce4: 0x41840
    ctx->pc = 0x373ce4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
label_373ce8:
    // 0x373ce8: 0x8c22aee0
    ctx->pc = 0x373ce8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
label_373cec:
    // 0x373cec: 0x641821
    ctx->pc = 0x373cecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_373cf0:
    // 0x373cf0: 0x31940
    ctx->pc = 0x373cf0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
label_373cf4:
    // 0x373cf4: 0x431021
    ctx->pc = 0x373cf4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_373cf8:
    // 0x373cf8: 0x3c010057
    ctx->pc = 0x373cf8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373cfc:
    // 0x373cfc: 0xac400058
    ctx->pc = 0x373cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_373d00:
    // 0x373d00: 0x8c24aee8
    ctx->pc = 0x373d00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_373d04:
    // 0x373d04: 0x3c010057
    ctx->pc = 0x373d04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373d08:
    // 0x373d08: 0x41840
    ctx->pc = 0x373d08u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
label_373d0c:
    // 0x373d0c: 0x8c22aee0
    ctx->pc = 0x373d0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
label_373d10:
    // 0x373d10: 0x641821
    ctx->pc = 0x373d10u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_373d14:
    // 0x373d14: 0x31940
    ctx->pc = 0x373d14u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
label_373d18:
    // 0x373d18: 0x431021
    ctx->pc = 0x373d18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_373d1c:
    // 0x373d1c: 0x3c010057
    ctx->pc = 0x373d1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373d20:
    // 0x373d20: 0xac400054
    ctx->pc = 0x373d20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
label_373d24:
    // 0x373d24: 0x8c24aee8
    ctx->pc = 0x373d24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_373d28:
    // 0x373d28: 0x3c010057
    ctx->pc = 0x373d28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373d2c:
    // 0x373d2c: 0x41840
    ctx->pc = 0x373d2cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
label_373d30:
    // 0x373d30: 0x8c22aee0
    ctx->pc = 0x373d30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
label_373d34:
    // 0x373d34: 0x641821
    ctx->pc = 0x373d34u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_373d38:
    // 0x373d38: 0x31940
    ctx->pc = 0x373d38u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
label_373d3c:
    // 0x373d3c: 0x431021
    ctx->pc = 0x373d3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_373d40:
    // 0x373d40: 0xac400050
    ctx->pc = 0x373d40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_373d44:
    // 0x373d44: 0x3c010057
    ctx->pc = 0x373d44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373d48:
    // 0x373d48: 0x3c040037
    ctx->pc = 0x373d48u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
label_373d4c:
    // 0x373d4c: 0x8c25aee8
    ctx->pc = 0x373d4cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_373d50:
    // 0x373d50: 0x24844560
    ctx->pc = 0x373d50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17760));
label_373d54:
    // 0x373d54: 0x27a600c0
    ctx->pc = 0x373d54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 192));
label_373d58:
    // 0x373d58: 0x3c010057
    ctx->pc = 0x373d58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373d5c:
    // 0x373d5c: 0x51840
    ctx->pc = 0x373d5cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
label_373d60:
    // 0x373d60: 0x8c22aee0
    ctx->pc = 0x373d60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
label_373d64:
    // 0x373d64: 0x651821
    ctx->pc = 0x373d64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_373d68:
    // 0x373d68: 0x31940
    ctx->pc = 0x373d68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
label_373d6c:
    // 0x373d6c: 0xc06c8f8
label_373d70:
    if (ctx->pc == 0x373D70u) {
        ctx->pc = 0x373D70u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x373D74u;
        goto label_373d74;
    }
    ctx->pc = 0x373D6Cu;
    SET_GPR_U32(ctx, 31, 0x373D74u);
    ctx->pc = 0x373D70u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1B23E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B23E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373D74u; }
        if (ctx->pc != 0x373D74u) { return; }
    }
    ctx->pc = 0x373D74u;
label_373d74:
    // 0x373d74: 0x3c010057
    ctx->pc = 0x373d74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373d78:
    // 0x373d78: 0x8c23aee8
    ctx->pc = 0x373d78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
label_373d7c:
    // 0x373d7c: 0x24630001
    ctx->pc = 0x373d7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_373d80:
    // 0x373d80: 0x3c010057
    ctx->pc = 0x373d80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373d84:
    // 0x373d84: 0x10000054
label_373d88:
    if (ctx->pc == 0x373D88u) {
        ctx->pc = 0x373D88u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294946536), GPR_U32(ctx, 3));
        ctx->pc = 0x373D8Cu;
        goto label_373d8c;
    }
    ctx->pc = 0x373D84u;
    {
        const bool branch_taken_0x373d84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x373D88u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294946536), GPR_U32(ctx, 3));
        if (branch_taken_0x373d84) {
            ctx->pc = 0x373ED8u;
            goto label_373ed8;
        }
    }
    ctx->pc = 0x373D8Cu;
label_373d8c:
    // 0x373d8c: 0x882d
    ctx->pc = 0x373d8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_373d90:
    // 0x373d90: 0x10000013
label_373d94:
    if (ctx->pc == 0x373D94u) {
        ctx->pc = 0x373D94u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2056)));
        ctx->pc = 0x373D98u;
        goto label_373d98;
    }
    ctx->pc = 0x373D90u;
    {
        const bool branch_taken_0x373d90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x373D94u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2056)));
        if (branch_taken_0x373d90) {
            ctx->pc = 0x373DE0u;
            goto label_373de0;
        }
    }
    ctx->pc = 0x373D98u;
label_373d98:
    // 0x373d98: 0x2623003a
    ctx->pc = 0x373d98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 58));
label_373d9c:
    // 0x373d9c: 0x821021
    ctx->pc = 0x373d9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_373da0:
    // 0x373da0: 0x306400ff
    ctx->pc = 0x373da0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 255));
label_373da4:
    // 0x373da4: 0x8c430008
    ctx->pc = 0x373da4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_373da8:
    // 0x373da8: 0x31840
    ctx->pc = 0x373da8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
label_373dac:
    // 0x373dac: 0x3c02004f
    ctx->pc = 0x373dacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)79 << 16));
label_373db0:
    // 0x373db0: 0x2431821
    ctx->pc = 0x373db0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_373db4:
    // 0x373db4: 0x2442dd90
    ctx->pc = 0x373db4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958480));
label_373db8:
    // 0x373db8: 0x94650008
    ctx->pc = 0x373db8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_373dbc:
    // 0x373dbc: 0x518c0
    ctx->pc = 0x373dbcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
label_373dc0:
    // 0x373dc0: 0x651821
    ctx->pc = 0x373dc0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_373dc4:
    // 0x373dc4: 0x31840
    ctx->pc = 0x373dc4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
label_373dc8:
    // 0x373dc8: 0x651821
    ctx->pc = 0x373dc8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_373dcc:
    // 0x373dcc: 0x31880
    ctx->pc = 0x373dccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_373dd0:
    // 0x373dd0: 0xc06bde0
label_373dd4:
    if (ctx->pc == 0x373DD4u) {
        ctx->pc = 0x373DD4u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x373DD8u;
        goto label_373dd8;
    }
    ctx->pc = 0x373DD0u;
    SET_GPR_U32(ctx, 31, 0x373DD8u);
    ctx->pc = 0x373DD4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373DD8u; }
        if (ctx->pc != 0x373DD8u) { return; }
    }
    ctx->pc = 0x373DD8u;
label_373dd8:
    // 0x373dd8: 0x26310001
    ctx->pc = 0x373dd8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_373ddc:
    // 0x373ddc: 0x8e420808
    ctx->pc = 0x373ddcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2056)));
label_373de0:
    // 0x373de0: 0x2c22021
    ctx->pc = 0x373de0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_373de4:
    // 0x373de4: 0x8c820004
    ctx->pc = 0x373de4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_373de8:
    // 0x373de8: 0x222102a
    ctx->pc = 0x373de8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
label_373dec:
    // 0x373dec: 0x1440ffea
label_373df0:
    if (ctx->pc == 0x373DF0u) {
        ctx->pc = 0x373DF0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x373DF4u;
        goto label_373df4;
    }
    ctx->pc = 0x373DECu;
    {
        const bool branch_taken_0x373dec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x373DF0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x373dec) {
            ctx->pc = 0x373D98u;
            goto label_373d98;
        }
    }
    ctx->pc = 0x373DF4u;
label_373df4:
    // 0x373df4: 0x90820088
    ctx->pc = 0x373df4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 136)));
label_373df8:
    // 0x373df8: 0x10400005
label_373dfc:
    if (ctx->pc == 0x373DFCu) {
        ctx->pc = 0x373DFCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 188));
        ctx->pc = 0x373E00u;
        goto label_373e00;
    }
    ctx->pc = 0x373DF8u;
    {
        const bool branch_taken_0x373df8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x373DFCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 188));
        if (branch_taken_0x373df8) {
            ctx->pc = 0x373E10u;
            goto label_373e10;
        }
    }
    ctx->pc = 0x373E00u;
label_373e00:
    // 0x373e00: 0xc0dd2c8
label_373e04:
    if (ctx->pc == 0x373E04u) {
        ctx->pc = 0x373E08u;
        goto label_373e08;
    }
    ctx->pc = 0x373E00u;
    SET_GPR_U32(ctx, 31, 0x373E08u);
    ctx->pc = 0x374B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00374B20_0x374b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373E08u; }
    }
    if (ctx->pc != 0x373E08u) { return; }
    ctx->pc = 0x373E08u;
label_373e08:
    // 0x373e08: 0x10000004
label_373e0c:
    if (ctx->pc == 0x373E0Cu) {
        ctx->pc = 0x373E0Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->pc = 0x373E10u;
        goto label_373e10;
    }
    ctx->pc = 0x373E08u;
    {
        const bool branch_taken_0x373e08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x373E0Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 188)));
        if (branch_taken_0x373e08) {
            ctx->pc = 0x373E1Cu;
            goto label_373e1c;
        }
    }
    ctx->pc = 0x373E10u;
label_373e10:
    // 0x373e10: 0xc0dd300
label_373e14:
    if (ctx->pc == 0x373E14u) {
        ctx->pc = 0x373E18u;
        goto label_373e18;
    }
    ctx->pc = 0x373E10u;
    SET_GPR_U32(ctx, 31, 0x373E18u);
    ctx->pc = 0x374C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00374C00_0x374c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373E18u; }
    }
    if (ctx->pc != 0x373E18u) { return; }
    ctx->pc = 0x373E18u;
label_373e18:
    // 0x373e18: 0x8fa500bc
    ctx->pc = 0x373e18u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_373e1c:
    // 0x373e1c: 0xc06bde0
label_373e20:
    if (ctx->pc == 0x373E20u) {
        ctx->pc = 0x373E20u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 103));
        ctx->pc = 0x373E24u;
        goto label_373e24;
    }
    ctx->pc = 0x373E1Cu;
    SET_GPR_U32(ctx, 31, 0x373E24u);
    ctx->pc = 0x373E20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 103));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373E24u; }
        if (ctx->pc != 0x373E24u) { return; }
    }
    ctx->pc = 0x373E24u;
label_373e24:
    // 0x373e24: 0x1260001a
label_373e28:
    if (ctx->pc == 0x373E28u) {
        ctx->pc = 0x373E2Cu;
        goto label_373e2c;
    }
    ctx->pc = 0x373E24u;
    {
        const bool branch_taken_0x373e24 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x373e24) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x373E2Cu;
label_373e2c:
    // 0x373e2c: 0x86620006
    ctx->pc = 0x373e2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
label_373e30:
    // 0x373e30: 0x10400017
label_373e34:
    if (ctx->pc == 0x373E34u) {
        ctx->pc = 0x373E38u;
        goto label_373e38;
    }
    ctx->pc = 0x373E30u;
    {
        const bool branch_taken_0x373e30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x373e30) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x373E38u;
label_373e38:
    // 0x373e38: 0x86620004
    ctx->pc = 0x373e38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_373e3c:
    // 0x373e3c: 0x1454000a
label_373e40:
    if (ctx->pc == 0x373E40u) {
        ctx->pc = 0x373E44u;
        goto label_373e44;
    }
    ctx->pc = 0x373E3Cu;
    {
        const bool branch_taken_0x373e3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 20));
        if (branch_taken_0x373e3c) {
            ctx->pc = 0x373E68u;
            goto label_373e68;
        }
    }
    ctx->pc = 0x373E44u;
label_373e44:
    // 0x373e44: 0x8e420000
    ctx->pc = 0x373e44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_373e48:
    // 0x373e48: 0x26a40038
    ctx->pc = 0x373e48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 56));
label_373e4c:
    // 0x373e4c: 0x26a50090
    ctx->pc = 0x373e4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 144));
label_373e50:
    // 0x373e50: 0x8c42000c
    ctx->pc = 0x373e50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_373e54:
    // 0x373e54: 0xc0dd3c4
label_373e58:
    if (ctx->pc == 0x373E58u) {
        ctx->pc = 0x373E58u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 64));
        ctx->pc = 0x373E5Cu;
        goto label_373e5c;
    }
    ctx->pc = 0x373E54u;
    SET_GPR_U32(ctx, 31, 0x373E5Cu);
    ctx->pc = 0x373E58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x374F10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00374F10_0x374f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373E5Cu; }
    }
    if (ctx->pc != 0x373E5Cu) { return; }
    ctx->pc = 0x373E5Cu;
label_373e5c:
    // 0x373e5c: 0x2404005e
    ctx->pc = 0x373e5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 94));
label_373e60:
    // 0x373e60: 0xc06bde0
label_373e64:
    if (ctx->pc == 0x373E64u) {
        ctx->pc = 0x373E64u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x373E68u;
        goto label_373e68;
    }
    ctx->pc = 0x373E60u;
    SET_GPR_U32(ctx, 31, 0x373E68u);
    ctx->pc = 0x373E64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 18));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373E68u; }
        if (ctx->pc != 0x373E68u) { return; }
    }
    ctx->pc = 0x373E68u;
label_373e68:
    // 0x373e68: 0x86630004
    ctx->pc = 0x373e68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_373e6c:
    // 0x373e6c: 0x86620006
    ctx->pc = 0x373e6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
label_373e70:
    // 0x373e70: 0x621021
    ctx->pc = 0x373e70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_373e74:
    // 0x373e74: 0x16820006
label_373e78:
    if (ctx->pc == 0x373E78u) {
        ctx->pc = 0x373E7Cu;
        goto label_373e7c;
    }
    ctx->pc = 0x373E74u;
    {
        const bool branch_taken_0x373e74 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        if (branch_taken_0x373e74) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x373E7Cu;
label_373e7c:
    // 0x373e7c: 0xc0dd46c
label_373e80:
    if (ctx->pc == 0x373E80u) {
        ctx->pc = 0x373E84u;
        goto label_373e84;
    }
    ctx->pc = 0x373E7Cu;
    SET_GPR_U32(ctx, 31, 0x373E84u);
    ctx->pc = 0x3751B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003751B0_0x3751b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373E84u; }
    }
    if (ctx->pc != 0x373E84u) { return; }
    ctx->pc = 0x373E84u;
label_373e84:
    // 0x373e84: 0x2404005e
    ctx->pc = 0x373e84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 94));
label_373e88:
    // 0x373e88: 0xc06bde0
label_373e8c:
    if (ctx->pc == 0x373E8Cu) {
        ctx->pc = 0x373E8Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x373E90u;
        goto label_373e90;
    }
    ctx->pc = 0x373E88u;
    SET_GPR_U32(ctx, 31, 0x373E90u);
    ctx->pc = 0x373E8Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 50));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373E90u; }
        if (ctx->pc != 0x373E90u) { return; }
    }
    ctx->pc = 0x373E90u;
label_373e90:
    // 0x373e90: 0x13c00003
label_373e94:
    if (ctx->pc == 0x373E94u) {
        ctx->pc = 0x373E94u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x373E98u;
        goto label_373e98;
    }
    ctx->pc = 0x373E90u;
    {
        const bool branch_taken_0x373e90 = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        ctx->pc = 0x373E94u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x373e90) {
            ctx->pc = 0x373EA0u;
            goto label_373ea0;
        }
    }
    ctx->pc = 0x373E98u;
label_373e98:
    // 0x373e98: 0x3c0f809
label_373e9c:
    if (ctx->pc == 0x373E9Cu) {
        ctx->pc = 0x373E9Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x373EA0u;
        goto label_373ea0;
    }
    ctx->pc = 0x373E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x373EA0u);
        ctx->pc = 0x373E9Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x373630u: goto label_373630;
            case 0x373634u: goto label_373634;
            case 0x373638u: goto label_373638;
            case 0x37363Cu: goto label_37363c;
            case 0x373640u: goto label_373640;
            case 0x373644u: goto label_373644;
            case 0x373648u: goto label_373648;
            case 0x37364Cu: goto label_37364c;
            case 0x373650u: goto label_373650;
            case 0x373654u: goto label_373654;
            case 0x373658u: goto label_373658;
            case 0x37365Cu: goto label_37365c;
            case 0x373660u: goto label_373660;
            case 0x373664u: goto label_373664;
            case 0x373668u: goto label_373668;
            case 0x37366Cu: goto label_37366c;
            case 0x373670u: goto label_373670;
            case 0x373674u: goto label_373674;
            case 0x373678u: goto label_373678;
            case 0x37367Cu: goto label_37367c;
            case 0x373680u: goto label_373680;
            case 0x373684u: goto label_373684;
            case 0x373688u: goto label_373688;
            case 0x37368Cu: goto label_37368c;
            case 0x373690u: goto label_373690;
            case 0x373694u: goto label_373694;
            case 0x373698u: goto label_373698;
            case 0x37369Cu: goto label_37369c;
            case 0x3736A0u: goto label_3736a0;
            case 0x3736A4u: goto label_3736a4;
            case 0x3736A8u: goto label_3736a8;
            case 0x3736ACu: goto label_3736ac;
            case 0x3736B0u: goto label_3736b0;
            case 0x3736B4u: goto label_3736b4;
            case 0x3736B8u: goto label_3736b8;
            case 0x3736BCu: goto label_3736bc;
            case 0x3736C0u: goto label_3736c0;
            case 0x3736C4u: goto label_3736c4;
            case 0x3736C8u: goto label_3736c8;
            case 0x3736CCu: goto label_3736cc;
            case 0x3736D0u: goto label_3736d0;
            case 0x3736D4u: goto label_3736d4;
            case 0x3736D8u: goto label_3736d8;
            case 0x3736DCu: goto label_3736dc;
            case 0x3736E0u: goto label_3736e0;
            case 0x3736E4u: goto label_3736e4;
            case 0x3736E8u: goto label_3736e8;
            case 0x3736ECu: goto label_3736ec;
            case 0x3736F0u: goto label_3736f0;
            case 0x3736F4u: goto label_3736f4;
            case 0x3736F8u: goto label_3736f8;
            case 0x3736FCu: goto label_3736fc;
            case 0x373700u: goto label_373700;
            case 0x373704u: goto label_373704;
            case 0x373708u: goto label_373708;
            case 0x37370Cu: goto label_37370c;
            case 0x373710u: goto label_373710;
            case 0x373714u: goto label_373714;
            case 0x373718u: goto label_373718;
            case 0x37371Cu: goto label_37371c;
            case 0x373720u: goto label_373720;
            case 0x373724u: goto label_373724;
            case 0x373728u: goto label_373728;
            case 0x37372Cu: goto label_37372c;
            case 0x373730u: goto label_373730;
            case 0x373734u: goto label_373734;
            case 0x373738u: goto label_373738;
            case 0x37373Cu: goto label_37373c;
            case 0x373740u: goto label_373740;
            case 0x373744u: goto label_373744;
            case 0x373748u: goto label_373748;
            case 0x37374Cu: goto label_37374c;
            case 0x373750u: goto label_373750;
            case 0x373754u: goto label_373754;
            case 0x373758u: goto label_373758;
            case 0x37375Cu: goto label_37375c;
            case 0x373760u: goto label_373760;
            case 0x373764u: goto label_373764;
            case 0x373768u: goto label_373768;
            case 0x37376Cu: goto label_37376c;
            case 0x373770u: goto label_373770;
            case 0x373774u: goto label_373774;
            case 0x373778u: goto label_373778;
            case 0x37377Cu: goto label_37377c;
            case 0x373780u: goto label_373780;
            case 0x373784u: goto label_373784;
            case 0x373788u: goto label_373788;
            case 0x37378Cu: goto label_37378c;
            case 0x373790u: goto label_373790;
            case 0x373794u: goto label_373794;
            case 0x373798u: goto label_373798;
            case 0x37379Cu: goto label_37379c;
            case 0x3737A0u: goto label_3737a0;
            case 0x3737A4u: goto label_3737a4;
            case 0x3737A8u: goto label_3737a8;
            case 0x3737ACu: goto label_3737ac;
            case 0x3737B0u: goto label_3737b0;
            case 0x3737B4u: goto label_3737b4;
            case 0x3737B8u: goto label_3737b8;
            case 0x3737BCu: goto label_3737bc;
            case 0x3737C0u: goto label_3737c0;
            case 0x3737C4u: goto label_3737c4;
            case 0x3737C8u: goto label_3737c8;
            case 0x3737CCu: goto label_3737cc;
            case 0x3737D0u: goto label_3737d0;
            case 0x3737D4u: goto label_3737d4;
            case 0x3737D8u: goto label_3737d8;
            case 0x3737DCu: goto label_3737dc;
            case 0x3737E0u: goto label_3737e0;
            case 0x3737E4u: goto label_3737e4;
            case 0x3737E8u: goto label_3737e8;
            case 0x3737ECu: goto label_3737ec;
            case 0x3737F0u: goto label_3737f0;
            case 0x3737F4u: goto label_3737f4;
            case 0x3737F8u: goto label_3737f8;
            case 0x3737FCu: goto label_3737fc;
            case 0x373800u: goto label_373800;
            case 0x373804u: goto label_373804;
            case 0x373808u: goto label_373808;
            case 0x37380Cu: goto label_37380c;
            case 0x373810u: goto label_373810;
            case 0x373814u: goto label_373814;
            case 0x373818u: goto label_373818;
            case 0x37381Cu: goto label_37381c;
            case 0x373820u: goto label_373820;
            case 0x373824u: goto label_373824;
            case 0x373828u: goto label_373828;
            case 0x37382Cu: goto label_37382c;
            case 0x373830u: goto label_373830;
            case 0x373834u: goto label_373834;
            case 0x373838u: goto label_373838;
            case 0x37383Cu: goto label_37383c;
            case 0x373840u: goto label_373840;
            case 0x373844u: goto label_373844;
            case 0x373848u: goto label_373848;
            case 0x37384Cu: goto label_37384c;
            case 0x373850u: goto label_373850;
            case 0x373854u: goto label_373854;
            case 0x373858u: goto label_373858;
            case 0x37385Cu: goto label_37385c;
            case 0x373860u: goto label_373860;
            case 0x373864u: goto label_373864;
            case 0x373868u: goto label_373868;
            case 0x37386Cu: goto label_37386c;
            case 0x373870u: goto label_373870;
            case 0x373874u: goto label_373874;
            case 0x373878u: goto label_373878;
            case 0x37387Cu: goto label_37387c;
            case 0x373880u: goto label_373880;
            case 0x373884u: goto label_373884;
            case 0x373888u: goto label_373888;
            case 0x37388Cu: goto label_37388c;
            case 0x373890u: goto label_373890;
            case 0x373894u: goto label_373894;
            case 0x373898u: goto label_373898;
            case 0x37389Cu: goto label_37389c;
            case 0x3738A0u: goto label_3738a0;
            case 0x3738A4u: goto label_3738a4;
            case 0x3738A8u: goto label_3738a8;
            case 0x3738ACu: goto label_3738ac;
            case 0x3738B0u: goto label_3738b0;
            case 0x3738B4u: goto label_3738b4;
            case 0x3738B8u: goto label_3738b8;
            case 0x3738BCu: goto label_3738bc;
            case 0x3738C0u: goto label_3738c0;
            case 0x3738C4u: goto label_3738c4;
            case 0x3738C8u: goto label_3738c8;
            case 0x3738CCu: goto label_3738cc;
            case 0x3738D0u: goto label_3738d0;
            case 0x3738D4u: goto label_3738d4;
            case 0x3738D8u: goto label_3738d8;
            case 0x3738DCu: goto label_3738dc;
            case 0x3738E0u: goto label_3738e0;
            case 0x3738E4u: goto label_3738e4;
            case 0x3738E8u: goto label_3738e8;
            case 0x3738ECu: goto label_3738ec;
            case 0x3738F0u: goto label_3738f0;
            case 0x3738F4u: goto label_3738f4;
            case 0x3738F8u: goto label_3738f8;
            case 0x3738FCu: goto label_3738fc;
            case 0x373900u: goto label_373900;
            case 0x373904u: goto label_373904;
            case 0x373908u: goto label_373908;
            case 0x37390Cu: goto label_37390c;
            case 0x373910u: goto label_373910;
            case 0x373914u: goto label_373914;
            case 0x373918u: goto label_373918;
            case 0x37391Cu: goto label_37391c;
            case 0x373920u: goto label_373920;
            case 0x373924u: goto label_373924;
            case 0x373928u: goto label_373928;
            case 0x37392Cu: goto label_37392c;
            case 0x373930u: goto label_373930;
            case 0x373934u: goto label_373934;
            case 0x373938u: goto label_373938;
            case 0x37393Cu: goto label_37393c;
            case 0x373940u: goto label_373940;
            case 0x373944u: goto label_373944;
            case 0x373948u: goto label_373948;
            case 0x37394Cu: goto label_37394c;
            case 0x373950u: goto label_373950;
            case 0x373954u: goto label_373954;
            case 0x373958u: goto label_373958;
            case 0x37395Cu: goto label_37395c;
            case 0x373960u: goto label_373960;
            case 0x373964u: goto label_373964;
            case 0x373968u: goto label_373968;
            case 0x37396Cu: goto label_37396c;
            case 0x373970u: goto label_373970;
            case 0x373974u: goto label_373974;
            case 0x373978u: goto label_373978;
            case 0x37397Cu: goto label_37397c;
            case 0x373980u: goto label_373980;
            case 0x373984u: goto label_373984;
            case 0x373988u: goto label_373988;
            case 0x37398Cu: goto label_37398c;
            case 0x373990u: goto label_373990;
            case 0x373994u: goto label_373994;
            case 0x373998u: goto label_373998;
            case 0x37399Cu: goto label_37399c;
            case 0x3739A0u: goto label_3739a0;
            case 0x3739A4u: goto label_3739a4;
            case 0x3739A8u: goto label_3739a8;
            case 0x3739ACu: goto label_3739ac;
            case 0x3739B0u: goto label_3739b0;
            case 0x3739B4u: goto label_3739b4;
            case 0x3739B8u: goto label_3739b8;
            case 0x3739BCu: goto label_3739bc;
            case 0x3739C0u: goto label_3739c0;
            case 0x3739C4u: goto label_3739c4;
            case 0x3739C8u: goto label_3739c8;
            case 0x3739CCu: goto label_3739cc;
            case 0x3739D0u: goto label_3739d0;
            case 0x3739D4u: goto label_3739d4;
            case 0x3739D8u: goto label_3739d8;
            case 0x3739DCu: goto label_3739dc;
            case 0x3739E0u: goto label_3739e0;
            case 0x3739E4u: goto label_3739e4;
            case 0x3739E8u: goto label_3739e8;
            case 0x3739ECu: goto label_3739ec;
            case 0x3739F0u: goto label_3739f0;
            case 0x3739F4u: goto label_3739f4;
            case 0x3739F8u: goto label_3739f8;
            case 0x3739FCu: goto label_3739fc;
            case 0x373A00u: goto label_373a00;
            case 0x373A04u: goto label_373a04;
            case 0x373A08u: goto label_373a08;
            case 0x373A0Cu: goto label_373a0c;
            case 0x373A10u: goto label_373a10;
            case 0x373A14u: goto label_373a14;
            case 0x373A18u: goto label_373a18;
            case 0x373A1Cu: goto label_373a1c;
            case 0x373A20u: goto label_373a20;
            case 0x373A24u: goto label_373a24;
            case 0x373A28u: goto label_373a28;
            case 0x373A2Cu: goto label_373a2c;
            case 0x373A30u: goto label_373a30;
            case 0x373A34u: goto label_373a34;
            case 0x373A38u: goto label_373a38;
            case 0x373A3Cu: goto label_373a3c;
            case 0x373A40u: goto label_373a40;
            case 0x373A44u: goto label_373a44;
            case 0x373A48u: goto label_373a48;
            case 0x373A4Cu: goto label_373a4c;
            case 0x373A50u: goto label_373a50;
            case 0x373A54u: goto label_373a54;
            case 0x373A58u: goto label_373a58;
            case 0x373A5Cu: goto label_373a5c;
            case 0x373A60u: goto label_373a60;
            case 0x373A64u: goto label_373a64;
            case 0x373A68u: goto label_373a68;
            case 0x373A6Cu: goto label_373a6c;
            case 0x373A70u: goto label_373a70;
            case 0x373A74u: goto label_373a74;
            case 0x373A78u: goto label_373a78;
            case 0x373A7Cu: goto label_373a7c;
            case 0x373A80u: goto label_373a80;
            case 0x373A84u: goto label_373a84;
            case 0x373A88u: goto label_373a88;
            case 0x373A8Cu: goto label_373a8c;
            case 0x373A90u: goto label_373a90;
            case 0x373A94u: goto label_373a94;
            case 0x373A98u: goto label_373a98;
            case 0x373A9Cu: goto label_373a9c;
            case 0x373AA0u: goto label_373aa0;
            case 0x373AA4u: goto label_373aa4;
            case 0x373AA8u: goto label_373aa8;
            case 0x373AACu: goto label_373aac;
            case 0x373AB0u: goto label_373ab0;
            case 0x373AB4u: goto label_373ab4;
            case 0x373AB8u: goto label_373ab8;
            case 0x373ABCu: goto label_373abc;
            case 0x373AC0u: goto label_373ac0;
            case 0x373AC4u: goto label_373ac4;
            case 0x373AC8u: goto label_373ac8;
            case 0x373ACCu: goto label_373acc;
            case 0x373AD0u: goto label_373ad0;
            case 0x373AD4u: goto label_373ad4;
            case 0x373AD8u: goto label_373ad8;
            case 0x373ADCu: goto label_373adc;
            case 0x373AE0u: goto label_373ae0;
            case 0x373AE4u: goto label_373ae4;
            case 0x373AE8u: goto label_373ae8;
            case 0x373AECu: goto label_373aec;
            case 0x373AF0u: goto label_373af0;
            case 0x373AF4u: goto label_373af4;
            case 0x373AF8u: goto label_373af8;
            case 0x373AFCu: goto label_373afc;
            case 0x373B00u: goto label_373b00;
            case 0x373B04u: goto label_373b04;
            case 0x373B08u: goto label_373b08;
            case 0x373B0Cu: goto label_373b0c;
            case 0x373B10u: goto label_373b10;
            case 0x373B14u: goto label_373b14;
            case 0x373B18u: goto label_373b18;
            case 0x373B1Cu: goto label_373b1c;
            case 0x373B20u: goto label_373b20;
            case 0x373B24u: goto label_373b24;
            case 0x373B28u: goto label_373b28;
            case 0x373B2Cu: goto label_373b2c;
            case 0x373B30u: goto label_373b30;
            case 0x373B34u: goto label_373b34;
            case 0x373B38u: goto label_373b38;
            case 0x373B3Cu: goto label_373b3c;
            case 0x373B40u: goto label_373b40;
            case 0x373B44u: goto label_373b44;
            case 0x373B48u: goto label_373b48;
            case 0x373B4Cu: goto label_373b4c;
            case 0x373B50u: goto label_373b50;
            case 0x373B54u: goto label_373b54;
            case 0x373B58u: goto label_373b58;
            case 0x373B5Cu: goto label_373b5c;
            case 0x373B60u: goto label_373b60;
            case 0x373B64u: goto label_373b64;
            case 0x373B68u: goto label_373b68;
            case 0x373B6Cu: goto label_373b6c;
            case 0x373B70u: goto label_373b70;
            case 0x373B74u: goto label_373b74;
            case 0x373B78u: goto label_373b78;
            case 0x373B7Cu: goto label_373b7c;
            case 0x373B80u: goto label_373b80;
            case 0x373B84u: goto label_373b84;
            case 0x373B88u: goto label_373b88;
            case 0x373B8Cu: goto label_373b8c;
            case 0x373B90u: goto label_373b90;
            case 0x373B94u: goto label_373b94;
            case 0x373B98u: goto label_373b98;
            case 0x373B9Cu: goto label_373b9c;
            case 0x373BA0u: goto label_373ba0;
            case 0x373BA4u: goto label_373ba4;
            case 0x373BA8u: goto label_373ba8;
            case 0x373BACu: goto label_373bac;
            case 0x373BB0u: goto label_373bb0;
            case 0x373BB4u: goto label_373bb4;
            case 0x373BB8u: goto label_373bb8;
            case 0x373BBCu: goto label_373bbc;
            case 0x373BC0u: goto label_373bc0;
            case 0x373BC4u: goto label_373bc4;
            case 0x373BC8u: goto label_373bc8;
            case 0x373BCCu: goto label_373bcc;
            case 0x373BD0u: goto label_373bd0;
            case 0x373BD4u: goto label_373bd4;
            case 0x373BD8u: goto label_373bd8;
            case 0x373BDCu: goto label_373bdc;
            case 0x373BE0u: goto label_373be0;
            case 0x373BE4u: goto label_373be4;
            case 0x373BE8u: goto label_373be8;
            case 0x373BECu: goto label_373bec;
            case 0x373BF0u: goto label_373bf0;
            case 0x373BF4u: goto label_373bf4;
            case 0x373BF8u: goto label_373bf8;
            case 0x373BFCu: goto label_373bfc;
            case 0x373C00u: goto label_373c00;
            case 0x373C04u: goto label_373c04;
            case 0x373C08u: goto label_373c08;
            case 0x373C0Cu: goto label_373c0c;
            case 0x373C10u: goto label_373c10;
            case 0x373C14u: goto label_373c14;
            case 0x373C18u: goto label_373c18;
            case 0x373C1Cu: goto label_373c1c;
            case 0x373C20u: goto label_373c20;
            case 0x373C24u: goto label_373c24;
            case 0x373C28u: goto label_373c28;
            case 0x373C2Cu: goto label_373c2c;
            case 0x373C30u: goto label_373c30;
            case 0x373C34u: goto label_373c34;
            case 0x373C38u: goto label_373c38;
            case 0x373C3Cu: goto label_373c3c;
            case 0x373C40u: goto label_373c40;
            case 0x373C44u: goto label_373c44;
            case 0x373C48u: goto label_373c48;
            case 0x373C4Cu: goto label_373c4c;
            case 0x373C50u: goto label_373c50;
            case 0x373C54u: goto label_373c54;
            case 0x373C58u: goto label_373c58;
            case 0x373C5Cu: goto label_373c5c;
            case 0x373C60u: goto label_373c60;
            case 0x373C64u: goto label_373c64;
            case 0x373C68u: goto label_373c68;
            case 0x373C6Cu: goto label_373c6c;
            case 0x373C70u: goto label_373c70;
            case 0x373C74u: goto label_373c74;
            case 0x373C78u: goto label_373c78;
            case 0x373C7Cu: goto label_373c7c;
            case 0x373C80u: goto label_373c80;
            case 0x373C84u: goto label_373c84;
            case 0x373C88u: goto label_373c88;
            case 0x373C8Cu: goto label_373c8c;
            case 0x373C90u: goto label_373c90;
            case 0x373C94u: goto label_373c94;
            case 0x373C98u: goto label_373c98;
            case 0x373C9Cu: goto label_373c9c;
            case 0x373CA0u: goto label_373ca0;
            case 0x373CA4u: goto label_373ca4;
            case 0x373CA8u: goto label_373ca8;
            case 0x373CACu: goto label_373cac;
            case 0x373CB0u: goto label_373cb0;
            case 0x373CB4u: goto label_373cb4;
            case 0x373CB8u: goto label_373cb8;
            case 0x373CBCu: goto label_373cbc;
            case 0x373CC0u: goto label_373cc0;
            case 0x373CC4u: goto label_373cc4;
            case 0x373CC8u: goto label_373cc8;
            case 0x373CCCu: goto label_373ccc;
            case 0x373CD0u: goto label_373cd0;
            case 0x373CD4u: goto label_373cd4;
            case 0x373CD8u: goto label_373cd8;
            case 0x373CDCu: goto label_373cdc;
            case 0x373CE0u: goto label_373ce0;
            case 0x373CE4u: goto label_373ce4;
            case 0x373CE8u: goto label_373ce8;
            case 0x373CECu: goto label_373cec;
            case 0x373CF0u: goto label_373cf0;
            case 0x373CF4u: goto label_373cf4;
            case 0x373CF8u: goto label_373cf8;
            case 0x373CFCu: goto label_373cfc;
            case 0x373D00u: goto label_373d00;
            case 0x373D04u: goto label_373d04;
            case 0x373D08u: goto label_373d08;
            case 0x373D0Cu: goto label_373d0c;
            case 0x373D10u: goto label_373d10;
            case 0x373D14u: goto label_373d14;
            case 0x373D18u: goto label_373d18;
            case 0x373D1Cu: goto label_373d1c;
            case 0x373D20u: goto label_373d20;
            case 0x373D24u: goto label_373d24;
            case 0x373D28u: goto label_373d28;
            case 0x373D2Cu: goto label_373d2c;
            case 0x373D30u: goto label_373d30;
            case 0x373D34u: goto label_373d34;
            case 0x373D38u: goto label_373d38;
            case 0x373D3Cu: goto label_373d3c;
            case 0x373D40u: goto label_373d40;
            case 0x373D44u: goto label_373d44;
            case 0x373D48u: goto label_373d48;
            case 0x373D4Cu: goto label_373d4c;
            case 0x373D50u: goto label_373d50;
            case 0x373D54u: goto label_373d54;
            case 0x373D58u: goto label_373d58;
            case 0x373D5Cu: goto label_373d5c;
            case 0x373D60u: goto label_373d60;
            case 0x373D64u: goto label_373d64;
            case 0x373D68u: goto label_373d68;
            case 0x373D6Cu: goto label_373d6c;
            case 0x373D70u: goto label_373d70;
            case 0x373D74u: goto label_373d74;
            case 0x373D78u: goto label_373d78;
            case 0x373D7Cu: goto label_373d7c;
            case 0x373D80u: goto label_373d80;
            case 0x373D84u: goto label_373d84;
            case 0x373D88u: goto label_373d88;
            case 0x373D8Cu: goto label_373d8c;
            case 0x373D90u: goto label_373d90;
            case 0x373D94u: goto label_373d94;
            case 0x373D98u: goto label_373d98;
            case 0x373D9Cu: goto label_373d9c;
            case 0x373DA0u: goto label_373da0;
            case 0x373DA4u: goto label_373da4;
            case 0x373DA8u: goto label_373da8;
            case 0x373DACu: goto label_373dac;
            case 0x373DB0u: goto label_373db0;
            case 0x373DB4u: goto label_373db4;
            case 0x373DB8u: goto label_373db8;
            case 0x373DBCu: goto label_373dbc;
            case 0x373DC0u: goto label_373dc0;
            case 0x373DC4u: goto label_373dc4;
            case 0x373DC8u: goto label_373dc8;
            case 0x373DCCu: goto label_373dcc;
            case 0x373DD0u: goto label_373dd0;
            case 0x373DD4u: goto label_373dd4;
            case 0x373DD8u: goto label_373dd8;
            case 0x373DDCu: goto label_373ddc;
            case 0x373DE0u: goto label_373de0;
            case 0x373DE4u: goto label_373de4;
            case 0x373DE8u: goto label_373de8;
            case 0x373DECu: goto label_373dec;
            case 0x373DF0u: goto label_373df0;
            case 0x373DF4u: goto label_373df4;
            case 0x373DF8u: goto label_373df8;
            case 0x373DFCu: goto label_373dfc;
            case 0x373E00u: goto label_373e00;
            case 0x373E04u: goto label_373e04;
            case 0x373E08u: goto label_373e08;
            case 0x373E0Cu: goto label_373e0c;
            case 0x373E10u: goto label_373e10;
            case 0x373E14u: goto label_373e14;
            case 0x373E18u: goto label_373e18;
            case 0x373E1Cu: goto label_373e1c;
            case 0x373E20u: goto label_373e20;
            case 0x373E24u: goto label_373e24;
            case 0x373E28u: goto label_373e28;
            case 0x373E2Cu: goto label_373e2c;
            case 0x373E30u: goto label_373e30;
            case 0x373E34u: goto label_373e34;
            case 0x373E38u: goto label_373e38;
            case 0x373E3Cu: goto label_373e3c;
            case 0x373E40u: goto label_373e40;
            case 0x373E44u: goto label_373e44;
            case 0x373E48u: goto label_373e48;
            case 0x373E4Cu: goto label_373e4c;
            case 0x373E50u: goto label_373e50;
            case 0x373E54u: goto label_373e54;
            case 0x373E58u: goto label_373e58;
            case 0x373E5Cu: goto label_373e5c;
            case 0x373E60u: goto label_373e60;
            case 0x373E64u: goto label_373e64;
            case 0x373E68u: goto label_373e68;
            case 0x373E6Cu: goto label_373e6c;
            case 0x373E70u: goto label_373e70;
            case 0x373E74u: goto label_373e74;
            case 0x373E78u: goto label_373e78;
            case 0x373E7Cu: goto label_373e7c;
            case 0x373E80u: goto label_373e80;
            case 0x373E84u: goto label_373e84;
            case 0x373E88u: goto label_373e88;
            case 0x373E8Cu: goto label_373e8c;
            case 0x373E90u: goto label_373e90;
            case 0x373E94u: goto label_373e94;
            case 0x373E98u: goto label_373e98;
            case 0x373E9Cu: goto label_373e9c;
            case 0x373EA0u: goto label_373ea0;
            case 0x373EA4u: goto label_373ea4;
            case 0x373EA8u: goto label_373ea8;
            case 0x373EACu: goto label_373eac;
            case 0x373EB0u: goto label_373eb0;
            case 0x373EB4u: goto label_373eb4;
            case 0x373EB8u: goto label_373eb8;
            case 0x373EBCu: goto label_373ebc;
            case 0x373EC0u: goto label_373ec0;
            case 0x373EC4u: goto label_373ec4;
            case 0x373EC8u: goto label_373ec8;
            case 0x373ECCu: goto label_373ecc;
            case 0x373ED0u: goto label_373ed0;
            case 0x373ED4u: goto label_373ed4;
            case 0x373ED8u: goto label_373ed8;
            case 0x373EDCu: goto label_373edc;
            case 0x373EE0u: goto label_373ee0;
            case 0x373EE4u: goto label_373ee4;
            case 0x373EE8u: goto label_373ee8;
            case 0x373EECu: goto label_373eec;
            case 0x373EF0u: goto label_373ef0;
            case 0x373EF4u: goto label_373ef4;
            case 0x373EF8u: goto label_373ef8;
            case 0x373EFCu: goto label_373efc;
            case 0x373F00u: goto label_373f00;
            case 0x373F04u: goto label_373f04;
            case 0x373F08u: goto label_373f08;
            case 0x373F0Cu: goto label_373f0c;
            case 0x373F10u: goto label_373f10;
            case 0x373F14u: goto label_373f14;
            case 0x373F18u: goto label_373f18;
            case 0x373F1Cu: goto label_373f1c;
            case 0x373F20u: goto label_373f20;
            case 0x373F24u: goto label_373f24;
            case 0x373F28u: goto label_373f28;
            case 0x373F2Cu: goto label_373f2c;
            case 0x373F30u: goto label_373f30;
            case 0x373F34u: goto label_373f34;
            case 0x373F38u: goto label_373f38;
            case 0x373F3Cu: goto label_373f3c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x373EA0u; }
            if (ctx->pc != 0x373EA0u) { return; }
        }
    }
    ctx->pc = 0x373EA0u;
label_373ea0:
    // 0x373ea0: 0x8e430818
    ctx->pc = 0x373ea0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 2072)));
label_373ea4:
    // 0x373ea4: 0x10600007
label_373ea8:
    if (ctx->pc == 0x373EA8u) {
        ctx->pc = 0x373EACu;
        goto label_373eac;
    }
    ctx->pc = 0x373EA4u;
    {
        const bool branch_taken_0x373ea4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x373ea4) {
            ctx->pc = 0x373EC4u;
            goto label_373ec4;
        }
    }
    ctx->pc = 0x373EACu;
label_373eac:
    // 0x373eac: 0x8fa500b4
    ctx->pc = 0x373eacu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_373eb0:
    // 0x373eb0: 0x141140
    ctx->pc = 0x373eb0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 5));
label_373eb4:
    // 0x373eb4: 0x541021
    ctx->pc = 0x373eb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_373eb8:
    // 0x373eb8: 0x21040
    ctx->pc = 0x373eb8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_373ebc:
    // 0x373ebc: 0xc064a60
label_373ec0:
    if (ctx->pc == 0x373EC0u) {
        ctx->pc = 0x373EC0u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x373EC4u;
        goto label_373ec4;
    }
    ctx->pc = 0x373EBCu;
    SET_GPR_U32(ctx, 31, 0x373EC4u);
    ctx->pc = 0x373EC0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x192980u;
    {
        auto targetFn = runtime->lookupFunction(0x192980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373EC4u; }
        if (ctx->pc != 0x373EC4u) { return; }
    }
    ctx->pc = 0x373EC4u;
label_373ec4:
    // 0x373ec4: 0x8e420808
    ctx->pc = 0x373ec4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2056)));
label_373ec8:
    // 0x373ec8: 0x561021
    ctx->pc = 0x373ec8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_373ecc:
    // 0x373ecc: 0x8c440000
    ctx->pc = 0x373eccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_373ed0:
    // 0x373ed0: 0xc06305c
label_373ed4:
    if (ctx->pc == 0x373ED4u) {
        ctx->pc = 0x373ED4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x373ED8u;
        goto label_373ed8;
    }
    ctx->pc = 0x373ED0u;
    SET_GPR_U32(ctx, 31, 0x373ED8u);
    ctx->pc = 0x373ED4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C170u;
    {
        auto targetFn = runtime->lookupFunction(0x18C170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373ED8u; }
        if (ctx->pc != 0x373ED8u) { return; }
    }
    ctx->pc = 0x373ED8u;
label_373ed8:
    // 0x373ed8: 0x26940001
    ctx->pc = 0x373ed8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_373edc:
    // 0x373edc: 0x96430812
    ctx->pc = 0x373edcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2066)));
label_373ee0:
    // 0x373ee0: 0x283182a
    ctx->pc = 0x373ee0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
label_373ee4:
    // 0x373ee4: 0x1460fe07
label_373ee8:
    if (ctx->pc == 0x373EE8u) {
        ctx->pc = 0x373EECu;
        goto label_373eec;
    }
    ctx->pc = 0x373EE4u;
    {
        const bool branch_taken_0x373ee4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x373ee4) {
            ctx->pc = 0x373704u;
            goto label_373704;
        }
    }
    ctx->pc = 0x373EECu;
label_373eec:
    // 0x373eec: 0x93a300a0
    ctx->pc = 0x373eecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
label_373ef0:
    // 0x373ef0: 0x10600005
label_373ef4:
    if (ctx->pc == 0x373EF4u) {
        ctx->pc = 0x373EF4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        ctx->pc = 0x373EF8u;
        goto label_373ef8;
    }
    ctx->pc = 0x373EF0u;
    {
        const bool branch_taken_0x373ef0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x373EF4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x373ef0) {
            ctx->pc = 0x373F08u;
            goto label_373f08;
        }
    }
    ctx->pc = 0x373EF8u;
label_373ef8:
    // 0x373ef8: 0x9023aed8
    ctx->pc = 0x373ef8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946520)));
label_373efc:
    // 0x373efc: 0x24630001
    ctx->pc = 0x373efcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_373f00:
    // 0x373f00: 0x3c010057
    ctx->pc = 0x373f00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
label_373f04:
    // 0x373f04: 0xa023aed8
    ctx->pc = 0x373f04u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946520), (uint8_t)GPR_U32(ctx, 3));
label_373f08:
    // 0x373f08: 0xdfbf0090
    ctx->pc = 0x373f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_373f0c:
    // 0x373f0c: 0x7bbe0080
    ctx->pc = 0x373f0cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_373f10:
    // 0x373f10: 0x7bb70070
    ctx->pc = 0x373f10u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_373f14:
    // 0x373f14: 0x7bb60060
    ctx->pc = 0x373f14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_373f18:
    // 0x373f18: 0x7bb50050
    ctx->pc = 0x373f18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_373f1c:
    // 0x373f1c: 0x7bb40040
    ctx->pc = 0x373f1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_373f20:
    // 0x373f20: 0x7bb30030
    ctx->pc = 0x373f20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_373f24:
    // 0x373f24: 0x7bb20020
    ctx->pc = 0x373f24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_373f28:
    // 0x373f28: 0x7bb10010
    ctx->pc = 0x373f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_373f2c:
    // 0x373f2c: 0x7bb00000
    ctx->pc = 0x373f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_373f30:
    // 0x373f30: 0x3e00008
label_373f34:
    if (ctx->pc == 0x373F34u) {
        ctx->pc = 0x373F34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x373F38u;
        goto label_373f38;
    }
    ctx->pc = 0x373F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373F34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x373630u: goto label_373630;
            case 0x373634u: goto label_373634;
            case 0x373638u: goto label_373638;
            case 0x37363Cu: goto label_37363c;
            case 0x373640u: goto label_373640;
            case 0x373644u: goto label_373644;
            case 0x373648u: goto label_373648;
            case 0x37364Cu: goto label_37364c;
            case 0x373650u: goto label_373650;
            case 0x373654u: goto label_373654;
            case 0x373658u: goto label_373658;
            case 0x37365Cu: goto label_37365c;
            case 0x373660u: goto label_373660;
            case 0x373664u: goto label_373664;
            case 0x373668u: goto label_373668;
            case 0x37366Cu: goto label_37366c;
            case 0x373670u: goto label_373670;
            case 0x373674u: goto label_373674;
            case 0x373678u: goto label_373678;
            case 0x37367Cu: goto label_37367c;
            case 0x373680u: goto label_373680;
            case 0x373684u: goto label_373684;
            case 0x373688u: goto label_373688;
            case 0x37368Cu: goto label_37368c;
            case 0x373690u: goto label_373690;
            case 0x373694u: goto label_373694;
            case 0x373698u: goto label_373698;
            case 0x37369Cu: goto label_37369c;
            case 0x3736A0u: goto label_3736a0;
            case 0x3736A4u: goto label_3736a4;
            case 0x3736A8u: goto label_3736a8;
            case 0x3736ACu: goto label_3736ac;
            case 0x3736B0u: goto label_3736b0;
            case 0x3736B4u: goto label_3736b4;
            case 0x3736B8u: goto label_3736b8;
            case 0x3736BCu: goto label_3736bc;
            case 0x3736C0u: goto label_3736c0;
            case 0x3736C4u: goto label_3736c4;
            case 0x3736C8u: goto label_3736c8;
            case 0x3736CCu: goto label_3736cc;
            case 0x3736D0u: goto label_3736d0;
            case 0x3736D4u: goto label_3736d4;
            case 0x3736D8u: goto label_3736d8;
            case 0x3736DCu: goto label_3736dc;
            case 0x3736E0u: goto label_3736e0;
            case 0x3736E4u: goto label_3736e4;
            case 0x3736E8u: goto label_3736e8;
            case 0x3736ECu: goto label_3736ec;
            case 0x3736F0u: goto label_3736f0;
            case 0x3736F4u: goto label_3736f4;
            case 0x3736F8u: goto label_3736f8;
            case 0x3736FCu: goto label_3736fc;
            case 0x373700u: goto label_373700;
            case 0x373704u: goto label_373704;
            case 0x373708u: goto label_373708;
            case 0x37370Cu: goto label_37370c;
            case 0x373710u: goto label_373710;
            case 0x373714u: goto label_373714;
            case 0x373718u: goto label_373718;
            case 0x37371Cu: goto label_37371c;
            case 0x373720u: goto label_373720;
            case 0x373724u: goto label_373724;
            case 0x373728u: goto label_373728;
            case 0x37372Cu: goto label_37372c;
            case 0x373730u: goto label_373730;
            case 0x373734u: goto label_373734;
            case 0x373738u: goto label_373738;
            case 0x37373Cu: goto label_37373c;
            case 0x373740u: goto label_373740;
            case 0x373744u: goto label_373744;
            case 0x373748u: goto label_373748;
            case 0x37374Cu: goto label_37374c;
            case 0x373750u: goto label_373750;
            case 0x373754u: goto label_373754;
            case 0x373758u: goto label_373758;
            case 0x37375Cu: goto label_37375c;
            case 0x373760u: goto label_373760;
            case 0x373764u: goto label_373764;
            case 0x373768u: goto label_373768;
            case 0x37376Cu: goto label_37376c;
            case 0x373770u: goto label_373770;
            case 0x373774u: goto label_373774;
            case 0x373778u: goto label_373778;
            case 0x37377Cu: goto label_37377c;
            case 0x373780u: goto label_373780;
            case 0x373784u: goto label_373784;
            case 0x373788u: goto label_373788;
            case 0x37378Cu: goto label_37378c;
            case 0x373790u: goto label_373790;
            case 0x373794u: goto label_373794;
            case 0x373798u: goto label_373798;
            case 0x37379Cu: goto label_37379c;
            case 0x3737A0u: goto label_3737a0;
            case 0x3737A4u: goto label_3737a4;
            case 0x3737A8u: goto label_3737a8;
            case 0x3737ACu: goto label_3737ac;
            case 0x3737B0u: goto label_3737b0;
            case 0x3737B4u: goto label_3737b4;
            case 0x3737B8u: goto label_3737b8;
            case 0x3737BCu: goto label_3737bc;
            case 0x3737C0u: goto label_3737c0;
            case 0x3737C4u: goto label_3737c4;
            case 0x3737C8u: goto label_3737c8;
            case 0x3737CCu: goto label_3737cc;
            case 0x3737D0u: goto label_3737d0;
            case 0x3737D4u: goto label_3737d4;
            case 0x3737D8u: goto label_3737d8;
            case 0x3737DCu: goto label_3737dc;
            case 0x3737E0u: goto label_3737e0;
            case 0x3737E4u: goto label_3737e4;
            case 0x3737E8u: goto label_3737e8;
            case 0x3737ECu: goto label_3737ec;
            case 0x3737F0u: goto label_3737f0;
            case 0x3737F4u: goto label_3737f4;
            case 0x3737F8u: goto label_3737f8;
            case 0x3737FCu: goto label_3737fc;
            case 0x373800u: goto label_373800;
            case 0x373804u: goto label_373804;
            case 0x373808u: goto label_373808;
            case 0x37380Cu: goto label_37380c;
            case 0x373810u: goto label_373810;
            case 0x373814u: goto label_373814;
            case 0x373818u: goto label_373818;
            case 0x37381Cu: goto label_37381c;
            case 0x373820u: goto label_373820;
            case 0x373824u: goto label_373824;
            case 0x373828u: goto label_373828;
            case 0x37382Cu: goto label_37382c;
            case 0x373830u: goto label_373830;
            case 0x373834u: goto label_373834;
            case 0x373838u: goto label_373838;
            case 0x37383Cu: goto label_37383c;
            case 0x373840u: goto label_373840;
            case 0x373844u: goto label_373844;
            case 0x373848u: goto label_373848;
            case 0x37384Cu: goto label_37384c;
            case 0x373850u: goto label_373850;
            case 0x373854u: goto label_373854;
            case 0x373858u: goto label_373858;
            case 0x37385Cu: goto label_37385c;
            case 0x373860u: goto label_373860;
            case 0x373864u: goto label_373864;
            case 0x373868u: goto label_373868;
            case 0x37386Cu: goto label_37386c;
            case 0x373870u: goto label_373870;
            case 0x373874u: goto label_373874;
            case 0x373878u: goto label_373878;
            case 0x37387Cu: goto label_37387c;
            case 0x373880u: goto label_373880;
            case 0x373884u: goto label_373884;
            case 0x373888u: goto label_373888;
            case 0x37388Cu: goto label_37388c;
            case 0x373890u: goto label_373890;
            case 0x373894u: goto label_373894;
            case 0x373898u: goto label_373898;
            case 0x37389Cu: goto label_37389c;
            case 0x3738A0u: goto label_3738a0;
            case 0x3738A4u: goto label_3738a4;
            case 0x3738A8u: goto label_3738a8;
            case 0x3738ACu: goto label_3738ac;
            case 0x3738B0u: goto label_3738b0;
            case 0x3738B4u: goto label_3738b4;
            case 0x3738B8u: goto label_3738b8;
            case 0x3738BCu: goto label_3738bc;
            case 0x3738C0u: goto label_3738c0;
            case 0x3738C4u: goto label_3738c4;
            case 0x3738C8u: goto label_3738c8;
            case 0x3738CCu: goto label_3738cc;
            case 0x3738D0u: goto label_3738d0;
            case 0x3738D4u: goto label_3738d4;
            case 0x3738D8u: goto label_3738d8;
            case 0x3738DCu: goto label_3738dc;
            case 0x3738E0u: goto label_3738e0;
            case 0x3738E4u: goto label_3738e4;
            case 0x3738E8u: goto label_3738e8;
            case 0x3738ECu: goto label_3738ec;
            case 0x3738F0u: goto label_3738f0;
            case 0x3738F4u: goto label_3738f4;
            case 0x3738F8u: goto label_3738f8;
            case 0x3738FCu: goto label_3738fc;
            case 0x373900u: goto label_373900;
            case 0x373904u: goto label_373904;
            case 0x373908u: goto label_373908;
            case 0x37390Cu: goto label_37390c;
            case 0x373910u: goto label_373910;
            case 0x373914u: goto label_373914;
            case 0x373918u: goto label_373918;
            case 0x37391Cu: goto label_37391c;
            case 0x373920u: goto label_373920;
            case 0x373924u: goto label_373924;
            case 0x373928u: goto label_373928;
            case 0x37392Cu: goto label_37392c;
            case 0x373930u: goto label_373930;
            case 0x373934u: goto label_373934;
            case 0x373938u: goto label_373938;
            case 0x37393Cu: goto label_37393c;
            case 0x373940u: goto label_373940;
            case 0x373944u: goto label_373944;
            case 0x373948u: goto label_373948;
            case 0x37394Cu: goto label_37394c;
            case 0x373950u: goto label_373950;
            case 0x373954u: goto label_373954;
            case 0x373958u: goto label_373958;
            case 0x37395Cu: goto label_37395c;
            case 0x373960u: goto label_373960;
            case 0x373964u: goto label_373964;
            case 0x373968u: goto label_373968;
            case 0x37396Cu: goto label_37396c;
            case 0x373970u: goto label_373970;
            case 0x373974u: goto label_373974;
            case 0x373978u: goto label_373978;
            case 0x37397Cu: goto label_37397c;
            case 0x373980u: goto label_373980;
            case 0x373984u: goto label_373984;
            case 0x373988u: goto label_373988;
            case 0x37398Cu: goto label_37398c;
            case 0x373990u: goto label_373990;
            case 0x373994u: goto label_373994;
            case 0x373998u: goto label_373998;
            case 0x37399Cu: goto label_37399c;
            case 0x3739A0u: goto label_3739a0;
            case 0x3739A4u: goto label_3739a4;
            case 0x3739A8u: goto label_3739a8;
            case 0x3739ACu: goto label_3739ac;
            case 0x3739B0u: goto label_3739b0;
            case 0x3739B4u: goto label_3739b4;
            case 0x3739B8u: goto label_3739b8;
            case 0x3739BCu: goto label_3739bc;
            case 0x3739C0u: goto label_3739c0;
            case 0x3739C4u: goto label_3739c4;
            case 0x3739C8u: goto label_3739c8;
            case 0x3739CCu: goto label_3739cc;
            case 0x3739D0u: goto label_3739d0;
            case 0x3739D4u: goto label_3739d4;
            case 0x3739D8u: goto label_3739d8;
            case 0x3739DCu: goto label_3739dc;
            case 0x3739E0u: goto label_3739e0;
            case 0x3739E4u: goto label_3739e4;
            case 0x3739E8u: goto label_3739e8;
            case 0x3739ECu: goto label_3739ec;
            case 0x3739F0u: goto label_3739f0;
            case 0x3739F4u: goto label_3739f4;
            case 0x3739F8u: goto label_3739f8;
            case 0x3739FCu: goto label_3739fc;
            case 0x373A00u: goto label_373a00;
            case 0x373A04u: goto label_373a04;
            case 0x373A08u: goto label_373a08;
            case 0x373A0Cu: goto label_373a0c;
            case 0x373A10u: goto label_373a10;
            case 0x373A14u: goto label_373a14;
            case 0x373A18u: goto label_373a18;
            case 0x373A1Cu: goto label_373a1c;
            case 0x373A20u: goto label_373a20;
            case 0x373A24u: goto label_373a24;
            case 0x373A28u: goto label_373a28;
            case 0x373A2Cu: goto label_373a2c;
            case 0x373A30u: goto label_373a30;
            case 0x373A34u: goto label_373a34;
            case 0x373A38u: goto label_373a38;
            case 0x373A3Cu: goto label_373a3c;
            case 0x373A40u: goto label_373a40;
            case 0x373A44u: goto label_373a44;
            case 0x373A48u: goto label_373a48;
            case 0x373A4Cu: goto label_373a4c;
            case 0x373A50u: goto label_373a50;
            case 0x373A54u: goto label_373a54;
            case 0x373A58u: goto label_373a58;
            case 0x373A5Cu: goto label_373a5c;
            case 0x373A60u: goto label_373a60;
            case 0x373A64u: goto label_373a64;
            case 0x373A68u: goto label_373a68;
            case 0x373A6Cu: goto label_373a6c;
            case 0x373A70u: goto label_373a70;
            case 0x373A74u: goto label_373a74;
            case 0x373A78u: goto label_373a78;
            case 0x373A7Cu: goto label_373a7c;
            case 0x373A80u: goto label_373a80;
            case 0x373A84u: goto label_373a84;
            case 0x373A88u: goto label_373a88;
            case 0x373A8Cu: goto label_373a8c;
            case 0x373A90u: goto label_373a90;
            case 0x373A94u: goto label_373a94;
            case 0x373A98u: goto label_373a98;
            case 0x373A9Cu: goto label_373a9c;
            case 0x373AA0u: goto label_373aa0;
            case 0x373AA4u: goto label_373aa4;
            case 0x373AA8u: goto label_373aa8;
            case 0x373AACu: goto label_373aac;
            case 0x373AB0u: goto label_373ab0;
            case 0x373AB4u: goto label_373ab4;
            case 0x373AB8u: goto label_373ab8;
            case 0x373ABCu: goto label_373abc;
            case 0x373AC0u: goto label_373ac0;
            case 0x373AC4u: goto label_373ac4;
            case 0x373AC8u: goto label_373ac8;
            case 0x373ACCu: goto label_373acc;
            case 0x373AD0u: goto label_373ad0;
            case 0x373AD4u: goto label_373ad4;
            case 0x373AD8u: goto label_373ad8;
            case 0x373ADCu: goto label_373adc;
            case 0x373AE0u: goto label_373ae0;
            case 0x373AE4u: goto label_373ae4;
            case 0x373AE8u: goto label_373ae8;
            case 0x373AECu: goto label_373aec;
            case 0x373AF0u: goto label_373af0;
            case 0x373AF4u: goto label_373af4;
            case 0x373AF8u: goto label_373af8;
            case 0x373AFCu: goto label_373afc;
            case 0x373B00u: goto label_373b00;
            case 0x373B04u: goto label_373b04;
            case 0x373B08u: goto label_373b08;
            case 0x373B0Cu: goto label_373b0c;
            case 0x373B10u: goto label_373b10;
            case 0x373B14u: goto label_373b14;
            case 0x373B18u: goto label_373b18;
            case 0x373B1Cu: goto label_373b1c;
            case 0x373B20u: goto label_373b20;
            case 0x373B24u: goto label_373b24;
            case 0x373B28u: goto label_373b28;
            case 0x373B2Cu: goto label_373b2c;
            case 0x373B30u: goto label_373b30;
            case 0x373B34u: goto label_373b34;
            case 0x373B38u: goto label_373b38;
            case 0x373B3Cu: goto label_373b3c;
            case 0x373B40u: goto label_373b40;
            case 0x373B44u: goto label_373b44;
            case 0x373B48u: goto label_373b48;
            case 0x373B4Cu: goto label_373b4c;
            case 0x373B50u: goto label_373b50;
            case 0x373B54u: goto label_373b54;
            case 0x373B58u: goto label_373b58;
            case 0x373B5Cu: goto label_373b5c;
            case 0x373B60u: goto label_373b60;
            case 0x373B64u: goto label_373b64;
            case 0x373B68u: goto label_373b68;
            case 0x373B6Cu: goto label_373b6c;
            case 0x373B70u: goto label_373b70;
            case 0x373B74u: goto label_373b74;
            case 0x373B78u: goto label_373b78;
            case 0x373B7Cu: goto label_373b7c;
            case 0x373B80u: goto label_373b80;
            case 0x373B84u: goto label_373b84;
            case 0x373B88u: goto label_373b88;
            case 0x373B8Cu: goto label_373b8c;
            case 0x373B90u: goto label_373b90;
            case 0x373B94u: goto label_373b94;
            case 0x373B98u: goto label_373b98;
            case 0x373B9Cu: goto label_373b9c;
            case 0x373BA0u: goto label_373ba0;
            case 0x373BA4u: goto label_373ba4;
            case 0x373BA8u: goto label_373ba8;
            case 0x373BACu: goto label_373bac;
            case 0x373BB0u: goto label_373bb0;
            case 0x373BB4u: goto label_373bb4;
            case 0x373BB8u: goto label_373bb8;
            case 0x373BBCu: goto label_373bbc;
            case 0x373BC0u: goto label_373bc0;
            case 0x373BC4u: goto label_373bc4;
            case 0x373BC8u: goto label_373bc8;
            case 0x373BCCu: goto label_373bcc;
            case 0x373BD0u: goto label_373bd0;
            case 0x373BD4u: goto label_373bd4;
            case 0x373BD8u: goto label_373bd8;
            case 0x373BDCu: goto label_373bdc;
            case 0x373BE0u: goto label_373be0;
            case 0x373BE4u: goto label_373be4;
            case 0x373BE8u: goto label_373be8;
            case 0x373BECu: goto label_373bec;
            case 0x373BF0u: goto label_373bf0;
            case 0x373BF4u: goto label_373bf4;
            case 0x373BF8u: goto label_373bf8;
            case 0x373BFCu: goto label_373bfc;
            case 0x373C00u: goto label_373c00;
            case 0x373C04u: goto label_373c04;
            case 0x373C08u: goto label_373c08;
            case 0x373C0Cu: goto label_373c0c;
            case 0x373C10u: goto label_373c10;
            case 0x373C14u: goto label_373c14;
            case 0x373C18u: goto label_373c18;
            case 0x373C1Cu: goto label_373c1c;
            case 0x373C20u: goto label_373c20;
            case 0x373C24u: goto label_373c24;
            case 0x373C28u: goto label_373c28;
            case 0x373C2Cu: goto label_373c2c;
            case 0x373C30u: goto label_373c30;
            case 0x373C34u: goto label_373c34;
            case 0x373C38u: goto label_373c38;
            case 0x373C3Cu: goto label_373c3c;
            case 0x373C40u: goto label_373c40;
            case 0x373C44u: goto label_373c44;
            case 0x373C48u: goto label_373c48;
            case 0x373C4Cu: goto label_373c4c;
            case 0x373C50u: goto label_373c50;
            case 0x373C54u: goto label_373c54;
            case 0x373C58u: goto label_373c58;
            case 0x373C5Cu: goto label_373c5c;
            case 0x373C60u: goto label_373c60;
            case 0x373C64u: goto label_373c64;
            case 0x373C68u: goto label_373c68;
            case 0x373C6Cu: goto label_373c6c;
            case 0x373C70u: goto label_373c70;
            case 0x373C74u: goto label_373c74;
            case 0x373C78u: goto label_373c78;
            case 0x373C7Cu: goto label_373c7c;
            case 0x373C80u: goto label_373c80;
            case 0x373C84u: goto label_373c84;
            case 0x373C88u: goto label_373c88;
            case 0x373C8Cu: goto label_373c8c;
            case 0x373C90u: goto label_373c90;
            case 0x373C94u: goto label_373c94;
            case 0x373C98u: goto label_373c98;
            case 0x373C9Cu: goto label_373c9c;
            case 0x373CA0u: goto label_373ca0;
            case 0x373CA4u: goto label_373ca4;
            case 0x373CA8u: goto label_373ca8;
            case 0x373CACu: goto label_373cac;
            case 0x373CB0u: goto label_373cb0;
            case 0x373CB4u: goto label_373cb4;
            case 0x373CB8u: goto label_373cb8;
            case 0x373CBCu: goto label_373cbc;
            case 0x373CC0u: goto label_373cc0;
            case 0x373CC4u: goto label_373cc4;
            case 0x373CC8u: goto label_373cc8;
            case 0x373CCCu: goto label_373ccc;
            case 0x373CD0u: goto label_373cd0;
            case 0x373CD4u: goto label_373cd4;
            case 0x373CD8u: goto label_373cd8;
            case 0x373CDCu: goto label_373cdc;
            case 0x373CE0u: goto label_373ce0;
            case 0x373CE4u: goto label_373ce4;
            case 0x373CE8u: goto label_373ce8;
            case 0x373CECu: goto label_373cec;
            case 0x373CF0u: goto label_373cf0;
            case 0x373CF4u: goto label_373cf4;
            case 0x373CF8u: goto label_373cf8;
            case 0x373CFCu: goto label_373cfc;
            case 0x373D00u: goto label_373d00;
            case 0x373D04u: goto label_373d04;
            case 0x373D08u: goto label_373d08;
            case 0x373D0Cu: goto label_373d0c;
            case 0x373D10u: goto label_373d10;
            case 0x373D14u: goto label_373d14;
            case 0x373D18u: goto label_373d18;
            case 0x373D1Cu: goto label_373d1c;
            case 0x373D20u: goto label_373d20;
            case 0x373D24u: goto label_373d24;
            case 0x373D28u: goto label_373d28;
            case 0x373D2Cu: goto label_373d2c;
            case 0x373D30u: goto label_373d30;
            case 0x373D34u: goto label_373d34;
            case 0x373D38u: goto label_373d38;
            case 0x373D3Cu: goto label_373d3c;
            case 0x373D40u: goto label_373d40;
            case 0x373D44u: goto label_373d44;
            case 0x373D48u: goto label_373d48;
            case 0x373D4Cu: goto label_373d4c;
            case 0x373D50u: goto label_373d50;
            case 0x373D54u: goto label_373d54;
            case 0x373D58u: goto label_373d58;
            case 0x373D5Cu: goto label_373d5c;
            case 0x373D60u: goto label_373d60;
            case 0x373D64u: goto label_373d64;
            case 0x373D68u: goto label_373d68;
            case 0x373D6Cu: goto label_373d6c;
            case 0x373D70u: goto label_373d70;
            case 0x373D74u: goto label_373d74;
            case 0x373D78u: goto label_373d78;
            case 0x373D7Cu: goto label_373d7c;
            case 0x373D80u: goto label_373d80;
            case 0x373D84u: goto label_373d84;
            case 0x373D88u: goto label_373d88;
            case 0x373D8Cu: goto label_373d8c;
            case 0x373D90u: goto label_373d90;
            case 0x373D94u: goto label_373d94;
            case 0x373D98u: goto label_373d98;
            case 0x373D9Cu: goto label_373d9c;
            case 0x373DA0u: goto label_373da0;
            case 0x373DA4u: goto label_373da4;
            case 0x373DA8u: goto label_373da8;
            case 0x373DACu: goto label_373dac;
            case 0x373DB0u: goto label_373db0;
            case 0x373DB4u: goto label_373db4;
            case 0x373DB8u: goto label_373db8;
            case 0x373DBCu: goto label_373dbc;
            case 0x373DC0u: goto label_373dc0;
            case 0x373DC4u: goto label_373dc4;
            case 0x373DC8u: goto label_373dc8;
            case 0x373DCCu: goto label_373dcc;
            case 0x373DD0u: goto label_373dd0;
            case 0x373DD4u: goto label_373dd4;
            case 0x373DD8u: goto label_373dd8;
            case 0x373DDCu: goto label_373ddc;
            case 0x373DE0u: goto label_373de0;
            case 0x373DE4u: goto label_373de4;
            case 0x373DE8u: goto label_373de8;
            case 0x373DECu: goto label_373dec;
            case 0x373DF0u: goto label_373df0;
            case 0x373DF4u: goto label_373df4;
            case 0x373DF8u: goto label_373df8;
            case 0x373DFCu: goto label_373dfc;
            case 0x373E00u: goto label_373e00;
            case 0x373E04u: goto label_373e04;
            case 0x373E08u: goto label_373e08;
            case 0x373E0Cu: goto label_373e0c;
            case 0x373E10u: goto label_373e10;
            case 0x373E14u: goto label_373e14;
            case 0x373E18u: goto label_373e18;
            case 0x373E1Cu: goto label_373e1c;
            case 0x373E20u: goto label_373e20;
            case 0x373E24u: goto label_373e24;
            case 0x373E28u: goto label_373e28;
            case 0x373E2Cu: goto label_373e2c;
            case 0x373E30u: goto label_373e30;
            case 0x373E34u: goto label_373e34;
            case 0x373E38u: goto label_373e38;
            case 0x373E3Cu: goto label_373e3c;
            case 0x373E40u: goto label_373e40;
            case 0x373E44u: goto label_373e44;
            case 0x373E48u: goto label_373e48;
            case 0x373E4Cu: goto label_373e4c;
            case 0x373E50u: goto label_373e50;
            case 0x373E54u: goto label_373e54;
            case 0x373E58u: goto label_373e58;
            case 0x373E5Cu: goto label_373e5c;
            case 0x373E60u: goto label_373e60;
            case 0x373E64u: goto label_373e64;
            case 0x373E68u: goto label_373e68;
            case 0x373E6Cu: goto label_373e6c;
            case 0x373E70u: goto label_373e70;
            case 0x373E74u: goto label_373e74;
            case 0x373E78u: goto label_373e78;
            case 0x373E7Cu: goto label_373e7c;
            case 0x373E80u: goto label_373e80;
            case 0x373E84u: goto label_373e84;
            case 0x373E88u: goto label_373e88;
            case 0x373E8Cu: goto label_373e8c;
            case 0x373E90u: goto label_373e90;
            case 0x373E94u: goto label_373e94;
            case 0x373E98u: goto label_373e98;
            case 0x373E9Cu: goto label_373e9c;
            case 0x373EA0u: goto label_373ea0;
            case 0x373EA4u: goto label_373ea4;
            case 0x373EA8u: goto label_373ea8;
            case 0x373EACu: goto label_373eac;
            case 0x373EB0u: goto label_373eb0;
            case 0x373EB4u: goto label_373eb4;
            case 0x373EB8u: goto label_373eb8;
            case 0x373EBCu: goto label_373ebc;
            case 0x373EC0u: goto label_373ec0;
            case 0x373EC4u: goto label_373ec4;
            case 0x373EC8u: goto label_373ec8;
            case 0x373ECCu: goto label_373ecc;
            case 0x373ED0u: goto label_373ed0;
            case 0x373ED4u: goto label_373ed4;
            case 0x373ED8u: goto label_373ed8;
            case 0x373EDCu: goto label_373edc;
            case 0x373EE0u: goto label_373ee0;
            case 0x373EE4u: goto label_373ee4;
            case 0x373EE8u: goto label_373ee8;
            case 0x373EECu: goto label_373eec;
            case 0x373EF0u: goto label_373ef0;
            case 0x373EF4u: goto label_373ef4;
            case 0x373EF8u: goto label_373ef8;
            case 0x373EFCu: goto label_373efc;
            case 0x373F00u: goto label_373f00;
            case 0x373F04u: goto label_373f04;
            case 0x373F08u: goto label_373f08;
            case 0x373F0Cu: goto label_373f0c;
            case 0x373F10u: goto label_373f10;
            case 0x373F14u: goto label_373f14;
            case 0x373F18u: goto label_373f18;
            case 0x373F1Cu: goto label_373f1c;
            case 0x373F20u: goto label_373f20;
            case 0x373F24u: goto label_373f24;
            case 0x373F28u: goto label_373f28;
            case 0x373F2Cu: goto label_373f2c;
            case 0x373F30u: goto label_373f30;
            case 0x373F34u: goto label_373f34;
            case 0x373F38u: goto label_373f38;
            case 0x373F3Cu: goto label_373f3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x373F38u;
label_373f38:
    // 0x373f38: 0x0
    ctx->pc = 0x373f38u;
    // NOP
label_373f3c:
    // 0x373f3c: 0x0
    ctx->pc = 0x373f3cu;
    // NOP
}
