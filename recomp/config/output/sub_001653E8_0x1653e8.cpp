#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001653E8
// Address: 0x1653e8 - 0x165578
void sub_001653E8_0x1653e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1653e8u;

    // 0x1653e8: 0x27bdffc0
    ctx->pc = 0x1653e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1653ec: 0xffb10008
    ctx->pc = 0x1653ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1653f0: 0x80882d
    ctx->pc = 0x1653f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1653f4: 0xffb20010
    ctx->pc = 0x1653f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1653f8: 0xffb40020
    ctx->pc = 0x1653f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1653fc: 0x26340f60
    ctx->pc = 0x1653fcu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 17), 3936));
    // 0x165400: 0xffb50028
    ctx->pc = 0x165400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x165404: 0xa0a82d
    ctx->pc = 0x165404u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165408: 0xffb00000
    ctx->pc = 0x165408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16540c: 0xffb30018
    ctx->pc = 0x16540cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x165410: 0xffbf0030
    ctx->pc = 0x165410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x165414: 0x8e331b74
    ctx->pc = 0x165414u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 17), 7028)));
    // 0x165418: 0x8e700000
    ctx->pc = 0x165418u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16541c: 0xc04c7be
    ctx->pc = 0x16541Cu;
    SET_GPR_U32(ctx, 31, 0x165424u);
    ctx->pc = 0x165420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x131EF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131EF8_0x131ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165424u; }
    }
    if (ctx->pc != 0x165424u) { return; }
    ctx->pc = 0x165424u;
    // 0x165424: 0x200202d
    ctx->pc = 0x165424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165428: 0xc04cb3c
    ctx->pc = 0x165428u;
    SET_GPR_U32(ctx, 31, 0x165430u);
    ctx->pc = 0x16542Cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x132CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00132CF0_0x132cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165430u; }
    }
    if (ctx->pc != 0x165430u) { return; }
    ctx->pc = 0x165430u;
    // 0x165430: 0x40802d
    ctx->pc = 0x165430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165434: 0x12000002
    ctx->pc = 0x165434u;
    {
        const bool branch_taken_0x165434 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x165438u;
        SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
        if (branch_taken_0x165434) {
            ctx->pc = 0x165440u;
            goto label_165440;
        }
    }
    ctx->pc = 0x16543Cu;
    // 0x16543c: 0xac50076c
    ctx->pc = 0x16543cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1900), GPR_U32(ctx, 16));
label_165440:
    // 0x165440: 0x220202d
    ctx->pc = 0x165440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165444: 0xc05d58a
    ctx->pc = 0x165444u;
    SET_GPR_U32(ctx, 31, 0x16544Cu);
    ctx->pc = 0x165448u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 26));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16544Cu; }
    }
    if (ctx->pc != 0x16544Cu) { return; }
    ctx->pc = 0x16544Cu;
    // 0x16544c: 0x2403ffff
    ctx->pc = 0x16544cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x165450: 0x2800a
    ctx->pc = 0x165450u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
    // 0x165454: 0x1203000c
    ctx->pc = 0x165454u;
    {
        const bool branch_taken_0x165454 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x165458u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x165454) {
            ctx->pc = 0x165488u;
            goto label_165488;
        }
    }
    ctx->pc = 0x16545Cu;
    // 0x16545c: 0x6010006
    ctx->pc = 0x16545Cu;
    {
        const bool branch_taken_0x16545c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x165460u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x16545c) {
            ctx->pc = 0x165478u;
            goto label_165478;
        }
    }
    ctx->pc = 0x165464u;
    // 0x165464: 0x1202000e
    ctx->pc = 0x165464u;
    {
        const bool branch_taken_0x165464 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        if (branch_taken_0x165464) {
            ctx->pc = 0x1654A0u;
            goto label_1654a0;
        }
    }
    ctx->pc = 0x16546Cu;
    // 0x16546c: 0x10000012
    ctx->pc = 0x16546Cu;
    {
        const bool branch_taken_0x16546c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x16546c) {
            ctx->pc = 0x1654B8u;
            goto label_1654b8;
        }
    }
    ctx->pc = 0x165474u;
    // 0x165474: 0x0
    ctx->pc = 0x165474u;
    // NOP
label_165478:
    // 0x165478: 0x12000014
    ctx->pc = 0x165478u;
    {
        const bool branch_taken_0x165478 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x16547Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 4294967292));
        if (branch_taken_0x165478) {
            ctx->pc = 0x1654CCu;
            goto label_1654cc;
        }
    }
    ctx->pc = 0x165480u;
    // 0x165480: 0x1000000d
    ctx->pc = 0x165480u;
    {
        const bool branch_taken_0x165480 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x165480) {
            ctx->pc = 0x1654B8u;
            goto label_1654b8;
        }
    }
    ctx->pc = 0x165488u;
label_165488:
    // 0x165488: 0x3c05ff00
    ctx->pc = 0x165488u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x16548c: 0xc05a704
    ctx->pc = 0x16548Cu;
    SET_GPR_U32(ctx, 31, 0x165494u);
    ctx->pc = 0x165490u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3080));
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165494u; }
    }
    if (ctx->pc != 0x165494u) { return; }
    ctx->pc = 0x165494u;
    // 0x165494: 0x1000000d
    ctx->pc = 0x165494u;
    {
        const bool branch_taken_0x165494 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x165498u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 4294967292));
        if (branch_taken_0x165494) {
            ctx->pc = 0x1654CCu;
            goto label_1654cc;
        }
    }
    ctx->pc = 0x16549Cu;
    // 0x16549c: 0x0
    ctx->pc = 0x16549cu;
    // NOP
label_1654a0:
    // 0x1654a0: 0x3c05ff00
    ctx->pc = 0x1654a0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1654a4: 0xc05a704
    ctx->pc = 0x1654A4u;
    SET_GPR_U32(ctx, 31, 0x1654ACu);
    ctx->pc = 0x1654A8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3081));
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1654ACu; }
    }
    if (ctx->pc != 0x1654ACu) { return; }
    ctx->pc = 0x1654ACu;
    // 0x1654ac: 0x10000007
    ctx->pc = 0x1654ACu;
    {
        const bool branch_taken_0x1654ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1654B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 4294967292));
        if (branch_taken_0x1654ac) {
            ctx->pc = 0x1654CCu;
            goto label_1654cc;
        }
    }
    ctx->pc = 0x1654B4u;
    // 0x1654b4: 0x0
    ctx->pc = 0x1654b4u;
    // NOP
label_1654b8:
    // 0x1654b8: 0x3c05ff00
    ctx->pc = 0x1654b8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1654bc: 0x220202d
    ctx->pc = 0x1654bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1654c0: 0xc05a704
    ctx->pc = 0x1654C0u;
    SET_GPR_U32(ctx, 31, 0x1654C8u);
    ctx->pc = 0x1654C4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3079));
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1654C8u; }
    }
    if (ctx->pc != 0x1654C8u) { return; }
    ctx->pc = 0x1654C8u;
    // 0x1654c8: 0x2642fffc
    ctx->pc = 0x1654c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 4294967292));
label_1654cc:
    // 0x1654cc: 0x2c420002
    ctx->pc = 0x1654ccu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x1654d0: 0x50400005
    ctx->pc = 0x1654D0u;
    {
        const bool branch_taken_0x1654d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1654d0) {
            ctx->pc = 0x1654D4u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
            ctx->pc = 0x1654E8u;
            goto label_1654e8;
        }
    }
    ctx->pc = 0x1654D8u;
    // 0x1654d8: 0x280202d
    ctx->pc = 0x1654d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1654dc: 0xc05df94
    ctx->pc = 0x1654DCu;
    SET_GPR_U32(ctx, 31, 0x1654E4u);
    ctx->pc = 0x1654E0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177E50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177E50_0x177e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1654E4u; }
    }
    if (ctx->pc != 0x1654E4u) { return; }
    ctx->pc = 0x1654E4u;
    // 0x1654e4: 0x24020005
    ctx->pc = 0x1654e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_1654e8:
    // 0x1654e8: 0x12420003
    ctx->pc = 0x1654E8u;
    {
        const bool branch_taken_0x1654e8 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        ctx->pc = 0x1654ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1654e8) {
            ctx->pc = 0x1654F8u;
            goto label_1654f8;
        }
    }
    ctx->pc = 0x1654F0u;
    // 0x1654f0: 0x12000003
    ctx->pc = 0x1654F0u;
    {
        const bool branch_taken_0x1654f0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1654f0) {
            ctx->pc = 0x165500u;
            goto label_165500;
        }
    }
    ctx->pc = 0x1654F8u;
label_1654f8:
    // 0x1654f8: 0xc059584
    ctx->pc = 0x1654F8u;
    SET_GPR_U32(ctx, 31, 0x165500u);
    ctx->pc = 0x1654FCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x165610u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00165610_0x165610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165500u; }
    }
    if (ctx->pc != 0x165500u) { return; }
    ctx->pc = 0x165500u;
label_165500:
    // 0x165500: 0xc059578
    ctx->pc = 0x165500u;
    SET_GPR_U32(ctx, 31, 0x165508u);
    ctx->pc = 0x165504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1655E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001655E0_0x1655e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165508u; }
    }
    if (ctx->pc != 0x165508u) { return; }
    ctx->pc = 0x165508u;
    // 0x165508: 0x24030001
    ctx->pc = 0x165508u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16550c: 0x14430012
    ctx->pc = 0x16550Cu;
    {
        const bool branch_taken_0x16550c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x165510u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x16550c) {
            ctx->pc = 0x165558u;
            goto label_165558;
        }
    }
    ctx->pc = 0x165514u;
    // 0x165514: 0x56a00011
    ctx->pc = 0x165514u;
    {
        const bool branch_taken_0x165514 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        if (branch_taken_0x165514) {
            ctx->pc = 0x165518u;
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->pc = 0x16555Cu;
            goto label_16555c;
        }
    }
    ctx->pc = 0x16551Cu;
    // 0x16551c: 0x8e620048
    ctx->pc = 0x16551cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x165520: 0x5440000e
    ctx->pc = 0x165520u;
    {
        const bool branch_taken_0x165520 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x165520) {
            ctx->pc = 0x165524u;
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->pc = 0x16555Cu;
            goto label_16555c;
        }
    }
    ctx->pc = 0x165528u;
    // 0x165528: 0x220202d
    ctx->pc = 0x165528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16552c: 0xdfb10008
    ctx->pc = 0x16552cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x165530: 0xdfb00000
    ctx->pc = 0x165530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165534: 0x24050001
    ctx->pc = 0x165534u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x165538: 0xdfb20010
    ctx->pc = 0x165538u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16553c: 0xdfb30018
    ctx->pc = 0x16553cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x165540: 0xdfb40020
    ctx->pc = 0x165540u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165544: 0xdfb50028
    ctx->pc = 0x165544u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x165548: 0xdfbf0030
    ctx->pc = 0x165548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16554c: 0x8059584
    ctx->pc = 0x16554Cu;
    ctx->pc = 0x165550u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x165610u;
    sub_00165610_0x165610(rdram, ctx, runtime); return;
    ctx->pc = 0x165554u;
    // 0x165554: 0x0
    ctx->pc = 0x165554u;
    // NOP
label_165558:
    // 0x165558: 0xdfb10008
    ctx->pc = 0x165558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16555c:
    // 0x16555c: 0xdfb20010
    ctx->pc = 0x16555cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165560: 0xdfb30018
    ctx->pc = 0x165560u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x165564: 0xdfb40020
    ctx->pc = 0x165564u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165568: 0xdfb50028
    ctx->pc = 0x165568u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16556c: 0xdfbf0030
    ctx->pc = 0x16556cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165570: 0x3e00008
    ctx->pc = 0x165570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165574u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x165440u: goto label_165440;
            case 0x165478u: goto label_165478;
            case 0x165488u: goto label_165488;
            case 0x1654A0u: goto label_1654a0;
            case 0x1654B8u: goto label_1654b8;
            case 0x1654CCu: goto label_1654cc;
            case 0x1654E8u: goto label_1654e8;
            case 0x1654F8u: goto label_1654f8;
            case 0x165500u: goto label_165500;
            case 0x165558u: goto label_165558;
            case 0x16555Cu: goto label_16555c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x165578u;
}
