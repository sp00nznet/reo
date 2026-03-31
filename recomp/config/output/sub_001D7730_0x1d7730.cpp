#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7730
// Address: 0x1d7730 - 0x1d77b0
void sub_001D7730_0x1d7730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7730u;

    // 0x1d7730: 0x27bdffd0
    ctx->pc = 0x1d7730u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d7734: 0x3c010034
    ctx->pc = 0x1d7734u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d7738: 0xffbf0020
    ctx->pc = 0x1d7738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d773c: 0x7fb10010
    ctx->pc = 0x1d773cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d7740: 0x7fb00000
    ctx->pc = 0x1d7740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d7744: 0x80882d
    ctx->pc = 0x1d7744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7748: 0xa02045d8
    ctx->pc = 0x1d7748u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17880), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d774c: 0xa0802d
    ctx->pc = 0x1d774cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7750: 0x3c040034
    ctx->pc = 0x1d7750u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1d7754: 0x3c010034
    ctx->pc = 0x1d7754u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d7758: 0x24844610
    ctx->pc = 0x1d7758u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17936));
    // 0x1d775c: 0x24050004
    ctx->pc = 0x1d775cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d7760: 0xc0764b8
    ctx->pc = 0x1D7760u;
    SET_GPR_U32(ctx, 31, 0x1D7768u);
    ctx->pc = 0x1D7764u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17888), GPR_U32(ctx, 0));
    ctx->pc = 0x1D92E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D92E0_0x1d92e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7768u; }
    }
    if (ctx->pc != 0x1D7768u) { return; }
    ctx->pc = 0x1D7768u;
    // 0x1d7768: 0x111980
    ctx->pc = 0x1d7768u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 6));
    // 0x1d776c: 0x2143c
    ctx->pc = 0x1d776cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d7770: 0x712821
    ctx->pc = 0x1d7770u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d7774: 0x2143f
    ctx->pc = 0x1d7774u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d7778: 0x52080
    ctx->pc = 0x1d7778u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d777c: 0x3c030034
    ctx->pc = 0x1d777cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x1d7780: 0x852023
    ctx->pc = 0x1d7780u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d7784: 0x24634610
    ctx->pc = 0x1d7784u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 17936));
    // 0x1d7788: 0x42080
    ctx->pc = 0x1d7788u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d778c: 0x641821
    ctx->pc = 0x1d778cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d7790: 0x8c630000
    ctx->pc = 0x1d7790u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d7794: 0xae030000
    ctx->pc = 0x1d7794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d7798: 0xdfbf0020
    ctx->pc = 0x1d7798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d779c: 0x7bb10010
    ctx->pc = 0x1d779cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d77a0: 0x7bb00000
    ctx->pc = 0x1d77a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d77a4: 0x3e00008
    ctx->pc = 0x1D77A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D77A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D77ACu;
    // 0x1d77ac: 0x0
    ctx->pc = 0x1d77acu;
    // NOP
}
