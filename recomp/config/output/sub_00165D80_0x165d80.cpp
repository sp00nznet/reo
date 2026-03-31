#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00165D80
// Address: 0x165d80 - 0x165da0
void sub_00165D80_0x165d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x165d80u;

    // 0x165d80: 0x27bdfff0
    ctx->pc = 0x165d80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x165d84: 0xffbf0000
    ctx->pc = 0x165d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165d88: 0xc04c646
    ctx->pc = 0x165D88u;
    SET_GPR_U32(ctx, 31, 0x165D90u);
    ctx->pc = 0x131918u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131918_0x131918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165D90u; }
    }
    if (ctx->pc != 0x165D90u) { return; }
    ctx->pc = 0x165D90u;
    // 0x165d90: 0xdfbf0000
    ctx->pc = 0x165d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165d94: 0x102d
    ctx->pc = 0x165d94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165d98: 0x3e00008
    ctx->pc = 0x165D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165D9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165DA0u;
}
