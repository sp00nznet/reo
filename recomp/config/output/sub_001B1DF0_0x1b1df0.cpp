#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B1DF0
// Address: 0x1b1df0 - 0x1b1e20
void sub_001B1DF0_0x1b1df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b1df0u;

    // 0x1b1df0: 0x27bdfff0
    ctx->pc = 0x1b1df0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1df4: 0xffbf0000
    ctx->pc = 0x1b1df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1df8: 0xc06c72c
    ctx->pc = 0x1B1DF8u;
    SET_GPR_U32(ctx, 31, 0x1B1E00u);
    ctx->pc = 0x1B1DFCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B1CB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1CB0_0x1b1cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1E00u; }
    }
    if (ctx->pc != 0x1B1E00u) { return; }
    ctx->pc = 0x1B1E00u;
    // 0x1b1e00: 0x3c01004c
    ctx->pc = 0x1b1e00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b1e04: 0xa020ae0f
    ctx->pc = 0x1b1e04u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946319), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b1e08: 0xdfbf0000
    ctx->pc = 0x1b1e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1e0c: 0x3e00008
    ctx->pc = 0x1B1E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1E10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1E14u;
    // 0x1b1e14: 0x0
    ctx->pc = 0x1b1e14u;
    // NOP
    // 0x1b1e18: 0x0
    ctx->pc = 0x1b1e18u;
    // NOP
    // 0x1b1e1c: 0x0
    ctx->pc = 0x1b1e1cu;
    // NOP
}
