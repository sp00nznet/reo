#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_15f7f0
// Address: 0x15f7f0 - 0x15f870
void entry_15f7f0_0x15f870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15f7f0u;

    // 0x15f7f0: 0x27bdffe0
    ctx->pc = 0x15f7f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15f7f4: 0x3c030023
    ctx->pc = 0x15f7f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x15f7f8: 0xffb00000
    ctx->pc = 0x15f7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15f7fc: 0x2470ef48
    ctx->pc = 0x15f7fcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294963016));
    // 0x15f800: 0x8e020000
    ctx->pc = 0x15f800u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f804: 0xffb10008
    ctx->pc = 0x15f804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15f808: 0x24110001
    ctx->pc = 0x15f808u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f80c: 0x10510012
    ctx->pc = 0x15F80Cu;
    {
        const bool branch_taken_0x15f80c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        ctx->pc = 0x15F810u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x15f80c) {
            ctx->pc = 0x15F858u;
            goto label_15f858;
        }
    }
    ctx->pc = 0x15F814u;
    // 0x15f814: 0xc057e38
    ctx->pc = 0x15F814u;
    SET_GPR_U32(ctx, 31, 0x15F81Cu);
    ctx->pc = 0x15F8E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F8E0_0x15f8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F81Cu; }
    }
    if (ctx->pc != 0x15F81Cu) { return; }
    ctx->pc = 0x15F81Cu;
    // 0x15f81c: 0x3c060027
    ctx->pc = 0x15f81cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)39 << 16));
    // 0x15f820: 0x24c68640
    ctx->pc = 0x15f820u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294936128));
    // 0x15f824: 0x24054000
    ctx->pc = 0x15f824u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16384));
    // 0x15f828: 0xc057e40
    ctx->pc = 0x15F828u;
    SET_GPR_U32(ctx, 31, 0x15F830u);
    ctx->pc = 0x15F82Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15F900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F900_0x15f900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F830u; }
    }
    if (ctx->pc != 0x15F830u) { return; }
    ctx->pc = 0x15F830u;
    // 0x15f830: 0xc057e74
    ctx->pc = 0x15F830u;
    SET_GPR_U32(ctx, 31, 0x15F838u);
    ctx->pc = 0x15F834u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x15F9D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F9D0_0x15f9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F838u; }
    }
    if (ctx->pc != 0x15F838u) { return; }
    ctx->pc = 0x15F838u;
    // 0x15f838: 0x3c040027
    ctx->pc = 0x15f838u;
    SET_GPR_U32(ctx, 4, ((uint32_t)39 << 16));
    // 0x15f83c: 0x2484c640
    ctx->pc = 0x15f83cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952512));
    // 0x15f840: 0x24054000
    ctx->pc = 0x15f840u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16384));
    // 0x15f844: 0xc057e5a
    ctx->pc = 0x15F844u;
    SET_GPR_U32(ctx, 31, 0x15F84Cu);
    ctx->pc = 0x15F848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15F968u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F968_0x15f968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F84Cu; }
    }
    if (ctx->pc != 0x15F84Cu) { return; }
    ctx->pc = 0x15F84Cu;
    // 0x15f84c: 0xc057e74
    ctx->pc = 0x15F84Cu;
    SET_GPR_U32(ctx, 31, 0x15F854u);
    ctx->pc = 0x15F850u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x15F9D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F9D0_0x15f9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F854u; }
    }
    if (ctx->pc != 0x15F854u) { return; }
    ctx->pc = 0x15F854u;
    // 0x15f854: 0xae110000
    ctx->pc = 0x15f854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_15f858:
    // 0x15f858: 0xdfb00000
    ctx->pc = 0x15f858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f85c: 0xdfb10008
    ctx->pc = 0x15f85cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15f860: 0xdfbf0010
    ctx->pc = 0x15f860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f864: 0x3e00008
    ctx->pc = 0x15F864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F868u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15F858u: goto label_15f858;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15F86Cu;
    // 0x15f86c: 0x0
    ctx->pc = 0x15f86cu;
    // NOP
}
