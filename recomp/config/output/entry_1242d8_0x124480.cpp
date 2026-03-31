#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1242d8
// Address: 0x1242d8 - 0x124480
void entry_1242d8_0x124480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1242d8u;

label_1242d8:
    // 0x1242d8: 0x27bdffe0
    ctx->pc = 0x1242d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1242dc:
    // 0x1242dc: 0x24020001
    ctx->pc = 0x1242dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1242e0:
    // 0x1242e0: 0xffb00000
    ctx->pc = 0x1242e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1242e4:
    // 0x1242e4: 0x80802d
    ctx->pc = 0x1242e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1242e8:
    // 0x1242e8: 0xffb10008
    ctx->pc = 0x1242e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1242ec:
    // 0x1242ec: 0x26110048
    ctx->pc = 0x1242ecu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 72));
label_1242f0:
    // 0x1242f0: 0xffb20010
    ctx->pc = 0x1242f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1242f4:
    // 0x1242f4: 0xffbf0018
    ctx->pc = 0x1242f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1242f8:
    // 0x1242f8: 0x8e030004
    ctx->pc = 0x1242f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1242fc:
    // 0x1242fc: 0x14620050
label_124300:
    if (ctx->pc == 0x124300u) {
        ctx->pc = 0x124300u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x124304u;
        goto label_124304;
    }
    ctx->pc = 0x1242FCu;
    {
        const bool branch_taken_0x1242fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x124300u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x1242fc) {
            ctx->pc = 0x124440u;
            goto label_124440;
        }
    }
    ctx->pc = 0x124304u;
label_124304:
    // 0x124304: 0xc04d3e6
label_124308:
    if (ctx->pc == 0x124308u) {
        ctx->pc = 0x124308u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x12430Cu;
        goto label_12430c;
    }
    ctx->pc = 0x124304u;
    SET_GPR_U32(ctx, 31, 0x12430Cu);
    ctx->pc = 0x124308u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x134F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134F98_0x134f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12430Cu; }
    }
    if (ctx->pc != 0x12430Cu) { return; }
    ctx->pc = 0x12430Cu;
label_12430c:
    // 0x12430c: 0x5440004c
label_124310:
    if (ctx->pc == 0x124310u) {
        ctx->pc = 0x124310u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x124314u;
        goto label_124314;
    }
    ctx->pc = 0x12430Cu;
    {
        const bool branch_taken_0x12430c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12430c) {
            ctx->pc = 0x124310u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x124440u;
            goto label_124440;
        }
    }
    ctx->pc = 0x124314u;
label_124314:
    // 0x124314: 0x8e04007c
    ctx->pc = 0x124314u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_124318:
    // 0x124318: 0x26050068
    ctx->pc = 0x124318u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 104));
label_12431c:
    // 0x12431c: 0x8e020078
    ctx->pc = 0x12431cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_124320:
    // 0x124320: 0x2606006c
    ctx->pc = 0x124320u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 108));
label_124324:
    // 0x124324: 0x40f809
label_124328:
    if (ctx->pc == 0x124328u) {
        ctx->pc = 0x124328u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x12432Cu;
        goto label_12432c;
    }
    ctx->pc = 0x124324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12432Cu);
        ctx->pc = 0x124328u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1242D8u: goto label_1242d8;
            case 0x1242DCu: goto label_1242dc;
            case 0x1242E0u: goto label_1242e0;
            case 0x1242E4u: goto label_1242e4;
            case 0x1242E8u: goto label_1242e8;
            case 0x1242ECu: goto label_1242ec;
            case 0x1242F0u: goto label_1242f0;
            case 0x1242F4u: goto label_1242f4;
            case 0x1242F8u: goto label_1242f8;
            case 0x1242FCu: goto label_1242fc;
            case 0x124300u: goto label_124300;
            case 0x124304u: goto label_124304;
            case 0x124308u: goto label_124308;
            case 0x12430Cu: goto label_12430c;
            case 0x124310u: goto label_124310;
            case 0x124314u: goto label_124314;
            case 0x124318u: goto label_124318;
            case 0x12431Cu: goto label_12431c;
            case 0x124320u: goto label_124320;
            case 0x124324u: goto label_124324;
            case 0x124328u: goto label_124328;
            case 0x12432Cu: goto label_12432c;
            case 0x124330u: goto label_124330;
            case 0x124334u: goto label_124334;
            case 0x124338u: goto label_124338;
            case 0x12433Cu: goto label_12433c;
            case 0x124340u: goto label_124340;
            case 0x124344u: goto label_124344;
            case 0x124348u: goto label_124348;
            case 0x12434Cu: goto label_12434c;
            case 0x124350u: goto label_124350;
            case 0x124354u: goto label_124354;
            case 0x124358u: goto label_124358;
            case 0x12435Cu: goto label_12435c;
            case 0x124360u: goto label_124360;
            case 0x124364u: goto label_124364;
            case 0x124368u: goto label_124368;
            case 0x12436Cu: goto label_12436c;
            case 0x124370u: goto label_124370;
            case 0x124374u: goto label_124374;
            case 0x124378u: goto label_124378;
            case 0x12437Cu: goto label_12437c;
            case 0x124380u: goto label_124380;
            case 0x124384u: goto label_124384;
            case 0x124388u: goto label_124388;
            case 0x12438Cu: goto label_12438c;
            case 0x124390u: goto label_124390;
            case 0x124394u: goto label_124394;
            case 0x124398u: goto label_124398;
            case 0x12439Cu: goto label_12439c;
            case 0x1243A0u: goto label_1243a0;
            case 0x1243A4u: goto label_1243a4;
            case 0x1243A8u: goto label_1243a8;
            case 0x1243ACu: goto label_1243ac;
            case 0x1243B0u: goto label_1243b0;
            case 0x1243B4u: goto label_1243b4;
            case 0x1243B8u: goto label_1243b8;
            case 0x1243BCu: goto label_1243bc;
            case 0x1243C0u: goto label_1243c0;
            case 0x1243C4u: goto label_1243c4;
            case 0x1243C8u: goto label_1243c8;
            case 0x1243CCu: goto label_1243cc;
            case 0x1243D0u: goto label_1243d0;
            case 0x1243D4u: goto label_1243d4;
            case 0x1243D8u: goto label_1243d8;
            case 0x1243DCu: goto label_1243dc;
            case 0x1243E0u: goto label_1243e0;
            case 0x1243E4u: goto label_1243e4;
            case 0x1243E8u: goto label_1243e8;
            case 0x1243ECu: goto label_1243ec;
            case 0x1243F0u: goto label_1243f0;
            case 0x1243F4u: goto label_1243f4;
            case 0x1243F8u: goto label_1243f8;
            case 0x1243FCu: goto label_1243fc;
            case 0x124400u: goto label_124400;
            case 0x124404u: goto label_124404;
            case 0x124408u: goto label_124408;
            case 0x12440Cu: goto label_12440c;
            case 0x124410u: goto label_124410;
            case 0x124414u: goto label_124414;
            case 0x124418u: goto label_124418;
            case 0x12441Cu: goto label_12441c;
            case 0x124420u: goto label_124420;
            case 0x124424u: goto label_124424;
            case 0x124428u: goto label_124428;
            case 0x12442Cu: goto label_12442c;
            case 0x124430u: goto label_124430;
            case 0x124434u: goto label_124434;
            case 0x124438u: goto label_124438;
            case 0x12443Cu: goto label_12443c;
            case 0x124440u: goto label_124440;
            case 0x124444u: goto label_124444;
            case 0x124448u: goto label_124448;
            case 0x12444Cu: goto label_12444c;
            case 0x124450u: goto label_124450;
            case 0x124454u: goto label_124454;
            case 0x124458u: goto label_124458;
            case 0x12445Cu: goto label_12445c;
            case 0x124460u: goto label_124460;
            case 0x124464u: goto label_124464;
            case 0x124468u: goto label_124468;
            case 0x12446Cu: goto label_12446c;
            case 0x124470u: goto label_124470;
            case 0x124474u: goto label_124474;
            case 0x124478u: goto label_124478;
            case 0x12447Cu: goto label_12447c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12432Cu; }
            if (ctx->pc != 0x12432Cu) { return; }
        }
    }
    ctx->pc = 0x12432Cu;
label_12432c:
    // 0x12432c: 0x8e240018
    ctx->pc = 0x12432cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_124330:
    // 0x124330: 0x8e270020
    ctx->pc = 0x124330u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_124334:
    // 0x124334: 0x24060002
    ctx->pc = 0x124334u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_124338:
    // 0x124338: 0x8e230024
    ctx->pc = 0x124338u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_12433c:
    // 0x12433c: 0x874823
    ctx->pc = 0x12433cu;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_124340:
    // 0x124340: 0x8204000e
    ctx->pc = 0x124340u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_124344:
    // 0x124344: 0x69102a
    ctx->pc = 0x124344u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 9)));
label_124348:
    // 0x124348: 0x8e250004
    ctx->pc = 0x124348u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12434c:
    // 0x12434c: 0x62480b
    ctx->pc = 0x12434cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 3));
label_124350:
    // 0x124350: 0x71840
    ctx->pc = 0x124350u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 1));
label_124354:
    // 0x124354: 0x8e2a0014
    ctx->pc = 0x124354u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_124358:
    // 0x124358: 0xa9102a
    ctx->pc = 0x124358u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 9)));
label_12435c:
    // 0x12435c: 0xa2480b
    ctx->pc = 0x12435cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 5));
label_124360:
    // 0x124360: 0x1435821
    ctx->pc = 0x124360u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_124364:
    // 0x124364: 0x1486001e
label_124368:
    if (ctx->pc == 0x124368u) {
        ctx->pc = 0x124368u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x12436Cu;
        goto label_12436c;
    }
    ctx->pc = 0x124364u;
    {
        const bool branch_taken_0x124364 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 6));
        ctx->pc = 0x124368u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x124364) {
            ctx->pc = 0x1243E0u;
            goto label_1243e0;
        }
    }
    ctx->pc = 0x12436Cu;
label_12436c:
    // 0x12436c: 0x8e22001c
    ctx->pc = 0x12436cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_124370:
    // 0x124370: 0x402d
    ctx->pc = 0x124370u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124374:
    // 0x124374: 0x471021
    ctx->pc = 0x124374u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_124378:
    // 0x124378: 0x21040
    ctx->pc = 0x124378u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_12437c:
    // 0x12437c: 0x19200029
label_124380:
    if (ctx->pc == 0x124380u) {
        ctx->pc = 0x124380u;
        SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->pc = 0x124384u;
        goto label_124384;
    }
    ctx->pc = 0x12437Cu;
    {
        const bool branch_taken_0x12437c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x124380u;
        SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        if (branch_taken_0x12437c) {
            ctx->pc = 0x124424u;
            goto label_124424;
        }
    }
    ctx->pc = 0x124384u;
label_124384:
    // 0x124384: 0x3c020021
    ctx->pc = 0x124384u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_124388:
    // 0x124388: 0x240382d
    ctx->pc = 0x124388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12438c:
    // 0x12438c: 0x244ab738
    ctx->pc = 0x12438cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 4294948664));
label_124390:
    // 0x124390: 0x90e20000
    ctx->pc = 0x124390u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_124394:
    // 0x124394: 0x82040
    ctx->pc = 0x124394u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 8), 1));
label_124398:
    // 0x124398: 0x8b2821
    ctx->pc = 0x124398u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_12439c:
    // 0x12439c: 0x8c2021
    ctx->pc = 0x12439cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_1243a0:
    // 0x1243a0: 0x21040
    ctx->pc = 0x1243a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_1243a4:
    // 0x1243a4: 0x25080001
    ctx->pc = 0x1243a4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_1243a8:
    // 0x1243a8: 0x4a1021
    ctx->pc = 0x1243a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1243ac:
    // 0x1243ac: 0x109302a
    ctx->pc = 0x1243acu;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
label_1243b0:
    // 0x1243b0: 0x94430000
    ctx->pc = 0x1243b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1243b4:
    // 0x1243b4: 0xa4a30000
    ctx->pc = 0x1243b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_1243b8:
    // 0x1243b8: 0x90e20001
    ctx->pc = 0x1243b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_1243bc:
    // 0x1243bc: 0x24e70002
    ctx->pc = 0x1243bcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
label_1243c0:
    // 0x1243c0: 0x21040
    ctx->pc = 0x1243c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_1243c4:
    // 0x1243c4: 0x4a1021
    ctx->pc = 0x1243c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1243c8:
    // 0x1243c8: 0x94430000
    ctx->pc = 0x1243c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1243cc:
    // 0x1243cc: 0x14c0fff0
label_1243d0:
    if (ctx->pc == 0x1243D0u) {
        ctx->pc = 0x1243D0u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1243D4u;
        goto label_1243d4;
    }
    ctx->pc = 0x1243CCu;
    {
        const bool branch_taken_0x1243cc = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1243D0u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1243cc) {
            ctx->pc = 0x124390u;
            goto label_124390;
        }
    }
    ctx->pc = 0x1243D4u;
label_1243d4:
    // 0x1243d4: 0x10000013
label_1243d8:
    if (ctx->pc == 0x1243D8u) {
        ctx->pc = 0x1243D8u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x1243DCu;
        goto label_1243dc;
    }
    ctx->pc = 0x1243D4u;
    {
        const bool branch_taken_0x1243d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1243D8u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x1243d4) {
            ctx->pc = 0x124424u;
            goto label_124424;
        }
    }
    ctx->pc = 0x1243DCu;
label_1243dc:
    // 0x1243dc: 0x0
    ctx->pc = 0x1243dcu;
    // NOP
label_1243e0:
    // 0x1243e0: 0x19200010
label_1243e4:
    if (ctx->pc == 0x1243E4u) {
        ctx->pc = 0x1243E4u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1243E8u;
        goto label_1243e8;
    }
    ctx->pc = 0x1243E0u;
    {
        const bool branch_taken_0x1243e0 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1243E4u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1243e0) {
            ctx->pc = 0x124424u;
            goto label_124424;
        }
    }
    ctx->pc = 0x1243E8u;
label_1243e8:
    // 0x1243e8: 0x3c020021
    ctx->pc = 0x1243e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_1243ec:
    // 0x1243ec: 0x160282d
    ctx->pc = 0x1243ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1243f0:
    // 0x1243f0: 0x2446b738
    ctx->pc = 0x1243f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294948664));
label_1243f4:
    // 0x1243f4: 0x0
    ctx->pc = 0x1243f4u;
    // NOP
label_1243f8:
    // 0x1243f8: 0x2481821
    ctx->pc = 0x1243f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_1243fc:
    // 0x1243fc: 0x25080001
    ctx->pc = 0x1243fcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_124400:
    // 0x124400: 0x90620000
    ctx->pc = 0x124400u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_124404:
    // 0x124404: 0x109202a
    ctx->pc = 0x124404u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
label_124408:
    // 0x124408: 0x21040
    ctx->pc = 0x124408u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_12440c:
    // 0x12440c: 0x461021
    ctx->pc = 0x12440cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_124410:
    // 0x124410: 0x94430000
    ctx->pc = 0x124410u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_124414:
    // 0x124414: 0xa4a30000
    ctx->pc = 0x124414u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_124418:
    // 0x124418: 0x1480fff7
label_12441c:
    if (ctx->pc == 0x12441Cu) {
        ctx->pc = 0x12441Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x124420u;
        goto label_124420;
    }
    ctx->pc = 0x124418u;
    {
        const bool branch_taken_0x124418 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12441Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x124418) {
            ctx->pc = 0x1243F8u;
            goto label_1243f8;
        }
    }
    ctx->pc = 0x124420u;
label_124420:
    // 0x124420: 0x9203000e
    ctx->pc = 0x124420u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_124424:
    // 0x124424: 0x31600
    ctx->pc = 0x124424u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
label_124428:
    // 0x124428: 0x24030002
    ctx->pc = 0x124428u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_12442c:
    // 0x12442c: 0x21603
    ctx->pc = 0x12442cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_124430:
    // 0x124430: 0xae030004
    ctx->pc = 0x124430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_124434:
    // 0x124434: 0x1221018
    ctx->pc = 0x124434u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_124438:
    // 0x124438: 0xae090090
    ctx->pc = 0x124438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_12443c:
    // 0x12443c: 0xae020094
    ctx->pc = 0x12443cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_124440:
    // 0x124440: 0x24020002
    ctx->pc = 0x124440u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_124444:
    // 0x124444: 0x54620009
label_124448:
    if (ctx->pc == 0x124448u) {
        ctx->pc = 0x124448u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x12444Cu;
        goto label_12444c;
    }
    ctx->pc = 0x124444u;
    {
        const bool branch_taken_0x124444 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x124444) {
            ctx->pc = 0x124448u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x12446Cu;
            goto label_12446c;
        }
    }
    ctx->pc = 0x12444Cu;
label_12444c:
    // 0x12444c: 0x8e030080
    ctx->pc = 0x12444cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_124450:
    // 0x124450: 0x8e040084
    ctx->pc = 0x124450u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_124454:
    // 0x124454: 0x8e050094
    ctx->pc = 0x124454u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_124458:
    // 0x124458: 0x60f809
label_12445c:
    if (ctx->pc == 0x12445Cu) {
        ctx->pc = 0x12445Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x124460u;
        goto label_124460;
    }
    ctx->pc = 0x124458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x124460u);
        ctx->pc = 0x12445Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1242D8u: goto label_1242d8;
            case 0x1242DCu: goto label_1242dc;
            case 0x1242E0u: goto label_1242e0;
            case 0x1242E4u: goto label_1242e4;
            case 0x1242E8u: goto label_1242e8;
            case 0x1242ECu: goto label_1242ec;
            case 0x1242F0u: goto label_1242f0;
            case 0x1242F4u: goto label_1242f4;
            case 0x1242F8u: goto label_1242f8;
            case 0x1242FCu: goto label_1242fc;
            case 0x124300u: goto label_124300;
            case 0x124304u: goto label_124304;
            case 0x124308u: goto label_124308;
            case 0x12430Cu: goto label_12430c;
            case 0x124310u: goto label_124310;
            case 0x124314u: goto label_124314;
            case 0x124318u: goto label_124318;
            case 0x12431Cu: goto label_12431c;
            case 0x124320u: goto label_124320;
            case 0x124324u: goto label_124324;
            case 0x124328u: goto label_124328;
            case 0x12432Cu: goto label_12432c;
            case 0x124330u: goto label_124330;
            case 0x124334u: goto label_124334;
            case 0x124338u: goto label_124338;
            case 0x12433Cu: goto label_12433c;
            case 0x124340u: goto label_124340;
            case 0x124344u: goto label_124344;
            case 0x124348u: goto label_124348;
            case 0x12434Cu: goto label_12434c;
            case 0x124350u: goto label_124350;
            case 0x124354u: goto label_124354;
            case 0x124358u: goto label_124358;
            case 0x12435Cu: goto label_12435c;
            case 0x124360u: goto label_124360;
            case 0x124364u: goto label_124364;
            case 0x124368u: goto label_124368;
            case 0x12436Cu: goto label_12436c;
            case 0x124370u: goto label_124370;
            case 0x124374u: goto label_124374;
            case 0x124378u: goto label_124378;
            case 0x12437Cu: goto label_12437c;
            case 0x124380u: goto label_124380;
            case 0x124384u: goto label_124384;
            case 0x124388u: goto label_124388;
            case 0x12438Cu: goto label_12438c;
            case 0x124390u: goto label_124390;
            case 0x124394u: goto label_124394;
            case 0x124398u: goto label_124398;
            case 0x12439Cu: goto label_12439c;
            case 0x1243A0u: goto label_1243a0;
            case 0x1243A4u: goto label_1243a4;
            case 0x1243A8u: goto label_1243a8;
            case 0x1243ACu: goto label_1243ac;
            case 0x1243B0u: goto label_1243b0;
            case 0x1243B4u: goto label_1243b4;
            case 0x1243B8u: goto label_1243b8;
            case 0x1243BCu: goto label_1243bc;
            case 0x1243C0u: goto label_1243c0;
            case 0x1243C4u: goto label_1243c4;
            case 0x1243C8u: goto label_1243c8;
            case 0x1243CCu: goto label_1243cc;
            case 0x1243D0u: goto label_1243d0;
            case 0x1243D4u: goto label_1243d4;
            case 0x1243D8u: goto label_1243d8;
            case 0x1243DCu: goto label_1243dc;
            case 0x1243E0u: goto label_1243e0;
            case 0x1243E4u: goto label_1243e4;
            case 0x1243E8u: goto label_1243e8;
            case 0x1243ECu: goto label_1243ec;
            case 0x1243F0u: goto label_1243f0;
            case 0x1243F4u: goto label_1243f4;
            case 0x1243F8u: goto label_1243f8;
            case 0x1243FCu: goto label_1243fc;
            case 0x124400u: goto label_124400;
            case 0x124404u: goto label_124404;
            case 0x124408u: goto label_124408;
            case 0x12440Cu: goto label_12440c;
            case 0x124410u: goto label_124410;
            case 0x124414u: goto label_124414;
            case 0x124418u: goto label_124418;
            case 0x12441Cu: goto label_12441c;
            case 0x124420u: goto label_124420;
            case 0x124424u: goto label_124424;
            case 0x124428u: goto label_124428;
            case 0x12442Cu: goto label_12442c;
            case 0x124430u: goto label_124430;
            case 0x124434u: goto label_124434;
            case 0x124438u: goto label_124438;
            case 0x12443Cu: goto label_12443c;
            case 0x124440u: goto label_124440;
            case 0x124444u: goto label_124444;
            case 0x124448u: goto label_124448;
            case 0x12444Cu: goto label_12444c;
            case 0x124450u: goto label_124450;
            case 0x124454u: goto label_124454;
            case 0x124458u: goto label_124458;
            case 0x12445Cu: goto label_12445c;
            case 0x124460u: goto label_124460;
            case 0x124464u: goto label_124464;
            case 0x124468u: goto label_124468;
            case 0x12446Cu: goto label_12446c;
            case 0x124470u: goto label_124470;
            case 0x124474u: goto label_124474;
            case 0x124478u: goto label_124478;
            case 0x12447Cu: goto label_12447c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x124460u; }
            if (ctx->pc != 0x124460u) { return; }
        }
    }
    ctx->pc = 0x124460u;
label_124460:
    // 0x124460: 0x24020003
    ctx->pc = 0x124460u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_124464:
    // 0x124464: 0xae020004
    ctx->pc = 0x124464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_124468:
    // 0x124468: 0xdfb00000
    ctx->pc = 0x124468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12446c:
    // 0x12446c: 0xdfb10008
    ctx->pc = 0x12446cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_124470:
    // 0x124470: 0xdfb20010
    ctx->pc = 0x124470u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_124474:
    // 0x124474: 0xdfbf0018
    ctx->pc = 0x124474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_124478:
    // 0x124478: 0x3e00008
label_12447c:
    if (ctx->pc == 0x12447Cu) {
        ctx->pc = 0x12447Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x124480u;
        goto label_fallthrough_0x124478;
    }
    ctx->pc = 0x124478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12447Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1242D8u: goto label_1242d8;
            case 0x1242DCu: goto label_1242dc;
            case 0x1242E0u: goto label_1242e0;
            case 0x1242E4u: goto label_1242e4;
            case 0x1242E8u: goto label_1242e8;
            case 0x1242ECu: goto label_1242ec;
            case 0x1242F0u: goto label_1242f0;
            case 0x1242F4u: goto label_1242f4;
            case 0x1242F8u: goto label_1242f8;
            case 0x1242FCu: goto label_1242fc;
            case 0x124300u: goto label_124300;
            case 0x124304u: goto label_124304;
            case 0x124308u: goto label_124308;
            case 0x12430Cu: goto label_12430c;
            case 0x124310u: goto label_124310;
            case 0x124314u: goto label_124314;
            case 0x124318u: goto label_124318;
            case 0x12431Cu: goto label_12431c;
            case 0x124320u: goto label_124320;
            case 0x124324u: goto label_124324;
            case 0x124328u: goto label_124328;
            case 0x12432Cu: goto label_12432c;
            case 0x124330u: goto label_124330;
            case 0x124334u: goto label_124334;
            case 0x124338u: goto label_124338;
            case 0x12433Cu: goto label_12433c;
            case 0x124340u: goto label_124340;
            case 0x124344u: goto label_124344;
            case 0x124348u: goto label_124348;
            case 0x12434Cu: goto label_12434c;
            case 0x124350u: goto label_124350;
            case 0x124354u: goto label_124354;
            case 0x124358u: goto label_124358;
            case 0x12435Cu: goto label_12435c;
            case 0x124360u: goto label_124360;
            case 0x124364u: goto label_124364;
            case 0x124368u: goto label_124368;
            case 0x12436Cu: goto label_12436c;
            case 0x124370u: goto label_124370;
            case 0x124374u: goto label_124374;
            case 0x124378u: goto label_124378;
            case 0x12437Cu: goto label_12437c;
            case 0x124380u: goto label_124380;
            case 0x124384u: goto label_124384;
            case 0x124388u: goto label_124388;
            case 0x12438Cu: goto label_12438c;
            case 0x124390u: goto label_124390;
            case 0x124394u: goto label_124394;
            case 0x124398u: goto label_124398;
            case 0x12439Cu: goto label_12439c;
            case 0x1243A0u: goto label_1243a0;
            case 0x1243A4u: goto label_1243a4;
            case 0x1243A8u: goto label_1243a8;
            case 0x1243ACu: goto label_1243ac;
            case 0x1243B0u: goto label_1243b0;
            case 0x1243B4u: goto label_1243b4;
            case 0x1243B8u: goto label_1243b8;
            case 0x1243BCu: goto label_1243bc;
            case 0x1243C0u: goto label_1243c0;
            case 0x1243C4u: goto label_1243c4;
            case 0x1243C8u: goto label_1243c8;
            case 0x1243CCu: goto label_1243cc;
            case 0x1243D0u: goto label_1243d0;
            case 0x1243D4u: goto label_1243d4;
            case 0x1243D8u: goto label_1243d8;
            case 0x1243DCu: goto label_1243dc;
            case 0x1243E0u: goto label_1243e0;
            case 0x1243E4u: goto label_1243e4;
            case 0x1243E8u: goto label_1243e8;
            case 0x1243ECu: goto label_1243ec;
            case 0x1243F0u: goto label_1243f0;
            case 0x1243F4u: goto label_1243f4;
            case 0x1243F8u: goto label_1243f8;
            case 0x1243FCu: goto label_1243fc;
            case 0x124400u: goto label_124400;
            case 0x124404u: goto label_124404;
            case 0x124408u: goto label_124408;
            case 0x12440Cu: goto label_12440c;
            case 0x124410u: goto label_124410;
            case 0x124414u: goto label_124414;
            case 0x124418u: goto label_124418;
            case 0x12441Cu: goto label_12441c;
            case 0x124420u: goto label_124420;
            case 0x124424u: goto label_124424;
            case 0x124428u: goto label_124428;
            case 0x12442Cu: goto label_12442c;
            case 0x124430u: goto label_124430;
            case 0x124434u: goto label_124434;
            case 0x124438u: goto label_124438;
            case 0x12443Cu: goto label_12443c;
            case 0x124440u: goto label_124440;
            case 0x124444u: goto label_124444;
            case 0x124448u: goto label_124448;
            case 0x12444Cu: goto label_12444c;
            case 0x124450u: goto label_124450;
            case 0x124454u: goto label_124454;
            case 0x124458u: goto label_124458;
            case 0x12445Cu: goto label_12445c;
            case 0x124460u: goto label_124460;
            case 0x124464u: goto label_124464;
            case 0x124468u: goto label_124468;
            case 0x12446Cu: goto label_12446c;
            case 0x124470u: goto label_124470;
            case 0x124474u: goto label_124474;
            case 0x124478u: goto label_124478;
            case 0x12447Cu: goto label_12447c;
            default: break;
        }
        return;
    }
label_fallthrough_0x124478:
    ctx->pc = 0x124480u;
}
