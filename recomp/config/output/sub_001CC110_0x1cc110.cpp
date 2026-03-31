#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CC110
// Address: 0x1cc110 - 0x1cc140
void sub_001CC110_0x1cc110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cc110u;

    // 0x1cc110: 0x27bdfff0
    ctx->pc = 0x1cc110u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc114: 0x3c040034
    ctx->pc = 0x1cc114u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1cc118: 0x3c050034
    ctx->pc = 0x1cc118u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1cc11c: 0xffbf0000
    ctx->pc = 0x1cc11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cc120: 0x2484b630
    ctx->pc = 0x1cc120u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948400));
    // 0x1cc124: 0x24a5b230
    ctx->pc = 0x1cc124u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947376));
    // 0x1cc128: 0xc071f34
    ctx->pc = 0x1CC128u;
    SET_GPR_U32(ctx, 31, 0x1CC130u);
    ctx->pc = 0x1CC12Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1024));
    ctx->pc = 0x1C7CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7CD0_0x1c7cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC130u; }
    }
    if (ctx->pc != 0x1CC130u) { return; }
    ctx->pc = 0x1CC130u;
    // 0x1cc130: 0xdfbf0000
    ctx->pc = 0x1cc130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc134: 0x102d
    ctx->pc = 0x1cc134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc138: 0x3e00008
    ctx->pc = 0x1CC138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC13Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CC140u;
}
