#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015D640
// Address: 0x15d640 - 0x15d678
void sub_0015D640_0x15d640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15d640u;

    // 0x15d640: 0x24840158
    ctx->pc = 0x15d640u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 344));
    // 0x15d644: 0x8c83000c
    ctx->pc = 0x15d644u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x15d648: 0x8c820004
    ctx->pc = 0x15d648u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15d64c: 0x651821
    ctx->pc = 0x15d64cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15d650: 0x43102b
    ctx->pc = 0x15d650u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15d654: 0x14400005
    ctx->pc = 0x15D654u;
    {
        const bool branch_taken_0x15d654 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15D658u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15d654) {
            ctx->pc = 0x15D66Cu;
            goto label_15d66c;
        }
    }
    ctx->pc = 0x15D65Cu;
    // 0x15d65c: 0x8c860008
    ctx->pc = 0x15d65cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15d660: 0xac83000c
    ctx->pc = 0x15d660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x15d664: 0xc51021
    ctx->pc = 0x15d664u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15d668: 0xac820008
    ctx->pc = 0x15d668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_15d66c:
    // 0x15d66c: 0x3e00008
    ctx->pc = 0x15D66Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D670u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D66Cu: goto label_15d66c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D674u;
    // 0x15d674: 0x0
    ctx->pc = 0x15d674u;
    // NOP
}
