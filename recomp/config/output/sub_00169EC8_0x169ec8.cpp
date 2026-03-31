#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00169EC8
// Address: 0x169ec8 - 0x169ee0
void sub_00169EC8_0x169ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x169ec8u;

    // 0x169ec8: 0x27bdfff0
    ctx->pc = 0x169ec8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169ecc: 0xffbf0000
    ctx->pc = 0x169eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169ed0: 0xdfbf0000
    ctx->pc = 0x169ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169ed4: 0x804af5e
    ctx->pc = 0x169ED4u;
    ctx->pc = 0x169ED8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12BD78u;
    sub_0012BD78_0x12bd78(rdram, ctx, runtime); return;
    ctx->pc = 0x169EDCu;
    // 0x169edc: 0x0
    ctx->pc = 0x169edcu;
    // NOP
}
