#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7B80
// Address: 0x1d7b80 - 0x1d7c00
void sub_001D7B80_0x1d7b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7b80u;

    // 0x1d7b80: 0x27bdffc0
    ctx->pc = 0x1d7b80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d7b84: 0xffbf0030
    ctx->pc = 0x1d7b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d7b88: 0x7fb20020
    ctx->pc = 0x1d7b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d7b8c: 0x7fb10010
    ctx->pc = 0x1d7b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d7b90: 0x80902d
    ctx->pc = 0x1d7b90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b94: 0x7fb00000
    ctx->pc = 0x1d7b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d7b98: 0xa0882d
    ctx->pc = 0x1d7b98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b9c: 0xc075e38
    ctx->pc = 0x1D7B9Cu;
    SET_GPR_U32(ctx, 31, 0x1D7BA4u);
    ctx->pc = 0x1D7BA0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7BA4u; }
    }
    if (ctx->pc != 0x1D7BA4u) { return; }
    ctx->pc = 0x1D7BA4u;
    // 0x1d7ba4: 0x3c020034
    ctx->pc = 0x1d7ba4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1d7ba8: 0x3c050034
    ctx->pc = 0x1d7ba8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d7bac: 0x2442729c
    ctx->pc = 0x1d7bacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 29340));
    // 0x1d7bb0: 0x3c070034
    ctx->pc = 0x1d7bb0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d7bb4: 0xac520000
    ctx->pc = 0x1d7bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1d7bb8: 0x24040008
    ctx->pc = 0x1d7bb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d7bbc: 0xa4510004
    ctx->pc = 0x1d7bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x1d7bc0: 0x24a57280
    ctx->pc = 0x1d7bc0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d7bc4: 0x24060028
    ctx->pc = 0x1d7bc4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 40));
    // 0x1d7bc8: 0xa4500006
    ctx->pc = 0x1d7bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 16));
    // 0x1d7bcc: 0x24e76280
    ctx->pc = 0x1d7bccu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d7bd0: 0xc075e40
    ctx->pc = 0x1D7BD0u;
    SET_GPR_U32(ctx, 31, 0x1D7BD8u);
    ctx->pc = 0x1D7BD4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7BD8u; }
    }
    if (ctx->pc != 0x1D7BD8u) { return; }
    ctx->pc = 0x1D7BD8u;
    // 0x1d7bd8: 0x3c010034
    ctx->pc = 0x1d7bd8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d7bdc: 0xc075e3c
    ctx->pc = 0x1D7BDCu;
    SET_GPR_U32(ctx, 31, 0x1D7BE4u);
    ctx->pc = 0x1D7BE0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7BE4u; }
    }
    if (ctx->pc != 0x1D7BE4u) { return; }
    ctx->pc = 0x1D7BE4u;
    // 0x1d7be4: 0x200102d
    ctx->pc = 0x1d7be4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7be8: 0xdfbf0030
    ctx->pc = 0x1d7be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7bec: 0x7bb20020
    ctx->pc = 0x1d7becu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7bf0: 0x7bb10010
    ctx->pc = 0x1d7bf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7bf4: 0x7bb00000
    ctx->pc = 0x1d7bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7bf8: 0x3e00008
    ctx->pc = 0x1D7BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7BFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7C00u;
}
