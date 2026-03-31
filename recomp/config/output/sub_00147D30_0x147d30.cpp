#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00147D30
// Address: 0x147d30 - 0x147d78
void sub_00147D30_0x147d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x147d30u;

    // 0x147d30: 0x27bdfff0
    ctx->pc = 0x147d30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x147d34: 0x3c020fff
    ctx->pc = 0x147d34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x147d38: 0xffbf0000
    ctx->pc = 0x147d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x147d3c: 0x3442ffff
    ctx->pc = 0x147d3cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x147d40: 0xa22824
    ctx->pc = 0x147d40u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x147d44: 0x3c032000
    ctx->pc = 0x147d44u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8192 << 16));
    // 0x147d48: 0x8c870040
    ctx->pc = 0x147d48u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x147d4c: 0xa32825
    ctx->pc = 0x147d4cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x147d50: 0x24020001
    ctx->pc = 0x147d50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x147d54: 0xace200c8
    ctx->pc = 0x147d54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 200), GPR_U32(ctx, 2));
    // 0x147d58: 0xace500f0
    ctx->pc = 0x147d58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 240), GPR_U32(ctx, 5));
    // 0x147d5c: 0xace600fc
    ctx->pc = 0x147d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 6));
    // 0x147d60: 0xace000f4
    ctx->pc = 0x147d60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 244), GPR_U32(ctx, 0));
    // 0x147d64: 0xc05205c
    ctx->pc = 0x147D64u;
    SET_GPR_U32(ctx, 31, 0x147D6Cu);
    ctx->pc = 0x147D68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 248), GPR_U32(ctx, 0));
    ctx->pc = 0x148170u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00148170_0x148170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147D6Cu; }
    }
    if (ctx->pc != 0x147D6Cu) { return; }
    ctx->pc = 0x147D6Cu;
    // 0x147d6c: 0xdfbf0000
    ctx->pc = 0x147d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147d70: 0x3e00008
    ctx->pc = 0x147D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147D74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x147D78u;
}
