#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001399F8
// Address: 0x1399f8 - 0x139a30
void sub_001399F8_0x1399f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1399f8u;

    // 0x1399f8: 0x3c020022
    ctx->pc = 0x1399f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1399fc: 0x282d
    ctx->pc = 0x1399fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a00: 0x2443cc60
    ctx->pc = 0x139a00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294954080));
    // 0x139a04: 0x24040027
    ctx->pc = 0x139a04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 39));
label_139a08:
    // 0x139a08: 0x80620000
    ctx->pc = 0x139a08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x139a0c: 0x2484ffff
    ctx->pc = 0x139a0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x139a10: 0x38420000
    ctx->pc = 0x139a10u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 0));
    // 0x139a14: 0x62280a
    ctx->pc = 0x139a14u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
    // 0x139a18: 0x0
    ctx->pc = 0x139a18u;
    // NOP
    // 0x139a1c: 0x481fffa
    ctx->pc = 0x139A1Cu;
    {
        const bool branch_taken_0x139a1c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x139A20u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 72));
        if (branch_taken_0x139a1c) {
            ctx->pc = 0x139A08u;
            goto label_139a08;
        }
    }
    ctx->pc = 0x139A24u;
    // 0x139a24: 0x3e00008
    ctx->pc = 0x139A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139A28u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x139A08u: goto label_139a08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x139A2Cu;
    // 0x139a2c: 0x0
    ctx->pc = 0x139a2cu;
    // NOP
}
