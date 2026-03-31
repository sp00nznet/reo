#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001792E0
// Address: 0x1792e0 - 0x179308
void sub_001792E0_0x1792e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1792e0u;

    // 0x1792e0: 0x8c820000
    ctx->pc = 0x1792e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1792e4: 0x2843ffff
    ctx->pc = 0x1792e4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 4294967295));
    // 0x1792e8: 0x28420002
    ctx->pc = 0x1792e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x1792ec: 0x10400004
    ctx->pc = 0x1792ECu;
    {
        const bool branch_taken_0x1792ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1792F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1792ec) {
            ctx->pc = 0x179300u;
            goto label_179300;
        }
    }
    ctx->pc = 0x1792F4u;
    // 0x1792f4: 0x10600002
    ctx->pc = 0x1792F4u;
    {
        const bool branch_taken_0x1792f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1792F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1792f4) {
            ctx->pc = 0x179300u;
            goto label_179300;
        }
    }
    ctx->pc = 0x1792FCu;
    // 0x1792fc: 0x24020001
    ctx->pc = 0x1792fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_179300:
    // 0x179300: 0x3e00008
    ctx->pc = 0x179300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179300u: goto label_179300;
            default: break;
        }
        return;
    }
    ctx->pc = 0x179308u;
}
