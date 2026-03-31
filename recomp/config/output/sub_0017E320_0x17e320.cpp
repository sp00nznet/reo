#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017E320
// Address: 0x17e320 - 0x17e368
void sub_0017E320_0x17e320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17e320u;

    // 0x17e320: 0x460c6836
    ctx->pc = 0x17e320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e324: 0x24020001
    ctx->pc = 0x17e324u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e328: 0x45000002
    ctx->pc = 0x17E328u;
    {
        const bool branch_taken_0x17e328 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17E32Cu;
        ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
        if (branch_taken_0x17e328) {
            ctx->pc = 0x17E334u;
            goto label_17e334;
        }
    }
    ctx->pc = 0x17E330u;
    // 0x17e330: 0x102d
    ctx->pc = 0x17e330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e334:
    // 0x17e334: 0x3c01c160
    ctx->pc = 0x17e334u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49504 << 16));
    // 0x17e338: 0x44810000
    ctx->pc = 0x17e338u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x17e33c: 0x46000834
    ctx->pc = 0x17e33cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e340: 0x45030001
    ctx->pc = 0x17E340u;
    {
        const bool branch_taken_0x17e340 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17e340) {
            ctx->pc = 0x17E344u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x17E348u;
            goto label_17e348;
        }
    }
    ctx->pc = 0x17E348u;
label_17e348:
    // 0x17e348: 0x3e00008
    ctx->pc = 0x17E348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E334u: goto label_17e334;
            case 0x17E348u: goto label_17e348;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E350u;
    // 0x17e350: 0xc480003c
    ctx->pc = 0x17e350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e354: 0xe4a00000
    ctx->pc = 0x17e354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x17e358: 0xc4810040
    ctx->pc = 0x17e358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e35c: 0x3e00008
    ctx->pc = 0x17E35Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E360u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E334u: goto label_17e334;
            case 0x17E348u: goto label_17e348;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E364u;
    // 0x17e364: 0x0
    ctx->pc = 0x17e364u;
    // NOP
}
