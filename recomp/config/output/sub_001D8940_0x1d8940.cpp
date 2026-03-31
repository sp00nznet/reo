#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D8940
// Address: 0x1d8940 - 0x1d8990
void sub_001D8940_0x1d8940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d8940u;

    // 0x1d8940: 0x27bdffe0
    ctx->pc = 0x1d8940u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8944: 0xffbf0010
    ctx->pc = 0x1d8944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8948: 0xc075e38
    ctx->pc = 0x1D8948u;
    SET_GPR_U32(ctx, 31, 0x1D8950u);
    ctx->pc = 0x1D894Cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8950u; }
    }
    if (ctx->pc != 0x1D8950u) { return; }
    ctx->pc = 0x1D8950u;
    // 0x1d8950: 0x3c050034
    ctx->pc = 0x1d8950u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d8954: 0x24060020
    ctx->pc = 0x1d8954u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d8958: 0x3c070034
    ctx->pc = 0x1d8958u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d895c: 0x24040022
    ctx->pc = 0x1d895cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 34));
    // 0x1d8960: 0x24a57280
    ctx->pc = 0x1d8960u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d8964: 0x24e76280
    ctx->pc = 0x1d8964u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d8968: 0xc075e40
    ctx->pc = 0x1D8968u;
    SET_GPR_U32(ctx, 31, 0x1D8970u);
    ctx->pc = 0x1D896Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8970u; }
    }
    if (ctx->pc != 0x1D8970u) { return; }
    ctx->pc = 0x1D8970u;
    // 0x1d8970: 0x3c010034
    ctx->pc = 0x1d8970u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d8974: 0xc075e3c
    ctx->pc = 0x1D8974u;
    SET_GPR_U32(ctx, 31, 0x1D897Cu);
    ctx->pc = 0x1D8978u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D897Cu; }
    }
    if (ctx->pc != 0x1D897Cu) { return; }
    ctx->pc = 0x1D897Cu;
    // 0x1d897c: 0x200102d
    ctx->pc = 0x1d897cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8980: 0xdfbf0010
    ctx->pc = 0x1d8980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8984: 0x7bb00000
    ctx->pc = 0x1d8984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8988: 0x3e00008
    ctx->pc = 0x1D8988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D898Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8990u;
}
