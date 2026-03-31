#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7C00
// Address: 0x1d7c00 - 0x1d7c60
void sub_001D7C00_0x1d7c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7c00u;

    // 0x1d7c00: 0x27bdffe0
    ctx->pc = 0x1d7c00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7c04: 0xffbf0010
    ctx->pc = 0x1d7c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d7c08: 0x7fb00000
    ctx->pc = 0x1d7c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d7c0c: 0xc075e38
    ctx->pc = 0x1D7C0Cu;
    SET_GPR_U32(ctx, 31, 0x1D7C14u);
    ctx->pc = 0x1D7C10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7C14u; }
    }
    if (ctx->pc != 0x1D7C14u) { return; }
    ctx->pc = 0x1D7C14u;
    // 0x1d7c14: 0x3c050034
    ctx->pc = 0x1d7c14u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d7c18: 0x3c070034
    ctx->pc = 0x1d7c18u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d7c1c: 0x3c010034
    ctx->pc = 0x1d7c1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d7c20: 0x2404000a
    ctx->pc = 0x1d7c20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d7c24: 0x24a57280
    ctx->pc = 0x1d7c24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d7c28: 0x24060022
    ctx->pc = 0x1d7c28u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 34));
    // 0x1d7c2c: 0x24e76280
    ctx->pc = 0x1d7c2cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d7c30: 0x24080020
    ctx->pc = 0x1d7c30u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d7c34: 0xc075e40
    ctx->pc = 0x1D7C34u;
    SET_GPR_U32(ctx, 31, 0x1D7C3Cu);
    ctx->pc = 0x1D7C38u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 29340), (uint16_t)GPR_U32(ctx, 16));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7C3Cu; }
    }
    if (ctx->pc != 0x1D7C3Cu) { return; }
    ctx->pc = 0x1D7C3Cu;
    // 0x1d7c3c: 0x3c010034
    ctx->pc = 0x1d7c3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d7c40: 0xc075e3c
    ctx->pc = 0x1D7C40u;
    SET_GPR_U32(ctx, 31, 0x1D7C48u);
    ctx->pc = 0x1D7C44u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7C48u; }
    }
    if (ctx->pc != 0x1D7C48u) { return; }
    ctx->pc = 0x1D7C48u;
    // 0x1d7c48: 0x200102d
    ctx->pc = 0x1d7c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c4c: 0xdfbf0010
    ctx->pc = 0x1d7c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7c50: 0x7bb00000
    ctx->pc = 0x1d7c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7c54: 0x3e00008
    ctx->pc = 0x1D7C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7C58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7C5Cu;
    // 0x1d7c5c: 0x0
    ctx->pc = 0x1d7c5cu;
    // NOP
}
