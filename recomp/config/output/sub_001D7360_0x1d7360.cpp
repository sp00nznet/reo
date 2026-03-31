#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7360
// Address: 0x1d7360 - 0x1d7390
void sub_001D7360_0x1d7360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7360u;

    // 0x1d7360: 0x27bdfff0
    ctx->pc = 0x1d7360u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7364: 0xffbf0000
    ctx->pc = 0x1d7364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7368: 0xc076310
    ctx->pc = 0x1D7368u;
    SET_GPR_U32(ctx, 31, 0x1D7370u);
    ctx->pc = 0x1D8C40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8C40_0x1d8c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7370u; }
    }
    if (ctx->pc != 0x1D7370u) { return; }
    ctx->pc = 0x1D7370u;
    // 0x1d7370: 0xdfbf0000
    ctx->pc = 0x1d7370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7374: 0x2143c
    ctx->pc = 0x1d7374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d7378: 0x2143f
    ctx->pc = 0x1d7378u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d737c: 0x3e00008
    ctx->pc = 0x1D737Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7380u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7384u;
    // 0x1d7384: 0x0
    ctx->pc = 0x1d7384u;
    // NOP
    // 0x1d7388: 0x0
    ctx->pc = 0x1d7388u;
    // NOP
    // 0x1d738c: 0x0
    ctx->pc = 0x1d738cu;
    // NOP
}
