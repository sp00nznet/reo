#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018E710
// Address: 0x18e710 - 0x18e7d0
void sub_0018E710_0x18e710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18e710u;

    // 0x18e710: 0x27bdffc0
    ctx->pc = 0x18e710u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18e714: 0xffbf0020
    ctx->pc = 0x18e714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18e718: 0x27a60038
    ctx->pc = 0x18e718u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 56));
    // 0x18e71c: 0x7fb00010
    ctx->pc = 0x18e71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18e720: 0xe7b40000
    ctx->pc = 0x18e720u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18e724: 0xa0802d
    ctx->pc = 0x18e724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e728: 0xafa0003c
    ctx->pc = 0x18e728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x18e72c: 0x46006506
    ctx->pc = 0x18e72cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x18e730: 0xafa00038
    ctx->pc = 0x18e730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x18e734: 0x86070000
    ctx->pc = 0x18e734u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18e738: 0xc063bac
    ctx->pc = 0x18E738u;
    SET_GPR_U32(ctx, 31, 0x18E740u);
    ctx->pc = 0x18E73Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 60));
    ctx->pc = 0x18EEB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018EEB0_0x18eeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E740u; }
    }
    if (ctx->pc != 0x18E740u) { return; }
    ctx->pc = 0x18E740u;
    // 0x18e740: 0xa6020000
    ctx->pc = 0x18e740u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18e744: 0x8fa20038
    ctx->pc = 0x18e744u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x18e748: 0x14400006
    ctx->pc = 0x18E748u;
    {
        const bool branch_taken_0x18e748 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x18e748) {
            ctx->pc = 0x18E764u;
            goto label_18e764;
        }
    }
    ctx->pc = 0x18E750u;
    // 0x18e750: 0x8fa2003c
    ctx->pc = 0x18e750u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x18e754: 0x84420000
    ctx->pc = 0x18e754u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18e758: 0x44820000
    ctx->pc = 0x18e758u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x18e75c: 0x10000017
    ctx->pc = 0x18E75Cu;
    {
        const bool branch_taken_0x18e75c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18E760u;
        ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x18e75c) {
            ctx->pc = 0x18E7BCu;
            goto label_18e7bc;
        }
    }
    ctx->pc = 0x18E764u;
label_18e764:
    // 0x18e764: 0x84440000
    ctx->pc = 0x18e764u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18e768: 0x4600a306
    ctx->pc = 0x18e768u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x18e76c: 0x8fa7003c
    ctx->pc = 0x18e76cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x18e770: 0x84430002
    ctx->pc = 0x18e770u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x18e774: 0x44840800
    ctx->pc = 0x18e774u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 4);
    // 0x18e778: 0x84e60000
    ctx->pc = 0x18e778u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18e77c: 0x84e50002
    ctx->pc = 0x18e77cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x18e780: 0x46800c20
    ctx->pc = 0x18e780u;
    ctx->f[16] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x18e784: 0x84420004
    ctx->pc = 0x18e784u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18e788: 0x84e40006
    ctx->pc = 0x18e788u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x18e78c: 0x44830000
    ctx->pc = 0x18e78cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x18e790: 0x44850800
    ctx->pc = 0x18e790u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 5);
    // 0x18e794: 0x0
    ctx->pc = 0x18e794u;
    // NOP
    // 0x18e798: 0x46800460
    ctx->pc = 0x18e798u;
    ctx->f[17] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x18e79c: 0x46800ba0
    ctx->pc = 0x18e79cu;
    ctx->f[14] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x18e7a0: 0x44861000
    ctx->pc = 0x18e7a0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 6);
    // 0x18e7a4: 0x44840800
    ctx->pc = 0x18e7a4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 4);
    // 0x18e7a8: 0x44820000
    ctx->pc = 0x18e7a8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x18e7ac: 0x46801360
    ctx->pc = 0x18e7acu;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x18e7b0: 0x46800be0
    ctx->pc = 0x18e7b0u;
    ctx->f[15] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x18e7b4: 0xc063c98
    ctx->pc = 0x18E7B4u;
    SET_GPR_U32(ctx, 31, 0x18E7BCu);
    ctx->pc = 0x18E7B8u;
    ctx->f[18] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    ctx->pc = 0x18F260u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F260_0x18f260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E7BCu; }
    }
    if (ctx->pc != 0x18E7BCu) { return; }
    ctx->pc = 0x18E7BCu;
label_18e7bc:
    // 0x18e7bc: 0xdfbf0020
    ctx->pc = 0x18e7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e7c0: 0xc7b40000
    ctx->pc = 0x18e7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18e7c4: 0x7bb00010
    ctx->pc = 0x18e7c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e7c8: 0x3e00008
    ctx->pc = 0x18E7C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E7CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E764u: goto label_18e764;
            case 0x18E7BCu: goto label_18e7bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18E7D0u;
}
