#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015E270
// Address: 0x15e270 - 0x15e2b0
void sub_0015E270_0x15e270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15e270u;

    // 0x15e270: 0x24020002
    ctx->pc = 0x15e270u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e274: 0x2c850003
    ctx->pc = 0x15e274u;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 4), 3));
    // 0x15e278: 0x1082000a
    ctx->pc = 0x15E278u;
    {
        const bool branch_taken_0x15e278 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x15E27Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x15e278) {
            ctx->pc = 0x15E2A4u;
            goto label_15e2a4;
        }
    }
    ctx->pc = 0x15E280u;
    // 0x15e280: 0x50a00005
    ctx->pc = 0x15E280u;
    {
        const bool branch_taken_0x15e280 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x15e280) {
            ctx->pc = 0x15E284u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
            ctx->pc = 0x15E298u;
            goto label_15e298;
        }
    }
    ctx->pc = 0x15E288u;
    // 0x15e288: 0x24020001
    ctx->pc = 0x15e288u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e28c: 0x10000003
    ctx->pc = 0x15E28Cu;
    {
        const bool branch_taken_0x15e28c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E290u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x15e28c) {
            ctx->pc = 0x15E29Cu;
            goto label_15e29c;
        }
    }
    ctx->pc = 0x15E294u;
    // 0x15e294: 0x0
    ctx->pc = 0x15e294u;
    // NOP
label_15e298:
    // 0x15e298: 0x24030003
    ctx->pc = 0x15e298u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_15e29c:
    // 0x15e29c: 0x54820001
    ctx->pc = 0x15E29Cu;
    {
        const bool branch_taken_0x15e29c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x15e29c) {
            ctx->pc = 0x15E2A0u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
            ctx->pc = 0x15E2A4u;
            goto label_15e2a4;
        }
    }
    ctx->pc = 0x15E2A4u;
label_15e2a4:
    // 0x15e2a4: 0x3e00008
    ctx->pc = 0x15E2A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E2A8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15E298u: goto label_15e298;
            case 0x15E29Cu: goto label_15e29c;
            case 0x15E2A4u: goto label_15e2a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15E2ACu;
    // 0x15e2ac: 0x0
    ctx->pc = 0x15e2acu;
    // NOP
}
