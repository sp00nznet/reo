#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A5C10
// Address: 0x1a5c10 - 0x1a5c30
void sub_001A5C10_0x1a5c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a5c10u;

    // 0x1a5c10: 0x8ca60000
    ctx->pc = 0x1a5c10u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a5c14: 0x34830001
    ctx->pc = 0x1a5c14u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 1));
    // 0x1a5c18: 0xaca30000
    ctx->pc = 0x1a5c18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1a5c1c: 0x3e00008
    ctx->pc = 0x1A5C1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5C20u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5C24u;
    // 0x1a5c24: 0x0
    ctx->pc = 0x1a5c24u;
    // NOP
    // 0x1a5c28: 0x0
    ctx->pc = 0x1a5c28u;
    // NOP
    // 0x1a5c2c: 0x0
    ctx->pc = 0x1a5c2cu;
    // NOP
}
