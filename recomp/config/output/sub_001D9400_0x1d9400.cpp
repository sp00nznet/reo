#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D9400
// Address: 0x1d9400 - 0x1d9450
void sub_001D9400_0x1d9400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d9400u;

    // 0x1d9400: 0x27bdffe0
    ctx->pc = 0x1d9400u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9404: 0xffbf0010
    ctx->pc = 0x1d9404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d9408: 0xc075e38
    ctx->pc = 0x1D9408u;
    SET_GPR_U32(ctx, 31, 0x1D9410u);
    ctx->pc = 0x1D940Cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9410u; }
    }
    if (ctx->pc != 0x1D9410u) { return; }
    ctx->pc = 0x1D9410u;
    // 0x1d9410: 0x3c050034
    ctx->pc = 0x1d9410u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d9414: 0x24060020
    ctx->pc = 0x1d9414u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d9418: 0x3c070034
    ctx->pc = 0x1d9418u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d941c: 0x24040050
    ctx->pc = 0x1d941cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 80));
    // 0x1d9420: 0x24a57280
    ctx->pc = 0x1d9420u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d9424: 0x24e76280
    ctx->pc = 0x1d9424u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d9428: 0xc075e40
    ctx->pc = 0x1D9428u;
    SET_GPR_U32(ctx, 31, 0x1D9430u);
    ctx->pc = 0x1D942Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9430u; }
    }
    if (ctx->pc != 0x1D9430u) { return; }
    ctx->pc = 0x1D9430u;
    // 0x1d9430: 0x3c010034
    ctx->pc = 0x1d9430u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d9434: 0xc075e3c
    ctx->pc = 0x1D9434u;
    SET_GPR_U32(ctx, 31, 0x1D943Cu);
    ctx->pc = 0x1D9438u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D943Cu; }
    }
    if (ctx->pc != 0x1D943Cu) { return; }
    ctx->pc = 0x1D943Cu;
    // 0x1d943c: 0x200102d
    ctx->pc = 0x1d943cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9440: 0xdfbf0010
    ctx->pc = 0x1d9440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9444: 0x7bb00000
    ctx->pc = 0x1d9444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9448: 0x3e00008
    ctx->pc = 0x1D9448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D944Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D9450u;
}
