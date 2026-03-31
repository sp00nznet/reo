#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00120F68
// Address: 0x120f68 - 0x1210b8
void sub_00120F68_0x120f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x120f68u;

    // 0x120f68: 0x27bdfff0
    ctx->pc = 0x120f68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x120f6c: 0x46006006
    ctx->pc = 0x120f6cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x120f70: 0xe7a00000
    ctx->pc = 0x120f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x120f74: 0x3c037fff
    ctx->pc = 0x120f74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x120f78: 0x8fa60000
    ctx->pc = 0x120f78u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120f7c: 0x46006024
    ctx->pc = 0x120f7cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[12]);
    // 0x120f80: 0x44050000
    ctx->pc = 0x120f80u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[0]);
    // 0x120f84: 0x3463ffff
    ctx->pc = 0x120f84u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x120f88: 0x3c0231ff
    ctx->pc = 0x120f88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)12799 << 16));
    // 0x120f8c: 0xc31824
    ctx->pc = 0x120f8cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x120f90: 0x3c043e99
    ctx->pc = 0x120f90u;
    SET_GPR_U32(ctx, 4, ((uint32_t)16025 << 16));
    // 0x120f94: 0x3442ffff
    ctx->pc = 0x120f94u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x120f98: 0x34849999
    ctx->pc = 0x120f98u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 39321));
    // 0x120f9c: 0x43102a
    ctx->pc = 0x120f9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x120fa0: 0x14400005
    ctx->pc = 0x120FA0u;
    {
        const bool branch_taken_0x120fa0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x120FA4u;
        SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
        if (branch_taken_0x120fa0) {
            ctx->pc = 0x120FB8u;
            goto label_120fb8;
        }
    }
    ctx->pc = 0x120FA8u;
    // 0x120fa8: 0x3c013f80
    ctx->pc = 0x120fa8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x120fac: 0x44810000
    ctx->pc = 0x120facu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x120fb0: 0x10a0003f
    ctx->pc = 0x120FB0u;
    {
        const bool branch_taken_0x120fb0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x120fb0) {
            ctx->pc = 0x1210B0u;
            goto label_1210b0;
        }
    }
    ctx->pc = 0x120FB8u;
label_120fb8:
    // 0x120fb8: 0x460c6102
    ctx->pc = 0x120fb8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x120fbc: 0x3c01ad47
    ctx->pc = 0x120fbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)44359 << 16));
    // 0x120fc0: 0x3421d74e
    ctx->pc = 0x120fc0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55118));
    // 0x120fc4: 0x44810000
    ctx->pc = 0x120fc4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x120fc8: 0x3c01310f
    ctx->pc = 0x120fc8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)12559 << 16));
    // 0x120fcc: 0x342174f5
    ctx->pc = 0x120fccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 29941));
    // 0x120fd0: 0x44810800
    ctx->pc = 0x120fd0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x120fd4: 0x46002002
    ctx->pc = 0x120fd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x120fd8: 0x46010000
    ctx->pc = 0x120fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x120fdc: 0x3c01b493
    ctx->pc = 0x120fdcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)46227 << 16));
    // 0x120fe0: 0x3421f27b
    ctx->pc = 0x120fe0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 62075));
    // 0x120fe4: 0x44810800
    ctx->pc = 0x120fe4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x120fe8: 0x46002002
    ctx->pc = 0x120fe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x120fec: 0x46010000
    ctx->pc = 0x120fecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x120ff0: 0x3c0137d0
    ctx->pc = 0x120ff0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14288 << 16));
    // 0x120ff4: 0x34210d00
    ctx->pc = 0x120ff4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 3328));
    // 0x120ff8: 0x44810800
    ctx->pc = 0x120ff8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x120ffc: 0x46002002
    ctx->pc = 0x120ffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x121000: 0x46010000
    ctx->pc = 0x121000u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x121004: 0x3c01bab6
    ctx->pc = 0x121004u;
    SET_GPR_U32(ctx, 1, ((uint32_t)47798 << 16));
    // 0x121008: 0x34210b60
    ctx->pc = 0x121008u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 2912));
    // 0x12100c: 0x44810800
    ctx->pc = 0x12100cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x121010: 0x46002002
    ctx->pc = 0x121010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x121014: 0x46010000
    ctx->pc = 0x121014u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x121018: 0x3c013d2a
    ctx->pc = 0x121018u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15658 << 16));
    // 0x12101c: 0x3421aaaa
    ctx->pc = 0x12101cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 43690));
    // 0x121020: 0x44810800
    ctx->pc = 0x121020u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x121024: 0x46002002
    ctx->pc = 0x121024u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x121028: 0x46010000
    ctx->pc = 0x121028u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12102c: 0x1480000c
    ctx->pc = 0x12102Cu;
    {
        const bool branch_taken_0x12102c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x121030u;
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        if (branch_taken_0x12102c) {
            ctx->pc = 0x121060u;
            goto label_121060;
        }
    }
    ctx->pc = 0x121034u;
    // 0x121034: 0x46012042
    ctx->pc = 0x121034u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x121038: 0x3c013f00
    ctx->pc = 0x121038u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x12103c: 0x44810000
    ctx->pc = 0x12103cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x121040: 0x460d6082
    ctx->pc = 0x121040u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x121044: 0x3c013f80
    ctx->pc = 0x121044u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x121048: 0x44811800
    ctx->pc = 0x121048u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x12104c: 0x46002002
    ctx->pc = 0x12104cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x121050: 0x46020841
    ctx->pc = 0x121050u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x121054: 0x46010001
    ctx->pc = 0x121054u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x121058: 0x10000015
    ctx->pc = 0x121058u;
    {
        const bool branch_taken_0x121058 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12105Cu;
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        if (branch_taken_0x121058) {
            ctx->pc = 0x1210B0u;
            goto label_1210b0;
        }
    }
    ctx->pc = 0x121060u;
label_121060:
    // 0x121060: 0x3c023f48
    ctx->pc = 0x121060u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16200 << 16));
    // 0x121064: 0x3c013e90
    ctx->pc = 0x121064u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16016 << 16));
    // 0x121068: 0x44812800
    ctx->pc = 0x121068u;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 1);
    // 0x12106c: 0x43102a
    ctx->pc = 0x12106cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x121070: 0x14400003
    ctx->pc = 0x121070u;
    {
        const bool branch_taken_0x121070 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x121074u;
        SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
        if (branch_taken_0x121070) {
            ctx->pc = 0x121080u;
            goto label_121080;
        }
    }
    ctx->pc = 0x121078u;
    // 0x121078: 0x621821
    ctx->pc = 0x121078u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12107c: 0x44832800
    ctx->pc = 0x12107cu;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 3);
label_121080:
    // 0x121080: 0x3c013f00
    ctx->pc = 0x121080u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x121084: 0x44810000
    ctx->pc = 0x121084u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x121088: 0x46012082
    ctx->pc = 0x121088u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x12108c: 0x460d60c2
    ctx->pc = 0x12108cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x121090: 0x3c013f80
    ctx->pc = 0x121090u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x121094: 0x44810800
    ctx->pc = 0x121094u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x121098: 0x46002002
    ctx->pc = 0x121098u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x12109c: 0x46050841
    ctx->pc = 0x12109cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x1210a0: 0x46031081
    ctx->pc = 0x1210a0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x1210a4: 0x46050001
    ctx->pc = 0x1210a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x1210a8: 0x46020001
    ctx->pc = 0x1210a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1210ac: 0x46000801
    ctx->pc = 0x1210acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1210b0:
    // 0x1210b0: 0x3e00008
    ctx->pc = 0x1210B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1210B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x120FB8u: goto label_120fb8;
            case 0x121060u: goto label_121060;
            case 0x121080u: goto label_121080;
            case 0x1210B0u: goto label_1210b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1210B8u;
}
