#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A2C90
// Address: 0x1a2c90 - 0x1a2cf0
void sub_001A2C90_0x1a2c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a2c90u;

    // 0x1a2c90: 0x27bdfff0
    ctx->pc = 0x1a2c90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2c94: 0xffbf0000
    ctx->pc = 0x1a2c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2c98: 0xc068b20
    ctx->pc = 0x1A2C98u;
    SET_GPR_U32(ctx, 31, 0x1A2CA0u);
    ctx->pc = 0x1A2C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2C80_0x1a2c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2CA0u; }
    }
    if (ctx->pc != 0x1A2CA0u) { return; }
    ctx->pc = 0x1A2CA0u;
    // 0x1a2ca0: 0x8c430004
    ctx->pc = 0x1a2ca0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a2ca4: 0x2484000c
    ctx->pc = 0x1a2ca4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12));
    // 0x1a2ca8: 0x10000009
    ctx->pc = 0x1A2CA8u;
    {
        const bool branch_taken_0x1a2ca8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2CACu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a2ca8) {
            ctx->pc = 0x1A2CD0u;
            goto label_1a2cd0;
        }
    }
    ctx->pc = 0x1A2CB0u;
label_1a2cb0:
    // 0x1a2cb0: 0x90820000
    ctx->pc = 0x1a2cb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a2cb4: 0x14450003
    ctx->pc = 0x1A2CB4u;
    {
        const bool branch_taken_0x1a2cb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        ctx->pc = 0x1A2CB8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a2cb4) {
            ctx->pc = 0x1A2CC4u;
            goto label_1a2cc4;
        }
    }
    ctx->pc = 0x1A2CBCu;
    // 0x1a2cbc: 0x10000008
    ctx->pc = 0x1A2CBCu;
    {
        const bool branch_taken_0x1a2cbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2CC0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1a2cbc) {
            ctx->pc = 0x1A2CE0u;
            goto label_1a2ce0;
        }
    }
    ctx->pc = 0x1A2CC4u;
label_1a2cc4:
    // 0x1a2cc4: 0x8c820008
    ctx->pc = 0x1a2cc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a2cc8: 0x24c60001
    ctx->pc = 0x1a2cc8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a2ccc: 0x822021
    ctx->pc = 0x1a2cccu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1a2cd0:
    // 0x1a2cd0: 0xc3102b
    ctx->pc = 0x1a2cd0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a2cd4: 0x1440fff6
    ctx->pc = 0x1A2CD4u;
    {
        const bool branch_taken_0x1a2cd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A2CD8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a2cd4) {
            ctx->pc = 0x1A2CB0u;
            goto label_1a2cb0;
        }
    }
    ctx->pc = 0x1A2CDCu;
    // 0x1a2cdc: 0xdfbf0000
    ctx->pc = 0x1a2cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2ce0:
    // 0x1a2ce0: 0x3e00008
    ctx->pc = 0x1A2CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2CE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2CB0u: goto label_1a2cb0;
            case 0x1A2CC4u: goto label_1a2cc4;
            case 0x1A2CD0u: goto label_1a2cd0;
            case 0x1A2CE0u: goto label_1a2ce0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A2CE8u;
    // 0x1a2ce8: 0x0
    ctx->pc = 0x1a2ce8u;
    // NOP
    // 0x1a2cec: 0x0
    ctx->pc = 0x1a2cecu;
    // NOP
}
