#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015D6B0
// Address: 0x15d6b0 - 0x15d700
void sub_0015D6B0_0x15d6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15d6b0u;

    // 0x15d6b0: 0x27bdfff0
    ctx->pc = 0x15d6b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15d6b4: 0xffb00000
    ctx->pc = 0x15d6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15d6b8: 0x80802d
    ctx->pc = 0x15d6b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d6bc: 0xffbf0008
    ctx->pc = 0x15d6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x15d6c0: 0x8e020158
    ctx->pc = 0x15d6c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x15d6c4: 0x10400006
    ctx->pc = 0x15D6C4u;
    {
        const bool branch_taken_0x15d6c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15D6C8u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15d6c4) {
            ctx->pc = 0x15D6E0u;
            goto label_15d6e0;
        }
    }
    ctx->pc = 0x15D6CCu;
    // 0x15d6cc: 0xc0575c0
    ctx->pc = 0x15D6CCu;
    SET_GPR_U32(ctx, 31, 0x15D6D4u);
    ctx->pc = 0x15D700u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D700_0x15d700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D6D4u; }
    }
    if (ctx->pc != 0x15D6D4u) { return; }
    ctx->pc = 0x15D6D4u;
    // 0x15d6d4: 0x10000005
    ctx->pc = 0x15D6D4u;
    {
        const bool branch_taken_0x15d6d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15D6D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15d6d4) {
            ctx->pc = 0x15D6ECu;
            goto label_15d6ec;
        }
    }
    ctx->pc = 0x15D6DCu;
    // 0x15d6dc: 0x0
    ctx->pc = 0x15d6dcu;
    // NOP
label_15d6e0:
    // 0x15d6e0: 0xc0575c2
    ctx->pc = 0x15D6E0u;
    SET_GPR_U32(ctx, 31, 0x15D6E8u);
    ctx->pc = 0x15D6E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15D708u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D708_0x15d708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D6E8u; }
    }
    if (ctx->pc != 0x15D6E8u) { return; }
    ctx->pc = 0x15D6E8u;
    // 0x15d6e8: 0x200202d
    ctx->pc = 0x15d6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15d6ec:
    // 0x15d6ec: 0xdfb00000
    ctx->pc = 0x15d6ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d6f0: 0xdfbf0008
    ctx->pc = 0x15d6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15d6f4: 0x80575ec
    ctx->pc = 0x15D6F4u;
    ctx->pc = 0x15D6F8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x15D7B0u;
    entry_15d7b0_0x15d7c0(rdram, ctx, runtime); return;
    ctx->pc = 0x15D6FCu;
    // 0x15d6fc: 0x0
    ctx->pc = 0x15d6fcu;
    // NOP
}
