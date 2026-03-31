#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A4E30
// Address: 0x1a4e30 - 0x1a4f10
void sub_001A4E30_0x1a4e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a4e30u;

    // 0x1a4e30: 0x8c850004
    ctx->pc = 0x1a4e30u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a4e34: 0x3c01002b
    ctx->pc = 0x1a4e34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a4e38: 0x90830000
    ctx->pc = 0x1a4e38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a4e3c: 0x24020013
    ctx->pc = 0x1a4e3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 19));
    // 0x1a4e40: 0x8c24ffe8
    ctx->pc = 0x1a4e40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294967272)));
    // 0x1a4e44: 0x10620029
    ctx->pc = 0x1A4E44u;
    {
        const bool branch_taken_0x1a4e44 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A4E48u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        if (branch_taken_0x1a4e44) {
            ctx->pc = 0x1A4EECu;
            goto label_1a4eec;
        }
    }
    ctx->pc = 0x1A4E4Cu;
    // 0x1a4e4c: 0x24020012
    ctx->pc = 0x1a4e4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1a4e50: 0x10620022
    ctx->pc = 0x1A4E50u;
    {
        const bool branch_taken_0x1a4e50 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A4E54u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
        if (branch_taken_0x1a4e50) {
            ctx->pc = 0x1A4EDCu;
            goto label_1a4edc;
        }
    }
    ctx->pc = 0x1A4E58u;
    // 0x1a4e58: 0x1062001c
    ctx->pc = 0x1A4E58u;
    {
        const bool branch_taken_0x1a4e58 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1a4e58) {
            ctx->pc = 0x1A4ECCu;
            goto label_1a4ecc;
        }
    }
    ctx->pc = 0x1A4E60u;
    // 0x1a4e60: 0x24020010
    ctx->pc = 0x1a4e60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a4e64: 0x10620016
    ctx->pc = 0x1A4E64u;
    {
        const bool branch_taken_0x1a4e64 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A4E68u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 35));
        if (branch_taken_0x1a4e64) {
            ctx->pc = 0x1A4EC0u;
            goto label_1a4ec0;
        }
    }
    ctx->pc = 0x1A4E6Cu;
    // 0x1a4e6c: 0x10620012
    ctx->pc = 0x1A4E6Cu;
    {
        const bool branch_taken_0x1a4e6c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1a4e6c) {
            ctx->pc = 0x1A4EB8u;
            goto label_1a4eb8;
        }
    }
    ctx->pc = 0x1A4E74u;
    // 0x1a4e74: 0x24020022
    ctx->pc = 0x1a4e74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 34));
    // 0x1a4e78: 0x1062000d
    ctx->pc = 0x1A4E78u;
    {
        const bool branch_taken_0x1a4e78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A4E7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 33));
        if (branch_taken_0x1a4e78) {
            ctx->pc = 0x1A4EB0u;
            goto label_1a4eb0;
        }
    }
    ctx->pc = 0x1A4E80u;
    // 0x1a4e80: 0x10620009
    ctx->pc = 0x1A4E80u;
    {
        const bool branch_taken_0x1a4e80 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1a4e80) {
            ctx->pc = 0x1A4EA8u;
            goto label_1a4ea8;
        }
    }
    ctx->pc = 0x1A4E88u;
    // 0x1a4e88: 0x24020020
    ctx->pc = 0x1a4e88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a4e8c: 0x10620003
    ctx->pc = 0x1A4E8Cu;
    {
        const bool branch_taken_0x1a4e8c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1a4e8c) {
            ctx->pc = 0x1A4E9Cu;
            goto label_1a4e9c;
        }
    }
    ctx->pc = 0x1A4E94u;
    // 0x1a4e94: 0x10000019
    ctx->pc = 0x1A4E94u;
    {
        const bool branch_taken_0x1a4e94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a4e94) {
            ctx->pc = 0x1A4EFCu;
            goto label_1a4efc;
        }
    }
    ctx->pc = 0x1A4E9Cu;
label_1a4e9c:
    // 0x1a4e9c: 0x44800000
    ctx->pc = 0x1a4e9cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1a4ea0: 0x10000016
    ctx->pc = 0x1A4EA0u;
    {
        const bool branch_taken_0x1a4ea0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a4ea0) {
            ctx->pc = 0x1A4EFCu;
            goto label_1a4efc;
        }
    }
    ctx->pc = 0x1A4EA8u;
label_1a4ea8:
    // 0x1a4ea8: 0x10000014
    ctx->pc = 0x1A4EA8u;
    {
        const bool branch_taken_0x1a4ea8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A4EACu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x1a4ea8) {
            ctx->pc = 0x1A4EFCu;
            goto label_1a4efc;
        }
    }
    ctx->pc = 0x1A4EB0u;
label_1a4eb0:
    // 0x1a4eb0: 0x10000012
    ctx->pc = 0x1A4EB0u;
    {
        const bool branch_taken_0x1a4eb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A4EB4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x1a4eb0) {
            ctx->pc = 0x1A4EFCu;
            goto label_1a4efc;
        }
    }
    ctx->pc = 0x1A4EB8u;
label_1a4eb8:
    // 0x1a4eb8: 0x10000010
    ctx->pc = 0x1A4EB8u;
    {
        const bool branch_taken_0x1a4eb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A4EBCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x1a4eb8) {
            ctx->pc = 0x1A4EFCu;
            goto label_1a4efc;
        }
    }
    ctx->pc = 0x1A4EC0u;
label_1a4ec0:
    // 0x1a4ec0: 0x44800000
    ctx->pc = 0x1a4ec0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1a4ec4: 0x1000000d
    ctx->pc = 0x1A4EC4u;
    {
        const bool branch_taken_0x1a4ec4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a4ec4) {
            ctx->pc = 0x1A4EFCu;
            goto label_1a4efc;
        }
    }
    ctx->pc = 0x1A4ECCu;
label_1a4ecc:
    // 0x1a4ecc: 0x84820002
    ctx->pc = 0x1a4eccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1a4ed0: 0x44820000
    ctx->pc = 0x1a4ed0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a4ed4: 0x10000009
    ctx->pc = 0x1A4ED4u;
    {
        const bool branch_taken_0x1a4ed4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A4ED8u;
        ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x1a4ed4) {
            ctx->pc = 0x1A4EFCu;
            goto label_1a4efc;
        }
    }
    ctx->pc = 0x1A4EDCu;
label_1a4edc:
    // 0x1a4edc: 0x84820002
    ctx->pc = 0x1a4edcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1a4ee0: 0x44820000
    ctx->pc = 0x1a4ee0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a4ee4: 0x10000005
    ctx->pc = 0x1A4EE4u;
    {
        const bool branch_taken_0x1a4ee4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A4EE8u;
        ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x1a4ee4) {
            ctx->pc = 0x1A4EFCu;
            goto label_1a4efc;
        }
    }
    ctx->pc = 0x1A4EECu;
label_1a4eec:
    // 0x1a4eec: 0x84820006
    ctx->pc = 0x1a4eecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1a4ef0: 0x44820000
    ctx->pc = 0x1a4ef0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a4ef4: 0x0
    ctx->pc = 0x1a4ef4u;
    // NOP
    // 0x1a4ef8: 0x46800020
    ctx->pc = 0x1a4ef8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1a4efc:
    // 0x1a4efc: 0x3e00008
    ctx->pc = 0x1A4EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A4E9Cu: goto label_1a4e9c;
            case 0x1A4EA8u: goto label_1a4ea8;
            case 0x1A4EB0u: goto label_1a4eb0;
            case 0x1A4EB8u: goto label_1a4eb8;
            case 0x1A4EC0u: goto label_1a4ec0;
            case 0x1A4ECCu: goto label_1a4ecc;
            case 0x1A4EDCu: goto label_1a4edc;
            case 0x1A4EECu: goto label_1a4eec;
            case 0x1A4EFCu: goto label_1a4efc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A4F04u;
    // 0x1a4f04: 0x0
    ctx->pc = 0x1a4f04u;
    // NOP
    // 0x1a4f08: 0x0
    ctx->pc = 0x1a4f08u;
    // NOP
    // 0x1a4f0c: 0x0
    ctx->pc = 0x1a4f0cu;
    // NOP
}
