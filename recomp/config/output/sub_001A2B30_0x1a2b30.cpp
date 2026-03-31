#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A2B30
// Address: 0x1a2b30 - 0x1a2b60
void sub_001A2B30_0x1a2b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a2b30u;

    // 0x1a2b30: 0x27bdfff0
    ctx->pc = 0x1a2b30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2b34: 0xffbf0000
    ctx->pc = 0x1a2b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2b38: 0xc068b24
    ctx->pc = 0x1A2B38u;
    SET_GPR_U32(ctx, 31, 0x1A2B40u);
    ctx->pc = 0x1A2B3Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A2C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2C90_0x1a2c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2B40u; }
    }
    if (ctx->pc != 0x1A2B40u) { return; }
    ctx->pc = 0x1A2B40u;
    // 0x1a2b40: 0x10400003
    ctx->pc = 0x1A2B40u;
    {
        const bool branch_taken_0x1a2b40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a2b40) {
            ctx->pc = 0x1A2B50u;
            goto label_1a2b50;
        }
    }
    ctx->pc = 0x1A2B48u;
    // 0x1a2b48: 0x10000002
    ctx->pc = 0x1A2B48u;
    {
        const bool branch_taken_0x1a2b48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2B4Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
        if (branch_taken_0x1a2b48) {
            ctx->pc = 0x1A2B54u;
            goto label_1a2b54;
        }
    }
    ctx->pc = 0x1A2B50u;
label_1a2b50:
    // 0x1a2b50: 0x102d
    ctx->pc = 0x1a2b50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2b54:
    // 0x1a2b54: 0xdfbf0000
    ctx->pc = 0x1a2b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2b58: 0x3e00008
    ctx->pc = 0x1A2B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2B5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2B50u: goto label_1a2b50;
            case 0x1A2B54u: goto label_1a2b54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A2B60u;
}
