#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C9040
// Address: 0x1c9040 - 0x1c9080
void sub_001C9040_0x1c9040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c9040u;

    // 0x1c9040: 0x3e00008
    ctx->pc = 0x1C9040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9044u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C905Cu: goto label_1c905c;
            case 0x1C9068u: goto label_1c9068;
            case 0x1C906Cu: goto label_1c906c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C9048u;
    // 0x1c9048: 0x0
    ctx->pc = 0x1c9048u;
    // NOP
    // 0x1c904c: 0x0
    ctx->pc = 0x1c904cu;
    // NOP
    // 0x1c9050: 0x2402005c
    ctx->pc = 0x1c9050u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 92));
    // 0x1c9054: 0x10000005
    ctx->pc = 0x1C9054u;
    {
        const bool branch_taken_0x1c9054 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C9058u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 47));
        if (branch_taken_0x1c9054) {
            ctx->pc = 0x1C906Cu;
            goto label_1c906c;
        }
    }
    ctx->pc = 0x1C905Cu;
label_1c905c:
    // 0x1c905c: 0x14a30002
    ctx->pc = 0x1C905Cu;
    {
        const bool branch_taken_0x1c905c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x1c905c) {
            ctx->pc = 0x1C9068u;
            goto label_1c9068;
        }
    }
    ctx->pc = 0x1C9064u;
    // 0x1c9064: 0xa0820000
    ctx->pc = 0x1c9064u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_1c9068:
    // 0x1c9068: 0x24840001
    ctx->pc = 0x1c9068u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_1c906c:
    // 0x1c906c: 0x80850000
    ctx->pc = 0x1c906cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c9070: 0x14a0fffa
    ctx->pc = 0x1C9070u;
    {
        const bool branch_taken_0x1c9070 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c9070) {
            ctx->pc = 0x1C905Cu;
            goto label_1c905c;
        }
    }
    ctx->pc = 0x1C9078u;
    // 0x1c9078: 0x3e00008
    ctx->pc = 0x1C9078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C907Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C905Cu: goto label_1c905c;
            case 0x1C9068u: goto label_1c9068;
            case 0x1C906Cu: goto label_1c906c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C9080u;
}
