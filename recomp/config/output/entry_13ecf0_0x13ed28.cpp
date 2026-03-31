#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13ecf0
// Address: 0x13ecf0 - 0x13ed28
void entry_13ecf0_0x13ed28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13ecf0u;

label_13ecf0:
    // 0x13ecf0: 0x27bdfff0
    ctx->pc = 0x13ecf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13ecf4:
    // 0x13ecf4: 0xffbf0000
    ctx->pc = 0x13ecf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13ecf8:
    // 0x13ecf8: 0x8c820008
    ctx->pc = 0x13ecf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_13ecfc:
    // 0x13ecfc: 0x8c440008
    ctx->pc = 0x13ecfcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_13ed00:
    // 0x13ed00: 0x8c830000
    ctx->pc = 0x13ed00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13ed04:
    // 0x13ed04: 0x8c620024
    ctx->pc = 0x13ed04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_13ed08:
    // 0x13ed08: 0x40f809
label_13ed0c:
    if (ctx->pc == 0x13ED0Cu) {
        ctx->pc = 0x13ED0Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13ED10u;
        goto label_13ed10;
    }
    ctx->pc = 0x13ED08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13ED10u);
        ctx->pc = 0x13ED0Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ECF0u: goto label_13ecf0;
            case 0x13ECF4u: goto label_13ecf4;
            case 0x13ECF8u: goto label_13ecf8;
            case 0x13ECFCu: goto label_13ecfc;
            case 0x13ED00u: goto label_13ed00;
            case 0x13ED04u: goto label_13ed04;
            case 0x13ED08u: goto label_13ed08;
            case 0x13ED0Cu: goto label_13ed0c;
            case 0x13ED10u: goto label_13ed10;
            case 0x13ED14u: goto label_13ed14;
            case 0x13ED18u: goto label_13ed18;
            case 0x13ED1Cu: goto label_13ed1c;
            case 0x13ED20u: goto label_13ed20;
            case 0x13ED24u: goto label_13ed24;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13ED10u; }
            if (ctx->pc != 0x13ED10u) { return; }
        }
    }
    ctx->pc = 0x13ED10u;
label_13ed10:
    // 0x13ed10: 0x21fc2
    ctx->pc = 0x13ed10u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
label_13ed14:
    // 0x13ed14: 0xdfbf0000
    ctx->pc = 0x13ed14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13ed18:
    // 0x13ed18: 0x621821
    ctx->pc = 0x13ed18u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13ed1c:
    // 0x13ed1c: 0x31043
    ctx->pc = 0x13ed1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_13ed20:
    // 0x13ed20: 0x3e00008
label_13ed24:
    if (ctx->pc == 0x13ED24u) {
        ctx->pc = 0x13ED24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13ED28u;
        goto label_fallthrough_0x13ed20;
    }
    ctx->pc = 0x13ED20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13ED24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ECF0u: goto label_13ecf0;
            case 0x13ECF4u: goto label_13ecf4;
            case 0x13ECF8u: goto label_13ecf8;
            case 0x13ECFCu: goto label_13ecfc;
            case 0x13ED00u: goto label_13ed00;
            case 0x13ED04u: goto label_13ed04;
            case 0x13ED08u: goto label_13ed08;
            case 0x13ED0Cu: goto label_13ed0c;
            case 0x13ED10u: goto label_13ed10;
            case 0x13ED14u: goto label_13ed14;
            case 0x13ED18u: goto label_13ed18;
            case 0x13ED1Cu: goto label_13ed1c;
            case 0x13ED20u: goto label_13ed20;
            case 0x13ED24u: goto label_13ed24;
            default: break;
        }
        return;
    }
label_fallthrough_0x13ed20:
    ctx->pc = 0x13ED28u;
}
