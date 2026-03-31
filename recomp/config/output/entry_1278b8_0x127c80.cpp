#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1278b8
// Address: 0x1278b8 - 0x127c80
void entry_1278b8_0x127c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1278b8u;

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
            default: break;
        }
        return;
    }
    ctx->pc = 0x127C7Cu;
    // 0x127c7c: 0x0
    ctx->pc = 0x127c7cu;
    // NOP
}
