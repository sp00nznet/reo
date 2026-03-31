#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001ACFB0
// Address: 0x1acfb0 - 0x1ad150
void sub_001ACFB0_0x1acfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1acfb0u;

    // 0x1acfb0: 0x27bdff80
    ctx->pc = 0x1acfb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1acfb4: 0xffbf0070
    ctx->pc = 0x1acfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1acfb8: 0x7fb60060
    ctx->pc = 0x1acfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1acfbc: 0x7fb50050
    ctx->pc = 0x1acfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1acfc0: 0x7fb40040
    ctx->pc = 0x1acfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1acfc4: 0x7fb30030
    ctx->pc = 0x1acfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1acfc8: 0x7fb20020
    ctx->pc = 0x1acfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1acfcc: 0x7fb10010
    ctx->pc = 0x1acfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1acfd0: 0x7fb00000
    ctx->pc = 0x1acfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1acfd4: 0xa0802d
    ctx->pc = 0x1acfd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acfd8: 0x2e02000e
    ctx->pc = 0x1acfd8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 14));
    // 0x1acfdc: 0x14400003
    ctx->pc = 0x1ACFDCu;
    {
        const bool branch_taken_0x1acfdc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ACFE0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1acfdc) {
            ctx->pc = 0x1ACFECu;
            goto label_1acfec;
        }
    }
    ctx->pc = 0x1ACFE4u;
    // 0x1acfe4: 0x10000050
    ctx->pc = 0x1ACFE4u;
    {
        const bool branch_taken_0x1acfe4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ACFE8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x1acfe4) {
            ctx->pc = 0x1AD128u;
            goto label_1ad128;
        }
    }
    ctx->pc = 0x1ACFECu;
label_1acfec:
    // 0x1acfec: 0x8c870020
    ctx->pc = 0x1acfecu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1acff0: 0x101040
    ctx->pc = 0x1acff0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 1));
    // 0x1acff4: 0x501821
    ctx->pc = 0x1acff4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1acff8: 0x80a82d
    ctx->pc = 0x1acff8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acffc: 0x3c02002b
    ctx->pc = 0x1acffcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1ad000: 0x31a40
    ctx->pc = 0x1ad000u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 9));
    // 0x1ad004: 0x24423950
    ctx->pc = 0x1ad004u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14672));
    // 0x1ad008: 0x80a02d
    ctx->pc = 0x1ad008u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad00c: 0x438821
    ctx->pc = 0x1ad00cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ad010: 0x282d
    ctx->pc = 0x1ad010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad014: 0x24060600
    ctx->pc = 0x1ad014u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1536));
    // 0x1ad018: 0x220902d
    ctx->pc = 0x1ad018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad01c: 0x871021
    ctx->pc = 0x1ad01cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1ad020: 0x24530010
    ctx->pc = 0x1ad020u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ad024: 0xc041f1a
    ctx->pc = 0x1AD024u;
    SET_GPR_U32(ctx, 31, 0x1AD02Cu);
    ctx->pc = 0x1AD028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD02Cu; }
    }
    if (ctx->pc != 0x1AD02Cu) { return; }
    ctx->pc = 0x1AD02Cu;
    // 0x1ad02c: 0x8e830024
    ctx->pc = 0x1ad02cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1ad030: 0x102d
    ctx->pc = 0x1ad030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad034: 0x10000019
    ctx->pc = 0x1AD034u;
    {
        const bool branch_taken_0x1ad034 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD038u;
        SET_GPR_U32(ctx, 22, SRL32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x1ad034) {
            ctx->pc = 0x1AD09Cu;
            goto label_1ad09c;
        }
    }
    ctx->pc = 0x1AD03Cu;
label_1ad03c:
    // 0x1ad03c: 0x82630000
    ctx->pc = 0x1ad03cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ad040: 0x24420001
    ctx->pc = 0x1ad040u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ad044: 0xa2430000
    ctx->pc = 0x1ad044u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ad048: 0x82630009
    ctx->pc = 0x1ad048u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 9)));
    // 0x1ad04c: 0xa2430005
    ctx->pc = 0x1ad04cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ad050: 0x82630008
    ctx->pc = 0x1ad050u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1ad054: 0xa2430004
    ctx->pc = 0x1ad054u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ad058: 0x8663000a
    ctx->pc = 0x1ad058u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x1ad05c: 0xa6430002
    ctx->pc = 0x1ad05cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ad060: 0x8263000c
    ctx->pc = 0x1ad060u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1ad064: 0xa2430006
    ctx->pc = 0x1ad064u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ad068: 0x8263000d
    ctx->pc = 0x1ad068u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
    // 0x1ad06c: 0xa2430007
    ctx->pc = 0x1ad06cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ad070: 0x82630006
    ctx->pc = 0x1ad070u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x1ad074: 0x3063007f
    ctx->pc = 0x1ad074u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 127));
    // 0x1ad078: 0xa2430008
    ctx->pc = 0x1ad078u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ad07c: 0x82630006
    ctx->pc = 0x1ad07cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x1ad080: 0x30630080
    ctx->pc = 0x1ad080u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 128));
    // 0x1ad084: 0x3182b
    ctx->pc = 0x1ad084u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1ad088: 0xa2430009
    ctx->pc = 0x1ad088u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ad08c: 0x8263000f
    ctx->pc = 0x1ad08cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
    // 0x1ad090: 0xa243000b
    ctx->pc = 0x1ad090u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ad094: 0x26730010
    ctx->pc = 0x1ad094u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 16));
    // 0x1ad098: 0x2652000c
    ctx->pc = 0x1ad098u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 12));
label_1ad09c:
    // 0x1ad09c: 0x28410080
    ctx->pc = 0x1ad09cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 128));
    // 0x1ad0a0: 0x10200007
    ctx->pc = 0x1AD0A0u;
    {
        const bool branch_taken_0x1ad0a0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ad0a0) {
            ctx->pc = 0x1AD0C0u;
            goto label_1ad0c0;
        }
    }
    ctx->pc = 0x1AD0A8u;
    // 0x1ad0a8: 0x8e830024
    ctx->pc = 0x1ad0a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1ad0ac: 0x2463fff0
    ctx->pc = 0x1ad0acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1ad0b0: 0x31902
    ctx->pc = 0x1ad0b0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 4));
    // 0x1ad0b4: 0x43182b
    ctx->pc = 0x1ad0b4u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ad0b8: 0x1460ffe0
    ctx->pc = 0x1AD0B8u;
    {
        const bool branch_taken_0x1ad0b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ad0b8) {
            ctx->pc = 0x1AD03Cu;
            goto label_1ad03c;
        }
    }
    ctx->pc = 0x1AD0C0u;
label_1ad0c0:
    // 0x1ad0c0: 0x8e850008
    ctx->pc = 0x1ad0c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1ad0c4: 0x200202d
    ctx->pc = 0x1ad0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad0c8: 0x8e830010
    ctx->pc = 0x1ad0c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1ad0cc: 0x8e820018
    ctx->pc = 0x1ad0ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1ad0d0: 0x8e86000c
    ctx->pc = 0x1ad0d0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1ad0d4: 0x8e880014
    ctx->pc = 0x1ad0d4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1ad0d8: 0x8e8a001c
    ctx->pc = 0x1ad0d8u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x1ad0dc: 0x2a52821
    ctx->pc = 0x1ad0dcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x1ad0e0: 0x2a33821
    ctx->pc = 0x1ad0e0u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1ad0e4: 0xc069e40
    ctx->pc = 0x1AD0E4u;
    SET_GPR_U32(ctx, 31, 0x1AD0ECu);
    ctx->pc = 0x1AD0E8u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->pc = 0x1A7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7900_0x1a7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD0ECu; }
    }
    if (ctx->pc != 0x1AD0ECu) { return; }
    ctx->pc = 0x1AD0ECu;
    // 0x1ad0ec: 0x40802d
    ctx->pc = 0x1ad0ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad0f0: 0x6010007
    ctx->pc = 0x1AD0F0u;
    {
        const bool branch_taken_0x1ad0f0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1AD0F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ad0f0) {
            ctx->pc = 0x1AD110u;
            goto label_1ad110;
        }
    }
    ctx->pc = 0x1AD0F8u;
    // 0x1ad0f8: 0x220202d
    ctx->pc = 0x1ad0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad0fc: 0x240500ff
    ctx->pc = 0x1ad0fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ad100: 0xc041f1a
    ctx->pc = 0x1AD100u;
    SET_GPR_U32(ctx, 31, 0x1AD108u);
    ctx->pc = 0x1AD104u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1536));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD108u; }
    }
    if (ctx->pc != 0x1AD108u) { return; }
    ctx->pc = 0x1AD108u;
    // 0x1ad108: 0x10000006
    ctx->pc = 0x1AD108u;
    {
        const bool branch_taken_0x1ad108 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD10Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ad108) {
            ctx->pc = 0x1AD124u;
            goto label_1ad124;
        }
    }
    ctx->pc = 0x1AD110u;
label_1ad110:
    // 0x1ad110: 0xc045228
    ctx->pc = 0x1AD110u;
    SET_GPR_U32(ctx, 31, 0x1AD118u);
    ctx->pc = 0x1148A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001148A0_0x1148a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD118u; }
    }
    if (ctx->pc != 0x1AD118u) { return; }
    ctx->pc = 0x1AD118u;
    // 0x1ad118: 0xc069f78
    ctx->pc = 0x1AD118u;
    SET_GPR_U32(ctx, 31, 0x1AD120u);
    ctx->pc = 0x1AD11Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A7DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7DE0_0x1a7de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD120u; }
    }
    if (ctx->pc != 0x1AD120u) { return; }
    ctx->pc = 0x1AD120u;
    // 0x1ad120: 0x2c0102d
    ctx->pc = 0x1ad120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ad124:
    // 0x1ad124: 0xdfbf0070
    ctx->pc = 0x1ad124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1ad128:
    // 0x1ad128: 0x7bb60060
    ctx->pc = 0x1ad128u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ad12c: 0x7bb50050
    ctx->pc = 0x1ad12cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ad130: 0x7bb40040
    ctx->pc = 0x1ad130u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad134: 0x7bb30030
    ctx->pc = 0x1ad134u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ad138: 0x7bb20020
    ctx->pc = 0x1ad138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad13c: 0x7bb10010
    ctx->pc = 0x1ad13cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad140: 0x7bb00000
    ctx->pc = 0x1ad140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad144: 0x3e00008
    ctx->pc = 0x1AD144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD148u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ACFECu: goto label_1acfec;
            case 0x1AD03Cu: goto label_1ad03c;
            case 0x1AD09Cu: goto label_1ad09c;
            case 0x1AD0C0u: goto label_1ad0c0;
            case 0x1AD110u: goto label_1ad110;
            case 0x1AD124u: goto label_1ad124;
            case 0x1AD128u: goto label_1ad128;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AD14Cu;
    // 0x1ad14c: 0x0
    ctx->pc = 0x1ad14cu;
    // NOP
}
