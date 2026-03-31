#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_15f870
// Address: 0x15f870 - 0x15f8e0
void entry_15f870_0x15f8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15f870u;

    // 0x15f870: 0x27bdfff0
    ctx->pc = 0x15f870u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15f874: 0x3c020023
    ctx->pc = 0x15f874u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x15f878: 0xffb00000
    ctx->pc = 0x15f878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15f87c: 0x2450ef48
    ctx->pc = 0x15f87cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294963016));
    // 0x15f880: 0x8e030000
    ctx->pc = 0x15f880u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f884: 0x10600012
    ctx->pc = 0x15F884u;
    {
        const bool branch_taken_0x15f884 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x15F888u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x15f884) {
            ctx->pc = 0x15F8D0u;
            goto label_15f8d0;
        }
    }
    ctx->pc = 0x15F88Cu;
    // 0x15f88c: 0xc057e38
    ctx->pc = 0x15F88Cu;
    SET_GPR_U32(ctx, 31, 0x15F894u);
    ctx->pc = 0x15F8E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F8E0_0x15f8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F894u; }
    }
    if (ctx->pc != 0x15F894u) { return; }
    ctx->pc = 0x15F894u;
    // 0x15f894: 0x3c060027
    ctx->pc = 0x15f894u;
    SET_GPR_U32(ctx, 6, ((uint32_t)39 << 16));
    // 0x15f898: 0x24c6c640
    ctx->pc = 0x15f898u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294952512));
    // 0x15f89c: 0x24054000
    ctx->pc = 0x15f89cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16384));
    // 0x15f8a0: 0xc057e40
    ctx->pc = 0x15F8A0u;
    SET_GPR_U32(ctx, 31, 0x15F8A8u);
    ctx->pc = 0x15F8A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15F900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F900_0x15f900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F8A8u; }
    }
    if (ctx->pc != 0x15F8A8u) { return; }
    ctx->pc = 0x15F8A8u;
    // 0x15f8a8: 0xc057e74
    ctx->pc = 0x15F8A8u;
    SET_GPR_U32(ctx, 31, 0x15F8B0u);
    ctx->pc = 0x15F8ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x15F9D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F9D0_0x15f9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F8B0u; }
    }
    if (ctx->pc != 0x15F8B0u) { return; }
    ctx->pc = 0x15F8B0u;
    // 0x15f8b0: 0x3c040027
    ctx->pc = 0x15f8b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)39 << 16));
    // 0x15f8b4: 0x24848640
    ctx->pc = 0x15f8b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936128));
    // 0x15f8b8: 0x24054000
    ctx->pc = 0x15f8b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16384));
    // 0x15f8bc: 0xc057e5a
    ctx->pc = 0x15F8BCu;
    SET_GPR_U32(ctx, 31, 0x15F8C4u);
    ctx->pc = 0x15F8C0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15F968u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F968_0x15f968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F8C4u; }
    }
    if (ctx->pc != 0x15F8C4u) { return; }
    ctx->pc = 0x15F8C4u;
    // 0x15f8c4: 0xc057e74
    ctx->pc = 0x15F8C4u;
    SET_GPR_U32(ctx, 31, 0x15F8CCu);
    ctx->pc = 0x15F8C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x15F9D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F9D0_0x15f9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F8CCu; }
    }
    if (ctx->pc != 0x15F8CCu) { return; }
    ctx->pc = 0x15F8CCu;
    // 0x15f8cc: 0xae000000
    ctx->pc = 0x15f8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_15f8d0:
    // 0x15f8d0: 0xdfb00000
    ctx->pc = 0x15f8d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f8d4: 0xdfbf0008
    ctx->pc = 0x15f8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15f8d8: 0x3e00008
    ctx->pc = 0x15F8D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F8DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15F8D0u: goto label_15f8d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15F8E0u;
}
