#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00125C08
// Address: 0x125c08 - 0x125c30
void sub_00125C08_0x125c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125c08u;

    // 0x125c08: 0x3c050024
    ctx->pc = 0x125c08u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x125c0c: 0x27bdfff0
    ctx->pc = 0x125c0cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x125c10: 0x24060004
    ctx->pc = 0x125c10u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x125c14: 0xffbf0000
    ctx->pc = 0x125c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x125c18: 0xc041e86
    ctx->pc = 0x125C18u;
    SET_GPR_U32(ctx, 31, 0x125C20u);
    ctx->pc = 0x125C1Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941624));
    ctx->pc = 0x107A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107A18_0x107a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125C20u; }
    }
    if (ctx->pc != 0x125C20u) { return; }
    ctx->pc = 0x125C20u;
    // 0x125c20: 0xdfbf0000
    ctx->pc = 0x125c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125c24: 0x2c420001
    ctx->pc = 0x125c24u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x125c28: 0x3e00008
    ctx->pc = 0x125C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125C2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125C30u;
}
