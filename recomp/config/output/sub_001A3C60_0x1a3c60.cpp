#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A3C60
// Address: 0x1a3c60 - 0x1a3ca0
void sub_001A3C60_0x1a3c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a3c60u;

    // 0x1a3c60: 0x27bdfff0
    ctx->pc = 0x1a3c60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a3c64: 0xa0402d
    ctx->pc = 0x1a3c64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3c68: 0xffbf0000
    ctx->pc = 0x1a3c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a3c6c: 0x3c05000b
    ctx->pc = 0x1a3c6cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)11 << 16));
    // 0x1a3c70: 0xc068d7c
    ctx->pc = 0x1A3C70u;
    SET_GPR_U32(ctx, 31, 0x1A3C78u);
    ctx->pc = 0x1A3C74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A35F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35F0_0x1a35f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3C78u; }
    }
    if (ctx->pc != 0x1A3C78u) { return; }
    ctx->pc = 0x1A3C78u;
    // 0x1a3c78: 0x14400003
    ctx->pc = 0x1A3C78u;
    {
        const bool branch_taken_0x1a3c78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A3C7Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 4));
        if (branch_taken_0x1a3c78) {
            ctx->pc = 0x1A3C88u;
            goto label_1a3c88;
        }
    }
    ctx->pc = 0x1A3C80u;
    // 0x1a3c80: 0x10000003
    ctx->pc = 0x1A3C80u;
    {
        const bool branch_taken_0x1a3c80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3C84u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3c80) {
            ctx->pc = 0x1A3C90u;
            goto label_1a3c90;
        }
    }
    ctx->pc = 0x1A3C88u;
label_1a3c88:
    // 0x1a3c88: 0x621021
    ctx->pc = 0x1a3c88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a3c8c: 0x2442000c
    ctx->pc = 0x1a3c8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
label_1a3c90:
    // 0x1a3c90: 0xdfbf0000
    ctx->pc = 0x1a3c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3c94: 0x3e00008
    ctx->pc = 0x1A3C94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3C98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3C88u: goto label_1a3c88;
            case 0x1A3C90u: goto label_1a3c90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A3C9Cu;
    // 0x1a3c9c: 0x0
    ctx->pc = 0x1a3c9cu;
    // NOP
}
