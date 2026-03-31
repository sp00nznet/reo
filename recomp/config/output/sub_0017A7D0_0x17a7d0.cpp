#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017A7D0
// Address: 0x17a7d0 - 0x17a818
void sub_0017A7D0_0x17a7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17a7d0u;

    // 0x17a7d0: 0x3e00008
    ctx->pc = 0x17A7D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A7D4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A7D8u;
    // 0x17a7d8: 0x24820008
    ctx->pc = 0x17a7d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 8));
    // 0x17a7dc: 0x24030001
    ctx->pc = 0x17a7dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a7e0: 0xac460008
    ctx->pc = 0x17a7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x17a7e4: 0xac470000
    ctx->pc = 0x17a7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x17a7e8: 0xac450004
    ctx->pc = 0x17a7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x17a7ec: 0x3e00008
    ctx->pc = 0x17A7ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A7F0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A7F4u;
    // 0x17a7f4: 0x0
    ctx->pc = 0x17a7f4u;
    // NOP
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
