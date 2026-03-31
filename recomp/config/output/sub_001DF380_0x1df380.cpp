#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001DF380
// Address: 0x1df380 - 0x1df4a8
void sub_001DF380_0x1df380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1df380u;

label_1df380:
    // 0x1df380: 0x27bdffb0
    ctx->pc = 0x1df380u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_1df384:
    // 0x1df384: 0xffbe0040
    ctx->pc = 0x1df384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_1df388:
    // 0x1df388: 0xffbf0048
    ctx->pc = 0x1df388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_1df38c:
    // 0x1df38c: 0x3a0f02d
    ctx->pc = 0x1df38cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1df390:
    // 0x1df390: 0xafc40000
    ctx->pc = 0x1df390u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_1df394:
    // 0x1df394: 0xafc50004
    ctx->pc = 0x1df394u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_1df398:
    // 0x1df398: 0x24020027
    ctx->pc = 0x1df398u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 39));
label_1df39c:
    // 0x1df39c: 0xa3c20010
    ctx->pc = 0x1df39cu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 16), (uint8_t)GPR_U32(ctx, 2));
label_1df3a0:
    // 0x1df3a0: 0x8fc20004
    ctx->pc = 0x1df3a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_1df3a4:
    // 0x1df3a4: 0x2442002c
    ctx->pc = 0x1df3a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 44));
label_1df3a8:
    // 0x1df3a8: 0x8c420004
    ctx->pc = 0x1df3a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1df3ac:
    // 0x1df3ac: 0xafc20018
    ctx->pc = 0x1df3acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
label_1df3b0:
    // 0x1df3b0: 0x24020008
    ctx->pc = 0x1df3b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_1df3b4:
    // 0x1df3b4: 0xa7c20014
    ctx->pc = 0x1df3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 20), (uint16_t)GPR_U32(ctx, 2));
label_1df3b8:
    // 0x1df3b8: 0x24021000
    ctx->pc = 0x1df3b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4096));
label_1df3bc:
    // 0x1df3bc: 0xa7c20016
    ctx->pc = 0x1df3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 22), (uint16_t)GPR_U32(ctx, 2));
label_1df3c0:
    // 0x1df3c0: 0xa3c00011
    ctx->pc = 0x1df3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 17), (uint8_t)GPR_U32(ctx, 0));
label_1df3c4:
    // 0x1df3c4: 0xa7c00012
    ctx->pc = 0x1df3c4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 18), (uint16_t)GPR_U32(ctx, 0));
label_1df3c8:
    // 0x1df3c8: 0xafc0001c
    ctx->pc = 0x1df3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 0));
label_1df3cc:
    // 0x1df3cc: 0x8fc20004
    ctx->pc = 0x1df3ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_1df3d0:
    // 0x1df3d0: 0x2442003c
    ctx->pc = 0x1df3d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 60));
label_1df3d4:
    // 0x1df3d4: 0xafc20030
    ctx->pc = 0x1df3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
label_1df3d8:
    // 0x1df3d8: 0x24020001
    ctx->pc = 0x1df3d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1df3dc:
    // 0x1df3dc: 0xafc20020
    ctx->pc = 0x1df3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
label_1df3e0:
    // 0x1df3e0: 0x8fc20030
    ctx->pc = 0x1df3e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 48)));
label_1df3e4:
    // 0x1df3e4: 0x8c420004
    ctx->pc = 0x1df3e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1df3e8:
    // 0x1df3e8: 0x304200ff
    ctx->pc = 0x1df3e8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_1df3ec:
    // 0x1df3ec: 0x21e00
    ctx->pc = 0x1df3ecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 24));
label_1df3f0:
    // 0x1df3f0: 0x8fc20030
    ctx->pc = 0x1df3f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 48)));
label_1df3f4:
    // 0x1df3f4: 0x8c420004
    ctx->pc = 0x1df3f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1df3f8:
    // 0x1df3f8: 0x3042ff00
    ctx->pc = 0x1df3f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65280));
label_1df3fc:
    // 0x1df3fc: 0x21200
    ctx->pc = 0x1df3fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_1df400:
    // 0x1df400: 0x622025
    ctx->pc = 0x1df400u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df404:
    // 0x1df404: 0x8fc20030
    ctx->pc = 0x1df404u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 48)));
label_1df408:
    // 0x1df408: 0x8c430004
    ctx->pc = 0x1df408u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1df40c:
    // 0x1df40c: 0x3c0200ff
    ctx->pc = 0x1df40cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
label_1df410:
    // 0x1df410: 0x621024
    ctx->pc = 0x1df410u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df414:
    // 0x1df414: 0x21202
    ctx->pc = 0x1df414u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_1df418:
    // 0x1df418: 0x822025
    ctx->pc = 0x1df418u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1df41c:
    // 0x1df41c: 0x8fc20030
    ctx->pc = 0x1df41cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 48)));
label_1df420:
    // 0x1df420: 0x8c430004
    ctx->pc = 0x1df420u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1df424:
    // 0x1df424: 0x3c02ff00
    ctx->pc = 0x1df424u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
label_1df428:
    // 0x1df428: 0x621024
    ctx->pc = 0x1df428u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1df42c:
    // 0x1df42c: 0x21602
    ctx->pc = 0x1df42cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 24));
label_1df430:
    // 0x1df430: 0x821025
    ctx->pc = 0x1df430u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1df434:
    // 0x1df434: 0xafc20024
    ctx->pc = 0x1df434u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
label_1df438:
    // 0x1df438: 0x8fc20030
    ctx->pc = 0x1df438u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 48)));
label_1df43c:
    // 0x1df43c: 0x94420000
    ctx->pc = 0x1df43cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1df440:
    // 0x1df440: 0x8fc40000
    ctx->pc = 0x1df440u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df444:
    // 0x1df444: 0x282d
    ctx->pc = 0x1df444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df448:
    // 0x1df448: 0x40302d
    ctx->pc = 0x1df448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1df44c:
    // 0x1df44c: 0xc076bab
label_1df450:
    if (ctx->pc == 0x1DF450u) {
        ctx->pc = 0x1DF454u;
        goto label_1df454;
    }
    ctx->pc = 0x1DF44Cu;
    SET_GPR_U32(ctx, 31, 0x1DF454u);
    ctx->pc = 0x1DAEACu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DAEAC_0x1daeac(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF454u; }
    }
    if (ctx->pc != 0x1DF454u) { return; }
    ctx->pc = 0x1DF454u;
label_1df454:
    // 0x1df454: 0x8fc20000
    ctx->pc = 0x1df454u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df458:
    // 0x1df458: 0x8c4205b8
    ctx->pc = 0x1df458u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1464)));
label_1df45c:
    // 0x1df45c: 0x10400008
label_1df460:
    if (ctx->pc == 0x1DF460u) {
        ctx->pc = 0x1DF464u;
        goto label_1df464;
    }
    ctx->pc = 0x1DF45Cu;
    {
        const bool branch_taken_0x1df45c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1df45c) {
            ctx->pc = 0x1DF480u;
            goto label_1df480;
        }
    }
    ctx->pc = 0x1DF464u;
label_1df464:
    // 0x1df464: 0x8fc20000
    ctx->pc = 0x1df464u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df468:
    // 0x1df468: 0x27c30010
    ctx->pc = 0x1df468u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 16));
label_1df46c:
    // 0x1df46c: 0x27c50020
    ctx->pc = 0x1df46cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 30), 32));
label_1df470:
    // 0x1df470: 0x8c4205b8
    ctx->pc = 0x1df470u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1464)));
label_1df474:
    // 0x1df474: 0x60202d
    ctx->pc = 0x1df474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1df478:
    // 0x1df478: 0x40f809
label_1df47c:
    if (ctx->pc == 0x1DF47Cu) {
        ctx->pc = 0x1DF480u;
        goto label_1df480;
    }
    ctx->pc = 0x1DF478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DF480u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF380u: goto label_1df380;
            case 0x1DF384u: goto label_1df384;
            case 0x1DF388u: goto label_1df388;
            case 0x1DF38Cu: goto label_1df38c;
            case 0x1DF390u: goto label_1df390;
            case 0x1DF394u: goto label_1df394;
            case 0x1DF398u: goto label_1df398;
            case 0x1DF39Cu: goto label_1df39c;
            case 0x1DF3A0u: goto label_1df3a0;
            case 0x1DF3A4u: goto label_1df3a4;
            case 0x1DF3A8u: goto label_1df3a8;
            case 0x1DF3ACu: goto label_1df3ac;
            case 0x1DF3B0u: goto label_1df3b0;
            case 0x1DF3B4u: goto label_1df3b4;
            case 0x1DF3B8u: goto label_1df3b8;
            case 0x1DF3BCu: goto label_1df3bc;
            case 0x1DF3C0u: goto label_1df3c0;
            case 0x1DF3C4u: goto label_1df3c4;
            case 0x1DF3C8u: goto label_1df3c8;
            case 0x1DF3CCu: goto label_1df3cc;
            case 0x1DF3D0u: goto label_1df3d0;
            case 0x1DF3D4u: goto label_1df3d4;
            case 0x1DF3D8u: goto label_1df3d8;
            case 0x1DF3DCu: goto label_1df3dc;
            case 0x1DF3E0u: goto label_1df3e0;
            case 0x1DF3E4u: goto label_1df3e4;
            case 0x1DF3E8u: goto label_1df3e8;
            case 0x1DF3ECu: goto label_1df3ec;
            case 0x1DF3F0u: goto label_1df3f0;
            case 0x1DF3F4u: goto label_1df3f4;
            case 0x1DF3F8u: goto label_1df3f8;
            case 0x1DF3FCu: goto label_1df3fc;
            case 0x1DF400u: goto label_1df400;
            case 0x1DF404u: goto label_1df404;
            case 0x1DF408u: goto label_1df408;
            case 0x1DF40Cu: goto label_1df40c;
            case 0x1DF410u: goto label_1df410;
            case 0x1DF414u: goto label_1df414;
            case 0x1DF418u: goto label_1df418;
            case 0x1DF41Cu: goto label_1df41c;
            case 0x1DF420u: goto label_1df420;
            case 0x1DF424u: goto label_1df424;
            case 0x1DF428u: goto label_1df428;
            case 0x1DF42Cu: goto label_1df42c;
            case 0x1DF430u: goto label_1df430;
            case 0x1DF434u: goto label_1df434;
            case 0x1DF438u: goto label_1df438;
            case 0x1DF43Cu: goto label_1df43c;
            case 0x1DF440u: goto label_1df440;
            case 0x1DF444u: goto label_1df444;
            case 0x1DF448u: goto label_1df448;
            case 0x1DF44Cu: goto label_1df44c;
            case 0x1DF450u: goto label_1df450;
            case 0x1DF454u: goto label_1df454;
            case 0x1DF458u: goto label_1df458;
            case 0x1DF45Cu: goto label_1df45c;
            case 0x1DF460u: goto label_1df460;
            case 0x1DF464u: goto label_1df464;
            case 0x1DF468u: goto label_1df468;
            case 0x1DF46Cu: goto label_1df46c;
            case 0x1DF470u: goto label_1df470;
            case 0x1DF474u: goto label_1df474;
            case 0x1DF478u: goto label_1df478;
            case 0x1DF47Cu: goto label_1df47c;
            case 0x1DF480u: goto label_1df480;
            case 0x1DF484u: goto label_1df484;
            case 0x1DF488u: goto label_1df488;
            case 0x1DF48Cu: goto label_1df48c;
            case 0x1DF490u: goto label_1df490;
            case 0x1DF494u: goto label_1df494;
            case 0x1DF498u: goto label_1df498;
            case 0x1DF49Cu: goto label_1df49c;
            case 0x1DF4A0u: goto label_1df4a0;
            case 0x1DF4A4u: goto label_1df4a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DF480u; }
            if (ctx->pc != 0x1DF480u) { return; }
        }
    }
    ctx->pc = 0x1DF480u;
label_1df480:
    // 0x1df480: 0x8fc20000
    ctx->pc = 0x1df480u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df484:
    // 0x1df484: 0xac40007c
    ctx->pc = 0x1df484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 0));
label_1df488:
    // 0x1df488: 0x8fc20000
    ctx->pc = 0x1df488u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df48c:
    // 0x1df48c: 0xac400080
    ctx->pc = 0x1df48cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
label_1df490:
    // 0x1df490: 0x3c0e82d
    ctx->pc = 0x1df490u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1df494:
    // 0x1df494: 0xdfbe0040
    ctx->pc = 0x1df494u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1df498:
    // 0x1df498: 0xdfbf0048
    ctx->pc = 0x1df498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1df49c:
    // 0x1df49c: 0x27bd0050
    ctx->pc = 0x1df49cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
label_1df4a0:
    // 0x1df4a0: 0x3e00008
label_1df4a4:
    if (ctx->pc == 0x1DF4A4u) {
        ctx->pc = 0x1DF4A8u;
        goto label_fallthrough_0x1df4a0;
    }
    ctx->pc = 0x1DF4A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF380u: goto label_1df380;
            case 0x1DF384u: goto label_1df384;
            case 0x1DF388u: goto label_1df388;
            case 0x1DF38Cu: goto label_1df38c;
            case 0x1DF390u: goto label_1df390;
            case 0x1DF394u: goto label_1df394;
            case 0x1DF398u: goto label_1df398;
            case 0x1DF39Cu: goto label_1df39c;
            case 0x1DF3A0u: goto label_1df3a0;
            case 0x1DF3A4u: goto label_1df3a4;
            case 0x1DF3A8u: goto label_1df3a8;
            case 0x1DF3ACu: goto label_1df3ac;
            case 0x1DF3B0u: goto label_1df3b0;
            case 0x1DF3B4u: goto label_1df3b4;
            case 0x1DF3B8u: goto label_1df3b8;
            case 0x1DF3BCu: goto label_1df3bc;
            case 0x1DF3C0u: goto label_1df3c0;
            case 0x1DF3C4u: goto label_1df3c4;
            case 0x1DF3C8u: goto label_1df3c8;
            case 0x1DF3CCu: goto label_1df3cc;
            case 0x1DF3D0u: goto label_1df3d0;
            case 0x1DF3D4u: goto label_1df3d4;
            case 0x1DF3D8u: goto label_1df3d8;
            case 0x1DF3DCu: goto label_1df3dc;
            case 0x1DF3E0u: goto label_1df3e0;
            case 0x1DF3E4u: goto label_1df3e4;
            case 0x1DF3E8u: goto label_1df3e8;
            case 0x1DF3ECu: goto label_1df3ec;
            case 0x1DF3F0u: goto label_1df3f0;
            case 0x1DF3F4u: goto label_1df3f4;
            case 0x1DF3F8u: goto label_1df3f8;
            case 0x1DF3FCu: goto label_1df3fc;
            case 0x1DF400u: goto label_1df400;
            case 0x1DF404u: goto label_1df404;
            case 0x1DF408u: goto label_1df408;
            case 0x1DF40Cu: goto label_1df40c;
            case 0x1DF410u: goto label_1df410;
            case 0x1DF414u: goto label_1df414;
            case 0x1DF418u: goto label_1df418;
            case 0x1DF41Cu: goto label_1df41c;
            case 0x1DF420u: goto label_1df420;
            case 0x1DF424u: goto label_1df424;
            case 0x1DF428u: goto label_1df428;
            case 0x1DF42Cu: goto label_1df42c;
            case 0x1DF430u: goto label_1df430;
            case 0x1DF434u: goto label_1df434;
            case 0x1DF438u: goto label_1df438;
            case 0x1DF43Cu: goto label_1df43c;
            case 0x1DF440u: goto label_1df440;
            case 0x1DF444u: goto label_1df444;
            case 0x1DF448u: goto label_1df448;
            case 0x1DF44Cu: goto label_1df44c;
            case 0x1DF450u: goto label_1df450;
            case 0x1DF454u: goto label_1df454;
            case 0x1DF458u: goto label_1df458;
            case 0x1DF45Cu: goto label_1df45c;
            case 0x1DF460u: goto label_1df460;
            case 0x1DF464u: goto label_1df464;
            case 0x1DF468u: goto label_1df468;
            case 0x1DF46Cu: goto label_1df46c;
            case 0x1DF470u: goto label_1df470;
            case 0x1DF474u: goto label_1df474;
            case 0x1DF478u: goto label_1df478;
            case 0x1DF47Cu: goto label_1df47c;
            case 0x1DF480u: goto label_1df480;
            case 0x1DF484u: goto label_1df484;
            case 0x1DF488u: goto label_1df488;
            case 0x1DF48Cu: goto label_1df48c;
            case 0x1DF490u: goto label_1df490;
            case 0x1DF494u: goto label_1df494;
            case 0x1DF498u: goto label_1df498;
            case 0x1DF49Cu: goto label_1df49c;
            case 0x1DF4A0u: goto label_1df4a0;
            case 0x1DF4A4u: goto label_1df4a4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1df4a0:
    ctx->pc = 0x1DF4A8u;
}
