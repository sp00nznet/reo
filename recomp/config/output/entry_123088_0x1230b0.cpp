#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_123088
// Address: 0x123088 - 0x1230b0
void entry_123088_0x1230b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x123088u;

label_123088:
    // 0x123088: 0x27bdfff0
    ctx->pc = 0x123088u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_12308c:
    // 0x12308c: 0x3c020021
    ctx->pc = 0x12308cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_123090:
    // 0x123090: 0xffbf0000
    ctx->pc = 0x123090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_123094:
    // 0x123094: 0x8c43b734
    ctx->pc = 0x123094u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_123098:
    // 0x123098: 0x60f809
label_12309c:
    if (ctx->pc == 0x12309Cu) {
        ctx->pc = 0x1230A0u;
        goto label_1230a0;
    }
    ctx->pc = 0x123098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1230A0u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123088u: goto label_123088;
            case 0x12308Cu: goto label_12308c;
            case 0x123090u: goto label_123090;
            case 0x123094u: goto label_123094;
            case 0x123098u: goto label_123098;
            case 0x12309Cu: goto label_12309c;
            case 0x1230A0u: goto label_1230a0;
            case 0x1230A4u: goto label_1230a4;
            case 0x1230A8u: goto label_1230a8;
            case 0x1230ACu: goto label_1230ac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1230A0u; }
            if (ctx->pc != 0x1230A0u) { return; }
        }
    }
    ctx->pc = 0x1230A0u;
label_1230a0:
    // 0x1230a0: 0xdfbf0000
    ctx->pc = 0x1230a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1230a4:
    // 0x1230a4: 0x3e00008
label_1230a8:
    if (ctx->pc == 0x1230A8u) {
        ctx->pc = 0x1230A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1230ACu;
        goto label_1230ac;
    }
    ctx->pc = 0x1230A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1230A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123088u: goto label_123088;
            case 0x12308Cu: goto label_12308c;
            case 0x123090u: goto label_123090;
            case 0x123094u: goto label_123094;
            case 0x123098u: goto label_123098;
            case 0x12309Cu: goto label_12309c;
            case 0x1230A0u: goto label_1230a0;
            case 0x1230A4u: goto label_1230a4;
            case 0x1230A8u: goto label_1230a8;
            case 0x1230ACu: goto label_1230ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1230ACu;
label_1230ac:
    // 0x1230ac: 0x0
    ctx->pc = 0x1230acu;
    // NOP
}
