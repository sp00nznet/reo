#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00172720
// Address: 0x172720 - 0x172738
void sub_00172720_0x172720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x172720u;

    // 0x172720: 0x27bdfff0
    ctx->pc = 0x172720u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172724: 0x24050002
    ctx->pc = 0x172724u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x172728: 0xffbf0000
    ctx->pc = 0x172728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17272c: 0xdfbf0000
    ctx->pc = 0x17272cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172730: 0x805ded2
    ctx->pc = 0x172730u;
    ctx->pc = 0x172734u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x177B48u;
    entry_177b48_0x177be0(rdram, ctx, runtime); return;
    ctx->pc = 0x172738u;
}
