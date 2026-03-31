#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B2340
// Address: 0x1b2340 - 0x1b2790
void sub_001B2340_0x1b2340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b2340u;

label_1b2340:
    // 0x1b2340: 0x27bdffe0
    ctx->pc = 0x1b2340u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b2344:
    // 0x1b2344: 0xffbf0010
    ctx->pc = 0x1b2344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b2348:
    // 0x1b2348: 0x7fb00000
    ctx->pc = 0x1b2348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b234c:
    // 0x1b234c: 0x802d
    ctx->pc = 0x1b234cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2350:
    // 0x1b2350: 0x3c040031
    ctx->pc = 0x1b2350u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
label_1b2354:
    // 0x1b2354: 0x282d
    ctx->pc = 0x1b2354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2358:
    // 0x1b2358: 0x248468e0
    ctx->pc = 0x1b2358u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26848));
label_1b235c:
    // 0x1b235c: 0xc041f1a
label_1b2360:
    if (ctx->pc == 0x1B2360u) {
        ctx->pc = 0x1B2360u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x1B2364u;
        goto label_1b2364;
    }
    ctx->pc = 0x1B235Cu;
    SET_GPR_U32(ctx, 31, 0x1B2364u);
    ctx->pc = 0x1B2360u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2364u; }
    }
    if (ctx->pc != 0x1B2364u) { return; }
    ctx->pc = 0x1B2364u;
label_1b2364:
    // 0x1b2364: 0x26100001
    ctx->pc = 0x1b2364u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1b2368:
    // 0x1b2368: 0x2a030100
    ctx->pc = 0x1b2368u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 256));
label_1b236c:
    // 0x1b236c: 0x1460fff8
label_1b2370:
    if (ctx->pc == 0x1B2370u) {
        ctx->pc = 0x1B2374u;
        goto label_1b2374;
    }
    ctx->pc = 0x1B236Cu;
    {
        const bool branch_taken_0x1b236c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b236c) {
            ctx->pc = 0x1B2350u;
            goto label_1b2350;
        }
    }
    ctx->pc = 0x1B2374u;
label_1b2374:
    // 0x1b2374: 0x3c030031
    ctx->pc = 0x1b2374u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_1b2378:
    // 0x1b2378: 0x3c010031
    ctx->pc = 0x1b2378u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
label_1b237c:
    // 0x1b237c: 0x246368c0
    ctx->pc = 0x1b237cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 26816));
label_1b2380:
    // 0x1b2380: 0x640800ff
    ctx->pc = 0x1b2380u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)255);
label_1b2384:
    // 0x1b2384: 0xac2366b0
    ctx->pc = 0x1b2384u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26288), GPR_U32(ctx, 3));
label_1b2388:
    // 0x1b2388: 0x382d
    ctx->pc = 0x1b2388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b238c:
    // 0x1b238c: 0x3c010031
    ctx->pc = 0x1b238cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
label_1b2390:
    // 0x1b2390: 0x24e70001
    ctx->pc = 0x1b2390u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_1b2394:
    // 0x1b2394: 0x8c2666b0
    ctx->pc = 0x1b2394u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 26288)));
label_1b2398:
    // 0x1b2398: 0x2504ffff
    ctx->pc = 0x1b2398u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 8), 4294967295));
label_1b239c:
    // 0x1b239c: 0x28e30100
    ctx->pc = 0x1b239cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), 256));
label_1b23a0:
    // 0x1b23a0: 0x24c5fffe
    ctx->pc = 0x1b23a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 4294967294));
label_1b23a4:
    // 0x1b23a4: 0x3c010031
    ctx->pc = 0x1b23a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
label_1b23a8:
    // 0x1b23a8: 0xac2566b0
    ctx->pc = 0x1b23a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26288), GPR_U32(ctx, 5));
label_1b23ac:
    // 0x1b23ac: 0xa4c8fffe
    ctx->pc = 0x1b23acu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294967294), (uint16_t)GPR_U32(ctx, 8));
label_1b23b0:
    // 0x1b23b0: 0x1460fff6
label_1b23b4:
    if (ctx->pc == 0x1B23B4u) {
        ctx->pc = 0x1B23B4u;
        SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 4), 65535));
        ctx->pc = 0x1B23B8u;
        goto label_1b23b8;
    }
    ctx->pc = 0x1B23B0u;
    {
        const bool branch_taken_0x1b23b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B23B4u;
        SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 4), 65535));
        if (branch_taken_0x1b23b0) {
            ctx->pc = 0x1B238Cu;
            goto label_1b238c;
        }
    }
    ctx->pc = 0x1B23B8u;
label_1b23b8:
    // 0x1b23b8: 0x3c010031
    ctx->pc = 0x1b23b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
label_1b23bc:
    // 0x1b23bc: 0x24030100
    ctx->pc = 0x1b23bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 256));
label_1b23c0:
    // 0x1b23c0: 0xa42068c0
    ctx->pc = 0x1b23c0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 26816), (uint16_t)GPR_U32(ctx, 0));
label_1b23c4:
    // 0x1b23c4: 0x3c010031
    ctx->pc = 0x1b23c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
label_1b23c8:
    // 0x1b23c8: 0xa42368c8
    ctx->pc = 0x1b23c8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 26824), (uint16_t)GPR_U32(ctx, 3));
label_1b23cc:
    // 0x1b23cc: 0xdfbf0010
    ctx->pc = 0x1b23ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b23d0:
    // 0x1b23d0: 0x7bb00000
    ctx->pc = 0x1b23d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b23d4:
    // 0x1b23d4: 0x3e00008
label_1b23d8:
    if (ctx->pc == 0x1B23D8u) {
        ctx->pc = 0x1B23D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1B23DCu;
        goto label_1b23dc;
    }
    ctx->pc = 0x1B23D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B23D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B2340u: goto label_1b2340;
            case 0x1B2344u: goto label_1b2344;
            case 0x1B2348u: goto label_1b2348;
            case 0x1B234Cu: goto label_1b234c;
            case 0x1B2350u: goto label_1b2350;
            case 0x1B2354u: goto label_1b2354;
            case 0x1B2358u: goto label_1b2358;
            case 0x1B235Cu: goto label_1b235c;
            case 0x1B2360u: goto label_1b2360;
            case 0x1B2364u: goto label_1b2364;
            case 0x1B2368u: goto label_1b2368;
            case 0x1B236Cu: goto label_1b236c;
            case 0x1B2370u: goto label_1b2370;
            case 0x1B2374u: goto label_1b2374;
            case 0x1B2378u: goto label_1b2378;
            case 0x1B237Cu: goto label_1b237c;
            case 0x1B2380u: goto label_1b2380;
            case 0x1B2384u: goto label_1b2384;
            case 0x1B2388u: goto label_1b2388;
            case 0x1B238Cu: goto label_1b238c;
            case 0x1B2390u: goto label_1b2390;
            case 0x1B2394u: goto label_1b2394;
            case 0x1B2398u: goto label_1b2398;
            case 0x1B239Cu: goto label_1b239c;
            case 0x1B23A0u: goto label_1b23a0;
            case 0x1B23A4u: goto label_1b23a4;
            case 0x1B23A8u: goto label_1b23a8;
            case 0x1B23ACu: goto label_1b23ac;
            case 0x1B23B0u: goto label_1b23b0;
            case 0x1B23B4u: goto label_1b23b4;
            case 0x1B23B8u: goto label_1b23b8;
            case 0x1B23BCu: goto label_1b23bc;
            case 0x1B23C0u: goto label_1b23c0;
            case 0x1B23C4u: goto label_1b23c4;
            case 0x1B23C8u: goto label_1b23c8;
            case 0x1B23CCu: goto label_1b23cc;
            case 0x1B23D0u: goto label_1b23d0;
            case 0x1B23D4u: goto label_1b23d4;
            case 0x1B23D8u: goto label_1b23d8;
            case 0x1B23DCu: goto label_1b23dc;
            case 0x1B23E0u: goto label_1b23e0;
            case 0x1B23E4u: goto label_1b23e4;
            case 0x1B23E8u: goto label_1b23e8;
            case 0x1B23ECu: goto label_1b23ec;
            case 0x1B23F0u: goto label_1b23f0;
            case 0x1B23F4u: goto label_1b23f4;
            case 0x1B23F8u: goto label_1b23f8;
            case 0x1B23FCu: goto label_1b23fc;
            case 0x1B2400u: goto label_1b2400;
            case 0x1B2404u: goto label_1b2404;
            case 0x1B2408u: goto label_1b2408;
            case 0x1B240Cu: goto label_1b240c;
            case 0x1B2410u: goto label_1b2410;
            case 0x1B2414u: goto label_1b2414;
            case 0x1B2418u: goto label_1b2418;
            case 0x1B241Cu: goto label_1b241c;
            case 0x1B2420u: goto label_1b2420;
            case 0x1B2424u: goto label_1b2424;
            case 0x1B2428u: goto label_1b2428;
            case 0x1B242Cu: goto label_1b242c;
            case 0x1B2430u: goto label_1b2430;
            case 0x1B2434u: goto label_1b2434;
            case 0x1B2438u: goto label_1b2438;
            case 0x1B243Cu: goto label_1b243c;
            case 0x1B2440u: goto label_1b2440;
            case 0x1B2444u: goto label_1b2444;
            case 0x1B2448u: goto label_1b2448;
            case 0x1B244Cu: goto label_1b244c;
            case 0x1B2450u: goto label_1b2450;
            case 0x1B2454u: goto label_1b2454;
            case 0x1B2458u: goto label_1b2458;
            case 0x1B245Cu: goto label_1b245c;
            case 0x1B2460u: goto label_1b2460;
            case 0x1B2464u: goto label_1b2464;
            case 0x1B2468u: goto label_1b2468;
            case 0x1B246Cu: goto label_1b246c;
            case 0x1B2470u: goto label_1b2470;
            case 0x1B2474u: goto label_1b2474;
            case 0x1B2478u: goto label_1b2478;
            case 0x1B247Cu: goto label_1b247c;
            case 0x1B2480u: goto label_1b2480;
            case 0x1B2484u: goto label_1b2484;
            case 0x1B2488u: goto label_1b2488;
            case 0x1B248Cu: goto label_1b248c;
            case 0x1B2490u: goto label_1b2490;
            case 0x1B2494u: goto label_1b2494;
            case 0x1B2498u: goto label_1b2498;
            case 0x1B249Cu: goto label_1b249c;
            case 0x1B24A0u: goto label_1b24a0;
            case 0x1B24A4u: goto label_1b24a4;
            case 0x1B24A8u: goto label_1b24a8;
            case 0x1B24ACu: goto label_1b24ac;
            case 0x1B24B0u: goto label_1b24b0;
            case 0x1B24B4u: goto label_1b24b4;
            case 0x1B24B8u: goto label_1b24b8;
            case 0x1B24BCu: goto label_1b24bc;
            case 0x1B24C0u: goto label_1b24c0;
            case 0x1B24C4u: goto label_1b24c4;
            case 0x1B24C8u: goto label_1b24c8;
            case 0x1B24CCu: goto label_1b24cc;
            case 0x1B24D0u: goto label_1b24d0;
            case 0x1B24D4u: goto label_1b24d4;
            case 0x1B24D8u: goto label_1b24d8;
            case 0x1B24DCu: goto label_1b24dc;
            case 0x1B24E0u: goto label_1b24e0;
            case 0x1B24E4u: goto label_1b24e4;
            case 0x1B24E8u: goto label_1b24e8;
            case 0x1B24ECu: goto label_1b24ec;
            case 0x1B24F0u: goto label_1b24f0;
            case 0x1B24F4u: goto label_1b24f4;
            case 0x1B24F8u: goto label_1b24f8;
            case 0x1B24FCu: goto label_1b24fc;
            case 0x1B2500u: goto label_1b2500;
            case 0x1B2504u: goto label_1b2504;
            case 0x1B2508u: goto label_1b2508;
            case 0x1B250Cu: goto label_1b250c;
            case 0x1B2510u: goto label_1b2510;
            case 0x1B2514u: goto label_1b2514;
            case 0x1B2518u: goto label_1b2518;
            case 0x1B251Cu: goto label_1b251c;
            case 0x1B2520u: goto label_1b2520;
            case 0x1B2524u: goto label_1b2524;
            case 0x1B2528u: goto label_1b2528;
            case 0x1B252Cu: goto label_1b252c;
            case 0x1B2530u: goto label_1b2530;
            case 0x1B2534u: goto label_1b2534;
            case 0x1B2538u: goto label_1b2538;
            case 0x1B253Cu: goto label_1b253c;
            case 0x1B2540u: goto label_1b2540;
            case 0x1B2544u: goto label_1b2544;
            case 0x1B2548u: goto label_1b2548;
            case 0x1B254Cu: goto label_1b254c;
            case 0x1B2550u: goto label_1b2550;
            case 0x1B2554u: goto label_1b2554;
            case 0x1B2558u: goto label_1b2558;
            case 0x1B255Cu: goto label_1b255c;
            case 0x1B2560u: goto label_1b2560;
            case 0x1B2564u: goto label_1b2564;
            case 0x1B2568u: goto label_1b2568;
            case 0x1B256Cu: goto label_1b256c;
            case 0x1B2570u: goto label_1b2570;
            case 0x1B2574u: goto label_1b2574;
            case 0x1B2578u: goto label_1b2578;
            case 0x1B257Cu: goto label_1b257c;
            case 0x1B2580u: goto label_1b2580;
            case 0x1B2584u: goto label_1b2584;
            case 0x1B2588u: goto label_1b2588;
            case 0x1B258Cu: goto label_1b258c;
            case 0x1B2590u: goto label_1b2590;
            case 0x1B2594u: goto label_1b2594;
            case 0x1B2598u: goto label_1b2598;
            case 0x1B259Cu: goto label_1b259c;
            case 0x1B25A0u: goto label_1b25a0;
            case 0x1B25A4u: goto label_1b25a4;
            case 0x1B25A8u: goto label_1b25a8;
            case 0x1B25ACu: goto label_1b25ac;
            case 0x1B25B0u: goto label_1b25b0;
            case 0x1B25B4u: goto label_1b25b4;
            case 0x1B25B8u: goto label_1b25b8;
            case 0x1B25BCu: goto label_1b25bc;
            case 0x1B25C0u: goto label_1b25c0;
            case 0x1B25C4u: goto label_1b25c4;
            case 0x1B25C8u: goto label_1b25c8;
            case 0x1B25CCu: goto label_1b25cc;
            case 0x1B25D0u: goto label_1b25d0;
            case 0x1B25D4u: goto label_1b25d4;
            case 0x1B25D8u: goto label_1b25d8;
            case 0x1B25DCu: goto label_1b25dc;
            case 0x1B25E0u: goto label_1b25e0;
            case 0x1B25E4u: goto label_1b25e4;
            case 0x1B25E8u: goto label_1b25e8;
            case 0x1B25ECu: goto label_1b25ec;
            case 0x1B25F0u: goto label_1b25f0;
            case 0x1B25F4u: goto label_1b25f4;
            case 0x1B25F8u: goto label_1b25f8;
            case 0x1B25FCu: goto label_1b25fc;
            case 0x1B2600u: goto label_1b2600;
            case 0x1B2604u: goto label_1b2604;
            case 0x1B2608u: goto label_1b2608;
            case 0x1B260Cu: goto label_1b260c;
            case 0x1B2610u: goto label_1b2610;
            case 0x1B2614u: goto label_1b2614;
            case 0x1B2618u: goto label_1b2618;
            case 0x1B261Cu: goto label_1b261c;
            case 0x1B2620u: goto label_1b2620;
            case 0x1B2624u: goto label_1b2624;
            case 0x1B2628u: goto label_1b2628;
            case 0x1B262Cu: goto label_1b262c;
            case 0x1B2630u: goto label_1b2630;
            case 0x1B2634u: goto label_1b2634;
            case 0x1B2638u: goto label_1b2638;
            case 0x1B263Cu: goto label_1b263c;
            case 0x1B2640u: goto label_1b2640;
            case 0x1B2644u: goto label_1b2644;
            case 0x1B2648u: goto label_1b2648;
            case 0x1B264Cu: goto label_1b264c;
            case 0x1B2650u: goto label_1b2650;
            case 0x1B2654u: goto label_1b2654;
            case 0x1B2658u: goto label_1b2658;
            case 0x1B265Cu: goto label_1b265c;
            case 0x1B2660u: goto label_1b2660;
            case 0x1B2664u: goto label_1b2664;
            case 0x1B2668u: goto label_1b2668;
            case 0x1B266Cu: goto label_1b266c;
            case 0x1B2670u: goto label_1b2670;
            case 0x1B2674u: goto label_1b2674;
            case 0x1B2678u: goto label_1b2678;
            case 0x1B267Cu: goto label_1b267c;
            case 0x1B2680u: goto label_1b2680;
            case 0x1B2684u: goto label_1b2684;
            case 0x1B2688u: goto label_1b2688;
            case 0x1B268Cu: goto label_1b268c;
            case 0x1B2690u: goto label_1b2690;
            case 0x1B2694u: goto label_1b2694;
            case 0x1B2698u: goto label_1b2698;
            case 0x1B269Cu: goto label_1b269c;
            case 0x1B26A0u: goto label_1b26a0;
            case 0x1B26A4u: goto label_1b26a4;
            case 0x1B26A8u: goto label_1b26a8;
            case 0x1B26ACu: goto label_1b26ac;
            case 0x1B26B0u: goto label_1b26b0;
            case 0x1B26B4u: goto label_1b26b4;
            case 0x1B26B8u: goto label_1b26b8;
            case 0x1B26BCu: goto label_1b26bc;
            case 0x1B26C0u: goto label_1b26c0;
            case 0x1B26C4u: goto label_1b26c4;
            case 0x1B26C8u: goto label_1b26c8;
            case 0x1B26CCu: goto label_1b26cc;
            case 0x1B26D0u: goto label_1b26d0;
            case 0x1B26D4u: goto label_1b26d4;
            case 0x1B26D8u: goto label_1b26d8;
            case 0x1B26DCu: goto label_1b26dc;
            case 0x1B26E0u: goto label_1b26e0;
            case 0x1B26E4u: goto label_1b26e4;
            case 0x1B26E8u: goto label_1b26e8;
            case 0x1B26ECu: goto label_1b26ec;
            case 0x1B26F0u: goto label_1b26f0;
            case 0x1B26F4u: goto label_1b26f4;
            case 0x1B26F8u: goto label_1b26f8;
            case 0x1B26FCu: goto label_1b26fc;
            case 0x1B2700u: goto label_1b2700;
            case 0x1B2704u: goto label_1b2704;
            case 0x1B2708u: goto label_1b2708;
            case 0x1B270Cu: goto label_1b270c;
            case 0x1B2710u: goto label_1b2710;
            case 0x1B2714u: goto label_1b2714;
            case 0x1B2718u: goto label_1b2718;
            case 0x1B271Cu: goto label_1b271c;
            case 0x1B2720u: goto label_1b2720;
            case 0x1B2724u: goto label_1b2724;
            case 0x1B2728u: goto label_1b2728;
            case 0x1B272Cu: goto label_1b272c;
            case 0x1B2730u: goto label_1b2730;
            case 0x1B2734u: goto label_1b2734;
            case 0x1B2738u: goto label_1b2738;
            case 0x1B273Cu: goto label_1b273c;
            case 0x1B2740u: goto label_1b2740;
            case 0x1B2744u: goto label_1b2744;
            case 0x1B2748u: goto label_1b2748;
            case 0x1B274Cu: goto label_1b274c;
            case 0x1B2750u: goto label_1b2750;
            case 0x1B2754u: goto label_1b2754;
            case 0x1B2758u: goto label_1b2758;
            case 0x1B275Cu: goto label_1b275c;
            case 0x1B2760u: goto label_1b2760;
            case 0x1B2764u: goto label_1b2764;
            case 0x1B2768u: goto label_1b2768;
            case 0x1B276Cu: goto label_1b276c;
            case 0x1B2770u: goto label_1b2770;
            case 0x1B2774u: goto label_1b2774;
            case 0x1B2778u: goto label_1b2778;
            case 0x1B277Cu: goto label_1b277c;
            case 0x1B2780u: goto label_1b2780;
            case 0x1B2784u: goto label_1b2784;
            case 0x1B2788u: goto label_1b2788;
            case 0x1B278Cu: goto label_1b278c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B23DCu;
label_1b23dc:
    // 0x1b23dc: 0x0
    ctx->pc = 0x1b23dcu;
    // NOP
label_1b23e0:
    // 0x1b23e0: 0x27bdff70
    ctx->pc = 0x1b23e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
label_1b23e4:
    // 0x1b23e4: 0xffbf0050
    ctx->pc = 0x1b23e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1b23e8:
    // 0x1b23e8: 0x7fb40040
    ctx->pc = 0x1b23e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1b23ec:
    // 0x1b23ec: 0x7fb30030
    ctx->pc = 0x1b23ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b23f0:
    // 0x1b23f0: 0x80a02d
    ctx->pc = 0x1b23f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b23f4:
    // 0x1b23f4: 0x7fb20020
    ctx->pc = 0x1b23f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b23f8:
    // 0x1b23f8: 0xa0982d
    ctx->pc = 0x1b23f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b23fc:
    // 0x1b23fc: 0x7fb10010
    ctx->pc = 0x1b23fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b2400:
    // 0x1b2400: 0xc0902d
    ctx->pc = 0x1b2400u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b2404:
    // 0x1b2404: 0xc06c9e4
label_1b2408:
    if (ctx->pc == 0x1B2408u) {
        ctx->pc = 0x1B2408u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1B240Cu;
        goto label_1b240c;
    }
    ctx->pc = 0x1B2404u;
    SET_GPR_U32(ctx, 31, 0x1B240Cu);
    ctx->pc = 0x1B2408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1B2790u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2790_0x1b2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B240Cu; }
    }
    if (ctx->pc != 0x1B240Cu) { return; }
    ctx->pc = 0x1B240Cu;
label_1b240c:
    // 0x1b240c: 0x14400003
label_1b2410:
    if (ctx->pc == 0x1B2410u) {
        ctx->pc = 0x1B2410u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2414u;
        goto label_1b2414;
    }
    ctx->pc = 0x1B240Cu;
    {
        const bool branch_taken_0x1b240c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B2410u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b240c) {
            ctx->pc = 0x1B241Cu;
            goto label_1b241c;
        }
    }
    ctx->pc = 0x1B2414u;
label_1b2414:
    // 0x1b2414: 0x10000052
label_1b2418:
    if (ctx->pc == 0x1B2418u) {
        ctx->pc = 0x1B2418u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1B241Cu;
        goto label_1b241c;
    }
    ctx->pc = 0x1B2414u;
    {
        const bool branch_taken_0x1b2414 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B2418u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1b2414) {
            ctx->pc = 0x1B2560u;
            goto label_1b2560;
        }
    }
    ctx->pc = 0x1B241Cu;
label_1b241c:
    // 0x1b241c: 0x3c010032
    ctx->pc = 0x1b241cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1b2420:
    // 0x1b2420: 0x27a40080
    ctx->pc = 0x1b2420u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
label_1b2424:
    // 0x1b2424: 0xc4224138
    ctx->pc = 0x1b2424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b2428:
    // 0x1b2428: 0x27a50070
    ctx->pc = 0x1b2428u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 112));
label_1b242c:
    // 0x1b242c: 0x27b10068
    ctx->pc = 0x1b242cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 104));
label_1b2430:
    // 0x1b2430: 0x3c010032
    ctx->pc = 0x1b2430u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1b2434:
    // 0x1b2434: 0xc421413c
    ctx->pc = 0x1b2434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b2438:
    // 0x1b2438: 0xe7a20080
    ctx->pc = 0x1b2438u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1b243c:
    // 0x1b243c: 0x3c010032
    ctx->pc = 0x1b243cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1b2440:
    // 0x1b2440: 0xc4204140
    ctx->pc = 0x1b2440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b2444:
    // 0x1b2444: 0xe7a10084
    ctx->pc = 0x1b2444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1b2448:
    // 0x1b2448: 0xe7a00088
    ctx->pc = 0x1b2448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1b244c:
    // 0x1b244c: 0xc6400000
    ctx->pc = 0x1b244cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b2450:
    // 0x1b2450: 0xe7a00070
    ctx->pc = 0x1b2450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1b2454:
    // 0x1b2454: 0xc6400004
    ctx->pc = 0x1b2454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b2458:
    // 0x1b2458: 0xe7a00074
    ctx->pc = 0x1b2458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1b245c:
    // 0x1b245c: 0xc6400008
    ctx->pc = 0x1b245cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b2460:
    // 0x1b2460: 0xc064744
label_1b2464:
    if (ctx->pc == 0x1B2464u) {
        ctx->pc = 0x1B2464u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->pc = 0x1B2468u;
        goto label_1b2468;
    }
    ctx->pc = 0x1B2460u;
    SET_GPR_U32(ctx, 31, 0x1B2468u);
    ctx->pc = 0x1B2464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->pc = 0x191D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00191D10_0x191d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2468u; }
    }
    if (ctx->pc != 0x1B2468u) { return; }
    ctx->pc = 0x1B2468u;
label_1b2468:
    // 0x1b2468: 0x44800800
    ctx->pc = 0x1b2468u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
label_1b246c:
    // 0x1b246c: 0x0
    ctx->pc = 0x1b246cu;
    // NOP
label_1b2470:
    // 0x1b2470: 0x46010034
    ctx->pc = 0x1b2470u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b2474:
    // 0x1b2474: 0x45000002
label_1b2478:
    if (ctx->pc == 0x1B2478u) {
        ctx->pc = 0x1B2478u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->pc = 0x1B247Cu;
        goto label_1b247c;
    }
    ctx->pc = 0x1B2474u;
    {
        const bool branch_taken_0x1b2474 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2478u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        if (branch_taken_0x1b2474) {
            ctx->pc = 0x1B2480u;
            goto label_1b2480;
        }
    }
    ctx->pc = 0x1B247Cu;
label_1b247c:
    // 0x1b247c: 0xe6210000
    ctx->pc = 0x1b247cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1b2480:
    // 0x1b2480: 0x3402c350
    ctx->pc = 0x1b2480u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 50000));
label_1b2484:
    // 0x1b2484: 0x44820000
    ctx->pc = 0x1b2484u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1b2488:
    // 0x1b2488: 0xc6210000
    ctx->pc = 0x1b2488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b248c:
    // 0x1b248c: 0x46800020
    ctx->pc = 0x1b248cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1b2490:
    // 0x1b2490: 0x46000836
    ctx->pc = 0x1b2490u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b2494:
    // 0x1b2494: 0x45010005
label_1b2498:
    if (ctx->pc == 0x1B2498u) {
        ctx->pc = 0x1B249Cu;
        goto label_1b249c;
    }
    ctx->pc = 0x1B2494u;
    {
        const bool branch_taken_0x1b2494 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2494) {
            ctx->pc = 0x1B24ACu;
            goto label_1b24ac;
        }
    }
    ctx->pc = 0x1B249Cu;
label_1b249c:
    // 0x1b249c: 0xc06ca04
label_1b24a0:
    if (ctx->pc == 0x1B24A0u) {
        ctx->pc = 0x1B24A4u;
        goto label_1b24a4;
    }
    ctx->pc = 0x1B249Cu;
    SET_GPR_U32(ctx, 31, 0x1B24A4u);
    ctx->pc = 0x1B2810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2810_0x1b2810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B24A4u; }
    }
    if (ctx->pc != 0x1B24A4u) { return; }
    ctx->pc = 0x1B24A4u;
label_1b24a4:
    // 0x1b24a4: 0x1000002e
label_1b24a8:
    if (ctx->pc == 0x1B24A8u) {
        ctx->pc = 0x1B24A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1B24ACu;
        goto label_1b24ac;
    }
    ctx->pc = 0x1B24A4u;
    {
        const bool branch_taken_0x1b24a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B24A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1b24a4) {
            ctx->pc = 0x1B2560u;
            goto label_1b2560;
        }
    }
    ctx->pc = 0x1B24ACu;
label_1b24ac:
    // 0x1b24ac: 0x0
    ctx->pc = 0x1b24acu;
    // NOP
label_1b24b0:
    // 0x1b24b0: 0x0
    ctx->pc = 0x1b24b0u;
    // NOP
label_1b24b4:
    // 0x1b24b4: 0x46000883
    ctx->pc = 0x1b24b4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
label_1b24b8:
    // 0x1b24b8: 0xae14001c
    ctx->pc = 0x1b24b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 20));
label_1b24bc:
    // 0x1b24bc: 0xae130018
    ctx->pc = 0x1b24bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
label_1b24c0:
    // 0x1b24c0: 0x27a40060
    ctx->pc = 0x1b24c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
label_1b24c4:
    // 0x1b24c4: 0x3c034300
    ctx->pc = 0x1b24c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17152 << 16));
label_1b24c8:
    // 0x1b24c8: 0x3c024f00
    ctx->pc = 0x1b24c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
label_1b24cc:
    // 0x1b24cc: 0xc4840000
    ctx->pc = 0x1b24ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1b24d0:
    // 0x1b24d0: 0xc4830004
    ctx->pc = 0x1b24d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b24d4:
    // 0x1b24d4: 0xc4810008
    ctx->pc = 0x1b24d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b24d8:
    // 0x1b24d8: 0xc480000c
    ctx->pc = 0x1b24d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b24dc:
    // 0x1b24dc: 0xe6040008
    ctx->pc = 0x1b24dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1b24e0:
    // 0x1b24e0: 0xe603000c
    ctx->pc = 0x1b24e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_1b24e4:
    // 0x1b24e4: 0xe6010010
    ctx->pc = 0x1b24e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_1b24e8:
    // 0x1b24e8: 0x44830800
    ctx->pc = 0x1b24e8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_1b24ec:
    // 0x1b24ec: 0x0
    ctx->pc = 0x1b24ecu;
    // NOP
label_1b24f0:
    // 0x1b24f0: 0xe6000014
    ctx->pc = 0x1b24f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_1b24f4:
    // 0x1b24f4: 0x46020842
    ctx->pc = 0x1b24f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1b24f8:
    // 0x1b24f8: 0x44820000
    ctx->pc = 0x1b24f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1b24fc:
    // 0x1b24fc: 0x0
    ctx->pc = 0x1b24fcu;
    // NOP
label_1b2500:
    // 0x1b2500: 0x46010036
    ctx->pc = 0x1b2500u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b2504:
    // 0x1b2504: 0x45010005
label_1b2508:
    if (ctx->pc == 0x1B2508u) {
        ctx->pc = 0x1B250Cu;
        goto label_1b250c;
    }
    ctx->pc = 0x1B2504u;
    {
        const bool branch_taken_0x1b2504 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2504) {
            ctx->pc = 0x1B251Cu;
            goto label_1b251c;
        }
    }
    ctx->pc = 0x1B250Cu;
label_1b250c:
    // 0x1b250c: 0x46000864
    ctx->pc = 0x1b250cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
label_1b2510:
    // 0x1b2510: 0x44030800
    ctx->pc = 0x1b2510u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
label_1b2514:
    // 0x1b2514: 0x10000008
label_1b2518:
    if (ctx->pc == 0x1B2518u) {
        ctx->pc = 0x1B2518u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1B251Cu;
        goto label_1b251c;
    }
    ctx->pc = 0x1B2514u;
    {
        const bool branch_taken_0x1b2514 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B2518u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1b2514) {
            ctx->pc = 0x1B2538u;
            goto label_1b2538;
        }
    }
    ctx->pc = 0x1B251Cu;
label_1b251c:
    // 0x1b251c: 0x46000841
    ctx->pc = 0x1b251cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b2520:
    // 0x1b2520: 0x3c028000
    ctx->pc = 0x1b2520u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
label_1b2524:
    // 0x1b2524: 0x46000864
    ctx->pc = 0x1b2524u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
label_1b2528:
    // 0x1b2528: 0x44030800
    ctx->pc = 0x1b2528u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
label_1b252c:
    // 0x1b252c: 0x0
    ctx->pc = 0x1b252cu;
    // NOP
label_1b2530:
    // 0x1b2530: 0x621825
    ctx->pc = 0x1b2530u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b2534:
    // 0x1b2534: 0xae030004
    ctx->pc = 0x1b2534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1b2538:
    // 0x1b2538: 0x3c020032
    ctx->pc = 0x1b2538u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_1b253c:
    // 0x1b253c: 0x8e050004
    ctx->pc = 0x1b253cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b2540:
    // 0x1b2540: 0x2403007f
    ctx->pc = 0x1b2540u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 127));
label_1b2544:
    // 0x1b2544: 0x244288e0
    ctx->pc = 0x1b2544u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936800));
label_1b2548:
    // 0x1b2548: 0x200202d
    ctx->pc = 0x1b2548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b254c:
    // 0x1b254c: 0x651823
    ctx->pc = 0x1b254cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1b2550:
    // 0x1b2550: 0x31880
    ctx->pc = 0x1b2550u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1b2554:
    // 0x1b2554: 0xc06ca14
label_1b2558:
    if (ctx->pc == 0x1B2558u) {
        ctx->pc = 0x1B2558u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1B255Cu;
        goto label_1b255c;
    }
    ctx->pc = 0x1B2554u;
    SET_GPR_U32(ctx, 31, 0x1B255Cu);
    ctx->pc = 0x1B2558u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1B2850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2850_0x1b2850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B255Cu; }
    }
    if (ctx->pc != 0x1B255Cu) { return; }
    ctx->pc = 0x1B255Cu;
label_1b255c:
    // 0x1b255c: 0x8e020004
    ctx->pc = 0x1b255cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b2560:
    // 0x1b2560: 0xdfbf0050
    ctx->pc = 0x1b2560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b2564:
    // 0x1b2564: 0x7bb40040
    ctx->pc = 0x1b2564u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b2568:
    // 0x1b2568: 0x7bb30030
    ctx->pc = 0x1b2568u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b256c:
    // 0x1b256c: 0x7bb20020
    ctx->pc = 0x1b256cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b2570:
    // 0x1b2570: 0x7bb10010
    ctx->pc = 0x1b2570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b2574:
    // 0x1b2574: 0x7bb00000
    ctx->pc = 0x1b2574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b2578:
    // 0x1b2578: 0x3e00008
label_1b257c:
    if (ctx->pc == 0x1B257Cu) {
        ctx->pc = 0x1B257Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1B2580u;
        goto label_1b2580;
    }
    ctx->pc = 0x1B2578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B257Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B2340u: goto label_1b2340;
            case 0x1B2344u: goto label_1b2344;
            case 0x1B2348u: goto label_1b2348;
            case 0x1B234Cu: goto label_1b234c;
            case 0x1B2350u: goto label_1b2350;
            case 0x1B2354u: goto label_1b2354;
            case 0x1B2358u: goto label_1b2358;
            case 0x1B235Cu: goto label_1b235c;
            case 0x1B2360u: goto label_1b2360;
            case 0x1B2364u: goto label_1b2364;
            case 0x1B2368u: goto label_1b2368;
            case 0x1B236Cu: goto label_1b236c;
            case 0x1B2370u: goto label_1b2370;
            case 0x1B2374u: goto label_1b2374;
            case 0x1B2378u: goto label_1b2378;
            case 0x1B237Cu: goto label_1b237c;
            case 0x1B2380u: goto label_1b2380;
            case 0x1B2384u: goto label_1b2384;
            case 0x1B2388u: goto label_1b2388;
            case 0x1B238Cu: goto label_1b238c;
            case 0x1B2390u: goto label_1b2390;
            case 0x1B2394u: goto label_1b2394;
            case 0x1B2398u: goto label_1b2398;
            case 0x1B239Cu: goto label_1b239c;
            case 0x1B23A0u: goto label_1b23a0;
            case 0x1B23A4u: goto label_1b23a4;
            case 0x1B23A8u: goto label_1b23a8;
            case 0x1B23ACu: goto label_1b23ac;
            case 0x1B23B0u: goto label_1b23b0;
            case 0x1B23B4u: goto label_1b23b4;
            case 0x1B23B8u: goto label_1b23b8;
            case 0x1B23BCu: goto label_1b23bc;
            case 0x1B23C0u: goto label_1b23c0;
            case 0x1B23C4u: goto label_1b23c4;
            case 0x1B23C8u: goto label_1b23c8;
            case 0x1B23CCu: goto label_1b23cc;
            case 0x1B23D0u: goto label_1b23d0;
            case 0x1B23D4u: goto label_1b23d4;
            case 0x1B23D8u: goto label_1b23d8;
            case 0x1B23DCu: goto label_1b23dc;
            case 0x1B23E0u: goto label_1b23e0;
            case 0x1B23E4u: goto label_1b23e4;
            case 0x1B23E8u: goto label_1b23e8;
            case 0x1B23ECu: goto label_1b23ec;
            case 0x1B23F0u: goto label_1b23f0;
            case 0x1B23F4u: goto label_1b23f4;
            case 0x1B23F8u: goto label_1b23f8;
            case 0x1B23FCu: goto label_1b23fc;
            case 0x1B2400u: goto label_1b2400;
            case 0x1B2404u: goto label_1b2404;
            case 0x1B2408u: goto label_1b2408;
            case 0x1B240Cu: goto label_1b240c;
            case 0x1B2410u: goto label_1b2410;
            case 0x1B2414u: goto label_1b2414;
            case 0x1B2418u: goto label_1b2418;
            case 0x1B241Cu: goto label_1b241c;
            case 0x1B2420u: goto label_1b2420;
            case 0x1B2424u: goto label_1b2424;
            case 0x1B2428u: goto label_1b2428;
            case 0x1B242Cu: goto label_1b242c;
            case 0x1B2430u: goto label_1b2430;
            case 0x1B2434u: goto label_1b2434;
            case 0x1B2438u: goto label_1b2438;
            case 0x1B243Cu: goto label_1b243c;
            case 0x1B2440u: goto label_1b2440;
            case 0x1B2444u: goto label_1b2444;
            case 0x1B2448u: goto label_1b2448;
            case 0x1B244Cu: goto label_1b244c;
            case 0x1B2450u: goto label_1b2450;
            case 0x1B2454u: goto label_1b2454;
            case 0x1B2458u: goto label_1b2458;
            case 0x1B245Cu: goto label_1b245c;
            case 0x1B2460u: goto label_1b2460;
            case 0x1B2464u: goto label_1b2464;
            case 0x1B2468u: goto label_1b2468;
            case 0x1B246Cu: goto label_1b246c;
            case 0x1B2470u: goto label_1b2470;
            case 0x1B2474u: goto label_1b2474;
            case 0x1B2478u: goto label_1b2478;
            case 0x1B247Cu: goto label_1b247c;
            case 0x1B2480u: goto label_1b2480;
            case 0x1B2484u: goto label_1b2484;
            case 0x1B2488u: goto label_1b2488;
            case 0x1B248Cu: goto label_1b248c;
            case 0x1B2490u: goto label_1b2490;
            case 0x1B2494u: goto label_1b2494;
            case 0x1B2498u: goto label_1b2498;
            case 0x1B249Cu: goto label_1b249c;
            case 0x1B24A0u: goto label_1b24a0;
            case 0x1B24A4u: goto label_1b24a4;
            case 0x1B24A8u: goto label_1b24a8;
            case 0x1B24ACu: goto label_1b24ac;
            case 0x1B24B0u: goto label_1b24b0;
            case 0x1B24B4u: goto label_1b24b4;
            case 0x1B24B8u: goto label_1b24b8;
            case 0x1B24BCu: goto label_1b24bc;
            case 0x1B24C0u: goto label_1b24c0;
            case 0x1B24C4u: goto label_1b24c4;
            case 0x1B24C8u: goto label_1b24c8;
            case 0x1B24CCu: goto label_1b24cc;
            case 0x1B24D0u: goto label_1b24d0;
            case 0x1B24D4u: goto label_1b24d4;
            case 0x1B24D8u: goto label_1b24d8;
            case 0x1B24DCu: goto label_1b24dc;
            case 0x1B24E0u: goto label_1b24e0;
            case 0x1B24E4u: goto label_1b24e4;
            case 0x1B24E8u: goto label_1b24e8;
            case 0x1B24ECu: goto label_1b24ec;
            case 0x1B24F0u: goto label_1b24f0;
            case 0x1B24F4u: goto label_1b24f4;
            case 0x1B24F8u: goto label_1b24f8;
            case 0x1B24FCu: goto label_1b24fc;
            case 0x1B2500u: goto label_1b2500;
            case 0x1B2504u: goto label_1b2504;
            case 0x1B2508u: goto label_1b2508;
            case 0x1B250Cu: goto label_1b250c;
            case 0x1B2510u: goto label_1b2510;
            case 0x1B2514u: goto label_1b2514;
            case 0x1B2518u: goto label_1b2518;
            case 0x1B251Cu: goto label_1b251c;
            case 0x1B2520u: goto label_1b2520;
            case 0x1B2524u: goto label_1b2524;
            case 0x1B2528u: goto label_1b2528;
            case 0x1B252Cu: goto label_1b252c;
            case 0x1B2530u: goto label_1b2530;
            case 0x1B2534u: goto label_1b2534;
            case 0x1B2538u: goto label_1b2538;
            case 0x1B253Cu: goto label_1b253c;
            case 0x1B2540u: goto label_1b2540;
            case 0x1B2544u: goto label_1b2544;
            case 0x1B2548u: goto label_1b2548;
            case 0x1B254Cu: goto label_1b254c;
            case 0x1B2550u: goto label_1b2550;
            case 0x1B2554u: goto label_1b2554;
            case 0x1B2558u: goto label_1b2558;
            case 0x1B255Cu: goto label_1b255c;
            case 0x1B2560u: goto label_1b2560;
            case 0x1B2564u: goto label_1b2564;
            case 0x1B2568u: goto label_1b2568;
            case 0x1B256Cu: goto label_1b256c;
            case 0x1B2570u: goto label_1b2570;
            case 0x1B2574u: goto label_1b2574;
            case 0x1B2578u: goto label_1b2578;
            case 0x1B257Cu: goto label_1b257c;
            case 0x1B2580u: goto label_1b2580;
            case 0x1B2584u: goto label_1b2584;
            case 0x1B2588u: goto label_1b2588;
            case 0x1B258Cu: goto label_1b258c;
            case 0x1B2590u: goto label_1b2590;
            case 0x1B2594u: goto label_1b2594;
            case 0x1B2598u: goto label_1b2598;
            case 0x1B259Cu: goto label_1b259c;
            case 0x1B25A0u: goto label_1b25a0;
            case 0x1B25A4u: goto label_1b25a4;
            case 0x1B25A8u: goto label_1b25a8;
            case 0x1B25ACu: goto label_1b25ac;
            case 0x1B25B0u: goto label_1b25b0;
            case 0x1B25B4u: goto label_1b25b4;
            case 0x1B25B8u: goto label_1b25b8;
            case 0x1B25BCu: goto label_1b25bc;
            case 0x1B25C0u: goto label_1b25c0;
            case 0x1B25C4u: goto label_1b25c4;
            case 0x1B25C8u: goto label_1b25c8;
            case 0x1B25CCu: goto label_1b25cc;
            case 0x1B25D0u: goto label_1b25d0;
            case 0x1B25D4u: goto label_1b25d4;
            case 0x1B25D8u: goto label_1b25d8;
            case 0x1B25DCu: goto label_1b25dc;
            case 0x1B25E0u: goto label_1b25e0;
            case 0x1B25E4u: goto label_1b25e4;
            case 0x1B25E8u: goto label_1b25e8;
            case 0x1B25ECu: goto label_1b25ec;
            case 0x1B25F0u: goto label_1b25f0;
            case 0x1B25F4u: goto label_1b25f4;
            case 0x1B25F8u: goto label_1b25f8;
            case 0x1B25FCu: goto label_1b25fc;
            case 0x1B2600u: goto label_1b2600;
            case 0x1B2604u: goto label_1b2604;
            case 0x1B2608u: goto label_1b2608;
            case 0x1B260Cu: goto label_1b260c;
            case 0x1B2610u: goto label_1b2610;
            case 0x1B2614u: goto label_1b2614;
            case 0x1B2618u: goto label_1b2618;
            case 0x1B261Cu: goto label_1b261c;
            case 0x1B2620u: goto label_1b2620;
            case 0x1B2624u: goto label_1b2624;
            case 0x1B2628u: goto label_1b2628;
            case 0x1B262Cu: goto label_1b262c;
            case 0x1B2630u: goto label_1b2630;
            case 0x1B2634u: goto label_1b2634;
            case 0x1B2638u: goto label_1b2638;
            case 0x1B263Cu: goto label_1b263c;
            case 0x1B2640u: goto label_1b2640;
            case 0x1B2644u: goto label_1b2644;
            case 0x1B2648u: goto label_1b2648;
            case 0x1B264Cu: goto label_1b264c;
            case 0x1B2650u: goto label_1b2650;
            case 0x1B2654u: goto label_1b2654;
            case 0x1B2658u: goto label_1b2658;
            case 0x1B265Cu: goto label_1b265c;
            case 0x1B2660u: goto label_1b2660;
            case 0x1B2664u: goto label_1b2664;
            case 0x1B2668u: goto label_1b2668;
            case 0x1B266Cu: goto label_1b266c;
            case 0x1B2670u: goto label_1b2670;
            case 0x1B2674u: goto label_1b2674;
            case 0x1B2678u: goto label_1b2678;
            case 0x1B267Cu: goto label_1b267c;
            case 0x1B2680u: goto label_1b2680;
            case 0x1B2684u: goto label_1b2684;
            case 0x1B2688u: goto label_1b2688;
            case 0x1B268Cu: goto label_1b268c;
            case 0x1B2690u: goto label_1b2690;
            case 0x1B2694u: goto label_1b2694;
            case 0x1B2698u: goto label_1b2698;
            case 0x1B269Cu: goto label_1b269c;
            case 0x1B26A0u: goto label_1b26a0;
            case 0x1B26A4u: goto label_1b26a4;
            case 0x1B26A8u: goto label_1b26a8;
            case 0x1B26ACu: goto label_1b26ac;
            case 0x1B26B0u: goto label_1b26b0;
            case 0x1B26B4u: goto label_1b26b4;
            case 0x1B26B8u: goto label_1b26b8;
            case 0x1B26BCu: goto label_1b26bc;
            case 0x1B26C0u: goto label_1b26c0;
            case 0x1B26C4u: goto label_1b26c4;
            case 0x1B26C8u: goto label_1b26c8;
            case 0x1B26CCu: goto label_1b26cc;
            case 0x1B26D0u: goto label_1b26d0;
            case 0x1B26D4u: goto label_1b26d4;
            case 0x1B26D8u: goto label_1b26d8;
            case 0x1B26DCu: goto label_1b26dc;
            case 0x1B26E0u: goto label_1b26e0;
            case 0x1B26E4u: goto label_1b26e4;
            case 0x1B26E8u: goto label_1b26e8;
            case 0x1B26ECu: goto label_1b26ec;
            case 0x1B26F0u: goto label_1b26f0;
            case 0x1B26F4u: goto label_1b26f4;
            case 0x1B26F8u: goto label_1b26f8;
            case 0x1B26FCu: goto label_1b26fc;
            case 0x1B2700u: goto label_1b2700;
            case 0x1B2704u: goto label_1b2704;
            case 0x1B2708u: goto label_1b2708;
            case 0x1B270Cu: goto label_1b270c;
            case 0x1B2710u: goto label_1b2710;
            case 0x1B2714u: goto label_1b2714;
            case 0x1B2718u: goto label_1b2718;
            case 0x1B271Cu: goto label_1b271c;
            case 0x1B2720u: goto label_1b2720;
            case 0x1B2724u: goto label_1b2724;
            case 0x1B2728u: goto label_1b2728;
            case 0x1B272Cu: goto label_1b272c;
            case 0x1B2730u: goto label_1b2730;
            case 0x1B2734u: goto label_1b2734;
            case 0x1B2738u: goto label_1b2738;
            case 0x1B273Cu: goto label_1b273c;
            case 0x1B2740u: goto label_1b2740;
            case 0x1B2744u: goto label_1b2744;
            case 0x1B2748u: goto label_1b2748;
            case 0x1B274Cu: goto label_1b274c;
            case 0x1B2750u: goto label_1b2750;
            case 0x1B2754u: goto label_1b2754;
            case 0x1B2758u: goto label_1b2758;
            case 0x1B275Cu: goto label_1b275c;
            case 0x1B2760u: goto label_1b2760;
            case 0x1B2764u: goto label_1b2764;
            case 0x1B2768u: goto label_1b2768;
            case 0x1B276Cu: goto label_1b276c;
            case 0x1B2770u: goto label_1b2770;
            case 0x1B2774u: goto label_1b2774;
            case 0x1B2778u: goto label_1b2778;
            case 0x1B277Cu: goto label_1b277c;
            case 0x1B2780u: goto label_1b2780;
            case 0x1B2784u: goto label_1b2784;
            case 0x1B2788u: goto label_1b2788;
            case 0x1B278Cu: goto label_1b278c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B2580u;
label_1b2580:
    // 0x1b2580: 0x27bdffc0
    ctx->pc = 0x1b2580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b2584:
    // 0x1b2584: 0xffbf0030
    ctx->pc = 0x1b2584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1b2588:
    // 0x1b2588: 0x7fb20020
    ctx->pc = 0x1b2588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b258c:
    // 0x1b258c: 0x7fb10010
    ctx->pc = 0x1b258cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b2590:
    // 0x1b2590: 0x80902d
    ctx->pc = 0x1b2590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b2594:
    // 0x1b2594: 0x7fb00000
    ctx->pc = 0x1b2594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b2598:
    // 0x1b2598: 0xa0882d
    ctx->pc = 0x1b2598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b259c:
    // 0x1b259c: 0xc06c9e4
label_1b25a0:
    if (ctx->pc == 0x1B25A0u) {
        ctx->pc = 0x1B25A0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B25A4u;
        goto label_1b25a4;
    }
    ctx->pc = 0x1B259Cu;
    SET_GPR_U32(ctx, 31, 0x1B25A4u);
    ctx->pc = 0x1B25A0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B2790u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2790_0x1b2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B25A4u; }
    }
    if (ctx->pc != 0x1B25A4u) { return; }
    ctx->pc = 0x1B25A4u;
label_1b25a4:
    // 0x1b25a4: 0x14400003
label_1b25a8:
    if (ctx->pc == 0x1B25A8u) {
        ctx->pc = 0x1B25A8u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 256));
        ctx->pc = 0x1B25ACu;
        goto label_1b25ac;
    }
    ctx->pc = 0x1B25A4u;
    {
        const bool branch_taken_0x1b25a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B25A8u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 256));
        if (branch_taken_0x1b25a4) {
            ctx->pc = 0x1B25B4u;
            goto label_1b25b4;
        }
    }
    ctx->pc = 0x1B25ACu;
label_1b25ac:
    // 0x1b25ac: 0x10000016
label_1b25b0:
    if (ctx->pc == 0x1B25B0u) {
        ctx->pc = 0x1B25B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1B25B4u;
        goto label_1b25b4;
    }
    ctx->pc = 0x1B25ACu;
    {
        const bool branch_taken_0x1b25ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B25B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1b25ac) {
            ctx->pc = 0x1B2608u;
            goto label_1b2608;
        }
    }
    ctx->pc = 0x1B25B4u;
label_1b25b4:
    // 0x1b25b4: 0x14600005
label_1b25b8:
    if (ctx->pc == 0x1B25B8u) {
        ctx->pc = 0x1B25BCu;
        goto label_1b25bc;
    }
    ctx->pc = 0x1B25B4u;
    {
        const bool branch_taken_0x1b25b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b25b4) {
            ctx->pc = 0x1B25CCu;
            goto label_1b25cc;
        }
    }
    ctx->pc = 0x1B25BCu;
label_1b25bc:
    // 0x1b25bc: 0xc06ca04
label_1b25c0:
    if (ctx->pc == 0x1B25C0u) {
        ctx->pc = 0x1B25C4u;
        goto label_1b25c4;
    }
    ctx->pc = 0x1B25BCu;
    SET_GPR_U32(ctx, 31, 0x1B25C4u);
    ctx->pc = 0x1B2810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2810_0x1b2810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B25C4u; }
    }
    if (ctx->pc != 0x1B25C4u) { return; }
    ctx->pc = 0x1B25C4u;
label_1b25c4:
    // 0x1b25c4: 0x10000010
label_1b25c8:
    if (ctx->pc == 0x1B25C8u) {
        ctx->pc = 0x1B25C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1B25CCu;
        goto label_1b25cc;
    }
    ctx->pc = 0x1B25C4u;
    {
        const bool branch_taken_0x1b25c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B25C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1b25c4) {
            ctx->pc = 0x1B2608u;
            goto label_1b2608;
        }
    }
    ctx->pc = 0x1B25CCu;
label_1b25cc:
    // 0x1b25cc: 0xac52001c
    ctx->pc = 0x1b25ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 18));
label_1b25d0:
    // 0x1b25d0: 0x2403009f
    ctx->pc = 0x1b25d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 159));
label_1b25d4:
    // 0x1b25d4: 0xac510018
    ctx->pc = 0x1b25d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 17));
label_1b25d8:
    // 0x1b25d8: 0x701823
    ctx->pc = 0x1b25d8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1b25dc:
    // 0x1b25dc: 0xac500004
    ctx->pc = 0x1b25dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_1b25e0:
    // 0x1b25e0: 0x3c010025
    ctx->pc = 0x1b25e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)37 << 16));
label_1b25e4:
    // 0x1b25e4: 0xc420ff08
    ctx->pc = 0x1b25e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294967048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b25e8:
    // 0x1b25e8: 0x32080
    ctx->pc = 0x1b25e8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 2));
label_1b25ec:
    // 0x1b25ec: 0x3c030032
    ctx->pc = 0x1b25ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_1b25f0:
    // 0x1b25f0: 0x246388e0
    ctx->pc = 0x1b25f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294936800));
label_1b25f4:
    // 0x1b25f4: 0x642821
    ctx->pc = 0x1b25f4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b25f8:
    // 0x1b25f8: 0x40202d
    ctx->pc = 0x1b25f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b25fc:
    // 0x1b25fc: 0xc069704
label_1b2600:
    if (ctx->pc == 0x1B2600u) {
        ctx->pc = 0x1B2600u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
        ctx->pc = 0x1B2604u;
        goto label_1b2604;
    }
    ctx->pc = 0x1B25FCu;
    SET_GPR_U32(ctx, 31, 0x1B2604u);
    ctx->pc = 0x1B2600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    ctx->pc = 0x1A5C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5C10_0x1a5c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2604u; }
    }
    if (ctx->pc != 0x1B2604u) { return; }
    ctx->pc = 0x1B2604u;
label_1b2604:
    // 0x1b2604: 0x200102d
    ctx->pc = 0x1b2604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2608:
    // 0x1b2608: 0xdfbf0030
    ctx->pc = 0x1b2608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b260c:
    // 0x1b260c: 0x7bb20020
    ctx->pc = 0x1b260cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b2610:
    // 0x1b2610: 0x7bb10010
    ctx->pc = 0x1b2610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b2614:
    // 0x1b2614: 0x7bb00000
    ctx->pc = 0x1b2614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b2618:
    // 0x1b2618: 0x3e00008
label_1b261c:
    if (ctx->pc == 0x1B261Cu) {
        ctx->pc = 0x1B261Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1B2620u;
        goto label_1b2620;
    }
    ctx->pc = 0x1B2618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B261Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B2340u: goto label_1b2340;
            case 0x1B2344u: goto label_1b2344;
            case 0x1B2348u: goto label_1b2348;
            case 0x1B234Cu: goto label_1b234c;
            case 0x1B2350u: goto label_1b2350;
            case 0x1B2354u: goto label_1b2354;
            case 0x1B2358u: goto label_1b2358;
            case 0x1B235Cu: goto label_1b235c;
            case 0x1B2360u: goto label_1b2360;
            case 0x1B2364u: goto label_1b2364;
            case 0x1B2368u: goto label_1b2368;
            case 0x1B236Cu: goto label_1b236c;
            case 0x1B2370u: goto label_1b2370;
            case 0x1B2374u: goto label_1b2374;
            case 0x1B2378u: goto label_1b2378;
            case 0x1B237Cu: goto label_1b237c;
            case 0x1B2380u: goto label_1b2380;
            case 0x1B2384u: goto label_1b2384;
            case 0x1B2388u: goto label_1b2388;
            case 0x1B238Cu: goto label_1b238c;
            case 0x1B2390u: goto label_1b2390;
            case 0x1B2394u: goto label_1b2394;
            case 0x1B2398u: goto label_1b2398;
            case 0x1B239Cu: goto label_1b239c;
            case 0x1B23A0u: goto label_1b23a0;
            case 0x1B23A4u: goto label_1b23a4;
            case 0x1B23A8u: goto label_1b23a8;
            case 0x1B23ACu: goto label_1b23ac;
            case 0x1B23B0u: goto label_1b23b0;
            case 0x1B23B4u: goto label_1b23b4;
            case 0x1B23B8u: goto label_1b23b8;
            case 0x1B23BCu: goto label_1b23bc;
            case 0x1B23C0u: goto label_1b23c0;
            case 0x1B23C4u: goto label_1b23c4;
            case 0x1B23C8u: goto label_1b23c8;
            case 0x1B23CCu: goto label_1b23cc;
            case 0x1B23D0u: goto label_1b23d0;
            case 0x1B23D4u: goto label_1b23d4;
            case 0x1B23D8u: goto label_1b23d8;
            case 0x1B23DCu: goto label_1b23dc;
            case 0x1B23E0u: goto label_1b23e0;
            case 0x1B23E4u: goto label_1b23e4;
            case 0x1B23E8u: goto label_1b23e8;
            case 0x1B23ECu: goto label_1b23ec;
            case 0x1B23F0u: goto label_1b23f0;
            case 0x1B23F4u: goto label_1b23f4;
            case 0x1B23F8u: goto label_1b23f8;
            case 0x1B23FCu: goto label_1b23fc;
            case 0x1B2400u: goto label_1b2400;
            case 0x1B2404u: goto label_1b2404;
            case 0x1B2408u: goto label_1b2408;
            case 0x1B240Cu: goto label_1b240c;
            case 0x1B2410u: goto label_1b2410;
            case 0x1B2414u: goto label_1b2414;
            case 0x1B2418u: goto label_1b2418;
            case 0x1B241Cu: goto label_1b241c;
            case 0x1B2420u: goto label_1b2420;
            case 0x1B2424u: goto label_1b2424;
            case 0x1B2428u: goto label_1b2428;
            case 0x1B242Cu: goto label_1b242c;
            case 0x1B2430u: goto label_1b2430;
            case 0x1B2434u: goto label_1b2434;
            case 0x1B2438u: goto label_1b2438;
            case 0x1B243Cu: goto label_1b243c;
            case 0x1B2440u: goto label_1b2440;
            case 0x1B2444u: goto label_1b2444;
            case 0x1B2448u: goto label_1b2448;
            case 0x1B244Cu: goto label_1b244c;
            case 0x1B2450u: goto label_1b2450;
            case 0x1B2454u: goto label_1b2454;
            case 0x1B2458u: goto label_1b2458;
            case 0x1B245Cu: goto label_1b245c;
            case 0x1B2460u: goto label_1b2460;
            case 0x1B2464u: goto label_1b2464;
            case 0x1B2468u: goto label_1b2468;
            case 0x1B246Cu: goto label_1b246c;
            case 0x1B2470u: goto label_1b2470;
            case 0x1B2474u: goto label_1b2474;
            case 0x1B2478u: goto label_1b2478;
            case 0x1B247Cu: goto label_1b247c;
            case 0x1B2480u: goto label_1b2480;
            case 0x1B2484u: goto label_1b2484;
            case 0x1B2488u: goto label_1b2488;
            case 0x1B248Cu: goto label_1b248c;
            case 0x1B2490u: goto label_1b2490;
            case 0x1B2494u: goto label_1b2494;
            case 0x1B2498u: goto label_1b2498;
            case 0x1B249Cu: goto label_1b249c;
            case 0x1B24A0u: goto label_1b24a0;
            case 0x1B24A4u: goto label_1b24a4;
            case 0x1B24A8u: goto label_1b24a8;
            case 0x1B24ACu: goto label_1b24ac;
            case 0x1B24B0u: goto label_1b24b0;
            case 0x1B24B4u: goto label_1b24b4;
            case 0x1B24B8u: goto label_1b24b8;
            case 0x1B24BCu: goto label_1b24bc;
            case 0x1B24C0u: goto label_1b24c0;
            case 0x1B24C4u: goto label_1b24c4;
            case 0x1B24C8u: goto label_1b24c8;
            case 0x1B24CCu: goto label_1b24cc;
            case 0x1B24D0u: goto label_1b24d0;
            case 0x1B24D4u: goto label_1b24d4;
            case 0x1B24D8u: goto label_1b24d8;
            case 0x1B24DCu: goto label_1b24dc;
            case 0x1B24E0u: goto label_1b24e0;
            case 0x1B24E4u: goto label_1b24e4;
            case 0x1B24E8u: goto label_1b24e8;
            case 0x1B24ECu: goto label_1b24ec;
            case 0x1B24F0u: goto label_1b24f0;
            case 0x1B24F4u: goto label_1b24f4;
            case 0x1B24F8u: goto label_1b24f8;
            case 0x1B24FCu: goto label_1b24fc;
            case 0x1B2500u: goto label_1b2500;
            case 0x1B2504u: goto label_1b2504;
            case 0x1B2508u: goto label_1b2508;
            case 0x1B250Cu: goto label_1b250c;
            case 0x1B2510u: goto label_1b2510;
            case 0x1B2514u: goto label_1b2514;
            case 0x1B2518u: goto label_1b2518;
            case 0x1B251Cu: goto label_1b251c;
            case 0x1B2520u: goto label_1b2520;
            case 0x1B2524u: goto label_1b2524;
            case 0x1B2528u: goto label_1b2528;
            case 0x1B252Cu: goto label_1b252c;
            case 0x1B2530u: goto label_1b2530;
            case 0x1B2534u: goto label_1b2534;
            case 0x1B2538u: goto label_1b2538;
            case 0x1B253Cu: goto label_1b253c;
            case 0x1B2540u: goto label_1b2540;
            case 0x1B2544u: goto label_1b2544;
            case 0x1B2548u: goto label_1b2548;
            case 0x1B254Cu: goto label_1b254c;
            case 0x1B2550u: goto label_1b2550;
            case 0x1B2554u: goto label_1b2554;
            case 0x1B2558u: goto label_1b2558;
            case 0x1B255Cu: goto label_1b255c;
            case 0x1B2560u: goto label_1b2560;
            case 0x1B2564u: goto label_1b2564;
            case 0x1B2568u: goto label_1b2568;
            case 0x1B256Cu: goto label_1b256c;
            case 0x1B2570u: goto label_1b2570;
            case 0x1B2574u: goto label_1b2574;
            case 0x1B2578u: goto label_1b2578;
            case 0x1B257Cu: goto label_1b257c;
            case 0x1B2580u: goto label_1b2580;
            case 0x1B2584u: goto label_1b2584;
            case 0x1B2588u: goto label_1b2588;
            case 0x1B258Cu: goto label_1b258c;
            case 0x1B2590u: goto label_1b2590;
            case 0x1B2594u: goto label_1b2594;
            case 0x1B2598u: goto label_1b2598;
            case 0x1B259Cu: goto label_1b259c;
            case 0x1B25A0u: goto label_1b25a0;
            case 0x1B25A4u: goto label_1b25a4;
            case 0x1B25A8u: goto label_1b25a8;
            case 0x1B25ACu: goto label_1b25ac;
            case 0x1B25B0u: goto label_1b25b0;
            case 0x1B25B4u: goto label_1b25b4;
            case 0x1B25B8u: goto label_1b25b8;
            case 0x1B25BCu: goto label_1b25bc;
            case 0x1B25C0u: goto label_1b25c0;
            case 0x1B25C4u: goto label_1b25c4;
            case 0x1B25C8u: goto label_1b25c8;
            case 0x1B25CCu: goto label_1b25cc;
            case 0x1B25D0u: goto label_1b25d0;
            case 0x1B25D4u: goto label_1b25d4;
            case 0x1B25D8u: goto label_1b25d8;
            case 0x1B25DCu: goto label_1b25dc;
            case 0x1B25E0u: goto label_1b25e0;
            case 0x1B25E4u: goto label_1b25e4;
            case 0x1B25E8u: goto label_1b25e8;
            case 0x1B25ECu: goto label_1b25ec;
            case 0x1B25F0u: goto label_1b25f0;
            case 0x1B25F4u: goto label_1b25f4;
            case 0x1B25F8u: goto label_1b25f8;
            case 0x1B25FCu: goto label_1b25fc;
            case 0x1B2600u: goto label_1b2600;
            case 0x1B2604u: goto label_1b2604;
            case 0x1B2608u: goto label_1b2608;
            case 0x1B260Cu: goto label_1b260c;
            case 0x1B2610u: goto label_1b2610;
            case 0x1B2614u: goto label_1b2614;
            case 0x1B2618u: goto label_1b2618;
            case 0x1B261Cu: goto label_1b261c;
            case 0x1B2620u: goto label_1b2620;
            case 0x1B2624u: goto label_1b2624;
            case 0x1B2628u: goto label_1b2628;
            case 0x1B262Cu: goto label_1b262c;
            case 0x1B2630u: goto label_1b2630;
            case 0x1B2634u: goto label_1b2634;
            case 0x1B2638u: goto label_1b2638;
            case 0x1B263Cu: goto label_1b263c;
            case 0x1B2640u: goto label_1b2640;
            case 0x1B2644u: goto label_1b2644;
            case 0x1B2648u: goto label_1b2648;
            case 0x1B264Cu: goto label_1b264c;
            case 0x1B2650u: goto label_1b2650;
            case 0x1B2654u: goto label_1b2654;
            case 0x1B2658u: goto label_1b2658;
            case 0x1B265Cu: goto label_1b265c;
            case 0x1B2660u: goto label_1b2660;
            case 0x1B2664u: goto label_1b2664;
            case 0x1B2668u: goto label_1b2668;
            case 0x1B266Cu: goto label_1b266c;
            case 0x1B2670u: goto label_1b2670;
            case 0x1B2674u: goto label_1b2674;
            case 0x1B2678u: goto label_1b2678;
            case 0x1B267Cu: goto label_1b267c;
            case 0x1B2680u: goto label_1b2680;
            case 0x1B2684u: goto label_1b2684;
            case 0x1B2688u: goto label_1b2688;
            case 0x1B268Cu: goto label_1b268c;
            case 0x1B2690u: goto label_1b2690;
            case 0x1B2694u: goto label_1b2694;
            case 0x1B2698u: goto label_1b2698;
            case 0x1B269Cu: goto label_1b269c;
            case 0x1B26A0u: goto label_1b26a0;
            case 0x1B26A4u: goto label_1b26a4;
            case 0x1B26A8u: goto label_1b26a8;
            case 0x1B26ACu: goto label_1b26ac;
            case 0x1B26B0u: goto label_1b26b0;
            case 0x1B26B4u: goto label_1b26b4;
            case 0x1B26B8u: goto label_1b26b8;
            case 0x1B26BCu: goto label_1b26bc;
            case 0x1B26C0u: goto label_1b26c0;
            case 0x1B26C4u: goto label_1b26c4;
            case 0x1B26C8u: goto label_1b26c8;
            case 0x1B26CCu: goto label_1b26cc;
            case 0x1B26D0u: goto label_1b26d0;
            case 0x1B26D4u: goto label_1b26d4;
            case 0x1B26D8u: goto label_1b26d8;
            case 0x1B26DCu: goto label_1b26dc;
            case 0x1B26E0u: goto label_1b26e0;
            case 0x1B26E4u: goto label_1b26e4;
            case 0x1B26E8u: goto label_1b26e8;
            case 0x1B26ECu: goto label_1b26ec;
            case 0x1B26F0u: goto label_1b26f0;
            case 0x1B26F4u: goto label_1b26f4;
            case 0x1B26F8u: goto label_1b26f8;
            case 0x1B26FCu: goto label_1b26fc;
            case 0x1B2700u: goto label_1b2700;
            case 0x1B2704u: goto label_1b2704;
            case 0x1B2708u: goto label_1b2708;
            case 0x1B270Cu: goto label_1b270c;
            case 0x1B2710u: goto label_1b2710;
            case 0x1B2714u: goto label_1b2714;
            case 0x1B2718u: goto label_1b2718;
            case 0x1B271Cu: goto label_1b271c;
            case 0x1B2720u: goto label_1b2720;
            case 0x1B2724u: goto label_1b2724;
            case 0x1B2728u: goto label_1b2728;
            case 0x1B272Cu: goto label_1b272c;
            case 0x1B2730u: goto label_1b2730;
            case 0x1B2734u: goto label_1b2734;
            case 0x1B2738u: goto label_1b2738;
            case 0x1B273Cu: goto label_1b273c;
            case 0x1B2740u: goto label_1b2740;
            case 0x1B2744u: goto label_1b2744;
            case 0x1B2748u: goto label_1b2748;
            case 0x1B274Cu: goto label_1b274c;
            case 0x1B2750u: goto label_1b2750;
            case 0x1B2754u: goto label_1b2754;
            case 0x1B2758u: goto label_1b2758;
            case 0x1B275Cu: goto label_1b275c;
            case 0x1B2760u: goto label_1b2760;
            case 0x1B2764u: goto label_1b2764;
            case 0x1B2768u: goto label_1b2768;
            case 0x1B276Cu: goto label_1b276c;
            case 0x1B2770u: goto label_1b2770;
            case 0x1B2774u: goto label_1b2774;
            case 0x1B2778u: goto label_1b2778;
            case 0x1B277Cu: goto label_1b277c;
            case 0x1B2780u: goto label_1b2780;
            case 0x1B2784u: goto label_1b2784;
            case 0x1B2788u: goto label_1b2788;
            case 0x1B278Cu: goto label_1b278c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B2620u;
label_1b2620:
    // 0x1b2620: 0x27bdffb0
    ctx->pc = 0x1b2620u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b2624:
    // 0x1b2624: 0xffbf0040
    ctx->pc = 0x1b2624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1b2628:
    // 0x1b2628: 0x7fb20030
    ctx->pc = 0x1b2628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1b262c:
    // 0x1b262c: 0x7fb10020
    ctx->pc = 0x1b262cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1b2630:
    // 0x1b2630: 0x80902d
    ctx->pc = 0x1b2630u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b2634:
    // 0x1b2634: 0x7fb00010
    ctx->pc = 0x1b2634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1b2638:
    // 0x1b2638: 0xa0882d
    ctx->pc = 0x1b2638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b263c:
    // 0x1b263c: 0xe7b40000
    ctx->pc = 0x1b263cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b2640:
    // 0x1b2640: 0xc06c9e4
label_1b2644:
    if (ctx->pc == 0x1B2644u) {
        ctx->pc = 0x1B2644u;
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1B2648u;
        goto label_1b2648;
    }
    ctx->pc = 0x1B2640u;
    SET_GPR_U32(ctx, 31, 0x1B2648u);
    ctx->pc = 0x1B2644u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B2790u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2790_0x1b2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2648u; }
    }
    if (ctx->pc != 0x1B2648u) { return; }
    ctx->pc = 0x1B2648u;
label_1b2648:
    // 0x1b2648: 0x14400003
label_1b264c:
    if (ctx->pc == 0x1B264Cu) {
        ctx->pc = 0x1B264Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2650u;
        goto label_1b2650;
    }
    ctx->pc = 0x1B2648u;
    {
        const bool branch_taken_0x1b2648 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B264Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b2648) {
            ctx->pc = 0x1B2658u;
            goto label_1b2658;
        }
    }
    ctx->pc = 0x1B2650u;
label_1b2650:
    // 0x1b2650: 0x10000033
label_1b2654:
    if (ctx->pc == 0x1B2654u) {
        ctx->pc = 0x1B2654u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1B2658u;
        goto label_1b2658;
    }
    ctx->pc = 0x1B2650u;
    {
        const bool branch_taken_0x1b2650 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B2654u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1b2650) {
            ctx->pc = 0x1B2720u;
            goto label_1b2720;
        }
    }
    ctx->pc = 0x1B2658u;
label_1b2658:
    // 0x1b2658: 0x44800000
    ctx->pc = 0x1b2658u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_1b265c:
    // 0x1b265c: 0x0
    ctx->pc = 0x1b265cu;
    // NOP
label_1b2660:
    // 0x1b2660: 0x4600a034
    ctx->pc = 0x1b2660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b2664:
    // 0x1b2664: 0x45000002
label_1b2668:
    if (ctx->pc == 0x1B2668u) {
        ctx->pc = 0x1B2668u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 50000));
        ctx->pc = 0x1B266Cu;
        goto label_1b266c;
    }
    ctx->pc = 0x1B2664u;
    {
        const bool branch_taken_0x1b2664 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2668u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 50000));
        if (branch_taken_0x1b2664) {
            ctx->pc = 0x1B2670u;
            goto label_1b2670;
        }
    }
    ctx->pc = 0x1B266Cu;
label_1b266c:
    // 0x1b266c: 0x46000506
    ctx->pc = 0x1b266cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1b2670:
    // 0x1b2670: 0x44820000
    ctx->pc = 0x1b2670u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1b2674:
    // 0x1b2674: 0x0
    ctx->pc = 0x1b2674u;
    // NOP
label_1b2678:
    // 0x1b2678: 0x46800020
    ctx->pc = 0x1b2678u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1b267c:
    // 0x1b267c: 0x4600a036
    ctx->pc = 0x1b267cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b2680:
    // 0x1b2680: 0x45010005
label_1b2684:
    if (ctx->pc == 0x1B2684u) {
        ctx->pc = 0x1B2688u;
        goto label_1b2688;
    }
    ctx->pc = 0x1B2680u;
    {
        const bool branch_taken_0x1b2680 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2680) {
            ctx->pc = 0x1B2698u;
            goto label_1b2698;
        }
    }
    ctx->pc = 0x1B2688u;
label_1b2688:
    // 0x1b2688: 0xc06ca04
label_1b268c:
    if (ctx->pc == 0x1B268Cu) {
        ctx->pc = 0x1B2690u;
        goto label_1b2690;
    }
    ctx->pc = 0x1B2688u;
    SET_GPR_U32(ctx, 31, 0x1B2690u);
    ctx->pc = 0x1B2810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2810_0x1b2810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2690u; }
    }
    if (ctx->pc != 0x1B2690u) { return; }
    ctx->pc = 0x1B2690u;
label_1b2690:
    // 0x1b2690: 0x10000023
label_1b2694:
    if (ctx->pc == 0x1B2694u) {
        ctx->pc = 0x1B2694u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1B2698u;
        goto label_1b2698;
    }
    ctx->pc = 0x1B2690u;
    {
        const bool branch_taken_0x1b2690 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B2694u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1b2690) {
            ctx->pc = 0x1B2720u;
            goto label_1b2720;
        }
    }
    ctx->pc = 0x1B2698u;
label_1b2698:
    // 0x1b2698: 0xae12001c
    ctx->pc = 0x1b2698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
label_1b269c:
    // 0x1b269c: 0x0
    ctx->pc = 0x1b269cu;
    // NOP
label_1b26a0:
    // 0x1b26a0: 0x4600a083
    ctx->pc = 0x1b26a0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[2] = ctx->f[20] / ctx->f[0];
label_1b26a4:
    // 0x1b26a4: 0x3c034300
    ctx->pc = 0x1b26a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17152 << 16));
label_1b26a8:
    // 0x1b26a8: 0x3c024f00
    ctx->pc = 0x1b26a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
label_1b26ac:
    // 0x1b26ac: 0xae110018
    ctx->pc = 0x1b26acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
label_1b26b0:
    // 0x1b26b0: 0x44830800
    ctx->pc = 0x1b26b0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_1b26b4:
    // 0x1b26b4: 0x44820000
    ctx->pc = 0x1b26b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1b26b8:
    // 0x1b26b8: 0x0
    ctx->pc = 0x1b26b8u;
    // NOP
label_1b26bc:
    // 0x1b26bc: 0x46020842
    ctx->pc = 0x1b26bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1b26c0:
    // 0x1b26c0: 0x46010036
    ctx->pc = 0x1b26c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b26c4:
    // 0x1b26c4: 0x45010005
label_1b26c8:
    if (ctx->pc == 0x1B26C8u) {
        ctx->pc = 0x1B26C8u;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->pc = 0x1B26CCu;
        goto label_1b26cc;
    }
    ctx->pc = 0x1B26C4u;
    {
        const bool branch_taken_0x1b26c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B26C8u;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        if (branch_taken_0x1b26c4) {
            ctx->pc = 0x1B26DCu;
            goto label_1b26dc;
        }
    }
    ctx->pc = 0x1B26CCu;
label_1b26cc:
    // 0x1b26cc: 0x46000864
    ctx->pc = 0x1b26ccu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
label_1b26d0:
    // 0x1b26d0: 0x44030800
    ctx->pc = 0x1b26d0u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
label_1b26d4:
    // 0x1b26d4: 0x10000008
label_1b26d8:
    if (ctx->pc == 0x1B26D8u) {
        ctx->pc = 0x1B26D8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1B26DCu;
        goto label_1b26dc;
    }
    ctx->pc = 0x1B26D4u;
    {
        const bool branch_taken_0x1b26d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B26D8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1b26d4) {
            ctx->pc = 0x1B26F8u;
            goto label_1b26f8;
        }
    }
    ctx->pc = 0x1B26DCu;
label_1b26dc:
    // 0x1b26dc: 0x46000841
    ctx->pc = 0x1b26dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b26e0:
    // 0x1b26e0: 0x3c028000
    ctx->pc = 0x1b26e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
label_1b26e4:
    // 0x1b26e4: 0x46000864
    ctx->pc = 0x1b26e4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
label_1b26e8:
    // 0x1b26e8: 0x44030800
    ctx->pc = 0x1b26e8u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
label_1b26ec:
    // 0x1b26ec: 0x0
    ctx->pc = 0x1b26ecu;
    // NOP
label_1b26f0:
    // 0x1b26f0: 0x621825
    ctx->pc = 0x1b26f0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b26f4:
    // 0x1b26f4: 0xae030004
    ctx->pc = 0x1b26f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1b26f8:
    // 0x1b26f8: 0x3c020032
    ctx->pc = 0x1b26f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_1b26fc:
    // 0x1b26fc: 0x8e050004
    ctx->pc = 0x1b26fcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b2700:
    // 0x1b2700: 0x2403007f
    ctx->pc = 0x1b2700u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 127));
label_1b2704:
    // 0x1b2704: 0x244288e0
    ctx->pc = 0x1b2704u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936800));
label_1b2708:
    // 0x1b2708: 0x200202d
    ctx->pc = 0x1b2708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b270c:
    // 0x1b270c: 0x651823
    ctx->pc = 0x1b270cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1b2710:
    // 0x1b2710: 0x31880
    ctx->pc = 0x1b2710u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1b2714:
    // 0x1b2714: 0xc06ca14
label_1b2718:
    if (ctx->pc == 0x1B2718u) {
        ctx->pc = 0x1B2718u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1B271Cu;
        goto label_1b271c;
    }
    ctx->pc = 0x1B2714u;
    SET_GPR_U32(ctx, 31, 0x1B271Cu);
    ctx->pc = 0x1B2718u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1B2850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2850_0x1b2850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B271Cu; }
    }
    if (ctx->pc != 0x1B271Cu) { return; }
    ctx->pc = 0x1B271Cu;
label_1b271c:
    // 0x1b271c: 0x8e020004
    ctx->pc = 0x1b271cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b2720:
    // 0x1b2720: 0xdfbf0040
    ctx->pc = 0x1b2720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b2724:
    // 0x1b2724: 0xc7b40000
    ctx->pc = 0x1b2724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b2728:
    // 0x1b2728: 0x7bb20030
    ctx->pc = 0x1b2728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b272c:
    // 0x1b272c: 0x7bb10020
    ctx->pc = 0x1b272cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b2730:
    // 0x1b2730: 0x7bb00010
    ctx->pc = 0x1b2730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b2734:
    // 0x1b2734: 0x3e00008
label_1b2738:
    if (ctx->pc == 0x1B2738u) {
        ctx->pc = 0x1B2738u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1B273Cu;
        goto label_1b273c;
    }
    ctx->pc = 0x1B2734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2738u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B2340u: goto label_1b2340;
            case 0x1B2344u: goto label_1b2344;
            case 0x1B2348u: goto label_1b2348;
            case 0x1B234Cu: goto label_1b234c;
            case 0x1B2350u: goto label_1b2350;
            case 0x1B2354u: goto label_1b2354;
            case 0x1B2358u: goto label_1b2358;
            case 0x1B235Cu: goto label_1b235c;
            case 0x1B2360u: goto label_1b2360;
            case 0x1B2364u: goto label_1b2364;
            case 0x1B2368u: goto label_1b2368;
            case 0x1B236Cu: goto label_1b236c;
            case 0x1B2370u: goto label_1b2370;
            case 0x1B2374u: goto label_1b2374;
            case 0x1B2378u: goto label_1b2378;
            case 0x1B237Cu: goto label_1b237c;
            case 0x1B2380u: goto label_1b2380;
            case 0x1B2384u: goto label_1b2384;
            case 0x1B2388u: goto label_1b2388;
            case 0x1B238Cu: goto label_1b238c;
            case 0x1B2390u: goto label_1b2390;
            case 0x1B2394u: goto label_1b2394;
            case 0x1B2398u: goto label_1b2398;
            case 0x1B239Cu: goto label_1b239c;
            case 0x1B23A0u: goto label_1b23a0;
            case 0x1B23A4u: goto label_1b23a4;
            case 0x1B23A8u: goto label_1b23a8;
            case 0x1B23ACu: goto label_1b23ac;
            case 0x1B23B0u: goto label_1b23b0;
            case 0x1B23B4u: goto label_1b23b4;
            case 0x1B23B8u: goto label_1b23b8;
            case 0x1B23BCu: goto label_1b23bc;
            case 0x1B23C0u: goto label_1b23c0;
            case 0x1B23C4u: goto label_1b23c4;
            case 0x1B23C8u: goto label_1b23c8;
            case 0x1B23CCu: goto label_1b23cc;
            case 0x1B23D0u: goto label_1b23d0;
            case 0x1B23D4u: goto label_1b23d4;
            case 0x1B23D8u: goto label_1b23d8;
            case 0x1B23DCu: goto label_1b23dc;
            case 0x1B23E0u: goto label_1b23e0;
            case 0x1B23E4u: goto label_1b23e4;
            case 0x1B23E8u: goto label_1b23e8;
            case 0x1B23ECu: goto label_1b23ec;
            case 0x1B23F0u: goto label_1b23f0;
            case 0x1B23F4u: goto label_1b23f4;
            case 0x1B23F8u: goto label_1b23f8;
            case 0x1B23FCu: goto label_1b23fc;
            case 0x1B2400u: goto label_1b2400;
            case 0x1B2404u: goto label_1b2404;
            case 0x1B2408u: goto label_1b2408;
            case 0x1B240Cu: goto label_1b240c;
            case 0x1B2410u: goto label_1b2410;
            case 0x1B2414u: goto label_1b2414;
            case 0x1B2418u: goto label_1b2418;
            case 0x1B241Cu: goto label_1b241c;
            case 0x1B2420u: goto label_1b2420;
            case 0x1B2424u: goto label_1b2424;
            case 0x1B2428u: goto label_1b2428;
            case 0x1B242Cu: goto label_1b242c;
            case 0x1B2430u: goto label_1b2430;
            case 0x1B2434u: goto label_1b2434;
            case 0x1B2438u: goto label_1b2438;
            case 0x1B243Cu: goto label_1b243c;
            case 0x1B2440u: goto label_1b2440;
            case 0x1B2444u: goto label_1b2444;
            case 0x1B2448u: goto label_1b2448;
            case 0x1B244Cu: goto label_1b244c;
            case 0x1B2450u: goto label_1b2450;
            case 0x1B2454u: goto label_1b2454;
            case 0x1B2458u: goto label_1b2458;
            case 0x1B245Cu: goto label_1b245c;
            case 0x1B2460u: goto label_1b2460;
            case 0x1B2464u: goto label_1b2464;
            case 0x1B2468u: goto label_1b2468;
            case 0x1B246Cu: goto label_1b246c;
            case 0x1B2470u: goto label_1b2470;
            case 0x1B2474u: goto label_1b2474;
            case 0x1B2478u: goto label_1b2478;
            case 0x1B247Cu: goto label_1b247c;
            case 0x1B2480u: goto label_1b2480;
            case 0x1B2484u: goto label_1b2484;
            case 0x1B2488u: goto label_1b2488;
            case 0x1B248Cu: goto label_1b248c;
            case 0x1B2490u: goto label_1b2490;
            case 0x1B2494u: goto label_1b2494;
            case 0x1B2498u: goto label_1b2498;
            case 0x1B249Cu: goto label_1b249c;
            case 0x1B24A0u: goto label_1b24a0;
            case 0x1B24A4u: goto label_1b24a4;
            case 0x1B24A8u: goto label_1b24a8;
            case 0x1B24ACu: goto label_1b24ac;
            case 0x1B24B0u: goto label_1b24b0;
            case 0x1B24B4u: goto label_1b24b4;
            case 0x1B24B8u: goto label_1b24b8;
            case 0x1B24BCu: goto label_1b24bc;
            case 0x1B24C0u: goto label_1b24c0;
            case 0x1B24C4u: goto label_1b24c4;
            case 0x1B24C8u: goto label_1b24c8;
            case 0x1B24CCu: goto label_1b24cc;
            case 0x1B24D0u: goto label_1b24d0;
            case 0x1B24D4u: goto label_1b24d4;
            case 0x1B24D8u: goto label_1b24d8;
            case 0x1B24DCu: goto label_1b24dc;
            case 0x1B24E0u: goto label_1b24e0;
            case 0x1B24E4u: goto label_1b24e4;
            case 0x1B24E8u: goto label_1b24e8;
            case 0x1B24ECu: goto label_1b24ec;
            case 0x1B24F0u: goto label_1b24f0;
            case 0x1B24F4u: goto label_1b24f4;
            case 0x1B24F8u: goto label_1b24f8;
            case 0x1B24FCu: goto label_1b24fc;
            case 0x1B2500u: goto label_1b2500;
            case 0x1B2504u: goto label_1b2504;
            case 0x1B2508u: goto label_1b2508;
            case 0x1B250Cu: goto label_1b250c;
            case 0x1B2510u: goto label_1b2510;
            case 0x1B2514u: goto label_1b2514;
            case 0x1B2518u: goto label_1b2518;
            case 0x1B251Cu: goto label_1b251c;
            case 0x1B2520u: goto label_1b2520;
            case 0x1B2524u: goto label_1b2524;
            case 0x1B2528u: goto label_1b2528;
            case 0x1B252Cu: goto label_1b252c;
            case 0x1B2530u: goto label_1b2530;
            case 0x1B2534u: goto label_1b2534;
            case 0x1B2538u: goto label_1b2538;
            case 0x1B253Cu: goto label_1b253c;
            case 0x1B2540u: goto label_1b2540;
            case 0x1B2544u: goto label_1b2544;
            case 0x1B2548u: goto label_1b2548;
            case 0x1B254Cu: goto label_1b254c;
            case 0x1B2550u: goto label_1b2550;
            case 0x1B2554u: goto label_1b2554;
            case 0x1B2558u: goto label_1b2558;
            case 0x1B255Cu: goto label_1b255c;
            case 0x1B2560u: goto label_1b2560;
            case 0x1B2564u: goto label_1b2564;
            case 0x1B2568u: goto label_1b2568;
            case 0x1B256Cu: goto label_1b256c;
            case 0x1B2570u: goto label_1b2570;
            case 0x1B2574u: goto label_1b2574;
            case 0x1B2578u: goto label_1b2578;
            case 0x1B257Cu: goto label_1b257c;
            case 0x1B2580u: goto label_1b2580;
            case 0x1B2584u: goto label_1b2584;
            case 0x1B2588u: goto label_1b2588;
            case 0x1B258Cu: goto label_1b258c;
            case 0x1B2590u: goto label_1b2590;
            case 0x1B2594u: goto label_1b2594;
            case 0x1B2598u: goto label_1b2598;
            case 0x1B259Cu: goto label_1b259c;
            case 0x1B25A0u: goto label_1b25a0;
            case 0x1B25A4u: goto label_1b25a4;
            case 0x1B25A8u: goto label_1b25a8;
            case 0x1B25ACu: goto label_1b25ac;
            case 0x1B25B0u: goto label_1b25b0;
            case 0x1B25B4u: goto label_1b25b4;
            case 0x1B25B8u: goto label_1b25b8;
            case 0x1B25BCu: goto label_1b25bc;
            case 0x1B25C0u: goto label_1b25c0;
            case 0x1B25C4u: goto label_1b25c4;
            case 0x1B25C8u: goto label_1b25c8;
            case 0x1B25CCu: goto label_1b25cc;
            case 0x1B25D0u: goto label_1b25d0;
            case 0x1B25D4u: goto label_1b25d4;
            case 0x1B25D8u: goto label_1b25d8;
            case 0x1B25DCu: goto label_1b25dc;
            case 0x1B25E0u: goto label_1b25e0;
            case 0x1B25E4u: goto label_1b25e4;
            case 0x1B25E8u: goto label_1b25e8;
            case 0x1B25ECu: goto label_1b25ec;
            case 0x1B25F0u: goto label_1b25f0;
            case 0x1B25F4u: goto label_1b25f4;
            case 0x1B25F8u: goto label_1b25f8;
            case 0x1B25FCu: goto label_1b25fc;
            case 0x1B2600u: goto label_1b2600;
            case 0x1B2604u: goto label_1b2604;
            case 0x1B2608u: goto label_1b2608;
            case 0x1B260Cu: goto label_1b260c;
            case 0x1B2610u: goto label_1b2610;
            case 0x1B2614u: goto label_1b2614;
            case 0x1B2618u: goto label_1b2618;
            case 0x1B261Cu: goto label_1b261c;
            case 0x1B2620u: goto label_1b2620;
            case 0x1B2624u: goto label_1b2624;
            case 0x1B2628u: goto label_1b2628;
            case 0x1B262Cu: goto label_1b262c;
            case 0x1B2630u: goto label_1b2630;
            case 0x1B2634u: goto label_1b2634;
            case 0x1B2638u: goto label_1b2638;
            case 0x1B263Cu: goto label_1b263c;
            case 0x1B2640u: goto label_1b2640;
            case 0x1B2644u: goto label_1b2644;
            case 0x1B2648u: goto label_1b2648;
            case 0x1B264Cu: goto label_1b264c;
            case 0x1B2650u: goto label_1b2650;
            case 0x1B2654u: goto label_1b2654;
            case 0x1B2658u: goto label_1b2658;
            case 0x1B265Cu: goto label_1b265c;
            case 0x1B2660u: goto label_1b2660;
            case 0x1B2664u: goto label_1b2664;
            case 0x1B2668u: goto label_1b2668;
            case 0x1B266Cu: goto label_1b266c;
            case 0x1B2670u: goto label_1b2670;
            case 0x1B2674u: goto label_1b2674;
            case 0x1B2678u: goto label_1b2678;
            case 0x1B267Cu: goto label_1b267c;
            case 0x1B2680u: goto label_1b2680;
            case 0x1B2684u: goto label_1b2684;
            case 0x1B2688u: goto label_1b2688;
            case 0x1B268Cu: goto label_1b268c;
            case 0x1B2690u: goto label_1b2690;
            case 0x1B2694u: goto label_1b2694;
            case 0x1B2698u: goto label_1b2698;
            case 0x1B269Cu: goto label_1b269c;
            case 0x1B26A0u: goto label_1b26a0;
            case 0x1B26A4u: goto label_1b26a4;
            case 0x1B26A8u: goto label_1b26a8;
            case 0x1B26ACu: goto label_1b26ac;
            case 0x1B26B0u: goto label_1b26b0;
            case 0x1B26B4u: goto label_1b26b4;
            case 0x1B26B8u: goto label_1b26b8;
            case 0x1B26BCu: goto label_1b26bc;
            case 0x1B26C0u: goto label_1b26c0;
            case 0x1B26C4u: goto label_1b26c4;
            case 0x1B26C8u: goto label_1b26c8;
            case 0x1B26CCu: goto label_1b26cc;
            case 0x1B26D0u: goto label_1b26d0;
            case 0x1B26D4u: goto label_1b26d4;
            case 0x1B26D8u: goto label_1b26d8;
            case 0x1B26DCu: goto label_1b26dc;
            case 0x1B26E0u: goto label_1b26e0;
            case 0x1B26E4u: goto label_1b26e4;
            case 0x1B26E8u: goto label_1b26e8;
            case 0x1B26ECu: goto label_1b26ec;
            case 0x1B26F0u: goto label_1b26f0;
            case 0x1B26F4u: goto label_1b26f4;
            case 0x1B26F8u: goto label_1b26f8;
            case 0x1B26FCu: goto label_1b26fc;
            case 0x1B2700u: goto label_1b2700;
            case 0x1B2704u: goto label_1b2704;
            case 0x1B2708u: goto label_1b2708;
            case 0x1B270Cu: goto label_1b270c;
            case 0x1B2710u: goto label_1b2710;
            case 0x1B2714u: goto label_1b2714;
            case 0x1B2718u: goto label_1b2718;
            case 0x1B271Cu: goto label_1b271c;
            case 0x1B2720u: goto label_1b2720;
            case 0x1B2724u: goto label_1b2724;
            case 0x1B2728u: goto label_1b2728;
            case 0x1B272Cu: goto label_1b272c;
            case 0x1B2730u: goto label_1b2730;
            case 0x1B2734u: goto label_1b2734;
            case 0x1B2738u: goto label_1b2738;
            case 0x1B273Cu: goto label_1b273c;
            case 0x1B2740u: goto label_1b2740;
            case 0x1B2744u: goto label_1b2744;
            case 0x1B2748u: goto label_1b2748;
            case 0x1B274Cu: goto label_1b274c;
            case 0x1B2750u: goto label_1b2750;
            case 0x1B2754u: goto label_1b2754;
            case 0x1B2758u: goto label_1b2758;
            case 0x1B275Cu: goto label_1b275c;
            case 0x1B2760u: goto label_1b2760;
            case 0x1B2764u: goto label_1b2764;
            case 0x1B2768u: goto label_1b2768;
            case 0x1B276Cu: goto label_1b276c;
            case 0x1B2770u: goto label_1b2770;
            case 0x1B2774u: goto label_1b2774;
            case 0x1B2778u: goto label_1b2778;
            case 0x1B277Cu: goto label_1b277c;
            case 0x1B2780u: goto label_1b2780;
            case 0x1B2784u: goto label_1b2784;
            case 0x1B2788u: goto label_1b2788;
            case 0x1B278Cu: goto label_1b278c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B273Cu;
label_1b273c:
    // 0x1b273c: 0x0
    ctx->pc = 0x1b273cu;
    // NOP
label_1b2740:
    // 0x1b2740: 0x27bdffe0
    ctx->pc = 0x1b2740u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b2744:
    // 0x1b2744: 0x3c020032
    ctx->pc = 0x1b2744u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_1b2748:
    // 0x1b2748: 0xffbf0000
    ctx->pc = 0x1b2748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b274c:
    // 0x1b274c: 0x244288e0
    ctx->pc = 0x1b274cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936800));
label_1b2750:
    // 0x1b2750: 0xafa2001c
    ctx->pc = 0x1b2750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_1b2754:
    // 0x1b2754: 0xc06970c
label_1b2758:
    if (ctx->pc == 0x1B2758u) {
        ctx->pc = 0x1B2758u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 28));
        ctx->pc = 0x1B275Cu;
        goto label_1b275c;
    }
    ctx->pc = 0x1B2754u;
    SET_GPR_U32(ctx, 31, 0x1B275Cu);
    ctx->pc = 0x1B2758u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 28));
    ctx->pc = 0x1A5C30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5C30_0x1a5c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B275Cu; }
    }
    if (ctx->pc != 0x1B275Cu) { return; }
    ctx->pc = 0x1B275Cu;
label_1b275c:
    // 0x1b275c: 0xafa2001c
    ctx->pc = 0x1b275cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_1b2760:
    // 0x1b2760: 0x8fa4001c
    ctx->pc = 0x1b2760u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_1b2764:
    // 0x1b2764: 0x10800006
label_1b2768:
    if (ctx->pc == 0x1B2768u) {
        ctx->pc = 0x1B276Cu;
        goto label_1b276c;
    }
    ctx->pc = 0x1B2764u;
    {
        const bool branch_taken_0x1b2764 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b2764) {
            ctx->pc = 0x1B2780u;
            goto label_1b2780;
        }
    }
    ctx->pc = 0x1B276Cu;
label_1b276c:
    // 0x1b276c: 0x8c82001c
    ctx->pc = 0x1b276cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1b2770:
    // 0x1b2770: 0x40f809
label_1b2774:
    if (ctx->pc == 0x1B2774u) {
        ctx->pc = 0x1B2778u;
        goto label_1b2778;
    }
    ctx->pc = 0x1B2770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B2778u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B2340u: goto label_1b2340;
            case 0x1B2344u: goto label_1b2344;
            case 0x1B2348u: goto label_1b2348;
            case 0x1B234Cu: goto label_1b234c;
            case 0x1B2350u: goto label_1b2350;
            case 0x1B2354u: goto label_1b2354;
            case 0x1B2358u: goto label_1b2358;
            case 0x1B235Cu: goto label_1b235c;
            case 0x1B2360u: goto label_1b2360;
            case 0x1B2364u: goto label_1b2364;
            case 0x1B2368u: goto label_1b2368;
            case 0x1B236Cu: goto label_1b236c;
            case 0x1B2370u: goto label_1b2370;
            case 0x1B2374u: goto label_1b2374;
            case 0x1B2378u: goto label_1b2378;
            case 0x1B237Cu: goto label_1b237c;
            case 0x1B2380u: goto label_1b2380;
            case 0x1B2384u: goto label_1b2384;
            case 0x1B2388u: goto label_1b2388;
            case 0x1B238Cu: goto label_1b238c;
            case 0x1B2390u: goto label_1b2390;
            case 0x1B2394u: goto label_1b2394;
            case 0x1B2398u: goto label_1b2398;
            case 0x1B239Cu: goto label_1b239c;
            case 0x1B23A0u: goto label_1b23a0;
            case 0x1B23A4u: goto label_1b23a4;
            case 0x1B23A8u: goto label_1b23a8;
            case 0x1B23ACu: goto label_1b23ac;
            case 0x1B23B0u: goto label_1b23b0;
            case 0x1B23B4u: goto label_1b23b4;
            case 0x1B23B8u: goto label_1b23b8;
            case 0x1B23BCu: goto label_1b23bc;
            case 0x1B23C0u: goto label_1b23c0;
            case 0x1B23C4u: goto label_1b23c4;
            case 0x1B23C8u: goto label_1b23c8;
            case 0x1B23CCu: goto label_1b23cc;
            case 0x1B23D0u: goto label_1b23d0;
            case 0x1B23D4u: goto label_1b23d4;
            case 0x1B23D8u: goto label_1b23d8;
            case 0x1B23DCu: goto label_1b23dc;
            case 0x1B23E0u: goto label_1b23e0;
            case 0x1B23E4u: goto label_1b23e4;
            case 0x1B23E8u: goto label_1b23e8;
            case 0x1B23ECu: goto label_1b23ec;
            case 0x1B23F0u: goto label_1b23f0;
            case 0x1B23F4u: goto label_1b23f4;
            case 0x1B23F8u: goto label_1b23f8;
            case 0x1B23FCu: goto label_1b23fc;
            case 0x1B2400u: goto label_1b2400;
            case 0x1B2404u: goto label_1b2404;
            case 0x1B2408u: goto label_1b2408;
            case 0x1B240Cu: goto label_1b240c;
            case 0x1B2410u: goto label_1b2410;
            case 0x1B2414u: goto label_1b2414;
            case 0x1B2418u: goto label_1b2418;
            case 0x1B241Cu: goto label_1b241c;
            case 0x1B2420u: goto label_1b2420;
            case 0x1B2424u: goto label_1b2424;
            case 0x1B2428u: goto label_1b2428;
            case 0x1B242Cu: goto label_1b242c;
            case 0x1B2430u: goto label_1b2430;
            case 0x1B2434u: goto label_1b2434;
            case 0x1B2438u: goto label_1b2438;
            case 0x1B243Cu: goto label_1b243c;
            case 0x1B2440u: goto label_1b2440;
            case 0x1B2444u: goto label_1b2444;
            case 0x1B2448u: goto label_1b2448;
            case 0x1B244Cu: goto label_1b244c;
            case 0x1B2450u: goto label_1b2450;
            case 0x1B2454u: goto label_1b2454;
            case 0x1B2458u: goto label_1b2458;
            case 0x1B245Cu: goto label_1b245c;
            case 0x1B2460u: goto label_1b2460;
            case 0x1B2464u: goto label_1b2464;
            case 0x1B2468u: goto label_1b2468;
            case 0x1B246Cu: goto label_1b246c;
            case 0x1B2470u: goto label_1b2470;
            case 0x1B2474u: goto label_1b2474;
            case 0x1B2478u: goto label_1b2478;
            case 0x1B247Cu: goto label_1b247c;
            case 0x1B2480u: goto label_1b2480;
            case 0x1B2484u: goto label_1b2484;
            case 0x1B2488u: goto label_1b2488;
            case 0x1B248Cu: goto label_1b248c;
            case 0x1B2490u: goto label_1b2490;
            case 0x1B2494u: goto label_1b2494;
            case 0x1B2498u: goto label_1b2498;
            case 0x1B249Cu: goto label_1b249c;
            case 0x1B24A0u: goto label_1b24a0;
            case 0x1B24A4u: goto label_1b24a4;
            case 0x1B24A8u: goto label_1b24a8;
            case 0x1B24ACu: goto label_1b24ac;
            case 0x1B24B0u: goto label_1b24b0;
            case 0x1B24B4u: goto label_1b24b4;
            case 0x1B24B8u: goto label_1b24b8;
            case 0x1B24BCu: goto label_1b24bc;
            case 0x1B24C0u: goto label_1b24c0;
            case 0x1B24C4u: goto label_1b24c4;
            case 0x1B24C8u: goto label_1b24c8;
            case 0x1B24CCu: goto label_1b24cc;
            case 0x1B24D0u: goto label_1b24d0;
            case 0x1B24D4u: goto label_1b24d4;
            case 0x1B24D8u: goto label_1b24d8;
            case 0x1B24DCu: goto label_1b24dc;
            case 0x1B24E0u: goto label_1b24e0;
            case 0x1B24E4u: goto label_1b24e4;
            case 0x1B24E8u: goto label_1b24e8;
            case 0x1B24ECu: goto label_1b24ec;
            case 0x1B24F0u: goto label_1b24f0;
            case 0x1B24F4u: goto label_1b24f4;
            case 0x1B24F8u: goto label_1b24f8;
            case 0x1B24FCu: goto label_1b24fc;
            case 0x1B2500u: goto label_1b2500;
            case 0x1B2504u: goto label_1b2504;
            case 0x1B2508u: goto label_1b2508;
            case 0x1B250Cu: goto label_1b250c;
            case 0x1B2510u: goto label_1b2510;
            case 0x1B2514u: goto label_1b2514;
            case 0x1B2518u: goto label_1b2518;
            case 0x1B251Cu: goto label_1b251c;
            case 0x1B2520u: goto label_1b2520;
            case 0x1B2524u: goto label_1b2524;
            case 0x1B2528u: goto label_1b2528;
            case 0x1B252Cu: goto label_1b252c;
            case 0x1B2530u: goto label_1b2530;
            case 0x1B2534u: goto label_1b2534;
            case 0x1B2538u: goto label_1b2538;
            case 0x1B253Cu: goto label_1b253c;
            case 0x1B2540u: goto label_1b2540;
            case 0x1B2544u: goto label_1b2544;
            case 0x1B2548u: goto label_1b2548;
            case 0x1B254Cu: goto label_1b254c;
            case 0x1B2550u: goto label_1b2550;
            case 0x1B2554u: goto label_1b2554;
            case 0x1B2558u: goto label_1b2558;
            case 0x1B255Cu: goto label_1b255c;
            case 0x1B2560u: goto label_1b2560;
            case 0x1B2564u: goto label_1b2564;
            case 0x1B2568u: goto label_1b2568;
            case 0x1B256Cu: goto label_1b256c;
            case 0x1B2570u: goto label_1b2570;
            case 0x1B2574u: goto label_1b2574;
            case 0x1B2578u: goto label_1b2578;
            case 0x1B257Cu: goto label_1b257c;
            case 0x1B2580u: goto label_1b2580;
            case 0x1B2584u: goto label_1b2584;
            case 0x1B2588u: goto label_1b2588;
            case 0x1B258Cu: goto label_1b258c;
            case 0x1B2590u: goto label_1b2590;
            case 0x1B2594u: goto label_1b2594;
            case 0x1B2598u: goto label_1b2598;
            case 0x1B259Cu: goto label_1b259c;
            case 0x1B25A0u: goto label_1b25a0;
            case 0x1B25A4u: goto label_1b25a4;
            case 0x1B25A8u: goto label_1b25a8;
            case 0x1B25ACu: goto label_1b25ac;
            case 0x1B25B0u: goto label_1b25b0;
            case 0x1B25B4u: goto label_1b25b4;
            case 0x1B25B8u: goto label_1b25b8;
            case 0x1B25BCu: goto label_1b25bc;
            case 0x1B25C0u: goto label_1b25c0;
            case 0x1B25C4u: goto label_1b25c4;
            case 0x1B25C8u: goto label_1b25c8;
            case 0x1B25CCu: goto label_1b25cc;
            case 0x1B25D0u: goto label_1b25d0;
            case 0x1B25D4u: goto label_1b25d4;
            case 0x1B25D8u: goto label_1b25d8;
            case 0x1B25DCu: goto label_1b25dc;
            case 0x1B25E0u: goto label_1b25e0;
            case 0x1B25E4u: goto label_1b25e4;
            case 0x1B25E8u: goto label_1b25e8;
            case 0x1B25ECu: goto label_1b25ec;
            case 0x1B25F0u: goto label_1b25f0;
            case 0x1B25F4u: goto label_1b25f4;
            case 0x1B25F8u: goto label_1b25f8;
            case 0x1B25FCu: goto label_1b25fc;
            case 0x1B2600u: goto label_1b2600;
            case 0x1B2604u: goto label_1b2604;
            case 0x1B2608u: goto label_1b2608;
            case 0x1B260Cu: goto label_1b260c;
            case 0x1B2610u: goto label_1b2610;
            case 0x1B2614u: goto label_1b2614;
            case 0x1B2618u: goto label_1b2618;
            case 0x1B261Cu: goto label_1b261c;
            case 0x1B2620u: goto label_1b2620;
            case 0x1B2624u: goto label_1b2624;
            case 0x1B2628u: goto label_1b2628;
            case 0x1B262Cu: goto label_1b262c;
            case 0x1B2630u: goto label_1b2630;
            case 0x1B2634u: goto label_1b2634;
            case 0x1B2638u: goto label_1b2638;
            case 0x1B263Cu: goto label_1b263c;
            case 0x1B2640u: goto label_1b2640;
            case 0x1B2644u: goto label_1b2644;
            case 0x1B2648u: goto label_1b2648;
            case 0x1B264Cu: goto label_1b264c;
            case 0x1B2650u: goto label_1b2650;
            case 0x1B2654u: goto label_1b2654;
            case 0x1B2658u: goto label_1b2658;
            case 0x1B265Cu: goto label_1b265c;
            case 0x1B2660u: goto label_1b2660;
            case 0x1B2664u: goto label_1b2664;
            case 0x1B2668u: goto label_1b2668;
            case 0x1B266Cu: goto label_1b266c;
            case 0x1B2670u: goto label_1b2670;
            case 0x1B2674u: goto label_1b2674;
            case 0x1B2678u: goto label_1b2678;
            case 0x1B267Cu: goto label_1b267c;
            case 0x1B2680u: goto label_1b2680;
            case 0x1B2684u: goto label_1b2684;
            case 0x1B2688u: goto label_1b2688;
            case 0x1B268Cu: goto label_1b268c;
            case 0x1B2690u: goto label_1b2690;
            case 0x1B2694u: goto label_1b2694;
            case 0x1B2698u: goto label_1b2698;
            case 0x1B269Cu: goto label_1b269c;
            case 0x1B26A0u: goto label_1b26a0;
            case 0x1B26A4u: goto label_1b26a4;
            case 0x1B26A8u: goto label_1b26a8;
            case 0x1B26ACu: goto label_1b26ac;
            case 0x1B26B0u: goto label_1b26b0;
            case 0x1B26B4u: goto label_1b26b4;
            case 0x1B26B8u: goto label_1b26b8;
            case 0x1B26BCu: goto label_1b26bc;
            case 0x1B26C0u: goto label_1b26c0;
            case 0x1B26C4u: goto label_1b26c4;
            case 0x1B26C8u: goto label_1b26c8;
            case 0x1B26CCu: goto label_1b26cc;
            case 0x1B26D0u: goto label_1b26d0;
            case 0x1B26D4u: goto label_1b26d4;
            case 0x1B26D8u: goto label_1b26d8;
            case 0x1B26DCu: goto label_1b26dc;
            case 0x1B26E0u: goto label_1b26e0;
            case 0x1B26E4u: goto label_1b26e4;
            case 0x1B26E8u: goto label_1b26e8;
            case 0x1B26ECu: goto label_1b26ec;
            case 0x1B26F0u: goto label_1b26f0;
            case 0x1B26F4u: goto label_1b26f4;
            case 0x1B26F8u: goto label_1b26f8;
            case 0x1B26FCu: goto label_1b26fc;
            case 0x1B2700u: goto label_1b2700;
            case 0x1B2704u: goto label_1b2704;
            case 0x1B2708u: goto label_1b2708;
            case 0x1B270Cu: goto label_1b270c;
            case 0x1B2710u: goto label_1b2710;
            case 0x1B2714u: goto label_1b2714;
            case 0x1B2718u: goto label_1b2718;
            case 0x1B271Cu: goto label_1b271c;
            case 0x1B2720u: goto label_1b2720;
            case 0x1B2724u: goto label_1b2724;
            case 0x1B2728u: goto label_1b2728;
            case 0x1B272Cu: goto label_1b272c;
            case 0x1B2730u: goto label_1b2730;
            case 0x1B2734u: goto label_1b2734;
            case 0x1B2738u: goto label_1b2738;
            case 0x1B273Cu: goto label_1b273c;
            case 0x1B2740u: goto label_1b2740;
            case 0x1B2744u: goto label_1b2744;
            case 0x1B2748u: goto label_1b2748;
            case 0x1B274Cu: goto label_1b274c;
            case 0x1B2750u: goto label_1b2750;
            case 0x1B2754u: goto label_1b2754;
            case 0x1B2758u: goto label_1b2758;
            case 0x1B275Cu: goto label_1b275c;
            case 0x1B2760u: goto label_1b2760;
            case 0x1B2764u: goto label_1b2764;
            case 0x1B2768u: goto label_1b2768;
            case 0x1B276Cu: goto label_1b276c;
            case 0x1B2770u: goto label_1b2770;
            case 0x1B2774u: goto label_1b2774;
            case 0x1B2778u: goto label_1b2778;
            case 0x1B277Cu: goto label_1b277c;
            case 0x1B2780u: goto label_1b2780;
            case 0x1B2784u: goto label_1b2784;
            case 0x1B2788u: goto label_1b2788;
            case 0x1B278Cu: goto label_1b278c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B2778u; }
            if (ctx->pc != 0x1B2778u) { return; }
        }
    }
    ctx->pc = 0x1B2778u;
label_1b2778:
    // 0x1b2778: 0x1000fff6
label_1b277c:
    if (ctx->pc == 0x1B277Cu) {
        ctx->pc = 0x1B2780u;
        goto label_1b2780;
    }
    ctx->pc = 0x1B2778u;
    {
        const bool branch_taken_0x1b2778 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b2778) {
            ctx->pc = 0x1B2754u;
            goto label_1b2754;
        }
    }
    ctx->pc = 0x1B2780u;
label_1b2780:
    // 0x1b2780: 0xdfbf0000
    ctx->pc = 0x1b2780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b2784:
    // 0x1b2784: 0x3e00008
label_1b2788:
    if (ctx->pc == 0x1B2788u) {
        ctx->pc = 0x1B2788u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1B278Cu;
        goto label_1b278c;
    }
    ctx->pc = 0x1B2784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2788u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B2340u: goto label_1b2340;
            case 0x1B2344u: goto label_1b2344;
            case 0x1B2348u: goto label_1b2348;
            case 0x1B234Cu: goto label_1b234c;
            case 0x1B2350u: goto label_1b2350;
            case 0x1B2354u: goto label_1b2354;
            case 0x1B2358u: goto label_1b2358;
            case 0x1B235Cu: goto label_1b235c;
            case 0x1B2360u: goto label_1b2360;
            case 0x1B2364u: goto label_1b2364;
            case 0x1B2368u: goto label_1b2368;
            case 0x1B236Cu: goto label_1b236c;
            case 0x1B2370u: goto label_1b2370;
            case 0x1B2374u: goto label_1b2374;
            case 0x1B2378u: goto label_1b2378;
            case 0x1B237Cu: goto label_1b237c;
            case 0x1B2380u: goto label_1b2380;
            case 0x1B2384u: goto label_1b2384;
            case 0x1B2388u: goto label_1b2388;
            case 0x1B238Cu: goto label_1b238c;
            case 0x1B2390u: goto label_1b2390;
            case 0x1B2394u: goto label_1b2394;
            case 0x1B2398u: goto label_1b2398;
            case 0x1B239Cu: goto label_1b239c;
            case 0x1B23A0u: goto label_1b23a0;
            case 0x1B23A4u: goto label_1b23a4;
            case 0x1B23A8u: goto label_1b23a8;
            case 0x1B23ACu: goto label_1b23ac;
            case 0x1B23B0u: goto label_1b23b0;
            case 0x1B23B4u: goto label_1b23b4;
            case 0x1B23B8u: goto label_1b23b8;
            case 0x1B23BCu: goto label_1b23bc;
            case 0x1B23C0u: goto label_1b23c0;
            case 0x1B23C4u: goto label_1b23c4;
            case 0x1B23C8u: goto label_1b23c8;
            case 0x1B23CCu: goto label_1b23cc;
            case 0x1B23D0u: goto label_1b23d0;
            case 0x1B23D4u: goto label_1b23d4;
            case 0x1B23D8u: goto label_1b23d8;
            case 0x1B23DCu: goto label_1b23dc;
            case 0x1B23E0u: goto label_1b23e0;
            case 0x1B23E4u: goto label_1b23e4;
            case 0x1B23E8u: goto label_1b23e8;
            case 0x1B23ECu: goto label_1b23ec;
            case 0x1B23F0u: goto label_1b23f0;
            case 0x1B23F4u: goto label_1b23f4;
            case 0x1B23F8u: goto label_1b23f8;
            case 0x1B23FCu: goto label_1b23fc;
            case 0x1B2400u: goto label_1b2400;
            case 0x1B2404u: goto label_1b2404;
            case 0x1B2408u: goto label_1b2408;
            case 0x1B240Cu: goto label_1b240c;
            case 0x1B2410u: goto label_1b2410;
            case 0x1B2414u: goto label_1b2414;
            case 0x1B2418u: goto label_1b2418;
            case 0x1B241Cu: goto label_1b241c;
            case 0x1B2420u: goto label_1b2420;
            case 0x1B2424u: goto label_1b2424;
            case 0x1B2428u: goto label_1b2428;
            case 0x1B242Cu: goto label_1b242c;
            case 0x1B2430u: goto label_1b2430;
            case 0x1B2434u: goto label_1b2434;
            case 0x1B2438u: goto label_1b2438;
            case 0x1B243Cu: goto label_1b243c;
            case 0x1B2440u: goto label_1b2440;
            case 0x1B2444u: goto label_1b2444;
            case 0x1B2448u: goto label_1b2448;
            case 0x1B244Cu: goto label_1b244c;
            case 0x1B2450u: goto label_1b2450;
            case 0x1B2454u: goto label_1b2454;
            case 0x1B2458u: goto label_1b2458;
            case 0x1B245Cu: goto label_1b245c;
            case 0x1B2460u: goto label_1b2460;
            case 0x1B2464u: goto label_1b2464;
            case 0x1B2468u: goto label_1b2468;
            case 0x1B246Cu: goto label_1b246c;
            case 0x1B2470u: goto label_1b2470;
            case 0x1B2474u: goto label_1b2474;
            case 0x1B2478u: goto label_1b2478;
            case 0x1B247Cu: goto label_1b247c;
            case 0x1B2480u: goto label_1b2480;
            case 0x1B2484u: goto label_1b2484;
            case 0x1B2488u: goto label_1b2488;
            case 0x1B248Cu: goto label_1b248c;
            case 0x1B2490u: goto label_1b2490;
            case 0x1B2494u: goto label_1b2494;
            case 0x1B2498u: goto label_1b2498;
            case 0x1B249Cu: goto label_1b249c;
            case 0x1B24A0u: goto label_1b24a0;
            case 0x1B24A4u: goto label_1b24a4;
            case 0x1B24A8u: goto label_1b24a8;
            case 0x1B24ACu: goto label_1b24ac;
            case 0x1B24B0u: goto label_1b24b0;
            case 0x1B24B4u: goto label_1b24b4;
            case 0x1B24B8u: goto label_1b24b8;
            case 0x1B24BCu: goto label_1b24bc;
            case 0x1B24C0u: goto label_1b24c0;
            case 0x1B24C4u: goto label_1b24c4;
            case 0x1B24C8u: goto label_1b24c8;
            case 0x1B24CCu: goto label_1b24cc;
            case 0x1B24D0u: goto label_1b24d0;
            case 0x1B24D4u: goto label_1b24d4;
            case 0x1B24D8u: goto label_1b24d8;
            case 0x1B24DCu: goto label_1b24dc;
            case 0x1B24E0u: goto label_1b24e0;
            case 0x1B24E4u: goto label_1b24e4;
            case 0x1B24E8u: goto label_1b24e8;
            case 0x1B24ECu: goto label_1b24ec;
            case 0x1B24F0u: goto label_1b24f0;
            case 0x1B24F4u: goto label_1b24f4;
            case 0x1B24F8u: goto label_1b24f8;
            case 0x1B24FCu: goto label_1b24fc;
            case 0x1B2500u: goto label_1b2500;
            case 0x1B2504u: goto label_1b2504;
            case 0x1B2508u: goto label_1b2508;
            case 0x1B250Cu: goto label_1b250c;
            case 0x1B2510u: goto label_1b2510;
            case 0x1B2514u: goto label_1b2514;
            case 0x1B2518u: goto label_1b2518;
            case 0x1B251Cu: goto label_1b251c;
            case 0x1B2520u: goto label_1b2520;
            case 0x1B2524u: goto label_1b2524;
            case 0x1B2528u: goto label_1b2528;
            case 0x1B252Cu: goto label_1b252c;
            case 0x1B2530u: goto label_1b2530;
            case 0x1B2534u: goto label_1b2534;
            case 0x1B2538u: goto label_1b2538;
            case 0x1B253Cu: goto label_1b253c;
            case 0x1B2540u: goto label_1b2540;
            case 0x1B2544u: goto label_1b2544;
            case 0x1B2548u: goto label_1b2548;
            case 0x1B254Cu: goto label_1b254c;
            case 0x1B2550u: goto label_1b2550;
            case 0x1B2554u: goto label_1b2554;
            case 0x1B2558u: goto label_1b2558;
            case 0x1B255Cu: goto label_1b255c;
            case 0x1B2560u: goto label_1b2560;
            case 0x1B2564u: goto label_1b2564;
            case 0x1B2568u: goto label_1b2568;
            case 0x1B256Cu: goto label_1b256c;
            case 0x1B2570u: goto label_1b2570;
            case 0x1B2574u: goto label_1b2574;
            case 0x1B2578u: goto label_1b2578;
            case 0x1B257Cu: goto label_1b257c;
            case 0x1B2580u: goto label_1b2580;
            case 0x1B2584u: goto label_1b2584;
            case 0x1B2588u: goto label_1b2588;
            case 0x1B258Cu: goto label_1b258c;
            case 0x1B2590u: goto label_1b2590;
            case 0x1B2594u: goto label_1b2594;
            case 0x1B2598u: goto label_1b2598;
            case 0x1B259Cu: goto label_1b259c;
            case 0x1B25A0u: goto label_1b25a0;
            case 0x1B25A4u: goto label_1b25a4;
            case 0x1B25A8u: goto label_1b25a8;
            case 0x1B25ACu: goto label_1b25ac;
            case 0x1B25B0u: goto label_1b25b0;
            case 0x1B25B4u: goto label_1b25b4;
            case 0x1B25B8u: goto label_1b25b8;
            case 0x1B25BCu: goto label_1b25bc;
            case 0x1B25C0u: goto label_1b25c0;
            case 0x1B25C4u: goto label_1b25c4;
            case 0x1B25C8u: goto label_1b25c8;
            case 0x1B25CCu: goto label_1b25cc;
            case 0x1B25D0u: goto label_1b25d0;
            case 0x1B25D4u: goto label_1b25d4;
            case 0x1B25D8u: goto label_1b25d8;
            case 0x1B25DCu: goto label_1b25dc;
            case 0x1B25E0u: goto label_1b25e0;
            case 0x1B25E4u: goto label_1b25e4;
            case 0x1B25E8u: goto label_1b25e8;
            case 0x1B25ECu: goto label_1b25ec;
            case 0x1B25F0u: goto label_1b25f0;
            case 0x1B25F4u: goto label_1b25f4;
            case 0x1B25F8u: goto label_1b25f8;
            case 0x1B25FCu: goto label_1b25fc;
            case 0x1B2600u: goto label_1b2600;
            case 0x1B2604u: goto label_1b2604;
            case 0x1B2608u: goto label_1b2608;
            case 0x1B260Cu: goto label_1b260c;
            case 0x1B2610u: goto label_1b2610;
            case 0x1B2614u: goto label_1b2614;
            case 0x1B2618u: goto label_1b2618;
            case 0x1B261Cu: goto label_1b261c;
            case 0x1B2620u: goto label_1b2620;
            case 0x1B2624u: goto label_1b2624;
            case 0x1B2628u: goto label_1b2628;
            case 0x1B262Cu: goto label_1b262c;
            case 0x1B2630u: goto label_1b2630;
            case 0x1B2634u: goto label_1b2634;
            case 0x1B2638u: goto label_1b2638;
            case 0x1B263Cu: goto label_1b263c;
            case 0x1B2640u: goto label_1b2640;
            case 0x1B2644u: goto label_1b2644;
            case 0x1B2648u: goto label_1b2648;
            case 0x1B264Cu: goto label_1b264c;
            case 0x1B2650u: goto label_1b2650;
            case 0x1B2654u: goto label_1b2654;
            case 0x1B2658u: goto label_1b2658;
            case 0x1B265Cu: goto label_1b265c;
            case 0x1B2660u: goto label_1b2660;
            case 0x1B2664u: goto label_1b2664;
            case 0x1B2668u: goto label_1b2668;
            case 0x1B266Cu: goto label_1b266c;
            case 0x1B2670u: goto label_1b2670;
            case 0x1B2674u: goto label_1b2674;
            case 0x1B2678u: goto label_1b2678;
            case 0x1B267Cu: goto label_1b267c;
            case 0x1B2680u: goto label_1b2680;
            case 0x1B2684u: goto label_1b2684;
            case 0x1B2688u: goto label_1b2688;
            case 0x1B268Cu: goto label_1b268c;
            case 0x1B2690u: goto label_1b2690;
            case 0x1B2694u: goto label_1b2694;
            case 0x1B2698u: goto label_1b2698;
            case 0x1B269Cu: goto label_1b269c;
            case 0x1B26A0u: goto label_1b26a0;
            case 0x1B26A4u: goto label_1b26a4;
            case 0x1B26A8u: goto label_1b26a8;
            case 0x1B26ACu: goto label_1b26ac;
            case 0x1B26B0u: goto label_1b26b0;
            case 0x1B26B4u: goto label_1b26b4;
            case 0x1B26B8u: goto label_1b26b8;
            case 0x1B26BCu: goto label_1b26bc;
            case 0x1B26C0u: goto label_1b26c0;
            case 0x1B26C4u: goto label_1b26c4;
            case 0x1B26C8u: goto label_1b26c8;
            case 0x1B26CCu: goto label_1b26cc;
            case 0x1B26D0u: goto label_1b26d0;
            case 0x1B26D4u: goto label_1b26d4;
            case 0x1B26D8u: goto label_1b26d8;
            case 0x1B26DCu: goto label_1b26dc;
            case 0x1B26E0u: goto label_1b26e0;
            case 0x1B26E4u: goto label_1b26e4;
            case 0x1B26E8u: goto label_1b26e8;
            case 0x1B26ECu: goto label_1b26ec;
            case 0x1B26F0u: goto label_1b26f0;
            case 0x1B26F4u: goto label_1b26f4;
            case 0x1B26F8u: goto label_1b26f8;
            case 0x1B26FCu: goto label_1b26fc;
            case 0x1B2700u: goto label_1b2700;
            case 0x1B2704u: goto label_1b2704;
            case 0x1B2708u: goto label_1b2708;
            case 0x1B270Cu: goto label_1b270c;
            case 0x1B2710u: goto label_1b2710;
            case 0x1B2714u: goto label_1b2714;
            case 0x1B2718u: goto label_1b2718;
            case 0x1B271Cu: goto label_1b271c;
            case 0x1B2720u: goto label_1b2720;
            case 0x1B2724u: goto label_1b2724;
            case 0x1B2728u: goto label_1b2728;
            case 0x1B272Cu: goto label_1b272c;
            case 0x1B2730u: goto label_1b2730;
            case 0x1B2734u: goto label_1b2734;
            case 0x1B2738u: goto label_1b2738;
            case 0x1B273Cu: goto label_1b273c;
            case 0x1B2740u: goto label_1b2740;
            case 0x1B2744u: goto label_1b2744;
            case 0x1B2748u: goto label_1b2748;
            case 0x1B274Cu: goto label_1b274c;
            case 0x1B2750u: goto label_1b2750;
            case 0x1B2754u: goto label_1b2754;
            case 0x1B2758u: goto label_1b2758;
            case 0x1B275Cu: goto label_1b275c;
            case 0x1B2760u: goto label_1b2760;
            case 0x1B2764u: goto label_1b2764;
            case 0x1B2768u: goto label_1b2768;
            case 0x1B276Cu: goto label_1b276c;
            case 0x1B2770u: goto label_1b2770;
            case 0x1B2774u: goto label_1b2774;
            case 0x1B2778u: goto label_1b2778;
            case 0x1B277Cu: goto label_1b277c;
            case 0x1B2780u: goto label_1b2780;
            case 0x1B2784u: goto label_1b2784;
            case 0x1B2788u: goto label_1b2788;
            case 0x1B278Cu: goto label_1b278c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B278Cu;
label_1b278c:
    // 0x1b278c: 0x0
    ctx->pc = 0x1b278cu;
    // NOP
}
