#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1415e0
// Address: 0x1415e0 - 0x141640
void entry_1415e0_0x141640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1415e0u;

label_1415e0:
    // 0x1415e0: 0x27bdfff0
    ctx->pc = 0x1415e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1415e4:
    // 0x1415e4: 0x3c020026
    ctx->pc = 0x1415e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
label_1415e8:
    // 0x1415e8: 0xffb00000
    ctx->pc = 0x1415e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1415ec:
    // 0x1415ec: 0xffbf0008
    ctx->pc = 0x1415ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1415f0:
    // 0x1415f0: 0x244249e0
    ctx->pc = 0x1415f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18912));
label_1415f4:
    // 0x1415f4: 0x8c430000
    ctx->pc = 0x1415f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1415f8:
    // 0x1415f8: 0x1060000d
label_1415fc:
    if (ctx->pc == 0x1415FCu) {
        ctx->pc = 0x1415FCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141600u;
        goto label_141600;
    }
    ctx->pc = 0x1415F8u;
    {
        const bool branch_taken_0x1415f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1415FCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1415f8) {
            ctx->pc = 0x141630u;
            goto label_141630;
        }
    }
    ctx->pc = 0x141600u;
label_141600:
    // 0x141600: 0x60f809
label_141604:
    if (ctx->pc == 0x141604u) {
        ctx->pc = 0x141604u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x141608u;
        goto label_141608;
    }
    ctx->pc = 0x141600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x141608u);
        ctx->pc = 0x141604u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1415E0u: goto label_1415e0;
            case 0x1415E4u: goto label_1415e4;
            case 0x1415E8u: goto label_1415e8;
            case 0x1415ECu: goto label_1415ec;
            case 0x1415F0u: goto label_1415f0;
            case 0x1415F4u: goto label_1415f4;
            case 0x1415F8u: goto label_1415f8;
            case 0x1415FCu: goto label_1415fc;
            case 0x141600u: goto label_141600;
            case 0x141604u: goto label_141604;
            case 0x141608u: goto label_141608;
            case 0x14160Cu: goto label_14160c;
            case 0x141610u: goto label_141610;
            case 0x141614u: goto label_141614;
            case 0x141618u: goto label_141618;
            case 0x14161Cu: goto label_14161c;
            case 0x141620u: goto label_141620;
            case 0x141624u: goto label_141624;
            case 0x141628u: goto label_141628;
            case 0x14162Cu: goto label_14162c;
            case 0x141630u: goto label_141630;
            case 0x141634u: goto label_141634;
            case 0x141638u: goto label_141638;
            case 0x14163Cu: goto label_14163c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x141608u; }
            if (ctx->pc != 0x141608u) { return; }
        }
    }
    ctx->pc = 0x141608u;
label_141608:
    // 0x141608: 0x3c020023
    ctx->pc = 0x141608u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_14160c:
    // 0x14160c: 0x3c030023
    ctx->pc = 0x14160cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
label_141610:
    // 0x141610: 0x2444a5f4
    ctx->pc = 0x141610u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294944244));
label_141614:
    // 0x141614: 0x2463a5f0
    ctx->pc = 0x141614u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294944240));
label_141618:
    // 0x141618: 0x8c620000
    ctx->pc = 0x141618u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14161c:
    // 0x14161c: 0x50400001
label_141620:
    if (ctx->pc == 0x141620u) {
        ctx->pc = 0x141620u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
        ctx->pc = 0x141624u;
        goto label_141624;
    }
    ctx->pc = 0x14161Cu;
    {
        const bool branch_taken_0x14161c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x14161c) {
            ctx->pc = 0x141620u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
            ctx->pc = 0x141624u;
            goto label_141624;
        }
    }
    ctx->pc = 0x141624u;
label_141624:
    // 0x141624: 0x8c620000
    ctx->pc = 0x141624u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_141628:
    // 0x141628: 0x24420001
    ctx->pc = 0x141628u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_14162c:
    // 0x14162c: 0xac620000
    ctx->pc = 0x14162cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_141630:
    // 0x141630: 0xdfb00000
    ctx->pc = 0x141630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_141634:
    // 0x141634: 0xdfbf0008
    ctx->pc = 0x141634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_141638:
    // 0x141638: 0x3e00008
label_14163c:
    if (ctx->pc == 0x14163Cu) {
        ctx->pc = 0x14163Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x141640u;
        goto label_fallthrough_0x141638;
    }
    ctx->pc = 0x141638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14163Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1415E0u: goto label_1415e0;
            case 0x1415E4u: goto label_1415e4;
            case 0x1415E8u: goto label_1415e8;
            case 0x1415ECu: goto label_1415ec;
            case 0x1415F0u: goto label_1415f0;
            case 0x1415F4u: goto label_1415f4;
            case 0x1415F8u: goto label_1415f8;
            case 0x1415FCu: goto label_1415fc;
            case 0x141600u: goto label_141600;
            case 0x141604u: goto label_141604;
            case 0x141608u: goto label_141608;
            case 0x14160Cu: goto label_14160c;
            case 0x141610u: goto label_141610;
            case 0x141614u: goto label_141614;
            case 0x141618u: goto label_141618;
            case 0x14161Cu: goto label_14161c;
            case 0x141620u: goto label_141620;
            case 0x141624u: goto label_141624;
            case 0x141628u: goto label_141628;
            case 0x14162Cu: goto label_14162c;
            case 0x141630u: goto label_141630;
            case 0x141634u: goto label_141634;
            case 0x141638u: goto label_141638;
            case 0x14163Cu: goto label_14163c;
            default: break;
        }
        return;
    }
label_fallthrough_0x141638:
    ctx->pc = 0x141640u;
}
