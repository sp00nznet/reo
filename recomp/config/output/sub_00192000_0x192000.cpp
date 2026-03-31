#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00192000
// Address: 0x192000 - 0x192040
void sub_00192000_0x192000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x192000u;

    // 0x192000: 0x3c017000
    ctx->pc = 0x192000u;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x192004: 0x51980
    ctx->pc = 0x192004u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 6));
    // 0x192008: 0x34213700
    ctx->pc = 0x192008u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 14080));
    // 0x19200c: 0x24060008
    ctx->pc = 0x19200cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x192010: 0x613821
    ctx->pc = 0x192010u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_192014:
    // 0x192014: 0x8ce50000
    ctx->pc = 0x192014u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x192018: 0x24c6ffff
    ctx->pc = 0x192018u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x19201c: 0x8ce30004
    ctx->pc = 0x19201cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x192020: 0xac850000
    ctx->pc = 0x192020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x192024: 0x24e70008
    ctx->pc = 0x192024u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
    // 0x192028: 0xac830004
    ctx->pc = 0x192028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x19202c: 0x1cc0fff9
    ctx->pc = 0x19202Cu;
    {
        const bool branch_taken_0x19202c = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x192030u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
        if (branch_taken_0x19202c) {
            ctx->pc = 0x192014u;
            goto label_192014;
        }
    }
    ctx->pc = 0x192034u;
    // 0x192034: 0x3e00008
    ctx->pc = 0x192034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192014u: goto label_192014;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19203Cu;
    // 0x19203c: 0x0
    ctx->pc = 0x19203cu;
    // NOP
}
