#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13e688
// Address: 0x13e688 - 0x13e6c0
void entry_13e688_0x13e6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13e688u;

    // 0x13e688: 0x8c820048
    ctx->pc = 0x13e688u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x13e68c: 0x10450009
    ctx->pc = 0x13E68Cu;
    {
        const bool branch_taken_0x13e68c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x13E690u;
        SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
        if (branch_taken_0x13e68c) {
            ctx->pc = 0x13E6B4u;
            goto label_13e6b4;
        }
    }
    ctx->pc = 0x13E694u;
    // 0x13e694: 0x8c431468
    ctx->pc = 0x13e694u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 5224)));
    // 0x13e698: 0x14600004
    ctx->pc = 0x13E698u;
    {
        const bool branch_taken_0x13e698 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x13E69Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 24));
        if (branch_taken_0x13e698) {
            ctx->pc = 0x13E6ACu;
            goto label_13e6ac;
        }
    }
    ctx->pc = 0x13E6A0u;
    // 0x13e6a0: 0x24020001
    ctx->pc = 0x13e6a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e6a4: 0x10a20003
    ctx->pc = 0x13E6A4u;
    {
        const bool branch_taken_0x13e6a4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x13E6A8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 24));
        if (branch_taken_0x13e6a4) {
            ctx->pc = 0x13E6B4u;
            goto label_13e6b4;
        }
    }
    ctx->pc = 0x13E6ACu;
label_13e6ac:
    // 0x13e6ac: 0x21603
    ctx->pc = 0x13e6acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x13e6b0: 0xac820048
    ctx->pc = 0x13e6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
label_13e6b4:
    // 0x13e6b4: 0x3e00008
    ctx->pc = 0x13E6B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13E6ACu: goto label_13e6ac;
            case 0x13E6B4u: goto label_13e6b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13E6BCu;
    // 0x13e6bc: 0x0
    ctx->pc = 0x13e6bcu;
    // NOP
}
