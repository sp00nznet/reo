#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00124E40
// Address: 0x124e40 - 0x124e68
void sub_00124E40_0x124e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124e40u;

    // 0x124e40: 0xac86007c
    ctx->pc = 0x124e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 6));
    // 0x124e44: 0x3e00008
    ctx->pc = 0x124E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124E48u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x124E4Cu;
    // 0x124e4c: 0x0
    ctx->pc = 0x124e4cu;
    // NOP
    // 0x124e50: 0xac860084
    ctx->pc = 0x124e50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 6));
    // 0x124e54: 0x3e00008
    ctx->pc = 0x124E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124E58u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x124E5Cu;
    // 0x124e5c: 0x0
    ctx->pc = 0x124e5cu;
    // NOP
    // 0x124e60: 0x3e00008
    ctx->pc = 0x124E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124E64u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x124E68u;
}
