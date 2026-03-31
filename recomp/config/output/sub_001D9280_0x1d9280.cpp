#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D9280
// Address: 0x1d9280 - 0x1d92e0
void sub_001D9280_0x1d9280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d9280u;

    // 0x1d9280: 0x27bdffe0
    ctx->pc = 0x1d9280u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9284: 0xffbf0010
    ctx->pc = 0x1d9284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d9288: 0x7fb00000
    ctx->pc = 0x1d9288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d928c: 0xc075e38
    ctx->pc = 0x1D928Cu;
    SET_GPR_U32(ctx, 31, 0x1D9294u);
    ctx->pc = 0x1D9290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9294u; }
    }
    if (ctx->pc != 0x1D9294u) { return; }
    ctx->pc = 0x1D9294u;
    // 0x1d9294: 0x3c050034
    ctx->pc = 0x1d9294u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d9298: 0x24060020
    ctx->pc = 0x1d9298u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d929c: 0x3c070034
    ctx->pc = 0x1d929cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d92a0: 0x2404004d
    ctx->pc = 0x1d92a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 77));
    // 0x1d92a4: 0x24a57280
    ctx->pc = 0x1d92a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d92a8: 0x24e76280
    ctx->pc = 0x1d92a8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d92ac: 0xc075e40
    ctx->pc = 0x1D92ACu;
    SET_GPR_U32(ctx, 31, 0x1D92B4u);
    ctx->pc = 0x1D92B0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D92B4u; }
    }
    if (ctx->pc != 0x1D92B4u) { return; }
    ctx->pc = 0x1D92B4u;
    // 0x1d92b4: 0x3c010034
    ctx->pc = 0x1d92b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d92b8: 0x8c226280
    ctx->pc = 0x1d92b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 25216)));
    // 0x1d92bc: 0xae020000
    ctx->pc = 0x1d92bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d92c0: 0x3c010034
    ctx->pc = 0x1d92c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d92c4: 0xc075e3c
    ctx->pc = 0x1D92C4u;
    SET_GPR_U32(ctx, 31, 0x1D92CCu);
    ctx->pc = 0x1D92C8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D92CCu; }
    }
    if (ctx->pc != 0x1D92CCu) { return; }
    ctx->pc = 0x1D92CCu;
    // 0x1d92cc: 0x200102d
    ctx->pc = 0x1d92ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d92d0: 0xdfbf0010
    ctx->pc = 0x1d92d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d92d4: 0x7bb00000
    ctx->pc = 0x1d92d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d92d8: 0x3e00008
    ctx->pc = 0x1D92D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D92DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D92E0u;
}
