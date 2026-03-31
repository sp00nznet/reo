#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015FEA0
// Address: 0x15fea0 - 0x15feb8
void sub_0015FEA0_0x15fea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15fea0u;

    // 0x15fea0: 0x27bdfff0
    ctx->pc = 0x15fea0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15fea4: 0xffbf0000
    ctx->pc = 0x15fea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15fea8: 0x8c840040
    ctx->pc = 0x15fea8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x15feac: 0xdfbf0000
    ctx->pc = 0x15feacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15feb0: 0x805d58e
    ctx->pc = 0x15FEB0u;
    ctx->pc = 0x15FEB4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x175638u;
    entry_175638_0x175710(rdram, ctx, runtime); return;
    ctx->pc = 0x15FEB8u;
}
