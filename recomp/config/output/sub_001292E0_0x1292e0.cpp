#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001292E0
// Address: 0x1292e0 - 0x129350
void sub_001292E0_0x1292e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1292e0u;

label_1292e0:
    // 0x1292e0: 0x27bdfff0
    ctx->pc = 0x1292e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1292e4:
    // 0x1292e4: 0xffb00000
    ctx->pc = 0x1292e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1292e8:
    // 0x1292e8: 0x80802d
    ctx->pc = 0x1292e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1292ec:
    // 0x1292ec: 0xffbf0008
    ctx->pc = 0x1292ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1292f0:
    // 0x1292f0: 0x8e050008
    ctx->pc = 0x1292f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1292f4:
    // 0x1292f4: 0x50a00013
label_1292f8:
    if (ctx->pc == 0x1292F8u) {
        ctx->pc = 0x1292F8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1292FCu;
        goto label_1292fc;
    }
    ctx->pc = 0x1292F4u;
    {
        const bool branch_taken_0x1292f4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x1292f4) {
            ctx->pc = 0x1292F8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x129344u;
            goto label_129344;
        }
    }
    ctx->pc = 0x1292FCu;
label_1292fc:
    // 0x1292fc: 0x82020002
    ctx->pc = 0x1292fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_129300:
    // 0x129300: 0x54400010
label_129304:
    if (ctx->pc == 0x129304u) {
        ctx->pc = 0x129304u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x129308u;
        goto label_129308;
    }
    ctx->pc = 0x129300u;
    {
        const bool branch_taken_0x129300 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x129300) {
            ctx->pc = 0x129304u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x129344u;
            goto label_129344;
        }
    }
    ctx->pc = 0x129308u;
label_129308:
    // 0x129308: 0x3c020021
    ctx->pc = 0x129308u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_12930c:
    // 0x12930c: 0x24040001
    ctx->pc = 0x12930cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_129310:
    // 0x129310: 0x8c43d100
    ctx->pc = 0x129310u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294955264)));
label_129314:
    // 0x129314: 0x54640006
label_129318:
    if (ctx->pc == 0x129318u) {
        ctx->pc = 0x129318u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x12931Cu;
        goto label_12931c;
    }
    ctx->pc = 0x129314u;
    {
        const bool branch_taken_0x129314 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x129314) {
            ctx->pc = 0x129318u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->pc = 0x129330u;
            goto label_129330;
        }
    }
    ctx->pc = 0x12931Cu;
label_12931c:
    // 0x12931c: 0x8e050028
    ctx->pc = 0x12931cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_129320:
    // 0x129320: 0xc04a0ca
label_129324:
    if (ctx->pc == 0x129324u) {
        ctx->pc = 0x129324u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x129328u;
        goto label_129328;
    }
    ctx->pc = 0x129320u;
    SET_GPR_U32(ctx, 31, 0x129328u);
    ctx->pc = 0x129324u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x128328u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00128328_0x128328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129328u; }
    }
    if (ctx->pc != 0x129328u) { return; }
    ctx->pc = 0x129328u;
label_129328:
    // 0x129328: 0x8e050008
    ctx->pc = 0x129328u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_12932c:
    // 0x12932c: 0x8ca30000
    ctx->pc = 0x12932cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_129330:
    // 0x129330: 0xae000008
    ctx->pc = 0x129330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_129334:
    // 0x129334: 0x8c62000c
    ctx->pc = 0x129334u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_129338:
    // 0x129338: 0x40f809
label_12933c:
    if (ctx->pc == 0x12933Cu) {
        ctx->pc = 0x12933Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x129340u;
        goto label_129340;
    }
    ctx->pc = 0x129338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x129340u);
        ctx->pc = 0x12933Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1292E0u: goto label_1292e0;
            case 0x1292E4u: goto label_1292e4;
            case 0x1292E8u: goto label_1292e8;
            case 0x1292ECu: goto label_1292ec;
            case 0x1292F0u: goto label_1292f0;
            case 0x1292F4u: goto label_1292f4;
            case 0x1292F8u: goto label_1292f8;
            case 0x1292FCu: goto label_1292fc;
            case 0x129300u: goto label_129300;
            case 0x129304u: goto label_129304;
            case 0x129308u: goto label_129308;
            case 0x12930Cu: goto label_12930c;
            case 0x129310u: goto label_129310;
            case 0x129314u: goto label_129314;
            case 0x129318u: goto label_129318;
            case 0x12931Cu: goto label_12931c;
            case 0x129320u: goto label_129320;
            case 0x129324u: goto label_129324;
            case 0x129328u: goto label_129328;
            case 0x12932Cu: goto label_12932c;
            case 0x129330u: goto label_129330;
            case 0x129334u: goto label_129334;
            case 0x129338u: goto label_129338;
            case 0x12933Cu: goto label_12933c;
            case 0x129340u: goto label_129340;
            case 0x129344u: goto label_129344;
            case 0x129348u: goto label_129348;
            case 0x12934Cu: goto label_12934c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x129340u; }
            if (ctx->pc != 0x129340u) { return; }
        }
    }
    ctx->pc = 0x129340u;
label_129340:
    // 0x129340: 0xdfb00000
    ctx->pc = 0x129340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_129344:
    // 0x129344: 0xdfbf0008
    ctx->pc = 0x129344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_129348:
    // 0x129348: 0x3e00008
label_12934c:
    if (ctx->pc == 0x12934Cu) {
        ctx->pc = 0x12934Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x129350u;
        goto label_fallthrough_0x129348;
    }
    ctx->pc = 0x129348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12934Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1292E0u: goto label_1292e0;
            case 0x1292E4u: goto label_1292e4;
            case 0x1292E8u: goto label_1292e8;
            case 0x1292ECu: goto label_1292ec;
            case 0x1292F0u: goto label_1292f0;
            case 0x1292F4u: goto label_1292f4;
            case 0x1292F8u: goto label_1292f8;
            case 0x1292FCu: goto label_1292fc;
            case 0x129300u: goto label_129300;
            case 0x129304u: goto label_129304;
            case 0x129308u: goto label_129308;
            case 0x12930Cu: goto label_12930c;
            case 0x129310u: goto label_129310;
            case 0x129314u: goto label_129314;
            case 0x129318u: goto label_129318;
            case 0x12931Cu: goto label_12931c;
            case 0x129320u: goto label_129320;
            case 0x129324u: goto label_129324;
            case 0x129328u: goto label_129328;
            case 0x12932Cu: goto label_12932c;
            case 0x129330u: goto label_129330;
            case 0x129334u: goto label_129334;
            case 0x129338u: goto label_129338;
            case 0x12933Cu: goto label_12933c;
            case 0x129340u: goto label_129340;
            case 0x129344u: goto label_129344;
            case 0x129348u: goto label_129348;
            case 0x12934Cu: goto label_12934c;
            default: break;
        }
        return;
    }
label_fallthrough_0x129348:
    ctx->pc = 0x129350u;
}
