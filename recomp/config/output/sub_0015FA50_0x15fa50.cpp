#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015FA50
// Address: 0x15fa50 - 0x15fa78
void sub_0015FA50_0x15fa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15fa50u;

    // 0x15fa50: 0x27bdfff0
    ctx->pc = 0x15fa50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15fa54: 0xffbf0000
    ctx->pc = 0x15fa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15fa58: 0xc057e9e
    ctx->pc = 0x15FA58u;
    SET_GPR_U32(ctx, 31, 0x15FA60u);
    ctx->pc = 0x15FA78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FA78_0x15fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA60u; }
    }
    if (ctx->pc != 0x15FA60u) { return; }
    ctx->pc = 0x15FA60u;
    // 0x15fa60: 0xc04b010
    ctx->pc = 0x15FA60u;
    SET_GPR_U32(ctx, 31, 0x15FA68u);
    ctx->pc = 0x12C040u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C040_0x12c040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA68u; }
    }
    if (ctx->pc != 0x15FA68u) { return; }
    ctx->pc = 0x15FA68u;
    // 0x15fa68: 0xdfbf0000
    ctx->pc = 0x15fa68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fa6c: 0x8057ea4
    ctx->pc = 0x15FA6Cu;
    ctx->pc = 0x15FA70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x15FA90u;
    sub_0015FA90_0x15fa90(rdram, ctx, runtime); return;
    ctx->pc = 0x15FA74u;
    // 0x15fa74: 0x0
    ctx->pc = 0x15fa74u;
    // NOP
}
