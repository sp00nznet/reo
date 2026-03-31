#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A36A0
// Address: 0x1a36a0 - 0x1a36e0
void sub_001A36A0_0x1a36a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a36a0u;

    // 0x1a36a0: 0x27bdfff0
    ctx->pc = 0x1a36a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a36a4: 0x24050005
    ctx->pc = 0x1a36a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a36a8: 0xffbf0000
    ctx->pc = 0x1a36a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a36ac: 0xc068d7c
    ctx->pc = 0x1A36ACu;
    SET_GPR_U32(ctx, 31, 0x1A36B4u);
    ctx->pc = 0x1A36B0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A35F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35F0_0x1a35f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A36B4u; }
    }
    if (ctx->pc != 0x1A36B4u) { return; }
    ctx->pc = 0x1A36B4u;
    // 0x1a36b4: 0x14400003
    ctx->pc = 0x1A36B4u;
    {
        const bool branch_taken_0x1a36b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a36b4) {
            ctx->pc = 0x1A36C4u;
            goto label_1a36c4;
        }
    }
    ctx->pc = 0x1A36BCu;
    // 0x1a36bc: 0x10000002
    ctx->pc = 0x1A36BCu;
    {
        const bool branch_taken_0x1a36bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A36C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a36bc) {
            ctx->pc = 0x1A36C8u;
            goto label_1a36c8;
        }
    }
    ctx->pc = 0x1A36C4u;
label_1a36c4:
    // 0x1a36c4: 0x8c420004
    ctx->pc = 0x1a36c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a36c8:
    // 0x1a36c8: 0xdfbf0000
    ctx->pc = 0x1a36c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a36cc: 0x3e00008
    ctx->pc = 0x1A36CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A36D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A36C4u: goto label_1a36c4;
            case 0x1A36C8u: goto label_1a36c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A36D4u;
    // 0x1a36d4: 0x0
    ctx->pc = 0x1a36d4u;
    // NOP
    // 0x1a36d8: 0x0
    ctx->pc = 0x1a36d8u;
    // NOP
    // 0x1a36dc: 0x0
    ctx->pc = 0x1a36dcu;
    // NOP
}
