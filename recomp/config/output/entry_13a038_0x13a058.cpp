#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13a038
// Address: 0x13a038 - 0x13a058
void entry_13a038_0x13a058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13a038u;

    // 0x13a038: 0x3c020022
    ctx->pc = 0x13a038u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13a03c: 0x3e00008
    ctx->pc = 0x13A03Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A040u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294957288), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13A044u;
    // 0x13a044: 0x0
    ctx->pc = 0x13a044u;
    // NOP
    // 0x13a048: 0x3c030022
    ctx->pc = 0x13a048u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x13a04c: 0x3e00008
    ctx->pc = 0x13A04Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A050u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294957288)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13A054u;
    // 0x13a054: 0x0
    ctx->pc = 0x13a054u;
    // NOP
}
