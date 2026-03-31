#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D8B90
// Address: 0x1d8b90 - 0x1d8be0
void sub_001D8B90_0x1d8b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d8b90u;

    // 0x1d8b90: 0x27bdffe0
    ctx->pc = 0x1d8b90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8b94: 0xffbf0010
    ctx->pc = 0x1d8b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8b98: 0xc075e38
    ctx->pc = 0x1D8B98u;
    SET_GPR_U32(ctx, 31, 0x1D8BA0u);
    ctx->pc = 0x1D8B9Cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BA0u; }
    }
    if (ctx->pc != 0x1D8BA0u) { return; }
    ctx->pc = 0x1D8BA0u;
    // 0x1d8ba0: 0x3c050034
    ctx->pc = 0x1d8ba0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d8ba4: 0x24060020
    ctx->pc = 0x1d8ba4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d8ba8: 0x3c070034
    ctx->pc = 0x1d8ba8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d8bac: 0x24040028
    ctx->pc = 0x1d8bacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 40));
    // 0x1d8bb0: 0x24a57280
    ctx->pc = 0x1d8bb0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d8bb4: 0x24e76280
    ctx->pc = 0x1d8bb4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d8bb8: 0xc075e40
    ctx->pc = 0x1D8BB8u;
    SET_GPR_U32(ctx, 31, 0x1D8BC0u);
    ctx->pc = 0x1D8BBCu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BC0u; }
    }
    if (ctx->pc != 0x1D8BC0u) { return; }
    ctx->pc = 0x1D8BC0u;
    // 0x1d8bc0: 0x3c010034
    ctx->pc = 0x1d8bc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d8bc4: 0xc075e3c
    ctx->pc = 0x1D8BC4u;
    SET_GPR_U32(ctx, 31, 0x1D8BCCu);
    ctx->pc = 0x1D8BC8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BCCu; }
    }
    if (ctx->pc != 0x1D8BCCu) { return; }
    ctx->pc = 0x1D8BCCu;
    // 0x1d8bcc: 0x200102d
    ctx->pc = 0x1d8bccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8bd0: 0xdfbf0010
    ctx->pc = 0x1d8bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8bd4: 0x7bb00000
    ctx->pc = 0x1d8bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8bd8: 0x3e00008
    ctx->pc = 0x1D8BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8BDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8BE0u;
}
