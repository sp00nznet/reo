#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D79E0
// Address: 0x1d79e0 - 0x1d7a30
void sub_001D79E0_0x1d79e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d79e0u;

    // 0x1d79e0: 0x27bdffe0
    ctx->pc = 0x1d79e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d79e4: 0xffbf0010
    ctx->pc = 0x1d79e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d79e8: 0xc075e38
    ctx->pc = 0x1D79E8u;
    SET_GPR_U32(ctx, 31, 0x1D79F0u);
    ctx->pc = 0x1D79ECu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D79F0u; }
    }
    if (ctx->pc != 0x1D79F0u) { return; }
    ctx->pc = 0x1D79F0u;
    // 0x1d79f0: 0x3c050034
    ctx->pc = 0x1d79f0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d79f4: 0x24060020
    ctx->pc = 0x1d79f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d79f8: 0x3c070034
    ctx->pc = 0x1d79f8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d79fc: 0x24040006
    ctx->pc = 0x1d79fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d7a00: 0x24a57280
    ctx->pc = 0x1d7a00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d7a04: 0x24e76280
    ctx->pc = 0x1d7a04u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d7a08: 0xc075e40
    ctx->pc = 0x1D7A08u;
    SET_GPR_U32(ctx, 31, 0x1D7A10u);
    ctx->pc = 0x1D7A0Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A10u; }
    }
    if (ctx->pc != 0x1D7A10u) { return; }
    ctx->pc = 0x1D7A10u;
    // 0x1d7a10: 0x3c010034
    ctx->pc = 0x1d7a10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d7a14: 0xc075e3c
    ctx->pc = 0x1D7A14u;
    SET_GPR_U32(ctx, 31, 0x1D7A1Cu);
    ctx->pc = 0x1D7A18u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A1Cu; }
    }
    if (ctx->pc != 0x1D7A1Cu) { return; }
    ctx->pc = 0x1D7A1Cu;
    // 0x1d7a1c: 0x200102d
    ctx->pc = 0x1d7a1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a20: 0xdfbf0010
    ctx->pc = 0x1d7a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7a24: 0x7bb00000
    ctx->pc = 0x1d7a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7a28: 0x3e00008
    ctx->pc = 0x1D7A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7A2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7A30u;
}
