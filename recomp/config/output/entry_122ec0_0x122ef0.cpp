#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_122ec0
// Address: 0x122ec0 - 0x122ef0
void entry_122ec0_0x122ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x122ec0u;

label_122ec0:
    // 0x122ec0: 0x27bdfff0
    ctx->pc = 0x122ec0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_122ec4:
    // 0x122ec4: 0xffbf0000
    ctx->pc = 0x122ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_122ec8:
    // 0x122ec8: 0x8c8200bc
    ctx->pc = 0x122ec8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_122ecc:
    // 0x122ecc: 0x10400004
label_122ed0:
    if (ctx->pc == 0x122ED0u) {
        ctx->pc = 0x122ED0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
        ctx->pc = 0x122ED4u;
        goto label_122ed4;
    }
    ctx->pc = 0x122ECCu;
    {
        const bool branch_taken_0x122ecc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x122ED0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
        if (branch_taken_0x122ecc) {
            ctx->pc = 0x122EE0u;
            goto label_122ee0;
        }
    }
    ctx->pc = 0x122ED4u;
label_122ed4:
    // 0x122ed4: 0x8c43b720
    ctx->pc = 0x122ed4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294948640)));
label_122ed8:
    // 0x122ed8: 0x60f809
label_122edc:
    if (ctx->pc == 0x122EDCu) {
        ctx->pc = 0x122EE0u;
        goto label_122ee0;
    }
    ctx->pc = 0x122ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x122EE0u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122EC0u: goto label_122ec0;
            case 0x122EC4u: goto label_122ec4;
            case 0x122EC8u: goto label_122ec8;
            case 0x122ECCu: goto label_122ecc;
            case 0x122ED0u: goto label_122ed0;
            case 0x122ED4u: goto label_122ed4;
            case 0x122ED8u: goto label_122ed8;
            case 0x122EDCu: goto label_122edc;
            case 0x122EE0u: goto label_122ee0;
            case 0x122EE4u: goto label_122ee4;
            case 0x122EE8u: goto label_122ee8;
            case 0x122EECu: goto label_122eec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x122EE0u; }
            if (ctx->pc != 0x122EE0u) { return; }
        }
    }
    ctx->pc = 0x122EE0u;
label_122ee0:
    // 0x122ee0: 0xdfbf0000
    ctx->pc = 0x122ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_122ee4:
    // 0x122ee4: 0x3e00008
label_122ee8:
    if (ctx->pc == 0x122EE8u) {
        ctx->pc = 0x122EE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x122EECu;
        goto label_122eec;
    }
    ctx->pc = 0x122EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122EE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122EC0u: goto label_122ec0;
            case 0x122EC4u: goto label_122ec4;
            case 0x122EC8u: goto label_122ec8;
            case 0x122ECCu: goto label_122ecc;
            case 0x122ED0u: goto label_122ed0;
            case 0x122ED4u: goto label_122ed4;
            case 0x122ED8u: goto label_122ed8;
            case 0x122EDCu: goto label_122edc;
            case 0x122EE0u: goto label_122ee0;
            case 0x122EE4u: goto label_122ee4;
            case 0x122EE8u: goto label_122ee8;
            case 0x122EECu: goto label_122eec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122EECu;
label_122eec:
    // 0x122eec: 0x0
    ctx->pc = 0x122eecu;
    // NOP
}
