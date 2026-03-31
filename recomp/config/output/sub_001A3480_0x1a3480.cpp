#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A3480
// Address: 0x1a3480 - 0x1a34b0
void sub_001A3480_0x1a3480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a3480u;

    // 0x1a3480: 0x27bdfff0
    ctx->pc = 0x1a3480u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a3484: 0xffbf0000
    ctx->pc = 0x1a3484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a3488: 0xc068cf8
    ctx->pc = 0x1A3488u;
    SET_GPR_U32(ctx, 31, 0x1A3490u);
    ctx->pc = 0x1A33E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A33E0_0x1a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3490u; }
    }
    if (ctx->pc != 0x1A3490u) { return; }
    ctx->pc = 0x1A3490u;
    // 0x1a3490: 0x14400003
    ctx->pc = 0x1A3490u;
    {
        const bool branch_taken_0x1a3490 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a3490) {
            ctx->pc = 0x1A34A0u;
            goto label_1a34a0;
        }
    }
    ctx->pc = 0x1A3498u;
    // 0x1a3498: 0x10000002
    ctx->pc = 0x1A3498u;
    {
        const bool branch_taken_0x1a3498 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A349Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3498) {
            ctx->pc = 0x1A34A4u;
            goto label_1a34a4;
        }
    }
    ctx->pc = 0x1A34A0u;
label_1a34a0:
    // 0x1a34a0: 0x2442000c
    ctx->pc = 0x1a34a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
label_1a34a4:
    // 0x1a34a4: 0xdfbf0000
    ctx->pc = 0x1a34a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a34a8: 0x3e00008
    ctx->pc = 0x1A34A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A34ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A34A0u: goto label_1a34a0;
            case 0x1A34A4u: goto label_1a34a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A34B0u;
}
