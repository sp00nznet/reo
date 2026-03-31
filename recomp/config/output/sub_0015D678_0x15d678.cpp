#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015D678
// Address: 0x15d678 - 0x15d6b0
void sub_0015D678_0x15d678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15d678u;

label_15d678:
    // 0x15d678: 0x27bdfff0
    ctx->pc = 0x15d678u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_15d67c:
    // 0x15d67c: 0xffb00000
    ctx->pc = 0x15d67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15d680:
    // 0x15d680: 0xffbf0008
    ctx->pc = 0x15d680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_15d684:
    // 0x15d684: 0xc05799e
label_15d688:
    if (ctx->pc == 0x15D688u) {
        ctx->pc = 0x15D688u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15D68Cu;
        goto label_15d68c;
    }
    ctx->pc = 0x15D684u;
    SET_GPR_U32(ctx, 31, 0x15D68Cu);
    ctx->pc = 0x15D688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15E678u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E678_0x15e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D68Cu; }
    }
    if (ctx->pc != 0x15D68Cu) { return; }
    ctx->pc = 0x15D68Cu;
label_15d68c:
    // 0x15d68c: 0x8c440030
    ctx->pc = 0x15d68cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_15d690:
    // 0x15d690: 0x8c420028
    ctx->pc = 0x15d690u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_15d694:
    // 0x15d694: 0x40f809
label_15d698:
    if (ctx->pc == 0x15D698u) {
        ctx->pc = 0x15D698u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15D69Cu;
        goto label_15d69c;
    }
    ctx->pc = 0x15D694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15D69Cu);
        ctx->pc = 0x15D698u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D678u: goto label_15d678;
            case 0x15D67Cu: goto label_15d67c;
            case 0x15D680u: goto label_15d680;
            case 0x15D684u: goto label_15d684;
            case 0x15D688u: goto label_15d688;
            case 0x15D68Cu: goto label_15d68c;
            case 0x15D690u: goto label_15d690;
            case 0x15D694u: goto label_15d694;
            case 0x15D698u: goto label_15d698;
            case 0x15D69Cu: goto label_15d69c;
            case 0x15D6A0u: goto label_15d6a0;
            case 0x15D6A4u: goto label_15d6a4;
            case 0x15D6A8u: goto label_15d6a8;
            case 0x15D6ACu: goto label_15d6ac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15D69Cu; }
            if (ctx->pc != 0x15D69Cu) { return; }
        }
    }
    ctx->pc = 0x15D69Cu;
label_15d69c:
    // 0x15d69c: 0xdfb00000
    ctx->pc = 0x15d69cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15d6a0:
    // 0x15d6a0: 0xdfbf0008
    ctx->pc = 0x15d6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15d6a4:
    // 0x15d6a4: 0x3e00008
label_15d6a8:
    if (ctx->pc == 0x15D6A8u) {
        ctx->pc = 0x15D6A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x15D6ACu;
        goto label_15d6ac;
    }
    ctx->pc = 0x15D6A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D6A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D678u: goto label_15d678;
            case 0x15D67Cu: goto label_15d67c;
            case 0x15D680u: goto label_15d680;
            case 0x15D684u: goto label_15d684;
            case 0x15D688u: goto label_15d688;
            case 0x15D68Cu: goto label_15d68c;
            case 0x15D690u: goto label_15d690;
            case 0x15D694u: goto label_15d694;
            case 0x15D698u: goto label_15d698;
            case 0x15D69Cu: goto label_15d69c;
            case 0x15D6A0u: goto label_15d6a0;
            case 0x15D6A4u: goto label_15d6a4;
            case 0x15D6A8u: goto label_15d6a8;
            case 0x15D6ACu: goto label_15d6ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D6ACu;
label_15d6ac:
    // 0x15d6ac: 0x0
    ctx->pc = 0x15d6acu;
    // NOP
}
