#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AF970
// Address: 0x1af970 - 0x1af9c0
void sub_001AF970_0x1af970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1af970u;

    // 0x1af970: 0x3c01002c
    ctx->pc = 0x1af970u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1af974: 0x3c05002c
    ctx->pc = 0x1af974u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x1af978: 0x8c238e4c
    ctx->pc = 0x1af978u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294938188)));
    // 0x1af97c: 0x24a58e40
    ctx->pc = 0x1af97cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294938176));
    // 0x1af980: 0x64182b
    ctx->pc = 0x1af980u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1af984: 0x14600009
    ctx->pc = 0x1AF984u;
    {
        const bool branch_taken_0x1af984 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AF988u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1af984) {
            ctx->pc = 0x1AF9ACu;
            goto label_1af9ac;
        }
    }
    ctx->pc = 0x1AF98Cu;
    // 0x1af98c: 0x8ca20000
    ctx->pc = 0x1af98cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1af990: 0x8ca30008
    ctx->pc = 0x1af990u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1af994: 0x431021
    ctx->pc = 0x1af994u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1af998: 0x641821
    ctx->pc = 0x1af998u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1af99c: 0xaca30008
    ctx->pc = 0x1af99cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1af9a0: 0x8ca3000c
    ctx->pc = 0x1af9a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1af9a4: 0x641823
    ctx->pc = 0x1af9a4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1af9a8: 0xaca3000c
    ctx->pc = 0x1af9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_1af9ac:
    // 0x1af9ac: 0x3e00008
    ctx->pc = 0x1AF9ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF9ACu: goto label_1af9ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AF9B4u;
    // 0x1af9b4: 0x0
    ctx->pc = 0x1af9b4u;
    // NOP
    // 0x1af9b8: 0x0
    ctx->pc = 0x1af9b8u;
    // NOP
    // 0x1af9bc: 0x0
    ctx->pc = 0x1af9bcu;
    // NOP
}
