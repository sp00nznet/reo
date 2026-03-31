#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001276D8
// Address: 0x1276d8 - 0x127fc8
void sub_001276D8_0x1276d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1276d8u;

    // 0x1276d8: 0x27bdffb0
    ctx->pc = 0x1276d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1276dc: 0x84400
    ctx->pc = 0x1276dcu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 16));
    // 0x1276e0: 0xffb00000
    ctx->pc = 0x1276e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1276e4: 0x94c00
    ctx->pc = 0x1276e4u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 16));
    // 0x1276e8: 0xffb10008
    ctx->pc = 0x1276e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1276ec: 0x88c03
    ctx->pc = 0x1276ecu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 8), 16));
    // 0x1276f0: 0xffb20010
    ctx->pc = 0x1276f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1276f4: 0x140902d
    ctx->pc = 0x1276f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1276f8: 0xffb30018
    ctx->pc = 0x1276f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1276fc: 0xa0982d
    ctx->pc = 0x1276fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127700: 0xffb40020
    ctx->pc = 0x127700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x127704: 0xe0a02d
    ctx->pc = 0x127704u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127708: 0xffb50028
    ctx->pc = 0x127708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x12770c: 0xb5c00
    ctx->pc = 0x12770cu;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 16));
    // 0x127710: 0xffb60030
    ctx->pc = 0x127710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x127714: 0xbb403
    ctx->pc = 0x127714u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 11), 16));
    // 0x127718: 0xffb70038
    ctx->pc = 0x127718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x12771c: 0x98403
    ctx->pc = 0x12771cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 9), 16));
    // 0x127720: 0xffbe0040
    ctx->pc = 0x127720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x127724: 0x80682d
    ctx->pc = 0x127724u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127728: 0x87b50050
    ctx->pc = 0x127728u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12772c: 0x502d
    ctx->pc = 0x12772cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127730: 0x86850000
    ctx->pc = 0x127730u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x127734: 0x1a600051
    ctx->pc = 0x127734u;
    {
        const bool branch_taken_0x127734 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x127738u;
        SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
        if (branch_taken_0x127734) {
            ctx->pc = 0x12787Cu;
            goto label_12787c;
        }
    }
    ctx->pc = 0x12773Cu;
    // 0x12773c: 0x241eff00
    ctx->pc = 0x12773cu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x127740: 0x3c170024
    ctx->pc = 0x127740u;
    SET_GPR_U32(ctx, 23, ((uint32_t)36 << 16));
    // 0x127744: 0x95a30000
    ctx->pc = 0x127744u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_127748:
    // 0x127748: 0x91a40001
    ctx->pc = 0x127748u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
    // 0x12774c: 0x31a00
    ctx->pc = 0x12774cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x127750: 0x7e1824
    ctx->pc = 0x127750u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x127754: 0x832025
    ctx->pc = 0x127754u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x127758: 0x42400
    ctx->pc = 0x127758u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x12775c: 0x42403
    ctx->pc = 0x12775cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x127760: 0x30838000
    ctx->pc = 0x127760u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 32768));
    // 0x127764: 0x14600048
    ctx->pc = 0x127764u;
    {
        const bool branch_taken_0x127764 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x127768u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x127764) {
            ctx->pc = 0x127888u;
            goto label_127888;
        }
    }
    ctx->pc = 0x12776Cu;
    // 0x12776c: 0x96420000
    ctx->pc = 0x12776cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x127770: 0x25ad0002
    ctx->pc = 0x127770u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 2));
    // 0x127774: 0x34098000
    ctx->pc = 0x127774u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 0), 32768));
    // 0x127778: 0x3408ffff
    ctx->pc = 0x127778u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 0), 65535));
    // 0x12777c: 0x563818
    ctx->pc = 0x12777cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)(uint32_t)result); }
    // 0x127780: 0x821026
    ctx->pc = 0x127780u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x127784: 0x30421fff
    ctx->pc = 0x127784u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8191));
    // 0x127788: 0x24197fff
    ctx->pc = 0x127788u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 32767));
    // 0x12778c: 0x244f0001
    ctx->pc = 0x12778cu;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 2), 1));
    // 0x127790: 0x26eb9be8
    ctx->pc = 0x127790u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 23), 4294941672));
    // 0x127794: 0xf51821
    ctx->pc = 0x127794u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
    // 0x127798: 0x2407001e
    ctx->pc = 0x127798u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 30));
    // 0x12779c: 0x30637fff
    ctx->pc = 0x12779cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 32767));
    // 0x1277a0: 0xa6430000
    ctx->pc = 0x1277a0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1277a4: 0x0
    ctx->pc = 0x1277a4u;
    // NOP
label_1277a8:
    // 0x1277a8: 0x91a30000
    ctx->pc = 0x1277a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1277ac: 0x25ad0001
    ctx->pc = 0x1277acu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 1));
    // 0x1277b0: 0x20e1018
    ctx->pc = 0x1277b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1277b4: 0xa0702d
    ctx->pc = 0x1277b4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1277b8: 0x72252018
    ctx->pc = 0x1277b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x1277bc: 0x31e00
    ctx->pc = 0x1277bcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x1277c0: 0x32f03
    ctx->pc = 0x1277c0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 28));
    // 0x1277c4: 0x31e03
    ctx->pc = 0x1277c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x1277c8: 0xaf2818
    ctx->pc = 0x1277c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x1277cc: 0x20ec018
    ctx->pc = 0x1277ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)(uint32_t)result); }
    // 0x1277d0: 0x822021
    ctx->pc = 0x1277d0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1277d4: 0x3062000f
    ctx->pc = 0x1277d4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 15));
    // 0x1277d8: 0x42303
    ctx->pc = 0x1277d8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x1277dc: 0x21080
    ctx->pc = 0x1277dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1277e0: 0x852021
    ctx->pc = 0x1277e0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1277e4: 0x4b6021
    ctx->pc = 0x1277e4u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1277e8: 0x891021
    ctx->pc = 0x1277e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1277ec: 0x28838000
    ctx->pc = 0x1277ecu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 4294934528));
    // 0x1277f0: 0x102102b
    ctx->pc = 0x1277f0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1277f4: 0x324282a
    ctx->pc = 0x1277f4u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 25), GPR_S32(ctx, 4)));
    // 0x1277f8: 0x10400004
    ctx->pc = 0x1277F8u;
    {
        const bool branch_taken_0x1277f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1277FCu;
        SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 0));
        if (branch_taken_0x1277f8) {
            ctx->pc = 0x12780Cu;
            goto label_12780c;
        }
    }
    ctx->pc = 0x127800u;
    // 0x127800: 0x325200b
    ctx->pc = 0x127800u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 25));
    // 0x127804: 0x24028000
    ctx->pc = 0x127804u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x127808: 0x43200b
    ctx->pc = 0x127808u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
label_12780c:
    // 0x12780c: 0x80282d
    ctx->pc = 0x12780cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127810: 0x8d830000
    ctx->pc = 0x127810u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x127814: 0x2251018
    ctx->pc = 0x127814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x127818: 0xa4c50000
    ctx->pc = 0x127818u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x12781c: 0x6f2018
    ctx->pc = 0x12781cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x127820: 0xa0702d
    ctx->pc = 0x127820u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127824: 0x24c60002
    ctx->pc = 0x127824u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
    // 0x127828: 0x581021
    ctx->pc = 0x127828u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x12782c: 0x21303
    ctx->pc = 0x12782cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x127830: 0x442021
    ctx->pc = 0x127830u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x127834: 0x891821
    ctx->pc = 0x127834u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x127838: 0x28828000
    ctx->pc = 0x127838u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4294934528));
    // 0x12783c: 0x103182b
    ctx->pc = 0x12783cu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x127840: 0x324282a
    ctx->pc = 0x127840u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 25), GPR_S32(ctx, 4)));
    // 0x127844: 0x10600004
    ctx->pc = 0x127844u;
    {
        const bool branch_taken_0x127844 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x127848u;
        SET_GPR_U32(ctx, 12, XOR32(GPR_U32(ctx, 2), 0));
        if (branch_taken_0x127844) {
            ctx->pc = 0x127858u;
            goto label_127858;
        }
    }
    ctx->pc = 0x12784Cu;
    // 0x12784c: 0x325200b
    ctx->pc = 0x12784cu;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 25));
    // 0x127850: 0x24028000
    ctx->pc = 0x127850u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x127854: 0x4c200b
    ctx->pc = 0x127854u;
    if (GPR_U32(ctx, 12) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
label_127858:
    // 0x127858: 0x80282d
    ctx->pc = 0x127858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12785c: 0x24e7fffe
    ctx->pc = 0x12785cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x127860: 0xa4c50000
    ctx->pc = 0x127860u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x127864: 0x4e1ffd0
    ctx->pc = 0x127864u;
    {
        const bool branch_taken_0x127864 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x127868u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x127864) {
            ctx->pc = 0x1277A8u;
            goto label_1277a8;
        }
    }
    ctx->pc = 0x12786Cu;
    // 0x12786c: 0x254a0001
    ctx->pc = 0x12786cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x127870: 0x153102a
    ctx->pc = 0x127870u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), GPR_S32(ctx, 19)));
    // 0x127874: 0x5440ffb4
    ctx->pc = 0x127874u;
    {
        const bool branch_taken_0x127874 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x127874) {
            ctx->pc = 0x127878u;
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->pc = 0x127748u;
            goto label_127748;
        }
    }
    ctx->pc = 0x12787Cu;
label_12787c:
    // 0x12787c: 0xa68e0002
    ctx->pc = 0x12787cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 14));
    // 0x127880: 0x260102d
    ctx->pc = 0x127880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127884: 0xa6850000
    ctx->pc = 0x127884u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 5));
label_127888:
    // 0x127888: 0xdfb00000
    ctx->pc = 0x127888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12788c: 0xdfb10008
    ctx->pc = 0x12788cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127890: 0xdfb20010
    ctx->pc = 0x127890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127894: 0xdfb30018
    ctx->pc = 0x127894u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x127898: 0xdfb40020
    ctx->pc = 0x127898u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12789c: 0xdfb50028
    ctx->pc = 0x12789cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1278a0: 0xdfb60030
    ctx->pc = 0x1278a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1278a4: 0xdfb70038
    ctx->pc = 0x1278a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1278a8: 0xdfbe0040
    ctx->pc = 0x1278a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1278ac: 0x3e00008
    ctx->pc = 0x1278ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1278B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127748u: goto label_127748;
            case 0x1277A8u: goto label_1277a8;
            case 0x12780Cu: goto label_12780c;
            case 0x127858u: goto label_127858;
            case 0x12787Cu: goto label_12787c;
            case 0x127888u: goto label_127888;
            case 0x127948u: goto label_127948;
            case 0x127A18u: goto label_127a18;
            case 0x127A78u: goto label_127a78;
            case 0x127AC0u: goto label_127ac0;
            case 0x127AD0u: goto label_127ad0;
            case 0x127B10u: goto label_127b10;
            case 0x127B78u: goto label_127b78;
            case 0x127BC0u: goto label_127bc0;
            case 0x127BD0u: goto label_127bd0;
            case 0x127C0Cu: goto label_127c0c;
            case 0x127C34u: goto label_127c34;
            case 0x127C50u: goto label_127c50;
            case 0x127D08u: goto label_127d08;
            case 0x127DD8u: goto label_127dd8;
            case 0x127E5Cu: goto label_127e5c;
            case 0x127EB0u: goto label_127eb0;
            case 0x127F1Cu: goto label_127f1c;
            case 0x127F48u: goto label_127f48;
            case 0x127F80u: goto label_127f80;
            case 0x127F9Cu: goto label_127f9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1278B4u;
    // 0x1278b4: 0x0
    ctx->pc = 0x1278b4u;
    // NOP
    // 0x1278b8: 0x517c2
    ctx->pc = 0x1278b8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 31));
    // 0x1278bc: 0x27bdff90
    ctx->pc = 0x1278bcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1278c0: 0xa21021
    ctx->pc = 0x1278c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1278c4: 0xafa90008
    ctx->pc = 0x1278c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x1278c8: 0x21043
    ctx->pc = 0x1278c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1278cc: 0x87a30078
    ctx->pc = 0x1278ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1278d0: 0xafa20014
    ctx->pc = 0x1278d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1278d4: 0xc0482d
    ctx->pc = 0x1278d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1278d8: 0x87a20080
    ctx->pc = 0x1278d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1278dc: 0xa5400
    ctx->pc = 0x1278dcu;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 16));
    // 0x1278e0: 0xffb20030
    ctx->pc = 0x1278e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1278e4: 0xb5c00
    ctx->pc = 0x1278e4u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 16));
    // 0x1278e8: 0xffb30038
    ctx->pc = 0x1278e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1278ec: 0xa9c03
    ctx->pc = 0x1278ecu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 10), 16));
    // 0x1278f0: 0xffb70058
    ctx->pc = 0x1278f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1278f4: 0xb82d
    ctx->pc = 0x1278f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1278f8: 0xafa50000
    ctx->pc = 0x1278f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1278fc: 0xb9403
    ctx->pc = 0x1278fcu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 11), 16));
    // 0x127900: 0xffb00020
    ctx->pc = 0x127900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x127904: 0x80782d
    ctx->pc = 0x127904u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127908: 0xffb10028
    ctx->pc = 0x127908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x12790c: 0xffb40040
    ctx->pc = 0x12790cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x127910: 0xffb50048
    ctx->pc = 0x127910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x127914: 0xffb60050
    ctx->pc = 0x127914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x127918: 0xffbe0060
    ctx->pc = 0x127918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x12791c: 0xafa70004
    ctx->pc = 0x12791cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x127920: 0xafa20010
    ctx->pc = 0x127920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x127924: 0xafa3000c
    ctx->pc = 0x127924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x127928: 0x8fa50008
    ctx->pc = 0x127928u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12792c: 0x8fa60014
    ctx->pc = 0x12792cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x127930: 0x84f80000
    ctx->pc = 0x127930u;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x127934: 0x84ec0002
    ctx->pc = 0x127934u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x127938: 0x84b90000
    ctx->pc = 0x127938u;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12793c: 0x18c000bd
    ctx->pc = 0x12793Cu;
    {
        const bool branch_taken_0x12793c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x127940u;
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        if (branch_taken_0x12793c) {
            ctx->pc = 0x127C34u;
            goto label_127c34;
        }
    }
    ctx->pc = 0x127944u;
    // 0x127944: 0x0
    ctx->pc = 0x127944u;
    // NOP
label_127948:
    // 0x127948: 0x95e30000
    ctx->pc = 0x127948u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12794c: 0x2405ff00
    ctx->pc = 0x12794cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x127950: 0x91e40001
    ctx->pc = 0x127950u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1)));
    // 0x127954: 0x31a00
    ctx->pc = 0x127954u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x127958: 0x651824
    ctx->pc = 0x127958u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12795c: 0x832025
    ctx->pc = 0x12795cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x127960: 0x42400
    ctx->pc = 0x127960u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x127964: 0x42c03
    ctx->pc = 0x127964u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x127968: 0x30a38000
    ctx->pc = 0x127968u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 32768));
    // 0x12796c: 0x146000b8
    ctx->pc = 0x12796Cu;
    {
        const bool branch_taken_0x12796c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x127970u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 23), 1));
        if (branch_taken_0x12796c) {
            ctx->pc = 0x127C50u;
            goto label_127c50;
        }
    }
    ctx->pc = 0x127974u;
    // 0x127974: 0x8fa60070
    ctx->pc = 0x127974u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x127978: 0x94c30000
    ctx->pc = 0x127978u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12797c: 0x8fa60010
    ctx->pc = 0x12797cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127980: 0xc00013
    ctx->pc = 0x127980u;
    ctx->lo = GPR_U32(ctx, 6);
    // 0x127984: 0x8fa6000c
    ctx->pc = 0x127984u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x127988: 0x70662000
    ctx->pc = 0x127988u;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x12798c: 0xa31826
    ctx->pc = 0x12798cu;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x127990: 0x30631fff
    ctx->pc = 0x127990u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 8191));
    // 0x127994: 0x2405ff00
    ctx->pc = 0x127994u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x127998: 0x24750001
    ctx->pc = 0x127998u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 1));
    // 0x12799c: 0x8fa30070
    ctx->pc = 0x12799cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1279a0: 0x30867fff
    ctx->pc = 0x1279a0u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 4), 32767));
    // 0x1279a4: 0xa4660000
    ctx->pc = 0x1279a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x1279a8: 0x95e30012
    ctx->pc = 0x1279a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x1279ac: 0x91e40013
    ctx->pc = 0x1279acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 19)));
    // 0x1279b0: 0x31a00
    ctx->pc = 0x1279b0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1279b4: 0x651824
    ctx->pc = 0x1279b4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1279b8: 0x832025
    ctx->pc = 0x1279b8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1279bc: 0x42400
    ctx->pc = 0x1279bcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x1279c0: 0x42c03
    ctx->pc = 0x1279c0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1279c4: 0x30a38000
    ctx->pc = 0x1279c4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 32768));
    // 0x1279c8: 0x146000a1
    ctx->pc = 0x1279C8u;
    {
        const bool branch_taken_0x1279c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1279CCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1279c8) {
            ctx->pc = 0x127C50u;
            goto label_127c50;
        }
    }
    ctx->pc = 0x1279D0u;
    // 0x1279d0: 0x3c040024
    ctx->pc = 0x1279d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1279d4: 0x249e9be8
    ctx->pc = 0x1279d4u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 4), 4294941672));
    // 0x1279d8: 0x25ef0002
    ctx->pc = 0x1279d8u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 15), 2));
    // 0x1279dc: 0x600013
    ctx->pc = 0x1279dcu;
    ctx->lo = GPR_U32(ctx, 3);
    // 0x1279e0: 0x8fa3000c
    ctx->pc = 0x1279e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1279e4: 0x34108000
    ctx->pc = 0x1279e4u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 0), 32768));
    // 0x1279e8: 0x340bffff
    ctx->pc = 0x1279e8u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1279ec: 0x70661000
    ctx->pc = 0x1279ecu;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x1279f0: 0xa61826
    ctx->pc = 0x1279f0u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1279f4: 0x8fa50070
    ctx->pc = 0x1279f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1279f8: 0x30631fff
    ctx->pc = 0x1279f8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 8191));
    // 0x1279fc: 0x24740001
    ctx->pc = 0x1279fcu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 3), 1));
    // 0x127a00: 0x240d7fff
    ctx->pc = 0x127a00u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 32767));
    // 0x127a04: 0x240a000a
    ctx->pc = 0x127a04u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 10));
    // 0x127a08: 0x2416001e
    ctx->pc = 0x127a08u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 30));
    // 0x127a0c: 0x30427fff
    ctx->pc = 0x127a0cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32767));
    // 0x127a10: 0xa4a20000
    ctx->pc = 0x127a10u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x127a14: 0x0
    ctx->pc = 0x127a14u;
    // NOP
label_127a18:
    // 0x127a18: 0x91e20000
    ctx->pc = 0x127a18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x127a1c: 0x24c3018
    ctx->pc = 0x127a1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)(uint32_t)result); }
    // 0x127a20: 0x72781818
    ctx->pc = 0x127a20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 24); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x127a24: 0x91e40012
    ctx->pc = 0x127a24u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x127a28: 0x21600
    ctx->pc = 0x127a28u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x127a2c: 0x25ef0001
    ctx->pc = 0x127a2cu;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 15), 1));
    // 0x127a30: 0x22f03
    ctx->pc = 0x127a30u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 28));
    // 0x127a34: 0x27603
    ctx->pc = 0x127a34u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 2), 24));
    // 0x127a38: 0xb52818
    ctx->pc = 0x127a38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x127a3c: 0x42600
    ctx->pc = 0x127a3cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 24));
    // 0x127a40: 0x661821
    ctx->pc = 0x127a40u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x127a44: 0x46703
    ctx->pc = 0x127a44u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 4), 28));
    // 0x127a48: 0x31b03
    ctx->pc = 0x127a48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x127a4c: 0x653021
    ctx->pc = 0x127a4cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x127a50: 0xd01021
    ctx->pc = 0x127a50u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x127a54: 0x162102b
    ctx->pc = 0x127a54u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x127a58: 0x10400007
    ctx->pc = 0x127A58u;
    {
        const bool branch_taken_0x127a58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x127A5Cu;
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 4), 24));
        if (branch_taken_0x127a58) {
            ctx->pc = 0x127A78u;
            goto label_127a78;
        }
    }
    ctx->pc = 0x127A60u;
    // 0x127a60: 0x28c28000
    ctx->pc = 0x127a60u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4294934528));
    // 0x127a64: 0x1a6182a
    ctx->pc = 0x127a64u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 13), GPR_S32(ctx, 6)));
    // 0x127a68: 0x1a3300b
    ctx->pc = 0x127a68u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 13));
    // 0x127a6c: 0x24038000
    ctx->pc = 0x127a6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x127a70: 0x38420000
    ctx->pc = 0x127a70u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 0));
    // 0x127a74: 0x62300b
    ctx->pc = 0x127a74u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
label_127a78:
    // 0x127a78: 0x2511018
    ctx->pc = 0x127a78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x127a7c: 0x72791818
    ctx->pc = 0x127a7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 25); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x127a80: 0x1942018
    ctx->pc = 0x127a80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x127a84: 0x300602d
    ctx->pc = 0x127a84u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a88: 0xc0c02d
    ctx->pc = 0x127a88u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a8c: 0x621821
    ctx->pc = 0x127a8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x127a90: 0x31b03
    ctx->pc = 0x127a90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x127a94: 0x643021
    ctx->pc = 0x127a94u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x127a98: 0xd01021
    ctx->pc = 0x127a98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x127a9c: 0x162102b
    ctx->pc = 0x127a9cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x127aa0: 0x10400007
    ctx->pc = 0x127AA0u;
    {
        const bool branch_taken_0x127aa0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x127AA4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x127aa0) {
            ctx->pc = 0x127AC0u;
            goto label_127ac0;
        }
    }
    ctx->pc = 0x127AA8u;
    // 0x127aa8: 0x28c28000
    ctx->pc = 0x127aa8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4294934528));
    // 0x127aac: 0x1a6182a
    ctx->pc = 0x127aacu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 13), GPR_S32(ctx, 6)));
    // 0x127ab0: 0x1a3300b
    ctx->pc = 0x127ab0u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 13));
    // 0x127ab4: 0x24038000
    ctx->pc = 0x127ab4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x127ab8: 0x38420000
    ctx->pc = 0x127ab8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 0));
    // 0x127abc: 0x62300b
    ctx->pc = 0x127abcu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
label_127ac0:
    // 0x127ac0: 0xc0c82d
    ctx->pc = 0x127ac0u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ac4: 0x3191821
    ctx->pc = 0x127ac4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x127ac8: 0x51400001
    ctx->pc = 0x127AC8u;
    {
        const bool branch_taken_0x127ac8 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        if (branch_taken_0x127ac8) {
            ctx->pc = 0x127ACCu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x127AD0u;
            goto label_127ad0;
        }
    }
    ctx->pc = 0x127AD0u;
label_127ad0:
    // 0x127ad0: 0x310c0
    ctx->pc = 0x127ad0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x127ad4: 0x431023
    ctx->pc = 0x127ad4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127ad8: 0x4a001a
    ctx->pc = 0x127ad8u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x127adc: 0x1012
    ctx->pc = 0x127adcu;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x127ae0: 0x40302d
    ctx->pc = 0x127ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ae4: 0xd01821
    ctx->pc = 0x127ae4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x127ae8: 0x163182b
    ctx->pc = 0x127ae8u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x127aec: 0x10600008
    ctx->pc = 0x127AECu;
    {
        const bool branch_taken_0x127aec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x127AF0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 14), 15));
        if (branch_taken_0x127aec) {
            ctx->pc = 0x127B10u;
            goto label_127b10;
        }
    }
    ctx->pc = 0x127AF4u;
    // 0x127af4: 0x28c28000
    ctx->pc = 0x127af4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4294934528));
    // 0x127af8: 0x1a6182a
    ctx->pc = 0x127af8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 13), GPR_S32(ctx, 6)));
    // 0x127afc: 0x1a3300b
    ctx->pc = 0x127afcu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 13));
    // 0x127b00: 0x24038000
    ctx->pc = 0x127b00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x127b04: 0x38420000
    ctx->pc = 0x127b04u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 0));
    // 0x127b08: 0x62300b
    ctx->pc = 0x127b08u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
    // 0x127b0c: 0x31c2000f
    ctx->pc = 0x127b0cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 14), 15));
label_127b10:
    // 0x127b10: 0x24c2818
    ctx->pc = 0x127b10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x127b14: 0x72782018
    ctx->pc = 0x127b14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 24); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x127b18: 0x21080
    ctx->pc = 0x127b18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x127b1c: 0x5e1021
    ctx->pc = 0x127b1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x127b20: 0xa5060000
    ctx->pc = 0x127b20u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x127b24: 0x8c4e0000
    ctx->pc = 0x127b24u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x127b28: 0x30e3000f
    ctx->pc = 0x127b28u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 7), 15));
    // 0x127b2c: 0xa5260000
    ctx->pc = 0x127b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x127b30: 0x25290002
    ctx->pc = 0x127b30u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 2));
    // 0x127b34: 0x852021
    ctx->pc = 0x127b34u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x127b38: 0x1d52818
    ctx->pc = 0x127b38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x127b3c: 0x42303
    ctx->pc = 0x127b3cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x127b40: 0x31880
    ctx->pc = 0x127b40u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x127b44: 0x7e1821
    ctx->pc = 0x127b44u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x127b48: 0x25080002
    ctx->pc = 0x127b48u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 2));
    // 0x127b4c: 0x853021
    ctx->pc = 0x127b4cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x127b50: 0xd01021
    ctx->pc = 0x127b50u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x127b54: 0x162102b
    ctx->pc = 0x127b54u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x127b58: 0x10400007
    ctx->pc = 0x127B58u;
    {
        const bool branch_taken_0x127b58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x127B5Cu;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x127b58) {
            ctx->pc = 0x127B78u;
            goto label_127b78;
        }
    }
    ctx->pc = 0x127B60u;
    // 0x127b60: 0x28c28000
    ctx->pc = 0x127b60u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4294934528));
    // 0x127b64: 0x1a6182a
    ctx->pc = 0x127b64u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 13), GPR_S32(ctx, 6)));
    // 0x127b68: 0x1a3300b
    ctx->pc = 0x127b68u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 13));
    // 0x127b6c: 0x24038000
    ctx->pc = 0x127b6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x127b70: 0x38420000
    ctx->pc = 0x127b70u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 0));
    // 0x127b74: 0x62300b
    ctx->pc = 0x127b74u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
label_127b78:
    // 0x127b78: 0x2511018
    ctx->pc = 0x127b78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x127b7c: 0x72791818
    ctx->pc = 0x127b7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 25); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x127b80: 0xf42018
    ctx->pc = 0x127b80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x127b84: 0x300602d
    ctx->pc = 0x127b84u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b88: 0xc0c02d
    ctx->pc = 0x127b88u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b8c: 0x621821
    ctx->pc = 0x127b8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x127b90: 0x31b03
    ctx->pc = 0x127b90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x127b94: 0x643021
    ctx->pc = 0x127b94u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x127b98: 0xd01021
    ctx->pc = 0x127b98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x127b9c: 0x162102b
    ctx->pc = 0x127b9cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x127ba0: 0x10400007
    ctx->pc = 0x127BA0u;
    {
        const bool branch_taken_0x127ba0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x127BA4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x127ba0) {
            ctx->pc = 0x127BC0u;
            goto label_127bc0;
        }
    }
    ctx->pc = 0x127BA8u;
    // 0x127ba8: 0x28c28000
    ctx->pc = 0x127ba8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4294934528));
    // 0x127bac: 0x1a6182a
    ctx->pc = 0x127bacu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 13), GPR_S32(ctx, 6)));
    // 0x127bb0: 0x1a3300b
    ctx->pc = 0x127bb0u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 13));
    // 0x127bb4: 0x24038000
    ctx->pc = 0x127bb4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x127bb8: 0x38420000
    ctx->pc = 0x127bb8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 0));
    // 0x127bbc: 0x62300b
    ctx->pc = 0x127bbcu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
label_127bc0:
    // 0x127bc0: 0xc0c82d
    ctx->pc = 0x127bc0u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127bc4: 0x3191821
    ctx->pc = 0x127bc4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x127bc8: 0x51400001
    ctx->pc = 0x127BC8u;
    {
        const bool branch_taken_0x127bc8 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        if (branch_taken_0x127bc8) {
            ctx->pc = 0x127BCCu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x127BD0u;
            goto label_127bd0;
        }
    }
    ctx->pc = 0x127BD0u;
label_127bd0:
    // 0x127bd0: 0x310c0
    ctx->pc = 0x127bd0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x127bd4: 0x431023
    ctx->pc = 0x127bd4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127bd8: 0x4a001a
    ctx->pc = 0x127bd8u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x127bdc: 0x1012
    ctx->pc = 0x127bdcu;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x127be0: 0x40302d
    ctx->pc = 0x127be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127be4: 0xd01821
    ctx->pc = 0x127be4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x127be8: 0x163182b
    ctx->pc = 0x127be8u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x127bec: 0x10600007
    ctx->pc = 0x127BECu;
    {
        const bool branch_taken_0x127bec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x127BF0u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 4294967294));
        if (branch_taken_0x127bec) {
            ctx->pc = 0x127C0Cu;
            goto label_127c0c;
        }
    }
    ctx->pc = 0x127BF4u;
    // 0x127bf4: 0x28c28000
    ctx->pc = 0x127bf4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4294934528));
    // 0x127bf8: 0x1a6182a
    ctx->pc = 0x127bf8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 13), GPR_S32(ctx, 6)));
    // 0x127bfc: 0x1a3300b
    ctx->pc = 0x127bfcu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 13));
    // 0x127c00: 0x24038000
    ctx->pc = 0x127c00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x127c04: 0x38420000
    ctx->pc = 0x127c04u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 0));
    // 0x127c08: 0x62300b
    ctx->pc = 0x127c08u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
label_127c0c:
    // 0x127c0c: 0xa5060000
    ctx->pc = 0x127c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x127c10: 0xa5260000
    ctx->pc = 0x127c10u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x127c14: 0x25290002
    ctx->pc = 0x127c14u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 2));
    // 0x127c18: 0x6c1ff7f
    ctx->pc = 0x127C18u;
    {
        const bool branch_taken_0x127c18 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x127C1Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 2));
        if (branch_taken_0x127c18) {
            ctx->pc = 0x127A18u;
            goto label_127a18;
        }
    }
    ctx->pc = 0x127C20u;
    // 0x127c20: 0x8fa30014
    ctx->pc = 0x127c20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x127c24: 0x26f70001
    ctx->pc = 0x127c24u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
    // 0x127c28: 0x2e3102a
    ctx->pc = 0x127c28u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 23), GPR_S32(ctx, 3)));
    // 0x127c2c: 0x1440ff46
    ctx->pc = 0x127C2Cu;
    {
        const bool branch_taken_0x127c2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x127C30u;
        SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 15), 18));
        if (branch_taken_0x127c2c) {
            ctx->pc = 0x127948u;
            goto label_127948;
        }
    }
    ctx->pc = 0x127C34u;
label_127c34:
    // 0x127c34: 0x8fa50004
    ctx->pc = 0x127c34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x127c38: 0xa4ac0002
    ctx->pc = 0x127c38u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 12));
    // 0x127c3c: 0x8fa20000
    ctx->pc = 0x127c3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127c40: 0xa4b80000
    ctx->pc = 0x127c40u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 24));
    // 0x127c44: 0x8fa60008
    ctx->pc = 0x127c44u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127c48: 0xa4d10002
    ctx->pc = 0x127c48u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 17));
    // 0x127c4c: 0xa4d90000
    ctx->pc = 0x127c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 25));
label_127c50:
    // 0x127c50: 0xdfb00020
    ctx->pc = 0x127c50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127c54: 0xdfb10028
    ctx->pc = 0x127c54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x127c58: 0xdfb20030
    ctx->pc = 0x127c58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127c5c: 0xdfb30038
    ctx->pc = 0x127c5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x127c60: 0xdfb40040
    ctx->pc = 0x127c60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x127c64: 0xdfb50048
    ctx->pc = 0x127c64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127c68: 0xdfb60050
    ctx->pc = 0x127c68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x127c6c: 0xdfb70058
    ctx->pc = 0x127c6cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x127c70: 0xdfbe0060
    ctx->pc = 0x127c70u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x127c74: 0x3e00008
    ctx->pc = 0x127C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127C78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127748u: goto label_127748;
            case 0x1277A8u: goto label_1277a8;
            case 0x12780Cu: goto label_12780c;
            case 0x127858u: goto label_127858;
            case 0x12787Cu: goto label_12787c;
            case 0x127888u: goto label_127888;
            case 0x127948u: goto label_127948;
            case 0x127A18u: goto label_127a18;
            case 0x127A78u: goto label_127a78;
            case 0x127AC0u: goto label_127ac0;
            case 0x127AD0u: goto label_127ad0;
            case 0x127B10u: goto label_127b10;
            case 0x127B78u: goto label_127b78;
            case 0x127BC0u: goto label_127bc0;
            case 0x127BD0u: goto label_127bd0;
            case 0x127C0Cu: goto label_127c0c;
            case 0x127C34u: goto label_127c34;
            case 0x127C50u: goto label_127c50;
            case 0x127D08u: goto label_127d08;
            case 0x127DD8u: goto label_127dd8;
            case 0x127E5Cu: goto label_127e5c;
            case 0x127EB0u: goto label_127eb0;
            case 0x127F1Cu: goto label_127f1c;
            case 0x127F48u: goto label_127f48;
            case 0x127F80u: goto label_127f80;
            case 0x127F9Cu: goto label_127f9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x127C7Cu;
    // 0x127c7c: 0x0
    ctx->pc = 0x127c7cu;
    // NOP
    // 0x127c80: 0x517c2
    ctx->pc = 0x127c80u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 31));
    // 0x127c84: 0x27bdff90
    ctx->pc = 0x127c84u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x127c88: 0xa21021
    ctx->pc = 0x127c88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x127c8c: 0x87a30078
    ctx->pc = 0x127c8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x127c90: 0x21043
    ctx->pc = 0x127c90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x127c94: 0xffb20030
    ctx->pc = 0x127c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x127c98: 0xafa20018
    ctx->pc = 0x127c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x127c9c: 0x80782d
    ctx->pc = 0x127c9cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ca0: 0x87a20080
    ctx->pc = 0x127ca0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x127ca4: 0xa5400
    ctx->pc = 0x127ca4u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 16));
    // 0x127ca8: 0xffb30038
    ctx->pc = 0x127ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x127cac: 0xa9c03
    ctx->pc = 0x127cacu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 10), 16));
    // 0x127cb0: 0xffb00020
    ctx->pc = 0x127cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x127cb4: 0xb5c00
    ctx->pc = 0x127cb4u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 16));
    // 0x127cb8: 0xffb10028
    ctx->pc = 0x127cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x127cbc: 0xc0c82d
    ctx->pc = 0x127cbcu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127cc0: 0xffb40040
    ctx->pc = 0x127cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x127cc4: 0xb9403
    ctx->pc = 0x127cc4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 11), 16));
    // 0x127cc8: 0xffb50048
    ctx->pc = 0x127cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x127ccc: 0xffb60050
    ctx->pc = 0x127cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x127cd0: 0xffb70058
    ctx->pc = 0x127cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x127cd4: 0xffbe0060
    ctx->pc = 0x127cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x127cd8: 0xafa50000
    ctx->pc = 0x127cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x127cdc: 0xafa70004
    ctx->pc = 0x127cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x127ce0: 0xafa90008
    ctx->pc = 0x127ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x127ce4: 0xafa20010
    ctx->pc = 0x127ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x127ce8: 0xafa00014
    ctx->pc = 0x127ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x127cec: 0xafa3000c
    ctx->pc = 0x127cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x127cf0: 0x8fa40018
    ctx->pc = 0x127cf0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x127cf4: 0x84ed0000
    ctx->pc = 0x127cf4u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x127cf8: 0x84ea0002
    ctx->pc = 0x127cf8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x127cfc: 0x852e0000
    ctx->pc = 0x127cfcu;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x127d00: 0x1880009f
    ctx->pc = 0x127D00u;
    {
        const bool branch_taken_0x127d00 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x127D04u;
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
        if (branch_taken_0x127d00) {
            ctx->pc = 0x127F80u;
            goto label_127f80;
        }
    }
    ctx->pc = 0x127D08u;
label_127d08:
    // 0x127d08: 0x95e30000
    ctx->pc = 0x127d08u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x127d0c: 0x2406ff00
    ctx->pc = 0x127d0cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x127d10: 0x91e40001
    ctx->pc = 0x127d10u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1)));
    // 0x127d14: 0x31a00
    ctx->pc = 0x127d14u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x127d18: 0x8fa50014
    ctx->pc = 0x127d18u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x127d1c: 0x661824
    ctx->pc = 0x127d1cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x127d20: 0x832025
    ctx->pc = 0x127d20u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x127d24: 0x51040
    ctx->pc = 0x127d24u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x127d28: 0x42400
    ctx->pc = 0x127d28u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x127d2c: 0x42c03
    ctx->pc = 0x127d2cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x127d30: 0x30a38000
    ctx->pc = 0x127d30u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 32768));
    // 0x127d34: 0x14600099
    ctx->pc = 0x127D34u;
    {
        const bool branch_taken_0x127d34 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x127D38u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 20)));
        if (branch_taken_0x127d34) {
            ctx->pc = 0x127F9Cu;
            goto label_127f9c;
        }
    }
    ctx->pc = 0x127D3Cu;
    // 0x127d3c: 0x8fa20070
    ctx->pc = 0x127d3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x127d40: 0x8fa60010
    ctx->pc = 0x127d40u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127d44: 0x94430000
    ctx->pc = 0x127d44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x127d48: 0xc00013
    ctx->pc = 0x127d48u;
    ctx->lo = GPR_U32(ctx, 6);
    // 0x127d4c: 0x8fa6000c
    ctx->pc = 0x127d4cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x127d50: 0x41040
    ctx->pc = 0x127d50u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x127d54: 0x70662000
    ctx->pc = 0x127d54u;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x127d58: 0xa31826
    ctx->pc = 0x127d58u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x127d5c: 0x30631fff
    ctx->pc = 0x127d5cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 8191));
    // 0x127d60: 0x2405ff00
    ctx->pc = 0x127d60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x127d64: 0x24770001
    ctx->pc = 0x127d64u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 3), 1));
    // 0x127d68: 0x8fa30070
    ctx->pc = 0x127d68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x127d6c: 0x30867fff
    ctx->pc = 0x127d6cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 4), 32767));
    // 0x127d70: 0xa4660000
    ctx->pc = 0x127d70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x127d74: 0x95e30012
    ctx->pc = 0x127d74u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x127d78: 0x91e40013
    ctx->pc = 0x127d78u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 19)));
    // 0x127d7c: 0x31a00
    ctx->pc = 0x127d7cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x127d80: 0x651824
    ctx->pc = 0x127d80u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x127d84: 0x832025
    ctx->pc = 0x127d84u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x127d88: 0x42400
    ctx->pc = 0x127d88u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x127d8c: 0x42c03
    ctx->pc = 0x127d8cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x127d90: 0x30a38000
    ctx->pc = 0x127d90u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 32768));
    // 0x127d94: 0x14600081
    ctx->pc = 0x127D94u;
    {
        const bool branch_taken_0x127d94 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x127D98u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x127d94) {
            ctx->pc = 0x127F9Cu;
            goto label_127f9c;
        }
    }
    ctx->pc = 0x127D9Cu;
    // 0x127d9c: 0x25ef0002
    ctx->pc = 0x127d9cu;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 15), 2));
    // 0x127da0: 0x8fa40070
    ctx->pc = 0x127da0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x127da4: 0x34168000
    ctx->pc = 0x127da4u;
    SET_GPR_U32(ctx, 22, OR32(GPR_U32(ctx, 0), 32768));
    // 0x127da8: 0x600013
    ctx->pc = 0x127da8u;
    ctx->lo = GPR_U32(ctx, 3);
    // 0x127dac: 0x8fa3000c
    ctx->pc = 0x127dacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x127db0: 0x3415ffff
    ctx->pc = 0x127db0u;
    SET_GPR_U32(ctx, 21, OR32(GPR_U32(ctx, 0), 65535));
    // 0x127db4: 0x24187fff
    ctx->pc = 0x127db4u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 32767));
    // 0x127db8: 0x70661000
    ctx->pc = 0x127db8u;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x127dbc: 0xa61826
    ctx->pc = 0x127dbcu;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x127dc0: 0x30631fff
    ctx->pc = 0x127dc0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 8191));
    // 0x127dc4: 0x241e001e
    ctx->pc = 0x127dc4u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 30));
    // 0x127dc8: 0x24740001
    ctx->pc = 0x127dc8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 3), 1));
    // 0x127dcc: 0x30427fff
    ctx->pc = 0x127dccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32767));
    // 0x127dd0: 0xa4820000
    ctx->pc = 0x127dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x127dd4: 0x0
    ctx->pc = 0x127dd4u;
    // NOP
label_127dd8:
    // 0x127dd8: 0x91e30000
    ctx->pc = 0x127dd8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x127ddc: 0x24a1018
    ctx->pc = 0x127ddcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x127de0: 0x726d2018
    ctx->pc = 0x127de0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 13); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x127de4: 0x91e60012
    ctx->pc = 0x127de4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x127de8: 0x31e00
    ctx->pc = 0x127de8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x127dec: 0x1a0502d
    ctx->pc = 0x127decu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127df0: 0x32f03
    ctx->pc = 0x127df0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 28));
    // 0x127df4: 0x63600
    ctx->pc = 0x127df4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 24));
    // 0x127df8: 0xb72818
    ctx->pc = 0x127df8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x127dfc: 0x36603
    ctx->pc = 0x127dfcu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 24));
    // 0x127e00: 0x822021
    ctx->pc = 0x127e00u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x127e04: 0x3182000f
    ctx->pc = 0x127e04u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 12), 15));
    // 0x127e08: 0x61f03
    ctx->pc = 0x127e08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 28));
    // 0x127e0c: 0x63603
    ctx->pc = 0x127e0cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    // 0x127e10: 0x42303
    ctx->pc = 0x127e10u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x127e14: 0x746018
    ctx->pc = 0x127e14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)(uint32_t)result); }
    // 0x127e18: 0x3c030024
    ctx->pc = 0x127e18u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x127e1c: 0x852821
    ctx->pc = 0x127e1cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x127e20: 0x21080
    ctx->pc = 0x127e20u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x127e24: 0x24639be8
    ctx->pc = 0x127e24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294941672));
    // 0x127e28: 0x435821
    ctx->pc = 0x127e28u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127e2c: 0xb61021
    ctx->pc = 0x127e2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x127e30: 0x28a38000
    ctx->pc = 0x127e30u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 4294934528));
    // 0x127e34: 0x2a2102b
    ctx->pc = 0x127e34u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x127e38: 0x24a8818
    ctx->pc = 0x127e38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)(uint32_t)result); }
    // 0x127e3c: 0x25ef0001
    ctx->pc = 0x127e3cu;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 15), 1));
    // 0x127e40: 0x305202a
    ctx->pc = 0x127e40u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 24), GPR_S32(ctx, 5)));
    // 0x127e44: 0x38630000
    ctx->pc = 0x127e44u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 0));
    // 0x127e48: 0x10400004
    ctx->pc = 0x127E48u;
    {
        const bool branch_taken_0x127e48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x127E4Cu;
        SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 6), 15));
        if (branch_taken_0x127e48) {
            ctx->pc = 0x127E5Cu;
            goto label_127e5c;
        }
    }
    ctx->pc = 0x127E50u;
    // 0x127e50: 0x304280b
    ctx->pc = 0x127e50u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 24));
    // 0x127e54: 0x24028000
    ctx->pc = 0x127e54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x127e58: 0x43280b
    ctx->pc = 0x127e58u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
label_127e5c:
    // 0x127e5c: 0x2502018
    ctx->pc = 0x127e5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x127e60: 0x1c0802d
    ctx->pc = 0x127e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127e64: 0x726e1018
    ctx->pc = 0x127e64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 14); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x127e68: 0xa0682d
    ctx->pc = 0x127e68u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127e6c: 0x26d1818
    ctx->pc = 0x127e6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x127e70: 0x2503818
    ctx->pc = 0x127e70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)(uint32_t)result); }
    // 0x127e74: 0x1a0502d
    ctx->pc = 0x127e74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127e78: 0x441021
    ctx->pc = 0x127e78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x127e7c: 0x21303
    ctx->pc = 0x127e7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x127e80: 0x711821
    ctx->pc = 0x127e80u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x127e84: 0x4c2821
    ctx->pc = 0x127e84u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x127e88: 0x33303
    ctx->pc = 0x127e88u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 12));
    // 0x127e8c: 0xb61821
    ctx->pc = 0x127e8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x127e90: 0x28a28000
    ctx->pc = 0x127e90u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4294934528));
    // 0x127e94: 0x2a3182b
    ctx->pc = 0x127e94u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x127e98: 0x305202a
    ctx->pc = 0x127e98u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 24), GPR_S32(ctx, 5)));
    // 0x127e9c: 0x10600004
    ctx->pc = 0x127E9Cu;
    {
        const bool branch_taken_0x127e9c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x127EA0u;
        SET_GPR_U32(ctx, 12, XOR32(GPR_U32(ctx, 2), 0));
        if (branch_taken_0x127e9c) {
            ctx->pc = 0x127EB0u;
            goto label_127eb0;
        }
    }
    ctx->pc = 0x127EA4u;
    // 0x127ea4: 0x304280b
    ctx->pc = 0x127ea4u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 24));
    // 0x127ea8: 0x24028000
    ctx->pc = 0x127ea8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x127eac: 0x4c280b
    ctx->pc = 0x127eacu;
    if (GPR_U32(ctx, 12) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
label_127eb0:
    // 0x127eb0: 0x8d6c0000
    ctx->pc = 0x127eb0u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x127eb4: 0xa0702d
    ctx->pc = 0x127eb4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127eb8: 0x26e1018
    ctx->pc = 0x127eb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x127ebc: 0x3c050024
    ctx->pc = 0x127ebcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x127ec0: 0x1972018
    ctx->pc = 0x127ec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x127ec4: 0x24a59be8
    ctx->pc = 0x127ec4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941672));
    // 0x127ec8: 0x91880
    ctx->pc = 0x127ec8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 9), 2));
    // 0x127ecc: 0xa72d0000
    ctx->pc = 0x127eccu;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x127ed0: 0x651821
    ctx->pc = 0x127ed0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x127ed4: 0x1c0802d
    ctx->pc = 0x127ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ed8: 0x471021
    ctx->pc = 0x127ed8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x127edc: 0xa50e0000
    ctx->pc = 0x127edcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x127ee0: 0xc42821
    ctx->pc = 0x127ee0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x127ee4: 0x8c660000
    ctx->pc = 0x127ee4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127ee8: 0x26303
    ctx->pc = 0x127ee8u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 2), 12));
    // 0x127eec: 0xb61021
    ctx->pc = 0x127eecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x127ef0: 0x28a38000
    ctx->pc = 0x127ef0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 4294934528));
    // 0x127ef4: 0x2a2102b
    ctx->pc = 0x127ef4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x127ef8: 0x27390002
    ctx->pc = 0x127ef8u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 25), 2));
    // 0x127efc: 0x25080002
    ctx->pc = 0x127efcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 2));
    // 0x127f00: 0xd43018
    ctx->pc = 0x127f00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)(uint32_t)result); }
    // 0x127f04: 0x305202a
    ctx->pc = 0x127f04u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 24), GPR_S32(ctx, 5)));
    // 0x127f08: 0x10400004
    ctx->pc = 0x127F08u;
    {
        const bool branch_taken_0x127f08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x127F0Cu;
        SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 0));
        if (branch_taken_0x127f08) {
            ctx->pc = 0x127F1Cu;
            goto label_127f1c;
        }
    }
    ctx->pc = 0x127F10u;
    // 0x127f10: 0x304280b
    ctx->pc = 0x127f10u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 24));
    // 0x127f14: 0x24028000
    ctx->pc = 0x127f14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x127f18: 0x43280b
    ctx->pc = 0x127f18u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
label_127f1c:
    // 0x127f1c: 0xa0682d
    ctx->pc = 0x127f1cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127f20: 0x1862821
    ctx->pc = 0x127f20u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x127f24: 0xb61021
    ctx->pc = 0x127f24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x127f28: 0x28a38000
    ctx->pc = 0x127f28u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 4294934528));
    // 0x127f2c: 0x2a2102b
    ctx->pc = 0x127f2cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x127f30: 0x305202a
    ctx->pc = 0x127f30u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 24), GPR_S32(ctx, 5)));
    // 0x127f34: 0x10400004
    ctx->pc = 0x127F34u;
    {
        const bool branch_taken_0x127f34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x127F38u;
        SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 0));
        if (branch_taken_0x127f34) {
            ctx->pc = 0x127F48u;
            goto label_127f48;
        }
    }
    ctx->pc = 0x127F3Cu;
    // 0x127f3c: 0x304280b
    ctx->pc = 0x127f3cu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 24));
    // 0x127f40: 0x24028000
    ctx->pc = 0x127f40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x127f44: 0x43280b
    ctx->pc = 0x127f44u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
label_127f48:
    // 0x127f48: 0xa0702d
    ctx->pc = 0x127f48u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127f4c: 0x27defffe
    ctx->pc = 0x127f4cu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 4294967294));
    // 0x127f50: 0xa72d0000
    ctx->pc = 0x127f50u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x127f54: 0x27390002
    ctx->pc = 0x127f54u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 25), 2));
    // 0x127f58: 0xa50e0000
    ctx->pc = 0x127f58u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x127f5c: 0x7c1ff9e
    ctx->pc = 0x127F5Cu;
    {
        const bool branch_taken_0x127f5c = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x127F60u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 2));
        if (branch_taken_0x127f5c) {
            ctx->pc = 0x127DD8u;
            goto label_127dd8;
        }
    }
    ctx->pc = 0x127F64u;
    // 0x127f64: 0x8fa60014
    ctx->pc = 0x127f64u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x127f68: 0x25ef0012
    ctx->pc = 0x127f68u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 15), 18));
    // 0x127f6c: 0x8fa30018
    ctx->pc = 0x127f6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x127f70: 0x24c60001
    ctx->pc = 0x127f70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x127f74: 0xc3102a
    ctx->pc = 0x127f74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 3)));
    // 0x127f78: 0x1440ff63
    ctx->pc = 0x127F78u;
    {
        const bool branch_taken_0x127f78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x127F7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
        if (branch_taken_0x127f78) {
            ctx->pc = 0x127D08u;
            goto label_127d08;
        }
    }
    ctx->pc = 0x127F80u;
label_127f80:
    // 0x127f80: 0x8fa40004
    ctx->pc = 0x127f80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x127f84: 0xa48a0002
    ctx->pc = 0x127f84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 10));
    // 0x127f88: 0x8fa20000
    ctx->pc = 0x127f88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127f8c: 0xa48d0000
    ctx->pc = 0x127f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x127f90: 0x8fa50008
    ctx->pc = 0x127f90u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127f94: 0xa4b00002
    ctx->pc = 0x127f94u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 16));
    // 0x127f98: 0xa4ae0000
    ctx->pc = 0x127f98u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 14));
label_127f9c:
    // 0x127f9c: 0xdfb00020
    ctx->pc = 0x127f9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127fa0: 0xdfb10028
    ctx->pc = 0x127fa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x127fa4: 0xdfb20030
    ctx->pc = 0x127fa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127fa8: 0xdfb30038
    ctx->pc = 0x127fa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x127fac: 0xdfb40040
    ctx->pc = 0x127facu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x127fb0: 0xdfb50048
    ctx->pc = 0x127fb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127fb4: 0xdfb60050
    ctx->pc = 0x127fb4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x127fb8: 0xdfb70058
    ctx->pc = 0x127fb8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x127fbc: 0xdfbe0060
    ctx->pc = 0x127fbcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x127fc0: 0x3e00008
    ctx->pc = 0x127FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127FC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127748u: goto label_127748;
            case 0x1277A8u: goto label_1277a8;
            case 0x12780Cu: goto label_12780c;
            case 0x127858u: goto label_127858;
            case 0x12787Cu: goto label_12787c;
            case 0x127888u: goto label_127888;
            case 0x127948u: goto label_127948;
            case 0x127A18u: goto label_127a18;
            case 0x127A78u: goto label_127a78;
            case 0x127AC0u: goto label_127ac0;
            case 0x127AD0u: goto label_127ad0;
            case 0x127B10u: goto label_127b10;
            case 0x127B78u: goto label_127b78;
            case 0x127BC0u: goto label_127bc0;
            case 0x127BD0u: goto label_127bd0;
            case 0x127C0Cu: goto label_127c0c;
            case 0x127C34u: goto label_127c34;
            case 0x127C50u: goto label_127c50;
            case 0x127D08u: goto label_127d08;
            case 0x127DD8u: goto label_127dd8;
            case 0x127E5Cu: goto label_127e5c;
            case 0x127EB0u: goto label_127eb0;
            case 0x127F1Cu: goto label_127f1c;
            case 0x127F48u: goto label_127f48;
            case 0x127F80u: goto label_127f80;
            case 0x127F9Cu: goto label_127f9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x127FC8u;
}
