#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00121920
// Address: 0x121920 - 0x121a28
void sub_00121920_0x121920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x121920u;

    // 0x121920: 0x27bdfff0
    ctx->pc = 0x121920u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x121924: 0x46006006
    ctx->pc = 0x121924u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x121928: 0xe7a00000
    ctx->pc = 0x121928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12192c: 0x3c037fff
    ctx->pc = 0x12192cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x121930: 0x8fa60000
    ctx->pc = 0x121930u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121934: 0x46006024
    ctx->pc = 0x121934u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[12]);
    // 0x121938: 0x44050000
    ctx->pc = 0x121938u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[0]);
    // 0x12193c: 0x3463ffff
    ctx->pc = 0x12193cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x121940: 0x3c0231ff
    ctx->pc = 0x121940u;
    SET_GPR_U32(ctx, 2, ((uint32_t)12799 << 16));
    // 0x121944: 0xc31824
    ctx->pc = 0x121944u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x121948: 0x3442ffff
    ctx->pc = 0x121948u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x12194c: 0x43102a
    ctx->pc = 0x12194cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x121950: 0x54400004
    ctx->pc = 0x121950u;
    {
        const bool branch_taken_0x121950 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x121950) {
            ctx->pc = 0x121954u;
            ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->pc = 0x121964u;
            goto label_121964;
        }
    }
    ctx->pc = 0x121958u;
    // 0x121958: 0x10a00030
    ctx->pc = 0x121958u;
    {
        const bool branch_taken_0x121958 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x12195Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x121958) {
            ctx->pc = 0x121A1Cu;
            goto label_121a1c;
        }
    }
    ctx->pc = 0x121960u;
    // 0x121960: 0x460c60c2
    ctx->pc = 0x121960u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_121964:
    // 0x121964: 0x3c012f2e
    ctx->pc = 0x121964u;
    SET_GPR_U32(ctx, 1, ((uint32_t)12078 << 16));
    // 0x121968: 0x3421c9d2
    ctx->pc = 0x121968u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 51666));
    // 0x12196c: 0x44810000
    ctx->pc = 0x12196cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x121970: 0x3c01b2d7
    ctx->pc = 0x121970u;
    SET_GPR_U32(ctx, 1, ((uint32_t)45783 << 16));
    // 0x121974: 0x34212f34
    ctx->pc = 0x121974u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 12084));
    // 0x121978: 0x44810800
    ctx->pc = 0x121978u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x12197c: 0x46001802
    ctx->pc = 0x12197cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x121980: 0x460c1902
    ctx->pc = 0x121980u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x121984: 0x46010000
    ctx->pc = 0x121984u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x121988: 0x3c013638
    ctx->pc = 0x121988u;
    SET_GPR_U32(ctx, 1, ((uint32_t)13880 << 16));
    // 0x12198c: 0x3421ef1a
    ctx->pc = 0x12198cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 61210));
    // 0x121990: 0x44810800
    ctx->pc = 0x121990u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x121994: 0x46001802
    ctx->pc = 0x121994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x121998: 0x46010000
    ctx->pc = 0x121998u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12199c: 0x3c01b950
    ctx->pc = 0x12199cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)47440 << 16));
    // 0x1219a0: 0x34210d01
    ctx->pc = 0x1219a0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 3329));
    // 0x1219a4: 0x44810800
    ctx->pc = 0x1219a4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x1219a8: 0x46001802
    ctx->pc = 0x1219a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1219ac: 0x46010000
    ctx->pc = 0x1219acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1219b0: 0x3c013c08
    ctx->pc = 0x1219b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15368 << 16));
    // 0x1219b4: 0x34218889
    ctx->pc = 0x1219b4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
    // 0x1219b8: 0x44810800
    ctx->pc = 0x1219b8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x1219bc: 0x46001802
    ctx->pc = 0x1219bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1219c0: 0x14800009
    ctx->pc = 0x1219C0u;
    {
        const bool branch_taken_0x1219c0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1219C4u;
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x1219c0) {
            ctx->pc = 0x1219E8u;
            goto label_1219e8;
        }
    }
    ctx->pc = 0x1219C8u;
    // 0x1219c8: 0x46011802
    ctx->pc = 0x1219c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1219cc: 0x3c01be2a
    ctx->pc = 0x1219ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48682 << 16));
    // 0x1219d0: 0x3421aaaa
    ctx->pc = 0x1219d0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 43690));
    // 0x1219d4: 0x44810800
    ctx->pc = 0x1219d4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x1219d8: 0x46010000
    ctx->pc = 0x1219d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1219dc: 0x46002002
    ctx->pc = 0x1219dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1219e0: 0x1000000e
    ctx->pc = 0x1219E0u;
    {
        const bool branch_taken_0x1219e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1219E4u;
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        if (branch_taken_0x1219e0) {
            ctx->pc = 0x121A1Cu;
            goto label_121a1c;
        }
    }
    ctx->pc = 0x1219E8u;
label_1219e8:
    // 0x1219e8: 0x3c013f00
    ctx->pc = 0x1219e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x1219ec: 0x44810000
    ctx->pc = 0x1219ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x1219f0: 0x46012082
    ctx->pc = 0x1219f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1219f4: 0x3c01be2a
    ctx->pc = 0x1219f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48682 << 16));
    // 0x1219f8: 0x3421aaaa
    ctx->pc = 0x1219f8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 43690));
    // 0x1219fc: 0x44810800
    ctx->pc = 0x1219fcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x121a00: 0x46006802
    ctx->pc = 0x121a00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x121a04: 0x46012042
    ctx->pc = 0x121a04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x121a08: 0x46020001
    ctx->pc = 0x121a08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x121a0c: 0x46001802
    ctx->pc = 0x121a0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x121a10: 0x460d0001
    ctx->pc = 0x121a10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x121a14: 0x46010001
    ctx->pc = 0x121a14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x121a18: 0x46006001
    ctx->pc = 0x121a18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_121a1c:
    // 0x121a1c: 0x3e00008
    ctx->pc = 0x121A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121A20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x121964u: goto label_121964;
            case 0x1219E8u: goto label_1219e8;
            case 0x121A1Cu: goto label_121a1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x121A24u;
    // 0x121a24: 0x0
    ctx->pc = 0x121a24u;
    // NOP
}
