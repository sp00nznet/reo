#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00180310
// Address: 0x180310 - 0x180378
void sub_00180310_0x180310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x180310u;

    // 0x180310: 0x27bdffd0
    ctx->pc = 0x180310u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x180314: 0x3c020023
    ctx->pc = 0x180314u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x180318: 0xffb10010
    ctx->pc = 0x180318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18031c: 0x3c030027
    ctx->pc = 0x18031cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x180320: 0xffb00000
    ctx->pc = 0x180320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180324: 0x24716188
    ctx->pc = 0x180324u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 24968));
    // 0x180328: 0xffbf0020
    ctx->pc = 0x180328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18032c: 0x802d
    ctx->pc = 0x18032cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180330: 0xac40f9e0
    ctx->pc = 0x180330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965728), GPR_U32(ctx, 0));
    // 0x180334: 0x0
    ctx->pc = 0x180334u;
    // NOP
label_180338:
    // 0x180338: 0x8e220000
    ctx->pc = 0x180338u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18033c: 0x50400005
    ctx->pc = 0x18033Cu;
    {
        const bool branch_taken_0x18033c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x18033c) {
            ctx->pc = 0x180340u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x180354u;
            goto label_180354;
        }
    }
    ctx->pc = 0x180344u;
    // 0x180344: 0xc060120
    ctx->pc = 0x180344u;
    SET_GPR_U32(ctx, 31, 0x18034Cu);
    ctx->pc = 0x180348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x180480u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00180480_0x180480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18034Cu; }
    }
    if (ctx->pc != 0x18034Cu) { return; }
    ctx->pc = 0x18034Cu;
    // 0x18034c: 0x4400005
    ctx->pc = 0x18034Cu;
    {
        const bool branch_taken_0x18034c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x180350u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x18034c) {
            ctx->pc = 0x180364u;
            goto label_180364;
        }
    }
    ctx->pc = 0x180354u;
label_180354:
    // 0x180354: 0x2a020010
    ctx->pc = 0x180354u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 16));
    // 0x180358: 0x1440fff7
    ctx->pc = 0x180358u;
    {
        const bool branch_taken_0x180358 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18035Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 820));
        if (branch_taken_0x180358) {
            ctx->pc = 0x180338u;
            goto label_180338;
        }
    }
    ctx->pc = 0x180360u;
    // 0x180360: 0x24020001
    ctx->pc = 0x180360u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_180364:
    // 0x180364: 0xdfbf0020
    ctx->pc = 0x180364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180368: 0xdfb10010
    ctx->pc = 0x180368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18036c: 0xdfb00000
    ctx->pc = 0x18036cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180370: 0x3e00008
    ctx->pc = 0x180370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180374u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180338u: goto label_180338;
            case 0x180354u: goto label_180354;
            case 0x180364u: goto label_180364;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180378u;
}
