#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A5B10
// Address: 0x1a5b10 - 0x1a5b40
void sub_001A5B10_0x1a5b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a5b10u;

    // 0x1a5b10: 0x10000004
    ctx->pc = 0x1A5B10u;
    {
        const bool branch_taken_0x1a5b10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5B14u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a5b10) {
            ctx->pc = 0x1A5B24u;
            goto label_1a5b24;
        }
    }
    ctx->pc = 0x1A5B18u;
label_1a5b18:
    // 0x1a5b18: 0xa0850000
    ctx->pc = 0x1a5b18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a5b1c: 0x24e70001
    ctx->pc = 0x1a5b1cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a5b20: 0x24840001
    ctx->pc = 0x1a5b20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_1a5b24:
    // 0x1a5b24: 0xe6182a
    ctx->pc = 0x1a5b24u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
    // 0x1a5b28: 0x0
    ctx->pc = 0x1a5b28u;
    // NOP
    // 0x1a5b2c: 0x1460fffa
    ctx->pc = 0x1A5B2Cu;
    {
        const bool branch_taken_0x1a5b2c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a5b2c) {
            ctx->pc = 0x1A5B18u;
            goto label_1a5b18;
        }
    }
    ctx->pc = 0x1A5B34u;
    // 0x1a5b34: 0x3e00008
    ctx->pc = 0x1A5B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5B18u: goto label_1a5b18;
            case 0x1A5B24u: goto label_1a5b24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5B3Cu;
    // 0x1a5b3c: 0x0
    ctx->pc = 0x1a5b3cu;
    // NOP
}
