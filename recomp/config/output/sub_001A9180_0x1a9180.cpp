#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A9180
// Address: 0x1a9180 - 0x1a91c0
void sub_001A9180_0x1a9180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a9180u;

    // 0x1a9180: 0x3e00008
    ctx->pc = 0x1A9180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9184u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9188u;
    // 0x1a9188: 0x0
    ctx->pc = 0x1a9188u;
    // NOP
    // 0x1a918c: 0x0
    ctx->pc = 0x1a918cu;
    // NOP
    // 0x1a9190: 0x27bdffa0
    ctx->pc = 0x1a9190u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a9194: 0x24020001
    ctx->pc = 0x1a9194u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9198: 0xffa70038
    ctx->pc = 0x1a9198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 7));
    // 0x1a919c: 0xffa80040
    ctx->pc = 0x1a919cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 8));
    // 0x1a91a0: 0xffa90048
    ctx->pc = 0x1a91a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 9));
    // 0x1a91a4: 0xffaa0050
    ctx->pc = 0x1a91a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 10));
    // 0x1a91a8: 0xffab0058
    ctx->pc = 0x1a91a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 11));
    // 0x1a91ac: 0x3e00008
    ctx->pc = 0x1A91ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A91B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A91B4u;
    // 0x1a91b4: 0x0
    ctx->pc = 0x1a91b4u;
    // NOP
    // 0x1a91b8: 0x0
    ctx->pc = 0x1a91b8u;
    // NOP
    // 0x1a91bc: 0x0
    ctx->pc = 0x1a91bcu;
    // NOP
}
