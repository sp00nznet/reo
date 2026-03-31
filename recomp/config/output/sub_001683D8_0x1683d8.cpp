#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001683D8
// Address: 0x1683d8 - 0x168490
void sub_001683D8_0x1683d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1683d8u;

    // 0x1683d8: 0x27bdffd0
    ctx->pc = 0x1683d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1683dc: 0xffb00010
    ctx->pc = 0x1683dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1683e0: 0xc0802d
    ctx->pc = 0x1683e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1683e4: 0x3a0302d
    ctx->pc = 0x1683e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1683e8: 0xffb10018
    ctx->pc = 0x1683e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1683ec: 0xffb20020
    ctx->pc = 0x1683ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1683f0: 0xa0902d
    ctx->pc = 0x1683f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1683f4: 0xffbf0028
    ctx->pc = 0x1683f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1683f8: 0xc05a124
    ctx->pc = 0x1683F8u;
    SET_GPR_U32(ctx, 31, 0x168400u);
    ctx->pc = 0x1683FCu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x168490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00168490_0x168490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168400u; }
    }
    if (ctx->pc != 0x168400u) { return; }
    ctx->pc = 0x168400u;
    // 0x168400: 0x40182d
    ctx->pc = 0x168400u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168404: 0x1060001c
    ctx->pc = 0x168404u;
    {
        const bool branch_taken_0x168404 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x168408u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x168404) {
            ctx->pc = 0x168478u;
            goto label_168478;
        }
    }
    ctx->pc = 0x16840Cu;
    // 0x16840c: 0xae030010
    ctx->pc = 0x16840cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x168410: 0x10640019
    ctx->pc = 0x168410u;
    {
        const bool branch_taken_0x168410 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x168414u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x168410) {
            ctx->pc = 0x168478u;
            goto label_168478;
        }
    }
    ctx->pc = 0x168418u;
    // 0x168418: 0x8fa30000
    ctx->pc = 0x168418u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16841c: 0x18600006
    ctx->pc = 0x16841Cu;
    {
        const bool branch_taken_0x16841c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x168420u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x16841c) {
            ctx->pc = 0x168438u;
            goto label_168438;
        }
    }
    ctx->pc = 0x168424u;
    // 0x168424: 0x431021
    ctx->pc = 0x168424u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x168428: 0x210c0
    ctx->pc = 0x168428u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x16842c: 0x431021
    ctx->pc = 0x16842cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x168430: 0x21040
    ctx->pc = 0x168430u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x168434: 0xae02001c
    ctx->pc = 0x168434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_168438:
    // 0x168438: 0x3c020024
    ctx->pc = 0x168438u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x16843c: 0x220202d
    ctx->pc = 0x16843cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168440: 0x24420818
    ctx->pc = 0x168440u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2072));
    // 0x168444: 0x240282d
    ctx->pc = 0x168444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168448: 0xae020004
    ctx->pc = 0x168448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16844c: 0xc05a184
    ctx->pc = 0x16844Cu;
    SET_GPR_U32(ctx, 31, 0x168454u);
    ctx->pc = 0x168450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x168610u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00168610_0x168610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168454u; }
    }
    if (ctx->pc != 0x168454u) { return; }
    ctx->pc = 0x168454u;
    // 0x168454: 0x220202d
    ctx->pc = 0x168454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168458: 0x240282d
    ctx->pc = 0x168458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16845c: 0xc05a1c6
    ctx->pc = 0x16845Cu;
    SET_GPR_U32(ctx, 31, 0x168464u);
    ctx->pc = 0x168460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x168718u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00168718_0x168718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168464u; }
    }
    if (ctx->pc != 0x168464u) { return; }
    ctx->pc = 0x168464u;
    // 0x168464: 0x220202d
    ctx->pc = 0x168464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168468: 0x240282d
    ctx->pc = 0x168468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16846c: 0xc05a370
    ctx->pc = 0x16846Cu;
    SET_GPR_U32(ctx, 31, 0x168474u);
    ctx->pc = 0x168470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x168DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00168DC0_0x168dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168474u; }
    }
    if (ctx->pc != 0x168474u) { return; }
    ctx->pc = 0x168474u;
    // 0x168474: 0x24020001
    ctx->pc = 0x168474u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_168478:
    // 0x168478: 0xdfb00010
    ctx->pc = 0x168478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16847c: 0xdfb10018
    ctx->pc = 0x16847cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168480: 0xdfb20020
    ctx->pc = 0x168480u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168484: 0xdfbf0028
    ctx->pc = 0x168484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x168488: 0x3e00008
    ctx->pc = 0x168488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16848Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168438u: goto label_168438;
            case 0x168478u: goto label_168478;
            default: break;
        }
        return;
    }
    ctx->pc = 0x168490u;
}
