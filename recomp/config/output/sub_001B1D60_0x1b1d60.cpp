#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B1D60
// Address: 0x1b1d60 - 0x1b1da0
void sub_001B1D60_0x1b1d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b1d60u;

    // 0x1b1d60: 0x27bdfff0
    ctx->pc = 0x1b1d60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1d64: 0x3c04004f
    ctx->pc = 0x1b1d64u;
    SET_GPR_U32(ctx, 4, ((uint32_t)79 << 16));
    // 0x1b1d68: 0xffbf0000
    ctx->pc = 0x1b1d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1d6c: 0xc06c6f0
    ctx->pc = 0x1B1D6Cu;
    SET_GPR_U32(ctx, 31, 0x1B1D74u);
    ctx->pc = 0x1B1D70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944960));
    ctx->pc = 0x1B1BC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1BC0_0x1b1bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D74u; }
    }
    if (ctx->pc != 0x1B1D74u) { return; }
    ctx->pc = 0x1B1D74u;
    // 0x1b1d74: 0x3c04004f
    ctx->pc = 0x1b1d74u;
    SET_GPR_U32(ctx, 4, ((uint32_t)79 << 16));
    // 0x1b1d78: 0xc06c6f0
    ctx->pc = 0x1B1D78u;
    SET_GPR_U32(ctx, 31, 0x1B1D80u);
    ctx->pc = 0x1B1D7Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936944));
    ctx->pc = 0x1B1BC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1BC0_0x1b1bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D80u; }
    }
    if (ctx->pc != 0x1B1D80u) { return; }
    ctx->pc = 0x1B1D80u;
    // 0x1b1d80: 0x3c04004e
    ctx->pc = 0x1b1d80u;
    SET_GPR_U32(ctx, 4, ((uint32_t)78 << 16));
    // 0x1b1d84: 0xc06c6f0
    ctx->pc = 0x1B1D84u;
    SET_GPR_U32(ctx, 31, 0x1B1D8Cu);
    ctx->pc = 0x1B1D88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27168));
    ctx->pc = 0x1B1BC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1BC0_0x1b1bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D8Cu; }
    }
    if (ctx->pc != 0x1B1D8Cu) { return; }
    ctx->pc = 0x1B1D8Cu;
    // 0x1b1d8c: 0x3c01004c
    ctx->pc = 0x1b1d8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b1d90: 0xa020ae0f
    ctx->pc = 0x1b1d90u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946319), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b1d94: 0xdfbf0000
    ctx->pc = 0x1b1d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1d98: 0x3e00008
    ctx->pc = 0x1B1D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1D9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1DA0u;
}
