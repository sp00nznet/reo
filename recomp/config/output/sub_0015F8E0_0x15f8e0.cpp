#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015F8E0
// Address: 0x15f8e0 - 0x15f900
void sub_0015F8E0_0x15f8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15f8e0u;

    // 0x15f8e0: 0x27bdfff0
    ctx->pc = 0x15f8e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15f8e4: 0xffbf0000
    ctx->pc = 0x15f8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15f8e8: 0xc057e74
    ctx->pc = 0x15F8E8u;
    SET_GPR_U32(ctx, 31, 0x15F8F0u);
    ctx->pc = 0x15F8ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x15F9D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F9D0_0x15f9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F8F0u; }
    }
    if (ctx->pc != 0x15F8F0u) { return; }
    ctx->pc = 0x15F8F0u;
    // 0x15f8f0: 0xdfbf0000
    ctx->pc = 0x15f8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f8f4: 0x24040009
    ctx->pc = 0x15f8f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9));
    // 0x15f8f8: 0x8057e74
    ctx->pc = 0x15F8F8u;
    ctx->pc = 0x15F8FCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x15F9D0u;
    sub_0015F9D0_0x15f9d0(rdram, ctx, runtime); return;
    ctx->pc = 0x15F900u;
}
