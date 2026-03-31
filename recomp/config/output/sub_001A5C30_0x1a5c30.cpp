#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A5C30
// Address: 0x1a5c30 - 0x1a5c80
void sub_001A5C30_0x1a5c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a5c30u;

label_1a5c30:
    // 0x1a5c30: 0x8c820000
    ctx->pc = 0x1a5c30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5c34: 0x14400003
    ctx->pc = 0x1A5C34u;
    {
        const bool branch_taken_0x1a5c34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a5c34) {
            ctx->pc = 0x1A5C44u;
            goto label_1a5c44;
        }
    }
    ctx->pc = 0x1A5C3Cu;
    // 0x1a5c3c: 0x1000000b
    ctx->pc = 0x1A5C3Cu;
    {
        const bool branch_taken_0x1a5c3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5C40u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c3c) {
            ctx->pc = 0x1A5C6Cu;
            goto label_1a5c6c;
        }
    }
    ctx->pc = 0x1A5C44u;
label_1a5c44:
    // 0x1a5c44: 0x8c430000
    ctx->pc = 0x1a5c44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5c48: 0x30620001
    ctx->pc = 0x1a5c48u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x1a5c4c: 0x10400005
    ctx->pc = 0x1A5C4Cu;
    {
        const bool branch_taken_0x1a5c4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a5c4c) {
            ctx->pc = 0x1A5C64u;
            goto label_1a5c64;
        }
    }
    ctx->pc = 0x1A5C54u;
    // 0x1a5c54: 0x2402fffe
    ctx->pc = 0x1a5c54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1a5c58: 0x621024
    ctx->pc = 0x1a5c58u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a5c5c: 0x10000003
    ctx->pc = 0x1A5C5Cu;
    {
        const bool branch_taken_0x1a5c5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5C60u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1a5c5c) {
            ctx->pc = 0x1A5C6Cu;
            goto label_1a5c6c;
        }
    }
    ctx->pc = 0x1A5C64u;
label_1a5c64:
    // 0x1a5c64: 0x1000fff2
    ctx->pc = 0x1A5C64u;
    {
        const bool branch_taken_0x1a5c64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5C68u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1a5c64) {
            ctx->pc = 0x1A5C30u;
            goto label_1a5c30;
        }
    }
    ctx->pc = 0x1A5C6Cu;
label_1a5c6c:
    // 0x1a5c6c: 0x3e00008
    ctx->pc = 0x1A5C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5C30u: goto label_1a5c30;
            case 0x1A5C44u: goto label_1a5c44;
            case 0x1A5C64u: goto label_1a5c64;
            case 0x1A5C6Cu: goto label_1a5c6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5C74u;
    // 0x1a5c74: 0x0
    ctx->pc = 0x1a5c74u;
    // NOP
    // 0x1a5c78: 0x0
    ctx->pc = 0x1a5c78u;
    // NOP
    // 0x1a5c7c: 0x0
    ctx->pc = 0x1a5c7cu;
    // NOP
}
