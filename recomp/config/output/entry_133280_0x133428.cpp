#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_133280
// Address: 0x133280 - 0x133428
void entry_133280_0x133428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x133280u;

label_133280:
    // 0x133280: 0x27bdffa0
    ctx->pc = 0x133280u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_133284:
    // 0x133284: 0x24c3001f
    ctx->pc = 0x133284u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 31));
label_133288:
    // 0x133288: 0xffb00020
    ctx->pc = 0x133288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_13328c:
    // 0x13328c: 0x28c20000
    ctx->pc = 0x13328cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 0));
label_133290:
    // 0x133290: 0xffb10028
    ctx->pc = 0x133290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_133294:
    // 0x133294: 0x62300b
    ctx->pc = 0x133294u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
label_133298:
    // 0x133298: 0xffb20030
    ctx->pc = 0x133298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_13329c:
    // 0x13329c: 0xa0102d
    ctx->pc = 0x13329cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1332a0:
    // 0x1332a0: 0xffb30038
    ctx->pc = 0x1332a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1332a4:
    // 0x1332a4: 0x218c0
    ctx->pc = 0x1332a4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 3));
label_1332a8:
    // 0x1332a8: 0xffb40040
    ctx->pc = 0x1332a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1332ac:
    // 0x1332ac: 0x621821
    ctx->pc = 0x1332acu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1332b0:
    // 0x1332b0: 0xffb50048
    ctx->pc = 0x1332b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1332b4:
    // 0x1332b4: 0x63143
    ctx->pc = 0x1332b4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_1332b8:
    // 0x1332b8: 0xffbf0050
    ctx->pc = 0x1332b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1332bc:
    // 0x1332bc: 0x282d
    ctx->pc = 0x1332bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1332c0:
    // 0x1332c0: 0x102d
    ctx->pc = 0x1332c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1332c4:
    // 0x1332c4: 0x38040
    ctx->pc = 0x1332c4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 3), 1));
label_1332c8:
    // 0x1332c8: 0x8c940014
    ctx->pc = 0x1332c8u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1332cc:
    // 0x1332cc: 0x1280004c
label_1332d0:
    if (ctx->pc == 0x1332D0u) {
        ctx->pc = 0x1332D0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1332D4u;
        goto label_1332d4;
    }
    ctx->pc = 0x1332CCu;
    {
        const bool branch_taken_0x1332cc = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x1332D0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1332cc) {
            ctx->pc = 0x133400u;
            goto label_133400;
        }
    }
    ctx->pc = 0x1332D4u;
label_1332d4:
    // 0x1332d4: 0xd09818
    ctx->pc = 0x1332d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)(uint32_t)result); }
label_1332d8:
    // 0x1332d8: 0x8e830000
    ctx->pc = 0x1332d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1332dc:
    // 0x1332dc: 0x3a0382d
    ctx->pc = 0x1332dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1332e0:
    // 0x1332e0: 0x8c620018
    ctx->pc = 0x1332e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1332e4:
    // 0x1332e4: 0x40f809
label_1332e8:
    if (ctx->pc == 0x1332E8u) {
        ctx->pc = 0x1332E8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1332ECu;
        goto label_1332ec;
    }
    ctx->pc = 0x1332E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1332ECu);
        ctx->pc = 0x1332E8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133280u: goto label_133280;
            case 0x133284u: goto label_133284;
            case 0x133288u: goto label_133288;
            case 0x13328Cu: goto label_13328c;
            case 0x133290u: goto label_133290;
            case 0x133294u: goto label_133294;
            case 0x133298u: goto label_133298;
            case 0x13329Cu: goto label_13329c;
            case 0x1332A0u: goto label_1332a0;
            case 0x1332A4u: goto label_1332a4;
            case 0x1332A8u: goto label_1332a8;
            case 0x1332ACu: goto label_1332ac;
            case 0x1332B0u: goto label_1332b0;
            case 0x1332B4u: goto label_1332b4;
            case 0x1332B8u: goto label_1332b8;
            case 0x1332BCu: goto label_1332bc;
            case 0x1332C0u: goto label_1332c0;
            case 0x1332C4u: goto label_1332c4;
            case 0x1332C8u: goto label_1332c8;
            case 0x1332CCu: goto label_1332cc;
            case 0x1332D0u: goto label_1332d0;
            case 0x1332D4u: goto label_1332d4;
            case 0x1332D8u: goto label_1332d8;
            case 0x1332DCu: goto label_1332dc;
            case 0x1332E0u: goto label_1332e0;
            case 0x1332E4u: goto label_1332e4;
            case 0x1332E8u: goto label_1332e8;
            case 0x1332ECu: goto label_1332ec;
            case 0x1332F0u: goto label_1332f0;
            case 0x1332F4u: goto label_1332f4;
            case 0x1332F8u: goto label_1332f8;
            case 0x1332FCu: goto label_1332fc;
            case 0x133300u: goto label_133300;
            case 0x133304u: goto label_133304;
            case 0x133308u: goto label_133308;
            case 0x13330Cu: goto label_13330c;
            case 0x133310u: goto label_133310;
            case 0x133314u: goto label_133314;
            case 0x133318u: goto label_133318;
            case 0x13331Cu: goto label_13331c;
            case 0x133320u: goto label_133320;
            case 0x133324u: goto label_133324;
            case 0x133328u: goto label_133328;
            case 0x13332Cu: goto label_13332c;
            case 0x133330u: goto label_133330;
            case 0x133334u: goto label_133334;
            case 0x133338u: goto label_133338;
            case 0x13333Cu: goto label_13333c;
            case 0x133340u: goto label_133340;
            case 0x133344u: goto label_133344;
            case 0x133348u: goto label_133348;
            case 0x13334Cu: goto label_13334c;
            case 0x133350u: goto label_133350;
            case 0x133354u: goto label_133354;
            case 0x133358u: goto label_133358;
            case 0x13335Cu: goto label_13335c;
            case 0x133360u: goto label_133360;
            case 0x133364u: goto label_133364;
            case 0x133368u: goto label_133368;
            case 0x13336Cu: goto label_13336c;
            case 0x133370u: goto label_133370;
            case 0x133374u: goto label_133374;
            case 0x133378u: goto label_133378;
            case 0x13337Cu: goto label_13337c;
            case 0x133380u: goto label_133380;
            case 0x133384u: goto label_133384;
            case 0x133388u: goto label_133388;
            case 0x13338Cu: goto label_13338c;
            case 0x133390u: goto label_133390;
            case 0x133394u: goto label_133394;
            case 0x133398u: goto label_133398;
            case 0x13339Cu: goto label_13339c;
            case 0x1333A0u: goto label_1333a0;
            case 0x1333A4u: goto label_1333a4;
            case 0x1333A8u: goto label_1333a8;
            case 0x1333ACu: goto label_1333ac;
            case 0x1333B0u: goto label_1333b0;
            case 0x1333B4u: goto label_1333b4;
            case 0x1333B8u: goto label_1333b8;
            case 0x1333BCu: goto label_1333bc;
            case 0x1333C0u: goto label_1333c0;
            case 0x1333C4u: goto label_1333c4;
            case 0x1333C8u: goto label_1333c8;
            case 0x1333CCu: goto label_1333cc;
            case 0x1333D0u: goto label_1333d0;
            case 0x1333D4u: goto label_1333d4;
            case 0x1333D8u: goto label_1333d8;
            case 0x1333DCu: goto label_1333dc;
            case 0x1333E0u: goto label_1333e0;
            case 0x1333E4u: goto label_1333e4;
            case 0x1333E8u: goto label_1333e8;
            case 0x1333ECu: goto label_1333ec;
            case 0x1333F0u: goto label_1333f0;
            case 0x1333F4u: goto label_1333f4;
            case 0x1333F8u: goto label_1333f8;
            case 0x1333FCu: goto label_1333fc;
            case 0x133400u: goto label_133400;
            case 0x133404u: goto label_133404;
            case 0x133408u: goto label_133408;
            case 0x13340Cu: goto label_13340c;
            case 0x133410u: goto label_133410;
            case 0x133414u: goto label_133414;
            case 0x133418u: goto label_133418;
            case 0x13341Cu: goto label_13341c;
            case 0x133420u: goto label_133420;
            case 0x133424u: goto label_133424;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1332ECu; }
            if (ctx->pc != 0x1332ECu) { return; }
        }
    }
    ctx->pc = 0x1332ECu;
label_1332ec:
    // 0x1332ec: 0x52000001
label_1332f0:
    if (ctx->pc == 0x1332F0u) {
        ctx->pc = 0x1332F0u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x1332F4u;
        goto label_1332f4;
    }
    ctx->pc = 0x1332ECu;
    {
        const bool branch_taken_0x1332ec = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1332ec) {
            ctx->pc = 0x1332F0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1332F4u;
            goto label_1332f4;
        }
    }
    ctx->pc = 0x1332F4u;
label_1332f4:
    // 0x1332f4: 0x8fa20004
    ctx->pc = 0x1332f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1332f8:
    // 0x1332f8: 0x282d
    ctx->pc = 0x1332f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1332fc:
    // 0x1332fc: 0x8fa40000
    ctx->pc = 0x1332fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_133300:
    // 0x133300: 0x50001a
    ctx->pc = 0x133300u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_133304:
    // 0x133304: 0x1012
    ctx->pc = 0x133304u;
    SET_GPR_U32(ctx, 2, ctx->lo);
label_133308:
    // 0x133308: 0x50a818
    ctx->pc = 0x133308u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)(uint32_t)result); }
label_13330c:
    // 0x13330c: 0x2a0882d
    ctx->pc = 0x13330cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_133310:
    // 0x133310: 0xc041f1a
label_133314:
    if (ctx->pc == 0x133314u) {
        ctx->pc = 0x133314u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133318u;
        goto label_133318;
    }
    ctx->pc = 0x133310u;
    SET_GPR_U32(ctx, 31, 0x133318u);
    ctx->pc = 0x133314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133318u; }
    }
    if (ctx->pc != 0x133318u) { return; }
    ctx->pc = 0x133318u;
label_133318:
    // 0x133318: 0x220282d
    ctx->pc = 0x133318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13331c:
    // 0x13331c: 0x27b20010
    ctx->pc = 0x13331cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
label_133320:
    // 0x133320: 0x3a0202d
    ctx->pc = 0x133320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_133324:
    // 0x133324: 0x3a0302d
    ctx->pc = 0x133324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_133328:
    // 0x133328: 0xc0501f8
label_13332c:
    if (ctx->pc == 0x13332Cu) {
        ctx->pc = 0x13332Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133330u;
        goto label_133330;
    }
    ctx->pc = 0x133328u;
    SET_GPR_U32(ctx, 31, 0x133330u);
    ctx->pc = 0x13332Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1407E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001407E0_0x1407e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133330u; }
    }
    if (ctx->pc != 0x133330u) { return; }
    ctx->pc = 0x133330u;
label_133330:
    // 0x133330: 0x8e830000
    ctx->pc = 0x133330u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_133334:
    // 0x133334: 0x3a0302d
    ctx->pc = 0x133334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_133338:
    // 0x133338: 0x280202d
    ctx->pc = 0x133338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13333c:
    // 0x13333c: 0x8c620020
    ctx->pc = 0x13333cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_133340:
    // 0x133340: 0x40f809
label_133344:
    if (ctx->pc == 0x133344u) {
        ctx->pc = 0x133344u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x133348u;
        goto label_133348;
    }
    ctx->pc = 0x133340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133348u);
        ctx->pc = 0x133344u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133280u: goto label_133280;
            case 0x133284u: goto label_133284;
            case 0x133288u: goto label_133288;
            case 0x13328Cu: goto label_13328c;
            case 0x133290u: goto label_133290;
            case 0x133294u: goto label_133294;
            case 0x133298u: goto label_133298;
            case 0x13329Cu: goto label_13329c;
            case 0x1332A0u: goto label_1332a0;
            case 0x1332A4u: goto label_1332a4;
            case 0x1332A8u: goto label_1332a8;
            case 0x1332ACu: goto label_1332ac;
            case 0x1332B0u: goto label_1332b0;
            case 0x1332B4u: goto label_1332b4;
            case 0x1332B8u: goto label_1332b8;
            case 0x1332BCu: goto label_1332bc;
            case 0x1332C0u: goto label_1332c0;
            case 0x1332C4u: goto label_1332c4;
            case 0x1332C8u: goto label_1332c8;
            case 0x1332CCu: goto label_1332cc;
            case 0x1332D0u: goto label_1332d0;
            case 0x1332D4u: goto label_1332d4;
            case 0x1332D8u: goto label_1332d8;
            case 0x1332DCu: goto label_1332dc;
            case 0x1332E0u: goto label_1332e0;
            case 0x1332E4u: goto label_1332e4;
            case 0x1332E8u: goto label_1332e8;
            case 0x1332ECu: goto label_1332ec;
            case 0x1332F0u: goto label_1332f0;
            case 0x1332F4u: goto label_1332f4;
            case 0x1332F8u: goto label_1332f8;
            case 0x1332FCu: goto label_1332fc;
            case 0x133300u: goto label_133300;
            case 0x133304u: goto label_133304;
            case 0x133308u: goto label_133308;
            case 0x13330Cu: goto label_13330c;
            case 0x133310u: goto label_133310;
            case 0x133314u: goto label_133314;
            case 0x133318u: goto label_133318;
            case 0x13331Cu: goto label_13331c;
            case 0x133320u: goto label_133320;
            case 0x133324u: goto label_133324;
            case 0x133328u: goto label_133328;
            case 0x13332Cu: goto label_13332c;
            case 0x133330u: goto label_133330;
            case 0x133334u: goto label_133334;
            case 0x133338u: goto label_133338;
            case 0x13333Cu: goto label_13333c;
            case 0x133340u: goto label_133340;
            case 0x133344u: goto label_133344;
            case 0x133348u: goto label_133348;
            case 0x13334Cu: goto label_13334c;
            case 0x133350u: goto label_133350;
            case 0x133354u: goto label_133354;
            case 0x133358u: goto label_133358;
            case 0x13335Cu: goto label_13335c;
            case 0x133360u: goto label_133360;
            case 0x133364u: goto label_133364;
            case 0x133368u: goto label_133368;
            case 0x13336Cu: goto label_13336c;
            case 0x133370u: goto label_133370;
            case 0x133374u: goto label_133374;
            case 0x133378u: goto label_133378;
            case 0x13337Cu: goto label_13337c;
            case 0x133380u: goto label_133380;
            case 0x133384u: goto label_133384;
            case 0x133388u: goto label_133388;
            case 0x13338Cu: goto label_13338c;
            case 0x133390u: goto label_133390;
            case 0x133394u: goto label_133394;
            case 0x133398u: goto label_133398;
            case 0x13339Cu: goto label_13339c;
            case 0x1333A0u: goto label_1333a0;
            case 0x1333A4u: goto label_1333a4;
            case 0x1333A8u: goto label_1333a8;
            case 0x1333ACu: goto label_1333ac;
            case 0x1333B0u: goto label_1333b0;
            case 0x1333B4u: goto label_1333b4;
            case 0x1333B8u: goto label_1333b8;
            case 0x1333BCu: goto label_1333bc;
            case 0x1333C0u: goto label_1333c0;
            case 0x1333C4u: goto label_1333c4;
            case 0x1333C8u: goto label_1333c8;
            case 0x1333CCu: goto label_1333cc;
            case 0x1333D0u: goto label_1333d0;
            case 0x1333D4u: goto label_1333d4;
            case 0x1333D8u: goto label_1333d8;
            case 0x1333DCu: goto label_1333dc;
            case 0x1333E0u: goto label_1333e0;
            case 0x1333E4u: goto label_1333e4;
            case 0x1333E8u: goto label_1333e8;
            case 0x1333ECu: goto label_1333ec;
            case 0x1333F0u: goto label_1333f0;
            case 0x1333F4u: goto label_1333f4;
            case 0x1333F8u: goto label_1333f8;
            case 0x1333FCu: goto label_1333fc;
            case 0x133400u: goto label_133400;
            case 0x133404u: goto label_133404;
            case 0x133408u: goto label_133408;
            case 0x13340Cu: goto label_13340c;
            case 0x133410u: goto label_133410;
            case 0x133414u: goto label_133414;
            case 0x133418u: goto label_133418;
            case 0x13341Cu: goto label_13341c;
            case 0x133420u: goto label_133420;
            case 0x133424u: goto label_133424;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133348u; }
            if (ctx->pc != 0x133348u) { return; }
        }
    }
    ctx->pc = 0x133348u;
label_133348:
    // 0x133348: 0x8e830000
    ctx->pc = 0x133348u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_13334c:
    // 0x13334c: 0x280202d
    ctx->pc = 0x13334cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_133350:
    // 0x133350: 0x282d
    ctx->pc = 0x133350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133354:
    // 0x133354: 0x8c62001c
    ctx->pc = 0x133354u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_133358:
    // 0x133358: 0x40f809
label_13335c:
    if (ctx->pc == 0x13335Cu) {
        ctx->pc = 0x13335Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133360u;
        goto label_133360;
    }
    ctx->pc = 0x133358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133360u);
        ctx->pc = 0x13335Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133280u: goto label_133280;
            case 0x133284u: goto label_133284;
            case 0x133288u: goto label_133288;
            case 0x13328Cu: goto label_13328c;
            case 0x133290u: goto label_133290;
            case 0x133294u: goto label_133294;
            case 0x133298u: goto label_133298;
            case 0x13329Cu: goto label_13329c;
            case 0x1332A0u: goto label_1332a0;
            case 0x1332A4u: goto label_1332a4;
            case 0x1332A8u: goto label_1332a8;
            case 0x1332ACu: goto label_1332ac;
            case 0x1332B0u: goto label_1332b0;
            case 0x1332B4u: goto label_1332b4;
            case 0x1332B8u: goto label_1332b8;
            case 0x1332BCu: goto label_1332bc;
            case 0x1332C0u: goto label_1332c0;
            case 0x1332C4u: goto label_1332c4;
            case 0x1332C8u: goto label_1332c8;
            case 0x1332CCu: goto label_1332cc;
            case 0x1332D0u: goto label_1332d0;
            case 0x1332D4u: goto label_1332d4;
            case 0x1332D8u: goto label_1332d8;
            case 0x1332DCu: goto label_1332dc;
            case 0x1332E0u: goto label_1332e0;
            case 0x1332E4u: goto label_1332e4;
            case 0x1332E8u: goto label_1332e8;
            case 0x1332ECu: goto label_1332ec;
            case 0x1332F0u: goto label_1332f0;
            case 0x1332F4u: goto label_1332f4;
            case 0x1332F8u: goto label_1332f8;
            case 0x1332FCu: goto label_1332fc;
            case 0x133300u: goto label_133300;
            case 0x133304u: goto label_133304;
            case 0x133308u: goto label_133308;
            case 0x13330Cu: goto label_13330c;
            case 0x133310u: goto label_133310;
            case 0x133314u: goto label_133314;
            case 0x133318u: goto label_133318;
            case 0x13331Cu: goto label_13331c;
            case 0x133320u: goto label_133320;
            case 0x133324u: goto label_133324;
            case 0x133328u: goto label_133328;
            case 0x13332Cu: goto label_13332c;
            case 0x133330u: goto label_133330;
            case 0x133334u: goto label_133334;
            case 0x133338u: goto label_133338;
            case 0x13333Cu: goto label_13333c;
            case 0x133340u: goto label_133340;
            case 0x133344u: goto label_133344;
            case 0x133348u: goto label_133348;
            case 0x13334Cu: goto label_13334c;
            case 0x133350u: goto label_133350;
            case 0x133354u: goto label_133354;
            case 0x133358u: goto label_133358;
            case 0x13335Cu: goto label_13335c;
            case 0x133360u: goto label_133360;
            case 0x133364u: goto label_133364;
            case 0x133368u: goto label_133368;
            case 0x13336Cu: goto label_13336c;
            case 0x133370u: goto label_133370;
            case 0x133374u: goto label_133374;
            case 0x133378u: goto label_133378;
            case 0x13337Cu: goto label_13337c;
            case 0x133380u: goto label_133380;
            case 0x133384u: goto label_133384;
            case 0x133388u: goto label_133388;
            case 0x13338Cu: goto label_13338c;
            case 0x133390u: goto label_133390;
            case 0x133394u: goto label_133394;
            case 0x133398u: goto label_133398;
            case 0x13339Cu: goto label_13339c;
            case 0x1333A0u: goto label_1333a0;
            case 0x1333A4u: goto label_1333a4;
            case 0x1333A8u: goto label_1333a8;
            case 0x1333ACu: goto label_1333ac;
            case 0x1333B0u: goto label_1333b0;
            case 0x1333B4u: goto label_1333b4;
            case 0x1333B8u: goto label_1333b8;
            case 0x1333BCu: goto label_1333bc;
            case 0x1333C0u: goto label_1333c0;
            case 0x1333C4u: goto label_1333c4;
            case 0x1333C8u: goto label_1333c8;
            case 0x1333CCu: goto label_1333cc;
            case 0x1333D0u: goto label_1333d0;
            case 0x1333D4u: goto label_1333d4;
            case 0x1333D8u: goto label_1333d8;
            case 0x1333DCu: goto label_1333dc;
            case 0x1333E0u: goto label_1333e0;
            case 0x1333E4u: goto label_1333e4;
            case 0x1333E8u: goto label_1333e8;
            case 0x1333ECu: goto label_1333ec;
            case 0x1333F0u: goto label_1333f0;
            case 0x1333F4u: goto label_1333f4;
            case 0x1333F8u: goto label_1333f8;
            case 0x1333FCu: goto label_1333fc;
            case 0x133400u: goto label_133400;
            case 0x133404u: goto label_133404;
            case 0x133408u: goto label_133408;
            case 0x13340Cu: goto label_13340c;
            case 0x133410u: goto label_133410;
            case 0x133414u: goto label_133414;
            case 0x133418u: goto label_133418;
            case 0x13341Cu: goto label_13341c;
            case 0x133420u: goto label_133420;
            case 0x133424u: goto label_133424;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133360u; }
            if (ctx->pc != 0x133360u) { return; }
        }
    }
    ctx->pc = 0x133360u;
label_133360:
    // 0x133360: 0x8e830000
    ctx->pc = 0x133360u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_133364:
    // 0x133364: 0x3a0382d
    ctx->pc = 0x133364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_133368:
    // 0x133368: 0x2713023
    ctx->pc = 0x133368u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_13336c:
    // 0x13336c: 0x8c620018
    ctx->pc = 0x13336cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_133370:
    // 0x133370: 0x280202d
    ctx->pc = 0x133370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_133374:
    // 0x133374: 0x40f809
label_133378:
    if (ctx->pc == 0x133378u) {
        ctx->pc = 0x133378u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13337Cu;
        goto label_13337c;
    }
    ctx->pc = 0x133374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13337Cu);
        ctx->pc = 0x133378u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133280u: goto label_133280;
            case 0x133284u: goto label_133284;
            case 0x133288u: goto label_133288;
            case 0x13328Cu: goto label_13328c;
            case 0x133290u: goto label_133290;
            case 0x133294u: goto label_133294;
            case 0x133298u: goto label_133298;
            case 0x13329Cu: goto label_13329c;
            case 0x1332A0u: goto label_1332a0;
            case 0x1332A4u: goto label_1332a4;
            case 0x1332A8u: goto label_1332a8;
            case 0x1332ACu: goto label_1332ac;
            case 0x1332B0u: goto label_1332b0;
            case 0x1332B4u: goto label_1332b4;
            case 0x1332B8u: goto label_1332b8;
            case 0x1332BCu: goto label_1332bc;
            case 0x1332C0u: goto label_1332c0;
            case 0x1332C4u: goto label_1332c4;
            case 0x1332C8u: goto label_1332c8;
            case 0x1332CCu: goto label_1332cc;
            case 0x1332D0u: goto label_1332d0;
            case 0x1332D4u: goto label_1332d4;
            case 0x1332D8u: goto label_1332d8;
            case 0x1332DCu: goto label_1332dc;
            case 0x1332E0u: goto label_1332e0;
            case 0x1332E4u: goto label_1332e4;
            case 0x1332E8u: goto label_1332e8;
            case 0x1332ECu: goto label_1332ec;
            case 0x1332F0u: goto label_1332f0;
            case 0x1332F4u: goto label_1332f4;
            case 0x1332F8u: goto label_1332f8;
            case 0x1332FCu: goto label_1332fc;
            case 0x133300u: goto label_133300;
            case 0x133304u: goto label_133304;
            case 0x133308u: goto label_133308;
            case 0x13330Cu: goto label_13330c;
            case 0x133310u: goto label_133310;
            case 0x133314u: goto label_133314;
            case 0x133318u: goto label_133318;
            case 0x13331Cu: goto label_13331c;
            case 0x133320u: goto label_133320;
            case 0x133324u: goto label_133324;
            case 0x133328u: goto label_133328;
            case 0x13332Cu: goto label_13332c;
            case 0x133330u: goto label_133330;
            case 0x133334u: goto label_133334;
            case 0x133338u: goto label_133338;
            case 0x13333Cu: goto label_13333c;
            case 0x133340u: goto label_133340;
            case 0x133344u: goto label_133344;
            case 0x133348u: goto label_133348;
            case 0x13334Cu: goto label_13334c;
            case 0x133350u: goto label_133350;
            case 0x133354u: goto label_133354;
            case 0x133358u: goto label_133358;
            case 0x13335Cu: goto label_13335c;
            case 0x133360u: goto label_133360;
            case 0x133364u: goto label_133364;
            case 0x133368u: goto label_133368;
            case 0x13336Cu: goto label_13336c;
            case 0x133370u: goto label_133370;
            case 0x133374u: goto label_133374;
            case 0x133378u: goto label_133378;
            case 0x13337Cu: goto label_13337c;
            case 0x133380u: goto label_133380;
            case 0x133384u: goto label_133384;
            case 0x133388u: goto label_133388;
            case 0x13338Cu: goto label_13338c;
            case 0x133390u: goto label_133390;
            case 0x133394u: goto label_133394;
            case 0x133398u: goto label_133398;
            case 0x13339Cu: goto label_13339c;
            case 0x1333A0u: goto label_1333a0;
            case 0x1333A4u: goto label_1333a4;
            case 0x1333A8u: goto label_1333a8;
            case 0x1333ACu: goto label_1333ac;
            case 0x1333B0u: goto label_1333b0;
            case 0x1333B4u: goto label_1333b4;
            case 0x1333B8u: goto label_1333b8;
            case 0x1333BCu: goto label_1333bc;
            case 0x1333C0u: goto label_1333c0;
            case 0x1333C4u: goto label_1333c4;
            case 0x1333C8u: goto label_1333c8;
            case 0x1333CCu: goto label_1333cc;
            case 0x1333D0u: goto label_1333d0;
            case 0x1333D4u: goto label_1333d4;
            case 0x1333D8u: goto label_1333d8;
            case 0x1333DCu: goto label_1333dc;
            case 0x1333E0u: goto label_1333e0;
            case 0x1333E4u: goto label_1333e4;
            case 0x1333E8u: goto label_1333e8;
            case 0x1333ECu: goto label_1333ec;
            case 0x1333F0u: goto label_1333f0;
            case 0x1333F4u: goto label_1333f4;
            case 0x1333F8u: goto label_1333f8;
            case 0x1333FCu: goto label_1333fc;
            case 0x133400u: goto label_133400;
            case 0x133404u: goto label_133404;
            case 0x133408u: goto label_133408;
            case 0x13340Cu: goto label_13340c;
            case 0x133410u: goto label_133410;
            case 0x133414u: goto label_133414;
            case 0x133418u: goto label_133418;
            case 0x13341Cu: goto label_13341c;
            case 0x133420u: goto label_133420;
            case 0x133424u: goto label_133424;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13337Cu; }
            if (ctx->pc != 0x13337Cu) { return; }
        }
    }
    ctx->pc = 0x13337Cu;
label_13337c:
    // 0x13337c: 0x52000001
label_133380:
    if (ctx->pc == 0x133380u) {
        ctx->pc = 0x133380u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x133384u;
        goto label_133384;
    }
    ctx->pc = 0x13337Cu;
    {
        const bool branch_taken_0x13337c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x13337c) {
            ctx->pc = 0x133380u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x133384u;
            goto label_133384;
        }
    }
    ctx->pc = 0x133384u;
label_133384:
    // 0x133384: 0x8fa20004
    ctx->pc = 0x133384u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_133388:
    // 0x133388: 0x282d
    ctx->pc = 0x133388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13338c:
    // 0x13338c: 0x8fa40000
    ctx->pc = 0x13338cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_133390:
    // 0x133390: 0x50001a
    ctx->pc = 0x133390u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_133394:
    // 0x133394: 0x1012
    ctx->pc = 0x133394u;
    SET_GPR_U32(ctx, 2, ctx->lo);
label_133398:
    // 0x133398: 0x50a818
    ctx->pc = 0x133398u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)(uint32_t)result); }
label_13339c:
    // 0x13339c: 0x2a0302d
    ctx->pc = 0x13339cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1333a0:
    // 0x1333a0: 0xc041f1a
label_1333a4:
    if (ctx->pc == 0x1333A4u) {
        ctx->pc = 0x1333A4u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->pc = 0x1333A8u;
        goto label_1333a8;
    }
    ctx->pc = 0x1333A0u;
    SET_GPR_U32(ctx, 31, 0x1333A8u);
    ctx->pc = 0x1333A4u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1333A8u; }
    }
    if (ctx->pc != 0x1333A8u) { return; }
    ctx->pc = 0x1333A8u;
label_1333a8:
    // 0x1333a8: 0x2a0282d
    ctx->pc = 0x1333a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1333ac:
    // 0x1333ac: 0x3a0202d
    ctx->pc = 0x1333acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1333b0:
    // 0x1333b0: 0x3a0302d
    ctx->pc = 0x1333b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1333b4:
    // 0x1333b4: 0xc0501f8
label_1333b8:
    if (ctx->pc == 0x1333B8u) {
        ctx->pc = 0x1333B8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1333BCu;
        goto label_1333bc;
    }
    ctx->pc = 0x1333B4u;
    SET_GPR_U32(ctx, 31, 0x1333BCu);
    ctx->pc = 0x1333B8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1407E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001407E0_0x1407e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1333BCu; }
    }
    if (ctx->pc != 0x1333BCu) { return; }
    ctx->pc = 0x1333BCu;
label_1333bc:
    // 0x1333bc: 0x8e830000
    ctx->pc = 0x1333bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1333c0:
    // 0x1333c0: 0x3a0302d
    ctx->pc = 0x1333c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1333c4:
    // 0x1333c4: 0x280202d
    ctx->pc = 0x1333c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1333c8:
    // 0x1333c8: 0x8c620020
    ctx->pc = 0x1333c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1333cc:
    // 0x1333cc: 0x40f809
label_1333d0:
    if (ctx->pc == 0x1333D0u) {
        ctx->pc = 0x1333D0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1333D4u;
        goto label_1333d4;
    }
    ctx->pc = 0x1333CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1333D4u);
        ctx->pc = 0x1333D0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133280u: goto label_133280;
            case 0x133284u: goto label_133284;
            case 0x133288u: goto label_133288;
            case 0x13328Cu: goto label_13328c;
            case 0x133290u: goto label_133290;
            case 0x133294u: goto label_133294;
            case 0x133298u: goto label_133298;
            case 0x13329Cu: goto label_13329c;
            case 0x1332A0u: goto label_1332a0;
            case 0x1332A4u: goto label_1332a4;
            case 0x1332A8u: goto label_1332a8;
            case 0x1332ACu: goto label_1332ac;
            case 0x1332B0u: goto label_1332b0;
            case 0x1332B4u: goto label_1332b4;
            case 0x1332B8u: goto label_1332b8;
            case 0x1332BCu: goto label_1332bc;
            case 0x1332C0u: goto label_1332c0;
            case 0x1332C4u: goto label_1332c4;
            case 0x1332C8u: goto label_1332c8;
            case 0x1332CCu: goto label_1332cc;
            case 0x1332D0u: goto label_1332d0;
            case 0x1332D4u: goto label_1332d4;
            case 0x1332D8u: goto label_1332d8;
            case 0x1332DCu: goto label_1332dc;
            case 0x1332E0u: goto label_1332e0;
            case 0x1332E4u: goto label_1332e4;
            case 0x1332E8u: goto label_1332e8;
            case 0x1332ECu: goto label_1332ec;
            case 0x1332F0u: goto label_1332f0;
            case 0x1332F4u: goto label_1332f4;
            case 0x1332F8u: goto label_1332f8;
            case 0x1332FCu: goto label_1332fc;
            case 0x133300u: goto label_133300;
            case 0x133304u: goto label_133304;
            case 0x133308u: goto label_133308;
            case 0x13330Cu: goto label_13330c;
            case 0x133310u: goto label_133310;
            case 0x133314u: goto label_133314;
            case 0x133318u: goto label_133318;
            case 0x13331Cu: goto label_13331c;
            case 0x133320u: goto label_133320;
            case 0x133324u: goto label_133324;
            case 0x133328u: goto label_133328;
            case 0x13332Cu: goto label_13332c;
            case 0x133330u: goto label_133330;
            case 0x133334u: goto label_133334;
            case 0x133338u: goto label_133338;
            case 0x13333Cu: goto label_13333c;
            case 0x133340u: goto label_133340;
            case 0x133344u: goto label_133344;
            case 0x133348u: goto label_133348;
            case 0x13334Cu: goto label_13334c;
            case 0x133350u: goto label_133350;
            case 0x133354u: goto label_133354;
            case 0x133358u: goto label_133358;
            case 0x13335Cu: goto label_13335c;
            case 0x133360u: goto label_133360;
            case 0x133364u: goto label_133364;
            case 0x133368u: goto label_133368;
            case 0x13336Cu: goto label_13336c;
            case 0x133370u: goto label_133370;
            case 0x133374u: goto label_133374;
            case 0x133378u: goto label_133378;
            case 0x13337Cu: goto label_13337c;
            case 0x133380u: goto label_133380;
            case 0x133384u: goto label_133384;
            case 0x133388u: goto label_133388;
            case 0x13338Cu: goto label_13338c;
            case 0x133390u: goto label_133390;
            case 0x133394u: goto label_133394;
            case 0x133398u: goto label_133398;
            case 0x13339Cu: goto label_13339c;
            case 0x1333A0u: goto label_1333a0;
            case 0x1333A4u: goto label_1333a4;
            case 0x1333A8u: goto label_1333a8;
            case 0x1333ACu: goto label_1333ac;
            case 0x1333B0u: goto label_1333b0;
            case 0x1333B4u: goto label_1333b4;
            case 0x1333B8u: goto label_1333b8;
            case 0x1333BCu: goto label_1333bc;
            case 0x1333C0u: goto label_1333c0;
            case 0x1333C4u: goto label_1333c4;
            case 0x1333C8u: goto label_1333c8;
            case 0x1333CCu: goto label_1333cc;
            case 0x1333D0u: goto label_1333d0;
            case 0x1333D4u: goto label_1333d4;
            case 0x1333D8u: goto label_1333d8;
            case 0x1333DCu: goto label_1333dc;
            case 0x1333E0u: goto label_1333e0;
            case 0x1333E4u: goto label_1333e4;
            case 0x1333E8u: goto label_1333e8;
            case 0x1333ECu: goto label_1333ec;
            case 0x1333F0u: goto label_1333f0;
            case 0x1333F4u: goto label_1333f4;
            case 0x1333F8u: goto label_1333f8;
            case 0x1333FCu: goto label_1333fc;
            case 0x133400u: goto label_133400;
            case 0x133404u: goto label_133404;
            case 0x133408u: goto label_133408;
            case 0x13340Cu: goto label_13340c;
            case 0x133410u: goto label_133410;
            case 0x133414u: goto label_133414;
            case 0x133418u: goto label_133418;
            case 0x13341Cu: goto label_13341c;
            case 0x133420u: goto label_133420;
            case 0x133424u: goto label_133424;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1333D4u; }
            if (ctx->pc != 0x1333D4u) { return; }
        }
    }
    ctx->pc = 0x1333D4u;
label_1333d4:
    // 0x1333d4: 0x8e830000
    ctx->pc = 0x1333d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1333d8:
    // 0x1333d8: 0x280202d
    ctx->pc = 0x1333d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1333dc:
    // 0x1333dc: 0x240302d
    ctx->pc = 0x1333dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1333e0:
    // 0x1333e0: 0x8c62001c
    ctx->pc = 0x1333e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1333e4:
    // 0x1333e4: 0x40f809
label_1333e8:
    if (ctx->pc == 0x1333E8u) {
        ctx->pc = 0x1333E8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1333ECu;
        goto label_1333ec;
    }
    ctx->pc = 0x1333E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1333ECu);
        ctx->pc = 0x1333E8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133280u: goto label_133280;
            case 0x133284u: goto label_133284;
            case 0x133288u: goto label_133288;
            case 0x13328Cu: goto label_13328c;
            case 0x133290u: goto label_133290;
            case 0x133294u: goto label_133294;
            case 0x133298u: goto label_133298;
            case 0x13329Cu: goto label_13329c;
            case 0x1332A0u: goto label_1332a0;
            case 0x1332A4u: goto label_1332a4;
            case 0x1332A8u: goto label_1332a8;
            case 0x1332ACu: goto label_1332ac;
            case 0x1332B0u: goto label_1332b0;
            case 0x1332B4u: goto label_1332b4;
            case 0x1332B8u: goto label_1332b8;
            case 0x1332BCu: goto label_1332bc;
            case 0x1332C0u: goto label_1332c0;
            case 0x1332C4u: goto label_1332c4;
            case 0x1332C8u: goto label_1332c8;
            case 0x1332CCu: goto label_1332cc;
            case 0x1332D0u: goto label_1332d0;
            case 0x1332D4u: goto label_1332d4;
            case 0x1332D8u: goto label_1332d8;
            case 0x1332DCu: goto label_1332dc;
            case 0x1332E0u: goto label_1332e0;
            case 0x1332E4u: goto label_1332e4;
            case 0x1332E8u: goto label_1332e8;
            case 0x1332ECu: goto label_1332ec;
            case 0x1332F0u: goto label_1332f0;
            case 0x1332F4u: goto label_1332f4;
            case 0x1332F8u: goto label_1332f8;
            case 0x1332FCu: goto label_1332fc;
            case 0x133300u: goto label_133300;
            case 0x133304u: goto label_133304;
            case 0x133308u: goto label_133308;
            case 0x13330Cu: goto label_13330c;
            case 0x133310u: goto label_133310;
            case 0x133314u: goto label_133314;
            case 0x133318u: goto label_133318;
            case 0x13331Cu: goto label_13331c;
            case 0x133320u: goto label_133320;
            case 0x133324u: goto label_133324;
            case 0x133328u: goto label_133328;
            case 0x13332Cu: goto label_13332c;
            case 0x133330u: goto label_133330;
            case 0x133334u: goto label_133334;
            case 0x133338u: goto label_133338;
            case 0x13333Cu: goto label_13333c;
            case 0x133340u: goto label_133340;
            case 0x133344u: goto label_133344;
            case 0x133348u: goto label_133348;
            case 0x13334Cu: goto label_13334c;
            case 0x133350u: goto label_133350;
            case 0x133354u: goto label_133354;
            case 0x133358u: goto label_133358;
            case 0x13335Cu: goto label_13335c;
            case 0x133360u: goto label_133360;
            case 0x133364u: goto label_133364;
            case 0x133368u: goto label_133368;
            case 0x13336Cu: goto label_13336c;
            case 0x133370u: goto label_133370;
            case 0x133374u: goto label_133374;
            case 0x133378u: goto label_133378;
            case 0x13337Cu: goto label_13337c;
            case 0x133380u: goto label_133380;
            case 0x133384u: goto label_133384;
            case 0x133388u: goto label_133388;
            case 0x13338Cu: goto label_13338c;
            case 0x133390u: goto label_133390;
            case 0x133394u: goto label_133394;
            case 0x133398u: goto label_133398;
            case 0x13339Cu: goto label_13339c;
            case 0x1333A0u: goto label_1333a0;
            case 0x1333A4u: goto label_1333a4;
            case 0x1333A8u: goto label_1333a8;
            case 0x1333ACu: goto label_1333ac;
            case 0x1333B0u: goto label_1333b0;
            case 0x1333B4u: goto label_1333b4;
            case 0x1333B8u: goto label_1333b8;
            case 0x1333BCu: goto label_1333bc;
            case 0x1333C0u: goto label_1333c0;
            case 0x1333C4u: goto label_1333c4;
            case 0x1333C8u: goto label_1333c8;
            case 0x1333CCu: goto label_1333cc;
            case 0x1333D0u: goto label_1333d0;
            case 0x1333D4u: goto label_1333d4;
            case 0x1333D8u: goto label_1333d8;
            case 0x1333DCu: goto label_1333dc;
            case 0x1333E0u: goto label_1333e0;
            case 0x1333E4u: goto label_1333e4;
            case 0x1333E8u: goto label_1333e8;
            case 0x1333ECu: goto label_1333ec;
            case 0x1333F0u: goto label_1333f0;
            case 0x1333F4u: goto label_1333f4;
            case 0x1333F8u: goto label_1333f8;
            case 0x1333FCu: goto label_1333fc;
            case 0x133400u: goto label_133400;
            case 0x133404u: goto label_133404;
            case 0x133408u: goto label_133408;
            case 0x13340Cu: goto label_13340c;
            case 0x133410u: goto label_133410;
            case 0x133414u: goto label_133414;
            case 0x133418u: goto label_133418;
            case 0x13341Cu: goto label_13341c;
            case 0x133420u: goto label_133420;
            case 0x133424u: goto label_133424;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1333ECu; }
            if (ctx->pc != 0x1333ECu) { return; }
        }
    }
    ctx->pc = 0x1333ECu;
label_1333ec:
    // 0x1333ec: 0x230001a
    ctx->pc = 0x1333ecu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_1333f0:
    // 0x1333f0: 0x52000001
label_1333f4:
    if (ctx->pc == 0x1333F4u) {
        ctx->pc = 0x1333F4u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x1333F8u;
        goto label_1333f8;
    }
    ctx->pc = 0x1333F0u;
    {
        const bool branch_taken_0x1333f0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1333f0) {
            ctx->pc = 0x1333F4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1333F8u;
            goto label_1333f8;
        }
    }
    ctx->pc = 0x1333F8u;
label_1333f8:
    // 0x1333f8: 0x8812
    ctx->pc = 0x1333f8u;
    SET_GPR_U32(ctx, 17, ctx->lo);
label_1333fc:
    // 0x1333fc: 0x111140
    ctx->pc = 0x1333fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 5));
label_133400:
    // 0x133400: 0xdfb00020
    ctx->pc = 0x133400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_133404:
    // 0x133404: 0xdfb10028
    ctx->pc = 0x133404u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_133408:
    // 0x133408: 0xdfb20030
    ctx->pc = 0x133408u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_13340c:
    // 0x13340c: 0xdfb30038
    ctx->pc = 0x13340cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_133410:
    // 0x133410: 0xdfb40040
    ctx->pc = 0x133410u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_133414:
    // 0x133414: 0xdfb50048
    ctx->pc = 0x133414u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_133418:
    // 0x133418: 0xdfbf0050
    ctx->pc = 0x133418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_13341c:
    // 0x13341c: 0x3e00008
label_133420:
    if (ctx->pc == 0x133420u) {
        ctx->pc = 0x133420u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x133424u;
        goto label_133424;
    }
    ctx->pc = 0x13341Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133420u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133280u: goto label_133280;
            case 0x133284u: goto label_133284;
            case 0x133288u: goto label_133288;
            case 0x13328Cu: goto label_13328c;
            case 0x133290u: goto label_133290;
            case 0x133294u: goto label_133294;
            case 0x133298u: goto label_133298;
            case 0x13329Cu: goto label_13329c;
            case 0x1332A0u: goto label_1332a0;
            case 0x1332A4u: goto label_1332a4;
            case 0x1332A8u: goto label_1332a8;
            case 0x1332ACu: goto label_1332ac;
            case 0x1332B0u: goto label_1332b0;
            case 0x1332B4u: goto label_1332b4;
            case 0x1332B8u: goto label_1332b8;
            case 0x1332BCu: goto label_1332bc;
            case 0x1332C0u: goto label_1332c0;
            case 0x1332C4u: goto label_1332c4;
            case 0x1332C8u: goto label_1332c8;
            case 0x1332CCu: goto label_1332cc;
            case 0x1332D0u: goto label_1332d0;
            case 0x1332D4u: goto label_1332d4;
            case 0x1332D8u: goto label_1332d8;
            case 0x1332DCu: goto label_1332dc;
            case 0x1332E0u: goto label_1332e0;
            case 0x1332E4u: goto label_1332e4;
            case 0x1332E8u: goto label_1332e8;
            case 0x1332ECu: goto label_1332ec;
            case 0x1332F0u: goto label_1332f0;
            case 0x1332F4u: goto label_1332f4;
            case 0x1332F8u: goto label_1332f8;
            case 0x1332FCu: goto label_1332fc;
            case 0x133300u: goto label_133300;
            case 0x133304u: goto label_133304;
            case 0x133308u: goto label_133308;
            case 0x13330Cu: goto label_13330c;
            case 0x133310u: goto label_133310;
            case 0x133314u: goto label_133314;
            case 0x133318u: goto label_133318;
            case 0x13331Cu: goto label_13331c;
            case 0x133320u: goto label_133320;
            case 0x133324u: goto label_133324;
            case 0x133328u: goto label_133328;
            case 0x13332Cu: goto label_13332c;
            case 0x133330u: goto label_133330;
            case 0x133334u: goto label_133334;
            case 0x133338u: goto label_133338;
            case 0x13333Cu: goto label_13333c;
            case 0x133340u: goto label_133340;
            case 0x133344u: goto label_133344;
            case 0x133348u: goto label_133348;
            case 0x13334Cu: goto label_13334c;
            case 0x133350u: goto label_133350;
            case 0x133354u: goto label_133354;
            case 0x133358u: goto label_133358;
            case 0x13335Cu: goto label_13335c;
            case 0x133360u: goto label_133360;
            case 0x133364u: goto label_133364;
            case 0x133368u: goto label_133368;
            case 0x13336Cu: goto label_13336c;
            case 0x133370u: goto label_133370;
            case 0x133374u: goto label_133374;
            case 0x133378u: goto label_133378;
            case 0x13337Cu: goto label_13337c;
            case 0x133380u: goto label_133380;
            case 0x133384u: goto label_133384;
            case 0x133388u: goto label_133388;
            case 0x13338Cu: goto label_13338c;
            case 0x133390u: goto label_133390;
            case 0x133394u: goto label_133394;
            case 0x133398u: goto label_133398;
            case 0x13339Cu: goto label_13339c;
            case 0x1333A0u: goto label_1333a0;
            case 0x1333A4u: goto label_1333a4;
            case 0x1333A8u: goto label_1333a8;
            case 0x1333ACu: goto label_1333ac;
            case 0x1333B0u: goto label_1333b0;
            case 0x1333B4u: goto label_1333b4;
            case 0x1333B8u: goto label_1333b8;
            case 0x1333BCu: goto label_1333bc;
            case 0x1333C0u: goto label_1333c0;
            case 0x1333C4u: goto label_1333c4;
            case 0x1333C8u: goto label_1333c8;
            case 0x1333CCu: goto label_1333cc;
            case 0x1333D0u: goto label_1333d0;
            case 0x1333D4u: goto label_1333d4;
            case 0x1333D8u: goto label_1333d8;
            case 0x1333DCu: goto label_1333dc;
            case 0x1333E0u: goto label_1333e0;
            case 0x1333E4u: goto label_1333e4;
            case 0x1333E8u: goto label_1333e8;
            case 0x1333ECu: goto label_1333ec;
            case 0x1333F0u: goto label_1333f0;
            case 0x1333F4u: goto label_1333f4;
            case 0x1333F8u: goto label_1333f8;
            case 0x1333FCu: goto label_1333fc;
            case 0x133400u: goto label_133400;
            case 0x133404u: goto label_133404;
            case 0x133408u: goto label_133408;
            case 0x13340Cu: goto label_13340c;
            case 0x133410u: goto label_133410;
            case 0x133414u: goto label_133414;
            case 0x133418u: goto label_133418;
            case 0x13341Cu: goto label_13341c;
            case 0x133420u: goto label_133420;
            case 0x133424u: goto label_133424;
            default: break;
        }
        return;
    }
    ctx->pc = 0x133424u;
label_133424:
    // 0x133424: 0x0
    ctx->pc = 0x133424u;
    // NOP
}
