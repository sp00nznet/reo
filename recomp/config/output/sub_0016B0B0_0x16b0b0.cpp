#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016B0B0
// Address: 0x16b0b0 - 0x16b0c8
void sub_0016B0B0_0x16b0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16b0b0u;

    // 0x16b0b0: 0x8c831aec
    ctx->pc = 0x16b0b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 6892)));
    // 0x16b0b4: 0x8c620014
    ctx->pc = 0x16b0b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x16b0b8: 0x24420001
    ctx->pc = 0x16b0b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x16b0bc: 0x3e00008
    ctx->pc = 0x16B0BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B0C0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B0C4u;
    // 0x16b0c4: 0x0
    ctx->pc = 0x16b0c4u;
    // NOP
}
