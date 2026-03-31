#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011C530
// Address: 0x11c530 - 0x11c550
void sub_0011C530_0x11c530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11c530u;

    // 0x11c530: 0x27bdfff0
    ctx->pc = 0x11c530u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11c534: 0xffbf0000
    ctx->pc = 0x11c534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c538: 0xc046fd0
    ctx->pc = 0x11C538u;
    SET_GPR_U32(ctx, 31, 0x11C540u);
    ctx->pc = 0x11BF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BF40_0x11bf40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C540u; }
    }
    if (ctx->pc != 0x11C540u) { return; }
    ctx->pc = 0x11C540u;
    // 0x11c540: 0xdfbf0000
    ctx->pc = 0x11c540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c544: 0x3e00008
    ctx->pc = 0x11C544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C548u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11C54Cu;
    // 0x11c54c: 0x0
    ctx->pc = 0x11c54cu;
    // NOP
}
