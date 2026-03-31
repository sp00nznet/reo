#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001637E8
// Address: 0x1637e8 - 0x163818
void sub_001637E8_0x1637e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1637e8u;

    // 0x1637e8: 0x27bdfff0
    ctx->pc = 0x1637e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1637ec: 0x24040006
    ctx->pc = 0x1637ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1637f0: 0xffbf0000
    ctx->pc = 0x1637f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1637f4: 0xdfbf0000
    ctx->pc = 0x1637f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1637f8: 0x805075c
    ctx->pc = 0x1637F8u;
    ctx->pc = 0x1637FCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141D70u;
    entry_141d70_0x141db0(rdram, ctx, runtime); return;
    ctx->pc = 0x163800u;
    // 0x163800: 0x27bdfff0
    ctx->pc = 0x163800u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x163804: 0xffbf0000
    ctx->pc = 0x163804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163808: 0xdfbf0000
    ctx->pc = 0x163808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16380c: 0x804ad88
    ctx->pc = 0x16380Cu;
    ctx->pc = 0x163810u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12B620u;
    sub_0012B620_0x12b620(rdram, ctx, runtime); return;
    ctx->pc = 0x163814u;
    // 0x163814: 0x0
    ctx->pc = 0x163814u;
    // NOP
}
