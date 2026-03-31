#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_135000
// Address: 0x135000 - 0x135020
void entry_135000_0x135020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x135000u;

    // 0x135000: 0x8c82000c
    ctx->pc = 0x135000u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x135004: 0x14400003
    ctx->pc = 0x135004u;
    {
        const bool branch_taken_0x135004 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x135008u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x135004) {
            ctx->pc = 0x135014u;
            goto label_135014;
        }
    }
    ctx->pc = 0x13500Cu;
    // 0x13500c: 0xac800010
    ctx->pc = 0x13500cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x135010: 0xac82000c
    ctx->pc = 0x135010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_135014:
    // 0x135014: 0x3e00008
    ctx->pc = 0x135014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135014u: goto label_135014;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13501Cu;
    // 0x13501c: 0x0
    ctx->pc = 0x13501cu;
    // NOP
}
