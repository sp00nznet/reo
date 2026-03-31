#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1226f0
// Address: 0x1226f0 - 0x122708
void entry_1226f0_0x122708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1226f0u;

    // 0x1226f0: 0x27bdfff0
    ctx->pc = 0x1226f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1226f4: 0xffbf0000
    ctx->pc = 0x1226f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1226f8: 0xdfbf0000
    ctx->pc = 0x1226f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1226fc: 0x8048242
    ctx->pc = 0x1226FCu;
    ctx->pc = 0x122700u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x120908u;
    entry_120908_0x120ae8(rdram, ctx, runtime); return;
    ctx->pc = 0x122704u;
    // 0x122704: 0x0
    ctx->pc = 0x122704u;
    // NOP
}
