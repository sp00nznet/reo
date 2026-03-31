#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A4DA0
// Address: 0x1a4da0 - 0x1a4e30
void sub_001A4DA0_0x1a4da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a4da0u;

    // 0x1a4da0: 0x3c01002b
    ctx->pc = 0x1a4da0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a4da4: 0x3e00008
    ctx->pc = 0x1A4DA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4DA8u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294967272), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4DACu;
    // 0x1a4dac: 0x0
    ctx->pc = 0x1a4dacu;
    // NOP
    // 0x1a4db0: 0x460e8801
    ctx->pc = 0x1a4db0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[17], ctx->f[14]);
    // 0x1a4db4: 0x3c043f80
    ctx->pc = 0x1a4db4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)16256 << 16));
    // 0x1a4db8: 0x3c034000
    ctx->pc = 0x1a4db8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
    // 0x1a4dbc: 0x3c024040
    ctx->pc = 0x1a4dbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16448 << 16));
    // 0x1a4dc0: 0x44841000
    ctx->pc = 0x1a4dc0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 4);
    // 0x1a4dc4: 0x460e6201
    ctx->pc = 0x1a4dc4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[12], ctx->f[14]);
    // 0x1a4dc8: 0x460011c3
    ctx->pc = 0x1a4dc8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[7] = ctx->f[2] / ctx->f[0];
    // 0x1a4dcc: 0x460840c2
    ctx->pc = 0x1a4dccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x1a4dd0: 0x44820000
    ctx->pc = 0x1a4dd0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a4dd4: 0x46073942
    ctx->pc = 0x1a4dd4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x1a4dd8: 0x46030002
    ctx->pc = 0x1a4dd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1a4ddc: 0x46050102
    ctx->pc = 0x1a4ddcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1a4de0: 0x46071982
    ctx->pc = 0x1a4de0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x1a4de4: 0x46081802
    ctx->pc = 0x1a4de4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x1a4de8: 0x460028c2
    ctx->pc = 0x1a4de8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1a4dec: 0x44830800
    ctx->pc = 0x1a4decu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1a4df0: 0x0
    ctx->pc = 0x1a4df0u;
    // NOP
    // 0x1a4df4: 0x46030802
    ctx->pc = 0x1a4df4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1a4df8: 0x46070142
    ctx->pc = 0x1a4df8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1a4dfc: 0x460618c1
    ctx->pc = 0x1a4dfcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x1a4e00: 0x46042841
    ctx->pc = 0x1a4e00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x1a4e04: 0x46061801
    ctx->pc = 0x1a4e04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x1a4e08: 0x46011040
    ctx->pc = 0x1a4e08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1a4e0c: 0x46004000
    ctx->pc = 0x1a4e0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x1a4e10: 0x4601681a
    ctx->pc = 0x1a4e10u;
    ctx->f[31] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x1a4e14: 0x46002847
    ctx->pc = 0x1a4e14u;
    ctx->f[1] = FPU_NEG_S(ctx->f[5]);
    // 0x1a4e18: 0x46040840
    ctx->pc = 0x1a4e18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1a4e1c: 0x46007802
    ctx->pc = 0x1a4e1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x1a4e20: 0x4601805c
    ctx->pc = 0x1a4e20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[1]));
    // 0x1a4e24: 0x46010018
    ctx->pc = 0x1a4e24u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a4e28: 0x3e00008
    ctx->pc = 0x1A4E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4E2Cu;
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[18], ctx->f[3]));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4E30u;
}
