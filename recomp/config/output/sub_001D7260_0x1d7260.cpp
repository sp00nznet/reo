#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7260
// Address: 0x1d7260 - 0x1d7290
void sub_001D7260_0x1d7260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7260u;

    // 0x1d7260: 0x27bdfff0
    ctx->pc = 0x1d7260u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7264: 0xffbf0000
    ctx->pc = 0x1d7264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7268: 0xc076250
    ctx->pc = 0x1D7268u;
    SET_GPR_U32(ctx, 31, 0x1D7270u);
    ctx->pc = 0x1D8940u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8940_0x1d8940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7270u; }
    }
    if (ctx->pc != 0x1D7270u) { return; }
    ctx->pc = 0x1D7270u;
    // 0x1d7270: 0x24030005
    ctx->pc = 0x1d7270u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d7274: 0x3c010034
    ctx->pc = 0x1d7274u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d7278: 0xac2345e8
    ctx->pc = 0x1d7278u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17896), GPR_U32(ctx, 3));
    // 0x1d727c: 0x2143c
    ctx->pc = 0x1d727cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d7280: 0xdfbf0000
    ctx->pc = 0x1d7280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7284: 0x2143f
    ctx->pc = 0x1d7284u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d7288: 0x3e00008
    ctx->pc = 0x1D7288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D728Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7290u;
}
