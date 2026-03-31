#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7330
// Address: 0x1d7330 - 0x1d7360
void sub_001D7330_0x1d7330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7330u;

    // 0x1d7330: 0x27bdfff0
    ctx->pc = 0x1d7330u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7334: 0xffbf0000
    ctx->pc = 0x1d7334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7338: 0xc0762f8
    ctx->pc = 0x1D7338u;
    SET_GPR_U32(ctx, 31, 0x1D7340u);
    ctx->pc = 0x1D8BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8BE0_0x1d8be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7340u; }
    }
    if (ctx->pc != 0x1D7340u) { return; }
    ctx->pc = 0x1D7340u;
    // 0x1d7340: 0x24030002
    ctx->pc = 0x1d7340u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7344: 0x3c010034
    ctx->pc = 0x1d7344u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d7348: 0xac2345e8
    ctx->pc = 0x1d7348u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17896), GPR_U32(ctx, 3));
    // 0x1d734c: 0x2143c
    ctx->pc = 0x1d734cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d7350: 0xdfbf0000
    ctx->pc = 0x1d7350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7354: 0x2143f
    ctx->pc = 0x1d7354u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d7358: 0x3e00008
    ctx->pc = 0x1D7358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D735Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7360u;
}
