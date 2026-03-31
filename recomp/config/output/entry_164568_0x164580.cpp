#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_164568
// Address: 0x164568 - 0x164580
void entry_164568_0x164580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x164568u;

    // 0x164568: 0x27bdfff0
    ctx->pc = 0x164568u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16456c: 0xffbf0000
    ctx->pc = 0x16456cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164570: 0xdfbf0000
    ctx->pc = 0x164570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164574: 0x804c37e
    ctx->pc = 0x164574u;
    ctx->pc = 0x164578u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x130DF8u;
    entry_130df8_0x130e18(rdram, ctx, runtime); return;
    ctx->pc = 0x16457Cu;
    // 0x16457c: 0x0
    ctx->pc = 0x16457cu;
    // NOP
}
