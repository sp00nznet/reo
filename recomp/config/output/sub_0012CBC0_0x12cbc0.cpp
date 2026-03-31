#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012CBC0
// Address: 0x12cbc0 - 0x12cc10
void sub_0012CBC0_0x12cbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12cbc0u;

    // 0x12cbc0: 0x27bdffe0
    ctx->pc = 0x12cbc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12cbc4: 0xffb00000
    ctx->pc = 0x12cbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12cbc8: 0x80802d
    ctx->pc = 0x12cbc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cbcc: 0xffb10008
    ctx->pc = 0x12cbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12cbd0: 0xa0882d
    ctx->pc = 0x12cbd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cbd4: 0xffbf0010
    ctx->pc = 0x12cbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12cbd8: 0xae110008
    ctx->pc = 0x12cbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x12cbdc: 0xc048bfc
    ctx->pc = 0x12CBDCu;
    SET_GPR_U32(ctx, 31, 0x12CBE4u);
    ctx->pc = 0x12CBE0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x122FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00122FF0_0x122ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CBE4u; }
    }
    if (ctx->pc != 0x12CBE4u) { return; }
    ctx->pc = 0x12CBE4u;
    // 0x12cbe4: 0x8e040004
    ctx->pc = 0x12cbe4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12cbe8: 0x220282d
    ctx->pc = 0x12cbe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cbec: 0xdfb10008
    ctx->pc = 0x12cbecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12cbf0: 0xdfb00000
    ctx->pc = 0x12cbf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cbf4: 0xdfbf0010
    ctx->pc = 0x12cbf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12cbf8: 0x8048b90
    ctx->pc = 0x12CBF8u;
    ctx->pc = 0x12CBFCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x122E40u;
    entry_122e40_0x122e70(rdram, ctx, runtime); return;
    ctx->pc = 0x12CC00u;
    // 0x12cc00: 0x52880
    ctx->pc = 0x12cc00u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x12cc04: 0x852021
    ctx->pc = 0x12cc04u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12cc08: 0x3e00008
    ctx->pc = 0x12CC08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CC0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12CC10u;
}
