#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015DCC0
// Address: 0x15dcc0 - 0x15dd10
void sub_0015DCC0_0x15dcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15dcc0u;

    // 0x15dcc0: 0x27bdfff0
    ctx->pc = 0x15dcc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15dcc4: 0xffb00000
    ctx->pc = 0x15dcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15dcc8: 0xc0802d
    ctx->pc = 0x15dcc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dccc: 0xffbf0008
    ctx->pc = 0x15dcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x15dcd0: 0xc043ea8
    ctx->pc = 0x15DCD0u;
    SET_GPR_U32(ctx, 31, 0x15DCD8u);
    ctx->pc = 0x15DCD4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10FAA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FAA0_0x10faa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DCD8u; }
    }
    if (ctx->pc != 0x15DCD8u) { return; }
    ctx->pc = 0x15DCD8u;
    // 0x15dcd8: 0x102978
    ctx->pc = 0x15dcd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << 5);
    // 0x15dcdc: 0xb0282f
    ctx->pc = 0x15dcdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 16));
    // 0x15dce0: 0x40202d
    ctx->pc = 0x15dce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dce4: 0x528b8
    ctx->pc = 0x15dce4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 2);
    // 0x15dce8: 0xb0282d
    ctx->pc = 0x15dce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 16));
    // 0x15dcec: 0xc043ec6
    ctx->pc = 0x15DCECu;
    SET_GPR_U32(ctx, 31, 0x15DCF4u);
    ctx->pc = 0x15DCF0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 3);
    ctx->pc = 0x10FB18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FB18_0x10fb18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DCF4u; }
    }
    if (ctx->pc != 0x15DCF4u) { return; }
    ctx->pc = 0x15DCF4u;
    // 0x15dcf4: 0xdfb00000
    ctx->pc = 0x15dcf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15dcf8: 0x2103c
    ctx->pc = 0x15dcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15dcfc: 0x2103f
    ctx->pc = 0x15dcfcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x15dd00: 0xdfbf0008
    ctx->pc = 0x15dd00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15dd04: 0x3e00008
    ctx->pc = 0x15DD04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DD08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15DD0Cu;
    // 0x15dd0c: 0x0
    ctx->pc = 0x15dd0cu;
    // NOP
}
