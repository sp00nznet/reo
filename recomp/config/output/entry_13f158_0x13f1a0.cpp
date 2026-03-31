#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13f158
// Address: 0x13f158 - 0x13f1a0
void entry_13f158_0x13f1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13f158u;

    // 0x13f158: 0x3c040024
    ctx->pc = 0x13f158u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13f15c: 0x27bdfff0
    ctx->pc = 0x13f15cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f160: 0xffbf0000
    ctx->pc = 0x13f160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f164: 0xc045a12
    ctx->pc = 0x13F164u;
    SET_GPR_U32(ctx, 31, 0x13F16Cu);
    ctx->pc = 0x13F168u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957448));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F16Cu; }
    }
    if (ctx->pc != 0x13F16Cu) { return; }
    ctx->pc = 0x13F16Cu;
    // 0x13f16c: 0x102d
    ctx->pc = 0x13f16cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f170: 0xdfbf0000
    ctx->pc = 0x13f170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f174: 0x3e00008
    ctx->pc = 0x13F174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F178u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F17Cu;
    // 0x13f17c: 0x0
    ctx->pc = 0x13f17cu;
    // NOP
    // 0x13f180: 0x27bdfff0
    ctx->pc = 0x13f180u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f184: 0x3c040024
    ctx->pc = 0x13f184u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13f188: 0xffbf0000
    ctx->pc = 0x13f188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f18c: 0x2484d9b0
    ctx->pc = 0x13f18cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957488));
    // 0x13f190: 0xdfbf0000
    ctx->pc = 0x13f190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f194: 0x8045a12
    ctx->pc = 0x13F194u;
    ctx->pc = 0x13F198u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x116848u;
    sub_00116848_0x116848(rdram, ctx, runtime); return;
    ctx->pc = 0x13F19Cu;
    // 0x13f19c: 0x0
    ctx->pc = 0x13f19cu;
    // NOP
}
