#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D8C90
// Address: 0x1d8c90 - 0x1d8ce0
void sub_001D8C90_0x1d8c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d8c90u;

    // 0x1d8c90: 0x27bdffe0
    ctx->pc = 0x1d8c90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8c94: 0xffbf0010
    ctx->pc = 0x1d8c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8c98: 0xc075e38
    ctx->pc = 0x1D8C98u;
    SET_GPR_U32(ctx, 31, 0x1D8CA0u);
    ctx->pc = 0x1D8C9Cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CA0u; }
    }
    if (ctx->pc != 0x1D8CA0u) { return; }
    ctx->pc = 0x1D8CA0u;
    // 0x1d8ca0: 0x3c050034
    ctx->pc = 0x1d8ca0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d8ca4: 0x24060020
    ctx->pc = 0x1d8ca4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d8ca8: 0x3c070034
    ctx->pc = 0x1d8ca8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d8cac: 0x2404002a
    ctx->pc = 0x1d8cacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 42));
    // 0x1d8cb0: 0x24a57280
    ctx->pc = 0x1d8cb0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d8cb4: 0x24e76280
    ctx->pc = 0x1d8cb4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d8cb8: 0xc075e40
    ctx->pc = 0x1D8CB8u;
    SET_GPR_U32(ctx, 31, 0x1D8CC0u);
    ctx->pc = 0x1D8CBCu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CC0u; }
    }
    if (ctx->pc != 0x1D8CC0u) { return; }
    ctx->pc = 0x1D8CC0u;
    // 0x1d8cc0: 0x3c010034
    ctx->pc = 0x1d8cc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d8cc4: 0xc075e3c
    ctx->pc = 0x1D8CC4u;
    SET_GPR_U32(ctx, 31, 0x1D8CCCu);
    ctx->pc = 0x1D8CC8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CCCu; }
    }
    if (ctx->pc != 0x1D8CCCu) { return; }
    ctx->pc = 0x1D8CCCu;
    // 0x1d8ccc: 0x200102d
    ctx->pc = 0x1d8cccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8cd0: 0xdfbf0010
    ctx->pc = 0x1d8cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8cd4: 0x7bb00000
    ctx->pc = 0x1d8cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8cd8: 0x3e00008
    ctx->pc = 0x1D8CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8CDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8CE0u;
}
