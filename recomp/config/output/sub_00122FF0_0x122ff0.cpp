#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00122FF0
// Address: 0x122ff0 - 0x123020
void sub_00122FF0_0x122ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x122ff0u;

label_122ff0:
    // 0x122ff0: 0x27bdfff0
    ctx->pc = 0x122ff0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_122ff4:
    // 0x122ff4: 0xffbf0000
    ctx->pc = 0x122ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_122ff8:
    // 0x122ff8: 0x8c8200b0
    ctx->pc = 0x122ff8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_122ffc:
    // 0x122ffc: 0x10400005
label_123000:
    if (ctx->pc == 0x123000u) {
        ctx->pc = 0x123000u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x123004u;
        goto label_123004;
    }
    ctx->pc = 0x122FFCu;
    {
        const bool branch_taken_0x122ffc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x123000u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x122ffc) {
            ctx->pc = 0x123014u;
            goto label_123014;
        }
    }
    ctx->pc = 0x123004u;
label_123004:
    // 0x123004: 0x3c020021
    ctx->pc = 0x123004u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_123008:
    // 0x123008: 0x8c43b728
    ctx->pc = 0x123008u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294948648)));
label_12300c:
    // 0x12300c: 0x60f809
label_123010:
    if (ctx->pc == 0x123010u) {
        ctx->pc = 0x123014u;
        goto label_123014;
    }
    ctx->pc = 0x12300Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x123014u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122FF0u: goto label_122ff0;
            case 0x122FF4u: goto label_122ff4;
            case 0x122FF8u: goto label_122ff8;
            case 0x122FFCu: goto label_122ffc;
            case 0x123000u: goto label_123000;
            case 0x123004u: goto label_123004;
            case 0x123008u: goto label_123008;
            case 0x12300Cu: goto label_12300c;
            case 0x123010u: goto label_123010;
            case 0x123014u: goto label_123014;
            case 0x123018u: goto label_123018;
            case 0x12301Cu: goto label_12301c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x123014u; }
            if (ctx->pc != 0x123014u) { return; }
        }
    }
    ctx->pc = 0x123014u;
label_123014:
    // 0x123014: 0xdfbf0000
    ctx->pc = 0x123014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123018:
    // 0x123018: 0x3e00008
label_12301c:
    if (ctx->pc == 0x12301Cu) {
        ctx->pc = 0x12301Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x123020u;
        goto label_fallthrough_0x123018;
    }
    ctx->pc = 0x123018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12301Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122FF0u: goto label_122ff0;
            case 0x122FF4u: goto label_122ff4;
            case 0x122FF8u: goto label_122ff8;
            case 0x122FFCu: goto label_122ffc;
            case 0x123000u: goto label_123000;
            case 0x123004u: goto label_123004;
            case 0x123008u: goto label_123008;
            case 0x12300Cu: goto label_12300c;
            case 0x123010u: goto label_123010;
            case 0x123014u: goto label_123014;
            case 0x123018u: goto label_123018;
            case 0x12301Cu: goto label_12301c;
            default: break;
        }
        return;
    }
label_fallthrough_0x123018:
    ctx->pc = 0x123020u;
}
