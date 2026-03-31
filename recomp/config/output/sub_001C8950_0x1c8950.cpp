#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C8950
// Address: 0x1c8950 - 0x1c8960
void sub_001C8950_0x1c8950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c8950u;

    // 0x1c8950: 0x8c83000c
    ctx->pc = 0x1c8950u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c8954: 0x8c820004
    ctx->pc = 0x1c8954u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c8958: 0x3e00008
    ctx->pc = 0x1C8958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C895Cu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8960u;
}
