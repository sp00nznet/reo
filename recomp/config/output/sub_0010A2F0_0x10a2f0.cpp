#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010A2F0
// Address: 0x10a2f0 - 0x10a380
void sub_0010A2F0_0x10a2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10a2f0u;

    // 0x10a2f0: 0x44066000
    ctx->pc = 0x10a2f0u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[12]);
    // 0x10a2f4: 0x615c3
    ctx->pc = 0x10a2f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 23));
    // 0x10a2f8: 0x304200ff
    ctx->pc = 0x10a2f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x10a2fc: 0x2445ff81
    ctx->pc = 0x10a2fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x10a300: 0x28a30017
    ctx->pc = 0x10a300u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 23));
    // 0x10a304: 0x10600016
    ctx->pc = 0x10A304u;
    {
        const bool branch_taken_0x10a304 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A308u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
        if (branch_taken_0x10a304) {
            ctx->pc = 0x10A360u;
            goto label_10a360;
        }
    }
    ctx->pc = 0x10A30Cu;
    // 0x10a30c: 0x4a10008
    ctx->pc = 0x10A30Cu;
    {
        const bool branch_taken_0x10a30c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x10A310u;
        SET_GPR_U32(ctx, 2, ((uint32_t)127 << 16));
        if (branch_taken_0x10a30c) {
            ctx->pc = 0x10A330u;
            goto label_10a330;
        }
    }
    ctx->pc = 0x10A314u;
    // 0x10a314: 0x3c028000
    ctx->pc = 0x10a314u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x10a318: 0xc23024
    ctx->pc = 0x10a318u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10a31c: 0xafa60000
    ctx->pc = 0x10a31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x10a320: 0xc7a00000
    ctx->pc = 0x10a320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10a324: 0x10000012
    ctx->pc = 0x10A324u;
    {
        const bool branch_taken_0x10a324 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A328u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        if (branch_taken_0x10a324) {
            ctx->pc = 0x10A370u;
            goto label_10a370;
        }
    }
    ctx->pc = 0x10A32Cu;
    // 0x10a32c: 0x0
    ctx->pc = 0x10a32cu;
    // NOP
label_10a330:
    // 0x10a330: 0x3442ffff
    ctx->pc = 0x10a330u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x10a334: 0xa21007
    ctx->pc = 0x10a334u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x10a338: 0x21827
    ctx->pc = 0x10a338u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x10a33c: 0xc21024
    ctx->pc = 0x10a33cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10a340: 0xc31824
    ctx->pc = 0x10a340u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x10a344: 0x10400006
    ctx->pc = 0x10A344u;
    {
        const bool branch_taken_0x10a344 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A348u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x10a344) {
            ctx->pc = 0x10A360u;
            goto label_10a360;
        }
    }
    ctx->pc = 0x10A34Cu;
    // 0x10a34c: 0xc7a00004
    ctx->pc = 0x10a34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10a350: 0xe4800000
    ctx->pc = 0x10a350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x10a354: 0x10000007
    ctx->pc = 0x10A354u;
    {
        const bool branch_taken_0x10a354 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A358u;
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        if (branch_taken_0x10a354) {
            ctx->pc = 0x10A374u;
            goto label_10a374;
        }
    }
    ctx->pc = 0x10A35Cu;
    // 0x10a35c: 0x0
    ctx->pc = 0x10a35cu;
    // NOP
label_10a360:
    // 0x10a360: 0xe48c0000
    ctx->pc = 0x10a360u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x10a364: 0x3c028000
    ctx->pc = 0x10a364u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x10a368: 0xc23024
    ctx->pc = 0x10a368u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10a36c: 0x44866000
    ctx->pc = 0x10a36cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 6);
label_10a370:
    // 0x10a370: 0x46006006
    ctx->pc = 0x10a370u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
label_10a374:
    // 0x10a374: 0x3e00008
    ctx->pc = 0x10A374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A378u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A330u: goto label_10a330;
            case 0x10A360u: goto label_10a360;
            case 0x10A370u: goto label_10a370;
            case 0x10A374u: goto label_10a374;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10A37Cu;
    // 0x10a37c: 0x0
    ctx->pc = 0x10a37cu;
    // NOP
}
