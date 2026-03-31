#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012A658
// Address: 0x12a658 - 0x12a6b8
void sub_0012A658_0x12a658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12a658u;

    // 0x12a658: 0x27bdfff0
    ctx->pc = 0x12a658u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12a65c: 0xffb00000
    ctx->pc = 0x12a65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12a660: 0xa0802d
    ctx->pc = 0x12a660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a664: 0xffbf0008
    ctx->pc = 0x12a664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12a668: 0x14800007
    ctx->pc = 0x12A668u;
    {
        const bool branch_taken_0x12a668 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12A66Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 148)));
        if (branch_taken_0x12a668) {
            ctx->pc = 0x12A688u;
            goto label_12a688;
        }
    }
    ctx->pc = 0x12A670u;
    // 0x12a670: 0x3c040024
    ctx->pc = 0x12a670u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x12a674: 0xdfb00000
    ctx->pc = 0x12a674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a678: 0xdfbf0008
    ctx->pc = 0x12a678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12a67c: 0x2484a2f0
    ctx->pc = 0x12a67cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943472));
    // 0x12a680: 0x804a034
    ctx->pc = 0x12A680u;
    ctx->pc = 0x12A684u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1280D0u;
    sub_001280D0_0x1280d0(rdram, ctx, runtime); return;
    ctx->pc = 0x12A688u;
label_12a688:
    // 0x12a688: 0xc04f344
    ctx->pc = 0x12A688u;
    SET_GPR_U32(ctx, 31, 0x12A690u);
    ctx->pc = 0x12A68Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13CD10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CD10_0x13cd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A690u; }
    }
    if (ctx->pc != 0x12A690u) { return; }
    ctx->pc = 0x12A690u;
    // 0x12a690: 0x3c040024
    ctx->pc = 0x12a690u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x12a694: 0x2484a320
    ctx->pc = 0x12a694u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943520));
    // 0x12a698: 0x4410003
    ctx->pc = 0x12A698u;
    {
        const bool branch_taken_0x12a698 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12A69Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12a698) {
            ctx->pc = 0x12A6A8u;
            goto label_12a6a8;
        }
    }
    ctx->pc = 0x12A6A0u;
    // 0x12a6a0: 0xc04a04a
    ctx->pc = 0x12A6A0u;
    SET_GPR_U32(ctx, 31, 0x12A6A8u);
    ctx->pc = 0x128128u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00128128_0x128128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A6A8u; }
    }
    if (ctx->pc != 0x12A6A8u) { return; }
    ctx->pc = 0x12A6A8u;
label_12a6a8:
    // 0x12a6a8: 0xdfb00000
    ctx->pc = 0x12a6a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a6ac: 0xdfbf0008
    ctx->pc = 0x12a6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12a6b0: 0x3e00008
    ctx->pc = 0x12A6B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A6B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A688u: goto label_12a688;
            case 0x12A6A8u: goto label_12a6a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12A6B8u;
}
