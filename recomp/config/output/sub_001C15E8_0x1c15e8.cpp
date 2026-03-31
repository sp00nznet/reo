#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C15E8
// Address: 0x1c15e8 - 0x1c1728
void sub_001C15E8_0x1c15e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c15e8u;

label_1c15e8:
    // 0x1c15e8: 0x27bdffe0
    ctx->pc = 0x1c15e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c15ec: 0x3c030023
    ctx->pc = 0x1c15ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1c15f0: 0xffb00000
    ctx->pc = 0x1c15f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c15f4: 0x806252d8
    ctx->pc = 0x1c15f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 21208)));
    // 0x1c15f8: 0x247052d8
    ctx->pc = 0x1c15f8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 21208));
    // 0x1c15fc: 0x14400003
    ctx->pc = 0x1C15FCu;
    {
        const bool branch_taken_0x1c15fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C1600u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x1c15fc) {
            ctx->pc = 0x1C160Cu;
            goto label_1c160c;
        }
    }
    ctx->pc = 0x1C1604u;
    // 0x1c1604: 0xc07055e
    ctx->pc = 0x1C1604u;
    SET_GPR_U32(ctx, 31, 0x1C160Cu);
    ctx->pc = 0x1C1578u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1578_0x1c1578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C160Cu; }
    }
    if (ctx->pc != 0x1C160Cu) { return; }
    ctx->pc = 0x1C160Cu;
label_1c160c:
    // 0x1c160c: 0x82020004
    ctx->pc = 0x1c160cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c1610: 0xdfbf0010
    ctx->pc = 0x1c1610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1614: 0x38420054
    ctx->pc = 0x1c1614u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 84));
    // 0x1c1618: 0xdfb00000
    ctx->pc = 0x1c1618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c161c: 0x2c420001
    ctx->pc = 0x1c161cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x1c1620: 0x3e00008
    ctx->pc = 0x1C1620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1624u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C15E8u: goto label_1c15e8;
            case 0x1C160Cu: goto label_1c160c;
            case 0x1C1640u: goto label_1c1640;
            case 0x1C1650u: goto label_1c1650;
            case 0x1C1678u: goto label_1c1678;
            case 0x1C167Cu: goto label_1c167c;
            case 0x1C16B8u: goto label_1c16b8;
            case 0x1C16C8u: goto label_1c16c8;
            case 0x1C16DCu: goto label_1c16dc;
            case 0x1C16F8u: goto label_1c16f8;
            case 0x1C1708u: goto label_1c1708;
            case 0x1C1718u: goto label_1c1718;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1628u;
    // 0x1c1628: 0x27bdffe0
    ctx->pc = 0x1c1628u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c162c: 0xffbf0010
    ctx->pc = 0x1c162cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c1630: 0xc0451b4
    ctx->pc = 0x1C1630u;
    SET_GPR_U32(ctx, 31, 0x1C1638u);
    ctx->pc = 0x1C1634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1146D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001146D0_0x1146d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1638u; }
    }
    if (ctx->pc != 0x1C1638u) { return; }
    ctx->pc = 0x1C1638u;
    // 0x1c1638: 0xc07057a
    ctx->pc = 0x1C1638u;
    SET_GPR_U32(ctx, 31, 0x1C1640u);
    ctx->pc = 0x1C15E8u;
    goto label_1c15e8;
    ctx->pc = 0x1C1640u;
label_1c1640:
    // 0x1c1640: 0x10400003
    ctx->pc = 0x1C1640u;
    {
        const bool branch_taken_0x1c1640 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C1644u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x1c1640) {
            ctx->pc = 0x1C1650u;
            goto label_1c1650;
        }
    }
    ctx->pc = 0x1C1648u;
    // 0x1c1648: 0x1000000c
    ctx->pc = 0x1C1648u;
    {
        const bool branch_taken_0x1c1648 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C164Cu;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 21204)));
        if (branch_taken_0x1c1648) {
            ctx->pc = 0x1C167Cu;
            goto label_1c167c;
        }
    }
    ctx->pc = 0x1C1650u;
label_1c1650:
    // 0x1c1650: 0xc0451b4
    ctx->pc = 0x1C1650u;
    SET_GPR_U32(ctx, 31, 0x1C1658u);
    ctx->pc = 0x1C1654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1146D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001146D0_0x1146d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1658u; }
    }
    if (ctx->pc != 0x1C1658u) { return; }
    ctx->pc = 0x1C1658u;
    // 0x1c1658: 0x8fa30000
    ctx->pc = 0x1c1658u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c165c: 0x31342
    ctx->pc = 0x1c165cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 13));
    // 0x1c1660: 0x30420007
    ctx->pc = 0x1c1660u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x1c1664: 0x54400004
    ctx->pc = 0x1C1664u;
    {
        const bool branch_taken_0x1c1664 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c1664) {
            ctx->pc = 0x1C1668u;
            SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 16));
            ctx->pc = 0x1C1678u;
            goto label_1c1678;
        }
    }
    ctx->pc = 0x1C166Cu;
    // 0x1c166c: 0x31102
    ctx->pc = 0x1c166cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 4));
    // 0x1c1670: 0x10000002
    ctx->pc = 0x1C1670u;
    {
        const bool branch_taken_0x1c1670 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C1674u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x1c1670) {
            ctx->pc = 0x1C167Cu;
            goto label_1c167c;
        }
    }
    ctx->pc = 0x1C1678u;
label_1c1678:
    // 0x1c1678: 0x3042001f
    ctx->pc = 0x1c1678u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 31));
label_1c167c:
    // 0x1c167c: 0xdfbf0010
    ctx->pc = 0x1c167cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1680: 0x3e00008
    ctx->pc = 0x1C1680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1684u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C15E8u: goto label_1c15e8;
            case 0x1C160Cu: goto label_1c160c;
            case 0x1C1640u: goto label_1c1640;
            case 0x1C1650u: goto label_1c1650;
            case 0x1C1678u: goto label_1c1678;
            case 0x1C167Cu: goto label_1c167c;
            case 0x1C16B8u: goto label_1c16b8;
            case 0x1C16C8u: goto label_1c16c8;
            case 0x1C16DCu: goto label_1c16dc;
            case 0x1C16F8u: goto label_1c16f8;
            case 0x1C1708u: goto label_1c1708;
            case 0x1C1718u: goto label_1c1718;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1688u;
    // 0x1c1688: 0x3c020023
    ctx->pc = 0x1c1688u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1c168c: 0x244752d0
    ctx->pc = 0x1c168cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 21200));
    // 0x1c1690: 0x68830007
    ctx->pc = 0x1c1690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1c1694: 0x6c830000
    ctx->pc = 0x1c1694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1c1698: 0xb0e30007
    ctx->pc = 0x1c1698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c169c: 0x3e00008
    ctx->pc = 0x1C169Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C16A0u;
        { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C15E8u: goto label_1c15e8;
            case 0x1C160Cu: goto label_1c160c;
            case 0x1C1640u: goto label_1c1640;
            case 0x1C1650u: goto label_1c1650;
            case 0x1C1678u: goto label_1c1678;
            case 0x1C167Cu: goto label_1c167c;
            case 0x1C16B8u: goto label_1c16b8;
            case 0x1C16C8u: goto label_1c16c8;
            case 0x1C16DCu: goto label_1c16dc;
            case 0x1C16F8u: goto label_1c16f8;
            case 0x1C1708u: goto label_1c1708;
            case 0x1C1718u: goto label_1c1718;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C16A4u;
    // 0x1c16a4: 0x0
    ctx->pc = 0x1c16a4u;
    // NOP
    // 0x1c16a8: 0x27bdffe0
    ctx->pc = 0x1c16a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c16ac: 0xffbf0010
    ctx->pc = 0x1c16acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c16b0: 0xc07057a
    ctx->pc = 0x1C16B0u;
    SET_GPR_U32(ctx, 31, 0x1C16B8u);
    ctx->pc = 0x1C15E8u;
    goto label_1c15e8;
    ctx->pc = 0x1C16B8u;
label_1c16b8:
    // 0x1c16b8: 0x10400003
    ctx->pc = 0x1C16B8u;
    {
        const bool branch_taken_0x1c16b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C16BCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
        if (branch_taken_0x1c16b8) {
            ctx->pc = 0x1C16C8u;
            goto label_1c16c8;
        }
    }
    ctx->pc = 0x1C16C0u;
    // 0x1c16c0: 0x10000006
    ctx->pc = 0x1C16C0u;
    {
        const bool branch_taken_0x1c16c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C16C4u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 21202)));
        if (branch_taken_0x1c16c0) {
            ctx->pc = 0x1C16DCu;
            goto label_1c16dc;
        }
    }
    ctx->pc = 0x1C16C8u;
label_1c16c8:
    // 0x1c16c8: 0xc0451b4
    ctx->pc = 0x1C16C8u;
    SET_GPR_U32(ctx, 31, 0x1C16D0u);
    ctx->pc = 0x1C16CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1146D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001146D0_0x1146d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C16D0u; }
    }
    if (ctx->pc != 0x1C16D0u) { return; }
    ctx->pc = 0x1C16D0u;
    // 0x1c16d0: 0x8fa20000
    ctx->pc = 0x1c16d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c16d4: 0x21042
    ctx->pc = 0x1c16d4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x1c16d8: 0x30420003
    ctx->pc = 0x1c16d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
label_1c16dc:
    // 0x1c16dc: 0xdfbf0010
    ctx->pc = 0x1c16dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c16e0: 0x3e00008
    ctx->pc = 0x1C16E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C16E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C15E8u: goto label_1c15e8;
            case 0x1C160Cu: goto label_1c160c;
            case 0x1C1640u: goto label_1c1640;
            case 0x1C1650u: goto label_1c1650;
            case 0x1C1678u: goto label_1c1678;
            case 0x1C167Cu: goto label_1c167c;
            case 0x1C16B8u: goto label_1c16b8;
            case 0x1C16C8u: goto label_1c16c8;
            case 0x1C16DCu: goto label_1c16dc;
            case 0x1C16F8u: goto label_1c16f8;
            case 0x1C1708u: goto label_1c1708;
            case 0x1C1718u: goto label_1c1718;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C16E8u;
    // 0x1c16e8: 0x27bdffe0
    ctx->pc = 0x1c16e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c16ec: 0xffbf0010
    ctx->pc = 0x1c16ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c16f0: 0xc07057a
    ctx->pc = 0x1C16F0u;
    SET_GPR_U32(ctx, 31, 0x1C16F8u);
    ctx->pc = 0x1C15E8u;
    goto label_1c15e8;
    ctx->pc = 0x1C16F8u;
label_1c16f8:
    // 0x1c16f8: 0x10400003
    ctx->pc = 0x1C16F8u;
    {
        const bool branch_taken_0x1c16f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C16FCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
        if (branch_taken_0x1c16f8) {
            ctx->pc = 0x1C1708u;
            goto label_1c1708;
        }
    }
    ctx->pc = 0x1C1700u;
    // 0x1c1700: 0x10000005
    ctx->pc = 0x1C1700u;
    {
        const bool branch_taken_0x1c1700 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C1704u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 21205)));
        if (branch_taken_0x1c1700) {
            ctx->pc = 0x1C1718u;
            goto label_1c1718;
        }
    }
    ctx->pc = 0x1C1708u;
label_1c1708:
    // 0x1c1708: 0xc0451b4
    ctx->pc = 0x1C1708u;
    SET_GPR_U32(ctx, 31, 0x1C1710u);
    ctx->pc = 0x1C170Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1146D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001146D0_0x1146d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1710u; }
    }
    if (ctx->pc != 0x1C1710u) { return; }
    ctx->pc = 0x1C1710u;
    // 0x1c1710: 0x8fa20000
    ctx->pc = 0x1c1710u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1714: 0x30420001
    ctx->pc = 0x1c1714u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_1c1718:
    // 0x1c1718: 0xdfbf0010
    ctx->pc = 0x1c1718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c171c: 0x3e00008
    ctx->pc = 0x1C171Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1720u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C15E8u: goto label_1c15e8;
            case 0x1C160Cu: goto label_1c160c;
            case 0x1C1640u: goto label_1c1640;
            case 0x1C1650u: goto label_1c1650;
            case 0x1C1678u: goto label_1c1678;
            case 0x1C167Cu: goto label_1c167c;
            case 0x1C16B8u: goto label_1c16b8;
            case 0x1C16C8u: goto label_1c16c8;
            case 0x1C16DCu: goto label_1c16dc;
            case 0x1C16F8u: goto label_1c16f8;
            case 0x1C1708u: goto label_1c1708;
            case 0x1C1718u: goto label_1c1718;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1724u;
    // 0x1c1724: 0x0
    ctx->pc = 0x1c1724u;
    // NOP
}
