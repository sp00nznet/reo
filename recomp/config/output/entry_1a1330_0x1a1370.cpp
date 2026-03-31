#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1a1330
// Address: 0x1a1330 - 0x1a1370
void entry_1a1330_0x1a1370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a1330u;

    // 0x1a1330: 0x8c820000
    ctx->pc = 0x1a1330u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a1334: 0x24a3ffff
    ctx->pc = 0x1a1334u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1a1338: 0x62082a
    ctx->pc = 0x1a1338u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x1a133c: 0x10200003
    ctx->pc = 0x1A133Cu;
    {
        const bool branch_taken_0x1a133c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1340u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a133c) {
            ctx->pc = 0x1A134Cu;
            goto label_1a134c;
        }
    }
    ctx->pc = 0x1A1344u;
    // 0x1a1344: 0x14a00003
    ctx->pc = 0x1A1344u;
    {
        const bool branch_taken_0x1a1344 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a1344) {
            ctx->pc = 0x1A1354u;
            goto label_1a1354;
        }
    }
    ctx->pc = 0x1A134Cu;
label_1a134c:
    // 0x1a134c: 0x10000005
    ctx->pc = 0x1A134Cu;
    {
        const bool branch_taken_0x1a134c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a134c) {
            ctx->pc = 0x1A1364u;
            goto label_1a1364;
        }
    }
    ctx->pc = 0x1A1354u;
label_1a1354:
    // 0x1a1354: 0x8c820008
    ctx->pc = 0x1a1354u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a1358: 0x31900
    ctx->pc = 0x1a1358u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a135c: 0x431021
    ctx->pc = 0x1a135cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a1360: 0x8c420000
    ctx->pc = 0x1a1360u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a1364:
    // 0x1a1364: 0x3e00008
    ctx->pc = 0x1A1364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A134Cu: goto label_1a134c;
            case 0x1A1354u: goto label_1a1354;
            case 0x1A1364u: goto label_1a1364;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A136Cu;
    // 0x1a136c: 0x0
    ctx->pc = 0x1a136cu;
    // NOP
}
