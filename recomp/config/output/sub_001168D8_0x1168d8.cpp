#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001168D8
// Address: 0x1168d8 - 0x116920
void sub_001168D8_0x1168d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1168d8u;

    // 0x1168d8: 0x3c020026
    ctx->pc = 0x1168d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1168dc: 0x42080
    ctx->pc = 0x1168dcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1168e0: 0x2442b140
    ctx->pc = 0x1168e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947136));
    // 0x1168e4: 0x822021
    ctx->pc = 0x1168e4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1168e8: 0x3e00008
    ctx->pc = 0x1168E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1168ECu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1168F0u;
    // 0x1168f0: 0x3c020026
    ctx->pc = 0x1168f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1168f4: 0x42080
    ctx->pc = 0x1168f4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1168f8: 0x2442b140
    ctx->pc = 0x1168f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947136));
    // 0x1168fc: 0x822021
    ctx->pc = 0x1168fcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x116900: 0xa0102d
    ctx->pc = 0x116900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116904: 0x3e00008
    ctx->pc = 0x116904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116908u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11690Cu;
    // 0x11690c: 0x0
    ctx->pc = 0x11690cu;
    // NOP
    // 0x116910: 0x3c020026
    ctx->pc = 0x116910u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x116914: 0x3e00008
    ctx->pc = 0x116914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116918u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294946712));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11691Cu;
    // 0x11691c: 0x0
    ctx->pc = 0x11691cu;
    // NOP
}
