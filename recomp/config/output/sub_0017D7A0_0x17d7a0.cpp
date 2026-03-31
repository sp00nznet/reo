#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017D7A0
// Address: 0x17d7a0 - 0x17d7f0
void sub_0017D7A0_0x17d7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d7a0u;

    // 0x17d7a0: 0x3c020023
    ctx->pc = 0x17d7a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x17d7a4: 0x302d
    ctx->pc = 0x17d7a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d7a8: 0x2442f748
    ctx->pc = 0x17d7a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965064));
    // 0x17d7ac: 0x8c450008
    ctx->pc = 0x17d7acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17d7b0: 0x18a0000c
    ctx->pc = 0x17D7B0u;
    {
        const bool branch_taken_0x17d7b0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x17D7B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
        if (branch_taken_0x17d7b0) {
            ctx->pc = 0x17D7E4u;
            goto label_17d7e4;
        }
    }
    ctx->pc = 0x17D7B8u;
    // 0x17d7b8: 0x40202d
    ctx->pc = 0x17d7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d7bc: 0x0
    ctx->pc = 0x17d7bcu;
    // NOP
label_17d7c0:
    // 0x17d7c0: 0x8c830000
    ctx->pc = 0x17d7c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17d7c4: 0x80102d
    ctx->pc = 0x17d7c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d7c8: 0x10600007
    ctx->pc = 0x17D7C8u;
    {
        const bool branch_taken_0x17d7c8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x17D7CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 68));
        if (branch_taken_0x17d7c8) {
            ctx->pc = 0x17D7E8u;
            goto label_17d7e8;
        }
    }
    ctx->pc = 0x17D7D0u;
    // 0x17d7d0: 0x24c60001
    ctx->pc = 0x17d7d0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x17d7d4: 0xc5102a
    ctx->pc = 0x17d7d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 5)));
    // 0x17d7d8: 0x0
    ctx->pc = 0x17d7d8u;
    // NOP
    // 0x17d7dc: 0x1440fff8
    ctx->pc = 0x17D7DCu;
    {
        const bool branch_taken_0x17d7dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17d7dc) {
            ctx->pc = 0x17D7C0u;
            goto label_17d7c0;
        }
    }
    ctx->pc = 0x17D7E4u;
label_17d7e4:
    // 0x17d7e4: 0x102d
    ctx->pc = 0x17d7e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d7e8:
    // 0x17d7e8: 0x3e00008
    ctx->pc = 0x17D7E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D7C0u: goto label_17d7c0;
            case 0x17D7E4u: goto label_17d7e4;
            case 0x17D7E8u: goto label_17d7e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17D7F0u;
}
