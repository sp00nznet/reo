#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001159D0
// Address: 0x1159d0 - 0x115a10
void sub_001159D0_0x1159d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1159d0u;

    // 0x1159d0: 0x80282d
    ctx->pc = 0x1159d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1159d4: 0x8ca20004
    ctx->pc = 0x1159d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1159d8: 0x8ca4000c
    ctx->pc = 0x1159d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1159dc: 0x8ca30000
    ctx->pc = 0x1159dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1159e0: 0x24420001
    ctx->pc = 0x1159e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1159e4: 0x24840001
    ctx->pc = 0x1159e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1159e8: 0xaca20004
    ctx->pc = 0x1159e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1159ec: 0x24630010
    ctx->pc = 0x1159ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x1159f0: 0xa31821
    ctx->pc = 0x1159f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1159f4: 0x14830003
    ctx->pc = 0x1159F4u;
    {
        const bool branch_taken_0x1159f4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1159F8u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
        if (branch_taken_0x1159f4) {
            ctx->pc = 0x115A04u;
            goto label_115a04;
        }
    }
    ctx->pc = 0x1159FCu;
    // 0x1159fc: 0x24a20010
    ctx->pc = 0x1159fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
    // 0x115a00: 0xaca2000c
    ctx->pc = 0x115a00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_115a04:
    // 0x115a04: 0x3e00008
    ctx->pc = 0x115A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115A04u: goto label_115a04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x115A0Cu;
    // 0x115a0c: 0x0
    ctx->pc = 0x115a0cu;
    // NOP
}
