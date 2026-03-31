#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D8E70
// Address: 0x1d8e70 - 0x1d8ee0
void sub_001D8E70_0x1d8e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d8e70u;

    // 0x1d8e70: 0x27bdffd0
    ctx->pc = 0x1d8e70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d8e74: 0xffbf0020
    ctx->pc = 0x1d8e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d8e78: 0x7fb10010
    ctx->pc = 0x1d8e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d8e7c: 0x7fb00000
    ctx->pc = 0x1d8e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d8e80: 0x80882d
    ctx->pc = 0x1d8e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8e84: 0xc075e38
    ctx->pc = 0x1D8E84u;
    SET_GPR_U32(ctx, 31, 0x1D8E8Cu);
    ctx->pc = 0x1D8E88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E8Cu; }
    }
    if (ctx->pc != 0x1D8E8Cu) { return; }
    ctx->pc = 0x1D8E8Cu;
    // 0x1d8e8c: 0x3c020034
    ctx->pc = 0x1d8e8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1d8e90: 0x3c050034
    ctx->pc = 0x1d8e90u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d8e94: 0x2442729c
    ctx->pc = 0x1d8e94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 29340));
    // 0x1d8e98: 0x3c070034
    ctx->pc = 0x1d8e98u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d8e9c: 0xac510000
    ctx->pc = 0x1d8e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1d8ea0: 0x24040033
    ctx->pc = 0x1d8ea0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 51));
    // 0x1d8ea4: 0x24a57280
    ctx->pc = 0x1d8ea4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d8ea8: 0xac500004
    ctx->pc = 0x1d8ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1d8eac: 0x24060028
    ctx->pc = 0x1d8eacu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 40));
    // 0x1d8eb0: 0x24e76280
    ctx->pc = 0x1d8eb0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d8eb4: 0xc075e40
    ctx->pc = 0x1D8EB4u;
    SET_GPR_U32(ctx, 31, 0x1D8EBCu);
    ctx->pc = 0x1D8EB8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8EBCu; }
    }
    if (ctx->pc != 0x1D8EBCu) { return; }
    ctx->pc = 0x1D8EBCu;
    // 0x1d8ebc: 0x3c010034
    ctx->pc = 0x1d8ebcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d8ec0: 0xc075e3c
    ctx->pc = 0x1D8EC0u;
    SET_GPR_U32(ctx, 31, 0x1D8EC8u);
    ctx->pc = 0x1D8EC4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8EC8u; }
    }
    if (ctx->pc != 0x1D8EC8u) { return; }
    ctx->pc = 0x1D8EC8u;
    // 0x1d8ec8: 0x200102d
    ctx->pc = 0x1d8ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ecc: 0xdfbf0020
    ctx->pc = 0x1d8eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8ed0: 0x7bb10010
    ctx->pc = 0x1d8ed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8ed4: 0x7bb00000
    ctx->pc = 0x1d8ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8ed8: 0x3e00008
    ctx->pc = 0x1D8ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8EDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8EE0u;
}
