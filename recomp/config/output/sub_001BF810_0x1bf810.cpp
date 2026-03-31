#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BF810
// Address: 0x1bf810 - 0x1bf840
void sub_001BF810_0x1bf810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bf810u;

    // 0x1bf810: 0x80102d
    ctx->pc = 0x1bf810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf814: 0x27bdfff0
    ctx->pc = 0x1bf814u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bf818: 0xffbf0000
    ctx->pc = 0x1bf818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bf81c: 0x24440018
    ctx->pc = 0x1bf81cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 24));
    // 0x1bf820: 0xc060772
    ctx->pc = 0x1BF820u;
    SET_GPR_U32(ctx, 31, 0x1BF828u);
    ctx->pc = 0x1BF824u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 28));
    ctx->pc = 0x181DC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00181DC8_0x181dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF828u; }
    }
    if (ctx->pc != 0x1BF828u) { return; }
    ctx->pc = 0x1BF828u;
    // 0x1bf828: 0xdfbf0000
    ctx->pc = 0x1bf828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf82c: 0x401026
    ctx->pc = 0x1bf82cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
    // 0x1bf830: 0x2c420001
    ctx->pc = 0x1bf830u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x1bf834: 0x21023
    ctx->pc = 0x1bf834u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1bf838: 0x3e00008
    ctx->pc = 0x1BF838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF83Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BF840u;
}
