#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7630
// Address: 0x1d7630 - 0x1d7660
void sub_001D7630_0x1d7630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7630u;

    // 0x1d7630: 0x27bdfff0
    ctx->pc = 0x1d7630u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7634: 0xffbf0000
    ctx->pc = 0x1d7634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7638: 0xc076360
    ctx->pc = 0x1D7638u;
    SET_GPR_U32(ctx, 31, 0x1D7640u);
    ctx->pc = 0x1D763Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 5), 4));
    ctx->pc = 0x1D8D80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8D80_0x1d8d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7640u; }
    }
    if (ctx->pc != 0x1D7640u) { return; }
    ctx->pc = 0x1D7640u;
    // 0x1d7640: 0xdfbf0000
    ctx->pc = 0x1d7640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7644: 0x2143c
    ctx->pc = 0x1d7644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d7648: 0x2143f
    ctx->pc = 0x1d7648u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d764c: 0x3e00008
    ctx->pc = 0x1D764Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7650u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7654u;
    // 0x1d7654: 0x0
    ctx->pc = 0x1d7654u;
    // NOP
    // 0x1d7658: 0x0
    ctx->pc = 0x1d7658u;
    // NOP
    // 0x1d765c: 0x0
    ctx->pc = 0x1d765cu;
    // NOP
}
