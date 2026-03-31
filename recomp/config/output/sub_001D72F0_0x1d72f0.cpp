#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D72F0
// Address: 0x1d72f0 - 0x1d7330
void sub_001D72F0_0x1d72f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d72f0u;

    // 0x1d72f0: 0x27bdfff0
    ctx->pc = 0x1d72f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d72f4: 0xffbf0000
    ctx->pc = 0x1d72f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d72f8: 0x8c850004
    ctx->pc = 0x1d72f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d72fc: 0x8c840000
    ctx->pc = 0x1d72fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d7300: 0x851024
    ctx->pc = 0x1d7300u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d7304: 0x401027
    ctx->pc = 0x1d7304u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
    // 0x1d7308: 0xc075e8c
    ctx->pc = 0x1D7308u;
    SET_GPR_U32(ctx, 31, 0x1D7310u);
    ctx->pc = 0x1D730Cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x1D7A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7A30_0x1d7a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7310u; }
    }
    if (ctx->pc != 0x1D7310u) { return; }
    ctx->pc = 0x1D7310u;
    // 0x1d7310: 0xdfbf0000
    ctx->pc = 0x1d7310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7314: 0x2143c
    ctx->pc = 0x1d7314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d7318: 0x2143f
    ctx->pc = 0x1d7318u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d731c: 0x40102a
    ctx->pc = 0x1d731cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 0)));
    // 0x1d7320: 0x21023
    ctx->pc = 0x1d7320u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1d7324: 0x3e00008
    ctx->pc = 0x1D7324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7328u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D732Cu;
    // 0x1d732c: 0x0
    ctx->pc = 0x1d732cu;
    // NOP
}
