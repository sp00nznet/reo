#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13f038
// Address: 0x13f038 - 0x13f058
void entry_13f038_0x13f058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13f038u;

    // 0x13f038: 0x5102a
    ctx->pc = 0x13f038u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 5)));
    // 0x13f03c: 0x2406fc19
    ctx->pc = 0x13f03cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294966297));
    // 0x13f040: 0x2280b
    ctx->pc = 0x13f040u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 0));
    // 0x13f044: 0x28a3fc19
    ctx->pc = 0x13f044u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 4294966297));
    // 0x13f048: 0xc3280b
    ctx->pc = 0x13f048u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 6));
    // 0x13f04c: 0x3e00008
    ctx->pc = 0x13F04Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F050u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F054u;
    // 0x13f054: 0x0
    ctx->pc = 0x13f054u;
    // NOP
}
