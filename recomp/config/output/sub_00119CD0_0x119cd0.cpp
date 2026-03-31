#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00119CD0
// Address: 0x119cd0 - 0x119cf0
void sub_00119CD0_0x119cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119cd0u;

    // 0x119cd0: 0x27bdfff0
    ctx->pc = 0x119cd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x119cd4: 0xffbf0000
    ctx->pc = 0x119cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x119cd8: 0xc0466ca
    ctx->pc = 0x119CD8u;
    SET_GPR_U32(ctx, 31, 0x119CE0u);
    ctx->pc = 0x119CDCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x119B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00119B28_0x119b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119CE0u; }
    }
    if (ctx->pc != 0x119CE0u) { return; }
    ctx->pc = 0x119CE0u;
    // 0x119ce0: 0xdfbf0000
    ctx->pc = 0x119ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119ce4: 0x3e00008
    ctx->pc = 0x119CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119CE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x119CECu;
    // 0x119cec: 0x0
    ctx->pc = 0x119cecu;
    // NOP
}
