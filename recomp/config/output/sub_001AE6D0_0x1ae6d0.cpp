#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AE6D0
// Address: 0x1ae6d0 - 0x1ae740
void sub_001AE6D0_0x1ae6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ae6d0u;

    // 0x1ae6d0: 0x27bdffe0
    ctx->pc = 0x1ae6d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ae6d4: 0x41040
    ctx->pc = 0x1ae6d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ae6d8: 0xffbf0010
    ctx->pc = 0x1ae6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ae6dc: 0x3c03002c
    ctx->pc = 0x1ae6dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1ae6e0: 0x7fb00000
    ctx->pc = 0x1ae6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ae6e4: 0x441021
    ctx->pc = 0x1ae6e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ae6e8: 0x280c0
    ctx->pc = 0x1ae6e8u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ae6ec: 0x24638d72
    ctx->pc = 0x1ae6ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937970));
    // 0x1ae6f0: 0x702821
    ctx->pc = 0x1ae6f0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1ae6f4: 0x24020001
    ctx->pc = 0x1ae6f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae6f8: 0xa0a20000
    ctx->pc = 0x1ae6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ae6fc: 0x41880
    ctx->pc = 0x1ae6fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ae700: 0x3c02002c
    ctx->pc = 0x1ae700u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1ae704: 0x24428dc8
    ctx->pc = 0x1ae704u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294938056));
    // 0x1ae708: 0x431021
    ctx->pc = 0x1ae708u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae70c: 0x8c440000
    ctx->pc = 0x1ae70cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae710: 0xc04cb7c
    ctx->pc = 0x1AE710u;
    SET_GPR_U32(ctx, 31, 0x1AE718u);
    ctx->pc = 0x1AE714u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x132DF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DF0_0x132df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE718u; }
    }
    if (ctx->pc != 0x1AE718u) { return; }
    ctx->pc = 0x1AE718u;
    // 0x1ae718: 0x3c03002c
    ctx->pc = 0x1ae718u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1ae71c: 0x24638d73
    ctx->pc = 0x1ae71cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937971));
    // 0x1ae720: 0x701821
    ctx->pc = 0x1ae720u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1ae724: 0xa0600000
    ctx->pc = 0x1ae724u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ae728: 0xdfbf0010
    ctx->pc = 0x1ae728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae72c: 0x7bb00000
    ctx->pc = 0x1ae72cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae730: 0x3e00008
    ctx->pc = 0x1AE730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE734u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AE738u;
    // 0x1ae738: 0x0
    ctx->pc = 0x1ae738u;
    // NOP
    // 0x1ae73c: 0x0
    ctx->pc = 0x1ae73cu;
    // NOP
}
