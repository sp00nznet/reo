#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018DB80
// Address: 0x18db80 - 0x18dbb0
void sub_0018DB80_0x18db80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18db80u;

    // 0x18db80: 0x10000004
    ctx->pc = 0x18DB80u;
    {
        const bool branch_taken_0x18db80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18DB84u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18db80) {
            ctx->pc = 0x18DB94u;
            goto label_18db94;
        }
    }
    ctx->pc = 0x18DB88u;
label_18db88:
    // 0x18db88: 0xa0850000
    ctx->pc = 0x18db88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x18db8c: 0x24e70001
    ctx->pc = 0x18db8cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x18db90: 0x24840001
    ctx->pc = 0x18db90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_18db94:
    // 0x18db94: 0xe6182a
    ctx->pc = 0x18db94u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
    // 0x18db98: 0x0
    ctx->pc = 0x18db98u;
    // NOP
    // 0x18db9c: 0x1460fffa
    ctx->pc = 0x18DB9Cu;
    {
        const bool branch_taken_0x18db9c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x18db9c) {
            ctx->pc = 0x18DB88u;
            goto label_18db88;
        }
    }
    ctx->pc = 0x18DBA4u;
    // 0x18dba4: 0x3e00008
    ctx->pc = 0x18DBA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18DB88u: goto label_18db88;
            case 0x18DB94u: goto label_18db94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18DBACu;
    // 0x18dbac: 0x0
    ctx->pc = 0x18dbacu;
    // NOP
}
