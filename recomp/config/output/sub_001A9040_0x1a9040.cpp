#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A9040
// Address: 0x1a9040 - 0x1a9070
void sub_001A9040_0x1a9040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a9040u;

    // 0x1a9040: 0x27bdfff0
    ctx->pc = 0x1a9040u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a9044: 0x3c01002b
    ctx->pc = 0x1a9044u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a9048: 0xffbf0000
    ctx->pc = 0x1a9048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a904c: 0x8c230ec0
    ctx->pc = 0x1a904cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 3776)));
    // 0x1a9050: 0x10600003
    ctx->pc = 0x1A9050u;
    {
        const bool branch_taken_0x1a9050 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9054u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a9050) {
            ctx->pc = 0x1A9060u;
            goto label_1a9060;
        }
    }
    ctx->pc = 0x1A9058u;
    // 0x1a9058: 0xc04afb8
    ctx->pc = 0x1A9058u;
    SET_GPR_U32(ctx, 31, 0x1A9060u);
    ctx->pc = 0x12BEE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BEE0_0x12bee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9060u; }
    }
    if (ctx->pc != 0x1A9060u) { return; }
    ctx->pc = 0x1A9060u;
label_1a9060:
    // 0x1a9060: 0xdfbf0000
    ctx->pc = 0x1a9060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9064: 0x3e00008
    ctx->pc = 0x1A9064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9068u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9060u: goto label_1a9060;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A906Cu;
    // 0x1a906c: 0x0
    ctx->pc = 0x1a906cu;
    // NOP
}
