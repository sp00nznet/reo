#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A3CA0
// Address: 0x1a3ca0 - 0x1a3d00
void sub_001A3CA0_0x1a3ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a3ca0u;

    // 0x1a3ca0: 0x27bdfff0
    ctx->pc = 0x1a3ca0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a3ca4: 0xa0402d
    ctx->pc = 0x1a3ca4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3ca8: 0xffbf0000
    ctx->pc = 0x1a3ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a3cac: 0x3c05000c
    ctx->pc = 0x1a3cacu;
    SET_GPR_U32(ctx, 5, ((uint32_t)12 << 16));
    // 0x1a3cb0: 0xc068d7c
    ctx->pc = 0x1A3CB0u;
    SET_GPR_U32(ctx, 31, 0x1A3CB8u);
    ctx->pc = 0x1A3CB4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A35F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35F0_0x1a35f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3CB8u; }
    }
    if (ctx->pc != 0x1A3CB8u) { return; }
    ctx->pc = 0x1A3CB8u;
    // 0x1a3cb8: 0x14400003
    ctx->pc = 0x1A3CB8u;
    {
        const bool branch_taken_0x1a3cb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A3CBCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 12));
        if (branch_taken_0x1a3cb8) {
            ctx->pc = 0x1A3CC8u;
            goto label_1a3cc8;
        }
    }
    ctx->pc = 0x1A3CC0u;
    // 0x1a3cc0: 0x1000000c
    ctx->pc = 0x1A3CC0u;
    {
        const bool branch_taken_0x1a3cc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3CC4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a3cc0) {
            ctx->pc = 0x1A3CF4u;
            goto label_1a3cf4;
        }
    }
    ctx->pc = 0x1A3CC8u;
label_1a3cc8:
    // 0x1a3cc8: 0x10000006
    ctx->pc = 0x1A3CC8u;
    {
        const bool branch_taken_0x1a3cc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3CCCu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3cc8) {
            ctx->pc = 0x1A3CE4u;
            goto label_1a3ce4;
        }
    }
    ctx->pc = 0x1A3CD0u;
label_1a3cd0:
    // 0x1a3cd0: 0x8c820000
    ctx->pc = 0x1a3cd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a3cd4: 0x24630001
    ctx->pc = 0x1a3cd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a3cd8: 0x210c0
    ctx->pc = 0x1a3cd8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a3cdc: 0x24840004
    ctx->pc = 0x1a3cdcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x1a3ce0: 0x822021
    ctx->pc = 0x1a3ce0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1a3ce4:
    // 0x1a3ce4: 0x68102a
    ctx->pc = 0x1a3ce4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 8)));
    // 0x1a3ce8: 0x1440fff9
    ctx->pc = 0x1A3CE8u;
    {
        const bool branch_taken_0x1a3ce8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a3ce8) {
            ctx->pc = 0x1A3CD0u;
            goto label_1a3cd0;
        }
    }
    ctx->pc = 0x1A3CF0u;
    // 0x1a3cf0: 0x8c820000
    ctx->pc = 0x1a3cf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a3cf4:
    // 0x1a3cf4: 0xdfbf0000
    ctx->pc = 0x1a3cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3cf8: 0x3e00008
    ctx->pc = 0x1A3CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3CFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3CC8u: goto label_1a3cc8;
            case 0x1A3CD0u: goto label_1a3cd0;
            case 0x1A3CE4u: goto label_1a3ce4;
            case 0x1A3CF4u: goto label_1a3cf4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A3D00u;
}
