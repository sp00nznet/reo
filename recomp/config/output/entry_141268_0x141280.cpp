#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_141268
// Address: 0x141268 - 0x141280
void entry_141268_0x141280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x141268u;

    // 0x141268: 0x27bdfff0
    ctx->pc = 0x141268u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14126c: 0xffbf0000
    ctx->pc = 0x14126cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141270: 0xdfbf0000
    ctx->pc = 0x141270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141274: 0x804e55a
    ctx->pc = 0x141274u;
    ctx->pc = 0x141278u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x139568u;
    sub_00139568_0x139568(rdram, ctx, runtime); return;
    ctx->pc = 0x14127Cu;
    // 0x14127c: 0x0
    ctx->pc = 0x14127cu;
    // NOP
}
