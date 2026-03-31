#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00172738
// Address: 0x172738 - 0x172768
void sub_00172738_0x172738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x172738u;

    // 0x172738: 0x8c83004c
    ctx->pc = 0x172738u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x17273c: 0x8c850048
    ctx->pc = 0x17273cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x172740: 0x28620002
    ctx->pc = 0x172740u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
    // 0x172744: 0x14400006
    ctx->pc = 0x172744u;
    {
        const bool branch_taken_0x172744 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x172748u;
        SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 5));
        if (branch_taken_0x172744) {
            ctx->pc = 0x172760u;
            goto label_172760;
        }
    }
    ctx->pc = 0x17274Cu;
    // 0x17274c: 0x54800004
    ctx->pc = 0x17274Cu;
    {
        const bool branch_taken_0x17274c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x17274c) {
            ctx->pc = 0x172750u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x172760u;
            goto label_172760;
        }
    }
    ctx->pc = 0x172754u;
    // 0x172754: 0x24020006
    ctx->pc = 0x172754u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x172758: 0x50620001
    ctx->pc = 0x172758u;
    {
        const bool branch_taken_0x172758 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x172758) {
            ctx->pc = 0x17275Cu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x172760u;
            goto label_172760;
        }
    }
    ctx->pc = 0x172760u;
label_172760:
    // 0x172760: 0x3e00008
    ctx->pc = 0x172760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172764u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172760u: goto label_172760;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172768u;
}
