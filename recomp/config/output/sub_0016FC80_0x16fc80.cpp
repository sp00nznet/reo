#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016FC80
// Address: 0x16fc80 - 0x16fca0
void sub_0016FC80_0x16fc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16fc80u;

    // 0x16fc80: 0x27bdfff0
    ctx->pc = 0x16fc80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16fc84: 0x2405ffff
    ctx->pc = 0x16fc84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16fc88: 0xffbf0000
    ctx->pc = 0x16fc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16fc8c: 0x24060015
    ctx->pc = 0x16fc8cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 21));
    // 0x16fc90: 0xdfbf0000
    ctx->pc = 0x16fc90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fc94: 0x80558b4
    ctx->pc = 0x16FC94u;
    ctx->pc = 0x16FC98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1562D0u;
    sub_001562D0_0x1562d0(rdram, ctx, runtime); return;
    ctx->pc = 0x16FC9Cu;
    // 0x16fc9c: 0x0
    ctx->pc = 0x16fc9cu;
    // NOP
}
