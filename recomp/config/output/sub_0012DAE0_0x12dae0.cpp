#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012DAE0
// Address: 0x12dae0 - 0x12db00
void sub_0012DAE0_0x12dae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12dae0u;

    // 0x12dae0: 0x3c040022
    ctx->pc = 0x12dae0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)34 << 16));
    // 0x12dae4: 0x102d
    ctx->pc = 0x12dae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dae8: 0x24848748
    ctx->pc = 0x12dae8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936392));
    // 0x12daec: 0x8c830000
    ctx->pc = 0x12daecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12daf0: 0x2463ffff
    ctx->pc = 0x12daf0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12daf4: 0x3e00008
    ctx->pc = 0x12DAF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DAF8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12DAFCu;
    // 0x12dafc: 0x0
    ctx->pc = 0x12dafcu;
    // NOP
}
