#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_11f408
// Address: 0x11f408 - 0x11f618
void entry_11f408_0x11f618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11f408u;

    // 0x11f408: 0x27bdff90
    ctx->pc = 0x11f408u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11f40c: 0xffb50050
    ctx->pc = 0x11f40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x11f410: 0xffb40040
    ctx->pc = 0x11f410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11f414: 0x80a82d
    ctx->pc = 0x11f414u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f418: 0xffb30030
    ctx->pc = 0x11f418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11f41c: 0xc0a02d
    ctx->pc = 0x11f41cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f420: 0xffbf0060
    ctx->pc = 0x11f420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x11f424: 0xa0982d
    ctx->pc = 0x11f424u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f428: 0xffb20020
    ctx->pc = 0x11f428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11f42c: 0xffb10010
    ctx->pc = 0x11f42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11f430: 0x16600004
    ctx->pc = 0x11F430u;
    {
        const bool branch_taken_0x11f430 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x11F434u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x11f430) {
            ctx->pc = 0x11F444u;
            goto label_11f444;
        }
    }
    ctx->pc = 0x11F438u;
    // 0x11f438: 0x3c028000
    ctx->pc = 0x11f438u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x11f43c: 0x10000025
    ctx->pc = 0x11F43Cu;
    {
        const bool branch_taken_0x11f43c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F440u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 22));
        if (branch_taken_0x11f43c) {
            ctx->pc = 0x11F4D4u;
            goto label_11f4d4;
        }
    }
    ctx->pc = 0x11F444u;
label_11f444:
    // 0x11f444: 0x3c120026
    ctx->pc = 0x11f444u;
    SET_GPR_U32(ctx, 18, ((uint32_t)38 << 16));
    // 0x11f448: 0x8e501d00
    ctx->pc = 0x11f448u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 7424)));
    // 0x11f44c: 0x12000003
    ctx->pc = 0x11F44Cu;
    {
        const bool branch_taken_0x11f44c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x11f44c) {
            ctx->pc = 0x11F45Cu;
            goto label_11f45c;
        }
    }
    ctx->pc = 0x11F454u;
    // 0x11f454: 0x8e020000
    ctx->pc = 0x11f454u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11f458: 0xae421d00
    ctx->pc = 0x11f458u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7424), GPR_U32(ctx, 2));
label_11f45c:
    // 0x11f45c: 0x16000004
    ctx->pc = 0x11F45Cu;
    {
        const bool branch_taken_0x11f45c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x11f45c) {
            ctx->pc = 0x11F470u;
            goto label_11f470;
        }
    }
    ctx->pc = 0x11F464u;
    // 0x11f464: 0x3c028000
    ctx->pc = 0x11f464u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x11f468: 0x1000001a
    ctx->pc = 0x11F468u;
    {
        const bool branch_taken_0x11f468 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F46Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32773));
        if (branch_taken_0x11f468) {
            ctx->pc = 0x11F4D4u;
            goto label_11f4d4;
        }
    }
    ctx->pc = 0x11F470u;
label_11f470:
    // 0x11f470: 0xc047a1c
    ctx->pc = 0x11F470u;
    SET_GPR_U32(ctx, 31, 0x11F478u);
    ctx->pc = 0x11E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E870_0x11e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F478u; }
    }
    if (ctx->pc != 0x11F478u) { return; }
    ctx->pc = 0x11F478u;
    // 0x11f478: 0x40882d
    ctx->pc = 0x11f478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f47c: 0x6230007
    ctx->pc = 0x11F47Cu;
    {
        const bool branch_taken_0x11f47c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x11f47c) {
            ctx->pc = 0x11F480u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
            ctx->pc = 0x11F49Cu;
            goto label_11f49c;
        }
    }
    ctx->pc = 0x11F484u;
    // 0x11f484: 0x8e431d00
    ctx->pc = 0x11f484u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7424)));
    // 0x11f488: 0xae501d00
    ctx->pc = 0x11f488u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7424), GPR_U32(ctx, 16));
    // 0x11f48c: 0xae030000
    ctx->pc = 0x11f48cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x11f490: 0xae000004
    ctx->pc = 0x11f490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x11f494: 0x10000010
    ctx->pc = 0x11F494u;
    {
        const bool branch_taken_0x11f494 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F498u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x11f494) {
            ctx->pc = 0x11F4D8u;
            goto label_11f4d8;
        }
    }
    ctx->pc = 0x11F49Cu;
label_11f49c:
    // 0x11f49c: 0x3c060012
    ctx->pc = 0x11f49cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)18 << 16));
    // 0x11f4a0: 0xae14000c
    ctx->pc = 0x11f4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x11f4a4: 0x24c6f278
    ctx->pc = 0x11f4a4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294963832));
    // 0x11f4a8: 0xae110004
    ctx->pc = 0x11f4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x11f4ac: 0x2a0282d
    ctx->pc = 0x11f4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f4b0: 0x220202d
    ctx->pc = 0x11f4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f4b4: 0xc047bc2
    ctx->pc = 0x11F4B4u;
    SET_GPR_U32(ctx, 31, 0x11F4BCu);
    ctx->pc = 0x11F4B8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11EF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EF08_0x11ef08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F4BCu; }
    }
    if (ctx->pc != 0x11F4BCu) { return; }
    ctx->pc = 0x11F4BCu;
    // 0x11f4bc: 0xc047ab2
    ctx->pc = 0x11F4BCu;
    SET_GPR_U32(ctx, 31, 0x11F4C4u);
    ctx->pc = 0x11F4C0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11EAC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EAC8_0x11eac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F4C4u; }
    }
    if (ctx->pc != 0x11F4C4u) { return; }
    ctx->pc = 0x11F4C4u;
    // 0x11f4c4: 0x101100
    ctx->pc = 0x11f4c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 4));
    // 0x11f4c8: 0x322300fe
    ctx->pc = 0x11f4c8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), 254));
    // 0x11f4cc: 0x431025
    ctx->pc = 0x11f4ccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11f4d0: 0x34420001
    ctx->pc = 0x11f4d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_11f4d4:
    // 0x11f4d4: 0xdfbf0060
    ctx->pc = 0x11f4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_11f4d8:
    // 0x11f4d8: 0xdfb50050
    ctx->pc = 0x11f4d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11f4dc: 0xdfb40040
    ctx->pc = 0x11f4dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f4e0: 0xdfb30030
    ctx->pc = 0x11f4e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f4e4: 0xdfb20020
    ctx->pc = 0x11f4e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f4e8: 0xdfb10010
    ctx->pc = 0x11f4e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f4ec: 0xdfb00000
    ctx->pc = 0x11f4ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f4f0: 0x3e00008
    ctx->pc = 0x11F4F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F4F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F444u: goto label_11f444;
            case 0x11F45Cu: goto label_11f45c;
            case 0x11F470u: goto label_11f470;
            case 0x11F49Cu: goto label_11f49c;
            case 0x11F4D4u: goto label_11f4d4;
            case 0x11F4D8u: goto label_11f4d8;
            case 0x11F538u: goto label_11f538;
            case 0x11F548u: goto label_11f548;
            case 0x11F554u: goto label_11f554;
            case 0x11F588u: goto label_11f588;
            case 0x11F5CCu: goto label_11f5cc;
            case 0x11F5D8u: goto label_11f5d8;
            case 0x11F608u: goto label_11f608;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F4F8u;
    // 0x11f4f8: 0x27bdffc0
    ctx->pc = 0x11f4f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11f4fc: 0xffb00000
    ctx->pc = 0x11f4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11f500: 0x80802d
    ctx->pc = 0x11f500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f504: 0xffb10010
    ctx->pc = 0x11f504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11f508: 0x101202
    ctx->pc = 0x11f508u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 16), 8));
    // 0x11f50c: 0xffb20020
    ctx->pc = 0x11f50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11f510: 0xffbf0030
    ctx->pc = 0x11f510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11f514: 0xc047598
    ctx->pc = 0x11F514u;
    SET_GPR_U32(ctx, 31, 0x11F51Cu);
    ctx->pc = 0x11F518u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 2), 4));
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F51Cu; }
    }
    if (ctx->pc != 0x11F51Cu) { return; }
    ctx->pc = 0x11F51Cu;
    // 0x11f51c: 0x6000006
    ctx->pc = 0x11F51Cu;
    {
        const bool branch_taken_0x11f51c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x11F520u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11f51c) {
            ctx->pc = 0x11F538u;
            goto label_11f538;
        }
    }
    ctx->pc = 0x11F524u;
    // 0x11f524: 0x8e220004
    ctx->pc = 0x11f524u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x11f528: 0x2021026
    ctx->pc = 0x11f528u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11f52c: 0x304200ff
    ctx->pc = 0x11f52cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x11f530: 0x10400008
    ctx->pc = 0x11F530u;
    {
        const bool branch_taken_0x11f530 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x11f530) {
            ctx->pc = 0x11F554u;
            goto label_11f554;
        }
    }
    ctx->pc = 0x11F538u;
label_11f538:
    // 0x11f538: 0x12400003
    ctx->pc = 0x11F538u;
    {
        const bool branch_taken_0x11f538 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x11f538) {
            ctx->pc = 0x11F548u;
            goto label_11f548;
        }
    }
    ctx->pc = 0x11F540u;
    // 0x11f540: 0xc0475ae
    ctx->pc = 0x11F540u;
    SET_GPR_U32(ctx, 31, 0x11F548u);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F548u; }
    }
    if (ctx->pc != 0x11F548u) { return; }
    ctx->pc = 0x11F548u;
label_11f548:
    // 0x11f548: 0x3c028000
    ctx->pc = 0x11f548u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x11f54c: 0x1000000e
    ctx->pc = 0x11F54Cu;
    {
        const bool branch_taken_0x11f54c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F550u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32770));
        if (branch_taken_0x11f54c) {
            ctx->pc = 0x11F588u;
            goto label_11f588;
        }
    }
    ctx->pc = 0x11F554u;
label_11f554:
    // 0x11f554: 0x8e240004
    ctx->pc = 0x11f554u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x11f558: 0xc047a72
    ctx->pc = 0x11F558u;
    SET_GPR_U32(ctx, 31, 0x11F560u);
    ctx->pc = 0x11E9C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E9C8_0x11e9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F560u; }
    }
    if (ctx->pc != 0x11F560u) { return; }
    ctx->pc = 0x11F560u;
    // 0x11f560: 0x3c030026
    ctx->pc = 0x11f560u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x11f564: 0x8c621d00
    ctx->pc = 0x11f564u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 7424)));
    // 0x11f568: 0xac711d00
    ctx->pc = 0x11f568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7424), GPR_U32(ctx, 17));
    // 0x11f56c: 0xae220000
    ctx->pc = 0x11f56cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11f570: 0xae200004
    ctx->pc = 0x11f570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x11f574: 0x12400004
    ctx->pc = 0x11F574u;
    {
        const bool branch_taken_0x11f574 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F578u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11f574) {
            ctx->pc = 0x11F588u;
            goto label_11f588;
        }
    }
    ctx->pc = 0x11F57Cu;
    // 0x11f57c: 0xc0475ae
    ctx->pc = 0x11F57Cu;
    SET_GPR_U32(ctx, 31, 0x11F584u);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F584u; }
    }
    if (ctx->pc != 0x11F584u) { return; }
    ctx->pc = 0x11F584u;
    // 0x11f584: 0x102d
    ctx->pc = 0x11f584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f588:
    // 0x11f588: 0xdfbf0030
    ctx->pc = 0x11f588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f58c: 0xdfb20020
    ctx->pc = 0x11f58cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f590: 0xdfb10010
    ctx->pc = 0x11f590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f594: 0xdfb00000
    ctx->pc = 0x11f594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f598: 0x3e00008
    ctx->pc = 0x11F598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F59Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F444u: goto label_11f444;
            case 0x11F45Cu: goto label_11f45c;
            case 0x11F470u: goto label_11f470;
            case 0x11F49Cu: goto label_11f49c;
            case 0x11F4D4u: goto label_11f4d4;
            case 0x11F4D8u: goto label_11f4d8;
            case 0x11F538u: goto label_11f538;
            case 0x11F548u: goto label_11f548;
            case 0x11F554u: goto label_11f554;
            case 0x11F588u: goto label_11f588;
            case 0x11F5CCu: goto label_11f5cc;
            case 0x11F5D8u: goto label_11f5d8;
            case 0x11F608u: goto label_11f608;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F5A0u;
    // 0x11f5a0: 0x27bdffe0
    ctx->pc = 0x11f5a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11f5a4: 0x41202
    ctx->pc = 0x11f5a4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 8));
    // 0x11f5a8: 0xffb00000
    ctx->pc = 0x11f5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11f5ac: 0xffbf0010
    ctx->pc = 0x11f5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11f5b0: 0x4800006
    ctx->pc = 0x11F5B0u;
    {
        const bool branch_taken_0x11f5b0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11F5B4u;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 2), 4));
        if (branch_taken_0x11f5b0) {
            ctx->pc = 0x11F5CCu;
            goto label_11f5cc;
        }
    }
    ctx->pc = 0x11F5B8u;
    // 0x11f5b8: 0x8e020004
    ctx->pc = 0x11f5b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11f5bc: 0x821026
    ctx->pc = 0x11f5bcu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11f5c0: 0x304200ff
    ctx->pc = 0x11f5c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x11f5c4: 0x10400004
    ctx->pc = 0x11F5C4u;
    {
        const bool branch_taken_0x11f5c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x11f5c4) {
            ctx->pc = 0x11F5D8u;
            goto label_11f5d8;
        }
    }
    ctx->pc = 0x11F5CCu;
label_11f5cc:
    // 0x11f5cc: 0x3c028000
    ctx->pc = 0x11f5ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x11f5d0: 0x1000000d
    ctx->pc = 0x11F5D0u;
    {
        const bool branch_taken_0x11f5d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F5D4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32770));
        if (branch_taken_0x11f5d0) {
            ctx->pc = 0x11F608u;
            goto label_11f608;
        }
    }
    ctx->pc = 0x11F5D8u;
label_11f5d8:
    // 0x11f5d8: 0x8e040004
    ctx->pc = 0x11f5d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11f5dc: 0xc047a4a
    ctx->pc = 0x11F5DCu;
    SET_GPR_U32(ctx, 31, 0x11F5E4u);
    ctx->pc = 0x11E928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E928_0x11e928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F5E4u; }
    }
    if (ctx->pc != 0x11F5E4u) { return; }
    ctx->pc = 0x11F5E4u;
    // 0x11f5e4: 0x40202d
    ctx->pc = 0x11f5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f5e8: 0x14800007
    ctx->pc = 0x11F5E8u;
    {
        const bool branch_taken_0x11f5e8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x11F5ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11f5e8) {
            ctx->pc = 0x11F608u;
            goto label_11f608;
        }
    }
    ctx->pc = 0x11F5F0u;
    // 0x11f5f0: 0x3c020026
    ctx->pc = 0x11f5f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x11f5f4: 0x8c431d00
    ctx->pc = 0x11f5f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 7424)));
    // 0x11f5f8: 0xac501d00
    ctx->pc = 0x11f5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7424), GPR_U32(ctx, 16));
    // 0x11f5fc: 0xae030000
    ctx->pc = 0x11f5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x11f600: 0xae000004
    ctx->pc = 0x11f600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x11f604: 0x80102d
    ctx->pc = 0x11f604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11f608:
    // 0x11f608: 0xdfbf0010
    ctx->pc = 0x11f608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f60c: 0xdfb00000
    ctx->pc = 0x11f60cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f610: 0x3e00008
    ctx->pc = 0x11F610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F614u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F444u: goto label_11f444;
            case 0x11F45Cu: goto label_11f45c;
            case 0x11F470u: goto label_11f470;
            case 0x11F49Cu: goto label_11f49c;
            case 0x11F4D4u: goto label_11f4d4;
            case 0x11F4D8u: goto label_11f4d8;
            case 0x11F538u: goto label_11f538;
            case 0x11F548u: goto label_11f548;
            case 0x11F554u: goto label_11f554;
            case 0x11F588u: goto label_11f588;
            case 0x11F5CCu: goto label_11f5cc;
            case 0x11F5D8u: goto label_11f5d8;
            case 0x11F608u: goto label_11f608;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F618u;
}
