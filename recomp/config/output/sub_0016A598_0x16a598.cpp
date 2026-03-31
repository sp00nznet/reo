#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016A598
// Address: 0x16a598 - 0x16a5d8
void sub_0016A598_0x16a598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16a598u;

    // 0x16a598: 0x18a0000c
    ctx->pc = 0x16A598u;
    {
        const bool branch_taken_0x16a598 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x16A59Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a598) {
            ctx->pc = 0x16A5CCu;
            goto label_16a5cc;
        }
    }
    ctx->pc = 0x16A5A0u;
    // 0x16a5a0: 0x90830000
    ctx->pc = 0x16a5a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16a5a4: 0x0
    ctx->pc = 0x16a5a4u;
    // NOP
label_16a5a8:
    // 0x16a5a8: 0x24840001
    ctx->pc = 0x16a5a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x16a5ac: 0x14600008
    ctx->pc = 0x16A5ACu;
    {
        const bool branch_taken_0x16a5ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x16A5B0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a5ac) {
            ctx->pc = 0x16A5D0u;
            goto label_16a5d0;
        }
    }
    ctx->pc = 0x16A5B4u;
    // 0x16a5b4: 0x24c60001
    ctx->pc = 0x16a5b4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x16a5b8: 0xc5102a
    ctx->pc = 0x16a5b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 5)));
    // 0x16a5bc: 0x0
    ctx->pc = 0x16a5bcu;
    // NOP
    // 0x16a5c0: 0x0
    ctx->pc = 0x16a5c0u;
    // NOP
    // 0x16a5c4: 0x5440fff8
    ctx->pc = 0x16A5C4u;
    {
        const bool branch_taken_0x16a5c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16a5c4) {
            ctx->pc = 0x16A5C8u;
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x16A5A8u;
            goto label_16a5a8;
        }
    }
    ctx->pc = 0x16A5CCu;
label_16a5cc:
    // 0x16a5cc: 0x24020001
    ctx->pc = 0x16a5ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_16a5d0:
    // 0x16a5d0: 0x3e00008
    ctx->pc = 0x16A5D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A5A8u: goto label_16a5a8;
            case 0x16A5CCu: goto label_16a5cc;
            case 0x16A5D0u: goto label_16a5d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16A5D8u;
}
