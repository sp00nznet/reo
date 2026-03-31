#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B5A50
// Address: 0x1b5a50 - 0x1b5ae0
void sub_001B5A50_0x1b5a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b5a50u;

    // 0x1b5a50: 0x27bdffe0
    ctx->pc = 0x1b5a50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b5a54: 0x3c01002c
    ctx->pc = 0x1b5a54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b5a58: 0xffbf0010
    ctx->pc = 0x1b5a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b5a5c: 0x7fb00000
    ctx->pc = 0x1b5a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b5a60: 0x8c22ab78
    ctx->pc = 0x1b5a60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294945656)));
    // 0x1b5a64: 0x3c10002c
    ctx->pc = 0x1b5a64u;
    SET_GPR_U32(ctx, 16, ((uint32_t)44 << 16));
    // 0x1b5a68: 0x14400004
    ctx->pc = 0x1B5A68u;
    {
        const bool branch_taken_0x1b5a68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B5A6Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294945344));
        if (branch_taken_0x1b5a68) {
            ctx->pc = 0x1B5A7Cu;
            goto label_1b5a7c;
        }
    }
    ctx->pc = 0x1B5A70u;
    // 0x1b5a70: 0x24420001
    ctx->pc = 0x1b5a70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b5a74: 0x3c01002c
    ctx->pc = 0x1b5a74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b5a78: 0xac22ab78
    ctx->pc = 0x1b5a78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945656), GPR_U32(ctx, 2));
label_1b5a7c:
    // 0x1b5a7c: 0x3c010032
    ctx->pc = 0x1b5a7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b5a80: 0x24020002
    ctx->pc = 0x1b5a80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b5a84: 0x902343c3
    ctx->pc = 0x1b5a84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17347)));
    // 0x1b5a88: 0x1062000f
    ctx->pc = 0x1B5A88u;
    {
        const bool branch_taken_0x1b5a88 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1B5A8Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1b5a88) {
            ctx->pc = 0x1B5AC8u;
            goto label_1b5ac8;
        }
    }
    ctx->pc = 0x1B5A90u;
    // 0x1b5a90: 0xc06d59c
    ctx->pc = 0x1B5A90u;
    SET_GPR_U32(ctx, 31, 0x1B5A98u);
    ctx->pc = 0x1B5670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5670_0x1b5670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A98u; }
    }
    if (ctx->pc != 0x1B5A98u) { return; }
    ctx->pc = 0x1B5A98u;
    // 0x1b5a98: 0xc1b7a00
    ctx->pc = 0x1B5A98u;
    SET_GPR_U32(ctx, 31, 0x1B5AA0u);
    ctx->pc = 0x6DE800u;
    {
        auto targetFn = runtime->lookupFunction(0x6DE800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5AA0u; }
        if (ctx->pc != 0x1B5AA0u) { return; }
    }
    ctx->pc = 0x1B5AA0u;
    // 0x1b5aa0: 0x8e05004c
    ctx->pc = 0x1b5aa0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1b5aa4: 0x3c03f000
    ctx->pc = 0x1b5aa4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61440 << 16));
    // 0x1b5aa8: 0x202d
    ctx->pc = 0x1b5aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5aac: 0xaca30000
    ctx->pc = 0x1b5aacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1b5ab0: 0xaca00004
    ctx->pc = 0x1b5ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1b5ab4: 0xaca00008
    ctx->pc = 0x1b5ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1b5ab8: 0xc06d59c
    ctx->pc = 0x1B5AB8u;
    SET_GPR_U32(ctx, 31, 0x1B5AC0u);
    ctx->pc = 0x1B5ABCu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x1B5670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5670_0x1b5670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5AC0u; }
    }
    if (ctx->pc != 0x1B5AC0u) { return; }
    ctx->pc = 0x1B5AC0u;
    // 0x1b5ac0: 0x10000004
    ctx->pc = 0x1B5AC0u;
    {
        const bool branch_taken_0x1b5ac0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B5AC4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1b5ac0) {
            ctx->pc = 0x1B5AD4u;
            goto label_1b5ad4;
        }
    }
    ctx->pc = 0x1B5AC8u;
label_1b5ac8:
    // 0x1b5ac8: 0xc1b7a00
    ctx->pc = 0x1B5AC8u;
    SET_GPR_U32(ctx, 31, 0x1B5AD0u);
    ctx->pc = 0x6DE800u;
    {
        auto targetFn = runtime->lookupFunction(0x6DE800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5AD0u; }
        if (ctx->pc != 0x1B5AD0u) { return; }
    }
    ctx->pc = 0x1B5AD0u;
    // 0x1b5ad0: 0xdfbf0010
    ctx->pc = 0x1b5ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5ad4:
    // 0x1b5ad4: 0x7bb00000
    ctx->pc = 0x1b5ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5ad8: 0x3e00008
    ctx->pc = 0x1B5AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5ADCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B5A7Cu: goto label_1b5a7c;
            case 0x1B5AC8u: goto label_1b5ac8;
            case 0x1B5AD4u: goto label_1b5ad4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B5AE0u;
}
