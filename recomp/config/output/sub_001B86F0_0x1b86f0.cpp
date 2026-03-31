#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B86F0
// Address: 0x1b86f0 - 0x1b8780
void sub_001B86F0_0x1b86f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b86f0u;

    // 0x1b86f0: 0x44841000
    ctx->pc = 0x1b86f0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 4);
    // 0x1b86f4: 0x27bdffd0
    ctx->pc = 0x1b86f4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b86f8: 0xffbf0020
    ctx->pc = 0x1b86f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b86fc: 0x3c0240e0
    ctx->pc = 0x1b86fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16608 << 16));
    // 0x1b8700: 0x468010a0
    ctx->pc = 0x1b8700u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x1b8704: 0x7fb00010
    ctx->pc = 0x1b8704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b8708: 0x44820800
    ctx->pc = 0x1b8708u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1b870c: 0xe7b40000
    ctx->pc = 0x1b870cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b8710: 0x46011503
    ctx->pc = 0x1b8710u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[20] = ctx->f[2] / ctx->f[1];
    // 0x1b8714: 0x3c024380
    ctx->pc = 0x1b8714u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17280 << 16));
    // 0x1b8718: 0x44820000
    ctx->pc = 0x1b8718u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1b871c: 0x0
    ctx->pc = 0x1b871cu;
    // NOP
    // 0x1b8720: 0x46140002
    ctx->pc = 0x1b8720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1b8724: 0x46000024
    ctx->pc = 0x1b8724u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1b8728: 0x44050000
    ctx->pc = 0x1b8728u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[0]);
    // 0x1b872c: 0xc06b3ac
    ctx->pc = 0x1B872Cu;
    SET_GPR_U32(ctx, 31, 0x1B8734u);
    ctx->pc = 0x1B8730u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1ACEB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ACEB0_0x1aceb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8734u; }
    }
    if (ctx->pc != 0x1B8734u) { return; }
    ctx->pc = 0x1B8734u;
    // 0x1b8734: 0x24100001
    ctx->pc = 0x1b8734u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_1b8738:
    // 0x1b8738: 0x3c0242fe
    ctx->pc = 0x1b8738u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17150 << 16));
    // 0x1b873c: 0x44820000
    ctx->pc = 0x1b873cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1b8740: 0x0
    ctx->pc = 0x1b8740u;
    // NOP
    // 0x1b8744: 0x46140002
    ctx->pc = 0x1b8744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1b8748: 0x46000024
    ctx->pc = 0x1b8748u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1b874c: 0x44050000
    ctx->pc = 0x1b874cu;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[0]);
    // 0x1b8750: 0xc06b830
    ctx->pc = 0x1B8750u;
    SET_GPR_U32(ctx, 31, 0x1B8758u);
    ctx->pc = 0x1B8754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AE0C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE0C0_0x1ae0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8758u; }
    }
    if (ctx->pc != 0x1B8758u) { return; }
    ctx->pc = 0x1B8758u;
    // 0x1b8758: 0x26100001
    ctx->pc = 0x1b8758u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b875c: 0x2a030003
    ctx->pc = 0x1b875cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 3));
    // 0x1b8760: 0x1460fff5
    ctx->pc = 0x1B8760u;
    {
        const bool branch_taken_0x1b8760 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b8760) {
            ctx->pc = 0x1B8738u;
            goto label_1b8738;
        }
    }
    ctx->pc = 0x1B8768u;
    // 0x1b8768: 0xdfbf0020
    ctx->pc = 0x1b8768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b876c: 0xc7b40000
    ctx->pc = 0x1b876cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b8770: 0x7bb00010
    ctx->pc = 0x1b8770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8774: 0x3e00008
    ctx->pc = 0x1B8774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8778u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B8738u: goto label_1b8738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B877Cu;
    // 0x1b877c: 0x0
    ctx->pc = 0x1b877cu;
    // NOP
}
