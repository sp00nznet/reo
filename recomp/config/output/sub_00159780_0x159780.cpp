#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00159780
// Address: 0x159780 - 0x159820
void sub_00159780_0x159780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x159780u;

label_159780:
    // 0x159780: 0x27bdffd0
    ctx->pc = 0x159780u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_159784:
    // 0x159784: 0xffb00000
    ctx->pc = 0x159784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_159788:
    // 0x159788: 0x80802d
    ctx->pc = 0x159788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15978c:
    // 0x15978c: 0xffb10008
    ctx->pc = 0x15978cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_159790:
    // 0x159790: 0xffb20010
    ctx->pc = 0x159790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_159794:
    // 0x159794: 0xa0902d
    ctx->pc = 0x159794u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_159798:
    // 0x159798: 0xffb30018
    ctx->pc = 0x159798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_15979c:
    // 0x15979c: 0xc0982d
    ctx->pc = 0x15979cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1597a0:
    // 0x1597a0: 0xffbf0020
    ctx->pc = 0x1597a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1597a4:
    // 0x1597a4: 0x8e450004
    ctx->pc = 0x1597a4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1597a8:
    // 0x1597a8: 0xc04fcd8
label_1597ac:
    if (ctx->pc == 0x1597ACu) {
        ctx->pc = 0x1597ACu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x1597B0u;
        goto label_1597b0;
    }
    ctx->pc = 0x1597A8u;
    SET_GPR_U32(ctx, 31, 0x1597B0u);
    ctx->pc = 0x1597ACu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x13F360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F360_0x13f360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1597B0u; }
    }
    if (ctx->pc != 0x1597B0u) { return; }
    ctx->pc = 0x1597B0u;
label_1597b0:
    // 0x1597b0: 0x200202d
    ctx->pc = 0x1597b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1597b4:
    // 0x1597b4: 0x40882d
    ctx->pc = 0x1597b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1597b8:
    // 0x1597b8: 0x2402ffff
    ctx->pc = 0x1597b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1597bc:
    // 0x1597bc: 0x12200011
label_1597c0:
    if (ctx->pc == 0x1597C0u) {
        ctx->pc = 0x1597C0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1597C4u;
        goto label_1597c4;
    }
    ctx->pc = 0x1597BCu;
    {
        const bool branch_taken_0x1597bc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1597C0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1597bc) {
            ctx->pc = 0x159804u;
            goto label_159804;
        }
    }
    ctx->pc = 0x1597C4u;
label_1597c4:
    // 0x1597c4: 0xc056548
label_1597c8:
    if (ctx->pc == 0x1597C8u) {
        ctx->pc = 0x1597CCu;
        goto label_1597cc;
    }
    ctx->pc = 0x1597C4u;
    SET_GPR_U32(ctx, 31, 0x1597CCu);
    ctx->pc = 0x159520u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00159520_0x159520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1597CCu; }
    }
    if (ctx->pc != 0x1597CCu) { return; }
    ctx->pc = 0x1597CCu;
label_1597cc:
    // 0x1597cc: 0x8e230000
    ctx->pc = 0x1597ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1597d0:
    // 0x1597d0: 0x40802d
    ctx->pc = 0x1597d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1597d4:
    // 0x1597d4: 0x220202d
    ctx->pc = 0x1597d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1597d8:
    // 0x1597d8: 0x8c620024
    ctx->pc = 0x1597d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1597dc:
    // 0x1597dc: 0x40f809
label_1597e0:
    if (ctx->pc == 0x1597E0u) {
        ctx->pc = 0x1597E0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1597E4u;
        goto label_1597e4;
    }
    ctx->pc = 0x1597DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1597E4u);
        ctx->pc = 0x1597E0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159780u: goto label_159780;
            case 0x159784u: goto label_159784;
            case 0x159788u: goto label_159788;
            case 0x15978Cu: goto label_15978c;
            case 0x159790u: goto label_159790;
            case 0x159794u: goto label_159794;
            case 0x159798u: goto label_159798;
            case 0x15979Cu: goto label_15979c;
            case 0x1597A0u: goto label_1597a0;
            case 0x1597A4u: goto label_1597a4;
            case 0x1597A8u: goto label_1597a8;
            case 0x1597ACu: goto label_1597ac;
            case 0x1597B0u: goto label_1597b0;
            case 0x1597B4u: goto label_1597b4;
            case 0x1597B8u: goto label_1597b8;
            case 0x1597BCu: goto label_1597bc;
            case 0x1597C0u: goto label_1597c0;
            case 0x1597C4u: goto label_1597c4;
            case 0x1597C8u: goto label_1597c8;
            case 0x1597CCu: goto label_1597cc;
            case 0x1597D0u: goto label_1597d0;
            case 0x1597D4u: goto label_1597d4;
            case 0x1597D8u: goto label_1597d8;
            case 0x1597DCu: goto label_1597dc;
            case 0x1597E0u: goto label_1597e0;
            case 0x1597E4u: goto label_1597e4;
            case 0x1597E8u: goto label_1597e8;
            case 0x1597ECu: goto label_1597ec;
            case 0x1597F0u: goto label_1597f0;
            case 0x1597F4u: goto label_1597f4;
            case 0x1597F8u: goto label_1597f8;
            case 0x1597FCu: goto label_1597fc;
            case 0x159800u: goto label_159800;
            case 0x159804u: goto label_159804;
            case 0x159808u: goto label_159808;
            case 0x15980Cu: goto label_15980c;
            case 0x159810u: goto label_159810;
            case 0x159814u: goto label_159814;
            case 0x159818u: goto label_159818;
            case 0x15981Cu: goto label_15981c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1597E4u; }
            if (ctx->pc != 0x1597E4u) { return; }
        }
    }
    ctx->pc = 0x1597E4u;
label_1597e4:
    // 0x1597e4: 0x8e430004
    ctx->pc = 0x1597e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1597e8:
    // 0x1597e8: 0x8e250000
    ctx->pc = 0x1597e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1597ec:
    // 0x1597ec: 0x621823
    ctx->pc = 0x1597ecu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1597f0:
    // 0x1597f0: 0xae630000
    ctx->pc = 0x1597f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1597f4:
    // 0x1597f4: 0x8ca2000c
    ctx->pc = 0x1597f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1597f8:
    // 0x1597f8: 0x40f809
label_1597fc:
    if (ctx->pc == 0x1597FCu) {
        ctx->pc = 0x1597FCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x159800u;
        goto label_159800;
    }
    ctx->pc = 0x1597F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x159800u);
        ctx->pc = 0x1597FCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159780u: goto label_159780;
            case 0x159784u: goto label_159784;
            case 0x159788u: goto label_159788;
            case 0x15978Cu: goto label_15978c;
            case 0x159790u: goto label_159790;
            case 0x159794u: goto label_159794;
            case 0x159798u: goto label_159798;
            case 0x15979Cu: goto label_15979c;
            case 0x1597A0u: goto label_1597a0;
            case 0x1597A4u: goto label_1597a4;
            case 0x1597A8u: goto label_1597a8;
            case 0x1597ACu: goto label_1597ac;
            case 0x1597B0u: goto label_1597b0;
            case 0x1597B4u: goto label_1597b4;
            case 0x1597B8u: goto label_1597b8;
            case 0x1597BCu: goto label_1597bc;
            case 0x1597C0u: goto label_1597c0;
            case 0x1597C4u: goto label_1597c4;
            case 0x1597C8u: goto label_1597c8;
            case 0x1597CCu: goto label_1597cc;
            case 0x1597D0u: goto label_1597d0;
            case 0x1597D4u: goto label_1597d4;
            case 0x1597D8u: goto label_1597d8;
            case 0x1597DCu: goto label_1597dc;
            case 0x1597E0u: goto label_1597e0;
            case 0x1597E4u: goto label_1597e4;
            case 0x1597E8u: goto label_1597e8;
            case 0x1597ECu: goto label_1597ec;
            case 0x1597F0u: goto label_1597f0;
            case 0x1597F4u: goto label_1597f4;
            case 0x1597F8u: goto label_1597f8;
            case 0x1597FCu: goto label_1597fc;
            case 0x159800u: goto label_159800;
            case 0x159804u: goto label_159804;
            case 0x159808u: goto label_159808;
            case 0x15980Cu: goto label_15980c;
            case 0x159810u: goto label_159810;
            case 0x159814u: goto label_159814;
            case 0x159818u: goto label_159818;
            case 0x15981Cu: goto label_15981c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x159800u; }
            if (ctx->pc != 0x159800u) { return; }
        }
    }
    ctx->pc = 0x159800u;
label_159800:
    // 0x159800: 0x200102d
    ctx->pc = 0x159800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_159804:
    // 0x159804: 0xdfb00000
    ctx->pc = 0x159804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_159808:
    // 0x159808: 0xdfb10008
    ctx->pc = 0x159808u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15980c:
    // 0x15980c: 0xdfb20010
    ctx->pc = 0x15980cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_159810:
    // 0x159810: 0xdfb30018
    ctx->pc = 0x159810u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_159814:
    // 0x159814: 0xdfbf0020
    ctx->pc = 0x159814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_159818:
    // 0x159818: 0x3e00008
label_15981c:
    if (ctx->pc == 0x15981Cu) {
        ctx->pc = 0x15981Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x159820u;
        goto label_fallthrough_0x159818;
    }
    ctx->pc = 0x159818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15981Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159780u: goto label_159780;
            case 0x159784u: goto label_159784;
            case 0x159788u: goto label_159788;
            case 0x15978Cu: goto label_15978c;
            case 0x159790u: goto label_159790;
            case 0x159794u: goto label_159794;
            case 0x159798u: goto label_159798;
            case 0x15979Cu: goto label_15979c;
            case 0x1597A0u: goto label_1597a0;
            case 0x1597A4u: goto label_1597a4;
            case 0x1597A8u: goto label_1597a8;
            case 0x1597ACu: goto label_1597ac;
            case 0x1597B0u: goto label_1597b0;
            case 0x1597B4u: goto label_1597b4;
            case 0x1597B8u: goto label_1597b8;
            case 0x1597BCu: goto label_1597bc;
            case 0x1597C0u: goto label_1597c0;
            case 0x1597C4u: goto label_1597c4;
            case 0x1597C8u: goto label_1597c8;
            case 0x1597CCu: goto label_1597cc;
            case 0x1597D0u: goto label_1597d0;
            case 0x1597D4u: goto label_1597d4;
            case 0x1597D8u: goto label_1597d8;
            case 0x1597DCu: goto label_1597dc;
            case 0x1597E0u: goto label_1597e0;
            case 0x1597E4u: goto label_1597e4;
            case 0x1597E8u: goto label_1597e8;
            case 0x1597ECu: goto label_1597ec;
            case 0x1597F0u: goto label_1597f0;
            case 0x1597F4u: goto label_1597f4;
            case 0x1597F8u: goto label_1597f8;
            case 0x1597FCu: goto label_1597fc;
            case 0x159800u: goto label_159800;
            case 0x159804u: goto label_159804;
            case 0x159808u: goto label_159808;
            case 0x15980Cu: goto label_15980c;
            case 0x159810u: goto label_159810;
            case 0x159814u: goto label_159814;
            case 0x159818u: goto label_159818;
            case 0x15981Cu: goto label_15981c;
            default: break;
        }
        return;
    }
label_fallthrough_0x159818:
    ctx->pc = 0x159820u;
}
