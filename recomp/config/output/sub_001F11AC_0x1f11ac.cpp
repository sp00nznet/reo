#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F11AC
// Address: 0x1f11ac - 0x1f11e8
void sub_001F11AC_0x1f11ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f11acu;

    // 0x1f11ac: 0x27bdfff0
    ctx->pc = 0x1f11acu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f11b0: 0xffbe0000
    ctx->pc = 0x1f11b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x1f11b4: 0x3a0f02d
    ctx->pc = 0x1f11b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f11b8: 0xa0102d
    ctx->pc = 0x1f11b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f11bc: 0x3042ffff
    ctx->pc = 0x1f11bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1f11c0: 0x21027
    ctx->pc = 0x1f11c0u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1f11c4: 0x9483000e
    ctx->pc = 0x1f11c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x1f11c8: 0x621024
    ctx->pc = 0x1f11c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f11cc: 0xa482000e
    ctx->pc = 0x1f11ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f11d0: 0x9482000e
    ctx->pc = 0x1f11d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x1f11d4: 0x3c0e82d
    ctx->pc = 0x1f11d4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f11d8: 0xdfbe0000
    ctx->pc = 0x1f11d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f11dc: 0x27bd0010
    ctx->pc = 0x1f11dcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f11e0: 0x3e00008
    ctx->pc = 0x1F11E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F11E8u;
}
