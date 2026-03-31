#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00198A30
// Address: 0x198a30 - 0x198a70
void sub_00198A30_0x198a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x198a30u;

    // 0x198a30: 0x8487001a
    ctx->pc = 0x198a30u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x198a34: 0x94a30000
    ctx->pc = 0x198a34u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x198a38: 0xe3082a
    ctx->pc = 0x198a38u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 3)));
    // 0x198a3c: 0x10200002
    ctx->pc = 0x198A3Cu;
    {
        const bool branch_taken_0x198a3c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x198a3c) {
            ctx->pc = 0x198A48u;
            goto label_198a48;
        }
    }
    ctx->pc = 0x198A44u;
    // 0x198a44: 0xa4a70000
    ctx->pc = 0x198a44u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 7));
label_198a48:
    // 0x198a48: 0x8484001c
    ctx->pc = 0x198a48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x198a4c: 0x94c30000
    ctx->pc = 0x198a4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x198a50: 0x83082a
    ctx->pc = 0x198a50u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x198a54: 0x10200002
    ctx->pc = 0x198A54u;
    {
        const bool branch_taken_0x198a54 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x198a54) {
            ctx->pc = 0x198A60u;
            goto label_198a60;
        }
    }
    ctx->pc = 0x198A5Cu;
    // 0x198a5c: 0xa4c40000
    ctx->pc = 0x198a5cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
label_198a60:
    // 0x198a60: 0x3e00008
    ctx->pc = 0x198A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198A48u: goto label_198a48;
            case 0x198A60u: goto label_198a60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198A68u;
    // 0x198a68: 0x0
    ctx->pc = 0x198a68u;
    // NOP
    // 0x198a6c: 0x0
    ctx->pc = 0x198a6cu;
    // NOP
}
