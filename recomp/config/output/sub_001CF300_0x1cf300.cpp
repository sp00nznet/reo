#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CF300
// Address: 0x1cf300 - 0x1cf320
void sub_001CF300_0x1cf300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cf300u;

    // 0x1cf300: 0x14800002
    ctx->pc = 0x1CF300u;
    {
        const bool branch_taken_0x1cf300 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF304u;
        SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
        if (branch_taken_0x1cf300) {
            ctx->pc = 0x1CF30Cu;
            goto label_1cf30c;
        }
    }
    ctx->pc = 0x1CF308u;
    // 0x1cf308: 0xe23825
    ctx->pc = 0x1cf308u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_1cf30c:
    // 0x1cf30c: 0x8073c24
    ctx->pc = 0x1CF30Cu;
    ctx->pc = 0x1CF090u;
    sub_001CF090_0x1cf090(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF314u;
    // 0x1cf314: 0x0
    ctx->pc = 0x1cf314u;
    // NOP
    // 0x1cf318: 0x0
    ctx->pc = 0x1cf318u;
    // NOP
    // 0x1cf31c: 0x0
    ctx->pc = 0x1cf31cu;
    // NOP
}
