#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17c818
// Address: 0x17c818 - 0x17c8d0
void entry_17c818_0x17c8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17c818u;

    // 0x17c818: 0x2405000f
    ctx->pc = 0x17c818u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x17c81c: 0x2482000f
    ctx->pc = 0x17c81cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 15));
label_17c820:
    // 0x17c820: 0x24a5ffff
    ctx->pc = 0x17c820u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x17c824: 0xa0400000
    ctx->pc = 0x17c824u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17c828: 0x0
    ctx->pc = 0x17c828u;
    // NOP
    // 0x17c82c: 0x0
    ctx->pc = 0x17c82cu;
    // NOP
    // 0x17c830: 0x0
    ctx->pc = 0x17c830u;
    // NOP
    // 0x17c834: 0x4a1fffa
    ctx->pc = 0x17C834u;
    {
        const bool branch_taken_0x17c834 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x17C838u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x17c834) {
            ctx->pc = 0x17C820u;
            goto label_17c820;
        }
    }
    ctx->pc = 0x17C83Cu;
    // 0x17c83c: 0x3c013f14
    ctx->pc = 0x17c83cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16148 << 16));
    // 0x17c840: 0x3421fdf3
    ctx->pc = 0x17c840u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65011));
    // 0x17c844: 0x44811000
    ctx->pc = 0x17c844u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x17c848: 0x24050010
    ctx->pc = 0x17c848u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x17c84c: 0x3c014f00
    ctx->pc = 0x17c84cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)20224 << 16));
    // 0x17c850: 0x44810800
    ctx->pc = 0x17c850u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x17c854: 0x3c078000
    ctx->pc = 0x17c854u;
    SET_GPR_U32(ctx, 7, ((uint32_t)32768 << 16));
label_17c858:
    // 0x17c858: 0x24a2fff0
    ctx->pc = 0x17c858u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x17c85c: 0x853021
    ctx->pc = 0x17c85cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17c860: 0x44820000
    ctx->pc = 0x17c860u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x17c864: 0x46800020
    ctx->pc = 0x17c864u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x17c868: 0x24a50001
    ctx->pc = 0x17c868u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x17c86c: 0x46020002
    ctx->pc = 0x17c86cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x17c870: 0x46000836
    ctx->pc = 0x17c870u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c874: 0x460000e4
    ctx->pc = 0x17c874u;
    *(int32_t*)&ctx->f[3] = FPU_CVT_W_S(ctx->f[0]);
    // 0x17c878: 0x44021800
    ctx->pc = 0x17c878u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[3]);
    // 0x17c87c: 0x45000005
    ctx->pc = 0x17C87Cu;
    {
        const bool branch_taken_0x17c87c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C880u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 236));
        if (branch_taken_0x17c87c) {
            ctx->pc = 0x17C894u;
            goto label_17c894;
        }
    }
    ctx->pc = 0x17C884u;
    // 0x17c884: 0x46010001
    ctx->pc = 0x17c884u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x17c888: 0x460000e4
    ctx->pc = 0x17c888u;
    *(int32_t*)&ctx->f[3] = FPU_CVT_W_S(ctx->f[0]);
    // 0x17c88c: 0x44021800
    ctx->pc = 0x17c88cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[3]);
    // 0x17c890: 0x471025
    ctx->pc = 0x17c890u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_17c894:
    // 0x17c894: 0x1460fff0
    ctx->pc = 0x17C894u;
    {
        const bool branch_taken_0x17c894 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x17C898u;
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x17c894) {
            ctx->pc = 0x17C858u;
            goto label_17c858;
        }
    }
    ctx->pc = 0x17C89Cu;
    // 0x17c89c: 0x240500ec
    ctx->pc = 0x17c89cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 236));
    // 0x17c8a0: 0x2406ff80
    ctx->pc = 0x17c8a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x17c8a4: 0x0
    ctx->pc = 0x17c8a4u;
    // NOP
label_17c8a8:
    // 0x17c8a8: 0x851821
    ctx->pc = 0x17c8a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17c8ac: 0x24a50001
    ctx->pc = 0x17c8acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x17c8b0: 0x28a20100
    ctx->pc = 0x17c8b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 256));
    // 0x17c8b4: 0x0
    ctx->pc = 0x17c8b4u;
    // NOP
    // 0x17c8b8: 0x0
    ctx->pc = 0x17c8b8u;
    // NOP
    // 0x17c8bc: 0x1440fffa
    ctx->pc = 0x17C8BCu;
    {
        const bool branch_taken_0x17c8bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17C8C0u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        if (branch_taken_0x17c8bc) {
            ctx->pc = 0x17C8A8u;
            goto label_17c8a8;
        }
    }
    ctx->pc = 0x17C8C4u;
    // 0x17c8c4: 0x3e00008
    ctx->pc = 0x17C8C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C820u: goto label_17c820;
            case 0x17C858u: goto label_17c858;
            case 0x17C894u: goto label_17c894;
            case 0x17C8A8u: goto label_17c8a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17C8CCu;
    // 0x17c8cc: 0x0
    ctx->pc = 0x17c8ccu;
    // NOP
}
