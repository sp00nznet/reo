#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012C718
// Address: 0x12c718 - 0x12c730
void sub_0012C718_0x12c718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12c718u;

    // 0x12c718: 0x27bdfff0
    ctx->pc = 0x12c718u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c71c: 0xffbf0000
    ctx->pc = 0x12c71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c720: 0xdfbf0000
    ctx->pc = 0x12c720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c724: 0x804fb28
    ctx->pc = 0x12C724u;
    ctx->pc = 0x12C728u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13ECA0u;
    entry_13eca0_0x13ecb0(rdram, ctx, runtime); return;
    ctx->pc = 0x12C72Cu;
    // 0x12c72c: 0x0
    ctx->pc = 0x12c72cu;
    // NOP
}
