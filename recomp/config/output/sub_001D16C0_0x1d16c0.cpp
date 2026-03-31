#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D16C0
// Address: 0x1d16c0 - 0x1d1940
void sub_001D16C0_0x1d16c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d16c0u;

    // 0x1d16c0: 0x27bdfeb0
    ctx->pc = 0x1d16c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1d16c4: 0x310300ff
    ctx->pc = 0x1d16c4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 8), 255));
    // 0x1d16c8: 0xffbf0090
    ctx->pc = 0x1d16c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1d16cc: 0x34880
    ctx->pc = 0x1d16ccu;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d16d0: 0x7fbe0080
    ctx->pc = 0x1d16d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1d16d4: 0x24030001
    ctx->pc = 0x1d16d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d16d8: 0x7fb70070
    ctx->pc = 0x1d16d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1d16dc: 0x3c010032
    ctx->pc = 0x1d16dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1d16e0: 0x7fb60060
    ctx->pc = 0x1d16e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d16e4: 0x2408ffc0
    ctx->pc = 0x1d16e4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1d16e8: 0x7fb50050
    ctx->pc = 0x1d16e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d16ec: 0x80f02d
    ctx->pc = 0x1d16ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d16f0: 0x7fb40040
    ctx->pc = 0x1d16f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d16f4: 0xa0a82d
    ctx->pc = 0x1d16f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d16f8: 0x7fb30030
    ctx->pc = 0x1d16f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d16fc: 0xc0a02d
    ctx->pc = 0x1d16fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1700: 0x7fb20020
    ctx->pc = 0x1d1700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d1704: 0xb02d
    ctx->pc = 0x1d1704u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1708: 0x7fb10010
    ctx->pc = 0x1d1708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d170c: 0x7fb00000
    ctx->pc = 0x1d170cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1710: 0xa0a30002
    ctx->pc = 0x1d1710u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d1714: 0x3c030023
    ctx->pc = 0x1d1714u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1d1718: 0x8cc60004
    ctx->pc = 0x1d1718u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1d171c: 0x246366f0
    ctx->pc = 0x1d171cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 26352));
    // 0x1d1720: 0x8c25440c
    ctx->pc = 0x1d1720u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x1d1724: 0x691821
    ctx->pc = 0x1d1724u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1d1728: 0x94630000
    ctx->pc = 0x1d1728u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d172c: 0xafa300e0
    ctx->pc = 0x1d172cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x1d1730: 0x3c030023
    ctx->pc = 0x1d1730u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1d1734: 0x246366f2
    ctx->pc = 0x1d1734u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 26354));
    // 0x1d1738: 0x691821
    ctx->pc = 0x1d1738u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1d173c: 0x94730000
    ctx->pc = 0x1d173cu;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d1740: 0xc41821
    ctx->pc = 0x1d1740u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1d1744: 0xafa300f0
    ctx->pc = 0x1d1744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x1d1748: 0xa71821
    ctx->pc = 0x1d1748u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1d174c: 0x2463003f
    ctx->pc = 0x1d174cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 63));
    // 0x1d1750: 0x681824
    ctx->pc = 0x1d1750u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1d1754: 0x10000067
    ctx->pc = 0x1D1754u;
    {
        const bool branch_taken_0x1d1754 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D1758u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        if (branch_taken_0x1d1754) {
            ctx->pc = 0x1D18F4u;
            goto label_1d18f4;
        }
    }
    ctx->pc = 0x1D175Cu;
label_1d175c:
    // 0x1d175c: 0x8fa300f0
    ctx->pc = 0x1d175cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1760: 0x283082b
    ctx->pc = 0x1d1760u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1d1764: 0x10200067
    ctx->pc = 0x1D1764u;
    {
        const bool branch_taken_0x1d1764 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d1764) {
            ctx->pc = 0x1D1904u;
            goto label_1d1904;
        }
    }
    ctx->pc = 0x1D176Cu;
    // 0x1d176c: 0x8e830000
    ctx->pc = 0x1d176cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d1770: 0xafa30110
    ctx->pc = 0x1d1770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
    // 0x1d1774: 0x8fa30110
    ctx->pc = 0x1d1774u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d1778: 0x1060005c
    ctx->pc = 0x1D1778u;
    {
        const bool branch_taken_0x1d1778 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D177Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 22), 1));
        if (branch_taken_0x1d1778) {
            ctx->pc = 0x1D18ECu;
            goto label_1d18ec;
        }
    }
    ctx->pc = 0x1D1780u;
    // 0x1d1780: 0x8e850004
    ctx->pc = 0x1d1780u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1d1784: 0x41880
    ctx->pc = 0x1d1784u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d1788: 0x642021
    ctx->pc = 0x1d1788u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d178c: 0x882d
    ctx->pc = 0x1d178cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1790: 0x41880
    ctx->pc = 0x1d1790u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d1794: 0x831821
    ctx->pc = 0x1d1794u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d1798: 0x31880
    ctx->pc = 0x1d1798u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d179c: 0xafa300b0
    ctx->pc = 0x1d179cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x1d17a0: 0xbe1821
    ctx->pc = 0x1d17a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
    // 0x1d17a4: 0x1000004b
    ctx->pc = 0x1D17A4u;
    {
        const bool branch_taken_0x1d17a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D17A8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
        if (branch_taken_0x1d17a4) {
            ctx->pc = 0x1D18D4u;
            goto label_1d18d4;
        }
    }
    ctx->pc = 0x1D17ACu;
label_1d17ac:
    // 0x1d17ac: 0x92a30001
    ctx->pc = 0x1d17acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x1d17b0: 0x2e3001a
    ctx->pc = 0x1d17b0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 23);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1d17b4: 0x0
    ctx->pc = 0x1d17b4u;
    // NOP
    // 0x1d17b8: 0x0
    ctx->pc = 0x1d17b8u;
    // NOP
    // 0x1d17bc: 0x1810
    ctx->pc = 0x1d17bcu;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x1d17c0: 0x3070ffff
    ctx->pc = 0x1d17c0u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 3), 65535));
    // 0x1d17c4: 0x16000002
    ctx->pc = 0x1D17C4u;
    {
        const bool branch_taken_0x1d17c4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D17C8u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), 65535));
        if (branch_taken_0x1d17c4) {
            ctx->pc = 0x1D17D0u;
            goto label_1d17d0;
        }
    }
    ctx->pc = 0x1D17CCu;
    // 0x1d17cc: 0xa3a000d0
    ctx->pc = 0x1d17ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 0));
label_1d17d0:
    // 0x1d17d0: 0x2404ffff
    ctx->pc = 0x1d17d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d17d4: 0x32880
    ctx->pc = 0x1d17d4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d17d8: 0x8fa30100
    ctx->pc = 0x1d17d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d17dc: 0x651821
    ctx->pc = 0x1d17dcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d17e0: 0x8c630000
    ctx->pc = 0x1d17e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d17e4: 0x10640031
    ctx->pc = 0x1D17E4u;
    {
        const bool branch_taken_0x1d17e4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x1D17E8u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        if (branch_taken_0x1d17e4) {
            ctx->pc = 0x1D18ACu;
            goto label_1d18ac;
        }
    }
    ctx->pc = 0x1D17ECu;
    // 0x1d17ec: 0x64030001
    ctx->pc = 0x1d17ecu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)1);
    // 0x1d17f0: 0xa3a300d0
    ctx->pc = 0x1d17f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d17f4: 0x8e430000
    ctx->pc = 0x1d17f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d17f8: 0x14640007
    ctx->pc = 0x1D17F8u;
    {
        const bool branch_taken_0x1d17f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x1d17f8) {
            ctx->pc = 0x1D1818u;
            goto label_1d1818;
        }
    }
    ctx->pc = 0x1D1800u;
    // 0x1d1800: 0x8e440004
    ctx->pc = 0x1d1800u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d1804: 0x2701821
    ctx->pc = 0x1d1804u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1d1808: 0x31840
    ctx->pc = 0x1d1808u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d180c: 0x2a31821
    ctx->pc = 0x1d180cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d1810: 0x1000001b
    ctx->pc = 0x1D1810u;
    {
        const bool branch_taken_0x1d1810 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D1814u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 4));
        if (branch_taken_0x1d1810) {
            ctx->pc = 0x1D1880u;
            goto label_1d1880;
        }
    }
    ctx->pc = 0x1D1818u;
label_1d1818:
    // 0x1d1818: 0x8fa500c0
    ctx->pc = 0x1d1818u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d181c: 0x27a40130
    ctx->pc = 0x1d181cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 304));
    // 0x1d1820: 0xc074d54
    ctx->pc = 0x1D1820u;
    SET_GPR_U32(ctx, 31, 0x1D1828u);
    ctx->pc = 0x1D1824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D3550u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3550_0x1d3550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1828u; }
    }
    if (ctx->pc != 0x1D1828u) { return; }
    ctx->pc = 0x1D1828u;
    // 0x1d1828: 0xc064940
    ctx->pc = 0x1D1828u;
    SET_GPR_U32(ctx, 31, 0x1D1830u);
    ctx->pc = 0x1D182Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 304));
    ctx->pc = 0x192500u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00192500_0x192500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1830u; }
    }
    if (ctx->pc != 0x1D1830u) { return; }
    ctx->pc = 0x1D1830u;
    // 0x1d1830: 0x3043ffff
    ctx->pc = 0x1d1830u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1d1834: 0xa7a30120
    ctx->pc = 0x1d1834u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 288), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d1838: 0x2701821
    ctx->pc = 0x1d1838u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1d183c: 0x31840
    ctx->pc = 0x1d183cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d1840: 0x2a32021
    ctx->pc = 0x1d1840u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d1844: 0x24830004
    ctx->pc = 0x1d1844u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4));
    // 0x1d1848: 0xafa300a0
    ctx->pc = 0x1d1848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x1d184c: 0x94830004
    ctx->pc = 0x1d184cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d1850: 0x10600003
    ctx->pc = 0x1D1850u;
    {
        const bool branch_taken_0x1d1850 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D1854u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 65535));
        if (branch_taken_0x1d1850) {
            ctx->pc = 0x1D1860u;
            goto label_1d1860;
        }
    }
    ctx->pc = 0x1D1858u;
    // 0x1d1858: 0xc064968
    ctx->pc = 0x1D1858u;
    SET_GPR_U32(ctx, 31, 0x1D1860u);
    ctx->pc = 0x1925A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001925A0_0x1925a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1860u; }
    }
    if (ctx->pc != 0x1D1860u) { return; }
    ctx->pc = 0x1D1860u;
label_1d1860:
    // 0x1d1860: 0x97a40120
    ctx->pc = 0x1d1860u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1d1864: 0x8fa300a0
    ctx->pc = 0x1d1864u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d1868: 0xa4640000
    ctx->pc = 0x1d1868u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d186c: 0x97a30120
    ctx->pc = 0x1d186cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1d1870: 0x2404ffff
    ctx->pc = 0x1d1870u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1874: 0x60182d
    ctx->pc = 0x1d1874u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1878: 0xae440000
    ctx->pc = 0x1d1878u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x1d187c: 0xae430004
    ctx->pc = 0x1d187cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_1d1880:
    // 0x1d1880: 0x92a30001
    ctx->pc = 0x1d1880u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x1d1884: 0x2e3001a
    ctx->pc = 0x1d1884u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 23);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1d1888: 0x8fa300b0
    ctx->pc = 0x1d1888u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d188c: 0x0
    ctx->pc = 0x1d188cu;
    // NOP
    // 0x1d1890: 0x2012
    ctx->pc = 0x1d1890u;
    SET_GPR_U32(ctx, 4, ctx->lo);
    // 0x1d1894: 0x642021
    ctx->pc = 0x1d1894u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d1898: 0x8fa300e0
    ctx->pc = 0x1d1898u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d189c: 0x641821
    ctx->pc = 0x1d189cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d18a0: 0x31840
    ctx->pc = 0x1d18a0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d18a4: 0x2a31821
    ctx->pc = 0x1d18a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d18a8: 0xa4730fa4
    ctx->pc = 0x1d18a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4004), (uint16_t)GPR_U32(ctx, 19));
label_1d18ac:
    // 0x1d18ac: 0x92a40001
    ctx->pc = 0x1d18acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x1d18b0: 0x2483ffff
    ctx->pc = 0x1d18b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d18b4: 0x16030006
    ctx->pc = 0x1D18B4u;
    {
        const bool branch_taken_0x1d18b4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 3));
        ctx->pc = 0x1D18B8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1d18b4) {
            ctx->pc = 0x1D18D0u;
            goto label_1d18d0;
        }
    }
    ctx->pc = 0x1D18BCu;
    // 0x1d18bc: 0x93a300d0
    ctx->pc = 0x1d18bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d18c0: 0x10600002
    ctx->pc = 0x1D18C0u;
    {
        const bool branch_taken_0x1d18c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d18c0) {
            ctx->pc = 0x1D18CCu;
            goto label_1d18cc;
        }
    }
    ctx->pc = 0x1D18C8u;
    // 0x1d18c8: 0x2649821
    ctx->pc = 0x1d18c8u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_1d18cc:
    // 0x1d18cc: 0x26230001
    ctx->pc = 0x1d18ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
label_1d18d0:
    // 0x1d18d0: 0x3071ffff
    ctx->pc = 0x1d18d0u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 3), 65535));
label_1d18d4:
    // 0x1d18d4: 0x8fa30110
    ctx->pc = 0x1d18d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d18d8: 0x3237ffff
    ctx->pc = 0x1d18d8u;
    SET_GPR_U32(ctx, 23, AND32(GPR_U32(ctx, 17), 65535));
    // 0x1d18dc: 0x2e3182b
    ctx->pc = 0x1d18dcu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1d18e0: 0x1460ffb2
    ctx->pc = 0x1D18E0u;
    {
        const bool branch_taken_0x1d18e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d18e0) {
            ctx->pc = 0x1D17ACu;
            goto label_1d17ac;
        }
    }
    ctx->pc = 0x1D18E8u;
    // 0x1d18e8: 0x26c30001
    ctx->pc = 0x1d18e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 22), 1));
label_1d18ec:
    // 0x1d18ec: 0x26940008
    ctx->pc = 0x1d18ecu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
    // 0x1d18f0: 0x3076ffff
    ctx->pc = 0x1d18f0u;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 3), 65535));
label_1d18f4:
    // 0x1d18f4: 0x32c4ffff
    ctx->pc = 0x1d18f4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 22), 65535));
    // 0x1d18f8: 0x28830014
    ctx->pc = 0x1d18f8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 20));
    // 0x1d18fc: 0x1460ff97
    ctx->pc = 0x1D18FCu;
    {
        const bool branch_taken_0x1d18fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d18fc) {
            ctx->pc = 0x1D175Cu;
            goto label_1d175c;
        }
    }
    ctx->pc = 0x1D1904u;
label_1d1904:
    // 0x1d1904: 0xdfbf0090
    ctx->pc = 0x1d1904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d1908: 0x7bbe0080
    ctx->pc = 0x1d1908u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d190c: 0x7bb70070
    ctx->pc = 0x1d190cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d1910: 0x7bb60060
    ctx->pc = 0x1d1910u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1914: 0x7bb50050
    ctx->pc = 0x1d1914u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d1918: 0x7bb40040
    ctx->pc = 0x1d1918u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d191c: 0x7bb30030
    ctx->pc = 0x1d191cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d1920: 0x7bb20020
    ctx->pc = 0x1d1920u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1924: 0x7bb10010
    ctx->pc = 0x1d1924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1928: 0x7bb00000
    ctx->pc = 0x1d1928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d192c: 0x3e00008
    ctx->pc = 0x1D192Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1930u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D175Cu: goto label_1d175c;
            case 0x1D17ACu: goto label_1d17ac;
            case 0x1D17D0u: goto label_1d17d0;
            case 0x1D1818u: goto label_1d1818;
            case 0x1D1860u: goto label_1d1860;
            case 0x1D1880u: goto label_1d1880;
            case 0x1D18ACu: goto label_1d18ac;
            case 0x1D18CCu: goto label_1d18cc;
            case 0x1D18D0u: goto label_1d18d0;
            case 0x1D18D4u: goto label_1d18d4;
            case 0x1D18ECu: goto label_1d18ec;
            case 0x1D18F4u: goto label_1d18f4;
            case 0x1D1904u: goto label_1d1904;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D1934u;
    // 0x1d1934: 0x0
    ctx->pc = 0x1d1934u;
    // NOP
    // 0x1d1938: 0x0
    ctx->pc = 0x1d1938u;
    // NOP
    // 0x1d193c: 0x0
    ctx->pc = 0x1d193cu;
    // NOP
}
