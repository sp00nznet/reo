#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015E978
// Address: 0x15e978 - 0x15e998
void sub_0015E978_0x15e978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15e978u;

    // 0x15e978: 0x27bdfff0
    ctx->pc = 0x15e978u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15e97c: 0xffbf0000
    ctx->pc = 0x15e97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15e980: 0xc05799e
    ctx->pc = 0x15E980u;
    SET_GPR_U32(ctx, 31, 0x15E988u);
    ctx->pc = 0x15E678u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E678_0x15e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E988u; }
    }
    if (ctx->pc != 0x15E988u) { return; }
    ctx->pc = 0x15E988u;
    // 0x15e988: 0x8c42003c
    ctx->pc = 0x15e988u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x15e98c: 0xdfbf0000
    ctx->pc = 0x15e98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e990: 0x3e00008
    ctx->pc = 0x15E990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E994u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15E998u;
}
