#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13aee8
// Address: 0x13aee8 - 0x13af00
void entry_13aee8_0x13af00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13aee8u;

    // 0x13aee8: 0x27bdfff0
    ctx->pc = 0x13aee8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13aeec: 0xffbf0000
    ctx->pc = 0x13aeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13aef0: 0xdfbf0000
    ctx->pc = 0x13aef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13aef4: 0x804e0d8
    ctx->pc = 0x13AEF4u;
    ctx->pc = 0x13AEF8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x138360u;
    entry_138360_0x1383e8(rdram, ctx, runtime); return;
    ctx->pc = 0x13AEFCu;
    // 0x13aefc: 0x0
    ctx->pc = 0x13aefcu;
    // NOP
}
