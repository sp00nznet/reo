#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_122e40
// Address: 0x122e40 - 0x122e70
void entry_122e40_0x122e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x122e40u;

label_122e40:
    // 0x122e40: 0x27bdfff0
    ctx->pc = 0x122e40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_122e44:
    // 0x122e44: 0xffbf0000
    ctx->pc = 0x122e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_122e48:
    // 0x122e48: 0x8c8200bc
    ctx->pc = 0x122e48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_122e4c:
    // 0x122e4c: 0x10400005
label_122e50:
    if (ctx->pc == 0x122E50u) {
        ctx->pc = 0x122E50u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x122E54u;
        goto label_122e54;
    }
    ctx->pc = 0x122E4Cu;
    {
        const bool branch_taken_0x122e4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x122E50u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x122e4c) {
            ctx->pc = 0x122E64u;
            goto label_122e64;
        }
    }
    ctx->pc = 0x122E54u;
label_122e54:
    // 0x122e54: 0x3c020021
    ctx->pc = 0x122e54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_122e58:
    // 0x122e58: 0x8c43b718
    ctx->pc = 0x122e58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294948632)));
label_122e5c:
    // 0x122e5c: 0x60f809
label_122e60:
    if (ctx->pc == 0x122E60u) {
        ctx->pc = 0x122E64u;
        goto label_122e64;
    }
    ctx->pc = 0x122E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x122E64u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122E40u: goto label_122e40;
            case 0x122E44u: goto label_122e44;
            case 0x122E48u: goto label_122e48;
            case 0x122E4Cu: goto label_122e4c;
            case 0x122E50u: goto label_122e50;
            case 0x122E54u: goto label_122e54;
            case 0x122E58u: goto label_122e58;
            case 0x122E5Cu: goto label_122e5c;
            case 0x122E60u: goto label_122e60;
            case 0x122E64u: goto label_122e64;
            case 0x122E68u: goto label_122e68;
            case 0x122E6Cu: goto label_122e6c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x122E64u; }
            if (ctx->pc != 0x122E64u) { return; }
        }
    }
    ctx->pc = 0x122E64u;
label_122e64:
    // 0x122e64: 0xdfbf0000
    ctx->pc = 0x122e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_122e68:
    // 0x122e68: 0x3e00008
label_122e6c:
    if (ctx->pc == 0x122E6Cu) {
        ctx->pc = 0x122E6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x122E70u;
        goto label_fallthrough_0x122e68;
    }
    ctx->pc = 0x122E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122E6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122E40u: goto label_122e40;
            case 0x122E44u: goto label_122e44;
            case 0x122E48u: goto label_122e48;
            case 0x122E4Cu: goto label_122e4c;
            case 0x122E50u: goto label_122e50;
            case 0x122E54u: goto label_122e54;
            case 0x122E58u: goto label_122e58;
            case 0x122E5Cu: goto label_122e5c;
            case 0x122E60u: goto label_122e60;
            case 0x122E64u: goto label_122e64;
            case 0x122E68u: goto label_122e68;
            case 0x122E6Cu: goto label_122e6c;
            default: break;
        }
        return;
    }
label_fallthrough_0x122e68:
    ctx->pc = 0x122E70u;
}
