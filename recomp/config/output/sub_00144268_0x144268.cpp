#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00144268
// Address: 0x144268 - 0x1443f0
void sub_00144268_0x144268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x144268u;

    // 0x144268: 0x8c83018c
    ctx->pc = 0x144268u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 396)));
    // 0x14426c: 0x24020003
    ctx->pc = 0x14426cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x144270: 0x14620045
    ctx->pc = 0x144270u;
    {
        const bool branch_taken_0x144270 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x144270) {
            ctx->pc = 0x144388u;
            goto label_144388;
        }
    }
    ctx->pc = 0x144278u;
    // 0x144278: 0x8c820190
    ctx->pc = 0x144278u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 400)));
    // 0x14427c: 0x50400024
    ctx->pc = 0x14427Cu;
    {
        const bool branch_taken_0x14427c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x14427c) {
            ctx->pc = 0x144280u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 1));
            ctx->pc = 0x144310u;
            goto label_144310;
        }
    }
    ctx->pc = 0x144284u;
    // 0x144284: 0x18e00004
    ctx->pc = 0x144284u;
    {
        const bool branch_taken_0x144284 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x144288u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
        if (branch_taken_0x144284) {
            ctx->pc = 0x144298u;
            goto label_144298;
        }
    }
    ctx->pc = 0x14428Cu;
    // 0x14428c: 0x24e20001
    ctx->pc = 0x14428cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 1));
    // 0x144290: 0x10000002
    ctx->pc = 0x144290u;
    {
        const bool branch_taken_0x144290 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144294u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x144290) {
            ctx->pc = 0x14429Cu;
            goto label_14429c;
        }
    }
    ctx->pc = 0x144298u;
label_144298:
    // 0x144298: 0x71043
    ctx->pc = 0x144298u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_14429c:
    // 0x14429c: 0x431021
    ctx->pc = 0x14429cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1442a0: 0xaca20000
    ctx->pc = 0x1442a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1442a4: 0x19000004
    ctx->pc = 0x1442A4u;
    {
        const bool branch_taken_0x1442a4 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1442A8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4)));
        if (branch_taken_0x1442a4) {
            ctx->pc = 0x1442B8u;
            goto label_1442b8;
        }
    }
    ctx->pc = 0x1442ACu;
    // 0x1442ac: 0x25020001
    ctx->pc = 0x1442acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 1));
    // 0x1442b0: 0x10000002
    ctx->pc = 0x1442B0u;
    {
        const bool branch_taken_0x1442b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1442B4u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x1442b0) {
            ctx->pc = 0x1442BCu;
            goto label_1442bc;
        }
    }
    ctx->pc = 0x1442B8u;
label_1442b8:
    // 0x1442b8: 0x81043
    ctx->pc = 0x1442b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_1442bc:
    // 0x1442bc: 0x431021
    ctx->pc = 0x1442bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1442c0: 0x2442ffff
    ctx->pc = 0x1442c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1442c4: 0xaca20004
    ctx->pc = 0x1442c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1442c8: 0x71040
    ctx->pc = 0x1442c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 1));
    // 0x1442cc: 0x471021
    ctx->pc = 0x1442ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1442d0: 0x18e00002
    ctx->pc = 0x1442D0u;
    {
        const bool branch_taken_0x1442d0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1442D4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
        if (branch_taken_0x1442d0) {
            ctx->pc = 0x1442DCu;
            goto label_1442dc;
        }
    }
    ctx->pc = 0x1442D8u;
    // 0x1442d8: 0x24420001
    ctx->pc = 0x1442d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1442dc:
    // 0x1442dc: 0x21043
    ctx->pc = 0x1442dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1442e0: 0x431021
    ctx->pc = 0x1442e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1442e4: 0xaca20008
    ctx->pc = 0x1442e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1442e8: 0x81040
    ctx->pc = 0x1442e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 1));
    // 0x1442ec: 0x481021
    ctx->pc = 0x1442ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1442f0: 0x19000002
    ctx->pc = 0x1442F0u;
    {
        const bool branch_taken_0x1442f0 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1442F4u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 4)));
        if (branch_taken_0x1442f0) {
            ctx->pc = 0x1442FCu;
            goto label_1442fc;
        }
    }
    ctx->pc = 0x1442F8u;
    // 0x1442f8: 0x24420001
    ctx->pc = 0x1442f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1442fc:
    // 0x1442fc: 0x21043
    ctx->pc = 0x1442fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_144300:
    // 0x144300: 0x461021
    ctx->pc = 0x144300u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x144304: 0x24420001
    ctx->pc = 0x144304u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x144308: 0x3e00008
    ctx->pc = 0x144308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14430Cu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144298u: goto label_144298;
            case 0x14429Cu: goto label_14429c;
            case 0x1442B8u: goto label_1442b8;
            case 0x1442BCu: goto label_1442bc;
            case 0x1442DCu: goto label_1442dc;
            case 0x1442FCu: goto label_1442fc;
            case 0x144300u: goto label_144300;
            case 0x144310u: goto label_144310;
            case 0x144320u: goto label_144320;
            case 0x144340u: goto label_144340;
            case 0x144364u: goto label_144364;
            case 0x144368u: goto label_144368;
            case 0x144380u: goto label_144380;
            case 0x144388u: goto label_144388;
            case 0x14439Cu: goto label_14439c;
            case 0x1443A0u: goto label_1443a0;
            case 0x1443BCu: goto label_1443bc;
            case 0x1443C0u: goto label_1443c0;
            case 0x1443E4u: goto label_1443e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144310u;
label_144310:
    // 0x144310: 0x8cc30000
    ctx->pc = 0x144310u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x144314: 0x18e00002
    ctx->pc = 0x144314u;
    {
        const bool branch_taken_0x144314 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x144318u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        if (branch_taken_0x144314) {
            ctx->pc = 0x144320u;
            goto label_144320;
        }
    }
    ctx->pc = 0x14431Cu;
    // 0x14431c: 0x24420001
    ctx->pc = 0x14431cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_144320:
    // 0x144320: 0x21043
    ctx->pc = 0x144320u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x144324: 0x431021
    ctx->pc = 0x144324u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x144328: 0xaca20000
    ctx->pc = 0x144328u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x14432c: 0x81040
    ctx->pc = 0x14432cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 1));
    // 0x144330: 0x481021
    ctx->pc = 0x144330u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x144334: 0x19000002
    ctx->pc = 0x144334u;
    {
        const bool branch_taken_0x144334 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x144338u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4)));
        if (branch_taken_0x144334) {
            ctx->pc = 0x144340u;
            goto label_144340;
        }
    }
    ctx->pc = 0x14433Cu;
    // 0x14433c: 0x24420001
    ctx->pc = 0x14433cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_144340:
    // 0x144340: 0x21043
    ctx->pc = 0x144340u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x144344: 0x431021
    ctx->pc = 0x144344u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x144348: 0x2442ffff
    ctx->pc = 0x144348u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14434c: 0xaca20004
    ctx->pc = 0x14434cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x144350: 0x18e00004
    ctx->pc = 0x144350u;
    {
        const bool branch_taken_0x144350 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x144354u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
        if (branch_taken_0x144350) {
            ctx->pc = 0x144364u;
            goto label_144364;
        }
    }
    ctx->pc = 0x144358u;
    // 0x144358: 0x24e20001
    ctx->pc = 0x144358u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 1));
    // 0x14435c: 0x10000002
    ctx->pc = 0x14435Cu;
    {
        const bool branch_taken_0x14435c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144360u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x14435c) {
            ctx->pc = 0x144368u;
            goto label_144368;
        }
    }
    ctx->pc = 0x144364u;
label_144364:
    // 0x144364: 0x71043
    ctx->pc = 0x144364u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_144368:
    // 0x144368: 0x431021
    ctx->pc = 0x144368u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14436c: 0xaca20008
    ctx->pc = 0x14436cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x144370: 0x19000003
    ctx->pc = 0x144370u;
    {
        const bool branch_taken_0x144370 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x144374u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 4)));
        if (branch_taken_0x144370) {
            ctx->pc = 0x144380u;
            goto label_144380;
        }
    }
    ctx->pc = 0x144378u;
    // 0x144378: 0x1000ffe0
    ctx->pc = 0x144378u;
    {
        const bool branch_taken_0x144378 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14437Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 1));
        if (branch_taken_0x144378) {
            ctx->pc = 0x1442FCu;
            goto label_1442fc;
        }
    }
    ctx->pc = 0x144380u;
label_144380:
    // 0x144380: 0x1000ffdf
    ctx->pc = 0x144380u;
    {
        const bool branch_taken_0x144380 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144384u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
        if (branch_taken_0x144380) {
            ctx->pc = 0x144300u;
            goto label_144300;
        }
    }
    ctx->pc = 0x144388u;
label_144388:
    // 0x144388: 0x18e00004
    ctx->pc = 0x144388u;
    {
        const bool branch_taken_0x144388 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x14438Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
        if (branch_taken_0x144388) {
            ctx->pc = 0x14439Cu;
            goto label_14439c;
        }
    }
    ctx->pc = 0x144390u;
    // 0x144390: 0x24e20001
    ctx->pc = 0x144390u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 1));
    // 0x144394: 0x10000002
    ctx->pc = 0x144394u;
    {
        const bool branch_taken_0x144394 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144398u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x144394) {
            ctx->pc = 0x1443A0u;
            goto label_1443a0;
        }
    }
    ctx->pc = 0x14439Cu;
label_14439c:
    // 0x14439c: 0x71043
    ctx->pc = 0x14439cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_1443a0:
    // 0x1443a0: 0x431021
    ctx->pc = 0x1443a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1443a4: 0xaca20000
    ctx->pc = 0x1443a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1443a8: 0x19000004
    ctx->pc = 0x1443A8u;
    {
        const bool branch_taken_0x1443a8 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1443ACu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 4)));
        if (branch_taken_0x1443a8) {
            ctx->pc = 0x1443BCu;
            goto label_1443bc;
        }
    }
    ctx->pc = 0x1443B0u;
    // 0x1443b0: 0x25020001
    ctx->pc = 0x1443b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 1));
    // 0x1443b4: 0x10000002
    ctx->pc = 0x1443B4u;
    {
        const bool branch_taken_0x1443b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1443B8u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x1443b4) {
            ctx->pc = 0x1443C0u;
            goto label_1443c0;
        }
    }
    ctx->pc = 0x1443BCu;
label_1443bc:
    // 0x1443bc: 0x81043
    ctx->pc = 0x1443bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_1443c0:
    // 0x1443c0: 0x463021
    ctx->pc = 0x1443c0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1443c4: 0xaca60004
    ctx->pc = 0x1443c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x1443c8: 0x24030001
    ctx->pc = 0x1443c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1443cc: 0x8c82018c
    ctx->pc = 0x1443ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 396)));
    // 0x1443d0: 0x14430004
    ctx->pc = 0x1443D0u;
    {
        const bool branch_taken_0x1443d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1443D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x1443d0) {
            ctx->pc = 0x1443E4u;
            goto label_1443e4;
        }
    }
    ctx->pc = 0x1443D8u;
    // 0x1443d8: 0x24c2ffff
    ctx->pc = 0x1443d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1443dc: 0x3e00008
    ctx->pc = 0x1443DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1443E0u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144298u: goto label_144298;
            case 0x14429Cu: goto label_14429c;
            case 0x1442B8u: goto label_1442b8;
            case 0x1442BCu: goto label_1442bc;
            case 0x1442DCu: goto label_1442dc;
            case 0x1442FCu: goto label_1442fc;
            case 0x144300u: goto label_144300;
            case 0x144310u: goto label_144310;
            case 0x144320u: goto label_144320;
            case 0x144340u: goto label_144340;
            case 0x144364u: goto label_144364;
            case 0x144368u: goto label_144368;
            case 0x144380u: goto label_144380;
            case 0x144388u: goto label_144388;
            case 0x14439Cu: goto label_14439c;
            case 0x1443A0u: goto label_1443a0;
            case 0x1443BCu: goto label_1443bc;
            case 0x1443C0u: goto label_1443c0;
            case 0x1443E4u: goto label_1443e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1443E4u;
label_1443e4:
    // 0x1443e4: 0x3e00008
    ctx->pc = 0x1443E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1443E8u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144298u: goto label_144298;
            case 0x14429Cu: goto label_14429c;
            case 0x1442B8u: goto label_1442b8;
            case 0x1442BCu: goto label_1442bc;
            case 0x1442DCu: goto label_1442dc;
            case 0x1442FCu: goto label_1442fc;
            case 0x144300u: goto label_144300;
            case 0x144310u: goto label_144310;
            case 0x144320u: goto label_144320;
            case 0x144340u: goto label_144340;
            case 0x144364u: goto label_144364;
            case 0x144368u: goto label_144368;
            case 0x144380u: goto label_144380;
            case 0x144388u: goto label_144388;
            case 0x14439Cu: goto label_14439c;
            case 0x1443A0u: goto label_1443a0;
            case 0x1443BCu: goto label_1443bc;
            case 0x1443C0u: goto label_1443c0;
            case 0x1443E4u: goto label_1443e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1443ECu;
    // 0x1443ec: 0x0
    ctx->pc = 0x1443ecu;
    // NOP
}
