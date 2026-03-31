#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BE410
// Address: 0x1be410 - 0x1be450
void sub_001BE410_0x1be410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1be410u;

    // 0x1be410: 0x27bdffe0
    ctx->pc = 0x1be410u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1be414: 0xa0302d
    ctx->pc = 0x1be414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be418: 0xffbf0010
    ctx->pc = 0x1be418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1be41c: 0x3c050025
    ctx->pc = 0x1be41cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1be420: 0x7fb00000
    ctx->pc = 0x1be420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1be424: 0x24a504a0
    ctx->pc = 0x1be424u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1184));
    // 0x1be428: 0xc042a0c
    ctx->pc = 0x1BE428u;
    SET_GPR_U32(ctx, 31, 0x1BE430u);
    ctx->pc = 0x1BE42Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE430u; }
    }
    if (ctx->pc != 0x1BE430u) { return; }
    ctx->pc = 0x1BE430u;
    // 0x1be430: 0xc04336a
    ctx->pc = 0x1BE430u;
    SET_GPR_U32(ctx, 31, 0x1BE438u);
    ctx->pc = 0x1BE434u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 8));
    ctx->pc = 0x10CDA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CDA8_0x10cda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE438u; }
    }
    if (ctx->pc != 0x1BE438u) { return; }
    ctx->pc = 0x1BE438u;
    // 0x1be438: 0xdfbf0010
    ctx->pc = 0x1be438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be43c: 0x7bb00000
    ctx->pc = 0x1be43cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be440: 0x3e00008
    ctx->pc = 0x1BE440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE444u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE448u;
    // 0x1be448: 0x0
    ctx->pc = 0x1be448u;
    // NOP
    // 0x1be44c: 0x0
    ctx->pc = 0x1be44cu;
    // NOP
}
