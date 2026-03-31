#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017D078
// Address: 0x17d078 - 0x17d0c8
void sub_0017D078_0x17d078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d078u;

    // 0x17d078: 0x3c020023
    ctx->pc = 0x17d078u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x17d07c: 0x302d
    ctx->pc = 0x17d07cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d080: 0x2442f2a0
    ctx->pc = 0x17d080u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294963872));
    // 0x17d084: 0x8c450004
    ctx->pc = 0x17d084u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17d088: 0x18a0000c
    ctx->pc = 0x17D088u;
    {
        const bool branch_taken_0x17d088 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x17D08Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 24));
        if (branch_taken_0x17d088) {
            ctx->pc = 0x17D0BCu;
            goto label_17d0bc;
        }
    }
    ctx->pc = 0x17D090u;
    // 0x17d090: 0x40202d
    ctx->pc = 0x17d090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d094: 0x0
    ctx->pc = 0x17d094u;
    // NOP
label_17d098:
    // 0x17d098: 0x8c830000
    ctx->pc = 0x17d098u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17d09c: 0x80102d
    ctx->pc = 0x17d09cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d0a0: 0x10600007
    ctx->pc = 0x17D0A0u;
    {
        const bool branch_taken_0x17d0a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x17D0A4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 144));
        if (branch_taken_0x17d0a0) {
            ctx->pc = 0x17D0C0u;
            goto label_17d0c0;
        }
    }
    ctx->pc = 0x17D0A8u;
    // 0x17d0a8: 0x24c60001
    ctx->pc = 0x17d0a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x17d0ac: 0xc5102a
    ctx->pc = 0x17d0acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 5)));
    // 0x17d0b0: 0x0
    ctx->pc = 0x17d0b0u;
    // NOP
    // 0x17d0b4: 0x1440fff8
    ctx->pc = 0x17D0B4u;
    {
        const bool branch_taken_0x17d0b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17d0b4) {
            ctx->pc = 0x17D098u;
            goto label_17d098;
        }
    }
    ctx->pc = 0x17D0BCu;
label_17d0bc:
    // 0x17d0bc: 0x102d
    ctx->pc = 0x17d0bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d0c0:
    // 0x17d0c0: 0x3e00008
    ctx->pc = 0x17D0C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D098u: goto label_17d098;
            case 0x17D0BCu: goto label_17d0bc;
            case 0x17D0C0u: goto label_17d0c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17D0C8u;
}
