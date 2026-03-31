#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00164580
// Address: 0x164580 - 0x1645c0
void sub_00164580_0x164580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x164580u;

    // 0x164580: 0x27bdfff0
    ctx->pc = 0x164580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164584: 0xffb00000
    ctx->pc = 0x164584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164588: 0xffbf0008
    ctx->pc = 0x164588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16458c: 0xc04c390
    ctx->pc = 0x16458Cu;
    SET_GPR_U32(ctx, 31, 0x164594u);
    ctx->pc = 0x164590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130E40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130E40_0x130e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164594u; }
    }
    if (ctx->pc != 0x164594u) { return; }
    ctx->pc = 0x164594u;
    // 0x164594: 0xae020000
    ctx->pc = 0x164594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x164598: 0xdfbf0008
    ctx->pc = 0x164598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16459c: 0xdfb00000
    ctx->pc = 0x16459cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1645a0: 0x3e00008
    ctx->pc = 0x1645A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1645A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1645A8u;
    // 0x1645a8: 0x27bdfff0
    ctx->pc = 0x1645a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1645ac: 0xffbf0000
    ctx->pc = 0x1645acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1645b0: 0xdfbf0000
    ctx->pc = 0x1645b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1645b4: 0x804c3f8
    ctx->pc = 0x1645B4u;
    ctx->pc = 0x1645B8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x130FE0u;
    entry_130fe0_0x130fe8(rdram, ctx, runtime); return;
    ctx->pc = 0x1645BCu;
    // 0x1645bc: 0x0
    ctx->pc = 0x1645bcu;
    // NOP
}
