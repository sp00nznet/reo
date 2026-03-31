#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001632C0
// Address: 0x1632c0 - 0x163370
void sub_001632C0_0x1632c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1632c0u;

label_1632c0:
    // 0x1632c0: 0x27bdffd0
    ctx->pc = 0x1632c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1632c4:
    // 0x1632c4: 0xffb00000
    ctx->pc = 0x1632c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1632c8:
    // 0x1632c8: 0x249001ec
    ctx->pc = 0x1632c8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 492));
label_1632cc:
    // 0x1632cc: 0xffb10008
    ctx->pc = 0x1632ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1632d0:
    // 0x1632d0: 0xffb20010
    ctx->pc = 0x1632d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1632d4:
    // 0x1632d4: 0xffb30018
    ctx->pc = 0x1632d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1632d8:
    // 0x1632d8: 0xffbf0020
    ctx->pc = 0x1632d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1632dc:
    // 0x1632dc: 0xc058d08
label_1632e0:
    if (ctx->pc == 0x1632E0u) {
        ctx->pc = 0x1632E0u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->pc = 0x1632E4u;
        goto label_1632e4;
    }
    ctx->pc = 0x1632DCu;
    SET_GPR_U32(ctx, 31, 0x1632E4u);
    ctx->pc = 0x1632E0u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    ctx->pc = 0x163420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163420_0x163420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1632E4u; }
    }
    if (ctx->pc != 0x1632E4u) { return; }
    ctx->pc = 0x1632E4u;
label_1632e4:
    // 0x1632e4: 0x200202d
    ctx->pc = 0x1632e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1632e8:
    // 0x1632e8: 0x8e120014
    ctx->pc = 0x1632e8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1632ec:
    // 0x1632ec: 0x8e11000c
    ctx->pc = 0x1632ecu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1632f0:
    // 0x1632f0: 0xc058d10
label_1632f4:
    if (ctx->pc == 0x1632F4u) {
        ctx->pc = 0x1632F4u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x1632F8u;
        goto label_1632f8;
    }
    ctx->pc = 0x1632F0u;
    SET_GPR_U32(ctx, 31, 0x1632F8u);
    ctx->pc = 0x1632F4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x163440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163440_0x163440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1632F8u; }
    }
    if (ctx->pc != 0x1632F8u) { return; }
    ctx->pc = 0x1632F8u;
label_1632f8:
    // 0x1632f8: 0x24030001
    ctx->pc = 0x1632f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1632fc:
    // 0x1632fc: 0x54430016
label_163300:
    if (ctx->pc == 0x163300u) {
        ctx->pc = 0x163300u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x163304u;
        goto label_163304;
    }
    ctx->pc = 0x1632FCu;
    {
        const bool branch_taken_0x1632fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1632fc) {
            ctx->pc = 0x163300u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x163358u;
            goto label_163358;
        }
    }
    ctx->pc = 0x163304u;
label_163304:
    // 0x163304: 0x52400004
label_163308:
    if (ctx->pc == 0x163308u) {
        ctx->pc = 0x163308u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x16330Cu;
        goto label_16330c;
    }
    ctx->pc = 0x163304u;
    {
        const bool branch_taken_0x163304 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x163304) {
            ctx->pc = 0x163308u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x163318u;
            goto label_163318;
        }
    }
    ctx->pc = 0x16330Cu;
label_16330c:
    // 0x16330c: 0xc058bd2
label_163310:
    if (ctx->pc == 0x163310u) {
        ctx->pc = 0x163310u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163314u;
        goto label_163314;
    }
    ctx->pc = 0x16330Cu;
    SET_GPR_U32(ctx, 31, 0x163314u);
    ctx->pc = 0x163310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x162F48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00162F48_0x162f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163314u; }
    }
    if (ctx->pc != 0x163314u) { return; }
    ctx->pc = 0x163314u;
label_163314:
    // 0x163314: 0x8e230000
    ctx->pc = 0x163314u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_163318:
    // 0x163318: 0x8c620014
    ctx->pc = 0x163318u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_16331c:
    // 0x16331c: 0x40f809
label_163320:
    if (ctx->pc == 0x163320u) {
        ctx->pc = 0x163320u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163324u;
        goto label_163324;
    }
    ctx->pc = 0x16331Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163324u);
        ctx->pc = 0x163320u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1632C0u: goto label_1632c0;
            case 0x1632C4u: goto label_1632c4;
            case 0x1632C8u: goto label_1632c8;
            case 0x1632CCu: goto label_1632cc;
            case 0x1632D0u: goto label_1632d0;
            case 0x1632D4u: goto label_1632d4;
            case 0x1632D8u: goto label_1632d8;
            case 0x1632DCu: goto label_1632dc;
            case 0x1632E0u: goto label_1632e0;
            case 0x1632E4u: goto label_1632e4;
            case 0x1632E8u: goto label_1632e8;
            case 0x1632ECu: goto label_1632ec;
            case 0x1632F0u: goto label_1632f0;
            case 0x1632F4u: goto label_1632f4;
            case 0x1632F8u: goto label_1632f8;
            case 0x1632FCu: goto label_1632fc;
            case 0x163300u: goto label_163300;
            case 0x163304u: goto label_163304;
            case 0x163308u: goto label_163308;
            case 0x16330Cu: goto label_16330c;
            case 0x163310u: goto label_163310;
            case 0x163314u: goto label_163314;
            case 0x163318u: goto label_163318;
            case 0x16331Cu: goto label_16331c;
            case 0x163320u: goto label_163320;
            case 0x163324u: goto label_163324;
            case 0x163328u: goto label_163328;
            case 0x16332Cu: goto label_16332c;
            case 0x163330u: goto label_163330;
            case 0x163334u: goto label_163334;
            case 0x163338u: goto label_163338;
            case 0x16333Cu: goto label_16333c;
            case 0x163340u: goto label_163340;
            case 0x163344u: goto label_163344;
            case 0x163348u: goto label_163348;
            case 0x16334Cu: goto label_16334c;
            case 0x163350u: goto label_163350;
            case 0x163354u: goto label_163354;
            case 0x163358u: goto label_163358;
            case 0x16335Cu: goto label_16335c;
            case 0x163360u: goto label_163360;
            case 0x163364u: goto label_163364;
            case 0x163368u: goto label_163368;
            case 0x16336Cu: goto label_16336c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x163324u; }
            if (ctx->pc != 0x163324u) { return; }
        }
    }
    ctx->pc = 0x163324u;
label_163324:
    // 0x163324: 0x260202d
    ctx->pc = 0x163324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_163328:
    // 0x163328: 0x260500c0
    ctx->pc = 0x163328u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 192));
label_16332c:
    // 0x16332c: 0xdfb00000
    ctx->pc = 0x16332cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_163330:
    // 0x163330: 0x220302d
    ctx->pc = 0x163330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_163334:
    // 0x163334: 0xdfb10008
    ctx->pc = 0x163334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_163338:
    // 0x163338: 0xdfb20010
    ctx->pc = 0x163338u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16333c:
    // 0x16333c: 0x382d
    ctx->pc = 0x16333cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163340:
    // 0x163340: 0xdfb30018
    ctx->pc = 0x163340u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_163344:
    // 0x163344: 0x402d
    ctx->pc = 0x163344u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163348:
    // 0x163348: 0xdfbf0020
    ctx->pc = 0x163348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16334c:
    // 0x16334c: 0x805a7fc
label_163350:
    if (ctx->pc == 0x163350u) {
        ctx->pc = 0x163350u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x163354u;
        goto label_163354;
    }
    ctx->pc = 0x16334Cu;
    ctx->pc = 0x163350u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x169FF0u;
    sub_00169FF0_0x169ff0(rdram, ctx, runtime); return;
    ctx->pc = 0x163354u;
label_163354:
    // 0x163354: 0x0
    ctx->pc = 0x163354u;
    // NOP
label_163358:
    // 0x163358: 0xdfb10008
    ctx->pc = 0x163358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16335c:
    // 0x16335c: 0xdfb20010
    ctx->pc = 0x16335cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_163360:
    // 0x163360: 0xdfb30018
    ctx->pc = 0x163360u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_163364:
    // 0x163364: 0xdfbf0020
    ctx->pc = 0x163364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_163368:
    // 0x163368: 0x3e00008
label_16336c:
    if (ctx->pc == 0x16336Cu) {
        ctx->pc = 0x16336Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x163370u;
        goto label_fallthrough_0x163368;
    }
    ctx->pc = 0x163368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16336Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1632C0u: goto label_1632c0;
            case 0x1632C4u: goto label_1632c4;
            case 0x1632C8u: goto label_1632c8;
            case 0x1632CCu: goto label_1632cc;
            case 0x1632D0u: goto label_1632d0;
            case 0x1632D4u: goto label_1632d4;
            case 0x1632D8u: goto label_1632d8;
            case 0x1632DCu: goto label_1632dc;
            case 0x1632E0u: goto label_1632e0;
            case 0x1632E4u: goto label_1632e4;
            case 0x1632E8u: goto label_1632e8;
            case 0x1632ECu: goto label_1632ec;
            case 0x1632F0u: goto label_1632f0;
            case 0x1632F4u: goto label_1632f4;
            case 0x1632F8u: goto label_1632f8;
            case 0x1632FCu: goto label_1632fc;
            case 0x163300u: goto label_163300;
            case 0x163304u: goto label_163304;
            case 0x163308u: goto label_163308;
            case 0x16330Cu: goto label_16330c;
            case 0x163310u: goto label_163310;
            case 0x163314u: goto label_163314;
            case 0x163318u: goto label_163318;
            case 0x16331Cu: goto label_16331c;
            case 0x163320u: goto label_163320;
            case 0x163324u: goto label_163324;
            case 0x163328u: goto label_163328;
            case 0x16332Cu: goto label_16332c;
            case 0x163330u: goto label_163330;
            case 0x163334u: goto label_163334;
            case 0x163338u: goto label_163338;
            case 0x16333Cu: goto label_16333c;
            case 0x163340u: goto label_163340;
            case 0x163344u: goto label_163344;
            case 0x163348u: goto label_163348;
            case 0x16334Cu: goto label_16334c;
            case 0x163350u: goto label_163350;
            case 0x163354u: goto label_163354;
            case 0x163358u: goto label_163358;
            case 0x16335Cu: goto label_16335c;
            case 0x163360u: goto label_163360;
            case 0x163364u: goto label_163364;
            case 0x163368u: goto label_163368;
            case 0x16336Cu: goto label_16336c;
            default: break;
        }
        return;
    }
label_fallthrough_0x163368:
    ctx->pc = 0x163370u;
}
