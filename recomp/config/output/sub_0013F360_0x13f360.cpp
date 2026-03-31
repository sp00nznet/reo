#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013F360
// Address: 0x13f360 - 0x13f478
void sub_0013F360_0x13f360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13f360u;

    // 0x13f360: 0x27bdfff0
    ctx->pc = 0x13f360u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f364: 0x3c060022
    ctx->pc = 0x13f364u;
    SET_GPR_U32(ctx, 6, ((uint32_t)34 << 16));
    // 0x13f368: 0x24c247a0
    ctx->pc = 0x13f368u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 18336));
    // 0x13f36c: 0xffb00000
    ctx->pc = 0x13f36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13f370: 0xffbf0008
    ctx->pc = 0x13f370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13f374: 0x24430004
    ctx->pc = 0x13f374u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4));
    // 0x13f378: 0x80402d
    ctx->pc = 0x13f378u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f37c: 0x202d
    ctx->pc = 0x13f37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f380: 0x8c620000
    ctx->pc = 0x13f380u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f384: 0x1040000b
    ctx->pc = 0x13F384u;
    {
        const bool branch_taken_0x13f384 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13F388u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13f384) {
            ctx->pc = 0x13F3B4u;
            goto label_13f3b4;
        }
    }
    ctx->pc = 0x13F38Cu;
    // 0x13f38c: 0x24840001
    ctx->pc = 0x13f38cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_13f390:
    // 0x13f390: 0x28820020
    ctx->pc = 0x13f390u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 32));
    // 0x13f394: 0x10400007
    ctx->pc = 0x13F394u;
    {
        const bool branch_taken_0x13f394 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13F398u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 36));
        if (branch_taken_0x13f394) {
            ctx->pc = 0x13F3B4u;
            goto label_13f3b4;
        }
    }
    ctx->pc = 0x13F39Cu;
    // 0x13f39c: 0x8c620000
    ctx->pc = 0x13f39cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f3a0: 0x0
    ctx->pc = 0x13f3a0u;
    // NOP
    // 0x13f3a4: 0x0
    ctx->pc = 0x13f3a4u;
    // NOP
    // 0x13f3a8: 0x0
    ctx->pc = 0x13f3a8u;
    // NOP
    // 0x13f3ac: 0x5440fff8
    ctx->pc = 0x13F3ACu;
    {
        const bool branch_taken_0x13f3ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x13f3ac) {
            ctx->pc = 0x13F3B0u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x13F390u;
            goto label_13f390;
        }
    }
    ctx->pc = 0x13F3B4u;
label_13f3b4:
    // 0x13f3b4: 0x24030020
    ctx->pc = 0x13f3b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
    // 0x13f3b8: 0x10830017
    ctx->pc = 0x13F3B8u;
    {
        const bool branch_taken_0x13f3b8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x13F3BCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13f3b8) {
            ctx->pc = 0x13F418u;
            goto label_13f418;
        }
    }
    ctx->pc = 0x13F3C0u;
    // 0x13f3c0: 0x480c0
    ctx->pc = 0x13f3c0u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 4), 3));
    // 0x13f3c4: 0x24c247a0
    ctx->pc = 0x13f3c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 18336));
    // 0x13f3c8: 0x2048021
    ctx->pc = 0x13f3c8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x13f3cc: 0x3c030022
    ctx->pc = 0x13f3ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x13f3d0: 0x108080
    ctx->pc = 0x13f3d0u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 2));
    // 0x13f3d4: 0x3c060024
    ctx->pc = 0x13f3d4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
    // 0x13f3d8: 0x3c050014
    ctx->pc = 0x13f3d8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)20 << 16));
    // 0x13f3dc: 0x2028021
    ctx->pc = 0x13f3dcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x13f3e0: 0x24634768
    ctx->pc = 0x13f3e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 18280));
    // 0x13f3e4: 0x24c6da08
    ctx->pc = 0x13f3e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294957576));
    // 0x13f3e8: 0x24020001
    ctx->pc = 0x13f3e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f3ec: 0x24a5f2a0
    ctx->pc = 0x13f3ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294963872));
    // 0x13f3f0: 0xae020004
    ctx->pc = 0x13f3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x13f3f4: 0x200202d
    ctx->pc = 0x13f3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f3f8: 0xae030000
    ctx->pc = 0x13f3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x13f3fc: 0xae080014
    ctx->pc = 0x13f3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 8));
    // 0x13f400: 0xae070018
    ctx->pc = 0x13f400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
    // 0x13f404: 0xae060008
    ctx->pc = 0x13f404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x13f408: 0xae05001c
    ctx->pc = 0x13f408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x13f40c: 0xc04fd1e
    ctx->pc = 0x13F40Cu;
    SET_GPR_U32(ctx, 31, 0x13F414u);
    ctx->pc = 0x13F410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 16));
    ctx->pc = 0x13F478u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F478_0x13f478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F414u; }
    }
    if (ctx->pc != 0x13F414u) { return; }
    ctx->pc = 0x13F414u;
    // 0x13f414: 0x200102d
    ctx->pc = 0x13f414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13f418:
    // 0x13f418: 0xdfb00000
    ctx->pc = 0x13f418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f41c: 0xdfbf0008
    ctx->pc = 0x13f41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13f420: 0x3e00008
    ctx->pc = 0x13F420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F424u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F390u: goto label_13f390;
            case 0x13F3B4u: goto label_13f3b4;
            case 0x13F418u: goto label_13f418;
            case 0x13F44Cu: goto label_13f44c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F428u;
    // 0x13f428: 0x27bdfff0
    ctx->pc = 0x13f428u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f42c: 0xffb00000
    ctx->pc = 0x13f42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13f430: 0x80802d
    ctx->pc = 0x13f430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f434: 0x12000005
    ctx->pc = 0x13F434u;
    {
        const bool branch_taken_0x13f434 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x13F438u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x13f434) {
            ctx->pc = 0x13F44Cu;
            goto label_13f44c;
        }
    }
    ctx->pc = 0x13F43Cu;
    // 0x13f43c: 0x282d
    ctx->pc = 0x13f43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f440: 0xc041f1a
    ctx->pc = 0x13F440u;
    SET_GPR_U32(ctx, 31, 0x13F448u);
    ctx->pc = 0x13F444u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 36));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F448u; }
    }
    if (ctx->pc != 0x13F448u) { return; }
    ctx->pc = 0x13F448u;
    // 0x13f448: 0xae000004
    ctx->pc = 0x13f448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_13f44c:
    // 0x13f44c: 0xdfb00000
    ctx->pc = 0x13f44cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f450: 0xdfbf0008
    ctx->pc = 0x13f450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13f454: 0x3e00008
    ctx->pc = 0x13F454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F458u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F390u: goto label_13f390;
            case 0x13F3B4u: goto label_13f3b4;
            case 0x13F418u: goto label_13f418;
            case 0x13F44Cu: goto label_13f44c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F45Cu;
    // 0x13f45c: 0x0
    ctx->pc = 0x13f45cu;
    // NOP
    // 0x13f460: 0x3e00008
    ctx->pc = 0x13F460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F464u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F390u: goto label_13f390;
            case 0x13F3B4u: goto label_13f3b4;
            case 0x13F418u: goto label_13f418;
            case 0x13F44Cu: goto label_13f44c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F468u;
    // 0x13f468: 0xac860020
    ctx->pc = 0x13f468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x13f46c: 0x3e00008
    ctx->pc = 0x13F46Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F470u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F390u: goto label_13f390;
            case 0x13F3B4u: goto label_13f3b4;
            case 0x13F418u: goto label_13f418;
            case 0x13F44Cu: goto label_13f44c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F474u;
    // 0x13f474: 0x0
    ctx->pc = 0x13f474u;
    // NOP
}
