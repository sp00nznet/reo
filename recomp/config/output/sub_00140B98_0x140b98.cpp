#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00140B98
// Address: 0x140b98 - 0x140bf0
void sub_00140B98_0x140b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x140b98u;

    // 0x140b98: 0x27bdfff0
    ctx->pc = 0x140b98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x140b9c: 0x3c020026
    ctx->pc = 0x140b9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x140ba0: 0xffb00000
    ctx->pc = 0x140ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x140ba4: 0x3c100026
    ctx->pc = 0x140ba4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
    // 0x140ba8: 0x24424600
    ctx->pc = 0x140ba8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17920));
    // 0x140bac: 0xffbf0008
    ctx->pc = 0x140bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x140bb0: 0x26104700
    ctx->pc = 0x140bb0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 18176));
    // 0x140bb4: 0xac440000
    ctx->pc = 0x140bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x140bb8: 0xac450004
    ctx->pc = 0x140bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x140bbc: 0x40282d
    ctx->pc = 0x140bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140bc0: 0xac460008
    ctx->pc = 0x140bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x140bc4: 0x24060003
    ctx->pc = 0x140bc4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x140bc8: 0x200382d
    ctx->pc = 0x140bc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140bcc: 0x24040022
    ctx->pc = 0x140bccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 34));
    // 0x140bd0: 0xc04e518
    ctx->pc = 0x140BD0u;
    SET_GPR_U32(ctx, 31, 0x140BD8u);
    ctx->pc = 0x140BD4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x139460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139460_0x139460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140BD8u; }
    }
    if (ctx->pc != 0x140BD8u) { return; }
    ctx->pc = 0x140BD8u;
    // 0x140bd8: 0x8e020000
    ctx->pc = 0x140bd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x140bdc: 0xdfbf0008
    ctx->pc = 0x140bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x140be0: 0xdfb00000
    ctx->pc = 0x140be0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140be4: 0x3e00008
    ctx->pc = 0x140BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140BE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x140BECu;
    // 0x140bec: 0x0
    ctx->pc = 0x140becu;
    // NOP
}
