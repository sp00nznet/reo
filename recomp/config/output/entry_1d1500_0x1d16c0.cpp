#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1d1500
// Address: 0x1d1500 - 0x1d16c0
void entry_1d1500_0x1d16c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d1500u;

    // 0x1d1500: 0x27bdfee0
    ctx->pc = 0x1d1500u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1d1504: 0x3c010032
    ctx->pc = 0x1d1504u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1d1508: 0xffbf0090
    ctx->pc = 0x1d1508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1d150c: 0x7fbe0080
    ctx->pc = 0x1d150cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1d1510: 0x7fb70070
    ctx->pc = 0x1d1510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1d1514: 0x7fb60060
    ctx->pc = 0x1d1514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d1518: 0x120b82d
    ctx->pc = 0x1d1518u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d151c: 0x7fb50050
    ctx->pc = 0x1d151cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d1520: 0xa0b02d
    ctx->pc = 0x1d1520u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1524: 0x7fb40040
    ctx->pc = 0x1d1524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d1528: 0x2405ffc0
    ctx->pc = 0x1d1528u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1d152c: 0x7fb30030
    ctx->pc = 0x1d152cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d1530: 0xa02d
    ctx->pc = 0x1d1530u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1534: 0x7fb20020
    ctx->pc = 0x1d1534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d1538: 0x7fb10010
    ctx->pc = 0x1d1538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d153c: 0x7fb00000
    ctx->pc = 0x1d153cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1540: 0x80882d
    ctx->pc = 0x1d1540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1544: 0xafa600fc
    ctx->pc = 0x1d1544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 6));
    // 0x1d1548: 0xe0802d
    ctx->pc = 0x1d1548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d154c: 0x8ce30004
    ctx->pc = 0x1d154cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1d1550: 0x8c26440c
    ctx->pc = 0x1d1550u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x1d1554: 0x641821
    ctx->pc = 0x1d1554u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d1558: 0xafa300d0
    ctx->pc = 0x1d1558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x1d155c: 0xc81821
    ctx->pc = 0x1d155cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1d1560: 0x2463003f
    ctx->pc = 0x1d1560u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 63));
    // 0x1d1564: 0x651824
    ctx->pc = 0x1d1564u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d1568: 0x10000043
    ctx->pc = 0x1D1568u;
    {
        const bool branch_taken_0x1d1568 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D156Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        if (branch_taken_0x1d1568) {
            ctx->pc = 0x1D1678u;
            goto label_1d1678;
        }
    }
    ctx->pc = 0x1D1570u;
label_1d1570:
    // 0x1d1570: 0x8fa300d0
    ctx->pc = 0x1d1570u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d1574: 0x203082b
    ctx->pc = 0x1d1574u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d1578: 0x10200043
    ctx->pc = 0x1D1578u;
    {
        const bool branch_taken_0x1d1578 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d1578) {
            ctx->pc = 0x1D1688u;
            goto label_1d1688;
        }
    }
    ctx->pc = 0x1D1580u;
    // 0x1d1580: 0x8e1e0000
    ctx->pc = 0x1d1580u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1584: 0x13c0003a
    ctx->pc = 0x1D1584u;
    {
        const bool branch_taken_0x1d1584 = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D1588u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x1d1584) {
            ctx->pc = 0x1D1670u;
            goto label_1d1670;
        }
    }
    ctx->pc = 0x1D158Cu;
    // 0x1d158c: 0x8fa300fc
    ctx->pc = 0x1d158cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1d1590: 0x982d
    ctx->pc = 0x1d1590u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1594: 0x831818
    ctx->pc = 0x1d1594u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1d1598: 0xafa300b0
    ctx->pc = 0x1d1598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x1d159c: 0x8e030004
    ctx->pc = 0x1d159cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d15a0: 0x711821
    ctx->pc = 0x1d15a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d15a4: 0x1000002d
    ctx->pc = 0x1D15A4u;
    {
        const bool branch_taken_0x1d15a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D15A8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
        if (branch_taken_0x1d15a4) {
            ctx->pc = 0x1D165Cu;
            goto label_1d165c;
        }
    }
    ctx->pc = 0x1D15ACu;
label_1d15ac:
    // 0x1d15ac: 0x2404ffff
    ctx->pc = 0x1d15acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d15b0: 0x32880
    ctx->pc = 0x1d15b0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d15b4: 0x8fa300e0
    ctx->pc = 0x1d15b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d15b8: 0x651821
    ctx->pc = 0x1d15b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d15bc: 0x8c630000
    ctx->pc = 0x1d15bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d15c0: 0x10640024
    ctx->pc = 0x1D15C0u;
    {
        const bool branch_taken_0x1d15c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x1D15C4u;
        SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        if (branch_taken_0x1d15c0) {
            ctx->pc = 0x1D1654u;
            goto label_1d1654;
        }
    }
    ctx->pc = 0x1D15C8u;
    // 0x1d15c8: 0x8ea30000
    ctx->pc = 0x1d15c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d15cc: 0x14640009
    ctx->pc = 0x1D15CCu;
    {
        const bool branch_taken_0x1d15cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x1d15cc) {
            ctx->pc = 0x1D15F4u;
            goto label_1d15f4;
        }
    }
    ctx->pc = 0x1D15D4u;
    // 0x1d15d4: 0x8fa300b0
    ctx->pc = 0x1d15d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d15d8: 0x8ea40004
    ctx->pc = 0x1d15d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1d15dc: 0x2431821
    ctx->pc = 0x1d15dcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1d15e0: 0x2e31821
    ctx->pc = 0x1d15e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1d15e4: 0x31840
    ctx->pc = 0x1d15e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d15e8: 0x2c31821
    ctx->pc = 0x1d15e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1d15ec: 0x10000019
    ctx->pc = 0x1D15ECu;
    {
        const bool branch_taken_0x1d15ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D15F0u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 4));
        if (branch_taken_0x1d15ec) {
            ctx->pc = 0x1D1654u;
            goto label_1d1654;
        }
    }
    ctx->pc = 0x1D15F4u;
label_1d15f4:
    // 0x1d15f4: 0x8fa500c0
    ctx->pc = 0x1d15f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d15f8: 0x27a40100
    ctx->pc = 0x1d15f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d15fc: 0xc074d54
    ctx->pc = 0x1D15FCu;
    SET_GPR_U32(ctx, 31, 0x1D1604u);
    ctx->pc = 0x1D1600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D3550u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3550_0x1d3550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1604u; }
    }
    if (ctx->pc != 0x1D1604u) { return; }
    ctx->pc = 0x1D1604u;
    // 0x1d1604: 0xc064940
    ctx->pc = 0x1D1604u;
    SET_GPR_U32(ctx, 31, 0x1D160Cu);
    ctx->pc = 0x1D1608u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 256));
    ctx->pc = 0x192500u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00192500_0x192500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D160Cu; }
    }
    if (ctx->pc != 0x1D160Cu) { return; }
    ctx->pc = 0x1D160Cu;
    // 0x1d160c: 0x8fa300b0
    ctx->pc = 0x1d160cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d1610: 0x2431821
    ctx->pc = 0x1d1610u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1d1614: 0x2e31821
    ctx->pc = 0x1d1614u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1d1618: 0x31840
    ctx->pc = 0x1d1618u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d161c: 0x2c32021
    ctx->pc = 0x1d161cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1d1620: 0x24830004
    ctx->pc = 0x1d1620u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4));
    // 0x1d1624: 0xafa300a0
    ctx->pc = 0x1d1624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x1d1628: 0x94830004
    ctx->pc = 0x1d1628u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d162c: 0x10600003
    ctx->pc = 0x1D162Cu;
    {
        const bool branch_taken_0x1d162c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D1630u;
        SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x1d162c) {
            ctx->pc = 0x1D163Cu;
            goto label_1d163c;
        }
    }
    ctx->pc = 0x1D1634u;
    // 0x1d1634: 0xc064968
    ctx->pc = 0x1D1634u;
    SET_GPR_U32(ctx, 31, 0x1D163Cu);
    ctx->pc = 0x1D1638u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 65535));
    ctx->pc = 0x1925A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001925A0_0x1925a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D163Cu; }
    }
    if (ctx->pc != 0x1D163Cu) { return; }
    ctx->pc = 0x1D163Cu;
label_1d163c:
    // 0x1d163c: 0x8fa300a0
    ctx->pc = 0x1d163cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d1640: 0x2404ffff
    ctx->pc = 0x1d1640u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1644: 0xa4720000
    ctx->pc = 0x1d1644u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x1d1648: 0x3243ffff
    ctx->pc = 0x1d1648u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 18), 65535));
    // 0x1d164c: 0xaea40000
    ctx->pc = 0x1d164cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x1d1650: 0xaea30004
    ctx->pc = 0x1d1650u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
label_1d1654:
    // 0x1d1654: 0x26630001
    ctx->pc = 0x1d1654u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d1658: 0x3073ffff
    ctx->pc = 0x1d1658u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 3), 65535));
label_1d165c:
    // 0x1d165c: 0x3272ffff
    ctx->pc = 0x1d165cu;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 19), 65535));
    // 0x1d1660: 0x25e182b
    ctx->pc = 0x1d1660u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
    // 0x1d1664: 0x1460ffd1
    ctx->pc = 0x1D1664u;
    {
        const bool branch_taken_0x1d1664 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D1668u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), 65535));
        if (branch_taken_0x1d1664) {
            ctx->pc = 0x1D15ACu;
            goto label_1d15ac;
        }
    }
    ctx->pc = 0x1D166Cu;
    // 0x1d166c: 0x26830001
    ctx->pc = 0x1d166cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 1));
label_1d1670:
    // 0x1d1670: 0x26100008
    ctx->pc = 0x1d1670u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
    // 0x1d1674: 0x3074ffff
    ctx->pc = 0x1d1674u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 3), 65535));
label_1d1678:
    // 0x1d1678: 0x3284ffff
    ctx->pc = 0x1d1678u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 20), 65535));
    // 0x1d167c: 0x28830008
    ctx->pc = 0x1d167cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 8));
    // 0x1d1680: 0x1460ffbb
    ctx->pc = 0x1D1680u;
    {
        const bool branch_taken_0x1d1680 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d1680) {
            ctx->pc = 0x1D1570u;
            goto label_1d1570;
        }
    }
    ctx->pc = 0x1D1688u;
label_1d1688:
    // 0x1d1688: 0xdfbf0090
    ctx->pc = 0x1d1688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d168c: 0x7bbe0080
    ctx->pc = 0x1d168cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d1690: 0x7bb70070
    ctx->pc = 0x1d1690u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d1694: 0x7bb60060
    ctx->pc = 0x1d1694u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1698: 0x7bb50050
    ctx->pc = 0x1d1698u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d169c: 0x7bb40040
    ctx->pc = 0x1d169cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d16a0: 0x7bb30030
    ctx->pc = 0x1d16a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d16a4: 0x7bb20020
    ctx->pc = 0x1d16a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d16a8: 0x7bb10010
    ctx->pc = 0x1d16a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d16ac: 0x7bb00000
    ctx->pc = 0x1d16acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d16b0: 0x3e00008
    ctx->pc = 0x1D16B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D16B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D1570u: goto label_1d1570;
            case 0x1D15ACu: goto label_1d15ac;
            case 0x1D15F4u: goto label_1d15f4;
            case 0x1D163Cu: goto label_1d163c;
            case 0x1D1654u: goto label_1d1654;
            case 0x1D165Cu: goto label_1d165c;
            case 0x1D1670u: goto label_1d1670;
            case 0x1D1678u: goto label_1d1678;
            case 0x1D1688u: goto label_1d1688;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D16B8u;
    // 0x1d16b8: 0x0
    ctx->pc = 0x1d16b8u;
    // NOP
    // 0x1d16bc: 0x0
    ctx->pc = 0x1d16bcu;
    // NOP
}
