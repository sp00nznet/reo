#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AE3D0
// Address: 0x1ae3d0 - 0x1ae3f0
void sub_001AE3D0_0x1ae3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ae3d0u;

    // 0x1ae3d0: 0x27bdfff0
    ctx->pc = 0x1ae3d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ae3d4: 0xffbf0000
    ctx->pc = 0x1ae3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ae3d8: 0xc04cd0a
    ctx->pc = 0x1AE3D8u;
    SET_GPR_U32(ctx, 31, 0x1AE3E0u);
    ctx->pc = 0x133428u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00133428_0x133428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE3E0u; }
    }
    if (ctx->pc != 0x1AE3E0u) { return; }
    ctx->pc = 0x1AE3E0u;
    // 0x1ae3e0: 0xdfbf0000
    ctx->pc = 0x1ae3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae3e4: 0x102d
    ctx->pc = 0x1ae3e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae3e8: 0x3e00008
    ctx->pc = 0x1AE3E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE3ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AE3F0u;
}
