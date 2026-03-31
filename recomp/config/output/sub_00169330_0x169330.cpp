#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00169330
// Address: 0x169330 - 0x169398
void sub_00169330_0x169330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x169330u;

    // 0x169330: 0x27bdffe0
    ctx->pc = 0x169330u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169334: 0xffb00000
    ctx->pc = 0x169334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169338: 0x80802d
    ctx->pc = 0x169338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16933c: 0xffb10008
    ctx->pc = 0x16933cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169340: 0x26040094
    ctx->pc = 0x169340u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 148));
    // 0x169344: 0xffbf0010
    ctx->pc = 0x169344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x169348: 0xc05e43c
    ctx->pc = 0x169348u;
    SET_GPR_U32(ctx, 31, 0x169350u);
    ctx->pc = 0x16934Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 144)));
    ctx->pc = 0x1790F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001790F0_0x1790f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169350u; }
    }
    if (ctx->pc != 0x169350u) { return; }
    ctx->pc = 0x169350u;
    // 0x169350: 0x200282d
    ctx->pc = 0x169350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169354: 0x40882d
    ctx->pc = 0x169354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169358: 0x12200009
    ctx->pc = 0x169358u;
    {
        const bool branch_taken_0x169358 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x16935Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x169358) {
            ctx->pc = 0x169380u;
            goto label_169380;
        }
    }
    ctx->pc = 0x169360u;
    // 0x169360: 0xc05a4e6
    ctx->pc = 0x169360u;
    SET_GPR_U32(ctx, 31, 0x169368u);
    ctx->pc = 0x169398u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169398_0x169398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169368u; }
    }
    if (ctx->pc != 0x169368u) { return; }
    ctx->pc = 0x169368u;
    // 0x169368: 0x220202d
    ctx->pc = 0x169368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16936c: 0xdfb00000
    ctx->pc = 0x16936cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169370: 0xdfb10008
    ctx->pc = 0x169370u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169374: 0xdfbf0010
    ctx->pc = 0x169374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169378: 0x805e46e
    ctx->pc = 0x169378u;
    ctx->pc = 0x16937Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1791B8u;
    sub_001791B8_0x1791b8(rdram, ctx, runtime); return;
    ctx->pc = 0x169380u;
label_169380:
    // 0x169380: 0xdfb00000
    ctx->pc = 0x169380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169384: 0xdfb10008
    ctx->pc = 0x169384u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169388: 0xdfbf0010
    ctx->pc = 0x169388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16938c: 0x3e00008
    ctx->pc = 0x16938Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169390u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169380u: goto label_169380;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169394u;
    // 0x169394: 0x0
    ctx->pc = 0x169394u;
    // NOP
}
