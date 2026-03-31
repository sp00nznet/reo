#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A7120
// Address: 0x1a7120 - 0x1a7170
void sub_001A7120_0x1a7120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a7120u;

    // 0x1a7120: 0x3c01002b
    ctx->pc = 0x1a7120u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7124: 0x2406001f
    ctx->pc = 0x1a7124u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 31));
    // 0x1a7128: 0xac200a60
    ctx->pc = 0x1a7128u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2656), GPR_U32(ctx, 0));
    // 0x1a712c: 0x3c01002b
    ctx->pc = 0x1a712cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7130: 0xac200a70
    ctx->pc = 0x1a7130u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2672), GPR_U32(ctx, 0));
    // 0x1a7134: 0x3c01002b
    ctx->pc = 0x1a7134u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7138: 0xac200a68
    ctx->pc = 0x1a7138u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2664), GPR_U32(ctx, 0));
    // 0x1a713c: 0x3c04002b
    ctx->pc = 0x1a713cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a7140: 0x2405ffff
    ctx->pc = 0x1a7140u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a7144: 0x24840a80
    ctx->pc = 0x1a7144u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2688));
label_1a7148:
    // 0x1a7148: 0x61840
    ctx->pc = 0x1a7148u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
    // 0x1a714c: 0x661821
    ctx->pc = 0x1a714cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a7150: 0x31880
    ctx->pc = 0x1a7150u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7154: 0x24c6ffff
    ctx->pc = 0x1a7154u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1a7158: 0x831821
    ctx->pc = 0x1a7158u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a715c: 0x4c1fffa
    ctx->pc = 0x1A715Cu;
    {
        const bool branch_taken_0x1a715c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1A7160u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        if (branch_taken_0x1a715c) {
            ctx->pc = 0x1A7148u;
            goto label_1a7148;
        }
    }
    ctx->pc = 0x1A7164u;
    // 0x1a7164: 0x3e00008
    ctx->pc = 0x1A7164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7148u: goto label_1a7148;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A716Cu;
    // 0x1a716c: 0x0
    ctx->pc = 0x1a716cu;
    // NOP
}
