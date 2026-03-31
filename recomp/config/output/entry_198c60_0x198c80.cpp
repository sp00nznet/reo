#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_198c60
// Address: 0x198c60 - 0x198c80
void entry_198c60_0x198c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x198c60u;

    // 0x198c60: 0x3c01002a
    ctx->pc = 0x198c60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x198c64: 0x2403fffe
    ctx->pc = 0x198c64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x198c68: 0xac24fd6c
    ctx->pc = 0x198c68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966636), GPR_U32(ctx, 4));
    // 0x198c6c: 0xa31824
    ctx->pc = 0x198c6cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x198c70: 0x3c01002a
    ctx->pc = 0x198c70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x198c74: 0x3e00008
    ctx->pc = 0x198C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198C78u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966640), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198C7Cu;
    // 0x198c7c: 0x0
    ctx->pc = 0x198c7cu;
    // NOP
}
