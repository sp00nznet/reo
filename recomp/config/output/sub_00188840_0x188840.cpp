#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00188840
// Address: 0x188840 - 0x188880
void sub_00188840_0x188840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x188840u;

    // 0x188840: 0x410c0
    ctx->pc = 0x188840u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 3));
    // 0x188844: 0x27bdfff0
    ctx->pc = 0x188844u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x188848: 0x441023
    ctx->pc = 0x188848u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18884c: 0xffbf0000
    ctx->pc = 0x18884cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x188850: 0x21080
    ctx->pc = 0x188850u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x188854: 0x3c040029
    ctx->pc = 0x188854u;
    SET_GPR_U32(ctx, 4, ((uint32_t)41 << 16));
    // 0x188858: 0x822021
    ctx->pc = 0x188858u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18885c: 0x8c84b8cc
    ctx->pc = 0x18885cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4294949068)));
    // 0x188860: 0xc0623b6
    ctx->pc = 0x188860u;
    SET_GPR_U32(ctx, 31, 0x188868u);
    ctx->pc = 0x188ED8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00188ED8_0x188ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188868u; }
    }
    if (ctx->pc != 0x188868u) { return; }
    ctx->pc = 0x188868u;
    // 0x188868: 0x38420003
    ctx->pc = 0x188868u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 3));
    // 0x18886c: 0xdfbf0000
    ctx->pc = 0x18886cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188870: 0x2102b
    ctx->pc = 0x188870u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x188874: 0x3e00008
    ctx->pc = 0x188874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188878u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18887Cu;
    // 0x18887c: 0x0
    ctx->pc = 0x18887cu;
    // NOP
}
