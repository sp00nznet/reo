#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017D1C8
// Address: 0x17d1c8 - 0x17d208
void sub_0017D1C8_0x17d1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d1c8u;

label_17d1c8:
    // 0x17d1c8: 0x27bdfff0
    ctx->pc = 0x17d1c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_17d1cc:
    // 0x17d1cc: 0x3c020023
    ctx->pc = 0x17d1ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_17d1d0:
    // 0x17d1d0: 0xffbf0000
    ctx->pc = 0x17d1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17d1d4:
    // 0x17d1d4: 0x2442f2a8
    ctx->pc = 0x17d1d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294963880));
label_17d1d8:
    // 0x17d1d8: 0xc0282d
    ctx->pc = 0x17d1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17d1dc:
    // 0x17d1dc: 0x8c430008
    ctx->pc = 0x17d1dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_17d1e0:
    // 0x17d1e0: 0x8c460000
    ctx->pc = 0x17d1e0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17d1e4:
    // 0x17d1e4: 0x24630001
    ctx->pc = 0x17d1e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_17d1e8:
    // 0x17d1e8: 0x8c440004
    ctx->pc = 0x17d1e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17d1ec:
    // 0x17d1ec: 0x10c00003
label_17d1f0:
    if (ctx->pc == 0x17D1F0u) {
        ctx->pc = 0x17D1F0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x17D1F4u;
        goto label_17d1f4;
    }
    ctx->pc = 0x17D1ECu;
    {
        const bool branch_taken_0x17d1ec = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x17D1F0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        if (branch_taken_0x17d1ec) {
            ctx->pc = 0x17D1FCu;
            goto label_17d1fc;
        }
    }
    ctx->pc = 0x17D1F4u;
label_17d1f4:
    // 0x17d1f4: 0xc0f809
label_17d1f8:
    if (ctx->pc == 0x17D1F8u) {
        ctx->pc = 0x17D1FCu;
        goto label_17d1fc;
    }
    ctx->pc = 0x17D1F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x17D1FCu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D1C8u: goto label_17d1c8;
            case 0x17D1CCu: goto label_17d1cc;
            case 0x17D1D0u: goto label_17d1d0;
            case 0x17D1D4u: goto label_17d1d4;
            case 0x17D1D8u: goto label_17d1d8;
            case 0x17D1DCu: goto label_17d1dc;
            case 0x17D1E0u: goto label_17d1e0;
            case 0x17D1E4u: goto label_17d1e4;
            case 0x17D1E8u: goto label_17d1e8;
            case 0x17D1ECu: goto label_17d1ec;
            case 0x17D1F0u: goto label_17d1f0;
            case 0x17D1F4u: goto label_17d1f4;
            case 0x17D1F8u: goto label_17d1f8;
            case 0x17D1FCu: goto label_17d1fc;
            case 0x17D200u: goto label_17d200;
            case 0x17D204u: goto label_17d204;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17D1FCu; }
            if (ctx->pc != 0x17D1FCu) { return; }
        }
    }
    ctx->pc = 0x17D1FCu;
label_17d1fc:
    // 0x17d1fc: 0xdfbf0000
    ctx->pc = 0x17d1fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17d200:
    // 0x17d200: 0x3e00008
label_17d204:
    if (ctx->pc == 0x17D204u) {
        ctx->pc = 0x17D204u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x17D208u;
        goto label_fallthrough_0x17d200;
    }
    ctx->pc = 0x17D200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D204u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D1C8u: goto label_17d1c8;
            case 0x17D1CCu: goto label_17d1cc;
            case 0x17D1D0u: goto label_17d1d0;
            case 0x17D1D4u: goto label_17d1d4;
            case 0x17D1D8u: goto label_17d1d8;
            case 0x17D1DCu: goto label_17d1dc;
            case 0x17D1E0u: goto label_17d1e0;
            case 0x17D1E4u: goto label_17d1e4;
            case 0x17D1E8u: goto label_17d1e8;
            case 0x17D1ECu: goto label_17d1ec;
            case 0x17D1F0u: goto label_17d1f0;
            case 0x17D1F4u: goto label_17d1f4;
            case 0x17D1F8u: goto label_17d1f8;
            case 0x17D1FCu: goto label_17d1fc;
            case 0x17D200u: goto label_17d200;
            case 0x17D204u: goto label_17d204;
            default: break;
        }
        return;
    }
label_fallthrough_0x17d200:
    ctx->pc = 0x17D208u;
}
