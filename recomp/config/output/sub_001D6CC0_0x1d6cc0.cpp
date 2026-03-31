#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D6CC0
// Address: 0x1d6cc0 - 0x1d6d10
void sub_001D6CC0_0x1d6cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d6cc0u;

    // 0x1d6cc0: 0x27bdfff0
    ctx->pc = 0x1d6cc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6cc4: 0xffbf0000
    ctx->pc = 0x1d6cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6cc8: 0xc07644c
    ctx->pc = 0x1D6CC8u;
    SET_GPR_U32(ctx, 31, 0x1D6CD0u);
    ctx->pc = 0x1D9130u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9130_0x1d9130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6CD0u; }
    }
    if (ctx->pc != 0x1D6CD0u) { return; }
    ctx->pc = 0x1D6CD0u;
    // 0x1d6cd0: 0x2143c
    ctx->pc = 0x1d6cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6cd4: 0x2403ffff
    ctx->pc = 0x1d6cd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6cd8: 0x2143f
    ctx->pc = 0x1d6cd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d6cdc: 0x10430004
    ctx->pc = 0x1D6CDCu;
    {
        const bool branch_taken_0x1d6cdc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d6cdc) {
            ctx->pc = 0x1D6CF0u;
            goto label_1d6cf0;
        }
    }
    ctx->pc = 0x1D6CE4u;
    // 0x1d6ce4: 0x10000004
    ctx->pc = 0x1D6CE4u;
    {
        const bool branch_taken_0x1d6ce4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d6ce4) {
            ctx->pc = 0x1D6CF8u;
            goto label_1d6cf8;
        }
    }
    ctx->pc = 0x1D6CECu;
    // 0x1d6cec: 0x0
    ctx->pc = 0x1d6cecu;
    // NOP
label_1d6cf0:
    // 0x1d6cf0: 0x60102d
    ctx->pc = 0x1d6cf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6cf4: 0x0
    ctx->pc = 0x1d6cf4u;
    // NOP
label_1d6cf8:
    // 0x1d6cf8: 0xdfbf0000
    ctx->pc = 0x1d6cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6cfc: 0x3e00008
    ctx->pc = 0x1D6CFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6D00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6CF0u: goto label_1d6cf0;
            case 0x1D6CF8u: goto label_1d6cf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D6D04u;
    // 0x1d6d04: 0x0
    ctx->pc = 0x1d6d04u;
    // NOP
    // 0x1d6d08: 0x0
    ctx->pc = 0x1d6d08u;
    // NOP
    // 0x1d6d0c: 0x0
    ctx->pc = 0x1d6d0cu;
    // NOP
}
