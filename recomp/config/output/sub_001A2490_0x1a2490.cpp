#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A2490
// Address: 0x1a2490 - 0x1a2550
void sub_001A2490_0x1a2490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a2490u;

    // 0x1a2490: 0x27bdfff0
    ctx->pc = 0x1a2490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2494: 0x3c0600ff
    ctx->pc = 0x1a2494u;
    SET_GPR_U32(ctx, 6, ((uint32_t)255 << 16));
    // 0x1a2498: 0xffbf0000
    ctx->pc = 0x1a2498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a249c: 0x24030013
    ctx->pc = 0x1a249cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 19));
    // 0x1a24a0: 0x8c870000
    ctx->pc = 0x1a24a0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a24a4: 0xe63024
    ctx->pc = 0x1a24a4u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1a24a8: 0x63402
    ctx->pc = 0x1a24a8u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 6), 16));
    // 0x1a24ac: 0x10c30023
    ctx->pc = 0x1A24ACu;
    {
        const bool branch_taken_0x1a24ac = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        ctx->pc = 0x1A24B0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 18));
        if (branch_taken_0x1a24ac) {
            ctx->pc = 0x1A253Cu;
            goto label_1a253c;
        }
    }
    ctx->pc = 0x1A24B4u;
    // 0x1a24b4: 0x10c3001d
    ctx->pc = 0x1A24B4u;
    {
        const bool branch_taken_0x1a24b4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        if (branch_taken_0x1a24b4) {
            ctx->pc = 0x1A252Cu;
            goto label_1a252c;
        }
    }
    ctx->pc = 0x1A24BCu;
    // 0x1a24bc: 0x24030011
    ctx->pc = 0x1a24bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 17));
    // 0x1a24c0: 0x10c30016
    ctx->pc = 0x1A24C0u;
    {
        const bool branch_taken_0x1a24c0 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        ctx->pc = 0x1A24C4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 35));
        if (branch_taken_0x1a24c0) {
            ctx->pc = 0x1A251Cu;
            goto label_1a251c;
        }
    }
    ctx->pc = 0x1A24C8u;
    // 0x1a24c8: 0x10c30010
    ctx->pc = 0x1A24C8u;
    {
        const bool branch_taken_0x1a24c8 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        if (branch_taken_0x1a24c8) {
            ctx->pc = 0x1A250Cu;
            goto label_1a250c;
        }
    }
    ctx->pc = 0x1A24D0u;
    // 0x1a24d0: 0x24030022
    ctx->pc = 0x1a24d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 34));
    // 0x1a24d4: 0x10c30009
    ctx->pc = 0x1A24D4u;
    {
        const bool branch_taken_0x1a24d4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        ctx->pc = 0x1A24D8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 33));
        if (branch_taken_0x1a24d4) {
            ctx->pc = 0x1A24FCu;
            goto label_1a24fc;
        }
    }
    ctx->pc = 0x1A24DCu;
    // 0x1a24dc: 0x10c30003
    ctx->pc = 0x1A24DCu;
    {
        const bool branch_taken_0x1a24dc = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        if (branch_taken_0x1a24dc) {
            ctx->pc = 0x1A24ECu;
            goto label_1a24ec;
        }
    }
    ctx->pc = 0x1A24E4u;
    // 0x1a24e4: 0x10000018
    ctx->pc = 0x1A24E4u;
    {
        const bool branch_taken_0x1a24e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A24E8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1a24e4) {
            ctx->pc = 0x1A2548u;
            goto label_1a2548;
        }
    }
    ctx->pc = 0x1A24ECu;
label_1a24ec:
    // 0x1a24ec: 0xc068954
    ctx->pc = 0x1A24ECu;
    SET_GPR_U32(ctx, 31, 0x1A24F4u);
    ctx->pc = 0x1A2550u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2550_0x1a2550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A24F4u; }
    }
    if (ctx->pc != 0x1A24F4u) { return; }
    ctx->pc = 0x1A24F4u;
    // 0x1a24f4: 0x10000013
    ctx->pc = 0x1A24F4u;
    {
        const bool branch_taken_0x1a24f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a24f4) {
            ctx->pc = 0x1A2544u;
            goto label_1a2544;
        }
    }
    ctx->pc = 0x1A24FCu;
label_1a24fc:
    // 0x1a24fc: 0xc068980
    ctx->pc = 0x1A24FCu;
    SET_GPR_U32(ctx, 31, 0x1A2504u);
    ctx->pc = 0x1A2600u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2600_0x1a2600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2504u; }
    }
    if (ctx->pc != 0x1A2504u) { return; }
    ctx->pc = 0x1A2504u;
    // 0x1a2504: 0x1000000f
    ctx->pc = 0x1A2504u;
    {
        const bool branch_taken_0x1a2504 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a2504) {
            ctx->pc = 0x1A2544u;
            goto label_1a2544;
        }
    }
    ctx->pc = 0x1A250Cu;
label_1a250c:
    // 0x1a250c: 0xc0689b0
    ctx->pc = 0x1A250Cu;
    SET_GPR_U32(ctx, 31, 0x1A2514u);
    ctx->pc = 0x1A26C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A26C0_0x1a26c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2514u; }
    }
    if (ctx->pc != 0x1A2514u) { return; }
    ctx->pc = 0x1A2514u;
    // 0x1a2514: 0x1000000b
    ctx->pc = 0x1A2514u;
    {
        const bool branch_taken_0x1a2514 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a2514) {
            ctx->pc = 0x1A2544u;
            goto label_1a2544;
        }
    }
    ctx->pc = 0x1A251Cu;
label_1a251c:
    // 0x1a251c: 0xc0689e4
    ctx->pc = 0x1A251Cu;
    SET_GPR_U32(ctx, 31, 0x1A2524u);
    ctx->pc = 0x1A2790u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2790_0x1a2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2524u; }
    }
    if (ctx->pc != 0x1A2524u) { return; }
    ctx->pc = 0x1A2524u;
    // 0x1a2524: 0x10000007
    ctx->pc = 0x1A2524u;
    {
        const bool branch_taken_0x1a2524 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a2524) {
            ctx->pc = 0x1A2544u;
            goto label_1a2544;
        }
    }
    ctx->pc = 0x1A252Cu;
label_1a252c:
    // 0x1a252c: 0xc068a10
    ctx->pc = 0x1A252Cu;
    SET_GPR_U32(ctx, 31, 0x1A2534u);
    ctx->pc = 0x1A2840u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2840_0x1a2840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2534u; }
    }
    if (ctx->pc != 0x1A2534u) { return; }
    ctx->pc = 0x1A2534u;
    // 0x1a2534: 0x10000003
    ctx->pc = 0x1A2534u;
    {
        const bool branch_taken_0x1a2534 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a2534) {
            ctx->pc = 0x1A2544u;
            goto label_1a2544;
        }
    }
    ctx->pc = 0x1A253Cu;
label_1a253c:
    // 0x1a253c: 0xc068a40
    ctx->pc = 0x1A253Cu;
    SET_GPR_U32(ctx, 31, 0x1A2544u);
    ctx->pc = 0x1A2900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2900_0x1a2900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2544u; }
    }
    if (ctx->pc != 0x1A2544u) { return; }
    ctx->pc = 0x1A2544u;
label_1a2544:
    // 0x1a2544: 0xdfbf0000
    ctx->pc = 0x1a2544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2548:
    // 0x1a2548: 0x3e00008
    ctx->pc = 0x1A2548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A254Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A24ECu: goto label_1a24ec;
            case 0x1A24FCu: goto label_1a24fc;
            case 0x1A250Cu: goto label_1a250c;
            case 0x1A251Cu: goto label_1a251c;
            case 0x1A252Cu: goto label_1a252c;
            case 0x1A253Cu: goto label_1a253c;
            case 0x1A2544u: goto label_1a2544;
            case 0x1A2548u: goto label_1a2548;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A2550u;
}
