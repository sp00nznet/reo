#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B06A0
// Address: 0x1b06a0 - 0x1b06f0
void sub_001B06A0_0x1b06a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b06a0u;

    // 0x1b06a0: 0x27bdfff0
    ctx->pc = 0x1b06a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b06a4: 0x3c01002c
    ctx->pc = 0x1b06a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b06a8: 0xffbf0000
    ctx->pc = 0x1b06a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b06ac: 0x8c238df8
    ctx->pc = 0x1b06acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294938104)));
    // 0x1b06b0: 0x1060000b
    ctx->pc = 0x1B06B0u;
    {
        const bool branch_taken_0x1b06b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B06B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b06b0) {
            ctx->pc = 0x1B06E0u;
            goto label_1b06e0;
        }
    }
    ctx->pc = 0x1B06B8u;
    // 0x1b06b8: 0xc067db0
    ctx->pc = 0x1B06B8u;
    SET_GPR_U32(ctx, 31, 0x1B06C0u);
    ctx->pc = 0x19F6C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F6C0_0x19f6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06C0u; }
    }
    if (ctx->pc != 0x1B06C0u) { return; }
    ctx->pc = 0x1B06C0u;
    // 0x1b06c0: 0x3c01002c
    ctx->pc = 0x1b06c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b06c4: 0x8c228e00
    ctx->pc = 0x1b06c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294938112)));
    // 0x1b06c8: 0x14400003
    ctx->pc = 0x1B06C8u;
    {
        const bool branch_taken_0x1b06c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b06c8) {
            ctx->pc = 0x1B06D8u;
            goto label_1b06d8;
        }
    }
    ctx->pc = 0x1B06D0u;
    // 0x1b06d0: 0xc06c16c
    ctx->pc = 0x1B06D0u;
    SET_GPR_U32(ctx, 31, 0x1B06D8u);
    ctx->pc = 0x1B05B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B05B0_0x1b05b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06D8u; }
    }
    if (ctx->pc != 0x1B06D8u) { return; }
    ctx->pc = 0x1B06D8u;
label_1b06d8:
    // 0x1b06d8: 0xc073018
    ctx->pc = 0x1B06D8u;
    SET_GPR_U32(ctx, 31, 0x1B06E0u);
    ctx->pc = 0x1CC060u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC060_0x1cc060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06E0u; }
    }
    if (ctx->pc != 0x1B06E0u) { return; }
    ctx->pc = 0x1B06E0u;
label_1b06e0:
    // 0x1b06e0: 0xdfbf0000
    ctx->pc = 0x1b06e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b06e4: 0x3e00008
    ctx->pc = 0x1B06E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B06E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B06D8u: goto label_1b06d8;
            case 0x1B06E0u: goto label_1b06e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B06ECu;
    // 0x1b06ec: 0x0
    ctx->pc = 0x1b06ecu;
    // NOP
}
