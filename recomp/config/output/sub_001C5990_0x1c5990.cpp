#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C5990
// Address: 0x1c5990 - 0x1c59d0
void sub_001C5990_0x1c5990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c5990u;

    // 0x1c5990: 0x30a200ff
    ctx->pc = 0x1c5990u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 255));
    // 0x1c5994: 0x30420080
    ctx->pc = 0x1c5994u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x1c5998: 0x10400002
    ctx->pc = 0x1C5998u;
    {
        const bool branch_taken_0x1c5998 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C599Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 8));
        if (branch_taken_0x1c5998) {
            ctx->pc = 0x1C59A4u;
            goto label_1c59a4;
        }
    }
    ctx->pc = 0x1C59A0u;
    // 0x1c59a0: 0x24820018
    ctx->pc = 0x1c59a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 24));
label_1c59a4:
    // 0x1c59a4: 0x90430008
    ctx->pc = 0x1c59a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c59a8: 0x90420009
    ctx->pc = 0x1c59a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x1c59ac: 0x62082a
    ctx->pc = 0x1c59acu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x1c59b0: 0x10200003
    ctx->pc = 0x1C59B0u;
    {
        const bool branch_taken_0x1c59b0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c59b0) {
            ctx->pc = 0x1C59C0u;
            goto label_1c59c0;
        }
    }
    ctx->pc = 0x1C59B8u;
    // 0x1c59b8: 0x10000002
    ctx->pc = 0x1C59B8u;
    {
        const bool branch_taken_0x1c59b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C59BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c59b8) {
            ctx->pc = 0x1C59C4u;
            goto label_1c59c4;
        }
    }
    ctx->pc = 0x1C59C0u;
label_1c59c0:
    // 0x1c59c0: 0x102d
    ctx->pc = 0x1c59c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c59c4:
    // 0x1c59c4: 0x3e00008
    ctx->pc = 0x1C59C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C59A4u: goto label_1c59a4;
            case 0x1C59C0u: goto label_1c59c0;
            case 0x1C59C4u: goto label_1c59c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C59CCu;
    // 0x1c59cc: 0x0
    ctx->pc = 0x1c59ccu;
    // NOP
}
