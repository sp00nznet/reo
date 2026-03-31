#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D8A50
// Address: 0x1d8a50 - 0x1d8ab0
void sub_001D8A50_0x1d8a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d8a50u;

    // 0x1d8a50: 0x27bdffe0
    ctx->pc = 0x1d8a50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8a54: 0xffbf0010
    ctx->pc = 0x1d8a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8a58: 0x7fb00000
    ctx->pc = 0x1d8a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d8a5c: 0xc075e38
    ctx->pc = 0x1D8A5Cu;
    SET_GPR_U32(ctx, 31, 0x1D8A64u);
    ctx->pc = 0x1D8A60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A64u; }
    }
    if (ctx->pc != 0x1D8A64u) { return; }
    ctx->pc = 0x1D8A64u;
    // 0x1d8a64: 0x3c050034
    ctx->pc = 0x1d8a64u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d8a68: 0x3c070034
    ctx->pc = 0x1d8a68u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d8a6c: 0x24040024
    ctx->pc = 0x1d8a6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 36));
    // 0x1d8a70: 0x24a57280
    ctx->pc = 0x1d8a70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d8a74: 0x24060020
    ctx->pc = 0x1d8a74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d8a78: 0x24e76280
    ctx->pc = 0x1d8a78u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d8a7c: 0xc075e40
    ctx->pc = 0x1D8A7Cu;
    SET_GPR_U32(ctx, 31, 0x1D8A84u);
    ctx->pc = 0x1D8A80u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 76));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A84u; }
    }
    if (ctx->pc != 0x1D8A84u) { return; }
    ctx->pc = 0x1D8A84u;
    // 0x1d8a84: 0x3c010034
    ctx->pc = 0x1d8a84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d8a88: 0x8c22629c
    ctx->pc = 0x1d8a88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 25244)));
    // 0x1d8a8c: 0xae020000
    ctx->pc = 0x1d8a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d8a90: 0x3c010034
    ctx->pc = 0x1d8a90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d8a94: 0xc075e3c
    ctx->pc = 0x1D8A94u;
    SET_GPR_U32(ctx, 31, 0x1D8A9Cu);
    ctx->pc = 0x1D8A98u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A9Cu; }
    }
    if (ctx->pc != 0x1D8A9Cu) { return; }
    ctx->pc = 0x1D8A9Cu;
    // 0x1d8a9c: 0x200102d
    ctx->pc = 0x1d8a9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8aa0: 0xdfbf0010
    ctx->pc = 0x1d8aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8aa4: 0x7bb00000
    ctx->pc = 0x1d8aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8aa8: 0x3e00008
    ctx->pc = 0x1D8AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8AACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8AB0u;
}
