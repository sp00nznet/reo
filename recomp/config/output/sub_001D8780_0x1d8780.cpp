#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D8780
// Address: 0x1d8780 - 0x1d87d0
void sub_001D8780_0x1d8780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d8780u;

    // 0x1d8780: 0x27bdffe0
    ctx->pc = 0x1d8780u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8784: 0xffbf0010
    ctx->pc = 0x1d8784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8788: 0xc075e38
    ctx->pc = 0x1D8788u;
    SET_GPR_U32(ctx, 31, 0x1D8790u);
    ctx->pc = 0x1D878Cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8790u; }
    }
    if (ctx->pc != 0x1D8790u) { return; }
    ctx->pc = 0x1D8790u;
    // 0x1d8790: 0x3c050034
    ctx->pc = 0x1d8790u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d8794: 0x24060020
    ctx->pc = 0x1d8794u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d8798: 0x3c070034
    ctx->pc = 0x1d8798u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d879c: 0x2404001f
    ctx->pc = 0x1d879cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 31));
    // 0x1d87a0: 0x24a57280
    ctx->pc = 0x1d87a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d87a4: 0x24e76280
    ctx->pc = 0x1d87a4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d87a8: 0xc075e40
    ctx->pc = 0x1D87A8u;
    SET_GPR_U32(ctx, 31, 0x1D87B0u);
    ctx->pc = 0x1D87ACu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D87B0u; }
    }
    if (ctx->pc != 0x1D87B0u) { return; }
    ctx->pc = 0x1D87B0u;
    // 0x1d87b0: 0x3c010034
    ctx->pc = 0x1d87b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d87b4: 0xc075e3c
    ctx->pc = 0x1D87B4u;
    SET_GPR_U32(ctx, 31, 0x1D87BCu);
    ctx->pc = 0x1D87B8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D87BCu; }
    }
    if (ctx->pc != 0x1D87BCu) { return; }
    ctx->pc = 0x1D87BCu;
    // 0x1d87bc: 0x200102d
    ctx->pc = 0x1d87bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d87c0: 0xdfbf0010
    ctx->pc = 0x1d87c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d87c4: 0x7bb00000
    ctx->pc = 0x1d87c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d87c8: 0x3e00008
    ctx->pc = 0x1D87C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D87CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D87D0u;
}
