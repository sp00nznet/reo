#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001DF2E0
// Address: 0x1df2e0 - 0x1df380
void sub_001DF2E0_0x1df2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1df2e0u;

label_1df2e0:
    // 0x1df2e0: 0x27bdffc0
    ctx->pc = 0x1df2e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_1df2e4:
    // 0x1df2e4: 0xffbe0030
    ctx->pc = 0x1df2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
label_1df2e8:
    // 0x1df2e8: 0xffbf0038
    ctx->pc = 0x1df2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_1df2ec:
    // 0x1df2ec: 0x3a0f02d
    ctx->pc = 0x1df2ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1df2f0:
    // 0x1df2f0: 0xafc40000
    ctx->pc = 0x1df2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_1df2f4:
    // 0x1df2f4: 0x24020027
    ctx->pc = 0x1df2f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 39));
label_1df2f8:
    // 0x1df2f8: 0xa3c20010
    ctx->pc = 0x1df2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 16), (uint8_t)GPR_U32(ctx, 2));
label_1df2fc:
    // 0x1df2fc: 0xafc00018
    ctx->pc = 0x1df2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 0));
label_1df300:
    // 0x1df300: 0x24020008
    ctx->pc = 0x1df300u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_1df304:
    // 0x1df304: 0xa7c20014
    ctx->pc = 0x1df304u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 20), (uint16_t)GPR_U32(ctx, 2));
label_1df308:
    // 0x1df308: 0x24021000
    ctx->pc = 0x1df308u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4096));
label_1df30c:
    // 0x1df30c: 0xa7c20016
    ctx->pc = 0x1df30cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 22), (uint16_t)GPR_U32(ctx, 2));
label_1df310:
    // 0x1df310: 0xa3c00011
    ctx->pc = 0x1df310u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 17), (uint8_t)GPR_U32(ctx, 0));
label_1df314:
    // 0x1df314: 0xa7c00012
    ctx->pc = 0x1df314u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 18), (uint16_t)GPR_U32(ctx, 0));
label_1df318:
    // 0x1df318: 0xafc0001c
    ctx->pc = 0x1df318u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 0));
label_1df31c:
    // 0x1df31c: 0x24020001
    ctx->pc = 0x1df31cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1df320:
    // 0x1df320: 0xafc20020
    ctx->pc = 0x1df320u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
label_1df324:
    // 0x1df324: 0x24020014
    ctx->pc = 0x1df324u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
label_1df328:
    // 0x1df328: 0xafc20024
    ctx->pc = 0x1df328u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
label_1df32c:
    // 0x1df32c: 0x8fc20000
    ctx->pc = 0x1df32cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df330:
    // 0x1df330: 0x8c4205b8
    ctx->pc = 0x1df330u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1464)));
label_1df334:
    // 0x1df334: 0x10400008
label_1df338:
    if (ctx->pc == 0x1DF338u) {
        ctx->pc = 0x1DF33Cu;
        goto label_1df33c;
    }
    ctx->pc = 0x1DF334u;
    {
        const bool branch_taken_0x1df334 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1df334) {
            ctx->pc = 0x1DF358u;
            goto label_1df358;
        }
    }
    ctx->pc = 0x1DF33Cu;
label_1df33c:
    // 0x1df33c: 0x8fc20000
    ctx->pc = 0x1df33cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df340:
    // 0x1df340: 0x27c30010
    ctx->pc = 0x1df340u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 16));
label_1df344:
    // 0x1df344: 0x27c50020
    ctx->pc = 0x1df344u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 30), 32));
label_1df348:
    // 0x1df348: 0x8c4205b8
    ctx->pc = 0x1df348u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1464)));
label_1df34c:
    // 0x1df34c: 0x60202d
    ctx->pc = 0x1df34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1df350:
    // 0x1df350: 0x40f809
label_1df354:
    if (ctx->pc == 0x1DF354u) {
        ctx->pc = 0x1DF358u;
        goto label_1df358;
    }
    ctx->pc = 0x1DF350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DF358u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF2E0u: goto label_1df2e0;
            case 0x1DF2E4u: goto label_1df2e4;
            case 0x1DF2E8u: goto label_1df2e8;
            case 0x1DF2ECu: goto label_1df2ec;
            case 0x1DF2F0u: goto label_1df2f0;
            case 0x1DF2F4u: goto label_1df2f4;
            case 0x1DF2F8u: goto label_1df2f8;
            case 0x1DF2FCu: goto label_1df2fc;
            case 0x1DF300u: goto label_1df300;
            case 0x1DF304u: goto label_1df304;
            case 0x1DF308u: goto label_1df308;
            case 0x1DF30Cu: goto label_1df30c;
            case 0x1DF310u: goto label_1df310;
            case 0x1DF314u: goto label_1df314;
            case 0x1DF318u: goto label_1df318;
            case 0x1DF31Cu: goto label_1df31c;
            case 0x1DF320u: goto label_1df320;
            case 0x1DF324u: goto label_1df324;
            case 0x1DF328u: goto label_1df328;
            case 0x1DF32Cu: goto label_1df32c;
            case 0x1DF330u: goto label_1df330;
            case 0x1DF334u: goto label_1df334;
            case 0x1DF338u: goto label_1df338;
            case 0x1DF33Cu: goto label_1df33c;
            case 0x1DF340u: goto label_1df340;
            case 0x1DF344u: goto label_1df344;
            case 0x1DF348u: goto label_1df348;
            case 0x1DF34Cu: goto label_1df34c;
            case 0x1DF350u: goto label_1df350;
            case 0x1DF354u: goto label_1df354;
            case 0x1DF358u: goto label_1df358;
            case 0x1DF35Cu: goto label_1df35c;
            case 0x1DF360u: goto label_1df360;
            case 0x1DF364u: goto label_1df364;
            case 0x1DF368u: goto label_1df368;
            case 0x1DF36Cu: goto label_1df36c;
            case 0x1DF370u: goto label_1df370;
            case 0x1DF374u: goto label_1df374;
            case 0x1DF378u: goto label_1df378;
            case 0x1DF37Cu: goto label_1df37c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DF358u; }
            if (ctx->pc != 0x1DF358u) { return; }
        }
    }
    ctx->pc = 0x1DF358u;
label_1df358:
    // 0x1df358: 0x8fc20000
    ctx->pc = 0x1df358u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df35c:
    // 0x1df35c: 0xac40007c
    ctx->pc = 0x1df35cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 0));
label_1df360:
    // 0x1df360: 0x8fc20000
    ctx->pc = 0x1df360u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1df364:
    // 0x1df364: 0xac400080
    ctx->pc = 0x1df364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
label_1df368:
    // 0x1df368: 0x3c0e82d
    ctx->pc = 0x1df368u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1df36c:
    // 0x1df36c: 0xdfbe0030
    ctx->pc = 0x1df36cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1df370:
    // 0x1df370: 0xdfbf0038
    ctx->pc = 0x1df370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1df374:
    // 0x1df374: 0x27bd0040
    ctx->pc = 0x1df374u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
label_1df378:
    // 0x1df378: 0x3e00008
label_1df37c:
    if (ctx->pc == 0x1DF37Cu) {
        ctx->pc = 0x1DF380u;
        goto label_fallthrough_0x1df378;
    }
    ctx->pc = 0x1DF378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF2E0u: goto label_1df2e0;
            case 0x1DF2E4u: goto label_1df2e4;
            case 0x1DF2E8u: goto label_1df2e8;
            case 0x1DF2ECu: goto label_1df2ec;
            case 0x1DF2F0u: goto label_1df2f0;
            case 0x1DF2F4u: goto label_1df2f4;
            case 0x1DF2F8u: goto label_1df2f8;
            case 0x1DF2FCu: goto label_1df2fc;
            case 0x1DF300u: goto label_1df300;
            case 0x1DF304u: goto label_1df304;
            case 0x1DF308u: goto label_1df308;
            case 0x1DF30Cu: goto label_1df30c;
            case 0x1DF310u: goto label_1df310;
            case 0x1DF314u: goto label_1df314;
            case 0x1DF318u: goto label_1df318;
            case 0x1DF31Cu: goto label_1df31c;
            case 0x1DF320u: goto label_1df320;
            case 0x1DF324u: goto label_1df324;
            case 0x1DF328u: goto label_1df328;
            case 0x1DF32Cu: goto label_1df32c;
            case 0x1DF330u: goto label_1df330;
            case 0x1DF334u: goto label_1df334;
            case 0x1DF338u: goto label_1df338;
            case 0x1DF33Cu: goto label_1df33c;
            case 0x1DF340u: goto label_1df340;
            case 0x1DF344u: goto label_1df344;
            case 0x1DF348u: goto label_1df348;
            case 0x1DF34Cu: goto label_1df34c;
            case 0x1DF350u: goto label_1df350;
            case 0x1DF354u: goto label_1df354;
            case 0x1DF358u: goto label_1df358;
            case 0x1DF35Cu: goto label_1df35c;
            case 0x1DF360u: goto label_1df360;
            case 0x1DF364u: goto label_1df364;
            case 0x1DF368u: goto label_1df368;
            case 0x1DF36Cu: goto label_1df36c;
            case 0x1DF370u: goto label_1df370;
            case 0x1DF374u: goto label_1df374;
            case 0x1DF378u: goto label_1df378;
            case 0x1DF37Cu: goto label_1df37c;
            default: break;
        }
        return;
    }
label_fallthrough_0x1df378:
    ctx->pc = 0x1DF380u;
}
