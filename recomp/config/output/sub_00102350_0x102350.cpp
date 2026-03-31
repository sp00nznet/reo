#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00102350
// Address: 0x102350 - 0x102498
void sub_00102350_0x102350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x102350u;

label_102350:
    // 0x102350: 0x4842e000
    ctx->pc = 0x102350u;
    SET_GPR_U32(ctx, 2, ctx->vu0_itop);
label_102354:
    // 0x102354: 0x34420200
    ctx->pc = 0x102354u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 512));
label_102358:
    // 0x102358: 0x48c2e000
    ctx->pc = 0x102358u;
    ctx->vu0_itop = GPR_U32(ctx, 2) & 0x3FF;
label_10235c:
    // 0x10235c: 0x3e00008
label_102360:
    if (ctx->pc == 0x102360u) {
        ctx->pc = 0x102364u;
        goto label_102364;
    }
    ctx->pc = 0x10235Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102350u: goto label_102350;
            case 0x102354u: goto label_102354;
            case 0x102358u: goto label_102358;
            case 0x10235Cu: goto label_10235c;
            case 0x102360u: goto label_102360;
            case 0x102364u: goto label_102364;
            case 0x102368u: goto label_102368;
            case 0x10236Cu: goto label_10236c;
            case 0x102370u: goto label_102370;
            case 0x102374u: goto label_102374;
            case 0x102378u: goto label_102378;
            case 0x10237Cu: goto label_10237c;
            case 0x102380u: goto label_102380;
            case 0x102384u: goto label_102384;
            case 0x102388u: goto label_102388;
            case 0x10238Cu: goto label_10238c;
            case 0x102390u: goto label_102390;
            case 0x102394u: goto label_102394;
            case 0x102398u: goto label_102398;
            case 0x10239Cu: goto label_10239c;
            case 0x1023A0u: goto label_1023a0;
            case 0x1023A4u: goto label_1023a4;
            case 0x1023A8u: goto label_1023a8;
            case 0x1023ACu: goto label_1023ac;
            case 0x1023B0u: goto label_1023b0;
            case 0x1023B4u: goto label_1023b4;
            case 0x1023B8u: goto label_1023b8;
            case 0x1023BCu: goto label_1023bc;
            case 0x1023C0u: goto label_1023c0;
            case 0x1023C4u: goto label_1023c4;
            case 0x1023C8u: goto label_1023c8;
            case 0x1023CCu: goto label_1023cc;
            case 0x1023D0u: goto label_1023d0;
            case 0x1023D4u: goto label_1023d4;
            case 0x1023D8u: goto label_1023d8;
            case 0x1023DCu: goto label_1023dc;
            case 0x1023E0u: goto label_1023e0;
            case 0x1023E4u: goto label_1023e4;
            case 0x1023E8u: goto label_1023e8;
            case 0x1023ECu: goto label_1023ec;
            case 0x1023F0u: goto label_1023f0;
            case 0x1023F4u: goto label_1023f4;
            case 0x1023F8u: goto label_1023f8;
            case 0x1023FCu: goto label_1023fc;
            case 0x102400u: goto label_102400;
            case 0x102404u: goto label_102404;
            case 0x102408u: goto label_102408;
            case 0x10240Cu: goto label_10240c;
            case 0x102410u: goto label_102410;
            case 0x102414u: goto label_102414;
            case 0x102418u: goto label_102418;
            case 0x10241Cu: goto label_10241c;
            case 0x102420u: goto label_102420;
            case 0x102424u: goto label_102424;
            case 0x102428u: goto label_102428;
            case 0x10242Cu: goto label_10242c;
            case 0x102430u: goto label_102430;
            case 0x102434u: goto label_102434;
            case 0x102438u: goto label_102438;
            case 0x10243Cu: goto label_10243c;
            case 0x102440u: goto label_102440;
            case 0x102444u: goto label_102444;
            case 0x102448u: goto label_102448;
            case 0x10244Cu: goto label_10244c;
            case 0x102450u: goto label_102450;
            case 0x102454u: goto label_102454;
            case 0x102458u: goto label_102458;
            case 0x10245Cu: goto label_10245c;
            case 0x102460u: goto label_102460;
            case 0x102464u: goto label_102464;
            case 0x102468u: goto label_102468;
            case 0x10246Cu: goto label_10246c;
            case 0x102470u: goto label_102470;
            case 0x102474u: goto label_102474;
            case 0x102478u: goto label_102478;
            case 0x10247Cu: goto label_10247c;
            case 0x102480u: goto label_102480;
            case 0x102484u: goto label_102484;
            case 0x102488u: goto label_102488;
            case 0x10248Cu: goto label_10248c;
            case 0x102490u: goto label_102490;
            case 0x102494u: goto label_102494;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102364u;
label_102364:
    // 0x102364: 0x0
    ctx->pc = 0x102364u;
    // NOP
label_102368:
    // 0x102368: 0x27bdffe0
    ctx->pc = 0x102368u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_10236c:
    // 0x10236c: 0xffb00000
    ctx->pc = 0x10236cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_102370:
    // 0x102370: 0xffbf0010
    ctx->pc = 0x102370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_102374:
    // 0x102374: 0xc040926
label_102378:
    if (ctx->pc == 0x102378u) {
        ctx->pc = 0x102378u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10237Cu;
        goto label_10237c;
    }
    ctx->pc = 0x102374u;
    SET_GPR_U32(ctx, 31, 0x10237Cu);
    ctx->pc = 0x102378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x102498u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00102498_0x102498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10237Cu; }
    }
    if (ctx->pc != 0x10237Cu) { return; }
    ctx->pc = 0x10237Cu;
label_10237c:
    // 0x10237c: 0x40182d
    ctx->pc = 0x10237cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102380:
    // 0x102380: 0x2c620005
    ctx->pc = 0x102380u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 5));
label_102384:
    // 0x102384: 0x1040000b
label_102388:
    if (ctx->pc == 0x102388u) {
        ctx->pc = 0x102388u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        ctx->pc = 0x10238Cu;
        goto label_10238c;
    }
    ctx->pc = 0x102384u;
    {
        const bool branch_taken_0x102384 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x102388u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x102384) {
            ctx->pc = 0x1023B4u;
            goto label_1023b4;
        }
    }
    ctx->pc = 0x10238Cu;
label_10238c:
    // 0x10238c: 0x31880
    ctx->pc = 0x10238cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_102390:
    // 0x102390: 0x244276e0
    ctx->pc = 0x102390u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30432));
label_102394:
    // 0x102394: 0x621821
    ctx->pc = 0x102394u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_102398:
    // 0x102398: 0x8c640000
    ctx->pc = 0x102398u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10239c:
    // 0x10239c: 0x800008
label_1023a0:
    if (ctx->pc == 0x1023A0u) {
        ctx->pc = 0x1023A4u;
        goto label_1023a4;
    }
    ctx->pc = 0x10239Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102350u: goto label_102350;
            case 0x102354u: goto label_102354;
            case 0x102358u: goto label_102358;
            case 0x10235Cu: goto label_10235c;
            case 0x102360u: goto label_102360;
            case 0x102364u: goto label_102364;
            case 0x102368u: goto label_102368;
            case 0x10236Cu: goto label_10236c;
            case 0x102370u: goto label_102370;
            case 0x102374u: goto label_102374;
            case 0x102378u: goto label_102378;
            case 0x10237Cu: goto label_10237c;
            case 0x102380u: goto label_102380;
            case 0x102384u: goto label_102384;
            case 0x102388u: goto label_102388;
            case 0x10238Cu: goto label_10238c;
            case 0x102390u: goto label_102390;
            case 0x102394u: goto label_102394;
            case 0x102398u: goto label_102398;
            case 0x10239Cu: goto label_10239c;
            case 0x1023A0u: goto label_1023a0;
            case 0x1023A4u: goto label_1023a4;
            case 0x1023A8u: goto label_1023a8;
            case 0x1023ACu: goto label_1023ac;
            case 0x1023B0u: goto label_1023b0;
            case 0x1023B4u: goto label_1023b4;
            case 0x1023B8u: goto label_1023b8;
            case 0x1023BCu: goto label_1023bc;
            case 0x1023C0u: goto label_1023c0;
            case 0x1023C4u: goto label_1023c4;
            case 0x1023C8u: goto label_1023c8;
            case 0x1023CCu: goto label_1023cc;
            case 0x1023D0u: goto label_1023d0;
            case 0x1023D4u: goto label_1023d4;
            case 0x1023D8u: goto label_1023d8;
            case 0x1023DCu: goto label_1023dc;
            case 0x1023E0u: goto label_1023e0;
            case 0x1023E4u: goto label_1023e4;
            case 0x1023E8u: goto label_1023e8;
            case 0x1023ECu: goto label_1023ec;
            case 0x1023F0u: goto label_1023f0;
            case 0x1023F4u: goto label_1023f4;
            case 0x1023F8u: goto label_1023f8;
            case 0x1023FCu: goto label_1023fc;
            case 0x102400u: goto label_102400;
            case 0x102404u: goto label_102404;
            case 0x102408u: goto label_102408;
            case 0x10240Cu: goto label_10240c;
            case 0x102410u: goto label_102410;
            case 0x102414u: goto label_102414;
            case 0x102418u: goto label_102418;
            case 0x10241Cu: goto label_10241c;
            case 0x102420u: goto label_102420;
            case 0x102424u: goto label_102424;
            case 0x102428u: goto label_102428;
            case 0x10242Cu: goto label_10242c;
            case 0x102430u: goto label_102430;
            case 0x102434u: goto label_102434;
            case 0x102438u: goto label_102438;
            case 0x10243Cu: goto label_10243c;
            case 0x102440u: goto label_102440;
            case 0x102444u: goto label_102444;
            case 0x102448u: goto label_102448;
            case 0x10244Cu: goto label_10244c;
            case 0x102450u: goto label_102450;
            case 0x102454u: goto label_102454;
            case 0x102458u: goto label_102458;
            case 0x10245Cu: goto label_10245c;
            case 0x102460u: goto label_102460;
            case 0x102464u: goto label_102464;
            case 0x102468u: goto label_102468;
            case 0x10246Cu: goto label_10246c;
            case 0x102470u: goto label_102470;
            case 0x102474u: goto label_102474;
            case 0x102478u: goto label_102478;
            case 0x10247Cu: goto label_10247c;
            case 0x102480u: goto label_102480;
            case 0x102484u: goto label_102484;
            case 0x102488u: goto label_102488;
            case 0x10248Cu: goto label_10248c;
            case 0x102490u: goto label_102490;
            case 0x102494u: goto label_102494;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1023A4u;
label_1023a4:
    // 0x1023a4: 0x4842e000
    ctx->pc = 0x1023a4u;
    SET_GPR_U32(ctx, 2, ctx->vu0_itop);
label_1023a8:
    // 0x1023a8: 0x34420100
    ctx->pc = 0x1023a8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 256));
label_1023ac:
    // 0x1023ac: 0x48c2e000
    ctx->pc = 0x1023acu;
    ctx->vu0_itop = GPR_U32(ctx, 2) & 0x3FF;
label_1023b0:
    // 0x1023b0: 0x24100001
    ctx->pc = 0x1023b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_1023b4:
    // 0x1023b4: 0x200102d
    ctx->pc = 0x1023b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1023b8:
    // 0x1023b8: 0xdfbf0010
    ctx->pc = 0x1023b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1023bc:
    // 0x1023bc: 0xdfb00000
    ctx->pc = 0x1023bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1023c0:
    // 0x1023c0: 0x3e00008
label_1023c4:
    if (ctx->pc == 0x1023C4u) {
        ctx->pc = 0x1023C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1023C8u;
        goto label_1023c8;
    }
    ctx->pc = 0x1023C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1023C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102350u: goto label_102350;
            case 0x102354u: goto label_102354;
            case 0x102358u: goto label_102358;
            case 0x10235Cu: goto label_10235c;
            case 0x102360u: goto label_102360;
            case 0x102364u: goto label_102364;
            case 0x102368u: goto label_102368;
            case 0x10236Cu: goto label_10236c;
            case 0x102370u: goto label_102370;
            case 0x102374u: goto label_102374;
            case 0x102378u: goto label_102378;
            case 0x10237Cu: goto label_10237c;
            case 0x102380u: goto label_102380;
            case 0x102384u: goto label_102384;
            case 0x102388u: goto label_102388;
            case 0x10238Cu: goto label_10238c;
            case 0x102390u: goto label_102390;
            case 0x102394u: goto label_102394;
            case 0x102398u: goto label_102398;
            case 0x10239Cu: goto label_10239c;
            case 0x1023A0u: goto label_1023a0;
            case 0x1023A4u: goto label_1023a4;
            case 0x1023A8u: goto label_1023a8;
            case 0x1023ACu: goto label_1023ac;
            case 0x1023B0u: goto label_1023b0;
            case 0x1023B4u: goto label_1023b4;
            case 0x1023B8u: goto label_1023b8;
            case 0x1023BCu: goto label_1023bc;
            case 0x1023C0u: goto label_1023c0;
            case 0x1023C4u: goto label_1023c4;
            case 0x1023C8u: goto label_1023c8;
            case 0x1023CCu: goto label_1023cc;
            case 0x1023D0u: goto label_1023d0;
            case 0x1023D4u: goto label_1023d4;
            case 0x1023D8u: goto label_1023d8;
            case 0x1023DCu: goto label_1023dc;
            case 0x1023E0u: goto label_1023e0;
            case 0x1023E4u: goto label_1023e4;
            case 0x1023E8u: goto label_1023e8;
            case 0x1023ECu: goto label_1023ec;
            case 0x1023F0u: goto label_1023f0;
            case 0x1023F4u: goto label_1023f4;
            case 0x1023F8u: goto label_1023f8;
            case 0x1023FCu: goto label_1023fc;
            case 0x102400u: goto label_102400;
            case 0x102404u: goto label_102404;
            case 0x102408u: goto label_102408;
            case 0x10240Cu: goto label_10240c;
            case 0x102410u: goto label_102410;
            case 0x102414u: goto label_102414;
            case 0x102418u: goto label_102418;
            case 0x10241Cu: goto label_10241c;
            case 0x102420u: goto label_102420;
            case 0x102424u: goto label_102424;
            case 0x102428u: goto label_102428;
            case 0x10242Cu: goto label_10242c;
            case 0x102430u: goto label_102430;
            case 0x102434u: goto label_102434;
            case 0x102438u: goto label_102438;
            case 0x10243Cu: goto label_10243c;
            case 0x102440u: goto label_102440;
            case 0x102444u: goto label_102444;
            case 0x102448u: goto label_102448;
            case 0x10244Cu: goto label_10244c;
            case 0x102450u: goto label_102450;
            case 0x102454u: goto label_102454;
            case 0x102458u: goto label_102458;
            case 0x10245Cu: goto label_10245c;
            case 0x102460u: goto label_102460;
            case 0x102464u: goto label_102464;
            case 0x102468u: goto label_102468;
            case 0x10246Cu: goto label_10246c;
            case 0x102470u: goto label_102470;
            case 0x102474u: goto label_102474;
            case 0x102478u: goto label_102478;
            case 0x10247Cu: goto label_10247c;
            case 0x102480u: goto label_102480;
            case 0x102484u: goto label_102484;
            case 0x102488u: goto label_102488;
            case 0x10248Cu: goto label_10248c;
            case 0x102490u: goto label_102490;
            case 0x102494u: goto label_102494;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1023C8u;
label_1023c8:
    // 0x1023c8: 0x27bdffe0
    ctx->pc = 0x1023c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1023cc:
    // 0x1023cc: 0xffb00000
    ctx->pc = 0x1023ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1023d0:
    // 0x1023d0: 0xffbf0010
    ctx->pc = 0x1023d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1023d4:
    // 0x1023d4: 0xc040926
label_1023d8:
    if (ctx->pc == 0x1023D8u) {
        ctx->pc = 0x1023D8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1023DCu;
        goto label_1023dc;
    }
    ctx->pc = 0x1023D4u;
    SET_GPR_U32(ctx, 31, 0x1023DCu);
    ctx->pc = 0x1023D8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x102498u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00102498_0x102498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1023DCu; }
    }
    if (ctx->pc != 0x1023DCu) { return; }
    ctx->pc = 0x1023DCu;
label_1023dc:
    // 0x1023dc: 0x40182d
    ctx->pc = 0x1023dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1023e0:
    // 0x1023e0: 0x28620004
    ctx->pc = 0x1023e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
label_1023e4:
    // 0x1023e4: 0x10400008
label_1023e8:
    if (ctx->pc == 0x1023E8u) {
        ctx->pc = 0x1023E8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1023ECu;
        goto label_1023ec;
    }
    ctx->pc = 0x1023E4u;
    {
        const bool branch_taken_0x1023e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1023E8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1023e4) {
            ctx->pc = 0x102408u;
            goto label_102408;
        }
    }
    ctx->pc = 0x1023ECu;
label_1023ec:
    // 0x1023ec: 0x18600007
label_1023f0:
    if (ctx->pc == 0x1023F0u) {
        ctx->pc = 0x1023F0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1023F4u;
        goto label_1023f4;
    }
    ctx->pc = 0x1023ECu;
    {
        const bool branch_taken_0x1023ec = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1023F0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1023ec) {
            ctx->pc = 0x10240Cu;
            goto label_10240c;
        }
    }
    ctx->pc = 0x1023F4u;
label_1023f4:
    // 0x1023f4: 0xc04093c
label_1023f8:
    if (ctx->pc == 0x1023F8u) {
        ctx->pc = 0x1023F8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1023FCu;
        goto label_1023fc;
    }
    ctx->pc = 0x1023F4u;
    SET_GPR_U32(ctx, 31, 0x1023FCu);
    ctx->pc = 0x1023F8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1024F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001024F0_0x1024f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1023FCu; }
    }
    if (ctx->pc != 0x1023FCu) { return; }
    ctx->pc = 0x1023FCu;
label_1023fc:
    // 0x1023fc: 0xc040938
label_102400:
    if (ctx->pc == 0x102400u) {
        ctx->pc = 0x102400u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x102404u;
        goto label_102404;
    }
    ctx->pc = 0x1023FCu;
    SET_GPR_U32(ctx, 31, 0x102404u);
    ctx->pc = 0x102400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1024E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001024E0_0x1024e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102404u; }
    }
    if (ctx->pc != 0x102404u) { return; }
    ctx->pc = 0x102404u;
label_102404:
    // 0x102404: 0x200102d
    ctx->pc = 0x102404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_102408:
    // 0x102408: 0xdfbf0010
    ctx->pc = 0x102408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10240c:
    // 0x10240c: 0xdfb00000
    ctx->pc = 0x10240cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_102410:
    // 0x102410: 0x3e00008
label_102414:
    if (ctx->pc == 0x102414u) {
        ctx->pc = 0x102414u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x102418u;
        goto label_102418;
    }
    ctx->pc = 0x102410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102414u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102350u: goto label_102350;
            case 0x102354u: goto label_102354;
            case 0x102358u: goto label_102358;
            case 0x10235Cu: goto label_10235c;
            case 0x102360u: goto label_102360;
            case 0x102364u: goto label_102364;
            case 0x102368u: goto label_102368;
            case 0x10236Cu: goto label_10236c;
            case 0x102370u: goto label_102370;
            case 0x102374u: goto label_102374;
            case 0x102378u: goto label_102378;
            case 0x10237Cu: goto label_10237c;
            case 0x102380u: goto label_102380;
            case 0x102384u: goto label_102384;
            case 0x102388u: goto label_102388;
            case 0x10238Cu: goto label_10238c;
            case 0x102390u: goto label_102390;
            case 0x102394u: goto label_102394;
            case 0x102398u: goto label_102398;
            case 0x10239Cu: goto label_10239c;
            case 0x1023A0u: goto label_1023a0;
            case 0x1023A4u: goto label_1023a4;
            case 0x1023A8u: goto label_1023a8;
            case 0x1023ACu: goto label_1023ac;
            case 0x1023B0u: goto label_1023b0;
            case 0x1023B4u: goto label_1023b4;
            case 0x1023B8u: goto label_1023b8;
            case 0x1023BCu: goto label_1023bc;
            case 0x1023C0u: goto label_1023c0;
            case 0x1023C4u: goto label_1023c4;
            case 0x1023C8u: goto label_1023c8;
            case 0x1023CCu: goto label_1023cc;
            case 0x1023D0u: goto label_1023d0;
            case 0x1023D4u: goto label_1023d4;
            case 0x1023D8u: goto label_1023d8;
            case 0x1023DCu: goto label_1023dc;
            case 0x1023E0u: goto label_1023e0;
            case 0x1023E4u: goto label_1023e4;
            case 0x1023E8u: goto label_1023e8;
            case 0x1023ECu: goto label_1023ec;
            case 0x1023F0u: goto label_1023f0;
            case 0x1023F4u: goto label_1023f4;
            case 0x1023F8u: goto label_1023f8;
            case 0x1023FCu: goto label_1023fc;
            case 0x102400u: goto label_102400;
            case 0x102404u: goto label_102404;
            case 0x102408u: goto label_102408;
            case 0x10240Cu: goto label_10240c;
            case 0x102410u: goto label_102410;
            case 0x102414u: goto label_102414;
            case 0x102418u: goto label_102418;
            case 0x10241Cu: goto label_10241c;
            case 0x102420u: goto label_102420;
            case 0x102424u: goto label_102424;
            case 0x102428u: goto label_102428;
            case 0x10242Cu: goto label_10242c;
            case 0x102430u: goto label_102430;
            case 0x102434u: goto label_102434;
            case 0x102438u: goto label_102438;
            case 0x10243Cu: goto label_10243c;
            case 0x102440u: goto label_102440;
            case 0x102444u: goto label_102444;
            case 0x102448u: goto label_102448;
            case 0x10244Cu: goto label_10244c;
            case 0x102450u: goto label_102450;
            case 0x102454u: goto label_102454;
            case 0x102458u: goto label_102458;
            case 0x10245Cu: goto label_10245c;
            case 0x102460u: goto label_102460;
            case 0x102464u: goto label_102464;
            case 0x102468u: goto label_102468;
            case 0x10246Cu: goto label_10246c;
            case 0x102470u: goto label_102470;
            case 0x102474u: goto label_102474;
            case 0x102478u: goto label_102478;
            case 0x10247Cu: goto label_10247c;
            case 0x102480u: goto label_102480;
            case 0x102484u: goto label_102484;
            case 0x102488u: goto label_102488;
            case 0x10248Cu: goto label_10248c;
            case 0x102490u: goto label_102490;
            case 0x102494u: goto label_102494;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102418u;
label_102418:
    // 0x102418: 0x4843e000
    ctx->pc = 0x102418u;
    SET_GPR_U32(ctx, 3, ctx->vu0_itop);
label_10241c:
    // 0x10241c: 0x24020001
    ctx->pc = 0x10241cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_102420:
    // 0x102420: 0x14820003
label_102424:
    if (ctx->pc == 0x102424u) {
        ctx->pc = 0x102428u;
        goto label_102428;
    }
    ctx->pc = 0x102420u;
    {
        const bool branch_taken_0x102420 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x102420) {
            ctx->pc = 0x102430u;
            goto label_102430;
        }
    }
    ctx->pc = 0x102428u;
label_102428:
    // 0x102428: 0x10000004
label_10242c:
    if (ctx->pc == 0x10242Cu) {
        ctx->pc = 0x10242Cu;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 1024));
        ctx->pc = 0x102430u;
        goto label_102430;
    }
    ctx->pc = 0x102428u;
    {
        const bool branch_taken_0x102428 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10242Cu;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 1024));
        if (branch_taken_0x102428) {
            ctx->pc = 0x10243Cu;
            goto label_10243c;
        }
    }
    ctx->pc = 0x102430u;
label_102430:
    // 0x102430: 0x3c02ffff
    ctx->pc = 0x102430u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
label_102434:
    // 0x102434: 0x3442fbff
    ctx->pc = 0x102434u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 64511));
label_102438:
    // 0x102438: 0x621824
    ctx->pc = 0x102438u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10243c:
    // 0x10243c: 0x48c3e000
    ctx->pc = 0x10243cu;
    ctx->vu0_itop = GPR_U32(ctx, 3) & 0x3FF;
label_102440:
    // 0x102440: 0x3e00008
label_102444:
    if (ctx->pc == 0x102444u) {
        ctx->pc = 0x102448u;
        goto label_102448;
    }
    ctx->pc = 0x102440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102350u: goto label_102350;
            case 0x102354u: goto label_102354;
            case 0x102358u: goto label_102358;
            case 0x10235Cu: goto label_10235c;
            case 0x102360u: goto label_102360;
            case 0x102364u: goto label_102364;
            case 0x102368u: goto label_102368;
            case 0x10236Cu: goto label_10236c;
            case 0x102370u: goto label_102370;
            case 0x102374u: goto label_102374;
            case 0x102378u: goto label_102378;
            case 0x10237Cu: goto label_10237c;
            case 0x102380u: goto label_102380;
            case 0x102384u: goto label_102384;
            case 0x102388u: goto label_102388;
            case 0x10238Cu: goto label_10238c;
            case 0x102390u: goto label_102390;
            case 0x102394u: goto label_102394;
            case 0x102398u: goto label_102398;
            case 0x10239Cu: goto label_10239c;
            case 0x1023A0u: goto label_1023a0;
            case 0x1023A4u: goto label_1023a4;
            case 0x1023A8u: goto label_1023a8;
            case 0x1023ACu: goto label_1023ac;
            case 0x1023B0u: goto label_1023b0;
            case 0x1023B4u: goto label_1023b4;
            case 0x1023B8u: goto label_1023b8;
            case 0x1023BCu: goto label_1023bc;
            case 0x1023C0u: goto label_1023c0;
            case 0x1023C4u: goto label_1023c4;
            case 0x1023C8u: goto label_1023c8;
            case 0x1023CCu: goto label_1023cc;
            case 0x1023D0u: goto label_1023d0;
            case 0x1023D4u: goto label_1023d4;
            case 0x1023D8u: goto label_1023d8;
            case 0x1023DCu: goto label_1023dc;
            case 0x1023E0u: goto label_1023e0;
            case 0x1023E4u: goto label_1023e4;
            case 0x1023E8u: goto label_1023e8;
            case 0x1023ECu: goto label_1023ec;
            case 0x1023F0u: goto label_1023f0;
            case 0x1023F4u: goto label_1023f4;
            case 0x1023F8u: goto label_1023f8;
            case 0x1023FCu: goto label_1023fc;
            case 0x102400u: goto label_102400;
            case 0x102404u: goto label_102404;
            case 0x102408u: goto label_102408;
            case 0x10240Cu: goto label_10240c;
            case 0x102410u: goto label_102410;
            case 0x102414u: goto label_102414;
            case 0x102418u: goto label_102418;
            case 0x10241Cu: goto label_10241c;
            case 0x102420u: goto label_102420;
            case 0x102424u: goto label_102424;
            case 0x102428u: goto label_102428;
            case 0x10242Cu: goto label_10242c;
            case 0x102430u: goto label_102430;
            case 0x102434u: goto label_102434;
            case 0x102438u: goto label_102438;
            case 0x10243Cu: goto label_10243c;
            case 0x102440u: goto label_102440;
            case 0x102444u: goto label_102444;
            case 0x102448u: goto label_102448;
            case 0x10244Cu: goto label_10244c;
            case 0x102450u: goto label_102450;
            case 0x102454u: goto label_102454;
            case 0x102458u: goto label_102458;
            case 0x10245Cu: goto label_10245c;
            case 0x102460u: goto label_102460;
            case 0x102464u: goto label_102464;
            case 0x102468u: goto label_102468;
            case 0x10246Cu: goto label_10246c;
            case 0x102470u: goto label_102470;
            case 0x102474u: goto label_102474;
            case 0x102478u: goto label_102478;
            case 0x10247Cu: goto label_10247c;
            case 0x102480u: goto label_102480;
            case 0x102484u: goto label_102484;
            case 0x102488u: goto label_102488;
            case 0x10248Cu: goto label_10248c;
            case 0x102490u: goto label_102490;
            case 0x102494u: goto label_102494;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102448u;
label_102448:
    // 0x102448: 0x4843e000
    ctx->pc = 0x102448u;
    SET_GPR_U32(ctx, 3, ctx->vu0_itop);
label_10244c:
    // 0x10244c: 0x24020001
    ctx->pc = 0x10244cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_102450:
    // 0x102450: 0x14820003
label_102454:
    if (ctx->pc == 0x102454u) {
        ctx->pc = 0x102458u;
        goto label_102458;
    }
    ctx->pc = 0x102450u;
    {
        const bool branch_taken_0x102450 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x102450) {
            ctx->pc = 0x102460u;
            goto label_102460;
        }
    }
    ctx->pc = 0x102458u;
label_102458:
    // 0x102458: 0x10000004
label_10245c:
    if (ctx->pc == 0x10245Cu) {
        ctx->pc = 0x10245Cu;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 2048));
        ctx->pc = 0x102460u;
        goto label_102460;
    }
    ctx->pc = 0x102458u;
    {
        const bool branch_taken_0x102458 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10245Cu;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 2048));
        if (branch_taken_0x102458) {
            ctx->pc = 0x10246Cu;
            goto label_10246c;
        }
    }
    ctx->pc = 0x102460u;
label_102460:
    // 0x102460: 0x3c02ffff
    ctx->pc = 0x102460u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
label_102464:
    // 0x102464: 0x3442f7ff
    ctx->pc = 0x102464u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 63487));
label_102468:
    // 0x102468: 0x621824
    ctx->pc = 0x102468u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10246c:
    // 0x10246c: 0x48c3e000
    ctx->pc = 0x10246cu;
    ctx->vu0_itop = GPR_U32(ctx, 3) & 0x3FF;
label_102470:
    // 0x102470: 0x3e00008
label_102474:
    if (ctx->pc == 0x102474u) {
        ctx->pc = 0x102478u;
        goto label_102478;
    }
    ctx->pc = 0x102470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102350u: goto label_102350;
            case 0x102354u: goto label_102354;
            case 0x102358u: goto label_102358;
            case 0x10235Cu: goto label_10235c;
            case 0x102360u: goto label_102360;
            case 0x102364u: goto label_102364;
            case 0x102368u: goto label_102368;
            case 0x10236Cu: goto label_10236c;
            case 0x102370u: goto label_102370;
            case 0x102374u: goto label_102374;
            case 0x102378u: goto label_102378;
            case 0x10237Cu: goto label_10237c;
            case 0x102380u: goto label_102380;
            case 0x102384u: goto label_102384;
            case 0x102388u: goto label_102388;
            case 0x10238Cu: goto label_10238c;
            case 0x102390u: goto label_102390;
            case 0x102394u: goto label_102394;
            case 0x102398u: goto label_102398;
            case 0x10239Cu: goto label_10239c;
            case 0x1023A0u: goto label_1023a0;
            case 0x1023A4u: goto label_1023a4;
            case 0x1023A8u: goto label_1023a8;
            case 0x1023ACu: goto label_1023ac;
            case 0x1023B0u: goto label_1023b0;
            case 0x1023B4u: goto label_1023b4;
            case 0x1023B8u: goto label_1023b8;
            case 0x1023BCu: goto label_1023bc;
            case 0x1023C0u: goto label_1023c0;
            case 0x1023C4u: goto label_1023c4;
            case 0x1023C8u: goto label_1023c8;
            case 0x1023CCu: goto label_1023cc;
            case 0x1023D0u: goto label_1023d0;
            case 0x1023D4u: goto label_1023d4;
            case 0x1023D8u: goto label_1023d8;
            case 0x1023DCu: goto label_1023dc;
            case 0x1023E0u: goto label_1023e0;
            case 0x1023E4u: goto label_1023e4;
            case 0x1023E8u: goto label_1023e8;
            case 0x1023ECu: goto label_1023ec;
            case 0x1023F0u: goto label_1023f0;
            case 0x1023F4u: goto label_1023f4;
            case 0x1023F8u: goto label_1023f8;
            case 0x1023FCu: goto label_1023fc;
            case 0x102400u: goto label_102400;
            case 0x102404u: goto label_102404;
            case 0x102408u: goto label_102408;
            case 0x10240Cu: goto label_10240c;
            case 0x102410u: goto label_102410;
            case 0x102414u: goto label_102414;
            case 0x102418u: goto label_102418;
            case 0x10241Cu: goto label_10241c;
            case 0x102420u: goto label_102420;
            case 0x102424u: goto label_102424;
            case 0x102428u: goto label_102428;
            case 0x10242Cu: goto label_10242c;
            case 0x102430u: goto label_102430;
            case 0x102434u: goto label_102434;
            case 0x102438u: goto label_102438;
            case 0x10243Cu: goto label_10243c;
            case 0x102440u: goto label_102440;
            case 0x102444u: goto label_102444;
            case 0x102448u: goto label_102448;
            case 0x10244Cu: goto label_10244c;
            case 0x102450u: goto label_102450;
            case 0x102454u: goto label_102454;
            case 0x102458u: goto label_102458;
            case 0x10245Cu: goto label_10245c;
            case 0x102460u: goto label_102460;
            case 0x102464u: goto label_102464;
            case 0x102468u: goto label_102468;
            case 0x10246Cu: goto label_10246c;
            case 0x102470u: goto label_102470;
            case 0x102474u: goto label_102474;
            case 0x102478u: goto label_102478;
            case 0x10247Cu: goto label_10247c;
            case 0x102480u: goto label_102480;
            case 0x102484u: goto label_102484;
            case 0x102488u: goto label_102488;
            case 0x10248Cu: goto label_10248c;
            case 0x102490u: goto label_102490;
            case 0x102494u: goto label_102494;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102478u;
label_102478:
    // 0x102478: 0x4842e000
    ctx->pc = 0x102478u;
    SET_GPR_U32(ctx, 2, ctx->vu0_itop);
label_10247c:
    // 0x10247c: 0x21282
    ctx->pc = 0x10247cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 10));
label_102480:
    // 0x102480: 0x3e00008
label_102484:
    if (ctx->pc == 0x102484u) {
        ctx->pc = 0x102484u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x102488u;
        goto label_102488;
    }
    ctx->pc = 0x102480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102484u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102350u: goto label_102350;
            case 0x102354u: goto label_102354;
            case 0x102358u: goto label_102358;
            case 0x10235Cu: goto label_10235c;
            case 0x102360u: goto label_102360;
            case 0x102364u: goto label_102364;
            case 0x102368u: goto label_102368;
            case 0x10236Cu: goto label_10236c;
            case 0x102370u: goto label_102370;
            case 0x102374u: goto label_102374;
            case 0x102378u: goto label_102378;
            case 0x10237Cu: goto label_10237c;
            case 0x102380u: goto label_102380;
            case 0x102384u: goto label_102384;
            case 0x102388u: goto label_102388;
            case 0x10238Cu: goto label_10238c;
            case 0x102390u: goto label_102390;
            case 0x102394u: goto label_102394;
            case 0x102398u: goto label_102398;
            case 0x10239Cu: goto label_10239c;
            case 0x1023A0u: goto label_1023a0;
            case 0x1023A4u: goto label_1023a4;
            case 0x1023A8u: goto label_1023a8;
            case 0x1023ACu: goto label_1023ac;
            case 0x1023B0u: goto label_1023b0;
            case 0x1023B4u: goto label_1023b4;
            case 0x1023B8u: goto label_1023b8;
            case 0x1023BCu: goto label_1023bc;
            case 0x1023C0u: goto label_1023c0;
            case 0x1023C4u: goto label_1023c4;
            case 0x1023C8u: goto label_1023c8;
            case 0x1023CCu: goto label_1023cc;
            case 0x1023D0u: goto label_1023d0;
            case 0x1023D4u: goto label_1023d4;
            case 0x1023D8u: goto label_1023d8;
            case 0x1023DCu: goto label_1023dc;
            case 0x1023E0u: goto label_1023e0;
            case 0x1023E4u: goto label_1023e4;
            case 0x1023E8u: goto label_1023e8;
            case 0x1023ECu: goto label_1023ec;
            case 0x1023F0u: goto label_1023f0;
            case 0x1023F4u: goto label_1023f4;
            case 0x1023F8u: goto label_1023f8;
            case 0x1023FCu: goto label_1023fc;
            case 0x102400u: goto label_102400;
            case 0x102404u: goto label_102404;
            case 0x102408u: goto label_102408;
            case 0x10240Cu: goto label_10240c;
            case 0x102410u: goto label_102410;
            case 0x102414u: goto label_102414;
            case 0x102418u: goto label_102418;
            case 0x10241Cu: goto label_10241c;
            case 0x102420u: goto label_102420;
            case 0x102424u: goto label_102424;
            case 0x102428u: goto label_102428;
            case 0x10242Cu: goto label_10242c;
            case 0x102430u: goto label_102430;
            case 0x102434u: goto label_102434;
            case 0x102438u: goto label_102438;
            case 0x10243Cu: goto label_10243c;
            case 0x102440u: goto label_102440;
            case 0x102444u: goto label_102444;
            case 0x102448u: goto label_102448;
            case 0x10244Cu: goto label_10244c;
            case 0x102450u: goto label_102450;
            case 0x102454u: goto label_102454;
            case 0x102458u: goto label_102458;
            case 0x10245Cu: goto label_10245c;
            case 0x102460u: goto label_102460;
            case 0x102464u: goto label_102464;
            case 0x102468u: goto label_102468;
            case 0x10246Cu: goto label_10246c;
            case 0x102470u: goto label_102470;
            case 0x102474u: goto label_102474;
            case 0x102478u: goto label_102478;
            case 0x10247Cu: goto label_10247c;
            case 0x102480u: goto label_102480;
            case 0x102484u: goto label_102484;
            case 0x102488u: goto label_102488;
            case 0x10248Cu: goto label_10248c;
            case 0x102490u: goto label_102490;
            case 0x102494u: goto label_102494;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102488u;
label_102488:
    // 0x102488: 0x4842e000
    ctx->pc = 0x102488u;
    SET_GPR_U32(ctx, 2, ctx->vu0_itop);
label_10248c:
    // 0x10248c: 0x212c2
    ctx->pc = 0x10248cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 11));
label_102490:
    // 0x102490: 0x3e00008
label_102494:
    if (ctx->pc == 0x102494u) {
        ctx->pc = 0x102494u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x102498u;
        goto label_fallthrough_0x102490;
    }
    ctx->pc = 0x102490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102494u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102350u: goto label_102350;
            case 0x102354u: goto label_102354;
            case 0x102358u: goto label_102358;
            case 0x10235Cu: goto label_10235c;
            case 0x102360u: goto label_102360;
            case 0x102364u: goto label_102364;
            case 0x102368u: goto label_102368;
            case 0x10236Cu: goto label_10236c;
            case 0x102370u: goto label_102370;
            case 0x102374u: goto label_102374;
            case 0x102378u: goto label_102378;
            case 0x10237Cu: goto label_10237c;
            case 0x102380u: goto label_102380;
            case 0x102384u: goto label_102384;
            case 0x102388u: goto label_102388;
            case 0x10238Cu: goto label_10238c;
            case 0x102390u: goto label_102390;
            case 0x102394u: goto label_102394;
            case 0x102398u: goto label_102398;
            case 0x10239Cu: goto label_10239c;
            case 0x1023A0u: goto label_1023a0;
            case 0x1023A4u: goto label_1023a4;
            case 0x1023A8u: goto label_1023a8;
            case 0x1023ACu: goto label_1023ac;
            case 0x1023B0u: goto label_1023b0;
            case 0x1023B4u: goto label_1023b4;
            case 0x1023B8u: goto label_1023b8;
            case 0x1023BCu: goto label_1023bc;
            case 0x1023C0u: goto label_1023c0;
            case 0x1023C4u: goto label_1023c4;
            case 0x1023C8u: goto label_1023c8;
            case 0x1023CCu: goto label_1023cc;
            case 0x1023D0u: goto label_1023d0;
            case 0x1023D4u: goto label_1023d4;
            case 0x1023D8u: goto label_1023d8;
            case 0x1023DCu: goto label_1023dc;
            case 0x1023E0u: goto label_1023e0;
            case 0x1023E4u: goto label_1023e4;
            case 0x1023E8u: goto label_1023e8;
            case 0x1023ECu: goto label_1023ec;
            case 0x1023F0u: goto label_1023f0;
            case 0x1023F4u: goto label_1023f4;
            case 0x1023F8u: goto label_1023f8;
            case 0x1023FCu: goto label_1023fc;
            case 0x102400u: goto label_102400;
            case 0x102404u: goto label_102404;
            case 0x102408u: goto label_102408;
            case 0x10240Cu: goto label_10240c;
            case 0x102410u: goto label_102410;
            case 0x102414u: goto label_102414;
            case 0x102418u: goto label_102418;
            case 0x10241Cu: goto label_10241c;
            case 0x102420u: goto label_102420;
            case 0x102424u: goto label_102424;
            case 0x102428u: goto label_102428;
            case 0x10242Cu: goto label_10242c;
            case 0x102430u: goto label_102430;
            case 0x102434u: goto label_102434;
            case 0x102438u: goto label_102438;
            case 0x10243Cu: goto label_10243c;
            case 0x102440u: goto label_102440;
            case 0x102444u: goto label_102444;
            case 0x102448u: goto label_102448;
            case 0x10244Cu: goto label_10244c;
            case 0x102450u: goto label_102450;
            case 0x102454u: goto label_102454;
            case 0x102458u: goto label_102458;
            case 0x10245Cu: goto label_10245c;
            case 0x102460u: goto label_102460;
            case 0x102464u: goto label_102464;
            case 0x102468u: goto label_102468;
            case 0x10246Cu: goto label_10246c;
            case 0x102470u: goto label_102470;
            case 0x102474u: goto label_102474;
            case 0x102478u: goto label_102478;
            case 0x10247Cu: goto label_10247c;
            case 0x102480u: goto label_102480;
            case 0x102484u: goto label_102484;
            case 0x102488u: goto label_102488;
            case 0x10248Cu: goto label_10248c;
            case 0x102490u: goto label_102490;
            case 0x102494u: goto label_102494;
            default: break;
        }
        return;
    }
label_fallthrough_0x102490:
    ctx->pc = 0x102498u;
}
