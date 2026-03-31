#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001506C0
// Address: 0x1506c0 - 0x150a48
void sub_001506C0_0x1506c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1506c0u;

label_1506c0:
    // 0x1506c0: 0x27bdfff0
    ctx->pc = 0x1506c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1506c4:
    // 0x1506c4: 0xa0102d
    ctx->pc = 0x1506c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1506c8:
    // 0x1506c8: 0xffbf0000
    ctx->pc = 0x1506c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1506cc:
    // 0x1506cc: 0x10400006
label_1506d0:
    if (ctx->pc == 0x1506D0u) {
        ctx->pc = 0x1506D0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x1506D4u;
        goto label_1506d4;
    }
    ctx->pc = 0x1506CCu;
    {
        const bool branch_taken_0x1506cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1506D0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x1506cc) {
            ctx->pc = 0x1506E8u;
            goto label_1506e8;
        }
    }
    ctx->pc = 0x1506D4u;
label_1506d4:
    // 0x1506d4: 0x8c820000
    ctx->pc = 0x1506d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1506d8:
    // 0x1506d8: 0x50400004
label_1506dc:
    if (ctx->pc == 0x1506DCu) {
        ctx->pc = 0x1506DCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1506E0u;
        goto label_1506e0;
    }
    ctx->pc = 0x1506D8u;
    {
        const bool branch_taken_0x1506d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1506d8) {
            ctx->pc = 0x1506DCu;
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1506ECu;
            goto label_1506ec;
        }
    }
    ctx->pc = 0x1506E0u;
label_1506e0:
    // 0x1506e0: 0x40f809
label_1506e4:
    if (ctx->pc == 0x1506E4u) {
        ctx->pc = 0x1506E4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x1506E8u;
        goto label_1506e8;
    }
    ctx->pc = 0x1506E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1506E8u);
        ctx->pc = 0x1506E4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1506C0u: goto label_1506c0;
            case 0x1506C4u: goto label_1506c4;
            case 0x1506C8u: goto label_1506c8;
            case 0x1506CCu: goto label_1506cc;
            case 0x1506D0u: goto label_1506d0;
            case 0x1506D4u: goto label_1506d4;
            case 0x1506D8u: goto label_1506d8;
            case 0x1506DCu: goto label_1506dc;
            case 0x1506E0u: goto label_1506e0;
            case 0x1506E4u: goto label_1506e4;
            case 0x1506E8u: goto label_1506e8;
            case 0x1506ECu: goto label_1506ec;
            case 0x1506F0u: goto label_1506f0;
            case 0x1506F4u: goto label_1506f4;
            case 0x1506F8u: goto label_1506f8;
            case 0x1506FCu: goto label_1506fc;
            case 0x150700u: goto label_150700;
            case 0x150704u: goto label_150704;
            case 0x150708u: goto label_150708;
            case 0x15070Cu: goto label_15070c;
            case 0x150710u: goto label_150710;
            case 0x150714u: goto label_150714;
            case 0x150718u: goto label_150718;
            case 0x15071Cu: goto label_15071c;
            case 0x150720u: goto label_150720;
            case 0x150724u: goto label_150724;
            case 0x150728u: goto label_150728;
            case 0x15072Cu: goto label_15072c;
            case 0x150730u: goto label_150730;
            case 0x150734u: goto label_150734;
            case 0x150738u: goto label_150738;
            case 0x15073Cu: goto label_15073c;
            case 0x150740u: goto label_150740;
            case 0x150744u: goto label_150744;
            case 0x150748u: goto label_150748;
            case 0x15074Cu: goto label_15074c;
            case 0x150750u: goto label_150750;
            case 0x150754u: goto label_150754;
            case 0x150758u: goto label_150758;
            case 0x15075Cu: goto label_15075c;
            case 0x150760u: goto label_150760;
            case 0x150764u: goto label_150764;
            case 0x150768u: goto label_150768;
            case 0x15076Cu: goto label_15076c;
            case 0x150770u: goto label_150770;
            case 0x150774u: goto label_150774;
            case 0x150778u: goto label_150778;
            case 0x15077Cu: goto label_15077c;
            case 0x150780u: goto label_150780;
            case 0x150784u: goto label_150784;
            case 0x150788u: goto label_150788;
            case 0x15078Cu: goto label_15078c;
            case 0x150790u: goto label_150790;
            case 0x150794u: goto label_150794;
            case 0x150798u: goto label_150798;
            case 0x15079Cu: goto label_15079c;
            case 0x1507A0u: goto label_1507a0;
            case 0x1507A4u: goto label_1507a4;
            case 0x1507A8u: goto label_1507a8;
            case 0x1507ACu: goto label_1507ac;
            case 0x1507B0u: goto label_1507b0;
            case 0x1507B4u: goto label_1507b4;
            case 0x1507B8u: goto label_1507b8;
            case 0x1507BCu: goto label_1507bc;
            case 0x1507C0u: goto label_1507c0;
            case 0x1507C4u: goto label_1507c4;
            case 0x1507C8u: goto label_1507c8;
            case 0x1507CCu: goto label_1507cc;
            case 0x1507D0u: goto label_1507d0;
            case 0x1507D4u: goto label_1507d4;
            case 0x1507D8u: goto label_1507d8;
            case 0x1507DCu: goto label_1507dc;
            case 0x1507E0u: goto label_1507e0;
            case 0x1507E4u: goto label_1507e4;
            case 0x1507E8u: goto label_1507e8;
            case 0x1507ECu: goto label_1507ec;
            case 0x1507F0u: goto label_1507f0;
            case 0x1507F4u: goto label_1507f4;
            case 0x1507F8u: goto label_1507f8;
            case 0x1507FCu: goto label_1507fc;
            case 0x150800u: goto label_150800;
            case 0x150804u: goto label_150804;
            case 0x150808u: goto label_150808;
            case 0x15080Cu: goto label_15080c;
            case 0x150810u: goto label_150810;
            case 0x150814u: goto label_150814;
            case 0x150818u: goto label_150818;
            case 0x15081Cu: goto label_15081c;
            case 0x150820u: goto label_150820;
            case 0x150824u: goto label_150824;
            case 0x150828u: goto label_150828;
            case 0x15082Cu: goto label_15082c;
            case 0x150830u: goto label_150830;
            case 0x150834u: goto label_150834;
            case 0x150838u: goto label_150838;
            case 0x15083Cu: goto label_15083c;
            case 0x150840u: goto label_150840;
            case 0x150844u: goto label_150844;
            case 0x150848u: goto label_150848;
            case 0x15084Cu: goto label_15084c;
            case 0x150850u: goto label_150850;
            case 0x150854u: goto label_150854;
            case 0x150858u: goto label_150858;
            case 0x15085Cu: goto label_15085c;
            case 0x150860u: goto label_150860;
            case 0x150864u: goto label_150864;
            case 0x150868u: goto label_150868;
            case 0x15086Cu: goto label_15086c;
            case 0x150870u: goto label_150870;
            case 0x150874u: goto label_150874;
            case 0x150878u: goto label_150878;
            case 0x15087Cu: goto label_15087c;
            case 0x150880u: goto label_150880;
            case 0x150884u: goto label_150884;
            case 0x150888u: goto label_150888;
            case 0x15088Cu: goto label_15088c;
            case 0x150890u: goto label_150890;
            case 0x150894u: goto label_150894;
            case 0x150898u: goto label_150898;
            case 0x15089Cu: goto label_15089c;
            case 0x1508A0u: goto label_1508a0;
            case 0x1508A4u: goto label_1508a4;
            case 0x1508A8u: goto label_1508a8;
            case 0x1508ACu: goto label_1508ac;
            case 0x1508B0u: goto label_1508b0;
            case 0x1508B4u: goto label_1508b4;
            case 0x1508B8u: goto label_1508b8;
            case 0x1508BCu: goto label_1508bc;
            case 0x1508C0u: goto label_1508c0;
            case 0x1508C4u: goto label_1508c4;
            case 0x1508C8u: goto label_1508c8;
            case 0x1508CCu: goto label_1508cc;
            case 0x1508D0u: goto label_1508d0;
            case 0x1508D4u: goto label_1508d4;
            case 0x1508D8u: goto label_1508d8;
            case 0x1508DCu: goto label_1508dc;
            case 0x1508E0u: goto label_1508e0;
            case 0x1508E4u: goto label_1508e4;
            case 0x1508E8u: goto label_1508e8;
            case 0x1508ECu: goto label_1508ec;
            case 0x1508F0u: goto label_1508f0;
            case 0x1508F4u: goto label_1508f4;
            case 0x1508F8u: goto label_1508f8;
            case 0x1508FCu: goto label_1508fc;
            case 0x150900u: goto label_150900;
            case 0x150904u: goto label_150904;
            case 0x150908u: goto label_150908;
            case 0x15090Cu: goto label_15090c;
            case 0x150910u: goto label_150910;
            case 0x150914u: goto label_150914;
            case 0x150918u: goto label_150918;
            case 0x15091Cu: goto label_15091c;
            case 0x150920u: goto label_150920;
            case 0x150924u: goto label_150924;
            case 0x150928u: goto label_150928;
            case 0x15092Cu: goto label_15092c;
            case 0x150930u: goto label_150930;
            case 0x150934u: goto label_150934;
            case 0x150938u: goto label_150938;
            case 0x15093Cu: goto label_15093c;
            case 0x150940u: goto label_150940;
            case 0x150944u: goto label_150944;
            case 0x150948u: goto label_150948;
            case 0x15094Cu: goto label_15094c;
            case 0x150950u: goto label_150950;
            case 0x150954u: goto label_150954;
            case 0x150958u: goto label_150958;
            case 0x15095Cu: goto label_15095c;
            case 0x150960u: goto label_150960;
            case 0x150964u: goto label_150964;
            case 0x150968u: goto label_150968;
            case 0x15096Cu: goto label_15096c;
            case 0x150970u: goto label_150970;
            case 0x150974u: goto label_150974;
            case 0x150978u: goto label_150978;
            case 0x15097Cu: goto label_15097c;
            case 0x150980u: goto label_150980;
            case 0x150984u: goto label_150984;
            case 0x150988u: goto label_150988;
            case 0x15098Cu: goto label_15098c;
            case 0x150990u: goto label_150990;
            case 0x150994u: goto label_150994;
            case 0x150998u: goto label_150998;
            case 0x15099Cu: goto label_15099c;
            case 0x1509A0u: goto label_1509a0;
            case 0x1509A4u: goto label_1509a4;
            case 0x1509A8u: goto label_1509a8;
            case 0x1509ACu: goto label_1509ac;
            case 0x1509B0u: goto label_1509b0;
            case 0x1509B4u: goto label_1509b4;
            case 0x1509B8u: goto label_1509b8;
            case 0x1509BCu: goto label_1509bc;
            case 0x1509C0u: goto label_1509c0;
            case 0x1509C4u: goto label_1509c4;
            case 0x1509C8u: goto label_1509c8;
            case 0x1509CCu: goto label_1509cc;
            case 0x1509D0u: goto label_1509d0;
            case 0x1509D4u: goto label_1509d4;
            case 0x1509D8u: goto label_1509d8;
            case 0x1509DCu: goto label_1509dc;
            case 0x1509E0u: goto label_1509e0;
            case 0x1509E4u: goto label_1509e4;
            case 0x1509E8u: goto label_1509e8;
            case 0x1509ECu: goto label_1509ec;
            case 0x1509F0u: goto label_1509f0;
            case 0x1509F4u: goto label_1509f4;
            case 0x1509F8u: goto label_1509f8;
            case 0x1509FCu: goto label_1509fc;
            case 0x150A00u: goto label_150a00;
            case 0x150A04u: goto label_150a04;
            case 0x150A08u: goto label_150a08;
            case 0x150A0Cu: goto label_150a0c;
            case 0x150A10u: goto label_150a10;
            case 0x150A14u: goto label_150a14;
            case 0x150A18u: goto label_150a18;
            case 0x150A1Cu: goto label_150a1c;
            case 0x150A20u: goto label_150a20;
            case 0x150A24u: goto label_150a24;
            case 0x150A28u: goto label_150a28;
            case 0x150A2Cu: goto label_150a2c;
            case 0x150A30u: goto label_150a30;
            case 0x150A34u: goto label_150a34;
            case 0x150A38u: goto label_150a38;
            case 0x150A3Cu: goto label_150a3c;
            case 0x150A40u: goto label_150a40;
            case 0x150A44u: goto label_150a44;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1506E8u; }
            if (ctx->pc != 0x1506E8u) { return; }
        }
    }
    ctx->pc = 0x1506E8u;
label_1506e8:
    // 0x1506e8: 0xdfbf0000
    ctx->pc = 0x1506e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1506ec:
    // 0x1506ec: 0x3e00008
label_1506f0:
    if (ctx->pc == 0x1506F0u) {
        ctx->pc = 0x1506F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1506F4u;
        goto label_1506f4;
    }
    ctx->pc = 0x1506ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1506F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1506C0u: goto label_1506c0;
            case 0x1506C4u: goto label_1506c4;
            case 0x1506C8u: goto label_1506c8;
            case 0x1506CCu: goto label_1506cc;
            case 0x1506D0u: goto label_1506d0;
            case 0x1506D4u: goto label_1506d4;
            case 0x1506D8u: goto label_1506d8;
            case 0x1506DCu: goto label_1506dc;
            case 0x1506E0u: goto label_1506e0;
            case 0x1506E4u: goto label_1506e4;
            case 0x1506E8u: goto label_1506e8;
            case 0x1506ECu: goto label_1506ec;
            case 0x1506F0u: goto label_1506f0;
            case 0x1506F4u: goto label_1506f4;
            case 0x1506F8u: goto label_1506f8;
            case 0x1506FCu: goto label_1506fc;
            case 0x150700u: goto label_150700;
            case 0x150704u: goto label_150704;
            case 0x150708u: goto label_150708;
            case 0x15070Cu: goto label_15070c;
            case 0x150710u: goto label_150710;
            case 0x150714u: goto label_150714;
            case 0x150718u: goto label_150718;
            case 0x15071Cu: goto label_15071c;
            case 0x150720u: goto label_150720;
            case 0x150724u: goto label_150724;
            case 0x150728u: goto label_150728;
            case 0x15072Cu: goto label_15072c;
            case 0x150730u: goto label_150730;
            case 0x150734u: goto label_150734;
            case 0x150738u: goto label_150738;
            case 0x15073Cu: goto label_15073c;
            case 0x150740u: goto label_150740;
            case 0x150744u: goto label_150744;
            case 0x150748u: goto label_150748;
            case 0x15074Cu: goto label_15074c;
            case 0x150750u: goto label_150750;
            case 0x150754u: goto label_150754;
            case 0x150758u: goto label_150758;
            case 0x15075Cu: goto label_15075c;
            case 0x150760u: goto label_150760;
            case 0x150764u: goto label_150764;
            case 0x150768u: goto label_150768;
            case 0x15076Cu: goto label_15076c;
            case 0x150770u: goto label_150770;
            case 0x150774u: goto label_150774;
            case 0x150778u: goto label_150778;
            case 0x15077Cu: goto label_15077c;
            case 0x150780u: goto label_150780;
            case 0x150784u: goto label_150784;
            case 0x150788u: goto label_150788;
            case 0x15078Cu: goto label_15078c;
            case 0x150790u: goto label_150790;
            case 0x150794u: goto label_150794;
            case 0x150798u: goto label_150798;
            case 0x15079Cu: goto label_15079c;
            case 0x1507A0u: goto label_1507a0;
            case 0x1507A4u: goto label_1507a4;
            case 0x1507A8u: goto label_1507a8;
            case 0x1507ACu: goto label_1507ac;
            case 0x1507B0u: goto label_1507b0;
            case 0x1507B4u: goto label_1507b4;
            case 0x1507B8u: goto label_1507b8;
            case 0x1507BCu: goto label_1507bc;
            case 0x1507C0u: goto label_1507c0;
            case 0x1507C4u: goto label_1507c4;
            case 0x1507C8u: goto label_1507c8;
            case 0x1507CCu: goto label_1507cc;
            case 0x1507D0u: goto label_1507d0;
            case 0x1507D4u: goto label_1507d4;
            case 0x1507D8u: goto label_1507d8;
            case 0x1507DCu: goto label_1507dc;
            case 0x1507E0u: goto label_1507e0;
            case 0x1507E4u: goto label_1507e4;
            case 0x1507E8u: goto label_1507e8;
            case 0x1507ECu: goto label_1507ec;
            case 0x1507F0u: goto label_1507f0;
            case 0x1507F4u: goto label_1507f4;
            case 0x1507F8u: goto label_1507f8;
            case 0x1507FCu: goto label_1507fc;
            case 0x150800u: goto label_150800;
            case 0x150804u: goto label_150804;
            case 0x150808u: goto label_150808;
            case 0x15080Cu: goto label_15080c;
            case 0x150810u: goto label_150810;
            case 0x150814u: goto label_150814;
            case 0x150818u: goto label_150818;
            case 0x15081Cu: goto label_15081c;
            case 0x150820u: goto label_150820;
            case 0x150824u: goto label_150824;
            case 0x150828u: goto label_150828;
            case 0x15082Cu: goto label_15082c;
            case 0x150830u: goto label_150830;
            case 0x150834u: goto label_150834;
            case 0x150838u: goto label_150838;
            case 0x15083Cu: goto label_15083c;
            case 0x150840u: goto label_150840;
            case 0x150844u: goto label_150844;
            case 0x150848u: goto label_150848;
            case 0x15084Cu: goto label_15084c;
            case 0x150850u: goto label_150850;
            case 0x150854u: goto label_150854;
            case 0x150858u: goto label_150858;
            case 0x15085Cu: goto label_15085c;
            case 0x150860u: goto label_150860;
            case 0x150864u: goto label_150864;
            case 0x150868u: goto label_150868;
            case 0x15086Cu: goto label_15086c;
            case 0x150870u: goto label_150870;
            case 0x150874u: goto label_150874;
            case 0x150878u: goto label_150878;
            case 0x15087Cu: goto label_15087c;
            case 0x150880u: goto label_150880;
            case 0x150884u: goto label_150884;
            case 0x150888u: goto label_150888;
            case 0x15088Cu: goto label_15088c;
            case 0x150890u: goto label_150890;
            case 0x150894u: goto label_150894;
            case 0x150898u: goto label_150898;
            case 0x15089Cu: goto label_15089c;
            case 0x1508A0u: goto label_1508a0;
            case 0x1508A4u: goto label_1508a4;
            case 0x1508A8u: goto label_1508a8;
            case 0x1508ACu: goto label_1508ac;
            case 0x1508B0u: goto label_1508b0;
            case 0x1508B4u: goto label_1508b4;
            case 0x1508B8u: goto label_1508b8;
            case 0x1508BCu: goto label_1508bc;
            case 0x1508C0u: goto label_1508c0;
            case 0x1508C4u: goto label_1508c4;
            case 0x1508C8u: goto label_1508c8;
            case 0x1508CCu: goto label_1508cc;
            case 0x1508D0u: goto label_1508d0;
            case 0x1508D4u: goto label_1508d4;
            case 0x1508D8u: goto label_1508d8;
            case 0x1508DCu: goto label_1508dc;
            case 0x1508E0u: goto label_1508e0;
            case 0x1508E4u: goto label_1508e4;
            case 0x1508E8u: goto label_1508e8;
            case 0x1508ECu: goto label_1508ec;
            case 0x1508F0u: goto label_1508f0;
            case 0x1508F4u: goto label_1508f4;
            case 0x1508F8u: goto label_1508f8;
            case 0x1508FCu: goto label_1508fc;
            case 0x150900u: goto label_150900;
            case 0x150904u: goto label_150904;
            case 0x150908u: goto label_150908;
            case 0x15090Cu: goto label_15090c;
            case 0x150910u: goto label_150910;
            case 0x150914u: goto label_150914;
            case 0x150918u: goto label_150918;
            case 0x15091Cu: goto label_15091c;
            case 0x150920u: goto label_150920;
            case 0x150924u: goto label_150924;
            case 0x150928u: goto label_150928;
            case 0x15092Cu: goto label_15092c;
            case 0x150930u: goto label_150930;
            case 0x150934u: goto label_150934;
            case 0x150938u: goto label_150938;
            case 0x15093Cu: goto label_15093c;
            case 0x150940u: goto label_150940;
            case 0x150944u: goto label_150944;
            case 0x150948u: goto label_150948;
            case 0x15094Cu: goto label_15094c;
            case 0x150950u: goto label_150950;
            case 0x150954u: goto label_150954;
            case 0x150958u: goto label_150958;
            case 0x15095Cu: goto label_15095c;
            case 0x150960u: goto label_150960;
            case 0x150964u: goto label_150964;
            case 0x150968u: goto label_150968;
            case 0x15096Cu: goto label_15096c;
            case 0x150970u: goto label_150970;
            case 0x150974u: goto label_150974;
            case 0x150978u: goto label_150978;
            case 0x15097Cu: goto label_15097c;
            case 0x150980u: goto label_150980;
            case 0x150984u: goto label_150984;
            case 0x150988u: goto label_150988;
            case 0x15098Cu: goto label_15098c;
            case 0x150990u: goto label_150990;
            case 0x150994u: goto label_150994;
            case 0x150998u: goto label_150998;
            case 0x15099Cu: goto label_15099c;
            case 0x1509A0u: goto label_1509a0;
            case 0x1509A4u: goto label_1509a4;
            case 0x1509A8u: goto label_1509a8;
            case 0x1509ACu: goto label_1509ac;
            case 0x1509B0u: goto label_1509b0;
            case 0x1509B4u: goto label_1509b4;
            case 0x1509B8u: goto label_1509b8;
            case 0x1509BCu: goto label_1509bc;
            case 0x1509C0u: goto label_1509c0;
            case 0x1509C4u: goto label_1509c4;
            case 0x1509C8u: goto label_1509c8;
            case 0x1509CCu: goto label_1509cc;
            case 0x1509D0u: goto label_1509d0;
            case 0x1509D4u: goto label_1509d4;
            case 0x1509D8u: goto label_1509d8;
            case 0x1509DCu: goto label_1509dc;
            case 0x1509E0u: goto label_1509e0;
            case 0x1509E4u: goto label_1509e4;
            case 0x1509E8u: goto label_1509e8;
            case 0x1509ECu: goto label_1509ec;
            case 0x1509F0u: goto label_1509f0;
            case 0x1509F4u: goto label_1509f4;
            case 0x1509F8u: goto label_1509f8;
            case 0x1509FCu: goto label_1509fc;
            case 0x150A00u: goto label_150a00;
            case 0x150A04u: goto label_150a04;
            case 0x150A08u: goto label_150a08;
            case 0x150A0Cu: goto label_150a0c;
            case 0x150A10u: goto label_150a10;
            case 0x150A14u: goto label_150a14;
            case 0x150A18u: goto label_150a18;
            case 0x150A1Cu: goto label_150a1c;
            case 0x150A20u: goto label_150a20;
            case 0x150A24u: goto label_150a24;
            case 0x150A28u: goto label_150a28;
            case 0x150A2Cu: goto label_150a2c;
            case 0x150A30u: goto label_150a30;
            case 0x150A34u: goto label_150a34;
            case 0x150A38u: goto label_150a38;
            case 0x150A3Cu: goto label_150a3c;
            case 0x150A40u: goto label_150a40;
            case 0x150A44u: goto label_150a44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1506F4u;
label_1506f4:
    // 0x1506f4: 0x0
    ctx->pc = 0x1506f4u;
    // NOP
label_1506f8:
    // 0x1506f8: 0x27bdffd0
    ctx->pc = 0x1506f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1506fc:
    // 0x1506fc: 0xffb00000
    ctx->pc = 0x1506fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_150700:
    // 0x150700: 0xa0802d
    ctx->pc = 0x150700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_150704:
    // 0x150704: 0xffb30018
    ctx->pc = 0x150704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_150708:
    // 0x150708: 0xffb10008
    ctx->pc = 0x150708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_15070c:
    // 0x15070c: 0xffb20010
    ctx->pc = 0x15070cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_150710:
    // 0x150710: 0xffbf0020
    ctx->pc = 0x150710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_150714:
    // 0x150714: 0xc05578e
label_150718:
    if (ctx->pc == 0x150718u) {
        ctx->pc = 0x150718u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15071Cu;
        goto label_15071c;
    }
    ctx->pc = 0x150714u;
    SET_GPR_U32(ctx, 31, 0x15071Cu);
    ctx->pc = 0x150718u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x155E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00155E38_0x155e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15071Cu; }
    }
    if (ctx->pc != 0x15071Cu) { return; }
    ctx->pc = 0x15071Cu;
label_15071c:
    // 0x15071c: 0x1040000a
label_150720:
    if (ctx->pc == 0x150720u) {
        ctx->pc = 0x150720u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x150724u;
        goto label_150724;
    }
    ctx->pc = 0x15071Cu;
    {
        const bool branch_taken_0x15071c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x150720u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x15071c) {
            ctx->pc = 0x150748u;
            goto label_150748;
        }
    }
    ctx->pc = 0x150724u;
label_150724:
    // 0x150724: 0x3c05ff03
    ctx->pc = 0x150724u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
label_150728:
    // 0x150728: 0xdfb00000
    ctx->pc = 0x150728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15072c:
    // 0x15072c: 0x202d
    ctx->pc = 0x15072cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_150730:
    // 0x150730: 0xdfb20010
    ctx->pc = 0x150730u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_150734:
    // 0x150734: 0x34a5020a
    ctx->pc = 0x150734u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 522));
label_150738:
    // 0x150738: 0xdfb30018
    ctx->pc = 0x150738u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15073c:
    // 0x15073c: 0xdfbf0020
    ctx->pc = 0x15073cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_150740:
    // 0x150740: 0x805419c
label_150744:
    if (ctx->pc == 0x150744u) {
        ctx->pc = 0x150744u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x150748u;
        goto label_150748;
    }
    ctx->pc = 0x150740u;
    ctx->pc = 0x150744u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x150670u;
    entry_150670_0x1506c0(rdram, ctx, runtime); return;
    ctx->pc = 0x150748u;
label_150748:
    // 0x150748: 0x3c11ff03
    ctx->pc = 0x150748u;
    SET_GPR_U32(ctx, 17, ((uint32_t)65283 << 16));
label_15074c:
    // 0x15074c: 0x24120004
    ctx->pc = 0x15074cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4));
label_150750:
    // 0x150750: 0x36310305
    ctx->pc = 0x150750u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 773));
label_150754:
    // 0x150754: 0x0
    ctx->pc = 0x150754u;
    // NOP
label_150758:
    // 0x150758: 0xc056b7a
label_15075c:
    if (ctx->pc == 0x15075Cu) {
        ctx->pc = 0x15075Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x150760u;
        goto label_150760;
    }
    ctx->pc = 0x150758u;
    SET_GPR_U32(ctx, 31, 0x150760u);
    ctx->pc = 0x15075Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15ADE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ADE8_0x15ade8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150760u; }
    }
    if (ctx->pc != 0x150760u) { return; }
    ctx->pc = 0x150760u;
label_150760:
    // 0x150760: 0x200202d
    ctx->pc = 0x150760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_150764:
    // 0x150764: 0x24050001
    ctx->pc = 0x150764u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_150768:
    // 0x150768: 0x24060004
    ctx->pc = 0x150768u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
label_15076c:
    // 0x15076c: 0x10400007
label_150770:
    if (ctx->pc == 0x150770u) {
        ctx->pc = 0x150770u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 204));
        ctx->pc = 0x150774u;
        goto label_150774;
    }
    ctx->pc = 0x15076Cu;
    {
        const bool branch_taken_0x15076c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x150770u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 204));
        if (branch_taken_0x15076c) {
            ctx->pc = 0x15078Cu;
            goto label_15078c;
        }
    }
    ctx->pc = 0x150774u;
label_150774:
    // 0x150774: 0x54600005
label_150778:
    if (ctx->pc == 0x150778u) {
        ctx->pc = 0x150778u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15077Cu;
        goto label_15077c;
    }
    ctx->pc = 0x150774u;
    {
        const bool branch_taken_0x150774 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x150774) {
            ctx->pc = 0x150778u;
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x15078Cu;
            goto label_15078c;
        }
    }
    ctx->pc = 0x15077Cu;
label_15077c:
    // 0x15077c: 0xc056c04
label_150780:
    if (ctx->pc == 0x150780u) {
        ctx->pc = 0x150784u;
        goto label_150784;
    }
    ctx->pc = 0x15077Cu;
    SET_GPR_U32(ctx, 31, 0x150784u);
    ctx->pc = 0x15B010u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B010_0x15b010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150784u; }
    }
    if (ctx->pc != 0x150784u) { return; }
    ctx->pc = 0x150784u;
label_150784:
    // 0x150784: 0x1052fff4
label_150788:
    if (ctx->pc == 0x150788u) {
        ctx->pc = 0x15078Cu;
        goto label_15078c;
    }
    ctx->pc = 0x150784u;
    {
        const bool branch_taken_0x150784 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        if (branch_taken_0x150784) {
            ctx->pc = 0x150758u;
            goto label_150758;
        }
    }
    ctx->pc = 0x15078Cu;
label_15078c:
    // 0x15078c: 0x260202d
    ctx->pc = 0x15078cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_150790:
    // 0x150790: 0xdfb30018
    ctx->pc = 0x150790u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_150794:
    // 0x150794: 0x220282d
    ctx->pc = 0x150794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_150798:
    // 0x150798: 0xdfb10008
    ctx->pc = 0x150798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15079c:
    // 0x15079c: 0xdfb00000
    ctx->pc = 0x15079cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1507a0:
    // 0x1507a0: 0xdfb20010
    ctx->pc = 0x1507a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1507a4:
    // 0x1507a4: 0xdfbf0020
    ctx->pc = 0x1507a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1507a8:
    // 0x1507a8: 0x805419c
label_1507ac:
    if (ctx->pc == 0x1507ACu) {
        ctx->pc = 0x1507ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1507B0u;
        goto label_1507b0;
    }
    ctx->pc = 0x1507A8u;
    ctx->pc = 0x1507ACu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x150670u;
    entry_150670_0x1506c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1507B0u;
label_1507b0:
    // 0x1507b0: 0x3e00008
label_1507b4:
    if (ctx->pc == 0x1507B4u) {
        ctx->pc = 0x1507B8u;
        goto label_1507b8;
    }
    ctx->pc = 0x1507B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1506C0u: goto label_1506c0;
            case 0x1506C4u: goto label_1506c4;
            case 0x1506C8u: goto label_1506c8;
            case 0x1506CCu: goto label_1506cc;
            case 0x1506D0u: goto label_1506d0;
            case 0x1506D4u: goto label_1506d4;
            case 0x1506D8u: goto label_1506d8;
            case 0x1506DCu: goto label_1506dc;
            case 0x1506E0u: goto label_1506e0;
            case 0x1506E4u: goto label_1506e4;
            case 0x1506E8u: goto label_1506e8;
            case 0x1506ECu: goto label_1506ec;
            case 0x1506F0u: goto label_1506f0;
            case 0x1506F4u: goto label_1506f4;
            case 0x1506F8u: goto label_1506f8;
            case 0x1506FCu: goto label_1506fc;
            case 0x150700u: goto label_150700;
            case 0x150704u: goto label_150704;
            case 0x150708u: goto label_150708;
            case 0x15070Cu: goto label_15070c;
            case 0x150710u: goto label_150710;
            case 0x150714u: goto label_150714;
            case 0x150718u: goto label_150718;
            case 0x15071Cu: goto label_15071c;
            case 0x150720u: goto label_150720;
            case 0x150724u: goto label_150724;
            case 0x150728u: goto label_150728;
            case 0x15072Cu: goto label_15072c;
            case 0x150730u: goto label_150730;
            case 0x150734u: goto label_150734;
            case 0x150738u: goto label_150738;
            case 0x15073Cu: goto label_15073c;
            case 0x150740u: goto label_150740;
            case 0x150744u: goto label_150744;
            case 0x150748u: goto label_150748;
            case 0x15074Cu: goto label_15074c;
            case 0x150750u: goto label_150750;
            case 0x150754u: goto label_150754;
            case 0x150758u: goto label_150758;
            case 0x15075Cu: goto label_15075c;
            case 0x150760u: goto label_150760;
            case 0x150764u: goto label_150764;
            case 0x150768u: goto label_150768;
            case 0x15076Cu: goto label_15076c;
            case 0x150770u: goto label_150770;
            case 0x150774u: goto label_150774;
            case 0x150778u: goto label_150778;
            case 0x15077Cu: goto label_15077c;
            case 0x150780u: goto label_150780;
            case 0x150784u: goto label_150784;
            case 0x150788u: goto label_150788;
            case 0x15078Cu: goto label_15078c;
            case 0x150790u: goto label_150790;
            case 0x150794u: goto label_150794;
            case 0x150798u: goto label_150798;
            case 0x15079Cu: goto label_15079c;
            case 0x1507A0u: goto label_1507a0;
            case 0x1507A4u: goto label_1507a4;
            case 0x1507A8u: goto label_1507a8;
            case 0x1507ACu: goto label_1507ac;
            case 0x1507B0u: goto label_1507b0;
            case 0x1507B4u: goto label_1507b4;
            case 0x1507B8u: goto label_1507b8;
            case 0x1507BCu: goto label_1507bc;
            case 0x1507C0u: goto label_1507c0;
            case 0x1507C4u: goto label_1507c4;
            case 0x1507C8u: goto label_1507c8;
            case 0x1507CCu: goto label_1507cc;
            case 0x1507D0u: goto label_1507d0;
            case 0x1507D4u: goto label_1507d4;
            case 0x1507D8u: goto label_1507d8;
            case 0x1507DCu: goto label_1507dc;
            case 0x1507E0u: goto label_1507e0;
            case 0x1507E4u: goto label_1507e4;
            case 0x1507E8u: goto label_1507e8;
            case 0x1507ECu: goto label_1507ec;
            case 0x1507F0u: goto label_1507f0;
            case 0x1507F4u: goto label_1507f4;
            case 0x1507F8u: goto label_1507f8;
            case 0x1507FCu: goto label_1507fc;
            case 0x150800u: goto label_150800;
            case 0x150804u: goto label_150804;
            case 0x150808u: goto label_150808;
            case 0x15080Cu: goto label_15080c;
            case 0x150810u: goto label_150810;
            case 0x150814u: goto label_150814;
            case 0x150818u: goto label_150818;
            case 0x15081Cu: goto label_15081c;
            case 0x150820u: goto label_150820;
            case 0x150824u: goto label_150824;
            case 0x150828u: goto label_150828;
            case 0x15082Cu: goto label_15082c;
            case 0x150830u: goto label_150830;
            case 0x150834u: goto label_150834;
            case 0x150838u: goto label_150838;
            case 0x15083Cu: goto label_15083c;
            case 0x150840u: goto label_150840;
            case 0x150844u: goto label_150844;
            case 0x150848u: goto label_150848;
            case 0x15084Cu: goto label_15084c;
            case 0x150850u: goto label_150850;
            case 0x150854u: goto label_150854;
            case 0x150858u: goto label_150858;
            case 0x15085Cu: goto label_15085c;
            case 0x150860u: goto label_150860;
            case 0x150864u: goto label_150864;
            case 0x150868u: goto label_150868;
            case 0x15086Cu: goto label_15086c;
            case 0x150870u: goto label_150870;
            case 0x150874u: goto label_150874;
            case 0x150878u: goto label_150878;
            case 0x15087Cu: goto label_15087c;
            case 0x150880u: goto label_150880;
            case 0x150884u: goto label_150884;
            case 0x150888u: goto label_150888;
            case 0x15088Cu: goto label_15088c;
            case 0x150890u: goto label_150890;
            case 0x150894u: goto label_150894;
            case 0x150898u: goto label_150898;
            case 0x15089Cu: goto label_15089c;
            case 0x1508A0u: goto label_1508a0;
            case 0x1508A4u: goto label_1508a4;
            case 0x1508A8u: goto label_1508a8;
            case 0x1508ACu: goto label_1508ac;
            case 0x1508B0u: goto label_1508b0;
            case 0x1508B4u: goto label_1508b4;
            case 0x1508B8u: goto label_1508b8;
            case 0x1508BCu: goto label_1508bc;
            case 0x1508C0u: goto label_1508c0;
            case 0x1508C4u: goto label_1508c4;
            case 0x1508C8u: goto label_1508c8;
            case 0x1508CCu: goto label_1508cc;
            case 0x1508D0u: goto label_1508d0;
            case 0x1508D4u: goto label_1508d4;
            case 0x1508D8u: goto label_1508d8;
            case 0x1508DCu: goto label_1508dc;
            case 0x1508E0u: goto label_1508e0;
            case 0x1508E4u: goto label_1508e4;
            case 0x1508E8u: goto label_1508e8;
            case 0x1508ECu: goto label_1508ec;
            case 0x1508F0u: goto label_1508f0;
            case 0x1508F4u: goto label_1508f4;
            case 0x1508F8u: goto label_1508f8;
            case 0x1508FCu: goto label_1508fc;
            case 0x150900u: goto label_150900;
            case 0x150904u: goto label_150904;
            case 0x150908u: goto label_150908;
            case 0x15090Cu: goto label_15090c;
            case 0x150910u: goto label_150910;
            case 0x150914u: goto label_150914;
            case 0x150918u: goto label_150918;
            case 0x15091Cu: goto label_15091c;
            case 0x150920u: goto label_150920;
            case 0x150924u: goto label_150924;
            case 0x150928u: goto label_150928;
            case 0x15092Cu: goto label_15092c;
            case 0x150930u: goto label_150930;
            case 0x150934u: goto label_150934;
            case 0x150938u: goto label_150938;
            case 0x15093Cu: goto label_15093c;
            case 0x150940u: goto label_150940;
            case 0x150944u: goto label_150944;
            case 0x150948u: goto label_150948;
            case 0x15094Cu: goto label_15094c;
            case 0x150950u: goto label_150950;
            case 0x150954u: goto label_150954;
            case 0x150958u: goto label_150958;
            case 0x15095Cu: goto label_15095c;
            case 0x150960u: goto label_150960;
            case 0x150964u: goto label_150964;
            case 0x150968u: goto label_150968;
            case 0x15096Cu: goto label_15096c;
            case 0x150970u: goto label_150970;
            case 0x150974u: goto label_150974;
            case 0x150978u: goto label_150978;
            case 0x15097Cu: goto label_15097c;
            case 0x150980u: goto label_150980;
            case 0x150984u: goto label_150984;
            case 0x150988u: goto label_150988;
            case 0x15098Cu: goto label_15098c;
            case 0x150990u: goto label_150990;
            case 0x150994u: goto label_150994;
            case 0x150998u: goto label_150998;
            case 0x15099Cu: goto label_15099c;
            case 0x1509A0u: goto label_1509a0;
            case 0x1509A4u: goto label_1509a4;
            case 0x1509A8u: goto label_1509a8;
            case 0x1509ACu: goto label_1509ac;
            case 0x1509B0u: goto label_1509b0;
            case 0x1509B4u: goto label_1509b4;
            case 0x1509B8u: goto label_1509b8;
            case 0x1509BCu: goto label_1509bc;
            case 0x1509C0u: goto label_1509c0;
            case 0x1509C4u: goto label_1509c4;
            case 0x1509C8u: goto label_1509c8;
            case 0x1509CCu: goto label_1509cc;
            case 0x1509D0u: goto label_1509d0;
            case 0x1509D4u: goto label_1509d4;
            case 0x1509D8u: goto label_1509d8;
            case 0x1509DCu: goto label_1509dc;
            case 0x1509E0u: goto label_1509e0;
            case 0x1509E4u: goto label_1509e4;
            case 0x1509E8u: goto label_1509e8;
            case 0x1509ECu: goto label_1509ec;
            case 0x1509F0u: goto label_1509f0;
            case 0x1509F4u: goto label_1509f4;
            case 0x1509F8u: goto label_1509f8;
            case 0x1509FCu: goto label_1509fc;
            case 0x150A00u: goto label_150a00;
            case 0x150A04u: goto label_150a04;
            case 0x150A08u: goto label_150a08;
            case 0x150A0Cu: goto label_150a0c;
            case 0x150A10u: goto label_150a10;
            case 0x150A14u: goto label_150a14;
            case 0x150A18u: goto label_150a18;
            case 0x150A1Cu: goto label_150a1c;
            case 0x150A20u: goto label_150a20;
            case 0x150A24u: goto label_150a24;
            case 0x150A28u: goto label_150a28;
            case 0x150A2Cu: goto label_150a2c;
            case 0x150A30u: goto label_150a30;
            case 0x150A34u: goto label_150a34;
            case 0x150A38u: goto label_150a38;
            case 0x150A3Cu: goto label_150a3c;
            case 0x150A40u: goto label_150a40;
            case 0x150A44u: goto label_150a44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1507B8u;
label_1507b8:
    // 0x1507b8: 0x27bdffe0
    ctx->pc = 0x1507b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1507bc:
    // 0x1507bc: 0xffb00000
    ctx->pc = 0x1507bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1507c0:
    // 0x1507c0: 0x80802d
    ctx->pc = 0x1507c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1507c4:
    // 0x1507c4: 0xffb10008
    ctx->pc = 0x1507c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1507c8:
    // 0x1507c8: 0xffbf0010
    ctx->pc = 0x1507c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1507cc:
    // 0x1507cc: 0xc05578e
label_1507d0:
    if (ctx->pc == 0x1507D0u) {
        ctx->pc = 0x1507D0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1507D4u;
        goto label_1507d4;
    }
    ctx->pc = 0x1507CCu;
    SET_GPR_U32(ctx, 31, 0x1507D4u);
    ctx->pc = 0x1507D0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x155E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00155E38_0x155e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1507D4u; }
    }
    if (ctx->pc != 0x1507D4u) { return; }
    ctx->pc = 0x1507D4u;
label_1507d4:
    // 0x1507d4: 0x10400008
label_1507d8:
    if (ctx->pc == 0x1507D8u) {
        ctx->pc = 0x1507D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1507DCu;
        goto label_1507dc;
    }
    ctx->pc = 0x1507D4u;
    {
        const bool branch_taken_0x1507d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1507D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1507d4) {
            ctx->pc = 0x1507F8u;
            goto label_1507f8;
        }
    }
    ctx->pc = 0x1507DCu;
label_1507dc:
    // 0x1507dc: 0x3c05ff03
    ctx->pc = 0x1507dcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
label_1507e0:
    // 0x1507e0: 0xdfb00000
    ctx->pc = 0x1507e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1507e4:
    // 0x1507e4: 0xdfb10008
    ctx->pc = 0x1507e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1507e8:
    // 0x1507e8: 0xdfbf0010
    ctx->pc = 0x1507e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1507ec:
    // 0x1507ec: 0x34a5020c
    ctx->pc = 0x1507ecu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 524));
label_1507f0:
    // 0x1507f0: 0x805419c
label_1507f4:
    if (ctx->pc == 0x1507F4u) {
        ctx->pc = 0x1507F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1507F8u;
        goto label_1507f8;
    }
    ctx->pc = 0x1507F0u;
    ctx->pc = 0x1507F4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x150670u;
    entry_150670_0x1506c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1507F8u;
label_1507f8:
    // 0x1507f8: 0x220282d
    ctx->pc = 0x1507f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1507fc:
    // 0x1507fc: 0x26030058
    ctx->pc = 0x1507fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 88));
label_150800:
    // 0x150800: 0x651025
    ctx->pc = 0x150800u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_150804:
    // 0x150804: 0x30420007
    ctx->pc = 0x150804u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
label_150808:
    // 0x150808: 0x10400019
label_15080c:
    if (ctx->pc == 0x15080Cu) {
        ctx->pc = 0x15080Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 152));
        ctx->pc = 0x150810u;
        goto label_150810;
    }
    ctx->pc = 0x150808u;
    {
        const bool branch_taken_0x150808 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15080Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 152));
        if (branch_taken_0x150808) {
            ctx->pc = 0x150870u;
            goto label_150870;
        }
    }
    ctx->pc = 0x150810u;
label_150810:
    // 0x150810: 0x68620007
    ctx->pc = 0x150810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
label_150814:
    // 0x150814: 0x6c620000
    ctx->pc = 0x150814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
label_150818:
    // 0x150818: 0x6866000f
    ctx->pc = 0x150818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
label_15081c:
    // 0x15081c: 0x6c660008
    ctx->pc = 0x15081cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
label_150820:
    // 0x150820: 0x68670017
    ctx->pc = 0x150820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
label_150824:
    // 0x150824: 0x6c670010
    ctx->pc = 0x150824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
label_150828:
    // 0x150828: 0x6868001f
    ctx->pc = 0x150828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
label_15082c:
    // 0x15082c: 0x6c680018
    ctx->pc = 0x15082cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
label_150830:
    // 0x150830: 0xb0a20007
    ctx->pc = 0x150830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_150834:
    // 0x150834: 0xb4a20000
    ctx->pc = 0x150834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_150838:
    // 0x150838: 0xb0a6000f
    ctx->pc = 0x150838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15083c:
    // 0x15083c: 0xb4a60008
    ctx->pc = 0x15083cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_150840:
    // 0x150840: 0xb0a70017
    ctx->pc = 0x150840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_150844:
    // 0x150844: 0xb4a70010
    ctx->pc = 0x150844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_150848:
    // 0x150848: 0xb0a8001f
    ctx->pc = 0x150848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15084c:
    // 0x15084c: 0xb4a80018
    ctx->pc = 0x15084cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_150850:
    // 0x150850: 0x24630020
    ctx->pc = 0x150850u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
label_150854:
    // 0x150854: 0x0
    ctx->pc = 0x150854u;
    // NOP
label_150858:
    // 0x150858: 0x0
    ctx->pc = 0x150858u;
    // NOP
label_15085c:
    // 0x15085c: 0x1464ffec
label_150860:
    if (ctx->pc == 0x150860u) {
        ctx->pc = 0x150860u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
        ctx->pc = 0x150864u;
        goto label_150864;
    }
    ctx->pc = 0x15085Cu;
    {
        const bool branch_taken_0x15085c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x150860u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
        if (branch_taken_0x15085c) {
            ctx->pc = 0x150810u;
            goto label_150810;
        }
    }
    ctx->pc = 0x150864u;
label_150864:
    // 0x150864: 0x1000000f
label_150868:
    if (ctx->pc == 0x150868u) {
        ctx->pc = 0x15086Cu;
        goto label_15086c;
    }
    ctx->pc = 0x150864u;
    {
        const bool branch_taken_0x150864 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x150864) {
            ctx->pc = 0x1508A4u;
            goto label_1508a4;
        }
    }
    ctx->pc = 0x15086Cu;
label_15086c:
    // 0x15086c: 0x0
    ctx->pc = 0x15086cu;
    // NOP
label_150870:
    // 0x150870: 0xdc620000
    ctx->pc = 0x150870u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_150874:
    // 0x150874: 0xdc660008
    ctx->pc = 0x150874u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_150878:
    // 0x150878: 0xdc670010
    ctx->pc = 0x150878u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_15087c:
    // 0x15087c: 0xdc680018
    ctx->pc = 0x15087cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_150880:
    // 0x150880: 0xfca20000
    ctx->pc = 0x150880u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_150884:
    // 0x150884: 0xfca60008
    ctx->pc = 0x150884u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
label_150888:
    // 0x150888: 0xfca70010
    ctx->pc = 0x150888u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
label_15088c:
    // 0x15088c: 0xfca80018
    ctx->pc = 0x15088cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
label_150890:
    // 0x150890: 0x24630020
    ctx->pc = 0x150890u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
label_150894:
    // 0x150894: 0x0
    ctx->pc = 0x150894u;
    // NOP
label_150898:
    // 0x150898: 0x0
    ctx->pc = 0x150898u;
    // NOP
label_15089c:
    // 0x15089c: 0x1464fff4
label_1508a0:
    if (ctx->pc == 0x1508A0u) {
        ctx->pc = 0x1508A0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
        ctx->pc = 0x1508A4u;
        goto label_1508a4;
    }
    ctx->pc = 0x15089Cu;
    {
        const bool branch_taken_0x15089c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x1508A0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
        if (branch_taken_0x15089c) {
            ctx->pc = 0x150870u;
            goto label_150870;
        }
    }
    ctx->pc = 0x1508A4u;
label_1508a4:
    // 0x1508a4: 0x68620007
    ctx->pc = 0x1508a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
label_1508a8:
    // 0x1508a8: 0x6c620000
    ctx->pc = 0x1508a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
label_1508ac:
    // 0x1508ac: 0x6864000f
    ctx->pc = 0x1508acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
label_1508b0:
    // 0x1508b0: 0x6c640008
    ctx->pc = 0x1508b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
label_1508b4:
    // 0x1508b4: 0x8c660010
    ctx->pc = 0x1508b4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1508b8:
    // 0x1508b8: 0xb0a20007
    ctx->pc = 0x1508b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1508bc:
    // 0x1508bc: 0xb4a20000
    ctx->pc = 0x1508bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1508c0:
    // 0x1508c0: 0xb0a4000f
    ctx->pc = 0x1508c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1508c4:
    // 0x1508c4: 0xb4a40008
    ctx->pc = 0x1508c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1508c8:
    // 0x1508c8: 0xdfb00000
    ctx->pc = 0x1508c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1508cc:
    // 0x1508cc: 0xaca60010
    ctx->pc = 0x1508ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 6));
label_1508d0:
    // 0x1508d0: 0xdfb10008
    ctx->pc = 0x1508d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1508d4:
    // 0x1508d4: 0xdfbf0010
    ctx->pc = 0x1508d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1508d8:
    // 0x1508d8: 0x3e00008
label_1508dc:
    if (ctx->pc == 0x1508DCu) {
        ctx->pc = 0x1508DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1508E0u;
        goto label_1508e0;
    }
    ctx->pc = 0x1508D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1508DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1506C0u: goto label_1506c0;
            case 0x1506C4u: goto label_1506c4;
            case 0x1506C8u: goto label_1506c8;
            case 0x1506CCu: goto label_1506cc;
            case 0x1506D0u: goto label_1506d0;
            case 0x1506D4u: goto label_1506d4;
            case 0x1506D8u: goto label_1506d8;
            case 0x1506DCu: goto label_1506dc;
            case 0x1506E0u: goto label_1506e0;
            case 0x1506E4u: goto label_1506e4;
            case 0x1506E8u: goto label_1506e8;
            case 0x1506ECu: goto label_1506ec;
            case 0x1506F0u: goto label_1506f0;
            case 0x1506F4u: goto label_1506f4;
            case 0x1506F8u: goto label_1506f8;
            case 0x1506FCu: goto label_1506fc;
            case 0x150700u: goto label_150700;
            case 0x150704u: goto label_150704;
            case 0x150708u: goto label_150708;
            case 0x15070Cu: goto label_15070c;
            case 0x150710u: goto label_150710;
            case 0x150714u: goto label_150714;
            case 0x150718u: goto label_150718;
            case 0x15071Cu: goto label_15071c;
            case 0x150720u: goto label_150720;
            case 0x150724u: goto label_150724;
            case 0x150728u: goto label_150728;
            case 0x15072Cu: goto label_15072c;
            case 0x150730u: goto label_150730;
            case 0x150734u: goto label_150734;
            case 0x150738u: goto label_150738;
            case 0x15073Cu: goto label_15073c;
            case 0x150740u: goto label_150740;
            case 0x150744u: goto label_150744;
            case 0x150748u: goto label_150748;
            case 0x15074Cu: goto label_15074c;
            case 0x150750u: goto label_150750;
            case 0x150754u: goto label_150754;
            case 0x150758u: goto label_150758;
            case 0x15075Cu: goto label_15075c;
            case 0x150760u: goto label_150760;
            case 0x150764u: goto label_150764;
            case 0x150768u: goto label_150768;
            case 0x15076Cu: goto label_15076c;
            case 0x150770u: goto label_150770;
            case 0x150774u: goto label_150774;
            case 0x150778u: goto label_150778;
            case 0x15077Cu: goto label_15077c;
            case 0x150780u: goto label_150780;
            case 0x150784u: goto label_150784;
            case 0x150788u: goto label_150788;
            case 0x15078Cu: goto label_15078c;
            case 0x150790u: goto label_150790;
            case 0x150794u: goto label_150794;
            case 0x150798u: goto label_150798;
            case 0x15079Cu: goto label_15079c;
            case 0x1507A0u: goto label_1507a0;
            case 0x1507A4u: goto label_1507a4;
            case 0x1507A8u: goto label_1507a8;
            case 0x1507ACu: goto label_1507ac;
            case 0x1507B0u: goto label_1507b0;
            case 0x1507B4u: goto label_1507b4;
            case 0x1507B8u: goto label_1507b8;
            case 0x1507BCu: goto label_1507bc;
            case 0x1507C0u: goto label_1507c0;
            case 0x1507C4u: goto label_1507c4;
            case 0x1507C8u: goto label_1507c8;
            case 0x1507CCu: goto label_1507cc;
            case 0x1507D0u: goto label_1507d0;
            case 0x1507D4u: goto label_1507d4;
            case 0x1507D8u: goto label_1507d8;
            case 0x1507DCu: goto label_1507dc;
            case 0x1507E0u: goto label_1507e0;
            case 0x1507E4u: goto label_1507e4;
            case 0x1507E8u: goto label_1507e8;
            case 0x1507ECu: goto label_1507ec;
            case 0x1507F0u: goto label_1507f0;
            case 0x1507F4u: goto label_1507f4;
            case 0x1507F8u: goto label_1507f8;
            case 0x1507FCu: goto label_1507fc;
            case 0x150800u: goto label_150800;
            case 0x150804u: goto label_150804;
            case 0x150808u: goto label_150808;
            case 0x15080Cu: goto label_15080c;
            case 0x150810u: goto label_150810;
            case 0x150814u: goto label_150814;
            case 0x150818u: goto label_150818;
            case 0x15081Cu: goto label_15081c;
            case 0x150820u: goto label_150820;
            case 0x150824u: goto label_150824;
            case 0x150828u: goto label_150828;
            case 0x15082Cu: goto label_15082c;
            case 0x150830u: goto label_150830;
            case 0x150834u: goto label_150834;
            case 0x150838u: goto label_150838;
            case 0x15083Cu: goto label_15083c;
            case 0x150840u: goto label_150840;
            case 0x150844u: goto label_150844;
            case 0x150848u: goto label_150848;
            case 0x15084Cu: goto label_15084c;
            case 0x150850u: goto label_150850;
            case 0x150854u: goto label_150854;
            case 0x150858u: goto label_150858;
            case 0x15085Cu: goto label_15085c;
            case 0x150860u: goto label_150860;
            case 0x150864u: goto label_150864;
            case 0x150868u: goto label_150868;
            case 0x15086Cu: goto label_15086c;
            case 0x150870u: goto label_150870;
            case 0x150874u: goto label_150874;
            case 0x150878u: goto label_150878;
            case 0x15087Cu: goto label_15087c;
            case 0x150880u: goto label_150880;
            case 0x150884u: goto label_150884;
            case 0x150888u: goto label_150888;
            case 0x15088Cu: goto label_15088c;
            case 0x150890u: goto label_150890;
            case 0x150894u: goto label_150894;
            case 0x150898u: goto label_150898;
            case 0x15089Cu: goto label_15089c;
            case 0x1508A0u: goto label_1508a0;
            case 0x1508A4u: goto label_1508a4;
            case 0x1508A8u: goto label_1508a8;
            case 0x1508ACu: goto label_1508ac;
            case 0x1508B0u: goto label_1508b0;
            case 0x1508B4u: goto label_1508b4;
            case 0x1508B8u: goto label_1508b8;
            case 0x1508BCu: goto label_1508bc;
            case 0x1508C0u: goto label_1508c0;
            case 0x1508C4u: goto label_1508c4;
            case 0x1508C8u: goto label_1508c8;
            case 0x1508CCu: goto label_1508cc;
            case 0x1508D0u: goto label_1508d0;
            case 0x1508D4u: goto label_1508d4;
            case 0x1508D8u: goto label_1508d8;
            case 0x1508DCu: goto label_1508dc;
            case 0x1508E0u: goto label_1508e0;
            case 0x1508E4u: goto label_1508e4;
            case 0x1508E8u: goto label_1508e8;
            case 0x1508ECu: goto label_1508ec;
            case 0x1508F0u: goto label_1508f0;
            case 0x1508F4u: goto label_1508f4;
            case 0x1508F8u: goto label_1508f8;
            case 0x1508FCu: goto label_1508fc;
            case 0x150900u: goto label_150900;
            case 0x150904u: goto label_150904;
            case 0x150908u: goto label_150908;
            case 0x15090Cu: goto label_15090c;
            case 0x150910u: goto label_150910;
            case 0x150914u: goto label_150914;
            case 0x150918u: goto label_150918;
            case 0x15091Cu: goto label_15091c;
            case 0x150920u: goto label_150920;
            case 0x150924u: goto label_150924;
            case 0x150928u: goto label_150928;
            case 0x15092Cu: goto label_15092c;
            case 0x150930u: goto label_150930;
            case 0x150934u: goto label_150934;
            case 0x150938u: goto label_150938;
            case 0x15093Cu: goto label_15093c;
            case 0x150940u: goto label_150940;
            case 0x150944u: goto label_150944;
            case 0x150948u: goto label_150948;
            case 0x15094Cu: goto label_15094c;
            case 0x150950u: goto label_150950;
            case 0x150954u: goto label_150954;
            case 0x150958u: goto label_150958;
            case 0x15095Cu: goto label_15095c;
            case 0x150960u: goto label_150960;
            case 0x150964u: goto label_150964;
            case 0x150968u: goto label_150968;
            case 0x15096Cu: goto label_15096c;
            case 0x150970u: goto label_150970;
            case 0x150974u: goto label_150974;
            case 0x150978u: goto label_150978;
            case 0x15097Cu: goto label_15097c;
            case 0x150980u: goto label_150980;
            case 0x150984u: goto label_150984;
            case 0x150988u: goto label_150988;
            case 0x15098Cu: goto label_15098c;
            case 0x150990u: goto label_150990;
            case 0x150994u: goto label_150994;
            case 0x150998u: goto label_150998;
            case 0x15099Cu: goto label_15099c;
            case 0x1509A0u: goto label_1509a0;
            case 0x1509A4u: goto label_1509a4;
            case 0x1509A8u: goto label_1509a8;
            case 0x1509ACu: goto label_1509ac;
            case 0x1509B0u: goto label_1509b0;
            case 0x1509B4u: goto label_1509b4;
            case 0x1509B8u: goto label_1509b8;
            case 0x1509BCu: goto label_1509bc;
            case 0x1509C0u: goto label_1509c0;
            case 0x1509C4u: goto label_1509c4;
            case 0x1509C8u: goto label_1509c8;
            case 0x1509CCu: goto label_1509cc;
            case 0x1509D0u: goto label_1509d0;
            case 0x1509D4u: goto label_1509d4;
            case 0x1509D8u: goto label_1509d8;
            case 0x1509DCu: goto label_1509dc;
            case 0x1509E0u: goto label_1509e0;
            case 0x1509E4u: goto label_1509e4;
            case 0x1509E8u: goto label_1509e8;
            case 0x1509ECu: goto label_1509ec;
            case 0x1509F0u: goto label_1509f0;
            case 0x1509F4u: goto label_1509f4;
            case 0x1509F8u: goto label_1509f8;
            case 0x1509FCu: goto label_1509fc;
            case 0x150A00u: goto label_150a00;
            case 0x150A04u: goto label_150a04;
            case 0x150A08u: goto label_150a08;
            case 0x150A0Cu: goto label_150a0c;
            case 0x150A10u: goto label_150a10;
            case 0x150A14u: goto label_150a14;
            case 0x150A18u: goto label_150a18;
            case 0x150A1Cu: goto label_150a1c;
            case 0x150A20u: goto label_150a20;
            case 0x150A24u: goto label_150a24;
            case 0x150A28u: goto label_150a28;
            case 0x150A2Cu: goto label_150a2c;
            case 0x150A30u: goto label_150a30;
            case 0x150A34u: goto label_150a34;
            case 0x150A38u: goto label_150a38;
            case 0x150A3Cu: goto label_150a3c;
            case 0x150A40u: goto label_150a40;
            case 0x150A44u: goto label_150a44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1508E0u;
label_1508e0:
    // 0x1508e0: 0x27bdffe0
    ctx->pc = 0x1508e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1508e4:
    // 0x1508e4: 0xffb00000
    ctx->pc = 0x1508e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1508e8:
    // 0x1508e8: 0x24900128
    ctx->pc = 0x1508e8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 296));
label_1508ec:
    // 0x1508ec: 0xffb10008
    ctx->pc = 0x1508ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1508f0:
    // 0x1508f0: 0xffbf0010
    ctx->pc = 0x1508f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1508f4:
    // 0x1508f4: 0xc05578e
label_1508f8:
    if (ctx->pc == 0x1508F8u) {
        ctx->pc = 0x1508F8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1508FCu;
        goto label_1508fc;
    }
    ctx->pc = 0x1508F4u;
    SET_GPR_U32(ctx, 31, 0x1508FCu);
    ctx->pc = 0x1508F8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x155E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00155E38_0x155e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1508FCu; }
    }
    if (ctx->pc != 0x1508FCu) { return; }
    ctx->pc = 0x1508FCu;
label_1508fc:
    // 0x1508fc: 0x3c05ff03
    ctx->pc = 0x1508fcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
label_150900:
    // 0x150900: 0x10400007
label_150904:
    if (ctx->pc == 0x150904u) {
        ctx->pc = 0x150904u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x150908u;
        goto label_150908;
    }
    ctx->pc = 0x150900u;
    {
        const bool branch_taken_0x150900 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x150904u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x150900) {
            ctx->pc = 0x150920u;
            goto label_150920;
        }
    }
    ctx->pc = 0x150908u;
label_150908:
    // 0x150908: 0xdfb00000
    ctx->pc = 0x150908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15090c:
    // 0x15090c: 0x34a5020d
    ctx->pc = 0x15090cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 525));
label_150910:
    // 0x150910: 0xdfb10008
    ctx->pc = 0x150910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_150914:
    // 0x150914: 0xdfbf0010
    ctx->pc = 0x150914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_150918:
    // 0x150918: 0x805419c
label_15091c:
    if (ctx->pc == 0x15091Cu) {
        ctx->pc = 0x15091Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x150920u;
        goto label_150920;
    }
    ctx->pc = 0x150918u;
    ctx->pc = 0x15091Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x150670u;
    entry_150670_0x1506c0(rdram, ctx, runtime); return;
    ctx->pc = 0x150920u;
label_150920:
    // 0x150920: 0x8e0202f8
    ctx->pc = 0x150920u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 760)));
label_150924:
    // 0x150924: 0xdfbf0010
    ctx->pc = 0x150924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_150928:
    // 0x150928: 0xae220000
    ctx->pc = 0x150928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_15092c:
    // 0x15092c: 0xdfb00000
    ctx->pc = 0x15092cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_150930:
    // 0x150930: 0xdfb10008
    ctx->pc = 0x150930u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_150934:
    // 0x150934: 0x3e00008
label_150938:
    if (ctx->pc == 0x150938u) {
        ctx->pc = 0x150938u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x15093Cu;
        goto label_15093c;
    }
    ctx->pc = 0x150934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150938u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1506C0u: goto label_1506c0;
            case 0x1506C4u: goto label_1506c4;
            case 0x1506C8u: goto label_1506c8;
            case 0x1506CCu: goto label_1506cc;
            case 0x1506D0u: goto label_1506d0;
            case 0x1506D4u: goto label_1506d4;
            case 0x1506D8u: goto label_1506d8;
            case 0x1506DCu: goto label_1506dc;
            case 0x1506E0u: goto label_1506e0;
            case 0x1506E4u: goto label_1506e4;
            case 0x1506E8u: goto label_1506e8;
            case 0x1506ECu: goto label_1506ec;
            case 0x1506F0u: goto label_1506f0;
            case 0x1506F4u: goto label_1506f4;
            case 0x1506F8u: goto label_1506f8;
            case 0x1506FCu: goto label_1506fc;
            case 0x150700u: goto label_150700;
            case 0x150704u: goto label_150704;
            case 0x150708u: goto label_150708;
            case 0x15070Cu: goto label_15070c;
            case 0x150710u: goto label_150710;
            case 0x150714u: goto label_150714;
            case 0x150718u: goto label_150718;
            case 0x15071Cu: goto label_15071c;
            case 0x150720u: goto label_150720;
            case 0x150724u: goto label_150724;
            case 0x150728u: goto label_150728;
            case 0x15072Cu: goto label_15072c;
            case 0x150730u: goto label_150730;
            case 0x150734u: goto label_150734;
            case 0x150738u: goto label_150738;
            case 0x15073Cu: goto label_15073c;
            case 0x150740u: goto label_150740;
            case 0x150744u: goto label_150744;
            case 0x150748u: goto label_150748;
            case 0x15074Cu: goto label_15074c;
            case 0x150750u: goto label_150750;
            case 0x150754u: goto label_150754;
            case 0x150758u: goto label_150758;
            case 0x15075Cu: goto label_15075c;
            case 0x150760u: goto label_150760;
            case 0x150764u: goto label_150764;
            case 0x150768u: goto label_150768;
            case 0x15076Cu: goto label_15076c;
            case 0x150770u: goto label_150770;
            case 0x150774u: goto label_150774;
            case 0x150778u: goto label_150778;
            case 0x15077Cu: goto label_15077c;
            case 0x150780u: goto label_150780;
            case 0x150784u: goto label_150784;
            case 0x150788u: goto label_150788;
            case 0x15078Cu: goto label_15078c;
            case 0x150790u: goto label_150790;
            case 0x150794u: goto label_150794;
            case 0x150798u: goto label_150798;
            case 0x15079Cu: goto label_15079c;
            case 0x1507A0u: goto label_1507a0;
            case 0x1507A4u: goto label_1507a4;
            case 0x1507A8u: goto label_1507a8;
            case 0x1507ACu: goto label_1507ac;
            case 0x1507B0u: goto label_1507b0;
            case 0x1507B4u: goto label_1507b4;
            case 0x1507B8u: goto label_1507b8;
            case 0x1507BCu: goto label_1507bc;
            case 0x1507C0u: goto label_1507c0;
            case 0x1507C4u: goto label_1507c4;
            case 0x1507C8u: goto label_1507c8;
            case 0x1507CCu: goto label_1507cc;
            case 0x1507D0u: goto label_1507d0;
            case 0x1507D4u: goto label_1507d4;
            case 0x1507D8u: goto label_1507d8;
            case 0x1507DCu: goto label_1507dc;
            case 0x1507E0u: goto label_1507e0;
            case 0x1507E4u: goto label_1507e4;
            case 0x1507E8u: goto label_1507e8;
            case 0x1507ECu: goto label_1507ec;
            case 0x1507F0u: goto label_1507f0;
            case 0x1507F4u: goto label_1507f4;
            case 0x1507F8u: goto label_1507f8;
            case 0x1507FCu: goto label_1507fc;
            case 0x150800u: goto label_150800;
            case 0x150804u: goto label_150804;
            case 0x150808u: goto label_150808;
            case 0x15080Cu: goto label_15080c;
            case 0x150810u: goto label_150810;
            case 0x150814u: goto label_150814;
            case 0x150818u: goto label_150818;
            case 0x15081Cu: goto label_15081c;
            case 0x150820u: goto label_150820;
            case 0x150824u: goto label_150824;
            case 0x150828u: goto label_150828;
            case 0x15082Cu: goto label_15082c;
            case 0x150830u: goto label_150830;
            case 0x150834u: goto label_150834;
            case 0x150838u: goto label_150838;
            case 0x15083Cu: goto label_15083c;
            case 0x150840u: goto label_150840;
            case 0x150844u: goto label_150844;
            case 0x150848u: goto label_150848;
            case 0x15084Cu: goto label_15084c;
            case 0x150850u: goto label_150850;
            case 0x150854u: goto label_150854;
            case 0x150858u: goto label_150858;
            case 0x15085Cu: goto label_15085c;
            case 0x150860u: goto label_150860;
            case 0x150864u: goto label_150864;
            case 0x150868u: goto label_150868;
            case 0x15086Cu: goto label_15086c;
            case 0x150870u: goto label_150870;
            case 0x150874u: goto label_150874;
            case 0x150878u: goto label_150878;
            case 0x15087Cu: goto label_15087c;
            case 0x150880u: goto label_150880;
            case 0x150884u: goto label_150884;
            case 0x150888u: goto label_150888;
            case 0x15088Cu: goto label_15088c;
            case 0x150890u: goto label_150890;
            case 0x150894u: goto label_150894;
            case 0x150898u: goto label_150898;
            case 0x15089Cu: goto label_15089c;
            case 0x1508A0u: goto label_1508a0;
            case 0x1508A4u: goto label_1508a4;
            case 0x1508A8u: goto label_1508a8;
            case 0x1508ACu: goto label_1508ac;
            case 0x1508B0u: goto label_1508b0;
            case 0x1508B4u: goto label_1508b4;
            case 0x1508B8u: goto label_1508b8;
            case 0x1508BCu: goto label_1508bc;
            case 0x1508C0u: goto label_1508c0;
            case 0x1508C4u: goto label_1508c4;
            case 0x1508C8u: goto label_1508c8;
            case 0x1508CCu: goto label_1508cc;
            case 0x1508D0u: goto label_1508d0;
            case 0x1508D4u: goto label_1508d4;
            case 0x1508D8u: goto label_1508d8;
            case 0x1508DCu: goto label_1508dc;
            case 0x1508E0u: goto label_1508e0;
            case 0x1508E4u: goto label_1508e4;
            case 0x1508E8u: goto label_1508e8;
            case 0x1508ECu: goto label_1508ec;
            case 0x1508F0u: goto label_1508f0;
            case 0x1508F4u: goto label_1508f4;
            case 0x1508F8u: goto label_1508f8;
            case 0x1508FCu: goto label_1508fc;
            case 0x150900u: goto label_150900;
            case 0x150904u: goto label_150904;
            case 0x150908u: goto label_150908;
            case 0x15090Cu: goto label_15090c;
            case 0x150910u: goto label_150910;
            case 0x150914u: goto label_150914;
            case 0x150918u: goto label_150918;
            case 0x15091Cu: goto label_15091c;
            case 0x150920u: goto label_150920;
            case 0x150924u: goto label_150924;
            case 0x150928u: goto label_150928;
            case 0x15092Cu: goto label_15092c;
            case 0x150930u: goto label_150930;
            case 0x150934u: goto label_150934;
            case 0x150938u: goto label_150938;
            case 0x15093Cu: goto label_15093c;
            case 0x150940u: goto label_150940;
            case 0x150944u: goto label_150944;
            case 0x150948u: goto label_150948;
            case 0x15094Cu: goto label_15094c;
            case 0x150950u: goto label_150950;
            case 0x150954u: goto label_150954;
            case 0x150958u: goto label_150958;
            case 0x15095Cu: goto label_15095c;
            case 0x150960u: goto label_150960;
            case 0x150964u: goto label_150964;
            case 0x150968u: goto label_150968;
            case 0x15096Cu: goto label_15096c;
            case 0x150970u: goto label_150970;
            case 0x150974u: goto label_150974;
            case 0x150978u: goto label_150978;
            case 0x15097Cu: goto label_15097c;
            case 0x150980u: goto label_150980;
            case 0x150984u: goto label_150984;
            case 0x150988u: goto label_150988;
            case 0x15098Cu: goto label_15098c;
            case 0x150990u: goto label_150990;
            case 0x150994u: goto label_150994;
            case 0x150998u: goto label_150998;
            case 0x15099Cu: goto label_15099c;
            case 0x1509A0u: goto label_1509a0;
            case 0x1509A4u: goto label_1509a4;
            case 0x1509A8u: goto label_1509a8;
            case 0x1509ACu: goto label_1509ac;
            case 0x1509B0u: goto label_1509b0;
            case 0x1509B4u: goto label_1509b4;
            case 0x1509B8u: goto label_1509b8;
            case 0x1509BCu: goto label_1509bc;
            case 0x1509C0u: goto label_1509c0;
            case 0x1509C4u: goto label_1509c4;
            case 0x1509C8u: goto label_1509c8;
            case 0x1509CCu: goto label_1509cc;
            case 0x1509D0u: goto label_1509d0;
            case 0x1509D4u: goto label_1509d4;
            case 0x1509D8u: goto label_1509d8;
            case 0x1509DCu: goto label_1509dc;
            case 0x1509E0u: goto label_1509e0;
            case 0x1509E4u: goto label_1509e4;
            case 0x1509E8u: goto label_1509e8;
            case 0x1509ECu: goto label_1509ec;
            case 0x1509F0u: goto label_1509f0;
            case 0x1509F4u: goto label_1509f4;
            case 0x1509F8u: goto label_1509f8;
            case 0x1509FCu: goto label_1509fc;
            case 0x150A00u: goto label_150a00;
            case 0x150A04u: goto label_150a04;
            case 0x150A08u: goto label_150a08;
            case 0x150A0Cu: goto label_150a0c;
            case 0x150A10u: goto label_150a10;
            case 0x150A14u: goto label_150a14;
            case 0x150A18u: goto label_150a18;
            case 0x150A1Cu: goto label_150a1c;
            case 0x150A20u: goto label_150a20;
            case 0x150A24u: goto label_150a24;
            case 0x150A28u: goto label_150a28;
            case 0x150A2Cu: goto label_150a2c;
            case 0x150A30u: goto label_150a30;
            case 0x150A34u: goto label_150a34;
            case 0x150A38u: goto label_150a38;
            case 0x150A3Cu: goto label_150a3c;
            case 0x150A40u: goto label_150a40;
            case 0x150A44u: goto label_150a44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15093Cu;
label_15093c:
    // 0x15093c: 0x0
    ctx->pc = 0x15093cu;
    // NOP
label_150940:
    // 0x150940: 0x27bdffd0
    ctx->pc = 0x150940u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_150944:
    // 0x150944: 0xffb00000
    ctx->pc = 0x150944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_150948:
    // 0x150948: 0x24900128
    ctx->pc = 0x150948u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 296));
label_15094c:
    // 0x15094c: 0xffb10008
    ctx->pc = 0x15094cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_150950:
    // 0x150950: 0xa0882d
    ctx->pc = 0x150950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_150954:
    // 0x150954: 0xffb20010
    ctx->pc = 0x150954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_150958:
    // 0x150958: 0xc0902d
    ctx->pc = 0x150958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15095c:
    // 0x15095c: 0xffb30018
    ctx->pc = 0x15095cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_150960:
    // 0x150960: 0xffbf0020
    ctx->pc = 0x150960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_150964:
    // 0x150964: 0xc05578e
label_150968:
    if (ctx->pc == 0x150968u) {
        ctx->pc = 0x150968u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15096Cu;
        goto label_15096c;
    }
    ctx->pc = 0x150964u;
    SET_GPR_U32(ctx, 31, 0x15096Cu);
    ctx->pc = 0x150968u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x155E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00155E38_0x155e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15096Cu; }
    }
    if (ctx->pc != 0x15096Cu) { return; }
    ctx->pc = 0x15096Cu;
label_15096c:
    // 0x15096c: 0x3c05ff03
    ctx->pc = 0x15096cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
label_150970:
    // 0x150970: 0x202d
    ctx->pc = 0x150970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_150974:
    // 0x150974: 0x10400008
label_150978:
    if (ctx->pc == 0x150978u) {
        ctx->pc = 0x150978u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 527));
        ctx->pc = 0x15097Cu;
        goto label_15097c;
    }
    ctx->pc = 0x150974u;
    {
        const bool branch_taken_0x150974 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x150978u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 527));
        if (branch_taken_0x150974) {
            ctx->pc = 0x150998u;
            goto label_150998;
        }
    }
    ctx->pc = 0x15097Cu;
label_15097c:
    // 0x15097c: 0xdfb00000
    ctx->pc = 0x15097cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_150980:
    // 0x150980: 0xdfb10008
    ctx->pc = 0x150980u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_150984:
    // 0x150984: 0xdfb20010
    ctx->pc = 0x150984u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_150988:
    // 0x150988: 0xdfb30018
    ctx->pc = 0x150988u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15098c:
    // 0x15098c: 0xdfbf0020
    ctx->pc = 0x15098cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_150990:
    // 0x150990: 0x805419c
label_150994:
    if (ctx->pc == 0x150994u) {
        ctx->pc = 0x150994u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x150998u;
        goto label_150998;
    }
    ctx->pc = 0x150990u;
    ctx->pc = 0x150994u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x150670u;
    entry_150670_0x1506c0(rdram, ctx, runtime); return;
    ctx->pc = 0x150998u;
label_150998:
    // 0x150998: 0x8e0202fc
    ctx->pc = 0x150998u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 764)));
label_15099c:
    // 0x15099c: 0xdfbf0020
    ctx->pc = 0x15099cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1509a0:
    // 0x1509a0: 0x212c0
    ctx->pc = 0x1509a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
label_1509a4:
    // 0x1509a4: 0xae220000
    ctx->pc = 0x1509a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1509a8:
    // 0x1509a8: 0x2402ffff
    ctx->pc = 0x1509a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1509ac:
    // 0x1509ac: 0xdfb10008
    ctx->pc = 0x1509acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1509b0:
    // 0x1509b0: 0x8e0300e4
    ctx->pc = 0x1509b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_1509b4:
    // 0x1509b4: 0xdfb00000
    ctx->pc = 0x1509b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1509b8:
    // 0x1509b8: 0xae430000
    ctx->pc = 0x1509b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1509bc:
    // 0x1509bc: 0xae620000
    ctx->pc = 0x1509bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1509c0:
    // 0x1509c0: 0xdfb20010
    ctx->pc = 0x1509c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1509c4:
    // 0x1509c4: 0xdfb30018
    ctx->pc = 0x1509c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1509c8:
    // 0x1509c8: 0x3e00008
label_1509cc:
    if (ctx->pc == 0x1509CCu) {
        ctx->pc = 0x1509CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1509D0u;
        goto label_1509d0;
    }
    ctx->pc = 0x1509C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1509CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1506C0u: goto label_1506c0;
            case 0x1506C4u: goto label_1506c4;
            case 0x1506C8u: goto label_1506c8;
            case 0x1506CCu: goto label_1506cc;
            case 0x1506D0u: goto label_1506d0;
            case 0x1506D4u: goto label_1506d4;
            case 0x1506D8u: goto label_1506d8;
            case 0x1506DCu: goto label_1506dc;
            case 0x1506E0u: goto label_1506e0;
            case 0x1506E4u: goto label_1506e4;
            case 0x1506E8u: goto label_1506e8;
            case 0x1506ECu: goto label_1506ec;
            case 0x1506F0u: goto label_1506f0;
            case 0x1506F4u: goto label_1506f4;
            case 0x1506F8u: goto label_1506f8;
            case 0x1506FCu: goto label_1506fc;
            case 0x150700u: goto label_150700;
            case 0x150704u: goto label_150704;
            case 0x150708u: goto label_150708;
            case 0x15070Cu: goto label_15070c;
            case 0x150710u: goto label_150710;
            case 0x150714u: goto label_150714;
            case 0x150718u: goto label_150718;
            case 0x15071Cu: goto label_15071c;
            case 0x150720u: goto label_150720;
            case 0x150724u: goto label_150724;
            case 0x150728u: goto label_150728;
            case 0x15072Cu: goto label_15072c;
            case 0x150730u: goto label_150730;
            case 0x150734u: goto label_150734;
            case 0x150738u: goto label_150738;
            case 0x15073Cu: goto label_15073c;
            case 0x150740u: goto label_150740;
            case 0x150744u: goto label_150744;
            case 0x150748u: goto label_150748;
            case 0x15074Cu: goto label_15074c;
            case 0x150750u: goto label_150750;
            case 0x150754u: goto label_150754;
            case 0x150758u: goto label_150758;
            case 0x15075Cu: goto label_15075c;
            case 0x150760u: goto label_150760;
            case 0x150764u: goto label_150764;
            case 0x150768u: goto label_150768;
            case 0x15076Cu: goto label_15076c;
            case 0x150770u: goto label_150770;
            case 0x150774u: goto label_150774;
            case 0x150778u: goto label_150778;
            case 0x15077Cu: goto label_15077c;
            case 0x150780u: goto label_150780;
            case 0x150784u: goto label_150784;
            case 0x150788u: goto label_150788;
            case 0x15078Cu: goto label_15078c;
            case 0x150790u: goto label_150790;
            case 0x150794u: goto label_150794;
            case 0x150798u: goto label_150798;
            case 0x15079Cu: goto label_15079c;
            case 0x1507A0u: goto label_1507a0;
            case 0x1507A4u: goto label_1507a4;
            case 0x1507A8u: goto label_1507a8;
            case 0x1507ACu: goto label_1507ac;
            case 0x1507B0u: goto label_1507b0;
            case 0x1507B4u: goto label_1507b4;
            case 0x1507B8u: goto label_1507b8;
            case 0x1507BCu: goto label_1507bc;
            case 0x1507C0u: goto label_1507c0;
            case 0x1507C4u: goto label_1507c4;
            case 0x1507C8u: goto label_1507c8;
            case 0x1507CCu: goto label_1507cc;
            case 0x1507D0u: goto label_1507d0;
            case 0x1507D4u: goto label_1507d4;
            case 0x1507D8u: goto label_1507d8;
            case 0x1507DCu: goto label_1507dc;
            case 0x1507E0u: goto label_1507e0;
            case 0x1507E4u: goto label_1507e4;
            case 0x1507E8u: goto label_1507e8;
            case 0x1507ECu: goto label_1507ec;
            case 0x1507F0u: goto label_1507f0;
            case 0x1507F4u: goto label_1507f4;
            case 0x1507F8u: goto label_1507f8;
            case 0x1507FCu: goto label_1507fc;
            case 0x150800u: goto label_150800;
            case 0x150804u: goto label_150804;
            case 0x150808u: goto label_150808;
            case 0x15080Cu: goto label_15080c;
            case 0x150810u: goto label_150810;
            case 0x150814u: goto label_150814;
            case 0x150818u: goto label_150818;
            case 0x15081Cu: goto label_15081c;
            case 0x150820u: goto label_150820;
            case 0x150824u: goto label_150824;
            case 0x150828u: goto label_150828;
            case 0x15082Cu: goto label_15082c;
            case 0x150830u: goto label_150830;
            case 0x150834u: goto label_150834;
            case 0x150838u: goto label_150838;
            case 0x15083Cu: goto label_15083c;
            case 0x150840u: goto label_150840;
            case 0x150844u: goto label_150844;
            case 0x150848u: goto label_150848;
            case 0x15084Cu: goto label_15084c;
            case 0x150850u: goto label_150850;
            case 0x150854u: goto label_150854;
            case 0x150858u: goto label_150858;
            case 0x15085Cu: goto label_15085c;
            case 0x150860u: goto label_150860;
            case 0x150864u: goto label_150864;
            case 0x150868u: goto label_150868;
            case 0x15086Cu: goto label_15086c;
            case 0x150870u: goto label_150870;
            case 0x150874u: goto label_150874;
            case 0x150878u: goto label_150878;
            case 0x15087Cu: goto label_15087c;
            case 0x150880u: goto label_150880;
            case 0x150884u: goto label_150884;
            case 0x150888u: goto label_150888;
            case 0x15088Cu: goto label_15088c;
            case 0x150890u: goto label_150890;
            case 0x150894u: goto label_150894;
            case 0x150898u: goto label_150898;
            case 0x15089Cu: goto label_15089c;
            case 0x1508A0u: goto label_1508a0;
            case 0x1508A4u: goto label_1508a4;
            case 0x1508A8u: goto label_1508a8;
            case 0x1508ACu: goto label_1508ac;
            case 0x1508B0u: goto label_1508b0;
            case 0x1508B4u: goto label_1508b4;
            case 0x1508B8u: goto label_1508b8;
            case 0x1508BCu: goto label_1508bc;
            case 0x1508C0u: goto label_1508c0;
            case 0x1508C4u: goto label_1508c4;
            case 0x1508C8u: goto label_1508c8;
            case 0x1508CCu: goto label_1508cc;
            case 0x1508D0u: goto label_1508d0;
            case 0x1508D4u: goto label_1508d4;
            case 0x1508D8u: goto label_1508d8;
            case 0x1508DCu: goto label_1508dc;
            case 0x1508E0u: goto label_1508e0;
            case 0x1508E4u: goto label_1508e4;
            case 0x1508E8u: goto label_1508e8;
            case 0x1508ECu: goto label_1508ec;
            case 0x1508F0u: goto label_1508f0;
            case 0x1508F4u: goto label_1508f4;
            case 0x1508F8u: goto label_1508f8;
            case 0x1508FCu: goto label_1508fc;
            case 0x150900u: goto label_150900;
            case 0x150904u: goto label_150904;
            case 0x150908u: goto label_150908;
            case 0x15090Cu: goto label_15090c;
            case 0x150910u: goto label_150910;
            case 0x150914u: goto label_150914;
            case 0x150918u: goto label_150918;
            case 0x15091Cu: goto label_15091c;
            case 0x150920u: goto label_150920;
            case 0x150924u: goto label_150924;
            case 0x150928u: goto label_150928;
            case 0x15092Cu: goto label_15092c;
            case 0x150930u: goto label_150930;
            case 0x150934u: goto label_150934;
            case 0x150938u: goto label_150938;
            case 0x15093Cu: goto label_15093c;
            case 0x150940u: goto label_150940;
            case 0x150944u: goto label_150944;
            case 0x150948u: goto label_150948;
            case 0x15094Cu: goto label_15094c;
            case 0x150950u: goto label_150950;
            case 0x150954u: goto label_150954;
            case 0x150958u: goto label_150958;
            case 0x15095Cu: goto label_15095c;
            case 0x150960u: goto label_150960;
            case 0x150964u: goto label_150964;
            case 0x150968u: goto label_150968;
            case 0x15096Cu: goto label_15096c;
            case 0x150970u: goto label_150970;
            case 0x150974u: goto label_150974;
            case 0x150978u: goto label_150978;
            case 0x15097Cu: goto label_15097c;
            case 0x150980u: goto label_150980;
            case 0x150984u: goto label_150984;
            case 0x150988u: goto label_150988;
            case 0x15098Cu: goto label_15098c;
            case 0x150990u: goto label_150990;
            case 0x150994u: goto label_150994;
            case 0x150998u: goto label_150998;
            case 0x15099Cu: goto label_15099c;
            case 0x1509A0u: goto label_1509a0;
            case 0x1509A4u: goto label_1509a4;
            case 0x1509A8u: goto label_1509a8;
            case 0x1509ACu: goto label_1509ac;
            case 0x1509B0u: goto label_1509b0;
            case 0x1509B4u: goto label_1509b4;
            case 0x1509B8u: goto label_1509b8;
            case 0x1509BCu: goto label_1509bc;
            case 0x1509C0u: goto label_1509c0;
            case 0x1509C4u: goto label_1509c4;
            case 0x1509C8u: goto label_1509c8;
            case 0x1509CCu: goto label_1509cc;
            case 0x1509D0u: goto label_1509d0;
            case 0x1509D4u: goto label_1509d4;
            case 0x1509D8u: goto label_1509d8;
            case 0x1509DCu: goto label_1509dc;
            case 0x1509E0u: goto label_1509e0;
            case 0x1509E4u: goto label_1509e4;
            case 0x1509E8u: goto label_1509e8;
            case 0x1509ECu: goto label_1509ec;
            case 0x1509F0u: goto label_1509f0;
            case 0x1509F4u: goto label_1509f4;
            case 0x1509F8u: goto label_1509f8;
            case 0x1509FCu: goto label_1509fc;
            case 0x150A00u: goto label_150a00;
            case 0x150A04u: goto label_150a04;
            case 0x150A08u: goto label_150a08;
            case 0x150A0Cu: goto label_150a0c;
            case 0x150A10u: goto label_150a10;
            case 0x150A14u: goto label_150a14;
            case 0x150A18u: goto label_150a18;
            case 0x150A1Cu: goto label_150a1c;
            case 0x150A20u: goto label_150a20;
            case 0x150A24u: goto label_150a24;
            case 0x150A28u: goto label_150a28;
            case 0x150A2Cu: goto label_150a2c;
            case 0x150A30u: goto label_150a30;
            case 0x150A34u: goto label_150a34;
            case 0x150A38u: goto label_150a38;
            case 0x150A3Cu: goto label_150a3c;
            case 0x150A40u: goto label_150a40;
            case 0x150A44u: goto label_150a44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1509D0u;
label_1509d0:
    // 0x1509d0: 0x27bdffe0
    ctx->pc = 0x1509d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1509d4:
    // 0x1509d4: 0xffb00000
    ctx->pc = 0x1509d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1509d8:
    // 0x1509d8: 0x24900128
    ctx->pc = 0x1509d8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 296));
label_1509dc:
    // 0x1509dc: 0xffb10008
    ctx->pc = 0x1509dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1509e0:
    // 0x1509e0: 0xa0882d
    ctx->pc = 0x1509e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1509e4:
    // 0x1509e4: 0xffb20010
    ctx->pc = 0x1509e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1509e8:
    // 0x1509e8: 0xffbf0018
    ctx->pc = 0x1509e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1509ec:
    // 0x1509ec: 0xc05578e
label_1509f0:
    if (ctx->pc == 0x1509F0u) {
        ctx->pc = 0x1509F0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1509F4u;
        goto label_1509f4;
    }
    ctx->pc = 0x1509ECu;
    SET_GPR_U32(ctx, 31, 0x1509F4u);
    ctx->pc = 0x1509F0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x155E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00155E38_0x155e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1509F4u; }
    }
    if (ctx->pc != 0x1509F4u) { return; }
    ctx->pc = 0x1509F4u;
label_1509f4:
    // 0x1509f4: 0x3c05ff03
    ctx->pc = 0x1509f4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
label_1509f8:
    // 0x1509f8: 0x202d
    ctx->pc = 0x1509f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1509fc:
    // 0x1509fc: 0x10400008
label_150a00:
    if (ctx->pc == 0x150A00u) {
        ctx->pc = 0x150A00u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 526));
        ctx->pc = 0x150A04u;
        goto label_150a04;
    }
    ctx->pc = 0x1509FCu;
    {
        const bool branch_taken_0x1509fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x150A00u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 526));
        if (branch_taken_0x1509fc) {
            ctx->pc = 0x150A20u;
            goto label_150a20;
        }
    }
    ctx->pc = 0x150A04u;
label_150a04:
    // 0x150a04: 0xdfb00000
    ctx->pc = 0x150a04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_150a08:
    // 0x150a08: 0xdfb10008
    ctx->pc = 0x150a08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_150a0c:
    // 0x150a0c: 0xdfb20010
    ctx->pc = 0x150a0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_150a10:
    // 0x150a10: 0xdfbf0018
    ctx->pc = 0x150a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_150a14:
    // 0x150a14: 0x805419c
label_150a18:
    if (ctx->pc == 0x150A18u) {
        ctx->pc = 0x150A18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x150A1Cu;
        goto label_150a1c;
    }
    ctx->pc = 0x150A14u;
    ctx->pc = 0x150A18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x150670u;
    entry_150670_0x1506c0(rdram, ctx, runtime); return;
    ctx->pc = 0x150A1Cu;
label_150a1c:
    // 0x150a1c: 0x0
    ctx->pc = 0x150a1cu;
    // NOP
label_150a20:
    // 0x150a20: 0x8e0200d0
    ctx->pc = 0x150a20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_150a24:
    // 0x150a24: 0xdfbf0018
    ctx->pc = 0x150a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_150a28:
    // 0x150a28: 0xae220000
    ctx->pc = 0x150a28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_150a2c:
    // 0x150a2c: 0xdfb10008
    ctx->pc = 0x150a2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_150a30:
    // 0x150a30: 0x8e0300d4
    ctx->pc = 0x150a30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_150a34:
    // 0x150a34: 0xdfb00000
    ctx->pc = 0x150a34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_150a38:
    // 0x150a38: 0xae430000
    ctx->pc = 0x150a38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_150a3c:
    // 0x150a3c: 0xdfb20010
    ctx->pc = 0x150a3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_150a40:
    // 0x150a40: 0x3e00008
label_150a44:
    if (ctx->pc == 0x150A44u) {
        ctx->pc = 0x150A44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x150A48u;
        goto label_fallthrough_0x150a40;
    }
    ctx->pc = 0x150A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150A44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1506C0u: goto label_1506c0;
            case 0x1506C4u: goto label_1506c4;
            case 0x1506C8u: goto label_1506c8;
            case 0x1506CCu: goto label_1506cc;
            case 0x1506D0u: goto label_1506d0;
            case 0x1506D4u: goto label_1506d4;
            case 0x1506D8u: goto label_1506d8;
            case 0x1506DCu: goto label_1506dc;
            case 0x1506E0u: goto label_1506e0;
            case 0x1506E4u: goto label_1506e4;
            case 0x1506E8u: goto label_1506e8;
            case 0x1506ECu: goto label_1506ec;
            case 0x1506F0u: goto label_1506f0;
            case 0x1506F4u: goto label_1506f4;
            case 0x1506F8u: goto label_1506f8;
            case 0x1506FCu: goto label_1506fc;
            case 0x150700u: goto label_150700;
            case 0x150704u: goto label_150704;
            case 0x150708u: goto label_150708;
            case 0x15070Cu: goto label_15070c;
            case 0x150710u: goto label_150710;
            case 0x150714u: goto label_150714;
            case 0x150718u: goto label_150718;
            case 0x15071Cu: goto label_15071c;
            case 0x150720u: goto label_150720;
            case 0x150724u: goto label_150724;
            case 0x150728u: goto label_150728;
            case 0x15072Cu: goto label_15072c;
            case 0x150730u: goto label_150730;
            case 0x150734u: goto label_150734;
            case 0x150738u: goto label_150738;
            case 0x15073Cu: goto label_15073c;
            case 0x150740u: goto label_150740;
            case 0x150744u: goto label_150744;
            case 0x150748u: goto label_150748;
            case 0x15074Cu: goto label_15074c;
            case 0x150750u: goto label_150750;
            case 0x150754u: goto label_150754;
            case 0x150758u: goto label_150758;
            case 0x15075Cu: goto label_15075c;
            case 0x150760u: goto label_150760;
            case 0x150764u: goto label_150764;
            case 0x150768u: goto label_150768;
            case 0x15076Cu: goto label_15076c;
            case 0x150770u: goto label_150770;
            case 0x150774u: goto label_150774;
            case 0x150778u: goto label_150778;
            case 0x15077Cu: goto label_15077c;
            case 0x150780u: goto label_150780;
            case 0x150784u: goto label_150784;
            case 0x150788u: goto label_150788;
            case 0x15078Cu: goto label_15078c;
            case 0x150790u: goto label_150790;
            case 0x150794u: goto label_150794;
            case 0x150798u: goto label_150798;
            case 0x15079Cu: goto label_15079c;
            case 0x1507A0u: goto label_1507a0;
            case 0x1507A4u: goto label_1507a4;
            case 0x1507A8u: goto label_1507a8;
            case 0x1507ACu: goto label_1507ac;
            case 0x1507B0u: goto label_1507b0;
            case 0x1507B4u: goto label_1507b4;
            case 0x1507B8u: goto label_1507b8;
            case 0x1507BCu: goto label_1507bc;
            case 0x1507C0u: goto label_1507c0;
            case 0x1507C4u: goto label_1507c4;
            case 0x1507C8u: goto label_1507c8;
            case 0x1507CCu: goto label_1507cc;
            case 0x1507D0u: goto label_1507d0;
            case 0x1507D4u: goto label_1507d4;
            case 0x1507D8u: goto label_1507d8;
            case 0x1507DCu: goto label_1507dc;
            case 0x1507E0u: goto label_1507e0;
            case 0x1507E4u: goto label_1507e4;
            case 0x1507E8u: goto label_1507e8;
            case 0x1507ECu: goto label_1507ec;
            case 0x1507F0u: goto label_1507f0;
            case 0x1507F4u: goto label_1507f4;
            case 0x1507F8u: goto label_1507f8;
            case 0x1507FCu: goto label_1507fc;
            case 0x150800u: goto label_150800;
            case 0x150804u: goto label_150804;
            case 0x150808u: goto label_150808;
            case 0x15080Cu: goto label_15080c;
            case 0x150810u: goto label_150810;
            case 0x150814u: goto label_150814;
            case 0x150818u: goto label_150818;
            case 0x15081Cu: goto label_15081c;
            case 0x150820u: goto label_150820;
            case 0x150824u: goto label_150824;
            case 0x150828u: goto label_150828;
            case 0x15082Cu: goto label_15082c;
            case 0x150830u: goto label_150830;
            case 0x150834u: goto label_150834;
            case 0x150838u: goto label_150838;
            case 0x15083Cu: goto label_15083c;
            case 0x150840u: goto label_150840;
            case 0x150844u: goto label_150844;
            case 0x150848u: goto label_150848;
            case 0x15084Cu: goto label_15084c;
            case 0x150850u: goto label_150850;
            case 0x150854u: goto label_150854;
            case 0x150858u: goto label_150858;
            case 0x15085Cu: goto label_15085c;
            case 0x150860u: goto label_150860;
            case 0x150864u: goto label_150864;
            case 0x150868u: goto label_150868;
            case 0x15086Cu: goto label_15086c;
            case 0x150870u: goto label_150870;
            case 0x150874u: goto label_150874;
            case 0x150878u: goto label_150878;
            case 0x15087Cu: goto label_15087c;
            case 0x150880u: goto label_150880;
            case 0x150884u: goto label_150884;
            case 0x150888u: goto label_150888;
            case 0x15088Cu: goto label_15088c;
            case 0x150890u: goto label_150890;
            case 0x150894u: goto label_150894;
            case 0x150898u: goto label_150898;
            case 0x15089Cu: goto label_15089c;
            case 0x1508A0u: goto label_1508a0;
            case 0x1508A4u: goto label_1508a4;
            case 0x1508A8u: goto label_1508a8;
            case 0x1508ACu: goto label_1508ac;
            case 0x1508B0u: goto label_1508b0;
            case 0x1508B4u: goto label_1508b4;
            case 0x1508B8u: goto label_1508b8;
            case 0x1508BCu: goto label_1508bc;
            case 0x1508C0u: goto label_1508c0;
            case 0x1508C4u: goto label_1508c4;
            case 0x1508C8u: goto label_1508c8;
            case 0x1508CCu: goto label_1508cc;
            case 0x1508D0u: goto label_1508d0;
            case 0x1508D4u: goto label_1508d4;
            case 0x1508D8u: goto label_1508d8;
            case 0x1508DCu: goto label_1508dc;
            case 0x1508E0u: goto label_1508e0;
            case 0x1508E4u: goto label_1508e4;
            case 0x1508E8u: goto label_1508e8;
            case 0x1508ECu: goto label_1508ec;
            case 0x1508F0u: goto label_1508f0;
            case 0x1508F4u: goto label_1508f4;
            case 0x1508F8u: goto label_1508f8;
            case 0x1508FCu: goto label_1508fc;
            case 0x150900u: goto label_150900;
            case 0x150904u: goto label_150904;
            case 0x150908u: goto label_150908;
            case 0x15090Cu: goto label_15090c;
            case 0x150910u: goto label_150910;
            case 0x150914u: goto label_150914;
            case 0x150918u: goto label_150918;
            case 0x15091Cu: goto label_15091c;
            case 0x150920u: goto label_150920;
            case 0x150924u: goto label_150924;
            case 0x150928u: goto label_150928;
            case 0x15092Cu: goto label_15092c;
            case 0x150930u: goto label_150930;
            case 0x150934u: goto label_150934;
            case 0x150938u: goto label_150938;
            case 0x15093Cu: goto label_15093c;
            case 0x150940u: goto label_150940;
            case 0x150944u: goto label_150944;
            case 0x150948u: goto label_150948;
            case 0x15094Cu: goto label_15094c;
            case 0x150950u: goto label_150950;
            case 0x150954u: goto label_150954;
            case 0x150958u: goto label_150958;
            case 0x15095Cu: goto label_15095c;
            case 0x150960u: goto label_150960;
            case 0x150964u: goto label_150964;
            case 0x150968u: goto label_150968;
            case 0x15096Cu: goto label_15096c;
            case 0x150970u: goto label_150970;
            case 0x150974u: goto label_150974;
            case 0x150978u: goto label_150978;
            case 0x15097Cu: goto label_15097c;
            case 0x150980u: goto label_150980;
            case 0x150984u: goto label_150984;
            case 0x150988u: goto label_150988;
            case 0x15098Cu: goto label_15098c;
            case 0x150990u: goto label_150990;
            case 0x150994u: goto label_150994;
            case 0x150998u: goto label_150998;
            case 0x15099Cu: goto label_15099c;
            case 0x1509A0u: goto label_1509a0;
            case 0x1509A4u: goto label_1509a4;
            case 0x1509A8u: goto label_1509a8;
            case 0x1509ACu: goto label_1509ac;
            case 0x1509B0u: goto label_1509b0;
            case 0x1509B4u: goto label_1509b4;
            case 0x1509B8u: goto label_1509b8;
            case 0x1509BCu: goto label_1509bc;
            case 0x1509C0u: goto label_1509c0;
            case 0x1509C4u: goto label_1509c4;
            case 0x1509C8u: goto label_1509c8;
            case 0x1509CCu: goto label_1509cc;
            case 0x1509D0u: goto label_1509d0;
            case 0x1509D4u: goto label_1509d4;
            case 0x1509D8u: goto label_1509d8;
            case 0x1509DCu: goto label_1509dc;
            case 0x1509E0u: goto label_1509e0;
            case 0x1509E4u: goto label_1509e4;
            case 0x1509E8u: goto label_1509e8;
            case 0x1509ECu: goto label_1509ec;
            case 0x1509F0u: goto label_1509f0;
            case 0x1509F4u: goto label_1509f4;
            case 0x1509F8u: goto label_1509f8;
            case 0x1509FCu: goto label_1509fc;
            case 0x150A00u: goto label_150a00;
            case 0x150A04u: goto label_150a04;
            case 0x150A08u: goto label_150a08;
            case 0x150A0Cu: goto label_150a0c;
            case 0x150A10u: goto label_150a10;
            case 0x150A14u: goto label_150a14;
            case 0x150A18u: goto label_150a18;
            case 0x150A1Cu: goto label_150a1c;
            case 0x150A20u: goto label_150a20;
            case 0x150A24u: goto label_150a24;
            case 0x150A28u: goto label_150a28;
            case 0x150A2Cu: goto label_150a2c;
            case 0x150A30u: goto label_150a30;
            case 0x150A34u: goto label_150a34;
            case 0x150A38u: goto label_150a38;
            case 0x150A3Cu: goto label_150a3c;
            case 0x150A40u: goto label_150a40;
            case 0x150A44u: goto label_150a44;
            default: break;
        }
        return;
    }
label_fallthrough_0x150a40:
    ctx->pc = 0x150A48u;
}
