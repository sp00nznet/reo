#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00118670
// Address: 0x118670 - 0x1186a0
void sub_00118670_0x118670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x118670u;

    // 0x118670: 0x27bdfff0
    ctx->pc = 0x118670u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x118674: 0xffbf0000
    ctx->pc = 0x118674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x118678: 0xc046188
    ctx->pc = 0x118678u;
    SET_GPR_U32(ctx, 31, 0x118680u);
    ctx->pc = 0x118620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118620_0x118620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118680u; }
    }
    if (ctx->pc != 0x118680u) { return; }
    ctx->pc = 0x118680u;
    // 0x118680: 0x3c020021
    ctx->pc = 0x118680u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x118684: 0xc045198
    ctx->pc = 0x118684u;
    SET_GPR_U32(ctx, 31, 0x11868Cu);
    ctx->pc = 0x118688u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294942180)));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11868Cu; }
    }
    if (ctx->pc != 0x11868Cu) { return; }
    ctx->pc = 0x11868Cu;
    // 0x11868c: 0xdfbf0000
    ctx->pc = 0x11868cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118690: 0x102d
    ctx->pc = 0x118690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118694: 0x3e00008
    ctx->pc = 0x118694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118698u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11869Cu;
    // 0x11869c: 0x0
    ctx->pc = 0x11869cu;
    // NOP
}
