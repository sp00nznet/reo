#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00125248
// Address: 0x125248 - 0x125278
void sub_00125248_0x125248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125248u;

    // 0x125248: 0x27bdfff0
    ctx->pc = 0x125248u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12524c: 0xffb00000
    ctx->pc = 0x12524cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x125250: 0x80802d
    ctx->pc = 0x125250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125254: 0xffbf0008
    ctx->pc = 0x125254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x125258: 0xc04d408
    ctx->pc = 0x125258u;
    SET_GPR_U32(ctx, 31, 0x125260u);
    ctx->pc = 0x12525Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x135020u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135020_0x135020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125260u; }
    }
    if (ctx->pc != 0x125260u) { return; }
    ctx->pc = 0x125260u;
    // 0x125260: 0xae000004
    ctx->pc = 0x125260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x125264: 0xdfbf0008
    ctx->pc = 0x125264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125268: 0xdfb00000
    ctx->pc = 0x125268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12526c: 0x3e00008
    ctx->pc = 0x12526Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125270u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125274u;
    // 0x125274: 0x0
    ctx->pc = 0x125274u;
    // NOP
}
