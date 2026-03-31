#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B1EC0
// Address: 0x1b1ec0 - 0x1b1f10
void sub_001B1EC0_0x1b1ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b1ec0u;

    // 0x1b1ec0: 0x27bdffe0
    ctx->pc = 0x1b1ec0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b1ec4: 0xffbf0010
    ctx->pc = 0x1b1ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b1ec8: 0x7fb00000
    ctx->pc = 0x1b1ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b1ecc: 0x802d
    ctx->pc = 0x1b1eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ed0: 0x24031f44
    ctx->pc = 0x1b1ed0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8004));
label_1b1ed4:
    // 0x1b1ed4: 0x3c02004c
    ctx->pc = 0x1b1ed4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)76 << 16));
    // 0x1b1ed8: 0x2031818
    ctx->pc = 0x1b1ed8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1b1edc: 0x24423750
    ctx->pc = 0x1b1edcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14160));
    // 0x1b1ee0: 0xc06c6f0
    ctx->pc = 0x1B1EE0u;
    SET_GPR_U32(ctx, 31, 0x1B1EE8u);
    ctx->pc = 0x1B1EE4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1B1BC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1BC0_0x1b1bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1EE8u; }
    }
    if (ctx->pc != 0x1B1EE8u) { return; }
    ctx->pc = 0x1B1EE8u;
    // 0x1b1ee8: 0x26100001
    ctx->pc = 0x1b1ee8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b1eec: 0x2a03000a
    ctx->pc = 0x1b1eecu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 10));
    // 0x1b1ef0: 0x1460fff8
    ctx->pc = 0x1B1EF0u;
    {
        const bool branch_taken_0x1b1ef0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B1EF4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8004));
        if (branch_taken_0x1b1ef0) {
            ctx->pc = 0x1B1ED4u;
            goto label_1b1ed4;
        }
    }
    ctx->pc = 0x1B1EF8u;
    // 0x1b1ef8: 0xdfbf0010
    ctx->pc = 0x1b1ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1efc: 0x7bb00000
    ctx->pc = 0x1b1efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1f00: 0x3e00008
    ctx->pc = 0x1B1F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1F04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1ED4u: goto label_1b1ed4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1F08u;
    // 0x1b1f08: 0x0
    ctx->pc = 0x1b1f08u;
    // NOP
    // 0x1b1f0c: 0x0
    ctx->pc = 0x1b1f0cu;
    // NOP
}
