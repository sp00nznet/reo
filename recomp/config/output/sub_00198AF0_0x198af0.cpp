#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00198AF0
// Address: 0x198af0 - 0x198b30
void sub_00198AF0_0x198af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x198af0u;

    // 0x198af0: 0x3c01002a
    ctx->pc = 0x198af0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x198af4: 0xc420fd60
    ctx->pc = 0x198af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294966624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198af8: 0x46800020
    ctx->pc = 0x198af8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x198afc: 0x3c01002a
    ctx->pc = 0x198afcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x198b00: 0x8c22f9b4
    ctx->pc = 0x198b00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294965684)));
    // 0x198b04: 0x14400005
    ctx->pc = 0x198B04u;
    {
        const bool branch_taken_0x198b04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x198B08u;
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        if (branch_taken_0x198b04) {
            ctx->pc = 0x198B1Cu;
            goto label_198b1c;
        }
    }
    ctx->pc = 0x198B0Cu;
    // 0x198b0c: 0x3c023f00
    ctx->pc = 0x198b0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x198b10: 0x44820000
    ctx->pc = 0x198b10u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x198b14: 0x0
    ctx->pc = 0x198b14u;
    // NOP
    // 0x198b18: 0x46006302
    ctx->pc = 0x198b18u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_198b1c:
    // 0x198b1c: 0x3e00008
    ctx->pc = 0x198B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198B20u;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198B1Cu: goto label_198b1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198B24u;
    // 0x198b24: 0x0
    ctx->pc = 0x198b24u;
    // NOP
    // 0x198b28: 0x0
    ctx->pc = 0x198b28u;
    // NOP
    // 0x198b2c: 0x0
    ctx->pc = 0x198b2cu;
    // NOP
}
