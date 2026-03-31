#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00176DB0
// Address: 0x176db0 - 0x176de8
void sub_00176DB0_0x176db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x176db0u;

    // 0x176db0: 0x27bdfff0
    ctx->pc = 0x176db0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x176db4: 0xffb00000
    ctx->pc = 0x176db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x176db8: 0x24900cc0
    ctx->pc = 0x176db8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 3264));
    // 0x176dbc: 0xffbf0008
    ctx->pc = 0x176dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x176dc0: 0xc056ea0
    ctx->pc = 0x176DC0u;
    SET_GPR_U32(ctx, 31, 0x176DC8u);
    ctx->pc = 0x176DC4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 668)));
    ctx->pc = 0x15BA80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BA80_0x15ba80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176DC8u; }
    }
    if (ctx->pc != 0x176DC8u) { return; }
    ctx->pc = 0x176DC8u;
    // 0x176dc8: 0x8e030298
    ctx->pc = 0x176dc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x176dcc: 0xdfbf0008
    ctx->pc = 0x176dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176dd0: 0x621821
    ctx->pc = 0x176dd0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x176dd4: 0xae030298
    ctx->pc = 0x176dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 3));
    // 0x176dd8: 0xdfb00000
    ctx->pc = 0x176dd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176ddc: 0x3e00008
    ctx->pc = 0x176DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176DE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176DE4u;
    // 0x176de4: 0x0
    ctx->pc = 0x176de4u;
    // NOP
}
