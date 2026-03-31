#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1790a8
// Address: 0x1790a8 - 0x1790f0
void entry_1790a8_0x1790f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1790a8u;

    // 0x1790a8: 0x27bdfff0
    ctx->pc = 0x1790a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1790ac: 0x3c030027
    ctx->pc = 0x1790acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1790b0: 0xffbf0000
    ctx->pc = 0x1790b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1790b4: 0x24636144
    ctx->pc = 0x1790b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 24900));
    // 0x1790b8: 0x8c620000
    ctx->pc = 0x1790b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1790bc: 0x2442ffff
    ctx->pc = 0x1790bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1790c0: 0x1c400007
    ctx->pc = 0x1790C0u;
    {
        const bool branch_taken_0x1790c0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1790C4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1790c0) {
            ctx->pc = 0x1790E0u;
            goto label_1790e0;
        }
    }
    ctx->pc = 0x1790C8u;
    // 0x1790c8: 0x3c040027
    ctx->pc = 0x1790c8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)39 << 16));
    // 0x1790cc: 0xdfbf0000
    ctx->pc = 0x1790ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1790d0: 0x24846138
    ctx->pc = 0x1790d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24888));
    // 0x1790d4: 0x805e47a
    ctx->pc = 0x1790D4u;
    ctx->pc = 0x1790D8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1791E8u;
    entry_1791e8_0x1791f8(rdram, ctx, runtime); return;
    ctx->pc = 0x1790DCu;
    // 0x1790dc: 0x0
    ctx->pc = 0x1790dcu;
    // NOP
label_1790e0:
    // 0x1790e0: 0xdfbf0000
    ctx->pc = 0x1790e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1790e4: 0x3e00008
    ctx->pc = 0x1790E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1790E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1790E0u: goto label_1790e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1790ECu;
    // 0x1790ec: 0x0
    ctx->pc = 0x1790ecu;
    // NOP
}
