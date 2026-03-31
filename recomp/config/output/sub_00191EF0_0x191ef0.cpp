#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00191EF0
// Address: 0x191ef0 - 0x192000
void sub_00191EF0_0x191ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x191ef0u;

    // 0x191ef0: 0x3c024334
    ctx->pc = 0x191ef0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17204 << 16));
    // 0x191ef4: 0x3c010024
    ctx->pc = 0x191ef4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x191ef8: 0x44821000
    ctx->pc = 0x191ef8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x191efc: 0xc4211c88
    ctx->pc = 0x191efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191f00: 0x460c1082
    ctx->pc = 0x191f00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x191f04: 0x46011083
    ctx->pc = 0x191f04u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
    // 0x191f08: 0x44800000
    ctx->pc = 0x191f08u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x191f0c: 0x0
    ctx->pc = 0x191f0cu;
    // NOP
    // 0x191f10: 0x0
    ctx->pc = 0x191f10u;
    // NOP
    // 0x191f14: 0x46001034
    ctx->pc = 0x191f14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191f18: 0x45000005
    ctx->pc = 0x191F18u;
    {
        const bool branch_taken_0x191f18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x191F1Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
        if (branch_taken_0x191f18) {
            ctx->pc = 0x191F30u;
            goto label_191f30;
        }
    }
    ctx->pc = 0x191F20u;
    // 0x191f20: 0x3c0243b4
    ctx->pc = 0x191f20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17332 << 16));
    // 0x191f24: 0x44820000
    ctx->pc = 0x191f24u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x191f28: 0x0
    ctx->pc = 0x191f28u;
    // NOP
    // 0x191f2c: 0x46001080
    ctx->pc = 0x191f2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_191f30:
    // 0x191f30: 0x3c024f00
    ctx->pc = 0x191f30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
    // 0x191f34: 0xc4211c80
    ctx->pc = 0x191f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191f38: 0x44820000
    ctx->pc = 0x191f38u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x191f3c: 0x0
    ctx->pc = 0x191f3cu;
    // NOP
    // 0x191f40: 0x46020842
    ctx->pc = 0x191f40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x191f44: 0x46010036
    ctx->pc = 0x191f44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191f48: 0x45010005
    ctx->pc = 0x191F48u;
    {
        const bool branch_taken_0x191f48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x191f48) {
            ctx->pc = 0x191F60u;
            goto label_191f60;
        }
    }
    ctx->pc = 0x191F50u;
    // 0x191f50: 0x46000864
    ctx->pc = 0x191f50u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x191f54: 0x44020800
    ctx->pc = 0x191f54u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x191f58: 0x10000007
    ctx->pc = 0x191F58u;
    {
        const bool branch_taken_0x191f58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x191f58) {
            ctx->pc = 0x191F78u;
            goto label_191f78;
        }
    }
    ctx->pc = 0x191F60u;
label_191f60:
    // 0x191f60: 0x46000841
    ctx->pc = 0x191f60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x191f64: 0x3c038000
    ctx->pc = 0x191f64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x191f68: 0x46000864
    ctx->pc = 0x191f68u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x191f6c: 0x44020800
    ctx->pc = 0x191f6cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x191f70: 0x0
    ctx->pc = 0x191f70u;
    // NOP
    // 0x191f74: 0x431025
    ctx->pc = 0x191f74u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191f78:
    // 0x191f78: 0x3e00008
    ctx->pc = 0x191F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191F30u: goto label_191f30;
            case 0x191F60u: goto label_191f60;
            case 0x191F78u: goto label_191f78;
            case 0x191F9Cu: goto label_191f9c;
            case 0x191FB4u: goto label_191fb4;
            case 0x191FF0u: goto label_191ff0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x191F80u;
    // 0x191f80: 0x3c023bb4
    ctx->pc = 0x191f80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15284 << 16));
    // 0x191f84: 0x44820800
    ctx->pc = 0x191f84u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x191f88: 0x4800004
    ctx->pc = 0x191F88u;
    {
        const bool branch_taken_0x191f88 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x191F8Cu;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x191f88) {
            ctx->pc = 0x191F9Cu;
            goto label_191f9c;
        }
    }
    ctx->pc = 0x191F90u;
    // 0x191f90: 0x44840000
    ctx->pc = 0x191f90u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x191f94: 0x10000007
    ctx->pc = 0x191F94u;
    {
        const bool branch_taken_0x191f94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x191F98u;
        ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x191f94) {
            ctx->pc = 0x191FB4u;
            goto label_191fb4;
        }
    }
    ctx->pc = 0x191F9Cu;
label_191f9c:
    // 0x191f9c: 0x30820001
    ctx->pc = 0x191f9cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 1));
    // 0x191fa0: 0x621825
    ctx->pc = 0x191fa0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x191fa4: 0x44830000
    ctx->pc = 0x191fa4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x191fa8: 0x0
    ctx->pc = 0x191fa8u;
    // NOP
    // 0x191fac: 0x46800020
    ctx->pc = 0x191facu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x191fb0: 0x46000000
    ctx->pc = 0x191fb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_191fb4:
    // 0x191fb4: 0x3c010024
    ctx->pc = 0x191fb4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x191fb8: 0x3c024334
    ctx->pc = 0x191fb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17204 << 16));
    // 0x191fbc: 0xc4221c88
    ctx->pc = 0x191fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191fc0: 0x46000842
    ctx->pc = 0x191fc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x191fc4: 0x46011042
    ctx->pc = 0x191fc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x191fc8: 0x44820000
    ctx->pc = 0x191fc8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x191fcc: 0x0
    ctx->pc = 0x191fccu;
    // NOP
    // 0x191fd0: 0x46000803
    ctx->pc = 0x191fd0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x191fd4: 0x0
    ctx->pc = 0x191fd4u;
    // NOP
    // 0x191fd8: 0x0
    ctx->pc = 0x191fd8u;
    // NOP
    // 0x191fdc: 0x46020036
    ctx->pc = 0x191fdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191fe0: 0x45010003
    ctx->pc = 0x191FE0u;
    {
        const bool branch_taken_0x191fe0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x191FE4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
        if (branch_taken_0x191fe0) {
            ctx->pc = 0x191FF0u;
            goto label_191ff0;
        }
    }
    ctx->pc = 0x191FE8u;
    // 0x191fe8: 0xc4211c78
    ctx->pc = 0x191fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191fec: 0x46010000
    ctx->pc = 0x191fecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_191ff0:
    // 0x191ff0: 0x3e00008
    ctx->pc = 0x191FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191F30u: goto label_191f30;
            case 0x191F60u: goto label_191f60;
            case 0x191F78u: goto label_191f78;
            case 0x191F9Cu: goto label_191f9c;
            case 0x191FB4u: goto label_191fb4;
            case 0x191FF0u: goto label_191ff0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x191FF8u;
    // 0x191ff8: 0x0
    ctx->pc = 0x191ff8u;
    // NOP
    // 0x191ffc: 0x0
    ctx->pc = 0x191ffcu;
    // NOP
}
