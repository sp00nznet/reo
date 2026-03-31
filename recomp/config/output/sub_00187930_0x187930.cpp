#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00187930
// Address: 0x187930 - 0x187970
void sub_00187930_0x187930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x187930u;

    // 0x187930: 0x3c020029
    ctx->pc = 0x187930u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x187934: 0x282d
    ctx->pc = 0x187934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187938: 0x2446b8c8
    ctx->pc = 0x187938u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294949064));
    // 0x18793c: 0x8cc30000
    ctx->pc = 0x18793cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_187940:
    // 0x187940: 0x24c6001c
    ctx->pc = 0x187940u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 28));
    // 0x187944: 0xa0102d
    ctx->pc = 0x187944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187948: 0x24a50001
    ctx->pc = 0x187948u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x18794c: 0x10600006
    ctx->pc = 0x18794Cu;
    {
        const bool branch_taken_0x18794c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x187950u;
        SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 5), 2));
        if (branch_taken_0x18794c) {
            ctx->pc = 0x187968u;
            goto label_187968;
        }
    }
    ctx->pc = 0x187954u;
    // 0x187954: 0x0
    ctx->pc = 0x187954u;
    // NOP
    // 0x187958: 0x0
    ctx->pc = 0x187958u;
    // NOP
    // 0x18795c: 0x5480fff8
    ctx->pc = 0x18795Cu;
    {
        const bool branch_taken_0x18795c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x18795c) {
            ctx->pc = 0x187960u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->pc = 0x187940u;
            goto label_187940;
        }
    }
    ctx->pc = 0x187964u;
    // 0x187964: 0x2402ffff
    ctx->pc = 0x187964u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_187968:
    // 0x187968: 0x3e00008
    ctx->pc = 0x187968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187940u: goto label_187940;
            case 0x187968u: goto label_187968;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187970u;
}
