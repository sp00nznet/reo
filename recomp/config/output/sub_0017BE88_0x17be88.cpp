#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017BE88
// Address: 0x17be88 - 0x17bed8
void sub_0017BE88_0x17be88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17be88u;

    // 0x17be88: 0x27bdfff0
    ctx->pc = 0x17be88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17be8c: 0x24020001
    ctx->pc = 0x17be8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17be90: 0xffbf0000
    ctx->pc = 0x17be90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17be94: 0xc0202d
    ctx->pc = 0x17be94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17be98: 0x100302d
    ctx->pc = 0x17be98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17be9c: 0x8ca30074
    ctx->pc = 0x17be9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x17bea0: 0x14620007
    ctx->pc = 0x17BEA0u;
    {
        const bool branch_taken_0x17bea0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x17BEA4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17bea0) {
            ctx->pc = 0x17BEC0u;
            goto label_17bec0;
        }
    }
    ctx->pc = 0x17BEA8u;
    // 0x17bea8: 0x10c00003
    ctx->pc = 0x17BEA8u;
    {
        const bool branch_taken_0x17bea8 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x17BEACu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x17bea8) {
            ctx->pc = 0x17BEB8u;
            goto label_17beb8;
        }
    }
    ctx->pc = 0x17BEB0u;
    // 0x17beb0: 0x8053fd2
    ctx->pc = 0x17BEB0u;
    ctx->pc = 0x17BEB4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x14FF48u;
    entry_14ff48_0x14ff50(rdram, ctx, runtime); return;
    ctx->pc = 0x17BEB8u;
label_17beb8:
    // 0x17beb8: 0x80524a0
    ctx->pc = 0x17BEB8u;
    ctx->pc = 0x17BEBCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x149280u;
    entry_149280_0x149288(rdram, ctx, runtime); return;
    ctx->pc = 0x17BEC0u;
label_17bec0:
    // 0x17bec0: 0x10c00003
    ctx->pc = 0x17BEC0u;
    {
        const bool branch_taken_0x17bec0 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x17BEC4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x17bec0) {
            ctx->pc = 0x17BED0u;
            goto label_17bed0;
        }
    }
    ctx->pc = 0x17BEC8u;
    // 0x17bec8: 0x8053fd2
    ctx->pc = 0x17BEC8u;
    ctx->pc = 0x17BECCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x14FF48u;
    entry_14ff48_0x14ff50(rdram, ctx, runtime); return;
    ctx->pc = 0x17BED0u;
label_17bed0:
    // 0x17bed0: 0x80524a0
    ctx->pc = 0x17BED0u;
    ctx->pc = 0x17BED4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x149280u;
    entry_149280_0x149288(rdram, ctx, runtime); return;
    ctx->pc = 0x17BED8u;
}
