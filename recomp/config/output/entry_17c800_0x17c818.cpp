#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17c800
// Address: 0x17c800 - 0x17c818
void entry_17c800_0x17c818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17c800u;

    // 0x17c800: 0x27bdfff0
    ctx->pc = 0x17c800u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c804: 0xffbf0000
    ctx->pc = 0x17c804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c808: 0x8c84003c
    ctx->pc = 0x17c808u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x17c80c: 0xdfbf0000
    ctx->pc = 0x17c80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c810: 0x805f206
    ctx->pc = 0x17C810u;
    ctx->pc = 0x17C814u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17C818u;
    entry_17c818_0x17c8d0(rdram, ctx, runtime); return;
    ctx->pc = 0x17C818u;
}
