#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D74B0
// Address: 0x1d74b0 - 0x1d7500
void sub_001D74B0_0x1d74b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d74b0u;

    // 0x1d74b0: 0x27bdfff0
    ctx->pc = 0x1d74b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d74b4: 0xffbf0000
    ctx->pc = 0x1d74b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d74b8: 0xc0760bc
    ctx->pc = 0x1D74B8u;
    SET_GPR_U32(ctx, 31, 0x1D74C0u);
    ctx->pc = 0x1D82F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D82F0_0x1d82f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D74C0u; }
    }
    if (ctx->pc != 0x1D74C0u) { return; }
    ctx->pc = 0x1D74C0u;
    // 0x1d74c0: 0x2143c
    ctx->pc = 0x1d74c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d74c4: 0x2143f
    ctx->pc = 0x1d74c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d74c8: 0x4410003
    ctx->pc = 0x1D74C8u;
    {
        const bool branch_taken_0x1d74c8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1d74c8) {
            ctx->pc = 0x1D74D8u;
            goto label_1d74d8;
        }
    }
    ctx->pc = 0x1D74D0u;
    // 0x1d74d0: 0x10000005
    ctx->pc = 0x1D74D0u;
    {
        const bool branch_taken_0x1d74d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D74D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1d74d0) {
            ctx->pc = 0x1D74E8u;
            goto label_1d74e8;
        }
    }
    ctx->pc = 0x1D74D8u;
label_1d74d8:
    // 0x1d74d8: 0x24030001
    ctx->pc = 0x1d74d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d74dc: 0x3c010034
    ctx->pc = 0x1d74dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d74e0: 0xa0234605
    ctx->pc = 0x1d74e0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17925), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d74e4: 0x0
    ctx->pc = 0x1d74e4u;
    // NOP
label_1d74e8:
    // 0x1d74e8: 0xdfbf0000
    ctx->pc = 0x1d74e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d74ec: 0x3e00008
    ctx->pc = 0x1D74ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D74F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D74D8u: goto label_1d74d8;
            case 0x1D74E8u: goto label_1d74e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D74F4u;
    // 0x1d74f4: 0x0
    ctx->pc = 0x1d74f4u;
    // NOP
    // 0x1d74f8: 0x0
    ctx->pc = 0x1d74f8u;
    // NOP
    // 0x1d74fc: 0x0
    ctx->pc = 0x1d74fcu;
    // NOP
}
