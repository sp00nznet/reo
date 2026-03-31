#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001672E0
// Address: 0x1672e0 - 0x1673d8
void sub_001672E0_0x1672e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1672e0u;

label_1672e0:
    // 0x1672e0: 0x27bdffd0
    ctx->pc = 0x1672e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1672e4:
    // 0x1672e4: 0xffb00000
    ctx->pc = 0x1672e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1672e8:
    // 0x1672e8: 0x80802d
    ctx->pc = 0x1672e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1672ec:
    // 0x1672ec: 0xffb10008
    ctx->pc = 0x1672ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1672f0:
    // 0x1672f0: 0xe0882d
    ctx->pc = 0x1672f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1672f4:
    // 0x1672f4: 0xffb20010
    ctx->pc = 0x1672f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1672f8:
    // 0x1672f8: 0xa0902d
    ctx->pc = 0x1672f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1672fc:
    // 0x1672fc: 0xffb30018
    ctx->pc = 0x1672fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_167300:
    // 0x167300: 0xffb40020
    ctx->pc = 0x167300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_167304:
    // 0x167304: 0xffbf0028
    ctx->pc = 0x167304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_167308:
    // 0x167308: 0x8e030000
    ctx->pc = 0x167308u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16730c:
    // 0x16730c: 0x8c620024
    ctx->pc = 0x16730cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_167310:
    // 0x167310: 0x40f809
label_167314:
    if (ctx->pc == 0x167314u) {
        ctx->pc = 0x167314u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167318u;
        goto label_167318;
    }
    ctx->pc = 0x167310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167318u);
        ctx->pc = 0x167314u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1672E0u: goto label_1672e0;
            case 0x1672E4u: goto label_1672e4;
            case 0x1672E8u: goto label_1672e8;
            case 0x1672ECu: goto label_1672ec;
            case 0x1672F0u: goto label_1672f0;
            case 0x1672F4u: goto label_1672f4;
            case 0x1672F8u: goto label_1672f8;
            case 0x1672FCu: goto label_1672fc;
            case 0x167300u: goto label_167300;
            case 0x167304u: goto label_167304;
            case 0x167308u: goto label_167308;
            case 0x16730Cu: goto label_16730c;
            case 0x167310u: goto label_167310;
            case 0x167314u: goto label_167314;
            case 0x167318u: goto label_167318;
            case 0x16731Cu: goto label_16731c;
            case 0x167320u: goto label_167320;
            case 0x167324u: goto label_167324;
            case 0x167328u: goto label_167328;
            case 0x16732Cu: goto label_16732c;
            case 0x167330u: goto label_167330;
            case 0x167334u: goto label_167334;
            case 0x167338u: goto label_167338;
            case 0x16733Cu: goto label_16733c;
            case 0x167340u: goto label_167340;
            case 0x167344u: goto label_167344;
            case 0x167348u: goto label_167348;
            case 0x16734Cu: goto label_16734c;
            case 0x167350u: goto label_167350;
            case 0x167354u: goto label_167354;
            case 0x167358u: goto label_167358;
            case 0x16735Cu: goto label_16735c;
            case 0x167360u: goto label_167360;
            case 0x167364u: goto label_167364;
            case 0x167368u: goto label_167368;
            case 0x16736Cu: goto label_16736c;
            case 0x167370u: goto label_167370;
            case 0x167374u: goto label_167374;
            case 0x167378u: goto label_167378;
            case 0x16737Cu: goto label_16737c;
            case 0x167380u: goto label_167380;
            case 0x167384u: goto label_167384;
            case 0x167388u: goto label_167388;
            case 0x16738Cu: goto label_16738c;
            case 0x167390u: goto label_167390;
            case 0x167394u: goto label_167394;
            case 0x167398u: goto label_167398;
            case 0x16739Cu: goto label_16739c;
            case 0x1673A0u: goto label_1673a0;
            case 0x1673A4u: goto label_1673a4;
            case 0x1673A8u: goto label_1673a8;
            case 0x1673ACu: goto label_1673ac;
            case 0x1673B0u: goto label_1673b0;
            case 0x1673B4u: goto label_1673b4;
            case 0x1673B8u: goto label_1673b8;
            case 0x1673BCu: goto label_1673bc;
            case 0x1673C0u: goto label_1673c0;
            case 0x1673C4u: goto label_1673c4;
            case 0x1673C8u: goto label_1673c8;
            case 0x1673CCu: goto label_1673cc;
            case 0x1673D0u: goto label_1673d0;
            case 0x1673D4u: goto label_1673d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x167318u; }
            if (ctx->pc != 0x167318u) { return; }
        }
    }
    ctx->pc = 0x167318u;
label_167318:
    // 0x167318: 0x3c067fff
    ctx->pc = 0x167318u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
label_16731c:
    // 0x16731c: 0x40a02d
    ctx->pc = 0x16731cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167320:
    // 0x167320: 0x8e020000
    ctx->pc = 0x167320u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_167324:
    // 0x167324: 0x200202d
    ctx->pc = 0x167324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167328:
    // 0x167328: 0x240282d
    ctx->pc = 0x167328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16732c:
    // 0x16732c: 0x8c430018
    ctx->pc = 0x16732cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_167330:
    // 0x167330: 0x34c6ffff
    ctx->pc = 0x167330u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
label_167334:
    // 0x167334: 0x60f809
label_167338:
    if (ctx->pc == 0x167338u) {
        ctx->pc = 0x167338u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16733Cu;
        goto label_16733c;
    }
    ctx->pc = 0x167334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16733Cu);
        ctx->pc = 0x167338u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1672E0u: goto label_1672e0;
            case 0x1672E4u: goto label_1672e4;
            case 0x1672E8u: goto label_1672e8;
            case 0x1672ECu: goto label_1672ec;
            case 0x1672F0u: goto label_1672f0;
            case 0x1672F4u: goto label_1672f4;
            case 0x1672F8u: goto label_1672f8;
            case 0x1672FCu: goto label_1672fc;
            case 0x167300u: goto label_167300;
            case 0x167304u: goto label_167304;
            case 0x167308u: goto label_167308;
            case 0x16730Cu: goto label_16730c;
            case 0x167310u: goto label_167310;
            case 0x167314u: goto label_167314;
            case 0x167318u: goto label_167318;
            case 0x16731Cu: goto label_16731c;
            case 0x167320u: goto label_167320;
            case 0x167324u: goto label_167324;
            case 0x167328u: goto label_167328;
            case 0x16732Cu: goto label_16732c;
            case 0x167330u: goto label_167330;
            case 0x167334u: goto label_167334;
            case 0x167338u: goto label_167338;
            case 0x16733Cu: goto label_16733c;
            case 0x167340u: goto label_167340;
            case 0x167344u: goto label_167344;
            case 0x167348u: goto label_167348;
            case 0x16734Cu: goto label_16734c;
            case 0x167350u: goto label_167350;
            case 0x167354u: goto label_167354;
            case 0x167358u: goto label_167358;
            case 0x16735Cu: goto label_16735c;
            case 0x167360u: goto label_167360;
            case 0x167364u: goto label_167364;
            case 0x167368u: goto label_167368;
            case 0x16736Cu: goto label_16736c;
            case 0x167370u: goto label_167370;
            case 0x167374u: goto label_167374;
            case 0x167378u: goto label_167378;
            case 0x16737Cu: goto label_16737c;
            case 0x167380u: goto label_167380;
            case 0x167384u: goto label_167384;
            case 0x167388u: goto label_167388;
            case 0x16738Cu: goto label_16738c;
            case 0x167390u: goto label_167390;
            case 0x167394u: goto label_167394;
            case 0x167398u: goto label_167398;
            case 0x16739Cu: goto label_16739c;
            case 0x1673A0u: goto label_1673a0;
            case 0x1673A4u: goto label_1673a4;
            case 0x1673A8u: goto label_1673a8;
            case 0x1673ACu: goto label_1673ac;
            case 0x1673B0u: goto label_1673b0;
            case 0x1673B4u: goto label_1673b4;
            case 0x1673B8u: goto label_1673b8;
            case 0x1673BCu: goto label_1673bc;
            case 0x1673C0u: goto label_1673c0;
            case 0x1673C4u: goto label_1673c4;
            case 0x1673C8u: goto label_1673c8;
            case 0x1673CCu: goto label_1673cc;
            case 0x1673D0u: goto label_1673d0;
            case 0x1673D4u: goto label_1673d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16733Cu; }
            if (ctx->pc != 0x16733Cu) { return; }
        }
    }
    ctx->pc = 0x16733Cu;
label_16733c:
    // 0x16733c: 0x200202d
    ctx->pc = 0x16733cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167340:
    // 0x167340: 0x8e620004
    ctx->pc = 0x167340u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_167344:
    // 0x167344: 0x3c067fff
    ctx->pc = 0x167344u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
label_167348:
    // 0x167348: 0x240282d
    ctx->pc = 0x167348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16734c:
    // 0x16734c: 0x34c6ffff
    ctx->pc = 0x16734cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
label_167350:
    // 0x167350: 0x54102a
    ctx->pc = 0x167350u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 20)));
label_167354:
    // 0x167354: 0x1040000e
label_167358:
    if (ctx->pc == 0x167358u) {
        ctx->pc = 0x167358u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16735Cu;
        goto label_16735c;
    }
    ctx->pc = 0x167354u;
    {
        const bool branch_taken_0x167354 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x167358u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x167354) {
            ctx->pc = 0x167390u;
            goto label_167390;
        }
    }
    ctx->pc = 0x16735Cu;
label_16735c:
    // 0x16735c: 0x8e020000
    ctx->pc = 0x16735cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_167360:
    // 0x167360: 0x8c430018
    ctx->pc = 0x167360u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_167364:
    // 0x167364: 0x60f809
label_167368:
    if (ctx->pc == 0x167368u) {
        ctx->pc = 0x16736Cu;
        goto label_16736c;
    }
    ctx->pc = 0x167364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16736Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1672E0u: goto label_1672e0;
            case 0x1672E4u: goto label_1672e4;
            case 0x1672E8u: goto label_1672e8;
            case 0x1672ECu: goto label_1672ec;
            case 0x1672F0u: goto label_1672f0;
            case 0x1672F4u: goto label_1672f4;
            case 0x1672F8u: goto label_1672f8;
            case 0x1672FCu: goto label_1672fc;
            case 0x167300u: goto label_167300;
            case 0x167304u: goto label_167304;
            case 0x167308u: goto label_167308;
            case 0x16730Cu: goto label_16730c;
            case 0x167310u: goto label_167310;
            case 0x167314u: goto label_167314;
            case 0x167318u: goto label_167318;
            case 0x16731Cu: goto label_16731c;
            case 0x167320u: goto label_167320;
            case 0x167324u: goto label_167324;
            case 0x167328u: goto label_167328;
            case 0x16732Cu: goto label_16732c;
            case 0x167330u: goto label_167330;
            case 0x167334u: goto label_167334;
            case 0x167338u: goto label_167338;
            case 0x16733Cu: goto label_16733c;
            case 0x167340u: goto label_167340;
            case 0x167344u: goto label_167344;
            case 0x167348u: goto label_167348;
            case 0x16734Cu: goto label_16734c;
            case 0x167350u: goto label_167350;
            case 0x167354u: goto label_167354;
            case 0x167358u: goto label_167358;
            case 0x16735Cu: goto label_16735c;
            case 0x167360u: goto label_167360;
            case 0x167364u: goto label_167364;
            case 0x167368u: goto label_167368;
            case 0x16736Cu: goto label_16736c;
            case 0x167370u: goto label_167370;
            case 0x167374u: goto label_167374;
            case 0x167378u: goto label_167378;
            case 0x16737Cu: goto label_16737c;
            case 0x167380u: goto label_167380;
            case 0x167384u: goto label_167384;
            case 0x167388u: goto label_167388;
            case 0x16738Cu: goto label_16738c;
            case 0x167390u: goto label_167390;
            case 0x167394u: goto label_167394;
            case 0x167398u: goto label_167398;
            case 0x16739Cu: goto label_16739c;
            case 0x1673A0u: goto label_1673a0;
            case 0x1673A4u: goto label_1673a4;
            case 0x1673A8u: goto label_1673a8;
            case 0x1673ACu: goto label_1673ac;
            case 0x1673B0u: goto label_1673b0;
            case 0x1673B4u: goto label_1673b4;
            case 0x1673B8u: goto label_1673b8;
            case 0x1673BCu: goto label_1673bc;
            case 0x1673C0u: goto label_1673c0;
            case 0x1673C4u: goto label_1673c4;
            case 0x1673C8u: goto label_1673c8;
            case 0x1673CCu: goto label_1673cc;
            case 0x1673D0u: goto label_1673d0;
            case 0x1673D4u: goto label_1673d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16736Cu; }
            if (ctx->pc != 0x16736Cu) { return; }
        }
    }
    ctx->pc = 0x16736Cu;
label_16736c:
    // 0x16736c: 0x8e050000
    ctx->pc = 0x16736cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_167370:
    // 0x167370: 0x220302d
    ctx->pc = 0x167370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_167374:
    // 0x167374: 0x200202d
    ctx->pc = 0x167374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167378:
    // 0x167378: 0x8ca2001c
    ctx->pc = 0x167378u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_16737c:
    // 0x16737c: 0x40f809
label_167380:
    if (ctx->pc == 0x167380u) {
        ctx->pc = 0x167380u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167384u;
        goto label_167384;
    }
    ctx->pc = 0x16737Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167384u);
        ctx->pc = 0x167380u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1672E0u: goto label_1672e0;
            case 0x1672E4u: goto label_1672e4;
            case 0x1672E8u: goto label_1672e8;
            case 0x1672ECu: goto label_1672ec;
            case 0x1672F0u: goto label_1672f0;
            case 0x1672F4u: goto label_1672f4;
            case 0x1672F8u: goto label_1672f8;
            case 0x1672FCu: goto label_1672fc;
            case 0x167300u: goto label_167300;
            case 0x167304u: goto label_167304;
            case 0x167308u: goto label_167308;
            case 0x16730Cu: goto label_16730c;
            case 0x167310u: goto label_167310;
            case 0x167314u: goto label_167314;
            case 0x167318u: goto label_167318;
            case 0x16731Cu: goto label_16731c;
            case 0x167320u: goto label_167320;
            case 0x167324u: goto label_167324;
            case 0x167328u: goto label_167328;
            case 0x16732Cu: goto label_16732c;
            case 0x167330u: goto label_167330;
            case 0x167334u: goto label_167334;
            case 0x167338u: goto label_167338;
            case 0x16733Cu: goto label_16733c;
            case 0x167340u: goto label_167340;
            case 0x167344u: goto label_167344;
            case 0x167348u: goto label_167348;
            case 0x16734Cu: goto label_16734c;
            case 0x167350u: goto label_167350;
            case 0x167354u: goto label_167354;
            case 0x167358u: goto label_167358;
            case 0x16735Cu: goto label_16735c;
            case 0x167360u: goto label_167360;
            case 0x167364u: goto label_167364;
            case 0x167368u: goto label_167368;
            case 0x16736Cu: goto label_16736c;
            case 0x167370u: goto label_167370;
            case 0x167374u: goto label_167374;
            case 0x167378u: goto label_167378;
            case 0x16737Cu: goto label_16737c;
            case 0x167380u: goto label_167380;
            case 0x167384u: goto label_167384;
            case 0x167388u: goto label_167388;
            case 0x16738Cu: goto label_16738c;
            case 0x167390u: goto label_167390;
            case 0x167394u: goto label_167394;
            case 0x167398u: goto label_167398;
            case 0x16739Cu: goto label_16739c;
            case 0x1673A0u: goto label_1673a0;
            case 0x1673A4u: goto label_1673a4;
            case 0x1673A8u: goto label_1673a8;
            case 0x1673ACu: goto label_1673ac;
            case 0x1673B0u: goto label_1673b0;
            case 0x1673B4u: goto label_1673b4;
            case 0x1673B8u: goto label_1673b8;
            case 0x1673BCu: goto label_1673bc;
            case 0x1673C0u: goto label_1673c0;
            case 0x1673C4u: goto label_1673c4;
            case 0x1673C8u: goto label_1673c8;
            case 0x1673CCu: goto label_1673cc;
            case 0x1673D0u: goto label_1673d0;
            case 0x1673D4u: goto label_1673d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x167384u; }
            if (ctx->pc != 0x167384u) { return; }
        }
    }
    ctx->pc = 0x167384u;
label_167384:
    // 0x167384: 0x10000005
label_167388:
    if (ctx->pc == 0x167388u) {
        ctx->pc = 0x167388u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x16738Cu;
        goto label_16738c;
    }
    ctx->pc = 0x167384u;
    {
        const bool branch_taken_0x167384 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x167388u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x167384) {
            ctx->pc = 0x16739Cu;
            goto label_16739c;
        }
    }
    ctx->pc = 0x16738Cu;
label_16738c:
    // 0x16738c: 0x0
    ctx->pc = 0x16738cu;
    // NOP
label_167390:
    // 0x167390: 0xae200004
    ctx->pc = 0x167390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_167394:
    // 0x167394: 0xae200000
    ctx->pc = 0x167394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_167398:
    // 0x167398: 0x8e030000
    ctx->pc = 0x167398u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16739c:
    // 0x16739c: 0x200202d
    ctx->pc = 0x16739cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1673a0:
    // 0x1673a0: 0x240282d
    ctx->pc = 0x1673a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1673a4:
    // 0x1673a4: 0x8c62001c
    ctx->pc = 0x1673a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1673a8:
    // 0x1673a8: 0x40f809
label_1673ac:
    if (ctx->pc == 0x1673ACu) {
        ctx->pc = 0x1673ACu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1673B0u;
        goto label_1673b0;
    }
    ctx->pc = 0x1673A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1673B0u);
        ctx->pc = 0x1673ACu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1672E0u: goto label_1672e0;
            case 0x1672E4u: goto label_1672e4;
            case 0x1672E8u: goto label_1672e8;
            case 0x1672ECu: goto label_1672ec;
            case 0x1672F0u: goto label_1672f0;
            case 0x1672F4u: goto label_1672f4;
            case 0x1672F8u: goto label_1672f8;
            case 0x1672FCu: goto label_1672fc;
            case 0x167300u: goto label_167300;
            case 0x167304u: goto label_167304;
            case 0x167308u: goto label_167308;
            case 0x16730Cu: goto label_16730c;
            case 0x167310u: goto label_167310;
            case 0x167314u: goto label_167314;
            case 0x167318u: goto label_167318;
            case 0x16731Cu: goto label_16731c;
            case 0x167320u: goto label_167320;
            case 0x167324u: goto label_167324;
            case 0x167328u: goto label_167328;
            case 0x16732Cu: goto label_16732c;
            case 0x167330u: goto label_167330;
            case 0x167334u: goto label_167334;
            case 0x167338u: goto label_167338;
            case 0x16733Cu: goto label_16733c;
            case 0x167340u: goto label_167340;
            case 0x167344u: goto label_167344;
            case 0x167348u: goto label_167348;
            case 0x16734Cu: goto label_16734c;
            case 0x167350u: goto label_167350;
            case 0x167354u: goto label_167354;
            case 0x167358u: goto label_167358;
            case 0x16735Cu: goto label_16735c;
            case 0x167360u: goto label_167360;
            case 0x167364u: goto label_167364;
            case 0x167368u: goto label_167368;
            case 0x16736Cu: goto label_16736c;
            case 0x167370u: goto label_167370;
            case 0x167374u: goto label_167374;
            case 0x167378u: goto label_167378;
            case 0x16737Cu: goto label_16737c;
            case 0x167380u: goto label_167380;
            case 0x167384u: goto label_167384;
            case 0x167388u: goto label_167388;
            case 0x16738Cu: goto label_16738c;
            case 0x167390u: goto label_167390;
            case 0x167394u: goto label_167394;
            case 0x167398u: goto label_167398;
            case 0x16739Cu: goto label_16739c;
            case 0x1673A0u: goto label_1673a0;
            case 0x1673A4u: goto label_1673a4;
            case 0x1673A8u: goto label_1673a8;
            case 0x1673ACu: goto label_1673ac;
            case 0x1673B0u: goto label_1673b0;
            case 0x1673B4u: goto label_1673b4;
            case 0x1673B8u: goto label_1673b8;
            case 0x1673BCu: goto label_1673bc;
            case 0x1673C0u: goto label_1673c0;
            case 0x1673C4u: goto label_1673c4;
            case 0x1673C8u: goto label_1673c8;
            case 0x1673CCu: goto label_1673cc;
            case 0x1673D0u: goto label_1673d0;
            case 0x1673D4u: goto label_1673d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1673B0u; }
            if (ctx->pc != 0x1673B0u) { return; }
        }
    }
    ctx->pc = 0x1673B0u;
label_1673b0:
    // 0x1673b0: 0x280102d
    ctx->pc = 0x1673b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1673b4:
    // 0x1673b4: 0xdfb00000
    ctx->pc = 0x1673b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1673b8:
    // 0x1673b8: 0xdfb10008
    ctx->pc = 0x1673b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1673bc:
    // 0x1673bc: 0xdfb20010
    ctx->pc = 0x1673bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1673c0:
    // 0x1673c0: 0xdfb30018
    ctx->pc = 0x1673c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1673c4:
    // 0x1673c4: 0xdfb40020
    ctx->pc = 0x1673c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1673c8:
    // 0x1673c8: 0xdfbf0028
    ctx->pc = 0x1673c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1673cc:
    // 0x1673cc: 0x3e00008
label_1673d0:
    if (ctx->pc == 0x1673D0u) {
        ctx->pc = 0x1673D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1673D4u;
        goto label_1673d4;
    }
    ctx->pc = 0x1673CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1673D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1672E0u: goto label_1672e0;
            case 0x1672E4u: goto label_1672e4;
            case 0x1672E8u: goto label_1672e8;
            case 0x1672ECu: goto label_1672ec;
            case 0x1672F0u: goto label_1672f0;
            case 0x1672F4u: goto label_1672f4;
            case 0x1672F8u: goto label_1672f8;
            case 0x1672FCu: goto label_1672fc;
            case 0x167300u: goto label_167300;
            case 0x167304u: goto label_167304;
            case 0x167308u: goto label_167308;
            case 0x16730Cu: goto label_16730c;
            case 0x167310u: goto label_167310;
            case 0x167314u: goto label_167314;
            case 0x167318u: goto label_167318;
            case 0x16731Cu: goto label_16731c;
            case 0x167320u: goto label_167320;
            case 0x167324u: goto label_167324;
            case 0x167328u: goto label_167328;
            case 0x16732Cu: goto label_16732c;
            case 0x167330u: goto label_167330;
            case 0x167334u: goto label_167334;
            case 0x167338u: goto label_167338;
            case 0x16733Cu: goto label_16733c;
            case 0x167340u: goto label_167340;
            case 0x167344u: goto label_167344;
            case 0x167348u: goto label_167348;
            case 0x16734Cu: goto label_16734c;
            case 0x167350u: goto label_167350;
            case 0x167354u: goto label_167354;
            case 0x167358u: goto label_167358;
            case 0x16735Cu: goto label_16735c;
            case 0x167360u: goto label_167360;
            case 0x167364u: goto label_167364;
            case 0x167368u: goto label_167368;
            case 0x16736Cu: goto label_16736c;
            case 0x167370u: goto label_167370;
            case 0x167374u: goto label_167374;
            case 0x167378u: goto label_167378;
            case 0x16737Cu: goto label_16737c;
            case 0x167380u: goto label_167380;
            case 0x167384u: goto label_167384;
            case 0x167388u: goto label_167388;
            case 0x16738Cu: goto label_16738c;
            case 0x167390u: goto label_167390;
            case 0x167394u: goto label_167394;
            case 0x167398u: goto label_167398;
            case 0x16739Cu: goto label_16739c;
            case 0x1673A0u: goto label_1673a0;
            case 0x1673A4u: goto label_1673a4;
            case 0x1673A8u: goto label_1673a8;
            case 0x1673ACu: goto label_1673ac;
            case 0x1673B0u: goto label_1673b0;
            case 0x1673B4u: goto label_1673b4;
            case 0x1673B8u: goto label_1673b8;
            case 0x1673BCu: goto label_1673bc;
            case 0x1673C0u: goto label_1673c0;
            case 0x1673C4u: goto label_1673c4;
            case 0x1673C8u: goto label_1673c8;
            case 0x1673CCu: goto label_1673cc;
            case 0x1673D0u: goto label_1673d0;
            case 0x1673D4u: goto label_1673d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1673D4u;
label_1673d4:
    // 0x1673d4: 0x0
    ctx->pc = 0x1673d4u;
    // NOP
}
