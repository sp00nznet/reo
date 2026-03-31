#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D8180
// Address: 0x1d8180 - 0x1d81e0
void sub_001D8180_0x1d8180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d8180u;

    // 0x1d8180: 0x27bdffe0
    ctx->pc = 0x1d8180u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8184: 0xffbf0010
    ctx->pc = 0x1d8184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8188: 0x7fb00000
    ctx->pc = 0x1d8188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d818c: 0xc075e38
    ctx->pc = 0x1D818Cu;
    SET_GPR_U32(ctx, 31, 0x1D8194u);
    ctx->pc = 0x1D8190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8194u; }
    }
    if (ctx->pc != 0x1D8194u) { return; }
    ctx->pc = 0x1D8194u;
    // 0x1d8194: 0x3c050034
    ctx->pc = 0x1d8194u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d8198: 0x3c070034
    ctx->pc = 0x1d8198u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d819c: 0x3c010034
    ctx->pc = 0x1d819cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d81a0: 0x2404004a
    ctx->pc = 0x1d81a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 74));
    // 0x1d81a4: 0x24a57280
    ctx->pc = 0x1d81a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d81a8: 0x24060022
    ctx->pc = 0x1d81a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 34));
    // 0x1d81ac: 0x24e76280
    ctx->pc = 0x1d81acu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d81b0: 0x24080020
    ctx->pc = 0x1d81b0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d81b4: 0xc075e40
    ctx->pc = 0x1D81B4u;
    SET_GPR_U32(ctx, 31, 0x1D81BCu);
    ctx->pc = 0x1D81B8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 29340), (uint16_t)GPR_U32(ctx, 16));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D81BCu; }
    }
    if (ctx->pc != 0x1D81BCu) { return; }
    ctx->pc = 0x1D81BCu;
    // 0x1d81bc: 0x3c010034
    ctx->pc = 0x1d81bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d81c0: 0xc075e3c
    ctx->pc = 0x1D81C0u;
    SET_GPR_U32(ctx, 31, 0x1D81C8u);
    ctx->pc = 0x1D81C4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D81C8u; }
    }
    if (ctx->pc != 0x1D81C8u) { return; }
    ctx->pc = 0x1D81C8u;
    // 0x1d81c8: 0x200102d
    ctx->pc = 0x1d81c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d81cc: 0xdfbf0010
    ctx->pc = 0x1d81ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d81d0: 0x7bb00000
    ctx->pc = 0x1d81d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d81d4: 0x3e00008
    ctx->pc = 0x1D81D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D81D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D81DCu;
    // 0x1d81dc: 0x0
    ctx->pc = 0x1d81dcu;
    // NOP
}
