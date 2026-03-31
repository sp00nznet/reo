#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00120E98
// Address: 0x120e98 - 0x120f68
void sub_00120E98_0x120e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x120e98u;

    // 0x120e98: 0x44036000
    ctx->pc = 0x120e98u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[12]);
    // 0x120e9c: 0x60282d
    ctx->pc = 0x120e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120ea0: 0x3c027fff
    ctx->pc = 0x120ea0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x120ea4: 0x3c03007f
    ctx->pc = 0x120ea4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)127 << 16));
    // 0x120ea8: 0x3442ffff
    ctx->pc = 0x120ea8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x120eac: 0x3463ffff
    ctx->pc = 0x120eacu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x120eb0: 0xa21024
    ctx->pc = 0x120eb0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x120eb4: 0x62102b
    ctx->pc = 0x120eb4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x120eb8: 0x10400007
    ctx->pc = 0x120EB8u;
    {
        const bool branch_taken_0x120eb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x120EBCu;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x120eb8) {
            ctx->pc = 0x120ED8u;
            goto label_120ed8;
        }
    }
    ctx->pc = 0x120EC0u;
    // 0x120ec0: 0x4a10007
    ctx->pc = 0x120EC0u;
    {
        const bool branch_taken_0x120ec0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x120EC4u;
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 23));
        if (branch_taken_0x120ec0) {
            ctx->pc = 0x120EE0u;
            goto label_120ee0;
        }
    }
    ctx->pc = 0x120EC8u;
    // 0x120ec8: 0x460c6001
    ctx->pc = 0x120ec8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x120ecc: 0x0
    ctx->pc = 0x120eccu;
    // NOP
    // 0x120ed0: 0x0
    ctx->pc = 0x120ed0u;
    // NOP
    // 0x120ed4: 0x46000003
    ctx->pc = 0x120ed4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[0];
label_120ed8:
    // 0x120ed8: 0x3e00008
    ctx->pc = 0x120ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x120ED8u: goto label_120ed8;
            case 0x120EE0u: goto label_120ee0;
            case 0x120F10u: goto label_120f10;
            case 0x120F30u: goto label_120f30;
            case 0x120F44u: goto label_120f44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x120EE0u;
label_120ee0:
    // 0x120ee0: 0x24e7ff81
    ctx->pc = 0x120ee0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967169));
    // 0x120ee4: 0x3c020080
    ctx->pc = 0x120ee4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
    // 0x120ee8: 0xa31824
    ctx->pc = 0x120ee8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x120eec: 0x30e40001
    ctx->pc = 0x120eecu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 7), 1));
    // 0x120ef0: 0x622825
    ctx->pc = 0x120ef0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x120ef4: 0x402d
    ctx->pc = 0x120ef4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120ef8: 0x852804
    ctx->pc = 0x120ef8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x120efc: 0x3c040100
    ctx->pc = 0x120efcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)256 << 16));
    // 0x120f00: 0x73843
    ctx->pc = 0x120f00u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x120f04: 0x52840
    ctx->pc = 0x120f04u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x120f08: 0x302d
    ctx->pc = 0x120f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f0c: 0x0
    ctx->pc = 0x120f0cu;
    // NOP
label_120f10:
    // 0x120f10: 0x1041821
    ctx->pc = 0x120f10u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x120f14: 0xa3102a
    ctx->pc = 0x120f14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x120f18: 0x54400005
    ctx->pc = 0x120F18u;
    {
        const bool branch_taken_0x120f18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x120f18) {
            ctx->pc = 0x120F1Cu;
            SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x120F30u;
            goto label_120f30;
        }
    }
    ctx->pc = 0x120F20u;
    // 0x120f20: 0xa32823
    ctx->pc = 0x120f20u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x120f24: 0x644021
    ctx->pc = 0x120f24u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x120f28: 0xc43021
    ctx->pc = 0x120f28u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x120f2c: 0x42042
    ctx->pc = 0x120f2cu;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 1));
label_120f30:
    // 0x120f30: 0x1480fff7
    ctx->pc = 0x120F30u;
    {
        const bool branch_taken_0x120f30 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x120F34u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x120f30) {
            ctx->pc = 0x120F10u;
            goto label_120f10;
        }
    }
    ctx->pc = 0x120F38u;
    // 0x120f38: 0x10a00002
    ctx->pc = 0x120F38u;
    {
        const bool branch_taken_0x120f38 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x120F3Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x120f38) {
            ctx->pc = 0x120F44u;
            goto label_120f44;
        }
    }
    ctx->pc = 0x120F40u;
    // 0x120f40: 0xc23021
    ctx->pc = 0x120f40u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_120f44:
    // 0x120f44: 0x61043
    ctx->pc = 0x120f44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
    // 0x120f48: 0x71dc0
    ctx->pc = 0x120f48u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 23));
    // 0x120f4c: 0x3c053f00
    ctx->pc = 0x120f4cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)16128 << 16));
    // 0x120f50: 0xa22821
    ctx->pc = 0x120f50u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x120f54: 0xa32821
    ctx->pc = 0x120f54u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x120f58: 0x44850000
    ctx->pc = 0x120f58u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x120f5c: 0x3e00008
    ctx->pc = 0x120F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x120ED8u: goto label_120ed8;
            case 0x120EE0u: goto label_120ee0;
            case 0x120F10u: goto label_120f10;
            case 0x120F30u: goto label_120f30;
            case 0x120F44u: goto label_120f44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x120F64u;
    // 0x120f64: 0x0
    ctx->pc = 0x120f64u;
    // NOP
}
