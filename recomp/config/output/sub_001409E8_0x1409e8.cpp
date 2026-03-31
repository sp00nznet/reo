#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001409E8
// Address: 0x1409e8 - 0x140a20
void sub_001409E8_0x1409e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1409e8u;

    // 0x1409e8: 0x27bdfff0
    ctx->pc = 0x1409e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1409ec: 0x24820010
    ctx->pc = 0x1409ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 16));
    // 0x1409f0: 0xffb00000
    ctx->pc = 0x1409f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1409f4: 0xa0802d
    ctx->pc = 0x1409f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1409f8: 0xae020000
    ctx->pc = 0x1409f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1409fc: 0xffbf0008
    ctx->pc = 0x1409fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x140a00: 0xc050236
    ctx->pc = 0x140A00u;
    SET_GPR_U32(ctx, 31, 0x140A08u);
    ctx->pc = 0x140A04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
    ctx->pc = 0x1408D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001408D8_0x1408d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140A08u; }
    }
    if (ctx->pc != 0x140A08u) { return; }
    ctx->pc = 0x140A08u;
    // 0x140a08: 0xae020004
    ctx->pc = 0x140a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x140a0c: 0xdfbf0008
    ctx->pc = 0x140a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x140a10: 0xdfb00000
    ctx->pc = 0x140a10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140a14: 0x3e00008
    ctx->pc = 0x140A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140A18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x140A1Cu;
    // 0x140a1c: 0x0
    ctx->pc = 0x140a1cu;
    // NOP
}
