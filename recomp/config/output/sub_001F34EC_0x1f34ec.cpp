#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F34EC
// Address: 0x1f34ec - 0x1f351c
void sub_001F34EC_0x1f34ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f34ecu;

    // 0x1f34ec: 0x27bdffe0
    ctx->pc = 0x1f34ecu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f34f0: 0xffbe0010
    ctx->pc = 0x1f34f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1f34f4: 0x3a0f02d
    ctx->pc = 0x1f34f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f34f8: 0x80102d
    ctx->pc = 0x1f34f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f34fc: 0x2442002c
    ctx->pc = 0x1f34fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 44));
    // 0x1f3500: 0xafc20000
    ctx->pc = 0x1f3500u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x1f3504: 0x8fc20000
    ctx->pc = 0x1f3504u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f3508: 0x3c0e82d
    ctx->pc = 0x1f3508u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f350c: 0xdfbe0010
    ctx->pc = 0x1f350cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3510: 0x27bd0020
    ctx->pc = 0x1f3510u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f3514: 0x3e00008
    ctx->pc = 0x1F3514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F351Cu;
}
