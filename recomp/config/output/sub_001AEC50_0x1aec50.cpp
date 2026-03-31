#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AEC50
// Address: 0x1aec50 - 0x1aec80
void sub_001AEC50_0x1aec50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1aec50u;

    // 0x1aec50: 0x3c01002c
    ctx->pc = 0x1aec50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1aec54: 0xa0208de8
    ctx->pc = 0x1aec54u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938088), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aec58: 0x3c010032
    ctx->pc = 0x1aec58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1aec5c: 0x90234199
    ctx->pc = 0x1aec5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 16793)));
    // 0x1aec60: 0x3c010032
    ctx->pc = 0x1aec60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1aec64: 0xa42344b8
    ctx->pc = 0x1aec64u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 17592), (uint16_t)GPR_U32(ctx, 3));
    // 0x1aec68: 0x3c010032
    ctx->pc = 0x1aec68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1aec6c: 0x3e00008
    ctx->pc = 0x1AEC6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEC70u;
        WRITE16(ADD32(GPR_U32(ctx, 1), 17584), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AEC74u;
    // 0x1aec74: 0x0
    ctx->pc = 0x1aec74u;
    // NOP
    // 0x1aec78: 0x0
    ctx->pc = 0x1aec78u;
    // NOP
    // 0x1aec7c: 0x0
    ctx->pc = 0x1aec7cu;
    // NOP
}
