#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017A6D8
// Address: 0x17a6d8 - 0x17a728
void sub_0017A6D8_0x17a6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17a6d8u;

    // 0x17a6d8: 0x3c020023
    ctx->pc = 0x17a6d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x17a6dc: 0x302d
    ctx->pc = 0x17a6dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a6e0: 0x2442f1f0
    ctx->pc = 0x17a6e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294963696));
    // 0x17a6e4: 0x8c450004
    ctx->pc = 0x17a6e4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17a6e8: 0x18a0000c
    ctx->pc = 0x17A6E8u;
    {
        const bool branch_taken_0x17a6e8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x17A6ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
        if (branch_taken_0x17a6e8) {
            ctx->pc = 0x17A71Cu;
            goto label_17a71c;
        }
    }
    ctx->pc = 0x17A6F0u;
    // 0x17a6f0: 0x40202d
    ctx->pc = 0x17a6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a6f4: 0x0
    ctx->pc = 0x17a6f4u;
    // NOP
label_17a6f8:
    // 0x17a6f8: 0x8c830000
    ctx->pc = 0x17a6f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17a6fc: 0x80102d
    ctx->pc = 0x17a6fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a700: 0x10600007
    ctx->pc = 0x17A700u;
    {
        const bool branch_taken_0x17a700 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A704u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20));
        if (branch_taken_0x17a700) {
            ctx->pc = 0x17A720u;
            goto label_17a720;
        }
    }
    ctx->pc = 0x17A708u;
    // 0x17a708: 0x24c60001
    ctx->pc = 0x17a708u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x17a70c: 0xc5102a
    ctx->pc = 0x17a70cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 5)));
    // 0x17a710: 0x0
    ctx->pc = 0x17a710u;
    // NOP
    // 0x17a714: 0x1440fff8
    ctx->pc = 0x17A714u;
    {
        const bool branch_taken_0x17a714 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17a714) {
            ctx->pc = 0x17A6F8u;
            goto label_17a6f8;
        }
    }
    ctx->pc = 0x17A71Cu;
label_17a71c:
    // 0x17a71c: 0x102d
    ctx->pc = 0x17a71cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a720:
    // 0x17a720: 0x3e00008
    ctx->pc = 0x17A720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A6F8u: goto label_17a6f8;
            case 0x17A71Cu: goto label_17a71c;
            case 0x17A720u: goto label_17a720;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A728u;
}
