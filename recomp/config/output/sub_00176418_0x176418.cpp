#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00176418
// Address: 0x176418 - 0x176670
void sub_00176418_0x176418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x176418u;

label_176418:
    // 0x176418: 0x27bdffc0
    ctx->pc = 0x176418u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_17641c:
    // 0x17641c: 0xffb10018
    ctx->pc = 0x17641cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_176420:
    // 0x176420: 0x80882d
    ctx->pc = 0x176420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_176424:
    // 0x176424: 0x3a0202d
    ctx->pc = 0x176424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_176428:
    // 0x176428: 0xffb00010
    ctx->pc = 0x176428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_17642c:
    // 0x17642c: 0xffb20020
    ctx->pc = 0x17642cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_176430:
    // 0x176430: 0xa0902d
    ctx->pc = 0x176430u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_176434:
    // 0x176434: 0xffb30028
    ctx->pc = 0x176434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_176438:
    // 0x176438: 0xffbf0030
    ctx->pc = 0x176438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_17643c:
    // 0x17643c: 0xc05a7b2
label_176440:
    if (ctx->pc == 0x176440u) {
        ctx->pc = 0x176440u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176444u;
        goto label_176444;
    }
    ctx->pc = 0x17643Cu;
    SET_GPR_U32(ctx, 31, 0x176444u);
    ctx->pc = 0x176440u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EC8_0x169ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176444u; }
    }
    if (ctx->pc != 0x176444u) { return; }
    ctx->pc = 0x176444u;
label_176444:
    // 0x176444: 0x220202d
    ctx->pc = 0x176444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176448:
    // 0x176448: 0xc05d58a
label_17644c:
    if (ctx->pc == 0x17644Cu) {
        ctx->pc = 0x17644Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x176450u;
        goto label_176450;
    }
    ctx->pc = 0x176448u;
    SET_GPR_U32(ctx, 31, 0x176450u);
    ctx->pc = 0x17644Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176450u; }
    }
    if (ctx->pc != 0x176450u) { return; }
    ctx->pc = 0x176450u;
label_176450:
    // 0x176450: 0x220202d
    ctx->pc = 0x176450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176454:
    // 0x176454: 0x21080
    ctx->pc = 0x176454u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_176458:
    // 0x176458: 0x26300cc0
    ctx->pc = 0x176458u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 3264));
label_17645c:
    // 0x17645c: 0x2028021
    ctx->pc = 0x17645cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_176460:
    // 0x176460: 0x240282d
    ctx->pc = 0x176460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_176464:
    // 0x176464: 0x8e020000
    ctx->pc = 0x176464u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_176468:
    // 0x176468: 0x14400003
label_17646c:
    if (ctx->pc == 0x17646Cu) {
        ctx->pc = 0x17646Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176470u;
        goto label_176470;
    }
    ctx->pc = 0x176468u;
    {
        const bool branch_taken_0x176468 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17646Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x176468) {
            ctx->pc = 0x176478u;
            goto label_176478;
        }
    }
    ctx->pc = 0x176470u;
label_176470:
    // 0x176470: 0x3c020017
    ctx->pc = 0x176470u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
label_176474:
    // 0x176474: 0x244264b0
    ctx->pc = 0x176474u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25776));
label_176478:
    // 0x176478: 0x40f809
label_17647c:
    if (ctx->pc == 0x17647Cu) {
        ctx->pc = 0x176480u;
        goto label_176480;
    }
    ctx->pc = 0x176478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176480u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176418u: goto label_176418;
            case 0x17641Cu: goto label_17641c;
            case 0x176420u: goto label_176420;
            case 0x176424u: goto label_176424;
            case 0x176428u: goto label_176428;
            case 0x17642Cu: goto label_17642c;
            case 0x176430u: goto label_176430;
            case 0x176434u: goto label_176434;
            case 0x176438u: goto label_176438;
            case 0x17643Cu: goto label_17643c;
            case 0x176440u: goto label_176440;
            case 0x176444u: goto label_176444;
            case 0x176448u: goto label_176448;
            case 0x17644Cu: goto label_17644c;
            case 0x176450u: goto label_176450;
            case 0x176454u: goto label_176454;
            case 0x176458u: goto label_176458;
            case 0x17645Cu: goto label_17645c;
            case 0x176460u: goto label_176460;
            case 0x176464u: goto label_176464;
            case 0x176468u: goto label_176468;
            case 0x17646Cu: goto label_17646c;
            case 0x176470u: goto label_176470;
            case 0x176474u: goto label_176474;
            case 0x176478u: goto label_176478;
            case 0x17647Cu: goto label_17647c;
            case 0x176480u: goto label_176480;
            case 0x176484u: goto label_176484;
            case 0x176488u: goto label_176488;
            case 0x17648Cu: goto label_17648c;
            case 0x176490u: goto label_176490;
            case 0x176494u: goto label_176494;
            case 0x176498u: goto label_176498;
            case 0x17649Cu: goto label_17649c;
            case 0x1764A0u: goto label_1764a0;
            case 0x1764A4u: goto label_1764a4;
            case 0x1764A8u: goto label_1764a8;
            case 0x1764ACu: goto label_1764ac;
            case 0x1764B0u: goto label_1764b0;
            case 0x1764B4u: goto label_1764b4;
            case 0x1764B8u: goto label_1764b8;
            case 0x1764BCu: goto label_1764bc;
            case 0x1764C0u: goto label_1764c0;
            case 0x1764C4u: goto label_1764c4;
            case 0x1764C8u: goto label_1764c8;
            case 0x1764CCu: goto label_1764cc;
            case 0x1764D0u: goto label_1764d0;
            case 0x1764D4u: goto label_1764d4;
            case 0x1764D8u: goto label_1764d8;
            case 0x1764DCu: goto label_1764dc;
            case 0x1764E0u: goto label_1764e0;
            case 0x1764E4u: goto label_1764e4;
            case 0x1764E8u: goto label_1764e8;
            case 0x1764ECu: goto label_1764ec;
            case 0x1764F0u: goto label_1764f0;
            case 0x1764F4u: goto label_1764f4;
            case 0x1764F8u: goto label_1764f8;
            case 0x1764FCu: goto label_1764fc;
            case 0x176500u: goto label_176500;
            case 0x176504u: goto label_176504;
            case 0x176508u: goto label_176508;
            case 0x17650Cu: goto label_17650c;
            case 0x176510u: goto label_176510;
            case 0x176514u: goto label_176514;
            case 0x176518u: goto label_176518;
            case 0x17651Cu: goto label_17651c;
            case 0x176520u: goto label_176520;
            case 0x176524u: goto label_176524;
            case 0x176528u: goto label_176528;
            case 0x17652Cu: goto label_17652c;
            case 0x176530u: goto label_176530;
            case 0x176534u: goto label_176534;
            case 0x176538u: goto label_176538;
            case 0x17653Cu: goto label_17653c;
            case 0x176540u: goto label_176540;
            case 0x176544u: goto label_176544;
            case 0x176548u: goto label_176548;
            case 0x17654Cu: goto label_17654c;
            case 0x176550u: goto label_176550;
            case 0x176554u: goto label_176554;
            case 0x176558u: goto label_176558;
            case 0x17655Cu: goto label_17655c;
            case 0x176560u: goto label_176560;
            case 0x176564u: goto label_176564;
            case 0x176568u: goto label_176568;
            case 0x17656Cu: goto label_17656c;
            case 0x176570u: goto label_176570;
            case 0x176574u: goto label_176574;
            case 0x176578u: goto label_176578;
            case 0x17657Cu: goto label_17657c;
            case 0x176580u: goto label_176580;
            case 0x176584u: goto label_176584;
            case 0x176588u: goto label_176588;
            case 0x17658Cu: goto label_17658c;
            case 0x176590u: goto label_176590;
            case 0x176594u: goto label_176594;
            case 0x176598u: goto label_176598;
            case 0x17659Cu: goto label_17659c;
            case 0x1765A0u: goto label_1765a0;
            case 0x1765A4u: goto label_1765a4;
            case 0x1765A8u: goto label_1765a8;
            case 0x1765ACu: goto label_1765ac;
            case 0x1765B0u: goto label_1765b0;
            case 0x1765B4u: goto label_1765b4;
            case 0x1765B8u: goto label_1765b8;
            case 0x1765BCu: goto label_1765bc;
            case 0x1765C0u: goto label_1765c0;
            case 0x1765C4u: goto label_1765c4;
            case 0x1765C8u: goto label_1765c8;
            case 0x1765CCu: goto label_1765cc;
            case 0x1765D0u: goto label_1765d0;
            case 0x1765D4u: goto label_1765d4;
            case 0x1765D8u: goto label_1765d8;
            case 0x1765DCu: goto label_1765dc;
            case 0x1765E0u: goto label_1765e0;
            case 0x1765E4u: goto label_1765e4;
            case 0x1765E8u: goto label_1765e8;
            case 0x1765ECu: goto label_1765ec;
            case 0x1765F0u: goto label_1765f0;
            case 0x1765F4u: goto label_1765f4;
            case 0x1765F8u: goto label_1765f8;
            case 0x1765FCu: goto label_1765fc;
            case 0x176600u: goto label_176600;
            case 0x176604u: goto label_176604;
            case 0x176608u: goto label_176608;
            case 0x17660Cu: goto label_17660c;
            case 0x176610u: goto label_176610;
            case 0x176614u: goto label_176614;
            case 0x176618u: goto label_176618;
            case 0x17661Cu: goto label_17661c;
            case 0x176620u: goto label_176620;
            case 0x176624u: goto label_176624;
            case 0x176628u: goto label_176628;
            case 0x17662Cu: goto label_17662c;
            case 0x176630u: goto label_176630;
            case 0x176634u: goto label_176634;
            case 0x176638u: goto label_176638;
            case 0x17663Cu: goto label_17663c;
            case 0x176640u: goto label_176640;
            case 0x176644u: goto label_176644;
            case 0x176648u: goto label_176648;
            case 0x17664Cu: goto label_17664c;
            case 0x176650u: goto label_176650;
            case 0x176654u: goto label_176654;
            case 0x176658u: goto label_176658;
            case 0x17665Cu: goto label_17665c;
            case 0x176660u: goto label_176660;
            case 0x176664u: goto label_176664;
            case 0x176668u: goto label_176668;
            case 0x17666Cu: goto label_17666c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x176480u; }
            if (ctx->pc != 0x176480u) { return; }
        }
    }
    ctx->pc = 0x176480u;
label_176480:
    // 0x176480: 0x3a0202d
    ctx->pc = 0x176480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_176484:
    // 0x176484: 0xc05a7b8
label_176488:
    if (ctx->pc == 0x176488u) {
        ctx->pc = 0x176488u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17648Cu;
        goto label_17648c;
    }
    ctx->pc = 0x176484u;
    SET_GPR_U32(ctx, 31, 0x17648Cu);
    ctx->pc = 0x176488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EE0_0x169ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17648Cu; }
    }
    if (ctx->pc != 0x17648Cu) { return; }
    ctx->pc = 0x17648Cu;
label_17648c:
    // 0x17648c: 0x200102d
    ctx->pc = 0x17648cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_176490:
    // 0x176490: 0xdfb10018
    ctx->pc = 0x176490u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_176494:
    // 0x176494: 0xdfb00010
    ctx->pc = 0x176494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_176498:
    // 0x176498: 0xdfb20020
    ctx->pc = 0x176498u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17649c:
    // 0x17649c: 0xdfb30028
    ctx->pc = 0x17649cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1764a0:
    // 0x1764a0: 0xdfbf0030
    ctx->pc = 0x1764a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1764a4:
    // 0x1764a4: 0x3e00008
label_1764a8:
    if (ctx->pc == 0x1764A8u) {
        ctx->pc = 0x1764A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1764ACu;
        goto label_1764ac;
    }
    ctx->pc = 0x1764A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1764A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176418u: goto label_176418;
            case 0x17641Cu: goto label_17641c;
            case 0x176420u: goto label_176420;
            case 0x176424u: goto label_176424;
            case 0x176428u: goto label_176428;
            case 0x17642Cu: goto label_17642c;
            case 0x176430u: goto label_176430;
            case 0x176434u: goto label_176434;
            case 0x176438u: goto label_176438;
            case 0x17643Cu: goto label_17643c;
            case 0x176440u: goto label_176440;
            case 0x176444u: goto label_176444;
            case 0x176448u: goto label_176448;
            case 0x17644Cu: goto label_17644c;
            case 0x176450u: goto label_176450;
            case 0x176454u: goto label_176454;
            case 0x176458u: goto label_176458;
            case 0x17645Cu: goto label_17645c;
            case 0x176460u: goto label_176460;
            case 0x176464u: goto label_176464;
            case 0x176468u: goto label_176468;
            case 0x17646Cu: goto label_17646c;
            case 0x176470u: goto label_176470;
            case 0x176474u: goto label_176474;
            case 0x176478u: goto label_176478;
            case 0x17647Cu: goto label_17647c;
            case 0x176480u: goto label_176480;
            case 0x176484u: goto label_176484;
            case 0x176488u: goto label_176488;
            case 0x17648Cu: goto label_17648c;
            case 0x176490u: goto label_176490;
            case 0x176494u: goto label_176494;
            case 0x176498u: goto label_176498;
            case 0x17649Cu: goto label_17649c;
            case 0x1764A0u: goto label_1764a0;
            case 0x1764A4u: goto label_1764a4;
            case 0x1764A8u: goto label_1764a8;
            case 0x1764ACu: goto label_1764ac;
            case 0x1764B0u: goto label_1764b0;
            case 0x1764B4u: goto label_1764b4;
            case 0x1764B8u: goto label_1764b8;
            case 0x1764BCu: goto label_1764bc;
            case 0x1764C0u: goto label_1764c0;
            case 0x1764C4u: goto label_1764c4;
            case 0x1764C8u: goto label_1764c8;
            case 0x1764CCu: goto label_1764cc;
            case 0x1764D0u: goto label_1764d0;
            case 0x1764D4u: goto label_1764d4;
            case 0x1764D8u: goto label_1764d8;
            case 0x1764DCu: goto label_1764dc;
            case 0x1764E0u: goto label_1764e0;
            case 0x1764E4u: goto label_1764e4;
            case 0x1764E8u: goto label_1764e8;
            case 0x1764ECu: goto label_1764ec;
            case 0x1764F0u: goto label_1764f0;
            case 0x1764F4u: goto label_1764f4;
            case 0x1764F8u: goto label_1764f8;
            case 0x1764FCu: goto label_1764fc;
            case 0x176500u: goto label_176500;
            case 0x176504u: goto label_176504;
            case 0x176508u: goto label_176508;
            case 0x17650Cu: goto label_17650c;
            case 0x176510u: goto label_176510;
            case 0x176514u: goto label_176514;
            case 0x176518u: goto label_176518;
            case 0x17651Cu: goto label_17651c;
            case 0x176520u: goto label_176520;
            case 0x176524u: goto label_176524;
            case 0x176528u: goto label_176528;
            case 0x17652Cu: goto label_17652c;
            case 0x176530u: goto label_176530;
            case 0x176534u: goto label_176534;
            case 0x176538u: goto label_176538;
            case 0x17653Cu: goto label_17653c;
            case 0x176540u: goto label_176540;
            case 0x176544u: goto label_176544;
            case 0x176548u: goto label_176548;
            case 0x17654Cu: goto label_17654c;
            case 0x176550u: goto label_176550;
            case 0x176554u: goto label_176554;
            case 0x176558u: goto label_176558;
            case 0x17655Cu: goto label_17655c;
            case 0x176560u: goto label_176560;
            case 0x176564u: goto label_176564;
            case 0x176568u: goto label_176568;
            case 0x17656Cu: goto label_17656c;
            case 0x176570u: goto label_176570;
            case 0x176574u: goto label_176574;
            case 0x176578u: goto label_176578;
            case 0x17657Cu: goto label_17657c;
            case 0x176580u: goto label_176580;
            case 0x176584u: goto label_176584;
            case 0x176588u: goto label_176588;
            case 0x17658Cu: goto label_17658c;
            case 0x176590u: goto label_176590;
            case 0x176594u: goto label_176594;
            case 0x176598u: goto label_176598;
            case 0x17659Cu: goto label_17659c;
            case 0x1765A0u: goto label_1765a0;
            case 0x1765A4u: goto label_1765a4;
            case 0x1765A8u: goto label_1765a8;
            case 0x1765ACu: goto label_1765ac;
            case 0x1765B0u: goto label_1765b0;
            case 0x1765B4u: goto label_1765b4;
            case 0x1765B8u: goto label_1765b8;
            case 0x1765BCu: goto label_1765bc;
            case 0x1765C0u: goto label_1765c0;
            case 0x1765C4u: goto label_1765c4;
            case 0x1765C8u: goto label_1765c8;
            case 0x1765CCu: goto label_1765cc;
            case 0x1765D0u: goto label_1765d0;
            case 0x1765D4u: goto label_1765d4;
            case 0x1765D8u: goto label_1765d8;
            case 0x1765DCu: goto label_1765dc;
            case 0x1765E0u: goto label_1765e0;
            case 0x1765E4u: goto label_1765e4;
            case 0x1765E8u: goto label_1765e8;
            case 0x1765ECu: goto label_1765ec;
            case 0x1765F0u: goto label_1765f0;
            case 0x1765F4u: goto label_1765f4;
            case 0x1765F8u: goto label_1765f8;
            case 0x1765FCu: goto label_1765fc;
            case 0x176600u: goto label_176600;
            case 0x176604u: goto label_176604;
            case 0x176608u: goto label_176608;
            case 0x17660Cu: goto label_17660c;
            case 0x176610u: goto label_176610;
            case 0x176614u: goto label_176614;
            case 0x176618u: goto label_176618;
            case 0x17661Cu: goto label_17661c;
            case 0x176620u: goto label_176620;
            case 0x176624u: goto label_176624;
            case 0x176628u: goto label_176628;
            case 0x17662Cu: goto label_17662c;
            case 0x176630u: goto label_176630;
            case 0x176634u: goto label_176634;
            case 0x176638u: goto label_176638;
            case 0x17663Cu: goto label_17663c;
            case 0x176640u: goto label_176640;
            case 0x176644u: goto label_176644;
            case 0x176648u: goto label_176648;
            case 0x17664Cu: goto label_17664c;
            case 0x176650u: goto label_176650;
            case 0x176654u: goto label_176654;
            case 0x176658u: goto label_176658;
            case 0x17665Cu: goto label_17665c;
            case 0x176660u: goto label_176660;
            case 0x176664u: goto label_176664;
            case 0x176668u: goto label_176668;
            case 0x17666Cu: goto label_17666c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1764ACu;
label_1764ac:
    // 0x1764ac: 0x0
    ctx->pc = 0x1764acu;
    // NOP
label_1764b0:
    // 0x1764b0: 0x27bdffe0
    ctx->pc = 0x1764b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1764b4:
    // 0x1764b4: 0xffb00000
    ctx->pc = 0x1764b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1764b8:
    // 0x1764b8: 0xa0802d
    ctx->pc = 0x1764b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1764bc:
    // 0x1764bc: 0xffb10008
    ctx->pc = 0x1764bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1764c0:
    // 0x1764c0: 0xffbf0010
    ctx->pc = 0x1764c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1764c4:
    // 0x1764c4: 0xc05d99c
label_1764c8:
    if (ctx->pc == 0x1764C8u) {
        ctx->pc = 0x1764C8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1764CCu;
        goto label_1764cc;
    }
    ctx->pc = 0x1764C4u;
    SET_GPR_U32(ctx, 31, 0x1764CCu);
    ctx->pc = 0x1764C8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176670_0x176670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1764CCu; }
    }
    if (ctx->pc != 0x1764CCu) { return; }
    ctx->pc = 0x1764CCu;
label_1764cc:
    // 0x1764cc: 0x10400005
label_1764d0:
    if (ctx->pc == 0x1764D0u) {
        ctx->pc = 0x1764D0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1764D4u;
        goto label_1764d4;
    }
    ctx->pc = 0x1764CCu;
    {
        const bool branch_taken_0x1764cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1764D0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1764cc) {
            ctx->pc = 0x1764E4u;
            goto label_1764e4;
        }
    }
    ctx->pc = 0x1764D4u;
label_1764d4:
    // 0x1764d4: 0x2402fffe
    ctx->pc = 0x1764d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
label_1764d8:
    // 0x1764d8: 0xae020000
    ctx->pc = 0x1764d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1764dc:
    // 0x1764dc: 0x102d
    ctx->pc = 0x1764dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1764e0:
    // 0x1764e0: 0xae230000
    ctx->pc = 0x1764e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1764e4:
    // 0x1764e4: 0xdfb00000
    ctx->pc = 0x1764e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1764e8:
    // 0x1764e8: 0xdfb10008
    ctx->pc = 0x1764e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1764ec:
    // 0x1764ec: 0xdfbf0010
    ctx->pc = 0x1764ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1764f0:
    // 0x1764f0: 0x3e00008
label_1764f4:
    if (ctx->pc == 0x1764F4u) {
        ctx->pc = 0x1764F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1764F8u;
        goto label_1764f8;
    }
    ctx->pc = 0x1764F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1764F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176418u: goto label_176418;
            case 0x17641Cu: goto label_17641c;
            case 0x176420u: goto label_176420;
            case 0x176424u: goto label_176424;
            case 0x176428u: goto label_176428;
            case 0x17642Cu: goto label_17642c;
            case 0x176430u: goto label_176430;
            case 0x176434u: goto label_176434;
            case 0x176438u: goto label_176438;
            case 0x17643Cu: goto label_17643c;
            case 0x176440u: goto label_176440;
            case 0x176444u: goto label_176444;
            case 0x176448u: goto label_176448;
            case 0x17644Cu: goto label_17644c;
            case 0x176450u: goto label_176450;
            case 0x176454u: goto label_176454;
            case 0x176458u: goto label_176458;
            case 0x17645Cu: goto label_17645c;
            case 0x176460u: goto label_176460;
            case 0x176464u: goto label_176464;
            case 0x176468u: goto label_176468;
            case 0x17646Cu: goto label_17646c;
            case 0x176470u: goto label_176470;
            case 0x176474u: goto label_176474;
            case 0x176478u: goto label_176478;
            case 0x17647Cu: goto label_17647c;
            case 0x176480u: goto label_176480;
            case 0x176484u: goto label_176484;
            case 0x176488u: goto label_176488;
            case 0x17648Cu: goto label_17648c;
            case 0x176490u: goto label_176490;
            case 0x176494u: goto label_176494;
            case 0x176498u: goto label_176498;
            case 0x17649Cu: goto label_17649c;
            case 0x1764A0u: goto label_1764a0;
            case 0x1764A4u: goto label_1764a4;
            case 0x1764A8u: goto label_1764a8;
            case 0x1764ACu: goto label_1764ac;
            case 0x1764B0u: goto label_1764b0;
            case 0x1764B4u: goto label_1764b4;
            case 0x1764B8u: goto label_1764b8;
            case 0x1764BCu: goto label_1764bc;
            case 0x1764C0u: goto label_1764c0;
            case 0x1764C4u: goto label_1764c4;
            case 0x1764C8u: goto label_1764c8;
            case 0x1764CCu: goto label_1764cc;
            case 0x1764D0u: goto label_1764d0;
            case 0x1764D4u: goto label_1764d4;
            case 0x1764D8u: goto label_1764d8;
            case 0x1764DCu: goto label_1764dc;
            case 0x1764E0u: goto label_1764e0;
            case 0x1764E4u: goto label_1764e4;
            case 0x1764E8u: goto label_1764e8;
            case 0x1764ECu: goto label_1764ec;
            case 0x1764F0u: goto label_1764f0;
            case 0x1764F4u: goto label_1764f4;
            case 0x1764F8u: goto label_1764f8;
            case 0x1764FCu: goto label_1764fc;
            case 0x176500u: goto label_176500;
            case 0x176504u: goto label_176504;
            case 0x176508u: goto label_176508;
            case 0x17650Cu: goto label_17650c;
            case 0x176510u: goto label_176510;
            case 0x176514u: goto label_176514;
            case 0x176518u: goto label_176518;
            case 0x17651Cu: goto label_17651c;
            case 0x176520u: goto label_176520;
            case 0x176524u: goto label_176524;
            case 0x176528u: goto label_176528;
            case 0x17652Cu: goto label_17652c;
            case 0x176530u: goto label_176530;
            case 0x176534u: goto label_176534;
            case 0x176538u: goto label_176538;
            case 0x17653Cu: goto label_17653c;
            case 0x176540u: goto label_176540;
            case 0x176544u: goto label_176544;
            case 0x176548u: goto label_176548;
            case 0x17654Cu: goto label_17654c;
            case 0x176550u: goto label_176550;
            case 0x176554u: goto label_176554;
            case 0x176558u: goto label_176558;
            case 0x17655Cu: goto label_17655c;
            case 0x176560u: goto label_176560;
            case 0x176564u: goto label_176564;
            case 0x176568u: goto label_176568;
            case 0x17656Cu: goto label_17656c;
            case 0x176570u: goto label_176570;
            case 0x176574u: goto label_176574;
            case 0x176578u: goto label_176578;
            case 0x17657Cu: goto label_17657c;
            case 0x176580u: goto label_176580;
            case 0x176584u: goto label_176584;
            case 0x176588u: goto label_176588;
            case 0x17658Cu: goto label_17658c;
            case 0x176590u: goto label_176590;
            case 0x176594u: goto label_176594;
            case 0x176598u: goto label_176598;
            case 0x17659Cu: goto label_17659c;
            case 0x1765A0u: goto label_1765a0;
            case 0x1765A4u: goto label_1765a4;
            case 0x1765A8u: goto label_1765a8;
            case 0x1765ACu: goto label_1765ac;
            case 0x1765B0u: goto label_1765b0;
            case 0x1765B4u: goto label_1765b4;
            case 0x1765B8u: goto label_1765b8;
            case 0x1765BCu: goto label_1765bc;
            case 0x1765C0u: goto label_1765c0;
            case 0x1765C4u: goto label_1765c4;
            case 0x1765C8u: goto label_1765c8;
            case 0x1765CCu: goto label_1765cc;
            case 0x1765D0u: goto label_1765d0;
            case 0x1765D4u: goto label_1765d4;
            case 0x1765D8u: goto label_1765d8;
            case 0x1765DCu: goto label_1765dc;
            case 0x1765E0u: goto label_1765e0;
            case 0x1765E4u: goto label_1765e4;
            case 0x1765E8u: goto label_1765e8;
            case 0x1765ECu: goto label_1765ec;
            case 0x1765F0u: goto label_1765f0;
            case 0x1765F4u: goto label_1765f4;
            case 0x1765F8u: goto label_1765f8;
            case 0x1765FCu: goto label_1765fc;
            case 0x176600u: goto label_176600;
            case 0x176604u: goto label_176604;
            case 0x176608u: goto label_176608;
            case 0x17660Cu: goto label_17660c;
            case 0x176610u: goto label_176610;
            case 0x176614u: goto label_176614;
            case 0x176618u: goto label_176618;
            case 0x17661Cu: goto label_17661c;
            case 0x176620u: goto label_176620;
            case 0x176624u: goto label_176624;
            case 0x176628u: goto label_176628;
            case 0x17662Cu: goto label_17662c;
            case 0x176630u: goto label_176630;
            case 0x176634u: goto label_176634;
            case 0x176638u: goto label_176638;
            case 0x17663Cu: goto label_17663c;
            case 0x176640u: goto label_176640;
            case 0x176644u: goto label_176644;
            case 0x176648u: goto label_176648;
            case 0x17664Cu: goto label_17664c;
            case 0x176650u: goto label_176650;
            case 0x176654u: goto label_176654;
            case 0x176658u: goto label_176658;
            case 0x17665Cu: goto label_17665c;
            case 0x176660u: goto label_176660;
            case 0x176664u: goto label_176664;
            case 0x176668u: goto label_176668;
            case 0x17666Cu: goto label_17666c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1764F8u;
label_1764f8:
    // 0x1764f8: 0x27bdffe0
    ctx->pc = 0x1764f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1764fc:
    // 0x1764fc: 0xffb00000
    ctx->pc = 0x1764fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_176500:
    // 0x176500: 0x80802d
    ctx->pc = 0x176500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_176504:
    // 0x176504: 0xffb10008
    ctx->pc = 0x176504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_176508:
    // 0x176508: 0xa0882d
    ctx->pc = 0x176508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17650c:
    // 0x17650c: 0xffb20010
    ctx->pc = 0x17650cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_176510:
    // 0x176510: 0xffbf0018
    ctx->pc = 0x176510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_176514:
    // 0x176514: 0xc05d99c
label_176518:
    if (ctx->pc == 0x176518u) {
        ctx->pc = 0x176518u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17651Cu;
        goto label_17651c;
    }
    ctx->pc = 0x176514u;
    SET_GPR_U32(ctx, 31, 0x17651Cu);
    ctx->pc = 0x176518u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176670_0x176670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17651Cu; }
    }
    if (ctx->pc != 0x17651Cu) { return; }
    ctx->pc = 0x17651Cu;
label_17651c:
    // 0x17651c: 0x10400007
label_176520:
    if (ctx->pc == 0x176520u) {
        ctx->pc = 0x176520u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 3264));
        ctx->pc = 0x176524u;
        goto label_176524;
    }
    ctx->pc = 0x17651Cu;
    {
        const bool branch_taken_0x17651c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x176520u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 3264));
        if (branch_taken_0x17651c) {
            ctx->pc = 0x17653Cu;
            goto label_17653c;
        }
    }
    ctx->pc = 0x176524u;
label_176524:
    // 0x176524: 0x8e030264
    ctx->pc = 0x176524u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_176528:
    // 0x176528: 0x3c040023
    ctx->pc = 0x176528u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
label_17652c:
    // 0x17652c: 0x102d
    ctx->pc = 0x17652cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176530:
    // 0x176530: 0xae230000
    ctx->pc = 0x176530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_176534:
    // 0x176534: 0x8c83f140
    ctx->pc = 0x176534u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294963520)));
label_176538:
    // 0x176538: 0xae430000
    ctx->pc = 0x176538u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_17653c:
    // 0x17653c: 0xdfb00000
    ctx->pc = 0x17653cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_176540:
    // 0x176540: 0xdfb10008
    ctx->pc = 0x176540u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_176544:
    // 0x176544: 0xdfb20010
    ctx->pc = 0x176544u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_176548:
    // 0x176548: 0xdfbf0018
    ctx->pc = 0x176548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_17654c:
    // 0x17654c: 0x3e00008
label_176550:
    if (ctx->pc == 0x176550u) {
        ctx->pc = 0x176550u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x176554u;
        goto label_176554;
    }
    ctx->pc = 0x17654Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176550u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176418u: goto label_176418;
            case 0x17641Cu: goto label_17641c;
            case 0x176420u: goto label_176420;
            case 0x176424u: goto label_176424;
            case 0x176428u: goto label_176428;
            case 0x17642Cu: goto label_17642c;
            case 0x176430u: goto label_176430;
            case 0x176434u: goto label_176434;
            case 0x176438u: goto label_176438;
            case 0x17643Cu: goto label_17643c;
            case 0x176440u: goto label_176440;
            case 0x176444u: goto label_176444;
            case 0x176448u: goto label_176448;
            case 0x17644Cu: goto label_17644c;
            case 0x176450u: goto label_176450;
            case 0x176454u: goto label_176454;
            case 0x176458u: goto label_176458;
            case 0x17645Cu: goto label_17645c;
            case 0x176460u: goto label_176460;
            case 0x176464u: goto label_176464;
            case 0x176468u: goto label_176468;
            case 0x17646Cu: goto label_17646c;
            case 0x176470u: goto label_176470;
            case 0x176474u: goto label_176474;
            case 0x176478u: goto label_176478;
            case 0x17647Cu: goto label_17647c;
            case 0x176480u: goto label_176480;
            case 0x176484u: goto label_176484;
            case 0x176488u: goto label_176488;
            case 0x17648Cu: goto label_17648c;
            case 0x176490u: goto label_176490;
            case 0x176494u: goto label_176494;
            case 0x176498u: goto label_176498;
            case 0x17649Cu: goto label_17649c;
            case 0x1764A0u: goto label_1764a0;
            case 0x1764A4u: goto label_1764a4;
            case 0x1764A8u: goto label_1764a8;
            case 0x1764ACu: goto label_1764ac;
            case 0x1764B0u: goto label_1764b0;
            case 0x1764B4u: goto label_1764b4;
            case 0x1764B8u: goto label_1764b8;
            case 0x1764BCu: goto label_1764bc;
            case 0x1764C0u: goto label_1764c0;
            case 0x1764C4u: goto label_1764c4;
            case 0x1764C8u: goto label_1764c8;
            case 0x1764CCu: goto label_1764cc;
            case 0x1764D0u: goto label_1764d0;
            case 0x1764D4u: goto label_1764d4;
            case 0x1764D8u: goto label_1764d8;
            case 0x1764DCu: goto label_1764dc;
            case 0x1764E0u: goto label_1764e0;
            case 0x1764E4u: goto label_1764e4;
            case 0x1764E8u: goto label_1764e8;
            case 0x1764ECu: goto label_1764ec;
            case 0x1764F0u: goto label_1764f0;
            case 0x1764F4u: goto label_1764f4;
            case 0x1764F8u: goto label_1764f8;
            case 0x1764FCu: goto label_1764fc;
            case 0x176500u: goto label_176500;
            case 0x176504u: goto label_176504;
            case 0x176508u: goto label_176508;
            case 0x17650Cu: goto label_17650c;
            case 0x176510u: goto label_176510;
            case 0x176514u: goto label_176514;
            case 0x176518u: goto label_176518;
            case 0x17651Cu: goto label_17651c;
            case 0x176520u: goto label_176520;
            case 0x176524u: goto label_176524;
            case 0x176528u: goto label_176528;
            case 0x17652Cu: goto label_17652c;
            case 0x176530u: goto label_176530;
            case 0x176534u: goto label_176534;
            case 0x176538u: goto label_176538;
            case 0x17653Cu: goto label_17653c;
            case 0x176540u: goto label_176540;
            case 0x176544u: goto label_176544;
            case 0x176548u: goto label_176548;
            case 0x17654Cu: goto label_17654c;
            case 0x176550u: goto label_176550;
            case 0x176554u: goto label_176554;
            case 0x176558u: goto label_176558;
            case 0x17655Cu: goto label_17655c;
            case 0x176560u: goto label_176560;
            case 0x176564u: goto label_176564;
            case 0x176568u: goto label_176568;
            case 0x17656Cu: goto label_17656c;
            case 0x176570u: goto label_176570;
            case 0x176574u: goto label_176574;
            case 0x176578u: goto label_176578;
            case 0x17657Cu: goto label_17657c;
            case 0x176580u: goto label_176580;
            case 0x176584u: goto label_176584;
            case 0x176588u: goto label_176588;
            case 0x17658Cu: goto label_17658c;
            case 0x176590u: goto label_176590;
            case 0x176594u: goto label_176594;
            case 0x176598u: goto label_176598;
            case 0x17659Cu: goto label_17659c;
            case 0x1765A0u: goto label_1765a0;
            case 0x1765A4u: goto label_1765a4;
            case 0x1765A8u: goto label_1765a8;
            case 0x1765ACu: goto label_1765ac;
            case 0x1765B0u: goto label_1765b0;
            case 0x1765B4u: goto label_1765b4;
            case 0x1765B8u: goto label_1765b8;
            case 0x1765BCu: goto label_1765bc;
            case 0x1765C0u: goto label_1765c0;
            case 0x1765C4u: goto label_1765c4;
            case 0x1765C8u: goto label_1765c8;
            case 0x1765CCu: goto label_1765cc;
            case 0x1765D0u: goto label_1765d0;
            case 0x1765D4u: goto label_1765d4;
            case 0x1765D8u: goto label_1765d8;
            case 0x1765DCu: goto label_1765dc;
            case 0x1765E0u: goto label_1765e0;
            case 0x1765E4u: goto label_1765e4;
            case 0x1765E8u: goto label_1765e8;
            case 0x1765ECu: goto label_1765ec;
            case 0x1765F0u: goto label_1765f0;
            case 0x1765F4u: goto label_1765f4;
            case 0x1765F8u: goto label_1765f8;
            case 0x1765FCu: goto label_1765fc;
            case 0x176600u: goto label_176600;
            case 0x176604u: goto label_176604;
            case 0x176608u: goto label_176608;
            case 0x17660Cu: goto label_17660c;
            case 0x176610u: goto label_176610;
            case 0x176614u: goto label_176614;
            case 0x176618u: goto label_176618;
            case 0x17661Cu: goto label_17661c;
            case 0x176620u: goto label_176620;
            case 0x176624u: goto label_176624;
            case 0x176628u: goto label_176628;
            case 0x17662Cu: goto label_17662c;
            case 0x176630u: goto label_176630;
            case 0x176634u: goto label_176634;
            case 0x176638u: goto label_176638;
            case 0x17663Cu: goto label_17663c;
            case 0x176640u: goto label_176640;
            case 0x176644u: goto label_176644;
            case 0x176648u: goto label_176648;
            case 0x17664Cu: goto label_17664c;
            case 0x176650u: goto label_176650;
            case 0x176654u: goto label_176654;
            case 0x176658u: goto label_176658;
            case 0x17665Cu: goto label_17665c;
            case 0x176660u: goto label_176660;
            case 0x176664u: goto label_176664;
            case 0x176668u: goto label_176668;
            case 0x17666Cu: goto label_17666c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x176554u;
label_176554:
    // 0x176554: 0x0
    ctx->pc = 0x176554u;
    // NOP
label_176558:
    // 0x176558: 0x27bdfff0
    ctx->pc = 0x176558u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_17655c:
    // 0x17655c: 0xffbf0000
    ctx->pc = 0x17655cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_176560:
    // 0x176560: 0xc05d99c
label_176564:
    if (ctx->pc == 0x176564u) {
        ctx->pc = 0x176568u;
        goto label_176568;
    }
    ctx->pc = 0x176560u;
    SET_GPR_U32(ctx, 31, 0x176568u);
    ctx->pc = 0x176670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176670_0x176670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176568u; }
    }
    if (ctx->pc != 0x176568u) { return; }
    ctx->pc = 0x176568u;
label_176568:
    // 0x176568: 0xdfbf0000
    ctx->pc = 0x176568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17656c:
    // 0x17656c: 0x102d
    ctx->pc = 0x17656cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176570:
    // 0x176570: 0x3e00008
label_176574:
    if (ctx->pc == 0x176574u) {
        ctx->pc = 0x176574u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x176578u;
        goto label_176578;
    }
    ctx->pc = 0x176570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176574u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176418u: goto label_176418;
            case 0x17641Cu: goto label_17641c;
            case 0x176420u: goto label_176420;
            case 0x176424u: goto label_176424;
            case 0x176428u: goto label_176428;
            case 0x17642Cu: goto label_17642c;
            case 0x176430u: goto label_176430;
            case 0x176434u: goto label_176434;
            case 0x176438u: goto label_176438;
            case 0x17643Cu: goto label_17643c;
            case 0x176440u: goto label_176440;
            case 0x176444u: goto label_176444;
            case 0x176448u: goto label_176448;
            case 0x17644Cu: goto label_17644c;
            case 0x176450u: goto label_176450;
            case 0x176454u: goto label_176454;
            case 0x176458u: goto label_176458;
            case 0x17645Cu: goto label_17645c;
            case 0x176460u: goto label_176460;
            case 0x176464u: goto label_176464;
            case 0x176468u: goto label_176468;
            case 0x17646Cu: goto label_17646c;
            case 0x176470u: goto label_176470;
            case 0x176474u: goto label_176474;
            case 0x176478u: goto label_176478;
            case 0x17647Cu: goto label_17647c;
            case 0x176480u: goto label_176480;
            case 0x176484u: goto label_176484;
            case 0x176488u: goto label_176488;
            case 0x17648Cu: goto label_17648c;
            case 0x176490u: goto label_176490;
            case 0x176494u: goto label_176494;
            case 0x176498u: goto label_176498;
            case 0x17649Cu: goto label_17649c;
            case 0x1764A0u: goto label_1764a0;
            case 0x1764A4u: goto label_1764a4;
            case 0x1764A8u: goto label_1764a8;
            case 0x1764ACu: goto label_1764ac;
            case 0x1764B0u: goto label_1764b0;
            case 0x1764B4u: goto label_1764b4;
            case 0x1764B8u: goto label_1764b8;
            case 0x1764BCu: goto label_1764bc;
            case 0x1764C0u: goto label_1764c0;
            case 0x1764C4u: goto label_1764c4;
            case 0x1764C8u: goto label_1764c8;
            case 0x1764CCu: goto label_1764cc;
            case 0x1764D0u: goto label_1764d0;
            case 0x1764D4u: goto label_1764d4;
            case 0x1764D8u: goto label_1764d8;
            case 0x1764DCu: goto label_1764dc;
            case 0x1764E0u: goto label_1764e0;
            case 0x1764E4u: goto label_1764e4;
            case 0x1764E8u: goto label_1764e8;
            case 0x1764ECu: goto label_1764ec;
            case 0x1764F0u: goto label_1764f0;
            case 0x1764F4u: goto label_1764f4;
            case 0x1764F8u: goto label_1764f8;
            case 0x1764FCu: goto label_1764fc;
            case 0x176500u: goto label_176500;
            case 0x176504u: goto label_176504;
            case 0x176508u: goto label_176508;
            case 0x17650Cu: goto label_17650c;
            case 0x176510u: goto label_176510;
            case 0x176514u: goto label_176514;
            case 0x176518u: goto label_176518;
            case 0x17651Cu: goto label_17651c;
            case 0x176520u: goto label_176520;
            case 0x176524u: goto label_176524;
            case 0x176528u: goto label_176528;
            case 0x17652Cu: goto label_17652c;
            case 0x176530u: goto label_176530;
            case 0x176534u: goto label_176534;
            case 0x176538u: goto label_176538;
            case 0x17653Cu: goto label_17653c;
            case 0x176540u: goto label_176540;
            case 0x176544u: goto label_176544;
            case 0x176548u: goto label_176548;
            case 0x17654Cu: goto label_17654c;
            case 0x176550u: goto label_176550;
            case 0x176554u: goto label_176554;
            case 0x176558u: goto label_176558;
            case 0x17655Cu: goto label_17655c;
            case 0x176560u: goto label_176560;
            case 0x176564u: goto label_176564;
            case 0x176568u: goto label_176568;
            case 0x17656Cu: goto label_17656c;
            case 0x176570u: goto label_176570;
            case 0x176574u: goto label_176574;
            case 0x176578u: goto label_176578;
            case 0x17657Cu: goto label_17657c;
            case 0x176580u: goto label_176580;
            case 0x176584u: goto label_176584;
            case 0x176588u: goto label_176588;
            case 0x17658Cu: goto label_17658c;
            case 0x176590u: goto label_176590;
            case 0x176594u: goto label_176594;
            case 0x176598u: goto label_176598;
            case 0x17659Cu: goto label_17659c;
            case 0x1765A0u: goto label_1765a0;
            case 0x1765A4u: goto label_1765a4;
            case 0x1765A8u: goto label_1765a8;
            case 0x1765ACu: goto label_1765ac;
            case 0x1765B0u: goto label_1765b0;
            case 0x1765B4u: goto label_1765b4;
            case 0x1765B8u: goto label_1765b8;
            case 0x1765BCu: goto label_1765bc;
            case 0x1765C0u: goto label_1765c0;
            case 0x1765C4u: goto label_1765c4;
            case 0x1765C8u: goto label_1765c8;
            case 0x1765CCu: goto label_1765cc;
            case 0x1765D0u: goto label_1765d0;
            case 0x1765D4u: goto label_1765d4;
            case 0x1765D8u: goto label_1765d8;
            case 0x1765DCu: goto label_1765dc;
            case 0x1765E0u: goto label_1765e0;
            case 0x1765E4u: goto label_1765e4;
            case 0x1765E8u: goto label_1765e8;
            case 0x1765ECu: goto label_1765ec;
            case 0x1765F0u: goto label_1765f0;
            case 0x1765F4u: goto label_1765f4;
            case 0x1765F8u: goto label_1765f8;
            case 0x1765FCu: goto label_1765fc;
            case 0x176600u: goto label_176600;
            case 0x176604u: goto label_176604;
            case 0x176608u: goto label_176608;
            case 0x17660Cu: goto label_17660c;
            case 0x176610u: goto label_176610;
            case 0x176614u: goto label_176614;
            case 0x176618u: goto label_176618;
            case 0x17661Cu: goto label_17661c;
            case 0x176620u: goto label_176620;
            case 0x176624u: goto label_176624;
            case 0x176628u: goto label_176628;
            case 0x17662Cu: goto label_17662c;
            case 0x176630u: goto label_176630;
            case 0x176634u: goto label_176634;
            case 0x176638u: goto label_176638;
            case 0x17663Cu: goto label_17663c;
            case 0x176640u: goto label_176640;
            case 0x176644u: goto label_176644;
            case 0x176648u: goto label_176648;
            case 0x17664Cu: goto label_17664c;
            case 0x176650u: goto label_176650;
            case 0x176654u: goto label_176654;
            case 0x176658u: goto label_176658;
            case 0x17665Cu: goto label_17665c;
            case 0x176660u: goto label_176660;
            case 0x176664u: goto label_176664;
            case 0x176668u: goto label_176668;
            case 0x17666Cu: goto label_17666c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x176578u;
label_176578:
    // 0x176578: 0x27bdffc0
    ctx->pc = 0x176578u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_17657c:
    // 0x17657c: 0xffb10018
    ctx->pc = 0x17657cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_176580:
    // 0x176580: 0x80882d
    ctx->pc = 0x176580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_176584:
    // 0x176584: 0xffb00010
    ctx->pc = 0x176584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_176588:
    // 0x176588: 0x26300cc0
    ctx->pc = 0x176588u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 3264));
label_17658c:
    // 0x17658c: 0xffb30028
    ctx->pc = 0x17658cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_176590:
    // 0x176590: 0xa0982d
    ctx->pc = 0x176590u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_176594:
    // 0x176594: 0xffb40030
    ctx->pc = 0x176594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_176598:
    // 0x176598: 0xffb20020
    ctx->pc = 0x176598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_17659c:
    // 0x17659c: 0xffbf0038
    ctx->pc = 0x17659cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_1765a0:
    // 0x1765a0: 0xc05d99c
label_1765a4:
    if (ctx->pc == 0x1765A4u) {
        ctx->pc = 0x1765A4u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1765A8u;
        goto label_1765a8;
    }
    ctx->pc = 0x1765A0u;
    SET_GPR_U32(ctx, 31, 0x1765A8u);
    ctx->pc = 0x1765A4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176670_0x176670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765A8u; }
    }
    if (ctx->pc != 0x1765A8u) { return; }
    ctx->pc = 0x1765A8u;
label_1765a8:
    // 0x1765a8: 0x50400029
label_1765ac:
    if (ctx->pc == 0x1765ACu) {
        ctx->pc = 0x1765ACu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1765B0u;
        goto label_1765b0;
    }
    ctx->pc = 0x1765A8u;
    {
        const bool branch_taken_0x1765a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1765a8) {
            ctx->pc = 0x1765ACu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x176650u;
            goto label_176650;
        }
    }
    ctx->pc = 0x1765B0u;
label_1765b0:
    // 0x1765b0: 0x8e020290
    ctx->pc = 0x1765b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 656)));
label_1765b4:
    // 0x1765b4: 0x14400008
label_1765b8:
    if (ctx->pc == 0x1765B8u) {
        ctx->pc = 0x1765B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1765BCu;
        goto label_1765bc;
    }
    ctx->pc = 0x1765B4u;
    {
        const bool branch_taken_0x1765b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1765B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1765b4) {
            ctx->pc = 0x1765D8u;
            goto label_1765d8;
        }
    }
    ctx->pc = 0x1765BCu;
label_1765bc:
    // 0x1765bc: 0x2403fffe
    ctx->pc = 0x1765bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
label_1765c0:
    // 0x1765c0: 0x24040001
    ctx->pc = 0x1765c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1765c4:
    // 0x1765c4: 0xae630000
    ctx->pc = 0x1765c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1765c8:
    // 0x1765c8: 0x102d
    ctx->pc = 0x1765c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1765cc:
    // 0x1765cc: 0x1000001f
label_1765d0:
    if (ctx->pc == 0x1765D0u) {
        ctx->pc = 0x1765D0u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x1765D4u;
        goto label_1765d4;
    }
    ctx->pc = 0x1765CCu;
    {
        const bool branch_taken_0x1765cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1765D0u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x1765cc) {
            ctx->pc = 0x17664Cu;
            goto label_17664c;
        }
    }
    ctx->pc = 0x1765D4u;
label_1765d4:
    // 0x1765d4: 0x0
    ctx->pc = 0x1765d4u;
    // NOP
label_1765d8:
    // 0x1765d8: 0x3a0282d
    ctx->pc = 0x1765d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1765dc:
    // 0x1765dc: 0x40f809
label_1765e0:
    if (ctx->pc == 0x1765E0u) {
        ctx->pc = 0x1765E0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x1765E4u;
        goto label_1765e4;
    }
    ctx->pc = 0x1765DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1765E4u);
        ctx->pc = 0x1765E0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176418u: goto label_176418;
            case 0x17641Cu: goto label_17641c;
            case 0x176420u: goto label_176420;
            case 0x176424u: goto label_176424;
            case 0x176428u: goto label_176428;
            case 0x17642Cu: goto label_17642c;
            case 0x176430u: goto label_176430;
            case 0x176434u: goto label_176434;
            case 0x176438u: goto label_176438;
            case 0x17643Cu: goto label_17643c;
            case 0x176440u: goto label_176440;
            case 0x176444u: goto label_176444;
            case 0x176448u: goto label_176448;
            case 0x17644Cu: goto label_17644c;
            case 0x176450u: goto label_176450;
            case 0x176454u: goto label_176454;
            case 0x176458u: goto label_176458;
            case 0x17645Cu: goto label_17645c;
            case 0x176460u: goto label_176460;
            case 0x176464u: goto label_176464;
            case 0x176468u: goto label_176468;
            case 0x17646Cu: goto label_17646c;
            case 0x176470u: goto label_176470;
            case 0x176474u: goto label_176474;
            case 0x176478u: goto label_176478;
            case 0x17647Cu: goto label_17647c;
            case 0x176480u: goto label_176480;
            case 0x176484u: goto label_176484;
            case 0x176488u: goto label_176488;
            case 0x17648Cu: goto label_17648c;
            case 0x176490u: goto label_176490;
            case 0x176494u: goto label_176494;
            case 0x176498u: goto label_176498;
            case 0x17649Cu: goto label_17649c;
            case 0x1764A0u: goto label_1764a0;
            case 0x1764A4u: goto label_1764a4;
            case 0x1764A8u: goto label_1764a8;
            case 0x1764ACu: goto label_1764ac;
            case 0x1764B0u: goto label_1764b0;
            case 0x1764B4u: goto label_1764b4;
            case 0x1764B8u: goto label_1764b8;
            case 0x1764BCu: goto label_1764bc;
            case 0x1764C0u: goto label_1764c0;
            case 0x1764C4u: goto label_1764c4;
            case 0x1764C8u: goto label_1764c8;
            case 0x1764CCu: goto label_1764cc;
            case 0x1764D0u: goto label_1764d0;
            case 0x1764D4u: goto label_1764d4;
            case 0x1764D8u: goto label_1764d8;
            case 0x1764DCu: goto label_1764dc;
            case 0x1764E0u: goto label_1764e0;
            case 0x1764E4u: goto label_1764e4;
            case 0x1764E8u: goto label_1764e8;
            case 0x1764ECu: goto label_1764ec;
            case 0x1764F0u: goto label_1764f0;
            case 0x1764F4u: goto label_1764f4;
            case 0x1764F8u: goto label_1764f8;
            case 0x1764FCu: goto label_1764fc;
            case 0x176500u: goto label_176500;
            case 0x176504u: goto label_176504;
            case 0x176508u: goto label_176508;
            case 0x17650Cu: goto label_17650c;
            case 0x176510u: goto label_176510;
            case 0x176514u: goto label_176514;
            case 0x176518u: goto label_176518;
            case 0x17651Cu: goto label_17651c;
            case 0x176520u: goto label_176520;
            case 0x176524u: goto label_176524;
            case 0x176528u: goto label_176528;
            case 0x17652Cu: goto label_17652c;
            case 0x176530u: goto label_176530;
            case 0x176534u: goto label_176534;
            case 0x176538u: goto label_176538;
            case 0x17653Cu: goto label_17653c;
            case 0x176540u: goto label_176540;
            case 0x176544u: goto label_176544;
            case 0x176548u: goto label_176548;
            case 0x17654Cu: goto label_17654c;
            case 0x176550u: goto label_176550;
            case 0x176554u: goto label_176554;
            case 0x176558u: goto label_176558;
            case 0x17655Cu: goto label_17655c;
            case 0x176560u: goto label_176560;
            case 0x176564u: goto label_176564;
            case 0x176568u: goto label_176568;
            case 0x17656Cu: goto label_17656c;
            case 0x176570u: goto label_176570;
            case 0x176574u: goto label_176574;
            case 0x176578u: goto label_176578;
            case 0x17657Cu: goto label_17657c;
            case 0x176580u: goto label_176580;
            case 0x176584u: goto label_176584;
            case 0x176588u: goto label_176588;
            case 0x17658Cu: goto label_17658c;
            case 0x176590u: goto label_176590;
            case 0x176594u: goto label_176594;
            case 0x176598u: goto label_176598;
            case 0x17659Cu: goto label_17659c;
            case 0x1765A0u: goto label_1765a0;
            case 0x1765A4u: goto label_1765a4;
            case 0x1765A8u: goto label_1765a8;
            case 0x1765ACu: goto label_1765ac;
            case 0x1765B0u: goto label_1765b0;
            case 0x1765B4u: goto label_1765b4;
            case 0x1765B8u: goto label_1765b8;
            case 0x1765BCu: goto label_1765bc;
            case 0x1765C0u: goto label_1765c0;
            case 0x1765C4u: goto label_1765c4;
            case 0x1765C8u: goto label_1765c8;
            case 0x1765CCu: goto label_1765cc;
            case 0x1765D0u: goto label_1765d0;
            case 0x1765D4u: goto label_1765d4;
            case 0x1765D8u: goto label_1765d8;
            case 0x1765DCu: goto label_1765dc;
            case 0x1765E0u: goto label_1765e0;
            case 0x1765E4u: goto label_1765e4;
            case 0x1765E8u: goto label_1765e8;
            case 0x1765ECu: goto label_1765ec;
            case 0x1765F0u: goto label_1765f0;
            case 0x1765F4u: goto label_1765f4;
            case 0x1765F8u: goto label_1765f8;
            case 0x1765FCu: goto label_1765fc;
            case 0x176600u: goto label_176600;
            case 0x176604u: goto label_176604;
            case 0x176608u: goto label_176608;
            case 0x17660Cu: goto label_17660c;
            case 0x176610u: goto label_176610;
            case 0x176614u: goto label_176614;
            case 0x176618u: goto label_176618;
            case 0x17661Cu: goto label_17661c;
            case 0x176620u: goto label_176620;
            case 0x176624u: goto label_176624;
            case 0x176628u: goto label_176628;
            case 0x17662Cu: goto label_17662c;
            case 0x176630u: goto label_176630;
            case 0x176634u: goto label_176634;
            case 0x176638u: goto label_176638;
            case 0x17663Cu: goto label_17663c;
            case 0x176640u: goto label_176640;
            case 0x176644u: goto label_176644;
            case 0x176648u: goto label_176648;
            case 0x17664Cu: goto label_17664c;
            case 0x176650u: goto label_176650;
            case 0x176654u: goto label_176654;
            case 0x176658u: goto label_176658;
            case 0x17665Cu: goto label_17665c;
            case 0x176660u: goto label_176660;
            case 0x176664u: goto label_176664;
            case 0x176668u: goto label_176668;
            case 0x17666Cu: goto label_17666c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1765E4u; }
            if (ctx->pc != 0x1765E4u) { return; }
        }
    }
    ctx->pc = 0x1765E4u;
label_1765e4:
    // 0x1765e4: 0x220202d
    ctx->pc = 0x1765e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1765e8:
    // 0x1765e8: 0xc05d7b0
label_1765ec:
    if (ctx->pc == 0x1765ECu) {
        ctx->pc = 0x1765ECu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1765F0u;
        goto label_1765f0;
    }
    ctx->pc = 0x1765E8u;
    SET_GPR_U32(ctx, 31, 0x1765F0u);
    ctx->pc = 0x1765ECu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175EC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175EC0_0x175ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765F0u; }
    }
    if (ctx->pc != 0x1765F0u) { return; }
    ctx->pc = 0x1765F0u;
label_1765f0:
    // 0x1765f0: 0x1040000d
label_1765f4:
    if (ctx->pc == 0x1765F4u) {
        ctx->pc = 0x1765F4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x1765F8u;
        goto label_1765f8;
    }
    ctx->pc = 0x1765F0u;
    {
        const bool branch_taken_0x1765f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1765F4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967291));
        if (branch_taken_0x1765f0) {
            ctx->pc = 0x176628u;
            goto label_176628;
        }
    }
    ctx->pc = 0x1765F8u;
label_1765f8:
    // 0x1765f8: 0x8e020294
    ctx->pc = 0x1765f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 660)));
label_1765fc:
    // 0x1765fc: 0x5043000b
label_176600:
    if (ctx->pc == 0x176600u) {
        ctx->pc = 0x176600u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x176604u;
        goto label_176604;
    }
    ctx->pc = 0x1765FCu;
    {
        const bool branch_taken_0x1765fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1765fc) {
            ctx->pc = 0x176600u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x17662Cu;
            goto label_17662c;
        }
    }
    ctx->pc = 0x176604u;
label_176604:
    // 0x176604: 0x8e030294
    ctx->pc = 0x176604u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 660)));
label_176608:
    // 0x176608: 0x8fa40000
    ctx->pc = 0x176608u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_17660c:
    // 0x17660c: 0x8e020298
    ctx->pc = 0x17660cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 664)));
label_176610:
    // 0x176610: 0x831823
    ctx->pc = 0x176610u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_176614:
    // 0x176614: 0x431021
    ctx->pc = 0x176614u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_176618:
    // 0x176618: 0xae020298
    ctx->pc = 0x176618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 2));
label_17661c:
    // 0x17661c: 0x10000004
label_176620:
    if (ctx->pc == 0x176620u) {
        ctx->pc = 0x176620u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x176624u;
        goto label_176624;
    }
    ctx->pc = 0x17661Cu;
    {
        const bool branch_taken_0x17661c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x176620u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x17661c) {
            ctx->pc = 0x176630u;
            goto label_176630;
        }
    }
    ctx->pc = 0x176624u;
label_176624:
    // 0x176624: 0x0
    ctx->pc = 0x176624u;
    // NOP
label_176628:
    // 0x176628: 0x8fa40000
    ctx->pc = 0x176628u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_17662c:
    // 0x17662c: 0x8fa30004
    ctx->pc = 0x17662cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_176630:
    // 0x176630: 0x240102d
    ctx->pc = 0x176630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_176634:
    // 0x176634: 0xae040294
    ctx->pc = 0x176634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 4));
label_176638:
    // 0x176638: 0xae03029c
    ctx->pc = 0x176638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 3));
label_17663c:
    // 0x17663c: 0x8e040298
    ctx->pc = 0x17663cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 664)));
label_176640:
    // 0x176640: 0xae640000
    ctx->pc = 0x176640u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_176644:
    // 0x176644: 0x8e03029c
    ctx->pc = 0x176644u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 668)));
label_176648:
    // 0x176648: 0xae830000
    ctx->pc = 0x176648u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_17664c:
    // 0x17664c: 0xdfb00010
    ctx->pc = 0x17664cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_176650:
    // 0x176650: 0xdfb10018
    ctx->pc = 0x176650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_176654:
    // 0x176654: 0xdfb20020
    ctx->pc = 0x176654u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_176658:
    // 0x176658: 0xdfb30028
    ctx->pc = 0x176658u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_17665c:
    // 0x17665c: 0xdfb40030
    ctx->pc = 0x17665cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_176660:
    // 0x176660: 0xdfbf0038
    ctx->pc = 0x176660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_176664:
    // 0x176664: 0x3e00008
label_176668:
    if (ctx->pc == 0x176668u) {
        ctx->pc = 0x176668u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x17666Cu;
        goto label_17666c;
    }
    ctx->pc = 0x176664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176668u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176418u: goto label_176418;
            case 0x17641Cu: goto label_17641c;
            case 0x176420u: goto label_176420;
            case 0x176424u: goto label_176424;
            case 0x176428u: goto label_176428;
            case 0x17642Cu: goto label_17642c;
            case 0x176430u: goto label_176430;
            case 0x176434u: goto label_176434;
            case 0x176438u: goto label_176438;
            case 0x17643Cu: goto label_17643c;
            case 0x176440u: goto label_176440;
            case 0x176444u: goto label_176444;
            case 0x176448u: goto label_176448;
            case 0x17644Cu: goto label_17644c;
            case 0x176450u: goto label_176450;
            case 0x176454u: goto label_176454;
            case 0x176458u: goto label_176458;
            case 0x17645Cu: goto label_17645c;
            case 0x176460u: goto label_176460;
            case 0x176464u: goto label_176464;
            case 0x176468u: goto label_176468;
            case 0x17646Cu: goto label_17646c;
            case 0x176470u: goto label_176470;
            case 0x176474u: goto label_176474;
            case 0x176478u: goto label_176478;
            case 0x17647Cu: goto label_17647c;
            case 0x176480u: goto label_176480;
            case 0x176484u: goto label_176484;
            case 0x176488u: goto label_176488;
            case 0x17648Cu: goto label_17648c;
            case 0x176490u: goto label_176490;
            case 0x176494u: goto label_176494;
            case 0x176498u: goto label_176498;
            case 0x17649Cu: goto label_17649c;
            case 0x1764A0u: goto label_1764a0;
            case 0x1764A4u: goto label_1764a4;
            case 0x1764A8u: goto label_1764a8;
            case 0x1764ACu: goto label_1764ac;
            case 0x1764B0u: goto label_1764b0;
            case 0x1764B4u: goto label_1764b4;
            case 0x1764B8u: goto label_1764b8;
            case 0x1764BCu: goto label_1764bc;
            case 0x1764C0u: goto label_1764c0;
            case 0x1764C4u: goto label_1764c4;
            case 0x1764C8u: goto label_1764c8;
            case 0x1764CCu: goto label_1764cc;
            case 0x1764D0u: goto label_1764d0;
            case 0x1764D4u: goto label_1764d4;
            case 0x1764D8u: goto label_1764d8;
            case 0x1764DCu: goto label_1764dc;
            case 0x1764E0u: goto label_1764e0;
            case 0x1764E4u: goto label_1764e4;
            case 0x1764E8u: goto label_1764e8;
            case 0x1764ECu: goto label_1764ec;
            case 0x1764F0u: goto label_1764f0;
            case 0x1764F4u: goto label_1764f4;
            case 0x1764F8u: goto label_1764f8;
            case 0x1764FCu: goto label_1764fc;
            case 0x176500u: goto label_176500;
            case 0x176504u: goto label_176504;
            case 0x176508u: goto label_176508;
            case 0x17650Cu: goto label_17650c;
            case 0x176510u: goto label_176510;
            case 0x176514u: goto label_176514;
            case 0x176518u: goto label_176518;
            case 0x17651Cu: goto label_17651c;
            case 0x176520u: goto label_176520;
            case 0x176524u: goto label_176524;
            case 0x176528u: goto label_176528;
            case 0x17652Cu: goto label_17652c;
            case 0x176530u: goto label_176530;
            case 0x176534u: goto label_176534;
            case 0x176538u: goto label_176538;
            case 0x17653Cu: goto label_17653c;
            case 0x176540u: goto label_176540;
            case 0x176544u: goto label_176544;
            case 0x176548u: goto label_176548;
            case 0x17654Cu: goto label_17654c;
            case 0x176550u: goto label_176550;
            case 0x176554u: goto label_176554;
            case 0x176558u: goto label_176558;
            case 0x17655Cu: goto label_17655c;
            case 0x176560u: goto label_176560;
            case 0x176564u: goto label_176564;
            case 0x176568u: goto label_176568;
            case 0x17656Cu: goto label_17656c;
            case 0x176570u: goto label_176570;
            case 0x176574u: goto label_176574;
            case 0x176578u: goto label_176578;
            case 0x17657Cu: goto label_17657c;
            case 0x176580u: goto label_176580;
            case 0x176584u: goto label_176584;
            case 0x176588u: goto label_176588;
            case 0x17658Cu: goto label_17658c;
            case 0x176590u: goto label_176590;
            case 0x176594u: goto label_176594;
            case 0x176598u: goto label_176598;
            case 0x17659Cu: goto label_17659c;
            case 0x1765A0u: goto label_1765a0;
            case 0x1765A4u: goto label_1765a4;
            case 0x1765A8u: goto label_1765a8;
            case 0x1765ACu: goto label_1765ac;
            case 0x1765B0u: goto label_1765b0;
            case 0x1765B4u: goto label_1765b4;
            case 0x1765B8u: goto label_1765b8;
            case 0x1765BCu: goto label_1765bc;
            case 0x1765C0u: goto label_1765c0;
            case 0x1765C4u: goto label_1765c4;
            case 0x1765C8u: goto label_1765c8;
            case 0x1765CCu: goto label_1765cc;
            case 0x1765D0u: goto label_1765d0;
            case 0x1765D4u: goto label_1765d4;
            case 0x1765D8u: goto label_1765d8;
            case 0x1765DCu: goto label_1765dc;
            case 0x1765E0u: goto label_1765e0;
            case 0x1765E4u: goto label_1765e4;
            case 0x1765E8u: goto label_1765e8;
            case 0x1765ECu: goto label_1765ec;
            case 0x1765F0u: goto label_1765f0;
            case 0x1765F4u: goto label_1765f4;
            case 0x1765F8u: goto label_1765f8;
            case 0x1765FCu: goto label_1765fc;
            case 0x176600u: goto label_176600;
            case 0x176604u: goto label_176604;
            case 0x176608u: goto label_176608;
            case 0x17660Cu: goto label_17660c;
            case 0x176610u: goto label_176610;
            case 0x176614u: goto label_176614;
            case 0x176618u: goto label_176618;
            case 0x17661Cu: goto label_17661c;
            case 0x176620u: goto label_176620;
            case 0x176624u: goto label_176624;
            case 0x176628u: goto label_176628;
            case 0x17662Cu: goto label_17662c;
            case 0x176630u: goto label_176630;
            case 0x176634u: goto label_176634;
            case 0x176638u: goto label_176638;
            case 0x17663Cu: goto label_17663c;
            case 0x176640u: goto label_176640;
            case 0x176644u: goto label_176644;
            case 0x176648u: goto label_176648;
            case 0x17664Cu: goto label_17664c;
            case 0x176650u: goto label_176650;
            case 0x176654u: goto label_176654;
            case 0x176658u: goto label_176658;
            case 0x17665Cu: goto label_17665c;
            case 0x176660u: goto label_176660;
            case 0x176664u: goto label_176664;
            case 0x176668u: goto label_176668;
            case 0x17666Cu: goto label_17666c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17666Cu;
label_17666c:
    // 0x17666c: 0x0
    ctx->pc = 0x17666cu;
    // NOP
}
