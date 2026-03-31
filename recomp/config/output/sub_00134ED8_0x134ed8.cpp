#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00134ED8
// Address: 0x134ed8 - 0x134f00
void sub_00134ED8_0x134ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x134ed8u;

    // 0x134ed8: 0x94a30000
    ctx->pc = 0x134ed8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x134edc: 0xa4830028
    ctx->pc = 0x134edcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x134ee0: 0x94c20000
    ctx->pc = 0x134ee0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x134ee4: 0xa482002a
    ctx->pc = 0x134ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x134ee8: 0x94a30002
    ctx->pc = 0x134ee8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x134eec: 0xa483002c
    ctx->pc = 0x134eecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x134ef0: 0x94c20002
    ctx->pc = 0x134ef0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x134ef4: 0x3e00008
    ctx->pc = 0x134EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134EF8u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134EFCu;
    // 0x134efc: 0x0
    ctx->pc = 0x134efcu;
    // NOP
}
