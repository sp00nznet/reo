#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016A660
// Address: 0x16a660 - 0x16a7c0
void sub_0016A660_0x16a660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16a660u;

label_16a660:
    // 0x16a660: 0x27bdff90
    ctx->pc = 0x16a660u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_16a664:
    // 0x16a664: 0xffb30038
    ctx->pc = 0x16a664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_16a668:
    // 0x16a668: 0x100982d
    ctx->pc = 0x16a668u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_16a66c:
    // 0x16a66c: 0xffb40040
    ctx->pc = 0x16a66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_16a670:
    // 0x16a670: 0xe0a02d
    ctx->pc = 0x16a670u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16a674:
    // 0x16a674: 0xffb20030
    ctx->pc = 0x16a674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_16a678:
    // 0x16a678: 0x80902d
    ctx->pc = 0x16a678u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16a67c:
    // 0x16a67c: 0xffb50048
    ctx->pc = 0x16a67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_16a680:
    // 0x16a680: 0xc0a82d
    ctx->pc = 0x16a680u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16a684:
    // 0x16a684: 0xffb60050
    ctx->pc = 0x16a684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_16a688:
    // 0x16a688: 0xb02d
    ctx->pc = 0x16a688u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a68c:
    // 0x16a68c: 0xffb70058
    ctx->pc = 0x16a68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_16a690:
    // 0x16a690: 0xa0b82d
    ctx->pc = 0x16a690u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16a694:
    // 0x16a694: 0xffb00020
    ctx->pc = 0x16a694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_16a698:
    // 0x16a698: 0x3a0282d
    ctx->pc = 0x16a698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16a69c:
    // 0x16a69c: 0xffb10028
    ctx->pc = 0x16a69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_16a6a0:
    // 0x16a6a0: 0xffbf0060
    ctx->pc = 0x16a6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_16a6a4:
    // 0x16a6a4: 0xae800000
    ctx->pc = 0x16a6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_16a6a8:
    // 0x16a6a8: 0xae600000
    ctx->pc = 0x16a6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_16a6ac:
    // 0x16a6ac: 0x8e511aec
    ctx->pc = 0x16a6acu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 6892)));
label_16a6b0:
    // 0x16a6b0: 0xc055fe2
label_16a6b4:
    if (ctx->pc == 0x16A6B4u) {
        ctx->pc = 0x16A6B4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x16A6B8u;
        goto label_16a6b8;
    }
    ctx->pc = 0x16A6B0u;
    SET_GPR_U32(ctx, 31, 0x16A6B8u);
    ctx->pc = 0x16A6B4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x157F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00157F88_0x157f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A6B8u; }
    }
    if (ctx->pc != 0x16A6B8u) { return; }
    ctx->pc = 0x16A6B8u;
label_16a6b8:
    // 0x16a6b8: 0x10400005
label_16a6bc:
    if (ctx->pc == 0x16A6BCu) {
        ctx->pc = 0x16A6BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16A6C0u;
        goto label_16a6c0;
    }
    ctx->pc = 0x16A6B8u;
    {
        const bool branch_taken_0x16a6b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A6BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a6b8) {
            ctx->pc = 0x16A6D0u;
            goto label_16a6d0;
        }
    }
    ctx->pc = 0x16A6C0u;
label_16a6c0:
    // 0x16a6c0: 0x3c05ff00
    ctx->pc = 0x16a6c0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
label_16a6c4:
    // 0x16a6c4: 0xc05a704
label_16a6c8:
    if (ctx->pc == 0x16A6C8u) {
        ctx->pc = 0x16A6C8u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3334));
        ctx->pc = 0x16A6CCu;
        goto label_16a6cc;
    }
    ctx->pc = 0x16A6C4u;
    SET_GPR_U32(ctx, 31, 0x16A6CCu);
    ctx->pc = 0x16A6C8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3334));
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A6CCu; }
    }
    if (ctx->pc != 0x16A6CCu) { return; }
    ctx->pc = 0x16A6CCu;
label_16a6cc:
    // 0x16a6cc: 0x40b02d
    ctx->pc = 0x16a6ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16a6d0:
    // 0x16a6d0: 0x8fb0001c
    ctx->pc = 0x16a6d0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_16a6d4:
    // 0x16a6d4: 0x8fa70000
    ctx->pc = 0x16a6d4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16a6d8:
    // 0x16a6d8: 0x8fa60004
    ctx->pc = 0x16a6d8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_16a6dc:
    // 0x16a6dc: 0x8fa50008
    ctx->pc = 0x16a6dcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_16a6e0:
    // 0x16a6e0: 0x6010007
label_16a6e4:
    if (ctx->pc == 0x16A6E4u) {
        ctx->pc = 0x16A6E4u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x16A6E8u;
        goto label_16a6e8;
    }
    ctx->pc = 0x16A6E0u;
    {
        const bool branch_taken_0x16a6e0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x16A6E4u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 20)));
        if (branch_taken_0x16a6e0) {
            ctx->pc = 0x16A700u;
            goto label_16a700;
        }
    }
    ctx->pc = 0x16A6E8u;
label_16a6e8:
    // 0x16a6e8: 0x3c05ff00
    ctx->pc = 0x16a6e8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
label_16a6ec:
    // 0x16a6ec: 0x240202d
    ctx->pc = 0x16a6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16a6f0:
    // 0x16a6f0: 0xc05a704
label_16a6f4:
    if (ctx->pc == 0x16A6F4u) {
        ctx->pc = 0x16A6F4u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3342));
        ctx->pc = 0x16A6F8u;
        goto label_16a6f8;
    }
    ctx->pc = 0x16A6F0u;
    SET_GPR_U32(ctx, 31, 0x16A6F8u);
    ctx->pc = 0x16A6F4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3342));
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A6F8u; }
    }
    if (ctx->pc != 0x16A6F8u) { return; }
    ctx->pc = 0x16A6F8u;
label_16a6f8:
    // 0x16a6f8: 0x10000027
label_16a6fc:
    if (ctx->pc == 0x16A6FCu) {
        ctx->pc = 0x16A6FCu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x16A700u;
        goto label_16a700;
    }
    ctx->pc = 0x16A6F8u;
    {
        const bool branch_taken_0x16a6f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A6FCu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x16a6f8) {
            ctx->pc = 0x16A798u;
            goto label_16a798;
        }
    }
    ctx->pc = 0x16A700u;
label_16a700:
    // 0x16a700: 0x16000007
label_16a704:
    if (ctx->pc == 0x16A704u) {
        ctx->pc = 0x16A704u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 16)));
        ctx->pc = 0x16A708u;
        goto label_16a708;
    }
    ctx->pc = 0x16A700u;
    {
        const bool branch_taken_0x16a700 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x16A704u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 16)));
        if (branch_taken_0x16a700) {
            ctx->pc = 0x16A720u;
            goto label_16a720;
        }
    }
    ctx->pc = 0x16A708u;
label_16a708:
    // 0x16a708: 0x24020001
    ctx->pc = 0x16a708u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_16a70c:
    // 0x16a70c: 0xae800000
    ctx->pc = 0x16a70cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_16a710:
    // 0x16a710: 0xae620000
    ctx->pc = 0x16a710u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_16a714:
    // 0x16a714: 0x1000001f
label_16a718:
    if (ctx->pc == 0x16A718u) {
        ctx->pc = 0x16A718u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16A71Cu;
        goto label_16a71c;
    }
    ctx->pc = 0x16A714u;
    {
        const bool branch_taken_0x16a714 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A718u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a714) {
            ctx->pc = 0x16A794u;
            goto label_16a794;
        }
    }
    ctx->pc = 0x16A71Cu;
label_16a71c:
    // 0x16a71c: 0x0
    ctx->pc = 0x16a71cu;
    // NOP
label_16a720:
    // 0x16a720: 0x1460001c
label_16a724:
    if (ctx->pc == 0x16A724u) {
        ctx->pc = 0x16A724u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16A728u;
        goto label_16a728;
    }
    ctx->pc = 0x16A720u;
    {
        const bool branch_taken_0x16a720 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x16A724u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a720) {
            ctx->pc = 0x16A794u;
            goto label_16a794;
        }
    }
    ctx->pc = 0x16A728u;
label_16a728:
    // 0x16a728: 0x71080
    ctx->pc = 0x16a728u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
label_16a72c:
    // 0x16a72c: 0x511021
    ctx->pc = 0x16a72cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_16a730:
    // 0x16a730: 0x8c44fd44
    ctx->pc = 0x16a730u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294966596)));
label_16a734:
    // 0x16a734: 0x50800008
label_16a738:
    if (ctx->pc == 0x16A738u) {
        ctx->pc = 0x16A738u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x16A73Cu;
        goto label_16a73c;
    }
    ctx->pc = 0x16A734u;
    {
        const bool branch_taken_0x16a734 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x16a734) {
            ctx->pc = 0x16A738u;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
            ctx->pc = 0x16A758u;
            goto label_16a758;
        }
    }
    ctx->pc = 0x16A73Cu;
label_16a73c:
    // 0x16a73c: 0x8e260148
    ctx->pc = 0x16a73cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_16a740:
    // 0x16a740: 0x2e0402d
    ctx->pc = 0x16a740u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_16a744:
    // 0x16a744: 0x8e250144
    ctx->pc = 0x16a744u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_16a748:
    // 0x16a748: 0xc05a9f0
label_16a74c:
    if (ctx->pc == 0x16A74Cu) {
        ctx->pc = 0x16A74Cu;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16A750u;
        goto label_16a750;
    }
    ctx->pc = 0x16A748u;
    SET_GPR_U32(ctx, 31, 0x16A750u);
    ctx->pc = 0x16A74Cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16A7C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A7C0_0x16a7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A750u; }
    }
    if (ctx->pc != 0x16A750u) { return; }
    ctx->pc = 0x16A750u;
label_16a750:
    // 0x16a750: 0x10000009
label_16a754:
    if (ctx->pc == 0x16A754u) {
        ctx->pc = 0x16A754u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x16A758u;
        goto label_16a758;
    }
    ctx->pc = 0x16A750u;
    {
        const bool branch_taken_0x16a750 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A754u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x16a750) {
            ctx->pc = 0x16A778u;
            goto label_16a778;
        }
    }
    ctx->pc = 0x16A758u;
label_16a758:
    // 0x16a758: 0x2e0302d
    ctx->pc = 0x16a758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_16a75c:
    // 0x16a75c: 0x3c020024
    ctx->pc = 0x16a75cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
label_16a760:
    // 0x16a760: 0x431021
    ctx->pc = 0x16a760u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16a764:
    // 0x16a764: 0x8c420850
    ctx->pc = 0x16a764u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2128)));
label_16a768:
    // 0x16a768: 0x240202d
    ctx->pc = 0x16a768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16a76c:
    // 0x16a76c: 0x40f809
label_16a770:
    if (ctx->pc == 0x16A770u) {
        ctx->pc = 0x16A770u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16A774u;
        goto label_16a774;
    }
    ctx->pc = 0x16A76Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16A774u);
        ctx->pc = 0x16A770u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A660u: goto label_16a660;
            case 0x16A664u: goto label_16a664;
            case 0x16A668u: goto label_16a668;
            case 0x16A66Cu: goto label_16a66c;
            case 0x16A670u: goto label_16a670;
            case 0x16A674u: goto label_16a674;
            case 0x16A678u: goto label_16a678;
            case 0x16A67Cu: goto label_16a67c;
            case 0x16A680u: goto label_16a680;
            case 0x16A684u: goto label_16a684;
            case 0x16A688u: goto label_16a688;
            case 0x16A68Cu: goto label_16a68c;
            case 0x16A690u: goto label_16a690;
            case 0x16A694u: goto label_16a694;
            case 0x16A698u: goto label_16a698;
            case 0x16A69Cu: goto label_16a69c;
            case 0x16A6A0u: goto label_16a6a0;
            case 0x16A6A4u: goto label_16a6a4;
            case 0x16A6A8u: goto label_16a6a8;
            case 0x16A6ACu: goto label_16a6ac;
            case 0x16A6B0u: goto label_16a6b0;
            case 0x16A6B4u: goto label_16a6b4;
            case 0x16A6B8u: goto label_16a6b8;
            case 0x16A6BCu: goto label_16a6bc;
            case 0x16A6C0u: goto label_16a6c0;
            case 0x16A6C4u: goto label_16a6c4;
            case 0x16A6C8u: goto label_16a6c8;
            case 0x16A6CCu: goto label_16a6cc;
            case 0x16A6D0u: goto label_16a6d0;
            case 0x16A6D4u: goto label_16a6d4;
            case 0x16A6D8u: goto label_16a6d8;
            case 0x16A6DCu: goto label_16a6dc;
            case 0x16A6E0u: goto label_16a6e0;
            case 0x16A6E4u: goto label_16a6e4;
            case 0x16A6E8u: goto label_16a6e8;
            case 0x16A6ECu: goto label_16a6ec;
            case 0x16A6F0u: goto label_16a6f0;
            case 0x16A6F4u: goto label_16a6f4;
            case 0x16A6F8u: goto label_16a6f8;
            case 0x16A6FCu: goto label_16a6fc;
            case 0x16A700u: goto label_16a700;
            case 0x16A704u: goto label_16a704;
            case 0x16A708u: goto label_16a708;
            case 0x16A70Cu: goto label_16a70c;
            case 0x16A710u: goto label_16a710;
            case 0x16A714u: goto label_16a714;
            case 0x16A718u: goto label_16a718;
            case 0x16A71Cu: goto label_16a71c;
            case 0x16A720u: goto label_16a720;
            case 0x16A724u: goto label_16a724;
            case 0x16A728u: goto label_16a728;
            case 0x16A72Cu: goto label_16a72c;
            case 0x16A730u: goto label_16a730;
            case 0x16A734u: goto label_16a734;
            case 0x16A738u: goto label_16a738;
            case 0x16A73Cu: goto label_16a73c;
            case 0x16A740u: goto label_16a740;
            case 0x16A744u: goto label_16a744;
            case 0x16A748u: goto label_16a748;
            case 0x16A74Cu: goto label_16a74c;
            case 0x16A750u: goto label_16a750;
            case 0x16A754u: goto label_16a754;
            case 0x16A758u: goto label_16a758;
            case 0x16A75Cu: goto label_16a75c;
            case 0x16A760u: goto label_16a760;
            case 0x16A764u: goto label_16a764;
            case 0x16A768u: goto label_16a768;
            case 0x16A76Cu: goto label_16a76c;
            case 0x16A770u: goto label_16a770;
            case 0x16A774u: goto label_16a774;
            case 0x16A778u: goto label_16a778;
            case 0x16A77Cu: goto label_16a77c;
            case 0x16A780u: goto label_16a780;
            case 0x16A784u: goto label_16a784;
            case 0x16A788u: goto label_16a788;
            case 0x16A78Cu: goto label_16a78c;
            case 0x16A790u: goto label_16a790;
            case 0x16A794u: goto label_16a794;
            case 0x16A798u: goto label_16a798;
            case 0x16A79Cu: goto label_16a79c;
            case 0x16A7A0u: goto label_16a7a0;
            case 0x16A7A4u: goto label_16a7a4;
            case 0x16A7A8u: goto label_16a7a8;
            case 0x16A7ACu: goto label_16a7ac;
            case 0x16A7B0u: goto label_16a7b0;
            case 0x16A7B4u: goto label_16a7b4;
            case 0x16A7B8u: goto label_16a7b8;
            case 0x16A7BCu: goto label_16a7bc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16A774u; }
            if (ctx->pc != 0x16A774u) { return; }
        }
    }
    ctx->pc = 0x16A774u;
label_16a774:
    // 0x16a774: 0xae620000
    ctx->pc = 0x16a774u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_16a778:
    // 0x16a778: 0x8e680000
    ctx->pc = 0x16a778u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_16a77c:
    // 0x16a77c: 0x11000004
label_16a780:
    if (ctx->pc == 0x16A780u) {
        ctx->pc = 0x16A780u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16A784u;
        goto label_16a784;
    }
    ctx->pc = 0x16A77Cu;
    {
        const bool branch_taken_0x16a77c = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A780u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16a77c) {
            ctx->pc = 0x16A790u;
            goto label_16a790;
        }
    }
    ctx->pc = 0x16A784u;
label_16a784:
    // 0x16a784: 0x55020002
label_16a788:
    if (ctx->pc == 0x16A788u) {
        ctx->pc = 0x16A788u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16A78Cu;
        goto label_16a78c;
    }
    ctx->pc = 0x16A784u;
    {
        const bool branch_taken_0x16a784 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 2));
        if (branch_taken_0x16a784) {
            ctx->pc = 0x16A788u;
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x16A790u;
            goto label_16a790;
        }
    }
    ctx->pc = 0x16A78Cu;
label_16a78c:
    // 0x16a78c: 0xae900000
    ctx->pc = 0x16a78cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
label_16a790:
    // 0x16a790: 0x2c0102d
    ctx->pc = 0x16a790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_16a794:
    // 0x16a794: 0xdfb00020
    ctx->pc = 0x16a794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16a798:
    // 0x16a798: 0xdfb10028
    ctx->pc = 0x16a798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_16a79c:
    // 0x16a79c: 0xdfb20030
    ctx->pc = 0x16a79cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16a7a0:
    // 0x16a7a0: 0xdfb30038
    ctx->pc = 0x16a7a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_16a7a4:
    // 0x16a7a4: 0xdfb40040
    ctx->pc = 0x16a7a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16a7a8:
    // 0x16a7a8: 0xdfb50048
    ctx->pc = 0x16a7a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_16a7ac:
    // 0x16a7ac: 0xdfb60050
    ctx->pc = 0x16a7acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16a7b0:
    // 0x16a7b0: 0xdfb70058
    ctx->pc = 0x16a7b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_16a7b4:
    // 0x16a7b4: 0xdfbf0060
    ctx->pc = 0x16a7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_16a7b8:
    // 0x16a7b8: 0x3e00008
label_16a7bc:
    if (ctx->pc == 0x16A7BCu) {
        ctx->pc = 0x16A7BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x16A7C0u;
        goto label_fallthrough_0x16a7b8;
    }
    ctx->pc = 0x16A7B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A7BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A660u: goto label_16a660;
            case 0x16A664u: goto label_16a664;
            case 0x16A668u: goto label_16a668;
            case 0x16A66Cu: goto label_16a66c;
            case 0x16A670u: goto label_16a670;
            case 0x16A674u: goto label_16a674;
            case 0x16A678u: goto label_16a678;
            case 0x16A67Cu: goto label_16a67c;
            case 0x16A680u: goto label_16a680;
            case 0x16A684u: goto label_16a684;
            case 0x16A688u: goto label_16a688;
            case 0x16A68Cu: goto label_16a68c;
            case 0x16A690u: goto label_16a690;
            case 0x16A694u: goto label_16a694;
            case 0x16A698u: goto label_16a698;
            case 0x16A69Cu: goto label_16a69c;
            case 0x16A6A0u: goto label_16a6a0;
            case 0x16A6A4u: goto label_16a6a4;
            case 0x16A6A8u: goto label_16a6a8;
            case 0x16A6ACu: goto label_16a6ac;
            case 0x16A6B0u: goto label_16a6b0;
            case 0x16A6B4u: goto label_16a6b4;
            case 0x16A6B8u: goto label_16a6b8;
            case 0x16A6BCu: goto label_16a6bc;
            case 0x16A6C0u: goto label_16a6c0;
            case 0x16A6C4u: goto label_16a6c4;
            case 0x16A6C8u: goto label_16a6c8;
            case 0x16A6CCu: goto label_16a6cc;
            case 0x16A6D0u: goto label_16a6d0;
            case 0x16A6D4u: goto label_16a6d4;
            case 0x16A6D8u: goto label_16a6d8;
            case 0x16A6DCu: goto label_16a6dc;
            case 0x16A6E0u: goto label_16a6e0;
            case 0x16A6E4u: goto label_16a6e4;
            case 0x16A6E8u: goto label_16a6e8;
            case 0x16A6ECu: goto label_16a6ec;
            case 0x16A6F0u: goto label_16a6f0;
            case 0x16A6F4u: goto label_16a6f4;
            case 0x16A6F8u: goto label_16a6f8;
            case 0x16A6FCu: goto label_16a6fc;
            case 0x16A700u: goto label_16a700;
            case 0x16A704u: goto label_16a704;
            case 0x16A708u: goto label_16a708;
            case 0x16A70Cu: goto label_16a70c;
            case 0x16A710u: goto label_16a710;
            case 0x16A714u: goto label_16a714;
            case 0x16A718u: goto label_16a718;
            case 0x16A71Cu: goto label_16a71c;
            case 0x16A720u: goto label_16a720;
            case 0x16A724u: goto label_16a724;
            case 0x16A728u: goto label_16a728;
            case 0x16A72Cu: goto label_16a72c;
            case 0x16A730u: goto label_16a730;
            case 0x16A734u: goto label_16a734;
            case 0x16A738u: goto label_16a738;
            case 0x16A73Cu: goto label_16a73c;
            case 0x16A740u: goto label_16a740;
            case 0x16A744u: goto label_16a744;
            case 0x16A748u: goto label_16a748;
            case 0x16A74Cu: goto label_16a74c;
            case 0x16A750u: goto label_16a750;
            case 0x16A754u: goto label_16a754;
            case 0x16A758u: goto label_16a758;
            case 0x16A75Cu: goto label_16a75c;
            case 0x16A760u: goto label_16a760;
            case 0x16A764u: goto label_16a764;
            case 0x16A768u: goto label_16a768;
            case 0x16A76Cu: goto label_16a76c;
            case 0x16A770u: goto label_16a770;
            case 0x16A774u: goto label_16a774;
            case 0x16A778u: goto label_16a778;
            case 0x16A77Cu: goto label_16a77c;
            case 0x16A780u: goto label_16a780;
            case 0x16A784u: goto label_16a784;
            case 0x16A788u: goto label_16a788;
            case 0x16A78Cu: goto label_16a78c;
            case 0x16A790u: goto label_16a790;
            case 0x16A794u: goto label_16a794;
            case 0x16A798u: goto label_16a798;
            case 0x16A79Cu: goto label_16a79c;
            case 0x16A7A0u: goto label_16a7a0;
            case 0x16A7A4u: goto label_16a7a4;
            case 0x16A7A8u: goto label_16a7a8;
            case 0x16A7ACu: goto label_16a7ac;
            case 0x16A7B0u: goto label_16a7b0;
            case 0x16A7B4u: goto label_16a7b4;
            case 0x16A7B8u: goto label_16a7b8;
            case 0x16A7BCu: goto label_16a7bc;
            default: break;
        }
        return;
    }
label_fallthrough_0x16a7b8:
    ctx->pc = 0x16A7C0u;
}
