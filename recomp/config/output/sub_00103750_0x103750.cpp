#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00103750
// Address: 0x103750 - 0x103768
void sub_00103750_0x103750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x103750u;

    // 0x103750: 0x27bdfff0
    ctx->pc = 0x103750u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x103754: 0xffbf0000
    ctx->pc = 0x103754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x103758: 0xc0429aa
    ctx->pc = 0x103758u;
    SET_GPR_U32(ctx, 31, 0x103760u);
    ctx->pc = 0x10375Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x10A6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A6A8_0x10a6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103760u; }
    }
    if (ctx->pc != 0x103760u) { return; }
    ctx->pc = 0x103760u;
    // 0x103760: 0xc040086
    ctx->pc = 0x103760u;
    SET_GPR_U32(ctx, 31, 0x103768u);
    ctx->pc = 0x103764u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x100218u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00100218_0x100218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103768u; }
    }
    if (ctx->pc != 0x103768u) { return; }
    ctx->pc = 0x103768u;
}
