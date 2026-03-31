#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D90E0
// Address: 0x1d90e0 - 0x1d9130
void sub_001D90E0_0x1d90e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d90e0u;

    // 0x1d90e0: 0x27bdffe0
    ctx->pc = 0x1d90e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d90e4: 0xffbf0010
    ctx->pc = 0x1d90e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d90e8: 0xc075e38
    ctx->pc = 0x1D90E8u;
    SET_GPR_U32(ctx, 31, 0x1D90F0u);
    ctx->pc = 0x1D90ECu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D90F0u; }
    }
    if (ctx->pc != 0x1D90F0u) { return; }
    ctx->pc = 0x1D90F0u;
    // 0x1d90f0: 0x3c050034
    ctx->pc = 0x1d90f0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d90f4: 0x24060020
    ctx->pc = 0x1d90f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d90f8: 0x3c070034
    ctx->pc = 0x1d90f8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d90fc: 0x24040039
    ctx->pc = 0x1d90fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 57));
    // 0x1d9100: 0x24a57280
    ctx->pc = 0x1d9100u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d9104: 0x24e76280
    ctx->pc = 0x1d9104u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d9108: 0xc075e40
    ctx->pc = 0x1D9108u;
    SET_GPR_U32(ctx, 31, 0x1D9110u);
    ctx->pc = 0x1D910Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9110u; }
    }
    if (ctx->pc != 0x1D9110u) { return; }
    ctx->pc = 0x1D9110u;
    // 0x1d9110: 0x3c010034
    ctx->pc = 0x1d9110u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d9114: 0xc075e3c
    ctx->pc = 0x1D9114u;
    SET_GPR_U32(ctx, 31, 0x1D911Cu);
    ctx->pc = 0x1D9118u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D911Cu; }
    }
    if (ctx->pc != 0x1D911Cu) { return; }
    ctx->pc = 0x1D911Cu;
    // 0x1d911c: 0x200102d
    ctx->pc = 0x1d911cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9120: 0xdfbf0010
    ctx->pc = 0x1d9120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9124: 0x7bb00000
    ctx->pc = 0x1d9124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9128: 0x3e00008
    ctx->pc = 0x1D9128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D912Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D9130u;
}
