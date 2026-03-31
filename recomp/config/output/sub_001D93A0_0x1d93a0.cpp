#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D93A0
// Address: 0x1d93a0 - 0x1d9400
void sub_001D93A0_0x1d93a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d93a0u;

    // 0x1d93a0: 0x27bdffe0
    ctx->pc = 0x1d93a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d93a4: 0xffbf0010
    ctx->pc = 0x1d93a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d93a8: 0x7fb00000
    ctx->pc = 0x1d93a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d93ac: 0xc075e38
    ctx->pc = 0x1D93ACu;
    SET_GPR_U32(ctx, 31, 0x1D93B4u);
    ctx->pc = 0x1D93B0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D93B4u; }
    }
    if (ctx->pc != 0x1D93B4u) { return; }
    ctx->pc = 0x1D93B4u;
    // 0x1d93b4: 0x3c050034
    ctx->pc = 0x1d93b4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d93b8: 0x24060020
    ctx->pc = 0x1d93b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d93bc: 0x3c070034
    ctx->pc = 0x1d93bcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d93c0: 0x3c010034
    ctx->pc = 0x1d93c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d93c4: 0x2404004f
    ctx->pc = 0x1d93c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 79));
    // 0x1d93c8: 0x24a57280
    ctx->pc = 0x1d93c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d93cc: 0x24e76280
    ctx->pc = 0x1d93ccu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d93d0: 0xc0402d
    ctx->pc = 0x1d93d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93d4: 0xc075e40
    ctx->pc = 0x1D93D4u;
    SET_GPR_U32(ctx, 31, 0x1D93DCu);
    ctx->pc = 0x1D93D8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29312), GPR_U32(ctx, 16));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D93DCu; }
    }
    if (ctx->pc != 0x1D93DCu) { return; }
    ctx->pc = 0x1D93DCu;
    // 0x1d93dc: 0x3c010034
    ctx->pc = 0x1d93dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d93e0: 0xc075e3c
    ctx->pc = 0x1D93E0u;
    SET_GPR_U32(ctx, 31, 0x1D93E8u);
    ctx->pc = 0x1D93E4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D93E8u; }
    }
    if (ctx->pc != 0x1D93E8u) { return; }
    ctx->pc = 0x1D93E8u;
    // 0x1d93e8: 0x200102d
    ctx->pc = 0x1d93e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93ec: 0xdfbf0010
    ctx->pc = 0x1d93ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d93f0: 0x7bb00000
    ctx->pc = 0x1d93f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d93f4: 0x3e00008
    ctx->pc = 0x1D93F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D93F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D93FCu;
    // 0x1d93fc: 0x0
    ctx->pc = 0x1d93fcu;
    // NOP
}
