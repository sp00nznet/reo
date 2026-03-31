#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00160B78
// Address: 0x160b78 - 0x160b90
void sub_00160B78_0x160b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x160b78u;

    // 0x160b78: 0x27bdfff0
    ctx->pc = 0x160b78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x160b7c: 0xffbf0000
    ctx->pc = 0x160b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x160b80: 0xdfbf0000
    ctx->pc = 0x160b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160b84: 0x805f45e
    ctx->pc = 0x160B84u;
    ctx->pc = 0x160B88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D178u;
    sub_0017D178_0x17d178(rdram, ctx, runtime); return;
    ctx->pc = 0x160B8Cu;
    // 0x160b8c: 0x0
    ctx->pc = 0x160b8cu;
    // NOP
}
