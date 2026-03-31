#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D6C20
// Address: 0x1d6c20 - 0x1d6c70
void sub_001D6C20_0x1d6c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d6c20u;

    // 0x1d6c20: 0x27bdfff0
    ctx->pc = 0x1d6c20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6c24: 0xffbf0000
    ctx->pc = 0x1d6c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6c28: 0xc07640c
    ctx->pc = 0x1D6C28u;
    SET_GPR_U32(ctx, 31, 0x1D6C30u);
    ctx->pc = 0x1D9030u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9030_0x1d9030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6C30u; }
    }
    if (ctx->pc != 0x1D6C30u) { return; }
    ctx->pc = 0x1D6C30u;
    // 0x1d6c30: 0x2143c
    ctx->pc = 0x1d6c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6c34: 0x2403ffff
    ctx->pc = 0x1d6c34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6c38: 0x2143f
    ctx->pc = 0x1d6c38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d6c3c: 0x10430004
    ctx->pc = 0x1D6C3Cu;
    {
        const bool branch_taken_0x1d6c3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d6c3c) {
            ctx->pc = 0x1D6C50u;
            goto label_1d6c50;
        }
    }
    ctx->pc = 0x1D6C44u;
    // 0x1d6c44: 0x10000004
    ctx->pc = 0x1D6C44u;
    {
        const bool branch_taken_0x1d6c44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d6c44) {
            ctx->pc = 0x1D6C58u;
            goto label_1d6c58;
        }
    }
    ctx->pc = 0x1D6C4Cu;
    // 0x1d6c4c: 0x0
    ctx->pc = 0x1d6c4cu;
    // NOP
label_1d6c50:
    // 0x1d6c50: 0x60102d
    ctx->pc = 0x1d6c50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6c54: 0x0
    ctx->pc = 0x1d6c54u;
    // NOP
label_1d6c58:
    // 0x1d6c58: 0x24030001
    ctx->pc = 0x1d6c58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6c5c: 0x3c010034
    ctx->pc = 0x1d6c5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d6c60: 0xa0234604
    ctx->pc = 0x1d6c60u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17924), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d6c64: 0xdfbf0000
    ctx->pc = 0x1d6c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6c68: 0x3e00008
    ctx->pc = 0x1D6C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6C6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6C50u: goto label_1d6c50;
            case 0x1D6C58u: goto label_1d6c58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D6C70u;
}
