#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17a7f8
// Address: 0x17a7f8 - 0x17a818
void entry_17a7f8_0x17a818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17a7f8u;

    // 0x17a7f8: 0x24840008
    ctx->pc = 0x17a7f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
    // 0x17a7fc: 0x8c820000
    ctx->pc = 0x17a7fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17a800: 0xace20000
    ctx->pc = 0x17a800u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x17a804: 0x8c830004
    ctx->pc = 0x17a804u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17a808: 0xaca30000
    ctx->pc = 0x17a808u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x17a80c: 0x8c820008
    ctx->pc = 0x17a80cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17a810: 0x3e00008
    ctx->pc = 0x17A810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A814u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A818u;
}
