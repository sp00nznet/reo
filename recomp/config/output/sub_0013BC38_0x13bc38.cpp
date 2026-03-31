#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013BC38
// Address: 0x13bc38 - 0x13bc50
void sub_0013BC38_0x13bc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13bc38u;

    // 0x13bc38: 0x27bdfff0
    ctx->pc = 0x13bc38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13bc3c: 0xffbf0000
    ctx->pc = 0x13bc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13bc40: 0xdfbf0000
    ctx->pc = 0x13bc40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bc44: 0x804eccc
    ctx->pc = 0x13BC44u;
    ctx->pc = 0x13BC48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13B330u;
    sub_0013B330_0x13b330(rdram, ctx, runtime); return;
    ctx->pc = 0x13BC4Cu;
    // 0x13bc4c: 0x0
    ctx->pc = 0x13bc4cu;
    // NOP
}
