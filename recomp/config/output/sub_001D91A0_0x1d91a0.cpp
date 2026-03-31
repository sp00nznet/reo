#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D91A0
// Address: 0x1d91a0 - 0x1d9200
void sub_001D91A0_0x1d91a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d91a0u;

    // 0x1d91a0: 0x27bdffe0
    ctx->pc = 0x1d91a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d91a4: 0xffbf0010
    ctx->pc = 0x1d91a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d91a8: 0x7fb00000
    ctx->pc = 0x1d91a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d91ac: 0xc075e38
    ctx->pc = 0x1D91ACu;
    SET_GPR_U32(ctx, 31, 0x1D91B4u);
    ctx->pc = 0x1D91B0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D91B4u; }
    }
    if (ctx->pc != 0x1D91B4u) { return; }
    ctx->pc = 0x1D91B4u;
    // 0x1d91b4: 0x3c050034
    ctx->pc = 0x1d91b4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d91b8: 0x3c070034
    ctx->pc = 0x1d91b8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d91bc: 0x3c010034
    ctx->pc = 0x1d91bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d91c0: 0x2404003b
    ctx->pc = 0x1d91c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 59));
    // 0x1d91c4: 0x24a57280
    ctx->pc = 0x1d91c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d91c8: 0x24060022
    ctx->pc = 0x1d91c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 34));
    // 0x1d91cc: 0x24e76280
    ctx->pc = 0x1d91ccu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d91d0: 0x24080020
    ctx->pc = 0x1d91d0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d91d4: 0xc075e40
    ctx->pc = 0x1D91D4u;
    SET_GPR_U32(ctx, 31, 0x1D91DCu);
    ctx->pc = 0x1D91D8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 29340), (uint16_t)GPR_U32(ctx, 16));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D91DCu; }
    }
    if (ctx->pc != 0x1D91DCu) { return; }
    ctx->pc = 0x1D91DCu;
    // 0x1d91dc: 0x3c010034
    ctx->pc = 0x1d91dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d91e0: 0xc075e3c
    ctx->pc = 0x1D91E0u;
    SET_GPR_U32(ctx, 31, 0x1D91E8u);
    ctx->pc = 0x1D91E4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D91E8u; }
    }
    if (ctx->pc != 0x1D91E8u) { return; }
    ctx->pc = 0x1D91E8u;
    // 0x1d91e8: 0x200102d
    ctx->pc = 0x1d91e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d91ec: 0xdfbf0010
    ctx->pc = 0x1d91ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d91f0: 0x7bb00000
    ctx->pc = 0x1d91f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d91f4: 0x3e00008
    ctx->pc = 0x1D91F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D91F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D91FCu;
    // 0x1d91fc: 0x0
    ctx->pc = 0x1d91fcu;
    // NOP
}
