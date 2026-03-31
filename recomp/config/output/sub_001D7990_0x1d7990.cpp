#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7990
// Address: 0x1d7990 - 0x1d79e0
void sub_001D7990_0x1d7990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7990u;

    // 0x1d7990: 0x27bdffe0
    ctx->pc = 0x1d7990u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7994: 0xffbf0010
    ctx->pc = 0x1d7994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d7998: 0xc075e38
    ctx->pc = 0x1D7998u;
    SET_GPR_U32(ctx, 31, 0x1D79A0u);
    ctx->pc = 0x1D799Cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D79A0u; }
    }
    if (ctx->pc != 0x1D79A0u) { return; }
    ctx->pc = 0x1D79A0u;
    // 0x1d79a0: 0x3c050034
    ctx->pc = 0x1d79a0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d79a4: 0x24060020
    ctx->pc = 0x1d79a4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d79a8: 0x3c070034
    ctx->pc = 0x1d79a8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d79ac: 0x24040005
    ctx->pc = 0x1d79acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d79b0: 0x24a57280
    ctx->pc = 0x1d79b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d79b4: 0x24e76280
    ctx->pc = 0x1d79b4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d79b8: 0xc075e40
    ctx->pc = 0x1D79B8u;
    SET_GPR_U32(ctx, 31, 0x1D79C0u);
    ctx->pc = 0x1D79BCu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D79C0u; }
    }
    if (ctx->pc != 0x1D79C0u) { return; }
    ctx->pc = 0x1D79C0u;
    // 0x1d79c0: 0x3c010034
    ctx->pc = 0x1d79c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d79c4: 0xc075e3c
    ctx->pc = 0x1D79C4u;
    SET_GPR_U32(ctx, 31, 0x1D79CCu);
    ctx->pc = 0x1D79C8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D79CCu; }
    }
    if (ctx->pc != 0x1D79CCu) { return; }
    ctx->pc = 0x1D79CCu;
    // 0x1d79cc: 0x200102d
    ctx->pc = 0x1d79ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d79d0: 0xdfbf0010
    ctx->pc = 0x1d79d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d79d4: 0x7bb00000
    ctx->pc = 0x1d79d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d79d8: 0x3e00008
    ctx->pc = 0x1D79D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D79DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D79E0u;
}
