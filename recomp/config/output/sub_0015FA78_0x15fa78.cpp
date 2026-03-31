#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015FA78
// Address: 0x15fa78 - 0x15fa90
void sub_0015FA78_0x15fa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15fa78u;

    // 0x15fa78: 0x27bdfff0
    ctx->pc = 0x15fa78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15fa7c: 0xffbf0000
    ctx->pc = 0x15fa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15fa80: 0xdfbf0000
    ctx->pc = 0x15fa80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fa84: 0x8057dfc
    ctx->pc = 0x15FA84u;
    ctx->pc = 0x15FA88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x15F7F0u;
    entry_15f7f0_0x15f870(rdram, ctx, runtime); return;
    ctx->pc = 0x15FA8Cu;
    // 0x15fa8c: 0x0
    ctx->pc = 0x15fa8cu;
    // NOP
}
