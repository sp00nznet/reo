#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7C60
// Address: 0x1d7c60 - 0x1d7cc0
void sub_001D7C60_0x1d7c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7c60u;

    // 0x1d7c60: 0x27bdffe0
    ctx->pc = 0x1d7c60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7c64: 0xffbf0010
    ctx->pc = 0x1d7c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d7c68: 0x7fb00000
    ctx->pc = 0x1d7c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d7c6c: 0xc075e38
    ctx->pc = 0x1D7C6Cu;
    SET_GPR_U32(ctx, 31, 0x1D7C74u);
    ctx->pc = 0x1D7C70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7C74u; }
    }
    if (ctx->pc != 0x1D7C74u) { return; }
    ctx->pc = 0x1D7C74u;
    // 0x1d7c74: 0x3c050034
    ctx->pc = 0x1d7c74u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d7c78: 0x3c070034
    ctx->pc = 0x1d7c78u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d7c7c: 0x3c010034
    ctx->pc = 0x1d7c7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d7c80: 0x2404000b
    ctx->pc = 0x1d7c80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11));
    // 0x1d7c84: 0x24a57280
    ctx->pc = 0x1d7c84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d7c88: 0x24060022
    ctx->pc = 0x1d7c88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 34));
    // 0x1d7c8c: 0x24e76280
    ctx->pc = 0x1d7c8cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d7c90: 0x24080020
    ctx->pc = 0x1d7c90u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d7c94: 0xc075e40
    ctx->pc = 0x1D7C94u;
    SET_GPR_U32(ctx, 31, 0x1D7C9Cu);
    ctx->pc = 0x1D7C98u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 29340), (uint16_t)GPR_U32(ctx, 16));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7C9Cu; }
    }
    if (ctx->pc != 0x1D7C9Cu) { return; }
    ctx->pc = 0x1D7C9Cu;
    // 0x1d7c9c: 0x3c010034
    ctx->pc = 0x1d7c9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d7ca0: 0xc075e3c
    ctx->pc = 0x1D7CA0u;
    SET_GPR_U32(ctx, 31, 0x1D7CA8u);
    ctx->pc = 0x1D7CA4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7CA8u; }
    }
    if (ctx->pc != 0x1D7CA8u) { return; }
    ctx->pc = 0x1D7CA8u;
    // 0x1d7ca8: 0x200102d
    ctx->pc = 0x1d7ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7cac: 0xdfbf0010
    ctx->pc = 0x1d7cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7cb0: 0x7bb00000
    ctx->pc = 0x1d7cb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7cb4: 0x3e00008
    ctx->pc = 0x1D7CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7CB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7CBCu;
    // 0x1d7cbc: 0x0
    ctx->pc = 0x1d7cbcu;
    // NOP
}
