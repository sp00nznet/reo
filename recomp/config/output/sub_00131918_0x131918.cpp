#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00131918
// Address: 0x131918 - 0x131b60
void sub_00131918_0x131918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x131918u;

label_131918:
    // 0x131918: 0x27bdffd0
    ctx->pc = 0x131918u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_13191c:
    // 0x13191c: 0xffb10008
    ctx->pc = 0x13191cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_131920:
    // 0x131920: 0x80882d
    ctx->pc = 0x131920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_131924:
    // 0x131924: 0xffb00000
    ctx->pc = 0x131924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_131928:
    // 0x131928: 0xffb20010
    ctx->pc = 0x131928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13192c:
    // 0x13192c: 0xffb30018
    ctx->pc = 0x13192cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_131930:
    // 0x131930: 0x1620000b
label_131934:
    if (ctx->pc == 0x131934u) {
        ctx->pc = 0x131934u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->pc = 0x131938u;
        goto label_131938;
    }
    ctx->pc = 0x131930u;
    {
        const bool branch_taken_0x131930 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x131934u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        if (branch_taken_0x131930) {
            ctx->pc = 0x131960u;
            goto label_131960;
        }
    }
    ctx->pc = 0x131938u;
label_131938:
    // 0x131938: 0x3c040024
    ctx->pc = 0x131938u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_13193c:
    // 0x13193c: 0xdfb00000
    ctx->pc = 0x13193cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_131940:
    // 0x131940: 0xdfb10008
    ctx->pc = 0x131940u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_131944:
    // 0x131944: 0x2484aed0
    ctx->pc = 0x131944u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946512));
label_131948:
    // 0x131948: 0xdfb20010
    ctx->pc = 0x131948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13194c:
    // 0x13194c: 0xdfb30018
    ctx->pc = 0x13194cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_131950:
    // 0x131950: 0xdfbf0020
    ctx->pc = 0x131950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_131954:
    // 0x131954: 0x804a034
label_131958:
    if (ctx->pc == 0x131958u) {
        ctx->pc = 0x131958u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x13195Cu;
        goto label_13195c;
    }
    ctx->pc = 0x131954u;
    ctx->pc = 0x131958u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1280D0u;
    sub_001280D0_0x1280d0(rdram, ctx, runtime); return;
    ctx->pc = 0x13195Cu;
label_13195c:
    // 0x13195c: 0x0
    ctx->pc = 0x13195cu;
    // NOP
label_131960:
    // 0x131960: 0xc04c632
label_131964:
    if (ctx->pc == 0x131964u) {
        ctx->pc = 0x131968u;
        goto label_131968;
    }
    ctx->pc = 0x131960u;
    SET_GPR_U32(ctx, 31, 0x131968u);
    ctx->pc = 0x1318C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001318C8_0x1318c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131968u; }
    }
    if (ctx->pc != 0x131968u) { return; }
    ctx->pc = 0x131968u;
label_131968:
    // 0x131968: 0xc04c63c
label_13196c:
    if (ctx->pc == 0x13196Cu) {
        ctx->pc = 0x13196Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x131970u;
        goto label_131970;
    }
    ctx->pc = 0x131968u;
    SET_GPR_U32(ctx, 31, 0x131970u);
    ctx->pc = 0x13196Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1318F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001318F0_0x1318f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131970u; }
    }
    if (ctx->pc != 0x131970u) { return; }
    ctx->pc = 0x131970u;
label_131970:
    // 0x131970: 0x82230000
    ctx->pc = 0x131970u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_131974:
    // 0x131974: 0x24020001
    ctx->pc = 0x131974u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_131978:
    // 0x131978: 0x54620004
label_13197c:
    if (ctx->pc == 0x13197Cu) {
        ctx->pc = 0x13197Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x131980u;
        goto label_131980;
    }
    ctx->pc = 0x131978u;
    {
        const bool branch_taken_0x131978 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x131978) {
            ctx->pc = 0x13197Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->pc = 0x13198Cu;
            goto label_13198c;
        }
    }
    ctx->pc = 0x131980u;
label_131980:
    // 0x131980: 0xc04c78e
label_131984:
    if (ctx->pc == 0x131984u) {
        ctx->pc = 0x131984u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x131988u;
        goto label_131988;
    }
    ctx->pc = 0x131980u;
    SET_GPR_U32(ctx, 31, 0x131988u);
    ctx->pc = 0x131984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x131E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131E38_0x131e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131988u; }
    }
    if (ctx->pc != 0x131988u) { return; }
    ctx->pc = 0x131988u;
label_131988:
    // 0x131988: 0x8e24000c
    ctx->pc = 0x131988u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_13198c:
    // 0x13198c: 0x50800004
label_131990:
    if (ctx->pc == 0x131990u) {
        ctx->pc = 0x131990u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x131994u;
        goto label_131994;
    }
    ctx->pc = 0x13198Cu;
    {
        const bool branch_taken_0x13198c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x13198c) {
            ctx->pc = 0x131990u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x1319A0u;
            goto label_1319a0;
        }
    }
    ctx->pc = 0x131994u;
label_131994:
    // 0x131994: 0xc04b1a0
label_131998:
    if (ctx->pc == 0x131998u) {
        ctx->pc = 0x131998u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x13199Cu;
        goto label_13199c;
    }
    ctx->pc = 0x131994u;
    SET_GPR_U32(ctx, 31, 0x13199Cu);
    ctx->pc = 0x131998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x12C680u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C680_0x12c680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13199Cu; }
    }
    if (ctx->pc != 0x13199Cu) { return; }
    ctx->pc = 0x13199Cu;
label_13199c:
    // 0x13199c: 0x8e240004
    ctx->pc = 0x13199cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1319a0:
    // 0x1319a0: 0x50800004
label_1319a4:
    if (ctx->pc == 0x1319A4u) {
        ctx->pc = 0x1319A4u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x1319A8u;
        goto label_1319a8;
    }
    ctx->pc = 0x1319A0u;
    {
        const bool branch_taken_0x1319a0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1319a0) {
            ctx->pc = 0x1319A4u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->pc = 0x1319B4u;
            goto label_1319b4;
        }
    }
    ctx->pc = 0x1319A8u;
label_1319a8:
    // 0x1319a8: 0xc04b2d6
label_1319ac:
    if (ctx->pc == 0x1319ACu) {
        ctx->pc = 0x1319ACu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x1319B0u;
        goto label_1319b0;
    }
    ctx->pc = 0x1319A8u;
    SET_GPR_U32(ctx, 31, 0x1319B0u);
    ctx->pc = 0x1319ACu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x12CB58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012CB58_0x12cb58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1319B0u; }
    }
    if (ctx->pc != 0x1319B0u) { return; }
    ctx->pc = 0x1319B0u;
label_1319b0:
    // 0x1319b0: 0x8e300008
    ctx->pc = 0x1319b0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1319b4:
    // 0x1319b4: 0x12000007
label_1319b8:
    if (ctx->pc == 0x1319B8u) {
        ctx->pc = 0x1319B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1319BCu;
        goto label_1319bc;
    }
    ctx->pc = 0x1319B4u;
    {
        const bool branch_taken_0x1319b4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1319B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1319b4) {
            ctx->pc = 0x1319D4u;
            goto label_1319d4;
        }
    }
    ctx->pc = 0x1319BCu;
label_1319bc:
    // 0x1319bc: 0xae200008
    ctx->pc = 0x1319bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1319c0:
    // 0x1319c0: 0x282d
    ctx->pc = 0x1319c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1319c4:
    // 0x1319c4: 0xc04c1e6
label_1319c8:
    if (ctx->pc == 0x1319C8u) {
        ctx->pc = 0x1319C8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1319CCu;
        goto label_1319cc;
    }
    ctx->pc = 0x1319C4u;
    SET_GPR_U32(ctx, 31, 0x1319CCu);
    ctx->pc = 0x1319C8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130798u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130798_0x130798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1319CCu; }
    }
    if (ctx->pc != 0x1319CCu) { return; }
    ctx->pc = 0x1319CCu;
label_1319cc:
    // 0x1319cc: 0xc04c108
label_1319d0:
    if (ctx->pc == 0x1319D0u) {
        ctx->pc = 0x1319D0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1319D4u;
        goto label_1319d4;
    }
    ctx->pc = 0x1319CCu;
    SET_GPR_U32(ctx, 31, 0x1319D4u);
    ctx->pc = 0x1319D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130420_0x130420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1319D4u; }
    }
    if (ctx->pc != 0x1319D4u) { return; }
    ctx->pc = 0x1319D4u;
label_1319d4:
    // 0x1319d4: 0x8e240094
    ctx->pc = 0x1319d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1319d8:
    // 0x1319d8: 0x10800003
label_1319dc:
    if (ctx->pc == 0x1319DCu) {
        ctx->pc = 0x1319E0u;
        goto label_1319e0;
    }
    ctx->pc = 0x1319D8u;
    {
        const bool branch_taken_0x1319d8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1319d8) {
            ctx->pc = 0x1319E8u;
            goto label_1319e8;
        }
    }
    ctx->pc = 0x1319E0u;
label_1319e0:
    // 0x1319e0: 0xc04f32e
label_1319e4:
    if (ctx->pc == 0x1319E4u) {
        ctx->pc = 0x1319E4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
        ctx->pc = 0x1319E8u;
        goto label_1319e8;
    }
    ctx->pc = 0x1319E0u;
    SET_GPR_U32(ctx, 31, 0x1319E8u);
    ctx->pc = 0x1319E4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
    ctx->pc = 0x13CCB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CCB8_0x13ccb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1319E8u; }
    }
    if (ctx->pc != 0x1319E8u) { return; }
    ctx->pc = 0x1319E8u;
label_1319e8:
    // 0x1319e8: 0xc049938
label_1319ec:
    if (ctx->pc == 0x1319ECu) {
        ctx->pc = 0x1319F0u;
        goto label_1319f0;
    }
    ctx->pc = 0x1319E8u;
    SET_GPR_U32(ctx, 31, 0x1319F0u);
    ctx->pc = 0x1264E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264E0_0x1264e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1319F0u; }
    }
    if (ctx->pc != 0x1319F0u) { return; }
    ctx->pc = 0x1319F0u;
label_1319f0:
    // 0x1319f0: 0x8e240010
    ctx->pc = 0x1319f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1319f4:
    // 0x1319f4: 0x50800007
label_1319f8:
    if (ctx->pc == 0x1319F8u) {
        ctx->pc = 0x1319F8u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->pc = 0x1319FCu;
        goto label_1319fc;
    }
    ctx->pc = 0x1319F4u;
    {
        const bool branch_taken_0x1319f4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1319f4) {
            ctx->pc = 0x1319F8u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->pc = 0x131A14u;
            goto label_131a14;
        }
    }
    ctx->pc = 0x1319FCu;
label_1319fc:
    // 0x1319fc: 0x8c830000
    ctx->pc = 0x1319fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_131a00:
    // 0x131a00: 0xae200010
    ctx->pc = 0x131a00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_131a04:
    // 0x131a04: 0x8c62000c
    ctx->pc = 0x131a04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_131a08:
    // 0x131a08: 0x40f809
label_131a0c:
    if (ctx->pc == 0x131A0Cu) {
        ctx->pc = 0x131A10u;
        goto label_131a10;
    }
    ctx->pc = 0x131A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x131A10u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131918u: goto label_131918;
            case 0x13191Cu: goto label_13191c;
            case 0x131920u: goto label_131920;
            case 0x131924u: goto label_131924;
            case 0x131928u: goto label_131928;
            case 0x13192Cu: goto label_13192c;
            case 0x131930u: goto label_131930;
            case 0x131934u: goto label_131934;
            case 0x131938u: goto label_131938;
            case 0x13193Cu: goto label_13193c;
            case 0x131940u: goto label_131940;
            case 0x131944u: goto label_131944;
            case 0x131948u: goto label_131948;
            case 0x13194Cu: goto label_13194c;
            case 0x131950u: goto label_131950;
            case 0x131954u: goto label_131954;
            case 0x131958u: goto label_131958;
            case 0x13195Cu: goto label_13195c;
            case 0x131960u: goto label_131960;
            case 0x131964u: goto label_131964;
            case 0x131968u: goto label_131968;
            case 0x13196Cu: goto label_13196c;
            case 0x131970u: goto label_131970;
            case 0x131974u: goto label_131974;
            case 0x131978u: goto label_131978;
            case 0x13197Cu: goto label_13197c;
            case 0x131980u: goto label_131980;
            case 0x131984u: goto label_131984;
            case 0x131988u: goto label_131988;
            case 0x13198Cu: goto label_13198c;
            case 0x131990u: goto label_131990;
            case 0x131994u: goto label_131994;
            case 0x131998u: goto label_131998;
            case 0x13199Cu: goto label_13199c;
            case 0x1319A0u: goto label_1319a0;
            case 0x1319A4u: goto label_1319a4;
            case 0x1319A8u: goto label_1319a8;
            case 0x1319ACu: goto label_1319ac;
            case 0x1319B0u: goto label_1319b0;
            case 0x1319B4u: goto label_1319b4;
            case 0x1319B8u: goto label_1319b8;
            case 0x1319BCu: goto label_1319bc;
            case 0x1319C0u: goto label_1319c0;
            case 0x1319C4u: goto label_1319c4;
            case 0x1319C8u: goto label_1319c8;
            case 0x1319CCu: goto label_1319cc;
            case 0x1319D0u: goto label_1319d0;
            case 0x1319D4u: goto label_1319d4;
            case 0x1319D8u: goto label_1319d8;
            case 0x1319DCu: goto label_1319dc;
            case 0x1319E0u: goto label_1319e0;
            case 0x1319E4u: goto label_1319e4;
            case 0x1319E8u: goto label_1319e8;
            case 0x1319ECu: goto label_1319ec;
            case 0x1319F0u: goto label_1319f0;
            case 0x1319F4u: goto label_1319f4;
            case 0x1319F8u: goto label_1319f8;
            case 0x1319FCu: goto label_1319fc;
            case 0x131A00u: goto label_131a00;
            case 0x131A04u: goto label_131a04;
            case 0x131A08u: goto label_131a08;
            case 0x131A0Cu: goto label_131a0c;
            case 0x131A10u: goto label_131a10;
            case 0x131A14u: goto label_131a14;
            case 0x131A18u: goto label_131a18;
            case 0x131A1Cu: goto label_131a1c;
            case 0x131A20u: goto label_131a20;
            case 0x131A24u: goto label_131a24;
            case 0x131A28u: goto label_131a28;
            case 0x131A2Cu: goto label_131a2c;
            case 0x131A30u: goto label_131a30;
            case 0x131A34u: goto label_131a34;
            case 0x131A38u: goto label_131a38;
            case 0x131A3Cu: goto label_131a3c;
            case 0x131A40u: goto label_131a40;
            case 0x131A44u: goto label_131a44;
            case 0x131A48u: goto label_131a48;
            case 0x131A4Cu: goto label_131a4c;
            case 0x131A50u: goto label_131a50;
            case 0x131A54u: goto label_131a54;
            case 0x131A58u: goto label_131a58;
            case 0x131A5Cu: goto label_131a5c;
            case 0x131A60u: goto label_131a60;
            case 0x131A64u: goto label_131a64;
            case 0x131A68u: goto label_131a68;
            case 0x131A6Cu: goto label_131a6c;
            case 0x131A70u: goto label_131a70;
            case 0x131A74u: goto label_131a74;
            case 0x131A78u: goto label_131a78;
            case 0x131A7Cu: goto label_131a7c;
            case 0x131A80u: goto label_131a80;
            case 0x131A84u: goto label_131a84;
            case 0x131A88u: goto label_131a88;
            case 0x131A8Cu: goto label_131a8c;
            case 0x131A90u: goto label_131a90;
            case 0x131A94u: goto label_131a94;
            case 0x131A98u: goto label_131a98;
            case 0x131A9Cu: goto label_131a9c;
            case 0x131AA0u: goto label_131aa0;
            case 0x131AA4u: goto label_131aa4;
            case 0x131AA8u: goto label_131aa8;
            case 0x131AACu: goto label_131aac;
            case 0x131AB0u: goto label_131ab0;
            case 0x131AB4u: goto label_131ab4;
            case 0x131AB8u: goto label_131ab8;
            case 0x131ABCu: goto label_131abc;
            case 0x131AC0u: goto label_131ac0;
            case 0x131AC4u: goto label_131ac4;
            case 0x131AC8u: goto label_131ac8;
            case 0x131ACCu: goto label_131acc;
            case 0x131AD0u: goto label_131ad0;
            case 0x131AD4u: goto label_131ad4;
            case 0x131AD8u: goto label_131ad8;
            case 0x131ADCu: goto label_131adc;
            case 0x131AE0u: goto label_131ae0;
            case 0x131AE4u: goto label_131ae4;
            case 0x131AE8u: goto label_131ae8;
            case 0x131AECu: goto label_131aec;
            case 0x131AF0u: goto label_131af0;
            case 0x131AF4u: goto label_131af4;
            case 0x131AF8u: goto label_131af8;
            case 0x131AFCu: goto label_131afc;
            case 0x131B00u: goto label_131b00;
            case 0x131B04u: goto label_131b04;
            case 0x131B08u: goto label_131b08;
            case 0x131B0Cu: goto label_131b0c;
            case 0x131B10u: goto label_131b10;
            case 0x131B14u: goto label_131b14;
            case 0x131B18u: goto label_131b18;
            case 0x131B1Cu: goto label_131b1c;
            case 0x131B20u: goto label_131b20;
            case 0x131B24u: goto label_131b24;
            case 0x131B28u: goto label_131b28;
            case 0x131B2Cu: goto label_131b2c;
            case 0x131B30u: goto label_131b30;
            case 0x131B34u: goto label_131b34;
            case 0x131B38u: goto label_131b38;
            case 0x131B3Cu: goto label_131b3c;
            case 0x131B40u: goto label_131b40;
            case 0x131B44u: goto label_131b44;
            case 0x131B48u: goto label_131b48;
            case 0x131B4Cu: goto label_131b4c;
            case 0x131B50u: goto label_131b50;
            case 0x131B54u: goto label_131b54;
            case 0x131B58u: goto label_131b58;
            case 0x131B5Cu: goto label_131b5c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x131A10u; }
            if (ctx->pc != 0x131A10u) { return; }
        }
    }
    ctx->pc = 0x131A10u;
label_131a10:
    // 0x131a10: 0x82220003
    ctx->pc = 0x131a10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_131a14:
    // 0x131a14: 0x18400022
label_131a18:
    if (ctx->pc == 0x131A18u) {
        ctx->pc = 0x131A18u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x131A1Cu;
        goto label_131a1c;
    }
    ctx->pc = 0x131A14u;
    {
        const bool branch_taken_0x131a14 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x131A18u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x131a14) {
            ctx->pc = 0x131AA0u;
            goto label_131aa0;
        }
    }
    ctx->pc = 0x131A1Cu;
label_131a1c:
    // 0x131a1c: 0x26320080
    ctx->pc = 0x131a1cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 128));
label_131a20:
    // 0x131a20: 0x26300078
    ctx->pc = 0x131a20u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 120));
label_131a24:
    // 0x131a24: 0x0
    ctx->pc = 0x131a24u;
    // NOP
label_131a28:
    // 0x131a28: 0x8e03ffa0
    ctx->pc = 0x131a28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294967200)));
label_131a2c:
    // 0x131a2c: 0x10600006
label_131a30:
    if (ctx->pc == 0x131A30u) {
        ctx->pc = 0x131A30u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x131A34u;
        goto label_131a34;
    }
    ctx->pc = 0x131A2Cu;
    {
        const bool branch_taken_0x131a2c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x131A30u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x131a2c) {
            ctx->pc = 0x131A48u;
            goto label_131a48;
        }
    }
    ctx->pc = 0x131A34u;
label_131a34:
    // 0x131a34: 0x8c630000
    ctx->pc = 0x131a34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_131a38:
    // 0x131a38: 0xae00ffa0
    ctx->pc = 0x131a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967200), GPR_U32(ctx, 0));
label_131a3c:
    // 0x131a3c: 0x8c62000c
    ctx->pc = 0x131a3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_131a40:
    // 0x131a40: 0x40f809
label_131a44:
    if (ctx->pc == 0x131A44u) {
        ctx->pc = 0x131A48u;
        goto label_131a48;
    }
    ctx->pc = 0x131A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x131A48u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131918u: goto label_131918;
            case 0x13191Cu: goto label_13191c;
            case 0x131920u: goto label_131920;
            case 0x131924u: goto label_131924;
            case 0x131928u: goto label_131928;
            case 0x13192Cu: goto label_13192c;
            case 0x131930u: goto label_131930;
            case 0x131934u: goto label_131934;
            case 0x131938u: goto label_131938;
            case 0x13193Cu: goto label_13193c;
            case 0x131940u: goto label_131940;
            case 0x131944u: goto label_131944;
            case 0x131948u: goto label_131948;
            case 0x13194Cu: goto label_13194c;
            case 0x131950u: goto label_131950;
            case 0x131954u: goto label_131954;
            case 0x131958u: goto label_131958;
            case 0x13195Cu: goto label_13195c;
            case 0x131960u: goto label_131960;
            case 0x131964u: goto label_131964;
            case 0x131968u: goto label_131968;
            case 0x13196Cu: goto label_13196c;
            case 0x131970u: goto label_131970;
            case 0x131974u: goto label_131974;
            case 0x131978u: goto label_131978;
            case 0x13197Cu: goto label_13197c;
            case 0x131980u: goto label_131980;
            case 0x131984u: goto label_131984;
            case 0x131988u: goto label_131988;
            case 0x13198Cu: goto label_13198c;
            case 0x131990u: goto label_131990;
            case 0x131994u: goto label_131994;
            case 0x131998u: goto label_131998;
            case 0x13199Cu: goto label_13199c;
            case 0x1319A0u: goto label_1319a0;
            case 0x1319A4u: goto label_1319a4;
            case 0x1319A8u: goto label_1319a8;
            case 0x1319ACu: goto label_1319ac;
            case 0x1319B0u: goto label_1319b0;
            case 0x1319B4u: goto label_1319b4;
            case 0x1319B8u: goto label_1319b8;
            case 0x1319BCu: goto label_1319bc;
            case 0x1319C0u: goto label_1319c0;
            case 0x1319C4u: goto label_1319c4;
            case 0x1319C8u: goto label_1319c8;
            case 0x1319CCu: goto label_1319cc;
            case 0x1319D0u: goto label_1319d0;
            case 0x1319D4u: goto label_1319d4;
            case 0x1319D8u: goto label_1319d8;
            case 0x1319DCu: goto label_1319dc;
            case 0x1319E0u: goto label_1319e0;
            case 0x1319E4u: goto label_1319e4;
            case 0x1319E8u: goto label_1319e8;
            case 0x1319ECu: goto label_1319ec;
            case 0x1319F0u: goto label_1319f0;
            case 0x1319F4u: goto label_1319f4;
            case 0x1319F8u: goto label_1319f8;
            case 0x1319FCu: goto label_1319fc;
            case 0x131A00u: goto label_131a00;
            case 0x131A04u: goto label_131a04;
            case 0x131A08u: goto label_131a08;
            case 0x131A0Cu: goto label_131a0c;
            case 0x131A10u: goto label_131a10;
            case 0x131A14u: goto label_131a14;
            case 0x131A18u: goto label_131a18;
            case 0x131A1Cu: goto label_131a1c;
            case 0x131A20u: goto label_131a20;
            case 0x131A24u: goto label_131a24;
            case 0x131A28u: goto label_131a28;
            case 0x131A2Cu: goto label_131a2c;
            case 0x131A30u: goto label_131a30;
            case 0x131A34u: goto label_131a34;
            case 0x131A38u: goto label_131a38;
            case 0x131A3Cu: goto label_131a3c;
            case 0x131A40u: goto label_131a40;
            case 0x131A44u: goto label_131a44;
            case 0x131A48u: goto label_131a48;
            case 0x131A4Cu: goto label_131a4c;
            case 0x131A50u: goto label_131a50;
            case 0x131A54u: goto label_131a54;
            case 0x131A58u: goto label_131a58;
            case 0x131A5Cu: goto label_131a5c;
            case 0x131A60u: goto label_131a60;
            case 0x131A64u: goto label_131a64;
            case 0x131A68u: goto label_131a68;
            case 0x131A6Cu: goto label_131a6c;
            case 0x131A70u: goto label_131a70;
            case 0x131A74u: goto label_131a74;
            case 0x131A78u: goto label_131a78;
            case 0x131A7Cu: goto label_131a7c;
            case 0x131A80u: goto label_131a80;
            case 0x131A84u: goto label_131a84;
            case 0x131A88u: goto label_131a88;
            case 0x131A8Cu: goto label_131a8c;
            case 0x131A90u: goto label_131a90;
            case 0x131A94u: goto label_131a94;
            case 0x131A98u: goto label_131a98;
            case 0x131A9Cu: goto label_131a9c;
            case 0x131AA0u: goto label_131aa0;
            case 0x131AA4u: goto label_131aa4;
            case 0x131AA8u: goto label_131aa8;
            case 0x131AACu: goto label_131aac;
            case 0x131AB0u: goto label_131ab0;
            case 0x131AB4u: goto label_131ab4;
            case 0x131AB8u: goto label_131ab8;
            case 0x131ABCu: goto label_131abc;
            case 0x131AC0u: goto label_131ac0;
            case 0x131AC4u: goto label_131ac4;
            case 0x131AC8u: goto label_131ac8;
            case 0x131ACCu: goto label_131acc;
            case 0x131AD0u: goto label_131ad0;
            case 0x131AD4u: goto label_131ad4;
            case 0x131AD8u: goto label_131ad8;
            case 0x131ADCu: goto label_131adc;
            case 0x131AE0u: goto label_131ae0;
            case 0x131AE4u: goto label_131ae4;
            case 0x131AE8u: goto label_131ae8;
            case 0x131AECu: goto label_131aec;
            case 0x131AF0u: goto label_131af0;
            case 0x131AF4u: goto label_131af4;
            case 0x131AF8u: goto label_131af8;
            case 0x131AFCu: goto label_131afc;
            case 0x131B00u: goto label_131b00;
            case 0x131B04u: goto label_131b04;
            case 0x131B08u: goto label_131b08;
            case 0x131B0Cu: goto label_131b0c;
            case 0x131B10u: goto label_131b10;
            case 0x131B14u: goto label_131b14;
            case 0x131B18u: goto label_131b18;
            case 0x131B1Cu: goto label_131b1c;
            case 0x131B20u: goto label_131b20;
            case 0x131B24u: goto label_131b24;
            case 0x131B28u: goto label_131b28;
            case 0x131B2Cu: goto label_131b2c;
            case 0x131B30u: goto label_131b30;
            case 0x131B34u: goto label_131b34;
            case 0x131B38u: goto label_131b38;
            case 0x131B3Cu: goto label_131b3c;
            case 0x131B40u: goto label_131b40;
            case 0x131B44u: goto label_131b44;
            case 0x131B48u: goto label_131b48;
            case 0x131B4Cu: goto label_131b4c;
            case 0x131B50u: goto label_131b50;
            case 0x131B54u: goto label_131b54;
            case 0x131B58u: goto label_131b58;
            case 0x131B5Cu: goto label_131b5c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x131A48u; }
            if (ctx->pc != 0x131A48u) { return; }
        }
    }
    ctx->pc = 0x131A48u;
label_131a48:
    // 0x131a48: 0x8e040000
    ctx->pc = 0x131a48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_131a4c:
    // 0x131a4c: 0x50800007
label_131a50:
    if (ctx->pc == 0x131A50u) {
        ctx->pc = 0x131A50u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x131A54u;
        goto label_131a54;
    }
    ctx->pc = 0x131A4Cu;
    {
        const bool branch_taken_0x131a4c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x131a4c) {
            ctx->pc = 0x131A50u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x131A6Cu;
            goto label_131a6c;
        }
    }
    ctx->pc = 0x131A54u;
label_131a54:
    // 0x131a54: 0x8c830000
    ctx->pc = 0x131a54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_131a58:
    // 0x131a58: 0xae000000
    ctx->pc = 0x131a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_131a5c:
    // 0x131a5c: 0x8c62000c
    ctx->pc = 0x131a5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_131a60:
    // 0x131a60: 0x40f809
label_131a64:
    if (ctx->pc == 0x131A64u) {
        ctx->pc = 0x131A68u;
        goto label_131a68;
    }
    ctx->pc = 0x131A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x131A68u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131918u: goto label_131918;
            case 0x13191Cu: goto label_13191c;
            case 0x131920u: goto label_131920;
            case 0x131924u: goto label_131924;
            case 0x131928u: goto label_131928;
            case 0x13192Cu: goto label_13192c;
            case 0x131930u: goto label_131930;
            case 0x131934u: goto label_131934;
            case 0x131938u: goto label_131938;
            case 0x13193Cu: goto label_13193c;
            case 0x131940u: goto label_131940;
            case 0x131944u: goto label_131944;
            case 0x131948u: goto label_131948;
            case 0x13194Cu: goto label_13194c;
            case 0x131950u: goto label_131950;
            case 0x131954u: goto label_131954;
            case 0x131958u: goto label_131958;
            case 0x13195Cu: goto label_13195c;
            case 0x131960u: goto label_131960;
            case 0x131964u: goto label_131964;
            case 0x131968u: goto label_131968;
            case 0x13196Cu: goto label_13196c;
            case 0x131970u: goto label_131970;
            case 0x131974u: goto label_131974;
            case 0x131978u: goto label_131978;
            case 0x13197Cu: goto label_13197c;
            case 0x131980u: goto label_131980;
            case 0x131984u: goto label_131984;
            case 0x131988u: goto label_131988;
            case 0x13198Cu: goto label_13198c;
            case 0x131990u: goto label_131990;
            case 0x131994u: goto label_131994;
            case 0x131998u: goto label_131998;
            case 0x13199Cu: goto label_13199c;
            case 0x1319A0u: goto label_1319a0;
            case 0x1319A4u: goto label_1319a4;
            case 0x1319A8u: goto label_1319a8;
            case 0x1319ACu: goto label_1319ac;
            case 0x1319B0u: goto label_1319b0;
            case 0x1319B4u: goto label_1319b4;
            case 0x1319B8u: goto label_1319b8;
            case 0x1319BCu: goto label_1319bc;
            case 0x1319C0u: goto label_1319c0;
            case 0x1319C4u: goto label_1319c4;
            case 0x1319C8u: goto label_1319c8;
            case 0x1319CCu: goto label_1319cc;
            case 0x1319D0u: goto label_1319d0;
            case 0x1319D4u: goto label_1319d4;
            case 0x1319D8u: goto label_1319d8;
            case 0x1319DCu: goto label_1319dc;
            case 0x1319E0u: goto label_1319e0;
            case 0x1319E4u: goto label_1319e4;
            case 0x1319E8u: goto label_1319e8;
            case 0x1319ECu: goto label_1319ec;
            case 0x1319F0u: goto label_1319f0;
            case 0x1319F4u: goto label_1319f4;
            case 0x1319F8u: goto label_1319f8;
            case 0x1319FCu: goto label_1319fc;
            case 0x131A00u: goto label_131a00;
            case 0x131A04u: goto label_131a04;
            case 0x131A08u: goto label_131a08;
            case 0x131A0Cu: goto label_131a0c;
            case 0x131A10u: goto label_131a10;
            case 0x131A14u: goto label_131a14;
            case 0x131A18u: goto label_131a18;
            case 0x131A1Cu: goto label_131a1c;
            case 0x131A20u: goto label_131a20;
            case 0x131A24u: goto label_131a24;
            case 0x131A28u: goto label_131a28;
            case 0x131A2Cu: goto label_131a2c;
            case 0x131A30u: goto label_131a30;
            case 0x131A34u: goto label_131a34;
            case 0x131A38u: goto label_131a38;
            case 0x131A3Cu: goto label_131a3c;
            case 0x131A40u: goto label_131a40;
            case 0x131A44u: goto label_131a44;
            case 0x131A48u: goto label_131a48;
            case 0x131A4Cu: goto label_131a4c;
            case 0x131A50u: goto label_131a50;
            case 0x131A54u: goto label_131a54;
            case 0x131A58u: goto label_131a58;
            case 0x131A5Cu: goto label_131a5c;
            case 0x131A60u: goto label_131a60;
            case 0x131A64u: goto label_131a64;
            case 0x131A68u: goto label_131a68;
            case 0x131A6Cu: goto label_131a6c;
            case 0x131A70u: goto label_131a70;
            case 0x131A74u: goto label_131a74;
            case 0x131A78u: goto label_131a78;
            case 0x131A7Cu: goto label_131a7c;
            case 0x131A80u: goto label_131a80;
            case 0x131A84u: goto label_131a84;
            case 0x131A88u: goto label_131a88;
            case 0x131A8Cu: goto label_131a8c;
            case 0x131A90u: goto label_131a90;
            case 0x131A94u: goto label_131a94;
            case 0x131A98u: goto label_131a98;
            case 0x131A9Cu: goto label_131a9c;
            case 0x131AA0u: goto label_131aa0;
            case 0x131AA4u: goto label_131aa4;
            case 0x131AA8u: goto label_131aa8;
            case 0x131AACu: goto label_131aac;
            case 0x131AB0u: goto label_131ab0;
            case 0x131AB4u: goto label_131ab4;
            case 0x131AB8u: goto label_131ab8;
            case 0x131ABCu: goto label_131abc;
            case 0x131AC0u: goto label_131ac0;
            case 0x131AC4u: goto label_131ac4;
            case 0x131AC8u: goto label_131ac8;
            case 0x131ACCu: goto label_131acc;
            case 0x131AD0u: goto label_131ad0;
            case 0x131AD4u: goto label_131ad4;
            case 0x131AD8u: goto label_131ad8;
            case 0x131ADCu: goto label_131adc;
            case 0x131AE0u: goto label_131ae0;
            case 0x131AE4u: goto label_131ae4;
            case 0x131AE8u: goto label_131ae8;
            case 0x131AECu: goto label_131aec;
            case 0x131AF0u: goto label_131af0;
            case 0x131AF4u: goto label_131af4;
            case 0x131AF8u: goto label_131af8;
            case 0x131AFCu: goto label_131afc;
            case 0x131B00u: goto label_131b00;
            case 0x131B04u: goto label_131b04;
            case 0x131B08u: goto label_131b08;
            case 0x131B0Cu: goto label_131b0c;
            case 0x131B10u: goto label_131b10;
            case 0x131B14u: goto label_131b14;
            case 0x131B18u: goto label_131b18;
            case 0x131B1Cu: goto label_131b1c;
            case 0x131B20u: goto label_131b20;
            case 0x131B24u: goto label_131b24;
            case 0x131B28u: goto label_131b28;
            case 0x131B2Cu: goto label_131b2c;
            case 0x131B30u: goto label_131b30;
            case 0x131B34u: goto label_131b34;
            case 0x131B38u: goto label_131b38;
            case 0x131B3Cu: goto label_131b3c;
            case 0x131B40u: goto label_131b40;
            case 0x131B44u: goto label_131b44;
            case 0x131B48u: goto label_131b48;
            case 0x131B4Cu: goto label_131b4c;
            case 0x131B50u: goto label_131b50;
            case 0x131B54u: goto label_131b54;
            case 0x131B58u: goto label_131b58;
            case 0x131B5Cu: goto label_131b5c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x131A68u; }
            if (ctx->pc != 0x131A68u) { return; }
        }
    }
    ctx->pc = 0x131A68u;
label_131a68:
    // 0x131a68: 0x8e440000
    ctx->pc = 0x131a68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_131a6c:
    // 0x131a6c: 0x50800007
label_131a70:
    if (ctx->pc == 0x131A70u) {
        ctx->pc = 0x131A70u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->pc = 0x131A74u;
        goto label_131a74;
    }
    ctx->pc = 0x131A6Cu;
    {
        const bool branch_taken_0x131a6c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x131a6c) {
            ctx->pc = 0x131A70u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->pc = 0x131A8Cu;
            goto label_131a8c;
        }
    }
    ctx->pc = 0x131A74u;
label_131a74:
    // 0x131a74: 0x8c830000
    ctx->pc = 0x131a74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_131a78:
    // 0x131a78: 0xae400000
    ctx->pc = 0x131a78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_131a7c:
    // 0x131a7c: 0x8c62000c
    ctx->pc = 0x131a7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_131a80:
    // 0x131a80: 0x40f809
label_131a84:
    if (ctx->pc == 0x131A84u) {
        ctx->pc = 0x131A88u;
        goto label_131a88;
    }
    ctx->pc = 0x131A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x131A88u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131918u: goto label_131918;
            case 0x13191Cu: goto label_13191c;
            case 0x131920u: goto label_131920;
            case 0x131924u: goto label_131924;
            case 0x131928u: goto label_131928;
            case 0x13192Cu: goto label_13192c;
            case 0x131930u: goto label_131930;
            case 0x131934u: goto label_131934;
            case 0x131938u: goto label_131938;
            case 0x13193Cu: goto label_13193c;
            case 0x131940u: goto label_131940;
            case 0x131944u: goto label_131944;
            case 0x131948u: goto label_131948;
            case 0x13194Cu: goto label_13194c;
            case 0x131950u: goto label_131950;
            case 0x131954u: goto label_131954;
            case 0x131958u: goto label_131958;
            case 0x13195Cu: goto label_13195c;
            case 0x131960u: goto label_131960;
            case 0x131964u: goto label_131964;
            case 0x131968u: goto label_131968;
            case 0x13196Cu: goto label_13196c;
            case 0x131970u: goto label_131970;
            case 0x131974u: goto label_131974;
            case 0x131978u: goto label_131978;
            case 0x13197Cu: goto label_13197c;
            case 0x131980u: goto label_131980;
            case 0x131984u: goto label_131984;
            case 0x131988u: goto label_131988;
            case 0x13198Cu: goto label_13198c;
            case 0x131990u: goto label_131990;
            case 0x131994u: goto label_131994;
            case 0x131998u: goto label_131998;
            case 0x13199Cu: goto label_13199c;
            case 0x1319A0u: goto label_1319a0;
            case 0x1319A4u: goto label_1319a4;
            case 0x1319A8u: goto label_1319a8;
            case 0x1319ACu: goto label_1319ac;
            case 0x1319B0u: goto label_1319b0;
            case 0x1319B4u: goto label_1319b4;
            case 0x1319B8u: goto label_1319b8;
            case 0x1319BCu: goto label_1319bc;
            case 0x1319C0u: goto label_1319c0;
            case 0x1319C4u: goto label_1319c4;
            case 0x1319C8u: goto label_1319c8;
            case 0x1319CCu: goto label_1319cc;
            case 0x1319D0u: goto label_1319d0;
            case 0x1319D4u: goto label_1319d4;
            case 0x1319D8u: goto label_1319d8;
            case 0x1319DCu: goto label_1319dc;
            case 0x1319E0u: goto label_1319e0;
            case 0x1319E4u: goto label_1319e4;
            case 0x1319E8u: goto label_1319e8;
            case 0x1319ECu: goto label_1319ec;
            case 0x1319F0u: goto label_1319f0;
            case 0x1319F4u: goto label_1319f4;
            case 0x1319F8u: goto label_1319f8;
            case 0x1319FCu: goto label_1319fc;
            case 0x131A00u: goto label_131a00;
            case 0x131A04u: goto label_131a04;
            case 0x131A08u: goto label_131a08;
            case 0x131A0Cu: goto label_131a0c;
            case 0x131A10u: goto label_131a10;
            case 0x131A14u: goto label_131a14;
            case 0x131A18u: goto label_131a18;
            case 0x131A1Cu: goto label_131a1c;
            case 0x131A20u: goto label_131a20;
            case 0x131A24u: goto label_131a24;
            case 0x131A28u: goto label_131a28;
            case 0x131A2Cu: goto label_131a2c;
            case 0x131A30u: goto label_131a30;
            case 0x131A34u: goto label_131a34;
            case 0x131A38u: goto label_131a38;
            case 0x131A3Cu: goto label_131a3c;
            case 0x131A40u: goto label_131a40;
            case 0x131A44u: goto label_131a44;
            case 0x131A48u: goto label_131a48;
            case 0x131A4Cu: goto label_131a4c;
            case 0x131A50u: goto label_131a50;
            case 0x131A54u: goto label_131a54;
            case 0x131A58u: goto label_131a58;
            case 0x131A5Cu: goto label_131a5c;
            case 0x131A60u: goto label_131a60;
            case 0x131A64u: goto label_131a64;
            case 0x131A68u: goto label_131a68;
            case 0x131A6Cu: goto label_131a6c;
            case 0x131A70u: goto label_131a70;
            case 0x131A74u: goto label_131a74;
            case 0x131A78u: goto label_131a78;
            case 0x131A7Cu: goto label_131a7c;
            case 0x131A80u: goto label_131a80;
            case 0x131A84u: goto label_131a84;
            case 0x131A88u: goto label_131a88;
            case 0x131A8Cu: goto label_131a8c;
            case 0x131A90u: goto label_131a90;
            case 0x131A94u: goto label_131a94;
            case 0x131A98u: goto label_131a98;
            case 0x131A9Cu: goto label_131a9c;
            case 0x131AA0u: goto label_131aa0;
            case 0x131AA4u: goto label_131aa4;
            case 0x131AA8u: goto label_131aa8;
            case 0x131AACu: goto label_131aac;
            case 0x131AB0u: goto label_131ab0;
            case 0x131AB4u: goto label_131ab4;
            case 0x131AB8u: goto label_131ab8;
            case 0x131ABCu: goto label_131abc;
            case 0x131AC0u: goto label_131ac0;
            case 0x131AC4u: goto label_131ac4;
            case 0x131AC8u: goto label_131ac8;
            case 0x131ACCu: goto label_131acc;
            case 0x131AD0u: goto label_131ad0;
            case 0x131AD4u: goto label_131ad4;
            case 0x131AD8u: goto label_131ad8;
            case 0x131ADCu: goto label_131adc;
            case 0x131AE0u: goto label_131ae0;
            case 0x131AE4u: goto label_131ae4;
            case 0x131AE8u: goto label_131ae8;
            case 0x131AECu: goto label_131aec;
            case 0x131AF0u: goto label_131af0;
            case 0x131AF4u: goto label_131af4;
            case 0x131AF8u: goto label_131af8;
            case 0x131AFCu: goto label_131afc;
            case 0x131B00u: goto label_131b00;
            case 0x131B04u: goto label_131b04;
            case 0x131B08u: goto label_131b08;
            case 0x131B0Cu: goto label_131b0c;
            case 0x131B10u: goto label_131b10;
            case 0x131B14u: goto label_131b14;
            case 0x131B18u: goto label_131b18;
            case 0x131B1Cu: goto label_131b1c;
            case 0x131B20u: goto label_131b20;
            case 0x131B24u: goto label_131b24;
            case 0x131B28u: goto label_131b28;
            case 0x131B2Cu: goto label_131b2c;
            case 0x131B30u: goto label_131b30;
            case 0x131B34u: goto label_131b34;
            case 0x131B38u: goto label_131b38;
            case 0x131B3Cu: goto label_131b3c;
            case 0x131B40u: goto label_131b40;
            case 0x131B44u: goto label_131b44;
            case 0x131B48u: goto label_131b48;
            case 0x131B4Cu: goto label_131b4c;
            case 0x131B50u: goto label_131b50;
            case 0x131B54u: goto label_131b54;
            case 0x131B58u: goto label_131b58;
            case 0x131B5Cu: goto label_131b5c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x131A88u; }
            if (ctx->pc != 0x131A88u) { return; }
        }
    }
    ctx->pc = 0x131A88u;
label_131a88:
    // 0x131a88: 0x82220003
    ctx->pc = 0x131a88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_131a8c:
    // 0x131a8c: 0x26730001
    ctx->pc = 0x131a8cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_131a90:
    // 0x131a90: 0x26520004
    ctx->pc = 0x131a90u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
label_131a94:
    // 0x131a94: 0x262102a
    ctx->pc = 0x131a94u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
label_131a98:
    // 0x131a98: 0x1440ffe3
label_131a9c:
    if (ctx->pc == 0x131A9Cu) {
        ctx->pc = 0x131A9Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x131AA0u;
        goto label_131aa0;
    }
    ctx->pc = 0x131A98u;
    {
        const bool branch_taken_0x131a98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x131A9Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x131a98) {
            ctx->pc = 0x131A28u;
            goto label_131a28;
        }
    }
    ctx->pc = 0x131AA0u;
label_131aa0:
    // 0x131aa0: 0x8e240074
    ctx->pc = 0x131aa0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_131aa4:
    // 0x131aa4: 0x50800004
label_131aa8:
    if (ctx->pc == 0x131AA8u) {
        ctx->pc = 0x131AA8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x131AACu;
        goto label_131aac;
    }
    ctx->pc = 0x131AA4u;
    {
        const bool branch_taken_0x131aa4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x131aa4) {
            ctx->pc = 0x131AA8u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x131AB8u;
            goto label_131ab8;
        }
    }
    ctx->pc = 0x131AACu;
label_131aac:
    // 0x131aac: 0xc048a3c
label_131ab0:
    if (ctx->pc == 0x131AB0u) {
        ctx->pc = 0x131AB0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x131AB4u;
        goto label_131ab4;
    }
    ctx->pc = 0x131AACu;
    SET_GPR_U32(ctx, 31, 0x131AB4u);
    ctx->pc = 0x131AB0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
    ctx->pc = 0x1228F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001228F0_0x1228f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131AB4u; }
    }
    if (ctx->pc != 0x131AB4u) { return; }
    ctx->pc = 0x131AB4u;
label_131ab4:
    // 0x131ab4: 0x220202d
    ctx->pc = 0x131ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_131ab8:
    // 0x131ab8: 0x282d
    ctx->pc = 0x131ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_131abc:
    // 0x131abc: 0xc041f1a
label_131ac0:
    if (ctx->pc == 0x131AC0u) {
        ctx->pc = 0x131AC0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 196));
        ctx->pc = 0x131AC4u;
        goto label_131ac4;
    }
    ctx->pc = 0x131ABCu;
    SET_GPR_U32(ctx, 31, 0x131AC4u);
    ctx->pc = 0x131AC0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 196));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131AC4u; }
    }
    if (ctx->pc != 0x131AC4u) { return; }
    ctx->pc = 0x131AC4u;
label_131ac4:
    // 0x131ac4: 0xa2200000
    ctx->pc = 0x131ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_131ac8:
    // 0x131ac8: 0xdfb00000
    ctx->pc = 0x131ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_131acc:
    // 0x131acc: 0xdfb10008
    ctx->pc = 0x131accu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_131ad0:
    // 0x131ad0: 0xdfb20010
    ctx->pc = 0x131ad0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_131ad4:
    // 0x131ad4: 0xdfb30018
    ctx->pc = 0x131ad4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_131ad8:
    // 0x131ad8: 0xdfbf0020
    ctx->pc = 0x131ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_131adc:
    // 0x131adc: 0x804993e
label_131ae0:
    if (ctx->pc == 0x131AE0u) {
        ctx->pc = 0x131AE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x131AE4u;
        goto label_131ae4;
    }
    ctx->pc = 0x131ADCu;
    ctx->pc = 0x131AE0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1264F8u;
    sub_001264F8_0x1264f8(rdram, ctx, runtime); return;
    ctx->pc = 0x131AE4u;
label_131ae4:
    // 0x131ae4: 0x0
    ctx->pc = 0x131ae4u;
    // NOP
label_131ae8:
    // 0x131ae8: 0x27bdffe0
    ctx->pc = 0x131ae8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_131aec:
    // 0x131aec: 0x3c020021
    ctx->pc = 0x131aecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_131af0:
    // 0x131af0: 0xffbf0018
    ctx->pc = 0x131af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_131af4:
    // 0x131af4: 0xffb00000
    ctx->pc = 0x131af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_131af8:
    // 0x131af8: 0x2450f3c8
    ctx->pc = 0x131af8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294964168));
label_131afc:
    // 0x131afc: 0xffb10008
    ctx->pc = 0x131afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_131b00:
    // 0x131b00: 0x2411000f
    ctx->pc = 0x131b00u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 15));
label_131b04:
    // 0x131b04: 0xffb20010
    ctx->pc = 0x131b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_131b08:
    // 0x131b08: 0x24120001
    ctx->pc = 0x131b08u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
label_131b0c:
    // 0x131b0c: 0x0
    ctx->pc = 0x131b0cu;
    // NOP
label_131b10:
    // 0x131b10: 0x82020000
    ctx->pc = 0x131b10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_131b14:
    // 0x131b14: 0x54520004
label_131b18:
    if (ctx->pc == 0x131B18u) {
        ctx->pc = 0x131B18u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x131B1Cu;
        goto label_131b1c;
    }
    ctx->pc = 0x131B14u;
    {
        const bool branch_taken_0x131b14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x131b14) {
            ctx->pc = 0x131B18u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x131B28u;
            goto label_131b28;
        }
    }
    ctx->pc = 0x131B1Cu;
label_131b1c:
    // 0x131b1c: 0xc04c646
label_131b20:
    if (ctx->pc == 0x131B20u) {
        ctx->pc = 0x131B20u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x131B24u;
        goto label_131b24;
    }
    ctx->pc = 0x131B1Cu;
    SET_GPR_U32(ctx, 31, 0x131B24u);
    ctx->pc = 0x131B20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x131918u;
    goto label_131918;
    ctx->pc = 0x131B24u;
label_131b24:
    // 0x131b24: 0x2631ffff
    ctx->pc = 0x131b24u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_131b28:
    // 0x131b28: 0x621fff9
label_131b2c:
    if (ctx->pc == 0x131B2Cu) {
        ctx->pc = 0x131B2Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 196));
        ctx->pc = 0x131B30u;
        goto label_131b30;
    }
    ctx->pc = 0x131B28u;
    {
        const bool branch_taken_0x131b28 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x131B2Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 196));
        if (branch_taken_0x131b28) {
            ctx->pc = 0x131B10u;
            goto label_131b10;
        }
    }
    ctx->pc = 0x131B30u;
label_131b30:
    // 0x131b30: 0xdfb00000
    ctx->pc = 0x131b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_131b34:
    // 0x131b34: 0xdfb10008
    ctx->pc = 0x131b34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_131b38:
    // 0x131b38: 0xdfb20010
    ctx->pc = 0x131b38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_131b3c:
    // 0x131b3c: 0xdfbf0018
    ctx->pc = 0x131b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_131b40:
    // 0x131b40: 0x3e00008
label_131b44:
    if (ctx->pc == 0x131B44u) {
        ctx->pc = 0x131B44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x131B48u;
        goto label_131b48;
    }
    ctx->pc = 0x131B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131B44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131918u: goto label_131918;
            case 0x13191Cu: goto label_13191c;
            case 0x131920u: goto label_131920;
            case 0x131924u: goto label_131924;
            case 0x131928u: goto label_131928;
            case 0x13192Cu: goto label_13192c;
            case 0x131930u: goto label_131930;
            case 0x131934u: goto label_131934;
            case 0x131938u: goto label_131938;
            case 0x13193Cu: goto label_13193c;
            case 0x131940u: goto label_131940;
            case 0x131944u: goto label_131944;
            case 0x131948u: goto label_131948;
            case 0x13194Cu: goto label_13194c;
            case 0x131950u: goto label_131950;
            case 0x131954u: goto label_131954;
            case 0x131958u: goto label_131958;
            case 0x13195Cu: goto label_13195c;
            case 0x131960u: goto label_131960;
            case 0x131964u: goto label_131964;
            case 0x131968u: goto label_131968;
            case 0x13196Cu: goto label_13196c;
            case 0x131970u: goto label_131970;
            case 0x131974u: goto label_131974;
            case 0x131978u: goto label_131978;
            case 0x13197Cu: goto label_13197c;
            case 0x131980u: goto label_131980;
            case 0x131984u: goto label_131984;
            case 0x131988u: goto label_131988;
            case 0x13198Cu: goto label_13198c;
            case 0x131990u: goto label_131990;
            case 0x131994u: goto label_131994;
            case 0x131998u: goto label_131998;
            case 0x13199Cu: goto label_13199c;
            case 0x1319A0u: goto label_1319a0;
            case 0x1319A4u: goto label_1319a4;
            case 0x1319A8u: goto label_1319a8;
            case 0x1319ACu: goto label_1319ac;
            case 0x1319B0u: goto label_1319b0;
            case 0x1319B4u: goto label_1319b4;
            case 0x1319B8u: goto label_1319b8;
            case 0x1319BCu: goto label_1319bc;
            case 0x1319C0u: goto label_1319c0;
            case 0x1319C4u: goto label_1319c4;
            case 0x1319C8u: goto label_1319c8;
            case 0x1319CCu: goto label_1319cc;
            case 0x1319D0u: goto label_1319d0;
            case 0x1319D4u: goto label_1319d4;
            case 0x1319D8u: goto label_1319d8;
            case 0x1319DCu: goto label_1319dc;
            case 0x1319E0u: goto label_1319e0;
            case 0x1319E4u: goto label_1319e4;
            case 0x1319E8u: goto label_1319e8;
            case 0x1319ECu: goto label_1319ec;
            case 0x1319F0u: goto label_1319f0;
            case 0x1319F4u: goto label_1319f4;
            case 0x1319F8u: goto label_1319f8;
            case 0x1319FCu: goto label_1319fc;
            case 0x131A00u: goto label_131a00;
            case 0x131A04u: goto label_131a04;
            case 0x131A08u: goto label_131a08;
            case 0x131A0Cu: goto label_131a0c;
            case 0x131A10u: goto label_131a10;
            case 0x131A14u: goto label_131a14;
            case 0x131A18u: goto label_131a18;
            case 0x131A1Cu: goto label_131a1c;
            case 0x131A20u: goto label_131a20;
            case 0x131A24u: goto label_131a24;
            case 0x131A28u: goto label_131a28;
            case 0x131A2Cu: goto label_131a2c;
            case 0x131A30u: goto label_131a30;
            case 0x131A34u: goto label_131a34;
            case 0x131A38u: goto label_131a38;
            case 0x131A3Cu: goto label_131a3c;
            case 0x131A40u: goto label_131a40;
            case 0x131A44u: goto label_131a44;
            case 0x131A48u: goto label_131a48;
            case 0x131A4Cu: goto label_131a4c;
            case 0x131A50u: goto label_131a50;
            case 0x131A54u: goto label_131a54;
            case 0x131A58u: goto label_131a58;
            case 0x131A5Cu: goto label_131a5c;
            case 0x131A60u: goto label_131a60;
            case 0x131A64u: goto label_131a64;
            case 0x131A68u: goto label_131a68;
            case 0x131A6Cu: goto label_131a6c;
            case 0x131A70u: goto label_131a70;
            case 0x131A74u: goto label_131a74;
            case 0x131A78u: goto label_131a78;
            case 0x131A7Cu: goto label_131a7c;
            case 0x131A80u: goto label_131a80;
            case 0x131A84u: goto label_131a84;
            case 0x131A88u: goto label_131a88;
            case 0x131A8Cu: goto label_131a8c;
            case 0x131A90u: goto label_131a90;
            case 0x131A94u: goto label_131a94;
            case 0x131A98u: goto label_131a98;
            case 0x131A9Cu: goto label_131a9c;
            case 0x131AA0u: goto label_131aa0;
            case 0x131AA4u: goto label_131aa4;
            case 0x131AA8u: goto label_131aa8;
            case 0x131AACu: goto label_131aac;
            case 0x131AB0u: goto label_131ab0;
            case 0x131AB4u: goto label_131ab4;
            case 0x131AB8u: goto label_131ab8;
            case 0x131ABCu: goto label_131abc;
            case 0x131AC0u: goto label_131ac0;
            case 0x131AC4u: goto label_131ac4;
            case 0x131AC8u: goto label_131ac8;
            case 0x131ACCu: goto label_131acc;
            case 0x131AD0u: goto label_131ad0;
            case 0x131AD4u: goto label_131ad4;
            case 0x131AD8u: goto label_131ad8;
            case 0x131ADCu: goto label_131adc;
            case 0x131AE0u: goto label_131ae0;
            case 0x131AE4u: goto label_131ae4;
            case 0x131AE8u: goto label_131ae8;
            case 0x131AECu: goto label_131aec;
            case 0x131AF0u: goto label_131af0;
            case 0x131AF4u: goto label_131af4;
            case 0x131AF8u: goto label_131af8;
            case 0x131AFCu: goto label_131afc;
            case 0x131B00u: goto label_131b00;
            case 0x131B04u: goto label_131b04;
            case 0x131B08u: goto label_131b08;
            case 0x131B0Cu: goto label_131b0c;
            case 0x131B10u: goto label_131b10;
            case 0x131B14u: goto label_131b14;
            case 0x131B18u: goto label_131b18;
            case 0x131B1Cu: goto label_131b1c;
            case 0x131B20u: goto label_131b20;
            case 0x131B24u: goto label_131b24;
            case 0x131B28u: goto label_131b28;
            case 0x131B2Cu: goto label_131b2c;
            case 0x131B30u: goto label_131b30;
            case 0x131B34u: goto label_131b34;
            case 0x131B38u: goto label_131b38;
            case 0x131B3Cu: goto label_131b3c;
            case 0x131B40u: goto label_131b40;
            case 0x131B44u: goto label_131b44;
            case 0x131B48u: goto label_131b48;
            case 0x131B4Cu: goto label_131b4c;
            case 0x131B50u: goto label_131b50;
            case 0x131B54u: goto label_131b54;
            case 0x131B58u: goto label_131b58;
            case 0x131B5Cu: goto label_131b5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x131B48u;
label_131b48:
    // 0x131b48: 0x27bdfff0
    ctx->pc = 0x131b48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_131b4c:
    // 0x131b4c: 0xffbf0000
    ctx->pc = 0x131b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_131b50:
    // 0x131b50: 0xdfbf0000
    ctx->pc = 0x131b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_131b54:
    // 0x131b54: 0x804c6ba
label_131b58:
    if (ctx->pc == 0x131B58u) {
        ctx->pc = 0x131B58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x131B5Cu;
        goto label_131b5c;
    }
    ctx->pc = 0x131B54u;
    ctx->pc = 0x131B58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x131AE8u;
    goto label_131ae8;
    ctx->pc = 0x131B5Cu;
label_131b5c:
    // 0x131b5c: 0x0
    ctx->pc = 0x131b5cu;
    // NOP
}
