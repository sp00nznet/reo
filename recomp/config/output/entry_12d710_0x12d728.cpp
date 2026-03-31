#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_12d710
// Address: 0x12d710 - 0x12d728
void entry_12d710_0x12d728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12d710u;

    // 0x12d710: 0x27bdfff0
    ctx->pc = 0x12d710u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d714: 0xffbf0000
    ctx->pc = 0x12d714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d718: 0xdfbf0000
    ctx->pc = 0x12d718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d71c: 0x8049416
    ctx->pc = 0x12D71Cu;
    ctx->pc = 0x12D720u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x125058u;
    entry_125058_0x1250a0(rdram, ctx, runtime); return;
    ctx->pc = 0x12D724u;
    // 0x12d724: 0x0
    ctx->pc = 0x12d724u;
    // NOP
}
