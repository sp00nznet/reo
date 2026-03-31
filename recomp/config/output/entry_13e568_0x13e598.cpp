#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13e568
// Address: 0x13e568 - 0x13e598
void entry_13e568_0x13e598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13e568u;

    // 0x13e568: 0x27bdffe0
    ctx->pc = 0x13e568u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13e56c: 0x24060001
    ctx->pc = 0x13e56cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e570: 0xafa40000
    ctx->pc = 0x13e570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x13e574: 0x2404000b
    ctx->pc = 0x13e574u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11));
    // 0x13e578: 0x3a0282d
    ctx->pc = 0x13e578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e57c: 0x382d
    ctx->pc = 0x13e57cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e580: 0xffbf0010
    ctx->pc = 0x13e580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13e584: 0xc04e518
    ctx->pc = 0x13E584u;
    SET_GPR_U32(ctx, 31, 0x13E58Cu);
    ctx->pc = 0x13E588u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x139460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139460_0x139460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E58Cu; }
    }
    if (ctx->pc != 0x13E58Cu) { return; }
    ctx->pc = 0x13E58Cu;
    // 0x13e58c: 0xdfbf0010
    ctx->pc = 0x13e58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e590: 0x3e00008
    ctx->pc = 0x13E590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E594u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E598u;
}
