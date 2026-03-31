#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00103780
// Address: 0x103780 - 0x1037a8
void sub_00103780_0x103780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x103780u;

    // 0x103780: 0x27bdfff0
    ctx->pc = 0x103780u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x103784: 0x282d
    ctx->pc = 0x103784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103788: 0xffbf0000
    ctx->pc = 0x103788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10378c: 0xc0432c6
    ctx->pc = 0x10378Cu;
    SET_GPR_U32(ctx, 31, 0x103794u);
    ctx->pc = 0x103790u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x10CB18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CB18_0x10cb18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103794u; }
    }
    if (ctx->pc != 0x103794u) { return; }
    ctx->pc = 0x103794u;
    // 0x103794: 0xdfbf0000
    ctx->pc = 0x103794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103798: 0x2103c
    ctx->pc = 0x103798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10379c: 0x2103f
    ctx->pc = 0x10379cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1037a0: 0x3e00008
    ctx->pc = 0x1037A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1037A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1037A8u;
}
