#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CD030
// Address: 0x1cd030 - 0x1cd080
void sub_001CD030_0x1cd030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cd030u;

    // 0x1cd030: 0x28822100
    ctx->pc = 0x1cd030u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 8448));
    // 0x1cd034: 0x1440000e
    ctx->pc = 0x1CD034u;
    {
        const bool branch_taken_0x1cd034 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CD038u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cd034) {
            ctx->pc = 0x1CD070u;
            goto label_1cd070;
        }
    }
    ctx->pc = 0x1CD03Cu;
    // 0x1cd03c: 0x28812400
    ctx->pc = 0x1cd03cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 9216));
    // 0x1cd040: 0x1020000a
    ctx->pc = 0x1CD040u;
    {
        const bool branch_taken_0x1cd040 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD044u;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x1cd040) {
            ctx->pc = 0x1CD06Cu;
            goto label_1cd06c;
        }
    }
    ctx->pc = 0x1CD048u;
    // 0x1cd048: 0x902597b8
    ctx->pc = 0x1cd048u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294940600)));
    // 0x1cd04c: 0x51840
    ctx->pc = 0x1cd04cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1cd050: 0x511c0
    ctx->pc = 0x1cd050u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 7));
    // 0x1cd054: 0x651821
    ctx->pc = 0x1cd054u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cd058: 0x24421800
    ctx->pc = 0x1cd058u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6144));
    // 0x1cd05c: 0x31900
    ctx->pc = 0x1cd05cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1cd060: 0x24632100
    ctx->pc = 0x1cd060u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8448));
    // 0x1cd064: 0x832023
    ctx->pc = 0x1cd064u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cd068: 0x822021
    ctx->pc = 0x1cd068u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1cd06c:
    // 0x1cd06c: 0x80102d
    ctx->pc = 0x1cd06cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cd070:
    // 0x1cd070: 0x3e00008
    ctx->pc = 0x1CD070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD06Cu: goto label_1cd06c;
            case 0x1CD070u: goto label_1cd070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CD078u;
    // 0x1cd078: 0x0
    ctx->pc = 0x1cd078u;
    // NOP
    // 0x1cd07c: 0x0
    ctx->pc = 0x1cd07cu;
    // NOP
}
