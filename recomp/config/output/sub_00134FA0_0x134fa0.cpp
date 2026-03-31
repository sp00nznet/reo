#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00134FA0
// Address: 0x134fa0 - 0x134fd0
void sub_00134FA0_0x134fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x134fa0u;

    // 0x134fa0: 0x8c82000c
    ctx->pc = 0x134fa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x134fa4: 0x14400008
    ctx->pc = 0x134FA4u;
    {
        const bool branch_taken_0x134fa4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x134FA8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x134fa4) {
            ctx->pc = 0x134FC8u;
            goto label_134fc8;
        }
    }
    ctx->pc = 0x134FACu;
    // 0x134fac: 0xac850018
    ctx->pc = 0x134facu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x134fb0: 0xac86001c
    ctx->pc = 0x134fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x134fb4: 0x24020001
    ctx->pc = 0x134fb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x134fb8: 0xac870020
    ctx->pc = 0x134fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
    // 0x134fbc: 0xac830014
    ctx->pc = 0x134fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x134fc0: 0x3e00008
    ctx->pc = 0x134FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134FC4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x134FC8u: goto label_134fc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x134FC8u;
label_134fc8:
    // 0x134fc8: 0x3e00008
    ctx->pc = 0x134FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134FCCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x134FC8u: goto label_134fc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x134FD0u;
}
