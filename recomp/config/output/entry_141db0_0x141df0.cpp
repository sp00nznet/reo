#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_141db0
// Address: 0x141db0 - 0x141df0
void entry_141db0_0x141df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x141db0u;

    // 0x141db0: 0x27bdffe0
    ctx->pc = 0x141db0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x141db4: 0xffb00000
    ctx->pc = 0x141db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141db8: 0xa0802d
    ctx->pc = 0x141db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141dbc: 0xffb10008
    ctx->pc = 0x141dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x141dc0: 0xffbf0010
    ctx->pc = 0x141dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x141dc4: 0xc0505b4
    ctx->pc = 0x141DC4u;
    SET_GPR_U32(ctx, 31, 0x141DCCu);
    ctx->pc = 0x141DC8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1416D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001416D0_0x1416d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141DCCu; }
    }
    if (ctx->pc != 0x141DCCu) { return; }
    ctx->pc = 0x141DCCu;
    // 0x141dcc: 0x3c020026
    ctx->pc = 0x141dccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x141dd0: 0xdfbf0010
    ctx->pc = 0x141dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141dd4: 0x244249f0
    ctx->pc = 0x141dd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18928));
    // 0x141dd8: 0xac500004
    ctx->pc = 0x141dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x141ddc: 0xac510000
    ctx->pc = 0x141ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x141de0: 0xdfb00000
    ctx->pc = 0x141de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141de4: 0xdfb10008
    ctx->pc = 0x141de4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141de8: 0x80505ba
    ctx->pc = 0x141DE8u;
    ctx->pc = 0x141DECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1416E8u;
    sub_001416E8_0x1416e8(rdram, ctx, runtime); return;
    ctx->pc = 0x141DF0u;
}
