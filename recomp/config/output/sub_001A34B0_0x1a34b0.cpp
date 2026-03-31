#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A34B0
// Address: 0x1a34b0 - 0x1a3500
void sub_001A34B0_0x1a34b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a34b0u;

    // 0x1a34b0: 0x27bdfff0
    ctx->pc = 0x1a34b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a34b4: 0xffbf0000
    ctx->pc = 0x1a34b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a34b8: 0xc068c84
    ctx->pc = 0x1A34B8u;
    SET_GPR_U32(ctx, 31, 0x1A34C0u);
    ctx->pc = 0x1A3210u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3210_0x1a3210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A34C0u; }
    }
    if (ctx->pc != 0x1A34C0u) { return; }
    ctx->pc = 0x1A34C0u;
    // 0x1a34c0: 0x14400003
    ctx->pc = 0x1A34C0u;
    {
        const bool branch_taken_0x1a34c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A34C4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a34c0) {
            ctx->pc = 0x1A34D0u;
            goto label_1a34d0;
        }
    }
    ctx->pc = 0x1A34C8u;
    // 0x1a34c8: 0x10000009
    ctx->pc = 0x1A34C8u;
    {
        const bool branch_taken_0x1a34c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A34CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a34c8) {
            ctx->pc = 0x1A34F0u;
            goto label_1a34f0;
        }
    }
    ctx->pc = 0x1A34D0u;
label_1a34d0:
    // 0x1a34d0: 0x3c050005
    ctx->pc = 0x1a34d0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)5 << 16));
    // 0x1a34d4: 0xc068d7c
    ctx->pc = 0x1A34D4u;
    SET_GPR_U32(ctx, 31, 0x1A34DCu);
    ctx->pc = 0x1A34D8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A35F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35F0_0x1a35f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A34DCu; }
    }
    if (ctx->pc != 0x1A34DCu) { return; }
    ctx->pc = 0x1A34DCu;
    // 0x1a34dc: 0x14400003
    ctx->pc = 0x1A34DCu;
    {
        const bool branch_taken_0x1a34dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a34dc) {
            ctx->pc = 0x1A34ECu;
            goto label_1a34ec;
        }
    }
    ctx->pc = 0x1A34E4u;
    // 0x1a34e4: 0x10000002
    ctx->pc = 0x1A34E4u;
    {
        const bool branch_taken_0x1a34e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A34E8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a34e4) {
            ctx->pc = 0x1A34F0u;
            goto label_1a34f0;
        }
    }
    ctx->pc = 0x1A34ECu;
label_1a34ec:
    // 0x1a34ec: 0x8c420004
    ctx->pc = 0x1a34ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a34f0:
    // 0x1a34f0: 0xdfbf0000
    ctx->pc = 0x1a34f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a34f4: 0x3e00008
    ctx->pc = 0x1A34F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A34F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A34D0u: goto label_1a34d0;
            case 0x1A34ECu: goto label_1a34ec;
            case 0x1A34F0u: goto label_1a34f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A34FCu;
    // 0x1a34fc: 0x0
    ctx->pc = 0x1a34fcu;
    // NOP
}
