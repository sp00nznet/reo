#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A1670
// Address: 0x1a1670 - 0x1a17a0
void sub_001A1670_0x1a1670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a1670u;

    // 0x1a1670: 0x8c880008
    ctx->pc = 0x1a1670u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a1674: 0x53100
    ctx->pc = 0x1a1674u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1a1678: 0x8c830024
    ctx->pc = 0x1a1678u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1a167c: 0x340affff
    ctx->pc = 0x1a167cu;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1a1680: 0x146a0005
    ctx->pc = 0x1A1680u;
    {
        const bool branch_taken_0x1a1680 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 10));
        ctx->pc = 0x1A1684u;
        SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        if (branch_taken_0x1a1680) {
            ctx->pc = 0x1A1698u;
            goto label_1a1698;
        }
    }
    ctx->pc = 0x1A1688u;
    // 0x1a1688: 0xac850024
    ctx->pc = 0x1a1688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
    // 0x1a168c: 0xa58a000c
    ctx->pc = 0x1a168cu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 12), (uint16_t)GPR_U32(ctx, 10));
    // 0x1a1690: 0x10000040
    ctx->pc = 0x1A1690u;
    {
        const bool branch_taken_0x1a1690 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1694u;
        WRITE16(ADD32(GPR_U32(ctx, 12), 14), (uint16_t)GPR_U32(ctx, 10));
        if (branch_taken_0x1a1690) {
            ctx->pc = 0x1A1794u;
            goto label_1a1794;
        }
    }
    ctx->pc = 0x1A1698u;
label_1a1698:
    // 0x1a1698: 0x8c86000c
    ctx->pc = 0x1a1698u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a169c: 0x33900
    ctx->pc = 0x1a169cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a16a0: 0x10c00014
    ctx->pc = 0x1A16A0u;
    {
        const bool branch_taken_0x1a16a0 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A16A4u;
        SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        if (branch_taken_0x1a16a0) {
            ctx->pc = 0x1A16F4u;
            goto label_1a16f4;
        }
    }
    ctx->pc = 0x1A16A8u;
    // 0x1a16a8: 0x8d890000
    ctx->pc = 0x1a16a8u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1a16ac: 0x8d660000
    ctx->pc = 0x1a16acu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1a16b0: 0x126082b
    ctx->pc = 0x1a16b0u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x1a16b4: 0x10200035
    ctx->pc = 0x1A16B4u;
    {
        const bool branch_taken_0x1a16b4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A16B8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a16b4) {
            ctx->pc = 0x1A178Cu;
            goto label_1a178c;
        }
    }
    ctx->pc = 0x1A16BCu;
    // 0x1a16bc: 0x1000001f
    ctx->pc = 0x1A16BCu;
    {
        const bool branch_taken_0x1a16bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A16C0u;
        WRITE16(ADD32(GPR_U32(ctx, 12), 12), (uint16_t)GPR_U32(ctx, 10));
        if (branch_taken_0x1a16bc) {
            ctx->pc = 0x1A173Cu;
            goto label_1a173c;
        }
    }
    ctx->pc = 0x1A16C4u;
label_1a16c4:
    // 0x1a16c4: 0x60502d
    ctx->pc = 0x1a16c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a16c8: 0x9563000e
    ctx->pc = 0x1a16c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 14)));
    // 0x1a16cc: 0x1067001a
    ctx->pc = 0x1A16CCu;
    {
        const bool branch_taken_0x1a16cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 7));
        if (branch_taken_0x1a16cc) {
            ctx->pc = 0x1A1738u;
            goto label_1a1738;
        }
    }
    ctx->pc = 0x1A16D4u;
    // 0x1a16d4: 0x33100
    ctx->pc = 0x1a16d4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a16d8: 0x1065821
    ctx->pc = 0x1a16d8u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1a16dc: 0x8d660000
    ctx->pc = 0x1a16dcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1a16e0:
    // 0x1a16e0: 0xc9302b
    ctx->pc = 0x1a16e0u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1a16e4: 0x14c0fff7
    ctx->pc = 0x1A16E4u;
    {
        const bool branch_taken_0x1a16e4 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a16e4) {
            ctx->pc = 0x1A16C4u;
            goto label_1a16c4;
        }
    }
    ctx->pc = 0x1A16ECu;
    // 0x1a16ec: 0x10000012
    ctx->pc = 0x1A16ECu;
    {
        const bool branch_taken_0x1a16ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a16ec) {
            ctx->pc = 0x1A1738u;
            goto label_1a1738;
        }
    }
    ctx->pc = 0x1A16F4u;
label_1a16f4:
    // 0x1a16f4: 0x8d890000
    ctx->pc = 0x1a16f4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1a16f8: 0x8d660000
    ctx->pc = 0x1a16f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1a16fc: 0xc9082b
    ctx->pc = 0x1a16fcu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1a1700: 0x1020001f
    ctx->pc = 0x1A1700u;
    {
        const bool branch_taken_0x1a1700 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1704u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a1700) {
            ctx->pc = 0x1A1780u;
            goto label_1a1780;
        }
    }
    ctx->pc = 0x1A1708u;
    // 0x1a1708: 0x1000000b
    ctx->pc = 0x1A1708u;
    {
        const bool branch_taken_0x1a1708 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a1708) {
            ctx->pc = 0x1A1738u;
            goto label_1a1738;
        }
    }
    ctx->pc = 0x1A1710u;
label_1a1710:
    // 0x1a1710: 0x60502d
    ctx->pc = 0x1a1710u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1714: 0x9563000e
    ctx->pc = 0x1a1714u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 14)));
    // 0x1a1718: 0x10670007
    ctx->pc = 0x1A1718u;
    {
        const bool branch_taken_0x1a1718 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 7));
        if (branch_taken_0x1a1718) {
            ctx->pc = 0x1A1738u;
            goto label_1a1738;
        }
    }
    ctx->pc = 0x1A1720u;
    // 0x1a1720: 0x33100
    ctx->pc = 0x1a1720u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a1724: 0x1065821
    ctx->pc = 0x1a1724u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1a1728: 0x8d660000
    ctx->pc = 0x1a1728u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1a172c:
    // 0x1a172c: 0x126082b
    ctx->pc = 0x1a172cu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x1a1730: 0x1420fff7
    ctx->pc = 0x1A1730u;
    {
        const bool branch_taken_0x1a1730 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a1730) {
            ctx->pc = 0x1A1710u;
            goto label_1a1710;
        }
    }
    ctx->pc = 0x1A1738u;
label_1a1738:
    // 0x1a1738: 0xa58a000c
    ctx->pc = 0x1a1738u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 12), (uint16_t)GPR_U32(ctx, 10));
label_1a173c:
    // 0x1a173c: 0x3406ffff
    ctx->pc = 0x1a173cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1a1740: 0x11460005
    ctx->pc = 0x1A1740u;
    {
        const bool branch_taken_0x1a1740 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 6));
        ctx->pc = 0x1A1744u;
        WRITE16(ADD32(GPR_U32(ctx, 12), 14), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1a1740) {
            ctx->pc = 0x1A1758u;
            goto label_1a1758;
        }
    }
    ctx->pc = 0x1A1748u;
    // 0x1a1748: 0x8c860008
    ctx->pc = 0x1a1748u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a174c: 0xa3900
    ctx->pc = 0x1a174cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 10), 4));
    // 0x1a1750: 0xc73021
    ctx->pc = 0x1a1750u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1a1754: 0xa4c5000e
    ctx->pc = 0x1a1754u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 5));
label_1a1758:
    // 0x1a1758: 0x3406ffff
    ctx->pc = 0x1a1758u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1a175c: 0x1066000d
    ctx->pc = 0x1A175Cu;
    {
        const bool branch_taken_0x1a175c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 6));
        if (branch_taken_0x1a175c) {
            ctx->pc = 0x1A1794u;
            goto label_1a1794;
        }
    }
    ctx->pc = 0x1A1764u;
    // 0x1a1764: 0x33100
    ctx->pc = 0x1a1764u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a1768: 0x8c830008
    ctx->pc = 0x1a1768u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a176c: 0x661821
    ctx->pc = 0x1a176cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a1770: 0xa465000c
    ctx->pc = 0x1a1770u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a1774: 0x10000007
    ctx->pc = 0x1A1774u;
    {
        const bool branch_taken_0x1a1774 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a1774) {
            ctx->pc = 0x1A1794u;
            goto label_1a1794;
        }
    }
    ctx->pc = 0x1A177Cu;
    // 0x1a177c: 0x140382d
    ctx->pc = 0x1a177cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1a1780:
    // 0x1a1780: 0x1000ffea
    ctx->pc = 0x1A1780u;
    {
        const bool branch_taken_0x1a1780 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1784u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 11), 0)));
        if (branch_taken_0x1a1780) {
            ctx->pc = 0x1A172Cu;
            goto label_1a172c;
        }
    }
    ctx->pc = 0x1A1788u;
    // 0x1a1788: 0x140382d
    ctx->pc = 0x1a1788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1a178c:
    // 0x1a178c: 0x1000ffd4
    ctx->pc = 0x1A178Cu;
    {
        const bool branch_taken_0x1a178c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1790u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 11), 0)));
        if (branch_taken_0x1a178c) {
            ctx->pc = 0x1A16E0u;
            goto label_1a16e0;
        }
    }
    ctx->pc = 0x1A1794u;
label_1a1794:
    // 0x1a1794: 0x3e00008
    ctx->pc = 0x1A1794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1698u: goto label_1a1698;
            case 0x1A16C4u: goto label_1a16c4;
            case 0x1A16E0u: goto label_1a16e0;
            case 0x1A16F4u: goto label_1a16f4;
            case 0x1A1710u: goto label_1a1710;
            case 0x1A172Cu: goto label_1a172c;
            case 0x1A1738u: goto label_1a1738;
            case 0x1A173Cu: goto label_1a173c;
            case 0x1A1758u: goto label_1a1758;
            case 0x1A1780u: goto label_1a1780;
            case 0x1A178Cu: goto label_1a178c;
            case 0x1A1794u: goto label_1a1794;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A179Cu;
    // 0x1a179c: 0x0
    ctx->pc = 0x1a179cu;
    // NOP
}
