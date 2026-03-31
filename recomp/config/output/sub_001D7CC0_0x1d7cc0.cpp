#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7CC0
// Address: 0x1d7cc0 - 0x1d7d20
void sub_001D7CC0_0x1d7cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7cc0u;

    // 0x1d7cc0: 0x27bdffe0
    ctx->pc = 0x1d7cc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7cc4: 0xffbf0010
    ctx->pc = 0x1d7cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d7cc8: 0x7fb00000
    ctx->pc = 0x1d7cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d7ccc: 0xc075e38
    ctx->pc = 0x1D7CCCu;
    SET_GPR_U32(ctx, 31, 0x1D7CD4u);
    ctx->pc = 0x1D7CD0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7CD4u; }
    }
    if (ctx->pc != 0x1D7CD4u) { return; }
    ctx->pc = 0x1D7CD4u;
    // 0x1d7cd4: 0x3c050034
    ctx->pc = 0x1d7cd4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d7cd8: 0x3c070034
    ctx->pc = 0x1d7cd8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d7cdc: 0x3c010034
    ctx->pc = 0x1d7cdcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d7ce0: 0x2404000c
    ctx->pc = 0x1d7ce0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d7ce4: 0x24a57280
    ctx->pc = 0x1d7ce4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d7ce8: 0x24060022
    ctx->pc = 0x1d7ce8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 34));
    // 0x1d7cec: 0x24e76280
    ctx->pc = 0x1d7cecu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d7cf0: 0x24080020
    ctx->pc = 0x1d7cf0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d7cf4: 0xc075e40
    ctx->pc = 0x1D7CF4u;
    SET_GPR_U32(ctx, 31, 0x1D7CFCu);
    ctx->pc = 0x1D7CF8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 29340), (uint16_t)GPR_U32(ctx, 16));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7CFCu; }
    }
    if (ctx->pc != 0x1D7CFCu) { return; }
    ctx->pc = 0x1D7CFCu;
    // 0x1d7cfc: 0x3c010034
    ctx->pc = 0x1d7cfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d7d00: 0xc075e3c
    ctx->pc = 0x1D7D00u;
    SET_GPR_U32(ctx, 31, 0x1D7D08u);
    ctx->pc = 0x1D7D04u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7D08u; }
    }
    if (ctx->pc != 0x1D7D08u) { return; }
    ctx->pc = 0x1D7D08u;
    // 0x1d7d08: 0x200102d
    ctx->pc = 0x1d7d08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d0c: 0xdfbf0010
    ctx->pc = 0x1d7d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7d10: 0x7bb00000
    ctx->pc = 0x1d7d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7d14: 0x3e00008
    ctx->pc = 0x1D7D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7D18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7D1Cu;
    // 0x1d7d1c: 0x0
    ctx->pc = 0x1d7d1cu;
    // NOP
}
