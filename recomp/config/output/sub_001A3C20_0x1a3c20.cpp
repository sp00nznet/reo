#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A3C20
// Address: 0x1a3c20 - 0x1a3c60
void sub_001A3C20_0x1a3c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a3c20u;

    // 0x1a3c20: 0x27bdfff0
    ctx->pc = 0x1a3c20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a3c24: 0xa0402d
    ctx->pc = 0x1a3c24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3c28: 0xffbf0000
    ctx->pc = 0x1a3c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a3c2c: 0x3c05000a
    ctx->pc = 0x1a3c2cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)10 << 16));
    // 0x1a3c30: 0xc068d7c
    ctx->pc = 0x1A3C30u;
    SET_GPR_U32(ctx, 31, 0x1A3C38u);
    ctx->pc = 0x1A3C34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A35F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35F0_0x1a35f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3C38u; }
    }
    if (ctx->pc != 0x1A3C38u) { return; }
    ctx->pc = 0x1A3C38u;
    // 0x1a3c38: 0x14400003
    ctx->pc = 0x1A3C38u;
    {
        const bool branch_taken_0x1a3c38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A3C3Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 3));
        if (branch_taken_0x1a3c38) {
            ctx->pc = 0x1A3C48u;
            goto label_1a3c48;
        }
    }
    ctx->pc = 0x1A3C40u;
    // 0x1a3c40: 0x10000003
    ctx->pc = 0x1A3C40u;
    {
        const bool branch_taken_0x1a3c40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3C44u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3c40) {
            ctx->pc = 0x1A3C50u;
            goto label_1a3c50;
        }
    }
    ctx->pc = 0x1A3C48u;
label_1a3c48:
    // 0x1a3c48: 0x621021
    ctx->pc = 0x1a3c48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a3c4c: 0x2442000c
    ctx->pc = 0x1a3c4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
label_1a3c50:
    // 0x1a3c50: 0xdfbf0000
    ctx->pc = 0x1a3c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3c54: 0x3e00008
    ctx->pc = 0x1A3C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3C58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3C48u: goto label_1a3c48;
            case 0x1A3C50u: goto label_1a3c50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A3C5Cu;
    // 0x1a3c5c: 0x0
    ctx->pc = 0x1a3c5cu;
    // NOP
}
