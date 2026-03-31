#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C8080
// Address: 0x1c8080 - 0x1c80d0
void sub_001C8080_0x1c8080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c8080u;

    // 0x1c8080: 0x27bdfff0
    ctx->pc = 0x1c8080u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8084: 0x3c010034
    ctx->pc = 0x1c8084u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c8088: 0xffbf0000
    ctx->pc = 0x1c8088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c808c: 0x8c23d158
    ctx->pc = 0x1c808cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294955352)));
    // 0x1c8090: 0x1460000a
    ctx->pc = 0x1C8090u;
    {
        const bool branch_taken_0x1c8090 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C8094u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x1c8090) {
            ctx->pc = 0x1C80BCu;
            goto label_1c80bc;
        }
    }
    ctx->pc = 0x1C8098u;
    // 0x1c8098: 0x240500ff
    ctx->pc = 0x1c8098u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1c809c: 0x2484cd80
    ctx->pc = 0x1c809cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954368));
    // 0x1c80a0: 0xc041f1a
    ctx->pc = 0x1C80A0u;
    SET_GPR_U32(ctx, 31, 0x1C80A8u);
    ctx->pc = 0x1C80A4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C80A8u; }
    }
    if (ctx->pc != 0x1C80A8u) { return; }
    ctx->pc = 0x1C80A8u;
    // 0x1c80a8: 0x2403ffff
    ctx->pc = 0x1c80a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c80ac: 0x3c010034
    ctx->pc = 0x1c80acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c80b0: 0xac23cd78
    ctx->pc = 0x1c80b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954360), GPR_U32(ctx, 3));
    // 0x1c80b4: 0x3c010034
    ctx->pc = 0x1c80b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c80b8: 0xac23cd70
    ctx->pc = 0x1c80b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954352), GPR_U32(ctx, 3));
label_1c80bc:
    // 0x1c80bc: 0xdfbf0000
    ctx->pc = 0x1c80bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c80c0: 0x3e00008
    ctx->pc = 0x1C80C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C80C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C80BCu: goto label_1c80bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C80C8u;
    // 0x1c80c8: 0x0
    ctx->pc = 0x1c80c8u;
    // NOP
    // 0x1c80cc: 0x0
    ctx->pc = 0x1c80ccu;
    // NOP
}
