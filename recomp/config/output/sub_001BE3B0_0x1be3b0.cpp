#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BE3B0
// Address: 0x1be3b0 - 0x1be400
void sub_001BE3B0_0x1be3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1be3b0u;

    // 0x1be3b0: 0x27bdfee0
    ctx->pc = 0x1be3b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1be3b4: 0x3c050025
    ctx->pc = 0x1be3b4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1be3b8: 0xffbf0010
    ctx->pc = 0x1be3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1be3bc: 0x24a50440
    ctx->pc = 0x1be3bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1088));
    // 0x1be3c0: 0x7fb00000
    ctx->pc = 0x1be3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1be3c4: 0x24061234
    ctx->pc = 0x1be3c4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4660));
    // 0x1be3c8: 0x80802d
    ctx->pc = 0x1be3c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be3cc: 0xc06f918
    ctx->pc = 0x1BE3CCu;
    SET_GPR_U32(ctx, 31, 0x1BE3D4u);
    ctx->pc = 0x1BE3D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1BE460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE460_0x1be460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3D4u; }
    }
    if (ctx->pc != 0x1BE3D4u) { return; }
    ctx->pc = 0x1BE3D4u;
    // 0x1be3d4: 0x3c040025
    ctx->pc = 0x1be3d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
    // 0x1be3d8: 0x36060004
    ctx->pc = 0x1be3d8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 16), 4));
    // 0x1be3dc: 0x24840498
    ctx->pc = 0x1be3dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1176));
    // 0x1be3e0: 0x27a50020
    ctx->pc = 0x1be3e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1be3e4: 0x382d
    ctx->pc = 0x1be3e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be3e8: 0xc046b60
    ctx->pc = 0x1BE3E8u;
    SET_GPR_U32(ctx, 31, 0x1BE3F0u);
    ctx->pc = 0x1BE3ECu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11AD80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011AD80_0x11ad80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3F0u; }
    }
    if (ctx->pc != 0x1BE3F0u) { return; }
    ctx->pc = 0x1BE3F0u;
    // 0x1be3f0: 0xdfbf0010
    ctx->pc = 0x1be3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be3f4: 0x7bb00000
    ctx->pc = 0x1be3f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be3f8: 0x3e00008
    ctx->pc = 0x1BE3F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE3FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE400u;
}
