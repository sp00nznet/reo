#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17a778
// Address: 0x17a778 - 0x17a7b8
void entry_17a778_0x17a7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17a778u;

    // 0x17a778: 0x27bdfff0
    ctx->pc = 0x17a778u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a77c: 0xc0382d
    ctx->pc = 0x17a77cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a780: 0xffb00000
    ctx->pc = 0x17a780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a784: 0x80802d
    ctx->pc = 0x17a784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a788: 0xffbf0008
    ctx->pc = 0x17a788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17a78c: 0x26020008
    ctx->pc = 0x17a78cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 8));
    // 0x17a790: 0x8c460008
    ctx->pc = 0x17a790u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17a794: 0x8c440000
    ctx->pc = 0x17a794u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17a798: 0xc053e42
    ctx->pc = 0x17A798u;
    SET_GPR_U32(ctx, 31, 0x17A7A0u);
    ctx->pc = 0x17A79Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x14F908u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0014F908_0x14f908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A7A0u; }
    }
    if (ctx->pc != 0x17A7A0u) { return; }
    ctx->pc = 0x17A7A0u;
    // 0x17a7a0: 0xae000004
    ctx->pc = 0x17a7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x17a7a4: 0xdfbf0008
    ctx->pc = 0x17a7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a7a8: 0xdfb00000
    ctx->pc = 0x17a7a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a7ac: 0x3e00008
    ctx->pc = 0x17A7ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A7B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A7B4u;
    // 0x17a7b4: 0x0
    ctx->pc = 0x17a7b4u;
    // NOP
}
