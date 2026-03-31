#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D8CE0
// Address: 0x1d8ce0 - 0x1d8d30
void sub_001D8CE0_0x1d8ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d8ce0u;

    // 0x1d8ce0: 0x27bdffe0
    ctx->pc = 0x1d8ce0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8ce4: 0xffbf0010
    ctx->pc = 0x1d8ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8ce8: 0xc075e38
    ctx->pc = 0x1D8CE8u;
    SET_GPR_U32(ctx, 31, 0x1D8CF0u);
    ctx->pc = 0x1D8CECu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CF0u; }
    }
    if (ctx->pc != 0x1D8CF0u) { return; }
    ctx->pc = 0x1D8CF0u;
    // 0x1d8cf0: 0x3c050034
    ctx->pc = 0x1d8cf0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d8cf4: 0x24060020
    ctx->pc = 0x1d8cf4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d8cf8: 0x3c070034
    ctx->pc = 0x1d8cf8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d8cfc: 0x2404002b
    ctx->pc = 0x1d8cfcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 43));
    // 0x1d8d00: 0x24a57280
    ctx->pc = 0x1d8d00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d8d04: 0x24e76280
    ctx->pc = 0x1d8d04u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d8d08: 0xc075e40
    ctx->pc = 0x1D8D08u;
    SET_GPR_U32(ctx, 31, 0x1D8D10u);
    ctx->pc = 0x1D8D0Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D10u; }
    }
    if (ctx->pc != 0x1D8D10u) { return; }
    ctx->pc = 0x1D8D10u;
    // 0x1d8d10: 0x3c010034
    ctx->pc = 0x1d8d10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d8d14: 0xc075e3c
    ctx->pc = 0x1D8D14u;
    SET_GPR_U32(ctx, 31, 0x1D8D1Cu);
    ctx->pc = 0x1D8D18u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D1Cu; }
    }
    if (ctx->pc != 0x1D8D1Cu) { return; }
    ctx->pc = 0x1D8D1Cu;
    // 0x1d8d1c: 0x200102d
    ctx->pc = 0x1d8d1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8d20: 0xdfbf0010
    ctx->pc = 0x1d8d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8d24: 0x7bb00000
    ctx->pc = 0x1d8d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8d28: 0x3e00008
    ctx->pc = 0x1D8D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8D2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8D30u;
}
