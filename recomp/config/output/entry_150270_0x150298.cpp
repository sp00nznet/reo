#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_150270
// Address: 0x150270 - 0x150298
void entry_150270_0x150298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x150270u;

label_150270:
    // 0x150270: 0x3c020023
    ctx->pc = 0x150270u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_150274:
    // 0x150274: 0x27bdfff0
    ctx->pc = 0x150274u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_150278:
    // 0x150278: 0x8c42d810
    ctx->pc = 0x150278u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957072)));
label_15027c:
    // 0x15027c: 0x10400003
label_150280:
    if (ctx->pc == 0x150280u) {
        ctx->pc = 0x150280u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x150284u;
        goto label_150284;
    }
    ctx->pc = 0x15027Cu;
    {
        const bool branch_taken_0x15027c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x150280u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x15027c) {
            ctx->pc = 0x15028Cu;
            goto label_15028c;
        }
    }
    ctx->pc = 0x150284u;
label_150284:
    // 0x150284: 0x40f809
label_150288:
    if (ctx->pc == 0x150288u) {
        ctx->pc = 0x15028Cu;
        goto label_15028c;
    }
    ctx->pc = 0x150284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15028Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150270u: goto label_150270;
            case 0x150274u: goto label_150274;
            case 0x150278u: goto label_150278;
            case 0x15027Cu: goto label_15027c;
            case 0x150280u: goto label_150280;
            case 0x150284u: goto label_150284;
            case 0x150288u: goto label_150288;
            case 0x15028Cu: goto label_15028c;
            case 0x150290u: goto label_150290;
            case 0x150294u: goto label_150294;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15028Cu; }
            if (ctx->pc != 0x15028Cu) { return; }
        }
    }
    ctx->pc = 0x15028Cu;
label_15028c:
    // 0x15028c: 0xdfbf0000
    ctx->pc = 0x15028cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_150290:
    // 0x150290: 0x3e00008
label_150294:
    if (ctx->pc == 0x150294u) {
        ctx->pc = 0x150294u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x150298u;
        goto label_fallthrough_0x150290;
    }
    ctx->pc = 0x150290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150294u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150270u: goto label_150270;
            case 0x150274u: goto label_150274;
            case 0x150278u: goto label_150278;
            case 0x15027Cu: goto label_15027c;
            case 0x150280u: goto label_150280;
            case 0x150284u: goto label_150284;
            case 0x150288u: goto label_150288;
            case 0x15028Cu: goto label_15028c;
            case 0x150290u: goto label_150290;
            case 0x150294u: goto label_150294;
            default: break;
        }
        return;
    }
label_fallthrough_0x150290:
    ctx->pc = 0x150298u;
}
