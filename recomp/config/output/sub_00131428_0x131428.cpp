#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00131428
// Address: 0x131428 - 0x1315e0
void sub_00131428_0x131428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x131428u;

label_131428:
    // 0x131428: 0x27bdfff0
    ctx->pc = 0x131428u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13142c:
    // 0x13142c: 0x80102d
    ctx->pc = 0x13142cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_131430:
    // 0x131430: 0x10400009
label_131434:
    if (ctx->pc == 0x131434u) {
        ctx->pc = 0x131434u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x131438u;
        goto label_131438;
    }
    ctx->pc = 0x131430u;
    {
        const bool branch_taken_0x131430 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x131434u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x131430) {
            ctx->pc = 0x131458u;
            goto label_131458;
        }
    }
    ctx->pc = 0x131438u;
label_131438:
    // 0x131438: 0x8c470004
    ctx->pc = 0x131438u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13143c:
    // 0x13143c: 0x8c440000
    ctx->pc = 0x13143cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_131440:
    // 0x131440: 0x8c450008
    ctx->pc = 0x131440u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_131444:
    // 0x131444: 0xc04f20e
label_131448:
    if (ctx->pc == 0x131448u) {
        ctx->pc = 0x131448u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->pc = 0x13144Cu;
        goto label_13144c;
    }
    ctx->pc = 0x131444u;
    SET_GPR_U32(ctx, 31, 0x13144Cu);
    ctx->pc = 0x131448u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->pc = 0x13C838u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C838_0x13c838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13144Cu; }
    }
    if (ctx->pc != 0x13144Cu) { return; }
    ctx->pc = 0x13144Cu;
label_13144c:
    // 0x13144c: 0x10000007
label_131450:
    if (ctx->pc == 0x131450u) {
        ctx->pc = 0x131450u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x131454u;
        goto label_131454;
    }
    ctx->pc = 0x13144Cu;
    {
        const bool branch_taken_0x13144c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x131450u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x13144c) {
            ctx->pc = 0x13146Cu;
            goto label_13146c;
        }
    }
    ctx->pc = 0x131454u;
label_131454:
    // 0x131454: 0x0
    ctx->pc = 0x131454u;
    // NOP
label_131458:
    // 0x131458: 0x282d
    ctx->pc = 0x131458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13145c:
    // 0x13145c: 0x302d
    ctx->pc = 0x13145cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_131460:
    // 0x131460: 0xc04f20e
label_131464:
    if (ctx->pc == 0x131464u) {
        ctx->pc = 0x131464u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x131468u;
        goto label_131468;
    }
    ctx->pc = 0x131460u;
    SET_GPR_U32(ctx, 31, 0x131468u);
    ctx->pc = 0x131464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13C838u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C838_0x13c838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131468u; }
    }
    if (ctx->pc != 0x131468u) { return; }
    ctx->pc = 0x131468u;
label_131468:
    // 0x131468: 0xdfbf0000
    ctx->pc = 0x131468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13146c:
    // 0x13146c: 0x3e00008
label_131470:
    if (ctx->pc == 0x131470u) {
        ctx->pc = 0x131470u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x131474u;
        goto label_131474;
    }
    ctx->pc = 0x13146Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131470u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131428u: goto label_131428;
            case 0x13142Cu: goto label_13142c;
            case 0x131430u: goto label_131430;
            case 0x131434u: goto label_131434;
            case 0x131438u: goto label_131438;
            case 0x13143Cu: goto label_13143c;
            case 0x131440u: goto label_131440;
            case 0x131444u: goto label_131444;
            case 0x131448u: goto label_131448;
            case 0x13144Cu: goto label_13144c;
            case 0x131450u: goto label_131450;
            case 0x131454u: goto label_131454;
            case 0x131458u: goto label_131458;
            case 0x13145Cu: goto label_13145c;
            case 0x131460u: goto label_131460;
            case 0x131464u: goto label_131464;
            case 0x131468u: goto label_131468;
            case 0x13146Cu: goto label_13146c;
            case 0x131470u: goto label_131470;
            case 0x131474u: goto label_131474;
            case 0x131478u: goto label_131478;
            case 0x13147Cu: goto label_13147c;
            case 0x131480u: goto label_131480;
            case 0x131484u: goto label_131484;
            case 0x131488u: goto label_131488;
            case 0x13148Cu: goto label_13148c;
            case 0x131490u: goto label_131490;
            case 0x131494u: goto label_131494;
            case 0x131498u: goto label_131498;
            case 0x13149Cu: goto label_13149c;
            case 0x1314A0u: goto label_1314a0;
            case 0x1314A4u: goto label_1314a4;
            case 0x1314A8u: goto label_1314a8;
            case 0x1314ACu: goto label_1314ac;
            case 0x1314B0u: goto label_1314b0;
            case 0x1314B4u: goto label_1314b4;
            case 0x1314B8u: goto label_1314b8;
            case 0x1314BCu: goto label_1314bc;
            case 0x1314C0u: goto label_1314c0;
            case 0x1314C4u: goto label_1314c4;
            case 0x1314C8u: goto label_1314c8;
            case 0x1314CCu: goto label_1314cc;
            case 0x1314D0u: goto label_1314d0;
            case 0x1314D4u: goto label_1314d4;
            case 0x1314D8u: goto label_1314d8;
            case 0x1314DCu: goto label_1314dc;
            case 0x1314E0u: goto label_1314e0;
            case 0x1314E4u: goto label_1314e4;
            case 0x1314E8u: goto label_1314e8;
            case 0x1314ECu: goto label_1314ec;
            case 0x1314F0u: goto label_1314f0;
            case 0x1314F4u: goto label_1314f4;
            case 0x1314F8u: goto label_1314f8;
            case 0x1314FCu: goto label_1314fc;
            case 0x131500u: goto label_131500;
            case 0x131504u: goto label_131504;
            case 0x131508u: goto label_131508;
            case 0x13150Cu: goto label_13150c;
            case 0x131510u: goto label_131510;
            case 0x131514u: goto label_131514;
            case 0x131518u: goto label_131518;
            case 0x13151Cu: goto label_13151c;
            case 0x131520u: goto label_131520;
            case 0x131524u: goto label_131524;
            case 0x131528u: goto label_131528;
            case 0x13152Cu: goto label_13152c;
            case 0x131530u: goto label_131530;
            case 0x131534u: goto label_131534;
            case 0x131538u: goto label_131538;
            case 0x13153Cu: goto label_13153c;
            case 0x131540u: goto label_131540;
            case 0x131544u: goto label_131544;
            case 0x131548u: goto label_131548;
            case 0x13154Cu: goto label_13154c;
            case 0x131550u: goto label_131550;
            case 0x131554u: goto label_131554;
            case 0x131558u: goto label_131558;
            case 0x13155Cu: goto label_13155c;
            case 0x131560u: goto label_131560;
            case 0x131564u: goto label_131564;
            case 0x131568u: goto label_131568;
            case 0x13156Cu: goto label_13156c;
            case 0x131570u: goto label_131570;
            case 0x131574u: goto label_131574;
            case 0x131578u: goto label_131578;
            case 0x13157Cu: goto label_13157c;
            case 0x131580u: goto label_131580;
            case 0x131584u: goto label_131584;
            case 0x131588u: goto label_131588;
            case 0x13158Cu: goto label_13158c;
            case 0x131590u: goto label_131590;
            case 0x131594u: goto label_131594;
            case 0x131598u: goto label_131598;
            case 0x13159Cu: goto label_13159c;
            case 0x1315A0u: goto label_1315a0;
            case 0x1315A4u: goto label_1315a4;
            case 0x1315A8u: goto label_1315a8;
            case 0x1315ACu: goto label_1315ac;
            case 0x1315B0u: goto label_1315b0;
            case 0x1315B4u: goto label_1315b4;
            case 0x1315B8u: goto label_1315b8;
            case 0x1315BCu: goto label_1315bc;
            case 0x1315C0u: goto label_1315c0;
            case 0x1315C4u: goto label_1315c4;
            case 0x1315C8u: goto label_1315c8;
            case 0x1315CCu: goto label_1315cc;
            case 0x1315D0u: goto label_1315d0;
            case 0x1315D4u: goto label_1315d4;
            case 0x1315D8u: goto label_1315d8;
            case 0x1315DCu: goto label_1315dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x131474u;
label_131474:
    // 0x131474: 0x0
    ctx->pc = 0x131474u;
    // NOP
label_131478:
    // 0x131478: 0x27bdfff0
    ctx->pc = 0x131478u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13147c:
    // 0x13147c: 0xffbf0000
    ctx->pc = 0x13147cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_131480:
    // 0x131480: 0xdfbf0000
    ctx->pc = 0x131480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_131484:
    // 0x131484: 0x804f270
label_131488:
    if (ctx->pc == 0x131488u) {
        ctx->pc = 0x131488u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13148Cu;
        goto label_13148c;
    }
    ctx->pc = 0x131484u;
    ctx->pc = 0x131488u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13C9C0u;
    entry_13c9c0_0x13c9e8(rdram, ctx, runtime); return;
    ctx->pc = 0x13148Cu;
label_13148c:
    // 0x13148c: 0x0
    ctx->pc = 0x13148cu;
    // NOP
label_131490:
    // 0x131490: 0x27bdfff0
    ctx->pc = 0x131490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_131494:
    // 0x131494: 0xffb00000
    ctx->pc = 0x131494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_131498:
    // 0x131498: 0x80802d
    ctx->pc = 0x131498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13149c:
    // 0x13149c: 0x12000008
label_1314a0:
    if (ctx->pc == 0x1314A0u) {
        ctx->pc = 0x1314A0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x1314A4u;
        goto label_1314a4;
    }
    ctx->pc = 0x13149Cu;
    {
        const bool branch_taken_0x13149c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1314A0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x13149c) {
            ctx->pc = 0x1314C0u;
            goto label_1314c0;
        }
    }
    ctx->pc = 0x1314A4u;
label_1314a4:
    // 0x1314a4: 0xc04f27a
label_1314a8:
    if (ctx->pc == 0x1314A8u) {
        ctx->pc = 0x1314A8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1314ACu;
        goto label_1314ac;
    }
    ctx->pc = 0x1314A4u;
    SET_GPR_U32(ctx, 31, 0x1314ACu);
    ctx->pc = 0x1314A8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x13C9E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E8_0x13c9e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1314ACu; }
    }
    if (ctx->pc != 0x1314ACu) { return; }
    ctx->pc = 0x1314ACu;
label_1314ac:
    // 0x1314ac: 0x8e040000
    ctx->pc = 0x1314acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1314b0:
    // 0x1314b0: 0xdfbf0008
    ctx->pc = 0x1314b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1314b4:
    // 0x1314b4: 0xdfb00000
    ctx->pc = 0x1314b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1314b8:
    // 0x1314b8: 0x804f286
label_1314bc:
    if (ctx->pc == 0x1314BCu) {
        ctx->pc = 0x1314BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1314C0u;
        goto label_1314c0;
    }
    ctx->pc = 0x1314B8u;
    ctx->pc = 0x1314BCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13CA18u;
    sub_0013CA18_0x13ca18(rdram, ctx, runtime); return;
    ctx->pc = 0x1314C0u;
label_1314c0:
    // 0x1314c0: 0xc04f27a
label_1314c4:
    if (ctx->pc == 0x1314C4u) {
        ctx->pc = 0x1314C8u;
        goto label_1314c8;
    }
    ctx->pc = 0x1314C0u;
    SET_GPR_U32(ctx, 31, 0x1314C8u);
    ctx->pc = 0x13C9E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E8_0x13c9e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1314C8u; }
    }
    if (ctx->pc != 0x1314C8u) { return; }
    ctx->pc = 0x1314C8u;
label_1314c8:
    // 0x1314c8: 0x202d
    ctx->pc = 0x1314c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1314cc:
    // 0x1314cc: 0xdfb00000
    ctx->pc = 0x1314ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1314d0:
    // 0x1314d0: 0xdfbf0008
    ctx->pc = 0x1314d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1314d4:
    // 0x1314d4: 0x804f286
label_1314d8:
    if (ctx->pc == 0x1314D8u) {
        ctx->pc = 0x1314D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1314DCu;
        goto label_1314dc;
    }
    ctx->pc = 0x1314D4u;
    ctx->pc = 0x1314D8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13CA18u;
    sub_0013CA18_0x13ca18(rdram, ctx, runtime); return;
    ctx->pc = 0x1314DCu;
label_1314dc:
    // 0x1314dc: 0x0
    ctx->pc = 0x1314dcu;
    // NOP
label_1314e0:
    // 0x1314e0: 0x27bdffd0
    ctx->pc = 0x1314e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1314e4:
    // 0x1314e4: 0x282d
    ctx->pc = 0x1314e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1314e8:
    // 0x1314e8: 0xffb10008
    ctx->pc = 0x1314e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1314ec:
    // 0x1314ec: 0xffb20010
    ctx->pc = 0x1314ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1314f0:
    // 0x1314f0: 0xffb30018
    ctx->pc = 0x1314f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1314f4:
    // 0x1314f4: 0xffb40020
    ctx->pc = 0x1314f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1314f8:
    // 0x1314f8: 0x80a02d
    ctx->pc = 0x1314f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1314fc:
    // 0x1314fc: 0xffbf0028
    ctx->pc = 0x1314fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_131500:
    // 0x131500: 0xffb00000
    ctx->pc = 0x131500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_131504:
    // 0x131504: 0x8e90000c
    ctx->pc = 0x131504u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_131508:
    // 0x131508: 0xc04fc78
label_13150c:
    if (ctx->pc == 0x13150Cu) {
        ctx->pc = 0x13150Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x131510u;
        goto label_131510;
    }
    ctx->pc = 0x131508u;
    SET_GPR_U32(ctx, 31, 0x131510u);
    ctx->pc = 0x13150Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13F1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F1E0_0x13f1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131510u; }
    }
    if (ctx->pc != 0x131510u) { return; }
    ctx->pc = 0x131510u;
label_131510:
    // 0x131510: 0x200202d
    ctx->pc = 0x131510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_131514:
    // 0x131514: 0x282d
    ctx->pc = 0x131514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_131518:
    // 0x131518: 0xc04fc72
label_13151c:
    if (ctx->pc == 0x13151Cu) {
        ctx->pc = 0x13151Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x131520u;
        goto label_131520;
    }
    ctx->pc = 0x131518u;
    SET_GPR_U32(ctx, 31, 0x131520u);
    ctx->pc = 0x13151Cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13F1C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F1C8_0x13f1c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131520u; }
    }
    if (ctx->pc != 0x131520u) { return; }
    ctx->pc = 0x131520u;
label_131520:
    // 0x131520: 0x24050001
    ctx->pc = 0x131520u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_131524:
    // 0x131524: 0x40802d
    ctx->pc = 0x131524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_131528:
    // 0x131528: 0x8e030000
    ctx->pc = 0x131528u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13152c:
    // 0x13152c: 0x8c620024
    ctx->pc = 0x13152cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_131530:
    // 0x131530: 0x40f809
label_131534:
    if (ctx->pc == 0x131534u) {
        ctx->pc = 0x131534u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x131538u;
        goto label_131538;
    }
    ctx->pc = 0x131530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x131538u);
        ctx->pc = 0x131534u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131428u: goto label_131428;
            case 0x13142Cu: goto label_13142c;
            case 0x131430u: goto label_131430;
            case 0x131434u: goto label_131434;
            case 0x131438u: goto label_131438;
            case 0x13143Cu: goto label_13143c;
            case 0x131440u: goto label_131440;
            case 0x131444u: goto label_131444;
            case 0x131448u: goto label_131448;
            case 0x13144Cu: goto label_13144c;
            case 0x131450u: goto label_131450;
            case 0x131454u: goto label_131454;
            case 0x131458u: goto label_131458;
            case 0x13145Cu: goto label_13145c;
            case 0x131460u: goto label_131460;
            case 0x131464u: goto label_131464;
            case 0x131468u: goto label_131468;
            case 0x13146Cu: goto label_13146c;
            case 0x131470u: goto label_131470;
            case 0x131474u: goto label_131474;
            case 0x131478u: goto label_131478;
            case 0x13147Cu: goto label_13147c;
            case 0x131480u: goto label_131480;
            case 0x131484u: goto label_131484;
            case 0x131488u: goto label_131488;
            case 0x13148Cu: goto label_13148c;
            case 0x131490u: goto label_131490;
            case 0x131494u: goto label_131494;
            case 0x131498u: goto label_131498;
            case 0x13149Cu: goto label_13149c;
            case 0x1314A0u: goto label_1314a0;
            case 0x1314A4u: goto label_1314a4;
            case 0x1314A8u: goto label_1314a8;
            case 0x1314ACu: goto label_1314ac;
            case 0x1314B0u: goto label_1314b0;
            case 0x1314B4u: goto label_1314b4;
            case 0x1314B8u: goto label_1314b8;
            case 0x1314BCu: goto label_1314bc;
            case 0x1314C0u: goto label_1314c0;
            case 0x1314C4u: goto label_1314c4;
            case 0x1314C8u: goto label_1314c8;
            case 0x1314CCu: goto label_1314cc;
            case 0x1314D0u: goto label_1314d0;
            case 0x1314D4u: goto label_1314d4;
            case 0x1314D8u: goto label_1314d8;
            case 0x1314DCu: goto label_1314dc;
            case 0x1314E0u: goto label_1314e0;
            case 0x1314E4u: goto label_1314e4;
            case 0x1314E8u: goto label_1314e8;
            case 0x1314ECu: goto label_1314ec;
            case 0x1314F0u: goto label_1314f0;
            case 0x1314F4u: goto label_1314f4;
            case 0x1314F8u: goto label_1314f8;
            case 0x1314FCu: goto label_1314fc;
            case 0x131500u: goto label_131500;
            case 0x131504u: goto label_131504;
            case 0x131508u: goto label_131508;
            case 0x13150Cu: goto label_13150c;
            case 0x131510u: goto label_131510;
            case 0x131514u: goto label_131514;
            case 0x131518u: goto label_131518;
            case 0x13151Cu: goto label_13151c;
            case 0x131520u: goto label_131520;
            case 0x131524u: goto label_131524;
            case 0x131528u: goto label_131528;
            case 0x13152Cu: goto label_13152c;
            case 0x131530u: goto label_131530;
            case 0x131534u: goto label_131534;
            case 0x131538u: goto label_131538;
            case 0x13153Cu: goto label_13153c;
            case 0x131540u: goto label_131540;
            case 0x131544u: goto label_131544;
            case 0x131548u: goto label_131548;
            case 0x13154Cu: goto label_13154c;
            case 0x131550u: goto label_131550;
            case 0x131554u: goto label_131554;
            case 0x131558u: goto label_131558;
            case 0x13155Cu: goto label_13155c;
            case 0x131560u: goto label_131560;
            case 0x131564u: goto label_131564;
            case 0x131568u: goto label_131568;
            case 0x13156Cu: goto label_13156c;
            case 0x131570u: goto label_131570;
            case 0x131574u: goto label_131574;
            case 0x131578u: goto label_131578;
            case 0x13157Cu: goto label_13157c;
            case 0x131580u: goto label_131580;
            case 0x131584u: goto label_131584;
            case 0x131588u: goto label_131588;
            case 0x13158Cu: goto label_13158c;
            case 0x131590u: goto label_131590;
            case 0x131594u: goto label_131594;
            case 0x131598u: goto label_131598;
            case 0x13159Cu: goto label_13159c;
            case 0x1315A0u: goto label_1315a0;
            case 0x1315A4u: goto label_1315a4;
            case 0x1315A8u: goto label_1315a8;
            case 0x1315ACu: goto label_1315ac;
            case 0x1315B0u: goto label_1315b0;
            case 0x1315B4u: goto label_1315b4;
            case 0x1315B8u: goto label_1315b8;
            case 0x1315BCu: goto label_1315bc;
            case 0x1315C0u: goto label_1315c0;
            case 0x1315C4u: goto label_1315c4;
            case 0x1315C8u: goto label_1315c8;
            case 0x1315CCu: goto label_1315cc;
            case 0x1315D0u: goto label_1315d0;
            case 0x1315D4u: goto label_1315d4;
            case 0x1315D8u: goto label_1315d8;
            case 0x1315DCu: goto label_1315dc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x131538u; }
            if (ctx->pc != 0x131538u) { return; }
        }
    }
    ctx->pc = 0x131538u;
label_131538:
    // 0x131538: 0x8e030000
    ctx->pc = 0x131538u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13153c:
    // 0x13153c: 0x40902d
    ctx->pc = 0x13153cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_131540:
    // 0x131540: 0x200202d
    ctx->pc = 0x131540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_131544:
    // 0x131544: 0x8c620024
    ctx->pc = 0x131544u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_131548:
    // 0x131548: 0x40f809
label_13154c:
    if (ctx->pc == 0x13154Cu) {
        ctx->pc = 0x13154Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x131550u;
        goto label_131550;
    }
    ctx->pc = 0x131548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x131550u);
        ctx->pc = 0x13154Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131428u: goto label_131428;
            case 0x13142Cu: goto label_13142c;
            case 0x131430u: goto label_131430;
            case 0x131434u: goto label_131434;
            case 0x131438u: goto label_131438;
            case 0x13143Cu: goto label_13143c;
            case 0x131440u: goto label_131440;
            case 0x131444u: goto label_131444;
            case 0x131448u: goto label_131448;
            case 0x13144Cu: goto label_13144c;
            case 0x131450u: goto label_131450;
            case 0x131454u: goto label_131454;
            case 0x131458u: goto label_131458;
            case 0x13145Cu: goto label_13145c;
            case 0x131460u: goto label_131460;
            case 0x131464u: goto label_131464;
            case 0x131468u: goto label_131468;
            case 0x13146Cu: goto label_13146c;
            case 0x131470u: goto label_131470;
            case 0x131474u: goto label_131474;
            case 0x131478u: goto label_131478;
            case 0x13147Cu: goto label_13147c;
            case 0x131480u: goto label_131480;
            case 0x131484u: goto label_131484;
            case 0x131488u: goto label_131488;
            case 0x13148Cu: goto label_13148c;
            case 0x131490u: goto label_131490;
            case 0x131494u: goto label_131494;
            case 0x131498u: goto label_131498;
            case 0x13149Cu: goto label_13149c;
            case 0x1314A0u: goto label_1314a0;
            case 0x1314A4u: goto label_1314a4;
            case 0x1314A8u: goto label_1314a8;
            case 0x1314ACu: goto label_1314ac;
            case 0x1314B0u: goto label_1314b0;
            case 0x1314B4u: goto label_1314b4;
            case 0x1314B8u: goto label_1314b8;
            case 0x1314BCu: goto label_1314bc;
            case 0x1314C0u: goto label_1314c0;
            case 0x1314C4u: goto label_1314c4;
            case 0x1314C8u: goto label_1314c8;
            case 0x1314CCu: goto label_1314cc;
            case 0x1314D0u: goto label_1314d0;
            case 0x1314D4u: goto label_1314d4;
            case 0x1314D8u: goto label_1314d8;
            case 0x1314DCu: goto label_1314dc;
            case 0x1314E0u: goto label_1314e0;
            case 0x1314E4u: goto label_1314e4;
            case 0x1314E8u: goto label_1314e8;
            case 0x1314ECu: goto label_1314ec;
            case 0x1314F0u: goto label_1314f0;
            case 0x1314F4u: goto label_1314f4;
            case 0x1314F8u: goto label_1314f8;
            case 0x1314FCu: goto label_1314fc;
            case 0x131500u: goto label_131500;
            case 0x131504u: goto label_131504;
            case 0x131508u: goto label_131508;
            case 0x13150Cu: goto label_13150c;
            case 0x131510u: goto label_131510;
            case 0x131514u: goto label_131514;
            case 0x131518u: goto label_131518;
            case 0x13151Cu: goto label_13151c;
            case 0x131520u: goto label_131520;
            case 0x131524u: goto label_131524;
            case 0x131528u: goto label_131528;
            case 0x13152Cu: goto label_13152c;
            case 0x131530u: goto label_131530;
            case 0x131534u: goto label_131534;
            case 0x131538u: goto label_131538;
            case 0x13153Cu: goto label_13153c;
            case 0x131540u: goto label_131540;
            case 0x131544u: goto label_131544;
            case 0x131548u: goto label_131548;
            case 0x13154Cu: goto label_13154c;
            case 0x131550u: goto label_131550;
            case 0x131554u: goto label_131554;
            case 0x131558u: goto label_131558;
            case 0x13155Cu: goto label_13155c;
            case 0x131560u: goto label_131560;
            case 0x131564u: goto label_131564;
            case 0x131568u: goto label_131568;
            case 0x13156Cu: goto label_13156c;
            case 0x131570u: goto label_131570;
            case 0x131574u: goto label_131574;
            case 0x131578u: goto label_131578;
            case 0x13157Cu: goto label_13157c;
            case 0x131580u: goto label_131580;
            case 0x131584u: goto label_131584;
            case 0x131588u: goto label_131588;
            case 0x13158Cu: goto label_13158c;
            case 0x131590u: goto label_131590;
            case 0x131594u: goto label_131594;
            case 0x131598u: goto label_131598;
            case 0x13159Cu: goto label_13159c;
            case 0x1315A0u: goto label_1315a0;
            case 0x1315A4u: goto label_1315a4;
            case 0x1315A8u: goto label_1315a8;
            case 0x1315ACu: goto label_1315ac;
            case 0x1315B0u: goto label_1315b0;
            case 0x1315B4u: goto label_1315b4;
            case 0x1315B8u: goto label_1315b8;
            case 0x1315BCu: goto label_1315bc;
            case 0x1315C0u: goto label_1315c0;
            case 0x1315C4u: goto label_1315c4;
            case 0x1315C8u: goto label_1315c8;
            case 0x1315CCu: goto label_1315cc;
            case 0x1315D0u: goto label_1315d0;
            case 0x1315D4u: goto label_1315d4;
            case 0x1315D8u: goto label_1315d8;
            case 0x1315DCu: goto label_1315dc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x131550u; }
            if (ctx->pc != 0x131550u) { return; }
        }
    }
    ctx->pc = 0x131550u;
label_131550:
    // 0x131550: 0x220202d
    ctx->pc = 0x131550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_131554:
    // 0x131554: 0x24050001
    ctx->pc = 0x131554u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_131558:
    // 0x131558: 0xc050374
label_13155c:
    if (ctx->pc == 0x13155Cu) {
        ctx->pc = 0x13155Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x131560u;
        goto label_131560;
    }
    ctx->pc = 0x131558u;
    SET_GPR_U32(ctx, 31, 0x131560u);
    ctx->pc = 0x13155Cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x140DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00140DD0_0x140dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131560u; }
    }
    if (ctx->pc != 0x131560u) { return; }
    ctx->pc = 0x131560u;
label_131560:
    // 0x131560: 0x220202d
    ctx->pc = 0x131560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_131564:
    // 0x131564: 0x282d
    ctx->pc = 0x131564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_131568:
    // 0x131568: 0xc050374
label_13156c:
    if (ctx->pc == 0x13156Cu) {
        ctx->pc = 0x13156Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x131570u;
        goto label_131570;
    }
    ctx->pc = 0x131568u;
    SET_GPR_U32(ctx, 31, 0x131570u);
    ctx->pc = 0x13156Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x140DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00140DD0_0x140dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131570u; }
    }
    if (ctx->pc != 0x131570u) { return; }
    ctx->pc = 0x131570u;
label_131570:
    // 0x131570: 0x3c040024
    ctx->pc = 0x131570u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_131574:
    // 0x131574: 0x2533821
    ctx->pc = 0x131574u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_131578:
    // 0x131578: 0x240282d
    ctx->pc = 0x131578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13157c:
    // 0x13157c: 0x260302d
    ctx->pc = 0x13157cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_131580:
    // 0x131580: 0x2484ae50
    ctx->pc = 0x131580u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946384));
label_131584:
    // 0x131584: 0xc045a12
label_131588:
    if (ctx->pc == 0x131588u) {
        ctx->pc = 0x131588u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13158Cu;
        goto label_13158c;
    }
    ctx->pc = 0x131584u;
    SET_GPR_U32(ctx, 31, 0x13158Cu);
    ctx->pc = 0x131588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13158Cu; }
    }
    if (ctx->pc != 0x13158Cu) { return; }
    ctx->pc = 0x13158Cu;
label_13158c:
    // 0x13158c: 0x3c040024
    ctx->pc = 0x13158cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_131590:
    // 0x131590: 0x2113821
    ctx->pc = 0x131590u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_131594:
    // 0x131594: 0x200282d
    ctx->pc = 0x131594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_131598:
    // 0x131598: 0x2138021
    ctx->pc = 0x131598u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_13159c:
    // 0x13159c: 0x220302d
    ctx->pc = 0x13159cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1315a0:
    // 0x1315a0: 0xc045a12
label_1315a4:
    if (ctx->pc == 0x1315A4u) {
        ctx->pc = 0x1315A4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946416));
        ctx->pc = 0x1315A8u;
        goto label_1315a8;
    }
    ctx->pc = 0x1315A0u;
    SET_GPR_U32(ctx, 31, 0x1315A8u);
    ctx->pc = 0x1315A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946416));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1315A8u; }
    }
    if (ctx->pc != 0x1315A8u) { return; }
    ctx->pc = 0x1315A8u;
label_1315a8:
    // 0x1315a8: 0x3c040024
    ctx->pc = 0x1315a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_1315ac:
    // 0x1315ac: 0x2519021
    ctx->pc = 0x1315acu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_1315b0:
    // 0x1315b0: 0xdfb10008
    ctx->pc = 0x1315b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1315b4:
    // 0x1315b4: 0x2503021
    ctx->pc = 0x1315b4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1315b8:
    // 0x1315b8: 0xdfb00000
    ctx->pc = 0x1315b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1315bc:
    // 0x1315bc: 0x82850001
    ctx->pc = 0x1315bcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_1315c0:
    // 0x1315c0: 0x2484ae90
    ctx->pc = 0x1315c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946448));
label_1315c4:
    // 0x1315c4: 0xdfb20010
    ctx->pc = 0x1315c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1315c8:
    // 0x1315c8: 0xdfb30018
    ctx->pc = 0x1315c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1315cc:
    // 0x1315cc: 0xdfb40020
    ctx->pc = 0x1315ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1315d0:
    // 0x1315d0: 0xdfbf0028
    ctx->pc = 0x1315d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1315d4:
    // 0x1315d4: 0x8045a12
label_1315d8:
    if (ctx->pc == 0x1315D8u) {
        ctx->pc = 0x1315D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1315DCu;
        goto label_1315dc;
    }
    ctx->pc = 0x1315D4u;
    ctx->pc = 0x1315D8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x116848u;
    sub_00116848_0x116848(rdram, ctx, runtime); return;
    ctx->pc = 0x1315DCu;
label_1315dc:
    // 0x1315dc: 0x0
    ctx->pc = 0x1315dcu;
    // NOP
}
