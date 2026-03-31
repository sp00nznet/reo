#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018FCE0
// Address: 0x18fce0 - 0x18fdf0
void sub_0018FCE0_0x18fce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18fce0u;

    // 0x18fce0: 0x27bdffc0
    ctx->pc = 0x18fce0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18fce4: 0x3c040029
    ctx->pc = 0x18fce4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)41 << 16));
    // 0x18fce8: 0xffbf0030
    ctx->pc = 0x18fce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18fcec: 0x24844cc0
    ctx->pc = 0x18fcecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19648));
    // 0x18fcf0: 0x7fb10020
    ctx->pc = 0x18fcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18fcf4: 0x7fb00010
    ctx->pc = 0x18fcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18fcf8: 0xc0882d
    ctx->pc = 0x18fcf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fcfc: 0xe7b50004
    ctx->pc = 0x18fcfcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18fd00: 0xe0802d
    ctx->pc = 0x18fd00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fd04: 0xe7b40000
    ctx->pc = 0x18fd04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18fd08: 0x46006546
    ctx->pc = 0x18fd08u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x18fd0c: 0xc063f7c
    ctx->pc = 0x18FD0Cu;
    SET_GPR_U32(ctx, 31, 0x18FD14u);
    ctx->pc = 0x18FD10u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x18FDF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FDF0_0x18fdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD14u; }
    }
    if (ctx->pc != 0x18FD14u) { return; }
    ctx->pc = 0x18FD14u;
    // 0x18fd14: 0x6210003
    ctx->pc = 0x18FD14u;
    {
        const bool branch_taken_0x18fd14 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x18FD18u;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 1));
        if (branch_taken_0x18fd14) {
            ctx->pc = 0x18FD24u;
            goto label_18fd24;
        }
    }
    ctx->pc = 0x18FD1Cu;
    // 0x18fd1c: 0x26230001
    ctx->pc = 0x18fd1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
    // 0x18fd20: 0x31843
    ctx->pc = 0x18fd20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_18fd24:
    // 0x18fd24: 0x44830000
    ctx->pc = 0x18fd24u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x18fd28: 0x3c010029
    ctx->pc = 0x18fd28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fd2c: 0x102043
    ctx->pc = 0x18fd2cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 1));
    // 0x18fd30: 0x46800020
    ctx->pc = 0x18fd30u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x18fd34: 0x6010003
    ctx->pc = 0x18FD34u;
    {
        const bool branch_taken_0x18fd34 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x18FD38u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 19648), bits); }
        if (branch_taken_0x18fd34) {
            ctx->pc = 0x18FD44u;
            goto label_18fd44;
        }
    }
    ctx->pc = 0x18FD3Cu;
    // 0x18fd3c: 0x26030001
    ctx->pc = 0x18fd3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 1));
    // 0x18fd40: 0x32043
    ctx->pc = 0x18fd40u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
label_18fd44:
    // 0x18fd44: 0x3c033f80
    ctx->pc = 0x18fd44u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x18fd48: 0x3c010029
    ctx->pc = 0x18fd48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fd4c: 0xac234cfc
    ctx->pc = 0x18fd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19708), GPR_U32(ctx, 3));
    // 0x18fd50: 0x4615a001
    ctx->pc = 0x18fd50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x18fd54: 0x3c01002a
    ctx->pc = 0x18fd54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x18fd58: 0x3c033f00
    ctx->pc = 0x18fd58u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16128 << 16));
    // 0x18fd5c: 0xc425f9f4
    ctx->pc = 0x18fd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x18fd60: 0x44831800
    ctx->pc = 0x18fd60u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 3);
    // 0x18fd64: 0x3c010029
    ctx->pc = 0x18fd64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fd68: 0xc42141c0
    ctx->pc = 0x18fd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fd6c: 0x3c010029
    ctx->pc = 0x18fd6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fd70: 0xe4204ce8
    ctx->pc = 0x18fd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 19688), bits); }
    // 0x18fd74: 0x44840000
    ctx->pc = 0x18fd74u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x18fd78: 0x3c010029
    ctx->pc = 0x18fd78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fd7c: 0xc4224ce8
    ctx->pc = 0x18fd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 19688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18fd80: 0x46800120
    ctx->pc = 0x18fd80u;
    ctx->f[4] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x18fd84: 0x3c010029
    ctx->pc = 0x18fd84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fd88: 0xc42041b8
    ctx->pc = 0x18fd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fd8c: 0x3c010029
    ctx->pc = 0x18fd8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fd90: 0xe4214cf0
    ctx->pc = 0x18fd90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 19696), bits); }
    // 0x18fd94: 0x3c010029
    ctx->pc = 0x18fd94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fd98: 0xe4204cf4
    ctx->pc = 0x18fd98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 19700), bits); }
    // 0x18fd9c: 0x46002007
    ctx->pc = 0x18fd9cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x18fda0: 0x3c010029
    ctx->pc = 0x18fda0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fda4: 0xe4204cd4
    ctx->pc = 0x18fda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 19668), bits); }
    // 0x18fda8: 0x46002807
    ctx->pc = 0x18fda8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[5]);
    // 0x18fdac: 0x3c010029
    ctx->pc = 0x18fdacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fdb0: 0x46001802
    ctx->pc = 0x18fdb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x18fdb4: 0x46001042
    ctx->pc = 0x18fdb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x18fdb8: 0x46051802
    ctx->pc = 0x18fdb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x18fdbc: 0xe4214ce8
    ctx->pc = 0x18fdbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 19688), bits); }
    // 0x18fdc0: 0x3c010029
    ctx->pc = 0x18fdc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18fdc4: 0xe4204cf8
    ctx->pc = 0x18fdc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 19704), bits); }
    // 0x18fdc8: 0xdfbf0030
    ctx->pc = 0x18fdc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18fdcc: 0xc7b50004
    ctx->pc = 0x18fdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18fdd0: 0x7bb10020
    ctx->pc = 0x18fdd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18fdd4: 0xc7b40000
    ctx->pc = 0x18fdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18fdd8: 0x7bb00010
    ctx->pc = 0x18fdd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18fddc: 0x3e00008
    ctx->pc = 0x18FDDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FDE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18FD24u: goto label_18fd24;
            case 0x18FD44u: goto label_18fd44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18FDE4u;
    // 0x18fde4: 0x0
    ctx->pc = 0x18fde4u;
    // NOP
    // 0x18fde8: 0x0
    ctx->pc = 0x18fde8u;
    // NOP
    // 0x18fdec: 0x0
    ctx->pc = 0x18fdecu;
    // NOP
}
