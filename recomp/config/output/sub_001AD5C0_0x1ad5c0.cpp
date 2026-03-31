#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AD5C0
// Address: 0x1ad5c0 - 0x1ad610
void sub_001AD5C0_0x1ad5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ad5c0u;

    // 0x1ad5c0: 0x27bdfff0
    ctx->pc = 0x1ad5c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ad5c4: 0x3c04002b
    ctx->pc = 0x1ad5c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1ad5c8: 0xffbf0000
    ctx->pc = 0x1ad5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ad5cc: 0x24843840
    ctx->pc = 0x1ad5ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14400));
    // 0x1ad5d0: 0x282d
    ctx->pc = 0x1ad5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad5d4: 0xc041f1a
    ctx->pc = 0x1AD5D4u;
    SET_GPR_U32(ctx, 31, 0x1AD5DCu);
    ctx->pc = 0x1AD5D8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 264));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD5DCu; }
    }
    if (ctx->pc != 0x1AD5DCu) { return; }
    ctx->pc = 0x1AD5DCu;
    // 0x1ad5dc: 0x3c010032
    ctx->pc = 0x1ad5dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1ad5e0: 0x8c24440c
    ctx->pc = 0x1ad5e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x1ad5e4: 0x10800004
    ctx->pc = 0x1AD5E4u;
    {
        const bool branch_taken_0x1ad5e4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD5E8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
        if (branch_taken_0x1ad5e4) {
            ctx->pc = 0x1AD5F8u;
            goto label_1ad5f8;
        }
    }
    ctx->pc = 0x1AD5ECu;
    // 0x1ad5ec: 0x3c01002b
    ctx->pc = 0x1ad5ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1ad5f0: 0x831821
    ctx->pc = 0x1ad5f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ad5f4: 0xac233848
    ctx->pc = 0x1ad5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14408), GPR_U32(ctx, 3));
label_1ad5f8:
    // 0x1ad5f8: 0xdfbf0000
    ctx->pc = 0x1ad5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad5fc: 0x3e00008
    ctx->pc = 0x1AD5FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD600u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD5F8u: goto label_1ad5f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AD604u;
    // 0x1ad604: 0x0
    ctx->pc = 0x1ad604u;
    // NOP
    // 0x1ad608: 0x0
    ctx->pc = 0x1ad608u;
    // NOP
    // 0x1ad60c: 0x0
    ctx->pc = 0x1ad60cu;
    // NOP
}
