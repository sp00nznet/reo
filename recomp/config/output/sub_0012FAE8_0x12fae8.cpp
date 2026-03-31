#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012FAE8
// Address: 0x12fae8 - 0x12faf8
void sub_0012FAE8_0x12fae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12fae8u;

    // 0x12fae8: 0x24020001
    ctx->pc = 0x12fae8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x12faec: 0x3e00008
    ctx->pc = 0x12FAECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FAF0u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12FAF4u;
    // 0x12faf4: 0x0
    ctx->pc = 0x12faf4u;
    // NOP
}
