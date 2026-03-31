#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B2990
// Address: 0x1b2990 - 0x1b29e0
void sub_001B2990_0x1b2990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b2990u;

    // 0x1b2990: 0x27bdfff0
    ctx->pc = 0x1b2990u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2994: 0x3c010032
    ctx->pc = 0x1b2994u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b2998: 0xffbf0000
    ctx->pc = 0x1b2998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b299c: 0x902343d3
    ctx->pc = 0x1b299cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17363)));
    // 0x1b29a0: 0x1060000a
    ctx->pc = 0x1B29A0u;
    {
        const bool branch_taken_0x1b29a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B29A4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x1b29a0) {
            ctx->pc = 0x1B29CCu;
            goto label_1b29cc;
        }
    }
    ctx->pc = 0x1B29A8u;
    // 0x1b29a8: 0xc06be14
    ctx->pc = 0x1B29A8u;
    SET_GPR_U32(ctx, 31, 0x1B29B0u);
    ctx->pc = 0x1B29ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938272));
    ctx->pc = 0x1AF850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF850_0x1af850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B29B0u; }
    }
    if (ctx->pc != 0x1B29B0u) { return; }
    ctx->pc = 0x1B29B0u;
    // 0x1b29b0: 0x3c04002c
    ctx->pc = 0x1b29b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1b29b4: 0x282d
    ctx->pc = 0x1b29b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b29b8: 0x24848ea0
    ctx->pc = 0x1b29b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938272));
    // 0x1b29bc: 0xc041f1a
    ctx->pc = 0x1B29BCu;
    SET_GPR_U32(ctx, 31, 0x1B29C4u);
    ctx->pc = 0x1B29C0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 828));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B29C4u; }
    }
    if (ctx->pc != 0x1B29C4u) { return; }
    ctx->pc = 0x1B29C4u;
    // 0x1b29c4: 0x3c010032
    ctx->pc = 0x1b29c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b29c8: 0xa02043d3
    ctx->pc = 0x1b29c8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17363), (uint8_t)GPR_U32(ctx, 0));
label_1b29cc:
    // 0x1b29cc: 0xdfbf0000
    ctx->pc = 0x1b29ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b29d0: 0x3e00008
    ctx->pc = 0x1B29D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B29D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B29CCu: goto label_1b29cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B29D8u;
    // 0x1b29d8: 0x0
    ctx->pc = 0x1b29d8u;
    // NOP
    // 0x1b29dc: 0x0
    ctx->pc = 0x1b29dcu;
    // NOP
}
