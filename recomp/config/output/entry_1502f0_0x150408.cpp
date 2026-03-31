#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1502f0
// Address: 0x1502f0 - 0x150408
void entry_1502f0_0x150408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1502f0u;

label_1502f0:
    // 0x1502f0: 0x3c020023
    ctx->pc = 0x1502f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_1502f4:
    // 0x1502f4: 0x27bdfff0
    ctx->pc = 0x1502f4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1502f8:
    // 0x1502f8: 0x8c42d81c
    ctx->pc = 0x1502f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957084)));
label_1502fc:
    // 0x1502fc: 0x10400003
label_150300:
    if (ctx->pc == 0x150300u) {
        ctx->pc = 0x150300u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x150304u;
        goto label_150304;
    }
    ctx->pc = 0x1502FCu;
    {
        const bool branch_taken_0x1502fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x150300u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1502fc) {
            ctx->pc = 0x15030Cu;
            goto label_15030c;
        }
    }
    ctx->pc = 0x150304u;
label_150304:
    // 0x150304: 0x40f809
label_150308:
    if (ctx->pc == 0x150308u) {
        ctx->pc = 0x15030Cu;
        goto label_15030c;
    }
    ctx->pc = 0x150304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15030Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1502F0u: goto label_1502f0;
            case 0x1502F4u: goto label_1502f4;
            case 0x1502F8u: goto label_1502f8;
            case 0x1502FCu: goto label_1502fc;
            case 0x150300u: goto label_150300;
            case 0x150304u: goto label_150304;
            case 0x150308u: goto label_150308;
            case 0x15030Cu: goto label_15030c;
            case 0x150310u: goto label_150310;
            case 0x150314u: goto label_150314;
            case 0x150318u: goto label_150318;
            case 0x15031Cu: goto label_15031c;
            case 0x150320u: goto label_150320;
            case 0x150324u: goto label_150324;
            case 0x150328u: goto label_150328;
            case 0x15032Cu: goto label_15032c;
            case 0x150330u: goto label_150330;
            case 0x150334u: goto label_150334;
            case 0x150338u: goto label_150338;
            case 0x15033Cu: goto label_15033c;
            case 0x150340u: goto label_150340;
            case 0x150344u: goto label_150344;
            case 0x150348u: goto label_150348;
            case 0x15034Cu: goto label_15034c;
            case 0x150350u: goto label_150350;
            case 0x150354u: goto label_150354;
            case 0x150358u: goto label_150358;
            case 0x15035Cu: goto label_15035c;
            case 0x150360u: goto label_150360;
            case 0x150364u: goto label_150364;
            case 0x150368u: goto label_150368;
            case 0x15036Cu: goto label_15036c;
            case 0x150370u: goto label_150370;
            case 0x150374u: goto label_150374;
            case 0x150378u: goto label_150378;
            case 0x15037Cu: goto label_15037c;
            case 0x150380u: goto label_150380;
            case 0x150384u: goto label_150384;
            case 0x150388u: goto label_150388;
            case 0x15038Cu: goto label_15038c;
            case 0x150390u: goto label_150390;
            case 0x150394u: goto label_150394;
            case 0x150398u: goto label_150398;
            case 0x15039Cu: goto label_15039c;
            case 0x1503A0u: goto label_1503a0;
            case 0x1503A4u: goto label_1503a4;
            case 0x1503A8u: goto label_1503a8;
            case 0x1503ACu: goto label_1503ac;
            case 0x1503B0u: goto label_1503b0;
            case 0x1503B4u: goto label_1503b4;
            case 0x1503B8u: goto label_1503b8;
            case 0x1503BCu: goto label_1503bc;
            case 0x1503C0u: goto label_1503c0;
            case 0x1503C4u: goto label_1503c4;
            case 0x1503C8u: goto label_1503c8;
            case 0x1503CCu: goto label_1503cc;
            case 0x1503D0u: goto label_1503d0;
            case 0x1503D4u: goto label_1503d4;
            case 0x1503D8u: goto label_1503d8;
            case 0x1503DCu: goto label_1503dc;
            case 0x1503E0u: goto label_1503e0;
            case 0x1503E4u: goto label_1503e4;
            case 0x1503E8u: goto label_1503e8;
            case 0x1503ECu: goto label_1503ec;
            case 0x1503F0u: goto label_1503f0;
            case 0x1503F4u: goto label_1503f4;
            case 0x1503F8u: goto label_1503f8;
            case 0x1503FCu: goto label_1503fc;
            case 0x150400u: goto label_150400;
            case 0x150404u: goto label_150404;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15030Cu; }
            if (ctx->pc != 0x15030Cu) { return; }
        }
    }
    ctx->pc = 0x15030Cu;
label_15030c:
    // 0x15030c: 0xdfbf0000
    ctx->pc = 0x15030cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_150310:
    // 0x150310: 0x3e00008
label_150314:
    if (ctx->pc == 0x150314u) {
        ctx->pc = 0x150314u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x150318u;
        goto label_150318;
    }
    ctx->pc = 0x150310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150314u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1502F0u: goto label_1502f0;
            case 0x1502F4u: goto label_1502f4;
            case 0x1502F8u: goto label_1502f8;
            case 0x1502FCu: goto label_1502fc;
            case 0x150300u: goto label_150300;
            case 0x150304u: goto label_150304;
            case 0x150308u: goto label_150308;
            case 0x15030Cu: goto label_15030c;
            case 0x150310u: goto label_150310;
            case 0x150314u: goto label_150314;
            case 0x150318u: goto label_150318;
            case 0x15031Cu: goto label_15031c;
            case 0x150320u: goto label_150320;
            case 0x150324u: goto label_150324;
            case 0x150328u: goto label_150328;
            case 0x15032Cu: goto label_15032c;
            case 0x150330u: goto label_150330;
            case 0x150334u: goto label_150334;
            case 0x150338u: goto label_150338;
            case 0x15033Cu: goto label_15033c;
            case 0x150340u: goto label_150340;
            case 0x150344u: goto label_150344;
            case 0x150348u: goto label_150348;
            case 0x15034Cu: goto label_15034c;
            case 0x150350u: goto label_150350;
            case 0x150354u: goto label_150354;
            case 0x150358u: goto label_150358;
            case 0x15035Cu: goto label_15035c;
            case 0x150360u: goto label_150360;
            case 0x150364u: goto label_150364;
            case 0x150368u: goto label_150368;
            case 0x15036Cu: goto label_15036c;
            case 0x150370u: goto label_150370;
            case 0x150374u: goto label_150374;
            case 0x150378u: goto label_150378;
            case 0x15037Cu: goto label_15037c;
            case 0x150380u: goto label_150380;
            case 0x150384u: goto label_150384;
            case 0x150388u: goto label_150388;
            case 0x15038Cu: goto label_15038c;
            case 0x150390u: goto label_150390;
            case 0x150394u: goto label_150394;
            case 0x150398u: goto label_150398;
            case 0x15039Cu: goto label_15039c;
            case 0x1503A0u: goto label_1503a0;
            case 0x1503A4u: goto label_1503a4;
            case 0x1503A8u: goto label_1503a8;
            case 0x1503ACu: goto label_1503ac;
            case 0x1503B0u: goto label_1503b0;
            case 0x1503B4u: goto label_1503b4;
            case 0x1503B8u: goto label_1503b8;
            case 0x1503BCu: goto label_1503bc;
            case 0x1503C0u: goto label_1503c0;
            case 0x1503C4u: goto label_1503c4;
            case 0x1503C8u: goto label_1503c8;
            case 0x1503CCu: goto label_1503cc;
            case 0x1503D0u: goto label_1503d0;
            case 0x1503D4u: goto label_1503d4;
            case 0x1503D8u: goto label_1503d8;
            case 0x1503DCu: goto label_1503dc;
            case 0x1503E0u: goto label_1503e0;
            case 0x1503E4u: goto label_1503e4;
            case 0x1503E8u: goto label_1503e8;
            case 0x1503ECu: goto label_1503ec;
            case 0x1503F0u: goto label_1503f0;
            case 0x1503F4u: goto label_1503f4;
            case 0x1503F8u: goto label_1503f8;
            case 0x1503FCu: goto label_1503fc;
            case 0x150400u: goto label_150400;
            case 0x150404u: goto label_150404;
            default: break;
        }
        return;
    }
    ctx->pc = 0x150318u;
label_150318:
    // 0x150318: 0x3c020023
    ctx->pc = 0x150318u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_15031c:
    // 0x15031c: 0x27bdfff0
    ctx->pc = 0x15031cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_150320:
    // 0x150320: 0x8c42d824
    ctx->pc = 0x150320u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957092)));
label_150324:
    // 0x150324: 0x10400003
label_150328:
    if (ctx->pc == 0x150328u) {
        ctx->pc = 0x150328u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x15032Cu;
        goto label_15032c;
    }
    ctx->pc = 0x150324u;
    {
        const bool branch_taken_0x150324 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x150328u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x150324) {
            ctx->pc = 0x150334u;
            goto label_150334;
        }
    }
    ctx->pc = 0x15032Cu;
label_15032c:
    // 0x15032c: 0x40f809
label_150330:
    if (ctx->pc == 0x150330u) {
        ctx->pc = 0x150334u;
        goto label_150334;
    }
    ctx->pc = 0x15032Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x150334u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1502F0u: goto label_1502f0;
            case 0x1502F4u: goto label_1502f4;
            case 0x1502F8u: goto label_1502f8;
            case 0x1502FCu: goto label_1502fc;
            case 0x150300u: goto label_150300;
            case 0x150304u: goto label_150304;
            case 0x150308u: goto label_150308;
            case 0x15030Cu: goto label_15030c;
            case 0x150310u: goto label_150310;
            case 0x150314u: goto label_150314;
            case 0x150318u: goto label_150318;
            case 0x15031Cu: goto label_15031c;
            case 0x150320u: goto label_150320;
            case 0x150324u: goto label_150324;
            case 0x150328u: goto label_150328;
            case 0x15032Cu: goto label_15032c;
            case 0x150330u: goto label_150330;
            case 0x150334u: goto label_150334;
            case 0x150338u: goto label_150338;
            case 0x15033Cu: goto label_15033c;
            case 0x150340u: goto label_150340;
            case 0x150344u: goto label_150344;
            case 0x150348u: goto label_150348;
            case 0x15034Cu: goto label_15034c;
            case 0x150350u: goto label_150350;
            case 0x150354u: goto label_150354;
            case 0x150358u: goto label_150358;
            case 0x15035Cu: goto label_15035c;
            case 0x150360u: goto label_150360;
            case 0x150364u: goto label_150364;
            case 0x150368u: goto label_150368;
            case 0x15036Cu: goto label_15036c;
            case 0x150370u: goto label_150370;
            case 0x150374u: goto label_150374;
            case 0x150378u: goto label_150378;
            case 0x15037Cu: goto label_15037c;
            case 0x150380u: goto label_150380;
            case 0x150384u: goto label_150384;
            case 0x150388u: goto label_150388;
            case 0x15038Cu: goto label_15038c;
            case 0x150390u: goto label_150390;
            case 0x150394u: goto label_150394;
            case 0x150398u: goto label_150398;
            case 0x15039Cu: goto label_15039c;
            case 0x1503A0u: goto label_1503a0;
            case 0x1503A4u: goto label_1503a4;
            case 0x1503A8u: goto label_1503a8;
            case 0x1503ACu: goto label_1503ac;
            case 0x1503B0u: goto label_1503b0;
            case 0x1503B4u: goto label_1503b4;
            case 0x1503B8u: goto label_1503b8;
            case 0x1503BCu: goto label_1503bc;
            case 0x1503C0u: goto label_1503c0;
            case 0x1503C4u: goto label_1503c4;
            case 0x1503C8u: goto label_1503c8;
            case 0x1503CCu: goto label_1503cc;
            case 0x1503D0u: goto label_1503d0;
            case 0x1503D4u: goto label_1503d4;
            case 0x1503D8u: goto label_1503d8;
            case 0x1503DCu: goto label_1503dc;
            case 0x1503E0u: goto label_1503e0;
            case 0x1503E4u: goto label_1503e4;
            case 0x1503E8u: goto label_1503e8;
            case 0x1503ECu: goto label_1503ec;
            case 0x1503F0u: goto label_1503f0;
            case 0x1503F4u: goto label_1503f4;
            case 0x1503F8u: goto label_1503f8;
            case 0x1503FCu: goto label_1503fc;
            case 0x150400u: goto label_150400;
            case 0x150404u: goto label_150404;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x150334u; }
            if (ctx->pc != 0x150334u) { return; }
        }
    }
    ctx->pc = 0x150334u;
label_150334:
    // 0x150334: 0xdfbf0000
    ctx->pc = 0x150334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_150338:
    // 0x150338: 0x3e00008
label_15033c:
    if (ctx->pc == 0x15033Cu) {
        ctx->pc = 0x15033Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x150340u;
        goto label_150340;
    }
    ctx->pc = 0x150338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15033Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1502F0u: goto label_1502f0;
            case 0x1502F4u: goto label_1502f4;
            case 0x1502F8u: goto label_1502f8;
            case 0x1502FCu: goto label_1502fc;
            case 0x150300u: goto label_150300;
            case 0x150304u: goto label_150304;
            case 0x150308u: goto label_150308;
            case 0x15030Cu: goto label_15030c;
            case 0x150310u: goto label_150310;
            case 0x150314u: goto label_150314;
            case 0x150318u: goto label_150318;
            case 0x15031Cu: goto label_15031c;
            case 0x150320u: goto label_150320;
            case 0x150324u: goto label_150324;
            case 0x150328u: goto label_150328;
            case 0x15032Cu: goto label_15032c;
            case 0x150330u: goto label_150330;
            case 0x150334u: goto label_150334;
            case 0x150338u: goto label_150338;
            case 0x15033Cu: goto label_15033c;
            case 0x150340u: goto label_150340;
            case 0x150344u: goto label_150344;
            case 0x150348u: goto label_150348;
            case 0x15034Cu: goto label_15034c;
            case 0x150350u: goto label_150350;
            case 0x150354u: goto label_150354;
            case 0x150358u: goto label_150358;
            case 0x15035Cu: goto label_15035c;
            case 0x150360u: goto label_150360;
            case 0x150364u: goto label_150364;
            case 0x150368u: goto label_150368;
            case 0x15036Cu: goto label_15036c;
            case 0x150370u: goto label_150370;
            case 0x150374u: goto label_150374;
            case 0x150378u: goto label_150378;
            case 0x15037Cu: goto label_15037c;
            case 0x150380u: goto label_150380;
            case 0x150384u: goto label_150384;
            case 0x150388u: goto label_150388;
            case 0x15038Cu: goto label_15038c;
            case 0x150390u: goto label_150390;
            case 0x150394u: goto label_150394;
            case 0x150398u: goto label_150398;
            case 0x15039Cu: goto label_15039c;
            case 0x1503A0u: goto label_1503a0;
            case 0x1503A4u: goto label_1503a4;
            case 0x1503A8u: goto label_1503a8;
            case 0x1503ACu: goto label_1503ac;
            case 0x1503B0u: goto label_1503b0;
            case 0x1503B4u: goto label_1503b4;
            case 0x1503B8u: goto label_1503b8;
            case 0x1503BCu: goto label_1503bc;
            case 0x1503C0u: goto label_1503c0;
            case 0x1503C4u: goto label_1503c4;
            case 0x1503C8u: goto label_1503c8;
            case 0x1503CCu: goto label_1503cc;
            case 0x1503D0u: goto label_1503d0;
            case 0x1503D4u: goto label_1503d4;
            case 0x1503D8u: goto label_1503d8;
            case 0x1503DCu: goto label_1503dc;
            case 0x1503E0u: goto label_1503e0;
            case 0x1503E4u: goto label_1503e4;
            case 0x1503E8u: goto label_1503e8;
            case 0x1503ECu: goto label_1503ec;
            case 0x1503F0u: goto label_1503f0;
            case 0x1503F4u: goto label_1503f4;
            case 0x1503F8u: goto label_1503f8;
            case 0x1503FCu: goto label_1503fc;
            case 0x150400u: goto label_150400;
            case 0x150404u: goto label_150404;
            default: break;
        }
        return;
    }
    ctx->pc = 0x150340u;
label_150340:
    // 0x150340: 0x3c020023
    ctx->pc = 0x150340u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_150344:
    // 0x150344: 0x27bdfff0
    ctx->pc = 0x150344u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_150348:
    // 0x150348: 0x8c42d820
    ctx->pc = 0x150348u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957088)));
label_15034c:
    // 0x15034c: 0x10400003
label_150350:
    if (ctx->pc == 0x150350u) {
        ctx->pc = 0x150350u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x150354u;
        goto label_150354;
    }
    ctx->pc = 0x15034Cu;
    {
        const bool branch_taken_0x15034c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x150350u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x15034c) {
            ctx->pc = 0x15035Cu;
            goto label_15035c;
        }
    }
    ctx->pc = 0x150354u;
label_150354:
    // 0x150354: 0x40f809
label_150358:
    if (ctx->pc == 0x150358u) {
        ctx->pc = 0x15035Cu;
        goto label_15035c;
    }
    ctx->pc = 0x150354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15035Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1502F0u: goto label_1502f0;
            case 0x1502F4u: goto label_1502f4;
            case 0x1502F8u: goto label_1502f8;
            case 0x1502FCu: goto label_1502fc;
            case 0x150300u: goto label_150300;
            case 0x150304u: goto label_150304;
            case 0x150308u: goto label_150308;
            case 0x15030Cu: goto label_15030c;
            case 0x150310u: goto label_150310;
            case 0x150314u: goto label_150314;
            case 0x150318u: goto label_150318;
            case 0x15031Cu: goto label_15031c;
            case 0x150320u: goto label_150320;
            case 0x150324u: goto label_150324;
            case 0x150328u: goto label_150328;
            case 0x15032Cu: goto label_15032c;
            case 0x150330u: goto label_150330;
            case 0x150334u: goto label_150334;
            case 0x150338u: goto label_150338;
            case 0x15033Cu: goto label_15033c;
            case 0x150340u: goto label_150340;
            case 0x150344u: goto label_150344;
            case 0x150348u: goto label_150348;
            case 0x15034Cu: goto label_15034c;
            case 0x150350u: goto label_150350;
            case 0x150354u: goto label_150354;
            case 0x150358u: goto label_150358;
            case 0x15035Cu: goto label_15035c;
            case 0x150360u: goto label_150360;
            case 0x150364u: goto label_150364;
            case 0x150368u: goto label_150368;
            case 0x15036Cu: goto label_15036c;
            case 0x150370u: goto label_150370;
            case 0x150374u: goto label_150374;
            case 0x150378u: goto label_150378;
            case 0x15037Cu: goto label_15037c;
            case 0x150380u: goto label_150380;
            case 0x150384u: goto label_150384;
            case 0x150388u: goto label_150388;
            case 0x15038Cu: goto label_15038c;
            case 0x150390u: goto label_150390;
            case 0x150394u: goto label_150394;
            case 0x150398u: goto label_150398;
            case 0x15039Cu: goto label_15039c;
            case 0x1503A0u: goto label_1503a0;
            case 0x1503A4u: goto label_1503a4;
            case 0x1503A8u: goto label_1503a8;
            case 0x1503ACu: goto label_1503ac;
            case 0x1503B0u: goto label_1503b0;
            case 0x1503B4u: goto label_1503b4;
            case 0x1503B8u: goto label_1503b8;
            case 0x1503BCu: goto label_1503bc;
            case 0x1503C0u: goto label_1503c0;
            case 0x1503C4u: goto label_1503c4;
            case 0x1503C8u: goto label_1503c8;
            case 0x1503CCu: goto label_1503cc;
            case 0x1503D0u: goto label_1503d0;
            case 0x1503D4u: goto label_1503d4;
            case 0x1503D8u: goto label_1503d8;
            case 0x1503DCu: goto label_1503dc;
            case 0x1503E0u: goto label_1503e0;
            case 0x1503E4u: goto label_1503e4;
            case 0x1503E8u: goto label_1503e8;
            case 0x1503ECu: goto label_1503ec;
            case 0x1503F0u: goto label_1503f0;
            case 0x1503F4u: goto label_1503f4;
            case 0x1503F8u: goto label_1503f8;
            case 0x1503FCu: goto label_1503fc;
            case 0x150400u: goto label_150400;
            case 0x150404u: goto label_150404;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15035Cu; }
            if (ctx->pc != 0x15035Cu) { return; }
        }
    }
    ctx->pc = 0x15035Cu;
label_15035c:
    // 0x15035c: 0xdfbf0000
    ctx->pc = 0x15035cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_150360:
    // 0x150360: 0x3e00008
label_150364:
    if (ctx->pc == 0x150364u) {
        ctx->pc = 0x150364u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x150368u;
        goto label_150368;
    }
    ctx->pc = 0x150360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150364u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1502F0u: goto label_1502f0;
            case 0x1502F4u: goto label_1502f4;
            case 0x1502F8u: goto label_1502f8;
            case 0x1502FCu: goto label_1502fc;
            case 0x150300u: goto label_150300;
            case 0x150304u: goto label_150304;
            case 0x150308u: goto label_150308;
            case 0x15030Cu: goto label_15030c;
            case 0x150310u: goto label_150310;
            case 0x150314u: goto label_150314;
            case 0x150318u: goto label_150318;
            case 0x15031Cu: goto label_15031c;
            case 0x150320u: goto label_150320;
            case 0x150324u: goto label_150324;
            case 0x150328u: goto label_150328;
            case 0x15032Cu: goto label_15032c;
            case 0x150330u: goto label_150330;
            case 0x150334u: goto label_150334;
            case 0x150338u: goto label_150338;
            case 0x15033Cu: goto label_15033c;
            case 0x150340u: goto label_150340;
            case 0x150344u: goto label_150344;
            case 0x150348u: goto label_150348;
            case 0x15034Cu: goto label_15034c;
            case 0x150350u: goto label_150350;
            case 0x150354u: goto label_150354;
            case 0x150358u: goto label_150358;
            case 0x15035Cu: goto label_15035c;
            case 0x150360u: goto label_150360;
            case 0x150364u: goto label_150364;
            case 0x150368u: goto label_150368;
            case 0x15036Cu: goto label_15036c;
            case 0x150370u: goto label_150370;
            case 0x150374u: goto label_150374;
            case 0x150378u: goto label_150378;
            case 0x15037Cu: goto label_15037c;
            case 0x150380u: goto label_150380;
            case 0x150384u: goto label_150384;
            case 0x150388u: goto label_150388;
            case 0x15038Cu: goto label_15038c;
            case 0x150390u: goto label_150390;
            case 0x150394u: goto label_150394;
            case 0x150398u: goto label_150398;
            case 0x15039Cu: goto label_15039c;
            case 0x1503A0u: goto label_1503a0;
            case 0x1503A4u: goto label_1503a4;
            case 0x1503A8u: goto label_1503a8;
            case 0x1503ACu: goto label_1503ac;
            case 0x1503B0u: goto label_1503b0;
            case 0x1503B4u: goto label_1503b4;
            case 0x1503B8u: goto label_1503b8;
            case 0x1503BCu: goto label_1503bc;
            case 0x1503C0u: goto label_1503c0;
            case 0x1503C4u: goto label_1503c4;
            case 0x1503C8u: goto label_1503c8;
            case 0x1503CCu: goto label_1503cc;
            case 0x1503D0u: goto label_1503d0;
            case 0x1503D4u: goto label_1503d4;
            case 0x1503D8u: goto label_1503d8;
            case 0x1503DCu: goto label_1503dc;
            case 0x1503E0u: goto label_1503e0;
            case 0x1503E4u: goto label_1503e4;
            case 0x1503E8u: goto label_1503e8;
            case 0x1503ECu: goto label_1503ec;
            case 0x1503F0u: goto label_1503f0;
            case 0x1503F4u: goto label_1503f4;
            case 0x1503F8u: goto label_1503f8;
            case 0x1503FCu: goto label_1503fc;
            case 0x150400u: goto label_150400;
            case 0x150404u: goto label_150404;
            default: break;
        }
        return;
    }
    ctx->pc = 0x150368u;
label_150368:
    // 0x150368: 0x3c020023
    ctx->pc = 0x150368u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_15036c:
    // 0x15036c: 0x27bdfff0
    ctx->pc = 0x15036cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_150370:
    // 0x150370: 0x8c42d828
    ctx->pc = 0x150370u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957096)));
label_150374:
    // 0x150374: 0x10400003
label_150378:
    if (ctx->pc == 0x150378u) {
        ctx->pc = 0x150378u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x15037Cu;
        goto label_15037c;
    }
    ctx->pc = 0x150374u;
    {
        const bool branch_taken_0x150374 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x150378u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x150374) {
            ctx->pc = 0x150384u;
            goto label_150384;
        }
    }
    ctx->pc = 0x15037Cu;
label_15037c:
    // 0x15037c: 0x40f809
label_150380:
    if (ctx->pc == 0x150380u) {
        ctx->pc = 0x150384u;
        goto label_150384;
    }
    ctx->pc = 0x15037Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x150384u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1502F0u: goto label_1502f0;
            case 0x1502F4u: goto label_1502f4;
            case 0x1502F8u: goto label_1502f8;
            case 0x1502FCu: goto label_1502fc;
            case 0x150300u: goto label_150300;
            case 0x150304u: goto label_150304;
            case 0x150308u: goto label_150308;
            case 0x15030Cu: goto label_15030c;
            case 0x150310u: goto label_150310;
            case 0x150314u: goto label_150314;
            case 0x150318u: goto label_150318;
            case 0x15031Cu: goto label_15031c;
            case 0x150320u: goto label_150320;
            case 0x150324u: goto label_150324;
            case 0x150328u: goto label_150328;
            case 0x15032Cu: goto label_15032c;
            case 0x150330u: goto label_150330;
            case 0x150334u: goto label_150334;
            case 0x150338u: goto label_150338;
            case 0x15033Cu: goto label_15033c;
            case 0x150340u: goto label_150340;
            case 0x150344u: goto label_150344;
            case 0x150348u: goto label_150348;
            case 0x15034Cu: goto label_15034c;
            case 0x150350u: goto label_150350;
            case 0x150354u: goto label_150354;
            case 0x150358u: goto label_150358;
            case 0x15035Cu: goto label_15035c;
            case 0x150360u: goto label_150360;
            case 0x150364u: goto label_150364;
            case 0x150368u: goto label_150368;
            case 0x15036Cu: goto label_15036c;
            case 0x150370u: goto label_150370;
            case 0x150374u: goto label_150374;
            case 0x150378u: goto label_150378;
            case 0x15037Cu: goto label_15037c;
            case 0x150380u: goto label_150380;
            case 0x150384u: goto label_150384;
            case 0x150388u: goto label_150388;
            case 0x15038Cu: goto label_15038c;
            case 0x150390u: goto label_150390;
            case 0x150394u: goto label_150394;
            case 0x150398u: goto label_150398;
            case 0x15039Cu: goto label_15039c;
            case 0x1503A0u: goto label_1503a0;
            case 0x1503A4u: goto label_1503a4;
            case 0x1503A8u: goto label_1503a8;
            case 0x1503ACu: goto label_1503ac;
            case 0x1503B0u: goto label_1503b0;
            case 0x1503B4u: goto label_1503b4;
            case 0x1503B8u: goto label_1503b8;
            case 0x1503BCu: goto label_1503bc;
            case 0x1503C0u: goto label_1503c0;
            case 0x1503C4u: goto label_1503c4;
            case 0x1503C8u: goto label_1503c8;
            case 0x1503CCu: goto label_1503cc;
            case 0x1503D0u: goto label_1503d0;
            case 0x1503D4u: goto label_1503d4;
            case 0x1503D8u: goto label_1503d8;
            case 0x1503DCu: goto label_1503dc;
            case 0x1503E0u: goto label_1503e0;
            case 0x1503E4u: goto label_1503e4;
            case 0x1503E8u: goto label_1503e8;
            case 0x1503ECu: goto label_1503ec;
            case 0x1503F0u: goto label_1503f0;
            case 0x1503F4u: goto label_1503f4;
            case 0x1503F8u: goto label_1503f8;
            case 0x1503FCu: goto label_1503fc;
            case 0x150400u: goto label_150400;
            case 0x150404u: goto label_150404;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x150384u; }
            if (ctx->pc != 0x150384u) { return; }
        }
    }
    ctx->pc = 0x150384u;
label_150384:
    // 0x150384: 0xdfbf0000
    ctx->pc = 0x150384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_150388:
    // 0x150388: 0x3e00008
label_15038c:
    if (ctx->pc == 0x15038Cu) {
        ctx->pc = 0x15038Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x150390u;
        goto label_150390;
    }
    ctx->pc = 0x150388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15038Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1502F0u: goto label_1502f0;
            case 0x1502F4u: goto label_1502f4;
            case 0x1502F8u: goto label_1502f8;
            case 0x1502FCu: goto label_1502fc;
            case 0x150300u: goto label_150300;
            case 0x150304u: goto label_150304;
            case 0x150308u: goto label_150308;
            case 0x15030Cu: goto label_15030c;
            case 0x150310u: goto label_150310;
            case 0x150314u: goto label_150314;
            case 0x150318u: goto label_150318;
            case 0x15031Cu: goto label_15031c;
            case 0x150320u: goto label_150320;
            case 0x150324u: goto label_150324;
            case 0x150328u: goto label_150328;
            case 0x15032Cu: goto label_15032c;
            case 0x150330u: goto label_150330;
            case 0x150334u: goto label_150334;
            case 0x150338u: goto label_150338;
            case 0x15033Cu: goto label_15033c;
            case 0x150340u: goto label_150340;
            case 0x150344u: goto label_150344;
            case 0x150348u: goto label_150348;
            case 0x15034Cu: goto label_15034c;
            case 0x150350u: goto label_150350;
            case 0x150354u: goto label_150354;
            case 0x150358u: goto label_150358;
            case 0x15035Cu: goto label_15035c;
            case 0x150360u: goto label_150360;
            case 0x150364u: goto label_150364;
            case 0x150368u: goto label_150368;
            case 0x15036Cu: goto label_15036c;
            case 0x150370u: goto label_150370;
            case 0x150374u: goto label_150374;
            case 0x150378u: goto label_150378;
            case 0x15037Cu: goto label_15037c;
            case 0x150380u: goto label_150380;
            case 0x150384u: goto label_150384;
            case 0x150388u: goto label_150388;
            case 0x15038Cu: goto label_15038c;
            case 0x150390u: goto label_150390;
            case 0x150394u: goto label_150394;
            case 0x150398u: goto label_150398;
            case 0x15039Cu: goto label_15039c;
            case 0x1503A0u: goto label_1503a0;
            case 0x1503A4u: goto label_1503a4;
            case 0x1503A8u: goto label_1503a8;
            case 0x1503ACu: goto label_1503ac;
            case 0x1503B0u: goto label_1503b0;
            case 0x1503B4u: goto label_1503b4;
            case 0x1503B8u: goto label_1503b8;
            case 0x1503BCu: goto label_1503bc;
            case 0x1503C0u: goto label_1503c0;
            case 0x1503C4u: goto label_1503c4;
            case 0x1503C8u: goto label_1503c8;
            case 0x1503CCu: goto label_1503cc;
            case 0x1503D0u: goto label_1503d0;
            case 0x1503D4u: goto label_1503d4;
            case 0x1503D8u: goto label_1503d8;
            case 0x1503DCu: goto label_1503dc;
            case 0x1503E0u: goto label_1503e0;
            case 0x1503E4u: goto label_1503e4;
            case 0x1503E8u: goto label_1503e8;
            case 0x1503ECu: goto label_1503ec;
            case 0x1503F0u: goto label_1503f0;
            case 0x1503F4u: goto label_1503f4;
            case 0x1503F8u: goto label_1503f8;
            case 0x1503FCu: goto label_1503fc;
            case 0x150400u: goto label_150400;
            case 0x150404u: goto label_150404;
            default: break;
        }
        return;
    }
    ctx->pc = 0x150390u;
label_150390:
    // 0x150390: 0x3c020023
    ctx->pc = 0x150390u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_150394:
    // 0x150394: 0x27bdfff0
    ctx->pc = 0x150394u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_150398:
    // 0x150398: 0x8c42d82c
    ctx->pc = 0x150398u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957100)));
label_15039c:
    // 0x15039c: 0x10400003
label_1503a0:
    if (ctx->pc == 0x1503A0u) {
        ctx->pc = 0x1503A0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1503A4u;
        goto label_1503a4;
    }
    ctx->pc = 0x15039Cu;
    {
        const bool branch_taken_0x15039c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1503A0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x15039c) {
            ctx->pc = 0x1503ACu;
            goto label_1503ac;
        }
    }
    ctx->pc = 0x1503A4u;
label_1503a4:
    // 0x1503a4: 0x40f809
label_1503a8:
    if (ctx->pc == 0x1503A8u) {
        ctx->pc = 0x1503ACu;
        goto label_1503ac;
    }
    ctx->pc = 0x1503A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1503ACu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1502F0u: goto label_1502f0;
            case 0x1502F4u: goto label_1502f4;
            case 0x1502F8u: goto label_1502f8;
            case 0x1502FCu: goto label_1502fc;
            case 0x150300u: goto label_150300;
            case 0x150304u: goto label_150304;
            case 0x150308u: goto label_150308;
            case 0x15030Cu: goto label_15030c;
            case 0x150310u: goto label_150310;
            case 0x150314u: goto label_150314;
            case 0x150318u: goto label_150318;
            case 0x15031Cu: goto label_15031c;
            case 0x150320u: goto label_150320;
            case 0x150324u: goto label_150324;
            case 0x150328u: goto label_150328;
            case 0x15032Cu: goto label_15032c;
            case 0x150330u: goto label_150330;
            case 0x150334u: goto label_150334;
            case 0x150338u: goto label_150338;
            case 0x15033Cu: goto label_15033c;
            case 0x150340u: goto label_150340;
            case 0x150344u: goto label_150344;
            case 0x150348u: goto label_150348;
            case 0x15034Cu: goto label_15034c;
            case 0x150350u: goto label_150350;
            case 0x150354u: goto label_150354;
            case 0x150358u: goto label_150358;
            case 0x15035Cu: goto label_15035c;
            case 0x150360u: goto label_150360;
            case 0x150364u: goto label_150364;
            case 0x150368u: goto label_150368;
            case 0x15036Cu: goto label_15036c;
            case 0x150370u: goto label_150370;
            case 0x150374u: goto label_150374;
            case 0x150378u: goto label_150378;
            case 0x15037Cu: goto label_15037c;
            case 0x150380u: goto label_150380;
            case 0x150384u: goto label_150384;
            case 0x150388u: goto label_150388;
            case 0x15038Cu: goto label_15038c;
            case 0x150390u: goto label_150390;
            case 0x150394u: goto label_150394;
            case 0x150398u: goto label_150398;
            case 0x15039Cu: goto label_15039c;
            case 0x1503A0u: goto label_1503a0;
            case 0x1503A4u: goto label_1503a4;
            case 0x1503A8u: goto label_1503a8;
            case 0x1503ACu: goto label_1503ac;
            case 0x1503B0u: goto label_1503b0;
            case 0x1503B4u: goto label_1503b4;
            case 0x1503B8u: goto label_1503b8;
            case 0x1503BCu: goto label_1503bc;
            case 0x1503C0u: goto label_1503c0;
            case 0x1503C4u: goto label_1503c4;
            case 0x1503C8u: goto label_1503c8;
            case 0x1503CCu: goto label_1503cc;
            case 0x1503D0u: goto label_1503d0;
            case 0x1503D4u: goto label_1503d4;
            case 0x1503D8u: goto label_1503d8;
            case 0x1503DCu: goto label_1503dc;
            case 0x1503E0u: goto label_1503e0;
            case 0x1503E4u: goto label_1503e4;
            case 0x1503E8u: goto label_1503e8;
            case 0x1503ECu: goto label_1503ec;
            case 0x1503F0u: goto label_1503f0;
            case 0x1503F4u: goto label_1503f4;
            case 0x1503F8u: goto label_1503f8;
            case 0x1503FCu: goto label_1503fc;
            case 0x150400u: goto label_150400;
            case 0x150404u: goto label_150404;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1503ACu; }
            if (ctx->pc != 0x1503ACu) { return; }
        }
    }
    ctx->pc = 0x1503ACu;
label_1503ac:
    // 0x1503ac: 0xdfbf0000
    ctx->pc = 0x1503acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1503b0:
    // 0x1503b0: 0x3e00008
label_1503b4:
    if (ctx->pc == 0x1503B4u) {
        ctx->pc = 0x1503B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1503B8u;
        goto label_1503b8;
    }
    ctx->pc = 0x1503B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1503B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1502F0u: goto label_1502f0;
            case 0x1502F4u: goto label_1502f4;
            case 0x1502F8u: goto label_1502f8;
            case 0x1502FCu: goto label_1502fc;
            case 0x150300u: goto label_150300;
            case 0x150304u: goto label_150304;
            case 0x150308u: goto label_150308;
            case 0x15030Cu: goto label_15030c;
            case 0x150310u: goto label_150310;
            case 0x150314u: goto label_150314;
            case 0x150318u: goto label_150318;
            case 0x15031Cu: goto label_15031c;
            case 0x150320u: goto label_150320;
            case 0x150324u: goto label_150324;
            case 0x150328u: goto label_150328;
            case 0x15032Cu: goto label_15032c;
            case 0x150330u: goto label_150330;
            case 0x150334u: goto label_150334;
            case 0x150338u: goto label_150338;
            case 0x15033Cu: goto label_15033c;
            case 0x150340u: goto label_150340;
            case 0x150344u: goto label_150344;
            case 0x150348u: goto label_150348;
            case 0x15034Cu: goto label_15034c;
            case 0x150350u: goto label_150350;
            case 0x150354u: goto label_150354;
            case 0x150358u: goto label_150358;
            case 0x15035Cu: goto label_15035c;
            case 0x150360u: goto label_150360;
            case 0x150364u: goto label_150364;
            case 0x150368u: goto label_150368;
            case 0x15036Cu: goto label_15036c;
            case 0x150370u: goto label_150370;
            case 0x150374u: goto label_150374;
            case 0x150378u: goto label_150378;
            case 0x15037Cu: goto label_15037c;
            case 0x150380u: goto label_150380;
            case 0x150384u: goto label_150384;
            case 0x150388u: goto label_150388;
            case 0x15038Cu: goto label_15038c;
            case 0x150390u: goto label_150390;
            case 0x150394u: goto label_150394;
            case 0x150398u: goto label_150398;
            case 0x15039Cu: goto label_15039c;
            case 0x1503A0u: goto label_1503a0;
            case 0x1503A4u: goto label_1503a4;
            case 0x1503A8u: goto label_1503a8;
            case 0x1503ACu: goto label_1503ac;
            case 0x1503B0u: goto label_1503b0;
            case 0x1503B4u: goto label_1503b4;
            case 0x1503B8u: goto label_1503b8;
            case 0x1503BCu: goto label_1503bc;
            case 0x1503C0u: goto label_1503c0;
            case 0x1503C4u: goto label_1503c4;
            case 0x1503C8u: goto label_1503c8;
            case 0x1503CCu: goto label_1503cc;
            case 0x1503D0u: goto label_1503d0;
            case 0x1503D4u: goto label_1503d4;
            case 0x1503D8u: goto label_1503d8;
            case 0x1503DCu: goto label_1503dc;
            case 0x1503E0u: goto label_1503e0;
            case 0x1503E4u: goto label_1503e4;
            case 0x1503E8u: goto label_1503e8;
            case 0x1503ECu: goto label_1503ec;
            case 0x1503F0u: goto label_1503f0;
            case 0x1503F4u: goto label_1503f4;
            case 0x1503F8u: goto label_1503f8;
            case 0x1503FCu: goto label_1503fc;
            case 0x150400u: goto label_150400;
            case 0x150404u: goto label_150404;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1503B8u;
label_1503b8:
    // 0x1503b8: 0x3c020023
    ctx->pc = 0x1503b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_1503bc:
    // 0x1503bc: 0x27bdfff0
    ctx->pc = 0x1503bcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1503c0:
    // 0x1503c0: 0x8c42d830
    ctx->pc = 0x1503c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957104)));
label_1503c4:
    // 0x1503c4: 0x10400003
label_1503c8:
    if (ctx->pc == 0x1503C8u) {
        ctx->pc = 0x1503C8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1503CCu;
        goto label_1503cc;
    }
    ctx->pc = 0x1503C4u;
    {
        const bool branch_taken_0x1503c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1503C8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1503c4) {
            ctx->pc = 0x1503D4u;
            goto label_1503d4;
        }
    }
    ctx->pc = 0x1503CCu;
label_1503cc:
    // 0x1503cc: 0x40f809
label_1503d0:
    if (ctx->pc == 0x1503D0u) {
        ctx->pc = 0x1503D4u;
        goto label_1503d4;
    }
    ctx->pc = 0x1503CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1503D4u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1502F0u: goto label_1502f0;
            case 0x1502F4u: goto label_1502f4;
            case 0x1502F8u: goto label_1502f8;
            case 0x1502FCu: goto label_1502fc;
            case 0x150300u: goto label_150300;
            case 0x150304u: goto label_150304;
            case 0x150308u: goto label_150308;
            case 0x15030Cu: goto label_15030c;
            case 0x150310u: goto label_150310;
            case 0x150314u: goto label_150314;
            case 0x150318u: goto label_150318;
            case 0x15031Cu: goto label_15031c;
            case 0x150320u: goto label_150320;
            case 0x150324u: goto label_150324;
            case 0x150328u: goto label_150328;
            case 0x15032Cu: goto label_15032c;
            case 0x150330u: goto label_150330;
            case 0x150334u: goto label_150334;
            case 0x150338u: goto label_150338;
            case 0x15033Cu: goto label_15033c;
            case 0x150340u: goto label_150340;
            case 0x150344u: goto label_150344;
            case 0x150348u: goto label_150348;
            case 0x15034Cu: goto label_15034c;
            case 0x150350u: goto label_150350;
            case 0x150354u: goto label_150354;
            case 0x150358u: goto label_150358;
            case 0x15035Cu: goto label_15035c;
            case 0x150360u: goto label_150360;
            case 0x150364u: goto label_150364;
            case 0x150368u: goto label_150368;
            case 0x15036Cu: goto label_15036c;
            case 0x150370u: goto label_150370;
            case 0x150374u: goto label_150374;
            case 0x150378u: goto label_150378;
            case 0x15037Cu: goto label_15037c;
            case 0x150380u: goto label_150380;
            case 0x150384u: goto label_150384;
            case 0x150388u: goto label_150388;
            case 0x15038Cu: goto label_15038c;
            case 0x150390u: goto label_150390;
            case 0x150394u: goto label_150394;
            case 0x150398u: goto label_150398;
            case 0x15039Cu: goto label_15039c;
            case 0x1503A0u: goto label_1503a0;
            case 0x1503A4u: goto label_1503a4;
            case 0x1503A8u: goto label_1503a8;
            case 0x1503ACu: goto label_1503ac;
            case 0x1503B0u: goto label_1503b0;
            case 0x1503B4u: goto label_1503b4;
            case 0x1503B8u: goto label_1503b8;
            case 0x1503BCu: goto label_1503bc;
            case 0x1503C0u: goto label_1503c0;
            case 0x1503C4u: goto label_1503c4;
            case 0x1503C8u: goto label_1503c8;
            case 0x1503CCu: goto label_1503cc;
            case 0x1503D0u: goto label_1503d0;
            case 0x1503D4u: goto label_1503d4;
            case 0x1503D8u: goto label_1503d8;
            case 0x1503DCu: goto label_1503dc;
            case 0x1503E0u: goto label_1503e0;
            case 0x1503E4u: goto label_1503e4;
            case 0x1503E8u: goto label_1503e8;
            case 0x1503ECu: goto label_1503ec;
            case 0x1503F0u: goto label_1503f0;
            case 0x1503F4u: goto label_1503f4;
            case 0x1503F8u: goto label_1503f8;
            case 0x1503FCu: goto label_1503fc;
            case 0x150400u: goto label_150400;
            case 0x150404u: goto label_150404;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1503D4u; }
            if (ctx->pc != 0x1503D4u) { return; }
        }
    }
    ctx->pc = 0x1503D4u;
label_1503d4:
    // 0x1503d4: 0xdfbf0000
    ctx->pc = 0x1503d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1503d8:
    // 0x1503d8: 0x3e00008
label_1503dc:
    if (ctx->pc == 0x1503DCu) {
        ctx->pc = 0x1503DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1503E0u;
        goto label_1503e0;
    }
    ctx->pc = 0x1503D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1503DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1502F0u: goto label_1502f0;
            case 0x1502F4u: goto label_1502f4;
            case 0x1502F8u: goto label_1502f8;
            case 0x1502FCu: goto label_1502fc;
            case 0x150300u: goto label_150300;
            case 0x150304u: goto label_150304;
            case 0x150308u: goto label_150308;
            case 0x15030Cu: goto label_15030c;
            case 0x150310u: goto label_150310;
            case 0x150314u: goto label_150314;
            case 0x150318u: goto label_150318;
            case 0x15031Cu: goto label_15031c;
            case 0x150320u: goto label_150320;
            case 0x150324u: goto label_150324;
            case 0x150328u: goto label_150328;
            case 0x15032Cu: goto label_15032c;
            case 0x150330u: goto label_150330;
            case 0x150334u: goto label_150334;
            case 0x150338u: goto label_150338;
            case 0x15033Cu: goto label_15033c;
            case 0x150340u: goto label_150340;
            case 0x150344u: goto label_150344;
            case 0x150348u: goto label_150348;
            case 0x15034Cu: goto label_15034c;
            case 0x150350u: goto label_150350;
            case 0x150354u: goto label_150354;
            case 0x150358u: goto label_150358;
            case 0x15035Cu: goto label_15035c;
            case 0x150360u: goto label_150360;
            case 0x150364u: goto label_150364;
            case 0x150368u: goto label_150368;
            case 0x15036Cu: goto label_15036c;
            case 0x150370u: goto label_150370;
            case 0x150374u: goto label_150374;
            case 0x150378u: goto label_150378;
            case 0x15037Cu: goto label_15037c;
            case 0x150380u: goto label_150380;
            case 0x150384u: goto label_150384;
            case 0x150388u: goto label_150388;
            case 0x15038Cu: goto label_15038c;
            case 0x150390u: goto label_150390;
            case 0x150394u: goto label_150394;
            case 0x150398u: goto label_150398;
            case 0x15039Cu: goto label_15039c;
            case 0x1503A0u: goto label_1503a0;
            case 0x1503A4u: goto label_1503a4;
            case 0x1503A8u: goto label_1503a8;
            case 0x1503ACu: goto label_1503ac;
            case 0x1503B0u: goto label_1503b0;
            case 0x1503B4u: goto label_1503b4;
            case 0x1503B8u: goto label_1503b8;
            case 0x1503BCu: goto label_1503bc;
            case 0x1503C0u: goto label_1503c0;
            case 0x1503C4u: goto label_1503c4;
            case 0x1503C8u: goto label_1503c8;
            case 0x1503CCu: goto label_1503cc;
            case 0x1503D0u: goto label_1503d0;
            case 0x1503D4u: goto label_1503d4;
            case 0x1503D8u: goto label_1503d8;
            case 0x1503DCu: goto label_1503dc;
            case 0x1503E0u: goto label_1503e0;
            case 0x1503E4u: goto label_1503e4;
            case 0x1503E8u: goto label_1503e8;
            case 0x1503ECu: goto label_1503ec;
            case 0x1503F0u: goto label_1503f0;
            case 0x1503F4u: goto label_1503f4;
            case 0x1503F8u: goto label_1503f8;
            case 0x1503FCu: goto label_1503fc;
            case 0x150400u: goto label_150400;
            case 0x150404u: goto label_150404;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1503E0u;
label_1503e0:
    // 0x1503e0: 0x3c020023
    ctx->pc = 0x1503e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_1503e4:
    // 0x1503e4: 0x27bdfff0
    ctx->pc = 0x1503e4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1503e8:
    // 0x1503e8: 0x8c42d834
    ctx->pc = 0x1503e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957108)));
label_1503ec:
    // 0x1503ec: 0x10400003
label_1503f0:
    if (ctx->pc == 0x1503F0u) {
        ctx->pc = 0x1503F0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1503F4u;
        goto label_1503f4;
    }
    ctx->pc = 0x1503ECu;
    {
        const bool branch_taken_0x1503ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1503F0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1503ec) {
            ctx->pc = 0x1503FCu;
            goto label_1503fc;
        }
    }
    ctx->pc = 0x1503F4u;
label_1503f4:
    // 0x1503f4: 0x40f809
label_1503f8:
    if (ctx->pc == 0x1503F8u) {
        ctx->pc = 0x1503FCu;
        goto label_1503fc;
    }
    ctx->pc = 0x1503F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1503FCu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1502F0u: goto label_1502f0;
            case 0x1502F4u: goto label_1502f4;
            case 0x1502F8u: goto label_1502f8;
            case 0x1502FCu: goto label_1502fc;
            case 0x150300u: goto label_150300;
            case 0x150304u: goto label_150304;
            case 0x150308u: goto label_150308;
            case 0x15030Cu: goto label_15030c;
            case 0x150310u: goto label_150310;
            case 0x150314u: goto label_150314;
            case 0x150318u: goto label_150318;
            case 0x15031Cu: goto label_15031c;
            case 0x150320u: goto label_150320;
            case 0x150324u: goto label_150324;
            case 0x150328u: goto label_150328;
            case 0x15032Cu: goto label_15032c;
            case 0x150330u: goto label_150330;
            case 0x150334u: goto label_150334;
            case 0x150338u: goto label_150338;
            case 0x15033Cu: goto label_15033c;
            case 0x150340u: goto label_150340;
            case 0x150344u: goto label_150344;
            case 0x150348u: goto label_150348;
            case 0x15034Cu: goto label_15034c;
            case 0x150350u: goto label_150350;
            case 0x150354u: goto label_150354;
            case 0x150358u: goto label_150358;
            case 0x15035Cu: goto label_15035c;
            case 0x150360u: goto label_150360;
            case 0x150364u: goto label_150364;
            case 0x150368u: goto label_150368;
            case 0x15036Cu: goto label_15036c;
            case 0x150370u: goto label_150370;
            case 0x150374u: goto label_150374;
            case 0x150378u: goto label_150378;
            case 0x15037Cu: goto label_15037c;
            case 0x150380u: goto label_150380;
            case 0x150384u: goto label_150384;
            case 0x150388u: goto label_150388;
            case 0x15038Cu: goto label_15038c;
            case 0x150390u: goto label_150390;
            case 0x150394u: goto label_150394;
            case 0x150398u: goto label_150398;
            case 0x15039Cu: goto label_15039c;
            case 0x1503A0u: goto label_1503a0;
            case 0x1503A4u: goto label_1503a4;
            case 0x1503A8u: goto label_1503a8;
            case 0x1503ACu: goto label_1503ac;
            case 0x1503B0u: goto label_1503b0;
            case 0x1503B4u: goto label_1503b4;
            case 0x1503B8u: goto label_1503b8;
            case 0x1503BCu: goto label_1503bc;
            case 0x1503C0u: goto label_1503c0;
            case 0x1503C4u: goto label_1503c4;
            case 0x1503C8u: goto label_1503c8;
            case 0x1503CCu: goto label_1503cc;
            case 0x1503D0u: goto label_1503d0;
            case 0x1503D4u: goto label_1503d4;
            case 0x1503D8u: goto label_1503d8;
            case 0x1503DCu: goto label_1503dc;
            case 0x1503E0u: goto label_1503e0;
            case 0x1503E4u: goto label_1503e4;
            case 0x1503E8u: goto label_1503e8;
            case 0x1503ECu: goto label_1503ec;
            case 0x1503F0u: goto label_1503f0;
            case 0x1503F4u: goto label_1503f4;
            case 0x1503F8u: goto label_1503f8;
            case 0x1503FCu: goto label_1503fc;
            case 0x150400u: goto label_150400;
            case 0x150404u: goto label_150404;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1503FCu; }
            if (ctx->pc != 0x1503FCu) { return; }
        }
    }
    ctx->pc = 0x1503FCu;
label_1503fc:
    // 0x1503fc: 0xdfbf0000
    ctx->pc = 0x1503fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_150400:
    // 0x150400: 0x3e00008
label_150404:
    if (ctx->pc == 0x150404u) {
        ctx->pc = 0x150404u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x150408u;
        goto label_fallthrough_0x150400;
    }
    ctx->pc = 0x150400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150404u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1502F0u: goto label_1502f0;
            case 0x1502F4u: goto label_1502f4;
            case 0x1502F8u: goto label_1502f8;
            case 0x1502FCu: goto label_1502fc;
            case 0x150300u: goto label_150300;
            case 0x150304u: goto label_150304;
            case 0x150308u: goto label_150308;
            case 0x15030Cu: goto label_15030c;
            case 0x150310u: goto label_150310;
            case 0x150314u: goto label_150314;
            case 0x150318u: goto label_150318;
            case 0x15031Cu: goto label_15031c;
            case 0x150320u: goto label_150320;
            case 0x150324u: goto label_150324;
            case 0x150328u: goto label_150328;
            case 0x15032Cu: goto label_15032c;
            case 0x150330u: goto label_150330;
            case 0x150334u: goto label_150334;
            case 0x150338u: goto label_150338;
            case 0x15033Cu: goto label_15033c;
            case 0x150340u: goto label_150340;
            case 0x150344u: goto label_150344;
            case 0x150348u: goto label_150348;
            case 0x15034Cu: goto label_15034c;
            case 0x150350u: goto label_150350;
            case 0x150354u: goto label_150354;
            case 0x150358u: goto label_150358;
            case 0x15035Cu: goto label_15035c;
            case 0x150360u: goto label_150360;
            case 0x150364u: goto label_150364;
            case 0x150368u: goto label_150368;
            case 0x15036Cu: goto label_15036c;
            case 0x150370u: goto label_150370;
            case 0x150374u: goto label_150374;
            case 0x150378u: goto label_150378;
            case 0x15037Cu: goto label_15037c;
            case 0x150380u: goto label_150380;
            case 0x150384u: goto label_150384;
            case 0x150388u: goto label_150388;
            case 0x15038Cu: goto label_15038c;
            case 0x150390u: goto label_150390;
            case 0x150394u: goto label_150394;
            case 0x150398u: goto label_150398;
            case 0x15039Cu: goto label_15039c;
            case 0x1503A0u: goto label_1503a0;
            case 0x1503A4u: goto label_1503a4;
            case 0x1503A8u: goto label_1503a8;
            case 0x1503ACu: goto label_1503ac;
            case 0x1503B0u: goto label_1503b0;
            case 0x1503B4u: goto label_1503b4;
            case 0x1503B8u: goto label_1503b8;
            case 0x1503BCu: goto label_1503bc;
            case 0x1503C0u: goto label_1503c0;
            case 0x1503C4u: goto label_1503c4;
            case 0x1503C8u: goto label_1503c8;
            case 0x1503CCu: goto label_1503cc;
            case 0x1503D0u: goto label_1503d0;
            case 0x1503D4u: goto label_1503d4;
            case 0x1503D8u: goto label_1503d8;
            case 0x1503DCu: goto label_1503dc;
            case 0x1503E0u: goto label_1503e0;
            case 0x1503E4u: goto label_1503e4;
            case 0x1503E8u: goto label_1503e8;
            case 0x1503ECu: goto label_1503ec;
            case 0x1503F0u: goto label_1503f0;
            case 0x1503F4u: goto label_1503f4;
            case 0x1503F8u: goto label_1503f8;
            case 0x1503FCu: goto label_1503fc;
            case 0x150400u: goto label_150400;
            case 0x150404u: goto label_150404;
            default: break;
        }
        return;
    }
label_fallthrough_0x150400:
    ctx->pc = 0x150408u;
}
