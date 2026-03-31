#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D6C70
// Address: 0x1d6c70 - 0x1d6cc0
void sub_001D6C70_0x1d6c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d6c70u;

    // 0x1d6c70: 0x27bdfff0
    ctx->pc = 0x1d6c70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6c74: 0xffbf0000
    ctx->pc = 0x1d6c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6c78: 0xc076438
    ctx->pc = 0x1D6C78u;
    SET_GPR_U32(ctx, 31, 0x1D6C80u);
    ctx->pc = 0x1D90E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D90E0_0x1d90e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6C80u; }
    }
    if (ctx->pc != 0x1D6C80u) { return; }
    ctx->pc = 0x1D6C80u;
    // 0x1d6c80: 0x2143c
    ctx->pc = 0x1d6c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6c84: 0x2403ffff
    ctx->pc = 0x1d6c84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6c88: 0x2143f
    ctx->pc = 0x1d6c88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d6c8c: 0x10430004
    ctx->pc = 0x1D6C8Cu;
    {
        const bool branch_taken_0x1d6c8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d6c8c) {
            ctx->pc = 0x1D6CA0u;
            goto label_1d6ca0;
        }
    }
    ctx->pc = 0x1D6C94u;
    // 0x1d6c94: 0x10000004
    ctx->pc = 0x1D6C94u;
    {
        const bool branch_taken_0x1d6c94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d6c94) {
            ctx->pc = 0x1D6CA8u;
            goto label_1d6ca8;
        }
    }
    ctx->pc = 0x1D6C9Cu;
    // 0x1d6c9c: 0x0
    ctx->pc = 0x1d6c9cu;
    // NOP
label_1d6ca0:
    // 0x1d6ca0: 0x60102d
    ctx->pc = 0x1d6ca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6ca4: 0x0
    ctx->pc = 0x1d6ca4u;
    // NOP
label_1d6ca8:
    // 0x1d6ca8: 0x3c010034
    ctx->pc = 0x1d6ca8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d6cac: 0xa0204604
    ctx->pc = 0x1d6cacu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17924), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d6cb0: 0xdfbf0000
    ctx->pc = 0x1d6cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6cb4: 0x3e00008
    ctx->pc = 0x1D6CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6CB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6CA0u: goto label_1d6ca0;
            case 0x1D6CA8u: goto label_1d6ca8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D6CBCu;
    // 0x1d6cbc: 0x0
    ctx->pc = 0x1d6cbcu;
    // NOP
}
