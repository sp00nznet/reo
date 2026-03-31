#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00108280
// Address: 0x108280 - 0x108490
void sub_00108280_0x108280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108280u;

    // 0x108280: 0x27bdffd0
    ctx->pc = 0x108280u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x108284: 0xffb00000
    ctx->pc = 0x108284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108288: 0xa0802d
    ctx->pc = 0x108288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10828c: 0xffb20010
    ctx->pc = 0x10828cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x108290: 0xc0902d
    ctx->pc = 0x108290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108294: 0xffb10008
    ctx->pc = 0x108294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x108298: 0xffb30018
    ctx->pc = 0x108298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10829c: 0xffb40020
    ctx->pc = 0x10829cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1082a0: 0xffbf0028
    ctx->pc = 0x1082a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1082a4: 0x8e130010
    ctx->pc = 0x1082a4u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1082a8: 0x8e510010
    ctx->pc = 0x1082a8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1082ac: 0x271102a
    ctx->pc = 0x1082acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
    // 0x1082b0: 0x50400007
    ctx->pc = 0x1082B0u;
    {
        const bool branch_taken_0x1082b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1082b0) {
            ctx->pc = 0x1082B4u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x1082D0u;
            goto label_1082d0;
        }
    }
    ctx->pc = 0x1082B8u;
    // 0x1082b8: 0x200c02d
    ctx->pc = 0x1082b8u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082bc: 0x240802d
    ctx->pc = 0x1082bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082c0: 0x300902d
    ctx->pc = 0x1082c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082c4: 0x220982d
    ctx->pc = 0x1082c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082c8: 0x8e510010
    ctx->pc = 0x1082c8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1082cc: 0x8e050008
    ctx->pc = 0x1082ccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1082d0:
    // 0x1082d0: 0x271a021
    ctx->pc = 0x1082d0u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1082d4: 0x8e020004
    ctx->pc = 0x1082d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1082d8: 0xb4282a
    ctx->pc = 0x1082d8u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 20)));
    // 0x1082dc: 0xc041f7e
    ctx->pc = 0x1082DCu;
    SET_GPR_U32(ctx, 31, 0x1082E4u);
    ctx->pc = 0x1082E0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->pc = 0x107DF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107DF8_0x107df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1082E4u; }
    }
    if (ctx->pc != 0x1082E4u) { return; }
    ctx->pc = 0x1082E4u;
    // 0x1082e4: 0x14c880
    ctx->pc = 0x1082e4u;
    SET_GPR_U32(ctx, 25, SLL32(GPR_U32(ctx, 20), 2));
    // 0x1082e8: 0x40c02d
    ctx->pc = 0x1082e8u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082ec: 0x270f0014
    ctx->pc = 0x1082ecu;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 24), 20));
    // 0x1082f0: 0x1f96821
    ctx->pc = 0x1082f0u;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
    // 0x1082f4: 0x1ed102b
    ctx->pc = 0x1082f4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1082f8: 0x1040000a
    ctx->pc = 0x1082F8u;
    {
        const bool branch_taken_0x1082f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1082FCu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1082f8) {
            ctx->pc = 0x108324u;
            goto label_108324;
        }
    }
    ctx->pc = 0x108300u;
    // 0x108300: 0xad000000
    ctx->pc = 0x108300u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x108304: 0x0
    ctx->pc = 0x108304u;
    // NOP
label_108308:
    // 0x108308: 0x25080004
    ctx->pc = 0x108308u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
    // 0x10830c: 0x10d102b
    ctx->pc = 0x10830cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x108310: 0x0
    ctx->pc = 0x108310u;
    // NOP
    // 0x108314: 0x0
    ctx->pc = 0x108314u;
    // NOP
    // 0x108318: 0x0
    ctx->pc = 0x108318u;
    // NOP
    // 0x10831c: 0x5440fffa
    ctx->pc = 0x10831Cu;
    {
        const bool branch_taken_0x10831c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10831c) {
            ctx->pc = 0x108320u;
            WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x108308u;
            goto label_108308;
        }
    }
    ctx->pc = 0x108324u;
label_108324:
    // 0x108324: 0x264b0014
    ctx->pc = 0x108324u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 18), 20));
    // 0x108328: 0x111080
    ctx->pc = 0x108328u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x10832c: 0x1628821
    ctx->pc = 0x10832cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x108330: 0x131080
    ctx->pc = 0x108330u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x108334: 0x260d0014
    ctx->pc = 0x108334u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 16), 20));
    // 0x108338: 0x171182b
    ctx->pc = 0x108338u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 11), GPR_U32(ctx, 17)));
    // 0x10833c: 0x1a27021
    ctx->pc = 0x10833cu;
    SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x108340: 0x1060003e
    ctx->pc = 0x108340u;
    {
        const bool branch_taken_0x108340 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x108344u;
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x108340) {
            ctx->pc = 0x10843Cu;
            goto label_10843c;
        }
    }
    ctx->pc = 0x108348u;
label_108348:
    // 0x108348: 0x8d620000
    ctx->pc = 0x108348u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x10834c: 0x3049ffff
    ctx->pc = 0x10834cu;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 2), 65535));
    // 0x108350: 0x11200019
    ctx->pc = 0x108350u;
    {
        const bool branch_taken_0x108350 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x108354u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x108350) {
            ctx->pc = 0x1083B8u;
            goto label_1083b8;
        }
    }
    ctx->pc = 0x108358u;
    // 0x108358: 0x1a0402d
    ctx->pc = 0x108358u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10835c: 0x502d
    ctx->pc = 0x10835cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_108360:
    // 0x108360: 0x8d030000
    ctx->pc = 0x108360u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x108364: 0x25080004
    ctx->pc = 0x108364u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
    // 0x108368: 0x8ce50000
    ctx->pc = 0x108368u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10836c: 0x10e302b
    ctx->pc = 0x10836cu;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x108370: 0x3062ffff
    ctx->pc = 0x108370u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 65535));
    // 0x108374: 0x31c02
    ctx->pc = 0x108374u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 16));
    // 0x108378: 0x491018
    ctx->pc = 0x108378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x10837c: 0x70691818
    ctx->pc = 0x10837cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x108380: 0x30a4ffff
    ctx->pc = 0x108380u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), 65535));
    // 0x108384: 0x52c02
    ctx->pc = 0x108384u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 16));
    // 0x108388: 0x441021
    ctx->pc = 0x108388u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10838c: 0x651821
    ctx->pc = 0x10838cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x108390: 0x4a1021
    ctx->pc = 0x108390u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x108394: 0x25402
    ctx->pc = 0x108394u;
    SET_GPR_U32(ctx, 10, SRL32(GPR_U32(ctx, 2), 16));
    // 0x108398: 0xa4e20000
    ctx->pc = 0x108398u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x10839c: 0x6a1021
    ctx->pc = 0x10839cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1083a0: 0xa4e20002
    ctx->pc = 0x1083a0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1083a4: 0x24e70004
    ctx->pc = 0x1083a4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
    // 0x1083a8: 0x14c0ffed
    ctx->pc = 0x1083A8u;
    {
        const bool branch_taken_0x1083a8 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1083ACu;
        SET_GPR_U32(ctx, 10, SRL32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x1083a8) {
            ctx->pc = 0x108360u;
            goto label_108360;
        }
    }
    ctx->pc = 0x1083B0u;
    // 0x1083b0: 0xacea0000
    ctx->pc = 0x1083b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
    // 0x1083b4: 0x8d620000
    ctx->pc = 0x1083b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1083b8:
    // 0x1083b8: 0x24c02
    ctx->pc = 0x1083b8u;
    SET_GPR_U32(ctx, 9, SRL32(GPR_U32(ctx, 2), 16));
    // 0x1083bc: 0x1120001b
    ctx->pc = 0x1083BCu;
    {
        const bool branch_taken_0x1083bc = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x1083C0u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1083bc) {
            ctx->pc = 0x10842Cu;
            goto label_10842c;
        }
    }
    ctx->pc = 0x1083C4u;
    // 0x1083c4: 0x1a0402d
    ctx->pc = 0x1083c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1083c8: 0x8ce20000
    ctx->pc = 0x1083c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1083cc: 0x502d
    ctx->pc = 0x1083ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1083d0: 0x40202d
    ctx->pc = 0x1083d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1083d4: 0x0
    ctx->pc = 0x1083d4u;
    // NOP
label_1083d8:
    // 0x1083d8: 0x8d030000
    ctx->pc = 0x1083d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1083dc: 0x25080004
    ctx->pc = 0x1083dcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
    // 0x1083e0: 0xa4e20000
    ctx->pc = 0x1083e0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1083e4: 0x42402
    ctx->pc = 0x1083e4u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 16));
    // 0x1083e8: 0x3062ffff
    ctx->pc = 0x1083e8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 65535));
    // 0x1083ec: 0x31c02
    ctx->pc = 0x1083ecu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 16));
    // 0x1083f0: 0x491018
    ctx->pc = 0x1083f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1083f4: 0x70691818
    ctx->pc = 0x1083f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x1083f8: 0x10e282b
    ctx->pc = 0x1083f8u;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x1083fc: 0x441021
    ctx->pc = 0x1083fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x108400: 0x4a1021
    ctx->pc = 0x108400u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x108404: 0xa4e20002
    ctx->pc = 0x108404u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x108408: 0x24e70004
    ctx->pc = 0x108408u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
    // 0x10840c: 0x8ce40000
    ctx->pc = 0x10840cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x108410: 0x25402
    ctx->pc = 0x108410u;
    SET_GPR_U32(ctx, 10, SRL32(GPR_U32(ctx, 2), 16));
    // 0x108414: 0x3082ffff
    ctx->pc = 0x108414u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 65535));
    // 0x108418: 0x621821
    ctx->pc = 0x108418u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10841c: 0x6a1021
    ctx->pc = 0x10841cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x108420: 0x14a0ffed
    ctx->pc = 0x108420u;
    {
        const bool branch_taken_0x108420 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x108424u;
        SET_GPR_U32(ctx, 10, SRL32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x108420) {
            ctx->pc = 0x1083D8u;
            goto label_1083d8;
        }
    }
    ctx->pc = 0x108428u;
    // 0x108428: 0xace20000
    ctx->pc = 0x108428u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_10842c:
    // 0x10842c: 0x256b0004
    ctx->pc = 0x10842cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4));
    // 0x108430: 0x171102b
    ctx->pc = 0x108430u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 11), GPR_U32(ctx, 17)));
    // 0x108434: 0x1440ffc4
    ctx->pc = 0x108434u;
    {
        const bool branch_taken_0x108434 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x108438u;
        SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 4));
        if (branch_taken_0x108434) {
            ctx->pc = 0x108348u;
            goto label_108348;
        }
    }
    ctx->pc = 0x10843Cu;
label_10843c:
    // 0x10843c: 0x1f93821
    ctx->pc = 0x10843cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
label_108440:
    // 0x108440: 0x5a800009
    ctx->pc = 0x108440u;
    {
        const bool branch_taken_0x108440 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x108440) {
            ctx->pc = 0x108444u;
            WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 20));
            ctx->pc = 0x108468u;
            goto label_108468;
        }
    }
    ctx->pc = 0x108448u;
    // 0x108448: 0x24e7fffc
    ctx->pc = 0x108448u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x10844c: 0x8ce20000
    ctx->pc = 0x10844cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x108450: 0x0
    ctx->pc = 0x108450u;
    // NOP
    // 0x108454: 0x0
    ctx->pc = 0x108454u;
    // NOP
    // 0x108458: 0x0
    ctx->pc = 0x108458u;
    // NOP
    // 0x10845c: 0x5040fff8
    ctx->pc = 0x10845Cu;
    {
        const bool branch_taken_0x10845c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10845c) {
            ctx->pc = 0x108460u;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->pc = 0x108440u;
            goto label_108440;
        }
    }
    ctx->pc = 0x108464u;
    // 0x108464: 0xaf140010
    ctx->pc = 0x108464u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 20));
label_108468:
    // 0x108468: 0x300102d
    ctx->pc = 0x108468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10846c: 0xdfb00000
    ctx->pc = 0x10846cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108470: 0xdfb10008
    ctx->pc = 0x108470u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x108474: 0xdfb20010
    ctx->pc = 0x108474u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108478: 0xdfb30018
    ctx->pc = 0x108478u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10847c: 0xdfb40020
    ctx->pc = 0x10847cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108480: 0xdfbf0028
    ctx->pc = 0x108480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x108484: 0x3e00008
    ctx->pc = 0x108484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108488u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1082D0u: goto label_1082d0;
            case 0x108308u: goto label_108308;
            case 0x108324u: goto label_108324;
            case 0x108348u: goto label_108348;
            case 0x108360u: goto label_108360;
            case 0x1083B8u: goto label_1083b8;
            case 0x1083D8u: goto label_1083d8;
            case 0x10842Cu: goto label_10842c;
            case 0x10843Cu: goto label_10843c;
            case 0x108440u: goto label_108440;
            case 0x108468u: goto label_108468;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10848Cu;
    // 0x10848c: 0x0
    ctx->pc = 0x10848cu;
    // NOP
}
