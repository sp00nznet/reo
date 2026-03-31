#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C1260
// Address: 0x1c1260 - 0x1c1270
void sub_001C1260_0x1c1260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c1260u;

    // 0x1c1260: 0x3c010032
    ctx->pc = 0x1c1260u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c1264: 0x3e00008
    ctx->pc = 0x1C1264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1268u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 27764)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C126Cu;
    // 0x1c126c: 0x0
    ctx->pc = 0x1c126cu;
    // NOP
}
