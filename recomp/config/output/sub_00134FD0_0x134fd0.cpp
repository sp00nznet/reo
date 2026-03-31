#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00134FD0
// Address: 0x134fd0 - 0x135020
void sub_00134FD0_0x134fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x134fd0u;

    // 0x134fd0: 0x8c82000c
    ctx->pc = 0x134fd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x134fd4: 0x14400008
    ctx->pc = 0x134FD4u;
    {
        const bool branch_taken_0x134fd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x134FD8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x134fd4) {
            ctx->pc = 0x134FF8u;
            goto label_134ff8;
        }
    }
    ctx->pc = 0x134FDCu;
    // 0x134fdc: 0xac880024
    ctx->pc = 0x134fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 8));
    // 0x134fe0: 0xac850018
    ctx->pc = 0x134fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x134fe4: 0x24020001
    ctx->pc = 0x134fe4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x134fe8: 0xac86001c
    ctx->pc = 0x134fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x134fec: 0xac830014
    ctx->pc = 0x134fecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x134ff0: 0x3e00008
    ctx->pc = 0x134FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134FF4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x134FF8u: goto label_134ff8;
            case 0x135014u: goto label_135014;
            default: break;
        }
        return;
    }
    ctx->pc = 0x134FF8u;
label_134ff8:
    // 0x134ff8: 0x3e00008
    ctx->pc = 0x134FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134FFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x134FF8u: goto label_134ff8;
            case 0x135014u: goto label_135014;
            default: break;
        }
        return;
    }
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
            case 0x134FF8u: goto label_134ff8;
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
