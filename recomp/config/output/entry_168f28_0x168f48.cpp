#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_168f28
// Address: 0x168f28 - 0x168f48
void entry_168f28_0x168f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x168f28u;

    // 0x168f28: 0x27bdfff0
    ctx->pc = 0x168f28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x168f2c: 0x3c050027
    ctx->pc = 0x168f2cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)39 << 16));
    // 0x168f30: 0xffbf0000
    ctx->pc = 0x168f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168f34: 0x24040020
    ctx->pc = 0x168f34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    // 0x168f38: 0x24a51808
    ctx->pc = 0x168f38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 6152));
    // 0x168f3c: 0xdfbf0000
    ctx->pc = 0x168f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168f40: 0x805e406
    ctx->pc = 0x168F40u;
    ctx->pc = 0x168F44u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x179018u;
    entry_179018_0x1790a8(rdram, ctx, runtime); return;
    ctx->pc = 0x168F48u;
}
