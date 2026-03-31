#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00180F60
// Address: 0x180f60 - 0x180fe0
void sub_00180F60_0x180f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x180f60u;

    // 0x180f60: 0x3c030023
    ctx->pc = 0x180f60u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x180f64: 0x27bdfff0
    ctx->pc = 0x180f64u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180f68: 0x8c65fa10
    ctx->pc = 0x180f68u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4294965776)));
    // 0x180f6c: 0x3c028101
    ctx->pc = 0x180f6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x180f70: 0xffb00000
    ctx->pc = 0x180f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180f74: 0x80802d
    ctx->pc = 0x180f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f78: 0xffbf0008
    ctx->pc = 0x180f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x180f7c: 0x10a00013
    ctx->pc = 0x180F7Cu;
    {
        const bool branch_taken_0x180f7c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x180F80u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32769));
        if (branch_taken_0x180f7c) {
            ctx->pc = 0x180FCCu;
            goto label_180fcc;
        }
    }
    ctx->pc = 0x180F84u;
    // 0x180f84: 0xc061e90
    ctx->pc = 0x180F84u;
    SET_GPR_U32(ctx, 31, 0x180F8Cu);
    ctx->pc = 0x187A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187A40_0x187a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180F8Cu; }
    }
    if (ctx->pc != 0x180F8Cu) { return; }
    ctx->pc = 0x180F8Cu;
    // 0x180f8c: 0x3c030028
    ctx->pc = 0x180f8cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)40 << 16));
    // 0x180f90: 0x14400005
    ctx->pc = 0x180F90u;
    {
        const bool branch_taken_0x180f90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x180F94u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294939904));
        if (branch_taken_0x180f90) {
            ctx->pc = 0x180FA8u;
            goto label_180fa8;
        }
    }
    ctx->pc = 0x180F98u;
    // 0x180f98: 0x3c028101
    ctx->pc = 0x180f98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x180f9c: 0x1000000b
    ctx->pc = 0x180F9Cu;
    {
        const bool branch_taken_0x180f9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x180FA0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32770));
        if (branch_taken_0x180f9c) {
            ctx->pc = 0x180FCCu;
            goto label_180fcc;
        }
    }
    ctx->pc = 0x180FA4u;
    // 0x180fa4: 0x0
    ctx->pc = 0x180fa4u;
    // NOP
label_180fa8:
    // 0x180fa8: 0x8c830004
    ctx->pc = 0x180fa8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x180fac: 0x3c028101
    ctx->pc = 0x180facu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x180fb0: 0x14600006
    ctx->pc = 0x180FB0u;
    {
        const bool branch_taken_0x180fb0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x180FB4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x180fb0) {
            ctx->pc = 0x180FCCu;
            goto label_180fcc;
        }
    }
    ctx->pc = 0x180FB8u;
    // 0x180fb8: 0x24020003
    ctx->pc = 0x180fb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x180fbc: 0xac900000
    ctx->pc = 0x180fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x180fc0: 0xc062228
    ctx->pc = 0x180FC0u;
    SET_GPR_U32(ctx, 31, 0x180FC8u);
    ctx->pc = 0x180FC4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1888A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001888A0_0x1888a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180FC8u; }
    }
    if (ctx->pc != 0x180FC8u) { return; }
    ctx->pc = 0x180FC8u;
    // 0x180fc8: 0x102d
    ctx->pc = 0x180fc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180fcc:
    // 0x180fcc: 0xdfb00000
    ctx->pc = 0x180fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180fd0: 0xdfbf0008
    ctx->pc = 0x180fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180fd4: 0x3e00008
    ctx->pc = 0x180FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180FD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180FA8u: goto label_180fa8;
            case 0x180FCCu: goto label_180fcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180FDCu;
    // 0x180fdc: 0x0
    ctx->pc = 0x180fdcu;
    // NOP
}
