#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015A860
// Address: 0x15a860 - 0x15a950
void sub_0015A860_0x15a860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15a860u;

label_15a860:
    // 0x15a860: 0x27bdffd0
    ctx->pc = 0x15a860u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_15a864:
    // 0x15a864: 0x3c067fff
    ctx->pc = 0x15a864u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
label_15a868:
    // 0x15a868: 0xffb00010
    ctx->pc = 0x15a868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_15a86c:
    // 0x15a86c: 0xa0802d
    ctx->pc = 0x15a86cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15a870:
    // 0x15a870: 0xffb10018
    ctx->pc = 0x15a870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_15a874:
    // 0x15a874: 0x34c6ffff
    ctx->pc = 0x15a874u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
label_15a878:
    // 0x15a878: 0xffb20020
    ctx->pc = 0x15a878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_15a87c:
    // 0x15a87c: 0x80902d
    ctx->pc = 0x15a87cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15a880:
    // 0x15a880: 0xffbf0028
    ctx->pc = 0x15a880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_15a884:
    // 0x15a884: 0x26510348
    ctx->pc = 0x15a884u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 840));
label_15a888:
    // 0x15a888: 0x200202d
    ctx->pc = 0x15a888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15a88c:
    // 0x15a88c: 0x220382d
    ctx->pc = 0x15a88cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15a890:
    // 0x15a890: 0x8e020000
    ctx->pc = 0x15a890u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15a894:
    // 0x15a894: 0x8c430018
    ctx->pc = 0x15a894u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_15a898:
    // 0x15a898: 0x60f809
label_15a89c:
    if (ctx->pc == 0x15A89Cu) {
        ctx->pc = 0x15A89Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x15A8A0u;
        goto label_15a8a0;
    }
    ctx->pc = 0x15A898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A8A0u);
        ctx->pc = 0x15A89Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15A860u: goto label_15a860;
            case 0x15A864u: goto label_15a864;
            case 0x15A868u: goto label_15a868;
            case 0x15A86Cu: goto label_15a86c;
            case 0x15A870u: goto label_15a870;
            case 0x15A874u: goto label_15a874;
            case 0x15A878u: goto label_15a878;
            case 0x15A87Cu: goto label_15a87c;
            case 0x15A880u: goto label_15a880;
            case 0x15A884u: goto label_15a884;
            case 0x15A888u: goto label_15a888;
            case 0x15A88Cu: goto label_15a88c;
            case 0x15A890u: goto label_15a890;
            case 0x15A894u: goto label_15a894;
            case 0x15A898u: goto label_15a898;
            case 0x15A89Cu: goto label_15a89c;
            case 0x15A8A0u: goto label_15a8a0;
            case 0x15A8A4u: goto label_15a8a4;
            case 0x15A8A8u: goto label_15a8a8;
            case 0x15A8ACu: goto label_15a8ac;
            case 0x15A8B0u: goto label_15a8b0;
            case 0x15A8B4u: goto label_15a8b4;
            case 0x15A8B8u: goto label_15a8b8;
            case 0x15A8BCu: goto label_15a8bc;
            case 0x15A8C0u: goto label_15a8c0;
            case 0x15A8C4u: goto label_15a8c4;
            case 0x15A8C8u: goto label_15a8c8;
            case 0x15A8CCu: goto label_15a8cc;
            case 0x15A8D0u: goto label_15a8d0;
            case 0x15A8D4u: goto label_15a8d4;
            case 0x15A8D8u: goto label_15a8d8;
            case 0x15A8DCu: goto label_15a8dc;
            case 0x15A8E0u: goto label_15a8e0;
            case 0x15A8E4u: goto label_15a8e4;
            case 0x15A8E8u: goto label_15a8e8;
            case 0x15A8ECu: goto label_15a8ec;
            case 0x15A8F0u: goto label_15a8f0;
            case 0x15A8F4u: goto label_15a8f4;
            case 0x15A8F8u: goto label_15a8f8;
            case 0x15A8FCu: goto label_15a8fc;
            case 0x15A900u: goto label_15a900;
            case 0x15A904u: goto label_15a904;
            case 0x15A908u: goto label_15a908;
            case 0x15A90Cu: goto label_15a90c;
            case 0x15A910u: goto label_15a910;
            case 0x15A914u: goto label_15a914;
            case 0x15A918u: goto label_15a918;
            case 0x15A91Cu: goto label_15a91c;
            case 0x15A920u: goto label_15a920;
            case 0x15A924u: goto label_15a924;
            case 0x15A928u: goto label_15a928;
            case 0x15A92Cu: goto label_15a92c;
            case 0x15A930u: goto label_15a930;
            case 0x15A934u: goto label_15a934;
            case 0x15A938u: goto label_15a938;
            case 0x15A93Cu: goto label_15a93c;
            case 0x15A940u: goto label_15a940;
            case 0x15A944u: goto label_15a944;
            case 0x15A948u: goto label_15a948;
            case 0x15A94Cu: goto label_15a94c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15A8A0u; }
            if (ctx->pc != 0x15A8A0u) { return; }
        }
    }
    ctx->pc = 0x15A8A0u;
label_15a8a0:
    // 0x15a8a0: 0x220202d
    ctx->pc = 0x15a8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15a8a4:
    // 0x15a8a4: 0x8e290000
    ctx->pc = 0x15a8a4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15a8a8:
    // 0x15a8a8: 0x2402fffc
    ctx->pc = 0x15a8a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
label_15a8ac:
    // 0x15a8ac: 0x3a0382d
    ctx->pc = 0x15a8acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15a8b0:
    // 0x15a8b0: 0x220302d
    ctx->pc = 0x15a8b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15a8b4:
    // 0x15a8b4: 0x1224024
    ctx->pc = 0x15a8b4u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_15a8b8:
    // 0x15a8b8: 0x1281823
    ctx->pc = 0x15a8b8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_15a8bc:
    // 0x15a8bc: 0x318c0
    ctx->pc = 0x15a8bcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
label_15a8c0:
    // 0x15a8c0: 0x28620020
    ctx->pc = 0x15a8c0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 32));
label_15a8c4:
    // 0x15a8c4: 0x14400003
label_15a8c8:
    if (ctx->pc == 0x15A8C8u) {
        ctx->pc = 0x15A8C8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 8));
        ctx->pc = 0x15A8CCu;
        goto label_15a8cc;
    }
    ctx->pc = 0x15A8C4u;
    {
        const bool branch_taken_0x15a8c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15A8C8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 8));
        if (branch_taken_0x15a8c4) {
            ctx->pc = 0x15A8D4u;
            goto label_15a8d4;
        }
    }
    ctx->pc = 0x15A8CCu;
label_15a8cc:
    // 0x15a8cc: 0x2463ffe0
    ctx->pc = 0x15a8ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967264));
label_15a8d0:
    // 0x15a8d0: 0x25080004
    ctx->pc = 0x15a8d0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
label_15a8d4:
    // 0x15a8d4: 0x30620007
    ctx->pc = 0x15a8d4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 7));
label_15a8d8:
    // 0x15a8d8: 0x622823
    ctx->pc = 0x15a8d8u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15a8dc:
    // 0x15a8dc: 0xae420350
    ctx->pc = 0x15a8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 848), GPR_U32(ctx, 2));
label_15a8e0:
    // 0x15a8e0: 0x24a50007
    ctx->pc = 0x15a8e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7));
label_15a8e4:
    // 0x15a8e4: 0x528c3
    ctx->pc = 0x15a8e4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_15a8e8:
    // 0x15a8e8: 0x1052821
    ctx->pc = 0x15a8e8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_15a8ec:
    // 0x15a8ec: 0x24a5fffc
    ctx->pc = 0x15a8ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967292));
label_15a8f0:
    // 0x15a8f0: 0xc0501f8
label_15a8f4:
    if (ctx->pc == 0x15A8F4u) {
        ctx->pc = 0x15A8F4u;
        SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->pc = 0x15A8F8u;
        goto label_15a8f8;
    }
    ctx->pc = 0x15A8F0u;
    SET_GPR_U32(ctx, 31, 0x15A8F8u);
    ctx->pc = 0x15A8F4u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    ctx->pc = 0x1407E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001407E0_0x1407e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A8F8u; }
    }
    if (ctx->pc != 0x15A8F8u) { return; }
    ctx->pc = 0x15A8F8u;
label_15a8f8:
    // 0x15a8f8: 0x8e030000
    ctx->pc = 0x15a8f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15a8fc:
    // 0x15a8fc: 0x220302d
    ctx->pc = 0x15a8fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15a900:
    // 0x15a900: 0x200202d
    ctx->pc = 0x15a900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15a904:
    // 0x15a904: 0x8c620020
    ctx->pc = 0x15a904u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_15a908:
    // 0x15a908: 0x40f809
label_15a90c:
    if (ctx->pc == 0x15A90Cu) {
        ctx->pc = 0x15A90Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15A910u;
        goto label_15a910;
    }
    ctx->pc = 0x15A908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15A910u);
        ctx->pc = 0x15A90Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15A860u: goto label_15a860;
            case 0x15A864u: goto label_15a864;
            case 0x15A868u: goto label_15a868;
            case 0x15A86Cu: goto label_15a86c;
            case 0x15A870u: goto label_15a870;
            case 0x15A874u: goto label_15a874;
            case 0x15A878u: goto label_15a878;
            case 0x15A87Cu: goto label_15a87c;
            case 0x15A880u: goto label_15a880;
            case 0x15A884u: goto label_15a884;
            case 0x15A888u: goto label_15a888;
            case 0x15A88Cu: goto label_15a88c;
            case 0x15A890u: goto label_15a890;
            case 0x15A894u: goto label_15a894;
            case 0x15A898u: goto label_15a898;
            case 0x15A89Cu: goto label_15a89c;
            case 0x15A8A0u: goto label_15a8a0;
            case 0x15A8A4u: goto label_15a8a4;
            case 0x15A8A8u: goto label_15a8a8;
            case 0x15A8ACu: goto label_15a8ac;
            case 0x15A8B0u: goto label_15a8b0;
            case 0x15A8B4u: goto label_15a8b4;
            case 0x15A8B8u: goto label_15a8b8;
            case 0x15A8BCu: goto label_15a8bc;
            case 0x15A8C0u: goto label_15a8c0;
            case 0x15A8C4u: goto label_15a8c4;
            case 0x15A8C8u: goto label_15a8c8;
            case 0x15A8CCu: goto label_15a8cc;
            case 0x15A8D0u: goto label_15a8d0;
            case 0x15A8D4u: goto label_15a8d4;
            case 0x15A8D8u: goto label_15a8d8;
            case 0x15A8DCu: goto label_15a8dc;
            case 0x15A8E0u: goto label_15a8e0;
            case 0x15A8E4u: goto label_15a8e4;
            case 0x15A8E8u: goto label_15a8e8;
            case 0x15A8ECu: goto label_15a8ec;
            case 0x15A8F0u: goto label_15a8f0;
            case 0x15A8F4u: goto label_15a8f4;
            case 0x15A8F8u: goto label_15a8f8;
            case 0x15A8FCu: goto label_15a8fc;
            case 0x15A900u: goto label_15a900;
            case 0x15A904u: goto label_15a904;
            case 0x15A908u: goto label_15a908;
            case 0x15A90Cu: goto label_15a90c;
            case 0x15A910u: goto label_15a910;
            case 0x15A914u: goto label_15a914;
            case 0x15A918u: goto label_15a918;
            case 0x15A91Cu: goto label_15a91c;
            case 0x15A920u: goto label_15a920;
            case 0x15A924u: goto label_15a924;
            case 0x15A928u: goto label_15a928;
            case 0x15A92Cu: goto label_15a92c;
            case 0x15A930u: goto label_15a930;
            case 0x15A934u: goto label_15a934;
            case 0x15A938u: goto label_15a938;
            case 0x15A93Cu: goto label_15a93c;
            case 0x15A940u: goto label_15a940;
            case 0x15A944u: goto label_15a944;
            case 0x15A948u: goto label_15a948;
            case 0x15A94Cu: goto label_15a94c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15A910u; }
            if (ctx->pc != 0x15A910u) { return; }
        }
    }
    ctx->pc = 0x15A910u;
label_15a910:
    // 0x15a910: 0x8e030000
    ctx->pc = 0x15a910u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15a914:
    // 0x15a914: 0x24050001
    ctx->pc = 0x15a914u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_15a918:
    // 0x15a918: 0x3a0302d
    ctx->pc = 0x15a918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15a91c:
    // 0x15a91c: 0x8c62001c
    ctx->pc = 0x15a91cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_15a920:
    // 0x15a920: 0x40f809
label_15a924:
    if (ctx->pc == 0x15A924u) {
        ctx->pc = 0x15A924u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15A928u;
        goto label_15a928;
    }
    ctx->pc = 0x15A920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15A928u);
        ctx->pc = 0x15A924u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15A860u: goto label_15a860;
            case 0x15A864u: goto label_15a864;
            case 0x15A868u: goto label_15a868;
            case 0x15A86Cu: goto label_15a86c;
            case 0x15A870u: goto label_15a870;
            case 0x15A874u: goto label_15a874;
            case 0x15A878u: goto label_15a878;
            case 0x15A87Cu: goto label_15a87c;
            case 0x15A880u: goto label_15a880;
            case 0x15A884u: goto label_15a884;
            case 0x15A888u: goto label_15a888;
            case 0x15A88Cu: goto label_15a88c;
            case 0x15A890u: goto label_15a890;
            case 0x15A894u: goto label_15a894;
            case 0x15A898u: goto label_15a898;
            case 0x15A89Cu: goto label_15a89c;
            case 0x15A8A0u: goto label_15a8a0;
            case 0x15A8A4u: goto label_15a8a4;
            case 0x15A8A8u: goto label_15a8a8;
            case 0x15A8ACu: goto label_15a8ac;
            case 0x15A8B0u: goto label_15a8b0;
            case 0x15A8B4u: goto label_15a8b4;
            case 0x15A8B8u: goto label_15a8b8;
            case 0x15A8BCu: goto label_15a8bc;
            case 0x15A8C0u: goto label_15a8c0;
            case 0x15A8C4u: goto label_15a8c4;
            case 0x15A8C8u: goto label_15a8c8;
            case 0x15A8CCu: goto label_15a8cc;
            case 0x15A8D0u: goto label_15a8d0;
            case 0x15A8D4u: goto label_15a8d4;
            case 0x15A8D8u: goto label_15a8d8;
            case 0x15A8DCu: goto label_15a8dc;
            case 0x15A8E0u: goto label_15a8e0;
            case 0x15A8E4u: goto label_15a8e4;
            case 0x15A8E8u: goto label_15a8e8;
            case 0x15A8ECu: goto label_15a8ec;
            case 0x15A8F0u: goto label_15a8f0;
            case 0x15A8F4u: goto label_15a8f4;
            case 0x15A8F8u: goto label_15a8f8;
            case 0x15A8FCu: goto label_15a8fc;
            case 0x15A900u: goto label_15a900;
            case 0x15A904u: goto label_15a904;
            case 0x15A908u: goto label_15a908;
            case 0x15A90Cu: goto label_15a90c;
            case 0x15A910u: goto label_15a910;
            case 0x15A914u: goto label_15a914;
            case 0x15A918u: goto label_15a918;
            case 0x15A91Cu: goto label_15a91c;
            case 0x15A920u: goto label_15a920;
            case 0x15A924u: goto label_15a924;
            case 0x15A928u: goto label_15a928;
            case 0x15A92Cu: goto label_15a92c;
            case 0x15A930u: goto label_15a930;
            case 0x15A934u: goto label_15a934;
            case 0x15A938u: goto label_15a938;
            case 0x15A93Cu: goto label_15a93c;
            case 0x15A940u: goto label_15a940;
            case 0x15A944u: goto label_15a944;
            case 0x15A948u: goto label_15a948;
            case 0x15A94Cu: goto label_15a94c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15A928u; }
            if (ctx->pc != 0x15A928u) { return; }
        }
    }
    ctx->pc = 0x15A928u;
label_15a928:
    // 0x15a928: 0xc056b7a
label_15a92c:
    if (ctx->pc == 0x15A92Cu) {
        ctx->pc = 0x15A92Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15A930u;
        goto label_15a930;
    }
    ctx->pc = 0x15A928u;
    SET_GPR_U32(ctx, 31, 0x15A930u);
    ctx->pc = 0x15A92Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15ADE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ADE8_0x15ade8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A930u; }
    }
    if (ctx->pc != 0x15A930u) { return; }
    ctx->pc = 0x15A930u;
label_15a930:
    // 0x15a930: 0x102d
    ctx->pc = 0x15a930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a934:
    // 0x15a934: 0xdfb00010
    ctx->pc = 0x15a934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15a938:
    // 0x15a938: 0xdfb10018
    ctx->pc = 0x15a938u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15a93c:
    // 0x15a93c: 0xdfb20020
    ctx->pc = 0x15a93cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15a940:
    // 0x15a940: 0xdfbf0028
    ctx->pc = 0x15a940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15a944:
    // 0x15a944: 0x3e00008
label_15a948:
    if (ctx->pc == 0x15A948u) {
        ctx->pc = 0x15A948u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x15A94Cu;
        goto label_15a94c;
    }
    ctx->pc = 0x15A944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A948u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15A860u: goto label_15a860;
            case 0x15A864u: goto label_15a864;
            case 0x15A868u: goto label_15a868;
            case 0x15A86Cu: goto label_15a86c;
            case 0x15A870u: goto label_15a870;
            case 0x15A874u: goto label_15a874;
            case 0x15A878u: goto label_15a878;
            case 0x15A87Cu: goto label_15a87c;
            case 0x15A880u: goto label_15a880;
            case 0x15A884u: goto label_15a884;
            case 0x15A888u: goto label_15a888;
            case 0x15A88Cu: goto label_15a88c;
            case 0x15A890u: goto label_15a890;
            case 0x15A894u: goto label_15a894;
            case 0x15A898u: goto label_15a898;
            case 0x15A89Cu: goto label_15a89c;
            case 0x15A8A0u: goto label_15a8a0;
            case 0x15A8A4u: goto label_15a8a4;
            case 0x15A8A8u: goto label_15a8a8;
            case 0x15A8ACu: goto label_15a8ac;
            case 0x15A8B0u: goto label_15a8b0;
            case 0x15A8B4u: goto label_15a8b4;
            case 0x15A8B8u: goto label_15a8b8;
            case 0x15A8BCu: goto label_15a8bc;
            case 0x15A8C0u: goto label_15a8c0;
            case 0x15A8C4u: goto label_15a8c4;
            case 0x15A8C8u: goto label_15a8c8;
            case 0x15A8CCu: goto label_15a8cc;
            case 0x15A8D0u: goto label_15a8d0;
            case 0x15A8D4u: goto label_15a8d4;
            case 0x15A8D8u: goto label_15a8d8;
            case 0x15A8DCu: goto label_15a8dc;
            case 0x15A8E0u: goto label_15a8e0;
            case 0x15A8E4u: goto label_15a8e4;
            case 0x15A8E8u: goto label_15a8e8;
            case 0x15A8ECu: goto label_15a8ec;
            case 0x15A8F0u: goto label_15a8f0;
            case 0x15A8F4u: goto label_15a8f4;
            case 0x15A8F8u: goto label_15a8f8;
            case 0x15A8FCu: goto label_15a8fc;
            case 0x15A900u: goto label_15a900;
            case 0x15A904u: goto label_15a904;
            case 0x15A908u: goto label_15a908;
            case 0x15A90Cu: goto label_15a90c;
            case 0x15A910u: goto label_15a910;
            case 0x15A914u: goto label_15a914;
            case 0x15A918u: goto label_15a918;
            case 0x15A91Cu: goto label_15a91c;
            case 0x15A920u: goto label_15a920;
            case 0x15A924u: goto label_15a924;
            case 0x15A928u: goto label_15a928;
            case 0x15A92Cu: goto label_15a92c;
            case 0x15A930u: goto label_15a930;
            case 0x15A934u: goto label_15a934;
            case 0x15A938u: goto label_15a938;
            case 0x15A93Cu: goto label_15a93c;
            case 0x15A940u: goto label_15a940;
            case 0x15A944u: goto label_15a944;
            case 0x15A948u: goto label_15a948;
            case 0x15A94Cu: goto label_15a94c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15A94Cu;
label_15a94c:
    // 0x15a94c: 0x0
    ctx->pc = 0x15a94cu;
    // NOP
}
