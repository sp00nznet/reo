#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D8BE0
// Address: 0x1d8be0 - 0x1d8c40
void sub_001D8BE0_0x1d8be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d8be0u;

    // 0x1d8be0: 0x27bdffe0
    ctx->pc = 0x1d8be0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8be4: 0xffbf0010
    ctx->pc = 0x1d8be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8be8: 0x7fb00000
    ctx->pc = 0x1d8be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d8bec: 0xc075e38
    ctx->pc = 0x1D8BECu;
    SET_GPR_U32(ctx, 31, 0x1D8BF4u);
    ctx->pc = 0x1D8BF0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BF4u; }
    }
    if (ctx->pc != 0x1D8BF4u) { return; }
    ctx->pc = 0x1D8BF4u;
    // 0x1d8bf4: 0x3c050034
    ctx->pc = 0x1d8bf4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d8bf8: 0x24060020
    ctx->pc = 0x1d8bf8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d8bfc: 0x3c070034
    ctx->pc = 0x1d8bfcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d8c00: 0x3c010034
    ctx->pc = 0x1d8c00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d8c04: 0x24040029
    ctx->pc = 0x1d8c04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 41));
    // 0x1d8c08: 0x24a57280
    ctx->pc = 0x1d8c08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d8c0c: 0x24e76280
    ctx->pc = 0x1d8c0cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d8c10: 0xc0402d
    ctx->pc = 0x1d8c10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c14: 0xc075e40
    ctx->pc = 0x1D8C14u;
    SET_GPR_U32(ctx, 31, 0x1D8C1Cu);
    ctx->pc = 0x1D8C18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29312), GPR_U32(ctx, 16));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C1Cu; }
    }
    if (ctx->pc != 0x1D8C1Cu) { return; }
    ctx->pc = 0x1D8C1Cu;
    // 0x1d8c1c: 0x3c010034
    ctx->pc = 0x1d8c1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d8c20: 0xc075e3c
    ctx->pc = 0x1D8C20u;
    SET_GPR_U32(ctx, 31, 0x1D8C28u);
    ctx->pc = 0x1D8C24u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C28u; }
    }
    if (ctx->pc != 0x1D8C28u) { return; }
    ctx->pc = 0x1D8C28u;
    // 0x1d8c28: 0x200102d
    ctx->pc = 0x1d8c28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c2c: 0xdfbf0010
    ctx->pc = 0x1d8c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8c30: 0x7bb00000
    ctx->pc = 0x1d8c30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8c34: 0x3e00008
    ctx->pc = 0x1D8C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8C38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8C3Cu;
    // 0x1d8c3c: 0x0
    ctx->pc = 0x1d8c3cu;
    // NOP
}
