#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D8EE0
// Address: 0x1d8ee0 - 0x1d8f70
void sub_001D8EE0_0x1d8ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d8ee0u;

    // 0x1d8ee0: 0x27bdffc0
    ctx->pc = 0x1d8ee0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d8ee4: 0xffbf0030
    ctx->pc = 0x1d8ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d8ee8: 0x7fb20020
    ctx->pc = 0x1d8ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d8eec: 0x7fb10010
    ctx->pc = 0x1d8eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d8ef0: 0x80902d
    ctx->pc = 0x1d8ef0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ef4: 0x7fb00000
    ctx->pc = 0x1d8ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d8ef8: 0xa0882d
    ctx->pc = 0x1d8ef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8efc: 0xc075e38
    ctx->pc = 0x1D8EFCu;
    SET_GPR_U32(ctx, 31, 0x1D8F04u);
    ctx->pc = 0x1D8F00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F04u; }
    }
    if (ctx->pc != 0x1D8F04u) { return; }
    ctx->pc = 0x1D8F04u;
    // 0x1d8f04: 0x3c050034
    ctx->pc = 0x1d8f04u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d8f08: 0x3c070034
    ctx->pc = 0x1d8f08u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d8f0c: 0x24040034
    ctx->pc = 0x1d8f0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 52));
    // 0x1d8f10: 0x24a57280
    ctx->pc = 0x1d8f10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d8f14: 0x24060020
    ctx->pc = 0x1d8f14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d8f18: 0x24e76280
    ctx->pc = 0x1d8f18u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d8f1c: 0xc075e40
    ctx->pc = 0x1D8F1Cu;
    SET_GPR_U32(ctx, 31, 0x1D8F24u);
    ctx->pc = 0x1D8F20u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 44));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F24u; }
    }
    if (ctx->pc != 0x1D8F24u) { return; }
    ctx->pc = 0x1D8F24u;
    // 0x1d8f24: 0x3c030034
    ctx->pc = 0x1d8f24u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x1d8f28: 0x3c010034
    ctx->pc = 0x1d8f28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d8f2c: 0x2463629c
    ctx->pc = 0x1d8f2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 25244));
    // 0x1d8f30: 0x8c620000
    ctx->pc = 0x1d8f30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d8f34: 0xae420000
    ctx->pc = 0x1d8f34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1d8f38: 0x8c620004
    ctx->pc = 0x1d8f38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d8f3c: 0xae220000
    ctx->pc = 0x1d8f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1d8f40: 0x8c620008
    ctx->pc = 0x1d8f40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d8f44: 0xae020000
    ctx->pc = 0x1d8f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d8f48: 0xc075e3c
    ctx->pc = 0x1D8F48u;
    SET_GPR_U32(ctx, 31, 0x1D8F50u);
    ctx->pc = 0x1D8F4Cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F50u; }
    }
    if (ctx->pc != 0x1D8F50u) { return; }
    ctx->pc = 0x1D8F50u;
    // 0x1d8f50: 0x200102d
    ctx->pc = 0x1d8f50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8f54: 0xdfbf0030
    ctx->pc = 0x1d8f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d8f58: 0x7bb20020
    ctx->pc = 0x1d8f58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8f5c: 0x7bb10010
    ctx->pc = 0x1d8f5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8f60: 0x7bb00000
    ctx->pc = 0x1d8f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8f64: 0x3e00008
    ctx->pc = 0x1D8F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8F68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8F6Cu;
    // 0x1d8f6c: 0x0
    ctx->pc = 0x1d8f6cu;
    // NOP
}
