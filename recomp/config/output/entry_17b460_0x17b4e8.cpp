#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17b460
// Address: 0x17b460 - 0x17b4e8
void entry_17b460_0x17b4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17b460u;

    // 0x17b460: 0x27bdfff0
    ctx->pc = 0x17b460u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b464: 0x80382d
    ctx->pc = 0x17b464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b468: 0xffbf0000
    ctx->pc = 0x17b468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b46c: 0x24020041
    ctx->pc = 0x17b46cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 65));
    // 0x17b470: 0x8ce30004
    ctx->pc = 0x17b470u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x17b474: 0x10620012
    ctx->pc = 0x17B474u;
    {
        const bool branch_taken_0x17b474 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17B478u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17b474) {
            ctx->pc = 0x17B4C0u;
            goto label_17b4c0;
        }
    }
    ctx->pc = 0x17B47Cu;
    // 0x17b47c: 0x28620042
    ctx->pc = 0x17b47cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 66));
    // 0x17b480: 0x50400010
    ctx->pc = 0x17B480u;
    {
        const bool branch_taken_0x17b480 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17b480) {
            ctx->pc = 0x17B484u;
            SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
            ctx->pc = 0x17B4C4u;
            goto label_17b4c4;
        }
    }
    ctx->pc = 0x17B488u;
    // 0x17b488: 0x24020021
    ctx->pc = 0x17b488u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 33));
    // 0x17b48c: 0x10620008
    ctx->pc = 0x17B48Cu;
    {
        const bool branch_taken_0x17b48c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17B490u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 34));
        if (branch_taken_0x17b48c) {
            ctx->pc = 0x17B4B0u;
            goto label_17b4b0;
        }
    }
    ctx->pc = 0x17B494u;
    // 0x17b494: 0x1040000b
    ctx->pc = 0x17B494u;
    {
        const bool branch_taken_0x17b494 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B498u;
        SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
        if (branch_taken_0x17b494) {
            ctx->pc = 0x17B4C4u;
            goto label_17b4c4;
        }
    }
    ctx->pc = 0x17B49Cu;
    // 0x17b49c: 0x24020011
    ctx->pc = 0x17b49cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
    // 0x17b4a0: 0x1062000f
    ctx->pc = 0x17B4A0u;
    {
        const bool branch_taken_0x17b4a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17B4A4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x17b4a0) {
            ctx->pc = 0x17B4E0u;
            goto label_17b4e0;
        }
    }
    ctx->pc = 0x17B4A8u;
    // 0x17b4a8: 0x10000007
    ctx->pc = 0x17B4A8u;
    {
        const bool branch_taken_0x17b4a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17b4a8) {
            ctx->pc = 0x17B4C8u;
            goto label_17b4c8;
        }
    }
    ctx->pc = 0x17B4B0u;
label_17b4b0:
    // 0x17b4b0: 0xdfbf0000
    ctx->pc = 0x17b4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b4b4: 0x805ed3a
    ctx->pc = 0x17B4B4u;
    ctx->pc = 0x17B4B8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17B4E8u;
    entry_17b4e8_0x17b530(rdram, ctx, runtime); return;
    ctx->pc = 0x17B4BCu;
    // 0x17b4bc: 0x0
    ctx->pc = 0x17b4bcu;
    // NOP
label_17b4c0:
    // 0x17b4c0: 0x3c060024
    ctx->pc = 0x17b4c0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
label_17b4c4:
    // 0x17b4c4: 0xdfbf0000
    ctx->pc = 0x17b4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17b4c8:
    // 0x17b4c8: 0xe0202d
    ctx->pc = 0x17b4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b4cc: 0x100282d
    ctx->pc = 0x17b4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b4d0: 0x24c60e70
    ctx->pc = 0x17b4d0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3696));
    // 0x17b4d4: 0x805f472
    ctx->pc = 0x17B4D4u;
    ctx->pc = 0x17B4D8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D1C8u;
    sub_0017D1C8_0x17d1c8(rdram, ctx, runtime); return;
    ctx->pc = 0x17B4DCu;
    // 0x17b4dc: 0x0
    ctx->pc = 0x17b4dcu;
    // NOP
label_17b4e0:
    // 0x17b4e0: 0x3e00008
    ctx->pc = 0x17B4E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B4E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B4B0u: goto label_17b4b0;
            case 0x17B4C0u: goto label_17b4c0;
            case 0x17B4C4u: goto label_17b4c4;
            case 0x17B4C8u: goto label_17b4c8;
            case 0x17B4E0u: goto label_17b4e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17B4E8u;
}
