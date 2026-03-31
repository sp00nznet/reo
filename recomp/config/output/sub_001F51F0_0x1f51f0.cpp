#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F51F0
// Address: 0x1f51f0 - 0x1f5450
void sub_001F51F0_0x1f51f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f51f0u;

    // 0x1f51f0: 0x27bdffd0
    ctx->pc = 0x1f51f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f51f4: 0x3c010036
    ctx->pc = 0x1f51f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f51f8: 0xffbf0020
    ctx->pc = 0x1f51f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f51fc: 0x7fb10010
    ctx->pc = 0x1f51fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f5200: 0x7fb00000
    ctx->pc = 0x1f5200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f5204: 0x8c22eaf0
    ctx->pc = 0x1f5204u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294961904)));
    // 0x1f5208: 0x1040003a
    ctx->pc = 0x1F5208u;
    {
        const bool branch_taken_0x1f5208 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F520Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f5208) {
            ctx->pc = 0x1F52F4u;
            goto label_1f52f4;
        }
    }
    ctx->pc = 0x1F5210u;
    // 0x1f5210: 0x3c040036
    ctx->pc = 0x1f5210u;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
    // 0x1f5214: 0xc042c56
    ctx->pc = 0x1F5214u;
    SET_GPR_U32(ctx, 31, 0x1F521Cu);
    ctx->pc = 0x1F5218u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962209));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F521Cu; }
    }
    if (ctx->pc != 0x1F521Cu) { return; }
    ctx->pc = 0x1F521Cu;
    // 0x1f521c: 0x2443000c
    ctx->pc = 0x1f521cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 12));
    // 0x1f5220: 0x24020300
    ctx->pc = 0x1f5220u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 768));
    // 0x1f5224: 0x438023
    ctx->pc = 0x1f5224u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f5228: 0x8e230064
    ctx->pc = 0x1f5228u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1f522c: 0x8e22003c
    ctx->pc = 0x1f522cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1f5230: 0x621023
    ctx->pc = 0x1f5230u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f5234: 0x202082b
    ctx->pc = 0x1f5234u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f5238: 0x41800a
    ctx->pc = 0x1f5238u;
    if (GPR_U32(ctx, 1) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
    // 0x1f523c: 0x220202d
    ctx->pc = 0x1f523cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5240: 0x2405000a
    ctx->pc = 0x1f5240u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f5244: 0x24060001
    ctx->pc = 0x1f5244u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5248: 0xc07d284
    ctx->pc = 0x1F5248u;
    SET_GPR_U32(ctx, 31, 0x1F5250u);
    ctx->pc = 0x1F524Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4A10_0x1f4a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5250u; }
    }
    if (ctx->pc != 0x1F5250u) { return; }
    ctx->pc = 0x1F5250u;
    // 0x1f5250: 0x3c040036
    ctx->pc = 0x1f5250u;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
    // 0x1f5254: 0xc042c56
    ctx->pc = 0x1F5254u;
    SET_GPR_U32(ctx, 31, 0x1F525Cu);
    ctx->pc = 0x1F5258u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962209));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F525Cu; }
    }
    if (ctx->pc != 0x1F525Cu) { return; }
    ctx->pc = 0x1F525Cu;
    // 0x1f525c: 0x3c050036
    ctx->pc = 0x1f525cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)54 << 16));
    // 0x1f5260: 0x40302d
    ctx->pc = 0x1f5260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5264: 0x220202d
    ctx->pc = 0x1f5264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5268: 0xc07d330
    ctx->pc = 0x1F5268u;
    SET_GPR_U32(ctx, 31, 0x1F5270u);
    ctx->pc = 0x1F526Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294962209));
    ctx->pc = 0x1F4CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4CC0_0x1f4cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5270u; }
    }
    if (ctx->pc != 0x1F5270u) { return; }
    ctx->pc = 0x1F5270u;
    // 0x1f5270: 0x8e25003c
    ctx->pc = 0x1f5270u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1f5274: 0xc07d308
    ctx->pc = 0x1F5274u;
    SET_GPR_U32(ctx, 31, 0x1F527Cu);
    ctx->pc = 0x1F5278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4C20_0x1f4c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F527Cu; }
    }
    if (ctx->pc != 0x1F527Cu) { return; }
    ctx->pc = 0x1F527Cu;
    // 0x1f527c: 0x3205ffff
    ctx->pc = 0x1f527cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 16), 65535));
    // 0x1f5280: 0xc07d2e4
    ctx->pc = 0x1F5280u;
    SET_GPR_U32(ctx, 31, 0x1F5288u);
    ctx->pc = 0x1F5284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4B90_0x1f4b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5288u; }
    }
    if (ctx->pc != 0x1F5288u) { return; }
    ctx->pc = 0x1F5288u;
    // 0x1f5288: 0x9623002c
    ctx->pc = 0x1f5288u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1f528c: 0x8e22001c
    ctx->pc = 0x1f528cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1f5290: 0x32200
    ctx->pc = 0x1f5290u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1f5294: 0x31a03
    ctx->pc = 0x1f5294u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1f5298: 0x3084ff00
    ctx->pc = 0x1f5298u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65280));
    // 0x1f529c: 0x306300ff
    ctx->pc = 0x1f529cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x1f52a0: 0x831825
    ctx->pc = 0x1f52a0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f52a4: 0xa4430000
    ctx->pc = 0x1f52a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f52a8: 0x8e22002c
    ctx->pc = 0x1f52a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1f52ac: 0x8e240010
    ctx->pc = 0x1f52acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1f52b0: 0x8e25001c
    ctx->pc = 0x1f52b0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1f52b4: 0x24420008
    ctx->pc = 0x1f52b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1f52b8: 0x2343c
    ctx->pc = 0x1f52b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f52bc: 0xc075aa4
    ctx->pc = 0x1F52BCu;
    SET_GPR_U32(ctx, 31, 0x1F52C4u);
    ctx->pc = 0x1F52C0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    ctx->pc = 0x1D6A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6A90_0x1d6a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F52C4u; }
    }
    if (ctx->pc != 0x1F52C4u) { return; }
    ctx->pc = 0x1F52C4u;
    // 0x1f52c4: 0xc07d16c
    ctx->pc = 0x1F52C4u;
    SET_GPR_U32(ctx, 31, 0x1F52CCu);
    ctx->pc = 0x1F52C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F45B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F45B0_0x1f45b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F52CCu; }
    }
    if (ctx->pc != 0x1F52CCu) { return; }
    ctx->pc = 0x1F52CCu;
    // 0x1f52cc: 0x2841ffff
    ctx->pc = 0x1f52ccu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 4294967295));
    // 0x1f52d0: 0x10200003
    ctx->pc = 0x1F52D0u;
    {
        const bool branch_taken_0x1f52d0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f52d0) {
            ctx->pc = 0x1F52E0u;
            goto label_1f52e0;
        }
    }
    ctx->pc = 0x1F52D8u;
    // 0x1f52d8: 0x10000008
    ctx->pc = 0x1F52D8u;
    {
        const bool branch_taken_0x1f52d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F52DCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1f52d8) {
            ctx->pc = 0x1F52FCu;
            goto label_1f52fc;
        }
    }
    ctx->pc = 0x1F52E0u;
label_1f52e0:
    // 0x1f52e0: 0x8e23003c
    ctx->pc = 0x1f52e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1f52e4: 0x24020003
    ctx->pc = 0x1f52e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f52e8: 0x701821
    ctx->pc = 0x1f52e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1f52ec: 0xae23003c
    ctx->pc = 0x1f52ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x1f52f0: 0xa2220001
    ctx->pc = 0x1f52f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_1f52f4:
    // 0x1f52f4: 0x102d
    ctx->pc = 0x1f52f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f52f8: 0xdfbf0020
    ctx->pc = 0x1f52f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f52fc:
    // 0x1f52fc: 0x7bb10010
    ctx->pc = 0x1f52fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5300: 0x7bb00000
    ctx->pc = 0x1f5300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5304: 0x3e00008
    ctx->pc = 0x1F5304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5308u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F52E0u: goto label_1f52e0;
            case 0x1F52F4u: goto label_1f52f4;
            case 0x1F52FCu: goto label_1f52fc;
            case 0x1F5378u: goto label_1f5378;
            case 0x1F5394u: goto label_1f5394;
            case 0x1F53CCu: goto label_1f53cc;
            case 0x1F53FCu: goto label_1f53fc;
            case 0x1F5428u: goto label_1f5428;
            case 0x1F542Cu: goto label_1f542c;
            case 0x1F5430u: goto label_1f5430;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F530Cu;
    // 0x1f530c: 0x0
    ctx->pc = 0x1f530cu;
    // NOP
    // 0x1f5310: 0x27bdffa0
    ctx->pc = 0x1f5310u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f5314: 0x3c010036
    ctx->pc = 0x1f5314u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5318: 0xffbf0030
    ctx->pc = 0x1f5318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f531c: 0x7fb20020
    ctx->pc = 0x1f531cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f5320: 0x7fb10010
    ctx->pc = 0x1f5320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f5324: 0x7fb00000
    ctx->pc = 0x1f5324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f5328: 0x80882d
    ctx->pc = 0x1f5328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f532c: 0x8c22eaf0
    ctx->pc = 0x1f532cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294961904)));
    // 0x1f5330: 0x1040003e
    ctx->pc = 0x1F5330u;
    {
        const bool branch_taken_0x1f5330 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5334u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f5330) {
            ctx->pc = 0x1F542Cu;
            goto label_1f542c;
        }
    }
    ctx->pc = 0x1F5338u;
    // 0x1f5338: 0x27a50040
    ctx->pc = 0x1f5338u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f533c: 0xc07d244
    ctx->pc = 0x1F533Cu;
    SET_GPR_U32(ctx, 31, 0x1F5344u);
    ctx->pc = 0x1F5340u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1F4910u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4910_0x1f4910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5344u; }
    }
    if (ctx->pc != 0x1F5344u) { return; }
    ctx->pc = 0x1F5344u;
    // 0x1f5344: 0x441000c
    ctx->pc = 0x1F5344u;
    {
        const bool branch_taken_0x1f5344 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F5348u;
        SET_GPR_U32(ctx, 5, ((uint32_t)54 << 16));
        if (branch_taken_0x1f5344) {
            ctx->pc = 0x1F5378u;
            goto label_1f5378;
        }
    }
    ctx->pc = 0x1F534Cu;
    // 0x1f534c: 0x2403ffff
    ctx->pc = 0x1f534cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f5350: 0x24020007
    ctx->pc = 0x1f5350u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f5354: 0xae23008c
    ctx->pc = 0x1f5354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 3));
    // 0x1f5358: 0xa2220000
    ctx->pc = 0x1f5358u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f535c: 0xa2200001
    ctx->pc = 0x1f535cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5360: 0xa2200002
    ctx->pc = 0x1f5360u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5364: 0xa2200003
    ctx->pc = 0x1f5364u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5368: 0xa6200004
    ctx->pc = 0x1f5368u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f536c: 0xa6200006
    ctx->pc = 0x1f536cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5370: 0xa6200008
    ctx->pc = 0x1f5370u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5374: 0xa620000a
    ctx->pc = 0x1f5374u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 0));
label_1f5378:
    // 0x1f5378: 0x27a40040
    ctx->pc = 0x1f5378u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f537c: 0xc042b9e
    ctx->pc = 0x1F537Cu;
    SET_GPR_U32(ctx, 31, 0x1F5384u);
    ctx->pc = 0x1F5380u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294962209));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5384u; }
    }
    if (ctx->pc != 0x1F5384u) { return; }
    ctx->pc = 0x1F5384u;
    // 0x1f5384: 0x10400003
    ctx->pc = 0x1F5384u;
    {
        const bool branch_taken_0x1f5384 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5388u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f5384) {
            ctx->pc = 0x1F5394u;
            goto label_1f5394;
        }
    }
    ctx->pc = 0x1F538Cu;
    // 0x1f538c: 0x10000028
    ctx->pc = 0x1F538Cu;
    {
        const bool branch_taken_0x1f538c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5390u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967233));
        if (branch_taken_0x1f538c) {
            ctx->pc = 0x1F5430u;
            goto label_1f5430;
        }
    }
    ctx->pc = 0x1F5394u;
label_1f5394:
    // 0x1f5394: 0xc07d224
    ctx->pc = 0x1F5394u;
    SET_GPR_U32(ctx, 31, 0x1F539Cu);
    ctx->pc = 0x1F4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4890_0x1f4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F539Cu; }
    }
    if (ctx->pc != 0x1F539Cu) { return; }
    ctx->pc = 0x1F539Cu;
    // 0x1f539c: 0x40902d
    ctx->pc = 0x1f539cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f53a0: 0x34018000
    ctx->pc = 0x1f53a0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 0), 32768));
    // 0x1f53a4: 0x241082a
    ctx->pc = 0x1f53a4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 1)));
    // 0x1f53a8: 0x10200008
    ctx->pc = 0x1F53A8u;
    {
        const bool branch_taken_0x1f53a8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F53ACu;
        SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
        if (branch_taken_0x1f53a8) {
            ctx->pc = 0x1F53CCu;
            goto label_1f53cc;
        }
    }
    ctx->pc = 0x1F53B0u;
    // 0x1f53b0: 0x34028000
    ctx->pc = 0x1f53b0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
    // 0x1f53b4: 0x2463f080
    ctx->pc = 0x1f53b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294963328));
    // 0x1f53b8: 0x523023
    ctx->pc = 0x1f53b8u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1f53bc: 0x722821
    ctx->pc = 0x1f53bcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1f53c0: 0xc07d244
    ctx->pc = 0x1F53C0u;
    SET_GPR_U32(ctx, 31, 0x1F53C8u);
    ctx->pc = 0x1F53C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4910u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4910_0x1f4910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F53C8u; }
    }
    if (ctx->pc != 0x1F53C8u) { return; }
    ctx->pc = 0x1F53C8u;
    // 0x1f53c8: 0x40802d
    ctx->pc = 0x1f53c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f53cc:
    // 0x1f53cc: 0x601000b
    ctx->pc = 0x1F53CCu;
    {
        const bool branch_taken_0x1f53cc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1F53D0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1f53cc) {
            ctx->pc = 0x1F53FCu;
            goto label_1f53fc;
        }
    }
    ctx->pc = 0x1F53D4u;
    // 0x1f53d4: 0x24020007
    ctx->pc = 0x1f53d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f53d8: 0xae23008c
    ctx->pc = 0x1f53d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 3));
    // 0x1f53dc: 0xa2220000
    ctx->pc = 0x1f53dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f53e0: 0xa2200001
    ctx->pc = 0x1f53e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f53e4: 0xa2200002
    ctx->pc = 0x1f53e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f53e8: 0xa2200003
    ctx->pc = 0x1f53e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f53ec: 0xa6200004
    ctx->pc = 0x1f53ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f53f0: 0xa6200006
    ctx->pc = 0x1f53f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f53f4: 0xa6200008
    ctx->pc = 0x1f53f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f53f8: 0xa620000a
    ctx->pc = 0x1f53f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 0));
label_1f53fc:
    // 0x1f53fc: 0x8e230064
    ctx->pc = 0x1f53fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1f5400: 0x2501021
    ctx->pc = 0x1f5400u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1f5404: 0x14620008
    ctx->pc = 0x1F5404u;
    {
        const bool branch_taken_0x1f5404 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1F5408u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1f5404) {
            ctx->pc = 0x1F5428u;
            goto label_1f5428;
        }
    }
    ctx->pc = 0x1F540Cu;
    // 0x1f540c: 0x3c030036
    ctx->pc = 0x1f540cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x1f5410: 0x3c010036
    ctx->pc = 0x1f5410u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5414: 0x2463f080
    ctx->pc = 0x1f5414u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294963328));
    // 0x1f5418: 0x2402000c
    ctx->pc = 0x1f5418u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f541c: 0xac23ec40
    ctx->pc = 0x1f541cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962240), GPR_U32(ctx, 3));
    // 0x1f5420: 0x10000002
    ctx->pc = 0x1F5420u;
    {
        const bool branch_taken_0x1f5420 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5424u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1f5420) {
            ctx->pc = 0x1F542Cu;
            goto label_1f542c;
        }
    }
    ctx->pc = 0x1F5428u;
label_1f5428:
    // 0x1f5428: 0xa2220001
    ctx->pc = 0x1f5428u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_1f542c:
    // 0x1f542c: 0x102d
    ctx->pc = 0x1f542cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5430:
    // 0x1f5430: 0xdfbf0030
    ctx->pc = 0x1f5430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f5434: 0x7bb20020
    ctx->pc = 0x1f5434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5438: 0x7bb10010
    ctx->pc = 0x1f5438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f543c: 0x7bb00000
    ctx->pc = 0x1f543cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5440: 0x3e00008
    ctx->pc = 0x1F5440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5444u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F52E0u: goto label_1f52e0;
            case 0x1F52F4u: goto label_1f52f4;
            case 0x1F52FCu: goto label_1f52fc;
            case 0x1F5378u: goto label_1f5378;
            case 0x1F5394u: goto label_1f5394;
            case 0x1F53CCu: goto label_1f53cc;
            case 0x1F53FCu: goto label_1f53fc;
            case 0x1F5428u: goto label_1f5428;
            case 0x1F542Cu: goto label_1f542c;
            case 0x1F5430u: goto label_1f5430;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F5448u;
    // 0x1f5448: 0x0
    ctx->pc = 0x1f5448u;
    // NOP
    // 0x1f544c: 0x0
    ctx->pc = 0x1f544cu;
    // NOP
}
