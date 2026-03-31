#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CB8C0
// Address: 0x1cb8c0 - 0x1cb8f0
void sub_001CB8C0_0x1cb8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cb8c0u;

    // 0x1cb8c0: 0x27bdfff0
    ctx->pc = 0x1cb8c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb8c4: 0x3c010023
    ctx->pc = 0x1cb8c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1cb8c8: 0xffbf0000
    ctx->pc = 0x1cb8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb8cc: 0x2403ffff
    ctx->pc = 0x1cb8ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cb8d0: 0x8c245ff8
    ctx->pc = 0x1cb8d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 24568)));
    // 0x1cb8d4: 0x10830003
    ctx->pc = 0x1CB8D4u;
    {
        const bool branch_taken_0x1cb8d4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1cb8d4) {
            ctx->pc = 0x1CB8E4u;
            goto label_1cb8e4;
        }
    }
    ctx->pc = 0x1CB8DCu;
    // 0x1cb8dc: 0xc072f78
    ctx->pc = 0x1CB8DCu;
    SET_GPR_U32(ctx, 31, 0x1CB8E4u);
    ctx->pc = 0x1CBDE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBDE0_0x1cbde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB8E4u; }
    }
    if (ctx->pc != 0x1CB8E4u) { return; }
    ctx->pc = 0x1CB8E4u;
label_1cb8e4:
    // 0x1cb8e4: 0xdfbf0000
    ctx->pc = 0x1cb8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb8e8: 0x3e00008
    ctx->pc = 0x1CB8E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB8ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB8E4u: goto label_1cb8e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CB8F0u;
}
