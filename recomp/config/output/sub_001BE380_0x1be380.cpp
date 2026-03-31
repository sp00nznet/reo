#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BE380
// Address: 0x1be380 - 0x1be3b0
void sub_001BE380_0x1be380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1be380u;

    // 0x1be380: 0x27bdfef0
    ctx->pc = 0x1be380u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1be384: 0x3c050025
    ctx->pc = 0x1be384u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1be388: 0xffbf0000
    ctx->pc = 0x1be388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be38c: 0x27a40010
    ctx->pc = 0x1be38cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1be390: 0x24a50440
    ctx->pc = 0x1be390u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1088));
    // 0x1be394: 0xc06f918
    ctx->pc = 0x1BE394u;
    SET_GPR_U32(ctx, 31, 0x1BE39Cu);
    ctx->pc = 0x1BE398u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4660));
    ctx->pc = 0x1BE460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE460_0x1be460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE39Cu; }
    }
    if (ctx->pc != 0x1BE39Cu) { return; }
    ctx->pc = 0x1BE39Cu;
    // 0x1be39c: 0xc046734
    ctx->pc = 0x1BE39Cu;
    SET_GPR_U32(ctx, 31, 0x1BE3A4u);
    ctx->pc = 0x1BE3A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x119CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00119CD0_0x119cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3A4u; }
    }
    if (ctx->pc != 0x1BE3A4u) { return; }
    ctx->pc = 0x1BE3A4u;
    // 0x1be3a4: 0xdfbf0000
    ctx->pc = 0x1be3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be3a8: 0x3e00008
    ctx->pc = 0x1BE3A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE3ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE3B0u;
}
