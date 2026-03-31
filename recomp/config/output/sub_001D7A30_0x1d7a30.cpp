#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7A30
// Address: 0x1d7a30 - 0x1d7ab0
void sub_001D7A30_0x1d7a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7a30u;

    // 0x1d7a30: 0x27bdffc0
    ctx->pc = 0x1d7a30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d7a34: 0xffbf0030
    ctx->pc = 0x1d7a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d7a38: 0x7fb20020
    ctx->pc = 0x1d7a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d7a3c: 0x7fb10010
    ctx->pc = 0x1d7a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d7a40: 0x80902d
    ctx->pc = 0x1d7a40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a44: 0x7fb00000
    ctx->pc = 0x1d7a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d7a48: 0xa0882d
    ctx->pc = 0x1d7a48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a4c: 0xc075e38
    ctx->pc = 0x1D7A4Cu;
    SET_GPR_U32(ctx, 31, 0x1D7A54u);
    ctx->pc = 0x1D7A50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A54u; }
    }
    if (ctx->pc != 0x1D7A54u) { return; }
    ctx->pc = 0x1D7A54u;
    // 0x1d7a54: 0x3c020034
    ctx->pc = 0x1d7a54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1d7a58: 0x3c050034
    ctx->pc = 0x1d7a58u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d7a5c: 0x2442729c
    ctx->pc = 0x1d7a5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 29340));
    // 0x1d7a60: 0x3c070034
    ctx->pc = 0x1d7a60u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d7a64: 0xac520000
    ctx->pc = 0x1d7a64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1d7a68: 0x24040001
    ctx->pc = 0x1d7a68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7a6c: 0xac510004
    ctx->pc = 0x1d7a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x1d7a70: 0x24a57280
    ctx->pc = 0x1d7a70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d7a74: 0x2406002c
    ctx->pc = 0x1d7a74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 44));
    // 0x1d7a78: 0xac500008
    ctx->pc = 0x1d7a78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x1d7a7c: 0x24e76280
    ctx->pc = 0x1d7a7cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d7a80: 0xc075e40
    ctx->pc = 0x1D7A80u;
    SET_GPR_U32(ctx, 31, 0x1D7A88u);
    ctx->pc = 0x1D7A84u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A88u; }
    }
    if (ctx->pc != 0x1D7A88u) { return; }
    ctx->pc = 0x1D7A88u;
    // 0x1d7a88: 0x3c010034
    ctx->pc = 0x1d7a88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d7a8c: 0xc075e3c
    ctx->pc = 0x1D7A8Cu;
    SET_GPR_U32(ctx, 31, 0x1D7A94u);
    ctx->pc = 0x1D7A90u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A94u; }
    }
    if (ctx->pc != 0x1D7A94u) { return; }
    ctx->pc = 0x1D7A94u;
    // 0x1d7a94: 0x200102d
    ctx->pc = 0x1d7a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a98: 0xdfbf0030
    ctx->pc = 0x1d7a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7a9c: 0x7bb20020
    ctx->pc = 0x1d7a9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7aa0: 0x7bb10010
    ctx->pc = 0x1d7aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7aa4: 0x7bb00000
    ctx->pc = 0x1d7aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7aa8: 0x3e00008
    ctx->pc = 0x1D7AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7AACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7AB0u;
}
