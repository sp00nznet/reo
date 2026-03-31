#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00115980
// Address: 0x115980 - 0x1159a8
void sub_00115980_0x115980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x115980u;

    // 0x115980: 0x27bdffe0
    ctx->pc = 0x115980u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x115984: 0xafa40000
    ctx->pc = 0x115984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x115988: 0x3a0282d
    ctx->pc = 0x115988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11598c: 0xffbf0010
    ctx->pc = 0x11598cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x115990: 0xc045294
    ctx->pc = 0x115990u;
    SET_GPR_U32(ctx, 31, 0x115998u);
    ctx->pc = 0x115994u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x114A50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114A50_0x114a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115998u; }
    }
    if (ctx->pc != 0x115998u) { return; }
    ctx->pc = 0x115998u;
    // 0x115998: 0xdfbf0010
    ctx->pc = 0x115998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11599c: 0x3e00008
    ctx->pc = 0x11599Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1159A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1159A4u;
    // 0x1159a4: 0x0
    ctx->pc = 0x1159a4u;
    // NOP
}
