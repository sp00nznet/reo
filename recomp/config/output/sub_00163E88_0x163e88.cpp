#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00163E88
// Address: 0x163e88 - 0x163ea8
void sub_00163E88_0x163e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x163e88u;

    // 0x163e88: 0x27bdfff0
    ctx->pc = 0x163e88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x163e8c: 0xffbf0000
    ctx->pc = 0x163e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163e90: 0xc05799e
    ctx->pc = 0x163E90u;
    SET_GPR_U32(ctx, 31, 0x163E98u);
    ctx->pc = 0x15E678u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E678_0x15e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163E98u; }
    }
    if (ctx->pc != 0x163E98u) { return; }
    ctx->pc = 0x163E98u;
    // 0x163e98: 0x8c420010
    ctx->pc = 0x163e98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x163e9c: 0xdfbf0000
    ctx->pc = 0x163e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163ea0: 0x3e00008
    ctx->pc = 0x163EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163EA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x163EA8u;
}
