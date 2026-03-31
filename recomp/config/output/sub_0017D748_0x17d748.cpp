#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017D748
// Address: 0x17d748 - 0x17d7a0
void sub_0017D748_0x17d748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d748u;

    // 0x17d748: 0x27bdfff0
    ctx->pc = 0x17d748u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d74c: 0xffb00000
    ctx->pc = 0x17d74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d750: 0xffbf0008
    ctx->pc = 0x17d750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17d754: 0xc05f5e8
    ctx->pc = 0x17D754u;
    SET_GPR_U32(ctx, 31, 0x17D75Cu);
    ctx->pc = 0x17D7A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D7A0_0x17d7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D75Cu; }
    }
    if (ctx->pc != 0x17D75Cu) { return; }
    ctx->pc = 0x17D75Cu;
    // 0x17d75c: 0x40802d
    ctx->pc = 0x17d75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d760: 0x1200000b
    ctx->pc = 0x17D760u;
    {
        const bool branch_taken_0x17d760 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x17D764u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17d760) {
            ctx->pc = 0x17D790u;
            goto label_17d790;
        }
    }
    ctx->pc = 0x17D768u;
    // 0x17d768: 0xc05f5fc
    ctx->pc = 0x17D768u;
    SET_GPR_U32(ctx, 31, 0x17D770u);
    ctx->pc = 0x17D7F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D7F0_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D770u; }
    }
    if (ctx->pc != 0x17D770u) { return; }
    ctx->pc = 0x17D770u;
    // 0x17d770: 0x3c030023
    ctx->pc = 0x17d770u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x17d774: 0x2463f748
    ctx->pc = 0x17d774u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965064));
    // 0x17d778: 0x24050001
    ctx->pc = 0x17d778u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d77c: 0x8c640000
    ctx->pc = 0x17d77cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17d780: 0x200102d
    ctx->pc = 0x17d780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d784: 0x24840001
    ctx->pc = 0x17d784u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x17d788: 0xac640000
    ctx->pc = 0x17d788u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x17d78c: 0xae050000
    ctx->pc = 0x17d78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_17d790:
    // 0x17d790: 0xdfb00000
    ctx->pc = 0x17d790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d794: 0xdfbf0008
    ctx->pc = 0x17d794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d798: 0x3e00008
    ctx->pc = 0x17D798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D79Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D790u: goto label_17d790;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17D7A0u;
}
