#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00133490
// Address: 0x133490 - 0x133b48
void sub_00133490_0x133490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x133490u;

label_133490:
    // 0x133490: 0x27bdffc0
    ctx->pc = 0x133490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_133494:
    // 0x133494: 0xffb00020
    ctx->pc = 0x133494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_133498:
    // 0x133498: 0x80802d
    ctx->pc = 0x133498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13349c:
    // 0x13349c: 0xffb10028
    ctx->pc = 0x13349cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1334a0:
    // 0x1334a0: 0xa0882d
    ctx->pc = 0x1334a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1334a4:
    // 0x1334a4: 0xffb20030
    ctx->pc = 0x1334a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1334a8:
    // 0x1334a8: 0xc0902d
    ctx->pc = 0x1334a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1334ac:
    // 0x1334ac: 0x16000006
label_1334b0:
    if (ctx->pc == 0x1334B0u) {
        ctx->pc = 0x1334B0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->pc = 0x1334B4u;
        goto label_1334b4;
    }
    ctx->pc = 0x1334ACu;
    {
        const bool branch_taken_0x1334ac = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1334B0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        if (branch_taken_0x1334ac) {
            ctx->pc = 0x1334C8u;
            goto label_1334c8;
        }
    }
    ctx->pc = 0x1334B4u;
label_1334b4:
    // 0x1334b4: 0x3c040024
    ctx->pc = 0x1334b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_1334b8:
    // 0x1334b8: 0xc04a034
label_1334bc:
    if (ctx->pc == 0x1334BCu) {
        ctx->pc = 0x1334BCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948216));
        ctx->pc = 0x1334C0u;
        goto label_1334c0;
    }
    ctx->pc = 0x1334B8u;
    SET_GPR_U32(ctx, 31, 0x1334C0u);
    ctx->pc = 0x1334BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948216));
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1334C0u; }
    }
    if (ctx->pc != 0x1334C0u) { return; }
    ctx->pc = 0x1334C0u;
label_1334c0:
    // 0x1334c0: 0x1000002a
label_1334c4:
    if (ctx->pc == 0x1334C4u) {
        ctx->pc = 0x1334C4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1334C8u;
        goto label_1334c8;
    }
    ctx->pc = 0x1334C0u;
    {
        const bool branch_taken_0x1334c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1334C4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1334c0) {
            ctx->pc = 0x13356Cu;
            goto label_13356c;
        }
    }
    ctx->pc = 0x1334C8u;
label_1334c8:
    // 0x1334c8: 0xc04c78e
label_1334cc:
    if (ctx->pc == 0x1334CCu) {
        ctx->pc = 0x1334D0u;
        goto label_1334d0;
    }
    ctx->pc = 0x1334C8u;
    SET_GPR_U32(ctx, 31, 0x1334D0u);
    ctx->pc = 0x131E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131E38_0x131e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1334D0u; }
    }
    if (ctx->pc != 0x1334D0u) { return; }
    ctx->pc = 0x1334D0u;
label_1334d0:
    // 0x1334d0: 0x220202d
    ctx->pc = 0x1334d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1334d4:
    // 0x1334d4: 0x8e0600b0
    ctx->pc = 0x1334d4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_1334d8:
    // 0x1334d8: 0x240282d
    ctx->pc = 0x1334d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1334dc:
    // 0x1334dc: 0x27a70010
    ctx->pc = 0x1334dcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
label_1334e0:
    // 0x1334e0: 0x27a80014
    ctx->pc = 0x1334e0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 20));
label_1334e4:
    // 0x1334e4: 0xc04a786
label_1334e8:
    if (ctx->pc == 0x1334E8u) {
        ctx->pc = 0x1334E8u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 24));
        ctx->pc = 0x1334ECu;
        goto label_1334ec;
    }
    ctx->pc = 0x1334E4u;
    SET_GPR_U32(ctx, 31, 0x1334ECu);
    ctx->pc = 0x1334E8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 24));
    ctx->pc = 0x129E18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E18_0x129e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1334ECu; }
    }
    if (ctx->pc != 0x1334ECu) { return; }
    ctx->pc = 0x1334ECu;
label_1334ec:
    // 0x1334ec: 0x5440001f
label_1334f0:
    if (ctx->pc == 0x1334F0u) {
        ctx->pc = 0x1334F0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1334F4u;
        goto label_1334f4;
    }
    ctx->pc = 0x1334ECu;
    {
        const bool branch_taken_0x1334ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1334ec) {
            ctx->pc = 0x1334F0u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->pc = 0x13356Cu;
            goto label_13356c;
        }
    }
    ctx->pc = 0x1334F4u;
label_1334f4:
    // 0x1334f4: 0x8e020008
    ctx->pc = 0x1334f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1334f8:
    // 0x1334f8: 0x1440000f
label_1334fc:
    if (ctx->pc == 0x1334FCu) {
        ctx->pc = 0x1334FCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x133500u;
        goto label_133500;
    }
    ctx->pc = 0x1334F8u;
    {
        const bool branch_taken_0x1334f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1334FCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1334f8) {
            ctx->pc = 0x133538u;
            goto label_133538;
        }
    }
    ctx->pc = 0x133500u;
label_133500:
    // 0x133500: 0x220202d
    ctx->pc = 0x133500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133504:
    // 0x133504: 0x240282d
    ctx->pc = 0x133504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_133508:
    // 0x133508: 0x3a0302d
    ctx->pc = 0x133508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13350c:
    // 0x13350c: 0xc04a0a8
label_133510:
    if (ctx->pc == 0x133510u) {
        ctx->pc = 0x133510u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x133514u;
        goto label_133514;
    }
    ctx->pc = 0x13350Cu;
    SET_GPR_U32(ctx, 31, 0x133514u);
    ctx->pc = 0x133510u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x1282A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001282A0_0x1282a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133514u; }
    }
    if (ctx->pc != 0x133514u) { return; }
    ctx->pc = 0x133514u;
label_133514:
    // 0x133514: 0x3c040024
    ctx->pc = 0x133514u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_133518:
    // 0x133518: 0x2484b5a8
    ctx->pc = 0x133518u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948264));
label_13351c:
    // 0x13351c: 0xc04a04a
label_133520:
    if (ctx->pc == 0x133520u) {
        ctx->pc = 0x133520u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133524u;
        goto label_133524;
    }
    ctx->pc = 0x13351Cu;
    SET_GPR_U32(ctx, 31, 0x133524u);
    ctx->pc = 0x133520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128128u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00128128_0x128128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133524u; }
    }
    if (ctx->pc != 0x133524u) { return; }
    ctx->pc = 0x133524u;
label_133524:
    // 0x133524: 0x2402ffff
    ctx->pc = 0x133524u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_133528:
    // 0x133528: 0x24030006
    ctx->pc = 0x133528u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
label_13352c:
    // 0x13352c: 0xa6020060
    ctx->pc = 0x13352cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
label_133530:
    // 0x133530: 0x1000000d
label_133534:
    if (ctx->pc == 0x133534u) {
        ctx->pc = 0x133534u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x133538u;
        goto label_133538;
    }
    ctx->pc = 0x133530u;
    {
        const bool branch_taken_0x133530 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x133534u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x133530) {
            ctx->pc = 0x133568u;
            goto label_133568;
        }
    }
    ctx->pc = 0x133538u;
label_133538:
    // 0x133538: 0x24020001
    ctx->pc = 0x133538u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_13353c:
    // 0x13353c: 0x8fa40014
    ctx->pc = 0x13353cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_133540:
    // 0x133540: 0x8fa50018
    ctx->pc = 0x133540u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_133544:
    // 0x133544: 0x8e0600b0
    ctx->pc = 0x133544u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_133548:
    // 0x133548: 0xae0300b8
    ctx->pc = 0x133548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
label_13354c:
    // 0x13354c: 0xae0600b4
    ctx->pc = 0x13354cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 6));
label_133550:
    // 0x133550: 0xae0400bc
    ctx->pc = 0x133550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 4));
label_133554:
    // 0x133554: 0xae0500c0
    ctx->pc = 0x133554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 5));
label_133558:
    // 0x133558: 0xa2020002
    ctx->pc = 0x133558u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_13355c:
    // 0x13355c: 0xa2000098
    ctx->pc = 0x13355cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 0));
label_133560:
    // 0x133560: 0xa2020001
    ctx->pc = 0x133560u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_133564:
    // 0x133564: 0xa20200ac
    ctx->pc = 0x133564u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 2));
label_133568:
    // 0x133568: 0xdfb00020
    ctx->pc = 0x133568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13356c:
    // 0x13356c: 0xdfb10028
    ctx->pc = 0x13356cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_133570:
    // 0x133570: 0xdfb20030
    ctx->pc = 0x133570u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_133574:
    // 0x133574: 0xdfbf0038
    ctx->pc = 0x133574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_133578:
    // 0x133578: 0x3e00008
label_13357c:
    if (ctx->pc == 0x13357Cu) {
        ctx->pc = 0x13357Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x133580u;
        goto label_133580;
    }
    ctx->pc = 0x133578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13357Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133490u: goto label_133490;
            case 0x133494u: goto label_133494;
            case 0x133498u: goto label_133498;
            case 0x13349Cu: goto label_13349c;
            case 0x1334A0u: goto label_1334a0;
            case 0x1334A4u: goto label_1334a4;
            case 0x1334A8u: goto label_1334a8;
            case 0x1334ACu: goto label_1334ac;
            case 0x1334B0u: goto label_1334b0;
            case 0x1334B4u: goto label_1334b4;
            case 0x1334B8u: goto label_1334b8;
            case 0x1334BCu: goto label_1334bc;
            case 0x1334C0u: goto label_1334c0;
            case 0x1334C4u: goto label_1334c4;
            case 0x1334C8u: goto label_1334c8;
            case 0x1334CCu: goto label_1334cc;
            case 0x1334D0u: goto label_1334d0;
            case 0x1334D4u: goto label_1334d4;
            case 0x1334D8u: goto label_1334d8;
            case 0x1334DCu: goto label_1334dc;
            case 0x1334E0u: goto label_1334e0;
            case 0x1334E4u: goto label_1334e4;
            case 0x1334E8u: goto label_1334e8;
            case 0x1334ECu: goto label_1334ec;
            case 0x1334F0u: goto label_1334f0;
            case 0x1334F4u: goto label_1334f4;
            case 0x1334F8u: goto label_1334f8;
            case 0x1334FCu: goto label_1334fc;
            case 0x133500u: goto label_133500;
            case 0x133504u: goto label_133504;
            case 0x133508u: goto label_133508;
            case 0x13350Cu: goto label_13350c;
            case 0x133510u: goto label_133510;
            case 0x133514u: goto label_133514;
            case 0x133518u: goto label_133518;
            case 0x13351Cu: goto label_13351c;
            case 0x133520u: goto label_133520;
            case 0x133524u: goto label_133524;
            case 0x133528u: goto label_133528;
            case 0x13352Cu: goto label_13352c;
            case 0x133530u: goto label_133530;
            case 0x133534u: goto label_133534;
            case 0x133538u: goto label_133538;
            case 0x13353Cu: goto label_13353c;
            case 0x133540u: goto label_133540;
            case 0x133544u: goto label_133544;
            case 0x133548u: goto label_133548;
            case 0x13354Cu: goto label_13354c;
            case 0x133550u: goto label_133550;
            case 0x133554u: goto label_133554;
            case 0x133558u: goto label_133558;
            case 0x13355Cu: goto label_13355c;
            case 0x133560u: goto label_133560;
            case 0x133564u: goto label_133564;
            case 0x133568u: goto label_133568;
            case 0x13356Cu: goto label_13356c;
            case 0x133570u: goto label_133570;
            case 0x133574u: goto label_133574;
            case 0x133578u: goto label_133578;
            case 0x13357Cu: goto label_13357c;
            case 0x133580u: goto label_133580;
            case 0x133584u: goto label_133584;
            case 0x133588u: goto label_133588;
            case 0x13358Cu: goto label_13358c;
            case 0x133590u: goto label_133590;
            case 0x133594u: goto label_133594;
            case 0x133598u: goto label_133598;
            case 0x13359Cu: goto label_13359c;
            case 0x1335A0u: goto label_1335a0;
            case 0x1335A4u: goto label_1335a4;
            case 0x1335A8u: goto label_1335a8;
            case 0x1335ACu: goto label_1335ac;
            case 0x1335B0u: goto label_1335b0;
            case 0x1335B4u: goto label_1335b4;
            case 0x1335B8u: goto label_1335b8;
            case 0x1335BCu: goto label_1335bc;
            case 0x1335C0u: goto label_1335c0;
            case 0x1335C4u: goto label_1335c4;
            case 0x1335C8u: goto label_1335c8;
            case 0x1335CCu: goto label_1335cc;
            case 0x1335D0u: goto label_1335d0;
            case 0x1335D4u: goto label_1335d4;
            case 0x1335D8u: goto label_1335d8;
            case 0x1335DCu: goto label_1335dc;
            case 0x1335E0u: goto label_1335e0;
            case 0x1335E4u: goto label_1335e4;
            case 0x1335E8u: goto label_1335e8;
            case 0x1335ECu: goto label_1335ec;
            case 0x1335F0u: goto label_1335f0;
            case 0x1335F4u: goto label_1335f4;
            case 0x1335F8u: goto label_1335f8;
            case 0x1335FCu: goto label_1335fc;
            case 0x133600u: goto label_133600;
            case 0x133604u: goto label_133604;
            case 0x133608u: goto label_133608;
            case 0x13360Cu: goto label_13360c;
            case 0x133610u: goto label_133610;
            case 0x133614u: goto label_133614;
            case 0x133618u: goto label_133618;
            case 0x13361Cu: goto label_13361c;
            case 0x133620u: goto label_133620;
            case 0x133624u: goto label_133624;
            case 0x133628u: goto label_133628;
            case 0x13362Cu: goto label_13362c;
            case 0x133630u: goto label_133630;
            case 0x133634u: goto label_133634;
            case 0x133638u: goto label_133638;
            case 0x13363Cu: goto label_13363c;
            case 0x133640u: goto label_133640;
            case 0x133644u: goto label_133644;
            case 0x133648u: goto label_133648;
            case 0x13364Cu: goto label_13364c;
            case 0x133650u: goto label_133650;
            case 0x133654u: goto label_133654;
            case 0x133658u: goto label_133658;
            case 0x13365Cu: goto label_13365c;
            case 0x133660u: goto label_133660;
            case 0x133664u: goto label_133664;
            case 0x133668u: goto label_133668;
            case 0x13366Cu: goto label_13366c;
            case 0x133670u: goto label_133670;
            case 0x133674u: goto label_133674;
            case 0x133678u: goto label_133678;
            case 0x13367Cu: goto label_13367c;
            case 0x133680u: goto label_133680;
            case 0x133684u: goto label_133684;
            case 0x133688u: goto label_133688;
            case 0x13368Cu: goto label_13368c;
            case 0x133690u: goto label_133690;
            case 0x133694u: goto label_133694;
            case 0x133698u: goto label_133698;
            case 0x13369Cu: goto label_13369c;
            case 0x1336A0u: goto label_1336a0;
            case 0x1336A4u: goto label_1336a4;
            case 0x1336A8u: goto label_1336a8;
            case 0x1336ACu: goto label_1336ac;
            case 0x1336B0u: goto label_1336b0;
            case 0x1336B4u: goto label_1336b4;
            case 0x1336B8u: goto label_1336b8;
            case 0x1336BCu: goto label_1336bc;
            case 0x1336C0u: goto label_1336c0;
            case 0x1336C4u: goto label_1336c4;
            case 0x1336C8u: goto label_1336c8;
            case 0x1336CCu: goto label_1336cc;
            case 0x1336D0u: goto label_1336d0;
            case 0x1336D4u: goto label_1336d4;
            case 0x1336D8u: goto label_1336d8;
            case 0x1336DCu: goto label_1336dc;
            case 0x1336E0u: goto label_1336e0;
            case 0x1336E4u: goto label_1336e4;
            case 0x1336E8u: goto label_1336e8;
            case 0x1336ECu: goto label_1336ec;
            case 0x1336F0u: goto label_1336f0;
            case 0x1336F4u: goto label_1336f4;
            case 0x1336F8u: goto label_1336f8;
            case 0x1336FCu: goto label_1336fc;
            case 0x133700u: goto label_133700;
            case 0x133704u: goto label_133704;
            case 0x133708u: goto label_133708;
            case 0x13370Cu: goto label_13370c;
            case 0x133710u: goto label_133710;
            case 0x133714u: goto label_133714;
            case 0x133718u: goto label_133718;
            case 0x13371Cu: goto label_13371c;
            case 0x133720u: goto label_133720;
            case 0x133724u: goto label_133724;
            case 0x133728u: goto label_133728;
            case 0x13372Cu: goto label_13372c;
            case 0x133730u: goto label_133730;
            case 0x133734u: goto label_133734;
            case 0x133738u: goto label_133738;
            case 0x13373Cu: goto label_13373c;
            case 0x133740u: goto label_133740;
            case 0x133744u: goto label_133744;
            case 0x133748u: goto label_133748;
            case 0x13374Cu: goto label_13374c;
            case 0x133750u: goto label_133750;
            case 0x133754u: goto label_133754;
            case 0x133758u: goto label_133758;
            case 0x13375Cu: goto label_13375c;
            case 0x133760u: goto label_133760;
            case 0x133764u: goto label_133764;
            case 0x133768u: goto label_133768;
            case 0x13376Cu: goto label_13376c;
            case 0x133770u: goto label_133770;
            case 0x133774u: goto label_133774;
            case 0x133778u: goto label_133778;
            case 0x13377Cu: goto label_13377c;
            case 0x133780u: goto label_133780;
            case 0x133784u: goto label_133784;
            case 0x133788u: goto label_133788;
            case 0x13378Cu: goto label_13378c;
            case 0x133790u: goto label_133790;
            case 0x133794u: goto label_133794;
            case 0x133798u: goto label_133798;
            case 0x13379Cu: goto label_13379c;
            case 0x1337A0u: goto label_1337a0;
            case 0x1337A4u: goto label_1337a4;
            case 0x1337A8u: goto label_1337a8;
            case 0x1337ACu: goto label_1337ac;
            case 0x1337B0u: goto label_1337b0;
            case 0x1337B4u: goto label_1337b4;
            case 0x1337B8u: goto label_1337b8;
            case 0x1337BCu: goto label_1337bc;
            case 0x1337C0u: goto label_1337c0;
            case 0x1337C4u: goto label_1337c4;
            case 0x1337C8u: goto label_1337c8;
            case 0x1337CCu: goto label_1337cc;
            case 0x1337D0u: goto label_1337d0;
            case 0x1337D4u: goto label_1337d4;
            case 0x1337D8u: goto label_1337d8;
            case 0x1337DCu: goto label_1337dc;
            case 0x1337E0u: goto label_1337e0;
            case 0x1337E4u: goto label_1337e4;
            case 0x1337E8u: goto label_1337e8;
            case 0x1337ECu: goto label_1337ec;
            case 0x1337F0u: goto label_1337f0;
            case 0x1337F4u: goto label_1337f4;
            case 0x1337F8u: goto label_1337f8;
            case 0x1337FCu: goto label_1337fc;
            case 0x133800u: goto label_133800;
            case 0x133804u: goto label_133804;
            case 0x133808u: goto label_133808;
            case 0x13380Cu: goto label_13380c;
            case 0x133810u: goto label_133810;
            case 0x133814u: goto label_133814;
            case 0x133818u: goto label_133818;
            case 0x13381Cu: goto label_13381c;
            case 0x133820u: goto label_133820;
            case 0x133824u: goto label_133824;
            case 0x133828u: goto label_133828;
            case 0x13382Cu: goto label_13382c;
            case 0x133830u: goto label_133830;
            case 0x133834u: goto label_133834;
            case 0x133838u: goto label_133838;
            case 0x13383Cu: goto label_13383c;
            case 0x133840u: goto label_133840;
            case 0x133844u: goto label_133844;
            case 0x133848u: goto label_133848;
            case 0x13384Cu: goto label_13384c;
            case 0x133850u: goto label_133850;
            case 0x133854u: goto label_133854;
            case 0x133858u: goto label_133858;
            case 0x13385Cu: goto label_13385c;
            case 0x133860u: goto label_133860;
            case 0x133864u: goto label_133864;
            case 0x133868u: goto label_133868;
            case 0x13386Cu: goto label_13386c;
            case 0x133870u: goto label_133870;
            case 0x133874u: goto label_133874;
            case 0x133878u: goto label_133878;
            case 0x13387Cu: goto label_13387c;
            case 0x133880u: goto label_133880;
            case 0x133884u: goto label_133884;
            case 0x133888u: goto label_133888;
            case 0x13388Cu: goto label_13388c;
            case 0x133890u: goto label_133890;
            case 0x133894u: goto label_133894;
            case 0x133898u: goto label_133898;
            case 0x13389Cu: goto label_13389c;
            case 0x1338A0u: goto label_1338a0;
            case 0x1338A4u: goto label_1338a4;
            case 0x1338A8u: goto label_1338a8;
            case 0x1338ACu: goto label_1338ac;
            case 0x1338B0u: goto label_1338b0;
            case 0x1338B4u: goto label_1338b4;
            case 0x1338B8u: goto label_1338b8;
            case 0x1338BCu: goto label_1338bc;
            case 0x1338C0u: goto label_1338c0;
            case 0x1338C4u: goto label_1338c4;
            case 0x1338C8u: goto label_1338c8;
            case 0x1338CCu: goto label_1338cc;
            case 0x1338D0u: goto label_1338d0;
            case 0x1338D4u: goto label_1338d4;
            case 0x1338D8u: goto label_1338d8;
            case 0x1338DCu: goto label_1338dc;
            case 0x1338E0u: goto label_1338e0;
            case 0x1338E4u: goto label_1338e4;
            case 0x1338E8u: goto label_1338e8;
            case 0x1338ECu: goto label_1338ec;
            case 0x1338F0u: goto label_1338f0;
            case 0x1338F4u: goto label_1338f4;
            case 0x1338F8u: goto label_1338f8;
            case 0x1338FCu: goto label_1338fc;
            case 0x133900u: goto label_133900;
            case 0x133904u: goto label_133904;
            case 0x133908u: goto label_133908;
            case 0x13390Cu: goto label_13390c;
            case 0x133910u: goto label_133910;
            case 0x133914u: goto label_133914;
            case 0x133918u: goto label_133918;
            case 0x13391Cu: goto label_13391c;
            case 0x133920u: goto label_133920;
            case 0x133924u: goto label_133924;
            case 0x133928u: goto label_133928;
            case 0x13392Cu: goto label_13392c;
            case 0x133930u: goto label_133930;
            case 0x133934u: goto label_133934;
            case 0x133938u: goto label_133938;
            case 0x13393Cu: goto label_13393c;
            case 0x133940u: goto label_133940;
            case 0x133944u: goto label_133944;
            case 0x133948u: goto label_133948;
            case 0x13394Cu: goto label_13394c;
            case 0x133950u: goto label_133950;
            case 0x133954u: goto label_133954;
            case 0x133958u: goto label_133958;
            case 0x13395Cu: goto label_13395c;
            case 0x133960u: goto label_133960;
            case 0x133964u: goto label_133964;
            case 0x133968u: goto label_133968;
            case 0x13396Cu: goto label_13396c;
            case 0x133970u: goto label_133970;
            case 0x133974u: goto label_133974;
            case 0x133978u: goto label_133978;
            case 0x13397Cu: goto label_13397c;
            case 0x133980u: goto label_133980;
            case 0x133984u: goto label_133984;
            case 0x133988u: goto label_133988;
            case 0x13398Cu: goto label_13398c;
            case 0x133990u: goto label_133990;
            case 0x133994u: goto label_133994;
            case 0x133998u: goto label_133998;
            case 0x13399Cu: goto label_13399c;
            case 0x1339A0u: goto label_1339a0;
            case 0x1339A4u: goto label_1339a4;
            case 0x1339A8u: goto label_1339a8;
            case 0x1339ACu: goto label_1339ac;
            case 0x1339B0u: goto label_1339b0;
            case 0x1339B4u: goto label_1339b4;
            case 0x1339B8u: goto label_1339b8;
            case 0x1339BCu: goto label_1339bc;
            case 0x1339C0u: goto label_1339c0;
            case 0x1339C4u: goto label_1339c4;
            case 0x1339C8u: goto label_1339c8;
            case 0x1339CCu: goto label_1339cc;
            case 0x1339D0u: goto label_1339d0;
            case 0x1339D4u: goto label_1339d4;
            case 0x1339D8u: goto label_1339d8;
            case 0x1339DCu: goto label_1339dc;
            case 0x1339E0u: goto label_1339e0;
            case 0x1339E4u: goto label_1339e4;
            case 0x1339E8u: goto label_1339e8;
            case 0x1339ECu: goto label_1339ec;
            case 0x1339F0u: goto label_1339f0;
            case 0x1339F4u: goto label_1339f4;
            case 0x1339F8u: goto label_1339f8;
            case 0x1339FCu: goto label_1339fc;
            case 0x133A00u: goto label_133a00;
            case 0x133A04u: goto label_133a04;
            case 0x133A08u: goto label_133a08;
            case 0x133A0Cu: goto label_133a0c;
            case 0x133A10u: goto label_133a10;
            case 0x133A14u: goto label_133a14;
            case 0x133A18u: goto label_133a18;
            case 0x133A1Cu: goto label_133a1c;
            case 0x133A20u: goto label_133a20;
            case 0x133A24u: goto label_133a24;
            case 0x133A28u: goto label_133a28;
            case 0x133A2Cu: goto label_133a2c;
            case 0x133A30u: goto label_133a30;
            case 0x133A34u: goto label_133a34;
            case 0x133A38u: goto label_133a38;
            case 0x133A3Cu: goto label_133a3c;
            case 0x133A40u: goto label_133a40;
            case 0x133A44u: goto label_133a44;
            case 0x133A48u: goto label_133a48;
            case 0x133A4Cu: goto label_133a4c;
            case 0x133A50u: goto label_133a50;
            case 0x133A54u: goto label_133a54;
            case 0x133A58u: goto label_133a58;
            case 0x133A5Cu: goto label_133a5c;
            case 0x133A60u: goto label_133a60;
            case 0x133A64u: goto label_133a64;
            case 0x133A68u: goto label_133a68;
            case 0x133A6Cu: goto label_133a6c;
            case 0x133A70u: goto label_133a70;
            case 0x133A74u: goto label_133a74;
            case 0x133A78u: goto label_133a78;
            case 0x133A7Cu: goto label_133a7c;
            case 0x133A80u: goto label_133a80;
            case 0x133A84u: goto label_133a84;
            case 0x133A88u: goto label_133a88;
            case 0x133A8Cu: goto label_133a8c;
            case 0x133A90u: goto label_133a90;
            case 0x133A94u: goto label_133a94;
            case 0x133A98u: goto label_133a98;
            case 0x133A9Cu: goto label_133a9c;
            case 0x133AA0u: goto label_133aa0;
            case 0x133AA4u: goto label_133aa4;
            case 0x133AA8u: goto label_133aa8;
            case 0x133AACu: goto label_133aac;
            case 0x133AB0u: goto label_133ab0;
            case 0x133AB4u: goto label_133ab4;
            case 0x133AB8u: goto label_133ab8;
            case 0x133ABCu: goto label_133abc;
            case 0x133AC0u: goto label_133ac0;
            case 0x133AC4u: goto label_133ac4;
            case 0x133AC8u: goto label_133ac8;
            case 0x133ACCu: goto label_133acc;
            case 0x133AD0u: goto label_133ad0;
            case 0x133AD4u: goto label_133ad4;
            case 0x133AD8u: goto label_133ad8;
            case 0x133ADCu: goto label_133adc;
            case 0x133AE0u: goto label_133ae0;
            case 0x133AE4u: goto label_133ae4;
            case 0x133AE8u: goto label_133ae8;
            case 0x133AECu: goto label_133aec;
            case 0x133AF0u: goto label_133af0;
            case 0x133AF4u: goto label_133af4;
            case 0x133AF8u: goto label_133af8;
            case 0x133AFCu: goto label_133afc;
            case 0x133B00u: goto label_133b00;
            case 0x133B04u: goto label_133b04;
            case 0x133B08u: goto label_133b08;
            case 0x133B0Cu: goto label_133b0c;
            case 0x133B10u: goto label_133b10;
            case 0x133B14u: goto label_133b14;
            case 0x133B18u: goto label_133b18;
            case 0x133B1Cu: goto label_133b1c;
            case 0x133B20u: goto label_133b20;
            case 0x133B24u: goto label_133b24;
            case 0x133B28u: goto label_133b28;
            case 0x133B2Cu: goto label_133b2c;
            case 0x133B30u: goto label_133b30;
            case 0x133B34u: goto label_133b34;
            case 0x133B38u: goto label_133b38;
            case 0x133B3Cu: goto label_133b3c;
            case 0x133B40u: goto label_133b40;
            case 0x133B44u: goto label_133b44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x133580u;
label_133580:
    // 0x133580: 0x27bdffe0
    ctx->pc = 0x133580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_133584:
    // 0x133584: 0xffb00000
    ctx->pc = 0x133584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_133588:
    // 0x133588: 0x80802d
    ctx->pc = 0x133588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13358c:
    // 0x13358c: 0xffb10008
    ctx->pc = 0x13358cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_133590:
    // 0x133590: 0xa0882d
    ctx->pc = 0x133590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_133594:
    // 0x133594: 0x12000003
label_133598:
    if (ctx->pc == 0x133598u) {
        ctx->pc = 0x133598u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x13359Cu;
        goto label_13359c;
    }
    ctx->pc = 0x133594u;
    {
        const bool branch_taken_0x133594 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x133598u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x133594) {
            ctx->pc = 0x1335A4u;
            goto label_1335a4;
        }
    }
    ctx->pc = 0x13359Cu;
label_13359c:
    // 0x13359c: 0x16200008
label_1335a0:
    if (ctx->pc == 0x1335A0u) {
        ctx->pc = 0x1335A4u;
        goto label_1335a4;
    }
    ctx->pc = 0x13359Cu;
    {
        const bool branch_taken_0x13359c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x13359c) {
            ctx->pc = 0x1335C0u;
            goto label_1335c0;
        }
    }
    ctx->pc = 0x1335A4u;
label_1335a4:
    // 0x1335a4: 0x3c040024
    ctx->pc = 0x1335a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_1335a8:
    // 0x1335a8: 0xdfb00000
    ctx->pc = 0x1335a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1335ac:
    // 0x1335ac: 0xdfb10008
    ctx->pc = 0x1335acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1335b0:
    // 0x1335b0: 0x2484b5d0
    ctx->pc = 0x1335b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948304));
label_1335b4:
    // 0x1335b4: 0xdfbf0010
    ctx->pc = 0x1335b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1335b8:
    // 0x1335b8: 0x804a034
label_1335bc:
    if (ctx->pc == 0x1335BCu) {
        ctx->pc = 0x1335BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1335C0u;
        goto label_1335c0;
    }
    ctx->pc = 0x1335B8u;
    ctx->pc = 0x1335BCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1280D0u;
    sub_001280D0_0x1280d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1335C0u;
label_1335c0:
    // 0x1335c0: 0xc04c78e
label_1335c4:
    if (ctx->pc == 0x1335C4u) {
        ctx->pc = 0x1335C8u;
        goto label_1335c8;
    }
    ctx->pc = 0x1335C0u;
    SET_GPR_U32(ctx, 31, 0x1335C8u);
    ctx->pc = 0x131E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131E38_0x131e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1335C8u; }
    }
    if (ctx->pc != 0x1335C8u) { return; }
    ctx->pc = 0x1335C8u;
label_1335c8:
    // 0x1335c8: 0x8e0400b0
    ctx->pc = 0x1335c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_1335cc:
    // 0x1335cc: 0xc042bf0
label_1335d0:
    if (ctx->pc == 0x1335D0u) {
        ctx->pc = 0x1335D0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1335D4u;
        goto label_1335d4;
    }
    ctx->pc = 0x1335CCu;
    SET_GPR_U32(ctx, 31, 0x1335D4u);
    ctx->pc = 0x1335D0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1335D4u; }
    }
    if (ctx->pc != 0x1335D4u) { return; }
    ctx->pc = 0x1335D4u;
label_1335d4:
    // 0x1335d4: 0x8e0300b0
    ctx->pc = 0x1335d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_1335d8:
    // 0x1335d8: 0x3c02000f
    ctx->pc = 0x1335d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
label_1335dc:
    // 0x1335dc: 0x24040001
    ctx->pc = 0x1335dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1335e0:
    // 0x1335e0: 0x3442ffff
    ctx->pc = 0x1335e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_1335e4:
    // 0x1335e4: 0xae0300b4
    ctx->pc = 0x1335e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_1335e8:
    // 0x1335e8: 0xae0200c0
    ctx->pc = 0x1335e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_1335ec:
    // 0x1335ec: 0xa20400ac
    ctx->pc = 0x1335ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 4));
label_1335f0:
    // 0x1335f0: 0xa2000098
    ctx->pc = 0x1335f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 0));
label_1335f4:
    // 0x1335f4: 0xae0000b8
    ctx->pc = 0x1335f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_1335f8:
    // 0x1335f8: 0xae0000bc
    ctx->pc = 0x1335f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_1335fc:
    // 0x1335fc: 0xa2040001
    ctx->pc = 0x1335fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
label_133600:
    // 0x133600: 0xa2000002
    ctx->pc = 0x133600u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_133604:
    // 0x133604: 0xdfb10008
    ctx->pc = 0x133604u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_133608:
    // 0x133608: 0xdfb00000
    ctx->pc = 0x133608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13360c:
    // 0x13360c: 0xdfbf0010
    ctx->pc = 0x13360cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_133610:
    // 0x133610: 0x3e00008
label_133614:
    if (ctx->pc == 0x133614u) {
        ctx->pc = 0x133614u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x133618u;
        goto label_133618;
    }
    ctx->pc = 0x133610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133614u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133490u: goto label_133490;
            case 0x133494u: goto label_133494;
            case 0x133498u: goto label_133498;
            case 0x13349Cu: goto label_13349c;
            case 0x1334A0u: goto label_1334a0;
            case 0x1334A4u: goto label_1334a4;
            case 0x1334A8u: goto label_1334a8;
            case 0x1334ACu: goto label_1334ac;
            case 0x1334B0u: goto label_1334b0;
            case 0x1334B4u: goto label_1334b4;
            case 0x1334B8u: goto label_1334b8;
            case 0x1334BCu: goto label_1334bc;
            case 0x1334C0u: goto label_1334c0;
            case 0x1334C4u: goto label_1334c4;
            case 0x1334C8u: goto label_1334c8;
            case 0x1334CCu: goto label_1334cc;
            case 0x1334D0u: goto label_1334d0;
            case 0x1334D4u: goto label_1334d4;
            case 0x1334D8u: goto label_1334d8;
            case 0x1334DCu: goto label_1334dc;
            case 0x1334E0u: goto label_1334e0;
            case 0x1334E4u: goto label_1334e4;
            case 0x1334E8u: goto label_1334e8;
            case 0x1334ECu: goto label_1334ec;
            case 0x1334F0u: goto label_1334f0;
            case 0x1334F4u: goto label_1334f4;
            case 0x1334F8u: goto label_1334f8;
            case 0x1334FCu: goto label_1334fc;
            case 0x133500u: goto label_133500;
            case 0x133504u: goto label_133504;
            case 0x133508u: goto label_133508;
            case 0x13350Cu: goto label_13350c;
            case 0x133510u: goto label_133510;
            case 0x133514u: goto label_133514;
            case 0x133518u: goto label_133518;
            case 0x13351Cu: goto label_13351c;
            case 0x133520u: goto label_133520;
            case 0x133524u: goto label_133524;
            case 0x133528u: goto label_133528;
            case 0x13352Cu: goto label_13352c;
            case 0x133530u: goto label_133530;
            case 0x133534u: goto label_133534;
            case 0x133538u: goto label_133538;
            case 0x13353Cu: goto label_13353c;
            case 0x133540u: goto label_133540;
            case 0x133544u: goto label_133544;
            case 0x133548u: goto label_133548;
            case 0x13354Cu: goto label_13354c;
            case 0x133550u: goto label_133550;
            case 0x133554u: goto label_133554;
            case 0x133558u: goto label_133558;
            case 0x13355Cu: goto label_13355c;
            case 0x133560u: goto label_133560;
            case 0x133564u: goto label_133564;
            case 0x133568u: goto label_133568;
            case 0x13356Cu: goto label_13356c;
            case 0x133570u: goto label_133570;
            case 0x133574u: goto label_133574;
            case 0x133578u: goto label_133578;
            case 0x13357Cu: goto label_13357c;
            case 0x133580u: goto label_133580;
            case 0x133584u: goto label_133584;
            case 0x133588u: goto label_133588;
            case 0x13358Cu: goto label_13358c;
            case 0x133590u: goto label_133590;
            case 0x133594u: goto label_133594;
            case 0x133598u: goto label_133598;
            case 0x13359Cu: goto label_13359c;
            case 0x1335A0u: goto label_1335a0;
            case 0x1335A4u: goto label_1335a4;
            case 0x1335A8u: goto label_1335a8;
            case 0x1335ACu: goto label_1335ac;
            case 0x1335B0u: goto label_1335b0;
            case 0x1335B4u: goto label_1335b4;
            case 0x1335B8u: goto label_1335b8;
            case 0x1335BCu: goto label_1335bc;
            case 0x1335C0u: goto label_1335c0;
            case 0x1335C4u: goto label_1335c4;
            case 0x1335C8u: goto label_1335c8;
            case 0x1335CCu: goto label_1335cc;
            case 0x1335D0u: goto label_1335d0;
            case 0x1335D4u: goto label_1335d4;
            case 0x1335D8u: goto label_1335d8;
            case 0x1335DCu: goto label_1335dc;
            case 0x1335E0u: goto label_1335e0;
            case 0x1335E4u: goto label_1335e4;
            case 0x1335E8u: goto label_1335e8;
            case 0x1335ECu: goto label_1335ec;
            case 0x1335F0u: goto label_1335f0;
            case 0x1335F4u: goto label_1335f4;
            case 0x1335F8u: goto label_1335f8;
            case 0x1335FCu: goto label_1335fc;
            case 0x133600u: goto label_133600;
            case 0x133604u: goto label_133604;
            case 0x133608u: goto label_133608;
            case 0x13360Cu: goto label_13360c;
            case 0x133610u: goto label_133610;
            case 0x133614u: goto label_133614;
            case 0x133618u: goto label_133618;
            case 0x13361Cu: goto label_13361c;
            case 0x133620u: goto label_133620;
            case 0x133624u: goto label_133624;
            case 0x133628u: goto label_133628;
            case 0x13362Cu: goto label_13362c;
            case 0x133630u: goto label_133630;
            case 0x133634u: goto label_133634;
            case 0x133638u: goto label_133638;
            case 0x13363Cu: goto label_13363c;
            case 0x133640u: goto label_133640;
            case 0x133644u: goto label_133644;
            case 0x133648u: goto label_133648;
            case 0x13364Cu: goto label_13364c;
            case 0x133650u: goto label_133650;
            case 0x133654u: goto label_133654;
            case 0x133658u: goto label_133658;
            case 0x13365Cu: goto label_13365c;
            case 0x133660u: goto label_133660;
            case 0x133664u: goto label_133664;
            case 0x133668u: goto label_133668;
            case 0x13366Cu: goto label_13366c;
            case 0x133670u: goto label_133670;
            case 0x133674u: goto label_133674;
            case 0x133678u: goto label_133678;
            case 0x13367Cu: goto label_13367c;
            case 0x133680u: goto label_133680;
            case 0x133684u: goto label_133684;
            case 0x133688u: goto label_133688;
            case 0x13368Cu: goto label_13368c;
            case 0x133690u: goto label_133690;
            case 0x133694u: goto label_133694;
            case 0x133698u: goto label_133698;
            case 0x13369Cu: goto label_13369c;
            case 0x1336A0u: goto label_1336a0;
            case 0x1336A4u: goto label_1336a4;
            case 0x1336A8u: goto label_1336a8;
            case 0x1336ACu: goto label_1336ac;
            case 0x1336B0u: goto label_1336b0;
            case 0x1336B4u: goto label_1336b4;
            case 0x1336B8u: goto label_1336b8;
            case 0x1336BCu: goto label_1336bc;
            case 0x1336C0u: goto label_1336c0;
            case 0x1336C4u: goto label_1336c4;
            case 0x1336C8u: goto label_1336c8;
            case 0x1336CCu: goto label_1336cc;
            case 0x1336D0u: goto label_1336d0;
            case 0x1336D4u: goto label_1336d4;
            case 0x1336D8u: goto label_1336d8;
            case 0x1336DCu: goto label_1336dc;
            case 0x1336E0u: goto label_1336e0;
            case 0x1336E4u: goto label_1336e4;
            case 0x1336E8u: goto label_1336e8;
            case 0x1336ECu: goto label_1336ec;
            case 0x1336F0u: goto label_1336f0;
            case 0x1336F4u: goto label_1336f4;
            case 0x1336F8u: goto label_1336f8;
            case 0x1336FCu: goto label_1336fc;
            case 0x133700u: goto label_133700;
            case 0x133704u: goto label_133704;
            case 0x133708u: goto label_133708;
            case 0x13370Cu: goto label_13370c;
            case 0x133710u: goto label_133710;
            case 0x133714u: goto label_133714;
            case 0x133718u: goto label_133718;
            case 0x13371Cu: goto label_13371c;
            case 0x133720u: goto label_133720;
            case 0x133724u: goto label_133724;
            case 0x133728u: goto label_133728;
            case 0x13372Cu: goto label_13372c;
            case 0x133730u: goto label_133730;
            case 0x133734u: goto label_133734;
            case 0x133738u: goto label_133738;
            case 0x13373Cu: goto label_13373c;
            case 0x133740u: goto label_133740;
            case 0x133744u: goto label_133744;
            case 0x133748u: goto label_133748;
            case 0x13374Cu: goto label_13374c;
            case 0x133750u: goto label_133750;
            case 0x133754u: goto label_133754;
            case 0x133758u: goto label_133758;
            case 0x13375Cu: goto label_13375c;
            case 0x133760u: goto label_133760;
            case 0x133764u: goto label_133764;
            case 0x133768u: goto label_133768;
            case 0x13376Cu: goto label_13376c;
            case 0x133770u: goto label_133770;
            case 0x133774u: goto label_133774;
            case 0x133778u: goto label_133778;
            case 0x13377Cu: goto label_13377c;
            case 0x133780u: goto label_133780;
            case 0x133784u: goto label_133784;
            case 0x133788u: goto label_133788;
            case 0x13378Cu: goto label_13378c;
            case 0x133790u: goto label_133790;
            case 0x133794u: goto label_133794;
            case 0x133798u: goto label_133798;
            case 0x13379Cu: goto label_13379c;
            case 0x1337A0u: goto label_1337a0;
            case 0x1337A4u: goto label_1337a4;
            case 0x1337A8u: goto label_1337a8;
            case 0x1337ACu: goto label_1337ac;
            case 0x1337B0u: goto label_1337b0;
            case 0x1337B4u: goto label_1337b4;
            case 0x1337B8u: goto label_1337b8;
            case 0x1337BCu: goto label_1337bc;
            case 0x1337C0u: goto label_1337c0;
            case 0x1337C4u: goto label_1337c4;
            case 0x1337C8u: goto label_1337c8;
            case 0x1337CCu: goto label_1337cc;
            case 0x1337D0u: goto label_1337d0;
            case 0x1337D4u: goto label_1337d4;
            case 0x1337D8u: goto label_1337d8;
            case 0x1337DCu: goto label_1337dc;
            case 0x1337E0u: goto label_1337e0;
            case 0x1337E4u: goto label_1337e4;
            case 0x1337E8u: goto label_1337e8;
            case 0x1337ECu: goto label_1337ec;
            case 0x1337F0u: goto label_1337f0;
            case 0x1337F4u: goto label_1337f4;
            case 0x1337F8u: goto label_1337f8;
            case 0x1337FCu: goto label_1337fc;
            case 0x133800u: goto label_133800;
            case 0x133804u: goto label_133804;
            case 0x133808u: goto label_133808;
            case 0x13380Cu: goto label_13380c;
            case 0x133810u: goto label_133810;
            case 0x133814u: goto label_133814;
            case 0x133818u: goto label_133818;
            case 0x13381Cu: goto label_13381c;
            case 0x133820u: goto label_133820;
            case 0x133824u: goto label_133824;
            case 0x133828u: goto label_133828;
            case 0x13382Cu: goto label_13382c;
            case 0x133830u: goto label_133830;
            case 0x133834u: goto label_133834;
            case 0x133838u: goto label_133838;
            case 0x13383Cu: goto label_13383c;
            case 0x133840u: goto label_133840;
            case 0x133844u: goto label_133844;
            case 0x133848u: goto label_133848;
            case 0x13384Cu: goto label_13384c;
            case 0x133850u: goto label_133850;
            case 0x133854u: goto label_133854;
            case 0x133858u: goto label_133858;
            case 0x13385Cu: goto label_13385c;
            case 0x133860u: goto label_133860;
            case 0x133864u: goto label_133864;
            case 0x133868u: goto label_133868;
            case 0x13386Cu: goto label_13386c;
            case 0x133870u: goto label_133870;
            case 0x133874u: goto label_133874;
            case 0x133878u: goto label_133878;
            case 0x13387Cu: goto label_13387c;
            case 0x133880u: goto label_133880;
            case 0x133884u: goto label_133884;
            case 0x133888u: goto label_133888;
            case 0x13388Cu: goto label_13388c;
            case 0x133890u: goto label_133890;
            case 0x133894u: goto label_133894;
            case 0x133898u: goto label_133898;
            case 0x13389Cu: goto label_13389c;
            case 0x1338A0u: goto label_1338a0;
            case 0x1338A4u: goto label_1338a4;
            case 0x1338A8u: goto label_1338a8;
            case 0x1338ACu: goto label_1338ac;
            case 0x1338B0u: goto label_1338b0;
            case 0x1338B4u: goto label_1338b4;
            case 0x1338B8u: goto label_1338b8;
            case 0x1338BCu: goto label_1338bc;
            case 0x1338C0u: goto label_1338c0;
            case 0x1338C4u: goto label_1338c4;
            case 0x1338C8u: goto label_1338c8;
            case 0x1338CCu: goto label_1338cc;
            case 0x1338D0u: goto label_1338d0;
            case 0x1338D4u: goto label_1338d4;
            case 0x1338D8u: goto label_1338d8;
            case 0x1338DCu: goto label_1338dc;
            case 0x1338E0u: goto label_1338e0;
            case 0x1338E4u: goto label_1338e4;
            case 0x1338E8u: goto label_1338e8;
            case 0x1338ECu: goto label_1338ec;
            case 0x1338F0u: goto label_1338f0;
            case 0x1338F4u: goto label_1338f4;
            case 0x1338F8u: goto label_1338f8;
            case 0x1338FCu: goto label_1338fc;
            case 0x133900u: goto label_133900;
            case 0x133904u: goto label_133904;
            case 0x133908u: goto label_133908;
            case 0x13390Cu: goto label_13390c;
            case 0x133910u: goto label_133910;
            case 0x133914u: goto label_133914;
            case 0x133918u: goto label_133918;
            case 0x13391Cu: goto label_13391c;
            case 0x133920u: goto label_133920;
            case 0x133924u: goto label_133924;
            case 0x133928u: goto label_133928;
            case 0x13392Cu: goto label_13392c;
            case 0x133930u: goto label_133930;
            case 0x133934u: goto label_133934;
            case 0x133938u: goto label_133938;
            case 0x13393Cu: goto label_13393c;
            case 0x133940u: goto label_133940;
            case 0x133944u: goto label_133944;
            case 0x133948u: goto label_133948;
            case 0x13394Cu: goto label_13394c;
            case 0x133950u: goto label_133950;
            case 0x133954u: goto label_133954;
            case 0x133958u: goto label_133958;
            case 0x13395Cu: goto label_13395c;
            case 0x133960u: goto label_133960;
            case 0x133964u: goto label_133964;
            case 0x133968u: goto label_133968;
            case 0x13396Cu: goto label_13396c;
            case 0x133970u: goto label_133970;
            case 0x133974u: goto label_133974;
            case 0x133978u: goto label_133978;
            case 0x13397Cu: goto label_13397c;
            case 0x133980u: goto label_133980;
            case 0x133984u: goto label_133984;
            case 0x133988u: goto label_133988;
            case 0x13398Cu: goto label_13398c;
            case 0x133990u: goto label_133990;
            case 0x133994u: goto label_133994;
            case 0x133998u: goto label_133998;
            case 0x13399Cu: goto label_13399c;
            case 0x1339A0u: goto label_1339a0;
            case 0x1339A4u: goto label_1339a4;
            case 0x1339A8u: goto label_1339a8;
            case 0x1339ACu: goto label_1339ac;
            case 0x1339B0u: goto label_1339b0;
            case 0x1339B4u: goto label_1339b4;
            case 0x1339B8u: goto label_1339b8;
            case 0x1339BCu: goto label_1339bc;
            case 0x1339C0u: goto label_1339c0;
            case 0x1339C4u: goto label_1339c4;
            case 0x1339C8u: goto label_1339c8;
            case 0x1339CCu: goto label_1339cc;
            case 0x1339D0u: goto label_1339d0;
            case 0x1339D4u: goto label_1339d4;
            case 0x1339D8u: goto label_1339d8;
            case 0x1339DCu: goto label_1339dc;
            case 0x1339E0u: goto label_1339e0;
            case 0x1339E4u: goto label_1339e4;
            case 0x1339E8u: goto label_1339e8;
            case 0x1339ECu: goto label_1339ec;
            case 0x1339F0u: goto label_1339f0;
            case 0x1339F4u: goto label_1339f4;
            case 0x1339F8u: goto label_1339f8;
            case 0x1339FCu: goto label_1339fc;
            case 0x133A00u: goto label_133a00;
            case 0x133A04u: goto label_133a04;
            case 0x133A08u: goto label_133a08;
            case 0x133A0Cu: goto label_133a0c;
            case 0x133A10u: goto label_133a10;
            case 0x133A14u: goto label_133a14;
            case 0x133A18u: goto label_133a18;
            case 0x133A1Cu: goto label_133a1c;
            case 0x133A20u: goto label_133a20;
            case 0x133A24u: goto label_133a24;
            case 0x133A28u: goto label_133a28;
            case 0x133A2Cu: goto label_133a2c;
            case 0x133A30u: goto label_133a30;
            case 0x133A34u: goto label_133a34;
            case 0x133A38u: goto label_133a38;
            case 0x133A3Cu: goto label_133a3c;
            case 0x133A40u: goto label_133a40;
            case 0x133A44u: goto label_133a44;
            case 0x133A48u: goto label_133a48;
            case 0x133A4Cu: goto label_133a4c;
            case 0x133A50u: goto label_133a50;
            case 0x133A54u: goto label_133a54;
            case 0x133A58u: goto label_133a58;
            case 0x133A5Cu: goto label_133a5c;
            case 0x133A60u: goto label_133a60;
            case 0x133A64u: goto label_133a64;
            case 0x133A68u: goto label_133a68;
            case 0x133A6Cu: goto label_133a6c;
            case 0x133A70u: goto label_133a70;
            case 0x133A74u: goto label_133a74;
            case 0x133A78u: goto label_133a78;
            case 0x133A7Cu: goto label_133a7c;
            case 0x133A80u: goto label_133a80;
            case 0x133A84u: goto label_133a84;
            case 0x133A88u: goto label_133a88;
            case 0x133A8Cu: goto label_133a8c;
            case 0x133A90u: goto label_133a90;
            case 0x133A94u: goto label_133a94;
            case 0x133A98u: goto label_133a98;
            case 0x133A9Cu: goto label_133a9c;
            case 0x133AA0u: goto label_133aa0;
            case 0x133AA4u: goto label_133aa4;
            case 0x133AA8u: goto label_133aa8;
            case 0x133AACu: goto label_133aac;
            case 0x133AB0u: goto label_133ab0;
            case 0x133AB4u: goto label_133ab4;
            case 0x133AB8u: goto label_133ab8;
            case 0x133ABCu: goto label_133abc;
            case 0x133AC0u: goto label_133ac0;
            case 0x133AC4u: goto label_133ac4;
            case 0x133AC8u: goto label_133ac8;
            case 0x133ACCu: goto label_133acc;
            case 0x133AD0u: goto label_133ad0;
            case 0x133AD4u: goto label_133ad4;
            case 0x133AD8u: goto label_133ad8;
            case 0x133ADCu: goto label_133adc;
            case 0x133AE0u: goto label_133ae0;
            case 0x133AE4u: goto label_133ae4;
            case 0x133AE8u: goto label_133ae8;
            case 0x133AECu: goto label_133aec;
            case 0x133AF0u: goto label_133af0;
            case 0x133AF4u: goto label_133af4;
            case 0x133AF8u: goto label_133af8;
            case 0x133AFCu: goto label_133afc;
            case 0x133B00u: goto label_133b00;
            case 0x133B04u: goto label_133b04;
            case 0x133B08u: goto label_133b08;
            case 0x133B0Cu: goto label_133b0c;
            case 0x133B10u: goto label_133b10;
            case 0x133B14u: goto label_133b14;
            case 0x133B18u: goto label_133b18;
            case 0x133B1Cu: goto label_133b1c;
            case 0x133B20u: goto label_133b20;
            case 0x133B24u: goto label_133b24;
            case 0x133B28u: goto label_133b28;
            case 0x133B2Cu: goto label_133b2c;
            case 0x133B30u: goto label_133b30;
            case 0x133B34u: goto label_133b34;
            case 0x133B38u: goto label_133b38;
            case 0x133B3Cu: goto label_133b3c;
            case 0x133B40u: goto label_133b40;
            case 0x133B44u: goto label_133b44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x133618u;
label_133618:
    // 0x133618: 0x27bdfff0
    ctx->pc = 0x133618u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13361c:
    // 0x13361c: 0x3c064000
    ctx->pc = 0x13361cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)16384 << 16));
label_133620:
    // 0x133620: 0xffbf0000
    ctx->pc = 0x133620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_133624:
    // 0x133624: 0xdfbf0000
    ctx->pc = 0x133624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_133628:
    // 0x133628: 0x804cd8c
label_13362c:
    if (ctx->pc == 0x13362Cu) {
        ctx->pc = 0x13362Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x133630u;
        goto label_133630;
    }
    ctx->pc = 0x133628u;
    ctx->pc = 0x13362Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x133630u;
    goto label_133630;
    ctx->pc = 0x133630u;
label_133630:
    // 0x133630: 0x27bdffe0
    ctx->pc = 0x133630u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_133634:
    // 0x133634: 0xffb00000
    ctx->pc = 0x133634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_133638:
    // 0x133638: 0x80802d
    ctx->pc = 0x133638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13363c:
    // 0x13363c: 0xffb10008
    ctx->pc = 0x13363cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_133640:
    // 0x133640: 0xa0882d
    ctx->pc = 0x133640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_133644:
    // 0x133644: 0xffb20010
    ctx->pc = 0x133644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_133648:
    // 0x133648: 0xc0902d
    ctx->pc = 0x133648u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13364c:
    // 0x13364c: 0x12000005
label_133650:
    if (ctx->pc == 0x133650u) {
        ctx->pc = 0x133650u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->pc = 0x133654u;
        goto label_133654;
    }
    ctx->pc = 0x13364Cu;
    {
        const bool branch_taken_0x13364c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x133650u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        if (branch_taken_0x13364c) {
            ctx->pc = 0x133664u;
            goto label_133664;
        }
    }
    ctx->pc = 0x133654u;
label_133654:
    // 0x133654: 0x52200004
label_133658:
    if (ctx->pc == 0x133658u) {
        ctx->pc = 0x133658u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        ctx->pc = 0x13365Cu;
        goto label_13365c;
    }
    ctx->pc = 0x133654u;
    {
        const bool branch_taken_0x133654 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x133654) {
            ctx->pc = 0x133658u;
            SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
            ctx->pc = 0x133668u;
            goto label_133668;
        }
    }
    ctx->pc = 0x13365Cu;
label_13365c:
    // 0x13365c: 0x641000a
label_133660:
    if (ctx->pc == 0x133660u) {
        ctx->pc = 0x133664u;
        goto label_133664;
    }
    ctx->pc = 0x13365Cu;
    {
        const bool branch_taken_0x13365c = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x13365c) {
            ctx->pc = 0x133688u;
            goto label_133688;
        }
    }
    ctx->pc = 0x133664u;
label_133664:
    // 0x133664: 0x3c040024
    ctx->pc = 0x133664u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_133668:
    // 0x133668: 0xdfb00000
    ctx->pc = 0x133668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13366c:
    // 0x13366c: 0xdfb10008
    ctx->pc = 0x13366cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_133670:
    // 0x133670: 0x2484b600
    ctx->pc = 0x133670u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948352));
label_133674:
    // 0x133674: 0xdfb20010
    ctx->pc = 0x133674u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_133678:
    // 0x133678: 0xdfbf0018
    ctx->pc = 0x133678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13367c:
    // 0x13367c: 0x804a034
label_133680:
    if (ctx->pc == 0x133680u) {
        ctx->pc = 0x133680u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x133684u;
        goto label_133684;
    }
    ctx->pc = 0x13367Cu;
    ctx->pc = 0x133680u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1280D0u;
    sub_001280D0_0x1280d0(rdram, ctx, runtime); return;
    ctx->pc = 0x133684u;
label_133684:
    // 0x133684: 0x0
    ctx->pc = 0x133684u;
    // NOP
label_133688:
    // 0x133688: 0xc04c78e
label_13368c:
    if (ctx->pc == 0x13368Cu) {
        ctx->pc = 0x133690u;
        goto label_133690;
    }
    ctx->pc = 0x133688u;
    SET_GPR_U32(ctx, 31, 0x133690u);
    ctx->pc = 0x131E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131E38_0x131e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133690u; }
    }
    if (ctx->pc != 0x133690u) { return; }
    ctx->pc = 0x133690u;
label_133690:
    // 0x133690: 0xc049938
label_133694:
    if (ctx->pc == 0x133694u) {
        ctx->pc = 0x133698u;
        goto label_133698;
    }
    ctx->pc = 0x133690u;
    SET_GPR_U32(ctx, 31, 0x133698u);
    ctx->pc = 0x1264E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264E0_0x1264e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133698u; }
    }
    if (ctx->pc != 0x133698u) { return; }
    ctx->pc = 0x133698u;
label_133698:
    // 0x133698: 0x220202d
    ctx->pc = 0x133698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13369c:
    // 0x13369c: 0xc04fcd8
label_1336a0:
    if (ctx->pc == 0x1336A0u) {
        ctx->pc = 0x1336A0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1336A4u;
        goto label_1336a4;
    }
    ctx->pc = 0x13369Cu;
    SET_GPR_U32(ctx, 31, 0x1336A4u);
    ctx->pc = 0x1336A0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13F360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F360_0x13f360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1336A4u; }
    }
    if (ctx->pc != 0x1336A4u) { return; }
    ctx->pc = 0x1336A4u;
label_1336a4:
    // 0x1336a4: 0x200202d
    ctx->pc = 0x1336a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1336a8:
    // 0x1336a8: 0x1440000b
label_1336ac:
    if (ctx->pc == 0x1336ACu) {
        ctx->pc = 0x1336ACu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1336B0u;
        goto label_1336b0;
    }
    ctx->pc = 0x1336A8u;
    {
        const bool branch_taken_0x1336a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1336ACu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1336a8) {
            ctx->pc = 0x1336D8u;
            goto label_1336d8;
        }
    }
    ctx->pc = 0x1336B0u;
label_1336b0:
    // 0x1336b0: 0xc04993e
label_1336b4:
    if (ctx->pc == 0x1336B4u) {
        ctx->pc = 0x1336B8u;
        goto label_1336b8;
    }
    ctx->pc = 0x1336B0u;
    SET_GPR_U32(ctx, 31, 0x1336B8u);
    ctx->pc = 0x1264F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264F8_0x1264f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1336B8u; }
    }
    if (ctx->pc != 0x1336B8u) { return; }
    ctx->pc = 0x1336B8u;
label_1336b8:
    // 0x1336b8: 0x3c040024
    ctx->pc = 0x1336b8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_1336bc:
    // 0x1336bc: 0xdfb00000
    ctx->pc = 0x1336bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1336c0:
    // 0x1336c0: 0x2484b630
    ctx->pc = 0x1336c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948400));
label_1336c4:
    // 0x1336c4: 0xdfb10008
    ctx->pc = 0x1336c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1336c8:
    // 0x1336c8: 0xdfb20010
    ctx->pc = 0x1336c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1336cc:
    // 0x1336cc: 0xdfbf0018
    ctx->pc = 0x1336ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1336d0:
    // 0x1336d0: 0x804a034
label_1336d4:
    if (ctx->pc == 0x1336D4u) {
        ctx->pc = 0x1336D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1336D8u;
        goto label_1336d8;
    }
    ctx->pc = 0x1336D0u;
    ctx->pc = 0x1336D4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1280D0u;
    sub_001280D0_0x1280d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1336D8u;
label_1336d8:
    // 0x1336d8: 0xc04c6d8
label_1336dc:
    if (ctx->pc == 0x1336DCu) {
        ctx->pc = 0x1336E0u;
        goto label_1336e0;
    }
    ctx->pc = 0x1336D8u;
    SET_GPR_U32(ctx, 31, 0x1336E0u);
    ctx->pc = 0x131B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131B60_0x131b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1336E0u; }
    }
    if (ctx->pc != 0x1336E0u) { return; }
    ctx->pc = 0x1336E0u;
label_1336e0:
    // 0x1336e0: 0x24020002
    ctx->pc = 0x1336e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1336e4:
    // 0x1336e4: 0xa2020002
    ctx->pc = 0x1336e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_1336e8:
    // 0x1336e8: 0xa2000098
    ctx->pc = 0x1336e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 0));
label_1336ec:
    // 0x1336ec: 0xdfb10008
    ctx->pc = 0x1336ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1336f0:
    // 0x1336f0: 0xdfb00000
    ctx->pc = 0x1336f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1336f4:
    // 0x1336f4: 0xdfb20010
    ctx->pc = 0x1336f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1336f8:
    // 0x1336f8: 0xdfbf0018
    ctx->pc = 0x1336f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1336fc:
    // 0x1336fc: 0x804993e
label_133700:
    if (ctx->pc == 0x133700u) {
        ctx->pc = 0x133700u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x133704u;
        goto label_133704;
    }
    ctx->pc = 0x1336FCu;
    ctx->pc = 0x133700u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1264F8u;
    sub_001264F8_0x1264f8(rdram, ctx, runtime); return;
    ctx->pc = 0x133704u;
label_133704:
    // 0x133704: 0x0
    ctx->pc = 0x133704u;
    // NOP
label_133708:
    // 0x133708: 0x27bdffd0
    ctx->pc = 0x133708u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_13370c:
    // 0x13370c: 0xffb20010
    ctx->pc = 0x13370cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_133710:
    // 0x133710: 0x80902d
    ctx->pc = 0x133710u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_133714:
    // 0x133714: 0xffb00000
    ctx->pc = 0x133714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_133718:
    // 0x133718: 0xc0802d
    ctx->pc = 0x133718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13371c:
    // 0x13371c: 0xffb10008
    ctx->pc = 0x13371cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_133720:
    // 0x133720: 0xa0882d
    ctx->pc = 0x133720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_133724:
    // 0x133724: 0xffb30018
    ctx->pc = 0x133724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_133728:
    // 0x133728: 0x12400005
label_13372c:
    if (ctx->pc == 0x13372Cu) {
        ctx->pc = 0x13372Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->pc = 0x133730u;
        goto label_133730;
    }
    ctx->pc = 0x133728u;
    {
        const bool branch_taken_0x133728 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x13372Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        if (branch_taken_0x133728) {
            ctx->pc = 0x133740u;
            goto label_133740;
        }
    }
    ctx->pc = 0x133730u;
label_133730:
    // 0x133730: 0x52200004
label_133734:
    if (ctx->pc == 0x133734u) {
        ctx->pc = 0x133734u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        ctx->pc = 0x133738u;
        goto label_133738;
    }
    ctx->pc = 0x133730u;
    {
        const bool branch_taken_0x133730 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x133730) {
            ctx->pc = 0x133734u;
            SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
            ctx->pc = 0x133744u;
            goto label_133744;
        }
    }
    ctx->pc = 0x133738u;
label_133738:
    // 0x133738: 0x601000b
label_13373c:
    if (ctx->pc == 0x13373Cu) {
        ctx->pc = 0x133740u;
        goto label_133740;
    }
    ctx->pc = 0x133738u;
    {
        const bool branch_taken_0x133738 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x133738) {
            ctx->pc = 0x133768u;
            goto label_133768;
        }
    }
    ctx->pc = 0x133740u;
label_133740:
    // 0x133740: 0x3c040024
    ctx->pc = 0x133740u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_133744:
    // 0x133744: 0xdfb00000
    ctx->pc = 0x133744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_133748:
    // 0x133748: 0xdfb10008
    ctx->pc = 0x133748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13374c:
    // 0x13374c: 0x2484b660
    ctx->pc = 0x13374cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948448));
label_133750:
    // 0x133750: 0xdfb20010
    ctx->pc = 0x133750u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_133754:
    // 0x133754: 0xdfb30018
    ctx->pc = 0x133754u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_133758:
    // 0x133758: 0xdfbf0020
    ctx->pc = 0x133758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13375c:
    // 0x13375c: 0x804a034
label_133760:
    if (ctx->pc == 0x133760u) {
        ctx->pc = 0x133760u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x133764u;
        goto label_133764;
    }
    ctx->pc = 0x13375Cu;
    ctx->pc = 0x133760u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1280D0u;
    sub_001280D0_0x1280d0(rdram, ctx, runtime); return;
    ctx->pc = 0x133764u;
label_133764:
    // 0x133764: 0x0
    ctx->pc = 0x133764u;
    // NOP
label_133768:
    // 0x133768: 0xc04c78e
label_13376c:
    if (ctx->pc == 0x13376Cu) {
        ctx->pc = 0x13376Cu;
        SET_GPR_U32(ctx, 19, ((uint32_t)255 << 16));
        ctx->pc = 0x133770u;
        goto label_133770;
    }
    ctx->pc = 0x133768u;
    SET_GPR_U32(ctx, 31, 0x133770u);
    ctx->pc = 0x13376Cu;
    SET_GPR_U32(ctx, 19, ((uint32_t)255 << 16));
    ctx->pc = 0x131E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131E38_0x131e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133770u; }
    }
    if (ctx->pc != 0x133770u) { return; }
    ctx->pc = 0x133770u;
label_133770:
    // 0x133770: 0x8e230004
    ctx->pc = 0x133770u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_133774:
    // 0x133774: 0x32a03
    ctx->pc = 0x133774u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 8));
label_133778:
    // 0x133778: 0x32200
    ctx->pc = 0x133778u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 8));
label_13377c:
    // 0x13377c: 0x31602
    ctx->pc = 0x13377cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 24));
label_133780:
    // 0x133780: 0x31e00
    ctx->pc = 0x133780u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
label_133784:
    // 0x133784: 0x932024
    ctx->pc = 0x133784u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_133788:
    // 0x133788: 0x30a5ff00
    ctx->pc = 0x133788u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65280));
label_13378c:
    // 0x13378c: 0x431025
    ctx->pc = 0x13378cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_133790:
    // 0x133790: 0x852025
    ctx->pc = 0x133790u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_133794:
    // 0x133794: 0x441025
    ctx->pc = 0x133794u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_133798:
    // 0x133798: 0x202102a
    ctx->pc = 0x133798u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
label_13379c:
    // 0x13379c: 0x5040002e
label_1337a0:
    if (ctx->pc == 0x1337A0u) {
        ctx->pc = 0x1337A0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1337A4u;
        goto label_1337a4;
    }
    ctx->pc = 0x13379Cu;
    {
        const bool branch_taken_0x13379c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x13379c) {
            ctx->pc = 0x1337A0u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x133858u;
            goto label_133858;
        }
    }
    ctx->pc = 0x1337A4u;
label_1337a4:
    // 0x1337a4: 0x602002c
label_1337a8:
    if (ctx->pc == 0x1337A8u) {
        ctx->pc = 0x1337A8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1337ACu;
        goto label_1337ac;
    }
    ctx->pc = 0x1337A4u;
    {
        const bool branch_taken_0x1337a4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1337a4) {
            ctx->pc = 0x1337A8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x133858u;
            goto label_133858;
        }
    }
    ctx->pc = 0x1337ACu;
label_1337ac:
    // 0x1337ac: 0xc049938
label_1337b0:
    if (ctx->pc == 0x1337B0u) {
        ctx->pc = 0x1337B4u;
        goto label_1337b4;
    }
    ctx->pc = 0x1337ACu;
    SET_GPR_U32(ctx, 31, 0x1337B4u);
    ctx->pc = 0x1264E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264E0_0x1264e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1337B4u; }
    }
    if (ctx->pc != 0x1337B4u) { return; }
    ctx->pc = 0x1337B4u;
label_1337b4:
    // 0x1337b4: 0x3c054000
    ctx->pc = 0x1337b4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16384 << 16));
label_1337b8:
    // 0x1337b8: 0x1010c0
    ctx->pc = 0x1337b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 3));
label_1337bc:
    // 0x1337bc: 0x511021
    ctx->pc = 0x1337bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1337c0:
    // 0x1337c0: 0x8c430008
    ctx->pc = 0x1337c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1337c4:
    // 0x1337c4: 0x33203
    ctx->pc = 0x1337c4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
label_1337c8:
    // 0x1337c8: 0x31200
    ctx->pc = 0x1337c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 8));
label_1337cc:
    // 0x1337cc: 0x30c6ff00
    ctx->pc = 0x1337ccu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 65280));
label_1337d0:
    // 0x1337d0: 0x32602
    ctx->pc = 0x1337d0u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 3), 24));
label_1337d4:
    // 0x1337d4: 0x531024
    ctx->pc = 0x1337d4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1337d8:
    // 0x1337d8: 0x31e00
    ctx->pc = 0x1337d8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
label_1337dc:
    // 0x1337dc: 0x832025
    ctx->pc = 0x1337dcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1337e0:
    // 0x1337e0: 0x461025
    ctx->pc = 0x1337e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1337e4:
    // 0x1337e4: 0x822025
    ctx->pc = 0x1337e4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1337e8:
    // 0x1337e8: 0xc04fcd8
label_1337ec:
    if (ctx->pc == 0x1337ECu) {
        ctx->pc = 0x1337ECu;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->pc = 0x1337F0u;
        goto label_1337f0;
    }
    ctx->pc = 0x1337E8u;
    SET_GPR_U32(ctx, 31, 0x1337F0u);
    ctx->pc = 0x1337ECu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->pc = 0x13F360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F360_0x13f360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1337F0u; }
    }
    if (ctx->pc != 0x1337F0u) { return; }
    ctx->pc = 0x1337F0u;
label_1337f0:
    // 0x1337f0: 0x240202d
    ctx->pc = 0x1337f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1337f4:
    // 0x1337f4: 0x1440000c
label_1337f8:
    if (ctx->pc == 0x1337F8u) {
        ctx->pc = 0x1337F8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1337FCu;
        goto label_1337fc;
    }
    ctx->pc = 0x1337F4u;
    {
        const bool branch_taken_0x1337f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1337F8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1337f4) {
            ctx->pc = 0x133828u;
            goto label_133828;
        }
    }
    ctx->pc = 0x1337FCu;
label_1337fc:
    // 0x1337fc: 0xc04993e
label_133800:
    if (ctx->pc == 0x133800u) {
        ctx->pc = 0x133804u;
        goto label_133804;
    }
    ctx->pc = 0x1337FCu;
    SET_GPR_U32(ctx, 31, 0x133804u);
    ctx->pc = 0x1264F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264F8_0x1264f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133804u; }
    }
    if (ctx->pc != 0x133804u) { return; }
    ctx->pc = 0x133804u;
label_133804:
    // 0x133804: 0x3c040024
    ctx->pc = 0x133804u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_133808:
    // 0x133808: 0xdfb00000
    ctx->pc = 0x133808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13380c:
    // 0x13380c: 0x2484b690
    ctx->pc = 0x13380cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948496));
label_133810:
    // 0x133810: 0xdfb10008
    ctx->pc = 0x133810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_133814:
    // 0x133814: 0xdfb20010
    ctx->pc = 0x133814u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_133818:
    // 0x133818: 0xdfb30018
    ctx->pc = 0x133818u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13381c:
    // 0x13381c: 0xdfbf0020
    ctx->pc = 0x13381cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_133820:
    // 0x133820: 0x804a034
label_133824:
    if (ctx->pc == 0x133824u) {
        ctx->pc = 0x133824u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x133828u;
        goto label_133828;
    }
    ctx->pc = 0x133820u;
    ctx->pc = 0x133824u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1280D0u;
    sub_001280D0_0x1280d0(rdram, ctx, runtime); return;
    ctx->pc = 0x133828u;
label_133828:
    // 0x133828: 0xc04c6d8
label_13382c:
    if (ctx->pc == 0x13382Cu) {
        ctx->pc = 0x133830u;
        goto label_133830;
    }
    ctx->pc = 0x133828u;
    SET_GPR_U32(ctx, 31, 0x133830u);
    ctx->pc = 0x131B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131B60_0x131b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133830u; }
    }
    if (ctx->pc != 0x133830u) { return; }
    ctx->pc = 0x133830u;
label_133830:
    // 0x133830: 0x24020002
    ctx->pc = 0x133830u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_133834:
    // 0x133834: 0xa2420002
    ctx->pc = 0x133834u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
label_133838:
    // 0x133838: 0xa2400098
    ctx->pc = 0x133838u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 152), (uint8_t)GPR_U32(ctx, 0));
label_13383c:
    // 0x13383c: 0xdfb00000
    ctx->pc = 0x13383cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_133840:
    // 0x133840: 0xdfb10008
    ctx->pc = 0x133840u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_133844:
    // 0x133844: 0xdfb20010
    ctx->pc = 0x133844u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_133848:
    // 0x133848: 0xdfb30018
    ctx->pc = 0x133848u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13384c:
    // 0x13384c: 0xdfbf0020
    ctx->pc = 0x13384cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_133850:
    // 0x133850: 0x804993e
label_133854:
    if (ctx->pc == 0x133854u) {
        ctx->pc = 0x133854u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x133858u;
        goto label_133858;
    }
    ctx->pc = 0x133850u;
    ctx->pc = 0x133854u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1264F8u;
    sub_001264F8_0x1264f8(rdram, ctx, runtime); return;
    ctx->pc = 0x133858u;
label_133858:
    // 0x133858: 0xdfb10008
    ctx->pc = 0x133858u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13385c:
    // 0x13385c: 0xdfb20010
    ctx->pc = 0x13385cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_133860:
    // 0x133860: 0xdfb30018
    ctx->pc = 0x133860u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_133864:
    // 0x133864: 0xdfbf0020
    ctx->pc = 0x133864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_133868:
    // 0x133868: 0x3e00008
label_13386c:
    if (ctx->pc == 0x13386Cu) {
        ctx->pc = 0x13386Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x133870u;
        goto label_133870;
    }
    ctx->pc = 0x133868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13386Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133490u: goto label_133490;
            case 0x133494u: goto label_133494;
            case 0x133498u: goto label_133498;
            case 0x13349Cu: goto label_13349c;
            case 0x1334A0u: goto label_1334a0;
            case 0x1334A4u: goto label_1334a4;
            case 0x1334A8u: goto label_1334a8;
            case 0x1334ACu: goto label_1334ac;
            case 0x1334B0u: goto label_1334b0;
            case 0x1334B4u: goto label_1334b4;
            case 0x1334B8u: goto label_1334b8;
            case 0x1334BCu: goto label_1334bc;
            case 0x1334C0u: goto label_1334c0;
            case 0x1334C4u: goto label_1334c4;
            case 0x1334C8u: goto label_1334c8;
            case 0x1334CCu: goto label_1334cc;
            case 0x1334D0u: goto label_1334d0;
            case 0x1334D4u: goto label_1334d4;
            case 0x1334D8u: goto label_1334d8;
            case 0x1334DCu: goto label_1334dc;
            case 0x1334E0u: goto label_1334e0;
            case 0x1334E4u: goto label_1334e4;
            case 0x1334E8u: goto label_1334e8;
            case 0x1334ECu: goto label_1334ec;
            case 0x1334F0u: goto label_1334f0;
            case 0x1334F4u: goto label_1334f4;
            case 0x1334F8u: goto label_1334f8;
            case 0x1334FCu: goto label_1334fc;
            case 0x133500u: goto label_133500;
            case 0x133504u: goto label_133504;
            case 0x133508u: goto label_133508;
            case 0x13350Cu: goto label_13350c;
            case 0x133510u: goto label_133510;
            case 0x133514u: goto label_133514;
            case 0x133518u: goto label_133518;
            case 0x13351Cu: goto label_13351c;
            case 0x133520u: goto label_133520;
            case 0x133524u: goto label_133524;
            case 0x133528u: goto label_133528;
            case 0x13352Cu: goto label_13352c;
            case 0x133530u: goto label_133530;
            case 0x133534u: goto label_133534;
            case 0x133538u: goto label_133538;
            case 0x13353Cu: goto label_13353c;
            case 0x133540u: goto label_133540;
            case 0x133544u: goto label_133544;
            case 0x133548u: goto label_133548;
            case 0x13354Cu: goto label_13354c;
            case 0x133550u: goto label_133550;
            case 0x133554u: goto label_133554;
            case 0x133558u: goto label_133558;
            case 0x13355Cu: goto label_13355c;
            case 0x133560u: goto label_133560;
            case 0x133564u: goto label_133564;
            case 0x133568u: goto label_133568;
            case 0x13356Cu: goto label_13356c;
            case 0x133570u: goto label_133570;
            case 0x133574u: goto label_133574;
            case 0x133578u: goto label_133578;
            case 0x13357Cu: goto label_13357c;
            case 0x133580u: goto label_133580;
            case 0x133584u: goto label_133584;
            case 0x133588u: goto label_133588;
            case 0x13358Cu: goto label_13358c;
            case 0x133590u: goto label_133590;
            case 0x133594u: goto label_133594;
            case 0x133598u: goto label_133598;
            case 0x13359Cu: goto label_13359c;
            case 0x1335A0u: goto label_1335a0;
            case 0x1335A4u: goto label_1335a4;
            case 0x1335A8u: goto label_1335a8;
            case 0x1335ACu: goto label_1335ac;
            case 0x1335B0u: goto label_1335b0;
            case 0x1335B4u: goto label_1335b4;
            case 0x1335B8u: goto label_1335b8;
            case 0x1335BCu: goto label_1335bc;
            case 0x1335C0u: goto label_1335c0;
            case 0x1335C4u: goto label_1335c4;
            case 0x1335C8u: goto label_1335c8;
            case 0x1335CCu: goto label_1335cc;
            case 0x1335D0u: goto label_1335d0;
            case 0x1335D4u: goto label_1335d4;
            case 0x1335D8u: goto label_1335d8;
            case 0x1335DCu: goto label_1335dc;
            case 0x1335E0u: goto label_1335e0;
            case 0x1335E4u: goto label_1335e4;
            case 0x1335E8u: goto label_1335e8;
            case 0x1335ECu: goto label_1335ec;
            case 0x1335F0u: goto label_1335f0;
            case 0x1335F4u: goto label_1335f4;
            case 0x1335F8u: goto label_1335f8;
            case 0x1335FCu: goto label_1335fc;
            case 0x133600u: goto label_133600;
            case 0x133604u: goto label_133604;
            case 0x133608u: goto label_133608;
            case 0x13360Cu: goto label_13360c;
            case 0x133610u: goto label_133610;
            case 0x133614u: goto label_133614;
            case 0x133618u: goto label_133618;
            case 0x13361Cu: goto label_13361c;
            case 0x133620u: goto label_133620;
            case 0x133624u: goto label_133624;
            case 0x133628u: goto label_133628;
            case 0x13362Cu: goto label_13362c;
            case 0x133630u: goto label_133630;
            case 0x133634u: goto label_133634;
            case 0x133638u: goto label_133638;
            case 0x13363Cu: goto label_13363c;
            case 0x133640u: goto label_133640;
            case 0x133644u: goto label_133644;
            case 0x133648u: goto label_133648;
            case 0x13364Cu: goto label_13364c;
            case 0x133650u: goto label_133650;
            case 0x133654u: goto label_133654;
            case 0x133658u: goto label_133658;
            case 0x13365Cu: goto label_13365c;
            case 0x133660u: goto label_133660;
            case 0x133664u: goto label_133664;
            case 0x133668u: goto label_133668;
            case 0x13366Cu: goto label_13366c;
            case 0x133670u: goto label_133670;
            case 0x133674u: goto label_133674;
            case 0x133678u: goto label_133678;
            case 0x13367Cu: goto label_13367c;
            case 0x133680u: goto label_133680;
            case 0x133684u: goto label_133684;
            case 0x133688u: goto label_133688;
            case 0x13368Cu: goto label_13368c;
            case 0x133690u: goto label_133690;
            case 0x133694u: goto label_133694;
            case 0x133698u: goto label_133698;
            case 0x13369Cu: goto label_13369c;
            case 0x1336A0u: goto label_1336a0;
            case 0x1336A4u: goto label_1336a4;
            case 0x1336A8u: goto label_1336a8;
            case 0x1336ACu: goto label_1336ac;
            case 0x1336B0u: goto label_1336b0;
            case 0x1336B4u: goto label_1336b4;
            case 0x1336B8u: goto label_1336b8;
            case 0x1336BCu: goto label_1336bc;
            case 0x1336C0u: goto label_1336c0;
            case 0x1336C4u: goto label_1336c4;
            case 0x1336C8u: goto label_1336c8;
            case 0x1336CCu: goto label_1336cc;
            case 0x1336D0u: goto label_1336d0;
            case 0x1336D4u: goto label_1336d4;
            case 0x1336D8u: goto label_1336d8;
            case 0x1336DCu: goto label_1336dc;
            case 0x1336E0u: goto label_1336e0;
            case 0x1336E4u: goto label_1336e4;
            case 0x1336E8u: goto label_1336e8;
            case 0x1336ECu: goto label_1336ec;
            case 0x1336F0u: goto label_1336f0;
            case 0x1336F4u: goto label_1336f4;
            case 0x1336F8u: goto label_1336f8;
            case 0x1336FCu: goto label_1336fc;
            case 0x133700u: goto label_133700;
            case 0x133704u: goto label_133704;
            case 0x133708u: goto label_133708;
            case 0x13370Cu: goto label_13370c;
            case 0x133710u: goto label_133710;
            case 0x133714u: goto label_133714;
            case 0x133718u: goto label_133718;
            case 0x13371Cu: goto label_13371c;
            case 0x133720u: goto label_133720;
            case 0x133724u: goto label_133724;
            case 0x133728u: goto label_133728;
            case 0x13372Cu: goto label_13372c;
            case 0x133730u: goto label_133730;
            case 0x133734u: goto label_133734;
            case 0x133738u: goto label_133738;
            case 0x13373Cu: goto label_13373c;
            case 0x133740u: goto label_133740;
            case 0x133744u: goto label_133744;
            case 0x133748u: goto label_133748;
            case 0x13374Cu: goto label_13374c;
            case 0x133750u: goto label_133750;
            case 0x133754u: goto label_133754;
            case 0x133758u: goto label_133758;
            case 0x13375Cu: goto label_13375c;
            case 0x133760u: goto label_133760;
            case 0x133764u: goto label_133764;
            case 0x133768u: goto label_133768;
            case 0x13376Cu: goto label_13376c;
            case 0x133770u: goto label_133770;
            case 0x133774u: goto label_133774;
            case 0x133778u: goto label_133778;
            case 0x13377Cu: goto label_13377c;
            case 0x133780u: goto label_133780;
            case 0x133784u: goto label_133784;
            case 0x133788u: goto label_133788;
            case 0x13378Cu: goto label_13378c;
            case 0x133790u: goto label_133790;
            case 0x133794u: goto label_133794;
            case 0x133798u: goto label_133798;
            case 0x13379Cu: goto label_13379c;
            case 0x1337A0u: goto label_1337a0;
            case 0x1337A4u: goto label_1337a4;
            case 0x1337A8u: goto label_1337a8;
            case 0x1337ACu: goto label_1337ac;
            case 0x1337B0u: goto label_1337b0;
            case 0x1337B4u: goto label_1337b4;
            case 0x1337B8u: goto label_1337b8;
            case 0x1337BCu: goto label_1337bc;
            case 0x1337C0u: goto label_1337c0;
            case 0x1337C4u: goto label_1337c4;
            case 0x1337C8u: goto label_1337c8;
            case 0x1337CCu: goto label_1337cc;
            case 0x1337D0u: goto label_1337d0;
            case 0x1337D4u: goto label_1337d4;
            case 0x1337D8u: goto label_1337d8;
            case 0x1337DCu: goto label_1337dc;
            case 0x1337E0u: goto label_1337e0;
            case 0x1337E4u: goto label_1337e4;
            case 0x1337E8u: goto label_1337e8;
            case 0x1337ECu: goto label_1337ec;
            case 0x1337F0u: goto label_1337f0;
            case 0x1337F4u: goto label_1337f4;
            case 0x1337F8u: goto label_1337f8;
            case 0x1337FCu: goto label_1337fc;
            case 0x133800u: goto label_133800;
            case 0x133804u: goto label_133804;
            case 0x133808u: goto label_133808;
            case 0x13380Cu: goto label_13380c;
            case 0x133810u: goto label_133810;
            case 0x133814u: goto label_133814;
            case 0x133818u: goto label_133818;
            case 0x13381Cu: goto label_13381c;
            case 0x133820u: goto label_133820;
            case 0x133824u: goto label_133824;
            case 0x133828u: goto label_133828;
            case 0x13382Cu: goto label_13382c;
            case 0x133830u: goto label_133830;
            case 0x133834u: goto label_133834;
            case 0x133838u: goto label_133838;
            case 0x13383Cu: goto label_13383c;
            case 0x133840u: goto label_133840;
            case 0x133844u: goto label_133844;
            case 0x133848u: goto label_133848;
            case 0x13384Cu: goto label_13384c;
            case 0x133850u: goto label_133850;
            case 0x133854u: goto label_133854;
            case 0x133858u: goto label_133858;
            case 0x13385Cu: goto label_13385c;
            case 0x133860u: goto label_133860;
            case 0x133864u: goto label_133864;
            case 0x133868u: goto label_133868;
            case 0x13386Cu: goto label_13386c;
            case 0x133870u: goto label_133870;
            case 0x133874u: goto label_133874;
            case 0x133878u: goto label_133878;
            case 0x13387Cu: goto label_13387c;
            case 0x133880u: goto label_133880;
            case 0x133884u: goto label_133884;
            case 0x133888u: goto label_133888;
            case 0x13388Cu: goto label_13388c;
            case 0x133890u: goto label_133890;
            case 0x133894u: goto label_133894;
            case 0x133898u: goto label_133898;
            case 0x13389Cu: goto label_13389c;
            case 0x1338A0u: goto label_1338a0;
            case 0x1338A4u: goto label_1338a4;
            case 0x1338A8u: goto label_1338a8;
            case 0x1338ACu: goto label_1338ac;
            case 0x1338B0u: goto label_1338b0;
            case 0x1338B4u: goto label_1338b4;
            case 0x1338B8u: goto label_1338b8;
            case 0x1338BCu: goto label_1338bc;
            case 0x1338C0u: goto label_1338c0;
            case 0x1338C4u: goto label_1338c4;
            case 0x1338C8u: goto label_1338c8;
            case 0x1338CCu: goto label_1338cc;
            case 0x1338D0u: goto label_1338d0;
            case 0x1338D4u: goto label_1338d4;
            case 0x1338D8u: goto label_1338d8;
            case 0x1338DCu: goto label_1338dc;
            case 0x1338E0u: goto label_1338e0;
            case 0x1338E4u: goto label_1338e4;
            case 0x1338E8u: goto label_1338e8;
            case 0x1338ECu: goto label_1338ec;
            case 0x1338F0u: goto label_1338f0;
            case 0x1338F4u: goto label_1338f4;
            case 0x1338F8u: goto label_1338f8;
            case 0x1338FCu: goto label_1338fc;
            case 0x133900u: goto label_133900;
            case 0x133904u: goto label_133904;
            case 0x133908u: goto label_133908;
            case 0x13390Cu: goto label_13390c;
            case 0x133910u: goto label_133910;
            case 0x133914u: goto label_133914;
            case 0x133918u: goto label_133918;
            case 0x13391Cu: goto label_13391c;
            case 0x133920u: goto label_133920;
            case 0x133924u: goto label_133924;
            case 0x133928u: goto label_133928;
            case 0x13392Cu: goto label_13392c;
            case 0x133930u: goto label_133930;
            case 0x133934u: goto label_133934;
            case 0x133938u: goto label_133938;
            case 0x13393Cu: goto label_13393c;
            case 0x133940u: goto label_133940;
            case 0x133944u: goto label_133944;
            case 0x133948u: goto label_133948;
            case 0x13394Cu: goto label_13394c;
            case 0x133950u: goto label_133950;
            case 0x133954u: goto label_133954;
            case 0x133958u: goto label_133958;
            case 0x13395Cu: goto label_13395c;
            case 0x133960u: goto label_133960;
            case 0x133964u: goto label_133964;
            case 0x133968u: goto label_133968;
            case 0x13396Cu: goto label_13396c;
            case 0x133970u: goto label_133970;
            case 0x133974u: goto label_133974;
            case 0x133978u: goto label_133978;
            case 0x13397Cu: goto label_13397c;
            case 0x133980u: goto label_133980;
            case 0x133984u: goto label_133984;
            case 0x133988u: goto label_133988;
            case 0x13398Cu: goto label_13398c;
            case 0x133990u: goto label_133990;
            case 0x133994u: goto label_133994;
            case 0x133998u: goto label_133998;
            case 0x13399Cu: goto label_13399c;
            case 0x1339A0u: goto label_1339a0;
            case 0x1339A4u: goto label_1339a4;
            case 0x1339A8u: goto label_1339a8;
            case 0x1339ACu: goto label_1339ac;
            case 0x1339B0u: goto label_1339b0;
            case 0x1339B4u: goto label_1339b4;
            case 0x1339B8u: goto label_1339b8;
            case 0x1339BCu: goto label_1339bc;
            case 0x1339C0u: goto label_1339c0;
            case 0x1339C4u: goto label_1339c4;
            case 0x1339C8u: goto label_1339c8;
            case 0x1339CCu: goto label_1339cc;
            case 0x1339D0u: goto label_1339d0;
            case 0x1339D4u: goto label_1339d4;
            case 0x1339D8u: goto label_1339d8;
            case 0x1339DCu: goto label_1339dc;
            case 0x1339E0u: goto label_1339e0;
            case 0x1339E4u: goto label_1339e4;
            case 0x1339E8u: goto label_1339e8;
            case 0x1339ECu: goto label_1339ec;
            case 0x1339F0u: goto label_1339f0;
            case 0x1339F4u: goto label_1339f4;
            case 0x1339F8u: goto label_1339f8;
            case 0x1339FCu: goto label_1339fc;
            case 0x133A00u: goto label_133a00;
            case 0x133A04u: goto label_133a04;
            case 0x133A08u: goto label_133a08;
            case 0x133A0Cu: goto label_133a0c;
            case 0x133A10u: goto label_133a10;
            case 0x133A14u: goto label_133a14;
            case 0x133A18u: goto label_133a18;
            case 0x133A1Cu: goto label_133a1c;
            case 0x133A20u: goto label_133a20;
            case 0x133A24u: goto label_133a24;
            case 0x133A28u: goto label_133a28;
            case 0x133A2Cu: goto label_133a2c;
            case 0x133A30u: goto label_133a30;
            case 0x133A34u: goto label_133a34;
            case 0x133A38u: goto label_133a38;
            case 0x133A3Cu: goto label_133a3c;
            case 0x133A40u: goto label_133a40;
            case 0x133A44u: goto label_133a44;
            case 0x133A48u: goto label_133a48;
            case 0x133A4Cu: goto label_133a4c;
            case 0x133A50u: goto label_133a50;
            case 0x133A54u: goto label_133a54;
            case 0x133A58u: goto label_133a58;
            case 0x133A5Cu: goto label_133a5c;
            case 0x133A60u: goto label_133a60;
            case 0x133A64u: goto label_133a64;
            case 0x133A68u: goto label_133a68;
            case 0x133A6Cu: goto label_133a6c;
            case 0x133A70u: goto label_133a70;
            case 0x133A74u: goto label_133a74;
            case 0x133A78u: goto label_133a78;
            case 0x133A7Cu: goto label_133a7c;
            case 0x133A80u: goto label_133a80;
            case 0x133A84u: goto label_133a84;
            case 0x133A88u: goto label_133a88;
            case 0x133A8Cu: goto label_133a8c;
            case 0x133A90u: goto label_133a90;
            case 0x133A94u: goto label_133a94;
            case 0x133A98u: goto label_133a98;
            case 0x133A9Cu: goto label_133a9c;
            case 0x133AA0u: goto label_133aa0;
            case 0x133AA4u: goto label_133aa4;
            case 0x133AA8u: goto label_133aa8;
            case 0x133AACu: goto label_133aac;
            case 0x133AB0u: goto label_133ab0;
            case 0x133AB4u: goto label_133ab4;
            case 0x133AB8u: goto label_133ab8;
            case 0x133ABCu: goto label_133abc;
            case 0x133AC0u: goto label_133ac0;
            case 0x133AC4u: goto label_133ac4;
            case 0x133AC8u: goto label_133ac8;
            case 0x133ACCu: goto label_133acc;
            case 0x133AD0u: goto label_133ad0;
            case 0x133AD4u: goto label_133ad4;
            case 0x133AD8u: goto label_133ad8;
            case 0x133ADCu: goto label_133adc;
            case 0x133AE0u: goto label_133ae0;
            case 0x133AE4u: goto label_133ae4;
            case 0x133AE8u: goto label_133ae8;
            case 0x133AECu: goto label_133aec;
            case 0x133AF0u: goto label_133af0;
            case 0x133AF4u: goto label_133af4;
            case 0x133AF8u: goto label_133af8;
            case 0x133AFCu: goto label_133afc;
            case 0x133B00u: goto label_133b00;
            case 0x133B04u: goto label_133b04;
            case 0x133B08u: goto label_133b08;
            case 0x133B0Cu: goto label_133b0c;
            case 0x133B10u: goto label_133b10;
            case 0x133B14u: goto label_133b14;
            case 0x133B18u: goto label_133b18;
            case 0x133B1Cu: goto label_133b1c;
            case 0x133B20u: goto label_133b20;
            case 0x133B24u: goto label_133b24;
            case 0x133B28u: goto label_133b28;
            case 0x133B2Cu: goto label_133b2c;
            case 0x133B30u: goto label_133b30;
            case 0x133B34u: goto label_133b34;
            case 0x133B38u: goto label_133b38;
            case 0x133B3Cu: goto label_133b3c;
            case 0x133B40u: goto label_133b40;
            case 0x133B44u: goto label_133b44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x133870u;
label_133870:
    // 0x133870: 0x27bdffd0
    ctx->pc = 0x133870u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_133874:
    // 0x133874: 0xffb00000
    ctx->pc = 0x133874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_133878:
    // 0x133878: 0xffb20010
    ctx->pc = 0x133878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13387c:
    // 0x13387c: 0x80902d
    ctx->pc = 0x13387cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_133880:
    // 0x133880: 0xffb30018
    ctx->pc = 0x133880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_133884:
    // 0x133884: 0xffb40020
    ctx->pc = 0x133884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_133888:
    // 0x133888: 0xffbf0028
    ctx->pc = 0x133888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_13388c:
    // 0x13388c: 0xffb10008
    ctx->pc = 0x13388cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_133890:
    // 0x133890: 0x8e510004
    ctx->pc = 0x133890u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_133894:
    // 0x133894: 0xc04b61a
label_133898:
    if (ctx->pc == 0x133898u) {
        ctx->pc = 0x133898u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13389Cu;
        goto label_13389c;
    }
    ctx->pc = 0x133894u;
    SET_GPR_U32(ctx, 31, 0x13389Cu);
    ctx->pc = 0x133898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D868u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D868_0x12d868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13389Cu; }
    }
    if (ctx->pc != 0x13389Cu) { return; }
    ctx->pc = 0x13389Cu;
label_13389c:
    // 0x13389c: 0x220202d
    ctx->pc = 0x13389cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1338a0:
    // 0x1338a0: 0xc04b620
label_1338a4:
    if (ctx->pc == 0x1338A4u) {
        ctx->pc = 0x1338A4u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1338A8u;
        goto label_1338a8;
    }
    ctx->pc = 0x1338A0u;
    SET_GPR_U32(ctx, 31, 0x1338A8u);
    ctx->pc = 0x1338A4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D880u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D880_0x12d880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1338A8u; }
    }
    if (ctx->pc != 0x1338A8u) { return; }
    ctx->pc = 0x1338A8u;
label_1338a8:
    // 0x1338a8: 0x220202d
    ctx->pc = 0x1338a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1338ac:
    // 0x1338ac: 0xc04b62c
label_1338b0:
    if (ctx->pc == 0x1338B0u) {
        ctx->pc = 0x1338B0u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1338B4u;
        goto label_1338b4;
    }
    ctx->pc = 0x1338ACu;
    SET_GPR_U32(ctx, 31, 0x1338B4u);
    ctx->pc = 0x1338B0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D8B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D8B0_0x12d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1338B4u; }
    }
    if (ctx->pc != 0x1338B4u) { return; }
    ctx->pc = 0x1338B4u;
label_1338b4:
    // 0x1338b4: 0x220202d
    ctx->pc = 0x1338b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1338b8:
    // 0x1338b8: 0xc04b68e
label_1338bc:
    if (ctx->pc == 0x1338BCu) {
        ctx->pc = 0x1338BCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1338C0u;
        goto label_1338c0;
    }
    ctx->pc = 0x1338B8u;
    SET_GPR_U32(ctx, 31, 0x1338C0u);
    ctx->pc = 0x1338BCu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12DA38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DA38_0x12da38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1338C0u; }
    }
    if (ctx->pc != 0x1338C0u) { return; }
    ctx->pc = 0x1338C0u;
label_1338c0:
    // 0x1338c0: 0x2138023
    ctx->pc = 0x1338c0u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_1338c4:
    // 0x1338c4: 0x220202d
    ctx->pc = 0x1338c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1338c8:
    // 0x1338c8: 0xc04b5d6
label_1338cc:
    if (ctx->pc == 0x1338CCu) {
        ctx->pc = 0x1338CCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1338D0u;
        goto label_1338d0;
    }
    ctx->pc = 0x1338C8u;
    SET_GPR_U32(ctx, 31, 0x1338D0u);
    ctx->pc = 0x1338CCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D758u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D758_0x12d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1338D0u; }
    }
    if (ctx->pc != 0x1338D0u) { return; }
    ctx->pc = 0x1338D0u;
label_1338d0:
    // 0x1338d0: 0xae500090
    ctx->pc = 0x1338d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 16));
label_1338d4:
    // 0x1338d4: 0x200282d
    ctx->pc = 0x1338d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1338d8:
    // 0x1338d8: 0xc04b5d2
label_1338dc:
    if (ctx->pc == 0x1338DCu) {
        ctx->pc = 0x1338DCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1338E0u;
        goto label_1338e0;
    }
    ctx->pc = 0x1338D8u;
    SET_GPR_U32(ctx, 31, 0x1338E0u);
    ctx->pc = 0x1338DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D748u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D748_0x12d748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1338E0u; }
    }
    if (ctx->pc != 0x1338E0u) { return; }
    ctx->pc = 0x1338E0u;
label_1338e0:
    // 0x1338e0: 0x220202d
    ctx->pc = 0x1338e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1338e4:
    // 0x1338e4: 0xc04b5da
label_1338e8:
    if (ctx->pc == 0x1338E8u) {
        ctx->pc = 0x1338E8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1338ECu;
        goto label_1338ec;
    }
    ctx->pc = 0x1338E4u;
    SET_GPR_U32(ctx, 31, 0x1338ECu);
    ctx->pc = 0x1338E8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D768u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D768_0x12d768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1338ECu; }
    }
    if (ctx->pc != 0x1338ECu) { return; }
    ctx->pc = 0x1338ECu;
label_1338ec:
    // 0x1338ec: 0x220202d
    ctx->pc = 0x1338ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1338f0:
    // 0x1338f0: 0xc04b5ba
label_1338f4:
    if (ctx->pc == 0x1338F4u) {
        ctx->pc = 0x1338F4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1338F8u;
        goto label_1338f8;
    }
    ctx->pc = 0x1338F0u;
    SET_GPR_U32(ctx, 31, 0x1338F8u);
    ctx->pc = 0x1338F4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D6E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D6E8_0x12d6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1338F8u; }
    }
    if (ctx->pc != 0x1338F8u) { return; }
    ctx->pc = 0x1338F8u;
label_1338f8:
    // 0x1338f8: 0x3c050013
    ctx->pc = 0x1338f8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)19 << 16));
label_1338fc:
    // 0x1338fc: 0x220202d
    ctx->pc = 0x1338fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133900:
    // 0x133900: 0xdfb10008
    ctx->pc = 0x133900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_133904:
    // 0x133904: 0x240302d
    ctx->pc = 0x133904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_133908:
    // 0x133908: 0xdfb20010
    ctx->pc = 0x133908u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13390c:
    // 0x13390c: 0xdfb00000
    ctx->pc = 0x13390cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_133910:
    // 0x133910: 0x24a53928
    ctx->pc = 0x133910u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 14632));
label_133914:
    // 0x133914: 0xdfb30018
    ctx->pc = 0x133914u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_133918:
    // 0x133918: 0xdfb40020
    ctx->pc = 0x133918u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13391c:
    // 0x13391c: 0xdfbf0028
    ctx->pc = 0x13391cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_133920:
    // 0x133920: 0x804b5ce
label_133924:
    if (ctx->pc == 0x133924u) {
        ctx->pc = 0x133924u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x133928u;
        goto label_133928;
    }
    ctx->pc = 0x133920u;
    ctx->pc = 0x133924u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x12D738u;
    sub_0012D738_0x12d738(rdram, ctx, runtime); return;
    ctx->pc = 0x133928u;
label_133928:
    // 0x133928: 0x27bdffb0
    ctx->pc = 0x133928u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_13392c:
    // 0x13392c: 0xffb10018
    ctx->pc = 0x13392cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_133930:
    // 0x133930: 0x80882d
    ctx->pc = 0x133930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_133934:
    // 0x133934: 0xffb30028
    ctx->pc = 0x133934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_133938:
    // 0x133938: 0xffb40030
    ctx->pc = 0x133938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_13393c:
    // 0x13393c: 0xffb50038
    ctx->pc = 0x13393cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_133940:
    // 0x133940: 0xffb00010
    ctx->pc = 0x133940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_133944:
    // 0x133944: 0xffb20020
    ctx->pc = 0x133944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_133948:
    // 0x133948: 0xffbf0040
    ctx->pc = 0x133948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_13394c:
    // 0x13394c: 0x8e320004
    ctx->pc = 0x13394cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_133950:
    // 0x133950: 0x8e300014
    ctx->pc = 0x133950u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_133954:
    // 0x133954: 0xc04b61a
label_133958:
    if (ctx->pc == 0x133958u) {
        ctx->pc = 0x133958u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13395Cu;
        goto label_13395c;
    }
    ctx->pc = 0x133954u;
    SET_GPR_U32(ctx, 31, 0x13395Cu);
    ctx->pc = 0x133958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D868u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D868_0x12d868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13395Cu; }
    }
    if (ctx->pc != 0x13395Cu) { return; }
    ctx->pc = 0x13395Cu;
label_13395c:
    // 0x13395c: 0x240202d
    ctx->pc = 0x13395cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_133960:
    // 0x133960: 0xc04b620
label_133964:
    if (ctx->pc == 0x133964u) {
        ctx->pc = 0x133964u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133968u;
        goto label_133968;
    }
    ctx->pc = 0x133960u;
    SET_GPR_U32(ctx, 31, 0x133968u);
    ctx->pc = 0x133964u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D880u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D880_0x12d880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133968u; }
    }
    if (ctx->pc != 0x133968u) { return; }
    ctx->pc = 0x133968u;
label_133968:
    // 0x133968: 0x240202d
    ctx->pc = 0x133968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13396c:
    // 0x13396c: 0xc04b62c
label_133970:
    if (ctx->pc == 0x133970u) {
        ctx->pc = 0x133970u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133974u;
        goto label_133974;
    }
    ctx->pc = 0x13396Cu;
    SET_GPR_U32(ctx, 31, 0x133974u);
    ctx->pc = 0x133970u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D8B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D8B0_0x12d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133974u; }
    }
    if (ctx->pc != 0x133974u) { return; }
    ctx->pc = 0x133974u;
label_133974:
    // 0x133974: 0x200202d
    ctx->pc = 0x133974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133978:
    // 0x133978: 0x40a02d
    ctx->pc = 0x133978u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13397c:
    // 0x13397c: 0x8e220008
    ctx->pc = 0x13397cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_133980:
    // 0x133980: 0x24050001
    ctx->pc = 0x133980u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_133984:
    // 0x133984: 0x1440000a
label_133988:
    if (ctx->pc == 0x133988u) {
        ctx->pc = 0x133988u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13398Cu;
        goto label_13398c;
    }
    ctx->pc = 0x133984u;
    {
        const bool branch_taken_0x133984 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x133988u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x133984) {
            ctx->pc = 0x1339B0u;
            goto label_1339b0;
        }
    }
    ctx->pc = 0x13398Cu;
label_13398c:
    // 0x13398c: 0x8222006c
    ctx->pc = 0x13398cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 108)));
label_133990:
    // 0x133990: 0x54400008
label_133994:
    if (ctx->pc == 0x133994u) {
        ctx->pc = 0x133994u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x133998u;
        goto label_133998;
    }
    ctx->pc = 0x133990u;
    {
        const bool branch_taken_0x133990 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x133990) {
            ctx->pc = 0x133994u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x1339B4u;
            goto label_1339b4;
        }
    }
    ctx->pc = 0x133998u;
label_133998:
    // 0x133998: 0x8e240004
    ctx->pc = 0x133998u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13399c:
    // 0x13399c: 0xc04b5d2
label_1339a0:
    if (ctx->pc == 0x1339A0u) {
        ctx->pc = 0x1339A0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1339A4u;
        goto label_1339a4;
    }
    ctx->pc = 0x13399Cu;
    SET_GPR_U32(ctx, 31, 0x1339A4u);
    ctx->pc = 0x1339A0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x12D748u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D748_0x12d748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1339A4u; }
    }
    if (ctx->pc != 0x1339A4u) { return; }
    ctx->pc = 0x1339A4u;
label_1339a4:
    // 0x1339a4: 0x1000003c
label_1339a8:
    if (ctx->pc == 0x1339A8u) {
        ctx->pc = 0x1339A8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1339ACu;
        goto label_1339ac;
    }
    ctx->pc = 0x1339A4u;
    {
        const bool branch_taken_0x1339a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1339A8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1339a4) {
            ctx->pc = 0x133A98u;
            goto label_133a98;
        }
    }
    ctx->pc = 0x1339ACu;
label_1339ac:
    // 0x1339ac: 0x0
    ctx->pc = 0x1339acu;
    // NOP
label_1339b0:
    // 0x1339b0: 0x8e030000
    ctx->pc = 0x1339b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1339b4:
    // 0x1339b4: 0x8c620018
    ctx->pc = 0x1339b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1339b8:
    // 0x1339b8: 0x40f809
label_1339bc:
    if (ctx->pc == 0x1339BCu) {
        ctx->pc = 0x1339BCu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x1339C0u;
        goto label_1339c0;
    }
    ctx->pc = 0x1339B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1339C0u);
        ctx->pc = 0x1339BCu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133490u: goto label_133490;
            case 0x133494u: goto label_133494;
            case 0x133498u: goto label_133498;
            case 0x13349Cu: goto label_13349c;
            case 0x1334A0u: goto label_1334a0;
            case 0x1334A4u: goto label_1334a4;
            case 0x1334A8u: goto label_1334a8;
            case 0x1334ACu: goto label_1334ac;
            case 0x1334B0u: goto label_1334b0;
            case 0x1334B4u: goto label_1334b4;
            case 0x1334B8u: goto label_1334b8;
            case 0x1334BCu: goto label_1334bc;
            case 0x1334C0u: goto label_1334c0;
            case 0x1334C4u: goto label_1334c4;
            case 0x1334C8u: goto label_1334c8;
            case 0x1334CCu: goto label_1334cc;
            case 0x1334D0u: goto label_1334d0;
            case 0x1334D4u: goto label_1334d4;
            case 0x1334D8u: goto label_1334d8;
            case 0x1334DCu: goto label_1334dc;
            case 0x1334E0u: goto label_1334e0;
            case 0x1334E4u: goto label_1334e4;
            case 0x1334E8u: goto label_1334e8;
            case 0x1334ECu: goto label_1334ec;
            case 0x1334F0u: goto label_1334f0;
            case 0x1334F4u: goto label_1334f4;
            case 0x1334F8u: goto label_1334f8;
            case 0x1334FCu: goto label_1334fc;
            case 0x133500u: goto label_133500;
            case 0x133504u: goto label_133504;
            case 0x133508u: goto label_133508;
            case 0x13350Cu: goto label_13350c;
            case 0x133510u: goto label_133510;
            case 0x133514u: goto label_133514;
            case 0x133518u: goto label_133518;
            case 0x13351Cu: goto label_13351c;
            case 0x133520u: goto label_133520;
            case 0x133524u: goto label_133524;
            case 0x133528u: goto label_133528;
            case 0x13352Cu: goto label_13352c;
            case 0x133530u: goto label_133530;
            case 0x133534u: goto label_133534;
            case 0x133538u: goto label_133538;
            case 0x13353Cu: goto label_13353c;
            case 0x133540u: goto label_133540;
            case 0x133544u: goto label_133544;
            case 0x133548u: goto label_133548;
            case 0x13354Cu: goto label_13354c;
            case 0x133550u: goto label_133550;
            case 0x133554u: goto label_133554;
            case 0x133558u: goto label_133558;
            case 0x13355Cu: goto label_13355c;
            case 0x133560u: goto label_133560;
            case 0x133564u: goto label_133564;
            case 0x133568u: goto label_133568;
            case 0x13356Cu: goto label_13356c;
            case 0x133570u: goto label_133570;
            case 0x133574u: goto label_133574;
            case 0x133578u: goto label_133578;
            case 0x13357Cu: goto label_13357c;
            case 0x133580u: goto label_133580;
            case 0x133584u: goto label_133584;
            case 0x133588u: goto label_133588;
            case 0x13358Cu: goto label_13358c;
            case 0x133590u: goto label_133590;
            case 0x133594u: goto label_133594;
            case 0x133598u: goto label_133598;
            case 0x13359Cu: goto label_13359c;
            case 0x1335A0u: goto label_1335a0;
            case 0x1335A4u: goto label_1335a4;
            case 0x1335A8u: goto label_1335a8;
            case 0x1335ACu: goto label_1335ac;
            case 0x1335B0u: goto label_1335b0;
            case 0x1335B4u: goto label_1335b4;
            case 0x1335B8u: goto label_1335b8;
            case 0x1335BCu: goto label_1335bc;
            case 0x1335C0u: goto label_1335c0;
            case 0x1335C4u: goto label_1335c4;
            case 0x1335C8u: goto label_1335c8;
            case 0x1335CCu: goto label_1335cc;
            case 0x1335D0u: goto label_1335d0;
            case 0x1335D4u: goto label_1335d4;
            case 0x1335D8u: goto label_1335d8;
            case 0x1335DCu: goto label_1335dc;
            case 0x1335E0u: goto label_1335e0;
            case 0x1335E4u: goto label_1335e4;
            case 0x1335E8u: goto label_1335e8;
            case 0x1335ECu: goto label_1335ec;
            case 0x1335F0u: goto label_1335f0;
            case 0x1335F4u: goto label_1335f4;
            case 0x1335F8u: goto label_1335f8;
            case 0x1335FCu: goto label_1335fc;
            case 0x133600u: goto label_133600;
            case 0x133604u: goto label_133604;
            case 0x133608u: goto label_133608;
            case 0x13360Cu: goto label_13360c;
            case 0x133610u: goto label_133610;
            case 0x133614u: goto label_133614;
            case 0x133618u: goto label_133618;
            case 0x13361Cu: goto label_13361c;
            case 0x133620u: goto label_133620;
            case 0x133624u: goto label_133624;
            case 0x133628u: goto label_133628;
            case 0x13362Cu: goto label_13362c;
            case 0x133630u: goto label_133630;
            case 0x133634u: goto label_133634;
            case 0x133638u: goto label_133638;
            case 0x13363Cu: goto label_13363c;
            case 0x133640u: goto label_133640;
            case 0x133644u: goto label_133644;
            case 0x133648u: goto label_133648;
            case 0x13364Cu: goto label_13364c;
            case 0x133650u: goto label_133650;
            case 0x133654u: goto label_133654;
            case 0x133658u: goto label_133658;
            case 0x13365Cu: goto label_13365c;
            case 0x133660u: goto label_133660;
            case 0x133664u: goto label_133664;
            case 0x133668u: goto label_133668;
            case 0x13366Cu: goto label_13366c;
            case 0x133670u: goto label_133670;
            case 0x133674u: goto label_133674;
            case 0x133678u: goto label_133678;
            case 0x13367Cu: goto label_13367c;
            case 0x133680u: goto label_133680;
            case 0x133684u: goto label_133684;
            case 0x133688u: goto label_133688;
            case 0x13368Cu: goto label_13368c;
            case 0x133690u: goto label_133690;
            case 0x133694u: goto label_133694;
            case 0x133698u: goto label_133698;
            case 0x13369Cu: goto label_13369c;
            case 0x1336A0u: goto label_1336a0;
            case 0x1336A4u: goto label_1336a4;
            case 0x1336A8u: goto label_1336a8;
            case 0x1336ACu: goto label_1336ac;
            case 0x1336B0u: goto label_1336b0;
            case 0x1336B4u: goto label_1336b4;
            case 0x1336B8u: goto label_1336b8;
            case 0x1336BCu: goto label_1336bc;
            case 0x1336C0u: goto label_1336c0;
            case 0x1336C4u: goto label_1336c4;
            case 0x1336C8u: goto label_1336c8;
            case 0x1336CCu: goto label_1336cc;
            case 0x1336D0u: goto label_1336d0;
            case 0x1336D4u: goto label_1336d4;
            case 0x1336D8u: goto label_1336d8;
            case 0x1336DCu: goto label_1336dc;
            case 0x1336E0u: goto label_1336e0;
            case 0x1336E4u: goto label_1336e4;
            case 0x1336E8u: goto label_1336e8;
            case 0x1336ECu: goto label_1336ec;
            case 0x1336F0u: goto label_1336f0;
            case 0x1336F4u: goto label_1336f4;
            case 0x1336F8u: goto label_1336f8;
            case 0x1336FCu: goto label_1336fc;
            case 0x133700u: goto label_133700;
            case 0x133704u: goto label_133704;
            case 0x133708u: goto label_133708;
            case 0x13370Cu: goto label_13370c;
            case 0x133710u: goto label_133710;
            case 0x133714u: goto label_133714;
            case 0x133718u: goto label_133718;
            case 0x13371Cu: goto label_13371c;
            case 0x133720u: goto label_133720;
            case 0x133724u: goto label_133724;
            case 0x133728u: goto label_133728;
            case 0x13372Cu: goto label_13372c;
            case 0x133730u: goto label_133730;
            case 0x133734u: goto label_133734;
            case 0x133738u: goto label_133738;
            case 0x13373Cu: goto label_13373c;
            case 0x133740u: goto label_133740;
            case 0x133744u: goto label_133744;
            case 0x133748u: goto label_133748;
            case 0x13374Cu: goto label_13374c;
            case 0x133750u: goto label_133750;
            case 0x133754u: goto label_133754;
            case 0x133758u: goto label_133758;
            case 0x13375Cu: goto label_13375c;
            case 0x133760u: goto label_133760;
            case 0x133764u: goto label_133764;
            case 0x133768u: goto label_133768;
            case 0x13376Cu: goto label_13376c;
            case 0x133770u: goto label_133770;
            case 0x133774u: goto label_133774;
            case 0x133778u: goto label_133778;
            case 0x13377Cu: goto label_13377c;
            case 0x133780u: goto label_133780;
            case 0x133784u: goto label_133784;
            case 0x133788u: goto label_133788;
            case 0x13378Cu: goto label_13378c;
            case 0x133790u: goto label_133790;
            case 0x133794u: goto label_133794;
            case 0x133798u: goto label_133798;
            case 0x13379Cu: goto label_13379c;
            case 0x1337A0u: goto label_1337a0;
            case 0x1337A4u: goto label_1337a4;
            case 0x1337A8u: goto label_1337a8;
            case 0x1337ACu: goto label_1337ac;
            case 0x1337B0u: goto label_1337b0;
            case 0x1337B4u: goto label_1337b4;
            case 0x1337B8u: goto label_1337b8;
            case 0x1337BCu: goto label_1337bc;
            case 0x1337C0u: goto label_1337c0;
            case 0x1337C4u: goto label_1337c4;
            case 0x1337C8u: goto label_1337c8;
            case 0x1337CCu: goto label_1337cc;
            case 0x1337D0u: goto label_1337d0;
            case 0x1337D4u: goto label_1337d4;
            case 0x1337D8u: goto label_1337d8;
            case 0x1337DCu: goto label_1337dc;
            case 0x1337E0u: goto label_1337e0;
            case 0x1337E4u: goto label_1337e4;
            case 0x1337E8u: goto label_1337e8;
            case 0x1337ECu: goto label_1337ec;
            case 0x1337F0u: goto label_1337f0;
            case 0x1337F4u: goto label_1337f4;
            case 0x1337F8u: goto label_1337f8;
            case 0x1337FCu: goto label_1337fc;
            case 0x133800u: goto label_133800;
            case 0x133804u: goto label_133804;
            case 0x133808u: goto label_133808;
            case 0x13380Cu: goto label_13380c;
            case 0x133810u: goto label_133810;
            case 0x133814u: goto label_133814;
            case 0x133818u: goto label_133818;
            case 0x13381Cu: goto label_13381c;
            case 0x133820u: goto label_133820;
            case 0x133824u: goto label_133824;
            case 0x133828u: goto label_133828;
            case 0x13382Cu: goto label_13382c;
            case 0x133830u: goto label_133830;
            case 0x133834u: goto label_133834;
            case 0x133838u: goto label_133838;
            case 0x13383Cu: goto label_13383c;
            case 0x133840u: goto label_133840;
            case 0x133844u: goto label_133844;
            case 0x133848u: goto label_133848;
            case 0x13384Cu: goto label_13384c;
            case 0x133850u: goto label_133850;
            case 0x133854u: goto label_133854;
            case 0x133858u: goto label_133858;
            case 0x13385Cu: goto label_13385c;
            case 0x133860u: goto label_133860;
            case 0x133864u: goto label_133864;
            case 0x133868u: goto label_133868;
            case 0x13386Cu: goto label_13386c;
            case 0x133870u: goto label_133870;
            case 0x133874u: goto label_133874;
            case 0x133878u: goto label_133878;
            case 0x13387Cu: goto label_13387c;
            case 0x133880u: goto label_133880;
            case 0x133884u: goto label_133884;
            case 0x133888u: goto label_133888;
            case 0x13388Cu: goto label_13388c;
            case 0x133890u: goto label_133890;
            case 0x133894u: goto label_133894;
            case 0x133898u: goto label_133898;
            case 0x13389Cu: goto label_13389c;
            case 0x1338A0u: goto label_1338a0;
            case 0x1338A4u: goto label_1338a4;
            case 0x1338A8u: goto label_1338a8;
            case 0x1338ACu: goto label_1338ac;
            case 0x1338B0u: goto label_1338b0;
            case 0x1338B4u: goto label_1338b4;
            case 0x1338B8u: goto label_1338b8;
            case 0x1338BCu: goto label_1338bc;
            case 0x1338C0u: goto label_1338c0;
            case 0x1338C4u: goto label_1338c4;
            case 0x1338C8u: goto label_1338c8;
            case 0x1338CCu: goto label_1338cc;
            case 0x1338D0u: goto label_1338d0;
            case 0x1338D4u: goto label_1338d4;
            case 0x1338D8u: goto label_1338d8;
            case 0x1338DCu: goto label_1338dc;
            case 0x1338E0u: goto label_1338e0;
            case 0x1338E4u: goto label_1338e4;
            case 0x1338E8u: goto label_1338e8;
            case 0x1338ECu: goto label_1338ec;
            case 0x1338F0u: goto label_1338f0;
            case 0x1338F4u: goto label_1338f4;
            case 0x1338F8u: goto label_1338f8;
            case 0x1338FCu: goto label_1338fc;
            case 0x133900u: goto label_133900;
            case 0x133904u: goto label_133904;
            case 0x133908u: goto label_133908;
            case 0x13390Cu: goto label_13390c;
            case 0x133910u: goto label_133910;
            case 0x133914u: goto label_133914;
            case 0x133918u: goto label_133918;
            case 0x13391Cu: goto label_13391c;
            case 0x133920u: goto label_133920;
            case 0x133924u: goto label_133924;
            case 0x133928u: goto label_133928;
            case 0x13392Cu: goto label_13392c;
            case 0x133930u: goto label_133930;
            case 0x133934u: goto label_133934;
            case 0x133938u: goto label_133938;
            case 0x13393Cu: goto label_13393c;
            case 0x133940u: goto label_133940;
            case 0x133944u: goto label_133944;
            case 0x133948u: goto label_133948;
            case 0x13394Cu: goto label_13394c;
            case 0x133950u: goto label_133950;
            case 0x133954u: goto label_133954;
            case 0x133958u: goto label_133958;
            case 0x13395Cu: goto label_13395c;
            case 0x133960u: goto label_133960;
            case 0x133964u: goto label_133964;
            case 0x133968u: goto label_133968;
            case 0x13396Cu: goto label_13396c;
            case 0x133970u: goto label_133970;
            case 0x133974u: goto label_133974;
            case 0x133978u: goto label_133978;
            case 0x13397Cu: goto label_13397c;
            case 0x133980u: goto label_133980;
            case 0x133984u: goto label_133984;
            case 0x133988u: goto label_133988;
            case 0x13398Cu: goto label_13398c;
            case 0x133990u: goto label_133990;
            case 0x133994u: goto label_133994;
            case 0x133998u: goto label_133998;
            case 0x13399Cu: goto label_13399c;
            case 0x1339A0u: goto label_1339a0;
            case 0x1339A4u: goto label_1339a4;
            case 0x1339A8u: goto label_1339a8;
            case 0x1339ACu: goto label_1339ac;
            case 0x1339B0u: goto label_1339b0;
            case 0x1339B4u: goto label_1339b4;
            case 0x1339B8u: goto label_1339b8;
            case 0x1339BCu: goto label_1339bc;
            case 0x1339C0u: goto label_1339c0;
            case 0x1339C4u: goto label_1339c4;
            case 0x1339C8u: goto label_1339c8;
            case 0x1339CCu: goto label_1339cc;
            case 0x1339D0u: goto label_1339d0;
            case 0x1339D4u: goto label_1339d4;
            case 0x1339D8u: goto label_1339d8;
            case 0x1339DCu: goto label_1339dc;
            case 0x1339E0u: goto label_1339e0;
            case 0x1339E4u: goto label_1339e4;
            case 0x1339E8u: goto label_1339e8;
            case 0x1339ECu: goto label_1339ec;
            case 0x1339F0u: goto label_1339f0;
            case 0x1339F4u: goto label_1339f4;
            case 0x1339F8u: goto label_1339f8;
            case 0x1339FCu: goto label_1339fc;
            case 0x133A00u: goto label_133a00;
            case 0x133A04u: goto label_133a04;
            case 0x133A08u: goto label_133a08;
            case 0x133A0Cu: goto label_133a0c;
            case 0x133A10u: goto label_133a10;
            case 0x133A14u: goto label_133a14;
            case 0x133A18u: goto label_133a18;
            case 0x133A1Cu: goto label_133a1c;
            case 0x133A20u: goto label_133a20;
            case 0x133A24u: goto label_133a24;
            case 0x133A28u: goto label_133a28;
            case 0x133A2Cu: goto label_133a2c;
            case 0x133A30u: goto label_133a30;
            case 0x133A34u: goto label_133a34;
            case 0x133A38u: goto label_133a38;
            case 0x133A3Cu: goto label_133a3c;
            case 0x133A40u: goto label_133a40;
            case 0x133A44u: goto label_133a44;
            case 0x133A48u: goto label_133a48;
            case 0x133A4Cu: goto label_133a4c;
            case 0x133A50u: goto label_133a50;
            case 0x133A54u: goto label_133a54;
            case 0x133A58u: goto label_133a58;
            case 0x133A5Cu: goto label_133a5c;
            case 0x133A60u: goto label_133a60;
            case 0x133A64u: goto label_133a64;
            case 0x133A68u: goto label_133a68;
            case 0x133A6Cu: goto label_133a6c;
            case 0x133A70u: goto label_133a70;
            case 0x133A74u: goto label_133a74;
            case 0x133A78u: goto label_133a78;
            case 0x133A7Cu: goto label_133a7c;
            case 0x133A80u: goto label_133a80;
            case 0x133A84u: goto label_133a84;
            case 0x133A88u: goto label_133a88;
            case 0x133A8Cu: goto label_133a8c;
            case 0x133A90u: goto label_133a90;
            case 0x133A94u: goto label_133a94;
            case 0x133A98u: goto label_133a98;
            case 0x133A9Cu: goto label_133a9c;
            case 0x133AA0u: goto label_133aa0;
            case 0x133AA4u: goto label_133aa4;
            case 0x133AA8u: goto label_133aa8;
            case 0x133AACu: goto label_133aac;
            case 0x133AB0u: goto label_133ab0;
            case 0x133AB4u: goto label_133ab4;
            case 0x133AB8u: goto label_133ab8;
            case 0x133ABCu: goto label_133abc;
            case 0x133AC0u: goto label_133ac0;
            case 0x133AC4u: goto label_133ac4;
            case 0x133AC8u: goto label_133ac8;
            case 0x133ACCu: goto label_133acc;
            case 0x133AD0u: goto label_133ad0;
            case 0x133AD4u: goto label_133ad4;
            case 0x133AD8u: goto label_133ad8;
            case 0x133ADCu: goto label_133adc;
            case 0x133AE0u: goto label_133ae0;
            case 0x133AE4u: goto label_133ae4;
            case 0x133AE8u: goto label_133ae8;
            case 0x133AECu: goto label_133aec;
            case 0x133AF0u: goto label_133af0;
            case 0x133AF4u: goto label_133af4;
            case 0x133AF8u: goto label_133af8;
            case 0x133AFCu: goto label_133afc;
            case 0x133B00u: goto label_133b00;
            case 0x133B04u: goto label_133b04;
            case 0x133B08u: goto label_133b08;
            case 0x133B0Cu: goto label_133b0c;
            case 0x133B10u: goto label_133b10;
            case 0x133B14u: goto label_133b14;
            case 0x133B18u: goto label_133b18;
            case 0x133B1Cu: goto label_133b1c;
            case 0x133B20u: goto label_133b20;
            case 0x133B24u: goto label_133b24;
            case 0x133B28u: goto label_133b28;
            case 0x133B2Cu: goto label_133b2c;
            case 0x133B30u: goto label_133b30;
            case 0x133B34u: goto label_133b34;
            case 0x133B38u: goto label_133b38;
            case 0x133B3Cu: goto label_133b3c;
            case 0x133B40u: goto label_133b40;
            case 0x133B44u: goto label_133b44;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1339C0u; }
            if (ctx->pc != 0x1339C0u) { return; }
        }
    }
    ctx->pc = 0x1339C0u;
label_1339c0:
    // 0x1339c0: 0x3c040024
    ctx->pc = 0x1339c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_1339c4:
    // 0x1339c4: 0x8fa20004
    ctx->pc = 0x1339c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1339c8:
    // 0x1339c8: 0x8e230050
    ctx->pc = 0x1339c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_1339cc:
    // 0x1339cc: 0x43102a
    ctx->pc = 0x1339ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_1339d0:
    // 0x1339d0: 0x10400003
label_1339d4:
    if (ctx->pc == 0x1339D4u) {
        ctx->pc = 0x1339D4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948544));
        ctx->pc = 0x1339D8u;
        goto label_1339d8;
    }
    ctx->pc = 0x1339D0u;
    {
        const bool branch_taken_0x1339d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1339D4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948544));
        if (branch_taken_0x1339d0) {
            ctx->pc = 0x1339E0u;
            goto label_1339e0;
        }
    }
    ctx->pc = 0x1339D8u;
label_1339d8:
    // 0x1339d8: 0xc04a034
label_1339dc:
    if (ctx->pc == 0x1339DCu) {
        ctx->pc = 0x1339E0u;
        goto label_1339e0;
    }
    ctx->pc = 0x1339D8u;
    SET_GPR_U32(ctx, 31, 0x1339E0u);
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1339E0u; }
    }
    if (ctx->pc != 0x1339E0u) { return; }
    ctx->pc = 0x1339E0u;
label_1339e0:
    // 0x1339e0: 0x8e030000
    ctx->pc = 0x1339e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1339e4:
    // 0x1339e4: 0x3a0302d
    ctx->pc = 0x1339e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1339e8:
    // 0x1339e8: 0x282d
    ctx->pc = 0x1339e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1339ec:
    // 0x1339ec: 0x8c620020
    ctx->pc = 0x1339ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1339f0:
    // 0x1339f0: 0x40f809
label_1339f4:
    if (ctx->pc == 0x1339F4u) {
        ctx->pc = 0x1339F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1339F8u;
        goto label_1339f8;
    }
    ctx->pc = 0x1339F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1339F8u);
        ctx->pc = 0x1339F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133490u: goto label_133490;
            case 0x133494u: goto label_133494;
            case 0x133498u: goto label_133498;
            case 0x13349Cu: goto label_13349c;
            case 0x1334A0u: goto label_1334a0;
            case 0x1334A4u: goto label_1334a4;
            case 0x1334A8u: goto label_1334a8;
            case 0x1334ACu: goto label_1334ac;
            case 0x1334B0u: goto label_1334b0;
            case 0x1334B4u: goto label_1334b4;
            case 0x1334B8u: goto label_1334b8;
            case 0x1334BCu: goto label_1334bc;
            case 0x1334C0u: goto label_1334c0;
            case 0x1334C4u: goto label_1334c4;
            case 0x1334C8u: goto label_1334c8;
            case 0x1334CCu: goto label_1334cc;
            case 0x1334D0u: goto label_1334d0;
            case 0x1334D4u: goto label_1334d4;
            case 0x1334D8u: goto label_1334d8;
            case 0x1334DCu: goto label_1334dc;
            case 0x1334E0u: goto label_1334e0;
            case 0x1334E4u: goto label_1334e4;
            case 0x1334E8u: goto label_1334e8;
            case 0x1334ECu: goto label_1334ec;
            case 0x1334F0u: goto label_1334f0;
            case 0x1334F4u: goto label_1334f4;
            case 0x1334F8u: goto label_1334f8;
            case 0x1334FCu: goto label_1334fc;
            case 0x133500u: goto label_133500;
            case 0x133504u: goto label_133504;
            case 0x133508u: goto label_133508;
            case 0x13350Cu: goto label_13350c;
            case 0x133510u: goto label_133510;
            case 0x133514u: goto label_133514;
            case 0x133518u: goto label_133518;
            case 0x13351Cu: goto label_13351c;
            case 0x133520u: goto label_133520;
            case 0x133524u: goto label_133524;
            case 0x133528u: goto label_133528;
            case 0x13352Cu: goto label_13352c;
            case 0x133530u: goto label_133530;
            case 0x133534u: goto label_133534;
            case 0x133538u: goto label_133538;
            case 0x13353Cu: goto label_13353c;
            case 0x133540u: goto label_133540;
            case 0x133544u: goto label_133544;
            case 0x133548u: goto label_133548;
            case 0x13354Cu: goto label_13354c;
            case 0x133550u: goto label_133550;
            case 0x133554u: goto label_133554;
            case 0x133558u: goto label_133558;
            case 0x13355Cu: goto label_13355c;
            case 0x133560u: goto label_133560;
            case 0x133564u: goto label_133564;
            case 0x133568u: goto label_133568;
            case 0x13356Cu: goto label_13356c;
            case 0x133570u: goto label_133570;
            case 0x133574u: goto label_133574;
            case 0x133578u: goto label_133578;
            case 0x13357Cu: goto label_13357c;
            case 0x133580u: goto label_133580;
            case 0x133584u: goto label_133584;
            case 0x133588u: goto label_133588;
            case 0x13358Cu: goto label_13358c;
            case 0x133590u: goto label_133590;
            case 0x133594u: goto label_133594;
            case 0x133598u: goto label_133598;
            case 0x13359Cu: goto label_13359c;
            case 0x1335A0u: goto label_1335a0;
            case 0x1335A4u: goto label_1335a4;
            case 0x1335A8u: goto label_1335a8;
            case 0x1335ACu: goto label_1335ac;
            case 0x1335B0u: goto label_1335b0;
            case 0x1335B4u: goto label_1335b4;
            case 0x1335B8u: goto label_1335b8;
            case 0x1335BCu: goto label_1335bc;
            case 0x1335C0u: goto label_1335c0;
            case 0x1335C4u: goto label_1335c4;
            case 0x1335C8u: goto label_1335c8;
            case 0x1335CCu: goto label_1335cc;
            case 0x1335D0u: goto label_1335d0;
            case 0x1335D4u: goto label_1335d4;
            case 0x1335D8u: goto label_1335d8;
            case 0x1335DCu: goto label_1335dc;
            case 0x1335E0u: goto label_1335e0;
            case 0x1335E4u: goto label_1335e4;
            case 0x1335E8u: goto label_1335e8;
            case 0x1335ECu: goto label_1335ec;
            case 0x1335F0u: goto label_1335f0;
            case 0x1335F4u: goto label_1335f4;
            case 0x1335F8u: goto label_1335f8;
            case 0x1335FCu: goto label_1335fc;
            case 0x133600u: goto label_133600;
            case 0x133604u: goto label_133604;
            case 0x133608u: goto label_133608;
            case 0x13360Cu: goto label_13360c;
            case 0x133610u: goto label_133610;
            case 0x133614u: goto label_133614;
            case 0x133618u: goto label_133618;
            case 0x13361Cu: goto label_13361c;
            case 0x133620u: goto label_133620;
            case 0x133624u: goto label_133624;
            case 0x133628u: goto label_133628;
            case 0x13362Cu: goto label_13362c;
            case 0x133630u: goto label_133630;
            case 0x133634u: goto label_133634;
            case 0x133638u: goto label_133638;
            case 0x13363Cu: goto label_13363c;
            case 0x133640u: goto label_133640;
            case 0x133644u: goto label_133644;
            case 0x133648u: goto label_133648;
            case 0x13364Cu: goto label_13364c;
            case 0x133650u: goto label_133650;
            case 0x133654u: goto label_133654;
            case 0x133658u: goto label_133658;
            case 0x13365Cu: goto label_13365c;
            case 0x133660u: goto label_133660;
            case 0x133664u: goto label_133664;
            case 0x133668u: goto label_133668;
            case 0x13366Cu: goto label_13366c;
            case 0x133670u: goto label_133670;
            case 0x133674u: goto label_133674;
            case 0x133678u: goto label_133678;
            case 0x13367Cu: goto label_13367c;
            case 0x133680u: goto label_133680;
            case 0x133684u: goto label_133684;
            case 0x133688u: goto label_133688;
            case 0x13368Cu: goto label_13368c;
            case 0x133690u: goto label_133690;
            case 0x133694u: goto label_133694;
            case 0x133698u: goto label_133698;
            case 0x13369Cu: goto label_13369c;
            case 0x1336A0u: goto label_1336a0;
            case 0x1336A4u: goto label_1336a4;
            case 0x1336A8u: goto label_1336a8;
            case 0x1336ACu: goto label_1336ac;
            case 0x1336B0u: goto label_1336b0;
            case 0x1336B4u: goto label_1336b4;
            case 0x1336B8u: goto label_1336b8;
            case 0x1336BCu: goto label_1336bc;
            case 0x1336C0u: goto label_1336c0;
            case 0x1336C4u: goto label_1336c4;
            case 0x1336C8u: goto label_1336c8;
            case 0x1336CCu: goto label_1336cc;
            case 0x1336D0u: goto label_1336d0;
            case 0x1336D4u: goto label_1336d4;
            case 0x1336D8u: goto label_1336d8;
            case 0x1336DCu: goto label_1336dc;
            case 0x1336E0u: goto label_1336e0;
            case 0x1336E4u: goto label_1336e4;
            case 0x1336E8u: goto label_1336e8;
            case 0x1336ECu: goto label_1336ec;
            case 0x1336F0u: goto label_1336f0;
            case 0x1336F4u: goto label_1336f4;
            case 0x1336F8u: goto label_1336f8;
            case 0x1336FCu: goto label_1336fc;
            case 0x133700u: goto label_133700;
            case 0x133704u: goto label_133704;
            case 0x133708u: goto label_133708;
            case 0x13370Cu: goto label_13370c;
            case 0x133710u: goto label_133710;
            case 0x133714u: goto label_133714;
            case 0x133718u: goto label_133718;
            case 0x13371Cu: goto label_13371c;
            case 0x133720u: goto label_133720;
            case 0x133724u: goto label_133724;
            case 0x133728u: goto label_133728;
            case 0x13372Cu: goto label_13372c;
            case 0x133730u: goto label_133730;
            case 0x133734u: goto label_133734;
            case 0x133738u: goto label_133738;
            case 0x13373Cu: goto label_13373c;
            case 0x133740u: goto label_133740;
            case 0x133744u: goto label_133744;
            case 0x133748u: goto label_133748;
            case 0x13374Cu: goto label_13374c;
            case 0x133750u: goto label_133750;
            case 0x133754u: goto label_133754;
            case 0x133758u: goto label_133758;
            case 0x13375Cu: goto label_13375c;
            case 0x133760u: goto label_133760;
            case 0x133764u: goto label_133764;
            case 0x133768u: goto label_133768;
            case 0x13376Cu: goto label_13376c;
            case 0x133770u: goto label_133770;
            case 0x133774u: goto label_133774;
            case 0x133778u: goto label_133778;
            case 0x13377Cu: goto label_13377c;
            case 0x133780u: goto label_133780;
            case 0x133784u: goto label_133784;
            case 0x133788u: goto label_133788;
            case 0x13378Cu: goto label_13378c;
            case 0x133790u: goto label_133790;
            case 0x133794u: goto label_133794;
            case 0x133798u: goto label_133798;
            case 0x13379Cu: goto label_13379c;
            case 0x1337A0u: goto label_1337a0;
            case 0x1337A4u: goto label_1337a4;
            case 0x1337A8u: goto label_1337a8;
            case 0x1337ACu: goto label_1337ac;
            case 0x1337B0u: goto label_1337b0;
            case 0x1337B4u: goto label_1337b4;
            case 0x1337B8u: goto label_1337b8;
            case 0x1337BCu: goto label_1337bc;
            case 0x1337C0u: goto label_1337c0;
            case 0x1337C4u: goto label_1337c4;
            case 0x1337C8u: goto label_1337c8;
            case 0x1337CCu: goto label_1337cc;
            case 0x1337D0u: goto label_1337d0;
            case 0x1337D4u: goto label_1337d4;
            case 0x1337D8u: goto label_1337d8;
            case 0x1337DCu: goto label_1337dc;
            case 0x1337E0u: goto label_1337e0;
            case 0x1337E4u: goto label_1337e4;
            case 0x1337E8u: goto label_1337e8;
            case 0x1337ECu: goto label_1337ec;
            case 0x1337F0u: goto label_1337f0;
            case 0x1337F4u: goto label_1337f4;
            case 0x1337F8u: goto label_1337f8;
            case 0x1337FCu: goto label_1337fc;
            case 0x133800u: goto label_133800;
            case 0x133804u: goto label_133804;
            case 0x133808u: goto label_133808;
            case 0x13380Cu: goto label_13380c;
            case 0x133810u: goto label_133810;
            case 0x133814u: goto label_133814;
            case 0x133818u: goto label_133818;
            case 0x13381Cu: goto label_13381c;
            case 0x133820u: goto label_133820;
            case 0x133824u: goto label_133824;
            case 0x133828u: goto label_133828;
            case 0x13382Cu: goto label_13382c;
            case 0x133830u: goto label_133830;
            case 0x133834u: goto label_133834;
            case 0x133838u: goto label_133838;
            case 0x13383Cu: goto label_13383c;
            case 0x133840u: goto label_133840;
            case 0x133844u: goto label_133844;
            case 0x133848u: goto label_133848;
            case 0x13384Cu: goto label_13384c;
            case 0x133850u: goto label_133850;
            case 0x133854u: goto label_133854;
            case 0x133858u: goto label_133858;
            case 0x13385Cu: goto label_13385c;
            case 0x133860u: goto label_133860;
            case 0x133864u: goto label_133864;
            case 0x133868u: goto label_133868;
            case 0x13386Cu: goto label_13386c;
            case 0x133870u: goto label_133870;
            case 0x133874u: goto label_133874;
            case 0x133878u: goto label_133878;
            case 0x13387Cu: goto label_13387c;
            case 0x133880u: goto label_133880;
            case 0x133884u: goto label_133884;
            case 0x133888u: goto label_133888;
            case 0x13388Cu: goto label_13388c;
            case 0x133890u: goto label_133890;
            case 0x133894u: goto label_133894;
            case 0x133898u: goto label_133898;
            case 0x13389Cu: goto label_13389c;
            case 0x1338A0u: goto label_1338a0;
            case 0x1338A4u: goto label_1338a4;
            case 0x1338A8u: goto label_1338a8;
            case 0x1338ACu: goto label_1338ac;
            case 0x1338B0u: goto label_1338b0;
            case 0x1338B4u: goto label_1338b4;
            case 0x1338B8u: goto label_1338b8;
            case 0x1338BCu: goto label_1338bc;
            case 0x1338C0u: goto label_1338c0;
            case 0x1338C4u: goto label_1338c4;
            case 0x1338C8u: goto label_1338c8;
            case 0x1338CCu: goto label_1338cc;
            case 0x1338D0u: goto label_1338d0;
            case 0x1338D4u: goto label_1338d4;
            case 0x1338D8u: goto label_1338d8;
            case 0x1338DCu: goto label_1338dc;
            case 0x1338E0u: goto label_1338e0;
            case 0x1338E4u: goto label_1338e4;
            case 0x1338E8u: goto label_1338e8;
            case 0x1338ECu: goto label_1338ec;
            case 0x1338F0u: goto label_1338f0;
            case 0x1338F4u: goto label_1338f4;
            case 0x1338F8u: goto label_1338f8;
            case 0x1338FCu: goto label_1338fc;
            case 0x133900u: goto label_133900;
            case 0x133904u: goto label_133904;
            case 0x133908u: goto label_133908;
            case 0x13390Cu: goto label_13390c;
            case 0x133910u: goto label_133910;
            case 0x133914u: goto label_133914;
            case 0x133918u: goto label_133918;
            case 0x13391Cu: goto label_13391c;
            case 0x133920u: goto label_133920;
            case 0x133924u: goto label_133924;
            case 0x133928u: goto label_133928;
            case 0x13392Cu: goto label_13392c;
            case 0x133930u: goto label_133930;
            case 0x133934u: goto label_133934;
            case 0x133938u: goto label_133938;
            case 0x13393Cu: goto label_13393c;
            case 0x133940u: goto label_133940;
            case 0x133944u: goto label_133944;
            case 0x133948u: goto label_133948;
            case 0x13394Cu: goto label_13394c;
            case 0x133950u: goto label_133950;
            case 0x133954u: goto label_133954;
            case 0x133958u: goto label_133958;
            case 0x13395Cu: goto label_13395c;
            case 0x133960u: goto label_133960;
            case 0x133964u: goto label_133964;
            case 0x133968u: goto label_133968;
            case 0x13396Cu: goto label_13396c;
            case 0x133970u: goto label_133970;
            case 0x133974u: goto label_133974;
            case 0x133978u: goto label_133978;
            case 0x13397Cu: goto label_13397c;
            case 0x133980u: goto label_133980;
            case 0x133984u: goto label_133984;
            case 0x133988u: goto label_133988;
            case 0x13398Cu: goto label_13398c;
            case 0x133990u: goto label_133990;
            case 0x133994u: goto label_133994;
            case 0x133998u: goto label_133998;
            case 0x13399Cu: goto label_13399c;
            case 0x1339A0u: goto label_1339a0;
            case 0x1339A4u: goto label_1339a4;
            case 0x1339A8u: goto label_1339a8;
            case 0x1339ACu: goto label_1339ac;
            case 0x1339B0u: goto label_1339b0;
            case 0x1339B4u: goto label_1339b4;
            case 0x1339B8u: goto label_1339b8;
            case 0x1339BCu: goto label_1339bc;
            case 0x1339C0u: goto label_1339c0;
            case 0x1339C4u: goto label_1339c4;
            case 0x1339C8u: goto label_1339c8;
            case 0x1339CCu: goto label_1339cc;
            case 0x1339D0u: goto label_1339d0;
            case 0x1339D4u: goto label_1339d4;
            case 0x1339D8u: goto label_1339d8;
            case 0x1339DCu: goto label_1339dc;
            case 0x1339E0u: goto label_1339e0;
            case 0x1339E4u: goto label_1339e4;
            case 0x1339E8u: goto label_1339e8;
            case 0x1339ECu: goto label_1339ec;
            case 0x1339F0u: goto label_1339f0;
            case 0x1339F4u: goto label_1339f4;
            case 0x1339F8u: goto label_1339f8;
            case 0x1339FCu: goto label_1339fc;
            case 0x133A00u: goto label_133a00;
            case 0x133A04u: goto label_133a04;
            case 0x133A08u: goto label_133a08;
            case 0x133A0Cu: goto label_133a0c;
            case 0x133A10u: goto label_133a10;
            case 0x133A14u: goto label_133a14;
            case 0x133A18u: goto label_133a18;
            case 0x133A1Cu: goto label_133a1c;
            case 0x133A20u: goto label_133a20;
            case 0x133A24u: goto label_133a24;
            case 0x133A28u: goto label_133a28;
            case 0x133A2Cu: goto label_133a2c;
            case 0x133A30u: goto label_133a30;
            case 0x133A34u: goto label_133a34;
            case 0x133A38u: goto label_133a38;
            case 0x133A3Cu: goto label_133a3c;
            case 0x133A40u: goto label_133a40;
            case 0x133A44u: goto label_133a44;
            case 0x133A48u: goto label_133a48;
            case 0x133A4Cu: goto label_133a4c;
            case 0x133A50u: goto label_133a50;
            case 0x133A54u: goto label_133a54;
            case 0x133A58u: goto label_133a58;
            case 0x133A5Cu: goto label_133a5c;
            case 0x133A60u: goto label_133a60;
            case 0x133A64u: goto label_133a64;
            case 0x133A68u: goto label_133a68;
            case 0x133A6Cu: goto label_133a6c;
            case 0x133A70u: goto label_133a70;
            case 0x133A74u: goto label_133a74;
            case 0x133A78u: goto label_133a78;
            case 0x133A7Cu: goto label_133a7c;
            case 0x133A80u: goto label_133a80;
            case 0x133A84u: goto label_133a84;
            case 0x133A88u: goto label_133a88;
            case 0x133A8Cu: goto label_133a8c;
            case 0x133A90u: goto label_133a90;
            case 0x133A94u: goto label_133a94;
            case 0x133A98u: goto label_133a98;
            case 0x133A9Cu: goto label_133a9c;
            case 0x133AA0u: goto label_133aa0;
            case 0x133AA4u: goto label_133aa4;
            case 0x133AA8u: goto label_133aa8;
            case 0x133AACu: goto label_133aac;
            case 0x133AB0u: goto label_133ab0;
            case 0x133AB4u: goto label_133ab4;
            case 0x133AB8u: goto label_133ab8;
            case 0x133ABCu: goto label_133abc;
            case 0x133AC0u: goto label_133ac0;
            case 0x133AC4u: goto label_133ac4;
            case 0x133AC8u: goto label_133ac8;
            case 0x133ACCu: goto label_133acc;
            case 0x133AD0u: goto label_133ad0;
            case 0x133AD4u: goto label_133ad4;
            case 0x133AD8u: goto label_133ad8;
            case 0x133ADCu: goto label_133adc;
            case 0x133AE0u: goto label_133ae0;
            case 0x133AE4u: goto label_133ae4;
            case 0x133AE8u: goto label_133ae8;
            case 0x133AECu: goto label_133aec;
            case 0x133AF0u: goto label_133af0;
            case 0x133AF4u: goto label_133af4;
            case 0x133AF8u: goto label_133af8;
            case 0x133AFCu: goto label_133afc;
            case 0x133B00u: goto label_133b00;
            case 0x133B04u: goto label_133b04;
            case 0x133B08u: goto label_133b08;
            case 0x133B0Cu: goto label_133b0c;
            case 0x133B10u: goto label_133b10;
            case 0x133B14u: goto label_133b14;
            case 0x133B18u: goto label_133b18;
            case 0x133B1Cu: goto label_133b1c;
            case 0x133B20u: goto label_133b20;
            case 0x133B24u: goto label_133b24;
            case 0x133B28u: goto label_133b28;
            case 0x133B2Cu: goto label_133b2c;
            case 0x133B30u: goto label_133b30;
            case 0x133B34u: goto label_133b34;
            case 0x133B38u: goto label_133b38;
            case 0x133B3Cu: goto label_133b3c;
            case 0x133B40u: goto label_133b40;
            case 0x133B44u: goto label_133b44;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1339F8u; }
            if (ctx->pc != 0x1339F8u) { return; }
        }
    }
    ctx->pc = 0x1339F8u;
label_1339f8:
    // 0x1339f8: 0x240202d
    ctx->pc = 0x1339f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1339fc:
    // 0x1339fc: 0xc04b5d6
label_133a00:
    if (ctx->pc == 0x133A00u) {
        ctx->pc = 0x133A00u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133A04u;
        goto label_133a04;
    }
    ctx->pc = 0x1339FCu;
    SET_GPR_U32(ctx, 31, 0x133A04u);
    ctx->pc = 0x133A00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D758u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D758_0x12d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133A04u; }
    }
    if (ctx->pc != 0x133A04u) { return; }
    ctx->pc = 0x133A04u;
label_133a04:
    // 0x133a04: 0x2932823
    ctx->pc = 0x133a04u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_133a08:
    // 0x133a08: 0xae250090
    ctx->pc = 0x133a08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 5));
label_133a0c:
    // 0x133a0c: 0xc04b5d2
label_133a10:
    if (ctx->pc == 0x133A10u) {
        ctx->pc = 0x133A10u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133A14u;
        goto label_133a14;
    }
    ctx->pc = 0x133A0Cu;
    SET_GPR_U32(ctx, 31, 0x133A14u);
    ctx->pc = 0x133A10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D748u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D748_0x12d748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133A14u; }
    }
    if (ctx->pc != 0x133A14u) { return; }
    ctx->pc = 0x133A14u;
label_133a14:
    // 0x133a14: 0x240202d
    ctx->pc = 0x133a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_133a18:
    // 0x133a18: 0xc04b5da
label_133a1c:
    if (ctx->pc == 0x133A1Cu) {
        ctx->pc = 0x133A1Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133A20u;
        goto label_133a20;
    }
    ctx->pc = 0x133A18u;
    SET_GPR_U32(ctx, 31, 0x133A20u);
    ctx->pc = 0x133A1Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D768u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D768_0x12d768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133A20u; }
    }
    if (ctx->pc != 0x133A20u) { return; }
    ctx->pc = 0x133A20u;
label_133a20:
    // 0x133a20: 0x240202d
    ctx->pc = 0x133a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_133a24:
    // 0x133a24: 0xc04b5ba
label_133a28:
    if (ctx->pc == 0x133A28u) {
        ctx->pc = 0x133A28u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133A2Cu;
        goto label_133a2c;
    }
    ctx->pc = 0x133A24u;
    SET_GPR_U32(ctx, 31, 0x133A2Cu);
    ctx->pc = 0x133A28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D6E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D6E8_0x12d6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133A2Cu; }
    }
    if (ctx->pc != 0x133A2Cu) { return; }
    ctx->pc = 0x133A2Cu;
label_133a2c:
    // 0x133a2c: 0x82230002
    ctx->pc = 0x133a2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_133a30:
    // 0x133a30: 0x24020002
    ctx->pc = 0x133a30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_133a34:
    // 0x133a34: 0x14620012
label_133a38:
    if (ctx->pc == 0x133A38u) {
        ctx->pc = 0x133A38u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133A3Cu;
        goto label_133a3c;
    }
    ctx->pc = 0x133A34u;
    {
        const bool branch_taken_0x133a34 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x133A38u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x133a34) {
            ctx->pc = 0x133A80u;
            goto label_133a80;
        }
    }
    ctx->pc = 0x133A3Cu;
label_133a3c:
    // 0x133a3c: 0x8e020000
    ctx->pc = 0x133a3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_133a40:
    // 0x133a40: 0x8c430014
    ctx->pc = 0x133a40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_133a44:
    // 0x133a44: 0x60f809
label_133a48:
    if (ctx->pc == 0x133A48u) {
        ctx->pc = 0x133A4Cu;
        goto label_133a4c;
    }
    ctx->pc = 0x133A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x133A4Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133490u: goto label_133490;
            case 0x133494u: goto label_133494;
            case 0x133498u: goto label_133498;
            case 0x13349Cu: goto label_13349c;
            case 0x1334A0u: goto label_1334a0;
            case 0x1334A4u: goto label_1334a4;
            case 0x1334A8u: goto label_1334a8;
            case 0x1334ACu: goto label_1334ac;
            case 0x1334B0u: goto label_1334b0;
            case 0x1334B4u: goto label_1334b4;
            case 0x1334B8u: goto label_1334b8;
            case 0x1334BCu: goto label_1334bc;
            case 0x1334C0u: goto label_1334c0;
            case 0x1334C4u: goto label_1334c4;
            case 0x1334C8u: goto label_1334c8;
            case 0x1334CCu: goto label_1334cc;
            case 0x1334D0u: goto label_1334d0;
            case 0x1334D4u: goto label_1334d4;
            case 0x1334D8u: goto label_1334d8;
            case 0x1334DCu: goto label_1334dc;
            case 0x1334E0u: goto label_1334e0;
            case 0x1334E4u: goto label_1334e4;
            case 0x1334E8u: goto label_1334e8;
            case 0x1334ECu: goto label_1334ec;
            case 0x1334F0u: goto label_1334f0;
            case 0x1334F4u: goto label_1334f4;
            case 0x1334F8u: goto label_1334f8;
            case 0x1334FCu: goto label_1334fc;
            case 0x133500u: goto label_133500;
            case 0x133504u: goto label_133504;
            case 0x133508u: goto label_133508;
            case 0x13350Cu: goto label_13350c;
            case 0x133510u: goto label_133510;
            case 0x133514u: goto label_133514;
            case 0x133518u: goto label_133518;
            case 0x13351Cu: goto label_13351c;
            case 0x133520u: goto label_133520;
            case 0x133524u: goto label_133524;
            case 0x133528u: goto label_133528;
            case 0x13352Cu: goto label_13352c;
            case 0x133530u: goto label_133530;
            case 0x133534u: goto label_133534;
            case 0x133538u: goto label_133538;
            case 0x13353Cu: goto label_13353c;
            case 0x133540u: goto label_133540;
            case 0x133544u: goto label_133544;
            case 0x133548u: goto label_133548;
            case 0x13354Cu: goto label_13354c;
            case 0x133550u: goto label_133550;
            case 0x133554u: goto label_133554;
            case 0x133558u: goto label_133558;
            case 0x13355Cu: goto label_13355c;
            case 0x133560u: goto label_133560;
            case 0x133564u: goto label_133564;
            case 0x133568u: goto label_133568;
            case 0x13356Cu: goto label_13356c;
            case 0x133570u: goto label_133570;
            case 0x133574u: goto label_133574;
            case 0x133578u: goto label_133578;
            case 0x13357Cu: goto label_13357c;
            case 0x133580u: goto label_133580;
            case 0x133584u: goto label_133584;
            case 0x133588u: goto label_133588;
            case 0x13358Cu: goto label_13358c;
            case 0x133590u: goto label_133590;
            case 0x133594u: goto label_133594;
            case 0x133598u: goto label_133598;
            case 0x13359Cu: goto label_13359c;
            case 0x1335A0u: goto label_1335a0;
            case 0x1335A4u: goto label_1335a4;
            case 0x1335A8u: goto label_1335a8;
            case 0x1335ACu: goto label_1335ac;
            case 0x1335B0u: goto label_1335b0;
            case 0x1335B4u: goto label_1335b4;
            case 0x1335B8u: goto label_1335b8;
            case 0x1335BCu: goto label_1335bc;
            case 0x1335C0u: goto label_1335c0;
            case 0x1335C4u: goto label_1335c4;
            case 0x1335C8u: goto label_1335c8;
            case 0x1335CCu: goto label_1335cc;
            case 0x1335D0u: goto label_1335d0;
            case 0x1335D4u: goto label_1335d4;
            case 0x1335D8u: goto label_1335d8;
            case 0x1335DCu: goto label_1335dc;
            case 0x1335E0u: goto label_1335e0;
            case 0x1335E4u: goto label_1335e4;
            case 0x1335E8u: goto label_1335e8;
            case 0x1335ECu: goto label_1335ec;
            case 0x1335F0u: goto label_1335f0;
            case 0x1335F4u: goto label_1335f4;
            case 0x1335F8u: goto label_1335f8;
            case 0x1335FCu: goto label_1335fc;
            case 0x133600u: goto label_133600;
            case 0x133604u: goto label_133604;
            case 0x133608u: goto label_133608;
            case 0x13360Cu: goto label_13360c;
            case 0x133610u: goto label_133610;
            case 0x133614u: goto label_133614;
            case 0x133618u: goto label_133618;
            case 0x13361Cu: goto label_13361c;
            case 0x133620u: goto label_133620;
            case 0x133624u: goto label_133624;
            case 0x133628u: goto label_133628;
            case 0x13362Cu: goto label_13362c;
            case 0x133630u: goto label_133630;
            case 0x133634u: goto label_133634;
            case 0x133638u: goto label_133638;
            case 0x13363Cu: goto label_13363c;
            case 0x133640u: goto label_133640;
            case 0x133644u: goto label_133644;
            case 0x133648u: goto label_133648;
            case 0x13364Cu: goto label_13364c;
            case 0x133650u: goto label_133650;
            case 0x133654u: goto label_133654;
            case 0x133658u: goto label_133658;
            case 0x13365Cu: goto label_13365c;
            case 0x133660u: goto label_133660;
            case 0x133664u: goto label_133664;
            case 0x133668u: goto label_133668;
            case 0x13366Cu: goto label_13366c;
            case 0x133670u: goto label_133670;
            case 0x133674u: goto label_133674;
            case 0x133678u: goto label_133678;
            case 0x13367Cu: goto label_13367c;
            case 0x133680u: goto label_133680;
            case 0x133684u: goto label_133684;
            case 0x133688u: goto label_133688;
            case 0x13368Cu: goto label_13368c;
            case 0x133690u: goto label_133690;
            case 0x133694u: goto label_133694;
            case 0x133698u: goto label_133698;
            case 0x13369Cu: goto label_13369c;
            case 0x1336A0u: goto label_1336a0;
            case 0x1336A4u: goto label_1336a4;
            case 0x1336A8u: goto label_1336a8;
            case 0x1336ACu: goto label_1336ac;
            case 0x1336B0u: goto label_1336b0;
            case 0x1336B4u: goto label_1336b4;
            case 0x1336B8u: goto label_1336b8;
            case 0x1336BCu: goto label_1336bc;
            case 0x1336C0u: goto label_1336c0;
            case 0x1336C4u: goto label_1336c4;
            case 0x1336C8u: goto label_1336c8;
            case 0x1336CCu: goto label_1336cc;
            case 0x1336D0u: goto label_1336d0;
            case 0x1336D4u: goto label_1336d4;
            case 0x1336D8u: goto label_1336d8;
            case 0x1336DCu: goto label_1336dc;
            case 0x1336E0u: goto label_1336e0;
            case 0x1336E4u: goto label_1336e4;
            case 0x1336E8u: goto label_1336e8;
            case 0x1336ECu: goto label_1336ec;
            case 0x1336F0u: goto label_1336f0;
            case 0x1336F4u: goto label_1336f4;
            case 0x1336F8u: goto label_1336f8;
            case 0x1336FCu: goto label_1336fc;
            case 0x133700u: goto label_133700;
            case 0x133704u: goto label_133704;
            case 0x133708u: goto label_133708;
            case 0x13370Cu: goto label_13370c;
            case 0x133710u: goto label_133710;
            case 0x133714u: goto label_133714;
            case 0x133718u: goto label_133718;
            case 0x13371Cu: goto label_13371c;
            case 0x133720u: goto label_133720;
            case 0x133724u: goto label_133724;
            case 0x133728u: goto label_133728;
            case 0x13372Cu: goto label_13372c;
            case 0x133730u: goto label_133730;
            case 0x133734u: goto label_133734;
            case 0x133738u: goto label_133738;
            case 0x13373Cu: goto label_13373c;
            case 0x133740u: goto label_133740;
            case 0x133744u: goto label_133744;
            case 0x133748u: goto label_133748;
            case 0x13374Cu: goto label_13374c;
            case 0x133750u: goto label_133750;
            case 0x133754u: goto label_133754;
            case 0x133758u: goto label_133758;
            case 0x13375Cu: goto label_13375c;
            case 0x133760u: goto label_133760;
            case 0x133764u: goto label_133764;
            case 0x133768u: goto label_133768;
            case 0x13376Cu: goto label_13376c;
            case 0x133770u: goto label_133770;
            case 0x133774u: goto label_133774;
            case 0x133778u: goto label_133778;
            case 0x13377Cu: goto label_13377c;
            case 0x133780u: goto label_133780;
            case 0x133784u: goto label_133784;
            case 0x133788u: goto label_133788;
            case 0x13378Cu: goto label_13378c;
            case 0x133790u: goto label_133790;
            case 0x133794u: goto label_133794;
            case 0x133798u: goto label_133798;
            case 0x13379Cu: goto label_13379c;
            case 0x1337A0u: goto label_1337a0;
            case 0x1337A4u: goto label_1337a4;
            case 0x1337A8u: goto label_1337a8;
            case 0x1337ACu: goto label_1337ac;
            case 0x1337B0u: goto label_1337b0;
            case 0x1337B4u: goto label_1337b4;
            case 0x1337B8u: goto label_1337b8;
            case 0x1337BCu: goto label_1337bc;
            case 0x1337C0u: goto label_1337c0;
            case 0x1337C4u: goto label_1337c4;
            case 0x1337C8u: goto label_1337c8;
            case 0x1337CCu: goto label_1337cc;
            case 0x1337D0u: goto label_1337d0;
            case 0x1337D4u: goto label_1337d4;
            case 0x1337D8u: goto label_1337d8;
            case 0x1337DCu: goto label_1337dc;
            case 0x1337E0u: goto label_1337e0;
            case 0x1337E4u: goto label_1337e4;
            case 0x1337E8u: goto label_1337e8;
            case 0x1337ECu: goto label_1337ec;
            case 0x1337F0u: goto label_1337f0;
            case 0x1337F4u: goto label_1337f4;
            case 0x1337F8u: goto label_1337f8;
            case 0x1337FCu: goto label_1337fc;
            case 0x133800u: goto label_133800;
            case 0x133804u: goto label_133804;
            case 0x133808u: goto label_133808;
            case 0x13380Cu: goto label_13380c;
            case 0x133810u: goto label_133810;
            case 0x133814u: goto label_133814;
            case 0x133818u: goto label_133818;
            case 0x13381Cu: goto label_13381c;
            case 0x133820u: goto label_133820;
            case 0x133824u: goto label_133824;
            case 0x133828u: goto label_133828;
            case 0x13382Cu: goto label_13382c;
            case 0x133830u: goto label_133830;
            case 0x133834u: goto label_133834;
            case 0x133838u: goto label_133838;
            case 0x13383Cu: goto label_13383c;
            case 0x133840u: goto label_133840;
            case 0x133844u: goto label_133844;
            case 0x133848u: goto label_133848;
            case 0x13384Cu: goto label_13384c;
            case 0x133850u: goto label_133850;
            case 0x133854u: goto label_133854;
            case 0x133858u: goto label_133858;
            case 0x13385Cu: goto label_13385c;
            case 0x133860u: goto label_133860;
            case 0x133864u: goto label_133864;
            case 0x133868u: goto label_133868;
            case 0x13386Cu: goto label_13386c;
            case 0x133870u: goto label_133870;
            case 0x133874u: goto label_133874;
            case 0x133878u: goto label_133878;
            case 0x13387Cu: goto label_13387c;
            case 0x133880u: goto label_133880;
            case 0x133884u: goto label_133884;
            case 0x133888u: goto label_133888;
            case 0x13388Cu: goto label_13388c;
            case 0x133890u: goto label_133890;
            case 0x133894u: goto label_133894;
            case 0x133898u: goto label_133898;
            case 0x13389Cu: goto label_13389c;
            case 0x1338A0u: goto label_1338a0;
            case 0x1338A4u: goto label_1338a4;
            case 0x1338A8u: goto label_1338a8;
            case 0x1338ACu: goto label_1338ac;
            case 0x1338B0u: goto label_1338b0;
            case 0x1338B4u: goto label_1338b4;
            case 0x1338B8u: goto label_1338b8;
            case 0x1338BCu: goto label_1338bc;
            case 0x1338C0u: goto label_1338c0;
            case 0x1338C4u: goto label_1338c4;
            case 0x1338C8u: goto label_1338c8;
            case 0x1338CCu: goto label_1338cc;
            case 0x1338D0u: goto label_1338d0;
            case 0x1338D4u: goto label_1338d4;
            case 0x1338D8u: goto label_1338d8;
            case 0x1338DCu: goto label_1338dc;
            case 0x1338E0u: goto label_1338e0;
            case 0x1338E4u: goto label_1338e4;
            case 0x1338E8u: goto label_1338e8;
            case 0x1338ECu: goto label_1338ec;
            case 0x1338F0u: goto label_1338f0;
            case 0x1338F4u: goto label_1338f4;
            case 0x1338F8u: goto label_1338f8;
            case 0x1338FCu: goto label_1338fc;
            case 0x133900u: goto label_133900;
            case 0x133904u: goto label_133904;
            case 0x133908u: goto label_133908;
            case 0x13390Cu: goto label_13390c;
            case 0x133910u: goto label_133910;
            case 0x133914u: goto label_133914;
            case 0x133918u: goto label_133918;
            case 0x13391Cu: goto label_13391c;
            case 0x133920u: goto label_133920;
            case 0x133924u: goto label_133924;
            case 0x133928u: goto label_133928;
            case 0x13392Cu: goto label_13392c;
            case 0x133930u: goto label_133930;
            case 0x133934u: goto label_133934;
            case 0x133938u: goto label_133938;
            case 0x13393Cu: goto label_13393c;
            case 0x133940u: goto label_133940;
            case 0x133944u: goto label_133944;
            case 0x133948u: goto label_133948;
            case 0x13394Cu: goto label_13394c;
            case 0x133950u: goto label_133950;
            case 0x133954u: goto label_133954;
            case 0x133958u: goto label_133958;
            case 0x13395Cu: goto label_13395c;
            case 0x133960u: goto label_133960;
            case 0x133964u: goto label_133964;
            case 0x133968u: goto label_133968;
            case 0x13396Cu: goto label_13396c;
            case 0x133970u: goto label_133970;
            case 0x133974u: goto label_133974;
            case 0x133978u: goto label_133978;
            case 0x13397Cu: goto label_13397c;
            case 0x133980u: goto label_133980;
            case 0x133984u: goto label_133984;
            case 0x133988u: goto label_133988;
            case 0x13398Cu: goto label_13398c;
            case 0x133990u: goto label_133990;
            case 0x133994u: goto label_133994;
            case 0x133998u: goto label_133998;
            case 0x13399Cu: goto label_13399c;
            case 0x1339A0u: goto label_1339a0;
            case 0x1339A4u: goto label_1339a4;
            case 0x1339A8u: goto label_1339a8;
            case 0x1339ACu: goto label_1339ac;
            case 0x1339B0u: goto label_1339b0;
            case 0x1339B4u: goto label_1339b4;
            case 0x1339B8u: goto label_1339b8;
            case 0x1339BCu: goto label_1339bc;
            case 0x1339C0u: goto label_1339c0;
            case 0x1339C4u: goto label_1339c4;
            case 0x1339C8u: goto label_1339c8;
            case 0x1339CCu: goto label_1339cc;
            case 0x1339D0u: goto label_1339d0;
            case 0x1339D4u: goto label_1339d4;
            case 0x1339D8u: goto label_1339d8;
            case 0x1339DCu: goto label_1339dc;
            case 0x1339E0u: goto label_1339e0;
            case 0x1339E4u: goto label_1339e4;
            case 0x1339E8u: goto label_1339e8;
            case 0x1339ECu: goto label_1339ec;
            case 0x1339F0u: goto label_1339f0;
            case 0x1339F4u: goto label_1339f4;
            case 0x1339F8u: goto label_1339f8;
            case 0x1339FCu: goto label_1339fc;
            case 0x133A00u: goto label_133a00;
            case 0x133A04u: goto label_133a04;
            case 0x133A08u: goto label_133a08;
            case 0x133A0Cu: goto label_133a0c;
            case 0x133A10u: goto label_133a10;
            case 0x133A14u: goto label_133a14;
            case 0x133A18u: goto label_133a18;
            case 0x133A1Cu: goto label_133a1c;
            case 0x133A20u: goto label_133a20;
            case 0x133A24u: goto label_133a24;
            case 0x133A28u: goto label_133a28;
            case 0x133A2Cu: goto label_133a2c;
            case 0x133A30u: goto label_133a30;
            case 0x133A34u: goto label_133a34;
            case 0x133A38u: goto label_133a38;
            case 0x133A3Cu: goto label_133a3c;
            case 0x133A40u: goto label_133a40;
            case 0x133A44u: goto label_133a44;
            case 0x133A48u: goto label_133a48;
            case 0x133A4Cu: goto label_133a4c;
            case 0x133A50u: goto label_133a50;
            case 0x133A54u: goto label_133a54;
            case 0x133A58u: goto label_133a58;
            case 0x133A5Cu: goto label_133a5c;
            case 0x133A60u: goto label_133a60;
            case 0x133A64u: goto label_133a64;
            case 0x133A68u: goto label_133a68;
            case 0x133A6Cu: goto label_133a6c;
            case 0x133A70u: goto label_133a70;
            case 0x133A74u: goto label_133a74;
            case 0x133A78u: goto label_133a78;
            case 0x133A7Cu: goto label_133a7c;
            case 0x133A80u: goto label_133a80;
            case 0x133A84u: goto label_133a84;
            case 0x133A88u: goto label_133a88;
            case 0x133A8Cu: goto label_133a8c;
            case 0x133A90u: goto label_133a90;
            case 0x133A94u: goto label_133a94;
            case 0x133A98u: goto label_133a98;
            case 0x133A9Cu: goto label_133a9c;
            case 0x133AA0u: goto label_133aa0;
            case 0x133AA4u: goto label_133aa4;
            case 0x133AA8u: goto label_133aa8;
            case 0x133AACu: goto label_133aac;
            case 0x133AB0u: goto label_133ab0;
            case 0x133AB4u: goto label_133ab4;
            case 0x133AB8u: goto label_133ab8;
            case 0x133ABCu: goto label_133abc;
            case 0x133AC0u: goto label_133ac0;
            case 0x133AC4u: goto label_133ac4;
            case 0x133AC8u: goto label_133ac8;
            case 0x133ACCu: goto label_133acc;
            case 0x133AD0u: goto label_133ad0;
            case 0x133AD4u: goto label_133ad4;
            case 0x133AD8u: goto label_133ad8;
            case 0x133ADCu: goto label_133adc;
            case 0x133AE0u: goto label_133ae0;
            case 0x133AE4u: goto label_133ae4;
            case 0x133AE8u: goto label_133ae8;
            case 0x133AECu: goto label_133aec;
            case 0x133AF0u: goto label_133af0;
            case 0x133AF4u: goto label_133af4;
            case 0x133AF8u: goto label_133af8;
            case 0x133AFCu: goto label_133afc;
            case 0x133B00u: goto label_133b00;
            case 0x133B04u: goto label_133b04;
            case 0x133B08u: goto label_133b08;
            case 0x133B0Cu: goto label_133b0c;
            case 0x133B10u: goto label_133b10;
            case 0x133B14u: goto label_133b14;
            case 0x133B18u: goto label_133b18;
            case 0x133B1Cu: goto label_133b1c;
            case 0x133B20u: goto label_133b20;
            case 0x133B24u: goto label_133b24;
            case 0x133B28u: goto label_133b28;
            case 0x133B2Cu: goto label_133b2c;
            case 0x133B30u: goto label_133b30;
            case 0x133B34u: goto label_133b34;
            case 0x133B38u: goto label_133b38;
            case 0x133B3Cu: goto label_133b3c;
            case 0x133B40u: goto label_133b40;
            case 0x133B44u: goto label_133b44;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133A4Cu; }
            if (ctx->pc != 0x133A4Cu) { return; }
        }
    }
    ctx->pc = 0x133A4Cu;
label_133a4c:
    // 0x133a4c: 0x8e020000
    ctx->pc = 0x133a4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_133a50:
    // 0x133a50: 0x2a0302d
    ctx->pc = 0x133a50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_133a54:
    // 0x133a54: 0x200202d
    ctx->pc = 0x133a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133a58:
    // 0x133a58: 0x8c430018
    ctx->pc = 0x133a58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_133a5c:
    // 0x133a5c: 0x24050001
    ctx->pc = 0x133a5cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_133a60:
    // 0x133a60: 0x60f809
label_133a64:
    if (ctx->pc == 0x133A64u) {
        ctx->pc = 0x133A64u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133A68u;
        goto label_133a68;
    }
    ctx->pc = 0x133A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x133A68u);
        ctx->pc = 0x133A64u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133490u: goto label_133490;
            case 0x133494u: goto label_133494;
            case 0x133498u: goto label_133498;
            case 0x13349Cu: goto label_13349c;
            case 0x1334A0u: goto label_1334a0;
            case 0x1334A4u: goto label_1334a4;
            case 0x1334A8u: goto label_1334a8;
            case 0x1334ACu: goto label_1334ac;
            case 0x1334B0u: goto label_1334b0;
            case 0x1334B4u: goto label_1334b4;
            case 0x1334B8u: goto label_1334b8;
            case 0x1334BCu: goto label_1334bc;
            case 0x1334C0u: goto label_1334c0;
            case 0x1334C4u: goto label_1334c4;
            case 0x1334C8u: goto label_1334c8;
            case 0x1334CCu: goto label_1334cc;
            case 0x1334D0u: goto label_1334d0;
            case 0x1334D4u: goto label_1334d4;
            case 0x1334D8u: goto label_1334d8;
            case 0x1334DCu: goto label_1334dc;
            case 0x1334E0u: goto label_1334e0;
            case 0x1334E4u: goto label_1334e4;
            case 0x1334E8u: goto label_1334e8;
            case 0x1334ECu: goto label_1334ec;
            case 0x1334F0u: goto label_1334f0;
            case 0x1334F4u: goto label_1334f4;
            case 0x1334F8u: goto label_1334f8;
            case 0x1334FCu: goto label_1334fc;
            case 0x133500u: goto label_133500;
            case 0x133504u: goto label_133504;
            case 0x133508u: goto label_133508;
            case 0x13350Cu: goto label_13350c;
            case 0x133510u: goto label_133510;
            case 0x133514u: goto label_133514;
            case 0x133518u: goto label_133518;
            case 0x13351Cu: goto label_13351c;
            case 0x133520u: goto label_133520;
            case 0x133524u: goto label_133524;
            case 0x133528u: goto label_133528;
            case 0x13352Cu: goto label_13352c;
            case 0x133530u: goto label_133530;
            case 0x133534u: goto label_133534;
            case 0x133538u: goto label_133538;
            case 0x13353Cu: goto label_13353c;
            case 0x133540u: goto label_133540;
            case 0x133544u: goto label_133544;
            case 0x133548u: goto label_133548;
            case 0x13354Cu: goto label_13354c;
            case 0x133550u: goto label_133550;
            case 0x133554u: goto label_133554;
            case 0x133558u: goto label_133558;
            case 0x13355Cu: goto label_13355c;
            case 0x133560u: goto label_133560;
            case 0x133564u: goto label_133564;
            case 0x133568u: goto label_133568;
            case 0x13356Cu: goto label_13356c;
            case 0x133570u: goto label_133570;
            case 0x133574u: goto label_133574;
            case 0x133578u: goto label_133578;
            case 0x13357Cu: goto label_13357c;
            case 0x133580u: goto label_133580;
            case 0x133584u: goto label_133584;
            case 0x133588u: goto label_133588;
            case 0x13358Cu: goto label_13358c;
            case 0x133590u: goto label_133590;
            case 0x133594u: goto label_133594;
            case 0x133598u: goto label_133598;
            case 0x13359Cu: goto label_13359c;
            case 0x1335A0u: goto label_1335a0;
            case 0x1335A4u: goto label_1335a4;
            case 0x1335A8u: goto label_1335a8;
            case 0x1335ACu: goto label_1335ac;
            case 0x1335B0u: goto label_1335b0;
            case 0x1335B4u: goto label_1335b4;
            case 0x1335B8u: goto label_1335b8;
            case 0x1335BCu: goto label_1335bc;
            case 0x1335C0u: goto label_1335c0;
            case 0x1335C4u: goto label_1335c4;
            case 0x1335C8u: goto label_1335c8;
            case 0x1335CCu: goto label_1335cc;
            case 0x1335D0u: goto label_1335d0;
            case 0x1335D4u: goto label_1335d4;
            case 0x1335D8u: goto label_1335d8;
            case 0x1335DCu: goto label_1335dc;
            case 0x1335E0u: goto label_1335e0;
            case 0x1335E4u: goto label_1335e4;
            case 0x1335E8u: goto label_1335e8;
            case 0x1335ECu: goto label_1335ec;
            case 0x1335F0u: goto label_1335f0;
            case 0x1335F4u: goto label_1335f4;
            case 0x1335F8u: goto label_1335f8;
            case 0x1335FCu: goto label_1335fc;
            case 0x133600u: goto label_133600;
            case 0x133604u: goto label_133604;
            case 0x133608u: goto label_133608;
            case 0x13360Cu: goto label_13360c;
            case 0x133610u: goto label_133610;
            case 0x133614u: goto label_133614;
            case 0x133618u: goto label_133618;
            case 0x13361Cu: goto label_13361c;
            case 0x133620u: goto label_133620;
            case 0x133624u: goto label_133624;
            case 0x133628u: goto label_133628;
            case 0x13362Cu: goto label_13362c;
            case 0x133630u: goto label_133630;
            case 0x133634u: goto label_133634;
            case 0x133638u: goto label_133638;
            case 0x13363Cu: goto label_13363c;
            case 0x133640u: goto label_133640;
            case 0x133644u: goto label_133644;
            case 0x133648u: goto label_133648;
            case 0x13364Cu: goto label_13364c;
            case 0x133650u: goto label_133650;
            case 0x133654u: goto label_133654;
            case 0x133658u: goto label_133658;
            case 0x13365Cu: goto label_13365c;
            case 0x133660u: goto label_133660;
            case 0x133664u: goto label_133664;
            case 0x133668u: goto label_133668;
            case 0x13366Cu: goto label_13366c;
            case 0x133670u: goto label_133670;
            case 0x133674u: goto label_133674;
            case 0x133678u: goto label_133678;
            case 0x13367Cu: goto label_13367c;
            case 0x133680u: goto label_133680;
            case 0x133684u: goto label_133684;
            case 0x133688u: goto label_133688;
            case 0x13368Cu: goto label_13368c;
            case 0x133690u: goto label_133690;
            case 0x133694u: goto label_133694;
            case 0x133698u: goto label_133698;
            case 0x13369Cu: goto label_13369c;
            case 0x1336A0u: goto label_1336a0;
            case 0x1336A4u: goto label_1336a4;
            case 0x1336A8u: goto label_1336a8;
            case 0x1336ACu: goto label_1336ac;
            case 0x1336B0u: goto label_1336b0;
            case 0x1336B4u: goto label_1336b4;
            case 0x1336B8u: goto label_1336b8;
            case 0x1336BCu: goto label_1336bc;
            case 0x1336C0u: goto label_1336c0;
            case 0x1336C4u: goto label_1336c4;
            case 0x1336C8u: goto label_1336c8;
            case 0x1336CCu: goto label_1336cc;
            case 0x1336D0u: goto label_1336d0;
            case 0x1336D4u: goto label_1336d4;
            case 0x1336D8u: goto label_1336d8;
            case 0x1336DCu: goto label_1336dc;
            case 0x1336E0u: goto label_1336e0;
            case 0x1336E4u: goto label_1336e4;
            case 0x1336E8u: goto label_1336e8;
            case 0x1336ECu: goto label_1336ec;
            case 0x1336F0u: goto label_1336f0;
            case 0x1336F4u: goto label_1336f4;
            case 0x1336F8u: goto label_1336f8;
            case 0x1336FCu: goto label_1336fc;
            case 0x133700u: goto label_133700;
            case 0x133704u: goto label_133704;
            case 0x133708u: goto label_133708;
            case 0x13370Cu: goto label_13370c;
            case 0x133710u: goto label_133710;
            case 0x133714u: goto label_133714;
            case 0x133718u: goto label_133718;
            case 0x13371Cu: goto label_13371c;
            case 0x133720u: goto label_133720;
            case 0x133724u: goto label_133724;
            case 0x133728u: goto label_133728;
            case 0x13372Cu: goto label_13372c;
            case 0x133730u: goto label_133730;
            case 0x133734u: goto label_133734;
            case 0x133738u: goto label_133738;
            case 0x13373Cu: goto label_13373c;
            case 0x133740u: goto label_133740;
            case 0x133744u: goto label_133744;
            case 0x133748u: goto label_133748;
            case 0x13374Cu: goto label_13374c;
            case 0x133750u: goto label_133750;
            case 0x133754u: goto label_133754;
            case 0x133758u: goto label_133758;
            case 0x13375Cu: goto label_13375c;
            case 0x133760u: goto label_133760;
            case 0x133764u: goto label_133764;
            case 0x133768u: goto label_133768;
            case 0x13376Cu: goto label_13376c;
            case 0x133770u: goto label_133770;
            case 0x133774u: goto label_133774;
            case 0x133778u: goto label_133778;
            case 0x13377Cu: goto label_13377c;
            case 0x133780u: goto label_133780;
            case 0x133784u: goto label_133784;
            case 0x133788u: goto label_133788;
            case 0x13378Cu: goto label_13378c;
            case 0x133790u: goto label_133790;
            case 0x133794u: goto label_133794;
            case 0x133798u: goto label_133798;
            case 0x13379Cu: goto label_13379c;
            case 0x1337A0u: goto label_1337a0;
            case 0x1337A4u: goto label_1337a4;
            case 0x1337A8u: goto label_1337a8;
            case 0x1337ACu: goto label_1337ac;
            case 0x1337B0u: goto label_1337b0;
            case 0x1337B4u: goto label_1337b4;
            case 0x1337B8u: goto label_1337b8;
            case 0x1337BCu: goto label_1337bc;
            case 0x1337C0u: goto label_1337c0;
            case 0x1337C4u: goto label_1337c4;
            case 0x1337C8u: goto label_1337c8;
            case 0x1337CCu: goto label_1337cc;
            case 0x1337D0u: goto label_1337d0;
            case 0x1337D4u: goto label_1337d4;
            case 0x1337D8u: goto label_1337d8;
            case 0x1337DCu: goto label_1337dc;
            case 0x1337E0u: goto label_1337e0;
            case 0x1337E4u: goto label_1337e4;
            case 0x1337E8u: goto label_1337e8;
            case 0x1337ECu: goto label_1337ec;
            case 0x1337F0u: goto label_1337f0;
            case 0x1337F4u: goto label_1337f4;
            case 0x1337F8u: goto label_1337f8;
            case 0x1337FCu: goto label_1337fc;
            case 0x133800u: goto label_133800;
            case 0x133804u: goto label_133804;
            case 0x133808u: goto label_133808;
            case 0x13380Cu: goto label_13380c;
            case 0x133810u: goto label_133810;
            case 0x133814u: goto label_133814;
            case 0x133818u: goto label_133818;
            case 0x13381Cu: goto label_13381c;
            case 0x133820u: goto label_133820;
            case 0x133824u: goto label_133824;
            case 0x133828u: goto label_133828;
            case 0x13382Cu: goto label_13382c;
            case 0x133830u: goto label_133830;
            case 0x133834u: goto label_133834;
            case 0x133838u: goto label_133838;
            case 0x13383Cu: goto label_13383c;
            case 0x133840u: goto label_133840;
            case 0x133844u: goto label_133844;
            case 0x133848u: goto label_133848;
            case 0x13384Cu: goto label_13384c;
            case 0x133850u: goto label_133850;
            case 0x133854u: goto label_133854;
            case 0x133858u: goto label_133858;
            case 0x13385Cu: goto label_13385c;
            case 0x133860u: goto label_133860;
            case 0x133864u: goto label_133864;
            case 0x133868u: goto label_133868;
            case 0x13386Cu: goto label_13386c;
            case 0x133870u: goto label_133870;
            case 0x133874u: goto label_133874;
            case 0x133878u: goto label_133878;
            case 0x13387Cu: goto label_13387c;
            case 0x133880u: goto label_133880;
            case 0x133884u: goto label_133884;
            case 0x133888u: goto label_133888;
            case 0x13388Cu: goto label_13388c;
            case 0x133890u: goto label_133890;
            case 0x133894u: goto label_133894;
            case 0x133898u: goto label_133898;
            case 0x13389Cu: goto label_13389c;
            case 0x1338A0u: goto label_1338a0;
            case 0x1338A4u: goto label_1338a4;
            case 0x1338A8u: goto label_1338a8;
            case 0x1338ACu: goto label_1338ac;
            case 0x1338B0u: goto label_1338b0;
            case 0x1338B4u: goto label_1338b4;
            case 0x1338B8u: goto label_1338b8;
            case 0x1338BCu: goto label_1338bc;
            case 0x1338C0u: goto label_1338c0;
            case 0x1338C4u: goto label_1338c4;
            case 0x1338C8u: goto label_1338c8;
            case 0x1338CCu: goto label_1338cc;
            case 0x1338D0u: goto label_1338d0;
            case 0x1338D4u: goto label_1338d4;
            case 0x1338D8u: goto label_1338d8;
            case 0x1338DCu: goto label_1338dc;
            case 0x1338E0u: goto label_1338e0;
            case 0x1338E4u: goto label_1338e4;
            case 0x1338E8u: goto label_1338e8;
            case 0x1338ECu: goto label_1338ec;
            case 0x1338F0u: goto label_1338f0;
            case 0x1338F4u: goto label_1338f4;
            case 0x1338F8u: goto label_1338f8;
            case 0x1338FCu: goto label_1338fc;
            case 0x133900u: goto label_133900;
            case 0x133904u: goto label_133904;
            case 0x133908u: goto label_133908;
            case 0x13390Cu: goto label_13390c;
            case 0x133910u: goto label_133910;
            case 0x133914u: goto label_133914;
            case 0x133918u: goto label_133918;
            case 0x13391Cu: goto label_13391c;
            case 0x133920u: goto label_133920;
            case 0x133924u: goto label_133924;
            case 0x133928u: goto label_133928;
            case 0x13392Cu: goto label_13392c;
            case 0x133930u: goto label_133930;
            case 0x133934u: goto label_133934;
            case 0x133938u: goto label_133938;
            case 0x13393Cu: goto label_13393c;
            case 0x133940u: goto label_133940;
            case 0x133944u: goto label_133944;
            case 0x133948u: goto label_133948;
            case 0x13394Cu: goto label_13394c;
            case 0x133950u: goto label_133950;
            case 0x133954u: goto label_133954;
            case 0x133958u: goto label_133958;
            case 0x13395Cu: goto label_13395c;
            case 0x133960u: goto label_133960;
            case 0x133964u: goto label_133964;
            case 0x133968u: goto label_133968;
            case 0x13396Cu: goto label_13396c;
            case 0x133970u: goto label_133970;
            case 0x133974u: goto label_133974;
            case 0x133978u: goto label_133978;
            case 0x13397Cu: goto label_13397c;
            case 0x133980u: goto label_133980;
            case 0x133984u: goto label_133984;
            case 0x133988u: goto label_133988;
            case 0x13398Cu: goto label_13398c;
            case 0x133990u: goto label_133990;
            case 0x133994u: goto label_133994;
            case 0x133998u: goto label_133998;
            case 0x13399Cu: goto label_13399c;
            case 0x1339A0u: goto label_1339a0;
            case 0x1339A4u: goto label_1339a4;
            case 0x1339A8u: goto label_1339a8;
            case 0x1339ACu: goto label_1339ac;
            case 0x1339B0u: goto label_1339b0;
            case 0x1339B4u: goto label_1339b4;
            case 0x1339B8u: goto label_1339b8;
            case 0x1339BCu: goto label_1339bc;
            case 0x1339C0u: goto label_1339c0;
            case 0x1339C4u: goto label_1339c4;
            case 0x1339C8u: goto label_1339c8;
            case 0x1339CCu: goto label_1339cc;
            case 0x1339D0u: goto label_1339d0;
            case 0x1339D4u: goto label_1339d4;
            case 0x1339D8u: goto label_1339d8;
            case 0x1339DCu: goto label_1339dc;
            case 0x1339E0u: goto label_1339e0;
            case 0x1339E4u: goto label_1339e4;
            case 0x1339E8u: goto label_1339e8;
            case 0x1339ECu: goto label_1339ec;
            case 0x1339F0u: goto label_1339f0;
            case 0x1339F4u: goto label_1339f4;
            case 0x1339F8u: goto label_1339f8;
            case 0x1339FCu: goto label_1339fc;
            case 0x133A00u: goto label_133a00;
            case 0x133A04u: goto label_133a04;
            case 0x133A08u: goto label_133a08;
            case 0x133A0Cu: goto label_133a0c;
            case 0x133A10u: goto label_133a10;
            case 0x133A14u: goto label_133a14;
            case 0x133A18u: goto label_133a18;
            case 0x133A1Cu: goto label_133a1c;
            case 0x133A20u: goto label_133a20;
            case 0x133A24u: goto label_133a24;
            case 0x133A28u: goto label_133a28;
            case 0x133A2Cu: goto label_133a2c;
            case 0x133A30u: goto label_133a30;
            case 0x133A34u: goto label_133a34;
            case 0x133A38u: goto label_133a38;
            case 0x133A3Cu: goto label_133a3c;
            case 0x133A40u: goto label_133a40;
            case 0x133A44u: goto label_133a44;
            case 0x133A48u: goto label_133a48;
            case 0x133A4Cu: goto label_133a4c;
            case 0x133A50u: goto label_133a50;
            case 0x133A54u: goto label_133a54;
            case 0x133A58u: goto label_133a58;
            case 0x133A5Cu: goto label_133a5c;
            case 0x133A60u: goto label_133a60;
            case 0x133A64u: goto label_133a64;
            case 0x133A68u: goto label_133a68;
            case 0x133A6Cu: goto label_133a6c;
            case 0x133A70u: goto label_133a70;
            case 0x133A74u: goto label_133a74;
            case 0x133A78u: goto label_133a78;
            case 0x133A7Cu: goto label_133a7c;
            case 0x133A80u: goto label_133a80;
            case 0x133A84u: goto label_133a84;
            case 0x133A88u: goto label_133a88;
            case 0x133A8Cu: goto label_133a8c;
            case 0x133A90u: goto label_133a90;
            case 0x133A94u: goto label_133a94;
            case 0x133A98u: goto label_133a98;
            case 0x133A9Cu: goto label_133a9c;
            case 0x133AA0u: goto label_133aa0;
            case 0x133AA4u: goto label_133aa4;
            case 0x133AA8u: goto label_133aa8;
            case 0x133AACu: goto label_133aac;
            case 0x133AB0u: goto label_133ab0;
            case 0x133AB4u: goto label_133ab4;
            case 0x133AB8u: goto label_133ab8;
            case 0x133ABCu: goto label_133abc;
            case 0x133AC0u: goto label_133ac0;
            case 0x133AC4u: goto label_133ac4;
            case 0x133AC8u: goto label_133ac8;
            case 0x133ACCu: goto label_133acc;
            case 0x133AD0u: goto label_133ad0;
            case 0x133AD4u: goto label_133ad4;
            case 0x133AD8u: goto label_133ad8;
            case 0x133ADCu: goto label_133adc;
            case 0x133AE0u: goto label_133ae0;
            case 0x133AE4u: goto label_133ae4;
            case 0x133AE8u: goto label_133ae8;
            case 0x133AECu: goto label_133aec;
            case 0x133AF0u: goto label_133af0;
            case 0x133AF4u: goto label_133af4;
            case 0x133AF8u: goto label_133af8;
            case 0x133AFCu: goto label_133afc;
            case 0x133B00u: goto label_133b00;
            case 0x133B04u: goto label_133b04;
            case 0x133B08u: goto label_133b08;
            case 0x133B0Cu: goto label_133b0c;
            case 0x133B10u: goto label_133b10;
            case 0x133B14u: goto label_133b14;
            case 0x133B18u: goto label_133b18;
            case 0x133B1Cu: goto label_133b1c;
            case 0x133B20u: goto label_133b20;
            case 0x133B24u: goto label_133b24;
            case 0x133B28u: goto label_133b28;
            case 0x133B2Cu: goto label_133b2c;
            case 0x133B30u: goto label_133b30;
            case 0x133B34u: goto label_133b34;
            case 0x133B38u: goto label_133b38;
            case 0x133B3Cu: goto label_133b3c;
            case 0x133B40u: goto label_133b40;
            case 0x133B44u: goto label_133b44;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133A68u; }
            if (ctx->pc != 0x133A68u) { return; }
        }
    }
    ctx->pc = 0x133A68u;
label_133a68:
    // 0x133a68: 0x8e060000
    ctx->pc = 0x133a68u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_133a6c:
    // 0x133a6c: 0x200202d
    ctx->pc = 0x133a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133a70:
    // 0x133a70: 0x282d
    ctx->pc = 0x133a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133a74:
    // 0x133a74: 0x8cc20020
    ctx->pc = 0x133a74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_133a78:
    // 0x133a78: 0x40f809
label_133a7c:
    if (ctx->pc == 0x133A7Cu) {
        ctx->pc = 0x133A7Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133A80u;
        goto label_133a80;
    }
    ctx->pc = 0x133A78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133A80u);
        ctx->pc = 0x133A7Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133490u: goto label_133490;
            case 0x133494u: goto label_133494;
            case 0x133498u: goto label_133498;
            case 0x13349Cu: goto label_13349c;
            case 0x1334A0u: goto label_1334a0;
            case 0x1334A4u: goto label_1334a4;
            case 0x1334A8u: goto label_1334a8;
            case 0x1334ACu: goto label_1334ac;
            case 0x1334B0u: goto label_1334b0;
            case 0x1334B4u: goto label_1334b4;
            case 0x1334B8u: goto label_1334b8;
            case 0x1334BCu: goto label_1334bc;
            case 0x1334C0u: goto label_1334c0;
            case 0x1334C4u: goto label_1334c4;
            case 0x1334C8u: goto label_1334c8;
            case 0x1334CCu: goto label_1334cc;
            case 0x1334D0u: goto label_1334d0;
            case 0x1334D4u: goto label_1334d4;
            case 0x1334D8u: goto label_1334d8;
            case 0x1334DCu: goto label_1334dc;
            case 0x1334E0u: goto label_1334e0;
            case 0x1334E4u: goto label_1334e4;
            case 0x1334E8u: goto label_1334e8;
            case 0x1334ECu: goto label_1334ec;
            case 0x1334F0u: goto label_1334f0;
            case 0x1334F4u: goto label_1334f4;
            case 0x1334F8u: goto label_1334f8;
            case 0x1334FCu: goto label_1334fc;
            case 0x133500u: goto label_133500;
            case 0x133504u: goto label_133504;
            case 0x133508u: goto label_133508;
            case 0x13350Cu: goto label_13350c;
            case 0x133510u: goto label_133510;
            case 0x133514u: goto label_133514;
            case 0x133518u: goto label_133518;
            case 0x13351Cu: goto label_13351c;
            case 0x133520u: goto label_133520;
            case 0x133524u: goto label_133524;
            case 0x133528u: goto label_133528;
            case 0x13352Cu: goto label_13352c;
            case 0x133530u: goto label_133530;
            case 0x133534u: goto label_133534;
            case 0x133538u: goto label_133538;
            case 0x13353Cu: goto label_13353c;
            case 0x133540u: goto label_133540;
            case 0x133544u: goto label_133544;
            case 0x133548u: goto label_133548;
            case 0x13354Cu: goto label_13354c;
            case 0x133550u: goto label_133550;
            case 0x133554u: goto label_133554;
            case 0x133558u: goto label_133558;
            case 0x13355Cu: goto label_13355c;
            case 0x133560u: goto label_133560;
            case 0x133564u: goto label_133564;
            case 0x133568u: goto label_133568;
            case 0x13356Cu: goto label_13356c;
            case 0x133570u: goto label_133570;
            case 0x133574u: goto label_133574;
            case 0x133578u: goto label_133578;
            case 0x13357Cu: goto label_13357c;
            case 0x133580u: goto label_133580;
            case 0x133584u: goto label_133584;
            case 0x133588u: goto label_133588;
            case 0x13358Cu: goto label_13358c;
            case 0x133590u: goto label_133590;
            case 0x133594u: goto label_133594;
            case 0x133598u: goto label_133598;
            case 0x13359Cu: goto label_13359c;
            case 0x1335A0u: goto label_1335a0;
            case 0x1335A4u: goto label_1335a4;
            case 0x1335A8u: goto label_1335a8;
            case 0x1335ACu: goto label_1335ac;
            case 0x1335B0u: goto label_1335b0;
            case 0x1335B4u: goto label_1335b4;
            case 0x1335B8u: goto label_1335b8;
            case 0x1335BCu: goto label_1335bc;
            case 0x1335C0u: goto label_1335c0;
            case 0x1335C4u: goto label_1335c4;
            case 0x1335C8u: goto label_1335c8;
            case 0x1335CCu: goto label_1335cc;
            case 0x1335D0u: goto label_1335d0;
            case 0x1335D4u: goto label_1335d4;
            case 0x1335D8u: goto label_1335d8;
            case 0x1335DCu: goto label_1335dc;
            case 0x1335E0u: goto label_1335e0;
            case 0x1335E4u: goto label_1335e4;
            case 0x1335E8u: goto label_1335e8;
            case 0x1335ECu: goto label_1335ec;
            case 0x1335F0u: goto label_1335f0;
            case 0x1335F4u: goto label_1335f4;
            case 0x1335F8u: goto label_1335f8;
            case 0x1335FCu: goto label_1335fc;
            case 0x133600u: goto label_133600;
            case 0x133604u: goto label_133604;
            case 0x133608u: goto label_133608;
            case 0x13360Cu: goto label_13360c;
            case 0x133610u: goto label_133610;
            case 0x133614u: goto label_133614;
            case 0x133618u: goto label_133618;
            case 0x13361Cu: goto label_13361c;
            case 0x133620u: goto label_133620;
            case 0x133624u: goto label_133624;
            case 0x133628u: goto label_133628;
            case 0x13362Cu: goto label_13362c;
            case 0x133630u: goto label_133630;
            case 0x133634u: goto label_133634;
            case 0x133638u: goto label_133638;
            case 0x13363Cu: goto label_13363c;
            case 0x133640u: goto label_133640;
            case 0x133644u: goto label_133644;
            case 0x133648u: goto label_133648;
            case 0x13364Cu: goto label_13364c;
            case 0x133650u: goto label_133650;
            case 0x133654u: goto label_133654;
            case 0x133658u: goto label_133658;
            case 0x13365Cu: goto label_13365c;
            case 0x133660u: goto label_133660;
            case 0x133664u: goto label_133664;
            case 0x133668u: goto label_133668;
            case 0x13366Cu: goto label_13366c;
            case 0x133670u: goto label_133670;
            case 0x133674u: goto label_133674;
            case 0x133678u: goto label_133678;
            case 0x13367Cu: goto label_13367c;
            case 0x133680u: goto label_133680;
            case 0x133684u: goto label_133684;
            case 0x133688u: goto label_133688;
            case 0x13368Cu: goto label_13368c;
            case 0x133690u: goto label_133690;
            case 0x133694u: goto label_133694;
            case 0x133698u: goto label_133698;
            case 0x13369Cu: goto label_13369c;
            case 0x1336A0u: goto label_1336a0;
            case 0x1336A4u: goto label_1336a4;
            case 0x1336A8u: goto label_1336a8;
            case 0x1336ACu: goto label_1336ac;
            case 0x1336B0u: goto label_1336b0;
            case 0x1336B4u: goto label_1336b4;
            case 0x1336B8u: goto label_1336b8;
            case 0x1336BCu: goto label_1336bc;
            case 0x1336C0u: goto label_1336c0;
            case 0x1336C4u: goto label_1336c4;
            case 0x1336C8u: goto label_1336c8;
            case 0x1336CCu: goto label_1336cc;
            case 0x1336D0u: goto label_1336d0;
            case 0x1336D4u: goto label_1336d4;
            case 0x1336D8u: goto label_1336d8;
            case 0x1336DCu: goto label_1336dc;
            case 0x1336E0u: goto label_1336e0;
            case 0x1336E4u: goto label_1336e4;
            case 0x1336E8u: goto label_1336e8;
            case 0x1336ECu: goto label_1336ec;
            case 0x1336F0u: goto label_1336f0;
            case 0x1336F4u: goto label_1336f4;
            case 0x1336F8u: goto label_1336f8;
            case 0x1336FCu: goto label_1336fc;
            case 0x133700u: goto label_133700;
            case 0x133704u: goto label_133704;
            case 0x133708u: goto label_133708;
            case 0x13370Cu: goto label_13370c;
            case 0x133710u: goto label_133710;
            case 0x133714u: goto label_133714;
            case 0x133718u: goto label_133718;
            case 0x13371Cu: goto label_13371c;
            case 0x133720u: goto label_133720;
            case 0x133724u: goto label_133724;
            case 0x133728u: goto label_133728;
            case 0x13372Cu: goto label_13372c;
            case 0x133730u: goto label_133730;
            case 0x133734u: goto label_133734;
            case 0x133738u: goto label_133738;
            case 0x13373Cu: goto label_13373c;
            case 0x133740u: goto label_133740;
            case 0x133744u: goto label_133744;
            case 0x133748u: goto label_133748;
            case 0x13374Cu: goto label_13374c;
            case 0x133750u: goto label_133750;
            case 0x133754u: goto label_133754;
            case 0x133758u: goto label_133758;
            case 0x13375Cu: goto label_13375c;
            case 0x133760u: goto label_133760;
            case 0x133764u: goto label_133764;
            case 0x133768u: goto label_133768;
            case 0x13376Cu: goto label_13376c;
            case 0x133770u: goto label_133770;
            case 0x133774u: goto label_133774;
            case 0x133778u: goto label_133778;
            case 0x13377Cu: goto label_13377c;
            case 0x133780u: goto label_133780;
            case 0x133784u: goto label_133784;
            case 0x133788u: goto label_133788;
            case 0x13378Cu: goto label_13378c;
            case 0x133790u: goto label_133790;
            case 0x133794u: goto label_133794;
            case 0x133798u: goto label_133798;
            case 0x13379Cu: goto label_13379c;
            case 0x1337A0u: goto label_1337a0;
            case 0x1337A4u: goto label_1337a4;
            case 0x1337A8u: goto label_1337a8;
            case 0x1337ACu: goto label_1337ac;
            case 0x1337B0u: goto label_1337b0;
            case 0x1337B4u: goto label_1337b4;
            case 0x1337B8u: goto label_1337b8;
            case 0x1337BCu: goto label_1337bc;
            case 0x1337C0u: goto label_1337c0;
            case 0x1337C4u: goto label_1337c4;
            case 0x1337C8u: goto label_1337c8;
            case 0x1337CCu: goto label_1337cc;
            case 0x1337D0u: goto label_1337d0;
            case 0x1337D4u: goto label_1337d4;
            case 0x1337D8u: goto label_1337d8;
            case 0x1337DCu: goto label_1337dc;
            case 0x1337E0u: goto label_1337e0;
            case 0x1337E4u: goto label_1337e4;
            case 0x1337E8u: goto label_1337e8;
            case 0x1337ECu: goto label_1337ec;
            case 0x1337F0u: goto label_1337f0;
            case 0x1337F4u: goto label_1337f4;
            case 0x1337F8u: goto label_1337f8;
            case 0x1337FCu: goto label_1337fc;
            case 0x133800u: goto label_133800;
            case 0x133804u: goto label_133804;
            case 0x133808u: goto label_133808;
            case 0x13380Cu: goto label_13380c;
            case 0x133810u: goto label_133810;
            case 0x133814u: goto label_133814;
            case 0x133818u: goto label_133818;
            case 0x13381Cu: goto label_13381c;
            case 0x133820u: goto label_133820;
            case 0x133824u: goto label_133824;
            case 0x133828u: goto label_133828;
            case 0x13382Cu: goto label_13382c;
            case 0x133830u: goto label_133830;
            case 0x133834u: goto label_133834;
            case 0x133838u: goto label_133838;
            case 0x13383Cu: goto label_13383c;
            case 0x133840u: goto label_133840;
            case 0x133844u: goto label_133844;
            case 0x133848u: goto label_133848;
            case 0x13384Cu: goto label_13384c;
            case 0x133850u: goto label_133850;
            case 0x133854u: goto label_133854;
            case 0x133858u: goto label_133858;
            case 0x13385Cu: goto label_13385c;
            case 0x133860u: goto label_133860;
            case 0x133864u: goto label_133864;
            case 0x133868u: goto label_133868;
            case 0x13386Cu: goto label_13386c;
            case 0x133870u: goto label_133870;
            case 0x133874u: goto label_133874;
            case 0x133878u: goto label_133878;
            case 0x13387Cu: goto label_13387c;
            case 0x133880u: goto label_133880;
            case 0x133884u: goto label_133884;
            case 0x133888u: goto label_133888;
            case 0x13388Cu: goto label_13388c;
            case 0x133890u: goto label_133890;
            case 0x133894u: goto label_133894;
            case 0x133898u: goto label_133898;
            case 0x13389Cu: goto label_13389c;
            case 0x1338A0u: goto label_1338a0;
            case 0x1338A4u: goto label_1338a4;
            case 0x1338A8u: goto label_1338a8;
            case 0x1338ACu: goto label_1338ac;
            case 0x1338B0u: goto label_1338b0;
            case 0x1338B4u: goto label_1338b4;
            case 0x1338B8u: goto label_1338b8;
            case 0x1338BCu: goto label_1338bc;
            case 0x1338C0u: goto label_1338c0;
            case 0x1338C4u: goto label_1338c4;
            case 0x1338C8u: goto label_1338c8;
            case 0x1338CCu: goto label_1338cc;
            case 0x1338D0u: goto label_1338d0;
            case 0x1338D4u: goto label_1338d4;
            case 0x1338D8u: goto label_1338d8;
            case 0x1338DCu: goto label_1338dc;
            case 0x1338E0u: goto label_1338e0;
            case 0x1338E4u: goto label_1338e4;
            case 0x1338E8u: goto label_1338e8;
            case 0x1338ECu: goto label_1338ec;
            case 0x1338F0u: goto label_1338f0;
            case 0x1338F4u: goto label_1338f4;
            case 0x1338F8u: goto label_1338f8;
            case 0x1338FCu: goto label_1338fc;
            case 0x133900u: goto label_133900;
            case 0x133904u: goto label_133904;
            case 0x133908u: goto label_133908;
            case 0x13390Cu: goto label_13390c;
            case 0x133910u: goto label_133910;
            case 0x133914u: goto label_133914;
            case 0x133918u: goto label_133918;
            case 0x13391Cu: goto label_13391c;
            case 0x133920u: goto label_133920;
            case 0x133924u: goto label_133924;
            case 0x133928u: goto label_133928;
            case 0x13392Cu: goto label_13392c;
            case 0x133930u: goto label_133930;
            case 0x133934u: goto label_133934;
            case 0x133938u: goto label_133938;
            case 0x13393Cu: goto label_13393c;
            case 0x133940u: goto label_133940;
            case 0x133944u: goto label_133944;
            case 0x133948u: goto label_133948;
            case 0x13394Cu: goto label_13394c;
            case 0x133950u: goto label_133950;
            case 0x133954u: goto label_133954;
            case 0x133958u: goto label_133958;
            case 0x13395Cu: goto label_13395c;
            case 0x133960u: goto label_133960;
            case 0x133964u: goto label_133964;
            case 0x133968u: goto label_133968;
            case 0x13396Cu: goto label_13396c;
            case 0x133970u: goto label_133970;
            case 0x133974u: goto label_133974;
            case 0x133978u: goto label_133978;
            case 0x13397Cu: goto label_13397c;
            case 0x133980u: goto label_133980;
            case 0x133984u: goto label_133984;
            case 0x133988u: goto label_133988;
            case 0x13398Cu: goto label_13398c;
            case 0x133990u: goto label_133990;
            case 0x133994u: goto label_133994;
            case 0x133998u: goto label_133998;
            case 0x13399Cu: goto label_13399c;
            case 0x1339A0u: goto label_1339a0;
            case 0x1339A4u: goto label_1339a4;
            case 0x1339A8u: goto label_1339a8;
            case 0x1339ACu: goto label_1339ac;
            case 0x1339B0u: goto label_1339b0;
            case 0x1339B4u: goto label_1339b4;
            case 0x1339B8u: goto label_1339b8;
            case 0x1339BCu: goto label_1339bc;
            case 0x1339C0u: goto label_1339c0;
            case 0x1339C4u: goto label_1339c4;
            case 0x1339C8u: goto label_1339c8;
            case 0x1339CCu: goto label_1339cc;
            case 0x1339D0u: goto label_1339d0;
            case 0x1339D4u: goto label_1339d4;
            case 0x1339D8u: goto label_1339d8;
            case 0x1339DCu: goto label_1339dc;
            case 0x1339E0u: goto label_1339e0;
            case 0x1339E4u: goto label_1339e4;
            case 0x1339E8u: goto label_1339e8;
            case 0x1339ECu: goto label_1339ec;
            case 0x1339F0u: goto label_1339f0;
            case 0x1339F4u: goto label_1339f4;
            case 0x1339F8u: goto label_1339f8;
            case 0x1339FCu: goto label_1339fc;
            case 0x133A00u: goto label_133a00;
            case 0x133A04u: goto label_133a04;
            case 0x133A08u: goto label_133a08;
            case 0x133A0Cu: goto label_133a0c;
            case 0x133A10u: goto label_133a10;
            case 0x133A14u: goto label_133a14;
            case 0x133A18u: goto label_133a18;
            case 0x133A1Cu: goto label_133a1c;
            case 0x133A20u: goto label_133a20;
            case 0x133A24u: goto label_133a24;
            case 0x133A28u: goto label_133a28;
            case 0x133A2Cu: goto label_133a2c;
            case 0x133A30u: goto label_133a30;
            case 0x133A34u: goto label_133a34;
            case 0x133A38u: goto label_133a38;
            case 0x133A3Cu: goto label_133a3c;
            case 0x133A40u: goto label_133a40;
            case 0x133A44u: goto label_133a44;
            case 0x133A48u: goto label_133a48;
            case 0x133A4Cu: goto label_133a4c;
            case 0x133A50u: goto label_133a50;
            case 0x133A54u: goto label_133a54;
            case 0x133A58u: goto label_133a58;
            case 0x133A5Cu: goto label_133a5c;
            case 0x133A60u: goto label_133a60;
            case 0x133A64u: goto label_133a64;
            case 0x133A68u: goto label_133a68;
            case 0x133A6Cu: goto label_133a6c;
            case 0x133A70u: goto label_133a70;
            case 0x133A74u: goto label_133a74;
            case 0x133A78u: goto label_133a78;
            case 0x133A7Cu: goto label_133a7c;
            case 0x133A80u: goto label_133a80;
            case 0x133A84u: goto label_133a84;
            case 0x133A88u: goto label_133a88;
            case 0x133A8Cu: goto label_133a8c;
            case 0x133A90u: goto label_133a90;
            case 0x133A94u: goto label_133a94;
            case 0x133A98u: goto label_133a98;
            case 0x133A9Cu: goto label_133a9c;
            case 0x133AA0u: goto label_133aa0;
            case 0x133AA4u: goto label_133aa4;
            case 0x133AA8u: goto label_133aa8;
            case 0x133AACu: goto label_133aac;
            case 0x133AB0u: goto label_133ab0;
            case 0x133AB4u: goto label_133ab4;
            case 0x133AB8u: goto label_133ab8;
            case 0x133ABCu: goto label_133abc;
            case 0x133AC0u: goto label_133ac0;
            case 0x133AC4u: goto label_133ac4;
            case 0x133AC8u: goto label_133ac8;
            case 0x133ACCu: goto label_133acc;
            case 0x133AD0u: goto label_133ad0;
            case 0x133AD4u: goto label_133ad4;
            case 0x133AD8u: goto label_133ad8;
            case 0x133ADCu: goto label_133adc;
            case 0x133AE0u: goto label_133ae0;
            case 0x133AE4u: goto label_133ae4;
            case 0x133AE8u: goto label_133ae8;
            case 0x133AECu: goto label_133aec;
            case 0x133AF0u: goto label_133af0;
            case 0x133AF4u: goto label_133af4;
            case 0x133AF8u: goto label_133af8;
            case 0x133AFCu: goto label_133afc;
            case 0x133B00u: goto label_133b00;
            case 0x133B04u: goto label_133b04;
            case 0x133B08u: goto label_133b08;
            case 0x133B0Cu: goto label_133b0c;
            case 0x133B10u: goto label_133b10;
            case 0x133B14u: goto label_133b14;
            case 0x133B18u: goto label_133b18;
            case 0x133B1Cu: goto label_133b1c;
            case 0x133B20u: goto label_133b20;
            case 0x133B24u: goto label_133b24;
            case 0x133B28u: goto label_133b28;
            case 0x133B2Cu: goto label_133b2c;
            case 0x133B30u: goto label_133b30;
            case 0x133B34u: goto label_133b34;
            case 0x133B38u: goto label_133b38;
            case 0x133B3Cu: goto label_133b3c;
            case 0x133B40u: goto label_133b40;
            case 0x133B44u: goto label_133b44;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133A80u; }
            if (ctx->pc != 0x133A80u) { return; }
        }
    }
    ctx->pc = 0x133A80u;
label_133a80:
    // 0x133a80: 0xc04b694
label_133a84:
    if (ctx->pc == 0x133A84u) {
        ctx->pc = 0x133A84u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133A88u;
        goto label_133a88;
    }
    ctx->pc = 0x133A80u;
    SET_GPR_U32(ctx, 31, 0x133A88u);
    ctx->pc = 0x133A84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12DA50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DA50_0x12da50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133A88u; }
    }
    if (ctx->pc != 0x133A88u) { return; }
    ctx->pc = 0x133A88u;
label_133a88:
    // 0x133a88: 0x8e22004c
    ctx->pc = 0x133a88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_133a8c:
    // 0x133a8c: 0x24420001
    ctx->pc = 0x133a8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_133a90:
    // 0x133a90: 0xae22004c
    ctx->pc = 0x133a90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
label_133a94:
    // 0x133a94: 0xdfb00010
    ctx->pc = 0x133a94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_133a98:
    // 0x133a98: 0xdfb10018
    ctx->pc = 0x133a98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_133a9c:
    // 0x133a9c: 0xdfb20020
    ctx->pc = 0x133a9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_133aa0:
    // 0x133aa0: 0xdfb30028
    ctx->pc = 0x133aa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_133aa4:
    // 0x133aa4: 0xdfb40030
    ctx->pc = 0x133aa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_133aa8:
    // 0x133aa8: 0xdfb50038
    ctx->pc = 0x133aa8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_133aac:
    // 0x133aac: 0xdfbf0040
    ctx->pc = 0x133aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_133ab0:
    // 0x133ab0: 0x3e00008
label_133ab4:
    if (ctx->pc == 0x133AB4u) {
        ctx->pc = 0x133AB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x133AB8u;
        goto label_133ab8;
    }
    ctx->pc = 0x133AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133AB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133490u: goto label_133490;
            case 0x133494u: goto label_133494;
            case 0x133498u: goto label_133498;
            case 0x13349Cu: goto label_13349c;
            case 0x1334A0u: goto label_1334a0;
            case 0x1334A4u: goto label_1334a4;
            case 0x1334A8u: goto label_1334a8;
            case 0x1334ACu: goto label_1334ac;
            case 0x1334B0u: goto label_1334b0;
            case 0x1334B4u: goto label_1334b4;
            case 0x1334B8u: goto label_1334b8;
            case 0x1334BCu: goto label_1334bc;
            case 0x1334C0u: goto label_1334c0;
            case 0x1334C4u: goto label_1334c4;
            case 0x1334C8u: goto label_1334c8;
            case 0x1334CCu: goto label_1334cc;
            case 0x1334D0u: goto label_1334d0;
            case 0x1334D4u: goto label_1334d4;
            case 0x1334D8u: goto label_1334d8;
            case 0x1334DCu: goto label_1334dc;
            case 0x1334E0u: goto label_1334e0;
            case 0x1334E4u: goto label_1334e4;
            case 0x1334E8u: goto label_1334e8;
            case 0x1334ECu: goto label_1334ec;
            case 0x1334F0u: goto label_1334f0;
            case 0x1334F4u: goto label_1334f4;
            case 0x1334F8u: goto label_1334f8;
            case 0x1334FCu: goto label_1334fc;
            case 0x133500u: goto label_133500;
            case 0x133504u: goto label_133504;
            case 0x133508u: goto label_133508;
            case 0x13350Cu: goto label_13350c;
            case 0x133510u: goto label_133510;
            case 0x133514u: goto label_133514;
            case 0x133518u: goto label_133518;
            case 0x13351Cu: goto label_13351c;
            case 0x133520u: goto label_133520;
            case 0x133524u: goto label_133524;
            case 0x133528u: goto label_133528;
            case 0x13352Cu: goto label_13352c;
            case 0x133530u: goto label_133530;
            case 0x133534u: goto label_133534;
            case 0x133538u: goto label_133538;
            case 0x13353Cu: goto label_13353c;
            case 0x133540u: goto label_133540;
            case 0x133544u: goto label_133544;
            case 0x133548u: goto label_133548;
            case 0x13354Cu: goto label_13354c;
            case 0x133550u: goto label_133550;
            case 0x133554u: goto label_133554;
            case 0x133558u: goto label_133558;
            case 0x13355Cu: goto label_13355c;
            case 0x133560u: goto label_133560;
            case 0x133564u: goto label_133564;
            case 0x133568u: goto label_133568;
            case 0x13356Cu: goto label_13356c;
            case 0x133570u: goto label_133570;
            case 0x133574u: goto label_133574;
            case 0x133578u: goto label_133578;
            case 0x13357Cu: goto label_13357c;
            case 0x133580u: goto label_133580;
            case 0x133584u: goto label_133584;
            case 0x133588u: goto label_133588;
            case 0x13358Cu: goto label_13358c;
            case 0x133590u: goto label_133590;
            case 0x133594u: goto label_133594;
            case 0x133598u: goto label_133598;
            case 0x13359Cu: goto label_13359c;
            case 0x1335A0u: goto label_1335a0;
            case 0x1335A4u: goto label_1335a4;
            case 0x1335A8u: goto label_1335a8;
            case 0x1335ACu: goto label_1335ac;
            case 0x1335B0u: goto label_1335b0;
            case 0x1335B4u: goto label_1335b4;
            case 0x1335B8u: goto label_1335b8;
            case 0x1335BCu: goto label_1335bc;
            case 0x1335C0u: goto label_1335c0;
            case 0x1335C4u: goto label_1335c4;
            case 0x1335C8u: goto label_1335c8;
            case 0x1335CCu: goto label_1335cc;
            case 0x1335D0u: goto label_1335d0;
            case 0x1335D4u: goto label_1335d4;
            case 0x1335D8u: goto label_1335d8;
            case 0x1335DCu: goto label_1335dc;
            case 0x1335E0u: goto label_1335e0;
            case 0x1335E4u: goto label_1335e4;
            case 0x1335E8u: goto label_1335e8;
            case 0x1335ECu: goto label_1335ec;
            case 0x1335F0u: goto label_1335f0;
            case 0x1335F4u: goto label_1335f4;
            case 0x1335F8u: goto label_1335f8;
            case 0x1335FCu: goto label_1335fc;
            case 0x133600u: goto label_133600;
            case 0x133604u: goto label_133604;
            case 0x133608u: goto label_133608;
            case 0x13360Cu: goto label_13360c;
            case 0x133610u: goto label_133610;
            case 0x133614u: goto label_133614;
            case 0x133618u: goto label_133618;
            case 0x13361Cu: goto label_13361c;
            case 0x133620u: goto label_133620;
            case 0x133624u: goto label_133624;
            case 0x133628u: goto label_133628;
            case 0x13362Cu: goto label_13362c;
            case 0x133630u: goto label_133630;
            case 0x133634u: goto label_133634;
            case 0x133638u: goto label_133638;
            case 0x13363Cu: goto label_13363c;
            case 0x133640u: goto label_133640;
            case 0x133644u: goto label_133644;
            case 0x133648u: goto label_133648;
            case 0x13364Cu: goto label_13364c;
            case 0x133650u: goto label_133650;
            case 0x133654u: goto label_133654;
            case 0x133658u: goto label_133658;
            case 0x13365Cu: goto label_13365c;
            case 0x133660u: goto label_133660;
            case 0x133664u: goto label_133664;
            case 0x133668u: goto label_133668;
            case 0x13366Cu: goto label_13366c;
            case 0x133670u: goto label_133670;
            case 0x133674u: goto label_133674;
            case 0x133678u: goto label_133678;
            case 0x13367Cu: goto label_13367c;
            case 0x133680u: goto label_133680;
            case 0x133684u: goto label_133684;
            case 0x133688u: goto label_133688;
            case 0x13368Cu: goto label_13368c;
            case 0x133690u: goto label_133690;
            case 0x133694u: goto label_133694;
            case 0x133698u: goto label_133698;
            case 0x13369Cu: goto label_13369c;
            case 0x1336A0u: goto label_1336a0;
            case 0x1336A4u: goto label_1336a4;
            case 0x1336A8u: goto label_1336a8;
            case 0x1336ACu: goto label_1336ac;
            case 0x1336B0u: goto label_1336b0;
            case 0x1336B4u: goto label_1336b4;
            case 0x1336B8u: goto label_1336b8;
            case 0x1336BCu: goto label_1336bc;
            case 0x1336C0u: goto label_1336c0;
            case 0x1336C4u: goto label_1336c4;
            case 0x1336C8u: goto label_1336c8;
            case 0x1336CCu: goto label_1336cc;
            case 0x1336D0u: goto label_1336d0;
            case 0x1336D4u: goto label_1336d4;
            case 0x1336D8u: goto label_1336d8;
            case 0x1336DCu: goto label_1336dc;
            case 0x1336E0u: goto label_1336e0;
            case 0x1336E4u: goto label_1336e4;
            case 0x1336E8u: goto label_1336e8;
            case 0x1336ECu: goto label_1336ec;
            case 0x1336F0u: goto label_1336f0;
            case 0x1336F4u: goto label_1336f4;
            case 0x1336F8u: goto label_1336f8;
            case 0x1336FCu: goto label_1336fc;
            case 0x133700u: goto label_133700;
            case 0x133704u: goto label_133704;
            case 0x133708u: goto label_133708;
            case 0x13370Cu: goto label_13370c;
            case 0x133710u: goto label_133710;
            case 0x133714u: goto label_133714;
            case 0x133718u: goto label_133718;
            case 0x13371Cu: goto label_13371c;
            case 0x133720u: goto label_133720;
            case 0x133724u: goto label_133724;
            case 0x133728u: goto label_133728;
            case 0x13372Cu: goto label_13372c;
            case 0x133730u: goto label_133730;
            case 0x133734u: goto label_133734;
            case 0x133738u: goto label_133738;
            case 0x13373Cu: goto label_13373c;
            case 0x133740u: goto label_133740;
            case 0x133744u: goto label_133744;
            case 0x133748u: goto label_133748;
            case 0x13374Cu: goto label_13374c;
            case 0x133750u: goto label_133750;
            case 0x133754u: goto label_133754;
            case 0x133758u: goto label_133758;
            case 0x13375Cu: goto label_13375c;
            case 0x133760u: goto label_133760;
            case 0x133764u: goto label_133764;
            case 0x133768u: goto label_133768;
            case 0x13376Cu: goto label_13376c;
            case 0x133770u: goto label_133770;
            case 0x133774u: goto label_133774;
            case 0x133778u: goto label_133778;
            case 0x13377Cu: goto label_13377c;
            case 0x133780u: goto label_133780;
            case 0x133784u: goto label_133784;
            case 0x133788u: goto label_133788;
            case 0x13378Cu: goto label_13378c;
            case 0x133790u: goto label_133790;
            case 0x133794u: goto label_133794;
            case 0x133798u: goto label_133798;
            case 0x13379Cu: goto label_13379c;
            case 0x1337A0u: goto label_1337a0;
            case 0x1337A4u: goto label_1337a4;
            case 0x1337A8u: goto label_1337a8;
            case 0x1337ACu: goto label_1337ac;
            case 0x1337B0u: goto label_1337b0;
            case 0x1337B4u: goto label_1337b4;
            case 0x1337B8u: goto label_1337b8;
            case 0x1337BCu: goto label_1337bc;
            case 0x1337C0u: goto label_1337c0;
            case 0x1337C4u: goto label_1337c4;
            case 0x1337C8u: goto label_1337c8;
            case 0x1337CCu: goto label_1337cc;
            case 0x1337D0u: goto label_1337d0;
            case 0x1337D4u: goto label_1337d4;
            case 0x1337D8u: goto label_1337d8;
            case 0x1337DCu: goto label_1337dc;
            case 0x1337E0u: goto label_1337e0;
            case 0x1337E4u: goto label_1337e4;
            case 0x1337E8u: goto label_1337e8;
            case 0x1337ECu: goto label_1337ec;
            case 0x1337F0u: goto label_1337f0;
            case 0x1337F4u: goto label_1337f4;
            case 0x1337F8u: goto label_1337f8;
            case 0x1337FCu: goto label_1337fc;
            case 0x133800u: goto label_133800;
            case 0x133804u: goto label_133804;
            case 0x133808u: goto label_133808;
            case 0x13380Cu: goto label_13380c;
            case 0x133810u: goto label_133810;
            case 0x133814u: goto label_133814;
            case 0x133818u: goto label_133818;
            case 0x13381Cu: goto label_13381c;
            case 0x133820u: goto label_133820;
            case 0x133824u: goto label_133824;
            case 0x133828u: goto label_133828;
            case 0x13382Cu: goto label_13382c;
            case 0x133830u: goto label_133830;
            case 0x133834u: goto label_133834;
            case 0x133838u: goto label_133838;
            case 0x13383Cu: goto label_13383c;
            case 0x133840u: goto label_133840;
            case 0x133844u: goto label_133844;
            case 0x133848u: goto label_133848;
            case 0x13384Cu: goto label_13384c;
            case 0x133850u: goto label_133850;
            case 0x133854u: goto label_133854;
            case 0x133858u: goto label_133858;
            case 0x13385Cu: goto label_13385c;
            case 0x133860u: goto label_133860;
            case 0x133864u: goto label_133864;
            case 0x133868u: goto label_133868;
            case 0x13386Cu: goto label_13386c;
            case 0x133870u: goto label_133870;
            case 0x133874u: goto label_133874;
            case 0x133878u: goto label_133878;
            case 0x13387Cu: goto label_13387c;
            case 0x133880u: goto label_133880;
            case 0x133884u: goto label_133884;
            case 0x133888u: goto label_133888;
            case 0x13388Cu: goto label_13388c;
            case 0x133890u: goto label_133890;
            case 0x133894u: goto label_133894;
            case 0x133898u: goto label_133898;
            case 0x13389Cu: goto label_13389c;
            case 0x1338A0u: goto label_1338a0;
            case 0x1338A4u: goto label_1338a4;
            case 0x1338A8u: goto label_1338a8;
            case 0x1338ACu: goto label_1338ac;
            case 0x1338B0u: goto label_1338b0;
            case 0x1338B4u: goto label_1338b4;
            case 0x1338B8u: goto label_1338b8;
            case 0x1338BCu: goto label_1338bc;
            case 0x1338C0u: goto label_1338c0;
            case 0x1338C4u: goto label_1338c4;
            case 0x1338C8u: goto label_1338c8;
            case 0x1338CCu: goto label_1338cc;
            case 0x1338D0u: goto label_1338d0;
            case 0x1338D4u: goto label_1338d4;
            case 0x1338D8u: goto label_1338d8;
            case 0x1338DCu: goto label_1338dc;
            case 0x1338E0u: goto label_1338e0;
            case 0x1338E4u: goto label_1338e4;
            case 0x1338E8u: goto label_1338e8;
            case 0x1338ECu: goto label_1338ec;
            case 0x1338F0u: goto label_1338f0;
            case 0x1338F4u: goto label_1338f4;
            case 0x1338F8u: goto label_1338f8;
            case 0x1338FCu: goto label_1338fc;
            case 0x133900u: goto label_133900;
            case 0x133904u: goto label_133904;
            case 0x133908u: goto label_133908;
            case 0x13390Cu: goto label_13390c;
            case 0x133910u: goto label_133910;
            case 0x133914u: goto label_133914;
            case 0x133918u: goto label_133918;
            case 0x13391Cu: goto label_13391c;
            case 0x133920u: goto label_133920;
            case 0x133924u: goto label_133924;
            case 0x133928u: goto label_133928;
            case 0x13392Cu: goto label_13392c;
            case 0x133930u: goto label_133930;
            case 0x133934u: goto label_133934;
            case 0x133938u: goto label_133938;
            case 0x13393Cu: goto label_13393c;
            case 0x133940u: goto label_133940;
            case 0x133944u: goto label_133944;
            case 0x133948u: goto label_133948;
            case 0x13394Cu: goto label_13394c;
            case 0x133950u: goto label_133950;
            case 0x133954u: goto label_133954;
            case 0x133958u: goto label_133958;
            case 0x13395Cu: goto label_13395c;
            case 0x133960u: goto label_133960;
            case 0x133964u: goto label_133964;
            case 0x133968u: goto label_133968;
            case 0x13396Cu: goto label_13396c;
            case 0x133970u: goto label_133970;
            case 0x133974u: goto label_133974;
            case 0x133978u: goto label_133978;
            case 0x13397Cu: goto label_13397c;
            case 0x133980u: goto label_133980;
            case 0x133984u: goto label_133984;
            case 0x133988u: goto label_133988;
            case 0x13398Cu: goto label_13398c;
            case 0x133990u: goto label_133990;
            case 0x133994u: goto label_133994;
            case 0x133998u: goto label_133998;
            case 0x13399Cu: goto label_13399c;
            case 0x1339A0u: goto label_1339a0;
            case 0x1339A4u: goto label_1339a4;
            case 0x1339A8u: goto label_1339a8;
            case 0x1339ACu: goto label_1339ac;
            case 0x1339B0u: goto label_1339b0;
            case 0x1339B4u: goto label_1339b4;
            case 0x1339B8u: goto label_1339b8;
            case 0x1339BCu: goto label_1339bc;
            case 0x1339C0u: goto label_1339c0;
            case 0x1339C4u: goto label_1339c4;
            case 0x1339C8u: goto label_1339c8;
            case 0x1339CCu: goto label_1339cc;
            case 0x1339D0u: goto label_1339d0;
            case 0x1339D4u: goto label_1339d4;
            case 0x1339D8u: goto label_1339d8;
            case 0x1339DCu: goto label_1339dc;
            case 0x1339E0u: goto label_1339e0;
            case 0x1339E4u: goto label_1339e4;
            case 0x1339E8u: goto label_1339e8;
            case 0x1339ECu: goto label_1339ec;
            case 0x1339F0u: goto label_1339f0;
            case 0x1339F4u: goto label_1339f4;
            case 0x1339F8u: goto label_1339f8;
            case 0x1339FCu: goto label_1339fc;
            case 0x133A00u: goto label_133a00;
            case 0x133A04u: goto label_133a04;
            case 0x133A08u: goto label_133a08;
            case 0x133A0Cu: goto label_133a0c;
            case 0x133A10u: goto label_133a10;
            case 0x133A14u: goto label_133a14;
            case 0x133A18u: goto label_133a18;
            case 0x133A1Cu: goto label_133a1c;
            case 0x133A20u: goto label_133a20;
            case 0x133A24u: goto label_133a24;
            case 0x133A28u: goto label_133a28;
            case 0x133A2Cu: goto label_133a2c;
            case 0x133A30u: goto label_133a30;
            case 0x133A34u: goto label_133a34;
            case 0x133A38u: goto label_133a38;
            case 0x133A3Cu: goto label_133a3c;
            case 0x133A40u: goto label_133a40;
            case 0x133A44u: goto label_133a44;
            case 0x133A48u: goto label_133a48;
            case 0x133A4Cu: goto label_133a4c;
            case 0x133A50u: goto label_133a50;
            case 0x133A54u: goto label_133a54;
            case 0x133A58u: goto label_133a58;
            case 0x133A5Cu: goto label_133a5c;
            case 0x133A60u: goto label_133a60;
            case 0x133A64u: goto label_133a64;
            case 0x133A68u: goto label_133a68;
            case 0x133A6Cu: goto label_133a6c;
            case 0x133A70u: goto label_133a70;
            case 0x133A74u: goto label_133a74;
            case 0x133A78u: goto label_133a78;
            case 0x133A7Cu: goto label_133a7c;
            case 0x133A80u: goto label_133a80;
            case 0x133A84u: goto label_133a84;
            case 0x133A88u: goto label_133a88;
            case 0x133A8Cu: goto label_133a8c;
            case 0x133A90u: goto label_133a90;
            case 0x133A94u: goto label_133a94;
            case 0x133A98u: goto label_133a98;
            case 0x133A9Cu: goto label_133a9c;
            case 0x133AA0u: goto label_133aa0;
            case 0x133AA4u: goto label_133aa4;
            case 0x133AA8u: goto label_133aa8;
            case 0x133AACu: goto label_133aac;
            case 0x133AB0u: goto label_133ab0;
            case 0x133AB4u: goto label_133ab4;
            case 0x133AB8u: goto label_133ab8;
            case 0x133ABCu: goto label_133abc;
            case 0x133AC0u: goto label_133ac0;
            case 0x133AC4u: goto label_133ac4;
            case 0x133AC8u: goto label_133ac8;
            case 0x133ACCu: goto label_133acc;
            case 0x133AD0u: goto label_133ad0;
            case 0x133AD4u: goto label_133ad4;
            case 0x133AD8u: goto label_133ad8;
            case 0x133ADCu: goto label_133adc;
            case 0x133AE0u: goto label_133ae0;
            case 0x133AE4u: goto label_133ae4;
            case 0x133AE8u: goto label_133ae8;
            case 0x133AECu: goto label_133aec;
            case 0x133AF0u: goto label_133af0;
            case 0x133AF4u: goto label_133af4;
            case 0x133AF8u: goto label_133af8;
            case 0x133AFCu: goto label_133afc;
            case 0x133B00u: goto label_133b00;
            case 0x133B04u: goto label_133b04;
            case 0x133B08u: goto label_133b08;
            case 0x133B0Cu: goto label_133b0c;
            case 0x133B10u: goto label_133b10;
            case 0x133B14u: goto label_133b14;
            case 0x133B18u: goto label_133b18;
            case 0x133B1Cu: goto label_133b1c;
            case 0x133B20u: goto label_133b20;
            case 0x133B24u: goto label_133b24;
            case 0x133B28u: goto label_133b28;
            case 0x133B2Cu: goto label_133b2c;
            case 0x133B30u: goto label_133b30;
            case 0x133B34u: goto label_133b34;
            case 0x133B38u: goto label_133b38;
            case 0x133B3Cu: goto label_133b3c;
            case 0x133B40u: goto label_133b40;
            case 0x133B44u: goto label_133b44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x133AB8u;
label_133ab8:
    // 0x133ab8: 0x27bdffe0
    ctx->pc = 0x133ab8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_133abc:
    // 0x133abc: 0xffb00000
    ctx->pc = 0x133abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_133ac0:
    // 0x133ac0: 0x80802d
    ctx->pc = 0x133ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_133ac4:
    // 0x133ac4: 0xffb10008
    ctx->pc = 0x133ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_133ac8:
    // 0x133ac8: 0xffbf0010
    ctx->pc = 0x133ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_133acc:
    // 0x133acc: 0x8e110008
    ctx->pc = 0x133accu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_133ad0:
    // 0x133ad0: 0x12200017
label_133ad4:
    if (ctx->pc == 0x133AD4u) {
        ctx->pc = 0x133AD4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x133AD8u;
        goto label_133ad8;
    }
    ctx->pc = 0x133AD0u;
    {
        const bool branch_taken_0x133ad0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x133AD4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        if (branch_taken_0x133ad0) {
            ctx->pc = 0x133B30u;
            goto label_133b30;
        }
    }
    ctx->pc = 0x133AD8u;
label_133ad8:
    // 0x133ad8: 0x50800016
label_133adc:
    if (ctx->pc == 0x133ADCu) {
        ctx->pc = 0x133ADCu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x133AE0u;
        goto label_133ae0;
    }
    ctx->pc = 0x133AD8u;
    {
        const bool branch_taken_0x133ad8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x133ad8) {
            ctx->pc = 0x133ADCu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x133B34u;
            goto label_133b34;
        }
    }
    ctx->pc = 0x133AE0u;
label_133ae0:
    // 0x133ae0: 0xc04b620
label_133ae4:
    if (ctx->pc == 0x133AE4u) {
        ctx->pc = 0x133AE8u;
        goto label_133ae8;
    }
    ctx->pc = 0x133AE0u;
    SET_GPR_U32(ctx, 31, 0x133AE8u);
    ctx->pc = 0x12D880u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D880_0x12d880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133AE8u; }
    }
    if (ctx->pc != 0x133AE8u) { return; }
    ctx->pc = 0x133AE8u;
label_133ae8:
    // 0x133ae8: 0x2405ffff
    ctx->pc = 0x133ae8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_133aec:
    // 0x133aec: 0x40302d
    ctx->pc = 0x133aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133af0:
    // 0x133af0: 0x24c207ff
    ctx->pc = 0x133af0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 2047));
label_133af4:
    // 0x133af4: 0x28c30000
    ctx->pc = 0x133af4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 0));
label_133af8:
    // 0x133af8: 0x43300b
    ctx->pc = 0x133af8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 2));
label_133afc:
    // 0x133afc: 0x8202006c
    ctx->pc = 0x133afcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
label_133b00:
    // 0x133b00: 0x14400009
label_133b04:
    if (ctx->pc == 0x133B04u) {
        ctx->pc = 0x133B04u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x133B08u;
        goto label_133b08;
    }
    ctx->pc = 0x133B00u;
    {
        const bool branch_taken_0x133b00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x133B04u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x133b00) {
            ctx->pc = 0x133B28u;
            goto label_133b28;
        }
    }
    ctx->pc = 0x133B08u;
label_133b08:
    // 0x133b08: 0xc04b5d2
label_133b0c:
    if (ctx->pc == 0x133B0Cu) {
        ctx->pc = 0x133B0Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x133B10u;
        goto label_133b10;
    }
    ctx->pc = 0x133B08u;
    SET_GPR_U32(ctx, 31, 0x133B10u);
    ctx->pc = 0x133B0Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x12D748u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D748_0x12d748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133B10u; }
    }
    if (ctx->pc != 0x133B10u) { return; }
    ctx->pc = 0x133B10u;
label_133b10:
    // 0x133b10: 0x8e040008
    ctx->pc = 0x133b10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_133b14:
    // 0x133b14: 0x3c057fff
    ctx->pc = 0x133b14u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32767 << 16));
label_133b18:
    // 0x133b18: 0xc04c1ea
label_133b1c:
    if (ctx->pc == 0x133B1Cu) {
        ctx->pc = 0x133B1Cu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
        ctx->pc = 0x133B20u;
        goto label_133b20;
    }
    ctx->pc = 0x133B18u;
    SET_GPR_U32(ctx, 31, 0x133B20u);
    ctx->pc = 0x133B1Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    ctx->pc = 0x1307A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001307A8_0x1307a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133B20u; }
    }
    if (ctx->pc != 0x133B20u) { return; }
    ctx->pc = 0x133B20u;
label_133b20:
    // 0x133b20: 0x10000004
label_133b24:
    if (ctx->pc == 0x133B24u) {
        ctx->pc = 0x133B24u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x133B28u;
        goto label_133b28;
    }
    ctx->pc = 0x133B20u;
    {
        const bool branch_taken_0x133b20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x133B24u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x133b20) {
            ctx->pc = 0x133B34u;
            goto label_133b34;
        }
    }
    ctx->pc = 0x133B28u;
label_133b28:
    // 0x133b28: 0xc04c170
label_133b2c:
    if (ctx->pc == 0x133B2Cu) {
        ctx->pc = 0x133B2Cu;
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 11));
        ctx->pc = 0x133B30u;
        goto label_133b30;
    }
    ctx->pc = 0x133B28u;
    SET_GPR_U32(ctx, 31, 0x133B30u);
    ctx->pc = 0x133B2Cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 11));
    ctx->pc = 0x1305C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001305C0_0x1305c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133B30u; }
    }
    if (ctx->pc != 0x133B30u) { return; }
    ctx->pc = 0x133B30u;
label_133b30:
    // 0x133b30: 0xdfb00000
    ctx->pc = 0x133b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_133b34:
    // 0x133b34: 0xdfb10008
    ctx->pc = 0x133b34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_133b38:
    // 0x133b38: 0xdfbf0010
    ctx->pc = 0x133b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_133b3c:
    // 0x133b3c: 0x3e00008
label_133b40:
    if (ctx->pc == 0x133B40u) {
        ctx->pc = 0x133B40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x133B44u;
        goto label_133b44;
    }
    ctx->pc = 0x133B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133B40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133490u: goto label_133490;
            case 0x133494u: goto label_133494;
            case 0x133498u: goto label_133498;
            case 0x13349Cu: goto label_13349c;
            case 0x1334A0u: goto label_1334a0;
            case 0x1334A4u: goto label_1334a4;
            case 0x1334A8u: goto label_1334a8;
            case 0x1334ACu: goto label_1334ac;
            case 0x1334B0u: goto label_1334b0;
            case 0x1334B4u: goto label_1334b4;
            case 0x1334B8u: goto label_1334b8;
            case 0x1334BCu: goto label_1334bc;
            case 0x1334C0u: goto label_1334c0;
            case 0x1334C4u: goto label_1334c4;
            case 0x1334C8u: goto label_1334c8;
            case 0x1334CCu: goto label_1334cc;
            case 0x1334D0u: goto label_1334d0;
            case 0x1334D4u: goto label_1334d4;
            case 0x1334D8u: goto label_1334d8;
            case 0x1334DCu: goto label_1334dc;
            case 0x1334E0u: goto label_1334e0;
            case 0x1334E4u: goto label_1334e4;
            case 0x1334E8u: goto label_1334e8;
            case 0x1334ECu: goto label_1334ec;
            case 0x1334F0u: goto label_1334f0;
            case 0x1334F4u: goto label_1334f4;
            case 0x1334F8u: goto label_1334f8;
            case 0x1334FCu: goto label_1334fc;
            case 0x133500u: goto label_133500;
            case 0x133504u: goto label_133504;
            case 0x133508u: goto label_133508;
            case 0x13350Cu: goto label_13350c;
            case 0x133510u: goto label_133510;
            case 0x133514u: goto label_133514;
            case 0x133518u: goto label_133518;
            case 0x13351Cu: goto label_13351c;
            case 0x133520u: goto label_133520;
            case 0x133524u: goto label_133524;
            case 0x133528u: goto label_133528;
            case 0x13352Cu: goto label_13352c;
            case 0x133530u: goto label_133530;
            case 0x133534u: goto label_133534;
            case 0x133538u: goto label_133538;
            case 0x13353Cu: goto label_13353c;
            case 0x133540u: goto label_133540;
            case 0x133544u: goto label_133544;
            case 0x133548u: goto label_133548;
            case 0x13354Cu: goto label_13354c;
            case 0x133550u: goto label_133550;
            case 0x133554u: goto label_133554;
            case 0x133558u: goto label_133558;
            case 0x13355Cu: goto label_13355c;
            case 0x133560u: goto label_133560;
            case 0x133564u: goto label_133564;
            case 0x133568u: goto label_133568;
            case 0x13356Cu: goto label_13356c;
            case 0x133570u: goto label_133570;
            case 0x133574u: goto label_133574;
            case 0x133578u: goto label_133578;
            case 0x13357Cu: goto label_13357c;
            case 0x133580u: goto label_133580;
            case 0x133584u: goto label_133584;
            case 0x133588u: goto label_133588;
            case 0x13358Cu: goto label_13358c;
            case 0x133590u: goto label_133590;
            case 0x133594u: goto label_133594;
            case 0x133598u: goto label_133598;
            case 0x13359Cu: goto label_13359c;
            case 0x1335A0u: goto label_1335a0;
            case 0x1335A4u: goto label_1335a4;
            case 0x1335A8u: goto label_1335a8;
            case 0x1335ACu: goto label_1335ac;
            case 0x1335B0u: goto label_1335b0;
            case 0x1335B4u: goto label_1335b4;
            case 0x1335B8u: goto label_1335b8;
            case 0x1335BCu: goto label_1335bc;
            case 0x1335C0u: goto label_1335c0;
            case 0x1335C4u: goto label_1335c4;
            case 0x1335C8u: goto label_1335c8;
            case 0x1335CCu: goto label_1335cc;
            case 0x1335D0u: goto label_1335d0;
            case 0x1335D4u: goto label_1335d4;
            case 0x1335D8u: goto label_1335d8;
            case 0x1335DCu: goto label_1335dc;
            case 0x1335E0u: goto label_1335e0;
            case 0x1335E4u: goto label_1335e4;
            case 0x1335E8u: goto label_1335e8;
            case 0x1335ECu: goto label_1335ec;
            case 0x1335F0u: goto label_1335f0;
            case 0x1335F4u: goto label_1335f4;
            case 0x1335F8u: goto label_1335f8;
            case 0x1335FCu: goto label_1335fc;
            case 0x133600u: goto label_133600;
            case 0x133604u: goto label_133604;
            case 0x133608u: goto label_133608;
            case 0x13360Cu: goto label_13360c;
            case 0x133610u: goto label_133610;
            case 0x133614u: goto label_133614;
            case 0x133618u: goto label_133618;
            case 0x13361Cu: goto label_13361c;
            case 0x133620u: goto label_133620;
            case 0x133624u: goto label_133624;
            case 0x133628u: goto label_133628;
            case 0x13362Cu: goto label_13362c;
            case 0x133630u: goto label_133630;
            case 0x133634u: goto label_133634;
            case 0x133638u: goto label_133638;
            case 0x13363Cu: goto label_13363c;
            case 0x133640u: goto label_133640;
            case 0x133644u: goto label_133644;
            case 0x133648u: goto label_133648;
            case 0x13364Cu: goto label_13364c;
            case 0x133650u: goto label_133650;
            case 0x133654u: goto label_133654;
            case 0x133658u: goto label_133658;
            case 0x13365Cu: goto label_13365c;
            case 0x133660u: goto label_133660;
            case 0x133664u: goto label_133664;
            case 0x133668u: goto label_133668;
            case 0x13366Cu: goto label_13366c;
            case 0x133670u: goto label_133670;
            case 0x133674u: goto label_133674;
            case 0x133678u: goto label_133678;
            case 0x13367Cu: goto label_13367c;
            case 0x133680u: goto label_133680;
            case 0x133684u: goto label_133684;
            case 0x133688u: goto label_133688;
            case 0x13368Cu: goto label_13368c;
            case 0x133690u: goto label_133690;
            case 0x133694u: goto label_133694;
            case 0x133698u: goto label_133698;
            case 0x13369Cu: goto label_13369c;
            case 0x1336A0u: goto label_1336a0;
            case 0x1336A4u: goto label_1336a4;
            case 0x1336A8u: goto label_1336a8;
            case 0x1336ACu: goto label_1336ac;
            case 0x1336B0u: goto label_1336b0;
            case 0x1336B4u: goto label_1336b4;
            case 0x1336B8u: goto label_1336b8;
            case 0x1336BCu: goto label_1336bc;
            case 0x1336C0u: goto label_1336c0;
            case 0x1336C4u: goto label_1336c4;
            case 0x1336C8u: goto label_1336c8;
            case 0x1336CCu: goto label_1336cc;
            case 0x1336D0u: goto label_1336d0;
            case 0x1336D4u: goto label_1336d4;
            case 0x1336D8u: goto label_1336d8;
            case 0x1336DCu: goto label_1336dc;
            case 0x1336E0u: goto label_1336e0;
            case 0x1336E4u: goto label_1336e4;
            case 0x1336E8u: goto label_1336e8;
            case 0x1336ECu: goto label_1336ec;
            case 0x1336F0u: goto label_1336f0;
            case 0x1336F4u: goto label_1336f4;
            case 0x1336F8u: goto label_1336f8;
            case 0x1336FCu: goto label_1336fc;
            case 0x133700u: goto label_133700;
            case 0x133704u: goto label_133704;
            case 0x133708u: goto label_133708;
            case 0x13370Cu: goto label_13370c;
            case 0x133710u: goto label_133710;
            case 0x133714u: goto label_133714;
            case 0x133718u: goto label_133718;
            case 0x13371Cu: goto label_13371c;
            case 0x133720u: goto label_133720;
            case 0x133724u: goto label_133724;
            case 0x133728u: goto label_133728;
            case 0x13372Cu: goto label_13372c;
            case 0x133730u: goto label_133730;
            case 0x133734u: goto label_133734;
            case 0x133738u: goto label_133738;
            case 0x13373Cu: goto label_13373c;
            case 0x133740u: goto label_133740;
            case 0x133744u: goto label_133744;
            case 0x133748u: goto label_133748;
            case 0x13374Cu: goto label_13374c;
            case 0x133750u: goto label_133750;
            case 0x133754u: goto label_133754;
            case 0x133758u: goto label_133758;
            case 0x13375Cu: goto label_13375c;
            case 0x133760u: goto label_133760;
            case 0x133764u: goto label_133764;
            case 0x133768u: goto label_133768;
            case 0x13376Cu: goto label_13376c;
            case 0x133770u: goto label_133770;
            case 0x133774u: goto label_133774;
            case 0x133778u: goto label_133778;
            case 0x13377Cu: goto label_13377c;
            case 0x133780u: goto label_133780;
            case 0x133784u: goto label_133784;
            case 0x133788u: goto label_133788;
            case 0x13378Cu: goto label_13378c;
            case 0x133790u: goto label_133790;
            case 0x133794u: goto label_133794;
            case 0x133798u: goto label_133798;
            case 0x13379Cu: goto label_13379c;
            case 0x1337A0u: goto label_1337a0;
            case 0x1337A4u: goto label_1337a4;
            case 0x1337A8u: goto label_1337a8;
            case 0x1337ACu: goto label_1337ac;
            case 0x1337B0u: goto label_1337b0;
            case 0x1337B4u: goto label_1337b4;
            case 0x1337B8u: goto label_1337b8;
            case 0x1337BCu: goto label_1337bc;
            case 0x1337C0u: goto label_1337c0;
            case 0x1337C4u: goto label_1337c4;
            case 0x1337C8u: goto label_1337c8;
            case 0x1337CCu: goto label_1337cc;
            case 0x1337D0u: goto label_1337d0;
            case 0x1337D4u: goto label_1337d4;
            case 0x1337D8u: goto label_1337d8;
            case 0x1337DCu: goto label_1337dc;
            case 0x1337E0u: goto label_1337e0;
            case 0x1337E4u: goto label_1337e4;
            case 0x1337E8u: goto label_1337e8;
            case 0x1337ECu: goto label_1337ec;
            case 0x1337F0u: goto label_1337f0;
            case 0x1337F4u: goto label_1337f4;
            case 0x1337F8u: goto label_1337f8;
            case 0x1337FCu: goto label_1337fc;
            case 0x133800u: goto label_133800;
            case 0x133804u: goto label_133804;
            case 0x133808u: goto label_133808;
            case 0x13380Cu: goto label_13380c;
            case 0x133810u: goto label_133810;
            case 0x133814u: goto label_133814;
            case 0x133818u: goto label_133818;
            case 0x13381Cu: goto label_13381c;
            case 0x133820u: goto label_133820;
            case 0x133824u: goto label_133824;
            case 0x133828u: goto label_133828;
            case 0x13382Cu: goto label_13382c;
            case 0x133830u: goto label_133830;
            case 0x133834u: goto label_133834;
            case 0x133838u: goto label_133838;
            case 0x13383Cu: goto label_13383c;
            case 0x133840u: goto label_133840;
            case 0x133844u: goto label_133844;
            case 0x133848u: goto label_133848;
            case 0x13384Cu: goto label_13384c;
            case 0x133850u: goto label_133850;
            case 0x133854u: goto label_133854;
            case 0x133858u: goto label_133858;
            case 0x13385Cu: goto label_13385c;
            case 0x133860u: goto label_133860;
            case 0x133864u: goto label_133864;
            case 0x133868u: goto label_133868;
            case 0x13386Cu: goto label_13386c;
            case 0x133870u: goto label_133870;
            case 0x133874u: goto label_133874;
            case 0x133878u: goto label_133878;
            case 0x13387Cu: goto label_13387c;
            case 0x133880u: goto label_133880;
            case 0x133884u: goto label_133884;
            case 0x133888u: goto label_133888;
            case 0x13388Cu: goto label_13388c;
            case 0x133890u: goto label_133890;
            case 0x133894u: goto label_133894;
            case 0x133898u: goto label_133898;
            case 0x13389Cu: goto label_13389c;
            case 0x1338A0u: goto label_1338a0;
            case 0x1338A4u: goto label_1338a4;
            case 0x1338A8u: goto label_1338a8;
            case 0x1338ACu: goto label_1338ac;
            case 0x1338B0u: goto label_1338b0;
            case 0x1338B4u: goto label_1338b4;
            case 0x1338B8u: goto label_1338b8;
            case 0x1338BCu: goto label_1338bc;
            case 0x1338C0u: goto label_1338c0;
            case 0x1338C4u: goto label_1338c4;
            case 0x1338C8u: goto label_1338c8;
            case 0x1338CCu: goto label_1338cc;
            case 0x1338D0u: goto label_1338d0;
            case 0x1338D4u: goto label_1338d4;
            case 0x1338D8u: goto label_1338d8;
            case 0x1338DCu: goto label_1338dc;
            case 0x1338E0u: goto label_1338e0;
            case 0x1338E4u: goto label_1338e4;
            case 0x1338E8u: goto label_1338e8;
            case 0x1338ECu: goto label_1338ec;
            case 0x1338F0u: goto label_1338f0;
            case 0x1338F4u: goto label_1338f4;
            case 0x1338F8u: goto label_1338f8;
            case 0x1338FCu: goto label_1338fc;
            case 0x133900u: goto label_133900;
            case 0x133904u: goto label_133904;
            case 0x133908u: goto label_133908;
            case 0x13390Cu: goto label_13390c;
            case 0x133910u: goto label_133910;
            case 0x133914u: goto label_133914;
            case 0x133918u: goto label_133918;
            case 0x13391Cu: goto label_13391c;
            case 0x133920u: goto label_133920;
            case 0x133924u: goto label_133924;
            case 0x133928u: goto label_133928;
            case 0x13392Cu: goto label_13392c;
            case 0x133930u: goto label_133930;
            case 0x133934u: goto label_133934;
            case 0x133938u: goto label_133938;
            case 0x13393Cu: goto label_13393c;
            case 0x133940u: goto label_133940;
            case 0x133944u: goto label_133944;
            case 0x133948u: goto label_133948;
            case 0x13394Cu: goto label_13394c;
            case 0x133950u: goto label_133950;
            case 0x133954u: goto label_133954;
            case 0x133958u: goto label_133958;
            case 0x13395Cu: goto label_13395c;
            case 0x133960u: goto label_133960;
            case 0x133964u: goto label_133964;
            case 0x133968u: goto label_133968;
            case 0x13396Cu: goto label_13396c;
            case 0x133970u: goto label_133970;
            case 0x133974u: goto label_133974;
            case 0x133978u: goto label_133978;
            case 0x13397Cu: goto label_13397c;
            case 0x133980u: goto label_133980;
            case 0x133984u: goto label_133984;
            case 0x133988u: goto label_133988;
            case 0x13398Cu: goto label_13398c;
            case 0x133990u: goto label_133990;
            case 0x133994u: goto label_133994;
            case 0x133998u: goto label_133998;
            case 0x13399Cu: goto label_13399c;
            case 0x1339A0u: goto label_1339a0;
            case 0x1339A4u: goto label_1339a4;
            case 0x1339A8u: goto label_1339a8;
            case 0x1339ACu: goto label_1339ac;
            case 0x1339B0u: goto label_1339b0;
            case 0x1339B4u: goto label_1339b4;
            case 0x1339B8u: goto label_1339b8;
            case 0x1339BCu: goto label_1339bc;
            case 0x1339C0u: goto label_1339c0;
            case 0x1339C4u: goto label_1339c4;
            case 0x1339C8u: goto label_1339c8;
            case 0x1339CCu: goto label_1339cc;
            case 0x1339D0u: goto label_1339d0;
            case 0x1339D4u: goto label_1339d4;
            case 0x1339D8u: goto label_1339d8;
            case 0x1339DCu: goto label_1339dc;
            case 0x1339E0u: goto label_1339e0;
            case 0x1339E4u: goto label_1339e4;
            case 0x1339E8u: goto label_1339e8;
            case 0x1339ECu: goto label_1339ec;
            case 0x1339F0u: goto label_1339f0;
            case 0x1339F4u: goto label_1339f4;
            case 0x1339F8u: goto label_1339f8;
            case 0x1339FCu: goto label_1339fc;
            case 0x133A00u: goto label_133a00;
            case 0x133A04u: goto label_133a04;
            case 0x133A08u: goto label_133a08;
            case 0x133A0Cu: goto label_133a0c;
            case 0x133A10u: goto label_133a10;
            case 0x133A14u: goto label_133a14;
            case 0x133A18u: goto label_133a18;
            case 0x133A1Cu: goto label_133a1c;
            case 0x133A20u: goto label_133a20;
            case 0x133A24u: goto label_133a24;
            case 0x133A28u: goto label_133a28;
            case 0x133A2Cu: goto label_133a2c;
            case 0x133A30u: goto label_133a30;
            case 0x133A34u: goto label_133a34;
            case 0x133A38u: goto label_133a38;
            case 0x133A3Cu: goto label_133a3c;
            case 0x133A40u: goto label_133a40;
            case 0x133A44u: goto label_133a44;
            case 0x133A48u: goto label_133a48;
            case 0x133A4Cu: goto label_133a4c;
            case 0x133A50u: goto label_133a50;
            case 0x133A54u: goto label_133a54;
            case 0x133A58u: goto label_133a58;
            case 0x133A5Cu: goto label_133a5c;
            case 0x133A60u: goto label_133a60;
            case 0x133A64u: goto label_133a64;
            case 0x133A68u: goto label_133a68;
            case 0x133A6Cu: goto label_133a6c;
            case 0x133A70u: goto label_133a70;
            case 0x133A74u: goto label_133a74;
            case 0x133A78u: goto label_133a78;
            case 0x133A7Cu: goto label_133a7c;
            case 0x133A80u: goto label_133a80;
            case 0x133A84u: goto label_133a84;
            case 0x133A88u: goto label_133a88;
            case 0x133A8Cu: goto label_133a8c;
            case 0x133A90u: goto label_133a90;
            case 0x133A94u: goto label_133a94;
            case 0x133A98u: goto label_133a98;
            case 0x133A9Cu: goto label_133a9c;
            case 0x133AA0u: goto label_133aa0;
            case 0x133AA4u: goto label_133aa4;
            case 0x133AA8u: goto label_133aa8;
            case 0x133AACu: goto label_133aac;
            case 0x133AB0u: goto label_133ab0;
            case 0x133AB4u: goto label_133ab4;
            case 0x133AB8u: goto label_133ab8;
            case 0x133ABCu: goto label_133abc;
            case 0x133AC0u: goto label_133ac0;
            case 0x133AC4u: goto label_133ac4;
            case 0x133AC8u: goto label_133ac8;
            case 0x133ACCu: goto label_133acc;
            case 0x133AD0u: goto label_133ad0;
            case 0x133AD4u: goto label_133ad4;
            case 0x133AD8u: goto label_133ad8;
            case 0x133ADCu: goto label_133adc;
            case 0x133AE0u: goto label_133ae0;
            case 0x133AE4u: goto label_133ae4;
            case 0x133AE8u: goto label_133ae8;
            case 0x133AECu: goto label_133aec;
            case 0x133AF0u: goto label_133af0;
            case 0x133AF4u: goto label_133af4;
            case 0x133AF8u: goto label_133af8;
            case 0x133AFCu: goto label_133afc;
            case 0x133B00u: goto label_133b00;
            case 0x133B04u: goto label_133b04;
            case 0x133B08u: goto label_133b08;
            case 0x133B0Cu: goto label_133b0c;
            case 0x133B10u: goto label_133b10;
            case 0x133B14u: goto label_133b14;
            case 0x133B18u: goto label_133b18;
            case 0x133B1Cu: goto label_133b1c;
            case 0x133B20u: goto label_133b20;
            case 0x133B24u: goto label_133b24;
            case 0x133B28u: goto label_133b28;
            case 0x133B2Cu: goto label_133b2c;
            case 0x133B30u: goto label_133b30;
            case 0x133B34u: goto label_133b34;
            case 0x133B38u: goto label_133b38;
            case 0x133B3Cu: goto label_133b3c;
            case 0x133B40u: goto label_133b40;
            case 0x133B44u: goto label_133b44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x133B44u;
label_133b44:
    // 0x133b44: 0x0
    ctx->pc = 0x133b44u;
    // NOP
}
