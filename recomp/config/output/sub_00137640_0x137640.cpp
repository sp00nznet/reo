#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00137640
// Address: 0x137640 - 0x137668
void sub_00137640_0x137640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x137640u;

    // 0x137640: 0x27bdfff0
    ctx->pc = 0x137640u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x137644: 0xffbf0000
    ctx->pc = 0x137644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137648: 0xc04e082
    ctx->pc = 0x137648u;
    SET_GPR_U32(ctx, 31, 0x137650u);
    ctx->pc = 0x13764Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4864));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137650u; }
    }
    if (ctx->pc != 0x137650u) { return; }
    ctx->pc = 0x137650u;
    // 0x137650: 0xc04035e
    ctx->pc = 0x137650u;
    SET_GPR_U32(ctx, 31, 0x137658u);
    ctx->pc = 0x137654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x100D78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00100D78_0x100d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137658u; }
    }
    if (ctx->pc != 0x137658u) { return; }
    ctx->pc = 0x137658u;
    // 0x137658: 0x24041301
    ctx->pc = 0x137658u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4865));
    // 0x13765c: 0xdfbf0000
    ctx->pc = 0x13765cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137660: 0x804e082
    ctx->pc = 0x137660u;
    ctx->pc = 0x137664u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x138208u;
    sub_00138208_0x138208(rdram, ctx, runtime); return;
    ctx->pc = 0x137668u;
}
