#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F6350
// Address: 0x1f6350 - 0x1f65d0
void sub_001F6350_0x1f6350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f6350u;

    // 0x1f6350: 0x27bdffe0
    ctx->pc = 0x1f6350u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f6354: 0x3c010036
    ctx->pc = 0x1f6354u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f6358: 0xffbf0010
    ctx->pc = 0x1f6358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f635c: 0x7fb00000
    ctx->pc = 0x1f635cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f6360: 0x8c22eaf0
    ctx->pc = 0x1f6360u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294961904)));
    // 0x1f6364: 0x10400029
    ctx->pc = 0x1F6364u;
    {
        const bool branch_taken_0x1f6364 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6368u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f6364) {
            ctx->pc = 0x1F640Cu;
            goto label_1f640c;
        }
    }
    ctx->pc = 0x1F636Cu;
    // 0x1f636c: 0x24050014
    ctx->pc = 0x1f636cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1f6370: 0x24060001
    ctx->pc = 0x1f6370u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6374: 0xc07d284
    ctx->pc = 0x1F6374u;
    SET_GPR_U32(ctx, 31, 0x1F637Cu);
    ctx->pc = 0x1F6378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4A10_0x1f4a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F637Cu; }
    }
    if (ctx->pc != 0x1F637Cu) { return; }
    ctx->pc = 0x1F637Cu;
    // 0x1f637c: 0xc042c56
    ctx->pc = 0x1F637Cu;
    SET_GPR_U32(ctx, 31, 0x1F6384u);
    ctx->pc = 0x1F6380u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6384u; }
    }
    if (ctx->pc != 0x1F6384u) { return; }
    ctx->pc = 0x1F6384u;
    // 0x1f6384: 0x8e050070
    ctx->pc = 0x1f6384u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1f6388: 0x40302d
    ctx->pc = 0x1f6388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f638c: 0xc07d330
    ctx->pc = 0x1F638Cu;
    SET_GPR_U32(ctx, 31, 0x1F6394u);
    ctx->pc = 0x1F6390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4CC0_0x1f4cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6394u; }
    }
    if (ctx->pc != 0x1F6394u) { return; }
    ctx->pc = 0x1F6394u;
    // 0x1f6394: 0x8e050084
    ctx->pc = 0x1f6394u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1f6398: 0xc07d308
    ctx->pc = 0x1F6398u;
    SET_GPR_U32(ctx, 31, 0x1F63A0u);
    ctx->pc = 0x1F639Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4C20_0x1f4c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F63A0u; }
    }
    if (ctx->pc != 0x1F63A0u) { return; }
    ctx->pc = 0x1F63A0u;
    // 0x1f63a0: 0x96050080
    ctx->pc = 0x1f63a0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1f63a4: 0xc07d2e4
    ctx->pc = 0x1F63A4u;
    SET_GPR_U32(ctx, 31, 0x1F63ACu);
    ctx->pc = 0x1F63A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4B90_0x1f4b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F63ACu; }
    }
    if (ctx->pc != 0x1F63ACu) { return; }
    ctx->pc = 0x1F63ACu;
    // 0x1f63ac: 0x9603002c
    ctx->pc = 0x1f63acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1f63b0: 0x8e02001c
    ctx->pc = 0x1f63b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f63b4: 0x32200
    ctx->pc = 0x1f63b4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1f63b8: 0x31a03
    ctx->pc = 0x1f63b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1f63bc: 0x3084ff00
    ctx->pc = 0x1f63bcu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65280));
    // 0x1f63c0: 0x306300ff
    ctx->pc = 0x1f63c0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x1f63c4: 0x831825
    ctx->pc = 0x1f63c4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f63c8: 0xa4430000
    ctx->pc = 0x1f63c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f63cc: 0x8e02002c
    ctx->pc = 0x1f63ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1f63d0: 0x8e040010
    ctx->pc = 0x1f63d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1f63d4: 0x8e05001c
    ctx->pc = 0x1f63d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f63d8: 0x24420008
    ctx->pc = 0x1f63d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1f63dc: 0x2343c
    ctx->pc = 0x1f63dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f63e0: 0xc075aa4
    ctx->pc = 0x1F63E0u;
    SET_GPR_U32(ctx, 31, 0x1F63E8u);
    ctx->pc = 0x1F63E4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    ctx->pc = 0x1D6A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6A90_0x1d6a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F63E8u; }
    }
    if (ctx->pc != 0x1F63E8u) { return; }
    ctx->pc = 0x1F63E8u;
    // 0x1f63e8: 0xc07d16c
    ctx->pc = 0x1F63E8u;
    SET_GPR_U32(ctx, 31, 0x1F63F0u);
    ctx->pc = 0x1F63ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F45B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F45B0_0x1f45b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F63F0u; }
    }
    if (ctx->pc != 0x1F63F0u) { return; }
    ctx->pc = 0x1F63F0u;
    // 0x1f63f0: 0x2841ffff
    ctx->pc = 0x1f63f0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 4294967295));
    // 0x1f63f4: 0x10200003
    ctx->pc = 0x1F63F4u;
    {
        const bool branch_taken_0x1f63f4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f63f4) {
            ctx->pc = 0x1F6404u;
            goto label_1f6404;
        }
    }
    ctx->pc = 0x1F63FCu;
    // 0x1f63fc: 0x10000005
    ctx->pc = 0x1F63FCu;
    {
        const bool branch_taken_0x1f63fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6400u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1f63fc) {
            ctx->pc = 0x1F6414u;
            goto label_1f6414;
        }
    }
    ctx->pc = 0x1F6404u;
label_1f6404:
    // 0x1f6404: 0x2402000f
    ctx->pc = 0x1f6404u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f6408: 0xa2020001
    ctx->pc = 0x1f6408u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1f640c:
    // 0x1f640c: 0x102d
    ctx->pc = 0x1f640cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6410: 0xdfbf0010
    ctx->pc = 0x1f6410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f6414:
    // 0x1f6414: 0x7bb00000
    ctx->pc = 0x1f6414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6418: 0x3e00008
    ctx->pc = 0x1F6418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F641Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F6404u: goto label_1f6404;
            case 0x1F640Cu: goto label_1f640c;
            case 0x1F6414u: goto label_1f6414;
            case 0x1F6484u: goto label_1f6484;
            case 0x1F64A4u: goto label_1f64a4;
            case 0x1F64C0u: goto label_1f64c0;
            case 0x1F64E8u: goto label_1f64e8;
            case 0x1F64ECu: goto label_1f64ec;
            case 0x1F6524u: goto label_1f6524;
            case 0x1F6530u: goto label_1f6530;
            case 0x1F6560u: goto label_1f6560;
            case 0x1F656Cu: goto label_1f656c;
            case 0x1F6574u: goto label_1f6574;
            case 0x1F65B0u: goto label_1f65b0;
            case 0x1F65B4u: goto label_1f65b4;
            case 0x1F65B8u: goto label_1f65b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F6420u;
    // 0x1f6420: 0x27bdffa0
    ctx->pc = 0x1f6420u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f6424: 0x3c010036
    ctx->pc = 0x1f6424u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f6428: 0xffbf0030
    ctx->pc = 0x1f6428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f642c: 0x7fb20020
    ctx->pc = 0x1f642cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f6430: 0x7fb10010
    ctx->pc = 0x1f6430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f6434: 0x7fb00000
    ctx->pc = 0x1f6434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f6438: 0x8c22eaf0
    ctx->pc = 0x1f6438u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294961904)));
    // 0x1f643c: 0x1040005d
    ctx->pc = 0x1F643Cu;
    {
        const bool branch_taken_0x1f643c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6440u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f643c) {
            ctx->pc = 0x1F65B4u;
            goto label_1f65b4;
        }
    }
    ctx->pc = 0x1F6444u;
    // 0x1f6444: 0x8e460074
    ctx->pc = 0x1f6444u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x1f6448: 0xc07d244
    ctx->pc = 0x1F6448u;
    SET_GPR_U32(ctx, 31, 0x1F6450u);
    ctx->pc = 0x1F644Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1F4910u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4910_0x1f4910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6450u; }
    }
    if (ctx->pc != 0x1F6450u) { return; }
    ctx->pc = 0x1F6450u;
    // 0x1f6450: 0x40802d
    ctx->pc = 0x1f6450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6454: 0x601000b
    ctx->pc = 0x1F6454u;
    {
        const bool branch_taken_0x1f6454 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1F6458u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1f6454) {
            ctx->pc = 0x1F6484u;
            goto label_1f6484;
        }
    }
    ctx->pc = 0x1F645Cu;
    // 0x1f645c: 0x24020007
    ctx->pc = 0x1f645cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f6460: 0xae43008c
    ctx->pc = 0x1f6460u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 3));
    // 0x1f6464: 0xa2420000
    ctx->pc = 0x1f6464u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f6468: 0xa2400001
    ctx->pc = 0x1f6468u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f646c: 0xa2400002
    ctx->pc = 0x1f646cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6470: 0xa2400003
    ctx->pc = 0x1f6470u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6474: 0xa6400004
    ctx->pc = 0x1f6474u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6478: 0xa6400006
    ctx->pc = 0x1f6478u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f647c: 0xa6400008
    ctx->pc = 0x1f647cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6480: 0xa640000a
    ctx->pc = 0x1f6480u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 0));
label_1f6484:
    // 0x1f6484: 0x8e450070
    ctx->pc = 0x1f6484u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1f6488: 0x8e460074
    ctx->pc = 0x1f6488u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x1f648c: 0xc042d10
    ctx->pc = 0x1F648Cu;
    SET_GPR_U32(ctx, 31, 0x1F6494u);
    ctx->pc = 0x1F6490u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x10B440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B440_0x10b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6494u; }
    }
    if (ctx->pc != 0x1F6494u) { return; }
    ctx->pc = 0x1F6494u;
    // 0x1f6494: 0x10400003
    ctx->pc = 0x1F6494u;
    {
        const bool branch_taken_0x1f6494 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6498u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f6494) {
            ctx->pc = 0x1F64A4u;
            goto label_1f64a4;
        }
    }
    ctx->pc = 0x1F649Cu;
    // 0x1f649c: 0x10000046
    ctx->pc = 0x1F649Cu;
    {
        const bool branch_taken_0x1f649c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F64A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967235));
        if (branch_taken_0x1f649c) {
            ctx->pc = 0x1F65B8u;
            goto label_1f65b8;
        }
    }
    ctx->pc = 0x1F64A4u;
label_1f64a4:
    // 0x1f64a4: 0xc07d224
    ctx->pc = 0x1F64A4u;
    SET_GPR_U32(ctx, 31, 0x1F64ACu);
    ctx->pc = 0x1F4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4890_0x1f4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F64ACu; }
    }
    if (ctx->pc != 0x1F64ACu) { return; }
    ctx->pc = 0x1F64ACu;
    // 0x1f64ac: 0x8e430084
    ctx->pc = 0x1f64acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x1f64b0: 0x10620003
    ctx->pc = 0x1F64B0u;
    {
        const bool branch_taken_0x1f64b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1F64B4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
        if (branch_taken_0x1f64b0) {
            ctx->pc = 0x1F64C0u;
            goto label_1f64c0;
        }
    }
    ctx->pc = 0x1F64B8u;
    // 0x1f64b8: 0x1000003f
    ctx->pc = 0x1F64B8u;
    {
        const bool branch_taken_0x1f64b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F64BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967236));
        if (branch_taken_0x1f64b8) {
            ctx->pc = 0x1F65B8u;
            goto label_1f65b8;
        }
    }
    ctx->pc = 0x1F64C0u;
label_1f64c0:
    // 0x1f64c0: 0x96460080
    ctx->pc = 0x1f64c0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1f64c4: 0x8c2557c0
    ctx->pc = 0x1f64c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 22464)));
    // 0x1f64c8: 0x24030002
    ctx->pc = 0x1f64c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f64cc: 0x468821
    ctx->pc = 0x1f64ccu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f64d0: 0x3c010036
    ctx->pc = 0x1f64d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f64d4: 0x8c24eaf0
    ctx->pc = 0x1f64d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294961904)));
    // 0x1f64d8: 0x14830003
    ctx->pc = 0x1F64D8u;
    {
        const bool branch_taken_0x1f64d8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1F64DCu;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        if (branch_taken_0x1f64d8) {
            ctx->pc = 0x1F64E8u;
            goto label_1f64e8;
        }
    }
    ctx->pc = 0x1F64E0u;
    // 0x1f64e0: 0x10000002
    ctx->pc = 0x1F64E0u;
    {
        const bool branch_taken_0x1f64e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F64E4u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 0), 32768));
        if (branch_taken_0x1f64e0) {
            ctx->pc = 0x1F64ECu;
            goto label_1f64ec;
        }
    }
    ctx->pc = 0x1F64E8u;
label_1f64e8:
    // 0x1f64e8: 0x24061000
    ctx->pc = 0x1f64e8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4096));
label_1f64ec:
    // 0x1f64ec: 0x8e44007c
    ctx->pc = 0x1f64ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x1f64f0: 0x224182b
    ctx->pc = 0x1f64f0u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1f64f4: 0x1460000e
    ctx->pc = 0x1F64F4u;
    {
        const bool branch_taken_0x1f64f4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F64F8u;
        SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        if (branch_taken_0x1f64f4) {
            ctx->pc = 0x1F6530u;
            goto label_1f6530;
        }
    }
    ctx->pc = 0x1F64FCu;
    // 0x1f64fc: 0x821823
    ctx->pc = 0x1f64fcu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f6500: 0x3c010036
    ctx->pc = 0x1f6500u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f6504: 0xa6430080
    ctx->pc = 0x1f6504u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 128), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f6508: 0x24020002
    ctx->pc = 0x1f6508u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f650c: 0x8c23eaf0
    ctx->pc = 0x1f650cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294961904)));
    // 0x1f6510: 0x14620004
    ctx->pc = 0x1F6510u;
    {
        const bool branch_taken_0x1f6510 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1f6510) {
            ctx->pc = 0x1F6524u;
            goto label_1f6524;
        }
    }
    ctx->pc = 0x1F6518u;
    // 0x1f6518: 0x24020012
    ctx->pc = 0x1f6518u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1f651c: 0x10000015
    ctx->pc = 0x1F651Cu;
    {
        const bool branch_taken_0x1f651c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6520u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1f651c) {
            ctx->pc = 0x1F6574u;
            goto label_1f6574;
        }
    }
    ctx->pc = 0x1F6524u;
label_1f6524:
    // 0x1f6524: 0x24020004
    ctx->pc = 0x1f6524u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f6528: 0x10000012
    ctx->pc = 0x1F6528u;
    {
        const bool branch_taken_0x1f6528 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F652Cu;
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1f6528) {
            ctx->pc = 0x1F6574u;
            goto label_1f6574;
        }
    }
    ctx->pc = 0x1F6530u;
label_1f6530:
    // 0x1f6530: 0x1460000e
    ctx->pc = 0x1F6530u;
    {
        const bool branch_taken_0x1f6530 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f6530) {
            ctx->pc = 0x1F656Cu;
            goto label_1f656c;
        }
    }
    ctx->pc = 0x1F6538u;
    // 0x1f6538: 0xc21823
    ctx->pc = 0x1f6538u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1f653c: 0x3c010036
    ctx->pc = 0x1f653cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f6540: 0xa6430080
    ctx->pc = 0x1f6540u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 128), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f6544: 0x24020002
    ctx->pc = 0x1f6544u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f6548: 0x8c23eaf0
    ctx->pc = 0x1f6548u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294961904)));
    // 0x1f654c: 0x14620004
    ctx->pc = 0x1F654Cu;
    {
        const bool branch_taken_0x1f654c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1f654c) {
            ctx->pc = 0x1F6560u;
            goto label_1f6560;
        }
    }
    ctx->pc = 0x1F6554u;
    // 0x1f6554: 0x24020012
    ctx->pc = 0x1f6554u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1f6558: 0x10000006
    ctx->pc = 0x1F6558u;
    {
        const bool branch_taken_0x1f6558 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F655Cu;
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1f6558) {
            ctx->pc = 0x1F6574u;
            goto label_1f6574;
        }
    }
    ctx->pc = 0x1F6560u;
label_1f6560:
    // 0x1f6560: 0x24020004
    ctx->pc = 0x1f6560u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f6564: 0x10000003
    ctx->pc = 0x1F6564u;
    {
        const bool branch_taken_0x1f6564 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6568u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1f6564) {
            ctx->pc = 0x1F6574u;
            goto label_1f6574;
        }
    }
    ctx->pc = 0x1F656Cu;
label_1f656c:
    // 0x1f656c: 0x2402000e
    ctx->pc = 0x1f656cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1f6570: 0xa2420001
    ctx->pc = 0x1f6570u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_1f6574:
    // 0x1f6574: 0x96460080
    ctx->pc = 0x1f6574u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1f6578: 0xc07d244
    ctx->pc = 0x1F6578u;
    SET_GPR_U32(ctx, 31, 0x1F6580u);
    ctx->pc = 0x1F657Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4910u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4910_0x1f4910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6580u; }
    }
    if (ctx->pc != 0x1F6580u) { return; }
    ctx->pc = 0x1F6580u;
    // 0x1f6580: 0x601000b
    ctx->pc = 0x1F6580u;
    {
        const bool branch_taken_0x1f6580 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1F6584u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1f6580) {
            ctx->pc = 0x1F65B0u;
            goto label_1f65b0;
        }
    }
    ctx->pc = 0x1F6588u;
    // 0x1f6588: 0x24020007
    ctx->pc = 0x1f6588u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f658c: 0xae43008c
    ctx->pc = 0x1f658cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 3));
    // 0x1f6590: 0xa2420000
    ctx->pc = 0x1f6590u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f6594: 0xa2400001
    ctx->pc = 0x1f6594u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6598: 0xa2400002
    ctx->pc = 0x1f6598u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f659c: 0xa2400003
    ctx->pc = 0x1f659cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f65a0: 0xa6400004
    ctx->pc = 0x1f65a0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f65a4: 0xa6400006
    ctx->pc = 0x1f65a4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f65a8: 0xa6400008
    ctx->pc = 0x1f65a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f65ac: 0xa640000a
    ctx->pc = 0x1f65acu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 0));
label_1f65b0:
    // 0x1f65b0: 0xae510084
    ctx->pc = 0x1f65b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 17));
label_1f65b4:
    // 0x1f65b4: 0x102d
    ctx->pc = 0x1f65b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f65b8:
    // 0x1f65b8: 0xdfbf0030
    ctx->pc = 0x1f65b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f65bc: 0x7bb20020
    ctx->pc = 0x1f65bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f65c0: 0x7bb10010
    ctx->pc = 0x1f65c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f65c4: 0x7bb00000
    ctx->pc = 0x1f65c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f65c8: 0x3e00008
    ctx->pc = 0x1F65C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F65CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F6404u: goto label_1f6404;
            case 0x1F640Cu: goto label_1f640c;
            case 0x1F6414u: goto label_1f6414;
            case 0x1F6484u: goto label_1f6484;
            case 0x1F64A4u: goto label_1f64a4;
            case 0x1F64C0u: goto label_1f64c0;
            case 0x1F64E8u: goto label_1f64e8;
            case 0x1F64ECu: goto label_1f64ec;
            case 0x1F6524u: goto label_1f6524;
            case 0x1F6530u: goto label_1f6530;
            case 0x1F6560u: goto label_1f6560;
            case 0x1F656Cu: goto label_1f656c;
            case 0x1F6574u: goto label_1f6574;
            case 0x1F65B0u: goto label_1f65b0;
            case 0x1F65B4u: goto label_1f65b4;
            case 0x1F65B8u: goto label_1f65b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F65D0u;
}
