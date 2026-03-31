#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012C810
// Address: 0x12c810 - 0x12c828
void sub_0012C810_0x12c810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12c810u;

    // 0x12c810: 0x27bdfff0
    ctx->pc = 0x12c810u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c814: 0xffbf0000
    ctx->pc = 0x12c814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c818: 0xdfbf0000
    ctx->pc = 0x12c818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c81c: 0x804fc16
    ctx->pc = 0x12C81Cu;
    ctx->pc = 0x12C820u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13F058u;
    entry_13f058_0x13f080(rdram, ctx, runtime); return;
    ctx->pc = 0x12C824u;
    // 0x12c824: 0x0
    ctx->pc = 0x12c824u;
    // NOP
}
