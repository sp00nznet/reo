#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A2BB0
// Address: 0x1a2bb0 - 0x1a2be0
void sub_001A2BB0_0x1a2bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a2bb0u;

    // 0x1a2bb0: 0x27bdffe0
    ctx->pc = 0x1a2bb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a2bb4: 0xffbf0010
    ctx->pc = 0x1a2bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a2bb8: 0x7fb00000
    ctx->pc = 0x1a2bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a2bbc: 0xc068ad8
    ctx->pc = 0x1A2BBCu;
    SET_GPR_U32(ctx, 31, 0x1A2BC4u);
    ctx->pc = 0x1A2BC0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A2B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2B60_0x1a2b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2BC4u; }
    }
    if (ctx->pc != 0x1A2BC4u) { return; }
    ctx->pc = 0x1A2BC4u;
    // 0x1a2bc4: 0x200202d
    ctx->pc = 0x1a2bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2bc8: 0xc068af8
    ctx->pc = 0x1A2BC8u;
    SET_GPR_U32(ctx, 31, 0x1A2BD0u);
    ctx->pc = 0x1A2BCCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A2BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2BE0_0x1a2be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2BD0u; }
    }
    if (ctx->pc != 0x1A2BD0u) { return; }
    ctx->pc = 0x1A2BD0u;
    // 0x1a2bd0: 0xdfbf0010
    ctx->pc = 0x1a2bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2bd4: 0x7bb00000
    ctx->pc = 0x1a2bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2bd8: 0x3e00008
    ctx->pc = 0x1A2BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2BDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2BE0u;
}
