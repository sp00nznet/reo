#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D6B80
// Address: 0x1d6b80 - 0x1d6be0
void sub_001D6B80_0x1d6b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d6b80u;

    // 0x1d6b80: 0x27bdffe0
    ctx->pc = 0x1d6b80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d6b84: 0x102d
    ctx->pc = 0x1d6b84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6b88: 0xffbf0010
    ctx->pc = 0x1d6b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d6b8c: 0x7fb00000
    ctx->pc = 0x1d6b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d6b90: 0x8c830000
    ctx->pc = 0x1d6b90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d6b94: 0x60082a
    ctx->pc = 0x1d6b94u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 0)));
    // 0x1d6b98: 0x1420000b
    ctx->pc = 0x1D6B98u;
    {
        const bool branch_taken_0x1d6b98 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D6B9Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d6b98) {
            ctx->pc = 0x1D6BC8u;
            goto label_1d6bc8;
        }
    }
    ctx->pc = 0x1D6BA0u;
    // 0x1d6ba0: 0x3243c
    ctx->pc = 0x1d6ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1d6ba4: 0xc076060
    ctx->pc = 0x1D6BA4u;
    SET_GPR_U32(ctx, 31, 0x1D6BACu);
    ctx->pc = 0x1D6BA8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->pc = 0x1D8180u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8180_0x1d8180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6BACu; }
    }
    if (ctx->pc != 0x1D6BACu) { return; }
    ctx->pc = 0x1D6BACu;
    // 0x1d6bac: 0x2243c
    ctx->pc = 0x1d6bacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6bb0: 0x2402ffff
    ctx->pc = 0x1d6bb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6bb4: 0x4243f
    ctx->pc = 0x1d6bb4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1d6bb8: 0xc0759b4
    ctx->pc = 0x1D6BB8u;
    SET_GPR_U32(ctx, 31, 0x1D6BC0u);
    ctx->pc = 0x1D6BBCu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1D66D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D66D0_0x1d66d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6BC0u; }
    }
    if (ctx->pc != 0x1D6BC0u) { return; }
    ctx->pc = 0x1D6BC0u;
    // 0x1d6bc0: 0x10000003
    ctx->pc = 0x1D6BC0u;
    {
        const bool branch_taken_0x1d6bc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d6bc0) {
            ctx->pc = 0x1D6BD0u;
            goto label_1d6bd0;
        }
    }
    ctx->pc = 0x1D6BC8u;
label_1d6bc8:
    // 0x1d6bc8: 0x2403ffff
    ctx->pc = 0x1d6bc8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6bcc: 0xae030000
    ctx->pc = 0x1d6bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1d6bd0:
    // 0x1d6bd0: 0xdfbf0010
    ctx->pc = 0x1d6bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6bd4: 0x7bb00000
    ctx->pc = 0x1d6bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6bd8: 0x3e00008
    ctx->pc = 0x1D6BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6BDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6BC8u: goto label_1d6bc8;
            case 0x1D6BD0u: goto label_1d6bd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D6BE0u;
}
