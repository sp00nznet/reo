#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00123D58
// Address: 0x123d58 - 0x123db0
void sub_00123D58_0x123d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x123d58u;

    // 0x123d58: 0x3c050024
    ctx->pc = 0x123d58u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x123d5c: 0x27bdfff0
    ctx->pc = 0x123d5cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x123d60: 0x24060004
    ctx->pc = 0x123d60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x123d64: 0x24a59320
    ctx->pc = 0x123d64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939424));
    // 0x123d68: 0xffb00000
    ctx->pc = 0x123d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123d6c: 0xffbf0008
    ctx->pc = 0x123d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x123d70: 0xc041e86
    ctx->pc = 0x123D70u;
    SET_GPR_U32(ctx, 31, 0x123D78u);
    ctx->pc = 0x123D74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107A18_0x107a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123D78u; }
    }
    if (ctx->pc != 0x123D78u) { return; }
    ctx->pc = 0x123D78u;
    // 0x123d78: 0x3c050024
    ctx->pc = 0x123d78u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x123d7c: 0x200202d
    ctx->pc = 0x123d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123d80: 0x24a59328
    ctx->pc = 0x123d80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939432));
    // 0x123d84: 0x10400005
    ctx->pc = 0x123D84u;
    {
        const bool branch_taken_0x123d84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x123D88u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x123d84) {
            ctx->pc = 0x123D9Cu;
            goto label_123d9c;
        }
    }
    ctx->pc = 0x123D8Cu;
    // 0x123d8c: 0xc041e86
    ctx->pc = 0x123D8Cu;
    SET_GPR_U32(ctx, 31, 0x123D94u);
    ctx->pc = 0x107A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107A18_0x107a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123D94u; }
    }
    if (ctx->pc != 0x123D94u) { return; }
    ctx->pc = 0x123D94u;
    // 0x123d94: 0x54400002
    ctx->pc = 0x123D94u;
    {
        const bool branch_taken_0x123d94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x123d94) {
            ctx->pc = 0x123D98u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x123DA0u;
            goto label_123da0;
        }
    }
    ctx->pc = 0x123D9Cu;
label_123d9c:
    // 0x123d9c: 0x24020001
    ctx->pc = 0x123d9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_123da0:
    // 0x123da0: 0xdfb00000
    ctx->pc = 0x123da0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123da4: 0xdfbf0008
    ctx->pc = 0x123da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123da8: 0x3e00008
    ctx->pc = 0x123DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123DACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123D9Cu: goto label_123d9c;
            case 0x123DA0u: goto label_123da0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x123DB0u;
}
