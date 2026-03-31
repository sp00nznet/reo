#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00170518
// Address: 0x170518 - 0x170560
void sub_00170518_0x170518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x170518u;

    // 0x170518: 0x8c821b30
    ctx->pc = 0x170518u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 6960)));
    // 0x17051c: 0x382d
    ctx->pc = 0x17051cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170520: 0x8c460138
    ctx->pc = 0x170520u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x170524: 0x18c0000b
    ctx->pc = 0x170524u;
    {
        const bool branch_taken_0x170524 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x170528u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 316));
        if (branch_taken_0x170524) {
            ctx->pc = 0x170554u;
            goto label_170554;
        }
    }
    ctx->pc = 0x17052Cu;
    // 0x17052c: 0x248414e0
    ctx->pc = 0x17052cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 5344));
label_170530:
    // 0x170530: 0x80102d
    ctx->pc = 0x170530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170534: 0x10650008
    ctx->pc = 0x170534u;
    {
        const bool branch_taken_0x170534 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        ctx->pc = 0x170538u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 92));
        if (branch_taken_0x170534) {
            ctx->pc = 0x170558u;
            goto label_170558;
        }
    }
    ctx->pc = 0x17053Cu;
    // 0x17053c: 0x24e70001
    ctx->pc = 0x17053cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x170540: 0xe6102a
    ctx->pc = 0x170540u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
    // 0x170544: 0x0
    ctx->pc = 0x170544u;
    // NOP
    // 0x170548: 0x0
    ctx->pc = 0x170548u;
    // NOP
    // 0x17054c: 0x1440fff8
    ctx->pc = 0x17054Cu;
    {
        const bool branch_taken_0x17054c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x170550u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 128));
        if (branch_taken_0x17054c) {
            ctx->pc = 0x170530u;
            goto label_170530;
        }
    }
    ctx->pc = 0x170554u;
label_170554:
    // 0x170554: 0x102d
    ctx->pc = 0x170554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170558:
    // 0x170558: 0x3e00008
    ctx->pc = 0x170558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170530u: goto label_170530;
            case 0x170554u: goto label_170554;
            case 0x170558u: goto label_170558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170560u;
}
