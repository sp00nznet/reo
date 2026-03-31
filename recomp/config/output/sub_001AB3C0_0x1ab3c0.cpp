#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AB3C0
// Address: 0x1ab3c0 - 0x1ab450
void sub_001AB3C0_0x1ab3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ab3c0u;

    // 0x1ab3c0: 0x27bdffc0
    ctx->pc = 0x1ab3c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ab3c4: 0xffbf0030
    ctx->pc = 0x1ab3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ab3c8: 0x7fb20020
    ctx->pc = 0x1ab3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ab3cc: 0x7fb10010
    ctx->pc = 0x1ab3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ab3d0: 0x7fb00000
    ctx->pc = 0x1ab3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ab3d4: 0x882d
    ctx->pc = 0x1ab3d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab3d8: 0x3c10002b
    ctx->pc = 0x1ab3d8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)43 << 16));
    // 0x1ab3dc: 0x261016c0
    ctx->pc = 0x1ab3dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 5824));
label_1ab3e0:
    // 0x1ab3e0: 0x3c020023
    ctx->pc = 0x1ab3e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1ab3e4: 0x119080
    ctx->pc = 0x1ab3e4u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 17), 2));
    // 0x1ab3e8: 0x24423e58
    ctx->pc = 0x1ab3e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15960));
    // 0x1ab3ec: 0x200282d
    ctx->pc = 0x1ab3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab3f0: 0x521021
    ctx->pc = 0x1ab3f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ab3f4: 0x220302d
    ctx->pc = 0x1ab3f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab3f8: 0x8c440000
    ctx->pc = 0x1ab3f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ab3fc: 0xc06a6b0
    ctx->pc = 0x1AB3FCu;
    SET_GPR_U32(ctx, 31, 0x1AB404u);
    ctx->pc = 0x1AB400u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A9AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9AC0_0x1a9ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB404u; }
    }
    if (ctx->pc != 0x1AB404u) { return; }
    ctx->pc = 0x1AB404u;
    // 0x1ab404: 0x3c030023
    ctx->pc = 0x1ab404u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1ab408: 0x2404fffc
    ctx->pc = 0x1ab408u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1ab40c: 0x24633e60
    ctx->pc = 0x1ab40cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15968));
    // 0x1ab410: 0x26310001
    ctx->pc = 0x1ab410u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ab414: 0x721821
    ctx->pc = 0x1ab414u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1ab418: 0x8c650000
    ctx->pc = 0x1ab418u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ab41c: 0x24a50001
    ctx->pc = 0x1ab41cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ab420: 0x2a230002
    ctx->pc = 0x1ab420u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 2));
    // 0x1ab424: 0x52880
    ctx->pc = 0x1ab424u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ab428: 0x24a5011c
    ctx->pc = 0x1ab428u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 284));
    // 0x1ab42c: 0xa42024
    ctx->pc = 0x1ab42cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1ab430: 0x1460ffeb
    ctx->pc = 0x1AB430u;
    {
        const bool branch_taken_0x1ab430 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AB434u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        if (branch_taken_0x1ab430) {
            ctx->pc = 0x1AB3E0u;
            goto label_1ab3e0;
        }
    }
    ctx->pc = 0x1AB438u;
    // 0x1ab438: 0xdfbf0030
    ctx->pc = 0x1ab438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ab43c: 0x7bb20020
    ctx->pc = 0x1ab43cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab440: 0x7bb10010
    ctx->pc = 0x1ab440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab444: 0x7bb00000
    ctx->pc = 0x1ab444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab448: 0x3e00008
    ctx->pc = 0x1AB448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB44Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AB3E0u: goto label_1ab3e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB450u;
}
