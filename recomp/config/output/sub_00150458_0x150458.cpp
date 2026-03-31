#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00150458
// Address: 0x150458 - 0x150480
void sub_00150458_0x150458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x150458u;

label_150458:
    // 0x150458: 0x3c020023
    ctx->pc = 0x150458u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_15045c:
    // 0x15045c: 0x27bdfff0
    ctx->pc = 0x15045cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_150460:
    // 0x150460: 0x8c42d840
    ctx->pc = 0x150460u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957120)));
label_150464:
    // 0x150464: 0x10400003
label_150468:
    if (ctx->pc == 0x150468u) {
        ctx->pc = 0x150468u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x15046Cu;
        goto label_15046c;
    }
    ctx->pc = 0x150464u;
    {
        const bool branch_taken_0x150464 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x150468u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x150464) {
            ctx->pc = 0x150474u;
            goto label_150474;
        }
    }
    ctx->pc = 0x15046Cu;
label_15046c:
    // 0x15046c: 0x40f809
label_150470:
    if (ctx->pc == 0x150470u) {
        ctx->pc = 0x150474u;
        goto label_150474;
    }
    ctx->pc = 0x15046Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x150474u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150458u: goto label_150458;
            case 0x15045Cu: goto label_15045c;
            case 0x150460u: goto label_150460;
            case 0x150464u: goto label_150464;
            case 0x150468u: goto label_150468;
            case 0x15046Cu: goto label_15046c;
            case 0x150470u: goto label_150470;
            case 0x150474u: goto label_150474;
            case 0x150478u: goto label_150478;
            case 0x15047Cu: goto label_15047c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x150474u; }
            if (ctx->pc != 0x150474u) { return; }
        }
    }
    ctx->pc = 0x150474u;
label_150474:
    // 0x150474: 0xdfbf0000
    ctx->pc = 0x150474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_150478:
    // 0x150478: 0x3e00008
label_15047c:
    if (ctx->pc == 0x15047Cu) {
        ctx->pc = 0x15047Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x150480u;
        goto label_fallthrough_0x150478;
    }
    ctx->pc = 0x150478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15047Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150458u: goto label_150458;
            case 0x15045Cu: goto label_15045c;
            case 0x150460u: goto label_150460;
            case 0x150464u: goto label_150464;
            case 0x150468u: goto label_150468;
            case 0x15046Cu: goto label_15046c;
            case 0x150470u: goto label_150470;
            case 0x150474u: goto label_150474;
            case 0x150478u: goto label_150478;
            case 0x15047Cu: goto label_15047c;
            default: break;
        }
        return;
    }
label_fallthrough_0x150478:
    ctx->pc = 0x150480u;
}
