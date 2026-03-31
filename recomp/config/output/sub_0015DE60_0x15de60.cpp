#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015DE60
// Address: 0x15de60 - 0x15dea8
void sub_0015DE60_0x15de60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15de60u;

    // 0x15de60: 0x8ca20044
    ctx->pc = 0x15de60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x15de64: 0x24840088
    ctx->pc = 0x15de64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 136));
    // 0x15de68: 0x8ca30050
    ctx->pc = 0x15de68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x15de6c: 0xac820008
    ctx->pc = 0x15de6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x15de70: 0xac830014
    ctx->pc = 0x15de70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x15de74: 0x8ca20048
    ctx->pc = 0x15de74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x15de78: 0x8ca70054
    ctx->pc = 0x15de78u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x15de7c: 0xac82000c
    ctx->pc = 0x15de7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x15de80: 0x8ca3003c
    ctx->pc = 0x15de80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x15de84: 0x8ca6004c
    ctx->pc = 0x15de84u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x15de88: 0x8ca20040
    ctx->pc = 0x15de88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x15de8c: 0xac830000
    ctx->pc = 0x15de8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x15de90: 0xac820004
    ctx->pc = 0x15de90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x15de94: 0xac860010
    ctx->pc = 0x15de94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x15de98: 0xac870018
    ctx->pc = 0x15de98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 7));
    // 0x15de9c: 0x3e00008
    ctx->pc = 0x15DE9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DEA0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15DEA4u;
    // 0x15dea4: 0x0
    ctx->pc = 0x15dea4u;
    // NOP
}
