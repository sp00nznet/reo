#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C0420
// Address: 0x1c0420 - 0x1c0450
void sub_001C0420_0x1c0420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c0420u;

    // 0x1c0420: 0x27bdfff0
    ctx->pc = 0x1c0420u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c0424: 0x2403ffff
    ctx->pc = 0x1c0424u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c0428: 0xffbf0000
    ctx->pc = 0x1c0428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c042c: 0x8c840024
    ctx->pc = 0x1c042cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1c0430: 0x10830003
    ctx->pc = 0x1C0430u;
    {
        const bool branch_taken_0x1c0430 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c0430) {
            ctx->pc = 0x1C0440u;
            goto label_1c0440;
        }
    }
    ctx->pc = 0x1C0438u;
    // 0x1c0438: 0xc0700fc
    ctx->pc = 0x1C0438u;
    SET_GPR_U32(ctx, 31, 0x1C0440u);
    ctx->pc = 0x1C03F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C03F0_0x1c03f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0440u; }
    }
    if (ctx->pc != 0x1C0440u) { return; }
    ctx->pc = 0x1C0440u;
label_1c0440:
    // 0x1c0440: 0xdfbf0000
    ctx->pc = 0x1c0440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0444: 0x3e00008
    ctx->pc = 0x1C0444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0448u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0440u: goto label_1c0440;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C044Cu;
    // 0x1c044c: 0x0
    ctx->pc = 0x1c044cu;
    // NOP
}
