#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F5450
// Address: 0x1f5450 - 0x1f5600
void sub_001F5450_0x1f5450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f5450u;

    // 0x1f5450: 0x27bdffe0
    ctx->pc = 0x1f5450u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f5454: 0x3c010036
    ctx->pc = 0x1f5454u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5458: 0xffbf0010
    ctx->pc = 0x1f5458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f545c: 0x7fb00000
    ctx->pc = 0x1f545cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f5460: 0x8c22eaf0
    ctx->pc = 0x1f5460u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294961904)));
    // 0x1f5464: 0x1040001d
    ctx->pc = 0x1F5464u;
    {
        const bool branch_taken_0x1f5464 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5468u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f5464) {
            ctx->pc = 0x1F54DCu;
            goto label_1f54dc;
        }
    }
    ctx->pc = 0x1F546Cu;
    // 0x1f546c: 0x24050018
    ctx->pc = 0x1f546cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 24));
    // 0x1f5470: 0x24060001
    ctx->pc = 0x1f5470u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5474: 0xc07d284
    ctx->pc = 0x1F5474u;
    SET_GPR_U32(ctx, 31, 0x1F547Cu);
    ctx->pc = 0x1F5478u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4A10_0x1f4a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F547Cu; }
    }
    if (ctx->pc != 0x1F547Cu) { return; }
    ctx->pc = 0x1F547Cu;
    // 0x1f547c: 0x9603002c
    ctx->pc = 0x1f547cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1f5480: 0x8e02001c
    ctx->pc = 0x1f5480u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f5484: 0x32200
    ctx->pc = 0x1f5484u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1f5488: 0x31a03
    ctx->pc = 0x1f5488u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1f548c: 0x3084ff00
    ctx->pc = 0x1f548cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65280));
    // 0x1f5490: 0x306300ff
    ctx->pc = 0x1f5490u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x1f5494: 0x831825
    ctx->pc = 0x1f5494u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f5498: 0xa4430000
    ctx->pc = 0x1f5498u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f549c: 0x8e02002c
    ctx->pc = 0x1f549cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1f54a0: 0x8e040010
    ctx->pc = 0x1f54a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1f54a4: 0x8e05001c
    ctx->pc = 0x1f54a4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f54a8: 0x24420008
    ctx->pc = 0x1f54a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1f54ac: 0x2343c
    ctx->pc = 0x1f54acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f54b0: 0xc075aa4
    ctx->pc = 0x1F54B0u;
    SET_GPR_U32(ctx, 31, 0x1F54B8u);
    ctx->pc = 0x1F54B4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    ctx->pc = 0x1D6A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6A90_0x1d6a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F54B8u; }
    }
    if (ctx->pc != 0x1F54B8u) { return; }
    ctx->pc = 0x1F54B8u;
    // 0x1f54b8: 0xc07d16c
    ctx->pc = 0x1F54B8u;
    SET_GPR_U32(ctx, 31, 0x1F54C0u);
    ctx->pc = 0x1F54BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F45B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F45B0_0x1f45b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F54C0u; }
    }
    if (ctx->pc != 0x1F54C0u) { return; }
    ctx->pc = 0x1F54C0u;
    // 0x1f54c0: 0x2841ffff
    ctx->pc = 0x1f54c0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 4294967295));
    // 0x1f54c4: 0x10200003
    ctx->pc = 0x1F54C4u;
    {
        const bool branch_taken_0x1f54c4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f54c4) {
            ctx->pc = 0x1F54D4u;
            goto label_1f54d4;
        }
    }
    ctx->pc = 0x1F54CCu;
    // 0x1f54cc: 0x10000005
    ctx->pc = 0x1F54CCu;
    {
        const bool branch_taken_0x1f54cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F54D0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1f54cc) {
            ctx->pc = 0x1F54E4u;
            goto label_1f54e4;
        }
    }
    ctx->pc = 0x1F54D4u;
label_1f54d4:
    // 0x1f54d4: 0x24020005
    ctx->pc = 0x1f54d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f54d8: 0xa2020001
    ctx->pc = 0x1f54d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1f54dc:
    // 0x1f54dc: 0x102d
    ctx->pc = 0x1f54dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f54e0: 0xdfbf0010
    ctx->pc = 0x1f54e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f54e4:
    // 0x1f54e4: 0x7bb00000
    ctx->pc = 0x1f54e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f54e8: 0x3e00008
    ctx->pc = 0x1F54E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F54ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F54D4u: goto label_1f54d4;
            case 0x1F54DCu: goto label_1f54dc;
            case 0x1F54E4u: goto label_1f54e4;
            case 0x1F555Cu: goto label_1f555c;
            case 0x1F557Cu: goto label_1f557c;
            case 0x1F55B8u: goto label_1f55b8;
            case 0x1F55D0u: goto label_1f55d0;
            case 0x1F55D8u: goto label_1f55d8;
            case 0x1F55DCu: goto label_1f55dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F54F0u;
    // 0x1f54f0: 0x27bdffb0
    ctx->pc = 0x1f54f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f54f4: 0x3c010036
    ctx->pc = 0x1f54f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f54f8: 0xffbf0040
    ctx->pc = 0x1f54f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f54fc: 0x7fb30030
    ctx->pc = 0x1f54fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f5500: 0x7fb20020
    ctx->pc = 0x1f5500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f5504: 0x7fb10010
    ctx->pc = 0x1f5504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f5508: 0x7fb00000
    ctx->pc = 0x1f5508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f550c: 0x8c22eaf0
    ctx->pc = 0x1f550cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294961904)));
    // 0x1f5510: 0x8c830024
    ctx->pc = 0x1f5510u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1f5514: 0x10400030
    ctx->pc = 0x1F5514u;
    {
        const bool branch_taken_0x1f5514 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5518u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f5514) {
            ctx->pc = 0x1F55D8u;
            goto label_1f55d8;
        }
    }
    ctx->pc = 0x1F551Cu;
    // 0x1f551c: 0x80630006
    ctx->pc = 0x1f551cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x1f5520: 0x2402ffff
    ctx->pc = 0x1f5520u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f5524: 0x1462000d
    ctx->pc = 0x1F5524u;
    {
        const bool branch_taken_0x1f5524 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1F5528u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x1f5524) {
            ctx->pc = 0x1F555Cu;
            goto label_1f555c;
        }
    }
    ctx->pc = 0x1F552Cu;
    // 0x1f552c: 0x24030007
    ctx->pc = 0x1f552cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f5530: 0xae62008c
    ctx->pc = 0x1f5530u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 2));
    // 0x1f5534: 0xa2630000
    ctx->pc = 0x1f5534u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f5538: 0x102d
    ctx->pc = 0x1f5538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f553c: 0xa2600001
    ctx->pc = 0x1f553cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5540: 0xa2600002
    ctx->pc = 0x1f5540u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5544: 0xa2600003
    ctx->pc = 0x1f5544u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5548: 0xa6600004
    ctx->pc = 0x1f5548u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f554c: 0xa6600006
    ctx->pc = 0x1f554cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5550: 0xa6600008
    ctx->pc = 0x1f5550u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5554: 0x10000021
    ctx->pc = 0x1F5554u;
    {
        const bool branch_taken_0x1f5554 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5558u;
        WRITE16(ADD32(GPR_U32(ctx, 19), 10), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1f5554) {
            ctx->pc = 0x1F55DCu;
            goto label_1f55dc;
        }
    }
    ctx->pc = 0x1F555Cu;
label_1f555c:
    // 0x1f555c: 0xc07d20c
    ctx->pc = 0x1F555Cu;
    SET_GPR_U32(ctx, 31, 0x1F5564u);
    ctx->pc = 0x1F4830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4830_0x1f4830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5564u; }
    }
    if (ctx->pc != 0x1F5564u) { return; }
    ctx->pc = 0x1F5564u;
    // 0x1f5564: 0x3052ffff
    ctx->pc = 0x1f5564u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1f5568: 0x12400019
    ctx->pc = 0x1F5568u;
    {
        const bool branch_taken_0x1f5568 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F556Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
        if (branch_taken_0x1f5568) {
            ctx->pc = 0x1F55D0u;
            goto label_1f55d0;
        }
    }
    ctx->pc = 0x1F5570u;
    // 0x1f5570: 0x882d
    ctx->pc = 0x1f5570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5574: 0x10000010
    ctx->pc = 0x1F5574u;
    {
        const bool branch_taken_0x1f5574 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5578u;
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294962096), (uint16_t)GPR_U32(ctx, 18));
        if (branch_taken_0x1f5574) {
            ctx->pc = 0x1F55B8u;
            goto label_1f55b8;
        }
    }
    ctx->pc = 0x1F557Cu;
label_1f557c:
    // 0x1f557c: 0xc07d224
    ctx->pc = 0x1F557Cu;
    SET_GPR_U32(ctx, 31, 0x1F5584u);
    ctx->pc = 0x1F5580u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 17), 2));
    ctx->pc = 0x1F4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4890_0x1f4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5584u; }
    }
    if (ctx->pc != 0x1F5584u) { return; }
    ctx->pc = 0x1F5584u;
    // 0x1f5584: 0x3c030036
    ctx->pc = 0x1f5584u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x1f5588: 0x112280
    ctx->pc = 0x1f5588u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 10));
    // 0x1f558c: 0x2463ebb0
    ctx->pc = 0x1f558cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294962096));
    // 0x1f5590: 0x26310001
    ctx->pc = 0x1f5590u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f5594: 0x702821
    ctx->pc = 0x1f5594u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1f5598: 0xaca20004
    ctx->pc = 0x1f5598u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1f559c: 0x3c030035
    ctx->pc = 0x1f559cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x1f55a0: 0x3c020036
    ctx->pc = 0x1f55a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x1f55a4: 0x24635ad0
    ctx->pc = 0x1f55a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 23248));
    // 0x1f55a8: 0x2442ec50
    ctx->pc = 0x1f55a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962256));
    // 0x1f55ac: 0x641821
    ctx->pc = 0x1f55acu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f55b0: 0x501021
    ctx->pc = 0x1f55b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1f55b4: 0xac430000
    ctx->pc = 0x1f55b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1f55b8:
    // 0x1f55b8: 0x232102a
    ctx->pc = 0x1f55b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x1f55bc: 0x1440ffef
    ctx->pc = 0x1F55BCu;
    {
        const bool branch_taken_0x1f55bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F55C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f55bc) {
            ctx->pc = 0x1F557Cu;
            goto label_1f557c;
        }
    }
    ctx->pc = 0x1F55C4u;
    // 0x1f55c4: 0x24020006
    ctx->pc = 0x1f55c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f55c8: 0x10000003
    ctx->pc = 0x1F55C8u;
    {
        const bool branch_taken_0x1f55c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F55CCu;
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1f55c8) {
            ctx->pc = 0x1F55D8u;
            goto label_1f55d8;
        }
    }
    ctx->pc = 0x1F55D0u;
label_1f55d0:
    // 0x1f55d0: 0x24020008
    ctx->pc = 0x1f55d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f55d4: 0xa2620001
    ctx->pc = 0x1f55d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_1f55d8:
    // 0x1f55d8: 0x102d
    ctx->pc = 0x1f55d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f55dc:
    // 0x1f55dc: 0xdfbf0040
    ctx->pc = 0x1f55dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f55e0: 0x7bb30030
    ctx->pc = 0x1f55e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f55e4: 0x7bb20020
    ctx->pc = 0x1f55e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f55e8: 0x7bb10010
    ctx->pc = 0x1f55e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f55ec: 0x7bb00000
    ctx->pc = 0x1f55ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f55f0: 0x3e00008
    ctx->pc = 0x1F55F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F55F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F54D4u: goto label_1f54d4;
            case 0x1F54DCu: goto label_1f54dc;
            case 0x1F54E4u: goto label_1f54e4;
            case 0x1F555Cu: goto label_1f555c;
            case 0x1F557Cu: goto label_1f557c;
            case 0x1F55B8u: goto label_1f55b8;
            case 0x1F55D0u: goto label_1f55d0;
            case 0x1F55D8u: goto label_1f55d8;
            case 0x1F55DCu: goto label_1f55dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F55F8u;
    // 0x1f55f8: 0x0
    ctx->pc = 0x1f55f8u;
    // NOP
    // 0x1f55fc: 0x0
    ctx->pc = 0x1f55fcu;
    // NOP
}
