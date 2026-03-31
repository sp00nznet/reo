#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001674A0
// Address: 0x1674a0 - 0x167508
void sub_001674A0_0x1674a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1674a0u;

    // 0x1674a0: 0x510c0
    ctx->pc = 0x1674a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1674a4: 0x27bdffd0
    ctx->pc = 0x1674a4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1674a8: 0x451023
    ctx->pc = 0x1674a8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1674ac: 0xffb00010
    ctx->pc = 0x1674acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1674b0: 0x21080
    ctx->pc = 0x1674b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1674b4: 0xffb10018
    ctx->pc = 0x1674b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1674b8: 0x451021
    ctx->pc = 0x1674b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1674bc: 0xffb20020
    ctx->pc = 0x1674bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1674c0: 0x21080
    ctx->pc = 0x1674c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1674c4: 0xe0882d
    ctx->pc = 0x1674c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674c8: 0x828021
    ctx->pc = 0x1674c8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1674cc: 0x3a0202d
    ctx->pc = 0x1674ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674d0: 0xc0902d
    ctx->pc = 0x1674d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674d4: 0xffbf0028
    ctx->pc = 0x1674d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1674d8: 0xc05a7b2
    ctx->pc = 0x1674D8u;
    SET_GPR_U32(ctx, 31, 0x1674E0u);
    ctx->pc = 0x1674DCu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4456));
    ctx->pc = 0x169EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EC8_0x169ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1674E0u; }
    }
    if (ctx->pc != 0x1674E0u) { return; }
    ctx->pc = 0x1674E0u;
    // 0x1674e0: 0xae110004
    ctx->pc = 0x1674e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x1674e4: 0x3a0202d
    ctx->pc = 0x1674e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674e8: 0xc05a7b8
    ctx->pc = 0x1674E8u;
    SET_GPR_U32(ctx, 31, 0x1674F0u);
    ctx->pc = 0x1674ECu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    ctx->pc = 0x169EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EE0_0x169ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1674F0u; }
    }
    if (ctx->pc != 0x1674F0u) { return; }
    ctx->pc = 0x1674F0u;
    // 0x1674f0: 0xdfb00010
    ctx->pc = 0x1674f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1674f4: 0xdfb10018
    ctx->pc = 0x1674f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1674f8: 0xdfb20020
    ctx->pc = 0x1674f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1674fc: 0xdfbf0028
    ctx->pc = 0x1674fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x167500: 0x3e00008
    ctx->pc = 0x167500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167504u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167508u;
}
