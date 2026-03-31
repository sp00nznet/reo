#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D8D30
// Address: 0x1d8d30 - 0x1d8d80
void sub_001D8D30_0x1d8d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d8d30u;

    // 0x1d8d30: 0x27bdffe0
    ctx->pc = 0x1d8d30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8d34: 0xffbf0010
    ctx->pc = 0x1d8d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8d38: 0xc075e38
    ctx->pc = 0x1D8D38u;
    SET_GPR_U32(ctx, 31, 0x1D8D40u);
    ctx->pc = 0x1D8D3Cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D40u; }
    }
    if (ctx->pc != 0x1D8D40u) { return; }
    ctx->pc = 0x1D8D40u;
    // 0x1d8d40: 0x3c050034
    ctx->pc = 0x1d8d40u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d8d44: 0x24060020
    ctx->pc = 0x1d8d44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d8d48: 0x3c070034
    ctx->pc = 0x1d8d48u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d8d4c: 0x2404002c
    ctx->pc = 0x1d8d4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 44));
    // 0x1d8d50: 0x24a57280
    ctx->pc = 0x1d8d50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d8d54: 0x24e76280
    ctx->pc = 0x1d8d54u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d8d58: 0xc075e40
    ctx->pc = 0x1D8D58u;
    SET_GPR_U32(ctx, 31, 0x1D8D60u);
    ctx->pc = 0x1D8D5Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D60u; }
    }
    if (ctx->pc != 0x1D8D60u) { return; }
    ctx->pc = 0x1D8D60u;
    // 0x1d8d60: 0x3c010034
    ctx->pc = 0x1d8d60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d8d64: 0xc075e3c
    ctx->pc = 0x1D8D64u;
    SET_GPR_U32(ctx, 31, 0x1D8D6Cu);
    ctx->pc = 0x1D8D68u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D6Cu; }
    }
    if (ctx->pc != 0x1D8D6Cu) { return; }
    ctx->pc = 0x1D8D6Cu;
    // 0x1d8d6c: 0x200102d
    ctx->pc = 0x1d8d6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8d70: 0xdfbf0010
    ctx->pc = 0x1d8d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8d74: 0x7bb00000
    ctx->pc = 0x1d8d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8d78: 0x3e00008
    ctx->pc = 0x1D8D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8D7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8D80u;
}
