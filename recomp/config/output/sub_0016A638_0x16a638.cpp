#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016A638
// Address: 0x16a638 - 0x16a660
void sub_0016A638_0x16a638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16a638u;

    // 0x16a638: 0x80102d
    ctx->pc = 0x16a638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a63c: 0x8c441af4
    ctx->pc = 0x16a63cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 6900)));
    // 0x16a640: 0x418c0
    ctx->pc = 0x16a640u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x16a644: 0x641823
    ctx->pc = 0x16a644u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16a648: 0x31880
    ctx->pc = 0x16a648u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x16a64c: 0x641821
    ctx->pc = 0x16a64cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16a650: 0x31880
    ctx->pc = 0x16a650u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x16a654: 0x431021
    ctx->pc = 0x16a654u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16a658: 0x3e00008
    ctx->pc = 0x16A658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A65Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4432));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A660u;
}
