#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CE700
// Address: 0x1ce700 - 0x1ce750
void sub_001CE700_0x1ce700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ce700u;

    // 0x1ce700: 0x3c020034
    ctx->pc = 0x1ce700u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1ce704: 0x202d
    ctx->pc = 0x1ce704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce708: 0x10000008
    ctx->pc = 0x1CE708u;
    {
        const bool branch_taken_0x1ce708 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE70Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5376));
        if (branch_taken_0x1ce708) {
            ctx->pc = 0x1CE72Cu;
            goto label_1ce72c;
        }
    }
    ctx->pc = 0x1CE710u;
label_1ce710:
    // 0x1ce710: 0x90430000
    ctx->pc = 0x1ce710u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce714: 0x14600003
    ctx->pc = 0x1CE714u;
    {
        const bool branch_taken_0x1ce714 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ce714) {
            ctx->pc = 0x1CE724u;
            goto label_1ce724;
        }
    }
    ctx->pc = 0x1CE71Cu;
    // 0x1ce71c: 0x10000007
    ctx->pc = 0x1CE71Cu;
    {
        const bool branch_taken_0x1ce71c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce71c) {
            ctx->pc = 0x1CE73Cu;
            goto label_1ce73c;
        }
    }
    ctx->pc = 0x1CE724u;
label_1ce724:
    // 0x1ce724: 0x24840001
    ctx->pc = 0x1ce724u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ce728: 0x24420014
    ctx->pc = 0x1ce728u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
label_1ce72c:
    // 0x1ce72c: 0x28830010
    ctx->pc = 0x1ce72cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 16));
    // 0x1ce730: 0x1460fff7
    ctx->pc = 0x1CE730u;
    {
        const bool branch_taken_0x1ce730 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ce730) {
            ctx->pc = 0x1CE710u;
            goto label_1ce710;
        }
    }
    ctx->pc = 0x1CE738u;
    // 0x1ce738: 0x102d
    ctx->pc = 0x1ce738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ce73c:
    // 0x1ce73c: 0x3e00008
    ctx->pc = 0x1CE73Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE710u: goto label_1ce710;
            case 0x1CE724u: goto label_1ce724;
            case 0x1CE72Cu: goto label_1ce72c;
            case 0x1CE73Cu: goto label_1ce73c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CE744u;
    // 0x1ce744: 0x0
    ctx->pc = 0x1ce744u;
    // NOP
    // 0x1ce748: 0x0
    ctx->pc = 0x1ce748u;
    // NOP
    // 0x1ce74c: 0x0
    ctx->pc = 0x1ce74cu;
    // NOP
}
