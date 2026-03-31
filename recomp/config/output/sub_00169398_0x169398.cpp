#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00169398
// Address: 0x169398 - 0x1694f0
void sub_00169398_0x169398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x169398u;

    // 0x169398: 0x27bdffd0
    ctx->pc = 0x169398u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16939c: 0xffb10018
    ctx->pc = 0x16939cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1693a0: 0xa0882d
    ctx->pc = 0x1693a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1693a4: 0x3a0282d
    ctx->pc = 0x1693a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1693a8: 0xffb20020
    ctx->pc = 0x1693a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1693ac: 0xffb00010
    ctx->pc = 0x1693acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1693b0: 0xffbf0028
    ctx->pc = 0x1693b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1693b4: 0xc05e4c2
    ctx->pc = 0x1693B4u;
    SET_GPR_U32(ctx, 31, 0x1693BCu);
    ctx->pc = 0x1693B8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x179308u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179308_0x179308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1693BCu; }
    }
    if (ctx->pc != 0x1693BCu) { return; }
    ctx->pc = 0x1693BCu;
    // 0x1693bc: 0x8fa30000
    ctx->pc = 0x1693bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1693c0: 0x27a50004
    ctx->pc = 0x1693c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 4));
    // 0x1693c4: 0x240202d
    ctx->pc = 0x1693c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1693c8: 0x27a60008
    ctx->pc = 0x1693c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 8));
    // 0x1693cc: 0x2180a
    ctx->pc = 0x1693ccu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
    // 0x1693d0: 0x10600041
    ctx->pc = 0x1693D0u;
    {
        const bool branch_taken_0x1693d0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1693D4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1693d0) {
            ctx->pc = 0x1694D8u;
            goto label_1694d8;
        }
    }
    ctx->pc = 0x1693D8u;
    // 0x1693d8: 0xc05e5bc
    ctx->pc = 0x1693D8u;
    SET_GPR_U32(ctx, 31, 0x1693E0u);
    ctx->pc = 0x1796F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001796F0_0x1796f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1693E0u; }
    }
    if (ctx->pc != 0x1693E0u) { return; }
    ctx->pc = 0x1693E0u;
    // 0x1693e0: 0x14400004
    ctx->pc = 0x1693E0u;
    {
        const bool branch_taken_0x1693e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1693E4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x1693e0) {
            ctx->pc = 0x1693F4u;
            goto label_1693f4;
        }
    }
    ctx->pc = 0x1693E8u;
    // 0x1693e8: 0xafa00004
    ctx->pc = 0x1693e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1693ec: 0xafa00008
    ctx->pc = 0x1693ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1693f0: 0x8fa20004
    ctx->pc = 0x1693f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1693f4:
    // 0x1693f4: 0x240202d
    ctx->pc = 0x1693f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1693f8: 0x8fa30008
    ctx->pc = 0x1693f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1693fc: 0x27a5000c
    ctx->pc = 0x1693fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 12));
    // 0x169400: 0x28040
    ctx->pc = 0x169400u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 2), 1));
    // 0x169404: 0xae220004
    ctx->pc = 0x169404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x169408: 0x2028021
    ctx->pc = 0x169408u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x16940c: 0xae230008
    ctx->pc = 0x16940cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x169410: 0x1080c0
    ctx->pc = 0x169410u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 3));
    // 0x169414: 0x2028021
    ctx->pc = 0x169414u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x169418: 0x108080
    ctx->pc = 0x169418u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 2));
    // 0x16941c: 0xc05e6ce
    ctx->pc = 0x16941Cu;
    SET_GPR_U32(ctx, 31, 0x169424u);
    ctx->pc = 0x169420u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->pc = 0x179B38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179B38_0x179b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169424u; }
    }
    if (ctx->pc != 0x169424u) { return; }
    ctx->pc = 0x169424u;
    // 0x169424: 0x8fa3000c
    ctx->pc = 0x169424u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x169428: 0x2a10006e
    ctx->pc = 0x169428u;
    SET_GPR_U32(ctx, 16, SLT32(GPR_S32(ctx, 16), 110));
    // 0x16942c: 0x220282d
    ctx->pc = 0x16942cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169430: 0x240202d
    ctx->pc = 0x169430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169434: 0x2180a
    ctx->pc = 0x169434u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
    // 0x169438: 0x31023
    ctx->pc = 0x169438u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x16943c: 0x12000002
    ctx->pc = 0x16943Cu;
    {
        const bool branch_taken_0x16943c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x169440u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
        if (branch_taken_0x16943c) {
            ctx->pc = 0x169448u;
            goto label_169448;
        }
    }
    ctx->pc = 0x169444u;
    // 0x169444: 0xafa2000c
    ctx->pc = 0x169444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_169448:
    // 0x169448: 0x8fa2000c
    ctx->pc = 0x169448u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16944c: 0xc05a53c
    ctx->pc = 0x16944Cu;
    SET_GPR_U32(ctx, 31, 0x169454u);
    ctx->pc = 0x169450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x1694F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001694F0_0x1694f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169454u; }
    }
    if (ctx->pc != 0x169454u) { return; }
    ctx->pc = 0x169454u;
    // 0x169454: 0x240202d
    ctx->pc = 0x169454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169458: 0xc05a560
    ctx->pc = 0x169458u;
    SET_GPR_U32(ctx, 31, 0x169460u);
    ctx->pc = 0x16945Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 32));
    ctx->pc = 0x169580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169580_0x169580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169460u; }
    }
    if (ctx->pc != 0x169460u) { return; }
    ctx->pc = 0x169460u;
    // 0x169460: 0x240202d
    ctx->pc = 0x169460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169464: 0x240500bd
    ctx->pc = 0x169464u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 189));
    // 0x169468: 0xc05a58e
    ctx->pc = 0x169468u;
    SET_GPR_U32(ctx, 31, 0x169470u);
    ctx->pc = 0x16946Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 189));
    ctx->pc = 0x169638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169638_0x169638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169470u; }
    }
    if (ctx->pc != 0x169470u) { return; }
    ctx->pc = 0x169470u;
    // 0x169470: 0x240202d
    ctx->pc = 0x169470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169474: 0xae22003c
    ctx->pc = 0x169474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x169478: 0x240500bf
    ctx->pc = 0x169478u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 191));
    // 0x16947c: 0xc05a58e
    ctx->pc = 0x16947Cu;
    SET_GPR_U32(ctx, 31, 0x169484u);
    ctx->pc = 0x169480u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 191));
    ctx->pc = 0x169638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169638_0x169638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169484u; }
    }
    if (ctx->pc != 0x169484u) { return; }
    ctx->pc = 0x169484u;
    // 0x169484: 0x240202d
    ctx->pc = 0x169484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169488: 0xae220040
    ctx->pc = 0x169488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x16948c: 0x240500c0
    ctx->pc = 0x16948cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 192));
    // 0x169490: 0xc05a58e
    ctx->pc = 0x169490u;
    SET_GPR_U32(ctx, 31, 0x169498u);
    ctx->pc = 0x169494u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 223));
    ctx->pc = 0x169638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169638_0x169638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169498u; }
    }
    if (ctx->pc != 0x169498u) { return; }
    ctx->pc = 0x169498u;
    // 0x169498: 0x240202d
    ctx->pc = 0x169498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16949c: 0xae220044
    ctx->pc = 0x16949cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x1694a0: 0x240500e0
    ctx->pc = 0x1694a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x1694a4: 0xc05a58e
    ctx->pc = 0x1694A4u;
    SET_GPR_U32(ctx, 31, 0x1694ACu);
    ctx->pc = 0x1694A8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 239));
    ctx->pc = 0x169638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169638_0x169638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1694ACu; }
    }
    if (ctx->pc != 0x1694ACu) { return; }
    ctx->pc = 0x1694ACu;
    // 0x1694ac: 0x240202d
    ctx->pc = 0x1694acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1694b0: 0xae220048
    ctx->pc = 0x1694b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x1694b4: 0x2626004c
    ctx->pc = 0x1694b4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 76));
    // 0x1694b8: 0xc05a5ac
    ctx->pc = 0x1694B8u;
    SET_GPR_U32(ctx, 31, 0x1694C0u);
    ctx->pc = 0x1694BCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 68)));
    ctx->pc = 0x1696B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001696B0_0x1696b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1694C0u; }
    }
    if (ctx->pc != 0x1694C0u) { return; }
    ctx->pc = 0x1694C0u;
    // 0x1694c0: 0x240202d
    ctx->pc = 0x1694c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1694c4: 0x8e250048
    ctx->pc = 0x1694c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1694c8: 0xc05a5d2
    ctx->pc = 0x1694C8u;
    SET_GPR_U32(ctx, 31, 0x1694D0u);
    ctx->pc = 0x1694CCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 92));
    ctx->pc = 0x169748u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169748_0x169748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1694D0u; }
    }
    if (ctx->pc != 0x1694D0u) { return; }
    ctx->pc = 0x1694D0u;
    // 0x1694d0: 0x24020001
    ctx->pc = 0x1694d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1694d4: 0xae220000
    ctx->pc = 0x1694d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1694d8:
    // 0x1694d8: 0xdfb00010
    ctx->pc = 0x1694d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1694dc: 0xdfb10018
    ctx->pc = 0x1694dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1694e0: 0xdfb20020
    ctx->pc = 0x1694e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1694e4: 0xdfbf0028
    ctx->pc = 0x1694e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1694e8: 0x3e00008
    ctx->pc = 0x1694E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1694ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1693F4u: goto label_1693f4;
            case 0x169448u: goto label_169448;
            case 0x1694D8u: goto label_1694d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1694F0u;
}
