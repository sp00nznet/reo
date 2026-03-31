#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F47E0
// Address: 0x1f47e0 - 0x1f4830
void sub_001F47E0_0x1f47e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f47e0u;

    // 0x1f47e0: 0x27bdffd0
    ctx->pc = 0x1f47e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f47e4: 0x24060001
    ctx->pc = 0x1f47e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f47e8: 0xffbf0010
    ctx->pc = 0x1f47e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f47ec: 0x7fb00000
    ctx->pc = 0x1f47ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f47f0: 0x94830034
    ctx->pc = 0x1f47f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1f47f4: 0x80802d
    ctx->pc = 0x1f47f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f47f8: 0x8c820028
    ctx->pc = 0x1f47f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1f47fc: 0x432821
    ctx->pc = 0x1f47fcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f4800: 0xc041eac
    ctx->pc = 0x1F4800u;
    SET_GPR_U32(ctx, 31, 0x1F4808u);
    ctx->pc = 0x1F4804u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 47));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4808u; }
    }
    if (ctx->pc != 0x1F4808u) { return; }
    ctx->pc = 0x1F4808u;
    // 0x1f4808: 0x96020034
    ctx->pc = 0x1f4808u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1f480c: 0x24420001
    ctx->pc = 0x1f480cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f4810: 0xa6020034
    ctx->pc = 0x1f4810u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f4814: 0x93a2002f
    ctx->pc = 0x1f4814u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 47)));
    // 0x1f4818: 0xdfbf0010
    ctx->pc = 0x1f4818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f481c: 0x7bb00000
    ctx->pc = 0x1f481cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4820: 0x3e00008
    ctx->pc = 0x1F4820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4824u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4828u;
    // 0x1f4828: 0x0
    ctx->pc = 0x1f4828u;
    // NOP
    // 0x1f482c: 0x0
    ctx->pc = 0x1f482cu;
    // NOP
}
