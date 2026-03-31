#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017A680
// Address: 0x17a680 - 0x17a6d8
void sub_0017A680_0x17a680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17a680u;

    // 0x17a680: 0x27bdfff0
    ctx->pc = 0x17a680u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a684: 0xffb00000
    ctx->pc = 0x17a684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a688: 0xffbf0008
    ctx->pc = 0x17a688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17a68c: 0xc05e9b6
    ctx->pc = 0x17A68Cu;
    SET_GPR_U32(ctx, 31, 0x17A694u);
    ctx->pc = 0x17A6D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A6D8_0x17a6d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A694u; }
    }
    if (ctx->pc != 0x17A694u) { return; }
    ctx->pc = 0x17A694u;
    // 0x17a694: 0x40802d
    ctx->pc = 0x17a694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a698: 0x1200000b
    ctx->pc = 0x17A698u;
    {
        const bool branch_taken_0x17a698 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A69Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17a698) {
            ctx->pc = 0x17A6C8u;
            goto label_17a6c8;
        }
    }
    ctx->pc = 0x17A6A0u;
    // 0x17a6a0: 0xc05e9ca
    ctx->pc = 0x17A6A0u;
    SET_GPR_U32(ctx, 31, 0x17A6A8u);
    ctx->pc = 0x17A728u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A728_0x17a728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A6A8u; }
    }
    if (ctx->pc != 0x17A6A8u) { return; }
    ctx->pc = 0x17A6A8u;
    // 0x17a6a8: 0x3c030023
    ctx->pc = 0x17a6a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x17a6ac: 0x2463f1f0
    ctx->pc = 0x17a6acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294963696));
    // 0x17a6b0: 0x24050001
    ctx->pc = 0x17a6b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a6b4: 0x8c640000
    ctx->pc = 0x17a6b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17a6b8: 0x200102d
    ctx->pc = 0x17a6b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a6bc: 0x24840001
    ctx->pc = 0x17a6bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x17a6c0: 0xac640000
    ctx->pc = 0x17a6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x17a6c4: 0xae050000
    ctx->pc = 0x17a6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_17a6c8:
    // 0x17a6c8: 0xdfb00000
    ctx->pc = 0x17a6c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a6cc: 0xdfbf0008
    ctx->pc = 0x17a6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a6d0: 0x3e00008
    ctx->pc = 0x17A6D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A6D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A6C8u: goto label_17a6c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A6D8u;
}
