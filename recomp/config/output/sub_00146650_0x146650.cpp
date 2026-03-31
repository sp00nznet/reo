#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00146650
// Address: 0x146650 - 0x146908
void sub_00146650_0x146650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x146650u;

    // 0x146650: 0x80382d
    ctx->pc = 0x146650u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146654: 0x240b0004
    ctx->pc = 0x146654u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4));
    // 0x146658: 0x8ce9018c
    ctx->pc = 0x146658u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 7), 396)));
    // 0x14665c: 0x240c0002
    ctx->pc = 0x14665cu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 2));
    // 0x146660: 0x8cea0168
    ctx->pc = 0x146660u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 7), 360)));
    // 0x146664: 0x402d
    ctx->pc = 0x146664u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146668: 0x39220003
    ctx->pc = 0x146668u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 9), 3));
    // 0x14666c: 0x682d
    ctx->pc = 0x14666cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146670: 0x240e0003
    ctx->pc = 0x146670u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 3));
    // 0x146674: 0x154e0044
    ctx->pc = 0x146674u;
    {
        const bool branch_taken_0x146674 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 14));
        ctx->pc = 0x146678u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 11, GPR_U32(ctx, 12));
        if (branch_taken_0x146674) {
            ctx->pc = 0x146788u;
            goto label_146788;
        }
    }
    ctx->pc = 0x14667Cu;
    // 0x14667c: 0x8ce200b8
    ctx->pc = 0x14667cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 184)));
    // 0x146680: 0x8ce300bc
    ctx->pc = 0x146680u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 188)));
    // 0x146684: 0x8ce501dc
    ctx->pc = 0x146684u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x146688: 0x8ce601ec
    ctx->pc = 0x146688u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 492)));
    // 0x14668c: 0x431021
    ctx->pc = 0x14668cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x146690: 0x8ce401fc
    ctx->pc = 0x146690u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 508)));
    // 0x146694: 0x4b102a
    ctx->pc = 0x146694u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 11)));
    // 0x146698: 0xace501d8
    ctx->pc = 0x146698u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 472), GPR_U32(ctx, 5));
    // 0x14669c: 0xace601e8
    ctx->pc = 0x14669cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 488), GPR_U32(ctx, 6));
    // 0x1466a0: 0x14400004
    ctx->pc = 0x1466A0u;
    {
        const bool branch_taken_0x1466a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1466A4u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 504), GPR_U32(ctx, 4));
        if (branch_taken_0x1466a0) {
            ctx->pc = 0x1466B4u;
            goto label_1466b4;
        }
    }
    ctx->pc = 0x1466A8u;
    // 0x1466a8: 0xace00100
    ctx->pc = 0x1466a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 256), GPR_U32(ctx, 0));
    // 0x1466ac: 0xace001c0
    ctx->pc = 0x1466acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 448), GPR_U32(ctx, 0));
    // 0x1466b0: 0xace001bc
    ctx->pc = 0x1466b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 444), GPR_U32(ctx, 0));
label_1466b4:
    // 0x1466b4: 0x8ce20100
    ctx->pc = 0x1466b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 256)));
    // 0x1466b8: 0x54400005
    ctx->pc = 0x1466B8u;
    {
        const bool branch_taken_0x1466b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1466b8) {
            ctx->pc = 0x1466BCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 444)));
            ctx->pc = 0x1466D0u;
            goto label_1466d0;
        }
    }
    ctx->pc = 0x1466C0u;
    // 0x1466c0: 0x8ce201c0
    ctx->pc = 0x1466c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 448)));
    // 0x1466c4: 0x5040000c
    ctx->pc = 0x1466C4u;
    {
        const bool branch_taken_0x1466c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1466c4) {
            ctx->pc = 0x1466C8u;
            WRITE32(ADD32(GPR_U32(ctx, 7), 256), GPR_U32(ctx, 0));
            ctx->pc = 0x1466F8u;
            goto label_1466f8;
        }
    }
    ctx->pc = 0x1466CCu;
    // 0x1466cc: 0x8ce201bc
    ctx->pc = 0x1466ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 444)));
label_1466d0:
    // 0x1466d0: 0x54400009
    ctx->pc = 0x1466D0u;
    {
        const bool branch_taken_0x1466d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1466d0) {
            ctx->pc = 0x1466D4u;
            WRITE32(ADD32(GPR_U32(ctx, 7), 256), GPR_U32(ctx, 0));
            ctx->pc = 0x1466F8u;
            goto label_1466f8;
        }
    }
    ctx->pc = 0x1466D8u;
    // 0x1466d8: 0x8ce201d0
    ctx->pc = 0x1466d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 464)));
    // 0x1466dc: 0x8ce401e0
    ctx->pc = 0x1466dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 480)));
    // 0x1466e0: 0xac400028
    ctx->pc = 0x1466e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1466e4: 0x8ce301f0
    ctx->pc = 0x1466e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 496)));
    // 0x1466e8: 0xac800028
    ctx->pc = 0x1466e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1466ec: 0xac600028
    ctx->pc = 0x1466ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x1466f0: 0x8ce9018c
    ctx->pc = 0x1466f0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 7), 396)));
    // 0x1466f4: 0xace00100
    ctx->pc = 0x1466f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 256), GPR_U32(ctx, 0));
label_1466f8:
    // 0x1466f8: 0x24020003
    ctx->pc = 0x1466f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1466fc: 0x1522000b
    ctx->pc = 0x1466FCu;
    {
        const bool branch_taken_0x1466fc = (GPR_U32(ctx, 9) != GPR_U32(ctx, 2));
        ctx->pc = 0x146700u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 448), GPR_U32(ctx, 0));
        if (branch_taken_0x1466fc) {
            ctx->pc = 0x14672Cu;
            goto label_14672c;
        }
    }
    ctx->pc = 0x146704u;
    // 0x146704: 0x8ce301d0
    ctx->pc = 0x146704u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 464)));
    // 0x146708: 0x24040001
    ctx->pc = 0x146708u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x14670c: 0x8c620028
    ctx->pc = 0x14670cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x146710: 0x50440018
    ctx->pc = 0x146710u;
    {
        const bool branch_taken_0x146710 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        if (branch_taken_0x146710) {
            ctx->pc = 0x146714u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 468)));
            ctx->pc = 0x146774u;
            goto label_146774;
        }
    }
    ctx->pc = 0x146718u;
    // 0x146718: 0x8ce201bc
    ctx->pc = 0x146718u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 444)));
    // 0x14671c: 0x10400048
    ctx->pc = 0x14671Cu;
    {
        const bool branch_taken_0x14671c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x146720u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x14671c) {
            ctx->pc = 0x146840u;
            goto label_146840;
        }
    }
    ctx->pc = 0x146724u;
    // 0x146724: 0x10000013
    ctx->pc = 0x146724u;
    {
        const bool branch_taken_0x146724 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146728u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 468)));
        if (branch_taken_0x146724) {
            ctx->pc = 0x146774u;
            goto label_146774;
        }
    }
    ctx->pc = 0x14672Cu;
label_14672c:
    // 0x14672c: 0x8ce201e0
    ctx->pc = 0x14672cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 480)));
    // 0x146730: 0x24030001
    ctx->pc = 0x146730u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x146734: 0x8c440028
    ctx->pc = 0x146734u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x146738: 0x54830006
    ctx->pc = 0x146738u;
    {
        const bool branch_taken_0x146738 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x146738) {
            ctx->pc = 0x14673Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 444)));
            ctx->pc = 0x146754u;
            goto label_146754;
        }
    }
    ctx->pc = 0x146740u;
    // 0x146740: 0x8ce201f0
    ctx->pc = 0x146740u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 496)));
    // 0x146744: 0x8c430028
    ctx->pc = 0x146744u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x146748: 0x50640005
    ctx->pc = 0x146748u;
    {
        const bool branch_taken_0x146748 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x146748) {
            ctx->pc = 0x14674Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 484)));
            ctx->pc = 0x146760u;
            goto label_146760;
        }
    }
    ctx->pc = 0x146750u;
    // 0x146750: 0x8ce201bc
    ctx->pc = 0x146750u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 444)));
label_146754:
    // 0x146754: 0x1040003a
    ctx->pc = 0x146754u;
    {
        const bool branch_taken_0x146754 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x146758u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x146754) {
            ctx->pc = 0x146840u;
            goto label_146840;
        }
    }
    ctx->pc = 0x14675Cu;
    // 0x14675c: 0x8ce201e4
    ctx->pc = 0x14675cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 484)));
label_146760:
    // 0x146760: 0x24030001
    ctx->pc = 0x146760u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x146764: 0x8c440028
    ctx->pc = 0x146764u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x146768: 0x14830035
    ctx->pc = 0x146768u;
    {
        const bool branch_taken_0x146768 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x14676Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x146768) {
            ctx->pc = 0x146840u;
            goto label_146840;
        }
    }
    ctx->pc = 0x146770u;
    // 0x146770: 0x8ce301f4
    ctx->pc = 0x146770u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 500)));
label_146774:
    // 0x146774: 0x80682d
    ctx->pc = 0x146774u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146778: 0x8c620028
    ctx->pc = 0x146778u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x14677c: 0x38420001
    ctx->pc = 0x14677cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x146780: 0x1000002e
    ctx->pc = 0x146780u;
    {
        const bool branch_taken_0x146780 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146784u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 13, GPR_U32(ctx, 0));
        if (branch_taken_0x146780) {
            ctx->pc = 0x14683Cu;
            goto label_14683c;
        }
    }
    ctx->pc = 0x146788u;
label_146788:
    // 0x146788: 0x54a0000e
    ctx->pc = 0x146788u;
    {
        const bool branch_taken_0x146788 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x146788) {
            ctx->pc = 0x14678Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 468)));
            ctx->pc = 0x1467C4u;
            goto label_1467c4;
        }
    }
    ctx->pc = 0x146790u;
    // 0x146790: 0x8ce601d0
    ctx->pc = 0x146790u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 464)));
    // 0x146794: 0x8ce401d4
    ctx->pc = 0x146794u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 468)));
    // 0x146798: 0xace601d4
    ctx->pc = 0x146798u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 468), GPR_U32(ctx, 6));
    // 0x14679c: 0x8ce601e0
    ctx->pc = 0x14679cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 480)));
    // 0x1467a0: 0x8ce301e4
    ctx->pc = 0x1467a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 484)));
    // 0x1467a4: 0xace601e4
    ctx->pc = 0x1467a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 484), GPR_U32(ctx, 6));
    // 0x1467a8: 0x8ce601f0
    ctx->pc = 0x1467a8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 496)));
    // 0x1467ac: 0x8ce201f4
    ctx->pc = 0x1467acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 500)));
    // 0x1467b0: 0xace401d0
    ctx->pc = 0x1467b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 4));
    // 0x1467b4: 0xace301e0
    ctx->pc = 0x1467b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 3));
    // 0x1467b8: 0xace201f0
    ctx->pc = 0x1467b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 496), GPR_U32(ctx, 2));
    // 0x1467bc: 0xace601f4
    ctx->pc = 0x1467bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 500), GPR_U32(ctx, 6));
    // 0x1467c0: 0x8ce201d4
    ctx->pc = 0x1467c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 468)));
label_1467c4:
    // 0x1467c4: 0x8ce401e4
    ctx->pc = 0x1467c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 484)));
    // 0x1467c8: 0x8ce301f4
    ctx->pc = 0x1467c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 500)));
    // 0x1467cc: 0xace201d8
    ctx->pc = 0x1467ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 472), GPR_U32(ctx, 2));
    // 0x1467d0: 0xace401e8
    ctx->pc = 0x1467d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 488), GPR_U32(ctx, 4));
    // 0x1467d4: 0x152e0006
    ctx->pc = 0x1467D4u;
    {
        const bool branch_taken_0x1467d4 = (GPR_U32(ctx, 9) != GPR_U32(ctx, 14));
        ctx->pc = 0x1467D8u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 504), GPR_U32(ctx, 3));
        if (branch_taken_0x1467d4) {
            ctx->pc = 0x1467F0u;
            goto label_1467f0;
        }
    }
    ctx->pc = 0x1467DCu;
    // 0x1467dc: 0x554c0017
    ctx->pc = 0x1467DCu;
    {
        const bool branch_taken_0x1467dc = (GPR_U32(ctx, 10) != GPR_U32(ctx, 12));
        if (branch_taken_0x1467dc) {
            ctx->pc = 0x1467E0u;
            SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x14683Cu;
            goto label_14683c;
        }
    }
    ctx->pc = 0x1467E4u;
    // 0x1467e4: 0x8ce201d0
    ctx->pc = 0x1467e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 464)));
    // 0x1467e8: 0x10000010
    ctx->pc = 0x1467E8u;
    {
        const bool branch_taken_0x1467e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1467ECu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1467e8) {
            ctx->pc = 0x14682Cu;
            goto label_14682c;
        }
    }
    ctx->pc = 0x1467F0u;
label_1467f0:
    // 0x1467f0: 0x39220001
    ctx->pc = 0x1467f0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 9), 1));
    // 0x1467f4: 0x24060001
    ctx->pc = 0x1467f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1467f8: 0x82180b
    ctx->pc = 0x1467f8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x1467fc: 0x154c000e
    ctx->pc = 0x1467FCu;
    {
        const bool branch_taken_0x1467fc = (GPR_U32(ctx, 10) != GPR_U32(ctx, 12));
        ctx->pc = 0x146800u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1467fc) {
            ctx->pc = 0x146838u;
            goto label_146838;
        }
    }
    ctx->pc = 0x146804u;
    // 0x146804: 0x50a00005
    ctx->pc = 0x146804u;
    {
        const bool branch_taken_0x146804 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x146804) {
            ctx->pc = 0x146808u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 480)));
            ctx->pc = 0x14681Cu;
            goto label_14681c;
        }
    }
    ctx->pc = 0x14680Cu;
    // 0x14680c: 0x8c420028
    ctx->pc = 0x14680cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x146810: 0x5046000a
    ctx->pc = 0x146810u;
    {
        const bool branch_taken_0x146810 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 6));
        if (branch_taken_0x146810) {
            ctx->pc = 0x146814u;
            SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x14683Cu;
            goto label_14683c;
        }
    }
    ctx->pc = 0x146818u;
    // 0x146818: 0x8ce201e0
    ctx->pc = 0x146818u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 480)));
label_14681c:
    // 0x14681c: 0x8c440028
    ctx->pc = 0x14681cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x146820: 0x14860007
    ctx->pc = 0x146820u;
    {
        const bool branch_taken_0x146820 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 6));
        ctx->pc = 0x146824u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x146820) {
            ctx->pc = 0x146840u;
            goto label_146840;
        }
    }
    ctx->pc = 0x146828u;
    // 0x146828: 0x8ce201f0
    ctx->pc = 0x146828u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 496)));
label_14682c:
    // 0x14682c: 0x8c430028
    ctx->pc = 0x14682cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x146830: 0x14640003
    ctx->pc = 0x146830u;
    {
        const bool branch_taken_0x146830 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x146834u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x146830) {
            ctx->pc = 0x146840u;
            goto label_146840;
        }
    }
    ctx->pc = 0x146838u;
label_146838:
    // 0x146838: 0x240d0001
    ctx->pc = 0x146838u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 1));
label_14683c:
    // 0x14683c: 0x24020002
    ctx->pc = 0x14683cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_146840:
    // 0x146840: 0x1122000c
    ctx->pc = 0x146840u;
    {
        const bool branch_taken_0x146840 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 2));
        ctx->pc = 0x146844u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 3));
        if (branch_taken_0x146840) {
            ctx->pc = 0x146874u;
            goto label_146874;
        }
    }
    ctx->pc = 0x146848u;
    // 0x146848: 0x10400005
    ctx->pc = 0x146848u;
    {
        const bool branch_taken_0x146848 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14684Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x146848) {
            ctx->pc = 0x146860u;
            goto label_146860;
        }
    }
    ctx->pc = 0x146850u;
    // 0x146850: 0x51220009
    ctx->pc = 0x146850u;
    {
        const bool branch_taken_0x146850 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 2));
        if (branch_taken_0x146850) {
            ctx->pc = 0x146854u;
            SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 7), 488)));
            ctx->pc = 0x146878u;
            goto label_146878;
        }
    }
    ctx->pc = 0x146858u;
    // 0x146858: 0x10000008
    ctx->pc = 0x146858u;
    {
        const bool branch_taken_0x146858 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14685Cu;
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        if (branch_taken_0x146858) {
            ctx->pc = 0x14687Cu;
            goto label_14687c;
        }
    }
    ctx->pc = 0x146860u;
label_146860:
    // 0x146860: 0x24020003
    ctx->pc = 0x146860u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x146864: 0x51220004
    ctx->pc = 0x146864u;
    {
        const bool branch_taken_0x146864 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 2));
        if (branch_taken_0x146864) {
            ctx->pc = 0x146868u;
            SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 7), 472)));
            ctx->pc = 0x146878u;
            goto label_146878;
        }
    }
    ctx->pc = 0x14686Cu;
    // 0x14686c: 0x10000003
    ctx->pc = 0x14686Cu;
    {
        const bool branch_taken_0x14686c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146870u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        if (branch_taken_0x14686c) {
            ctx->pc = 0x14687Cu;
            goto label_14687c;
        }
    }
    ctx->pc = 0x146874u;
label_146874:
    // 0x146874: 0x8ce801f8
    ctx->pc = 0x146874u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 7), 504)));
label_146878:
    // 0x146878: 0xad000028
    ctx->pc = 0x146878u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
label_14687c:
    // 0x14687c: 0x1a0102d
    ctx->pc = 0x14687cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146880: 0xdce30840
    ctx->pc = 0x146880u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2112)));
    // 0x146884: 0x8ce40168
    ctx->pc = 0x146884u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 360)));
    // 0x146888: 0xfd030018
    ctx->pc = 0x146888u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 3));
    // 0x14688c: 0xad04002c
    ctx->pc = 0x14688cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 4));
    // 0x146890: 0xdce30848
    ctx->pc = 0x146890u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2120)));
    // 0x146894: 0x8ce4018c
    ctx->pc = 0x146894u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 396)));
    // 0x146898: 0xfd030020
    ctx->pc = 0x146898u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 3));
    // 0x14689c: 0xad040030
    ctx->pc = 0x14689cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 4));
    // 0x1468a0: 0x8ce30154
    ctx->pc = 0x1468a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 340)));
    // 0x1468a4: 0xad030034
    ctx->pc = 0x1468a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 3));
    // 0x1468a8: 0x8ce401a0
    ctx->pc = 0x1468a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 416)));
    // 0x1468ac: 0xad040038
    ctx->pc = 0x1468acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 4));
    // 0x1468b0: 0x8ce30190
    ctx->pc = 0x1468b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 400)));
    // 0x1468b4: 0xad03003c
    ctx->pc = 0x1468b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 3));
    // 0x1468b8: 0x8ce4019c
    ctx->pc = 0x1468b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 412)));
    // 0x1468bc: 0xad040040
    ctx->pc = 0x1468bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 4));
    // 0x1468c0: 0x8ce301a4
    ctx->pc = 0x1468c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 420)));
    // 0x1468c4: 0xad030044
    ctx->pc = 0x1468c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 68), GPR_U32(ctx, 3));
    // 0x1468c8: 0x8ce401a8
    ctx->pc = 0x1468c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 424)));
    // 0x1468cc: 0xad040048
    ctx->pc = 0x1468ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 4));
    // 0x1468d0: 0x8ce301ac
    ctx->pc = 0x1468d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 428)));
    // 0x1468d4: 0xad03004c
    ctx->pc = 0x1468d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 3));
    // 0x1468d8: 0x8ce401b0
    ctx->pc = 0x1468d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 432)));
    // 0x1468dc: 0xad040050
    ctx->pc = 0x1468dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 4));
    // 0x1468e0: 0x8ce301b4
    ctx->pc = 0x1468e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x1468e4: 0xad030054
    ctx->pc = 0x1468e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 84), GPR_U32(ctx, 3));
    // 0x1468e8: 0x8ce401b8
    ctx->pc = 0x1468e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x1468ec: 0xad040058
    ctx->pc = 0x1468ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 88), GPR_U32(ctx, 4));
    // 0x1468f0: 0x8ce30160
    ctx->pc = 0x1468f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x1468f4: 0xad03005c
    ctx->pc = 0x1468f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 92), GPR_U32(ctx, 3));
    // 0x1468f8: 0x8ce40164
    ctx->pc = 0x1468f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 356)));
    // 0x1468fc: 0x3e00008
    ctx->pc = 0x1468FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146900u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1466B4u: goto label_1466b4;
            case 0x1466D0u: goto label_1466d0;
            case 0x1466F8u: goto label_1466f8;
            case 0x14672Cu: goto label_14672c;
            case 0x146754u: goto label_146754;
            case 0x146760u: goto label_146760;
            case 0x146774u: goto label_146774;
            case 0x146788u: goto label_146788;
            case 0x1467C4u: goto label_1467c4;
            case 0x1467F0u: goto label_1467f0;
            case 0x14681Cu: goto label_14681c;
            case 0x14682Cu: goto label_14682c;
            case 0x146838u: goto label_146838;
            case 0x14683Cu: goto label_14683c;
            case 0x146840u: goto label_146840;
            case 0x146860u: goto label_146860;
            case 0x146874u: goto label_146874;
            case 0x146878u: goto label_146878;
            case 0x14687Cu: goto label_14687c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x146904u;
    // 0x146904: 0x0
    ctx->pc = 0x146904u;
    // NOP
}
