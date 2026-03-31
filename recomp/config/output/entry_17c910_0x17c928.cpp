#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17c910
// Address: 0x17c910 - 0x17c928
void entry_17c910_0x17c928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17c910u;

    // 0x17c910: 0x27bdfff0
    ctx->pc = 0x17c910u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c914: 0xffbf0000
    ctx->pc = 0x17c914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c918: 0x8c84003c
    ctx->pc = 0x17c918u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x17c91c: 0xdfbf0000
    ctx->pc = 0x17c91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c920: 0x8053fa4
    ctx->pc = 0x17C920u;
    ctx->pc = 0x17C924u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x14FE90u;
    entry_14fe90_0x14ff48(rdram, ctx, runtime); return;
    ctx->pc = 0x17C928u;
}
