#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B93D0
// Address: 0x1b93d0 - 0x1b94b0
void sub_001B93D0_0x1b93d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b93d0u;

    // 0x1b93d0: 0x27bdff90
    ctx->pc = 0x1b93d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b93d4: 0x24020001
    ctx->pc = 0x1b93d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b93d8: 0xffbf0050
    ctx->pc = 0x1b93d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b93dc: 0x7fb40040
    ctx->pc = 0x1b93dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b93e0: 0x7fb30030
    ctx->pc = 0x1b93e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b93e4: 0x80a02d
    ctx->pc = 0x1b93e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b93e8: 0x7fb20020
    ctx->pc = 0x1b93e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b93ec: 0xa0982d
    ctx->pc = 0x1b93ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b93f0: 0x7fb10010
    ctx->pc = 0x1b93f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b93f4: 0xc0902d
    ctx->pc = 0x1b93f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b93f8: 0x7fb00000
    ctx->pc = 0x1b93f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b93fc: 0x120882d
    ctx->pc = 0x1b93fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9400: 0x15020002
    ctx->pc = 0x1B9400u;
    {
        const bool branch_taken_0x1b9400 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 2));
        ctx->pc = 0x1B9404u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b9400) {
            ctx->pc = 0x1B940Cu;
            goto label_1b940c;
        }
    }
    ctx->pc = 0x1B9408u;
    // 0x1b9408: 0x40402d
    ctx->pc = 0x1b9408u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b940c:
    // 0x1b940c: 0x3c020023
    ctx->pc = 0x1b940cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1b9410: 0xe0202d
    ctx->pc = 0x1b9410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9414: 0x81880
    ctx->pc = 0x1b9414u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
    // 0x1b9418: 0x24424bf0
    ctx->pc = 0x1b9418u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19440));
    // 0x1b941c: 0x431021
    ctx->pc = 0x1b941cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b9420: 0x27a60068
    ctx->pc = 0x1b9420u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 104));
    // 0x1b9424: 0x8c450000
    ctx->pc = 0x1b9424u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9428: 0xc06e52c
    ctx->pc = 0x1B9428u;
    SET_GPR_U32(ctx, 31, 0x1B9430u);
    ctx->pc = 0x1B942Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 108));
    ctx->pc = 0x1B94B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B94B0_0x1b94b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9430u; }
    }
    if (ctx->pc != 0x1B9430u) { return; }
    ctx->pc = 0x1B9430u;
    // 0x1b9430: 0x10400014
    ctx->pc = 0x1B9430u;
    {
        const bool branch_taken_0x1b9430 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b9430) {
            ctx->pc = 0x1B9484u;
            goto label_1b9484;
        }
    }
    ctx->pc = 0x1B9438u;
    // 0x1b9438: 0x1620000b
    ctx->pc = 0x1B9438u;
    {
        const bool branch_taken_0x1b9438 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b9438) {
            ctx->pc = 0x1B9468u;
            goto label_1b9468;
        }
    }
    ctx->pc = 0x1B9440u;
    // 0x1b9440: 0x8fa70068
    ctx->pc = 0x1b9440u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9444: 0x280202d
    ctx->pc = 0x1b9444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9448: 0x8fa8006c
    ctx->pc = 0x1b9448u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1b944c: 0x260282d
    ctx->pc = 0x1b944cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9450: 0x240302d
    ctx->pc = 0x1b9450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9454: 0x200502d
    ctx->pc = 0x1b9454u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9458: 0xc06b1fc
    ctx->pc = 0x1B9458u;
    SET_GPR_U32(ctx, 31, 0x1B9460u);
    ctx->pc = 0x1B945Cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1AC7F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC7F0_0x1ac7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9460u; }
    }
    if (ctx->pc != 0x1B9460u) { return; }
    ctx->pc = 0x1B9460u;
    // 0x1b9460: 0x10000009
    ctx->pc = 0x1B9460u;
    {
        const bool branch_taken_0x1b9460 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B9464u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x1b9460) {
            ctx->pc = 0x1B9488u;
            goto label_1b9488;
        }
    }
    ctx->pc = 0x1B9468u;
label_1b9468:
    // 0x1b9468: 0x8fa70068
    ctx->pc = 0x1b9468u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b946c: 0x280202d
    ctx->pc = 0x1b946cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9470: 0x8fa8006c
    ctx->pc = 0x1b9470u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1b9474: 0x260282d
    ctx->pc = 0x1b9474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9478: 0x240302d
    ctx->pc = 0x1b9478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b947c: 0xc06b2d8
    ctx->pc = 0x1B947Cu;
    SET_GPR_U32(ctx, 31, 0x1B9484u);
    ctx->pc = 0x1B9480u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 8192));
    ctx->pc = 0x1ACB60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ACB60_0x1acb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9484u; }
    }
    if (ctx->pc != 0x1B9484u) { return; }
    ctx->pc = 0x1B9484u;
label_1b9484:
    // 0x1b9484: 0xdfbf0050
    ctx->pc = 0x1b9484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b9488:
    // 0x1b9488: 0x7bb40040
    ctx->pc = 0x1b9488u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b948c: 0x7bb30030
    ctx->pc = 0x1b948cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b9490: 0x7bb20020
    ctx->pc = 0x1b9490u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9494: 0x7bb10010
    ctx->pc = 0x1b9494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9498: 0x7bb00000
    ctx->pc = 0x1b9498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b949c: 0x3e00008
    ctx->pc = 0x1B949Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B94A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B940Cu: goto label_1b940c;
            case 0x1B9468u: goto label_1b9468;
            case 0x1B9484u: goto label_1b9484;
            case 0x1B9488u: goto label_1b9488;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B94A4u;
    // 0x1b94a4: 0x0
    ctx->pc = 0x1b94a4u;
    // NOP
    // 0x1b94a8: 0x0
    ctx->pc = 0x1b94a8u;
    // NOP
    // 0x1b94ac: 0x0
    ctx->pc = 0x1b94acu;
    // NOP
}
