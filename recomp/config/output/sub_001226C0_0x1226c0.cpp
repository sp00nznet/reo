#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001226C0
// Address: 0x1226c0 - 0x122708
void sub_001226C0_0x1226c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1226c0u;

    // 0x1226c0: 0x27bdfff0
    ctx->pc = 0x1226c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1226c4: 0xffbf0000
    ctx->pc = 0x1226c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1226c8: 0xdfbf0000
    ctx->pc = 0x1226c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1226cc: 0x8048070
    ctx->pc = 0x1226CCu;
    ctx->pc = 0x1226D0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1201C0u;
    entry_1201c0_0x1204e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1226D4u;
    // 0x1226d4: 0x0
    ctx->pc = 0x1226d4u;
    // NOP
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
