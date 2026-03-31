#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015B4F8
// Address: 0x15b4f8 - 0x15b548
void sub_0015B4F8_0x15b4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15b4f8u;

    // 0x15b4f8: 0x3c020026
    ctx->pc = 0x15b4f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x15b4fc: 0x302d
    ctx->pc = 0x15b4fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b500: 0x24424c70
    ctx->pc = 0x15b500u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19568));
    // 0x15b504: 0x8c450054
    ctx->pc = 0x15b504u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x15b508: 0x18a0000c
    ctx->pc = 0x15B508u;
    {
        const bool branch_taken_0x15b508 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x15B50Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 88)));
        if (branch_taken_0x15b508) {
            ctx->pc = 0x15B53Cu;
            goto label_15b53c;
        }
    }
    ctx->pc = 0x15B510u;
    // 0x15b510: 0x24070001
    ctx->pc = 0x15b510u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b514: 0x8c830188
    ctx->pc = 0x15b514u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 392)));
label_15b518:
    // 0x15b518: 0x80102d
    ctx->pc = 0x15b518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b51c: 0x10670008
    ctx->pc = 0x15B51Cu;
    {
        const bool branch_taken_0x15b51c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 7));
        ctx->pc = 0x15B520u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 992));
        if (branch_taken_0x15b51c) {
            ctx->pc = 0x15B540u;
            goto label_15b540;
        }
    }
    ctx->pc = 0x15B524u;
    // 0x15b524: 0x24c60001
    ctx->pc = 0x15b524u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x15b528: 0xc5102a
    ctx->pc = 0x15b528u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 5)));
    // 0x15b52c: 0x0
    ctx->pc = 0x15b52cu;
    // NOP
    // 0x15b530: 0x0
    ctx->pc = 0x15b530u;
    // NOP
    // 0x15b534: 0x5440fff8
    ctx->pc = 0x15B534u;
    {
        const bool branch_taken_0x15b534 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x15b534) {
            ctx->pc = 0x15B538u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 392)));
            ctx->pc = 0x15B518u;
            goto label_15b518;
        }
    }
    ctx->pc = 0x15B53Cu;
label_15b53c:
    // 0x15b53c: 0x102d
    ctx->pc = 0x15b53cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b540:
    // 0x15b540: 0x3e00008
    ctx->pc = 0x15B540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B518u: goto label_15b518;
            case 0x15B53Cu: goto label_15b53c;
            case 0x15B540u: goto label_15b540;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15B548u;
}
