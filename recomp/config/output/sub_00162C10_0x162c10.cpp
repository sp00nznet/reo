#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00162C10
// Address: 0x162c10 - 0x162c40
void sub_00162C10_0x162c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x162c10u;

    // 0x162c10: 0x3c020002
    ctx->pc = 0x162c10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x162c14: 0x24070800
    ctx->pc = 0x162c14u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x162c18: 0x344249e4
    ctx->pc = 0x162c18u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 18916));
    // 0x162c1c: 0x24036d60
    ctx->pc = 0x162c1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28000));
    // 0x162c20: 0xac820000
    ctx->pc = 0x162c20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x162c24: 0xaca30000
    ctx->pc = 0x162c24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x162c28: 0xacc70000
    ctx->pc = 0x162c28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x162c2c: 0x8c820000
    ctx->pc = 0x162c2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x162c30: 0x8ca30000
    ctx->pc = 0x162c30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x162c34: 0x431021
    ctx->pc = 0x162c34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x162c38: 0x3e00008
    ctx->pc = 0x162C38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162C3Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162C40u;
}
