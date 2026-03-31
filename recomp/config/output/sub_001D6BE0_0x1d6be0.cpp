#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D6BE0
// Address: 0x1d6be0 - 0x1d6c20
void sub_001D6BE0_0x1d6be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d6be0u;

    // 0x1d6be0: 0x27bdfff0
    ctx->pc = 0x1d6be0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6be4: 0xffbf0000
    ctx->pc = 0x1d6be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6be8: 0xc075e78
    ctx->pc = 0x1D6BE8u;
    SET_GPR_U32(ctx, 31, 0x1D6BF0u);
    ctx->pc = 0x1D79E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D79E0_0x1d79e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6BF0u; }
    }
    if (ctx->pc != 0x1D6BF0u) { return; }
    ctx->pc = 0x1D6BF0u;
    // 0x1d6bf0: 0x3c010034
    ctx->pc = 0x1d6bf0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d6bf4: 0x2143c
    ctx->pc = 0x1d6bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6bf8: 0xa0204600
    ctx->pc = 0x1d6bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17920), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d6bfc: 0x2143f
    ctx->pc = 0x1d6bfcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d6c00: 0x3c010034
    ctx->pc = 0x1d6c00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d6c04: 0xac2045e8
    ctx->pc = 0x1d6c04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17896), GPR_U32(ctx, 0));
    // 0x1d6c08: 0x3c010034
    ctx->pc = 0x1d6c08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d6c0c: 0xac2045f8
    ctx->pc = 0x1d6c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17912), GPR_U32(ctx, 0));
    // 0x1d6c10: 0xdfbf0000
    ctx->pc = 0x1d6c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6c14: 0x3e00008
    ctx->pc = 0x1D6C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6C18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D6C1Cu;
    // 0x1d6c1c: 0x0
    ctx->pc = 0x1d6c1cu;
    // NOP
}
