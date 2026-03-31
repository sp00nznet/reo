#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012D338
// Address: 0x12d338 - 0x12d638
void sub_0012D338_0x12d338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12d338u;

label_12d338:
    // 0x12d338: 0x27bdff80
    ctx->pc = 0x12d338u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
label_12d33c:
    // 0x12d33c: 0xffb00030
    ctx->pc = 0x12d33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_12d340:
    // 0x12d340: 0xffb20040
    ctx->pc = 0x12d340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_12d344:
    // 0x12d344: 0x80902d
    ctx->pc = 0x12d344u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12d348:
    // 0x12d348: 0xffb30048
    ctx->pc = 0x12d348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_12d34c:
    // 0x12d34c: 0xffb40050
    ctx->pc = 0x12d34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_12d350:
    // 0x12d350: 0x2654000c
    ctx->pc = 0x12d350u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 18), 12));
label_12d354:
    // 0x12d354: 0xffb50058
    ctx->pc = 0x12d354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_12d358:
    // 0x12d358: 0x2655001c
    ctx->pc = 0x12d358u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 18), 28));
label_12d35c:
    // 0x12d35c: 0xffb60060
    ctx->pc = 0x12d35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_12d360:
    // 0x12d360: 0xb02d
    ctx->pc = 0x12d360u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12d364:
    // 0x12d364: 0xffbe0070
    ctx->pc = 0x12d364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
label_12d368:
    // 0x12d368: 0xffb10038
    ctx->pc = 0x12d368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_12d36c:
    // 0x12d36c: 0xffb70068
    ctx->pc = 0x12d36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
label_12d370:
    // 0x12d370: 0xffbf0078
    ctx->pc = 0x12d370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_12d374:
    // 0x12d374: 0x8e570004
    ctx->pc = 0x12d374u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_12d378:
    // 0x12d378: 0x8e510008
    ctx->pc = 0x12d378u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_12d37c:
    // 0x12d37c: 0xc0493be
label_12d380:
    if (ctx->pc == 0x12D380u) {
        ctx->pc = 0x12D380u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D384u;
        goto label_12d384;
    }
    ctx->pc = 0x12D37Cu;
    SET_GPR_U32(ctx, 31, 0x12D384u);
    ctx->pc = 0x12D380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x124EF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00124EF8_0x124ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D384u; }
    }
    if (ctx->pc != 0x12D384u) { return; }
    ctx->pc = 0x12D384u;
label_12d384:
    // 0x12d384: 0x2e0202d
    ctx->pc = 0x12d384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12d388:
    // 0x12d388: 0xc0494ae
label_12d38c:
    if (ctx->pc == 0x12D38Cu) {
        ctx->pc = 0x12D38Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D390u;
        goto label_12d390;
    }
    ctx->pc = 0x12D388u;
    SET_GPR_U32(ctx, 31, 0x12D390u);
    ctx->pc = 0x12D38Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1252B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001252B8_0x1252b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D390u; }
    }
    if (ctx->pc != 0x12D390u) { return; }
    ctx->pc = 0x12D390u;
label_12d390:
    // 0x12d390: 0x2e0202d
    ctx->pc = 0x12d390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12d394:
    // 0x12d394: 0xc0494b0
label_12d398:
    if (ctx->pc == 0x12D398u) {
        ctx->pc = 0x12D398u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x12D39Cu;
        goto label_12d39c;
    }
    ctx->pc = 0x12D394u;
    SET_GPR_U32(ctx, 31, 0x12D39Cu);
    ctx->pc = 0x12D398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->pc = 0x1252C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001252C0_0x1252c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D39Cu; }
    }
    if (ctx->pc != 0x12D39Cu) { return; }
    ctx->pc = 0x12D39Cu;
label_12d39c:
    // 0x12d39c: 0x26440014
    ctx->pc = 0x12d39cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 20));
label_12d3a0:
    // 0x12d3a0: 0x40982d
    ctx->pc = 0x12d3a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12d3a4:
    // 0x12d3a4: 0x8e420034
    ctx->pc = 0x12d3a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_12d3a8:
    // 0x12d3a8: 0x27be0010
    ctx->pc = 0x12d3a8u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 29), 16));
label_12d3ac:
    // 0x12d3ac: 0x8fa50020
    ctx->pc = 0x12d3acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_12d3b0:
    // 0x12d3b0: 0x2028023
    ctx->pc = 0x12d3b0u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_12d3b4:
    // 0x12d3b4: 0x3a0302d
    ctx->pc = 0x12d3b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12d3b8:
    // 0x12d3b8: 0x270102a
    ctx->pc = 0x12d3b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 16)));
label_12d3bc:
    // 0x12d3bc: 0x3c0382d
    ctx->pc = 0x12d3bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12d3c0:
    // 0x12d3c0: 0xc0501f8
label_12d3c4:
    if (ctx->pc == 0x12D3C4u) {
        ctx->pc = 0x12D3C4u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 16));
        ctx->pc = 0x12D3C8u;
        goto label_12d3c8;
    }
    ctx->pc = 0x12D3C0u;
    SET_GPR_U32(ctx, 31, 0x12D3C8u);
    ctx->pc = 0x12D3C4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 16));
    ctx->pc = 0x1407E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001407E0_0x1407e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D3C8u; }
    }
    if (ctx->pc != 0x12D3C8u) { return; }
    ctx->pc = 0x12D3C8u;
label_12d3c8:
    // 0x12d3c8: 0x8e230000
    ctx->pc = 0x12d3c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12d3cc:
    // 0x12d3cc: 0x3a0302d
    ctx->pc = 0x12d3ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12d3d0:
    // 0x12d3d0: 0x220202d
    ctx->pc = 0x12d3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12d3d4:
    // 0x12d3d4: 0x8c620020
    ctx->pc = 0x12d3d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_12d3d8:
    // 0x12d3d8: 0x40f809
label_12d3dc:
    if (ctx->pc == 0x12D3DCu) {
        ctx->pc = 0x12D3DCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D3E0u;
        goto label_12d3e0;
    }
    ctx->pc = 0x12D3D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12D3E0u);
        ctx->pc = 0x12D3DCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D338u: goto label_12d338;
            case 0x12D33Cu: goto label_12d33c;
            case 0x12D340u: goto label_12d340;
            case 0x12D344u: goto label_12d344;
            case 0x12D348u: goto label_12d348;
            case 0x12D34Cu: goto label_12d34c;
            case 0x12D350u: goto label_12d350;
            case 0x12D354u: goto label_12d354;
            case 0x12D358u: goto label_12d358;
            case 0x12D35Cu: goto label_12d35c;
            case 0x12D360u: goto label_12d360;
            case 0x12D364u: goto label_12d364;
            case 0x12D368u: goto label_12d368;
            case 0x12D36Cu: goto label_12d36c;
            case 0x12D370u: goto label_12d370;
            case 0x12D374u: goto label_12d374;
            case 0x12D378u: goto label_12d378;
            case 0x12D37Cu: goto label_12d37c;
            case 0x12D380u: goto label_12d380;
            case 0x12D384u: goto label_12d384;
            case 0x12D388u: goto label_12d388;
            case 0x12D38Cu: goto label_12d38c;
            case 0x12D390u: goto label_12d390;
            case 0x12D394u: goto label_12d394;
            case 0x12D398u: goto label_12d398;
            case 0x12D39Cu: goto label_12d39c;
            case 0x12D3A0u: goto label_12d3a0;
            case 0x12D3A4u: goto label_12d3a4;
            case 0x12D3A8u: goto label_12d3a8;
            case 0x12D3ACu: goto label_12d3ac;
            case 0x12D3B0u: goto label_12d3b0;
            case 0x12D3B4u: goto label_12d3b4;
            case 0x12D3B8u: goto label_12d3b8;
            case 0x12D3BCu: goto label_12d3bc;
            case 0x12D3C0u: goto label_12d3c0;
            case 0x12D3C4u: goto label_12d3c4;
            case 0x12D3C8u: goto label_12d3c8;
            case 0x12D3CCu: goto label_12d3cc;
            case 0x12D3D0u: goto label_12d3d0;
            case 0x12D3D4u: goto label_12d3d4;
            case 0x12D3D8u: goto label_12d3d8;
            case 0x12D3DCu: goto label_12d3dc;
            case 0x12D3E0u: goto label_12d3e0;
            case 0x12D3E4u: goto label_12d3e4;
            case 0x12D3E8u: goto label_12d3e8;
            case 0x12D3ECu: goto label_12d3ec;
            case 0x12D3F0u: goto label_12d3f0;
            case 0x12D3F4u: goto label_12d3f4;
            case 0x12D3F8u: goto label_12d3f8;
            case 0x12D3FCu: goto label_12d3fc;
            case 0x12D400u: goto label_12d400;
            case 0x12D404u: goto label_12d404;
            case 0x12D408u: goto label_12d408;
            case 0x12D40Cu: goto label_12d40c;
            case 0x12D410u: goto label_12d410;
            case 0x12D414u: goto label_12d414;
            case 0x12D418u: goto label_12d418;
            case 0x12D41Cu: goto label_12d41c;
            case 0x12D420u: goto label_12d420;
            case 0x12D424u: goto label_12d424;
            case 0x12D428u: goto label_12d428;
            case 0x12D42Cu: goto label_12d42c;
            case 0x12D430u: goto label_12d430;
            case 0x12D434u: goto label_12d434;
            case 0x12D438u: goto label_12d438;
            case 0x12D43Cu: goto label_12d43c;
            case 0x12D440u: goto label_12d440;
            case 0x12D444u: goto label_12d444;
            case 0x12D448u: goto label_12d448;
            case 0x12D44Cu: goto label_12d44c;
            case 0x12D450u: goto label_12d450;
            case 0x12D454u: goto label_12d454;
            case 0x12D458u: goto label_12d458;
            case 0x12D45Cu: goto label_12d45c;
            case 0x12D460u: goto label_12d460;
            case 0x12D464u: goto label_12d464;
            case 0x12D468u: goto label_12d468;
            case 0x12D46Cu: goto label_12d46c;
            case 0x12D470u: goto label_12d470;
            case 0x12D474u: goto label_12d474;
            case 0x12D478u: goto label_12d478;
            case 0x12D47Cu: goto label_12d47c;
            case 0x12D480u: goto label_12d480;
            case 0x12D484u: goto label_12d484;
            case 0x12D488u: goto label_12d488;
            case 0x12D48Cu: goto label_12d48c;
            case 0x12D490u: goto label_12d490;
            case 0x12D494u: goto label_12d494;
            case 0x12D498u: goto label_12d498;
            case 0x12D49Cu: goto label_12d49c;
            case 0x12D4A0u: goto label_12d4a0;
            case 0x12D4A4u: goto label_12d4a4;
            case 0x12D4A8u: goto label_12d4a8;
            case 0x12D4ACu: goto label_12d4ac;
            case 0x12D4B0u: goto label_12d4b0;
            case 0x12D4B4u: goto label_12d4b4;
            case 0x12D4B8u: goto label_12d4b8;
            case 0x12D4BCu: goto label_12d4bc;
            case 0x12D4C0u: goto label_12d4c0;
            case 0x12D4C4u: goto label_12d4c4;
            case 0x12D4C8u: goto label_12d4c8;
            case 0x12D4CCu: goto label_12d4cc;
            case 0x12D4D0u: goto label_12d4d0;
            case 0x12D4D4u: goto label_12d4d4;
            case 0x12D4D8u: goto label_12d4d8;
            case 0x12D4DCu: goto label_12d4dc;
            case 0x12D4E0u: goto label_12d4e0;
            case 0x12D4E4u: goto label_12d4e4;
            case 0x12D4E8u: goto label_12d4e8;
            case 0x12D4ECu: goto label_12d4ec;
            case 0x12D4F0u: goto label_12d4f0;
            case 0x12D4F4u: goto label_12d4f4;
            case 0x12D4F8u: goto label_12d4f8;
            case 0x12D4FCu: goto label_12d4fc;
            case 0x12D500u: goto label_12d500;
            case 0x12D504u: goto label_12d504;
            case 0x12D508u: goto label_12d508;
            case 0x12D50Cu: goto label_12d50c;
            case 0x12D510u: goto label_12d510;
            case 0x12D514u: goto label_12d514;
            case 0x12D518u: goto label_12d518;
            case 0x12D51Cu: goto label_12d51c;
            case 0x12D520u: goto label_12d520;
            case 0x12D524u: goto label_12d524;
            case 0x12D528u: goto label_12d528;
            case 0x12D52Cu: goto label_12d52c;
            case 0x12D530u: goto label_12d530;
            case 0x12D534u: goto label_12d534;
            case 0x12D538u: goto label_12d538;
            case 0x12D53Cu: goto label_12d53c;
            case 0x12D540u: goto label_12d540;
            case 0x12D544u: goto label_12d544;
            case 0x12D548u: goto label_12d548;
            case 0x12D54Cu: goto label_12d54c;
            case 0x12D550u: goto label_12d550;
            case 0x12D554u: goto label_12d554;
            case 0x12D558u: goto label_12d558;
            case 0x12D55Cu: goto label_12d55c;
            case 0x12D560u: goto label_12d560;
            case 0x12D564u: goto label_12d564;
            case 0x12D568u: goto label_12d568;
            case 0x12D56Cu: goto label_12d56c;
            case 0x12D570u: goto label_12d570;
            case 0x12D574u: goto label_12d574;
            case 0x12D578u: goto label_12d578;
            case 0x12D57Cu: goto label_12d57c;
            case 0x12D580u: goto label_12d580;
            case 0x12D584u: goto label_12d584;
            case 0x12D588u: goto label_12d588;
            case 0x12D58Cu: goto label_12d58c;
            case 0x12D590u: goto label_12d590;
            case 0x12D594u: goto label_12d594;
            case 0x12D598u: goto label_12d598;
            case 0x12D59Cu: goto label_12d59c;
            case 0x12D5A0u: goto label_12d5a0;
            case 0x12D5A4u: goto label_12d5a4;
            case 0x12D5A8u: goto label_12d5a8;
            case 0x12D5ACu: goto label_12d5ac;
            case 0x12D5B0u: goto label_12d5b0;
            case 0x12D5B4u: goto label_12d5b4;
            case 0x12D5B8u: goto label_12d5b8;
            case 0x12D5BCu: goto label_12d5bc;
            case 0x12D5C0u: goto label_12d5c0;
            case 0x12D5C4u: goto label_12d5c4;
            case 0x12D5C8u: goto label_12d5c8;
            case 0x12D5CCu: goto label_12d5cc;
            case 0x12D5D0u: goto label_12d5d0;
            case 0x12D5D4u: goto label_12d5d4;
            case 0x12D5D8u: goto label_12d5d8;
            case 0x12D5DCu: goto label_12d5dc;
            case 0x12D5E0u: goto label_12d5e0;
            case 0x12D5E4u: goto label_12d5e4;
            case 0x12D5E8u: goto label_12d5e8;
            case 0x12D5ECu: goto label_12d5ec;
            case 0x12D5F0u: goto label_12d5f0;
            case 0x12D5F4u: goto label_12d5f4;
            case 0x12D5F8u: goto label_12d5f8;
            case 0x12D5FCu: goto label_12d5fc;
            case 0x12D600u: goto label_12d600;
            case 0x12D604u: goto label_12d604;
            case 0x12D608u: goto label_12d608;
            case 0x12D60Cu: goto label_12d60c;
            case 0x12D610u: goto label_12d610;
            case 0x12D614u: goto label_12d614;
            case 0x12D618u: goto label_12d618;
            case 0x12D61Cu: goto label_12d61c;
            case 0x12D620u: goto label_12d620;
            case 0x12D624u: goto label_12d624;
            case 0x12D628u: goto label_12d628;
            case 0x12D62Cu: goto label_12d62c;
            case 0x12D630u: goto label_12d630;
            case 0x12D634u: goto label_12d634;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12D3E0u; }
            if (ctx->pc != 0x12D3E0u) { return; }
        }
    }
    ctx->pc = 0x12D3E0u;
label_12d3e0:
    // 0x12d3e0: 0x8e230000
    ctx->pc = 0x12d3e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12d3e4:
    // 0x12d3e4: 0x220202d
    ctx->pc = 0x12d3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12d3e8:
    // 0x12d3e8: 0x24050001
    ctx->pc = 0x12d3e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12d3ec:
    // 0x12d3ec: 0x8c62001c
    ctx->pc = 0x12d3ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_12d3f0:
    // 0x12d3f0: 0x40f809
label_12d3f4:
    if (ctx->pc == 0x12D3F4u) {
        ctx->pc = 0x12D3F4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D3F8u;
        goto label_12d3f8;
    }
    ctx->pc = 0x12D3F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12D3F8u);
        ctx->pc = 0x12D3F4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D338u: goto label_12d338;
            case 0x12D33Cu: goto label_12d33c;
            case 0x12D340u: goto label_12d340;
            case 0x12D344u: goto label_12d344;
            case 0x12D348u: goto label_12d348;
            case 0x12D34Cu: goto label_12d34c;
            case 0x12D350u: goto label_12d350;
            case 0x12D354u: goto label_12d354;
            case 0x12D358u: goto label_12d358;
            case 0x12D35Cu: goto label_12d35c;
            case 0x12D360u: goto label_12d360;
            case 0x12D364u: goto label_12d364;
            case 0x12D368u: goto label_12d368;
            case 0x12D36Cu: goto label_12d36c;
            case 0x12D370u: goto label_12d370;
            case 0x12D374u: goto label_12d374;
            case 0x12D378u: goto label_12d378;
            case 0x12D37Cu: goto label_12d37c;
            case 0x12D380u: goto label_12d380;
            case 0x12D384u: goto label_12d384;
            case 0x12D388u: goto label_12d388;
            case 0x12D38Cu: goto label_12d38c;
            case 0x12D390u: goto label_12d390;
            case 0x12D394u: goto label_12d394;
            case 0x12D398u: goto label_12d398;
            case 0x12D39Cu: goto label_12d39c;
            case 0x12D3A0u: goto label_12d3a0;
            case 0x12D3A4u: goto label_12d3a4;
            case 0x12D3A8u: goto label_12d3a8;
            case 0x12D3ACu: goto label_12d3ac;
            case 0x12D3B0u: goto label_12d3b0;
            case 0x12D3B4u: goto label_12d3b4;
            case 0x12D3B8u: goto label_12d3b8;
            case 0x12D3BCu: goto label_12d3bc;
            case 0x12D3C0u: goto label_12d3c0;
            case 0x12D3C4u: goto label_12d3c4;
            case 0x12D3C8u: goto label_12d3c8;
            case 0x12D3CCu: goto label_12d3cc;
            case 0x12D3D0u: goto label_12d3d0;
            case 0x12D3D4u: goto label_12d3d4;
            case 0x12D3D8u: goto label_12d3d8;
            case 0x12D3DCu: goto label_12d3dc;
            case 0x12D3E0u: goto label_12d3e0;
            case 0x12D3E4u: goto label_12d3e4;
            case 0x12D3E8u: goto label_12d3e8;
            case 0x12D3ECu: goto label_12d3ec;
            case 0x12D3F0u: goto label_12d3f0;
            case 0x12D3F4u: goto label_12d3f4;
            case 0x12D3F8u: goto label_12d3f8;
            case 0x12D3FCu: goto label_12d3fc;
            case 0x12D400u: goto label_12d400;
            case 0x12D404u: goto label_12d404;
            case 0x12D408u: goto label_12d408;
            case 0x12D40Cu: goto label_12d40c;
            case 0x12D410u: goto label_12d410;
            case 0x12D414u: goto label_12d414;
            case 0x12D418u: goto label_12d418;
            case 0x12D41Cu: goto label_12d41c;
            case 0x12D420u: goto label_12d420;
            case 0x12D424u: goto label_12d424;
            case 0x12D428u: goto label_12d428;
            case 0x12D42Cu: goto label_12d42c;
            case 0x12D430u: goto label_12d430;
            case 0x12D434u: goto label_12d434;
            case 0x12D438u: goto label_12d438;
            case 0x12D43Cu: goto label_12d43c;
            case 0x12D440u: goto label_12d440;
            case 0x12D444u: goto label_12d444;
            case 0x12D448u: goto label_12d448;
            case 0x12D44Cu: goto label_12d44c;
            case 0x12D450u: goto label_12d450;
            case 0x12D454u: goto label_12d454;
            case 0x12D458u: goto label_12d458;
            case 0x12D45Cu: goto label_12d45c;
            case 0x12D460u: goto label_12d460;
            case 0x12D464u: goto label_12d464;
            case 0x12D468u: goto label_12d468;
            case 0x12D46Cu: goto label_12d46c;
            case 0x12D470u: goto label_12d470;
            case 0x12D474u: goto label_12d474;
            case 0x12D478u: goto label_12d478;
            case 0x12D47Cu: goto label_12d47c;
            case 0x12D480u: goto label_12d480;
            case 0x12D484u: goto label_12d484;
            case 0x12D488u: goto label_12d488;
            case 0x12D48Cu: goto label_12d48c;
            case 0x12D490u: goto label_12d490;
            case 0x12D494u: goto label_12d494;
            case 0x12D498u: goto label_12d498;
            case 0x12D49Cu: goto label_12d49c;
            case 0x12D4A0u: goto label_12d4a0;
            case 0x12D4A4u: goto label_12d4a4;
            case 0x12D4A8u: goto label_12d4a8;
            case 0x12D4ACu: goto label_12d4ac;
            case 0x12D4B0u: goto label_12d4b0;
            case 0x12D4B4u: goto label_12d4b4;
            case 0x12D4B8u: goto label_12d4b8;
            case 0x12D4BCu: goto label_12d4bc;
            case 0x12D4C0u: goto label_12d4c0;
            case 0x12D4C4u: goto label_12d4c4;
            case 0x12D4C8u: goto label_12d4c8;
            case 0x12D4CCu: goto label_12d4cc;
            case 0x12D4D0u: goto label_12d4d0;
            case 0x12D4D4u: goto label_12d4d4;
            case 0x12D4D8u: goto label_12d4d8;
            case 0x12D4DCu: goto label_12d4dc;
            case 0x12D4E0u: goto label_12d4e0;
            case 0x12D4E4u: goto label_12d4e4;
            case 0x12D4E8u: goto label_12d4e8;
            case 0x12D4ECu: goto label_12d4ec;
            case 0x12D4F0u: goto label_12d4f0;
            case 0x12D4F4u: goto label_12d4f4;
            case 0x12D4F8u: goto label_12d4f8;
            case 0x12D4FCu: goto label_12d4fc;
            case 0x12D500u: goto label_12d500;
            case 0x12D504u: goto label_12d504;
            case 0x12D508u: goto label_12d508;
            case 0x12D50Cu: goto label_12d50c;
            case 0x12D510u: goto label_12d510;
            case 0x12D514u: goto label_12d514;
            case 0x12D518u: goto label_12d518;
            case 0x12D51Cu: goto label_12d51c;
            case 0x12D520u: goto label_12d520;
            case 0x12D524u: goto label_12d524;
            case 0x12D528u: goto label_12d528;
            case 0x12D52Cu: goto label_12d52c;
            case 0x12D530u: goto label_12d530;
            case 0x12D534u: goto label_12d534;
            case 0x12D538u: goto label_12d538;
            case 0x12D53Cu: goto label_12d53c;
            case 0x12D540u: goto label_12d540;
            case 0x12D544u: goto label_12d544;
            case 0x12D548u: goto label_12d548;
            case 0x12D54Cu: goto label_12d54c;
            case 0x12D550u: goto label_12d550;
            case 0x12D554u: goto label_12d554;
            case 0x12D558u: goto label_12d558;
            case 0x12D55Cu: goto label_12d55c;
            case 0x12D560u: goto label_12d560;
            case 0x12D564u: goto label_12d564;
            case 0x12D568u: goto label_12d568;
            case 0x12D56Cu: goto label_12d56c;
            case 0x12D570u: goto label_12d570;
            case 0x12D574u: goto label_12d574;
            case 0x12D578u: goto label_12d578;
            case 0x12D57Cu: goto label_12d57c;
            case 0x12D580u: goto label_12d580;
            case 0x12D584u: goto label_12d584;
            case 0x12D588u: goto label_12d588;
            case 0x12D58Cu: goto label_12d58c;
            case 0x12D590u: goto label_12d590;
            case 0x12D594u: goto label_12d594;
            case 0x12D598u: goto label_12d598;
            case 0x12D59Cu: goto label_12d59c;
            case 0x12D5A0u: goto label_12d5a0;
            case 0x12D5A4u: goto label_12d5a4;
            case 0x12D5A8u: goto label_12d5a8;
            case 0x12D5ACu: goto label_12d5ac;
            case 0x12D5B0u: goto label_12d5b0;
            case 0x12D5B4u: goto label_12d5b4;
            case 0x12D5B8u: goto label_12d5b8;
            case 0x12D5BCu: goto label_12d5bc;
            case 0x12D5C0u: goto label_12d5c0;
            case 0x12D5C4u: goto label_12d5c4;
            case 0x12D5C8u: goto label_12d5c8;
            case 0x12D5CCu: goto label_12d5cc;
            case 0x12D5D0u: goto label_12d5d0;
            case 0x12D5D4u: goto label_12d5d4;
            case 0x12D5D8u: goto label_12d5d8;
            case 0x12D5DCu: goto label_12d5dc;
            case 0x12D5E0u: goto label_12d5e0;
            case 0x12D5E4u: goto label_12d5e4;
            case 0x12D5E8u: goto label_12d5e8;
            case 0x12D5ECu: goto label_12d5ec;
            case 0x12D5F0u: goto label_12d5f0;
            case 0x12D5F4u: goto label_12d5f4;
            case 0x12D5F8u: goto label_12d5f8;
            case 0x12D5FCu: goto label_12d5fc;
            case 0x12D600u: goto label_12d600;
            case 0x12D604u: goto label_12d604;
            case 0x12D608u: goto label_12d608;
            case 0x12D60Cu: goto label_12d60c;
            case 0x12D610u: goto label_12d610;
            case 0x12D614u: goto label_12d614;
            case 0x12D618u: goto label_12d618;
            case 0x12D61Cu: goto label_12d61c;
            case 0x12D620u: goto label_12d620;
            case 0x12D624u: goto label_12d624;
            case 0x12D628u: goto label_12d628;
            case 0x12D62Cu: goto label_12d62c;
            case 0x12D630u: goto label_12d630;
            case 0x12D634u: goto label_12d634;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12D3F8u; }
            if (ctx->pc != 0x12D3F8u) { return; }
        }
    }
    ctx->pc = 0x12D3F8u;
label_12d3f8:
    // 0x12d3f8: 0x10000019
label_12d3fc:
    if (ctx->pc == 0x12D3FCu) {
        ctx->pc = 0x12D400u;
        goto label_12d400;
    }
    ctx->pc = 0x12D3F8u;
    {
        const bool branch_taken_0x12d3f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x12d3f8) {
            ctx->pc = 0x12D460u;
            goto label_12d460;
        }
    }
    ctx->pc = 0x12D400u;
label_12d400:
    // 0x12d400: 0xc0501f8
label_12d404:
    if (ctx->pc == 0x12D404u) {
        ctx->pc = 0x12D408u;
        goto label_12d408;
    }
    ctx->pc = 0x12D400u;
    SET_GPR_U32(ctx, 31, 0x12D408u);
    ctx->pc = 0x1407E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001407E0_0x1407e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D408u; }
    }
    if (ctx->pc != 0x12D408u) { return; }
    ctx->pc = 0x12D408u;
label_12d408:
    // 0x12d408: 0x8e420050
    ctx->pc = 0x12d408u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_12d40c:
    // 0x12d40c: 0x2c0282d
    ctx->pc = 0x12d40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12d410:
    // 0x12d410: 0x10400005
label_12d414:
    if (ctx->pc == 0x12D414u) {
        ctx->pc = 0x12D414u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x12D418u;
        goto label_12d418;
    }
    ctx->pc = 0x12D410u;
    {
        const bool branch_taken_0x12d410 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D414u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
        if (branch_taken_0x12d410) {
            ctx->pc = 0x12D428u;
            goto label_12d428;
        }
    }
    ctx->pc = 0x12D418u;
label_12d418:
    // 0x12d418: 0x8e440054
    ctx->pc = 0x12d418u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_12d41c:
    // 0x12d41c: 0x8fa60000
    ctx->pc = 0x12d41cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12d420:
    // 0x12d420: 0x40f809
label_12d424:
    if (ctx->pc == 0x12D424u) {
        ctx->pc = 0x12D424u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x12D428u;
        goto label_12d428;
    }
    ctx->pc = 0x12D420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12D428u);
        ctx->pc = 0x12D424u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D338u: goto label_12d338;
            case 0x12D33Cu: goto label_12d33c;
            case 0x12D340u: goto label_12d340;
            case 0x12D344u: goto label_12d344;
            case 0x12D348u: goto label_12d348;
            case 0x12D34Cu: goto label_12d34c;
            case 0x12D350u: goto label_12d350;
            case 0x12D354u: goto label_12d354;
            case 0x12D358u: goto label_12d358;
            case 0x12D35Cu: goto label_12d35c;
            case 0x12D360u: goto label_12d360;
            case 0x12D364u: goto label_12d364;
            case 0x12D368u: goto label_12d368;
            case 0x12D36Cu: goto label_12d36c;
            case 0x12D370u: goto label_12d370;
            case 0x12D374u: goto label_12d374;
            case 0x12D378u: goto label_12d378;
            case 0x12D37Cu: goto label_12d37c;
            case 0x12D380u: goto label_12d380;
            case 0x12D384u: goto label_12d384;
            case 0x12D388u: goto label_12d388;
            case 0x12D38Cu: goto label_12d38c;
            case 0x12D390u: goto label_12d390;
            case 0x12D394u: goto label_12d394;
            case 0x12D398u: goto label_12d398;
            case 0x12D39Cu: goto label_12d39c;
            case 0x12D3A0u: goto label_12d3a0;
            case 0x12D3A4u: goto label_12d3a4;
            case 0x12D3A8u: goto label_12d3a8;
            case 0x12D3ACu: goto label_12d3ac;
            case 0x12D3B0u: goto label_12d3b0;
            case 0x12D3B4u: goto label_12d3b4;
            case 0x12D3B8u: goto label_12d3b8;
            case 0x12D3BCu: goto label_12d3bc;
            case 0x12D3C0u: goto label_12d3c0;
            case 0x12D3C4u: goto label_12d3c4;
            case 0x12D3C8u: goto label_12d3c8;
            case 0x12D3CCu: goto label_12d3cc;
            case 0x12D3D0u: goto label_12d3d0;
            case 0x12D3D4u: goto label_12d3d4;
            case 0x12D3D8u: goto label_12d3d8;
            case 0x12D3DCu: goto label_12d3dc;
            case 0x12D3E0u: goto label_12d3e0;
            case 0x12D3E4u: goto label_12d3e4;
            case 0x12D3E8u: goto label_12d3e8;
            case 0x12D3ECu: goto label_12d3ec;
            case 0x12D3F0u: goto label_12d3f0;
            case 0x12D3F4u: goto label_12d3f4;
            case 0x12D3F8u: goto label_12d3f8;
            case 0x12D3FCu: goto label_12d3fc;
            case 0x12D400u: goto label_12d400;
            case 0x12D404u: goto label_12d404;
            case 0x12D408u: goto label_12d408;
            case 0x12D40Cu: goto label_12d40c;
            case 0x12D410u: goto label_12d410;
            case 0x12D414u: goto label_12d414;
            case 0x12D418u: goto label_12d418;
            case 0x12D41Cu: goto label_12d41c;
            case 0x12D420u: goto label_12d420;
            case 0x12D424u: goto label_12d424;
            case 0x12D428u: goto label_12d428;
            case 0x12D42Cu: goto label_12d42c;
            case 0x12D430u: goto label_12d430;
            case 0x12D434u: goto label_12d434;
            case 0x12D438u: goto label_12d438;
            case 0x12D43Cu: goto label_12d43c;
            case 0x12D440u: goto label_12d440;
            case 0x12D444u: goto label_12d444;
            case 0x12D448u: goto label_12d448;
            case 0x12D44Cu: goto label_12d44c;
            case 0x12D450u: goto label_12d450;
            case 0x12D454u: goto label_12d454;
            case 0x12D458u: goto label_12d458;
            case 0x12D45Cu: goto label_12d45c;
            case 0x12D460u: goto label_12d460;
            case 0x12D464u: goto label_12d464;
            case 0x12D468u: goto label_12d468;
            case 0x12D46Cu: goto label_12d46c;
            case 0x12D470u: goto label_12d470;
            case 0x12D474u: goto label_12d474;
            case 0x12D478u: goto label_12d478;
            case 0x12D47Cu: goto label_12d47c;
            case 0x12D480u: goto label_12d480;
            case 0x12D484u: goto label_12d484;
            case 0x12D488u: goto label_12d488;
            case 0x12D48Cu: goto label_12d48c;
            case 0x12D490u: goto label_12d490;
            case 0x12D494u: goto label_12d494;
            case 0x12D498u: goto label_12d498;
            case 0x12D49Cu: goto label_12d49c;
            case 0x12D4A0u: goto label_12d4a0;
            case 0x12D4A4u: goto label_12d4a4;
            case 0x12D4A8u: goto label_12d4a8;
            case 0x12D4ACu: goto label_12d4ac;
            case 0x12D4B0u: goto label_12d4b0;
            case 0x12D4B4u: goto label_12d4b4;
            case 0x12D4B8u: goto label_12d4b8;
            case 0x12D4BCu: goto label_12d4bc;
            case 0x12D4C0u: goto label_12d4c0;
            case 0x12D4C4u: goto label_12d4c4;
            case 0x12D4C8u: goto label_12d4c8;
            case 0x12D4CCu: goto label_12d4cc;
            case 0x12D4D0u: goto label_12d4d0;
            case 0x12D4D4u: goto label_12d4d4;
            case 0x12D4D8u: goto label_12d4d8;
            case 0x12D4DCu: goto label_12d4dc;
            case 0x12D4E0u: goto label_12d4e0;
            case 0x12D4E4u: goto label_12d4e4;
            case 0x12D4E8u: goto label_12d4e8;
            case 0x12D4ECu: goto label_12d4ec;
            case 0x12D4F0u: goto label_12d4f0;
            case 0x12D4F4u: goto label_12d4f4;
            case 0x12D4F8u: goto label_12d4f8;
            case 0x12D4FCu: goto label_12d4fc;
            case 0x12D500u: goto label_12d500;
            case 0x12D504u: goto label_12d504;
            case 0x12D508u: goto label_12d508;
            case 0x12D50Cu: goto label_12d50c;
            case 0x12D510u: goto label_12d510;
            case 0x12D514u: goto label_12d514;
            case 0x12D518u: goto label_12d518;
            case 0x12D51Cu: goto label_12d51c;
            case 0x12D520u: goto label_12d520;
            case 0x12D524u: goto label_12d524;
            case 0x12D528u: goto label_12d528;
            case 0x12D52Cu: goto label_12d52c;
            case 0x12D530u: goto label_12d530;
            case 0x12D534u: goto label_12d534;
            case 0x12D538u: goto label_12d538;
            case 0x12D53Cu: goto label_12d53c;
            case 0x12D540u: goto label_12d540;
            case 0x12D544u: goto label_12d544;
            case 0x12D548u: goto label_12d548;
            case 0x12D54Cu: goto label_12d54c;
            case 0x12D550u: goto label_12d550;
            case 0x12D554u: goto label_12d554;
            case 0x12D558u: goto label_12d558;
            case 0x12D55Cu: goto label_12d55c;
            case 0x12D560u: goto label_12d560;
            case 0x12D564u: goto label_12d564;
            case 0x12D568u: goto label_12d568;
            case 0x12D56Cu: goto label_12d56c;
            case 0x12D570u: goto label_12d570;
            case 0x12D574u: goto label_12d574;
            case 0x12D578u: goto label_12d578;
            case 0x12D57Cu: goto label_12d57c;
            case 0x12D580u: goto label_12d580;
            case 0x12D584u: goto label_12d584;
            case 0x12D588u: goto label_12d588;
            case 0x12D58Cu: goto label_12d58c;
            case 0x12D590u: goto label_12d590;
            case 0x12D594u: goto label_12d594;
            case 0x12D598u: goto label_12d598;
            case 0x12D59Cu: goto label_12d59c;
            case 0x12D5A0u: goto label_12d5a0;
            case 0x12D5A4u: goto label_12d5a4;
            case 0x12D5A8u: goto label_12d5a8;
            case 0x12D5ACu: goto label_12d5ac;
            case 0x12D5B0u: goto label_12d5b0;
            case 0x12D5B4u: goto label_12d5b4;
            case 0x12D5B8u: goto label_12d5b8;
            case 0x12D5BCu: goto label_12d5bc;
            case 0x12D5C0u: goto label_12d5c0;
            case 0x12D5C4u: goto label_12d5c4;
            case 0x12D5C8u: goto label_12d5c8;
            case 0x12D5CCu: goto label_12d5cc;
            case 0x12D5D0u: goto label_12d5d0;
            case 0x12D5D4u: goto label_12d5d4;
            case 0x12D5D8u: goto label_12d5d8;
            case 0x12D5DCu: goto label_12d5dc;
            case 0x12D5E0u: goto label_12d5e0;
            case 0x12D5E4u: goto label_12d5e4;
            case 0x12D5E8u: goto label_12d5e8;
            case 0x12D5ECu: goto label_12d5ec;
            case 0x12D5F0u: goto label_12d5f0;
            case 0x12D5F4u: goto label_12d5f4;
            case 0x12D5F8u: goto label_12d5f8;
            case 0x12D5FCu: goto label_12d5fc;
            case 0x12D600u: goto label_12d600;
            case 0x12D604u: goto label_12d604;
            case 0x12D608u: goto label_12d608;
            case 0x12D60Cu: goto label_12d60c;
            case 0x12D610u: goto label_12d610;
            case 0x12D614u: goto label_12d614;
            case 0x12D618u: goto label_12d618;
            case 0x12D61Cu: goto label_12d61c;
            case 0x12D620u: goto label_12d620;
            case 0x12D624u: goto label_12d624;
            case 0x12D628u: goto label_12d628;
            case 0x12D62Cu: goto label_12d62c;
            case 0x12D630u: goto label_12d630;
            case 0x12D634u: goto label_12d634;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12D428u; }
            if (ctx->pc != 0x12D428u) { return; }
        }
    }
    ctx->pc = 0x12D428u;
label_12d428:
    // 0x12d428: 0x8e840000
    ctx->pc = 0x12d428u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_12d42c:
    // 0x12d42c: 0x3a0302d
    ctx->pc = 0x12d42cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12d430:
    // 0x12d430: 0x24050001
    ctx->pc = 0x12d430u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12d434:
    // 0x12d434: 0x8c830000
    ctx->pc = 0x12d434u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12d438:
    // 0x12d438: 0x8c620020
    ctx->pc = 0x12d438u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_12d43c:
    // 0x12d43c: 0x40f809
label_12d440:
    if (ctx->pc == 0x12D440u) {
        ctx->pc = 0x12D440u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 8));
        ctx->pc = 0x12D444u;
        goto label_12d444;
    }
    ctx->pc = 0x12D43Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12D444u);
        ctx->pc = 0x12D440u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 8));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D338u: goto label_12d338;
            case 0x12D33Cu: goto label_12d33c;
            case 0x12D340u: goto label_12d340;
            case 0x12D344u: goto label_12d344;
            case 0x12D348u: goto label_12d348;
            case 0x12D34Cu: goto label_12d34c;
            case 0x12D350u: goto label_12d350;
            case 0x12D354u: goto label_12d354;
            case 0x12D358u: goto label_12d358;
            case 0x12D35Cu: goto label_12d35c;
            case 0x12D360u: goto label_12d360;
            case 0x12D364u: goto label_12d364;
            case 0x12D368u: goto label_12d368;
            case 0x12D36Cu: goto label_12d36c;
            case 0x12D370u: goto label_12d370;
            case 0x12D374u: goto label_12d374;
            case 0x12D378u: goto label_12d378;
            case 0x12D37Cu: goto label_12d37c;
            case 0x12D380u: goto label_12d380;
            case 0x12D384u: goto label_12d384;
            case 0x12D388u: goto label_12d388;
            case 0x12D38Cu: goto label_12d38c;
            case 0x12D390u: goto label_12d390;
            case 0x12D394u: goto label_12d394;
            case 0x12D398u: goto label_12d398;
            case 0x12D39Cu: goto label_12d39c;
            case 0x12D3A0u: goto label_12d3a0;
            case 0x12D3A4u: goto label_12d3a4;
            case 0x12D3A8u: goto label_12d3a8;
            case 0x12D3ACu: goto label_12d3ac;
            case 0x12D3B0u: goto label_12d3b0;
            case 0x12D3B4u: goto label_12d3b4;
            case 0x12D3B8u: goto label_12d3b8;
            case 0x12D3BCu: goto label_12d3bc;
            case 0x12D3C0u: goto label_12d3c0;
            case 0x12D3C4u: goto label_12d3c4;
            case 0x12D3C8u: goto label_12d3c8;
            case 0x12D3CCu: goto label_12d3cc;
            case 0x12D3D0u: goto label_12d3d0;
            case 0x12D3D4u: goto label_12d3d4;
            case 0x12D3D8u: goto label_12d3d8;
            case 0x12D3DCu: goto label_12d3dc;
            case 0x12D3E0u: goto label_12d3e0;
            case 0x12D3E4u: goto label_12d3e4;
            case 0x12D3E8u: goto label_12d3e8;
            case 0x12D3ECu: goto label_12d3ec;
            case 0x12D3F0u: goto label_12d3f0;
            case 0x12D3F4u: goto label_12d3f4;
            case 0x12D3F8u: goto label_12d3f8;
            case 0x12D3FCu: goto label_12d3fc;
            case 0x12D400u: goto label_12d400;
            case 0x12D404u: goto label_12d404;
            case 0x12D408u: goto label_12d408;
            case 0x12D40Cu: goto label_12d40c;
            case 0x12D410u: goto label_12d410;
            case 0x12D414u: goto label_12d414;
            case 0x12D418u: goto label_12d418;
            case 0x12D41Cu: goto label_12d41c;
            case 0x12D420u: goto label_12d420;
            case 0x12D424u: goto label_12d424;
            case 0x12D428u: goto label_12d428;
            case 0x12D42Cu: goto label_12d42c;
            case 0x12D430u: goto label_12d430;
            case 0x12D434u: goto label_12d434;
            case 0x12D438u: goto label_12d438;
            case 0x12D43Cu: goto label_12d43c;
            case 0x12D440u: goto label_12d440;
            case 0x12D444u: goto label_12d444;
            case 0x12D448u: goto label_12d448;
            case 0x12D44Cu: goto label_12d44c;
            case 0x12D450u: goto label_12d450;
            case 0x12D454u: goto label_12d454;
            case 0x12D458u: goto label_12d458;
            case 0x12D45Cu: goto label_12d45c;
            case 0x12D460u: goto label_12d460;
            case 0x12D464u: goto label_12d464;
            case 0x12D468u: goto label_12d468;
            case 0x12D46Cu: goto label_12d46c;
            case 0x12D470u: goto label_12d470;
            case 0x12D474u: goto label_12d474;
            case 0x12D478u: goto label_12d478;
            case 0x12D47Cu: goto label_12d47c;
            case 0x12D480u: goto label_12d480;
            case 0x12D484u: goto label_12d484;
            case 0x12D488u: goto label_12d488;
            case 0x12D48Cu: goto label_12d48c;
            case 0x12D490u: goto label_12d490;
            case 0x12D494u: goto label_12d494;
            case 0x12D498u: goto label_12d498;
            case 0x12D49Cu: goto label_12d49c;
            case 0x12D4A0u: goto label_12d4a0;
            case 0x12D4A4u: goto label_12d4a4;
            case 0x12D4A8u: goto label_12d4a8;
            case 0x12D4ACu: goto label_12d4ac;
            case 0x12D4B0u: goto label_12d4b0;
            case 0x12D4B4u: goto label_12d4b4;
            case 0x12D4B8u: goto label_12d4b8;
            case 0x12D4BCu: goto label_12d4bc;
            case 0x12D4C0u: goto label_12d4c0;
            case 0x12D4C4u: goto label_12d4c4;
            case 0x12D4C8u: goto label_12d4c8;
            case 0x12D4CCu: goto label_12d4cc;
            case 0x12D4D0u: goto label_12d4d0;
            case 0x12D4D4u: goto label_12d4d4;
            case 0x12D4D8u: goto label_12d4d8;
            case 0x12D4DCu: goto label_12d4dc;
            case 0x12D4E0u: goto label_12d4e0;
            case 0x12D4E4u: goto label_12d4e4;
            case 0x12D4E8u: goto label_12d4e8;
            case 0x12D4ECu: goto label_12d4ec;
            case 0x12D4F0u: goto label_12d4f0;
            case 0x12D4F4u: goto label_12d4f4;
            case 0x12D4F8u: goto label_12d4f8;
            case 0x12D4FCu: goto label_12d4fc;
            case 0x12D500u: goto label_12d500;
            case 0x12D504u: goto label_12d504;
            case 0x12D508u: goto label_12d508;
            case 0x12D50Cu: goto label_12d50c;
            case 0x12D510u: goto label_12d510;
            case 0x12D514u: goto label_12d514;
            case 0x12D518u: goto label_12d518;
            case 0x12D51Cu: goto label_12d51c;
            case 0x12D520u: goto label_12d520;
            case 0x12D524u: goto label_12d524;
            case 0x12D528u: goto label_12d528;
            case 0x12D52Cu: goto label_12d52c;
            case 0x12D530u: goto label_12d530;
            case 0x12D534u: goto label_12d534;
            case 0x12D538u: goto label_12d538;
            case 0x12D53Cu: goto label_12d53c;
            case 0x12D540u: goto label_12d540;
            case 0x12D544u: goto label_12d544;
            case 0x12D548u: goto label_12d548;
            case 0x12D54Cu: goto label_12d54c;
            case 0x12D550u: goto label_12d550;
            case 0x12D554u: goto label_12d554;
            case 0x12D558u: goto label_12d558;
            case 0x12D55Cu: goto label_12d55c;
            case 0x12D560u: goto label_12d560;
            case 0x12D564u: goto label_12d564;
            case 0x12D568u: goto label_12d568;
            case 0x12D56Cu: goto label_12d56c;
            case 0x12D570u: goto label_12d570;
            case 0x12D574u: goto label_12d574;
            case 0x12D578u: goto label_12d578;
            case 0x12D57Cu: goto label_12d57c;
            case 0x12D580u: goto label_12d580;
            case 0x12D584u: goto label_12d584;
            case 0x12D588u: goto label_12d588;
            case 0x12D58Cu: goto label_12d58c;
            case 0x12D590u: goto label_12d590;
            case 0x12D594u: goto label_12d594;
            case 0x12D598u: goto label_12d598;
            case 0x12D59Cu: goto label_12d59c;
            case 0x12D5A0u: goto label_12d5a0;
            case 0x12D5A4u: goto label_12d5a4;
            case 0x12D5A8u: goto label_12d5a8;
            case 0x12D5ACu: goto label_12d5ac;
            case 0x12D5B0u: goto label_12d5b0;
            case 0x12D5B4u: goto label_12d5b4;
            case 0x12D5B8u: goto label_12d5b8;
            case 0x12D5BCu: goto label_12d5bc;
            case 0x12D5C0u: goto label_12d5c0;
            case 0x12D5C4u: goto label_12d5c4;
            case 0x12D5C8u: goto label_12d5c8;
            case 0x12D5CCu: goto label_12d5cc;
            case 0x12D5D0u: goto label_12d5d0;
            case 0x12D5D4u: goto label_12d5d4;
            case 0x12D5D8u: goto label_12d5d8;
            case 0x12D5DCu: goto label_12d5dc;
            case 0x12D5E0u: goto label_12d5e0;
            case 0x12D5E4u: goto label_12d5e4;
            case 0x12D5E8u: goto label_12d5e8;
            case 0x12D5ECu: goto label_12d5ec;
            case 0x12D5F0u: goto label_12d5f0;
            case 0x12D5F4u: goto label_12d5f4;
            case 0x12D5F8u: goto label_12d5f8;
            case 0x12D5FCu: goto label_12d5fc;
            case 0x12D600u: goto label_12d600;
            case 0x12D604u: goto label_12d604;
            case 0x12D608u: goto label_12d608;
            case 0x12D60Cu: goto label_12d60c;
            case 0x12D610u: goto label_12d610;
            case 0x12D614u: goto label_12d614;
            case 0x12D618u: goto label_12d618;
            case 0x12D61Cu: goto label_12d61c;
            case 0x12D620u: goto label_12d620;
            case 0x12D624u: goto label_12d624;
            case 0x12D628u: goto label_12d628;
            case 0x12D62Cu: goto label_12d62c;
            case 0x12D630u: goto label_12d630;
            case 0x12D634u: goto label_12d634;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12D444u; }
            if (ctx->pc != 0x12D444u) { return; }
        }
    }
    ctx->pc = 0x12D444u;
label_12d444:
    // 0x12d444: 0x8e840000
    ctx->pc = 0x12d444u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_12d448:
    // 0x12d448: 0x282d
    ctx->pc = 0x12d448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12d44c:
    // 0x12d44c: 0x3c0302d
    ctx->pc = 0x12d44cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12d450:
    // 0x12d450: 0x8c830000
    ctx->pc = 0x12d450u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12d454:
    // 0x12d454: 0x8c62001c
    ctx->pc = 0x12d454u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_12d458:
    // 0x12d458: 0x40f809
label_12d45c:
    if (ctx->pc == 0x12D45Cu) {
        ctx->pc = 0x12D45Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x12D460u;
        goto label_12d460;
    }
    ctx->pc = 0x12D458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12D460u);
        ctx->pc = 0x12D45Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D338u: goto label_12d338;
            case 0x12D33Cu: goto label_12d33c;
            case 0x12D340u: goto label_12d340;
            case 0x12D344u: goto label_12d344;
            case 0x12D348u: goto label_12d348;
            case 0x12D34Cu: goto label_12d34c;
            case 0x12D350u: goto label_12d350;
            case 0x12D354u: goto label_12d354;
            case 0x12D358u: goto label_12d358;
            case 0x12D35Cu: goto label_12d35c;
            case 0x12D360u: goto label_12d360;
            case 0x12D364u: goto label_12d364;
            case 0x12D368u: goto label_12d368;
            case 0x12D36Cu: goto label_12d36c;
            case 0x12D370u: goto label_12d370;
            case 0x12D374u: goto label_12d374;
            case 0x12D378u: goto label_12d378;
            case 0x12D37Cu: goto label_12d37c;
            case 0x12D380u: goto label_12d380;
            case 0x12D384u: goto label_12d384;
            case 0x12D388u: goto label_12d388;
            case 0x12D38Cu: goto label_12d38c;
            case 0x12D390u: goto label_12d390;
            case 0x12D394u: goto label_12d394;
            case 0x12D398u: goto label_12d398;
            case 0x12D39Cu: goto label_12d39c;
            case 0x12D3A0u: goto label_12d3a0;
            case 0x12D3A4u: goto label_12d3a4;
            case 0x12D3A8u: goto label_12d3a8;
            case 0x12D3ACu: goto label_12d3ac;
            case 0x12D3B0u: goto label_12d3b0;
            case 0x12D3B4u: goto label_12d3b4;
            case 0x12D3B8u: goto label_12d3b8;
            case 0x12D3BCu: goto label_12d3bc;
            case 0x12D3C0u: goto label_12d3c0;
            case 0x12D3C4u: goto label_12d3c4;
            case 0x12D3C8u: goto label_12d3c8;
            case 0x12D3CCu: goto label_12d3cc;
            case 0x12D3D0u: goto label_12d3d0;
            case 0x12D3D4u: goto label_12d3d4;
            case 0x12D3D8u: goto label_12d3d8;
            case 0x12D3DCu: goto label_12d3dc;
            case 0x12D3E0u: goto label_12d3e0;
            case 0x12D3E4u: goto label_12d3e4;
            case 0x12D3E8u: goto label_12d3e8;
            case 0x12D3ECu: goto label_12d3ec;
            case 0x12D3F0u: goto label_12d3f0;
            case 0x12D3F4u: goto label_12d3f4;
            case 0x12D3F8u: goto label_12d3f8;
            case 0x12D3FCu: goto label_12d3fc;
            case 0x12D400u: goto label_12d400;
            case 0x12D404u: goto label_12d404;
            case 0x12D408u: goto label_12d408;
            case 0x12D40Cu: goto label_12d40c;
            case 0x12D410u: goto label_12d410;
            case 0x12D414u: goto label_12d414;
            case 0x12D418u: goto label_12d418;
            case 0x12D41Cu: goto label_12d41c;
            case 0x12D420u: goto label_12d420;
            case 0x12D424u: goto label_12d424;
            case 0x12D428u: goto label_12d428;
            case 0x12D42Cu: goto label_12d42c;
            case 0x12D430u: goto label_12d430;
            case 0x12D434u: goto label_12d434;
            case 0x12D438u: goto label_12d438;
            case 0x12D43Cu: goto label_12d43c;
            case 0x12D440u: goto label_12d440;
            case 0x12D444u: goto label_12d444;
            case 0x12D448u: goto label_12d448;
            case 0x12D44Cu: goto label_12d44c;
            case 0x12D450u: goto label_12d450;
            case 0x12D454u: goto label_12d454;
            case 0x12D458u: goto label_12d458;
            case 0x12D45Cu: goto label_12d45c;
            case 0x12D460u: goto label_12d460;
            case 0x12D464u: goto label_12d464;
            case 0x12D468u: goto label_12d468;
            case 0x12D46Cu: goto label_12d46c;
            case 0x12D470u: goto label_12d470;
            case 0x12D474u: goto label_12d474;
            case 0x12D478u: goto label_12d478;
            case 0x12D47Cu: goto label_12d47c;
            case 0x12D480u: goto label_12d480;
            case 0x12D484u: goto label_12d484;
            case 0x12D488u: goto label_12d488;
            case 0x12D48Cu: goto label_12d48c;
            case 0x12D490u: goto label_12d490;
            case 0x12D494u: goto label_12d494;
            case 0x12D498u: goto label_12d498;
            case 0x12D49Cu: goto label_12d49c;
            case 0x12D4A0u: goto label_12d4a0;
            case 0x12D4A4u: goto label_12d4a4;
            case 0x12D4A8u: goto label_12d4a8;
            case 0x12D4ACu: goto label_12d4ac;
            case 0x12D4B0u: goto label_12d4b0;
            case 0x12D4B4u: goto label_12d4b4;
            case 0x12D4B8u: goto label_12d4b8;
            case 0x12D4BCu: goto label_12d4bc;
            case 0x12D4C0u: goto label_12d4c0;
            case 0x12D4C4u: goto label_12d4c4;
            case 0x12D4C8u: goto label_12d4c8;
            case 0x12D4CCu: goto label_12d4cc;
            case 0x12D4D0u: goto label_12d4d0;
            case 0x12D4D4u: goto label_12d4d4;
            case 0x12D4D8u: goto label_12d4d8;
            case 0x12D4DCu: goto label_12d4dc;
            case 0x12D4E0u: goto label_12d4e0;
            case 0x12D4E4u: goto label_12d4e4;
            case 0x12D4E8u: goto label_12d4e8;
            case 0x12D4ECu: goto label_12d4ec;
            case 0x12D4F0u: goto label_12d4f0;
            case 0x12D4F4u: goto label_12d4f4;
            case 0x12D4F8u: goto label_12d4f8;
            case 0x12D4FCu: goto label_12d4fc;
            case 0x12D500u: goto label_12d500;
            case 0x12D504u: goto label_12d504;
            case 0x12D508u: goto label_12d508;
            case 0x12D50Cu: goto label_12d50c;
            case 0x12D510u: goto label_12d510;
            case 0x12D514u: goto label_12d514;
            case 0x12D518u: goto label_12d518;
            case 0x12D51Cu: goto label_12d51c;
            case 0x12D520u: goto label_12d520;
            case 0x12D524u: goto label_12d524;
            case 0x12D528u: goto label_12d528;
            case 0x12D52Cu: goto label_12d52c;
            case 0x12D530u: goto label_12d530;
            case 0x12D534u: goto label_12d534;
            case 0x12D538u: goto label_12d538;
            case 0x12D53Cu: goto label_12d53c;
            case 0x12D540u: goto label_12d540;
            case 0x12D544u: goto label_12d544;
            case 0x12D548u: goto label_12d548;
            case 0x12D54Cu: goto label_12d54c;
            case 0x12D550u: goto label_12d550;
            case 0x12D554u: goto label_12d554;
            case 0x12D558u: goto label_12d558;
            case 0x12D55Cu: goto label_12d55c;
            case 0x12D560u: goto label_12d560;
            case 0x12D564u: goto label_12d564;
            case 0x12D568u: goto label_12d568;
            case 0x12D56Cu: goto label_12d56c;
            case 0x12D570u: goto label_12d570;
            case 0x12D574u: goto label_12d574;
            case 0x12D578u: goto label_12d578;
            case 0x12D57Cu: goto label_12d57c;
            case 0x12D580u: goto label_12d580;
            case 0x12D584u: goto label_12d584;
            case 0x12D588u: goto label_12d588;
            case 0x12D58Cu: goto label_12d58c;
            case 0x12D590u: goto label_12d590;
            case 0x12D594u: goto label_12d594;
            case 0x12D598u: goto label_12d598;
            case 0x12D59Cu: goto label_12d59c;
            case 0x12D5A0u: goto label_12d5a0;
            case 0x12D5A4u: goto label_12d5a4;
            case 0x12D5A8u: goto label_12d5a8;
            case 0x12D5ACu: goto label_12d5ac;
            case 0x12D5B0u: goto label_12d5b0;
            case 0x12D5B4u: goto label_12d5b4;
            case 0x12D5B8u: goto label_12d5b8;
            case 0x12D5BCu: goto label_12d5bc;
            case 0x12D5C0u: goto label_12d5c0;
            case 0x12D5C4u: goto label_12d5c4;
            case 0x12D5C8u: goto label_12d5c8;
            case 0x12D5CCu: goto label_12d5cc;
            case 0x12D5D0u: goto label_12d5d0;
            case 0x12D5D4u: goto label_12d5d4;
            case 0x12D5D8u: goto label_12d5d8;
            case 0x12D5DCu: goto label_12d5dc;
            case 0x12D5E0u: goto label_12d5e0;
            case 0x12D5E4u: goto label_12d5e4;
            case 0x12D5E8u: goto label_12d5e8;
            case 0x12D5ECu: goto label_12d5ec;
            case 0x12D5F0u: goto label_12d5f0;
            case 0x12D5F4u: goto label_12d5f4;
            case 0x12D5F8u: goto label_12d5f8;
            case 0x12D5FCu: goto label_12d5fc;
            case 0x12D600u: goto label_12d600;
            case 0x12D604u: goto label_12d604;
            case 0x12D608u: goto label_12d608;
            case 0x12D60Cu: goto label_12d60c;
            case 0x12D610u: goto label_12d610;
            case 0x12D614u: goto label_12d614;
            case 0x12D618u: goto label_12d618;
            case 0x12D61Cu: goto label_12d61c;
            case 0x12D620u: goto label_12d620;
            case 0x12D624u: goto label_12d624;
            case 0x12D628u: goto label_12d628;
            case 0x12D62Cu: goto label_12d62c;
            case 0x12D630u: goto label_12d630;
            case 0x12D634u: goto label_12d634;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12D460u; }
            if (ctx->pc != 0x12D460u) { return; }
        }
    }
    ctx->pc = 0x12D460u;
label_12d460:
    // 0x12d460: 0xc04939e
label_12d464:
    if (ctx->pc == 0x12D464u) {
        ctx->pc = 0x12D464u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x12D468u;
        goto label_12d468;
    }
    ctx->pc = 0x12D460u;
    SET_GPR_U32(ctx, 31, 0x12D468u);
    ctx->pc = 0x12D464u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->pc = 0x124E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00124E78_0x124e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D468u; }
    }
    if (ctx->pc != 0x12D468u) { return; }
    ctx->pc = 0x12D468u;
label_12d468:
    // 0x12d468: 0x2a0202d
    ctx->pc = 0x12d468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12d46c:
    // 0x12d46c: 0x2c2102a
    ctx->pc = 0x12d46cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), GPR_S32(ctx, 2)));
label_12d470:
    // 0x12d470: 0x132840
    ctx->pc = 0x12d470u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 19), 1));
label_12d474:
    // 0x12d474: 0x3a0302d
    ctx->pc = 0x12d474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12d478:
    // 0x12d478: 0x1440ffe1
label_12d47c:
    if (ctx->pc == 0x12D47Cu) {
        ctx->pc = 0x12D47Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D480u;
        goto label_12d480;
    }
    ctx->pc = 0x12D478u;
    {
        const bool branch_taken_0x12d478 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D47Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12d478) {
            ctx->pc = 0x12D400u;
            goto label_12d400;
        }
    }
    ctx->pc = 0x12D480u;
label_12d480:
    // 0x12d480: 0x8e43002c
    ctx->pc = 0x12d480u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_12d484:
    // 0x12d484: 0x2e0202d
    ctx->pc = 0x12d484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12d488:
    // 0x12d488: 0x8fa20020
    ctx->pc = 0x12d488u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_12d48c:
    // 0x12d48c: 0x731821
    ctx->pc = 0x12d48cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_12d490:
    // 0x12d490: 0x8e450030
    ctx->pc = 0x12d490u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_12d494:
    // 0x12d494: 0xae43002c
    ctx->pc = 0x12d494u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_12d498:
    // 0x12d498: 0x8e470034
    ctx->pc = 0x12d498u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_12d49c:
    // 0x12d49c: 0xa22821
    ctx->pc = 0x12d49cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_12d4a0:
    // 0x12d4a0: 0x8fa30020
    ctx->pc = 0x12d4a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_12d4a4:
    // 0x12d4a4: 0x8e460040
    ctx->pc = 0x12d4a4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_12d4a8:
    // 0x12d4a8: 0xf33821
    ctx->pc = 0x12d4a8u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
label_12d4ac:
    // 0x12d4ac: 0x8e420044
    ctx->pc = 0x12d4acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_12d4b0:
    // 0x12d4b0: 0xd33021
    ctx->pc = 0x12d4b0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_12d4b4:
    // 0x12d4b4: 0xae450030
    ctx->pc = 0x12d4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 5));
label_12d4b8:
    // 0x12d4b8: 0x431021
    ctx->pc = 0x12d4b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12d4bc:
    // 0x12d4bc: 0xae470034
    ctx->pc = 0x12d4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 7));
label_12d4c0:
    // 0x12d4c0: 0xae420044
    ctx->pc = 0x12d4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
label_12d4c4:
    // 0x12d4c4: 0xc04949e
label_12d4c8:
    if (ctx->pc == 0x12D4C8u) {
        ctx->pc = 0x12D4C8u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 6));
        ctx->pc = 0x12D4CCu;
        goto label_12d4cc;
    }
    ctx->pc = 0x12D4C4u;
    SET_GPR_U32(ctx, 31, 0x12D4CCu);
    ctx->pc = 0x12D4C8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 6));
    ctx->pc = 0x125278u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00125278_0x125278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D4CCu; }
    }
    if (ctx->pc != 0x12D4CCu) { return; }
    ctx->pc = 0x12D4CCu;
label_12d4cc:
    // 0x12d4cc: 0xdfb00030
    ctx->pc = 0x12d4ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12d4d0:
    // 0x12d4d0: 0xdfb10038
    ctx->pc = 0x12d4d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_12d4d4:
    // 0x12d4d4: 0xdfb20040
    ctx->pc = 0x12d4d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_12d4d8:
    // 0x12d4d8: 0xdfb30048
    ctx->pc = 0x12d4d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_12d4dc:
    // 0x12d4dc: 0xdfb40050
    ctx->pc = 0x12d4dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_12d4e0:
    // 0x12d4e0: 0xdfb50058
    ctx->pc = 0x12d4e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_12d4e4:
    // 0x12d4e4: 0xdfb60060
    ctx->pc = 0x12d4e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_12d4e8:
    // 0x12d4e8: 0xdfb70068
    ctx->pc = 0x12d4e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_12d4ec:
    // 0x12d4ec: 0xdfbe0070
    ctx->pc = 0x12d4ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_12d4f0:
    // 0x12d4f0: 0xdfbf0078
    ctx->pc = 0x12d4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_12d4f4:
    // 0x12d4f4: 0x3e00008
label_12d4f8:
    if (ctx->pc == 0x12D4F8u) {
        ctx->pc = 0x12D4F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x12D4FCu;
        goto label_12d4fc;
    }
    ctx->pc = 0x12D4F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D4F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D338u: goto label_12d338;
            case 0x12D33Cu: goto label_12d33c;
            case 0x12D340u: goto label_12d340;
            case 0x12D344u: goto label_12d344;
            case 0x12D348u: goto label_12d348;
            case 0x12D34Cu: goto label_12d34c;
            case 0x12D350u: goto label_12d350;
            case 0x12D354u: goto label_12d354;
            case 0x12D358u: goto label_12d358;
            case 0x12D35Cu: goto label_12d35c;
            case 0x12D360u: goto label_12d360;
            case 0x12D364u: goto label_12d364;
            case 0x12D368u: goto label_12d368;
            case 0x12D36Cu: goto label_12d36c;
            case 0x12D370u: goto label_12d370;
            case 0x12D374u: goto label_12d374;
            case 0x12D378u: goto label_12d378;
            case 0x12D37Cu: goto label_12d37c;
            case 0x12D380u: goto label_12d380;
            case 0x12D384u: goto label_12d384;
            case 0x12D388u: goto label_12d388;
            case 0x12D38Cu: goto label_12d38c;
            case 0x12D390u: goto label_12d390;
            case 0x12D394u: goto label_12d394;
            case 0x12D398u: goto label_12d398;
            case 0x12D39Cu: goto label_12d39c;
            case 0x12D3A0u: goto label_12d3a0;
            case 0x12D3A4u: goto label_12d3a4;
            case 0x12D3A8u: goto label_12d3a8;
            case 0x12D3ACu: goto label_12d3ac;
            case 0x12D3B0u: goto label_12d3b0;
            case 0x12D3B4u: goto label_12d3b4;
            case 0x12D3B8u: goto label_12d3b8;
            case 0x12D3BCu: goto label_12d3bc;
            case 0x12D3C0u: goto label_12d3c0;
            case 0x12D3C4u: goto label_12d3c4;
            case 0x12D3C8u: goto label_12d3c8;
            case 0x12D3CCu: goto label_12d3cc;
            case 0x12D3D0u: goto label_12d3d0;
            case 0x12D3D4u: goto label_12d3d4;
            case 0x12D3D8u: goto label_12d3d8;
            case 0x12D3DCu: goto label_12d3dc;
            case 0x12D3E0u: goto label_12d3e0;
            case 0x12D3E4u: goto label_12d3e4;
            case 0x12D3E8u: goto label_12d3e8;
            case 0x12D3ECu: goto label_12d3ec;
            case 0x12D3F0u: goto label_12d3f0;
            case 0x12D3F4u: goto label_12d3f4;
            case 0x12D3F8u: goto label_12d3f8;
            case 0x12D3FCu: goto label_12d3fc;
            case 0x12D400u: goto label_12d400;
            case 0x12D404u: goto label_12d404;
            case 0x12D408u: goto label_12d408;
            case 0x12D40Cu: goto label_12d40c;
            case 0x12D410u: goto label_12d410;
            case 0x12D414u: goto label_12d414;
            case 0x12D418u: goto label_12d418;
            case 0x12D41Cu: goto label_12d41c;
            case 0x12D420u: goto label_12d420;
            case 0x12D424u: goto label_12d424;
            case 0x12D428u: goto label_12d428;
            case 0x12D42Cu: goto label_12d42c;
            case 0x12D430u: goto label_12d430;
            case 0x12D434u: goto label_12d434;
            case 0x12D438u: goto label_12d438;
            case 0x12D43Cu: goto label_12d43c;
            case 0x12D440u: goto label_12d440;
            case 0x12D444u: goto label_12d444;
            case 0x12D448u: goto label_12d448;
            case 0x12D44Cu: goto label_12d44c;
            case 0x12D450u: goto label_12d450;
            case 0x12D454u: goto label_12d454;
            case 0x12D458u: goto label_12d458;
            case 0x12D45Cu: goto label_12d45c;
            case 0x12D460u: goto label_12d460;
            case 0x12D464u: goto label_12d464;
            case 0x12D468u: goto label_12d468;
            case 0x12D46Cu: goto label_12d46c;
            case 0x12D470u: goto label_12d470;
            case 0x12D474u: goto label_12d474;
            case 0x12D478u: goto label_12d478;
            case 0x12D47Cu: goto label_12d47c;
            case 0x12D480u: goto label_12d480;
            case 0x12D484u: goto label_12d484;
            case 0x12D488u: goto label_12d488;
            case 0x12D48Cu: goto label_12d48c;
            case 0x12D490u: goto label_12d490;
            case 0x12D494u: goto label_12d494;
            case 0x12D498u: goto label_12d498;
            case 0x12D49Cu: goto label_12d49c;
            case 0x12D4A0u: goto label_12d4a0;
            case 0x12D4A4u: goto label_12d4a4;
            case 0x12D4A8u: goto label_12d4a8;
            case 0x12D4ACu: goto label_12d4ac;
            case 0x12D4B0u: goto label_12d4b0;
            case 0x12D4B4u: goto label_12d4b4;
            case 0x12D4B8u: goto label_12d4b8;
            case 0x12D4BCu: goto label_12d4bc;
            case 0x12D4C0u: goto label_12d4c0;
            case 0x12D4C4u: goto label_12d4c4;
            case 0x12D4C8u: goto label_12d4c8;
            case 0x12D4CCu: goto label_12d4cc;
            case 0x12D4D0u: goto label_12d4d0;
            case 0x12D4D4u: goto label_12d4d4;
            case 0x12D4D8u: goto label_12d4d8;
            case 0x12D4DCu: goto label_12d4dc;
            case 0x12D4E0u: goto label_12d4e0;
            case 0x12D4E4u: goto label_12d4e4;
            case 0x12D4E8u: goto label_12d4e8;
            case 0x12D4ECu: goto label_12d4ec;
            case 0x12D4F0u: goto label_12d4f0;
            case 0x12D4F4u: goto label_12d4f4;
            case 0x12D4F8u: goto label_12d4f8;
            case 0x12D4FCu: goto label_12d4fc;
            case 0x12D500u: goto label_12d500;
            case 0x12D504u: goto label_12d504;
            case 0x12D508u: goto label_12d508;
            case 0x12D50Cu: goto label_12d50c;
            case 0x12D510u: goto label_12d510;
            case 0x12D514u: goto label_12d514;
            case 0x12D518u: goto label_12d518;
            case 0x12D51Cu: goto label_12d51c;
            case 0x12D520u: goto label_12d520;
            case 0x12D524u: goto label_12d524;
            case 0x12D528u: goto label_12d528;
            case 0x12D52Cu: goto label_12d52c;
            case 0x12D530u: goto label_12d530;
            case 0x12D534u: goto label_12d534;
            case 0x12D538u: goto label_12d538;
            case 0x12D53Cu: goto label_12d53c;
            case 0x12D540u: goto label_12d540;
            case 0x12D544u: goto label_12d544;
            case 0x12D548u: goto label_12d548;
            case 0x12D54Cu: goto label_12d54c;
            case 0x12D550u: goto label_12d550;
            case 0x12D554u: goto label_12d554;
            case 0x12D558u: goto label_12d558;
            case 0x12D55Cu: goto label_12d55c;
            case 0x12D560u: goto label_12d560;
            case 0x12D564u: goto label_12d564;
            case 0x12D568u: goto label_12d568;
            case 0x12D56Cu: goto label_12d56c;
            case 0x12D570u: goto label_12d570;
            case 0x12D574u: goto label_12d574;
            case 0x12D578u: goto label_12d578;
            case 0x12D57Cu: goto label_12d57c;
            case 0x12D580u: goto label_12d580;
            case 0x12D584u: goto label_12d584;
            case 0x12D588u: goto label_12d588;
            case 0x12D58Cu: goto label_12d58c;
            case 0x12D590u: goto label_12d590;
            case 0x12D594u: goto label_12d594;
            case 0x12D598u: goto label_12d598;
            case 0x12D59Cu: goto label_12d59c;
            case 0x12D5A0u: goto label_12d5a0;
            case 0x12D5A4u: goto label_12d5a4;
            case 0x12D5A8u: goto label_12d5a8;
            case 0x12D5ACu: goto label_12d5ac;
            case 0x12D5B0u: goto label_12d5b0;
            case 0x12D5B4u: goto label_12d5b4;
            case 0x12D5B8u: goto label_12d5b8;
            case 0x12D5BCu: goto label_12d5bc;
            case 0x12D5C0u: goto label_12d5c0;
            case 0x12D5C4u: goto label_12d5c4;
            case 0x12D5C8u: goto label_12d5c8;
            case 0x12D5CCu: goto label_12d5cc;
            case 0x12D5D0u: goto label_12d5d0;
            case 0x12D5D4u: goto label_12d5d4;
            case 0x12D5D8u: goto label_12d5d8;
            case 0x12D5DCu: goto label_12d5dc;
            case 0x12D5E0u: goto label_12d5e0;
            case 0x12D5E4u: goto label_12d5e4;
            case 0x12D5E8u: goto label_12d5e8;
            case 0x12D5ECu: goto label_12d5ec;
            case 0x12D5F0u: goto label_12d5f0;
            case 0x12D5F4u: goto label_12d5f4;
            case 0x12D5F8u: goto label_12d5f8;
            case 0x12D5FCu: goto label_12d5fc;
            case 0x12D600u: goto label_12d600;
            case 0x12D604u: goto label_12d604;
            case 0x12D608u: goto label_12d608;
            case 0x12D60Cu: goto label_12d60c;
            case 0x12D610u: goto label_12d610;
            case 0x12D614u: goto label_12d614;
            case 0x12D618u: goto label_12d618;
            case 0x12D61Cu: goto label_12d61c;
            case 0x12D620u: goto label_12d620;
            case 0x12D624u: goto label_12d624;
            case 0x12D628u: goto label_12d628;
            case 0x12D62Cu: goto label_12d62c;
            case 0x12D630u: goto label_12d630;
            case 0x12D634u: goto label_12d634;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12D4FCu;
label_12d4fc:
    // 0x12d4fc: 0x0
    ctx->pc = 0x12d4fcu;
    // NOP
label_12d500:
    // 0x12d500: 0x27bdffd0
    ctx->pc = 0x12d500u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_12d504:
    // 0x12d504: 0xffb00000
    ctx->pc = 0x12d504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12d508:
    // 0x12d508: 0xffb20010
    ctx->pc = 0x12d508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_12d50c:
    // 0x12d50c: 0x80902d
    ctx->pc = 0x12d50cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12d510:
    // 0x12d510: 0xffb30018
    ctx->pc = 0x12d510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_12d514:
    // 0x12d514: 0xffbf0020
    ctx->pc = 0x12d514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_12d518:
    // 0x12d518: 0xffb10008
    ctx->pc = 0x12d518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_12d51c:
    // 0x12d51c: 0x8e510004
    ctx->pc = 0x12d51cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_12d520:
    // 0x12d520: 0xc0493be
label_12d524:
    if (ctx->pc == 0x12D524u) {
        ctx->pc = 0x12D524u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D528u;
        goto label_12d528;
    }
    ctx->pc = 0x12D520u;
    SET_GPR_U32(ctx, 31, 0x12D528u);
    ctx->pc = 0x12D524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x124EF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00124EF8_0x124ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D528u; }
    }
    if (ctx->pc != 0x12D528u) { return; }
    ctx->pc = 0x12D528u;
label_12d528:
    // 0x12d528: 0x220202d
    ctx->pc = 0x12d528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12d52c:
    // 0x12d52c: 0xc0494ae
label_12d530:
    if (ctx->pc == 0x12D530u) {
        ctx->pc = 0x12D530u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D534u;
        goto label_12d534;
    }
    ctx->pc = 0x12D52Cu;
    SET_GPR_U32(ctx, 31, 0x12D534u);
    ctx->pc = 0x12D530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1252B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001252B8_0x1252b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D534u; }
    }
    if (ctx->pc != 0x12D534u) { return; }
    ctx->pc = 0x12D534u;
label_12d534:
    // 0x12d534: 0x220202d
    ctx->pc = 0x12d534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12d538:
    // 0x12d538: 0xc0494b0
label_12d53c:
    if (ctx->pc == 0x12D53Cu) {
        ctx->pc = 0x12D53Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D540u;
        goto label_12d540;
    }
    ctx->pc = 0x12D538u;
    SET_GPR_U32(ctx, 31, 0x12D540u);
    ctx->pc = 0x12D53Cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1252C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001252C0_0x1252c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D540u; }
    }
    if (ctx->pc != 0x12D540u) { return; }
    ctx->pc = 0x12D540u;
label_12d540:
    // 0x12d540: 0x8e440034
    ctx->pc = 0x12d540u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_12d544:
    // 0x12d544: 0x8e46002c
    ctx->pc = 0x12d544u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_12d548:
    // 0x12d548: 0x2048023
    ctx->pc = 0x12d548u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_12d54c:
    // 0x12d54c: 0x8e450030
    ctx->pc = 0x12d54cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_12d550:
    // 0x12d550: 0x50182a
    ctx->pc = 0x12d550u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
label_12d554:
    // 0x12d554: 0xdfb10008
    ctx->pc = 0x12d554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12d558:
    // 0x12d558: 0x43800b
    ctx->pc = 0x12d558u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
label_12d55c:
    // 0x12d55c: 0xb32821
    ctx->pc = 0x12d55cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_12d560:
    // 0x12d560: 0x902021
    ctx->pc = 0x12d560u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_12d564:
    // 0x12d564: 0xd03021
    ctx->pc = 0x12d564u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_12d568:
    // 0x12d568: 0xae440034
    ctx->pc = 0x12d568u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 4));
label_12d56c:
    // 0x12d56c: 0xae46002c
    ctx->pc = 0x12d56cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 6));
label_12d570:
    // 0x12d570: 0xae450030
    ctx->pc = 0x12d570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 5));
label_12d574:
    // 0x12d574: 0xdfb00000
    ctx->pc = 0x12d574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12d578:
    // 0x12d578: 0xdfb20010
    ctx->pc = 0x12d578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12d57c:
    // 0x12d57c: 0xdfb30018
    ctx->pc = 0x12d57cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_12d580:
    // 0x12d580: 0xdfbf0020
    ctx->pc = 0x12d580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12d584:
    // 0x12d584: 0x3e00008
label_12d588:
    if (ctx->pc == 0x12D588u) {
        ctx->pc = 0x12D588u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x12D58Cu;
        goto label_12d58c;
    }
    ctx->pc = 0x12D584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D588u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D338u: goto label_12d338;
            case 0x12D33Cu: goto label_12d33c;
            case 0x12D340u: goto label_12d340;
            case 0x12D344u: goto label_12d344;
            case 0x12D348u: goto label_12d348;
            case 0x12D34Cu: goto label_12d34c;
            case 0x12D350u: goto label_12d350;
            case 0x12D354u: goto label_12d354;
            case 0x12D358u: goto label_12d358;
            case 0x12D35Cu: goto label_12d35c;
            case 0x12D360u: goto label_12d360;
            case 0x12D364u: goto label_12d364;
            case 0x12D368u: goto label_12d368;
            case 0x12D36Cu: goto label_12d36c;
            case 0x12D370u: goto label_12d370;
            case 0x12D374u: goto label_12d374;
            case 0x12D378u: goto label_12d378;
            case 0x12D37Cu: goto label_12d37c;
            case 0x12D380u: goto label_12d380;
            case 0x12D384u: goto label_12d384;
            case 0x12D388u: goto label_12d388;
            case 0x12D38Cu: goto label_12d38c;
            case 0x12D390u: goto label_12d390;
            case 0x12D394u: goto label_12d394;
            case 0x12D398u: goto label_12d398;
            case 0x12D39Cu: goto label_12d39c;
            case 0x12D3A0u: goto label_12d3a0;
            case 0x12D3A4u: goto label_12d3a4;
            case 0x12D3A8u: goto label_12d3a8;
            case 0x12D3ACu: goto label_12d3ac;
            case 0x12D3B0u: goto label_12d3b0;
            case 0x12D3B4u: goto label_12d3b4;
            case 0x12D3B8u: goto label_12d3b8;
            case 0x12D3BCu: goto label_12d3bc;
            case 0x12D3C0u: goto label_12d3c0;
            case 0x12D3C4u: goto label_12d3c4;
            case 0x12D3C8u: goto label_12d3c8;
            case 0x12D3CCu: goto label_12d3cc;
            case 0x12D3D0u: goto label_12d3d0;
            case 0x12D3D4u: goto label_12d3d4;
            case 0x12D3D8u: goto label_12d3d8;
            case 0x12D3DCu: goto label_12d3dc;
            case 0x12D3E0u: goto label_12d3e0;
            case 0x12D3E4u: goto label_12d3e4;
            case 0x12D3E8u: goto label_12d3e8;
            case 0x12D3ECu: goto label_12d3ec;
            case 0x12D3F0u: goto label_12d3f0;
            case 0x12D3F4u: goto label_12d3f4;
            case 0x12D3F8u: goto label_12d3f8;
            case 0x12D3FCu: goto label_12d3fc;
            case 0x12D400u: goto label_12d400;
            case 0x12D404u: goto label_12d404;
            case 0x12D408u: goto label_12d408;
            case 0x12D40Cu: goto label_12d40c;
            case 0x12D410u: goto label_12d410;
            case 0x12D414u: goto label_12d414;
            case 0x12D418u: goto label_12d418;
            case 0x12D41Cu: goto label_12d41c;
            case 0x12D420u: goto label_12d420;
            case 0x12D424u: goto label_12d424;
            case 0x12D428u: goto label_12d428;
            case 0x12D42Cu: goto label_12d42c;
            case 0x12D430u: goto label_12d430;
            case 0x12D434u: goto label_12d434;
            case 0x12D438u: goto label_12d438;
            case 0x12D43Cu: goto label_12d43c;
            case 0x12D440u: goto label_12d440;
            case 0x12D444u: goto label_12d444;
            case 0x12D448u: goto label_12d448;
            case 0x12D44Cu: goto label_12d44c;
            case 0x12D450u: goto label_12d450;
            case 0x12D454u: goto label_12d454;
            case 0x12D458u: goto label_12d458;
            case 0x12D45Cu: goto label_12d45c;
            case 0x12D460u: goto label_12d460;
            case 0x12D464u: goto label_12d464;
            case 0x12D468u: goto label_12d468;
            case 0x12D46Cu: goto label_12d46c;
            case 0x12D470u: goto label_12d470;
            case 0x12D474u: goto label_12d474;
            case 0x12D478u: goto label_12d478;
            case 0x12D47Cu: goto label_12d47c;
            case 0x12D480u: goto label_12d480;
            case 0x12D484u: goto label_12d484;
            case 0x12D488u: goto label_12d488;
            case 0x12D48Cu: goto label_12d48c;
            case 0x12D490u: goto label_12d490;
            case 0x12D494u: goto label_12d494;
            case 0x12D498u: goto label_12d498;
            case 0x12D49Cu: goto label_12d49c;
            case 0x12D4A0u: goto label_12d4a0;
            case 0x12D4A4u: goto label_12d4a4;
            case 0x12D4A8u: goto label_12d4a8;
            case 0x12D4ACu: goto label_12d4ac;
            case 0x12D4B0u: goto label_12d4b0;
            case 0x12D4B4u: goto label_12d4b4;
            case 0x12D4B8u: goto label_12d4b8;
            case 0x12D4BCu: goto label_12d4bc;
            case 0x12D4C0u: goto label_12d4c0;
            case 0x12D4C4u: goto label_12d4c4;
            case 0x12D4C8u: goto label_12d4c8;
            case 0x12D4CCu: goto label_12d4cc;
            case 0x12D4D0u: goto label_12d4d0;
            case 0x12D4D4u: goto label_12d4d4;
            case 0x12D4D8u: goto label_12d4d8;
            case 0x12D4DCu: goto label_12d4dc;
            case 0x12D4E0u: goto label_12d4e0;
            case 0x12D4E4u: goto label_12d4e4;
            case 0x12D4E8u: goto label_12d4e8;
            case 0x12D4ECu: goto label_12d4ec;
            case 0x12D4F0u: goto label_12d4f0;
            case 0x12D4F4u: goto label_12d4f4;
            case 0x12D4F8u: goto label_12d4f8;
            case 0x12D4FCu: goto label_12d4fc;
            case 0x12D500u: goto label_12d500;
            case 0x12D504u: goto label_12d504;
            case 0x12D508u: goto label_12d508;
            case 0x12D50Cu: goto label_12d50c;
            case 0x12D510u: goto label_12d510;
            case 0x12D514u: goto label_12d514;
            case 0x12D518u: goto label_12d518;
            case 0x12D51Cu: goto label_12d51c;
            case 0x12D520u: goto label_12d520;
            case 0x12D524u: goto label_12d524;
            case 0x12D528u: goto label_12d528;
            case 0x12D52Cu: goto label_12d52c;
            case 0x12D530u: goto label_12d530;
            case 0x12D534u: goto label_12d534;
            case 0x12D538u: goto label_12d538;
            case 0x12D53Cu: goto label_12d53c;
            case 0x12D540u: goto label_12d540;
            case 0x12D544u: goto label_12d544;
            case 0x12D548u: goto label_12d548;
            case 0x12D54Cu: goto label_12d54c;
            case 0x12D550u: goto label_12d550;
            case 0x12D554u: goto label_12d554;
            case 0x12D558u: goto label_12d558;
            case 0x12D55Cu: goto label_12d55c;
            case 0x12D560u: goto label_12d560;
            case 0x12D564u: goto label_12d564;
            case 0x12D568u: goto label_12d568;
            case 0x12D56Cu: goto label_12d56c;
            case 0x12D570u: goto label_12d570;
            case 0x12D574u: goto label_12d574;
            case 0x12D578u: goto label_12d578;
            case 0x12D57Cu: goto label_12d57c;
            case 0x12D580u: goto label_12d580;
            case 0x12D584u: goto label_12d584;
            case 0x12D588u: goto label_12d588;
            case 0x12D58Cu: goto label_12d58c;
            case 0x12D590u: goto label_12d590;
            case 0x12D594u: goto label_12d594;
            case 0x12D598u: goto label_12d598;
            case 0x12D59Cu: goto label_12d59c;
            case 0x12D5A0u: goto label_12d5a0;
            case 0x12D5A4u: goto label_12d5a4;
            case 0x12D5A8u: goto label_12d5a8;
            case 0x12D5ACu: goto label_12d5ac;
            case 0x12D5B0u: goto label_12d5b0;
            case 0x12D5B4u: goto label_12d5b4;
            case 0x12D5B8u: goto label_12d5b8;
            case 0x12D5BCu: goto label_12d5bc;
            case 0x12D5C0u: goto label_12d5c0;
            case 0x12D5C4u: goto label_12d5c4;
            case 0x12D5C8u: goto label_12d5c8;
            case 0x12D5CCu: goto label_12d5cc;
            case 0x12D5D0u: goto label_12d5d0;
            case 0x12D5D4u: goto label_12d5d4;
            case 0x12D5D8u: goto label_12d5d8;
            case 0x12D5DCu: goto label_12d5dc;
            case 0x12D5E0u: goto label_12d5e0;
            case 0x12D5E4u: goto label_12d5e4;
            case 0x12D5E8u: goto label_12d5e8;
            case 0x12D5ECu: goto label_12d5ec;
            case 0x12D5F0u: goto label_12d5f0;
            case 0x12D5F4u: goto label_12d5f4;
            case 0x12D5F8u: goto label_12d5f8;
            case 0x12D5FCu: goto label_12d5fc;
            case 0x12D600u: goto label_12d600;
            case 0x12D604u: goto label_12d604;
            case 0x12D608u: goto label_12d608;
            case 0x12D60Cu: goto label_12d60c;
            case 0x12D610u: goto label_12d610;
            case 0x12D614u: goto label_12d614;
            case 0x12D618u: goto label_12d618;
            case 0x12D61Cu: goto label_12d61c;
            case 0x12D620u: goto label_12d620;
            case 0x12D624u: goto label_12d624;
            case 0x12D628u: goto label_12d628;
            case 0x12D62Cu: goto label_12d62c;
            case 0x12D630u: goto label_12d630;
            case 0x12D634u: goto label_12d634;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12D58Cu;
label_12d58c:
    // 0x12d58c: 0x0
    ctx->pc = 0x12d58cu;
    // NOP
label_12d590:
    // 0x12d590: 0x27bdffe0
    ctx->pc = 0x12d590u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_12d594:
    // 0x12d594: 0xffb10008
    ctx->pc = 0x12d594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_12d598:
    // 0x12d598: 0x80882d
    ctx->pc = 0x12d598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12d59c:
    // 0x12d59c: 0xffb00000
    ctx->pc = 0x12d59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12d5a0:
    // 0x12d5a0: 0xffbf0010
    ctx->pc = 0x12d5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_12d5a4:
    // 0x12d5a4: 0x8e300004
    ctx->pc = 0x12d5a4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12d5a8:
    // 0x12d5a8: 0xc049468
label_12d5ac:
    if (ctx->pc == 0x12D5ACu) {
        ctx->pc = 0x12D5ACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D5B0u;
        goto label_12d5b0;
    }
    ctx->pc = 0x12D5A8u;
    SET_GPR_U32(ctx, 31, 0x12D5B0u);
    ctx->pc = 0x12D5ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1251A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001251A0_0x1251a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D5B0u; }
    }
    if (ctx->pc != 0x12D5B0u) { return; }
    ctx->pc = 0x12D5B0u;
label_12d5b0:
    // 0x12d5b0: 0x14400003
label_12d5b4:
    if (ctx->pc == 0x12D5B4u) {
        ctx->pc = 0x12D5B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D5B8u;
        goto label_12d5b8;
    }
    ctx->pc = 0x12D5B0u;
    {
        const bool branch_taken_0x12d5b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D5B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12d5b0) {
            ctx->pc = 0x12D5C0u;
            goto label_12d5c0;
        }
    }
    ctx->pc = 0x12D5B8u;
label_12d5b8:
    // 0x12d5b8: 0xc04b3f6
label_12d5bc:
    if (ctx->pc == 0x12D5BCu) {
        ctx->pc = 0x12D5C0u;
        goto label_12d5c0;
    }
    ctx->pc = 0x12D5B8u;
    SET_GPR_U32(ctx, 31, 0x12D5C0u);
    ctx->pc = 0x12CFD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012CFD8_0x12cfd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D5C0u; }
    }
    if (ctx->pc != 0x12D5C0u) { return; }
    ctx->pc = 0x12D5C0u;
label_12d5c0:
    // 0x12d5c0: 0xc0495da
label_12d5c4:
    if (ctx->pc == 0x12D5C4u) {
        ctx->pc = 0x12D5C4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D5C8u;
        goto label_12d5c8;
    }
    ctx->pc = 0x12D5C0u;
    SET_GPR_U32(ctx, 31, 0x12D5C8u);
    ctx->pc = 0x12D5C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x125768u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00125768_0x125768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D5C8u; }
    }
    if (ctx->pc != 0x12D5C8u) { return; }
    ctx->pc = 0x12D5C8u;
label_12d5c8:
    // 0x12d5c8: 0xc049468
label_12d5cc:
    if (ctx->pc == 0x12D5CCu) {
        ctx->pc = 0x12D5CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D5D0u;
        goto label_12d5d0;
    }
    ctx->pc = 0x12D5C8u;
    SET_GPR_U32(ctx, 31, 0x12D5D0u);
    ctx->pc = 0x12D5CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1251A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001251A0_0x1251a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D5D0u; }
    }
    if (ctx->pc != 0x12D5D0u) { return; }
    ctx->pc = 0x12D5D0u;
label_12d5d0:
    // 0x12d5d0: 0x24030003
    ctx->pc = 0x12d5d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_12d5d4:
    // 0x12d5d4: 0x14430003
label_12d5d8:
    if (ctx->pc == 0x12D5D8u) {
        ctx->pc = 0x12D5D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D5DCu;
        goto label_12d5dc;
    }
    ctx->pc = 0x12D5D4u;
    {
        const bool branch_taken_0x12d5d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x12D5D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12d5d4) {
            ctx->pc = 0x12D5E4u;
            goto label_12d5e4;
        }
    }
    ctx->pc = 0x12D5DCu;
label_12d5dc:
    // 0x12d5dc: 0xc04b4ce
label_12d5e0:
    if (ctx->pc == 0x12D5E0u) {
        ctx->pc = 0x12D5E4u;
        goto label_12d5e4;
    }
    ctx->pc = 0x12D5DCu;
    SET_GPR_U32(ctx, 31, 0x12D5E4u);
    ctx->pc = 0x12D338u;
    goto label_12d338;
    ctx->pc = 0x12D5E4u;
label_12d5e4:
    // 0x12d5e4: 0x86040098
    ctx->pc = 0x12d5e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
label_12d5e8:
    // 0x12d5e8: 0x2402000a
    ctx->pc = 0x12d5e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
label_12d5ec:
    // 0x12d5ec: 0x10820007
label_12d5f0:
    if (ctx->pc == 0x12D5F0u) {
        ctx->pc = 0x12D5F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x12D5F4u;
        goto label_12d5f4;
    }
    ctx->pc = 0x12D5ECu;
    {
        const bool branch_taken_0x12d5ec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x12D5F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
        if (branch_taken_0x12d5ec) {
            ctx->pc = 0x12D60Cu;
            goto label_12d60c;
        }
    }
    ctx->pc = 0x12D5F4u;
label_12d5f4:
    // 0x12d5f4: 0x10820005
label_12d5f8:
    if (ctx->pc == 0x12D5F8u) {
        ctx->pc = 0x12D5F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x12D5FCu;
        goto label_12d5fc;
    }
    ctx->pc = 0x12D5F4u;
    {
        const bool branch_taken_0x12d5f4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x12D5F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
        if (branch_taken_0x12d5f4) {
            ctx->pc = 0x12D60Cu;
            goto label_12d60c;
        }
    }
    ctx->pc = 0x12D5FCu;
label_12d5fc:
    // 0x12d5fc: 0x10820003
label_12d600:
    if (ctx->pc == 0x12D600u) {
        ctx->pc = 0x12D600u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x12D604u;
        goto label_12d604;
    }
    ctx->pc = 0x12D5FCu;
    {
        const bool branch_taken_0x12d5fc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x12D600u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x12d5fc) {
            ctx->pc = 0x12D60Cu;
            goto label_12d60c;
        }
    }
    ctx->pc = 0x12D604u;
label_12d604:
    // 0x12d604: 0x14820008
label_12d608:
    if (ctx->pc == 0x12D608u) {
        ctx->pc = 0x12D608u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x12D60Cu;
        goto label_12d60c;
    }
    ctx->pc = 0x12D604u;
    {
        const bool branch_taken_0x12d604 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x12D608u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x12d604) {
            ctx->pc = 0x12D628u;
            goto label_12d628;
        }
    }
    ctx->pc = 0x12D60Cu;
label_12d60c:
    // 0x12d60c: 0x220202d
    ctx->pc = 0x12d60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12d610:
    // 0x12d610: 0xdfb10008
    ctx->pc = 0x12d610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12d614:
    // 0x12d614: 0xdfb00000
    ctx->pc = 0x12d614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12d618:
    // 0x12d618: 0xdfbf0010
    ctx->pc = 0x12d618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12d61c:
    // 0x12d61c: 0x804b540
label_12d620:
    if (ctx->pc == 0x12D620u) {
        ctx->pc = 0x12D620u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12D624u;
        goto label_12d624;
    }
    ctx->pc = 0x12D61Cu;
    ctx->pc = 0x12D620u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x12D500u;
    goto label_12d500;
    ctx->pc = 0x12D624u;
label_12d624:
    // 0x12d624: 0x0
    ctx->pc = 0x12d624u;
    // NOP
label_12d628:
    // 0x12d628: 0xdfb10008
    ctx->pc = 0x12d628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12d62c:
    // 0x12d62c: 0xdfbf0010
    ctx->pc = 0x12d62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12d630:
    // 0x12d630: 0x3e00008
label_12d634:
    if (ctx->pc == 0x12D634u) {
        ctx->pc = 0x12D634u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12D638u;
        goto label_fallthrough_0x12d630;
    }
    ctx->pc = 0x12D630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D634u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D338u: goto label_12d338;
            case 0x12D33Cu: goto label_12d33c;
            case 0x12D340u: goto label_12d340;
            case 0x12D344u: goto label_12d344;
            case 0x12D348u: goto label_12d348;
            case 0x12D34Cu: goto label_12d34c;
            case 0x12D350u: goto label_12d350;
            case 0x12D354u: goto label_12d354;
            case 0x12D358u: goto label_12d358;
            case 0x12D35Cu: goto label_12d35c;
            case 0x12D360u: goto label_12d360;
            case 0x12D364u: goto label_12d364;
            case 0x12D368u: goto label_12d368;
            case 0x12D36Cu: goto label_12d36c;
            case 0x12D370u: goto label_12d370;
            case 0x12D374u: goto label_12d374;
            case 0x12D378u: goto label_12d378;
            case 0x12D37Cu: goto label_12d37c;
            case 0x12D380u: goto label_12d380;
            case 0x12D384u: goto label_12d384;
            case 0x12D388u: goto label_12d388;
            case 0x12D38Cu: goto label_12d38c;
            case 0x12D390u: goto label_12d390;
            case 0x12D394u: goto label_12d394;
            case 0x12D398u: goto label_12d398;
            case 0x12D39Cu: goto label_12d39c;
            case 0x12D3A0u: goto label_12d3a0;
            case 0x12D3A4u: goto label_12d3a4;
            case 0x12D3A8u: goto label_12d3a8;
            case 0x12D3ACu: goto label_12d3ac;
            case 0x12D3B0u: goto label_12d3b0;
            case 0x12D3B4u: goto label_12d3b4;
            case 0x12D3B8u: goto label_12d3b8;
            case 0x12D3BCu: goto label_12d3bc;
            case 0x12D3C0u: goto label_12d3c0;
            case 0x12D3C4u: goto label_12d3c4;
            case 0x12D3C8u: goto label_12d3c8;
            case 0x12D3CCu: goto label_12d3cc;
            case 0x12D3D0u: goto label_12d3d0;
            case 0x12D3D4u: goto label_12d3d4;
            case 0x12D3D8u: goto label_12d3d8;
            case 0x12D3DCu: goto label_12d3dc;
            case 0x12D3E0u: goto label_12d3e0;
            case 0x12D3E4u: goto label_12d3e4;
            case 0x12D3E8u: goto label_12d3e8;
            case 0x12D3ECu: goto label_12d3ec;
            case 0x12D3F0u: goto label_12d3f0;
            case 0x12D3F4u: goto label_12d3f4;
            case 0x12D3F8u: goto label_12d3f8;
            case 0x12D3FCu: goto label_12d3fc;
            case 0x12D400u: goto label_12d400;
            case 0x12D404u: goto label_12d404;
            case 0x12D408u: goto label_12d408;
            case 0x12D40Cu: goto label_12d40c;
            case 0x12D410u: goto label_12d410;
            case 0x12D414u: goto label_12d414;
            case 0x12D418u: goto label_12d418;
            case 0x12D41Cu: goto label_12d41c;
            case 0x12D420u: goto label_12d420;
            case 0x12D424u: goto label_12d424;
            case 0x12D428u: goto label_12d428;
            case 0x12D42Cu: goto label_12d42c;
            case 0x12D430u: goto label_12d430;
            case 0x12D434u: goto label_12d434;
            case 0x12D438u: goto label_12d438;
            case 0x12D43Cu: goto label_12d43c;
            case 0x12D440u: goto label_12d440;
            case 0x12D444u: goto label_12d444;
            case 0x12D448u: goto label_12d448;
            case 0x12D44Cu: goto label_12d44c;
            case 0x12D450u: goto label_12d450;
            case 0x12D454u: goto label_12d454;
            case 0x12D458u: goto label_12d458;
            case 0x12D45Cu: goto label_12d45c;
            case 0x12D460u: goto label_12d460;
            case 0x12D464u: goto label_12d464;
            case 0x12D468u: goto label_12d468;
            case 0x12D46Cu: goto label_12d46c;
            case 0x12D470u: goto label_12d470;
            case 0x12D474u: goto label_12d474;
            case 0x12D478u: goto label_12d478;
            case 0x12D47Cu: goto label_12d47c;
            case 0x12D480u: goto label_12d480;
            case 0x12D484u: goto label_12d484;
            case 0x12D488u: goto label_12d488;
            case 0x12D48Cu: goto label_12d48c;
            case 0x12D490u: goto label_12d490;
            case 0x12D494u: goto label_12d494;
            case 0x12D498u: goto label_12d498;
            case 0x12D49Cu: goto label_12d49c;
            case 0x12D4A0u: goto label_12d4a0;
            case 0x12D4A4u: goto label_12d4a4;
            case 0x12D4A8u: goto label_12d4a8;
            case 0x12D4ACu: goto label_12d4ac;
            case 0x12D4B0u: goto label_12d4b0;
            case 0x12D4B4u: goto label_12d4b4;
            case 0x12D4B8u: goto label_12d4b8;
            case 0x12D4BCu: goto label_12d4bc;
            case 0x12D4C0u: goto label_12d4c0;
            case 0x12D4C4u: goto label_12d4c4;
            case 0x12D4C8u: goto label_12d4c8;
            case 0x12D4CCu: goto label_12d4cc;
            case 0x12D4D0u: goto label_12d4d0;
            case 0x12D4D4u: goto label_12d4d4;
            case 0x12D4D8u: goto label_12d4d8;
            case 0x12D4DCu: goto label_12d4dc;
            case 0x12D4E0u: goto label_12d4e0;
            case 0x12D4E4u: goto label_12d4e4;
            case 0x12D4E8u: goto label_12d4e8;
            case 0x12D4ECu: goto label_12d4ec;
            case 0x12D4F0u: goto label_12d4f0;
            case 0x12D4F4u: goto label_12d4f4;
            case 0x12D4F8u: goto label_12d4f8;
            case 0x12D4FCu: goto label_12d4fc;
            case 0x12D500u: goto label_12d500;
            case 0x12D504u: goto label_12d504;
            case 0x12D508u: goto label_12d508;
            case 0x12D50Cu: goto label_12d50c;
            case 0x12D510u: goto label_12d510;
            case 0x12D514u: goto label_12d514;
            case 0x12D518u: goto label_12d518;
            case 0x12D51Cu: goto label_12d51c;
            case 0x12D520u: goto label_12d520;
            case 0x12D524u: goto label_12d524;
            case 0x12D528u: goto label_12d528;
            case 0x12D52Cu: goto label_12d52c;
            case 0x12D530u: goto label_12d530;
            case 0x12D534u: goto label_12d534;
            case 0x12D538u: goto label_12d538;
            case 0x12D53Cu: goto label_12d53c;
            case 0x12D540u: goto label_12d540;
            case 0x12D544u: goto label_12d544;
            case 0x12D548u: goto label_12d548;
            case 0x12D54Cu: goto label_12d54c;
            case 0x12D550u: goto label_12d550;
            case 0x12D554u: goto label_12d554;
            case 0x12D558u: goto label_12d558;
            case 0x12D55Cu: goto label_12d55c;
            case 0x12D560u: goto label_12d560;
            case 0x12D564u: goto label_12d564;
            case 0x12D568u: goto label_12d568;
            case 0x12D56Cu: goto label_12d56c;
            case 0x12D570u: goto label_12d570;
            case 0x12D574u: goto label_12d574;
            case 0x12D578u: goto label_12d578;
            case 0x12D57Cu: goto label_12d57c;
            case 0x12D580u: goto label_12d580;
            case 0x12D584u: goto label_12d584;
            case 0x12D588u: goto label_12d588;
            case 0x12D58Cu: goto label_12d58c;
            case 0x12D590u: goto label_12d590;
            case 0x12D594u: goto label_12d594;
            case 0x12D598u: goto label_12d598;
            case 0x12D59Cu: goto label_12d59c;
            case 0x12D5A0u: goto label_12d5a0;
            case 0x12D5A4u: goto label_12d5a4;
            case 0x12D5A8u: goto label_12d5a8;
            case 0x12D5ACu: goto label_12d5ac;
            case 0x12D5B0u: goto label_12d5b0;
            case 0x12D5B4u: goto label_12d5b4;
            case 0x12D5B8u: goto label_12d5b8;
            case 0x12D5BCu: goto label_12d5bc;
            case 0x12D5C0u: goto label_12d5c0;
            case 0x12D5C4u: goto label_12d5c4;
            case 0x12D5C8u: goto label_12d5c8;
            case 0x12D5CCu: goto label_12d5cc;
            case 0x12D5D0u: goto label_12d5d0;
            case 0x12D5D4u: goto label_12d5d4;
            case 0x12D5D8u: goto label_12d5d8;
            case 0x12D5DCu: goto label_12d5dc;
            case 0x12D5E0u: goto label_12d5e0;
            case 0x12D5E4u: goto label_12d5e4;
            case 0x12D5E8u: goto label_12d5e8;
            case 0x12D5ECu: goto label_12d5ec;
            case 0x12D5F0u: goto label_12d5f0;
            case 0x12D5F4u: goto label_12d5f4;
            case 0x12D5F8u: goto label_12d5f8;
            case 0x12D5FCu: goto label_12d5fc;
            case 0x12D600u: goto label_12d600;
            case 0x12D604u: goto label_12d604;
            case 0x12D608u: goto label_12d608;
            case 0x12D60Cu: goto label_12d60c;
            case 0x12D610u: goto label_12d610;
            case 0x12D614u: goto label_12d614;
            case 0x12D618u: goto label_12d618;
            case 0x12D61Cu: goto label_12d61c;
            case 0x12D620u: goto label_12d620;
            case 0x12D624u: goto label_12d624;
            case 0x12D628u: goto label_12d628;
            case 0x12D62Cu: goto label_12d62c;
            case 0x12D630u: goto label_12d630;
            case 0x12D634u: goto label_12d634;
            default: break;
        }
        return;
    }
label_fallthrough_0x12d630:
    ctx->pc = 0x12D638u;
}
