#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011C798
// Address: 0x11c798 - 0x11c7b8
void sub_0011C798_0x11c798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11c798u;

    // 0x11c798: 0x27bdfff0
    ctx->pc = 0x11c798u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11c79c: 0xffbf0000
    ctx->pc = 0x11c79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c7a0: 0xc047154
    ctx->pc = 0x11C7A0u;
    SET_GPR_U32(ctx, 31, 0x11C7A8u);
    ctx->pc = 0x11C7A4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11C550u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C550_0x11c550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C7A8u; }
    }
    if (ctx->pc != 0x11C7A8u) { return; }
    ctx->pc = 0x11C7A8u;
    // 0x11c7a8: 0xdfbf0000
    ctx->pc = 0x11c7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c7ac: 0x3e00008
    ctx->pc = 0x11C7ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C7B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11C7B4u;
    // 0x11c7b4: 0x0
    ctx->pc = 0x11c7b4u;
    // NOP
}
