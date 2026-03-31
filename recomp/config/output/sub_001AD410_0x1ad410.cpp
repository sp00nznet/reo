#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AD410
// Address: 0x1ad410 - 0x1ad4b0
void sub_001AD410_0x1ad410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ad410u;

    // 0x1ad410: 0x27bdffb0
    ctx->pc = 0x1ad410u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ad414: 0x3c010032
    ctx->pc = 0x1ad414u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1ad418: 0xffbf0040
    ctx->pc = 0x1ad418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ad41c: 0x7fb30030
    ctx->pc = 0x1ad41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ad420: 0x7fb20020
    ctx->pc = 0x1ad420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ad424: 0x80982d
    ctx->pc = 0x1ad424u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad428: 0x7fb10010
    ctx->pc = 0x1ad428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ad42c: 0xa0902d
    ctx->pc = 0x1ad42cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad430: 0x7fb00000
    ctx->pc = 0x1ad430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ad434: 0xc0882d
    ctx->pc = 0x1ad434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad438: 0x8c30440c
    ctx->pc = 0x1ad438u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x1ad43c: 0x282d
    ctx->pc = 0x1ad43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad440: 0x24060040
    ctx->pc = 0x1ad440u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ad444: 0xc041f1a
    ctx->pc = 0x1AD444u;
    SET_GPR_U32(ctx, 31, 0x1AD44Cu);
    ctx->pc = 0x1AD448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD44Cu; }
    }
    if (ctx->pc != 0x1AD44Cu) { return; }
    ctx->pc = 0x1AD44Cu;
    // 0x1ad44c: 0x24020040
    ctx->pc = 0x1ad44cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ad450: 0x26040040
    ctx->pc = 0x1ad450u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
    // 0x1ad454: 0xae020018
    ctx->pc = 0x1ad454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1ad458: 0x260282d
    ctx->pc = 0x1ad458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad45c: 0x240302d
    ctx->pc = 0x1ad45cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad460: 0xc041eac
    ctx->pc = 0x1AD460u;
    SET_GPR_U32(ctx, 31, 0x1AD468u);
    ctx->pc = 0x1AD464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD468u; }
    }
    if (ctx->pc != 0x1AD468u) { return; }
    ctx->pc = 0x1AD468u;
    // 0x1ad468: 0x26020040
    ctx->pc = 0x1ad468u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 64));
    // 0x1ad46c: 0x2722821
    ctx->pc = 0x1ad46cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1ad470: 0x521821
    ctx->pc = 0x1ad470u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ad474: 0x220302d
    ctx->pc = 0x1ad474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad478: 0x2402ffc0
    ctx->pc = 0x1ad478u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1ad47c: 0x2463003f
    ctx->pc = 0x1ad47cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 63));
    // 0x1ad480: 0x622024
    ctx->pc = 0x1ad480u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ad484: 0x901023
    ctx->pc = 0x1ad484u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1ad488: 0xae020020
    ctx->pc = 0x1ad488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1ad48c: 0xc041eac
    ctx->pc = 0x1AD48Cu;
    SET_GPR_U32(ctx, 31, 0x1AD494u);
    ctx->pc = 0x1AD490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD494u; }
    }
    if (ctx->pc != 0x1AD494u) { return; }
    ctx->pc = 0x1AD494u;
    // 0x1ad494: 0xdfbf0040
    ctx->pc = 0x1ad494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad498: 0x7bb30030
    ctx->pc = 0x1ad498u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ad49c: 0x7bb20020
    ctx->pc = 0x1ad49cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad4a0: 0x7bb10010
    ctx->pc = 0x1ad4a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad4a4: 0x7bb00000
    ctx->pc = 0x1ad4a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad4a8: 0x3e00008
    ctx->pc = 0x1AD4A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD4ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AD4B0u;
}
