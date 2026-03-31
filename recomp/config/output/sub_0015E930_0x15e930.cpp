#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015E930
// Address: 0x15e930 - 0x15e978
void sub_0015E930_0x15e930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15e930u;

    // 0x15e930: 0x27bdfff0
    ctx->pc = 0x15e930u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15e934: 0xffbf0000
    ctx->pc = 0x15e934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15e938: 0xc05799e
    ctx->pc = 0x15E938u;
    SET_GPR_U32(ctx, 31, 0x15E940u);
    ctx->pc = 0x15E678u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E678_0x15e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E940u; }
    }
    if (ctx->pc != 0x15E940u) { return; }
    ctx->pc = 0x15E940u;
    // 0x15e940: 0x8c420038
    ctx->pc = 0x15e940u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x15e944: 0xdfbf0000
    ctx->pc = 0x15e944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e948: 0x3e00008
    ctx->pc = 0x15E948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E94Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15E950u;
    // 0x15e950: 0x27bdfff0
    ctx->pc = 0x15e950u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15e954: 0xffb00000
    ctx->pc = 0x15e954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15e958: 0xffbf0008
    ctx->pc = 0x15e958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x15e95c: 0xc05799e
    ctx->pc = 0x15E95Cu;
    SET_GPR_U32(ctx, 31, 0x15E964u);
    ctx->pc = 0x15E960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15E678u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E678_0x15e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E964u; }
    }
    if (ctx->pc != 0x15E964u) { return; }
    ctx->pc = 0x15E964u;
    // 0x15e964: 0xac50003c
    ctx->pc = 0x15e964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 16));
    // 0x15e968: 0xdfbf0008
    ctx->pc = 0x15e968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15e96c: 0xdfb00000
    ctx->pc = 0x15e96cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e970: 0x3e00008
    ctx->pc = 0x15E970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E974u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15E978u;
}
