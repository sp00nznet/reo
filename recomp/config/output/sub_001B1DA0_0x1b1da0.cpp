#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B1DA0
// Address: 0x1b1da0 - 0x1b1df0
void sub_001B1DA0_0x1b1da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b1da0u;

    // 0x1b1da0: 0x27bdffe0
    ctx->pc = 0x1b1da0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b1da4: 0xffbf0010
    ctx->pc = 0x1b1da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b1da8: 0x7fb00000
    ctx->pc = 0x1b1da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b1dac: 0x802d
    ctx->pc = 0x1b1dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1db0: 0x24031f44
    ctx->pc = 0x1b1db0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8004));
label_1b1db4:
    // 0x1b1db4: 0x3c02004d
    ctx->pc = 0x1b1db4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)77 << 16));
    // 0x1b1db8: 0x2031818
    ctx->pc = 0x1b1db8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1b1dbc: 0x24427000
    ctx->pc = 0x1b1dbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1b1dc0: 0xc06c6f0
    ctx->pc = 0x1B1DC0u;
    SET_GPR_U32(ctx, 31, 0x1B1DC8u);
    ctx->pc = 0x1B1DC4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1B1BC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1BC0_0x1b1bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1DC8u; }
    }
    if (ctx->pc != 0x1B1DC8u) { return; }
    ctx->pc = 0x1B1DC8u;
    // 0x1b1dc8: 0x26100001
    ctx->pc = 0x1b1dc8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b1dcc: 0x2a030008
    ctx->pc = 0x1b1dccu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 8));
    // 0x1b1dd0: 0x1460fff8
    ctx->pc = 0x1B1DD0u;
    {
        const bool branch_taken_0x1b1dd0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B1DD4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8004));
        if (branch_taken_0x1b1dd0) {
            ctx->pc = 0x1B1DB4u;
            goto label_1b1db4;
        }
    }
    ctx->pc = 0x1B1DD8u;
    // 0x1b1dd8: 0xdfbf0010
    ctx->pc = 0x1b1dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1ddc: 0x7bb00000
    ctx->pc = 0x1b1ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1de0: 0x3e00008
    ctx->pc = 0x1B1DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1DE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1DB4u: goto label_1b1db4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1DE8u;
    // 0x1b1de8: 0x0
    ctx->pc = 0x1b1de8u;
    // NOP
    // 0x1b1dec: 0x0
    ctx->pc = 0x1b1decu;
    // NOP
}
