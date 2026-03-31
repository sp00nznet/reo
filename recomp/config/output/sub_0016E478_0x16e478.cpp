#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016E478
// Address: 0x16e478 - 0x16e4b0
void sub_0016E478_0x16e478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16e478u;

    // 0x16e478: 0x8cc30000
    ctx->pc = 0x16e478u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16e47c: 0x8cc80010
    ctx->pc = 0x16e47cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x16e480: 0xac830000
    ctx->pc = 0x16e480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x16e484: 0x8cc20004
    ctx->pc = 0x16e484u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x16e488: 0xac820004
    ctx->pc = 0x16e488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x16e48c: 0x8cc30008
    ctx->pc = 0x16e48cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x16e490: 0xac830008
    ctx->pc = 0x16e490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x16e494: 0x8cc2000c
    ctx->pc = 0x16e494u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x16e498: 0xac870020
    ctx->pc = 0x16e498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
    // 0x16e49c: 0xac82000c
    ctx->pc = 0x16e49cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x16e4a0: 0xac880014
    ctx->pc = 0x16e4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 8));
    // 0x16e4a4: 0x3e00008
    ctx->pc = 0x16E4A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E4A8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E4ACu;
    // 0x16e4ac: 0x0
    ctx->pc = 0x16e4acu;
    // NOP
}
