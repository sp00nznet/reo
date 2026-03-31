#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B3D90
// Address: 0x1b3d90 - 0x1b3dc0
void sub_001B3D90_0x1b3d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b3d90u;

    // 0x1b3d90: 0x27bdfff0
    ctx->pc = 0x1b3d90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3d94: 0xffbf0000
    ctx->pc = 0x1b3d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3d98: 0xc06d2ac
    ctx->pc = 0x1B3D98u;
    SET_GPR_U32(ctx, 31, 0x1B3DA0u);
    ctx->pc = 0x1B3D9Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x1B4AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4AB0_0x1b4ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3DA0u; }
    }
    if (ctx->pc != 0x1B3DA0u) { return; }
    ctx->pc = 0x1B3DA0u;
    // 0x1b3da0: 0xc06d288
    ctx->pc = 0x1B3DA0u;
    SET_GPR_U32(ctx, 31, 0x1B3DA8u);
    ctx->pc = 0x1B4A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4A20_0x1b4a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3DA8u; }
    }
    if (ctx->pc != 0x1B3DA8u) { return; }
    ctx->pc = 0x1B3DA8u;
    // 0x1b3da8: 0xdfbf0000
    ctx->pc = 0x1b3da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3dac: 0x3e00008
    ctx->pc = 0x1B3DACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3DB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B3DB4u;
    // 0x1b3db4: 0x0
    ctx->pc = 0x1b3db4u;
    // NOP
    // 0x1b3db8: 0x0
    ctx->pc = 0x1b3db8u;
    // NOP
    // 0x1b3dbc: 0x0
    ctx->pc = 0x1b3dbcu;
    // NOP
}
