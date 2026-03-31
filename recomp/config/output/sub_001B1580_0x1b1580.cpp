#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B1580
// Address: 0x1b1580 - 0x1b1820
void sub_001B1580_0x1b1580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b1580u;

label_1b1580:
    // 0x1b1580: 0x27bdffb0
    ctx->pc = 0x1b1580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b1584: 0xffbf0040
    ctx->pc = 0x1b1584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b1588: 0x7fb30030
    ctx->pc = 0x1b1588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b158c: 0x7fb20020
    ctx->pc = 0x1b158cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b1590: 0x7fb10010
    ctx->pc = 0x1b1590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b1594: 0x7fb00000
    ctx->pc = 0x1b1594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b1598: 0x8c820808
    ctx->pc = 0x1b1598u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 2056)));
    // 0x1b159c: 0x14400003
    ctx->pc = 0x1B159Cu;
    {
        const bool branch_taken_0x1b159c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B15A0u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b159c) {
            ctx->pc = 0x1B15ACu;
            goto label_1b15ac;
        }
    }
    ctx->pc = 0x1B15A4u;
    // 0x1b15a4: 0x10000031
    ctx->pc = 0x1B15A4u;
    {
        const bool branch_taken_0x1b15a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B15A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1b15a4) {
            ctx->pc = 0x1B166Cu;
            goto label_1b166c;
        }
    }
    ctx->pc = 0x1B15ACu;
label_1b15ac:
    // 0x1b15ac: 0xc073dac
    ctx->pc = 0x1B15ACu;
    SET_GPR_U32(ctx, 31, 0x1B15B4u);
    ctx->pc = 0x1CF6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF6B0_0x1cf6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B15B4u; }
    }
    if (ctx->pc != 0x1B15B4u) { return; }
    ctx->pc = 0x1B15B4u;
    // 0x1b15b4: 0x38420001
    ctx->pc = 0x1b15b4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x1b15b8: 0x902d
    ctx->pc = 0x1b15b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b15bc: 0x1000001a
    ctx->pc = 0x1B15BCu;
    {
        const bool branch_taken_0x1b15bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B15C0u;
        SET_GPR_U32(ctx, 17, SLTU32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x1b15bc) {
            ctx->pc = 0x1B1628u;
            goto label_1b1628;
        }
    }
    ctx->pc = 0x1B15C4u;
label_1b15c4:
    // 0x1b15c4: 0x8e630808
    ctx->pc = 0x1b15c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 2056)));
    // 0x1b15c8: 0x1210c0
    ctx->pc = 0x1b15c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 3));
    // 0x1b15cc: 0x522021
    ctx->pc = 0x1b15ccu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1b15d0: 0x42040
    ctx->pc = 0x1b15d0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1b15d4: 0x2402ffff
    ctx->pc = 0x1b15d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b15d8: 0x922021
    ctx->pc = 0x1b15d8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1b15dc: 0x480c0
    ctx->pc = 0x1b15dcu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 4), 3));
    // 0x1b15e0: 0x701821
    ctx->pc = 0x1b15e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b15e4: 0x8c640000
    ctx->pc = 0x1b15e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b15e8: 0x1082000e
    ctx->pc = 0x1B15E8u;
    {
        const bool branch_taken_0x1b15e8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x1b15e8) {
            ctx->pc = 0x1B1624u;
            goto label_1b1624;
        }
    }
    ctx->pc = 0x1B15F0u;
    // 0x1b15f0: 0x1080000c
    ctx->pc = 0x1B15F0u;
    {
        const bool branch_taken_0x1b15f0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b15f0) {
            ctx->pc = 0x1B1624u;
            goto label_1b1624;
        }
    }
    ctx->pc = 0x1B15F8u;
    // 0x1b15f8: 0x16200007
    ctx->pc = 0x1B15F8u;
    {
        const bool branch_taken_0x1b15f8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b15f8) {
            ctx->pc = 0x1B1618u;
            goto label_1b1618;
        }
    }
    ctx->pc = 0x1B1600u;
    // 0x1b1600: 0xc063128
    ctx->pc = 0x1B1600u;
    SET_GPR_U32(ctx, 31, 0x1B1608u);
    ctx->pc = 0x18C4A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018C4A0_0x18c4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1608u; }
    }
    if (ctx->pc != 0x1B1608u) { return; }
    ctx->pc = 0x1B1608u;
    // 0x1b1608: 0x8e620808
    ctx->pc = 0x1b1608u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 2056)));
    // 0x1b160c: 0x501021
    ctx->pc = 0x1b160cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b1610: 0xc06c410
    ctx->pc = 0x1B1610u;
    SET_GPR_U32(ctx, 31, 0x1B1618u);
    ctx->pc = 0x1B1614u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1B1040u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1040_0x1b1040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1618u; }
    }
    if (ctx->pc != 0x1B1618u) { return; }
    ctx->pc = 0x1B1618u;
label_1b1618:
    // 0x1b1618: 0x8e620808
    ctx->pc = 0x1b1618u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 2056)));
    // 0x1b161c: 0x501021
    ctx->pc = 0x1b161cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b1620: 0xac400000
    ctx->pc = 0x1b1620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1b1624:
    // 0x1b1624: 0x26520001
    ctx->pc = 0x1b1624u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_1b1628:
    // 0x1b1628: 0x96620812
    ctx->pc = 0x1b1628u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2066)));
    // 0x1b162c: 0x242102a
    ctx->pc = 0x1b162cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x1b1630: 0x1440ffe4
    ctx->pc = 0x1B1630u;
    {
        const bool branch_taken_0x1b1630 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b1630) {
            ctx->pc = 0x1B15C4u;
            goto label_1b15c4;
        }
    }
    ctx->pc = 0x1B1638u;
    // 0x1b1638: 0x8e64080c
    ctx->pc = 0x1b1638u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 2060)));
    // 0x1b163c: 0x10800006
    ctx->pc = 0x1B163Cu;
    {
        const bool branch_taken_0x1b163c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b163c) {
            ctx->pc = 0x1B1658u;
            goto label_1b1658;
        }
    }
    ctx->pc = 0x1B1644u;
    // 0x1b1644: 0xc064960
    ctx->pc = 0x1B1644u;
    SET_GPR_U32(ctx, 31, 0x1B164Cu);
    ctx->pc = 0x192580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00192580_0x192580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B164Cu; }
    }
    if (ctx->pc != 0x1B164Cu) { return; }
    ctx->pc = 0x1B164Cu;
    // 0x1b164c: 0xc06c444
    ctx->pc = 0x1B164Cu;
    SET_GPR_U32(ctx, 31, 0x1B1654u);
    ctx->pc = 0x1B1650u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 2060)));
    ctx->pc = 0x1B1110u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1110_0x1b1110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1654u; }
    }
    if (ctx->pc != 0x1B1654u) { return; }
    ctx->pc = 0x1B1654u;
    // 0x1b1654: 0xae60080c
    ctx->pc = 0x1b1654u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2060), GPR_U32(ctx, 0));
label_1b1658:
    // 0x1b1658: 0xc06cae4
    ctx->pc = 0x1B1658u;
    SET_GPR_U32(ctx, 31, 0x1B1660u);
    ctx->pc = 0x1B165Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 2056)));
    ctx->pc = 0x1B2B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2B90_0x1b2b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1660u; }
    }
    if (ctx->pc != 0x1B1660u) { return; }
    ctx->pc = 0x1B1660u;
    // 0x1b1660: 0xae600808
    ctx->pc = 0x1b1660u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2056), GPR_U32(ctx, 0));
    // 0x1b1664: 0x220102d
    ctx->pc = 0x1b1664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1668: 0xa6600812
    ctx->pc = 0x1b1668u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2066), (uint16_t)GPR_U32(ctx, 0));
label_1b166c:
    // 0x1b166c: 0xdfbf0040
    ctx->pc = 0x1b166cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1670: 0x7bb30030
    ctx->pc = 0x1b1670u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1674: 0x7bb20020
    ctx->pc = 0x1b1674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1678: 0x7bb10010
    ctx->pc = 0x1b1678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b167c: 0x7bb00000
    ctx->pc = 0x1b167cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1680: 0x3e00008
    ctx->pc = 0x1B1680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1684u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1580u: goto label_1b1580;
            case 0x1B15ACu: goto label_1b15ac;
            case 0x1B15C4u: goto label_1b15c4;
            case 0x1B1618u: goto label_1b1618;
            case 0x1B1624u: goto label_1b1624;
            case 0x1B1628u: goto label_1b1628;
            case 0x1B1658u: goto label_1b1658;
            case 0x1B166Cu: goto label_1b166c;
            case 0x1B16A4u: goto label_1b16a4;
            case 0x1B16BCu: goto label_1b16bc;
            case 0x1B170Cu: goto label_1b170c;
            case 0x1B1728u: goto label_1b1728;
            case 0x1B1730u: goto label_1b1730;
            case 0x1B1738u: goto label_1b1738;
            case 0x1B178Cu: goto label_1b178c;
            case 0x1B1798u: goto label_1b1798;
            case 0x1B17A0u: goto label_1b17a0;
            case 0x1B17CCu: goto label_1b17cc;
            case 0x1B17DCu: goto label_1b17dc;
            case 0x1B17F4u: goto label_1b17f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1688u;
    // 0x1b1688: 0x0
    ctx->pc = 0x1b1688u;
    // NOP
    // 0x1b168c: 0x0
    ctx->pc = 0x1b168cu;
    // NOP
    // 0x1b1690: 0x27bdffe0
    ctx->pc = 0x1b1690u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b1694: 0xffbf0010
    ctx->pc = 0x1b1694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b1698: 0x7fb00000
    ctx->pc = 0x1b1698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b169c: 0xc06c560
    ctx->pc = 0x1B169Cu;
    SET_GPR_U32(ctx, 31, 0x1B16A4u);
    ctx->pc = 0x1B16A0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B1580u;
    goto label_1b1580;
    ctx->pc = 0x1B16A4u;
label_1b16a4:
    // 0x1b16a4: 0x24030001
    ctx->pc = 0x1b16a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b16a8: 0x10430004
    ctx->pc = 0x1B16A8u;
    {
        const bool branch_taken_0x1b16a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1B16ACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b16a8) {
            ctx->pc = 0x1B16BCu;
            goto label_1b16bc;
        }
    }
    ctx->pc = 0x1B16B0u;
    // 0x1b16b0: 0xc06c6a4
    ctx->pc = 0x1B16B0u;
    SET_GPR_U32(ctx, 31, 0x1B16B8u);
    ctx->pc = 0x1B16B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B1A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1A90_0x1b1a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B16B8u; }
    }
    if (ctx->pc != 0x1B16B8u) { return; }
    ctx->pc = 0x1B16B8u;
    // 0x1b16b8: 0x200202d
    ctx->pc = 0x1b16b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b16bc:
    // 0x1b16bc: 0xc06c674
    ctx->pc = 0x1B16BCu;
    SET_GPR_U32(ctx, 31, 0x1B16C4u);
    ctx->pc = 0x1B19D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B19D0_0x1b19d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B16C4u; }
    }
    if (ctx->pc != 0x1B16C4u) { return; }
    ctx->pc = 0x1B16C4u;
    // 0x1b16c4: 0xdfbf0010
    ctx->pc = 0x1b16c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b16c8: 0x7bb00000
    ctx->pc = 0x1b16c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b16cc: 0x3e00008
    ctx->pc = 0x1B16CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B16D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1580u: goto label_1b1580;
            case 0x1B15ACu: goto label_1b15ac;
            case 0x1B15C4u: goto label_1b15c4;
            case 0x1B1618u: goto label_1b1618;
            case 0x1B1624u: goto label_1b1624;
            case 0x1B1628u: goto label_1b1628;
            case 0x1B1658u: goto label_1b1658;
            case 0x1B166Cu: goto label_1b166c;
            case 0x1B16A4u: goto label_1b16a4;
            case 0x1B16BCu: goto label_1b16bc;
            case 0x1B170Cu: goto label_1b170c;
            case 0x1B1728u: goto label_1b1728;
            case 0x1B1730u: goto label_1b1730;
            case 0x1B1738u: goto label_1b1738;
            case 0x1B178Cu: goto label_1b178c;
            case 0x1B1798u: goto label_1b1798;
            case 0x1B17A0u: goto label_1b17a0;
            case 0x1B17CCu: goto label_1b17cc;
            case 0x1B17DCu: goto label_1b17dc;
            case 0x1B17F4u: goto label_1b17f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B16D4u;
    // 0x1b16d4: 0x0
    ctx->pc = 0x1b16d4u;
    // NOP
    // 0x1b16d8: 0x0
    ctx->pc = 0x1b16d8u;
    // NOP
    // 0x1b16dc: 0x0
    ctx->pc = 0x1b16dcu;
    // NOP
    // 0x1b16e0: 0x27bdffb0
    ctx->pc = 0x1b16e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b16e4: 0xffbf0040
    ctx->pc = 0x1b16e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b16e8: 0x7fb30030
    ctx->pc = 0x1b16e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b16ec: 0x7fb20020
    ctx->pc = 0x1b16ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b16f0: 0x7fb10010
    ctx->pc = 0x1b16f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b16f4: 0x7fb00000
    ctx->pc = 0x1b16f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b16f8: 0x8c820808
    ctx->pc = 0x1b16f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 2056)));
    // 0x1b16fc: 0x14400003
    ctx->pc = 0x1B16FCu;
    {
        const bool branch_taken_0x1b16fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B1700u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b16fc) {
            ctx->pc = 0x1B170Cu;
            goto label_1b170c;
        }
    }
    ctx->pc = 0x1B1704u;
    // 0x1b1704: 0x10000035
    ctx->pc = 0x1B1704u;
    {
        const bool branch_taken_0x1b1704 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B1708u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1b1704) {
            ctx->pc = 0x1B17DCu;
            goto label_1b17dc;
        }
    }
    ctx->pc = 0x1B170Cu;
label_1b170c:
    // 0x1b170c: 0xc0740ac
    ctx->pc = 0x1B170Cu;
    SET_GPR_U32(ctx, 31, 0x1B1714u);
    ctx->pc = 0x1D02B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D02B0_0x1d02b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1714u; }
    }
    if (ctx->pc != 0x1B1714u) { return; }
    ctx->pc = 0x1B1714u;
    // 0x1b1714: 0x24110001
    ctx->pc = 0x1b1714u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1718: 0x14510003
    ctx->pc = 0x1B1718u;
    {
        const bool branch_taken_0x1b1718 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x1b1718) {
            ctx->pc = 0x1B1728u;
            goto label_1b1728;
        }
    }
    ctx->pc = 0x1B1720u;
    // 0x1b1720: 0x10000003
    ctx->pc = 0x1B1720u;
    {
        const bool branch_taken_0x1b1720 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B1724u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b1720) {
            ctx->pc = 0x1B1730u;
            goto label_1b1730;
        }
    }
    ctx->pc = 0x1B1728u;
label_1b1728:
    // 0x1b1728: 0x882d
    ctx->pc = 0x1b1728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b172c: 0x902d
    ctx->pc = 0x1b172cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1730:
    // 0x1b1730: 0x1000001b
    ctx->pc = 0x1B1730u;
    {
        const bool branch_taken_0x1b1730 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B1734u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2066)));
        if (branch_taken_0x1b1730) {
            ctx->pc = 0x1B17A0u;
            goto label_1b17a0;
        }
    }
    ctx->pc = 0x1B1738u;
label_1b1738:
    // 0x1b1738: 0x8e630808
    ctx->pc = 0x1b1738u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 2056)));
    // 0x1b173c: 0x1210c0
    ctx->pc = 0x1b173cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 3));
    // 0x1b1740: 0x522021
    ctx->pc = 0x1b1740u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1b1744: 0x42040
    ctx->pc = 0x1b1744u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1b1748: 0x2402ffff
    ctx->pc = 0x1b1748u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b174c: 0x922021
    ctx->pc = 0x1b174cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1b1750: 0x480c0
    ctx->pc = 0x1b1750u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 4), 3));
    // 0x1b1754: 0x701821
    ctx->pc = 0x1b1754u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b1758: 0x8c640000
    ctx->pc = 0x1b1758u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b175c: 0x1082000e
    ctx->pc = 0x1B175Cu;
    {
        const bool branch_taken_0x1b175c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x1b175c) {
            ctx->pc = 0x1B1798u;
            goto label_1b1798;
        }
    }
    ctx->pc = 0x1B1764u;
    // 0x1b1764: 0x1080000c
    ctx->pc = 0x1B1764u;
    {
        const bool branch_taken_0x1b1764 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b1764) {
            ctx->pc = 0x1B1798u;
            goto label_1b1798;
        }
    }
    ctx->pc = 0x1B176Cu;
    // 0x1b176c: 0x16200007
    ctx->pc = 0x1B176Cu;
    {
        const bool branch_taken_0x1b176c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b176c) {
            ctx->pc = 0x1B178Cu;
            goto label_1b178c;
        }
    }
    ctx->pc = 0x1B1774u;
    // 0x1b1774: 0xc063128
    ctx->pc = 0x1B1774u;
    SET_GPR_U32(ctx, 31, 0x1B177Cu);
    ctx->pc = 0x18C4A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018C4A0_0x18c4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B177Cu; }
    }
    if (ctx->pc != 0x1B177Cu) { return; }
    ctx->pc = 0x1B177Cu;
    // 0x1b177c: 0x8e620808
    ctx->pc = 0x1b177cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 2056)));
    // 0x1b1780: 0x501021
    ctx->pc = 0x1b1780u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b1784: 0xc06c410
    ctx->pc = 0x1B1784u;
    SET_GPR_U32(ctx, 31, 0x1B178Cu);
    ctx->pc = 0x1B1788u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1B1040u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1040_0x1b1040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B178Cu; }
    }
    if (ctx->pc != 0x1B178Cu) { return; }
    ctx->pc = 0x1B178Cu;
label_1b178c:
    // 0x1b178c: 0x8e620808
    ctx->pc = 0x1b178cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 2056)));
    // 0x1b1790: 0x501021
    ctx->pc = 0x1b1790u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b1794: 0xac400000
    ctx->pc = 0x1b1794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1b1798:
    // 0x1b1798: 0x26520001
    ctx->pc = 0x1b1798u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b179c: 0x96620812
    ctx->pc = 0x1b179cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2066)));
label_1b17a0:
    // 0x1b17a0: 0x242102a
    ctx->pc = 0x1b17a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x1b17a4: 0x1440ffe4
    ctx->pc = 0x1B17A4u;
    {
        const bool branch_taken_0x1b17a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b17a4) {
            ctx->pc = 0x1B1738u;
            goto label_1b1738;
        }
    }
    ctx->pc = 0x1B17ACu;
    // 0x1b17ac: 0x8e64080c
    ctx->pc = 0x1b17acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 2060)));
    // 0x1b17b0: 0x10800006
    ctx->pc = 0x1B17B0u;
    {
        const bool branch_taken_0x1b17b0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b17b0) {
            ctx->pc = 0x1B17CCu;
            goto label_1b17cc;
        }
    }
    ctx->pc = 0x1B17B8u;
    // 0x1b17b8: 0xc064960
    ctx->pc = 0x1B17B8u;
    SET_GPR_U32(ctx, 31, 0x1B17C0u);
    ctx->pc = 0x192580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00192580_0x192580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B17C0u; }
    }
    if (ctx->pc != 0x1B17C0u) { return; }
    ctx->pc = 0x1B17C0u;
    // 0x1b17c0: 0xc06c444
    ctx->pc = 0x1B17C0u;
    SET_GPR_U32(ctx, 31, 0x1B17C8u);
    ctx->pc = 0x1B17C4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 2060)));
    ctx->pc = 0x1B1110u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1110_0x1b1110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B17C8u; }
    }
    if (ctx->pc != 0x1B17C8u) { return; }
    ctx->pc = 0x1B17C8u;
    // 0x1b17c8: 0xae60080c
    ctx->pc = 0x1b17c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2060), GPR_U32(ctx, 0));
label_1b17cc:
    // 0x1b17cc: 0xc06cae4
    ctx->pc = 0x1B17CCu;
    SET_GPR_U32(ctx, 31, 0x1B17D4u);
    ctx->pc = 0x1B17D0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 2056)));
    ctx->pc = 0x1B2B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2B90_0x1b2b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B17D4u; }
    }
    if (ctx->pc != 0x1B17D4u) { return; }
    ctx->pc = 0x1B17D4u;
    // 0x1b17d4: 0xae600808
    ctx->pc = 0x1b17d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2056), GPR_U32(ctx, 0));
    // 0x1b17d8: 0xa6600812
    ctx->pc = 0x1b17d8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2066), (uint16_t)GPR_U32(ctx, 0));
label_1b17dc:
    // 0x1b17dc: 0x24020001
    ctx->pc = 0x1b17dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b17e0: 0x12220004
    ctx->pc = 0x1B17E0u;
    {
        const bool branch_taken_0x1b17e0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x1B17E4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b17e0) {
            ctx->pc = 0x1B17F4u;
            goto label_1b17f4;
        }
    }
    ctx->pc = 0x1B17E8u;
    // 0x1b17e8: 0xc06c6a4
    ctx->pc = 0x1B17E8u;
    SET_GPR_U32(ctx, 31, 0x1B17F0u);
    ctx->pc = 0x1B17ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B1A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1A90_0x1b1a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B17F0u; }
    }
    if (ctx->pc != 0x1B17F0u) { return; }
    ctx->pc = 0x1B17F0u;
    // 0x1b17f0: 0x260202d
    ctx->pc = 0x1b17f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b17f4:
    // 0x1b17f4: 0xc06c674
    ctx->pc = 0x1B17F4u;
    SET_GPR_U32(ctx, 31, 0x1B17FCu);
    ctx->pc = 0x1B19D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B19D0_0x1b19d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B17FCu; }
    }
    if (ctx->pc != 0x1B17FCu) { return; }
    ctx->pc = 0x1B17FCu;
    // 0x1b17fc: 0xdfbf0040
    ctx->pc = 0x1b17fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1800: 0x7bb30030
    ctx->pc = 0x1b1800u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1804: 0x7bb20020
    ctx->pc = 0x1b1804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1808: 0x7bb10010
    ctx->pc = 0x1b1808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b180c: 0x7bb00000
    ctx->pc = 0x1b180cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1810: 0x3e00008
    ctx->pc = 0x1B1810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1814u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1580u: goto label_1b1580;
            case 0x1B15ACu: goto label_1b15ac;
            case 0x1B15C4u: goto label_1b15c4;
            case 0x1B1618u: goto label_1b1618;
            case 0x1B1624u: goto label_1b1624;
            case 0x1B1628u: goto label_1b1628;
            case 0x1B1658u: goto label_1b1658;
            case 0x1B166Cu: goto label_1b166c;
            case 0x1B16A4u: goto label_1b16a4;
            case 0x1B16BCu: goto label_1b16bc;
            case 0x1B170Cu: goto label_1b170c;
            case 0x1B1728u: goto label_1b1728;
            case 0x1B1730u: goto label_1b1730;
            case 0x1B1738u: goto label_1b1738;
            case 0x1B178Cu: goto label_1b178c;
            case 0x1B1798u: goto label_1b1798;
            case 0x1B17A0u: goto label_1b17a0;
            case 0x1B17CCu: goto label_1b17cc;
            case 0x1B17DCu: goto label_1b17dc;
            case 0x1B17F4u: goto label_1b17f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1818u;
    // 0x1b1818: 0x0
    ctx->pc = 0x1b1818u;
    // NOP
    // 0x1b181c: 0x0
    ctx->pc = 0x1b181cu;
    // NOP
}
