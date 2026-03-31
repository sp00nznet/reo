#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00176338
// Address: 0x176338 - 0x176350
void sub_00176338_0x176338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x176338u;

    // 0x176338: 0x27bdfff0
    ctx->pc = 0x176338u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17633c: 0xffbf0000
    ctx->pc = 0x17633cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x176340: 0xdfbf0000
    ctx->pc = 0x176340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176344: 0x805d8d4
    ctx->pc = 0x176344u;
    ctx->pc = 0x176348u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x176350u;
    sub_00176350_0x176350(rdram, ctx, runtime); return;
    ctx->pc = 0x17634Cu;
    // 0x17634c: 0x0
    ctx->pc = 0x17634cu;
    // NOP
}
