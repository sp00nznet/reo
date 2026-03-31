#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018B2C0
// Address: 0x18b2c0 - 0x18b3b0
void sub_0018B2C0_0x18b2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18b2c0u;

    // 0x18b2c0: 0x44800000
    ctx->pc = 0x18b2c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x18b2c4: 0x14a0001a
    ctx->pc = 0x18B2C4u;
    {
        const bool branch_taken_0x18b2c4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x18B2C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
        if (branch_taken_0x18b2c4) {
            ctx->pc = 0x18B330u;
            goto label_18b330;
        }
    }
    ctx->pc = 0x18B2CCu;
    // 0x18b2cc: 0x14820005
    ctx->pc = 0x18B2CCu;
    {
        const bool branch_taken_0x18b2cc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x18b2cc) {
            ctx->pc = 0x18B2E4u;
            goto label_18b2e4;
        }
    }
    ctx->pc = 0x18B2D4u;
    // 0x18b2d4: 0x3c024300
    ctx->pc = 0x18b2d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17152 << 16));
    // 0x18b2d8: 0x44820000
    ctx->pc = 0x18b2d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x18b2dc: 0x10000031
    ctx->pc = 0x18B2DCu;
    {
        const bool branch_taken_0x18b2dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x18b2dc) {
            ctx->pc = 0x18B3A4u;
            goto label_18b3a4;
        }
    }
    ctx->pc = 0x18B2E4u;
label_18b2e4:
    // 0x18b2e4: 0x1080002f
    ctx->pc = 0x18B2E4u;
    {
        const bool branch_taken_0x18b2e4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x18b2e4) {
            ctx->pc = 0x18B3A4u;
            goto label_18b3a4;
        }
    }
    ctx->pc = 0x18B2ECu;
    // 0x18b2ec: 0x42042
    ctx->pc = 0x18b2ecu;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 1));
    // 0x18b2f0: 0x14800002
    ctx->pc = 0x18B2F0u;
    {
        const bool branch_taken_0x18b2f0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x18b2f0) {
            ctx->pc = 0x18B2FCu;
            goto label_18b2fc;
        }
    }
    ctx->pc = 0x18B2F8u;
    // 0x18b2f8: 0x24040001
    ctx->pc = 0x18b2f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_18b2fc:
    // 0x18b2fc: 0x4800004
    ctx->pc = 0x18B2FCu;
    {
        const bool branch_taken_0x18b2fc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x18B300u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x18b2fc) {
            ctx->pc = 0x18B310u;
            goto label_18b310;
        }
    }
    ctx->pc = 0x18B304u;
    // 0x18b304: 0x44840000
    ctx->pc = 0x18b304u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x18b308: 0x10000007
    ctx->pc = 0x18B308u;
    {
        const bool branch_taken_0x18b308 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18B30Cu;
        ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x18b308) {
            ctx->pc = 0x18B328u;
            goto label_18b328;
        }
    }
    ctx->pc = 0x18B310u;
label_18b310:
    // 0x18b310: 0x30820001
    ctx->pc = 0x18b310u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 1));
    // 0x18b314: 0x621825
    ctx->pc = 0x18b314u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b318: 0x44830000
    ctx->pc = 0x18b318u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x18b31c: 0x0
    ctx->pc = 0x18b31cu;
    // NOP
    // 0x18b320: 0x46800020
    ctx->pc = 0x18b320u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x18b324: 0x46000000
    ctx->pc = 0x18b324u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_18b328:
    // 0x18b328: 0x1000001e
    ctx->pc = 0x18B328u;
    {
        const bool branch_taken_0x18b328 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x18b328) {
            ctx->pc = 0x18B3A4u;
            goto label_18b3a4;
        }
    }
    ctx->pc = 0x18B330u;
label_18b330:
    // 0x18b330: 0x4800004
    ctx->pc = 0x18B330u;
    {
        const bool branch_taken_0x18b330 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x18B334u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x18b330) {
            ctx->pc = 0x18B344u;
            goto label_18b344;
        }
    }
    ctx->pc = 0x18B338u;
    // 0x18b338: 0x44840000
    ctx->pc = 0x18b338u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x18b33c: 0x10000007
    ctx->pc = 0x18B33Cu;
    {
        const bool branch_taken_0x18b33c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18B340u;
        ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x18b33c) {
            ctx->pc = 0x18B35Cu;
            goto label_18b35c;
        }
    }
    ctx->pc = 0x18B344u;
label_18b344:
    // 0x18b344: 0x30820001
    ctx->pc = 0x18b344u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 1));
    // 0x18b348: 0x621825
    ctx->pc = 0x18b348u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b34c: 0x44830000
    ctx->pc = 0x18b34cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x18b350: 0x0
    ctx->pc = 0x18b350u;
    // NOP
    // 0x18b354: 0x468000a0
    ctx->pc = 0x18b354u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x18b358: 0x46021080
    ctx->pc = 0x18b358u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_18b35c:
    // 0x18b35c: 0x3c03437f
    ctx->pc = 0x18b35cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)17279 << 16));
    // 0x18b360: 0x3c023f80
    ctx->pc = 0x18b360u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x18b364: 0x44830000
    ctx->pc = 0x18b364u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x18b368: 0x44820800
    ctx->pc = 0x18b368u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x18b36c: 0x0
    ctx->pc = 0x18b36cu;
    // NOP
    // 0x18b370: 0x46001003
    ctx->pc = 0x18b370u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x18b374: 0x0
    ctx->pc = 0x18b374u;
    // NOP
    // 0x18b378: 0x0
    ctx->pc = 0x18b378u;
    // NOP
    // 0x18b37c: 0x46010036
    ctx->pc = 0x18b37cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b380: 0x45010002
    ctx->pc = 0x18B380u;
    {
        const bool branch_taken_0x18b380 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18b380) {
            ctx->pc = 0x18B38Cu;
            goto label_18b38c;
        }
    }
    ctx->pc = 0x18B388u;
    // 0x18b388: 0x46000806
    ctx->pc = 0x18b388u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_18b38c:
    // 0x18b38c: 0x44800800
    ctx->pc = 0x18b38cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x18b390: 0x0
    ctx->pc = 0x18b390u;
    // NOP
    // 0x18b394: 0x46010034
    ctx->pc = 0x18b394u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b398: 0x45000002
    ctx->pc = 0x18B398u;
    {
        const bool branch_taken_0x18b398 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18b398) {
            ctx->pc = 0x18B3A4u;
            goto label_18b3a4;
        }
    }
    ctx->pc = 0x18B3A0u;
    // 0x18b3a0: 0x46000806
    ctx->pc = 0x18b3a0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_18b3a4:
    // 0x18b3a4: 0x3e00008
    ctx->pc = 0x18B3A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18B2E4u: goto label_18b2e4;
            case 0x18B2FCu: goto label_18b2fc;
            case 0x18B310u: goto label_18b310;
            case 0x18B328u: goto label_18b328;
            case 0x18B330u: goto label_18b330;
            case 0x18B344u: goto label_18b344;
            case 0x18B35Cu: goto label_18b35c;
            case 0x18B38Cu: goto label_18b38c;
            case 0x18B3A4u: goto label_18b3a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18B3ACu;
    // 0x18b3ac: 0x0
    ctx->pc = 0x18b3acu;
    // NOP
}
