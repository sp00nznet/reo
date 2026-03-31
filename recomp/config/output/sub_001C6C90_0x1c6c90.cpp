#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C6C90
// Address: 0x1c6c90 - 0x1c6d10
void sub_001C6C90_0x1c6c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c6c90u;

    // 0x1c6c90: 0x27bdffe0
    ctx->pc = 0x1c6c90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6c94: 0x3c010033
    ctx->pc = 0x1c6c94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c6c98: 0xffbf0010
    ctx->pc = 0x1c6c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c6c9c: 0x24020005
    ctx->pc = 0x1c6c9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c6ca0: 0x7fb00000
    ctx->pc = 0x1c6ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c6ca4: 0x90235056
    ctx->pc = 0x1c6ca4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20566)));
    // 0x1c6ca8: 0x14620009
    ctx->pc = 0x1C6CA8u;
    {
        const bool branch_taken_0x1c6ca8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1C6CACu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c6ca8) {
            ctx->pc = 0x1C6CD0u;
            goto label_1c6cd0;
        }
    }
    ctx->pc = 0x1C6CB0u;
    // 0x1c6cb0: 0x3c040033
    ctx->pc = 0x1c6cb0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x1c6cb4: 0xc071f28
    ctx->pc = 0x1C6CB4u;
    SET_GPR_U32(ctx, 31, 0x1C6CBCu);
    ctx->pc = 0x1C6CB8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14256));
    ctx->pc = 0x1C7CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7CA0_0x1c7ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6CBCu; }
    }
    if (ctx->pc != 0x1C6CBCu) { return; }
    ctx->pc = 0x1C6CBCu;
    // 0x1c6cbc: 0x284100c9
    ctx->pc = 0x1c6cbcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 201));
    // 0x1c6cc0: 0x14200003
    ctx->pc = 0x1C6CC0u;
    {
        const bool branch_taken_0x1c6cc0 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c6cc0) {
            ctx->pc = 0x1C6CD0u;
            goto label_1c6cd0;
        }
    }
    ctx->pc = 0x1C6CC8u;
    // 0x1c6cc8: 0x1000000b
    ctx->pc = 0x1C6CC8u;
    {
        const bool branch_taken_0x1c6cc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C6CCCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c6cc8) {
            ctx->pc = 0x1C6CF8u;
            goto label_1c6cf8;
        }
    }
    ctx->pc = 0x1C6CD0u;
label_1c6cd0:
    // 0x1c6cd0: 0x3c040033
    ctx->pc = 0x1c6cd0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x1c6cd4: 0xc071f2c
    ctx->pc = 0x1C6CD4u;
    SET_GPR_U32(ctx, 31, 0x1C6CDCu);
    ctx->pc = 0x1C6CD8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14256));
    ctx->pc = 0x1C7CB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7CB0_0x1c7cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6CDCu; }
    }
    if (ctx->pc != 0x1C6CDCu) { return; }
    ctx->pc = 0x1C6CDCu;
    // 0x1c6cdc: 0x26030002
    ctx->pc = 0x1c6cdcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 2));
    // 0x1c6ce0: 0x62082a
    ctx->pc = 0x1c6ce0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x1c6ce4: 0x10200003
    ctx->pc = 0x1C6CE4u;
    {
        const bool branch_taken_0x1c6ce4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c6ce4) {
            ctx->pc = 0x1C6CF4u;
            goto label_1c6cf4;
        }
    }
    ctx->pc = 0x1C6CECu;
    // 0x1c6cec: 0x10000002
    ctx->pc = 0x1C6CECu;
    {
        const bool branch_taken_0x1c6cec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C6CF0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c6cec) {
            ctx->pc = 0x1C6CF8u;
            goto label_1c6cf8;
        }
    }
    ctx->pc = 0x1C6CF4u;
label_1c6cf4:
    // 0x1c6cf4: 0x102d
    ctx->pc = 0x1c6cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6cf8:
    // 0x1c6cf8: 0xdfbf0010
    ctx->pc = 0x1c6cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6cfc: 0x7bb00000
    ctx->pc = 0x1c6cfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6d00: 0x3e00008
    ctx->pc = 0x1C6D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6D04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6CD0u: goto label_1c6cd0;
            case 0x1C6CF4u: goto label_1c6cf4;
            case 0x1C6CF8u: goto label_1c6cf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C6D08u;
    // 0x1c6d08: 0x0
    ctx->pc = 0x1c6d08u;
    // NOP
    // 0x1c6d0c: 0x0
    ctx->pc = 0x1c6d0cu;
    // NOP
}
