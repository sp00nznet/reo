#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001416E8
// Address: 0x1416e8 - 0x141700
void sub_001416E8_0x1416e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1416e8u;

    // 0x1416e8: 0x27bdfff0
    ctx->pc = 0x1416e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1416ec: 0x24040001
    ctx->pc = 0x1416ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1416f0: 0xffbf0000
    ctx->pc = 0x1416f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1416f4: 0xdfbf0000
    ctx->pc = 0x1416f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1416f8: 0x8050590
    ctx->pc = 0x1416F8u;
    ctx->pc = 0x1416FCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141640u;
    entry_141640_0x1416d0(rdram, ctx, runtime); return;
    ctx->pc = 0x141700u;
}
