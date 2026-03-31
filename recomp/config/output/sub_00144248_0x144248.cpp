#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00144248
// Address: 0x144248 - 0x144268
void sub_00144248_0x144248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x144248u;

    // 0x144248: 0x27bdfff0
    ctx->pc = 0x144248u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14424c: 0xffbf0000
    ctx->pc = 0x14424cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144250: 0xc051552
    ctx->pc = 0x144250u;
    SET_GPR_U32(ctx, 31, 0x144258u);
    ctx->pc = 0x144254u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x145548u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00145548_0x145548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144258u; }
    }
    if (ctx->pc != 0x144258u) { return; }
    ctx->pc = 0x144258u;
    // 0x144258: 0xdfbf0000
    ctx->pc = 0x144258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14425c: 0x3e00008
    ctx->pc = 0x14425Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144260u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144264u;
    // 0x144264: 0x0
    ctx->pc = 0x144264u;
    // NOP
}
