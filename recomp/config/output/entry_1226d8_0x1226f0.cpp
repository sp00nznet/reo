#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1226d8
// Address: 0x1226d8 - 0x1226f0
void entry_1226d8_0x1226f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1226d8u;

    // 0x1226d8: 0x27bdfff0
    ctx->pc = 0x1226d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1226dc: 0xffbf0000
    ctx->pc = 0x1226dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1226e0: 0xdfbf0000
    ctx->pc = 0x1226e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1226e4: 0x8048138
    ctx->pc = 0x1226E4u;
    ctx->pc = 0x1226E8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1204E0u;
    entry_1204e0_0x120908(rdram, ctx, runtime); return;
    ctx->pc = 0x1226ECu;
    // 0x1226ec: 0x0
    ctx->pc = 0x1226ecu;
    // NOP
}
