#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_174878
// Address: 0x174878 - 0x1748c0
void entry_174878_0x1748c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x174878u;

    // 0x174878: 0x27bdfff0
    ctx->pc = 0x174878u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17487c: 0xffb00000
    ctx->pc = 0x17487cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174880: 0x80802d
    ctx->pc = 0x174880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174884: 0xffbf0008
    ctx->pc = 0x174884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x174888: 0x8e022ab0
    ctx->pc = 0x174888u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 10928)));
    // 0x17488c: 0x50400008
    ctx->pc = 0x17488Cu;
    {
        const bool branch_taken_0x17488c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17488c) {
            ctx->pc = 0x174890u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1748B0u;
            goto label_1748b0;
        }
    }
    ctx->pc = 0x174894u;
    // 0x174894: 0xc05d230
    ctx->pc = 0x174894u;
    SET_GPR_U32(ctx, 31, 0x17489Cu);
    ctx->pc = 0x1748C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001748C0_0x1748c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17489Cu; }
    }
    if (ctx->pc != 0x17489Cu) { return; }
    ctx->pc = 0x17489Cu;
    // 0x17489c: 0x200202d
    ctx->pc = 0x17489cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1748a0: 0xdfbf0008
    ctx->pc = 0x1748a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1748a4: 0xdfb00000
    ctx->pc = 0x1748a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1748a8: 0x805d448
    ctx->pc = 0x1748A8u;
    ctx->pc = 0x1748ACu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x175120u;
    entry_175120_0x175210(rdram, ctx, runtime); return;
    ctx->pc = 0x1748B0u;
label_1748b0:
    // 0x1748b0: 0xdfbf0008
    ctx->pc = 0x1748b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1748b4: 0x3e00008
    ctx->pc = 0x1748B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1748B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1748B0u: goto label_1748b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1748BCu;
    // 0x1748bc: 0x0
    ctx->pc = 0x1748bcu;
    // NOP
}
