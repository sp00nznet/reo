#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D82F0
// Address: 0x1d82f0 - 0x1d8360
void sub_001D82F0_0x1d82f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d82f0u;

    // 0x1d82f0: 0x27bdffd0
    ctx->pc = 0x1d82f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d82f4: 0xffbf0020
    ctx->pc = 0x1d82f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d82f8: 0x7fb10010
    ctx->pc = 0x1d82f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d82fc: 0x7fb00000
    ctx->pc = 0x1d82fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d8300: 0x80882d
    ctx->pc = 0x1d8300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8304: 0xc075e38
    ctx->pc = 0x1D8304u;
    SET_GPR_U32(ctx, 31, 0x1D830Cu);
    ctx->pc = 0x1D8308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D830Cu; }
    }
    if (ctx->pc != 0x1D830Cu) { return; }
    ctx->pc = 0x1D830Cu;
    // 0x1d830c: 0x3c020034
    ctx->pc = 0x1d830cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1d8310: 0x3c050034
    ctx->pc = 0x1d8310u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d8314: 0x2442729c
    ctx->pc = 0x1d8314u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 29340));
    // 0x1d8318: 0x3c070034
    ctx->pc = 0x1d8318u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d831c: 0xac510000
    ctx->pc = 0x1d831cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1d8320: 0x2404001c
    ctx->pc = 0x1d8320u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 28));
    // 0x1d8324: 0x24a57280
    ctx->pc = 0x1d8324u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d8328: 0xac500004
    ctx->pc = 0x1d8328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1d832c: 0x24060028
    ctx->pc = 0x1d832cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 40));
    // 0x1d8330: 0x24e76280
    ctx->pc = 0x1d8330u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d8334: 0xc075e40
    ctx->pc = 0x1D8334u;
    SET_GPR_U32(ctx, 31, 0x1D833Cu);
    ctx->pc = 0x1D8338u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D833Cu; }
    }
    if (ctx->pc != 0x1D833Cu) { return; }
    ctx->pc = 0x1D833Cu;
    // 0x1d833c: 0x3c010034
    ctx->pc = 0x1d833cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d8340: 0xc075e3c
    ctx->pc = 0x1D8340u;
    SET_GPR_U32(ctx, 31, 0x1D8348u);
    ctx->pc = 0x1D8344u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8348u; }
    }
    if (ctx->pc != 0x1D8348u) { return; }
    ctx->pc = 0x1D8348u;
    // 0x1d8348: 0x200102d
    ctx->pc = 0x1d8348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d834c: 0xdfbf0020
    ctx->pc = 0x1d834cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8350: 0x7bb10010
    ctx->pc = 0x1d8350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8354: 0x7bb00000
    ctx->pc = 0x1d8354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8358: 0x3e00008
    ctx->pc = 0x1D8358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D835Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8360u;
}
