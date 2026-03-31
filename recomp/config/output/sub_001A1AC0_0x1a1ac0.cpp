#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A1AC0
// Address: 0x1a1ac0 - 0x1a1b60
void sub_001A1AC0_0x1a1ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a1ac0u;

    // 0x1a1ac0: 0x10800022
    ctx->pc = 0x1A1AC0u;
    {
        const bool branch_taken_0x1a1ac0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1AC4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1a1ac0) {
            ctx->pc = 0x1A1B4Cu;
            goto label_1a1b4c;
        }
    }
    ctx->pc = 0x1A1AC8u;
    // 0x1a1ac8: 0x4143c
    ctx->pc = 0x1a1ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1a1acc: 0x2143f
    ctx->pc = 0x1a1accu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a1ad0: 0x4410005
    ctx->pc = 0x1A1AD0u;
    {
        const bool branch_taken_0x1a1ad0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A1AD4u;
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
        if (branch_taken_0x1a1ad0) {
            ctx->pc = 0x1A1AE8u;
            goto label_1a1ae8;
        }
    }
    ctx->pc = 0x1A1AD8u;
    // 0x1a1ad8: 0x21023
    ctx->pc = 0x1a1ad8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1a1adc: 0x2406ffff
    ctx->pc = 0x1a1adcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a1ae0: 0x2243c
    ctx->pc = 0x1a1ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a1ae4: 0x4243f
    ctx->pc = 0x1a1ae4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_1a1ae8:
    // 0x1a1ae8: 0x4143c
    ctx->pc = 0x1a1ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1a1aec: 0x31c3f
    ctx->pc = 0x1a1aecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1a1af0: 0x2143f
    ctx->pc = 0x1a1af0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a1af4: 0x43082a
    ctx->pc = 0x1a1af4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x1a1af8: 0x10200002
    ctx->pc = 0x1A1AF8u;
    {
        const bool branch_taken_0x1a1af8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a1af8) {
            ctx->pc = 0x1A1B04u;
            goto label_1a1b04;
        }
    }
    ctx->pc = 0x1A1B00u;
    // 0x1a1b00: 0x202d
    ctx->pc = 0x1a1b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1b04:
    // 0x1a1b04: 0x1080000f
    ctx->pc = 0x1A1B04u;
    {
        const bool branch_taken_0x1a1b04 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1B08u;
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
        if (branch_taken_0x1a1b04) {
            ctx->pc = 0x1A1B44u;
            goto label_1a1b44;
        }
    }
    ctx->pc = 0x1A1B0Cu;
    // 0x1a1b0c: 0x2462ffff
    ctx->pc = 0x1a1b0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a1b10: 0x41c3c
    ctx->pc = 0x1a1b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1a1b14: 0x31c3f
    ctx->pc = 0x1a1b14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1a1b18: 0x621023
    ctx->pc = 0x1a1b18u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a1b1c: 0x44820000
    ctx->pc = 0x1a1b1cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a1b20: 0x0
    ctx->pc = 0x1a1b20u;
    // NOP
    // 0x1a1b24: 0x46800020
    ctx->pc = 0x1a1b24u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1a1b28: 0x46006002
    ctx->pc = 0x1a1b28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1a1b2c: 0x46000024
    ctx->pc = 0x1a1b2cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1a1b30: 0x44020000
    ctx->pc = 0x1a1b30u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1a1b34: 0x0
    ctx->pc = 0x1a1b34u;
    // NOP
    // 0x1a1b38: 0x2243c
    ctx->pc = 0x1a1b38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a1b3c: 0x4243f
    ctx->pc = 0x1a1b3cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1a1b40: 0x861018
    ctx->pc = 0x1a1b40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_1a1b44:
    // 0x1a1b44: 0x2243c
    ctx->pc = 0x1a1b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a1b48: 0x4243f
    ctx->pc = 0x1a1b48u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_1a1b4c:
    // 0x1a1b4c: 0x3e00008
    ctx->pc = 0x1A1B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1B50u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1AE8u: goto label_1a1ae8;
            case 0x1A1B04u: goto label_1a1b04;
            case 0x1A1B44u: goto label_1a1b44;
            case 0x1A1B4Cu: goto label_1a1b4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1B54u;
    // 0x1a1b54: 0x0
    ctx->pc = 0x1a1b54u;
    // NOP
    // 0x1a1b58: 0x0
    ctx->pc = 0x1a1b58u;
    // NOP
    // 0x1a1b5c: 0x0
    ctx->pc = 0x1a1b5cu;
    // NOP
}
