#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00128328
// Address: 0x128328 - 0x128348
void sub_00128328_0x128328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x128328u;

    // 0x128328: 0x27bdfff0
    ctx->pc = 0x128328u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12832c: 0x852821
    ctx->pc = 0x12832cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x128330: 0xffbf0000
    ctx->pc = 0x128330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x128334: 0x24a5ffff
    ctx->pc = 0x128334u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x128338: 0xdfbf0000
    ctx->pc = 0x128338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12833c: 0x8045416
    ctx->pc = 0x12833Cu;
    ctx->pc = 0x128340u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x115058u;
    sub_00115058_0x115058(rdram, ctx, runtime); return;
    ctx->pc = 0x128344u;
    // 0x128344: 0x0
    ctx->pc = 0x128344u;
    // NOP
}
