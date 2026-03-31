#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D1990
// Address: 0x1d1990 - 0x1d19d0
void sub_001D1990_0x1d1990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d1990u;

    // 0x1d1990: 0x27bdffe0
    ctx->pc = 0x1d1990u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1994: 0x240701f4
    ctx->pc = 0x1d1994u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 500));
    // 0x1d1998: 0xffbf0010
    ctx->pc = 0x1d1998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d199c: 0x402d
    ctx->pc = 0x1d199cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19a0: 0x7fb00000
    ctx->pc = 0x1d19a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d19a4: 0xc074658
    ctx->pc = 0x1D19A4u;
    SET_GPR_U32(ctx, 31, 0x1D19ACu);
    ctx->pc = 0x1D19A8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D1960u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1960_0x1d1960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D19ACu; }
    }
    if (ctx->pc != 0x1D19ACu) { return; }
    ctx->pc = 0x1D19ACu;
    // 0x1d19ac: 0x24030002
    ctx->pc = 0x1d19acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d19b0: 0xa2030002
    ctx->pc = 0x1d19b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d19b4: 0xdfbf0010
    ctx->pc = 0x1d19b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d19b8: 0x7bb00000
    ctx->pc = 0x1d19b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d19bc: 0x3e00008
    ctx->pc = 0x1D19BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D19C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D19C4u;
    // 0x1d19c4: 0x0
    ctx->pc = 0x1d19c4u;
    // NOP
    // 0x1d19c8: 0x0
    ctx->pc = 0x1d19c8u;
    // NOP
    // 0x1d19cc: 0x0
    ctx->pc = 0x1d19ccu;
    // NOP
}
