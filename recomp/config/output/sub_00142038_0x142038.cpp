#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00142038
// Address: 0x142038 - 0x142078
void sub_00142038_0x142038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x142038u;

    // 0x142038: 0x27bdfff0
    ctx->pc = 0x142038u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14203c: 0x24040007
    ctx->pc = 0x14203cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    // 0x142040: 0xffbf0000
    ctx->pc = 0x142040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x142044: 0xdfbf0000
    ctx->pc = 0x142044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142048: 0x8050788
    ctx->pc = 0x142048u;
    ctx->pc = 0x14204Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141E20u;
    entry_141e20_0x141f90(rdram, ctx, runtime); return;
    ctx->pc = 0x142050u;
    // 0x142050: 0x41880
    ctx->pc = 0x142050u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x142054: 0x2c840007
    ctx->pc = 0x142054u;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 4), 7));
    // 0x142058: 0x3c010023
    ctx->pc = 0x142058u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x14205c: 0x2421a5f8
    ctx->pc = 0x14205cu;
    SET_GPR_S32(ctx, 1, ADD32(GPR_U32(ctx, 1), 4294944248));
    // 0x142060: 0x231821
    ctx->pc = 0x142060u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x142064: 0x10800002
    ctx->pc = 0x142064u;
    {
        const bool branch_taken_0x142064 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x142068u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x142064) {
            ctx->pc = 0x142070u;
            goto label_142070;
        }
    }
    ctx->pc = 0x14206Cu;
    // 0x14206c: 0x8c620000
    ctx->pc = 0x14206cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_142070:
    // 0x142070: 0x3e00008
    ctx->pc = 0x142070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142070u: goto label_142070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x142078u;
}
