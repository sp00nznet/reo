#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011DD90
// Address: 0x11dd90 - 0x11ddd8
void sub_0011DD90_0x11dd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11dd90u;

    // 0x11dd90: 0x2403005a
    ctx->pc = 0x11dd90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 90));
    // 0x11dd94: 0xc
    ctx->pc = 0x11dd94u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x11dd98: 0x3e00008
    ctx->pc = 0x11DD98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11DDB0u: goto label_11ddb0;
            case 0x11DDD0u: goto label_11ddd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11DDA0u;
    // 0x11dda0: 0x63082
    ctx->pc = 0x11dda0u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 6), 2));
    // 0x11dda4: 0x10c0000a
    ctx->pc = 0x11DDA4u;
    {
        const bool branch_taken_0x11dda4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x11DDA8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11dda4) {
            ctx->pc = 0x11DDD0u;
            goto label_11ddd0;
        }
    }
    ctx->pc = 0x11DDACu;
    // 0x11ddac: 0x0
    ctx->pc = 0x11ddacu;
    // NOP
label_11ddb0:
    // 0x11ddb0: 0x8ca30000
    ctx->pc = 0x11ddb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11ddb4: 0x24e70001
    ctx->pc = 0x11ddb4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x11ddb8: 0x24a50004
    ctx->pc = 0x11ddb8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x11ddbc: 0xe6102b
    ctx->pc = 0x11ddbcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x11ddc0: 0xac830000
    ctx->pc = 0x11ddc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x11ddc4: 0x24840004
    ctx->pc = 0x11ddc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x11ddc8: 0x1440fff9
    ctx->pc = 0x11DDC8u;
    {
        const bool branch_taken_0x11ddc8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11ddc8) {
            ctx->pc = 0x11DDB0u;
            goto label_11ddb0;
        }
    }
    ctx->pc = 0x11DDD0u;
label_11ddd0:
    // 0x11ddd0: 0x3e00008
    ctx->pc = 0x11DDD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DDD4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11DDB0u: goto label_11ddb0;
            case 0x11DDD0u: goto label_11ddd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11DDD8u;
}
