#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012F090
// Address: 0x12f090 - 0x12f720
void sub_0012F090_0x12f090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12f090u;

label_12f090:
    // 0x12f090: 0x27bdff90
    ctx->pc = 0x12f090u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_12f094:
    // 0x12f094: 0x3c020022
    ctx->pc = 0x12f094u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
label_12f098:
    // 0x12f098: 0xffb40040
    ctx->pc = 0x12f098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_12f09c:
    // 0x12f09c: 0x80a02d
    ctx->pc = 0x12f09cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12f0a0:
    // 0x12f0a0: 0x8c44875c
    ctx->pc = 0x12f0a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294936412)));
label_12f0a4:
    // 0x12f0a4: 0xffb00020
    ctx->pc = 0x12f0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_12f0a8:
    // 0x12f0a8: 0xffb30038
    ctx->pc = 0x12f0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_12f0ac:
    // 0x12f0ac: 0xffbe0060
    ctx->pc = 0x12f0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_12f0b0:
    // 0x12f0b0: 0xffb10028
    ctx->pc = 0x12f0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_12f0b4:
    // 0x12f0b4: 0xffb20030
    ctx->pc = 0x12f0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_12f0b8:
    // 0x12f0b8: 0xffb50048
    ctx->pc = 0x12f0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_12f0bc:
    // 0x12f0bc: 0xffb60050
    ctx->pc = 0x12f0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_12f0c0:
    // 0x12f0c0: 0xffb70058
    ctx->pc = 0x12f0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_12f0c4:
    // 0x12f0c4: 0xffbf0068
    ctx->pc = 0x12f0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_12f0c8:
    // 0x12f0c8: 0xc042c56
label_12f0cc:
    if (ctx->pc == 0x12F0CCu) {
        ctx->pc = 0x12F0CCu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F0D0u;
        goto label_12f0d0;
    }
    ctx->pc = 0x12F0C8u;
    SET_GPR_U32(ctx, 31, 0x12F0D0u);
    ctx->pc = 0x12F0CCu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F0D0u; }
    }
    if (ctx->pc != 0x12F0D0u) { return; }
    ctx->pc = 0x12F0D0u;
label_12f0d0:
    // 0x12f0d0: 0x40f02d
    ctx->pc = 0x12f0d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f0d4:
    // 0x12f0d4: 0x8e620000
    ctx->pc = 0x12f0d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_12f0d8:
    // 0x12f0d8: 0x3c067fff
    ctx->pc = 0x12f0d8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
label_12f0dc:
    // 0x12f0dc: 0x3a0382d
    ctx->pc = 0x12f0dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12f0e0:
    // 0x12f0e0: 0x8c430018
    ctx->pc = 0x12f0e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_12f0e4:
    // 0x12f0e4: 0x260202d
    ctx->pc = 0x12f0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f0e8:
    // 0x12f0e8: 0x282d
    ctx->pc = 0x12f0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f0ec:
    // 0x12f0ec: 0x60f809
label_12f0f0:
    if (ctx->pc == 0x12F0F0u) {
        ctx->pc = 0x12F0F0u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
        ctx->pc = 0x12F0F4u;
        goto label_12f0f4;
    }
    ctx->pc = 0x12F0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12F0F4u);
        ctx->pc = 0x12F0F0u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F090u: goto label_12f090;
            case 0x12F094u: goto label_12f094;
            case 0x12F098u: goto label_12f098;
            case 0x12F09Cu: goto label_12f09c;
            case 0x12F0A0u: goto label_12f0a0;
            case 0x12F0A4u: goto label_12f0a4;
            case 0x12F0A8u: goto label_12f0a8;
            case 0x12F0ACu: goto label_12f0ac;
            case 0x12F0B0u: goto label_12f0b0;
            case 0x12F0B4u: goto label_12f0b4;
            case 0x12F0B8u: goto label_12f0b8;
            case 0x12F0BCu: goto label_12f0bc;
            case 0x12F0C0u: goto label_12f0c0;
            case 0x12F0C4u: goto label_12f0c4;
            case 0x12F0C8u: goto label_12f0c8;
            case 0x12F0CCu: goto label_12f0cc;
            case 0x12F0D0u: goto label_12f0d0;
            case 0x12F0D4u: goto label_12f0d4;
            case 0x12F0D8u: goto label_12f0d8;
            case 0x12F0DCu: goto label_12f0dc;
            case 0x12F0E0u: goto label_12f0e0;
            case 0x12F0E4u: goto label_12f0e4;
            case 0x12F0E8u: goto label_12f0e8;
            case 0x12F0ECu: goto label_12f0ec;
            case 0x12F0F0u: goto label_12f0f0;
            case 0x12F0F4u: goto label_12f0f4;
            case 0x12F0F8u: goto label_12f0f8;
            case 0x12F0FCu: goto label_12f0fc;
            case 0x12F100u: goto label_12f100;
            case 0x12F104u: goto label_12f104;
            case 0x12F108u: goto label_12f108;
            case 0x12F10Cu: goto label_12f10c;
            case 0x12F110u: goto label_12f110;
            case 0x12F114u: goto label_12f114;
            case 0x12F118u: goto label_12f118;
            case 0x12F11Cu: goto label_12f11c;
            case 0x12F120u: goto label_12f120;
            case 0x12F124u: goto label_12f124;
            case 0x12F128u: goto label_12f128;
            case 0x12F12Cu: goto label_12f12c;
            case 0x12F130u: goto label_12f130;
            case 0x12F134u: goto label_12f134;
            case 0x12F138u: goto label_12f138;
            case 0x12F13Cu: goto label_12f13c;
            case 0x12F140u: goto label_12f140;
            case 0x12F144u: goto label_12f144;
            case 0x12F148u: goto label_12f148;
            case 0x12F14Cu: goto label_12f14c;
            case 0x12F150u: goto label_12f150;
            case 0x12F154u: goto label_12f154;
            case 0x12F158u: goto label_12f158;
            case 0x12F15Cu: goto label_12f15c;
            case 0x12F160u: goto label_12f160;
            case 0x12F164u: goto label_12f164;
            case 0x12F168u: goto label_12f168;
            case 0x12F16Cu: goto label_12f16c;
            case 0x12F170u: goto label_12f170;
            case 0x12F174u: goto label_12f174;
            case 0x12F178u: goto label_12f178;
            case 0x12F17Cu: goto label_12f17c;
            case 0x12F180u: goto label_12f180;
            case 0x12F184u: goto label_12f184;
            case 0x12F188u: goto label_12f188;
            case 0x12F18Cu: goto label_12f18c;
            case 0x12F190u: goto label_12f190;
            case 0x12F194u: goto label_12f194;
            case 0x12F198u: goto label_12f198;
            case 0x12F19Cu: goto label_12f19c;
            case 0x12F1A0u: goto label_12f1a0;
            case 0x12F1A4u: goto label_12f1a4;
            case 0x12F1A8u: goto label_12f1a8;
            case 0x12F1ACu: goto label_12f1ac;
            case 0x12F1B0u: goto label_12f1b0;
            case 0x12F1B4u: goto label_12f1b4;
            case 0x12F1B8u: goto label_12f1b8;
            case 0x12F1BCu: goto label_12f1bc;
            case 0x12F1C0u: goto label_12f1c0;
            case 0x12F1C4u: goto label_12f1c4;
            case 0x12F1C8u: goto label_12f1c8;
            case 0x12F1CCu: goto label_12f1cc;
            case 0x12F1D0u: goto label_12f1d0;
            case 0x12F1D4u: goto label_12f1d4;
            case 0x12F1D8u: goto label_12f1d8;
            case 0x12F1DCu: goto label_12f1dc;
            case 0x12F1E0u: goto label_12f1e0;
            case 0x12F1E4u: goto label_12f1e4;
            case 0x12F1E8u: goto label_12f1e8;
            case 0x12F1ECu: goto label_12f1ec;
            case 0x12F1F0u: goto label_12f1f0;
            case 0x12F1F4u: goto label_12f1f4;
            case 0x12F1F8u: goto label_12f1f8;
            case 0x12F1FCu: goto label_12f1fc;
            case 0x12F200u: goto label_12f200;
            case 0x12F204u: goto label_12f204;
            case 0x12F208u: goto label_12f208;
            case 0x12F20Cu: goto label_12f20c;
            case 0x12F210u: goto label_12f210;
            case 0x12F214u: goto label_12f214;
            case 0x12F218u: goto label_12f218;
            case 0x12F21Cu: goto label_12f21c;
            case 0x12F220u: goto label_12f220;
            case 0x12F224u: goto label_12f224;
            case 0x12F228u: goto label_12f228;
            case 0x12F22Cu: goto label_12f22c;
            case 0x12F230u: goto label_12f230;
            case 0x12F234u: goto label_12f234;
            case 0x12F238u: goto label_12f238;
            case 0x12F23Cu: goto label_12f23c;
            case 0x12F240u: goto label_12f240;
            case 0x12F244u: goto label_12f244;
            case 0x12F248u: goto label_12f248;
            case 0x12F24Cu: goto label_12f24c;
            case 0x12F250u: goto label_12f250;
            case 0x12F254u: goto label_12f254;
            case 0x12F258u: goto label_12f258;
            case 0x12F25Cu: goto label_12f25c;
            case 0x12F260u: goto label_12f260;
            case 0x12F264u: goto label_12f264;
            case 0x12F268u: goto label_12f268;
            case 0x12F26Cu: goto label_12f26c;
            case 0x12F270u: goto label_12f270;
            case 0x12F274u: goto label_12f274;
            case 0x12F278u: goto label_12f278;
            case 0x12F27Cu: goto label_12f27c;
            case 0x12F280u: goto label_12f280;
            case 0x12F284u: goto label_12f284;
            case 0x12F288u: goto label_12f288;
            case 0x12F28Cu: goto label_12f28c;
            case 0x12F290u: goto label_12f290;
            case 0x12F294u: goto label_12f294;
            case 0x12F298u: goto label_12f298;
            case 0x12F29Cu: goto label_12f29c;
            case 0x12F2A0u: goto label_12f2a0;
            case 0x12F2A4u: goto label_12f2a4;
            case 0x12F2A8u: goto label_12f2a8;
            case 0x12F2ACu: goto label_12f2ac;
            case 0x12F2B0u: goto label_12f2b0;
            case 0x12F2B4u: goto label_12f2b4;
            case 0x12F2B8u: goto label_12f2b8;
            case 0x12F2BCu: goto label_12f2bc;
            case 0x12F2C0u: goto label_12f2c0;
            case 0x12F2C4u: goto label_12f2c4;
            case 0x12F2C8u: goto label_12f2c8;
            case 0x12F2CCu: goto label_12f2cc;
            case 0x12F2D0u: goto label_12f2d0;
            case 0x12F2D4u: goto label_12f2d4;
            case 0x12F2D8u: goto label_12f2d8;
            case 0x12F2DCu: goto label_12f2dc;
            case 0x12F2E0u: goto label_12f2e0;
            case 0x12F2E4u: goto label_12f2e4;
            case 0x12F2E8u: goto label_12f2e8;
            case 0x12F2ECu: goto label_12f2ec;
            case 0x12F2F0u: goto label_12f2f0;
            case 0x12F2F4u: goto label_12f2f4;
            case 0x12F2F8u: goto label_12f2f8;
            case 0x12F2FCu: goto label_12f2fc;
            case 0x12F300u: goto label_12f300;
            case 0x12F304u: goto label_12f304;
            case 0x12F308u: goto label_12f308;
            case 0x12F30Cu: goto label_12f30c;
            case 0x12F310u: goto label_12f310;
            case 0x12F314u: goto label_12f314;
            case 0x12F318u: goto label_12f318;
            case 0x12F31Cu: goto label_12f31c;
            case 0x12F320u: goto label_12f320;
            case 0x12F324u: goto label_12f324;
            case 0x12F328u: goto label_12f328;
            case 0x12F32Cu: goto label_12f32c;
            case 0x12F330u: goto label_12f330;
            case 0x12F334u: goto label_12f334;
            case 0x12F338u: goto label_12f338;
            case 0x12F33Cu: goto label_12f33c;
            case 0x12F340u: goto label_12f340;
            case 0x12F344u: goto label_12f344;
            case 0x12F348u: goto label_12f348;
            case 0x12F34Cu: goto label_12f34c;
            case 0x12F350u: goto label_12f350;
            case 0x12F354u: goto label_12f354;
            case 0x12F358u: goto label_12f358;
            case 0x12F35Cu: goto label_12f35c;
            case 0x12F360u: goto label_12f360;
            case 0x12F364u: goto label_12f364;
            case 0x12F368u: goto label_12f368;
            case 0x12F36Cu: goto label_12f36c;
            case 0x12F370u: goto label_12f370;
            case 0x12F374u: goto label_12f374;
            case 0x12F378u: goto label_12f378;
            case 0x12F37Cu: goto label_12f37c;
            case 0x12F380u: goto label_12f380;
            case 0x12F384u: goto label_12f384;
            case 0x12F388u: goto label_12f388;
            case 0x12F38Cu: goto label_12f38c;
            case 0x12F390u: goto label_12f390;
            case 0x12F394u: goto label_12f394;
            case 0x12F398u: goto label_12f398;
            case 0x12F39Cu: goto label_12f39c;
            case 0x12F3A0u: goto label_12f3a0;
            case 0x12F3A4u: goto label_12f3a4;
            case 0x12F3A8u: goto label_12f3a8;
            case 0x12F3ACu: goto label_12f3ac;
            case 0x12F3B0u: goto label_12f3b0;
            case 0x12F3B4u: goto label_12f3b4;
            case 0x12F3B8u: goto label_12f3b8;
            case 0x12F3BCu: goto label_12f3bc;
            case 0x12F3C0u: goto label_12f3c0;
            case 0x12F3C4u: goto label_12f3c4;
            case 0x12F3C8u: goto label_12f3c8;
            case 0x12F3CCu: goto label_12f3cc;
            case 0x12F3D0u: goto label_12f3d0;
            case 0x12F3D4u: goto label_12f3d4;
            case 0x12F3D8u: goto label_12f3d8;
            case 0x12F3DCu: goto label_12f3dc;
            case 0x12F3E0u: goto label_12f3e0;
            case 0x12F3E4u: goto label_12f3e4;
            case 0x12F3E8u: goto label_12f3e8;
            case 0x12F3ECu: goto label_12f3ec;
            case 0x12F3F0u: goto label_12f3f0;
            case 0x12F3F4u: goto label_12f3f4;
            case 0x12F3F8u: goto label_12f3f8;
            case 0x12F3FCu: goto label_12f3fc;
            case 0x12F400u: goto label_12f400;
            case 0x12F404u: goto label_12f404;
            case 0x12F408u: goto label_12f408;
            case 0x12F40Cu: goto label_12f40c;
            case 0x12F410u: goto label_12f410;
            case 0x12F414u: goto label_12f414;
            case 0x12F418u: goto label_12f418;
            case 0x12F41Cu: goto label_12f41c;
            case 0x12F420u: goto label_12f420;
            case 0x12F424u: goto label_12f424;
            case 0x12F428u: goto label_12f428;
            case 0x12F42Cu: goto label_12f42c;
            case 0x12F430u: goto label_12f430;
            case 0x12F434u: goto label_12f434;
            case 0x12F438u: goto label_12f438;
            case 0x12F43Cu: goto label_12f43c;
            case 0x12F440u: goto label_12f440;
            case 0x12F444u: goto label_12f444;
            case 0x12F448u: goto label_12f448;
            case 0x12F44Cu: goto label_12f44c;
            case 0x12F450u: goto label_12f450;
            case 0x12F454u: goto label_12f454;
            case 0x12F458u: goto label_12f458;
            case 0x12F45Cu: goto label_12f45c;
            case 0x12F460u: goto label_12f460;
            case 0x12F464u: goto label_12f464;
            case 0x12F468u: goto label_12f468;
            case 0x12F46Cu: goto label_12f46c;
            case 0x12F470u: goto label_12f470;
            case 0x12F474u: goto label_12f474;
            case 0x12F478u: goto label_12f478;
            case 0x12F47Cu: goto label_12f47c;
            case 0x12F480u: goto label_12f480;
            case 0x12F484u: goto label_12f484;
            case 0x12F488u: goto label_12f488;
            case 0x12F48Cu: goto label_12f48c;
            case 0x12F490u: goto label_12f490;
            case 0x12F494u: goto label_12f494;
            case 0x12F498u: goto label_12f498;
            case 0x12F49Cu: goto label_12f49c;
            case 0x12F4A0u: goto label_12f4a0;
            case 0x12F4A4u: goto label_12f4a4;
            case 0x12F4A8u: goto label_12f4a8;
            case 0x12F4ACu: goto label_12f4ac;
            case 0x12F4B0u: goto label_12f4b0;
            case 0x12F4B4u: goto label_12f4b4;
            case 0x12F4B8u: goto label_12f4b8;
            case 0x12F4BCu: goto label_12f4bc;
            case 0x12F4C0u: goto label_12f4c0;
            case 0x12F4C4u: goto label_12f4c4;
            case 0x12F4C8u: goto label_12f4c8;
            case 0x12F4CCu: goto label_12f4cc;
            case 0x12F4D0u: goto label_12f4d0;
            case 0x12F4D4u: goto label_12f4d4;
            case 0x12F4D8u: goto label_12f4d8;
            case 0x12F4DCu: goto label_12f4dc;
            case 0x12F4E0u: goto label_12f4e0;
            case 0x12F4E4u: goto label_12f4e4;
            case 0x12F4E8u: goto label_12f4e8;
            case 0x12F4ECu: goto label_12f4ec;
            case 0x12F4F0u: goto label_12f4f0;
            case 0x12F4F4u: goto label_12f4f4;
            case 0x12F4F8u: goto label_12f4f8;
            case 0x12F4FCu: goto label_12f4fc;
            case 0x12F500u: goto label_12f500;
            case 0x12F504u: goto label_12f504;
            case 0x12F508u: goto label_12f508;
            case 0x12F50Cu: goto label_12f50c;
            case 0x12F510u: goto label_12f510;
            case 0x12F514u: goto label_12f514;
            case 0x12F518u: goto label_12f518;
            case 0x12F51Cu: goto label_12f51c;
            case 0x12F520u: goto label_12f520;
            case 0x12F524u: goto label_12f524;
            case 0x12F528u: goto label_12f528;
            case 0x12F52Cu: goto label_12f52c;
            case 0x12F530u: goto label_12f530;
            case 0x12F534u: goto label_12f534;
            case 0x12F538u: goto label_12f538;
            case 0x12F53Cu: goto label_12f53c;
            case 0x12F540u: goto label_12f540;
            case 0x12F544u: goto label_12f544;
            case 0x12F548u: goto label_12f548;
            case 0x12F54Cu: goto label_12f54c;
            case 0x12F550u: goto label_12f550;
            case 0x12F554u: goto label_12f554;
            case 0x12F558u: goto label_12f558;
            case 0x12F55Cu: goto label_12f55c;
            case 0x12F560u: goto label_12f560;
            case 0x12F564u: goto label_12f564;
            case 0x12F568u: goto label_12f568;
            case 0x12F56Cu: goto label_12f56c;
            case 0x12F570u: goto label_12f570;
            case 0x12F574u: goto label_12f574;
            case 0x12F578u: goto label_12f578;
            case 0x12F57Cu: goto label_12f57c;
            case 0x12F580u: goto label_12f580;
            case 0x12F584u: goto label_12f584;
            case 0x12F588u: goto label_12f588;
            case 0x12F58Cu: goto label_12f58c;
            case 0x12F590u: goto label_12f590;
            case 0x12F594u: goto label_12f594;
            case 0x12F598u: goto label_12f598;
            case 0x12F59Cu: goto label_12f59c;
            case 0x12F5A0u: goto label_12f5a0;
            case 0x12F5A4u: goto label_12f5a4;
            case 0x12F5A8u: goto label_12f5a8;
            case 0x12F5ACu: goto label_12f5ac;
            case 0x12F5B0u: goto label_12f5b0;
            case 0x12F5B4u: goto label_12f5b4;
            case 0x12F5B8u: goto label_12f5b8;
            case 0x12F5BCu: goto label_12f5bc;
            case 0x12F5C0u: goto label_12f5c0;
            case 0x12F5C4u: goto label_12f5c4;
            case 0x12F5C8u: goto label_12f5c8;
            case 0x12F5CCu: goto label_12f5cc;
            case 0x12F5D0u: goto label_12f5d0;
            case 0x12F5D4u: goto label_12f5d4;
            case 0x12F5D8u: goto label_12f5d8;
            case 0x12F5DCu: goto label_12f5dc;
            case 0x12F5E0u: goto label_12f5e0;
            case 0x12F5E4u: goto label_12f5e4;
            case 0x12F5E8u: goto label_12f5e8;
            case 0x12F5ECu: goto label_12f5ec;
            case 0x12F5F0u: goto label_12f5f0;
            case 0x12F5F4u: goto label_12f5f4;
            case 0x12F5F8u: goto label_12f5f8;
            case 0x12F5FCu: goto label_12f5fc;
            case 0x12F600u: goto label_12f600;
            case 0x12F604u: goto label_12f604;
            case 0x12F608u: goto label_12f608;
            case 0x12F60Cu: goto label_12f60c;
            case 0x12F610u: goto label_12f610;
            case 0x12F614u: goto label_12f614;
            case 0x12F618u: goto label_12f618;
            case 0x12F61Cu: goto label_12f61c;
            case 0x12F620u: goto label_12f620;
            case 0x12F624u: goto label_12f624;
            case 0x12F628u: goto label_12f628;
            case 0x12F62Cu: goto label_12f62c;
            case 0x12F630u: goto label_12f630;
            case 0x12F634u: goto label_12f634;
            case 0x12F638u: goto label_12f638;
            case 0x12F63Cu: goto label_12f63c;
            case 0x12F640u: goto label_12f640;
            case 0x12F644u: goto label_12f644;
            case 0x12F648u: goto label_12f648;
            case 0x12F64Cu: goto label_12f64c;
            case 0x12F650u: goto label_12f650;
            case 0x12F654u: goto label_12f654;
            case 0x12F658u: goto label_12f658;
            case 0x12F65Cu: goto label_12f65c;
            case 0x12F660u: goto label_12f660;
            case 0x12F664u: goto label_12f664;
            case 0x12F668u: goto label_12f668;
            case 0x12F66Cu: goto label_12f66c;
            case 0x12F670u: goto label_12f670;
            case 0x12F674u: goto label_12f674;
            case 0x12F678u: goto label_12f678;
            case 0x12F67Cu: goto label_12f67c;
            case 0x12F680u: goto label_12f680;
            case 0x12F684u: goto label_12f684;
            case 0x12F688u: goto label_12f688;
            case 0x12F68Cu: goto label_12f68c;
            case 0x12F690u: goto label_12f690;
            case 0x12F694u: goto label_12f694;
            case 0x12F698u: goto label_12f698;
            case 0x12F69Cu: goto label_12f69c;
            case 0x12F6A0u: goto label_12f6a0;
            case 0x12F6A4u: goto label_12f6a4;
            case 0x12F6A8u: goto label_12f6a8;
            case 0x12F6ACu: goto label_12f6ac;
            case 0x12F6B0u: goto label_12f6b0;
            case 0x12F6B4u: goto label_12f6b4;
            case 0x12F6B8u: goto label_12f6b8;
            case 0x12F6BCu: goto label_12f6bc;
            case 0x12F6C0u: goto label_12f6c0;
            case 0x12F6C4u: goto label_12f6c4;
            case 0x12F6C8u: goto label_12f6c8;
            case 0x12F6CCu: goto label_12f6cc;
            case 0x12F6D0u: goto label_12f6d0;
            case 0x12F6D4u: goto label_12f6d4;
            case 0x12F6D8u: goto label_12f6d8;
            case 0x12F6DCu: goto label_12f6dc;
            case 0x12F6E0u: goto label_12f6e0;
            case 0x12F6E4u: goto label_12f6e4;
            case 0x12F6E8u: goto label_12f6e8;
            case 0x12F6ECu: goto label_12f6ec;
            case 0x12F6F0u: goto label_12f6f0;
            case 0x12F6F4u: goto label_12f6f4;
            case 0x12F6F8u: goto label_12f6f8;
            case 0x12F6FCu: goto label_12f6fc;
            case 0x12F700u: goto label_12f700;
            case 0x12F704u: goto label_12f704;
            case 0x12F708u: goto label_12f708;
            case 0x12F70Cu: goto label_12f70c;
            case 0x12F710u: goto label_12f710;
            case 0x12F714u: goto label_12f714;
            case 0x12F718u: goto label_12f718;
            case 0x12F71Cu: goto label_12f71c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12F0F4u; }
            if (ctx->pc != 0x12F0F4u) { return; }
        }
    }
    ctx->pc = 0x12F0F4u;
label_12f0f4:
    // 0x12f0f4: 0x8e620000
    ctx->pc = 0x12f0f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_12f0f8:
    // 0x12f0f8: 0x260202d
    ctx->pc = 0x12f0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f0fc:
    // 0x12f0fc: 0x282d
    ctx->pc = 0x12f0fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f100:
    // 0x12f100: 0x8c47001c
    ctx->pc = 0x12f100u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_12f104:
    // 0x12f104: 0x3a0302d
    ctx->pc = 0x12f104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12f108:
    // 0x12f108: 0xe0f809
label_12f10c:
    if (ctx->pc == 0x12F10Cu) {
        ctx->pc = 0x12F10Cu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x12F110u;
        goto label_12f110;
    }
    ctx->pc = 0x12F108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x12F110u);
        ctx->pc = 0x12F10Cu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F090u: goto label_12f090;
            case 0x12F094u: goto label_12f094;
            case 0x12F098u: goto label_12f098;
            case 0x12F09Cu: goto label_12f09c;
            case 0x12F0A0u: goto label_12f0a0;
            case 0x12F0A4u: goto label_12f0a4;
            case 0x12F0A8u: goto label_12f0a8;
            case 0x12F0ACu: goto label_12f0ac;
            case 0x12F0B0u: goto label_12f0b0;
            case 0x12F0B4u: goto label_12f0b4;
            case 0x12F0B8u: goto label_12f0b8;
            case 0x12F0BCu: goto label_12f0bc;
            case 0x12F0C0u: goto label_12f0c0;
            case 0x12F0C4u: goto label_12f0c4;
            case 0x12F0C8u: goto label_12f0c8;
            case 0x12F0CCu: goto label_12f0cc;
            case 0x12F0D0u: goto label_12f0d0;
            case 0x12F0D4u: goto label_12f0d4;
            case 0x12F0D8u: goto label_12f0d8;
            case 0x12F0DCu: goto label_12f0dc;
            case 0x12F0E0u: goto label_12f0e0;
            case 0x12F0E4u: goto label_12f0e4;
            case 0x12F0E8u: goto label_12f0e8;
            case 0x12F0ECu: goto label_12f0ec;
            case 0x12F0F0u: goto label_12f0f0;
            case 0x12F0F4u: goto label_12f0f4;
            case 0x12F0F8u: goto label_12f0f8;
            case 0x12F0FCu: goto label_12f0fc;
            case 0x12F100u: goto label_12f100;
            case 0x12F104u: goto label_12f104;
            case 0x12F108u: goto label_12f108;
            case 0x12F10Cu: goto label_12f10c;
            case 0x12F110u: goto label_12f110;
            case 0x12F114u: goto label_12f114;
            case 0x12F118u: goto label_12f118;
            case 0x12F11Cu: goto label_12f11c;
            case 0x12F120u: goto label_12f120;
            case 0x12F124u: goto label_12f124;
            case 0x12F128u: goto label_12f128;
            case 0x12F12Cu: goto label_12f12c;
            case 0x12F130u: goto label_12f130;
            case 0x12F134u: goto label_12f134;
            case 0x12F138u: goto label_12f138;
            case 0x12F13Cu: goto label_12f13c;
            case 0x12F140u: goto label_12f140;
            case 0x12F144u: goto label_12f144;
            case 0x12F148u: goto label_12f148;
            case 0x12F14Cu: goto label_12f14c;
            case 0x12F150u: goto label_12f150;
            case 0x12F154u: goto label_12f154;
            case 0x12F158u: goto label_12f158;
            case 0x12F15Cu: goto label_12f15c;
            case 0x12F160u: goto label_12f160;
            case 0x12F164u: goto label_12f164;
            case 0x12F168u: goto label_12f168;
            case 0x12F16Cu: goto label_12f16c;
            case 0x12F170u: goto label_12f170;
            case 0x12F174u: goto label_12f174;
            case 0x12F178u: goto label_12f178;
            case 0x12F17Cu: goto label_12f17c;
            case 0x12F180u: goto label_12f180;
            case 0x12F184u: goto label_12f184;
            case 0x12F188u: goto label_12f188;
            case 0x12F18Cu: goto label_12f18c;
            case 0x12F190u: goto label_12f190;
            case 0x12F194u: goto label_12f194;
            case 0x12F198u: goto label_12f198;
            case 0x12F19Cu: goto label_12f19c;
            case 0x12F1A0u: goto label_12f1a0;
            case 0x12F1A4u: goto label_12f1a4;
            case 0x12F1A8u: goto label_12f1a8;
            case 0x12F1ACu: goto label_12f1ac;
            case 0x12F1B0u: goto label_12f1b0;
            case 0x12F1B4u: goto label_12f1b4;
            case 0x12F1B8u: goto label_12f1b8;
            case 0x12F1BCu: goto label_12f1bc;
            case 0x12F1C0u: goto label_12f1c0;
            case 0x12F1C4u: goto label_12f1c4;
            case 0x12F1C8u: goto label_12f1c8;
            case 0x12F1CCu: goto label_12f1cc;
            case 0x12F1D0u: goto label_12f1d0;
            case 0x12F1D4u: goto label_12f1d4;
            case 0x12F1D8u: goto label_12f1d8;
            case 0x12F1DCu: goto label_12f1dc;
            case 0x12F1E0u: goto label_12f1e0;
            case 0x12F1E4u: goto label_12f1e4;
            case 0x12F1E8u: goto label_12f1e8;
            case 0x12F1ECu: goto label_12f1ec;
            case 0x12F1F0u: goto label_12f1f0;
            case 0x12F1F4u: goto label_12f1f4;
            case 0x12F1F8u: goto label_12f1f8;
            case 0x12F1FCu: goto label_12f1fc;
            case 0x12F200u: goto label_12f200;
            case 0x12F204u: goto label_12f204;
            case 0x12F208u: goto label_12f208;
            case 0x12F20Cu: goto label_12f20c;
            case 0x12F210u: goto label_12f210;
            case 0x12F214u: goto label_12f214;
            case 0x12F218u: goto label_12f218;
            case 0x12F21Cu: goto label_12f21c;
            case 0x12F220u: goto label_12f220;
            case 0x12F224u: goto label_12f224;
            case 0x12F228u: goto label_12f228;
            case 0x12F22Cu: goto label_12f22c;
            case 0x12F230u: goto label_12f230;
            case 0x12F234u: goto label_12f234;
            case 0x12F238u: goto label_12f238;
            case 0x12F23Cu: goto label_12f23c;
            case 0x12F240u: goto label_12f240;
            case 0x12F244u: goto label_12f244;
            case 0x12F248u: goto label_12f248;
            case 0x12F24Cu: goto label_12f24c;
            case 0x12F250u: goto label_12f250;
            case 0x12F254u: goto label_12f254;
            case 0x12F258u: goto label_12f258;
            case 0x12F25Cu: goto label_12f25c;
            case 0x12F260u: goto label_12f260;
            case 0x12F264u: goto label_12f264;
            case 0x12F268u: goto label_12f268;
            case 0x12F26Cu: goto label_12f26c;
            case 0x12F270u: goto label_12f270;
            case 0x12F274u: goto label_12f274;
            case 0x12F278u: goto label_12f278;
            case 0x12F27Cu: goto label_12f27c;
            case 0x12F280u: goto label_12f280;
            case 0x12F284u: goto label_12f284;
            case 0x12F288u: goto label_12f288;
            case 0x12F28Cu: goto label_12f28c;
            case 0x12F290u: goto label_12f290;
            case 0x12F294u: goto label_12f294;
            case 0x12F298u: goto label_12f298;
            case 0x12F29Cu: goto label_12f29c;
            case 0x12F2A0u: goto label_12f2a0;
            case 0x12F2A4u: goto label_12f2a4;
            case 0x12F2A8u: goto label_12f2a8;
            case 0x12F2ACu: goto label_12f2ac;
            case 0x12F2B0u: goto label_12f2b0;
            case 0x12F2B4u: goto label_12f2b4;
            case 0x12F2B8u: goto label_12f2b8;
            case 0x12F2BCu: goto label_12f2bc;
            case 0x12F2C0u: goto label_12f2c0;
            case 0x12F2C4u: goto label_12f2c4;
            case 0x12F2C8u: goto label_12f2c8;
            case 0x12F2CCu: goto label_12f2cc;
            case 0x12F2D0u: goto label_12f2d0;
            case 0x12F2D4u: goto label_12f2d4;
            case 0x12F2D8u: goto label_12f2d8;
            case 0x12F2DCu: goto label_12f2dc;
            case 0x12F2E0u: goto label_12f2e0;
            case 0x12F2E4u: goto label_12f2e4;
            case 0x12F2E8u: goto label_12f2e8;
            case 0x12F2ECu: goto label_12f2ec;
            case 0x12F2F0u: goto label_12f2f0;
            case 0x12F2F4u: goto label_12f2f4;
            case 0x12F2F8u: goto label_12f2f8;
            case 0x12F2FCu: goto label_12f2fc;
            case 0x12F300u: goto label_12f300;
            case 0x12F304u: goto label_12f304;
            case 0x12F308u: goto label_12f308;
            case 0x12F30Cu: goto label_12f30c;
            case 0x12F310u: goto label_12f310;
            case 0x12F314u: goto label_12f314;
            case 0x12F318u: goto label_12f318;
            case 0x12F31Cu: goto label_12f31c;
            case 0x12F320u: goto label_12f320;
            case 0x12F324u: goto label_12f324;
            case 0x12F328u: goto label_12f328;
            case 0x12F32Cu: goto label_12f32c;
            case 0x12F330u: goto label_12f330;
            case 0x12F334u: goto label_12f334;
            case 0x12F338u: goto label_12f338;
            case 0x12F33Cu: goto label_12f33c;
            case 0x12F340u: goto label_12f340;
            case 0x12F344u: goto label_12f344;
            case 0x12F348u: goto label_12f348;
            case 0x12F34Cu: goto label_12f34c;
            case 0x12F350u: goto label_12f350;
            case 0x12F354u: goto label_12f354;
            case 0x12F358u: goto label_12f358;
            case 0x12F35Cu: goto label_12f35c;
            case 0x12F360u: goto label_12f360;
            case 0x12F364u: goto label_12f364;
            case 0x12F368u: goto label_12f368;
            case 0x12F36Cu: goto label_12f36c;
            case 0x12F370u: goto label_12f370;
            case 0x12F374u: goto label_12f374;
            case 0x12F378u: goto label_12f378;
            case 0x12F37Cu: goto label_12f37c;
            case 0x12F380u: goto label_12f380;
            case 0x12F384u: goto label_12f384;
            case 0x12F388u: goto label_12f388;
            case 0x12F38Cu: goto label_12f38c;
            case 0x12F390u: goto label_12f390;
            case 0x12F394u: goto label_12f394;
            case 0x12F398u: goto label_12f398;
            case 0x12F39Cu: goto label_12f39c;
            case 0x12F3A0u: goto label_12f3a0;
            case 0x12F3A4u: goto label_12f3a4;
            case 0x12F3A8u: goto label_12f3a8;
            case 0x12F3ACu: goto label_12f3ac;
            case 0x12F3B0u: goto label_12f3b0;
            case 0x12F3B4u: goto label_12f3b4;
            case 0x12F3B8u: goto label_12f3b8;
            case 0x12F3BCu: goto label_12f3bc;
            case 0x12F3C0u: goto label_12f3c0;
            case 0x12F3C4u: goto label_12f3c4;
            case 0x12F3C8u: goto label_12f3c8;
            case 0x12F3CCu: goto label_12f3cc;
            case 0x12F3D0u: goto label_12f3d0;
            case 0x12F3D4u: goto label_12f3d4;
            case 0x12F3D8u: goto label_12f3d8;
            case 0x12F3DCu: goto label_12f3dc;
            case 0x12F3E0u: goto label_12f3e0;
            case 0x12F3E4u: goto label_12f3e4;
            case 0x12F3E8u: goto label_12f3e8;
            case 0x12F3ECu: goto label_12f3ec;
            case 0x12F3F0u: goto label_12f3f0;
            case 0x12F3F4u: goto label_12f3f4;
            case 0x12F3F8u: goto label_12f3f8;
            case 0x12F3FCu: goto label_12f3fc;
            case 0x12F400u: goto label_12f400;
            case 0x12F404u: goto label_12f404;
            case 0x12F408u: goto label_12f408;
            case 0x12F40Cu: goto label_12f40c;
            case 0x12F410u: goto label_12f410;
            case 0x12F414u: goto label_12f414;
            case 0x12F418u: goto label_12f418;
            case 0x12F41Cu: goto label_12f41c;
            case 0x12F420u: goto label_12f420;
            case 0x12F424u: goto label_12f424;
            case 0x12F428u: goto label_12f428;
            case 0x12F42Cu: goto label_12f42c;
            case 0x12F430u: goto label_12f430;
            case 0x12F434u: goto label_12f434;
            case 0x12F438u: goto label_12f438;
            case 0x12F43Cu: goto label_12f43c;
            case 0x12F440u: goto label_12f440;
            case 0x12F444u: goto label_12f444;
            case 0x12F448u: goto label_12f448;
            case 0x12F44Cu: goto label_12f44c;
            case 0x12F450u: goto label_12f450;
            case 0x12F454u: goto label_12f454;
            case 0x12F458u: goto label_12f458;
            case 0x12F45Cu: goto label_12f45c;
            case 0x12F460u: goto label_12f460;
            case 0x12F464u: goto label_12f464;
            case 0x12F468u: goto label_12f468;
            case 0x12F46Cu: goto label_12f46c;
            case 0x12F470u: goto label_12f470;
            case 0x12F474u: goto label_12f474;
            case 0x12F478u: goto label_12f478;
            case 0x12F47Cu: goto label_12f47c;
            case 0x12F480u: goto label_12f480;
            case 0x12F484u: goto label_12f484;
            case 0x12F488u: goto label_12f488;
            case 0x12F48Cu: goto label_12f48c;
            case 0x12F490u: goto label_12f490;
            case 0x12F494u: goto label_12f494;
            case 0x12F498u: goto label_12f498;
            case 0x12F49Cu: goto label_12f49c;
            case 0x12F4A0u: goto label_12f4a0;
            case 0x12F4A4u: goto label_12f4a4;
            case 0x12F4A8u: goto label_12f4a8;
            case 0x12F4ACu: goto label_12f4ac;
            case 0x12F4B0u: goto label_12f4b0;
            case 0x12F4B4u: goto label_12f4b4;
            case 0x12F4B8u: goto label_12f4b8;
            case 0x12F4BCu: goto label_12f4bc;
            case 0x12F4C0u: goto label_12f4c0;
            case 0x12F4C4u: goto label_12f4c4;
            case 0x12F4C8u: goto label_12f4c8;
            case 0x12F4CCu: goto label_12f4cc;
            case 0x12F4D0u: goto label_12f4d0;
            case 0x12F4D4u: goto label_12f4d4;
            case 0x12F4D8u: goto label_12f4d8;
            case 0x12F4DCu: goto label_12f4dc;
            case 0x12F4E0u: goto label_12f4e0;
            case 0x12F4E4u: goto label_12f4e4;
            case 0x12F4E8u: goto label_12f4e8;
            case 0x12F4ECu: goto label_12f4ec;
            case 0x12F4F0u: goto label_12f4f0;
            case 0x12F4F4u: goto label_12f4f4;
            case 0x12F4F8u: goto label_12f4f8;
            case 0x12F4FCu: goto label_12f4fc;
            case 0x12F500u: goto label_12f500;
            case 0x12F504u: goto label_12f504;
            case 0x12F508u: goto label_12f508;
            case 0x12F50Cu: goto label_12f50c;
            case 0x12F510u: goto label_12f510;
            case 0x12F514u: goto label_12f514;
            case 0x12F518u: goto label_12f518;
            case 0x12F51Cu: goto label_12f51c;
            case 0x12F520u: goto label_12f520;
            case 0x12F524u: goto label_12f524;
            case 0x12F528u: goto label_12f528;
            case 0x12F52Cu: goto label_12f52c;
            case 0x12F530u: goto label_12f530;
            case 0x12F534u: goto label_12f534;
            case 0x12F538u: goto label_12f538;
            case 0x12F53Cu: goto label_12f53c;
            case 0x12F540u: goto label_12f540;
            case 0x12F544u: goto label_12f544;
            case 0x12F548u: goto label_12f548;
            case 0x12F54Cu: goto label_12f54c;
            case 0x12F550u: goto label_12f550;
            case 0x12F554u: goto label_12f554;
            case 0x12F558u: goto label_12f558;
            case 0x12F55Cu: goto label_12f55c;
            case 0x12F560u: goto label_12f560;
            case 0x12F564u: goto label_12f564;
            case 0x12F568u: goto label_12f568;
            case 0x12F56Cu: goto label_12f56c;
            case 0x12F570u: goto label_12f570;
            case 0x12F574u: goto label_12f574;
            case 0x12F578u: goto label_12f578;
            case 0x12F57Cu: goto label_12f57c;
            case 0x12F580u: goto label_12f580;
            case 0x12F584u: goto label_12f584;
            case 0x12F588u: goto label_12f588;
            case 0x12F58Cu: goto label_12f58c;
            case 0x12F590u: goto label_12f590;
            case 0x12F594u: goto label_12f594;
            case 0x12F598u: goto label_12f598;
            case 0x12F59Cu: goto label_12f59c;
            case 0x12F5A0u: goto label_12f5a0;
            case 0x12F5A4u: goto label_12f5a4;
            case 0x12F5A8u: goto label_12f5a8;
            case 0x12F5ACu: goto label_12f5ac;
            case 0x12F5B0u: goto label_12f5b0;
            case 0x12F5B4u: goto label_12f5b4;
            case 0x12F5B8u: goto label_12f5b8;
            case 0x12F5BCu: goto label_12f5bc;
            case 0x12F5C0u: goto label_12f5c0;
            case 0x12F5C4u: goto label_12f5c4;
            case 0x12F5C8u: goto label_12f5c8;
            case 0x12F5CCu: goto label_12f5cc;
            case 0x12F5D0u: goto label_12f5d0;
            case 0x12F5D4u: goto label_12f5d4;
            case 0x12F5D8u: goto label_12f5d8;
            case 0x12F5DCu: goto label_12f5dc;
            case 0x12F5E0u: goto label_12f5e0;
            case 0x12F5E4u: goto label_12f5e4;
            case 0x12F5E8u: goto label_12f5e8;
            case 0x12F5ECu: goto label_12f5ec;
            case 0x12F5F0u: goto label_12f5f0;
            case 0x12F5F4u: goto label_12f5f4;
            case 0x12F5F8u: goto label_12f5f8;
            case 0x12F5FCu: goto label_12f5fc;
            case 0x12F600u: goto label_12f600;
            case 0x12F604u: goto label_12f604;
            case 0x12F608u: goto label_12f608;
            case 0x12F60Cu: goto label_12f60c;
            case 0x12F610u: goto label_12f610;
            case 0x12F614u: goto label_12f614;
            case 0x12F618u: goto label_12f618;
            case 0x12F61Cu: goto label_12f61c;
            case 0x12F620u: goto label_12f620;
            case 0x12F624u: goto label_12f624;
            case 0x12F628u: goto label_12f628;
            case 0x12F62Cu: goto label_12f62c;
            case 0x12F630u: goto label_12f630;
            case 0x12F634u: goto label_12f634;
            case 0x12F638u: goto label_12f638;
            case 0x12F63Cu: goto label_12f63c;
            case 0x12F640u: goto label_12f640;
            case 0x12F644u: goto label_12f644;
            case 0x12F648u: goto label_12f648;
            case 0x12F64Cu: goto label_12f64c;
            case 0x12F650u: goto label_12f650;
            case 0x12F654u: goto label_12f654;
            case 0x12F658u: goto label_12f658;
            case 0x12F65Cu: goto label_12f65c;
            case 0x12F660u: goto label_12f660;
            case 0x12F664u: goto label_12f664;
            case 0x12F668u: goto label_12f668;
            case 0x12F66Cu: goto label_12f66c;
            case 0x12F670u: goto label_12f670;
            case 0x12F674u: goto label_12f674;
            case 0x12F678u: goto label_12f678;
            case 0x12F67Cu: goto label_12f67c;
            case 0x12F680u: goto label_12f680;
            case 0x12F684u: goto label_12f684;
            case 0x12F688u: goto label_12f688;
            case 0x12F68Cu: goto label_12f68c;
            case 0x12F690u: goto label_12f690;
            case 0x12F694u: goto label_12f694;
            case 0x12F698u: goto label_12f698;
            case 0x12F69Cu: goto label_12f69c;
            case 0x12F6A0u: goto label_12f6a0;
            case 0x12F6A4u: goto label_12f6a4;
            case 0x12F6A8u: goto label_12f6a8;
            case 0x12F6ACu: goto label_12f6ac;
            case 0x12F6B0u: goto label_12f6b0;
            case 0x12F6B4u: goto label_12f6b4;
            case 0x12F6B8u: goto label_12f6b8;
            case 0x12F6BCu: goto label_12f6bc;
            case 0x12F6C0u: goto label_12f6c0;
            case 0x12F6C4u: goto label_12f6c4;
            case 0x12F6C8u: goto label_12f6c8;
            case 0x12F6CCu: goto label_12f6cc;
            case 0x12F6D0u: goto label_12f6d0;
            case 0x12F6D4u: goto label_12f6d4;
            case 0x12F6D8u: goto label_12f6d8;
            case 0x12F6DCu: goto label_12f6dc;
            case 0x12F6E0u: goto label_12f6e0;
            case 0x12F6E4u: goto label_12f6e4;
            case 0x12F6E8u: goto label_12f6e8;
            case 0x12F6ECu: goto label_12f6ec;
            case 0x12F6F0u: goto label_12f6f0;
            case 0x12F6F4u: goto label_12f6f4;
            case 0x12F6F8u: goto label_12f6f8;
            case 0x12F6FCu: goto label_12f6fc;
            case 0x12F700u: goto label_12f700;
            case 0x12F704u: goto label_12f704;
            case 0x12F708u: goto label_12f708;
            case 0x12F70Cu: goto label_12f70c;
            case 0x12F710u: goto label_12f710;
            case 0x12F714u: goto label_12f714;
            case 0x12F718u: goto label_12f718;
            case 0x12F71Cu: goto label_12f71c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12F110u; }
            if (ctx->pc != 0x12F110u) { return; }
        }
    }
    ctx->pc = 0x12F110u;
label_12f110:
    // 0x12f110: 0x8e830048
    ctx->pc = 0x12f110u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_12f114:
    // 0x12f114: 0x24630004
    ctx->pc = 0x12f114u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
label_12f118:
    // 0x12f118: 0x203802a
    ctx->pc = 0x12f118u;
    SET_GPR_U32(ctx, 16, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
label_12f11c:
    // 0x12f11c: 0x16000173
label_12f120:
    if (ctx->pc == 0x12F120u) {
        ctx->pc = 0x12F120u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F124u;
        goto label_12f124;
    }
    ctx->pc = 0x12F11Cu;
    {
        const bool branch_taken_0x12f11c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x12F120u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f11c) {
            ctx->pc = 0x12F6ECu;
            goto label_12f6ec;
        }
    }
    ctx->pc = 0x12F124u;
label_12f124:
    // 0x12f124: 0x34028000
    ctx->pc = 0x12f124u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
label_12f128:
    // 0x12f128: 0x27a40010
    ctx->pc = 0x12f128u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
label_12f12c:
    // 0x12f12c: 0x24050002
    ctx->pc = 0x12f12cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_12f130:
    // 0x12f130: 0x24060001
    ctx->pc = 0x12f130u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f134:
    // 0x12f134: 0x260382d
    ctx->pc = 0x12f134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f138:
    // 0x12f138: 0xc04b7d4
label_12f13c:
    if (ctx->pc == 0x12F13Cu) {
        ctx->pc = 0x12F13Cu;
        WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12F140u;
        goto label_12f140;
    }
    ctx->pc = 0x12F138u;
    SET_GPR_U32(ctx, 31, 0x12F140u);
    ctx->pc = 0x12F13Cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F140u; }
    }
    if (ctx->pc != 0x12F140u) { return; }
    ctx->pc = 0x12F140u;
label_12f140:
    // 0x12f140: 0x40882d
    ctx->pc = 0x12f140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f144:
    // 0x12f144: 0x24020001
    ctx->pc = 0x12f144u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_12f148:
    // 0x12f148: 0x16220168
label_12f14c:
    if (ctx->pc == 0x12F14Cu) {
        ctx->pc = 0x12F14Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F150u;
        goto label_12f150;
    }
    ctx->pc = 0x12F148u;
    {
        const bool branch_taken_0x12f148 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x12F14Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f148) {
            ctx->pc = 0x12F6ECu;
            goto label_12f6ec;
        }
    }
    ctx->pc = 0x12F150u;
label_12f150:
    // 0x12f150: 0x86820048
    ctx->pc = 0x12f150u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 72)));
label_12f154:
    // 0x12f154: 0x27a40012
    ctx->pc = 0x12f154u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 18));
label_12f158:
    // 0x12f158: 0x24050002
    ctx->pc = 0x12f158u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_12f15c:
    // 0x12f15c: 0x24060001
    ctx->pc = 0x12f15cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f160:
    // 0x12f160: 0x260382d
    ctx->pc = 0x12f160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f164:
    // 0x12f164: 0xc04b7d4
label_12f168:
    if (ctx->pc == 0x12F168u) {
        ctx->pc = 0x12F168u;
        WRITE16(ADD32(GPR_U32(ctx, 29), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12F16Cu;
        goto label_12f16c;
    }
    ctx->pc = 0x12F164u;
    SET_GPR_U32(ctx, 31, 0x12F16Cu);
    ctx->pc = 0x12F168u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 18), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F16Cu; }
    }
    if (ctx->pc != 0x12F16Cu) { return; }
    ctx->pc = 0x12F16Cu;
label_12f16c:
    // 0x12f16c: 0x40802d
    ctx->pc = 0x12f16cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f170:
    // 0x12f170: 0x1611015e
label_12f174:
    if (ctx->pc == 0x12F174u) {
        ctx->pc = 0x12F174u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F178u;
        goto label_12f178;
    }
    ctx->pc = 0x12F170u;
    {
        const bool branch_taken_0x12f170 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 17));
        ctx->pc = 0x12F174u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f170) {
            ctx->pc = 0x12F6ECu;
            goto label_12f6ec;
        }
    }
    ctx->pc = 0x12F178u;
label_12f178:
    // 0x12f178: 0x8282004c
    ctx->pc = 0x12f178u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 76)));
label_12f17c:
    // 0x12f17c: 0x27b70014
    ctx->pc = 0x12f17cu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 29), 20));
label_12f180:
    // 0x12f180: 0x2e0202d
    ctx->pc = 0x12f180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12f184:
    // 0x12f184: 0x24050001
    ctx->pc = 0x12f184u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12f188:
    // 0x12f188: 0x24060001
    ctx->pc = 0x12f188u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f18c:
    // 0x12f18c: 0x260382d
    ctx->pc = 0x12f18cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f190:
    // 0x12f190: 0xc04b7d4
label_12f194:
    if (ctx->pc == 0x12F194u) {
        ctx->pc = 0x12F194u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12F198u;
        goto label_12f198;
    }
    ctx->pc = 0x12F190u;
    SET_GPR_U32(ctx, 31, 0x12F198u);
    ctx->pc = 0x12F194u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F198u; }
    }
    if (ctx->pc != 0x12F198u) { return; }
    ctx->pc = 0x12F198u;
label_12f198:
    // 0x12f198: 0x14500154
label_12f19c:
    if (ctx->pc == 0x12F19Cu) {
        ctx->pc = 0x12F19Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F1A0u;
        goto label_12f1a0;
    }
    ctx->pc = 0x12F198u;
    {
        const bool branch_taken_0x12f198 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x12F19Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f198) {
            ctx->pc = 0x12F6ECu;
            goto label_12f6ec;
        }
    }
    ctx->pc = 0x12F1A0u;
label_12f1a0:
    // 0x12f1a0: 0x92820050
    ctx->pc = 0x12f1a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 80)));
label_12f1a4:
    // 0x12f1a4: 0x2e0202d
    ctx->pc = 0x12f1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12f1a8:
    // 0x12f1a8: 0x24050001
    ctx->pc = 0x12f1a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12f1ac:
    // 0x12f1ac: 0x24060001
    ctx->pc = 0x12f1acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f1b0:
    // 0x12f1b0: 0x260382d
    ctx->pc = 0x12f1b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f1b4:
    // 0x12f1b4: 0xc04b7d4
label_12f1b8:
    if (ctx->pc == 0x12F1B8u) {
        ctx->pc = 0x12F1B8u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12F1BCu;
        goto label_12f1bc;
    }
    ctx->pc = 0x12F1B4u;
    SET_GPR_U32(ctx, 31, 0x12F1BCu);
    ctx->pc = 0x12F1B8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F1BCu; }
    }
    if (ctx->pc != 0x12F1BCu) { return; }
    ctx->pc = 0x12F1BCu;
label_12f1bc:
    // 0x12f1bc: 0x24120001
    ctx->pc = 0x12f1bcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
label_12f1c0:
    // 0x12f1c0: 0x40882d
    ctx->pc = 0x12f1c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f1c4:
    // 0x12f1c4: 0x16320149
label_12f1c8:
    if (ctx->pc == 0x12F1C8u) {
        ctx->pc = 0x12F1C8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F1CCu;
        goto label_12f1cc;
    }
    ctx->pc = 0x12F1C4u;
    {
        const bool branch_taken_0x12f1c4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 18));
        ctx->pc = 0x12F1C8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f1c4) {
            ctx->pc = 0x12F6ECu;
            goto label_12f6ec;
        }
    }
    ctx->pc = 0x12F1CCu;
label_12f1cc:
    // 0x12f1cc: 0x92820054
    ctx->pc = 0x12f1ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 84)));
label_12f1d0:
    // 0x12f1d0: 0x2e0202d
    ctx->pc = 0x12f1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12f1d4:
    // 0x12f1d4: 0x24050001
    ctx->pc = 0x12f1d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12f1d8:
    // 0x12f1d8: 0x24060001
    ctx->pc = 0x12f1d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f1dc:
    // 0x12f1dc: 0x260382d
    ctx->pc = 0x12f1dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f1e0:
    // 0x12f1e0: 0xc04b7d4
label_12f1e4:
    if (ctx->pc == 0x12F1E4u) {
        ctx->pc = 0x12F1E4u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12F1E8u;
        goto label_12f1e8;
    }
    ctx->pc = 0x12F1E0u;
    SET_GPR_U32(ctx, 31, 0x12F1E8u);
    ctx->pc = 0x12F1E4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F1E8u; }
    }
    if (ctx->pc != 0x12F1E8u) { return; }
    ctx->pc = 0x12F1E8u;
label_12f1e8:
    // 0x12f1e8: 0x40802d
    ctx->pc = 0x12f1e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f1ec:
    // 0x12f1ec: 0x1611013f
label_12f1f0:
    if (ctx->pc == 0x12F1F0u) {
        ctx->pc = 0x12F1F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F1F4u;
        goto label_12f1f4;
    }
    ctx->pc = 0x12F1ECu;
    {
        const bool branch_taken_0x12f1ec = (GPR_U32(ctx, 16) != GPR_U32(ctx, 17));
        ctx->pc = 0x12F1F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f1ec) {
            ctx->pc = 0x12F6ECu;
            goto label_12f6ec;
        }
    }
    ctx->pc = 0x12F1F4u;
label_12f1f4:
    // 0x12f1f4: 0x92820058
    ctx->pc = 0x12f1f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 88)));
label_12f1f8:
    // 0x12f1f8: 0x2e0202d
    ctx->pc = 0x12f1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12f1fc:
    // 0x12f1fc: 0x24050001
    ctx->pc = 0x12f1fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12f200:
    // 0x12f200: 0x24060001
    ctx->pc = 0x12f200u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f204:
    // 0x12f204: 0x260382d
    ctx->pc = 0x12f204u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f208:
    // 0x12f208: 0xc04b7d4
label_12f20c:
    if (ctx->pc == 0x12F20Cu) {
        ctx->pc = 0x12F20Cu;
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12F210u;
        goto label_12f210;
    }
    ctx->pc = 0x12F208u;
    SET_GPR_U32(ctx, 31, 0x12F210u);
    ctx->pc = 0x12F20Cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F210u; }
    }
    if (ctx->pc != 0x12F210u) { return; }
    ctx->pc = 0x12F210u;
label_12f210:
    // 0x12f210: 0x40882d
    ctx->pc = 0x12f210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f214:
    // 0x12f214: 0x16300135
label_12f218:
    if (ctx->pc == 0x12F218u) {
        ctx->pc = 0x12F218u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F21Cu;
        goto label_12f21c;
    }
    ctx->pc = 0x12F214u;
    {
        const bool branch_taken_0x12f214 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 16));
        ctx->pc = 0x12F218u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f214) {
            ctx->pc = 0x12F6ECu;
            goto label_12f6ec;
        }
    }
    ctx->pc = 0x12F21Cu;
label_12f21c:
    // 0x12f21c: 0x8e82005c
    ctx->pc = 0x12f21cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_12f220:
    // 0x12f220: 0x27a40018
    ctx->pc = 0x12f220u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 24));
label_12f224:
    // 0x12f224: 0x24050004
    ctx->pc = 0x12f224u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
label_12f228:
    // 0x12f228: 0x24060001
    ctx->pc = 0x12f228u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f22c:
    // 0x12f22c: 0x260382d
    ctx->pc = 0x12f22cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f230:
    // 0x12f230: 0xc04b7d4
label_12f234:
    if (ctx->pc == 0x12F234u) {
        ctx->pc = 0x12F234u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x12F238u;
        goto label_12f238;
    }
    ctx->pc = 0x12F230u;
    SET_GPR_U32(ctx, 31, 0x12F238u);
    ctx->pc = 0x12F234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F238u; }
    }
    if (ctx->pc != 0x12F238u) { return; }
    ctx->pc = 0x12F238u;
label_12f238:
    // 0x12f238: 0x40802d
    ctx->pc = 0x12f238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f23c:
    // 0x12f23c: 0x1611012b
label_12f240:
    if (ctx->pc == 0x12F240u) {
        ctx->pc = 0x12F240u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F244u;
        goto label_12f244;
    }
    ctx->pc = 0x12F23Cu;
    {
        const bool branch_taken_0x12f23c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 17));
        ctx->pc = 0x12F240u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f23c) {
            ctx->pc = 0x12F6ECu;
            goto label_12f6ec;
        }
    }
    ctx->pc = 0x12F244u;
label_12f244:
    // 0x12f244: 0x8e820060
    ctx->pc = 0x12f244u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 96)));
label_12f248:
    // 0x12f248: 0x27a40018
    ctx->pc = 0x12f248u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 24));
label_12f24c:
    // 0x12f24c: 0x24050004
    ctx->pc = 0x12f24cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
label_12f250:
    // 0x12f250: 0x24060001
    ctx->pc = 0x12f250u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f254:
    // 0x12f254: 0x260382d
    ctx->pc = 0x12f254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f258:
    // 0x12f258: 0xc04b7d4
label_12f25c:
    if (ctx->pc == 0x12F25Cu) {
        ctx->pc = 0x12F25Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x12F260u;
        goto label_12f260;
    }
    ctx->pc = 0x12F258u;
    SET_GPR_U32(ctx, 31, 0x12F260u);
    ctx->pc = 0x12F25Cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F260u; }
    }
    if (ctx->pc != 0x12F260u) { return; }
    ctx->pc = 0x12F260u;
label_12f260:
    // 0x12f260: 0x40882d
    ctx->pc = 0x12f260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f264:
    // 0x12f264: 0x16300121
label_12f268:
    if (ctx->pc == 0x12F268u) {
        ctx->pc = 0x12F268u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F26Cu;
        goto label_12f26c;
    }
    ctx->pc = 0x12F264u;
    {
        const bool branch_taken_0x12f264 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 16));
        ctx->pc = 0x12F268u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f264) {
            ctx->pc = 0x12F6ECu;
            goto label_12f6ec;
        }
    }
    ctx->pc = 0x12F26Cu;
label_12f26c:
    // 0x12f26c: 0x86820064
    ctx->pc = 0x12f26cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 100)));
label_12f270:
    // 0x12f270: 0x27b60016
    ctx->pc = 0x12f270u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 22));
label_12f274:
    // 0x12f274: 0x2c0202d
    ctx->pc = 0x12f274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12f278:
    // 0x12f278: 0x24050002
    ctx->pc = 0x12f278u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_12f27c:
    // 0x12f27c: 0x24060001
    ctx->pc = 0x12f27cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f280:
    // 0x12f280: 0x260382d
    ctx->pc = 0x12f280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f284:
    // 0x12f284: 0xc04b7d4
label_12f288:
    if (ctx->pc == 0x12F288u) {
        ctx->pc = 0x12F288u;
        WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12F28Cu;
        goto label_12f28c;
    }
    ctx->pc = 0x12F284u;
    SET_GPR_U32(ctx, 31, 0x12F28Cu);
    ctx->pc = 0x12F288u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F28Cu; }
    }
    if (ctx->pc != 0x12F28Cu) { return; }
    ctx->pc = 0x12F28Cu;
label_12f28c:
    // 0x12f28c: 0x40802d
    ctx->pc = 0x12f28cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f290:
    // 0x12f290: 0x16110116
label_12f294:
    if (ctx->pc == 0x12F294u) {
        ctx->pc = 0x12F294u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F298u;
        goto label_12f298;
    }
    ctx->pc = 0x12F290u;
    {
        const bool branch_taken_0x12f290 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 17));
        ctx->pc = 0x12F294u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f290) {
            ctx->pc = 0x12F6ECu;
            goto label_12f6ec;
        }
    }
    ctx->pc = 0x12F298u;
label_12f298:
    // 0x12f298: 0x24020004
    ctx->pc = 0x12f298u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_12f29c:
    // 0x12f29c: 0x2e0202d
    ctx->pc = 0x12f29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12f2a0:
    // 0x12f2a0: 0x24050001
    ctx->pc = 0x12f2a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12f2a4:
    // 0x12f2a4: 0x24060001
    ctx->pc = 0x12f2a4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f2a8:
    // 0x12f2a8: 0x260382d
    ctx->pc = 0x12f2a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f2ac:
    // 0x12f2ac: 0xc04b7d4
label_12f2b0:
    if (ctx->pc == 0x12F2B0u) {
        ctx->pc = 0x12F2B0u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12F2B4u;
        goto label_12f2b4;
    }
    ctx->pc = 0x12F2ACu;
    SET_GPR_U32(ctx, 31, 0x12F2B4u);
    ctx->pc = 0x12F2B0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F2B4u; }
    }
    if (ctx->pc != 0x12F2B4u) { return; }
    ctx->pc = 0x12F2B4u;
label_12f2b4:
    // 0x12f2b4: 0x1450010d
label_12f2b8:
    if (ctx->pc == 0x12F2B8u) {
        ctx->pc = 0x12F2B8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F2BCu;
        goto label_12f2bc;
    }
    ctx->pc = 0x12F2B4u;
    {
        const bool branch_taken_0x12f2b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x12F2B8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f2b4) {
            ctx->pc = 0x12F6ECu;
            goto label_12f6ec;
        }
    }
    ctx->pc = 0x12F2BCu;
label_12f2bc:
    // 0x12f2bc: 0x868202d0
    ctx->pc = 0x12f2bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 720)));
label_12f2c0:
    // 0x12f2c0: 0x14400003
label_12f2c4:
    if (ctx->pc == 0x12F2C4u) {
        ctx->pc = 0x12F2C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x12F2C8u;
        goto label_12f2c8;
    }
    ctx->pc = 0x12F2C0u;
    {
        const bool branch_taken_0x12f2c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12F2C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x12f2c0) {
            ctx->pc = 0x12F2D0u;
            goto label_12f2d0;
        }
    }
    ctx->pc = 0x12F2C8u;
label_12f2c8:
    // 0x12f2c8: 0x10000002
label_12f2cc:
    if (ctx->pc == 0x12F2CCu) {
        ctx->pc = 0x12F2CCu;
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x12F2D0u;
        goto label_12f2d0;
    }
    ctx->pc = 0x12F2C8u;
    {
        const bool branch_taken_0x12f2c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12F2CCu;
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x12f2c8) {
            ctx->pc = 0x12F2D4u;
            goto label_12f2d4;
        }
    }
    ctx->pc = 0x12F2D0u;
label_12f2d0:
    // 0x12f2d0: 0xa3a20014
    ctx->pc = 0x12f2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 2));
label_12f2d4:
    // 0x12f2d4: 0x2e0202d
    ctx->pc = 0x12f2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12f2d8:
    // 0x12f2d8: 0x24050001
    ctx->pc = 0x12f2d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12f2dc:
    // 0x12f2dc: 0x24060001
    ctx->pc = 0x12f2dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f2e0:
    // 0x12f2e0: 0xc04b7d4
label_12f2e4:
    if (ctx->pc == 0x12F2E4u) {
        ctx->pc = 0x12F2E4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F2E8u;
        goto label_12f2e8;
    }
    ctx->pc = 0x12F2E0u;
    SET_GPR_U32(ctx, 31, 0x12F2E8u);
    ctx->pc = 0x12F2E4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F2E8u; }
    }
    if (ctx->pc != 0x12F2E8u) { return; }
    ctx->pc = 0x12F2E8u;
label_12f2e8:
    // 0x12f2e8: 0x40802d
    ctx->pc = 0x12f2e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f2ec:
    // 0x12f2ec: 0x24020001
    ctx->pc = 0x12f2ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_12f2f0:
    // 0x12f2f0: 0x160200fe
label_12f2f4:
    if (ctx->pc == 0x12F2F4u) {
        ctx->pc = 0x12F2F4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F2F8u;
        goto label_12f2f8;
    }
    ctx->pc = 0x12F2F0u;
    {
        const bool branch_taken_0x12f2f0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x12F2F4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f2f0) {
            ctx->pc = 0x12F6ECu;
            goto label_12f6ec;
        }
    }
    ctx->pc = 0x12F2F8u;
label_12f2f8:
    // 0x12f2f8: 0x27a40018
    ctx->pc = 0x12f2f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 24));
label_12f2fc:
    // 0x12f2fc: 0x24050004
    ctx->pc = 0x12f2fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
label_12f300:
    // 0x12f300: 0x24060001
    ctx->pc = 0x12f300u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f304:
    // 0x12f304: 0x260382d
    ctx->pc = 0x12f304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f308:
    // 0x12f308: 0xc04b7d4
label_12f30c:
    if (ctx->pc == 0x12F30Cu) {
        ctx->pc = 0x12F30Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->pc = 0x12F310u;
        goto label_12f310;
    }
    ctx->pc = 0x12F308u;
    SET_GPR_U32(ctx, 31, 0x12F310u);
    ctx->pc = 0x12F30Cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F310u; }
    }
    if (ctx->pc != 0x12F310u) { return; }
    ctx->pc = 0x12F310u;
label_12f310:
    // 0x12f310: 0x40882d
    ctx->pc = 0x12f310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f314:
    // 0x12f314: 0x163000f5
label_12f318:
    if (ctx->pc == 0x12F318u) {
        ctx->pc = 0x12F318u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F31Cu;
        goto label_12f31c;
    }
    ctx->pc = 0x12F314u;
    {
        const bool branch_taken_0x12f314 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 16));
        ctx->pc = 0x12F318u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f314) {
            ctx->pc = 0x12F6ECu;
            goto label_12f6ec;
        }
    }
    ctx->pc = 0x12F31Cu;
label_12f31c:
    // 0x12f31c: 0x968202c8
    ctx->pc = 0x12f31cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 712)));
label_12f320:
    // 0x12f320: 0x2c0202d
    ctx->pc = 0x12f320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12f324:
    // 0x12f324: 0x24050002
    ctx->pc = 0x12f324u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_12f328:
    // 0x12f328: 0x24060001
    ctx->pc = 0x12f328u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f32c:
    // 0x12f32c: 0x260382d
    ctx->pc = 0x12f32cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f330:
    // 0x12f330: 0xc04b7d4
label_12f334:
    if (ctx->pc == 0x12F334u) {
        ctx->pc = 0x12F334u;
        WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12F338u;
        goto label_12f338;
    }
    ctx->pc = 0x12F330u;
    SET_GPR_U32(ctx, 31, 0x12F338u);
    ctx->pc = 0x12F334u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F338u; }
    }
    if (ctx->pc != 0x12F338u) { return; }
    ctx->pc = 0x12F338u;
label_12f338:
    // 0x12f338: 0x40802d
    ctx->pc = 0x12f338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f33c:
    // 0x12f33c: 0x161100eb
label_12f340:
    if (ctx->pc == 0x12F340u) {
        ctx->pc = 0x12F340u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F344u;
        goto label_12f344;
    }
    ctx->pc = 0x12F33Cu;
    {
        const bool branch_taken_0x12f33c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 17));
        ctx->pc = 0x12F340u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f33c) {
            ctx->pc = 0x12F6ECu;
            goto label_12f6ec;
        }
    }
    ctx->pc = 0x12F344u;
label_12f344:
    // 0x12f344: 0x968202cc
    ctx->pc = 0x12f344u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 716)));
label_12f348:
    // 0x12f348: 0x2c0202d
    ctx->pc = 0x12f348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12f34c:
    // 0x12f34c: 0x24050002
    ctx->pc = 0x12f34cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_12f350:
    // 0x12f350: 0x24060001
    ctx->pc = 0x12f350u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f354:
    // 0x12f354: 0x260382d
    ctx->pc = 0x12f354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f358:
    // 0x12f358: 0xc04b7d4
label_12f35c:
    if (ctx->pc == 0x12F35Cu) {
        ctx->pc = 0x12F35Cu;
        WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12F360u;
        goto label_12f360;
    }
    ctx->pc = 0x12F358u;
    SET_GPR_U32(ctx, 31, 0x12F360u);
    ctx->pc = 0x12F35Cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F360u; }
    }
    if (ctx->pc != 0x12F360u) { return; }
    ctx->pc = 0x12F360u;
label_12f360:
    // 0x12f360: 0x40882d
    ctx->pc = 0x12f360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f364:
    // 0x12f364: 0x163000e1
label_12f368:
    if (ctx->pc == 0x12F368u) {
        ctx->pc = 0x12F368u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F36Cu;
        goto label_12f36c;
    }
    ctx->pc = 0x12F364u;
    {
        const bool branch_taken_0x12f364 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 16));
        ctx->pc = 0x12F368u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f364) {
            ctx->pc = 0x12F6ECu;
            goto label_12f6ec;
        }
    }
    ctx->pc = 0x12F36Cu;
label_12f36c:
    // 0x12f36c: 0x968202ca
    ctx->pc = 0x12f36cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 714)));
label_12f370:
    // 0x12f370: 0x2c0202d
    ctx->pc = 0x12f370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12f374:
    // 0x12f374: 0x24050002
    ctx->pc = 0x12f374u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_12f378:
    // 0x12f378: 0x24060001
    ctx->pc = 0x12f378u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f37c:
    // 0x12f37c: 0x260382d
    ctx->pc = 0x12f37cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f380:
    // 0x12f380: 0xc04b7d4
label_12f384:
    if (ctx->pc == 0x12F384u) {
        ctx->pc = 0x12F384u;
        WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12F388u;
        goto label_12f388;
    }
    ctx->pc = 0x12F380u;
    SET_GPR_U32(ctx, 31, 0x12F388u);
    ctx->pc = 0x12F384u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F388u; }
    }
    if (ctx->pc != 0x12F388u) { return; }
    ctx->pc = 0x12F388u;
label_12f388:
    // 0x12f388: 0x40802d
    ctx->pc = 0x12f388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f38c:
    // 0x12f38c: 0x161100d7
label_12f390:
    if (ctx->pc == 0x12F390u) {
        ctx->pc = 0x12F390u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F394u;
        goto label_12f394;
    }
    ctx->pc = 0x12F38Cu;
    {
        const bool branch_taken_0x12f38c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 17));
        ctx->pc = 0x12F390u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f38c) {
            ctx->pc = 0x12F6ECu;
            goto label_12f6ec;
        }
    }
    ctx->pc = 0x12F394u;
label_12f394:
    // 0x12f394: 0x968202ce
    ctx->pc = 0x12f394u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 718)));
label_12f398:
    // 0x12f398: 0x2c0202d
    ctx->pc = 0x12f398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12f39c:
    // 0x12f39c: 0x24050002
    ctx->pc = 0x12f39cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_12f3a0:
    // 0x12f3a0: 0x24060001
    ctx->pc = 0x12f3a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f3a4:
    // 0x12f3a4: 0x260382d
    ctx->pc = 0x12f3a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f3a8:
    // 0x12f3a8: 0xc04b7d4
label_12f3ac:
    if (ctx->pc == 0x12F3ACu) {
        ctx->pc = 0x12F3ACu;
        WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12F3B0u;
        goto label_12f3b0;
    }
    ctx->pc = 0x12F3A8u;
    SET_GPR_U32(ctx, 31, 0x12F3B0u);
    ctx->pc = 0x12F3ACu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F3B0u; }
    }
    if (ctx->pc != 0x12F3B0u) { return; }
    ctx->pc = 0x12F3B0u;
label_12f3b0:
    // 0x12f3b0: 0x40882d
    ctx->pc = 0x12f3b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f3b4:
    // 0x12f3b4: 0x163000cd
label_12f3b8:
    if (ctx->pc == 0x12F3B8u) {
        ctx->pc = 0x12F3B8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F3BCu;
        goto label_12f3bc;
    }
    ctx->pc = 0x12F3B4u;
    {
        const bool branch_taken_0x12f3b4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 16));
        ctx->pc = 0x12F3B8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f3b4) {
            ctx->pc = 0x12F6ECu;
            goto label_12f6ec;
        }
    }
    ctx->pc = 0x12F3BCu;
label_12f3bc:
    // 0x12f3bc: 0x8e83006c
    ctx->pc = 0x12f3bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_12f3c0:
    // 0x12f3c0: 0x18600057
label_12f3c4:
    if (ctx->pc == 0x12F3C4u) {
        ctx->pc = 0x12F3C4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x12F3C8u;
        goto label_12f3c8;
    }
    ctx->pc = 0x12F3C0u;
    {
        const bool branch_taken_0x12f3c0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x12F3C4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 28));
        if (branch_taken_0x12f3c0) {
            ctx->pc = 0x12F520u;
            goto label_12f520;
        }
    }
    ctx->pc = 0x12F3C8u;
label_12f3c8:
    // 0x12f3c8: 0x96820068
    ctx->pc = 0x12f3c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 104)));
label_12f3cc:
    // 0x12f3cc: 0x2c0202d
    ctx->pc = 0x12f3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12f3d0:
    // 0x12f3d0: 0x24050002
    ctx->pc = 0x12f3d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_12f3d4:
    // 0x12f3d4: 0x24060001
    ctx->pc = 0x12f3d4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f3d8:
    // 0x12f3d8: 0x260382d
    ctx->pc = 0x12f3d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f3dc:
    // 0x12f3dc: 0xc04b7d4
label_12f3e0:
    if (ctx->pc == 0x12F3E0u) {
        ctx->pc = 0x12F3E0u;
        WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12F3E4u;
        goto label_12f3e4;
    }
    ctx->pc = 0x12F3DCu;
    SET_GPR_U32(ctx, 31, 0x12F3E4u);
    ctx->pc = 0x12F3E0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F3E4u; }
    }
    if (ctx->pc != 0x12F3E4u) { return; }
    ctx->pc = 0x12F3E4u;
label_12f3e4:
    // 0x12f3e4: 0x40802d
    ctx->pc = 0x12f3e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f3e8:
    // 0x12f3e8: 0x161100c0
label_12f3ec:
    if (ctx->pc == 0x12F3ECu) {
        ctx->pc = 0x12F3ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F3F0u;
        goto label_12f3f0;
    }
    ctx->pc = 0x12F3E8u;
    {
        const bool branch_taken_0x12f3e8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 17));
        ctx->pc = 0x12F3ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f3e8) {
            ctx->pc = 0x12F6ECu;
            goto label_12f6ec;
        }
    }
    ctx->pc = 0x12F3F0u;
label_12f3f0:
    // 0x12f3f0: 0x9682006c
    ctx->pc = 0x12f3f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 108)));
label_12f3f4:
    // 0x12f3f4: 0x2c0202d
    ctx->pc = 0x12f3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12f3f8:
    // 0x12f3f8: 0x24050002
    ctx->pc = 0x12f3f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_12f3fc:
    // 0x12f3fc: 0x24060001
    ctx->pc = 0x12f3fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f400:
    // 0x12f400: 0x260382d
    ctx->pc = 0x12f400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f404:
    // 0x12f404: 0xc04b7d4
label_12f408:
    if (ctx->pc == 0x12F408u) {
        ctx->pc = 0x12F408u;
        WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12F40Cu;
        goto label_12f40c;
    }
    ctx->pc = 0x12F404u;
    SET_GPR_U32(ctx, 31, 0x12F40Cu);
    ctx->pc = 0x12F408u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F40Cu; }
    }
    if (ctx->pc != 0x12F40Cu) { return; }
    ctx->pc = 0x12F40Cu;
label_12f40c:
    // 0x12f40c: 0x145000b7
label_12f410:
    if (ctx->pc == 0x12F410u) {
        ctx->pc = 0x12F410u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F414u;
        goto label_12f414;
    }
    ctx->pc = 0x12F40Cu;
    {
        const bool branch_taken_0x12f40c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x12F410u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f40c) {
            ctx->pc = 0x12F6ECu;
            goto label_12f6ec;
        }
    }
    ctx->pc = 0x12F414u;
label_12f414:
    // 0x12f414: 0x8e83006c
    ctx->pc = 0x12f414u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_12f418:
    // 0x12f418: 0x24120020
    ctx->pc = 0x12f418u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 32));
label_12f41c:
    // 0x12f41c: 0x18600040
label_12f420:
    if (ctx->pc == 0x12F420u) {
        ctx->pc = 0x12F420u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F424u;
        goto label_12f424;
    }
    ctx->pc = 0x12F41Cu;
    {
        const bool branch_taken_0x12f41c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x12F420u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f41c) {
            ctx->pc = 0x12F520u;
            goto label_12f520;
        }
    }
    ctx->pc = 0x12F424u;
label_12f424:
    // 0x12f424: 0x2c0202d
    ctx->pc = 0x12f424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12f428:
    // 0x12f428: 0x24050002
    ctx->pc = 0x12f428u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_12f42c:
    // 0x12f42c: 0x24060001
    ctx->pc = 0x12f42cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f430:
    // 0x12f430: 0x260382d
    ctx->pc = 0x12f430u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f434:
    // 0x12f434: 0xa7b50016
    ctx->pc = 0x12f434u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 21));
label_12f438:
    // 0x12f438: 0xc04b7d4
label_12f43c:
    if (ctx->pc == 0x12F43Cu) {
        ctx->pc = 0x12F43Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x12F440u;
        goto label_12f440;
    }
    ctx->pc = 0x12F438u;
    SET_GPR_U32(ctx, 31, 0x12F440u);
    ctx->pc = 0x12F43Cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F440u; }
    }
    if (ctx->pc != 0x12F440u) { return; }
    ctx->pc = 0x12F440u;
label_12f440:
    // 0x12f440: 0x2c0202d
    ctx->pc = 0x12f440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12f444:
    // 0x12f444: 0x40802d
    ctx->pc = 0x12f444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f448:
    // 0x12f448: 0x24060001
    ctx->pc = 0x12f448u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f44c:
    // 0x12f44c: 0x24050002
    ctx->pc = 0x12f44cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_12f450:
    // 0x12f450: 0x160600a5
label_12f454:
    if (ctx->pc == 0x12F454u) {
        ctx->pc = 0x12F454u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F458u;
        goto label_12f458;
    }
    ctx->pc = 0x12F450u;
    {
        const bool branch_taken_0x12f450 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 6));
        ctx->pc = 0x12F454u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f450) {
            ctx->pc = 0x12F6E8u;
            goto label_12f6e8;
        }
    }
    ctx->pc = 0x12F458u;
label_12f458:
    // 0x12f458: 0x26520002
    ctx->pc = 0x12f458u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 2));
label_12f45c:
    // 0x12f45c: 0xa7b00016
    ctx->pc = 0x12f45cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 16));
label_12f460:
    // 0x12f460: 0xc04b7d4
label_12f464:
    if (ctx->pc == 0x12F464u) {
        ctx->pc = 0x12F464u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x12F468u;
        goto label_12f468;
    }
    ctx->pc = 0x12F460u;
    SET_GPR_U32(ctx, 31, 0x12F468u);
    ctx->pc = 0x12F464u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 2));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F468u; }
    }
    if (ctx->pc != 0x12F468u) { return; }
    ctx->pc = 0x12F468u;
label_12f468:
    // 0x12f468: 0x26520004
    ctx->pc = 0x12f468u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
label_12f46c:
    // 0x12f46c: 0x40882d
    ctx->pc = 0x12f46cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f470:
    // 0x12f470: 0x26520004
    ctx->pc = 0x12f470u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
label_12f474:
    // 0x12f474: 0x24050004
    ctx->pc = 0x12f474u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
label_12f478:
    // 0x12f478: 0x26520004
    ctx->pc = 0x12f478u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
label_12f47c:
    // 0x12f47c: 0x27a40018
    ctx->pc = 0x12f47cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 24));
label_12f480:
    // 0x12f480: 0x26520004
    ctx->pc = 0x12f480u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
label_12f484:
    // 0x12f484: 0x24060001
    ctx->pc = 0x12f484u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f488:
    // 0x12f488: 0x16300097
label_12f48c:
    if (ctx->pc == 0x12F48Cu) {
        ctx->pc = 0x12F48Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F490u;
        goto label_12f490;
    }
    ctx->pc = 0x12F488u;
    {
        const bool branch_taken_0x12f488 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 16));
        ctx->pc = 0x12F48Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f488) {
            ctx->pc = 0x12F6E8u;
            goto label_12f6e8;
        }
    }
    ctx->pc = 0x12F490u;
label_12f490:
    // 0x12f490: 0x8e820070
    ctx->pc = 0x12f490u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_12f494:
    // 0x12f494: 0xc04b7d4
label_12f498:
    if (ctx->pc == 0x12F498u) {
        ctx->pc = 0x12F498u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x12F49Cu;
        goto label_12f49c;
    }
    ctx->pc = 0x12F494u;
    SET_GPR_U32(ctx, 31, 0x12F49Cu);
    ctx->pc = 0x12F498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F49Cu; }
    }
    if (ctx->pc != 0x12F49Cu) { return; }
    ctx->pc = 0x12F49Cu;
label_12f49c:
    // 0x12f49c: 0x40802d
    ctx->pc = 0x12f49cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f4a0:
    // 0x12f4a0: 0x27a40018
    ctx->pc = 0x12f4a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 24));
label_12f4a4:
    // 0x12f4a4: 0x24050004
    ctx->pc = 0x12f4a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
label_12f4a8:
    // 0x12f4a8: 0x24060001
    ctx->pc = 0x12f4a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f4ac:
    // 0x12f4ac: 0x1611008e
label_12f4b0:
    if (ctx->pc == 0x12F4B0u) {
        ctx->pc = 0x12F4B0u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F4B4u;
        goto label_12f4b4;
    }
    ctx->pc = 0x12F4ACu;
    {
        const bool branch_taken_0x12f4ac = (GPR_U32(ctx, 16) != GPR_U32(ctx, 17));
        ctx->pc = 0x12F4B0u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f4ac) {
            ctx->pc = 0x12F6E8u;
            goto label_12f6e8;
        }
    }
    ctx->pc = 0x12F4B4u;
label_12f4b4:
    // 0x12f4b4: 0x8e820074
    ctx->pc = 0x12f4b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_12f4b8:
    // 0x12f4b8: 0xc04b7d4
label_12f4bc:
    if (ctx->pc == 0x12F4BCu) {
        ctx->pc = 0x12F4BCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x12F4C0u;
        goto label_12f4c0;
    }
    ctx->pc = 0x12F4B8u;
    SET_GPR_U32(ctx, 31, 0x12F4C0u);
    ctx->pc = 0x12F4BCu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F4C0u; }
    }
    if (ctx->pc != 0x12F4C0u) { return; }
    ctx->pc = 0x12F4C0u;
label_12f4c0:
    // 0x12f4c0: 0x40882d
    ctx->pc = 0x12f4c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f4c4:
    // 0x12f4c4: 0x27a40018
    ctx->pc = 0x12f4c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 24));
label_12f4c8:
    // 0x12f4c8: 0x24050004
    ctx->pc = 0x12f4c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
label_12f4cc:
    // 0x12f4cc: 0x24060001
    ctx->pc = 0x12f4ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f4d0:
    // 0x12f4d0: 0x16300085
label_12f4d4:
    if (ctx->pc == 0x12F4D4u) {
        ctx->pc = 0x12F4D4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F4D8u;
        goto label_12f4d8;
    }
    ctx->pc = 0x12F4D0u;
    {
        const bool branch_taken_0x12f4d0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 16));
        ctx->pc = 0x12F4D4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f4d0) {
            ctx->pc = 0x12F6E8u;
            goto label_12f6e8;
        }
    }
    ctx->pc = 0x12F4D8u;
label_12f4d8:
    // 0x12f4d8: 0x8e820078
    ctx->pc = 0x12f4d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 120)));
label_12f4dc:
    // 0x12f4dc: 0xc04b7d4
label_12f4e0:
    if (ctx->pc == 0x12F4E0u) {
        ctx->pc = 0x12F4E0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x12F4E4u;
        goto label_12f4e4;
    }
    ctx->pc = 0x12F4DCu;
    SET_GPR_U32(ctx, 31, 0x12F4E4u);
    ctx->pc = 0x12F4E0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F4E4u; }
    }
    if (ctx->pc != 0x12F4E4u) { return; }
    ctx->pc = 0x12F4E4u;
label_12f4e4:
    // 0x12f4e4: 0x40802d
    ctx->pc = 0x12f4e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f4e8:
    // 0x12f4e8: 0x27a40018
    ctx->pc = 0x12f4e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 24));
label_12f4ec:
    // 0x12f4ec: 0x24050004
    ctx->pc = 0x12f4ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
label_12f4f0:
    // 0x12f4f0: 0x24060001
    ctx->pc = 0x12f4f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f4f4:
    // 0x12f4f4: 0x1611007c
label_12f4f8:
    if (ctx->pc == 0x12F4F8u) {
        ctx->pc = 0x12F4F8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F4FCu;
        goto label_12f4fc;
    }
    ctx->pc = 0x12F4F4u;
    {
        const bool branch_taken_0x12f4f4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 17));
        ctx->pc = 0x12F4F8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f4f4) {
            ctx->pc = 0x12F6E8u;
            goto label_12f6e8;
        }
    }
    ctx->pc = 0x12F4FCu;
label_12f4fc:
    // 0x12f4fc: 0x8e82007c
    ctx->pc = 0x12f4fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 124)));
label_12f500:
    // 0x12f500: 0xc04b7d4
label_12f504:
    if (ctx->pc == 0x12F504u) {
        ctx->pc = 0x12F504u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x12F508u;
        goto label_12f508;
    }
    ctx->pc = 0x12F500u;
    SET_GPR_U32(ctx, 31, 0x12F508u);
    ctx->pc = 0x12F504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F508u; }
    }
    if (ctx->pc != 0x12F508u) { return; }
    ctx->pc = 0x12F508u;
label_12f508:
    // 0x12f508: 0x14500078
label_12f50c:
    if (ctx->pc == 0x12F50Cu) {
        ctx->pc = 0x12F50Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F510u;
        goto label_12f510;
    }
    ctx->pc = 0x12F508u;
    {
        const bool branch_taken_0x12f508 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x12F50Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f508) {
            ctx->pc = 0x12F6ECu;
            goto label_12f6ec;
        }
    }
    ctx->pc = 0x12F510u;
label_12f510:
    // 0x12f510: 0x8e83006c
    ctx->pc = 0x12f510u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_12f514:
    // 0x12f514: 0x2a3102a
    ctx->pc = 0x12f514u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 3)));
label_12f518:
    // 0x12f518: 0x1440ffc3
label_12f51c:
    if (ctx->pc == 0x12F51Cu) {
        ctx->pc = 0x12F51Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F520u;
        goto label_12f520;
    }
    ctx->pc = 0x12F518u;
    {
        const bool branch_taken_0x12f518 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12F51Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f518) {
            ctx->pc = 0x12F428u;
            goto label_12f428;
        }
    }
    ctx->pc = 0x12F520u;
label_12f520:
    // 0x12f520: 0x829002d6
    ctx->pc = 0x12f520u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 726)));
label_12f524:
    // 0x12f524: 0x24020001
    ctx->pc = 0x12f524u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_12f528:
    // 0x12f528: 0x56020052
label_12f52c:
    if (ctx->pc == 0x12F52Cu) {
        ctx->pc = 0x12F52Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 72)));
        ctx->pc = 0x12F530u;
        goto label_12f530;
    }
    ctx->pc = 0x12F528u;
    {
        const bool branch_taken_0x12f528 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x12f528) {
            ctx->pc = 0x12F52Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 72)));
            ctx->pc = 0x12F674u;
            goto label_12f674;
        }
    }
    ctx->pc = 0x12F530u;
label_12f530:
    // 0x12f530: 0x1460000b
label_12f534:
    if (ctx->pc == 0x12F534u) {
        ctx->pc = 0x12F534u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16713 << 16));
        ctx->pc = 0x12F538u;
        goto label_12f538;
    }
    ctx->pc = 0x12F530u;
    {
        const bool branch_taken_0x12f530 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x12F534u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16713 << 16));
        if (branch_taken_0x12f530) {
            ctx->pc = 0x12F560u;
            goto label_12f560;
        }
    }
    ctx->pc = 0x12F538u;
label_12f538:
    // 0x12f538: 0x27a40018
    ctx->pc = 0x12f538u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 24));
label_12f53c:
    // 0x12f53c: 0x24050004
    ctx->pc = 0x12f53cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
label_12f540:
    // 0x12f540: 0x24060001
    ctx->pc = 0x12f540u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f544:
    // 0x12f544: 0x260382d
    ctx->pc = 0x12f544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f548:
    // 0x12f548: 0xc04b7d4
label_12f54c:
    if (ctx->pc == 0x12F54Cu) {
        ctx->pc = 0x12F54Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->pc = 0x12F550u;
        goto label_12f550;
    }
    ctx->pc = 0x12F548u;
    SET_GPR_U32(ctx, 31, 0x12F550u);
    ctx->pc = 0x12F54Cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F550u; }
    }
    if (ctx->pc != 0x12F550u) { return; }
    ctx->pc = 0x12F550u;
label_12f550:
    // 0x12f550: 0x14500066
label_12f554:
    if (ctx->pc == 0x12F554u) {
        ctx->pc = 0x12F554u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F558u;
        goto label_12f558;
    }
    ctx->pc = 0x12F550u;
    {
        const bool branch_taken_0x12f550 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x12F554u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f550) {
            ctx->pc = 0x12F6ECu;
            goto label_12f6ec;
        }
    }
    ctx->pc = 0x12F558u;
label_12f558:
    // 0x12f558: 0x26520004
    ctx->pc = 0x12f558u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
label_12f55c:
    // 0x12f55c: 0x3c024149
    ctx->pc = 0x12f55cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16713 << 16));
label_12f560:
    // 0x12f560: 0x27a40018
    ctx->pc = 0x12f560u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 24));
label_12f564:
    // 0x12f564: 0x34424e46
    ctx->pc = 0x12f564u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 20038));
label_12f568:
    // 0x12f568: 0x24050004
    ctx->pc = 0x12f568u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
label_12f56c:
    // 0x12f56c: 0x24060001
    ctx->pc = 0x12f56cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f570:
    // 0x12f570: 0x260382d
    ctx->pc = 0x12f570u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f574:
    // 0x12f574: 0xc04b7d4
label_12f578:
    if (ctx->pc == 0x12F578u) {
        ctx->pc = 0x12F578u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x12F57Cu;
        goto label_12f57c;
    }
    ctx->pc = 0x12F574u;
    SET_GPR_U32(ctx, 31, 0x12F57Cu);
    ctx->pc = 0x12F578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F57Cu; }
    }
    if (ctx->pc != 0x12F57Cu) { return; }
    ctx->pc = 0x12F57Cu;
label_12f57c:
    // 0x12f57c: 0x40882d
    ctx->pc = 0x12f57cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f580:
    // 0x12f580: 0x1630005a
label_12f584:
    if (ctx->pc == 0x12F584u) {
        ctx->pc = 0x12F584u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F588u;
        goto label_12f588;
    }
    ctx->pc = 0x12F580u;
    {
        const bool branch_taken_0x12f580 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 16));
        ctx->pc = 0x12F584u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f580) {
            ctx->pc = 0x12F6ECu;
            goto label_12f6ec;
        }
    }
    ctx->pc = 0x12F588u;
label_12f588:
    // 0x12f588: 0x24020018
    ctx->pc = 0x12f588u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
label_12f58c:
    // 0x12f58c: 0x27a40018
    ctx->pc = 0x12f58cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 24));
label_12f590:
    // 0x12f590: 0x24050004
    ctx->pc = 0x12f590u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
label_12f594:
    // 0x12f594: 0x24060001
    ctx->pc = 0x12f594u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f598:
    // 0x12f598: 0x260382d
    ctx->pc = 0x12f598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f59c:
    // 0x12f59c: 0xc04b7d4
label_12f5a0:
    if (ctx->pc == 0x12F5A0u) {
        ctx->pc = 0x12F5A0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x12F5A4u;
        goto label_12f5a4;
    }
    ctx->pc = 0x12F59Cu;
    SET_GPR_U32(ctx, 31, 0x12F5A4u);
    ctx->pc = 0x12F5A0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F5A4u; }
    }
    if (ctx->pc != 0x12F5A4u) { return; }
    ctx->pc = 0x12F5A4u;
label_12f5a4:
    // 0x12f5a4: 0x40a82d
    ctx->pc = 0x12f5a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f5a8:
    // 0x12f5a8: 0x16b1004f
label_12f5ac:
    if (ctx->pc == 0x12F5ACu) {
        ctx->pc = 0x12F5ACu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x12F5B0u;
        goto label_12f5b0;
    }
    ctx->pc = 0x12F5A8u;
    {
        const bool branch_taken_0x12f5a8 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 17));
        ctx->pc = 0x12F5ACu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
        if (branch_taken_0x12f5a8) {
            ctx->pc = 0x12F6E8u;
            goto label_12f6e8;
        }
    }
    ctx->pc = 0x12F5B0u;
label_12f5b0:
    // 0x12f5b0: 0x268402d7
    ctx->pc = 0x12f5b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 727));
label_12f5b4:
    // 0x12f5b4: 0x24050001
    ctx->pc = 0x12f5b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12f5b8:
    // 0x12f5b8: 0x24060010
    ctx->pc = 0x12f5b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
label_12f5bc:
    // 0x12f5bc: 0xc04b7d4
label_12f5c0:
    if (ctx->pc == 0x12F5C0u) {
        ctx->pc = 0x12F5C0u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F5C4u;
        goto label_12f5c4;
    }
    ctx->pc = 0x12F5BCu;
    SET_GPR_U32(ctx, 31, 0x12F5C4u);
    ctx->pc = 0x12F5C0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F5C4u; }
    }
    if (ctx->pc != 0x12F5C4u) { return; }
    ctx->pc = 0x12F5C4u;
label_12f5c4:
    // 0x12f5c4: 0x24030010
    ctx->pc = 0x12f5c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
label_12f5c8:
    // 0x12f5c8: 0x14430047
label_12f5cc:
    if (ctx->pc == 0x12F5CCu) {
        ctx->pc = 0x12F5CCu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x12F5D0u;
        goto label_12f5d0;
    }
    ctx->pc = 0x12F5C8u;
    {
        const bool branch_taken_0x12f5c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x12F5CCu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
        if (branch_taken_0x12f5c8) {
            ctx->pc = 0x12F6E8u;
            goto label_12f6e8;
        }
    }
    ctx->pc = 0x12F5D0u;
label_12f5d0:
    // 0x12f5d0: 0x968202e8
    ctx->pc = 0x12f5d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 744)));
label_12f5d4:
    // 0x12f5d4: 0x2c0202d
    ctx->pc = 0x12f5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12f5d8:
    // 0x12f5d8: 0x24050002
    ctx->pc = 0x12f5d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_12f5dc:
    // 0x12f5dc: 0x24060001
    ctx->pc = 0x12f5dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f5e0:
    // 0x12f5e0: 0x260382d
    ctx->pc = 0x12f5e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f5e4:
    // 0x12f5e4: 0xc04b7d4
label_12f5e8:
    if (ctx->pc == 0x12F5E8u) {
        ctx->pc = 0x12F5E8u;
        WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12F5ECu;
        goto label_12f5ec;
    }
    ctx->pc = 0x12F5E4u;
    SET_GPR_U32(ctx, 31, 0x12F5ECu);
    ctx->pc = 0x12F5E8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F5ECu; }
    }
    if (ctx->pc != 0x12F5ECu) { return; }
    ctx->pc = 0x12F5ECu;
label_12f5ec:
    // 0x12f5ec: 0x40802d
    ctx->pc = 0x12f5ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f5f0:
    // 0x12f5f0: 0x1615003d
label_12f5f4:
    if (ctx->pc == 0x12F5F4u) {
        ctx->pc = 0x12F5F4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x12F5F8u;
        goto label_12f5f8;
    }
    ctx->pc = 0x12F5F0u;
    {
        const bool branch_taken_0x12f5f0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 21));
        ctx->pc = 0x12F5F4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 16));
        if (branch_taken_0x12f5f0) {
            ctx->pc = 0x12F6E8u;
            goto label_12f6e8;
        }
    }
    ctx->pc = 0x12F5F8u;
label_12f5f8:
    // 0x12f5f8: 0x2c0202d
    ctx->pc = 0x12f5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12f5fc:
    // 0x12f5fc: 0x24050002
    ctx->pc = 0x12f5fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_12f600:
    // 0x12f600: 0x24060001
    ctx->pc = 0x12f600u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f604:
    // 0x12f604: 0x260382d
    ctx->pc = 0x12f604u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f608:
    // 0x12f608: 0xc04b7d4
label_12f60c:
    if (ctx->pc == 0x12F60Cu) {
        ctx->pc = 0x12F60Cu;
        WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x12F610u;
        goto label_12f610;
    }
    ctx->pc = 0x12F608u;
    SET_GPR_U32(ctx, 31, 0x12F610u);
    ctx->pc = 0x12F60Cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F610u; }
    }
    if (ctx->pc != 0x12F610u) { return; }
    ctx->pc = 0x12F610u;
label_12f610:
    // 0x12f610: 0x40882d
    ctx->pc = 0x12f610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f614:
    // 0x12f614: 0x16300034
label_12f618:
    if (ctx->pc == 0x12F618u) {
        ctx->pc = 0x12F618u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x12F61Cu;
        goto label_12f61c;
    }
    ctx->pc = 0x12F614u;
    {
        const bool branch_taken_0x12f614 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 16));
        ctx->pc = 0x12F618u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x12f614) {
            ctx->pc = 0x12F6E8u;
            goto label_12f6e8;
        }
    }
    ctx->pc = 0x12F61Cu;
label_12f61c:
    // 0x12f61c: 0x968202ea
    ctx->pc = 0x12f61cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 746)));
label_12f620:
    // 0x12f620: 0x2c0202d
    ctx->pc = 0x12f620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12f624:
    // 0x12f624: 0x24050002
    ctx->pc = 0x12f624u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_12f628:
    // 0x12f628: 0x24060001
    ctx->pc = 0x12f628u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f62c:
    // 0x12f62c: 0x260382d
    ctx->pc = 0x12f62cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f630:
    // 0x12f630: 0xc04b7d4
label_12f634:
    if (ctx->pc == 0x12F634u) {
        ctx->pc = 0x12F634u;
        WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12F638u;
        goto label_12f638;
    }
    ctx->pc = 0x12F630u;
    SET_GPR_U32(ctx, 31, 0x12F638u);
    ctx->pc = 0x12F634u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F638u; }
    }
    if (ctx->pc != 0x12F638u) { return; }
    ctx->pc = 0x12F638u;
label_12f638:
    // 0x12f638: 0x40802d
    ctx->pc = 0x12f638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f63c:
    // 0x12f63c: 0x1611002a
label_12f640:
    if (ctx->pc == 0x12F640u) {
        ctx->pc = 0x12F640u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x12F644u;
        goto label_12f644;
    }
    ctx->pc = 0x12F63Cu;
    {
        const bool branch_taken_0x12f63c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 17));
        ctx->pc = 0x12F640u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x12f63c) {
            ctx->pc = 0x12F6E8u;
            goto label_12f6e8;
        }
    }
    ctx->pc = 0x12F644u;
label_12f644:
    // 0x12f644: 0x968202ec
    ctx->pc = 0x12f644u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 748)));
label_12f648:
    // 0x12f648: 0x2c0202d
    ctx->pc = 0x12f648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12f64c:
    // 0x12f64c: 0x24050002
    ctx->pc = 0x12f64cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_12f650:
    // 0x12f650: 0x24060001
    ctx->pc = 0x12f650u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f654:
    // 0x12f654: 0x260382d
    ctx->pc = 0x12f654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f658:
    // 0x12f658: 0xa7a20016
    ctx->pc = 0x12f658u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 2));
label_12f65c:
    // 0x12f65c: 0xc04b7d4
label_12f660:
    if (ctx->pc == 0x12F660u) {
        ctx->pc = 0x12F660u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x12F664u;
        goto label_12f664;
    }
    ctx->pc = 0x12F65Cu;
    SET_GPR_U32(ctx, 31, 0x12F664u);
    ctx->pc = 0x12F660u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 2));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F664u; }
    }
    if (ctx->pc != 0x12F664u) { return; }
    ctx->pc = 0x12F664u;
label_12f664:
    // 0x12f664: 0x14500021
label_12f668:
    if (ctx->pc == 0x12F668u) {
        ctx->pc = 0x12F668u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F66Cu;
        goto label_12f66c;
    }
    ctx->pc = 0x12F664u;
    {
        const bool branch_taken_0x12f664 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x12F668u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f664) {
            ctx->pc = 0x12F6ECu;
            goto label_12f6ec;
        }
    }
    ctx->pc = 0x12F66Cu;
label_12f66c:
    // 0x12f66c: 0x26520002
    ctx->pc = 0x12f66cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 2));
label_12f670:
    // 0x12f670: 0x8e830048
    ctx->pc = 0x12f670u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_12f674:
    // 0x12f674: 0x7e8023
    ctx->pc = 0x12f674u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_12f678:
    // 0x12f678: 0x250102a
    ctx->pc = 0x12f678u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 16)));
label_12f67c:
    // 0x12f67c: 0x1040000e
label_12f680:
    if (ctx->pc == 0x12F680u) {
        ctx->pc = 0x12F680u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x12F684u;
        goto label_12f684;
    }
    ctx->pc = 0x12F67Cu;
    {
        const bool branch_taken_0x12f67c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12F680u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x12f67c) {
            ctx->pc = 0x12F6B8u;
            goto label_12f6b8;
        }
    }
    ctx->pc = 0x12F684u;
label_12f684:
    // 0x12f684: 0x24110001
    ctx->pc = 0x12f684u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
label_12f688:
    // 0x12f688: 0x2e0202d
    ctx->pc = 0x12f688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12f68c:
    // 0x12f68c: 0x0
    ctx->pc = 0x12f68cu;
    // NOP
label_12f690:
    // 0x12f690: 0x24050001
    ctx->pc = 0x12f690u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12f694:
    // 0x12f694: 0x24060001
    ctx->pc = 0x12f694u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_12f698:
    // 0x12f698: 0xc04b7d4
label_12f69c:
    if (ctx->pc == 0x12F69Cu) {
        ctx->pc = 0x12F69Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F6A0u;
        goto label_12f6a0;
    }
    ctx->pc = 0x12F698u;
    SET_GPR_U32(ctx, 31, 0x12F6A0u);
    ctx->pc = 0x12F69Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F6A0u; }
    }
    if (ctx->pc != 0x12F6A0u) { return; }
    ctx->pc = 0x12F6A0u;
label_12f6a0:
    // 0x12f6a0: 0x14510012
label_12f6a4:
    if (ctx->pc == 0x12F6A4u) {
        ctx->pc = 0x12F6A4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F6A8u;
        goto label_12f6a8;
    }
    ctx->pc = 0x12F6A0u;
    {
        const bool branch_taken_0x12f6a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x12F6A4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f6a0) {
            ctx->pc = 0x12F6ECu;
            goto label_12f6ec;
        }
    }
    ctx->pc = 0x12F6A8u;
label_12f6a8:
    // 0x12f6a8: 0x26520001
    ctx->pc = 0x12f6a8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_12f6ac:
    // 0x12f6ac: 0x250102a
    ctx->pc = 0x12f6acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 16)));
label_12f6b0:
    // 0x12f6b0: 0x1440fff7
label_12f6b4:
    if (ctx->pc == 0x12F6B4u) {
        ctx->pc = 0x12F6B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F6B8u;
        goto label_12f6b8;
    }
    ctx->pc = 0x12F6B0u;
    {
        const bool branch_taken_0x12f6b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12F6B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12f6b0) {
            ctx->pc = 0x12F690u;
            goto label_12f690;
        }
    }
    ctx->pc = 0x12F6B8u;
label_12f6b8:
    // 0x12f6b8: 0x3c020022
    ctx->pc = 0x12f6b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
label_12f6bc:
    // 0x12f6bc: 0x260382d
    ctx->pc = 0x12f6bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f6c0:
    // 0x12f6c0: 0x8c44875c
    ctx->pc = 0x12f6c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294936412)));
label_12f6c4:
    // 0x12f6c4: 0x24050001
    ctx->pc = 0x12f6c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12f6c8:
    // 0x12f6c8: 0xc04b7d4
label_12f6cc:
    if (ctx->pc == 0x12F6CCu) {
        ctx->pc = 0x12F6CCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F6D0u;
        goto label_12f6d0;
    }
    ctx->pc = 0x12F6C8u;
    SET_GPR_U32(ctx, 31, 0x12F6D0u);
    ctx->pc = 0x12F6CCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12DF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DF50_0x12df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F6D0u; }
    }
    if (ctx->pc != 0x12F6D0u) { return; }
    ctx->pc = 0x12F6D0u;
label_12f6d0:
    // 0x12f6d0: 0x545e0006
label_12f6d4:
    if (ctx->pc == 0x12F6D4u) {
        ctx->pc = 0x12F6D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F6D8u;
        goto label_12f6d8;
    }
    ctx->pc = 0x12F6D0u;
    {
        const bool branch_taken_0x12f6d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 30));
        if (branch_taken_0x12f6d0) {
            ctx->pc = 0x12F6D4u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x12F6ECu;
            goto label_12f6ec;
        }
    }
    ctx->pc = 0x12F6D8u;
label_12f6d8:
    // 0x12f6d8: 0x25e9021
    ctx->pc = 0x12f6d8u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
label_12f6dc:
    // 0x12f6dc: 0x10000003
label_12f6e0:
    if (ctx->pc == 0x12F6E0u) {
        ctx->pc = 0x12F6E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x12F6E4u;
        goto label_12f6e4;
    }
    ctx->pc = 0x12F6DCu;
    {
        const bool branch_taken_0x12f6dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12F6E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 4));
        if (branch_taken_0x12f6dc) {
            ctx->pc = 0x12F6ECu;
            goto label_12f6ec;
        }
    }
    ctx->pc = 0x12F6E4u;
label_12f6e4:
    // 0x12f6e4: 0x0
    ctx->pc = 0x12f6e4u;
    // NOP
label_12f6e8:
    // 0x12f6e8: 0x102d
    ctx->pc = 0x12f6e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f6ec:
    // 0x12f6ec: 0xdfb00020
    ctx->pc = 0x12f6ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12f6f0:
    // 0x12f6f0: 0xdfb10028
    ctx->pc = 0x12f6f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_12f6f4:
    // 0x12f6f4: 0xdfb20030
    ctx->pc = 0x12f6f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12f6f8:
    // 0x12f6f8: 0xdfb30038
    ctx->pc = 0x12f6f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_12f6fc:
    // 0x12f6fc: 0xdfb40040
    ctx->pc = 0x12f6fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_12f700:
    // 0x12f700: 0xdfb50048
    ctx->pc = 0x12f700u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_12f704:
    // 0x12f704: 0xdfb60050
    ctx->pc = 0x12f704u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_12f708:
    // 0x12f708: 0xdfb70058
    ctx->pc = 0x12f708u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_12f70c:
    // 0x12f70c: 0xdfbe0060
    ctx->pc = 0x12f70cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_12f710:
    // 0x12f710: 0xdfbf0068
    ctx->pc = 0x12f710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_12f714:
    // 0x12f714: 0x3e00008
label_12f718:
    if (ctx->pc == 0x12F718u) {
        ctx->pc = 0x12F718u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x12F71Cu;
        goto label_12f71c;
    }
    ctx->pc = 0x12F714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F718u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F090u: goto label_12f090;
            case 0x12F094u: goto label_12f094;
            case 0x12F098u: goto label_12f098;
            case 0x12F09Cu: goto label_12f09c;
            case 0x12F0A0u: goto label_12f0a0;
            case 0x12F0A4u: goto label_12f0a4;
            case 0x12F0A8u: goto label_12f0a8;
            case 0x12F0ACu: goto label_12f0ac;
            case 0x12F0B0u: goto label_12f0b0;
            case 0x12F0B4u: goto label_12f0b4;
            case 0x12F0B8u: goto label_12f0b8;
            case 0x12F0BCu: goto label_12f0bc;
            case 0x12F0C0u: goto label_12f0c0;
            case 0x12F0C4u: goto label_12f0c4;
            case 0x12F0C8u: goto label_12f0c8;
            case 0x12F0CCu: goto label_12f0cc;
            case 0x12F0D0u: goto label_12f0d0;
            case 0x12F0D4u: goto label_12f0d4;
            case 0x12F0D8u: goto label_12f0d8;
            case 0x12F0DCu: goto label_12f0dc;
            case 0x12F0E0u: goto label_12f0e0;
            case 0x12F0E4u: goto label_12f0e4;
            case 0x12F0E8u: goto label_12f0e8;
            case 0x12F0ECu: goto label_12f0ec;
            case 0x12F0F0u: goto label_12f0f0;
            case 0x12F0F4u: goto label_12f0f4;
            case 0x12F0F8u: goto label_12f0f8;
            case 0x12F0FCu: goto label_12f0fc;
            case 0x12F100u: goto label_12f100;
            case 0x12F104u: goto label_12f104;
            case 0x12F108u: goto label_12f108;
            case 0x12F10Cu: goto label_12f10c;
            case 0x12F110u: goto label_12f110;
            case 0x12F114u: goto label_12f114;
            case 0x12F118u: goto label_12f118;
            case 0x12F11Cu: goto label_12f11c;
            case 0x12F120u: goto label_12f120;
            case 0x12F124u: goto label_12f124;
            case 0x12F128u: goto label_12f128;
            case 0x12F12Cu: goto label_12f12c;
            case 0x12F130u: goto label_12f130;
            case 0x12F134u: goto label_12f134;
            case 0x12F138u: goto label_12f138;
            case 0x12F13Cu: goto label_12f13c;
            case 0x12F140u: goto label_12f140;
            case 0x12F144u: goto label_12f144;
            case 0x12F148u: goto label_12f148;
            case 0x12F14Cu: goto label_12f14c;
            case 0x12F150u: goto label_12f150;
            case 0x12F154u: goto label_12f154;
            case 0x12F158u: goto label_12f158;
            case 0x12F15Cu: goto label_12f15c;
            case 0x12F160u: goto label_12f160;
            case 0x12F164u: goto label_12f164;
            case 0x12F168u: goto label_12f168;
            case 0x12F16Cu: goto label_12f16c;
            case 0x12F170u: goto label_12f170;
            case 0x12F174u: goto label_12f174;
            case 0x12F178u: goto label_12f178;
            case 0x12F17Cu: goto label_12f17c;
            case 0x12F180u: goto label_12f180;
            case 0x12F184u: goto label_12f184;
            case 0x12F188u: goto label_12f188;
            case 0x12F18Cu: goto label_12f18c;
            case 0x12F190u: goto label_12f190;
            case 0x12F194u: goto label_12f194;
            case 0x12F198u: goto label_12f198;
            case 0x12F19Cu: goto label_12f19c;
            case 0x12F1A0u: goto label_12f1a0;
            case 0x12F1A4u: goto label_12f1a4;
            case 0x12F1A8u: goto label_12f1a8;
            case 0x12F1ACu: goto label_12f1ac;
            case 0x12F1B0u: goto label_12f1b0;
            case 0x12F1B4u: goto label_12f1b4;
            case 0x12F1B8u: goto label_12f1b8;
            case 0x12F1BCu: goto label_12f1bc;
            case 0x12F1C0u: goto label_12f1c0;
            case 0x12F1C4u: goto label_12f1c4;
            case 0x12F1C8u: goto label_12f1c8;
            case 0x12F1CCu: goto label_12f1cc;
            case 0x12F1D0u: goto label_12f1d0;
            case 0x12F1D4u: goto label_12f1d4;
            case 0x12F1D8u: goto label_12f1d8;
            case 0x12F1DCu: goto label_12f1dc;
            case 0x12F1E0u: goto label_12f1e0;
            case 0x12F1E4u: goto label_12f1e4;
            case 0x12F1E8u: goto label_12f1e8;
            case 0x12F1ECu: goto label_12f1ec;
            case 0x12F1F0u: goto label_12f1f0;
            case 0x12F1F4u: goto label_12f1f4;
            case 0x12F1F8u: goto label_12f1f8;
            case 0x12F1FCu: goto label_12f1fc;
            case 0x12F200u: goto label_12f200;
            case 0x12F204u: goto label_12f204;
            case 0x12F208u: goto label_12f208;
            case 0x12F20Cu: goto label_12f20c;
            case 0x12F210u: goto label_12f210;
            case 0x12F214u: goto label_12f214;
            case 0x12F218u: goto label_12f218;
            case 0x12F21Cu: goto label_12f21c;
            case 0x12F220u: goto label_12f220;
            case 0x12F224u: goto label_12f224;
            case 0x12F228u: goto label_12f228;
            case 0x12F22Cu: goto label_12f22c;
            case 0x12F230u: goto label_12f230;
            case 0x12F234u: goto label_12f234;
            case 0x12F238u: goto label_12f238;
            case 0x12F23Cu: goto label_12f23c;
            case 0x12F240u: goto label_12f240;
            case 0x12F244u: goto label_12f244;
            case 0x12F248u: goto label_12f248;
            case 0x12F24Cu: goto label_12f24c;
            case 0x12F250u: goto label_12f250;
            case 0x12F254u: goto label_12f254;
            case 0x12F258u: goto label_12f258;
            case 0x12F25Cu: goto label_12f25c;
            case 0x12F260u: goto label_12f260;
            case 0x12F264u: goto label_12f264;
            case 0x12F268u: goto label_12f268;
            case 0x12F26Cu: goto label_12f26c;
            case 0x12F270u: goto label_12f270;
            case 0x12F274u: goto label_12f274;
            case 0x12F278u: goto label_12f278;
            case 0x12F27Cu: goto label_12f27c;
            case 0x12F280u: goto label_12f280;
            case 0x12F284u: goto label_12f284;
            case 0x12F288u: goto label_12f288;
            case 0x12F28Cu: goto label_12f28c;
            case 0x12F290u: goto label_12f290;
            case 0x12F294u: goto label_12f294;
            case 0x12F298u: goto label_12f298;
            case 0x12F29Cu: goto label_12f29c;
            case 0x12F2A0u: goto label_12f2a0;
            case 0x12F2A4u: goto label_12f2a4;
            case 0x12F2A8u: goto label_12f2a8;
            case 0x12F2ACu: goto label_12f2ac;
            case 0x12F2B0u: goto label_12f2b0;
            case 0x12F2B4u: goto label_12f2b4;
            case 0x12F2B8u: goto label_12f2b8;
            case 0x12F2BCu: goto label_12f2bc;
            case 0x12F2C0u: goto label_12f2c0;
            case 0x12F2C4u: goto label_12f2c4;
            case 0x12F2C8u: goto label_12f2c8;
            case 0x12F2CCu: goto label_12f2cc;
            case 0x12F2D0u: goto label_12f2d0;
            case 0x12F2D4u: goto label_12f2d4;
            case 0x12F2D8u: goto label_12f2d8;
            case 0x12F2DCu: goto label_12f2dc;
            case 0x12F2E0u: goto label_12f2e0;
            case 0x12F2E4u: goto label_12f2e4;
            case 0x12F2E8u: goto label_12f2e8;
            case 0x12F2ECu: goto label_12f2ec;
            case 0x12F2F0u: goto label_12f2f0;
            case 0x12F2F4u: goto label_12f2f4;
            case 0x12F2F8u: goto label_12f2f8;
            case 0x12F2FCu: goto label_12f2fc;
            case 0x12F300u: goto label_12f300;
            case 0x12F304u: goto label_12f304;
            case 0x12F308u: goto label_12f308;
            case 0x12F30Cu: goto label_12f30c;
            case 0x12F310u: goto label_12f310;
            case 0x12F314u: goto label_12f314;
            case 0x12F318u: goto label_12f318;
            case 0x12F31Cu: goto label_12f31c;
            case 0x12F320u: goto label_12f320;
            case 0x12F324u: goto label_12f324;
            case 0x12F328u: goto label_12f328;
            case 0x12F32Cu: goto label_12f32c;
            case 0x12F330u: goto label_12f330;
            case 0x12F334u: goto label_12f334;
            case 0x12F338u: goto label_12f338;
            case 0x12F33Cu: goto label_12f33c;
            case 0x12F340u: goto label_12f340;
            case 0x12F344u: goto label_12f344;
            case 0x12F348u: goto label_12f348;
            case 0x12F34Cu: goto label_12f34c;
            case 0x12F350u: goto label_12f350;
            case 0x12F354u: goto label_12f354;
            case 0x12F358u: goto label_12f358;
            case 0x12F35Cu: goto label_12f35c;
            case 0x12F360u: goto label_12f360;
            case 0x12F364u: goto label_12f364;
            case 0x12F368u: goto label_12f368;
            case 0x12F36Cu: goto label_12f36c;
            case 0x12F370u: goto label_12f370;
            case 0x12F374u: goto label_12f374;
            case 0x12F378u: goto label_12f378;
            case 0x12F37Cu: goto label_12f37c;
            case 0x12F380u: goto label_12f380;
            case 0x12F384u: goto label_12f384;
            case 0x12F388u: goto label_12f388;
            case 0x12F38Cu: goto label_12f38c;
            case 0x12F390u: goto label_12f390;
            case 0x12F394u: goto label_12f394;
            case 0x12F398u: goto label_12f398;
            case 0x12F39Cu: goto label_12f39c;
            case 0x12F3A0u: goto label_12f3a0;
            case 0x12F3A4u: goto label_12f3a4;
            case 0x12F3A8u: goto label_12f3a8;
            case 0x12F3ACu: goto label_12f3ac;
            case 0x12F3B0u: goto label_12f3b0;
            case 0x12F3B4u: goto label_12f3b4;
            case 0x12F3B8u: goto label_12f3b8;
            case 0x12F3BCu: goto label_12f3bc;
            case 0x12F3C0u: goto label_12f3c0;
            case 0x12F3C4u: goto label_12f3c4;
            case 0x12F3C8u: goto label_12f3c8;
            case 0x12F3CCu: goto label_12f3cc;
            case 0x12F3D0u: goto label_12f3d0;
            case 0x12F3D4u: goto label_12f3d4;
            case 0x12F3D8u: goto label_12f3d8;
            case 0x12F3DCu: goto label_12f3dc;
            case 0x12F3E0u: goto label_12f3e0;
            case 0x12F3E4u: goto label_12f3e4;
            case 0x12F3E8u: goto label_12f3e8;
            case 0x12F3ECu: goto label_12f3ec;
            case 0x12F3F0u: goto label_12f3f0;
            case 0x12F3F4u: goto label_12f3f4;
            case 0x12F3F8u: goto label_12f3f8;
            case 0x12F3FCu: goto label_12f3fc;
            case 0x12F400u: goto label_12f400;
            case 0x12F404u: goto label_12f404;
            case 0x12F408u: goto label_12f408;
            case 0x12F40Cu: goto label_12f40c;
            case 0x12F410u: goto label_12f410;
            case 0x12F414u: goto label_12f414;
            case 0x12F418u: goto label_12f418;
            case 0x12F41Cu: goto label_12f41c;
            case 0x12F420u: goto label_12f420;
            case 0x12F424u: goto label_12f424;
            case 0x12F428u: goto label_12f428;
            case 0x12F42Cu: goto label_12f42c;
            case 0x12F430u: goto label_12f430;
            case 0x12F434u: goto label_12f434;
            case 0x12F438u: goto label_12f438;
            case 0x12F43Cu: goto label_12f43c;
            case 0x12F440u: goto label_12f440;
            case 0x12F444u: goto label_12f444;
            case 0x12F448u: goto label_12f448;
            case 0x12F44Cu: goto label_12f44c;
            case 0x12F450u: goto label_12f450;
            case 0x12F454u: goto label_12f454;
            case 0x12F458u: goto label_12f458;
            case 0x12F45Cu: goto label_12f45c;
            case 0x12F460u: goto label_12f460;
            case 0x12F464u: goto label_12f464;
            case 0x12F468u: goto label_12f468;
            case 0x12F46Cu: goto label_12f46c;
            case 0x12F470u: goto label_12f470;
            case 0x12F474u: goto label_12f474;
            case 0x12F478u: goto label_12f478;
            case 0x12F47Cu: goto label_12f47c;
            case 0x12F480u: goto label_12f480;
            case 0x12F484u: goto label_12f484;
            case 0x12F488u: goto label_12f488;
            case 0x12F48Cu: goto label_12f48c;
            case 0x12F490u: goto label_12f490;
            case 0x12F494u: goto label_12f494;
            case 0x12F498u: goto label_12f498;
            case 0x12F49Cu: goto label_12f49c;
            case 0x12F4A0u: goto label_12f4a0;
            case 0x12F4A4u: goto label_12f4a4;
            case 0x12F4A8u: goto label_12f4a8;
            case 0x12F4ACu: goto label_12f4ac;
            case 0x12F4B0u: goto label_12f4b0;
            case 0x12F4B4u: goto label_12f4b4;
            case 0x12F4B8u: goto label_12f4b8;
            case 0x12F4BCu: goto label_12f4bc;
            case 0x12F4C0u: goto label_12f4c0;
            case 0x12F4C4u: goto label_12f4c4;
            case 0x12F4C8u: goto label_12f4c8;
            case 0x12F4CCu: goto label_12f4cc;
            case 0x12F4D0u: goto label_12f4d0;
            case 0x12F4D4u: goto label_12f4d4;
            case 0x12F4D8u: goto label_12f4d8;
            case 0x12F4DCu: goto label_12f4dc;
            case 0x12F4E0u: goto label_12f4e0;
            case 0x12F4E4u: goto label_12f4e4;
            case 0x12F4E8u: goto label_12f4e8;
            case 0x12F4ECu: goto label_12f4ec;
            case 0x12F4F0u: goto label_12f4f0;
            case 0x12F4F4u: goto label_12f4f4;
            case 0x12F4F8u: goto label_12f4f8;
            case 0x12F4FCu: goto label_12f4fc;
            case 0x12F500u: goto label_12f500;
            case 0x12F504u: goto label_12f504;
            case 0x12F508u: goto label_12f508;
            case 0x12F50Cu: goto label_12f50c;
            case 0x12F510u: goto label_12f510;
            case 0x12F514u: goto label_12f514;
            case 0x12F518u: goto label_12f518;
            case 0x12F51Cu: goto label_12f51c;
            case 0x12F520u: goto label_12f520;
            case 0x12F524u: goto label_12f524;
            case 0x12F528u: goto label_12f528;
            case 0x12F52Cu: goto label_12f52c;
            case 0x12F530u: goto label_12f530;
            case 0x12F534u: goto label_12f534;
            case 0x12F538u: goto label_12f538;
            case 0x12F53Cu: goto label_12f53c;
            case 0x12F540u: goto label_12f540;
            case 0x12F544u: goto label_12f544;
            case 0x12F548u: goto label_12f548;
            case 0x12F54Cu: goto label_12f54c;
            case 0x12F550u: goto label_12f550;
            case 0x12F554u: goto label_12f554;
            case 0x12F558u: goto label_12f558;
            case 0x12F55Cu: goto label_12f55c;
            case 0x12F560u: goto label_12f560;
            case 0x12F564u: goto label_12f564;
            case 0x12F568u: goto label_12f568;
            case 0x12F56Cu: goto label_12f56c;
            case 0x12F570u: goto label_12f570;
            case 0x12F574u: goto label_12f574;
            case 0x12F578u: goto label_12f578;
            case 0x12F57Cu: goto label_12f57c;
            case 0x12F580u: goto label_12f580;
            case 0x12F584u: goto label_12f584;
            case 0x12F588u: goto label_12f588;
            case 0x12F58Cu: goto label_12f58c;
            case 0x12F590u: goto label_12f590;
            case 0x12F594u: goto label_12f594;
            case 0x12F598u: goto label_12f598;
            case 0x12F59Cu: goto label_12f59c;
            case 0x12F5A0u: goto label_12f5a0;
            case 0x12F5A4u: goto label_12f5a4;
            case 0x12F5A8u: goto label_12f5a8;
            case 0x12F5ACu: goto label_12f5ac;
            case 0x12F5B0u: goto label_12f5b0;
            case 0x12F5B4u: goto label_12f5b4;
            case 0x12F5B8u: goto label_12f5b8;
            case 0x12F5BCu: goto label_12f5bc;
            case 0x12F5C0u: goto label_12f5c0;
            case 0x12F5C4u: goto label_12f5c4;
            case 0x12F5C8u: goto label_12f5c8;
            case 0x12F5CCu: goto label_12f5cc;
            case 0x12F5D0u: goto label_12f5d0;
            case 0x12F5D4u: goto label_12f5d4;
            case 0x12F5D8u: goto label_12f5d8;
            case 0x12F5DCu: goto label_12f5dc;
            case 0x12F5E0u: goto label_12f5e0;
            case 0x12F5E4u: goto label_12f5e4;
            case 0x12F5E8u: goto label_12f5e8;
            case 0x12F5ECu: goto label_12f5ec;
            case 0x12F5F0u: goto label_12f5f0;
            case 0x12F5F4u: goto label_12f5f4;
            case 0x12F5F8u: goto label_12f5f8;
            case 0x12F5FCu: goto label_12f5fc;
            case 0x12F600u: goto label_12f600;
            case 0x12F604u: goto label_12f604;
            case 0x12F608u: goto label_12f608;
            case 0x12F60Cu: goto label_12f60c;
            case 0x12F610u: goto label_12f610;
            case 0x12F614u: goto label_12f614;
            case 0x12F618u: goto label_12f618;
            case 0x12F61Cu: goto label_12f61c;
            case 0x12F620u: goto label_12f620;
            case 0x12F624u: goto label_12f624;
            case 0x12F628u: goto label_12f628;
            case 0x12F62Cu: goto label_12f62c;
            case 0x12F630u: goto label_12f630;
            case 0x12F634u: goto label_12f634;
            case 0x12F638u: goto label_12f638;
            case 0x12F63Cu: goto label_12f63c;
            case 0x12F640u: goto label_12f640;
            case 0x12F644u: goto label_12f644;
            case 0x12F648u: goto label_12f648;
            case 0x12F64Cu: goto label_12f64c;
            case 0x12F650u: goto label_12f650;
            case 0x12F654u: goto label_12f654;
            case 0x12F658u: goto label_12f658;
            case 0x12F65Cu: goto label_12f65c;
            case 0x12F660u: goto label_12f660;
            case 0x12F664u: goto label_12f664;
            case 0x12F668u: goto label_12f668;
            case 0x12F66Cu: goto label_12f66c;
            case 0x12F670u: goto label_12f670;
            case 0x12F674u: goto label_12f674;
            case 0x12F678u: goto label_12f678;
            case 0x12F67Cu: goto label_12f67c;
            case 0x12F680u: goto label_12f680;
            case 0x12F684u: goto label_12f684;
            case 0x12F688u: goto label_12f688;
            case 0x12F68Cu: goto label_12f68c;
            case 0x12F690u: goto label_12f690;
            case 0x12F694u: goto label_12f694;
            case 0x12F698u: goto label_12f698;
            case 0x12F69Cu: goto label_12f69c;
            case 0x12F6A0u: goto label_12f6a0;
            case 0x12F6A4u: goto label_12f6a4;
            case 0x12F6A8u: goto label_12f6a8;
            case 0x12F6ACu: goto label_12f6ac;
            case 0x12F6B0u: goto label_12f6b0;
            case 0x12F6B4u: goto label_12f6b4;
            case 0x12F6B8u: goto label_12f6b8;
            case 0x12F6BCu: goto label_12f6bc;
            case 0x12F6C0u: goto label_12f6c0;
            case 0x12F6C4u: goto label_12f6c4;
            case 0x12F6C8u: goto label_12f6c8;
            case 0x12F6CCu: goto label_12f6cc;
            case 0x12F6D0u: goto label_12f6d0;
            case 0x12F6D4u: goto label_12f6d4;
            case 0x12F6D8u: goto label_12f6d8;
            case 0x12F6DCu: goto label_12f6dc;
            case 0x12F6E0u: goto label_12f6e0;
            case 0x12F6E4u: goto label_12f6e4;
            case 0x12F6E8u: goto label_12f6e8;
            case 0x12F6ECu: goto label_12f6ec;
            case 0x12F6F0u: goto label_12f6f0;
            case 0x12F6F4u: goto label_12f6f4;
            case 0x12F6F8u: goto label_12f6f8;
            case 0x12F6FCu: goto label_12f6fc;
            case 0x12F700u: goto label_12f700;
            case 0x12F704u: goto label_12f704;
            case 0x12F708u: goto label_12f708;
            case 0x12F70Cu: goto label_12f70c;
            case 0x12F710u: goto label_12f710;
            case 0x12F714u: goto label_12f714;
            case 0x12F718u: goto label_12f718;
            case 0x12F71Cu: goto label_12f71c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12F71Cu;
label_12f71c:
    // 0x12f71c: 0x0
    ctx->pc = 0x12f71cu;
    // NOP
}
