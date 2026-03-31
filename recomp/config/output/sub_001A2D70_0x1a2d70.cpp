#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A2D70
// Address: 0x1a2d70 - 0x1a2da0
void sub_001A2D70_0x1a2d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a2d70u;

    // 0x1a2d70: 0x27bdfff0
    ctx->pc = 0x1a2d70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2d74: 0xffbf0000
    ctx->pc = 0x1a2d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2d78: 0xc068b3c
    ctx->pc = 0x1A2D78u;
    SET_GPR_U32(ctx, 31, 0x1A2D80u);
    ctx->pc = 0x1A2CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2CF0_0x1a2cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2D80u; }
    }
    if (ctx->pc != 0x1A2D80u) { return; }
    ctx->pc = 0x1A2D80u;
    // 0x1a2d80: 0x10400003
    ctx->pc = 0x1A2D80u;
    {
        const bool branch_taken_0x1a2d80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a2d80) {
            ctx->pc = 0x1A2D90u;
            goto label_1a2d90;
        }
    }
    ctx->pc = 0x1A2D88u;
    // 0x1a2d88: 0x10000002
    ctx->pc = 0x1A2D88u;
    {
        const bool branch_taken_0x1a2d88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2D8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
        if (branch_taken_0x1a2d88) {
            ctx->pc = 0x1A2D94u;
            goto label_1a2d94;
        }
    }
    ctx->pc = 0x1A2D90u;
label_1a2d90:
    // 0x1a2d90: 0x102d
    ctx->pc = 0x1a2d90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2d94:
    // 0x1a2d94: 0xdfbf0000
    ctx->pc = 0x1a2d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2d98: 0x3e00008
    ctx->pc = 0x1A2D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2D9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2D90u: goto label_1a2d90;
            case 0x1A2D94u: goto label_1a2d94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A2DA0u;
}
