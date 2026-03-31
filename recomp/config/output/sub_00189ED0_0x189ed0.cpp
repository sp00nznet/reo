#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00189ED0
// Address: 0x189ed0 - 0x189f40
void sub_00189ED0_0x189ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x189ed0u;

    // 0x189ed0: 0x27bdffc0
    ctx->pc = 0x189ed0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x189ed4: 0xffbf0030
    ctx->pc = 0x189ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x189ed8: 0x7fb20020
    ctx->pc = 0x189ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x189edc: 0x7fb10010
    ctx->pc = 0x189edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x189ee0: 0x7fb00000
    ctx->pc = 0x189ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x189ee4: 0x8c840014
    ctx->pc = 0x189ee4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x189ee8: 0xc063728
    ctx->pc = 0x189EE8u;
    SET_GPR_U32(ctx, 31, 0x189EF0u);
    ctx->pc = 0x189EECu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18DCA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCA0_0x18dca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189EF0u; }
    }
    if (ctx->pc != 0x189EF0u) { return; }
    ctx->pc = 0x189EF0u;
    // 0x189ef0: 0x40802d
    ctx->pc = 0x189ef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ef4: 0x240202d
    ctx->pc = 0x189ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ef8: 0x200882d
    ctx->pc = 0x189ef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189efc: 0x24060024
    ctx->pc = 0x189efcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 36));
    // 0x189f00: 0x220282d
    ctx->pc = 0x189f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f04: 0xc0636ec
    ctx->pc = 0x189F04u;
    SET_GPR_U32(ctx, 31, 0x189F0Cu);
    ctx->pc = 0x189F08u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 48));
    ctx->pc = 0x18DBB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DBB0_0x18dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189F0Cu; }
    }
    if (ctx->pc != 0x189F0Cu) { return; }
    ctx->pc = 0x189F0Cu;
    // 0x189f0c: 0xae500008
    ctx->pc = 0x189f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
    // 0x189f10: 0x2403fff0
    ctx->pc = 0x189f10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x189f14: 0x8e24001c
    ctx->pc = 0x189f14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x189f18: 0x2484000f
    ctx->pc = 0x189f18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 15));
    // 0x189f1c: 0x831824
    ctx->pc = 0x189f1cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x189f20: 0x2038021
    ctx->pc = 0x189f20u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x189f24: 0xae500010
    ctx->pc = 0x189f24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 16));
    // 0x189f28: 0xdfbf0030
    ctx->pc = 0x189f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189f2c: 0x7bb20020
    ctx->pc = 0x189f2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189f30: 0x7bb10010
    ctx->pc = 0x189f30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189f34: 0x7bb00000
    ctx->pc = 0x189f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189f38: 0x3e00008
    ctx->pc = 0x189F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189F3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x189F40u;
}
