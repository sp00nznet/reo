#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0037C470
// Address: 0x37c470 - 0x37d3e0
void sub_0037C470_0x37c470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x37c470u;

    // 0x37c470: 0x94850006
    ctx->pc = 0x37c470u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x37c474: 0x3c03003c
    ctx->pc = 0x37c474u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x37c478: 0x246384f8
    ctx->pc = 0x37c478u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294935800));
    // 0x37c47c: 0x24060001
    ctx->pc = 0x37c47cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c480: 0x3c01003c
    ctx->pc = 0x37c480u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x37c484: 0x30a7001f
    ctx->pc = 0x37c484u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 5), 31));
    // 0x37c488: 0x52943
    ctx->pc = 0x37c488u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
    // 0x37c48c: 0xe63004
    ctx->pc = 0x37c48cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
    // 0x37c490: 0x52880
    ctx->pc = 0x37c490u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x37c494: 0x652821
    ctx->pc = 0x37c494u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x37c498: 0x8ca30000
    ctx->pc = 0x37c498u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37c49c: 0x661825
    ctx->pc = 0x37c49cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x37c4a0: 0xaca30000
    ctx->pc = 0x37c4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x37c4a4: 0x8c238500
    ctx->pc = 0x37c4a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294935808)));
    // 0x37c4a8: 0x94840008
    ctx->pc = 0x37c4a8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x37c4ac: 0x3c01003c
    ctx->pc = 0x37c4acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x37c4b0: 0x641821
    ctx->pc = 0x37c4b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37c4b4: 0x3e00008
    ctx->pc = 0x37C4B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C4B8u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294935808), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37C564u: goto label_37c564;
            case 0x37C568u: goto label_37c568;
            case 0x37C594u: goto label_37c594;
            case 0x37C5C8u: goto label_37c5c8;
            case 0x37C5DCu: goto label_37c5dc;
            case 0x37C648u: goto label_37c648;
            case 0x37C658u: goto label_37c658;
            case 0x37C65Cu: goto label_37c65c;
            case 0x37C6A0u: goto label_37c6a0;
            case 0x37C6D8u: goto label_37c6d8;
            case 0x37C6E8u: goto label_37c6e8;
            case 0x37C718u: goto label_37c718;
            case 0x37C74Cu: goto label_37c74c;
            case 0x37C758u: goto label_37c758;
            case 0x37C75Cu: goto label_37c75c;
            case 0x37C79Cu: goto label_37c79c;
            case 0x37C7D4u: goto label_37c7d4;
            case 0x37C7E4u: goto label_37c7e4;
            case 0x37C81Cu: goto label_37c81c;
            case 0x37C838u: goto label_37c838;
            case 0x37C870u: goto label_37c870;
            case 0x37C8C8u: goto label_37c8c8;
            case 0x37C8F4u: goto label_37c8f4;
            case 0x37C908u: goto label_37c908;
            case 0x37C934u: goto label_37c934;
            case 0x37C948u: goto label_37c948;
            case 0x37C974u: goto label_37c974;
            case 0x37C988u: goto label_37c988;
            case 0x37C9B4u: goto label_37c9b4;
            case 0x37C9C8u: goto label_37c9c8;
            case 0x37C9F4u: goto label_37c9f4;
            case 0x37CA08u: goto label_37ca08;
            case 0x37CA34u: goto label_37ca34;
            case 0x37CA48u: goto label_37ca48;
            case 0x37CAA4u: goto label_37caa4;
            case 0x37CAB8u: goto label_37cab8;
            case 0x37CAC0u: goto label_37cac0;
            case 0x37CB2Cu: goto label_37cb2c;
            case 0x37CB3Cu: goto label_37cb3c;
            case 0x37CB40u: goto label_37cb40;
            case 0x37CB64u: goto label_37cb64;
            case 0x37CB80u: goto label_37cb80;
            case 0x37CB84u: goto label_37cb84;
            case 0x37CBA4u: goto label_37cba4;
            case 0x37CC44u: goto label_37cc44;
            case 0x37CC88u: goto label_37cc88;
            case 0x37CCC8u: goto label_37ccc8;
            case 0x37CCDCu: goto label_37ccdc;
            case 0x37CD00u: goto label_37cd00;
            case 0x37CD2Cu: goto label_37cd2c;
            case 0x37CD30u: goto label_37cd30;
            case 0x37CD68u: goto label_37cd68;
            case 0x37CD74u: goto label_37cd74;
            case 0x37CD84u: goto label_37cd84;
            case 0x37CDA8u: goto label_37cda8;
            case 0x37CDE0u: goto label_37cde0;
            case 0x37CDE4u: goto label_37cde4;
            case 0x37CE28u: goto label_37ce28;
            case 0x37CE44u: goto label_37ce44;
            case 0x37CE48u: goto label_37ce48;
            case 0x37CE98u: goto label_37ce98;
            case 0x37CEB4u: goto label_37ceb4;
            case 0x37CEB8u: goto label_37ceb8;
            case 0x37CEDCu: goto label_37cedc;
            case 0x37CF1Cu: goto label_37cf1c;
            case 0x37CF70u: goto label_37cf70;
            case 0x37CF7Cu: goto label_37cf7c;
            case 0x37CFA0u: goto label_37cfa0;
            case 0x37CFA4u: goto label_37cfa4;
            case 0x37CFBCu: goto label_37cfbc;
            case 0x37CFE0u: goto label_37cfe0;
            case 0x37CFF8u: goto label_37cff8;
            case 0x37D018u: goto label_37d018;
            case 0x37D028u: goto label_37d028;
            case 0x37D04Cu: goto label_37d04c;
            case 0x37D094u: goto label_37d094;
            case 0x37D0C4u: goto label_37d0c4;
            case 0x37D0D4u: goto label_37d0d4;
            case 0x37D0F8u: goto label_37d0f8;
            case 0x37D128u: goto label_37d128;
            case 0x37D134u: goto label_37d134;
            case 0x37D158u: goto label_37d158;
            case 0x37D1A8u: goto label_37d1a8;
            case 0x37D1D8u: goto label_37d1d8;
            case 0x37D1F8u: goto label_37d1f8;
            case 0x37D208u: goto label_37d208;
            case 0x37D210u: goto label_37d210;
            case 0x37D240u: goto label_37d240;
            case 0x37D2A4u: goto label_37d2a4;
            case 0x37D2C4u: goto label_37d2c4;
            case 0x37D2D4u: goto label_37d2d4;
            case 0x37D2DCu: goto label_37d2dc;
            case 0x37D2E4u: goto label_37d2e4;
            case 0x37D304u: goto label_37d304;
            case 0x37D308u: goto label_37d308;
            case 0x37D334u: goto label_37d334;
            case 0x37D398u: goto label_37d398;
            case 0x37D3B0u: goto label_37d3b0;
            case 0x37D3D8u: goto label_37d3d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37C4BCu;
    // 0x37c4bc: 0x0
    ctx->pc = 0x37c4bcu;
    // NOP
    // 0x37c4c0: 0x27bdff50
    ctx->pc = 0x37c4c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x37c4c4: 0x3c02004a
    ctx->pc = 0x37c4c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
    // 0x37c4c8: 0xffbf0090
    ctx->pc = 0x37c4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x37c4cc: 0x3c01003c
    ctx->pc = 0x37c4ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x37c4d0: 0x7fbe0080
    ctx->pc = 0x37c4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x37c4d4: 0x24425c30
    ctx->pc = 0x37c4d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23600));
    // 0x37c4d8: 0x7fb70070
    ctx->pc = 0x37c4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x37c4dc: 0x7fb60060
    ctx->pc = 0x37c4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x37c4e0: 0x7fb50050
    ctx->pc = 0x37c4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x37c4e4: 0x7fb40040
    ctx->pc = 0x37c4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x37c4e8: 0x7fb30030
    ctx->pc = 0x37c4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x37c4ec: 0x3c140032
    ctx->pc = 0x37c4ecu;
    SET_GPR_U32(ctx, 20, ((uint32_t)50 << 16));
    // 0x37c4f0: 0x7fb20020
    ctx->pc = 0x37c4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37c4f4: 0x3c13004c
    ctx->pc = 0x37c4f4u;
    SET_GPR_U32(ctx, 19, ((uint32_t)76 << 16));
    // 0x37c4f8: 0x7fb10010
    ctx->pc = 0x37c4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37c4fc: 0x3c12003c
    ctx->pc = 0x37c4fcu;
    SET_GPR_U32(ctx, 18, ((uint32_t)60 << 16));
    // 0x37c500: 0x7fb00000
    ctx->pc = 0x37c500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37c504: 0x2694fb60
    ctx->pc = 0x37c504u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294966112));
    // 0x37c508: 0xa0208505
    ctx->pc = 0x37c508u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294935813), (uint8_t)GPR_U32(ctx, 0));
    // 0x37c50c: 0x309000ff
    ctx->pc = 0x37c50cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 4), 255));
    // 0x37c510: 0x3c01003c
    ctx->pc = 0x37c510u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x37c514: 0xa3a400af
    ctx->pc = 0x37c514u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 4));
    // 0x37c518: 0xa0208506
    ctx->pc = 0x37c518u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294935814), (uint8_t)GPR_U32(ctx, 0));
    // 0x37c51c: 0x2673add0
    ctx->pc = 0x37c51cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294946256));
    // 0x37c520: 0x3c01003c
    ctx->pc = 0x37c520u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x37c524: 0x265284b0
    ctx->pc = 0x37c524u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294935728));
    // 0x37c528: 0xa4208508
    ctx->pc = 0x37c528u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294935816), (uint16_t)GPR_U32(ctx, 0));
    // 0x37c52c: 0x3c01004c
    ctx->pc = 0x37c52cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x37c530: 0x9024aded
    ctx->pc = 0x37c530u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946285)));
    // 0x37c534: 0x3c010031
    ctx->pc = 0x37c534u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x37c538: 0x41900
    ctx->pc = 0x37c538u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x37c53c: 0x90316686
    ctx->pc = 0x37c53cu;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 26246)));
    // 0x37c540: 0x642023
    ctx->pc = 0x37c540u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37c544: 0x418c0
    ctx->pc = 0x37c544u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x37c548: 0x831821
    ctx->pc = 0x37c548u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x37c54c: 0x31940
    ctx->pc = 0x37c54cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x37c550: 0x16000004
    ctx->pc = 0x37C550u;
    {
        const bool branch_taken_0x37c550 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x37C554u;
        SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x37c550) {
            ctx->pc = 0x37C564u;
            goto label_37c564;
        }
    }
    ctx->pc = 0x37C558u;
    // 0x37c558: 0x3c01008b
    ctx->pc = 0x37c558u;
    SET_GPR_U32(ctx, 1, ((uint32_t)139 << 16));
    // 0x37c55c: 0x10000002
    ctx->pc = 0x37C55Cu;
    {
        const bool branch_taken_0x37c55c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C560u;
        SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943411)));
        if (branch_taken_0x37c55c) {
            ctx->pc = 0x37C568u;
            goto label_37c568;
        }
    }
    ctx->pc = 0x37C564u;
label_37c564:
    // 0x37c564: 0xb82d
    ctx->pc = 0x37c564u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37c568:
    // 0x37c568: 0x1600001c
    ctx->pc = 0x37C568u;
    {
        const bool branch_taken_0x37c568 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x37c568) {
            ctx->pc = 0x37C5DCu;
            goto label_37c5dc;
        }
    }
    ctx->pc = 0x37C570u;
    // 0x37c570: 0xc06c0c0
    ctx->pc = 0x37C570u;
    SET_GPR_U32(ctx, 31, 0x37C578u);
    ctx->pc = 0x1B0300u;
    {
        auto targetFn = runtime->lookupFunction(0x1B0300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C578u; }
        if (ctx->pc != 0x37C578u) { return; }
    }
    ctx->pc = 0x37C578u;
    // 0x37c578: 0x24030001
    ctx->pc = 0x37c578u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c57c: 0x14430017
    ctx->pc = 0x37C57Cu;
    {
        const bool branch_taken_0x37c57c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x37C580u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37c57c) {
            ctx->pc = 0x37C5DCu;
            goto label_37c5dc;
        }
    }
    ctx->pc = 0x37C584u;
    // 0x37c584: 0xc20516c
    ctx->pc = 0x37C584u;
    SET_GPR_U32(ctx, 31, 0x37C58Cu);
    ctx->pc = 0x8145B0u;
    {
        auto targetFn = runtime->lookupFunction(0x8145B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C58Cu; }
        if (ctx->pc != 0x37C58Cu) { return; }
    }
    ctx->pc = 0x37C58Cu;
    // 0x37c58c: 0x1000000e
    ctx->pc = 0x37C58Cu;
    {
        const bool branch_taken_0x37c58c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C590u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37c58c) {
            ctx->pc = 0x37C5C8u;
            goto label_37c5c8;
        }
    }
    ctx->pc = 0x37C594u;
label_37c594:
    // 0x37c594: 0x3c02004a
    ctx->pc = 0x37c594u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
    // 0x37c598: 0x752023
    ctx->pc = 0x37c598u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x37c59c: 0x24425c30
    ctx->pc = 0x37c59cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23600));
    // 0x37c5a0: 0x418c0
    ctx->pc = 0x37c5a0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x37c5a4: 0x831821
    ctx->pc = 0x37c5a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x37c5a8: 0x31940
    ctx->pc = 0x37c5a8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x37c5ac: 0x43b021
    ctx->pc = 0x37c5acu;
    SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37c5b0: 0xc0df67c
    ctx->pc = 0x37C5B0u;
    SET_GPR_U32(ctx, 31, 0x37C5B8u);
    ctx->pc = 0x37C5B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x37D9F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0037D9F0_0x37d9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C5B8u; }
    }
    if (ctx->pc != 0x37C5B8u) { return; }
    ctx->pc = 0x37C5B8u;
    // 0x37c5b8: 0x92c50b98
    ctx->pc = 0x37c5b8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2968)));
    // 0x37c5bc: 0xc205134
    ctx->pc = 0x37C5BCu;
    SET_GPR_U32(ctx, 31, 0x37C5C4u);
    ctx->pc = 0x37C5C0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 255));
    ctx->pc = 0x8144D0u;
    {
        auto targetFn = runtime->lookupFunction(0x8144D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C5C4u; }
        if (ctx->pc != 0x37C5C4u) { return; }
    }
    ctx->pc = 0x37C5C4u;
    // 0x37c5c4: 0x26b50001
    ctx->pc = 0x37c5c4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_37c5c8:
    // 0x37c5c8: 0x3c01004c
    ctx->pc = 0x37c5c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x37c5cc: 0x8c22aea0
    ctx->pc = 0x37c5ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946464)));
    // 0x37c5d0: 0x2a2102b
    ctx->pc = 0x37c5d0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x37c5d4: 0x1440ffef
    ctx->pc = 0x37C5D4u;
    {
        const bool branch_taken_0x37c5d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37C5D8u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 21), 4));
        if (branch_taken_0x37c5d4) {
            ctx->pc = 0x37C594u;
            goto label_37c594;
        }
    }
    ctx->pc = 0x37C5DCu;
label_37c5dc:
    // 0x37c5dc: 0x1600004e
    ctx->pc = 0x37C5DCu;
    {
        const bool branch_taken_0x37c5dc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x37c5dc) {
            ctx->pc = 0x37C718u;
            goto label_37c718;
        }
    }
    ctx->pc = 0x37C5E4u;
    // 0x37c5e4: 0x16e0004c
    ctx->pc = 0x37C5E4u;
    {
        const bool branch_taken_0x37c5e4 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 0));
        if (branch_taken_0x37c5e4) {
            ctx->pc = 0x37C718u;
            goto label_37c718;
        }
    }
    ctx->pc = 0x37C5ECu;
    // 0x37c5ec: 0x92420046
    ctx->pc = 0x37c5ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 70)));
    // 0x37c5f0: 0x10400049
    ctx->pc = 0x37C5F0u;
    {
        const bool branch_taken_0x37c5f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x37c5f0) {
            ctx->pc = 0x37C718u;
            goto label_37c718;
        }
    }
    ctx->pc = 0x37C5F8u;
    // 0x37c5f8: 0x93c30b98
    ctx->pc = 0x37c5f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 2968)));
    // 0x37c5fc: 0x31040
    ctx->pc = 0x37c5fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x37c600: 0x431021
    ctx->pc = 0x37c600u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37c604: 0x21080
    ctx->pc = 0x37c604u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x37c608: 0x2821021
    ctx->pc = 0x37c608u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x37c60c: 0x24554154
    ctx->pc = 0x37c60cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 16724));
    // 0x37c610: 0x90424156
    ctx->pc = 0x37c610u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16726)));
    // 0x37c614: 0x551021
    ctx->pc = 0x37c614u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x37c618: 0xa0510004
    ctx->pc = 0x37c618u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 17));
    // 0x37c61c: 0x92420046
    ctx->pc = 0x37c61cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 70)));
    // 0x37c620: 0x1040000e
    ctx->pc = 0x37C620u;
    {
        const bool branch_taken_0x37c620 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x37c620) {
            ctx->pc = 0x37C65Cu;
            goto label_37c65c;
        }
    }
    ctx->pc = 0x37C628u;
    // 0x37c628: 0x92a20002
    ctx->pc = 0x37c628u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x37c62c: 0x24420001
    ctx->pc = 0x37c62cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x37c630: 0xa2a20002
    ctx->pc = 0x37c630u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x37c634: 0x92a20002
    ctx->pc = 0x37c634u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x37c638: 0x4410003
    ctx->pc = 0x37C638u;
    {
        const bool branch_taken_0x37c638 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x37C63Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 100));
        if (branch_taken_0x37c638) {
            ctx->pc = 0x37C648u;
            goto label_37c648;
        }
    }
    ctx->pc = 0x37C640u;
    // 0x37c640: 0x10000005
    ctx->pc = 0x37C640u;
    {
        const bool branch_taken_0x37c640 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C644u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37c640) {
            ctx->pc = 0x37C658u;
            goto label_37c658;
        }
    }
    ctx->pc = 0x37C648u;
label_37c648:
    // 0x37c648: 0x14200003
    ctx->pc = 0x37C648u;
    {
        const bool branch_taken_0x37c648 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37c648) {
            ctx->pc = 0x37C658u;
            goto label_37c658;
        }
    }
    ctx->pc = 0x37C650u;
    // 0x37c650: 0x10000001
    ctx->pc = 0x37C650u;
    {
        const bool branch_taken_0x37c650 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C654u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
        if (branch_taken_0x37c650) {
            ctx->pc = 0x37C658u;
            goto label_37c658;
        }
    }
    ctx->pc = 0x37C658u;
label_37c658:
    // 0x37c658: 0xa2a20002
    ctx->pc = 0x37c658u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
label_37c65c:
    // 0x37c65c: 0x92a30001
    ctx->pc = 0x37c65cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x37c660: 0x1460000f
    ctx->pc = 0x37C660u;
    {
        const bool branch_taken_0x37c660 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x37c660) {
            ctx->pc = 0x37C6A0u;
            goto label_37c6a0;
        }
    }
    ctx->pc = 0x37C668u;
    // 0x37c668: 0x93c20bbc
    ctx->pc = 0x37c668u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 3004)));
    // 0x37c66c: 0x24040001
    ctx->pc = 0x37c66cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c670: 0xa2a20000
    ctx->pc = 0x37c670u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x37c674: 0xc06bb20
    ctx->pc = 0x37C674u;
    SET_GPR_U32(ctx, 31, 0x37C67Cu);
    ctx->pc = 0x37C678u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1AEC80u;
    {
        auto targetFn = runtime->lookupFunction(0x1AEC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C67Cu; }
        if (ctx->pc != 0x37C67Cu) { return; }
    }
    ctx->pc = 0x37C67Cu;
    // 0x37c67c: 0x3043ffff
    ctx->pc = 0x37c67cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
    // 0x37c680: 0x24020003
    ctx->pc = 0x37c680u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x37c684: 0x62001a
    ctx->pc = 0x37c684u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x37c688: 0x0
    ctx->pc = 0x37c688u;
    // NOP
    // 0x37c68c: 0x0
    ctx->pc = 0x37c68cu;
    // NOP
    // 0x37c690: 0x1010
    ctx->pc = 0x37c690u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x37c694: 0x24420003
    ctx->pc = 0x37c694u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3));
    // 0x37c698: 0x1000001f
    ctx->pc = 0x37C698u;
    {
        const bool branch_taken_0x37c698 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C69Cu;
        WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x37c698) {
            ctx->pc = 0x37C718u;
            goto label_37c718;
        }
    }
    ctx->pc = 0x37C6A0u;
label_37c6a0:
    // 0x37c6a0: 0x92a20002
    ctx->pc = 0x37c6a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x37c6a4: 0x43082a
    ctx->pc = 0x37c6a4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x37c6a8: 0x1420001b
    ctx->pc = 0x37C6A8u;
    {
        const bool branch_taken_0x37c6a8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37c6a8) {
            ctx->pc = 0x37C718u;
            goto label_37c718;
        }
    }
    ctx->pc = 0x37C6B0u;
    // 0x37c6b0: 0xa2a00001
    ctx->pc = 0x37c6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x37c6b4: 0xa2a00002
    ctx->pc = 0x37c6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x37c6b8: 0x92a20003
    ctx->pc = 0x37c6b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x37c6bc: 0x24420001
    ctx->pc = 0x37c6bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x37c6c0: 0xa2a20003
    ctx->pc = 0x37c6c0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x37c6c4: 0x92a20003
    ctx->pc = 0x37c6c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x37c6c8: 0x4410003
    ctx->pc = 0x37C6C8u;
    {
        const bool branch_taken_0x37c6c8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x37C6CCu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 100));
        if (branch_taken_0x37c6c8) {
            ctx->pc = 0x37C6D8u;
            goto label_37c6d8;
        }
    }
    ctx->pc = 0x37C6D0u;
    // 0x37c6d0: 0x10000005
    ctx->pc = 0x37C6D0u;
    {
        const bool branch_taken_0x37c6d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C6D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37c6d0) {
            ctx->pc = 0x37C6E8u;
            goto label_37c6e8;
        }
    }
    ctx->pc = 0x37C6D8u;
label_37c6d8:
    // 0x37c6d8: 0x14200003
    ctx->pc = 0x37C6D8u;
    {
        const bool branch_taken_0x37c6d8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37c6d8) {
            ctx->pc = 0x37C6E8u;
            goto label_37c6e8;
        }
    }
    ctx->pc = 0x37C6E0u;
    // 0x37c6e0: 0x10000001
    ctx->pc = 0x37C6E0u;
    {
        const bool branch_taken_0x37c6e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C6E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
        if (branch_taken_0x37c6e0) {
            ctx->pc = 0x37C6E8u;
            goto label_37c6e8;
        }
    }
    ctx->pc = 0x37C6E8u;
label_37c6e8:
    // 0x37c6e8: 0xa2a20003
    ctx->pc = 0x37c6e8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x37c6ec: 0x26a40004
    ctx->pc = 0x37c6ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 4));
    // 0x37c6f0: 0x282d
    ctx->pc = 0x37c6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c6f4: 0xc041f1a
    ctx->pc = 0x37C6F4u;
    SET_GPR_U32(ctx, 31, 0x37C6FCu);
    ctx->pc = 0x37C6F8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x107C68u;
    {
        auto targetFn = runtime->lookupFunction(0x107C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C6FCu; }
        if (ctx->pc != 0x37C6FCu) { return; }
    }
    ctx->pc = 0x37C6FCu;
    // 0x37c6fc: 0xc06c0c0
    ctx->pc = 0x37C6FCu;
    SET_GPR_U32(ctx, 31, 0x37C704u);
    ctx->pc = 0x1B0300u;
    {
        auto targetFn = runtime->lookupFunction(0x1B0300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C704u; }
        if (ctx->pc != 0x37C704u) { return; }
    }
    ctx->pc = 0x37C704u;
    // 0x37c704: 0x24040001
    ctx->pc = 0x37c704u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c708: 0x14440003
    ctx->pc = 0x37C708u;
    {
        const bool branch_taken_0x37c708 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x37c708) {
            ctx->pc = 0x37C718u;
            goto label_37c718;
        }
    }
    ctx->pc = 0x37C710u;
    // 0x37c710: 0xc20516c
    ctx->pc = 0x37C710u;
    SET_GPR_U32(ctx, 31, 0x37C718u);
    ctx->pc = 0x8145B0u;
    {
        auto targetFn = runtime->lookupFunction(0x8145B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C718u; }
        if (ctx->pc != 0x37C718u) { return; }
    }
    ctx->pc = 0x37C718u;
label_37c718:
    // 0x37c718: 0x1600000c
    ctx->pc = 0x37C718u;
    {
        const bool branch_taken_0x37c718 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x37C71Cu;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 17), 255));
        if (branch_taken_0x37c718) {
            ctx->pc = 0x37C74Cu;
            goto label_37c74c;
        }
    }
    ctx->pc = 0x37C720u;
    // 0x37c720: 0xc0df58c
    ctx->pc = 0x37C720u;
    SET_GPR_U32(ctx, 31, 0x37C728u);
    ctx->pc = 0x37C724u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 17), 255));
    ctx->pc = 0x37D630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0037D630_0x37d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C728u; }
    }
    if (ctx->pc != 0x37C728u) { return; }
    ctx->pc = 0x37C728u;
    // 0x37c728: 0xc06c0c0
    ctx->pc = 0x37C728u;
    SET_GPR_U32(ctx, 31, 0x37C730u);
    ctx->pc = 0x37C72Cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1B0300u;
    {
        auto targetFn = runtime->lookupFunction(0x1B0300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C730u; }
        if (ctx->pc != 0x37C730u) { return; }
    }
    ctx->pc = 0x37C730u;
    // 0x37c730: 0x24030001
    ctx->pc = 0x37c730u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c734: 0x14430008
    ctx->pc = 0x37C734u;
    {
        const bool branch_taken_0x37c734 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x37c734) {
            ctx->pc = 0x37C758u;
            goto label_37c758;
        }
    }
    ctx->pc = 0x37C73Cu;
    // 0x37c73c: 0xc204bc8
    ctx->pc = 0x37C73Cu;
    SET_GPR_U32(ctx, 31, 0x37C744u);
    ctx->pc = 0x37C740u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->pc = 0x812F20u;
    {
        auto targetFn = runtime->lookupFunction(0x812F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C744u; }
        if (ctx->pc != 0x37C744u) { return; }
    }
    ctx->pc = 0x37C744u;
    // 0x37c744: 0x10000005
    ctx->pc = 0x37C744u;
    {
        const bool branch_taken_0x37c744 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C748u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 175)));
        if (branch_taken_0x37c744) {
            ctx->pc = 0x37C75Cu;
            goto label_37c75c;
        }
    }
    ctx->pc = 0x37C74Cu;
label_37c74c:
    // 0x37c74c: 0xc0df4f8
    ctx->pc = 0x37C74Cu;
    SET_GPR_U32(ctx, 31, 0x37C754u);
    ctx->pc = 0x37D3E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0037D3E0_0x37d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C754u; }
    }
    if (ctx->pc != 0x37C754u) { return; }
    ctx->pc = 0x37C754u;
    // 0x37c754: 0xae420004
    ctx->pc = 0x37c754u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_37c758:
    // 0x37c758: 0x93a200af
    ctx->pc = 0x37c758u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 175)));
label_37c75c:
    // 0x37c75c: 0x3c01405f
    ctx->pc = 0x37c75cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16479 << 16));
    // 0x37c760: 0x342176f9
    ctx->pc = 0x37c760u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 30457));
    // 0x37c764: 0x40182d
    ctx->pc = 0x37c764u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c768: 0x24021ce4
    ctx->pc = 0x37c768u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7396));
    // 0x37c76c: 0x62a818
    ctx->pc = 0x37c76cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)(uint32_t)result); }
    // 0x37c770: 0x2b42021
    ctx->pc = 0x37c770u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x37c774: 0x8e630018
    ctx->pc = 0x37c774u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x37c778: 0x8c8206cc
    ctx->pc = 0x37c778u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x37c77c: 0x431021
    ctx->pc = 0x37c77cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37c780: 0xac8206cc
    ctx->pc = 0x37c780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 2));
    // 0x37c784: 0x8c8206cc
    ctx->pc = 0x37c784u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x37c788: 0x41082b
    ctx->pc = 0x37c788u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x37c78c: 0x14200003
    ctx->pc = 0x37C78Cu;
    {
        const bool branch_taken_0x37c78c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x37C790u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 1740));
        if (branch_taken_0x37c78c) {
            ctx->pc = 0x37C79Cu;
            goto label_37c79c;
        }
    }
    ctx->pc = 0x37C794u;
    // 0x37c794: 0x3c02405f
    ctx->pc = 0x37c794u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16479 << 16));
    // 0x37c798: 0x344276f8
    ctx->pc = 0x37c798u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 30456));
label_37c79c:
    // 0x37c79c: 0xaca20000
    ctx->pc = 0x37c79cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x37c7a0: 0x2b42021
    ctx->pc = 0x37c7a0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x37c7a4: 0x8e430000
    ctx->pc = 0x37c7a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x37c7a8: 0x3c013b9a
    ctx->pc = 0x37c7a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15258 << 16));
    // 0x37c7ac: 0x8c8206d0
    ctx->pc = 0x37c7acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1744)));
    // 0x37c7b0: 0x3421c99d
    ctx->pc = 0x37c7b0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 51613));
    // 0x37c7b4: 0x431021
    ctx->pc = 0x37c7b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37c7b8: 0xac8206d0
    ctx->pc = 0x37c7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1744), GPR_U32(ctx, 2));
    // 0x37c7bc: 0x8c8206d0
    ctx->pc = 0x37c7bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1744)));
    // 0x37c7c0: 0x41082b
    ctx->pc = 0x37c7c0u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x37c7c4: 0x14200003
    ctx->pc = 0x37C7C4u;
    {
        const bool branch_taken_0x37c7c4 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x37C7C8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 1744));
        if (branch_taken_0x37c7c4) {
            ctx->pc = 0x37C7D4u;
            goto label_37c7d4;
        }
    }
    ctx->pc = 0x37C7CCu;
    // 0x37c7cc: 0x3c023b9a
    ctx->pc = 0x37c7ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15258 << 16));
    // 0x37c7d0: 0x3442c99c
    ctx->pc = 0x37c7d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 51612));
label_37c7d4:
    // 0x37c7d4: 0xaca20000
    ctx->pc = 0x37c7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x37c7d8: 0x302d
    ctx->pc = 0x37c7d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c7dc: 0x295f021
    ctx->pc = 0x37c7dcu;
    SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x37c7e0: 0x3c03405f
    ctx->pc = 0x37c7e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16479 << 16));
label_37c7e4:
    // 0x37c7e4: 0x61080
    ctx->pc = 0x37c7e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x37c7e8: 0x3c01405f
    ctx->pc = 0x37c7e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16479 << 16));
    // 0x37c7ec: 0x3c22821
    ctx->pc = 0x37c7ecu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x37c7f0: 0x342176f9
    ctx->pc = 0x37c7f0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 30457));
    // 0x37c7f4: 0x2421021
    ctx->pc = 0x37c7f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x37c7f8: 0x8ca42354
    ctx->pc = 0x37c7f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 9044)));
    // 0x37c7fc: 0x8c420018
    ctx->pc = 0x37c7fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x37c800: 0x821021
    ctx->pc = 0x37c800u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x37c804: 0xaca22354
    ctx->pc = 0x37c804u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 9044), GPR_U32(ctx, 2));
    // 0x37c808: 0x8ca22354
    ctx->pc = 0x37c808u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 9044)));
    // 0x37c80c: 0x41082b
    ctx->pc = 0x37c80cu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x37c810: 0x14200002
    ctx->pc = 0x37C810u;
    {
        const bool branch_taken_0x37c810 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x37C814u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 5), 9044));
        if (branch_taken_0x37c810) {
            ctx->pc = 0x37C81Cu;
            goto label_37c81c;
        }
    }
    ctx->pc = 0x37C818u;
    // 0x37c818: 0x346276f8
    ctx->pc = 0x37c818u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 30456));
label_37c81c:
    // 0x37c81c: 0xace20000
    ctx->pc = 0x37c81cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x37c820: 0x24c60001
    ctx->pc = 0x37c820u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x37c824: 0x28c20008
    ctx->pc = 0x37c824u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 8));
    // 0x37c828: 0x1440ffee
    ctx->pc = 0x37C828u;
    {
        const bool branch_taken_0x37c828 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x37c828) {
            ctx->pc = 0x37C7E4u;
            goto label_37c7e4;
        }
    }
    ctx->pc = 0x37C830u;
    // 0x37c830: 0x302d
    ctx->pc = 0x37c830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c834: 0x3c0305f5
    ctx->pc = 0x37c834u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1525 << 16));
label_37c838:
    // 0x37c838: 0x61080
    ctx->pc = 0x37c838u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x37c83c: 0x3c0105f5
    ctx->pc = 0x37c83cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)1525 << 16));
    // 0x37c840: 0x3c22821
    ctx->pc = 0x37c840u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x37c844: 0x3421e100
    ctx->pc = 0x37c844u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 57600));
    // 0x37c848: 0x2421021
    ctx->pc = 0x37c848u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x37c84c: 0x8ca42378
    ctx->pc = 0x37c84cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 9080)));
    // 0x37c850: 0x8c420008
    ctx->pc = 0x37c850u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x37c854: 0x821021
    ctx->pc = 0x37c854u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x37c858: 0xaca22378
    ctx->pc = 0x37c858u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 9080), GPR_U32(ctx, 2));
    // 0x37c85c: 0x8ca22378
    ctx->pc = 0x37c85cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 9080)));
    // 0x37c860: 0x41082b
    ctx->pc = 0x37c860u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x37c864: 0x14200002
    ctx->pc = 0x37C864u;
    {
        const bool branch_taken_0x37c864 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x37C868u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 5), 9080));
        if (branch_taken_0x37c864) {
            ctx->pc = 0x37C870u;
            goto label_37c870;
        }
    }
    ctx->pc = 0x37C86Cu;
    // 0x37c86c: 0x3462e0ff
    ctx->pc = 0x37c86cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 57599));
label_37c870:
    // 0x37c870: 0xace20000
    ctx->pc = 0x37c870u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x37c874: 0x24c60001
    ctx->pc = 0x37c874u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x37c878: 0x28c20004
    ctx->pc = 0x37c878u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4));
    // 0x37c87c: 0x1440ffee
    ctx->pc = 0x37C87Cu;
    {
        const bool branch_taken_0x37c87c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x37c87c) {
            ctx->pc = 0x37C838u;
            goto label_37c838;
        }
    }
    ctx->pc = 0x37C884u;
    // 0x37c884: 0x2b41021
    ctx->pc = 0x37c884u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x37c888: 0xc199fe4
    ctx->pc = 0x37C888u;
    SET_GPR_U32(ctx, 31, 0x37C890u);
    ctx->pc = 0x37C88Cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 9076));
    ctx->pc = 0x667F90u;
    {
        auto targetFn = runtime->lookupFunction(0x667F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C890u; }
        if (ctx->pc != 0x37C890u) { return; }
    }
    ctx->pc = 0x37C890u;
    // 0x37c890: 0x46000024
    ctx->pc = 0x37c890u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x37c894: 0x3c013b9a
    ctx->pc = 0x37c894u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15258 << 16));
    // 0x37c898: 0x8ec20000
    ctx->pc = 0x37c898u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x37c89c: 0x3421ca00
    ctx->pc = 0x37c89cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 51712));
    // 0x37c8a0: 0x44030000
    ctx->pc = 0x37c8a0u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x37c8a4: 0x0
    ctx->pc = 0x37c8a4u;
    // NOP
    // 0x37c8a8: 0x431021
    ctx->pc = 0x37c8a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37c8ac: 0xaec20000
    ctx->pc = 0x37c8acu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x37c8b0: 0x8ec20000
    ctx->pc = 0x37c8b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x37c8b4: 0x41082b
    ctx->pc = 0x37c8b4u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x37c8b8: 0x14200003
    ctx->pc = 0x37C8B8u;
    {
        const bool branch_taken_0x37c8b8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37c8b8) {
            ctx->pc = 0x37C8C8u;
            goto label_37c8c8;
        }
    }
    ctx->pc = 0x37C8C0u;
    // 0x37c8c0: 0x3c023b9a
    ctx->pc = 0x37c8c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15258 << 16));
    // 0x37c8c4: 0x3442c9ff
    ctx->pc = 0x37c8c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 51711));
label_37c8c8:
    // 0x37c8c8: 0xaec20000
    ctx->pc = 0x37c8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x37c8cc: 0x2b42021
    ctx->pc = 0x37c8ccu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x37c8d0: 0x94832388
    ctx->pc = 0x37c8d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 9096)));
    // 0x37c8d4: 0x96420038
    ctx->pc = 0x37c8d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x37c8d8: 0x621021
    ctx->pc = 0x37c8d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37c8dc: 0xa4822388
    ctx->pc = 0x37c8dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 9096), (uint16_t)GPR_U32(ctx, 2));
    // 0x37c8e0: 0x94822388
    ctx->pc = 0x37c8e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 9096)));
    // 0x37c8e4: 0x4410003
    ctx->pc = 0x37C8E4u;
    {
        const bool branch_taken_0x37c8e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x37C8E8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 9096));
        if (branch_taken_0x37c8e4) {
            ctx->pc = 0x37C8F4u;
            goto label_37c8f4;
        }
    }
    ctx->pc = 0x37C8ECu;
    // 0x37c8ec: 0x10000006
    ctx->pc = 0x37C8ECu;
    {
        const bool branch_taken_0x37c8ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C8F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37c8ec) {
            ctx->pc = 0x37C908u;
            goto label_37c908;
        }
    }
    ctx->pc = 0x37C8F4u;
label_37c8f4:
    // 0x37c8f4: 0x28412710
    ctx->pc = 0x37c8f4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 10000));
    // 0x37c8f8: 0x14200003
    ctx->pc = 0x37C8F8u;
    {
        const bool branch_taken_0x37c8f8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37c8f8) {
            ctx->pc = 0x37C908u;
            goto label_37c908;
        }
    }
    ctx->pc = 0x37C900u;
    // 0x37c900: 0x10000001
    ctx->pc = 0x37C900u;
    {
        const bool branch_taken_0x37c900 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C904u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9999));
        if (branch_taken_0x37c900) {
            ctx->pc = 0x37C908u;
            goto label_37c908;
        }
    }
    ctx->pc = 0x37C908u;
label_37c908:
    // 0x37c908: 0xa4a20000
    ctx->pc = 0x37c908u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x37c90c: 0x2b42021
    ctx->pc = 0x37c90cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x37c910: 0x9483238a
    ctx->pc = 0x37c910u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 9098)));
    // 0x37c914: 0x9642003a
    ctx->pc = 0x37c914u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 58)));
    // 0x37c918: 0x621021
    ctx->pc = 0x37c918u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37c91c: 0xa482238a
    ctx->pc = 0x37c91cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 9098), (uint16_t)GPR_U32(ctx, 2));
    // 0x37c920: 0x9482238a
    ctx->pc = 0x37c920u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 9098)));
    // 0x37c924: 0x4410003
    ctx->pc = 0x37C924u;
    {
        const bool branch_taken_0x37c924 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x37C928u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 9098));
        if (branch_taken_0x37c924) {
            ctx->pc = 0x37C934u;
            goto label_37c934;
        }
    }
    ctx->pc = 0x37C92Cu;
    // 0x37c92c: 0x10000006
    ctx->pc = 0x37C92Cu;
    {
        const bool branch_taken_0x37c92c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C930u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37c92c) {
            ctx->pc = 0x37C948u;
            goto label_37c948;
        }
    }
    ctx->pc = 0x37C934u;
label_37c934:
    // 0x37c934: 0x28412710
    ctx->pc = 0x37c934u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 10000));
    // 0x37c938: 0x14200003
    ctx->pc = 0x37C938u;
    {
        const bool branch_taken_0x37c938 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37c938) {
            ctx->pc = 0x37C948u;
            goto label_37c948;
        }
    }
    ctx->pc = 0x37C940u;
    // 0x37c940: 0x10000001
    ctx->pc = 0x37C940u;
    {
        const bool branch_taken_0x37c940 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C944u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9999));
        if (branch_taken_0x37c940) {
            ctx->pc = 0x37C948u;
            goto label_37c948;
        }
    }
    ctx->pc = 0x37C948u;
label_37c948:
    // 0x37c948: 0xa4a20000
    ctx->pc = 0x37c948u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x37c94c: 0x2b42021
    ctx->pc = 0x37c94cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x37c950: 0x9483238c
    ctx->pc = 0x37c950u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 9100)));
    // 0x37c954: 0x9642003c
    ctx->pc = 0x37c954u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x37c958: 0x621021
    ctx->pc = 0x37c958u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37c95c: 0xa482238c
    ctx->pc = 0x37c95cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 9100), (uint16_t)GPR_U32(ctx, 2));
    // 0x37c960: 0x9482238c
    ctx->pc = 0x37c960u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 9100)));
    // 0x37c964: 0x4410003
    ctx->pc = 0x37C964u;
    {
        const bool branch_taken_0x37c964 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x37C968u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 9100));
        if (branch_taken_0x37c964) {
            ctx->pc = 0x37C974u;
            goto label_37c974;
        }
    }
    ctx->pc = 0x37C96Cu;
    // 0x37c96c: 0x10000006
    ctx->pc = 0x37C96Cu;
    {
        const bool branch_taken_0x37c96c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C970u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37c96c) {
            ctx->pc = 0x37C988u;
            goto label_37c988;
        }
    }
    ctx->pc = 0x37C974u;
label_37c974:
    // 0x37c974: 0x28412710
    ctx->pc = 0x37c974u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 10000));
    // 0x37c978: 0x14200003
    ctx->pc = 0x37C978u;
    {
        const bool branch_taken_0x37c978 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37c978) {
            ctx->pc = 0x37C988u;
            goto label_37c988;
        }
    }
    ctx->pc = 0x37C980u;
    // 0x37c980: 0x10000001
    ctx->pc = 0x37C980u;
    {
        const bool branch_taken_0x37c980 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C984u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9999));
        if (branch_taken_0x37c980) {
            ctx->pc = 0x37C988u;
            goto label_37c988;
        }
    }
    ctx->pc = 0x37C988u;
label_37c988:
    // 0x37c988: 0xa4a20000
    ctx->pc = 0x37c988u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x37c98c: 0x2b42021
    ctx->pc = 0x37c98cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x37c990: 0x9483238e
    ctx->pc = 0x37c990u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 9102)));
    // 0x37c994: 0x9642003e
    ctx->pc = 0x37c994u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
    // 0x37c998: 0x621021
    ctx->pc = 0x37c998u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37c99c: 0xa482238e
    ctx->pc = 0x37c99cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 9102), (uint16_t)GPR_U32(ctx, 2));
    // 0x37c9a0: 0x9482238e
    ctx->pc = 0x37c9a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 9102)));
    // 0x37c9a4: 0x4410003
    ctx->pc = 0x37C9A4u;
    {
        const bool branch_taken_0x37c9a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x37C9A8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 9102));
        if (branch_taken_0x37c9a4) {
            ctx->pc = 0x37C9B4u;
            goto label_37c9b4;
        }
    }
    ctx->pc = 0x37C9ACu;
    // 0x37c9ac: 0x10000006
    ctx->pc = 0x37C9ACu;
    {
        const bool branch_taken_0x37c9ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C9B0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37c9ac) {
            ctx->pc = 0x37C9C8u;
            goto label_37c9c8;
        }
    }
    ctx->pc = 0x37C9B4u;
label_37c9b4:
    // 0x37c9b4: 0x28412710
    ctx->pc = 0x37c9b4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 10000));
    // 0x37c9b8: 0x14200003
    ctx->pc = 0x37C9B8u;
    {
        const bool branch_taken_0x37c9b8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37c9b8) {
            ctx->pc = 0x37C9C8u;
            goto label_37c9c8;
        }
    }
    ctx->pc = 0x37C9C0u;
    // 0x37c9c0: 0x10000001
    ctx->pc = 0x37C9C0u;
    {
        const bool branch_taken_0x37c9c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C9C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9999));
        if (branch_taken_0x37c9c0) {
            ctx->pc = 0x37C9C8u;
            goto label_37c9c8;
        }
    }
    ctx->pc = 0x37C9C8u;
label_37c9c8:
    // 0x37c9c8: 0xa4a20000
    ctx->pc = 0x37c9c8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x37c9cc: 0x2b42021
    ctx->pc = 0x37c9ccu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x37c9d0: 0x94832390
    ctx->pc = 0x37c9d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 9104)));
    // 0x37c9d4: 0x96420040
    ctx->pc = 0x37c9d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x37c9d8: 0x621021
    ctx->pc = 0x37c9d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37c9dc: 0xa4822390
    ctx->pc = 0x37c9dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 9104), (uint16_t)GPR_U32(ctx, 2));
    // 0x37c9e0: 0x94822390
    ctx->pc = 0x37c9e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 9104)));
    // 0x37c9e4: 0x4410003
    ctx->pc = 0x37C9E4u;
    {
        const bool branch_taken_0x37c9e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x37C9E8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 9104));
        if (branch_taken_0x37c9e4) {
            ctx->pc = 0x37C9F4u;
            goto label_37c9f4;
        }
    }
    ctx->pc = 0x37C9ECu;
    // 0x37c9ec: 0x10000006
    ctx->pc = 0x37C9ECu;
    {
        const bool branch_taken_0x37c9ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C9F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37c9ec) {
            ctx->pc = 0x37CA08u;
            goto label_37ca08;
        }
    }
    ctx->pc = 0x37C9F4u;
label_37c9f4:
    // 0x37c9f4: 0x28412710
    ctx->pc = 0x37c9f4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 10000));
    // 0x37c9f8: 0x14200003
    ctx->pc = 0x37C9F8u;
    {
        const bool branch_taken_0x37c9f8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37c9f8) {
            ctx->pc = 0x37CA08u;
            goto label_37ca08;
        }
    }
    ctx->pc = 0x37CA00u;
    // 0x37ca00: 0x10000001
    ctx->pc = 0x37CA00u;
    {
        const bool branch_taken_0x37ca00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37CA04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9999));
        if (branch_taken_0x37ca00) {
            ctx->pc = 0x37CA08u;
            goto label_37ca08;
        }
    }
    ctx->pc = 0x37CA08u;
label_37ca08:
    // 0x37ca08: 0xa4a20000
    ctx->pc = 0x37ca08u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x37ca0c: 0x2b42021
    ctx->pc = 0x37ca0cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x37ca10: 0x94832392
    ctx->pc = 0x37ca10u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 9106)));
    // 0x37ca14: 0x96420042
    ctx->pc = 0x37ca14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 66)));
    // 0x37ca18: 0x621021
    ctx->pc = 0x37ca18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37ca1c: 0xa4822392
    ctx->pc = 0x37ca1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 9106), (uint16_t)GPR_U32(ctx, 2));
    // 0x37ca20: 0x94822392
    ctx->pc = 0x37ca20u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 9106)));
    // 0x37ca24: 0x4410003
    ctx->pc = 0x37CA24u;
    {
        const bool branch_taken_0x37ca24 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x37CA28u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 9106));
        if (branch_taken_0x37ca24) {
            ctx->pc = 0x37CA34u;
            goto label_37ca34;
        }
    }
    ctx->pc = 0x37CA2Cu;
    // 0x37ca2c: 0x10000006
    ctx->pc = 0x37CA2Cu;
    {
        const bool branch_taken_0x37ca2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37CA30u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37ca2c) {
            ctx->pc = 0x37CA48u;
            goto label_37ca48;
        }
    }
    ctx->pc = 0x37CA34u;
label_37ca34:
    // 0x37ca34: 0x28412710
    ctx->pc = 0x37ca34u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 10000));
    // 0x37ca38: 0x14200003
    ctx->pc = 0x37CA38u;
    {
        const bool branch_taken_0x37ca38 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37ca38) {
            ctx->pc = 0x37CA48u;
            goto label_37ca48;
        }
    }
    ctx->pc = 0x37CA40u;
    // 0x37ca40: 0x10000001
    ctx->pc = 0x37CA40u;
    {
        const bool branch_taken_0x37ca40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37CA44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9999));
        if (branch_taken_0x37ca40) {
            ctx->pc = 0x37CA48u;
            goto label_37ca48;
        }
    }
    ctx->pc = 0x37CA48u;
label_37ca48:
    // 0x37ca48: 0xa4a20000
    ctx->pc = 0x37ca48u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x37ca4c: 0x3c01004c
    ctx->pc = 0x37ca4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x37ca50: 0x9024aded
    ctx->pc = 0x37ca50u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946285)));
    // 0x37ca54: 0x3c02004a
    ctx->pc = 0x37ca54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
    // 0x37ca58: 0x244267e4
    ctx->pc = 0x37ca58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26596));
    // 0x37ca5c: 0x41900
    ctx->pc = 0x37ca5cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x37ca60: 0x642023
    ctx->pc = 0x37ca60u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37ca64: 0x418c0
    ctx->pc = 0x37ca64u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x37ca68: 0x831821
    ctx->pc = 0x37ca68u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x37ca6c: 0x31940
    ctx->pc = 0x37ca6cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x37ca70: 0x431021
    ctx->pc = 0x37ca70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37ca74: 0x94420000
    ctx->pc = 0x37ca74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37ca78: 0x10400011
    ctx->pc = 0x37CA78u;
    {
        const bool branch_taken_0x37ca78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x37ca78) {
            ctx->pc = 0x37CAC0u;
            goto label_37cac0;
        }
    }
    ctx->pc = 0x37CA80u;
    // 0x37ca80: 0x2b41821
    ctx->pc = 0x37ca80u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x37ca84: 0x946223ac
    ctx->pc = 0x37ca84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 9132)));
    // 0x37ca88: 0x24420001
    ctx->pc = 0x37ca88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x37ca8c: 0xa46223ac
    ctx->pc = 0x37ca8cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9132), (uint16_t)GPR_U32(ctx, 2));
    // 0x37ca90: 0x946223ac
    ctx->pc = 0x37ca90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 9132)));
    // 0x37ca94: 0x4410003
    ctx->pc = 0x37CA94u;
    {
        const bool branch_taken_0x37ca94 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x37CA98u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 9132));
        if (branch_taken_0x37ca94) {
            ctx->pc = 0x37CAA4u;
            goto label_37caa4;
        }
    }
    ctx->pc = 0x37CA9Cu;
    // 0x37ca9c: 0x10000006
    ctx->pc = 0x37CA9Cu;
    {
        const bool branch_taken_0x37ca9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37CAA0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37ca9c) {
            ctx->pc = 0x37CAB8u;
            goto label_37cab8;
        }
    }
    ctx->pc = 0x37CAA4u;
label_37caa4:
    // 0x37caa4: 0x28412710
    ctx->pc = 0x37caa4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 10000));
    // 0x37caa8: 0x14200003
    ctx->pc = 0x37CAA8u;
    {
        const bool branch_taken_0x37caa8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37caa8) {
            ctx->pc = 0x37CAB8u;
            goto label_37cab8;
        }
    }
    ctx->pc = 0x37CAB0u;
    // 0x37cab0: 0x10000001
    ctx->pc = 0x37CAB0u;
    {
        const bool branch_taken_0x37cab0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37CAB4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9999));
        if (branch_taken_0x37cab0) {
            ctx->pc = 0x37CAB8u;
            goto label_37cab8;
        }
    }
    ctx->pc = 0x37CAB8u;
label_37cab8:
    // 0x37cab8: 0x10000021
    ctx->pc = 0x37CAB8u;
    {
        const bool branch_taken_0x37cab8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37CABCu;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x37cab8) {
            ctx->pc = 0x37CB40u;
            goto label_37cb40;
        }
    }
    ctx->pc = 0x37CAC0u;
label_37cac0:
    // 0x37cac0: 0x3c05004a
    ctx->pc = 0x37cac0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)74 << 16));
    // 0x37cac4: 0x2b41021
    ctx->pc = 0x37cac4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x37cac8: 0x24a567c8
    ctx->pc = 0x37cac8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 26568));
    // 0x37cacc: 0x2442239c
    ctx->pc = 0x37caccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9116));
    // 0x37cad0: 0xa31821
    ctx->pc = 0x37cad0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x37cad4: 0x3c01004c
    ctx->pc = 0x37cad4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x37cad8: 0x90630000
    ctx->pc = 0x37cad8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37cadc: 0x31840
    ctx->pc = 0x37cadcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x37cae0: 0x432021
    ctx->pc = 0x37cae0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37cae4: 0x94830000
    ctx->pc = 0x37cae4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37cae8: 0x24630001
    ctx->pc = 0x37cae8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x37caec: 0xa4830000
    ctx->pc = 0x37caecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x37caf0: 0x9024aded
    ctx->pc = 0x37caf0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946285)));
    // 0x37caf4: 0x41900
    ctx->pc = 0x37caf4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x37caf8: 0x642023
    ctx->pc = 0x37caf8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37cafc: 0x418c0
    ctx->pc = 0x37cafcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x37cb00: 0x831821
    ctx->pc = 0x37cb00u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x37cb04: 0x31940
    ctx->pc = 0x37cb04u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x37cb08: 0xa31821
    ctx->pc = 0x37cb08u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x37cb0c: 0x90630000
    ctx->pc = 0x37cb0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37cb10: 0x31840
    ctx->pc = 0x37cb10u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x37cb14: 0x431821
    ctx->pc = 0x37cb14u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37cb18: 0x94620000
    ctx->pc = 0x37cb18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37cb1c: 0x4410003
    ctx->pc = 0x37CB1Cu;
    {
        const bool branch_taken_0x37cb1c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x37CB20u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 10000));
        if (branch_taken_0x37cb1c) {
            ctx->pc = 0x37CB2Cu;
            goto label_37cb2c;
        }
    }
    ctx->pc = 0x37CB24u;
    // 0x37cb24: 0x10000005
    ctx->pc = 0x37CB24u;
    {
        const bool branch_taken_0x37cb24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37CB28u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37cb24) {
            ctx->pc = 0x37CB3Cu;
            goto label_37cb3c;
        }
    }
    ctx->pc = 0x37CB2Cu;
label_37cb2c:
    // 0x37cb2c: 0x14200003
    ctx->pc = 0x37CB2Cu;
    {
        const bool branch_taken_0x37cb2c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37cb2c) {
            ctx->pc = 0x37CB3Cu;
            goto label_37cb3c;
        }
    }
    ctx->pc = 0x37CB34u;
    // 0x37cb34: 0x10000001
    ctx->pc = 0x37CB34u;
    {
        const bool branch_taken_0x37cb34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37CB38u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9999));
        if (branch_taken_0x37cb34) {
            ctx->pc = 0x37CB3Cu;
            goto label_37cb3c;
        }
    }
    ctx->pc = 0x37CB3Cu;
label_37cb3c:
    // 0x37cb3c: 0xa4620000
    ctx->pc = 0x37cb3cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_37cb40:
    // 0x37cb40: 0x3c01004c
    ctx->pc = 0x37cb40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x37cb44: 0x3c08004c
    ctx->pc = 0x37cb44u;
    SET_GPR_U32(ctx, 8, ((uint32_t)76 << 16));
    // 0x37cb48: 0x90229d19
    ctx->pc = 0x37cb48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294941977)));
    // 0x37cb4c: 0x3c050032
    ctx->pc = 0x37cb4cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x37cb50: 0x482d
    ctx->pc = 0x37cb50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cb54: 0x25089a80
    ctx->pc = 0x37cb54u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294941312));
    // 0x37cb58: 0x24070001
    ctx->pc = 0x37cb58u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37cb5c: 0x10000011
    ctx->pc = 0x37CB5Cu;
    {
        const bool branch_taken_0x37cb5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37CB60u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294966112));
        if (branch_taken_0x37cb5c) {
            ctx->pc = 0x37CBA4u;
            goto label_37cba4;
        }
    }
    ctx->pc = 0x37CB64u;
label_37cb64:
    // 0x37cb64: 0x1031821
    ctx->pc = 0x37cb64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x37cb68: 0x946411f2
    ctx->pc = 0x37cb68u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
    // 0x37cb6c: 0x4810004
    ctx->pc = 0x37CB6Cu;
    {
        const bool branch_taken_0x37cb6c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x37CB70u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 31));
        if (branch_taken_0x37cb6c) {
            ctx->pc = 0x37CB80u;
            goto label_37cb80;
        }
    }
    ctx->pc = 0x37CB74u;
    // 0x37cb74: 0x10600003
    ctx->pc = 0x37CB74u;
    {
        const bool branch_taken_0x37cb74 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x37CB78u;
        SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
        if (branch_taken_0x37cb74) {
            ctx->pc = 0x37CB84u;
            goto label_37cb84;
        }
    }
    ctx->pc = 0x37CB7Cu;
    // 0x37cb7c: 0x2463ffe0
    ctx->pc = 0x37cb7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967264));
label_37cb80:
    // 0x37cb80: 0x673004
    ctx->pc = 0x37cb80u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
label_37cb84:
    // 0x37cb84: 0x25290001
    ctx->pc = 0x37cb84u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x37cb88: 0x3083ffff
    ctx->pc = 0x37cb88u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 65535));
    // 0x37cb8c: 0x31942
    ctx->pc = 0x37cb8cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 5));
    // 0x37cb90: 0x31880
    ctx->pc = 0x37cb90u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x37cb94: 0xa32021
    ctx->pc = 0x37cb94u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x37cb98: 0x8c830024
    ctx->pc = 0x37cb98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x37cb9c: 0x661825
    ctx->pc = 0x37cb9cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x37cba0: 0xac830024
    ctx->pc = 0x37cba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
label_37cba4:
    // 0x37cba4: 0x122182a
    ctx->pc = 0x37cba4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 2)));
    // 0x37cba8: 0x1460ffee
    ctx->pc = 0x37CBA8u;
    {
        const bool branch_taken_0x37cba8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x37CBACu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 9), 1));
        if (branch_taken_0x37cba8) {
            ctx->pc = 0x37CB64u;
            goto label_37cb64;
        }
    }
    ctx->pc = 0x37CBB0u;
    // 0x37cbb0: 0x3222ffff
    ctx->pc = 0x37cbb0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 65535));
    // 0x37cbb4: 0x3c030032
    ctx->pc = 0x37cbb4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x37cbb8: 0x2463007c
    ctx->pc = 0x37cbb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 124));
    // 0x37cbbc: 0x228c0
    ctx->pc = 0x37cbbcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 3));
    // 0x37cbc0: 0x653821
    ctx->pc = 0x37cbc0u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x37cbc4: 0x8e440048
    ctx->pc = 0x37cbc4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x37cbc8: 0x3c030032
    ctx->pc = 0x37cbc8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x37cbcc: 0x3c01003c
    ctx->pc = 0x37cbccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x37cbd0: 0x24630080
    ctx->pc = 0x37cbd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 128));
    // 0x37cbd4: 0x653021
    ctx->pc = 0x37cbd4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x37cbd8: 0x8ce50000
    ctx->pc = 0x37cbd8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x37cbdc: 0x3c030032
    ctx->pc = 0x37cbdcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x37cbe0: 0x246301fc
    ctx->pc = 0x37cbe0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 508));
    // 0x37cbe4: 0x621821
    ctx->pc = 0x37cbe4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37cbe8: 0xa42025
    ctx->pc = 0x37cbe8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x37cbec: 0xace40000
    ctx->pc = 0x37cbecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x37cbf0: 0x8cc50000
    ctx->pc = 0x37cbf0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x37cbf4: 0x8e44004c
    ctx->pc = 0x37cbf4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x37cbf8: 0xa42025
    ctx->pc = 0x37cbf8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x37cbfc: 0xacc40000
    ctx->pc = 0x37cbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x37cc00: 0x90248504
    ctx->pc = 0x37cc00u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294935812)));
    // 0x37cc04: 0xa0640000
    ctx->pc = 0x37cc04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x37cc08: 0x3c010032
    ctx->pc = 0x37cc08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37cc0c: 0x8c24fb60
    ctx->pc = 0x37cc0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966112)));
    // 0x37cc10: 0x8e430004
    ctx->pc = 0x37cc10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x37cc14: 0x3c010032
    ctx->pc = 0x37cc14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37cc18: 0x831821
    ctx->pc = 0x37cc18u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x37cc1c: 0xac23fb60
    ctx->pc = 0x37cc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966112), GPR_U32(ctx, 3));
    // 0x37cc20: 0x3c010032
    ctx->pc = 0x37cc20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37cc24: 0x8c23fb60
    ctx->pc = 0x37cc24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966112)));
    // 0x37cc28: 0x3c013b9a
    ctx->pc = 0x37cc28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15258 << 16));
    // 0x37cc2c: 0x3421ca00
    ctx->pc = 0x37cc2cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 51712));
    // 0x37cc30: 0x61082b
    ctx->pc = 0x37cc30u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x37cc34: 0x14200003
    ctx->pc = 0x37CC34u;
    {
        const bool branch_taken_0x37cc34 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37cc34) {
            ctx->pc = 0x37CC44u;
            goto label_37cc44;
        }
    }
    ctx->pc = 0x37CC3Cu;
    // 0x37cc3c: 0x3c033b9a
    ctx->pc = 0x37cc3cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)15258 << 16));
    // 0x37cc40: 0x3463c9ff
    ctx->pc = 0x37cc40u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 51711));
label_37cc44:
    // 0x37cc44: 0x3c010032
    ctx->pc = 0x37cc44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37cc48: 0xac23fb60
    ctx->pc = 0x37cc48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966112), GPR_U32(ctx, 3));
    // 0x37cc4c: 0x3c010032
    ctx->pc = 0x37cc4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37cc50: 0x8e430004
    ctx->pc = 0x37cc50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x37cc54: 0x8c243d14
    ctx->pc = 0x37cc54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 15636)));
    // 0x37cc58: 0x831821
    ctx->pc = 0x37cc58u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x37cc5c: 0x3c010032
    ctx->pc = 0x37cc5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37cc60: 0xac233d14
    ctx->pc = 0x37cc60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15636), GPR_U32(ctx, 3));
    // 0x37cc64: 0x3c010032
    ctx->pc = 0x37cc64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37cc68: 0x8c233d14
    ctx->pc = 0x37cc68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 15636)));
    // 0x37cc6c: 0x3c013b9a
    ctx->pc = 0x37cc6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15258 << 16));
    // 0x37cc70: 0x3421ca00
    ctx->pc = 0x37cc70u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 51712));
    // 0x37cc74: 0x61082b
    ctx->pc = 0x37cc74u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x37cc78: 0x14200003
    ctx->pc = 0x37CC78u;
    {
        const bool branch_taken_0x37cc78 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37cc78) {
            ctx->pc = 0x37CC88u;
            goto label_37cc88;
        }
    }
    ctx->pc = 0x37CC80u;
    // 0x37cc80: 0x3c033b9a
    ctx->pc = 0x37cc80u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15258 << 16));
    // 0x37cc84: 0x3463c9ff
    ctx->pc = 0x37cc84u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 51711));
label_37cc88:
    // 0x37cc88: 0x3c010032
    ctx->pc = 0x37cc88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37cc8c: 0xac233d14
    ctx->pc = 0x37cc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15636), GPR_U32(ctx, 3));
    // 0x37cc90: 0x218c0
    ctx->pc = 0x37cc90u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 3));
    // 0x37cc94: 0x621821
    ctx->pc = 0x37cc94u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37cc98: 0x31840
    ctx->pc = 0x37cc98u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x37cc9c: 0x621021
    ctx->pc = 0x37cc9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37cca0: 0x210c0
    ctx->pc = 0x37cca0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x37cca4: 0x3c21821
    ctx->pc = 0x37cca4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x37cca8: 0x946206d4
    ctx->pc = 0x37cca8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1748)));
    // 0x37ccac: 0x24420001
    ctx->pc = 0x37ccacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x37ccb0: 0xa46206d4
    ctx->pc = 0x37ccb0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1748), (uint16_t)GPR_U32(ctx, 2));
    // 0x37ccb4: 0x946206d4
    ctx->pc = 0x37ccb4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1748)));
    // 0x37ccb8: 0x4410003
    ctx->pc = 0x37CCB8u;
    {
        const bool branch_taken_0x37ccb8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x37CCBCu;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 3), 1748));
        if (branch_taken_0x37ccb8) {
            ctx->pc = 0x37CCC8u;
            goto label_37ccc8;
        }
    }
    ctx->pc = 0x37CCC0u;
    // 0x37ccc0: 0x10000006
    ctx->pc = 0x37CCC0u;
    {
        const bool branch_taken_0x37ccc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37CCC4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37ccc0) {
            ctx->pc = 0x37CCDCu;
            goto label_37ccdc;
        }
    }
    ctx->pc = 0x37CCC8u;
label_37ccc8:
    // 0x37ccc8: 0x28412710
    ctx->pc = 0x37ccc8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 10000));
    // 0x37cccc: 0x14200003
    ctx->pc = 0x37CCCCu;
    {
        const bool branch_taken_0x37cccc = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37cccc) {
            ctx->pc = 0x37CCDCu;
            goto label_37ccdc;
        }
    }
    ctx->pc = 0x37CCD4u;
    // 0x37ccd4: 0x10000001
    ctx->pc = 0x37CCD4u;
    {
        const bool branch_taken_0x37ccd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37CCD8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9999));
        if (branch_taken_0x37ccd4) {
            ctx->pc = 0x37CCDCu;
            goto label_37ccdc;
        }
    }
    ctx->pc = 0x37CCDCu;
label_37ccdc:
    // 0x37ccdc: 0x24040001
    ctx->pc = 0x37ccdcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37cce0: 0x16040028
    ctx->pc = 0x37CCE0u;
    {
        const bool branch_taken_0x37cce0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 4));
        ctx->pc = 0x37CCE4u;
        WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x37cce0) {
            ctx->pc = 0x37CD84u;
            goto label_37cd84;
        }
    }
    ctx->pc = 0x37CCE8u;
    // 0x37cce8: 0x2953821
    ctx->pc = 0x37cce8u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x37ccec: 0x24e806cc
    ctx->pc = 0x37ccecu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 7), 1740));
    // 0x37ccf0: 0x3c030039
    ctx->pc = 0x37ccf0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)57 << 16));
    // 0x37ccf4: 0x80102d
    ctx->pc = 0x37ccf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ccf8: 0x2463a500
    ctx->pc = 0x37ccf8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294944000));
    // 0x37ccfc: 0x42880
    ctx->pc = 0x37ccfcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 2));
label_37cd00:
    // 0x37cd00: 0x8d060000
    ctx->pc = 0x37cd00u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x37cd04: 0x652821
    ctx->pc = 0x37cd04u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x37cd08: 0x8ca50000
    ctx->pc = 0x37cd08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37cd0c: 0xc5282b
    ctx->pc = 0x37cd0cu;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x37cd10: 0x14a00018
    ctx->pc = 0x37CD10u;
    {
        const bool branch_taken_0x37cd10 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x37CD14u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 31));
        if (branch_taken_0x37cd10) {
            ctx->pc = 0x37CD74u;
            goto label_37cd74;
        }
    }
    ctx->pc = 0x37CD18u;
    // 0x37cd18: 0x4810005
    ctx->pc = 0x37CD18u;
    {
        const bool branch_taken_0x37cd18 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x37CD1Cu;
        SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
        if (branch_taken_0x37cd18) {
            ctx->pc = 0x37CD30u;
            goto label_37cd30;
        }
    }
    ctx->pc = 0x37CD20u;
    // 0x37cd20: 0x10a00002
    ctx->pc = 0x37CD20u;
    {
        const bool branch_taken_0x37cd20 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x37cd20) {
            ctx->pc = 0x37CD2Cu;
            goto label_37cd2c;
        }
    }
    ctx->pc = 0x37CD28u;
    // 0x37cd28: 0x24a5ffe0
    ctx->pc = 0x37cd28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967264));
label_37cd2c:
    // 0x37cd2c: 0xa23004
    ctx->pc = 0x37cd2cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
label_37cd30:
    // 0x37cd30: 0x42943
    ctx->pc = 0x37cd30u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 5));
    // 0x37cd34: 0x52880
    ctx->pc = 0x37cd34u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x37cd38: 0xe54821
    ctx->pc = 0x37cd38u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x37cd3c: 0x25252394
    ctx->pc = 0x37cd3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 9), 9108));
    // 0x37cd40: 0x8d292394
    ctx->pc = 0x37cd40u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 9), 9108)));
    // 0x37cd44: 0x1264824
    ctx->pc = 0x37cd44u;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x37cd48: 0x15200007
    ctx->pc = 0x37CD48u;
    {
        const bool branch_taken_0x37cd48 = (GPR_U32(ctx, 9) != GPR_U32(ctx, 0));
        if (branch_taken_0x37cd48) {
            ctx->pc = 0x37CD68u;
            goto label_37cd68;
        }
    }
    ctx->pc = 0x37CD50u;
    // 0x37cd50: 0x96490058
    ctx->pc = 0x37cd50u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x37cd54: 0x248a0004
    ctx->pc = 0x37cd54u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 4), 4));
    // 0x37cd58: 0x1425004
    ctx->pc = 0x37cd58u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 10) & 0x1F));
    // 0x37cd5c: 0x314affff
    ctx->pc = 0x37cd5cu;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 10), 65535));
    // 0x37cd60: 0x12a4825
    ctx->pc = 0x37cd60u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x37cd64: 0xa6490058
    ctx->pc = 0x37cd64u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 88), (uint16_t)GPR_U32(ctx, 9));
label_37cd68:
    // 0x37cd68: 0x8ca90000
    ctx->pc = 0x37cd68u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37cd6c: 0x1263025
    ctx->pc = 0x37cd6cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x37cd70: 0xaca60000
    ctx->pc = 0x37cd70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_37cd74:
    // 0x37cd74: 0x24840001
    ctx->pc = 0x37cd74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x37cd78: 0x28810005
    ctx->pc = 0x37cd78u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 5));
    // 0x37cd7c: 0x1420ffe0
    ctx->pc = 0x37CD7Cu;
    {
        const bool branch_taken_0x37cd7c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x37CD80u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x37cd7c) {
            ctx->pc = 0x37CD00u;
            goto label_37cd00;
        }
    }
    ctx->pc = 0x37CD84u;
label_37cd84:
    // 0x37cd84: 0x16000008
    ctx->pc = 0x37CD84u;
    {
        const bool branch_taken_0x37cd84 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x37cd84) {
            ctx->pc = 0x37CDA8u;
            goto label_37cda8;
        }
    }
    ctx->pc = 0x37CD8Cu;
    // 0x37cd8c: 0xc06c0c0
    ctx->pc = 0x37CD8Cu;
    SET_GPR_U32(ctx, 31, 0x37CD94u);
    ctx->pc = 0x1B0300u;
    {
        auto targetFn = runtime->lookupFunction(0x1B0300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CD94u; }
        if (ctx->pc != 0x37CD94u) { return; }
    }
    ctx->pc = 0x37CD94u;
    // 0x37cd94: 0x24030001
    ctx->pc = 0x37cd94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37cd98: 0x14430003
    ctx->pc = 0x37CD98u;
    {
        const bool branch_taken_0x37cd98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x37CD9Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37cd98) {
            ctx->pc = 0x37CDA8u;
            goto label_37cda8;
        }
    }
    ctx->pc = 0x37CDA0u;
    // 0x37cda0: 0xc204bd4
    ctx->pc = 0x37CDA0u;
    SET_GPR_U32(ctx, 31, 0x37CDA8u);
    ctx->pc = 0x812F50u;
    {
        auto targetFn = runtime->lookupFunction(0x812F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CDA8u; }
        if (ctx->pc != 0x37CDA8u) { return; }
    }
    ctx->pc = 0x37CDA8u;
label_37cda8:
    // 0x37cda8: 0x92420046
    ctx->pc = 0x37cda8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 70)));
    // 0x37cdac: 0x1040014b
    ctx->pc = 0x37CDACu;
    {
        const bool branch_taken_0x37cdac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x37CDB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x37cdac) {
            ctx->pc = 0x37D2DCu;
            goto label_37d2dc;
        }
    }
    ctx->pc = 0x37CDB4u;
    // 0x37cdb4: 0x24020001
    ctx->pc = 0x37cdb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37cdb8: 0x1602001b
    ctx->pc = 0x37CDB8u;
    {
        const bool branch_taken_0x37cdb8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x37CDBCu;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 17), 65535));
        if (branch_taken_0x37cdb8) {
            ctx->pc = 0x37CE28u;
            goto label_37ce28;
        }
    }
    ctx->pc = 0x37CDC0u;
    // 0x37cdc0: 0x3224ffff
    ctx->pc = 0x37cdc0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 17), 65535));
    // 0x37cdc4: 0x1880003c
    ctx->pc = 0x37CDC4u;
    {
        const bool branch_taken_0x37cdc4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x37CDC8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x37cdc4) {
            ctx->pc = 0x37CEB8u;
            goto label_37ceb8;
        }
    }
    ctx->pc = 0x37CDCCu;
    // 0x37cdcc: 0x4810004
    ctx->pc = 0x37CDCCu;
    {
        const bool branch_taken_0x37cdcc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x37CDD0u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 31));
        if (branch_taken_0x37cdcc) {
            ctx->pc = 0x37CDE0u;
            goto label_37cde0;
        }
    }
    ctx->pc = 0x37CDD4u;
    // 0x37cdd4: 0x10a00003
    ctx->pc = 0x37CDD4u;
    {
        const bool branch_taken_0x37cdd4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x37CDD8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x37cdd4) {
            ctx->pc = 0x37CDE4u;
            goto label_37cde4;
        }
    }
    ctx->pc = 0x37CDDCu;
    // 0x37cddc: 0x24a5ffe0
    ctx->pc = 0x37cddcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967264));
label_37cde0:
    // 0x37cde0: 0x24030001
    ctx->pc = 0x37cde0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_37cde4:
    // 0x37cde4: 0x41143
    ctx->pc = 0x37cde4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 5));
    // 0x37cde8: 0xa33804
    ctx->pc = 0x37cde8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x37cdec: 0x23080
    ctx->pc = 0x37cdecu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 2));
    // 0x37cdf0: 0x3a030001
    ctx->pc = 0x37cdf0u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 16), 1));
    // 0x37cdf4: 0x24021ce4
    ctx->pc = 0x37cdf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7396));
    // 0x37cdf8: 0x622818
    ctx->pc = 0x37cdf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x37cdfc: 0x2b41021
    ctx->pc = 0x37cdfcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x37ce00: 0xc21821
    ctx->pc = 0x37ce00u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x37ce04: 0xb41021
    ctx->pc = 0x37ce04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x37ce08: 0xc22821
    ctx->pc = 0x37ce08u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x37ce0c: 0x8ca22394
    ctx->pc = 0x37ce0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 9108)));
    // 0x37ce10: 0x471025
    ctx->pc = 0x37ce10u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x37ce14: 0xaca22394
    ctx->pc = 0x37ce14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 9108), GPR_U32(ctx, 2));
    // 0x37ce18: 0x8c622394
    ctx->pc = 0x37ce18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 9108)));
    // 0x37ce1c: 0x471025
    ctx->pc = 0x37ce1cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x37ce20: 0x10000024
    ctx->pc = 0x37CE20u;
    {
        const bool branch_taken_0x37ce20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37CE24u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 9108), GPR_U32(ctx, 2));
        if (branch_taken_0x37ce20) {
            ctx->pc = 0x37CEB4u;
            goto label_37ceb4;
        }
    }
    ctx->pc = 0x37CE28u;
label_37ce28:
    // 0x37ce28: 0x18800022
    ctx->pc = 0x37CE28u;
    {
        const bool branch_taken_0x37ce28 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x37CE2Cu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 31));
        if (branch_taken_0x37ce28) {
            ctx->pc = 0x37CEB4u;
            goto label_37ceb4;
        }
    }
    ctx->pc = 0x37CE30u;
    // 0x37ce30: 0x4810005
    ctx->pc = 0x37CE30u;
    {
        const bool branch_taken_0x37ce30 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x37CE34u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 5));
        if (branch_taken_0x37ce30) {
            ctx->pc = 0x37CE48u;
            goto label_37ce48;
        }
    }
    ctx->pc = 0x37CE38u;
    // 0x37ce38: 0x10600002
    ctx->pc = 0x37CE38u;
    {
        const bool branch_taken_0x37ce38 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x37ce38) {
            ctx->pc = 0x37CE44u;
            goto label_37ce44;
        }
    }
    ctx->pc = 0x37CE40u;
    // 0x37ce40: 0x2463ffe0
    ctx->pc = 0x37ce40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967264));
label_37ce44:
    // 0x37ce44: 0x41143
    ctx->pc = 0x37ce44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 5));
label_37ce48:
    // 0x37ce48: 0x24080001
    ctx->pc = 0x37ce48u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37ce4c: 0x21080
    ctx->pc = 0x37ce4cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x37ce50: 0x2b43021
    ctx->pc = 0x37ce50u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x37ce54: 0x463821
    ctx->pc = 0x37ce54u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x37ce58: 0x681804
    ctx->pc = 0x37ce58u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 3) & 0x1F));
    // 0x37ce5c: 0x8ce62394
    ctx->pc = 0x37ce5cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 9108)));
    // 0x37ce60: 0x542821
    ctx->pc = 0x37ce60u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x37ce64: 0xc33025
    ctx->pc = 0x37ce64u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x37ce68: 0xace62394
    ctx->pc = 0x37ce68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 9108), GPR_U32(ctx, 6));
    // 0x37ce6c: 0x8ca54078
    ctx->pc = 0x37ce6cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 16504)));
    // 0x37ce70: 0xa32824
    ctx->pc = 0x37ce70u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x37ce74: 0x14a00008
    ctx->pc = 0x37CE74u;
    {
        const bool branch_taken_0x37ce74 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x37CE78u;
        SET_GPR_U32(ctx, 6, XOR32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x37ce74) {
            ctx->pc = 0x37CE98u;
            goto label_37ce98;
        }
    }
    ctx->pc = 0x37CE7Cu;
    // 0x37ce7c: 0x96450058
    ctx->pc = 0x37ce7cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x37ce80: 0x24860004
    ctx->pc = 0x37ce80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 4));
    // 0x37ce84: 0xc83004
    ctx->pc = 0x37ce84u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x37ce88: 0x30c6ffff
    ctx->pc = 0x37ce88u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 65535));
    // 0x37ce8c: 0xa62825
    ctx->pc = 0x37ce8cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x37ce90: 0xa6450058
    ctx->pc = 0x37ce90u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 88), (uint16_t)GPR_U32(ctx, 5));
    // 0x37ce94: 0x3a060001
    ctx->pc = 0x37ce94u;
    SET_GPR_U32(ctx, 6, XOR32(GPR_U32(ctx, 16), 1));
label_37ce98:
    // 0x37ce98: 0x24051ce4
    ctx->pc = 0x37ce98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7396));
    // 0x37ce9c: 0xc52818
    ctx->pc = 0x37ce9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x37cea0: 0xb42821
    ctx->pc = 0x37cea0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x37cea4: 0x452821
    ctx->pc = 0x37cea4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x37cea8: 0x8ca22394
    ctx->pc = 0x37cea8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 9108)));
    // 0x37ceac: 0x431025
    ctx->pc = 0x37ceacu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37ceb0: 0xaca22394
    ctx->pc = 0x37ceb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 9108), GPR_U32(ctx, 2));
label_37ceb4:
    // 0x37ceb4: 0x24020001
    ctx->pc = 0x37ceb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_37ceb8:
    // 0x37ceb8: 0x16020030
    ctx->pc = 0x37CEB8u;
    {
        const bool branch_taken_0x37ceb8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x37CEBCu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 4));
        if (branch_taken_0x37ceb8) {
            ctx->pc = 0x37CF7Cu;
            goto label_37cf7c;
        }
    }
    ctx->pc = 0x37CEC0u;
    // 0x37cec0: 0x1020002e
    ctx->pc = 0x37CEC0u;
    {
        const bool branch_taken_0x37cec0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x37CEC4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x37cec0) {
            ctx->pc = 0x37CF7Cu;
            goto label_37cf7c;
        }
    }
    ctx->pc = 0x37CEC8u;
    // 0x37cec8: 0x4410004
    ctx->pc = 0x37CEC8u;
    {
        const bool branch_taken_0x37cec8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x37CECCu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 31));
        if (branch_taken_0x37cec8) {
            ctx->pc = 0x37CEDCu;
            goto label_37cedc;
        }
    }
    ctx->pc = 0x37CED0u;
    // 0x37ced0: 0x10600002
    ctx->pc = 0x37CED0u;
    {
        const bool branch_taken_0x37ced0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x37ced0) {
            ctx->pc = 0x37CEDCu;
            goto label_37cedc;
        }
    }
    ctx->pc = 0x37CED8u;
    // 0x37ced8: 0x2463ffe0
    ctx->pc = 0x37ced8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967264));
label_37cedc:
    // 0x37cedc: 0x21143
    ctx->pc = 0x37cedcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x37cee0: 0x24060001
    ctx->pc = 0x37cee0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37cee4: 0x22880
    ctx->pc = 0x37cee4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 2));
    // 0x37cee8: 0x661804
    ctx->pc = 0x37cee8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x37ceec: 0x2b41021
    ctx->pc = 0x37ceecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x37cef0: 0x24422394
    ctx->pc = 0x37cef0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9108));
    // 0x37cef4: 0x453821
    ctx->pc = 0x37cef4u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x37cef8: 0x8ce50000
    ctx->pc = 0x37cef8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x37cefc: 0xa32824
    ctx->pc = 0x37cefcu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x37cf00: 0x14a00006
    ctx->pc = 0x37CF00u;
    {
        const bool branch_taken_0x37cf00 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x37CF04u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 5));
        if (branch_taken_0x37cf00) {
            ctx->pc = 0x37CF1Cu;
            goto label_37cf1c;
        }
    }
    ctx->pc = 0x37CF08u;
    // 0x37cf08: 0x96440058
    ctx->pc = 0x37cf08u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x37cf0c: 0xa62804
    ctx->pc = 0x37cf0cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x37cf10: 0x30a5ffff
    ctx->pc = 0x37cf10u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
    // 0x37cf14: 0x852025
    ctx->pc = 0x37cf14u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x37cf18: 0xa6440058
    ctx->pc = 0x37cf18u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 88), (uint16_t)GPR_U32(ctx, 4));
label_37cf1c:
    // 0x37cf1c: 0x8ce60000
    ctx->pc = 0x37cf1cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x37cf20: 0x2b42021
    ctx->pc = 0x37cf20u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x37cf24: 0x2405000f
    ctx->pc = 0x37cf24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x37cf28: 0xc31825
    ctx->pc = 0x37cf28u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x37cf2c: 0xace30000
    ctx->pc = 0x37cf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x37cf30: 0x8c862394
    ctx->pc = 0x37cf30u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 9108)));
    // 0x37cf34: 0x30c3000f
    ctx->pc = 0x37cf34u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 15));
    // 0x37cf38: 0x14650010
    ctx->pc = 0x37CF38u;
    {
        const bool branch_taken_0x37cf38 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        ctx->pc = 0x37CF3Cu;
        SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x37cf38) {
            ctx->pc = 0x37CF7Cu;
            goto label_37cf7c;
        }
    }
    ctx->pc = 0x37CF40u;
    // 0x37cf40: 0x24031ce4
    ctx->pc = 0x37cf40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7396));
    // 0x37cf44: 0x831818
    ctx->pc = 0x37cf44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x37cf48: 0x741821
    ctx->pc = 0x37cf48u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x37cf4c: 0x8c632394
    ctx->pc = 0x37cf4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 9108)));
    // 0x37cf50: 0x3063000f
    ctx->pc = 0x37cf50u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
    // 0x37cf54: 0x14650009
    ctx->pc = 0x37CF54u;
    {
        const bool branch_taken_0x37cf54 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        ctx->pc = 0x37CF58u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 16));
        if (branch_taken_0x37cf54) {
            ctx->pc = 0x37CF7Cu;
            goto label_37cf7c;
        }
    }
    ctx->pc = 0x37CF5Cu;
    // 0x37cf5c: 0x14600004
    ctx->pc = 0x37CF5Cu;
    {
        const bool branch_taken_0x37cf5c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x37cf5c) {
            ctx->pc = 0x37CF70u;
            goto label_37cf70;
        }
    }
    ctx->pc = 0x37CF64u;
    // 0x37cf64: 0x96430058
    ctx->pc = 0x37cf64u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x37cf68: 0x34630100
    ctx->pc = 0x37cf68u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 256));
    // 0x37cf6c: 0xa6430058
    ctx->pc = 0x37cf6cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 88), (uint16_t)GPR_U32(ctx, 3));
label_37cf70:
    // 0x37cf70: 0x8c430000
    ctx->pc = 0x37cf70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37cf74: 0x34630010
    ctx->pc = 0x37cf74u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 16));
    // 0x37cf78: 0xac430000
    ctx->pc = 0x37cf78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_37cf7c:
    // 0x37cf7c: 0x92420044
    ctx->pc = 0x37cf7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x37cf80: 0x1440000e
    ctx->pc = 0x37CF80u;
    {
        const bool branch_taken_0x37cf80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37CF84u;
        SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
        if (branch_taken_0x37cf80) {
            ctx->pc = 0x37CFBCu;
            goto label_37cfbc;
        }
    }
    ctx->pc = 0x37CF88u;
    // 0x37cf88: 0x9023ae8a
    ctx->pc = 0x37cf88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946442)));
    // 0x37cf8c: 0x4610004
    ctx->pc = 0x37CF8Cu;
    {
        const bool branch_taken_0x37cf8c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x37CF90u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
        if (branch_taken_0x37cf8c) {
            ctx->pc = 0x37CFA0u;
            goto label_37cfa0;
        }
    }
    ctx->pc = 0x37CF94u;
    // 0x37cf94: 0x10400003
    ctx->pc = 0x37CF94u;
    {
        const bool branch_taken_0x37cf94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x37CF98u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4));
        if (branch_taken_0x37cf94) {
            ctx->pc = 0x37CFA4u;
            goto label_37cfa4;
        }
    }
    ctx->pc = 0x37CF9Cu;
    // 0x37cf9c: 0x2442fffc
    ctx->pc = 0x37cf9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
label_37cfa0:
    // 0x37cfa0: 0x24430004
    ctx->pc = 0x37cfa0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4));
label_37cfa4:
    // 0x37cfa4: 0x24020001
    ctx->pc = 0x37cfa4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37cfa8: 0x621804
    ctx->pc = 0x37cfa8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x37cfac: 0x92c20094
    ctx->pc = 0x37cfacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 148)));
    // 0x37cfb0: 0x306300ff
    ctx->pc = 0x37cfb0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x37cfb4: 0x431025
    ctx->pc = 0x37cfb4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37cfb8: 0xa2c20094
    ctx->pc = 0x37cfb8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 148), (uint8_t)GPR_U32(ctx, 2));
label_37cfbc:
    // 0x37cfbc: 0x92420045
    ctx->pc = 0x37cfbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
    // 0x37cfc0: 0x1440000d
    ctx->pc = 0x37CFC0u;
    {
        const bool branch_taken_0x37cfc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37CFC4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
        if (branch_taken_0x37cfc0) {
            ctx->pc = 0x37CFF8u;
            goto label_37cff8;
        }
    }
    ctx->pc = 0x37CFC8u;
    // 0x37cfc8: 0x9022ae8a
    ctx->pc = 0x37cfc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946442)));
    // 0x37cfcc: 0x4410004
    ctx->pc = 0x37CFCCu;
    {
        const bool branch_taken_0x37cfcc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x37CFD0u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 3));
        if (branch_taken_0x37cfcc) {
            ctx->pc = 0x37CFE0u;
            goto label_37cfe0;
        }
    }
    ctx->pc = 0x37CFD4u;
    // 0x37cfd4: 0x10800002
    ctx->pc = 0x37CFD4u;
    {
        const bool branch_taken_0x37cfd4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x37cfd4) {
            ctx->pc = 0x37CFE0u;
            goto label_37cfe0;
        }
    }
    ctx->pc = 0x37CFDCu;
    // 0x37cfdc: 0x2484fffc
    ctx->pc = 0x37cfdcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
label_37cfe0:
    // 0x37cfe0: 0x92c20094
    ctx->pc = 0x37cfe0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 148)));
    // 0x37cfe4: 0x24030001
    ctx->pc = 0x37cfe4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37cfe8: 0x831804
    ctx->pc = 0x37cfe8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x37cfec: 0x306300ff
    ctx->pc = 0x37cfecu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x37cff0: 0x431025
    ctx->pc = 0x37cff0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37cff4: 0xa2c20094
    ctx->pc = 0x37cff4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 148), (uint8_t)GPR_U32(ctx, 2));
label_37cff8:
    // 0x37cff8: 0x96c20002
    ctx->pc = 0x37cff8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x37cffc: 0x24420001
    ctx->pc = 0x37cffcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x37d000: 0xa6c20002
    ctx->pc = 0x37d000u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x37d004: 0x96c20002
    ctx->pc = 0x37d004u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x37d008: 0x4410003
    ctx->pc = 0x37D008u;
    {
        const bool branch_taken_0x37d008 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x37D00Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 10000));
        if (branch_taken_0x37d008) {
            ctx->pc = 0x37D018u;
            goto label_37d018;
        }
    }
    ctx->pc = 0x37D010u;
    // 0x37d010: 0x10000005
    ctx->pc = 0x37D010u;
    {
        const bool branch_taken_0x37d010 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37D014u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37d010) {
            ctx->pc = 0x37D028u;
            goto label_37d028;
        }
    }
    ctx->pc = 0x37D018u;
label_37d018:
    // 0x37d018: 0x14200003
    ctx->pc = 0x37D018u;
    {
        const bool branch_taken_0x37d018 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37d018) {
            ctx->pc = 0x37D028u;
            goto label_37d028;
        }
    }
    ctx->pc = 0x37D020u;
    // 0x37d020: 0x10000001
    ctx->pc = 0x37D020u;
    {
        const bool branch_taken_0x37d020 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37D024u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9999));
        if (branch_taken_0x37d020) {
            ctx->pc = 0x37D028u;
            goto label_37d028;
        }
    }
    ctx->pc = 0x37D028u;
label_37d028:
    // 0x37d028: 0xa6c20002
    ctx->pc = 0x37d028u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x37d02c: 0x3c01004c
    ctx->pc = 0x37d02cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x37d030: 0x9023ae8a
    ctx->pc = 0x37d030u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946442)));
    // 0x37d034: 0x172080
    ctx->pc = 0x37d034u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 23), 2));
    // 0x37d038: 0x4610004
    ctx->pc = 0x37D038u;
    {
        const bool branch_taken_0x37d038 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x37D03Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
        if (branch_taken_0x37d038) {
            ctx->pc = 0x37D04Cu;
            goto label_37d04c;
        }
    }
    ctx->pc = 0x37D040u;
    // 0x37d040: 0x10400002
    ctx->pc = 0x37D040u;
    {
        const bool branch_taken_0x37d040 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x37d040) {
            ctx->pc = 0x37D04Cu;
            goto label_37d04c;
        }
    }
    ctx->pc = 0x37D048u;
    // 0x37d048: 0x2442fffc
    ctx->pc = 0x37d048u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
label_37d04c:
    // 0x37d04c: 0x210c0
    ctx->pc = 0x37d04cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x37d050: 0x561021
    ctx->pc = 0x37d050u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x37d054: 0x821021
    ctx->pc = 0x37d054u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x37d058: 0x8c430004
    ctx->pc = 0x37d058u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x37d05c: 0x1060001d
    ctx->pc = 0x37D05Cu;
    {
        const bool branch_taken_0x37d05c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x37D060u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4));
        if (branch_taken_0x37d05c) {
            ctx->pc = 0x37D0D4u;
            goto label_37d0d4;
        }
    }
    ctx->pc = 0x37D064u;
    // 0x37d064: 0x8e620018
    ctx->pc = 0x37d064u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x37d068: 0x43082b
    ctx->pc = 0x37d068u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37d06c: 0x10200031
    ctx->pc = 0x37D06Cu;
    {
        const bool branch_taken_0x37d06c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x37d06c) {
            ctx->pc = 0x37D134u;
            goto label_37d134;
        }
    }
    ctx->pc = 0x37D074u;
    // 0x37d074: 0xaca20000
    ctx->pc = 0x37d074u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x37d078: 0x3c01004c
    ctx->pc = 0x37d078u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x37d07c: 0x9023ae8a
    ctx->pc = 0x37d07cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946442)));
    // 0x37d080: 0x4610004
    ctx->pc = 0x37D080u;
    {
        const bool branch_taken_0x37d080 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x37D084u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
        if (branch_taken_0x37d080) {
            ctx->pc = 0x37D094u;
            goto label_37d094;
        }
    }
    ctx->pc = 0x37D088u;
    // 0x37d088: 0x10400002
    ctx->pc = 0x37D088u;
    {
        const bool branch_taken_0x37d088 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x37d088) {
            ctx->pc = 0x37D094u;
            goto label_37d094;
        }
    }
    ctx->pc = 0x37D090u;
    // 0x37d090: 0x2442fffc
    ctx->pc = 0x37d090u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
label_37d094:
    // 0x37d094: 0x210c0
    ctx->pc = 0x37d094u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x37d098: 0x3c01405f
    ctx->pc = 0x37d098u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16479 << 16));
    // 0x37d09c: 0x561021
    ctx->pc = 0x37d09cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x37d0a0: 0x342176f9
    ctx->pc = 0x37d0a0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 30457));
    // 0x37d0a4: 0x821021
    ctx->pc = 0x37d0a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x37d0a8: 0x24430004
    ctx->pc = 0x37d0a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4));
    // 0x37d0ac: 0x8c420004
    ctx->pc = 0x37d0acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x37d0b0: 0x41082b
    ctx->pc = 0x37d0b0u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x37d0b4: 0x14200003
    ctx->pc = 0x37D0B4u;
    {
        const bool branch_taken_0x37d0b4 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37d0b4) {
            ctx->pc = 0x37D0C4u;
            goto label_37d0c4;
        }
    }
    ctx->pc = 0x37D0BCu;
    // 0x37d0bc: 0x3c02405f
    ctx->pc = 0x37d0bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16479 << 16));
    // 0x37d0c0: 0x344276f8
    ctx->pc = 0x37d0c0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 30456));
label_37d0c4:
    // 0x37d0c4: 0xac620000
    ctx->pc = 0x37d0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x37d0c8: 0x24020001
    ctx->pc = 0x37d0c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d0cc: 0x10000019
    ctx->pc = 0x37D0CCu;
    {
        const bool branch_taken_0x37d0cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37D0D0u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 86), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x37d0cc) {
            ctx->pc = 0x37D134u;
            goto label_37d134;
        }
    }
    ctx->pc = 0x37D0D4u;
label_37d0d4:
    // 0x37d0d4: 0x8e620018
    ctx->pc = 0x37d0d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x37d0d8: 0x3c01004c
    ctx->pc = 0x37d0d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x37d0dc: 0xaca20000
    ctx->pc = 0x37d0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x37d0e0: 0x9023ae8a
    ctx->pc = 0x37d0e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946442)));
    // 0x37d0e4: 0x4610004
    ctx->pc = 0x37D0E4u;
    {
        const bool branch_taken_0x37d0e4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x37D0E8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
        if (branch_taken_0x37d0e4) {
            ctx->pc = 0x37D0F8u;
            goto label_37d0f8;
        }
    }
    ctx->pc = 0x37D0ECu;
    // 0x37d0ec: 0x10400002
    ctx->pc = 0x37D0ECu;
    {
        const bool branch_taken_0x37d0ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x37d0ec) {
            ctx->pc = 0x37D0F8u;
            goto label_37d0f8;
        }
    }
    ctx->pc = 0x37D0F4u;
    // 0x37d0f4: 0x2442fffc
    ctx->pc = 0x37d0f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
label_37d0f8:
    // 0x37d0f8: 0x210c0
    ctx->pc = 0x37d0f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x37d0fc: 0x3c01405f
    ctx->pc = 0x37d0fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16479 << 16));
    // 0x37d100: 0x561021
    ctx->pc = 0x37d100u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x37d104: 0x342176f9
    ctx->pc = 0x37d104u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 30457));
    // 0x37d108: 0x821021
    ctx->pc = 0x37d108u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x37d10c: 0x24430004
    ctx->pc = 0x37d10cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4));
    // 0x37d110: 0x8c420004
    ctx->pc = 0x37d110u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x37d114: 0x41082b
    ctx->pc = 0x37d114u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x37d118: 0x14200003
    ctx->pc = 0x37D118u;
    {
        const bool branch_taken_0x37d118 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37d118) {
            ctx->pc = 0x37D128u;
            goto label_37d128;
        }
    }
    ctx->pc = 0x37D120u;
    // 0x37d120: 0x3c02405f
    ctx->pc = 0x37d120u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16479 << 16));
    // 0x37d124: 0x344276f8
    ctx->pc = 0x37d124u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 30456));
label_37d128:
    // 0x37d128: 0xac620000
    ctx->pc = 0x37d128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x37d12c: 0x24020001
    ctx->pc = 0x37d12cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d130: 0xa2420056
    ctx->pc = 0x37d130u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 86), (uint8_t)GPR_U32(ctx, 2));
label_37d134:
    // 0x37d134: 0x16000008
    ctx->pc = 0x37D134u;
    {
        const bool branch_taken_0x37d134 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x37d134) {
            ctx->pc = 0x37D158u;
            goto label_37d158;
        }
    }
    ctx->pc = 0x37D13Cu;
    // 0x37d13c: 0xc06c0c0
    ctx->pc = 0x37D13Cu;
    SET_GPR_U32(ctx, 31, 0x37D144u);
    ctx->pc = 0x1B0300u;
    {
        auto targetFn = runtime->lookupFunction(0x1B0300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D144u; }
        if (ctx->pc != 0x37D144u) { return; }
    }
    ctx->pc = 0x37D144u;
    // 0x37d144: 0x24030001
    ctx->pc = 0x37d144u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d148: 0x14430003
    ctx->pc = 0x37D148u;
    {
        const bool branch_taken_0x37d148 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x37d148) {
            ctx->pc = 0x37D158u;
            goto label_37d158;
        }
    }
    ctx->pc = 0x37D150u;
    // 0x37d150: 0xc204bd4
    ctx->pc = 0x37D150u;
    SET_GPR_U32(ctx, 31, 0x37D158u);
    ctx->pc = 0x37D154u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    ctx->pc = 0x812F50u;
    {
        auto targetFn = runtime->lookupFunction(0x812F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D158u; }
        if (ctx->pc != 0x37D158u) { return; }
    }
    ctx->pc = 0x37D158u;
label_37d158:
    // 0x37d158: 0x3c01004c
    ctx->pc = 0x37d158u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x37d15c: 0x3c02004a
    ctx->pc = 0x37d15cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
    // 0x37d160: 0x9024aded
    ctx->pc = 0x37d160u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946285)));
    // 0x37d164: 0x244267e4
    ctx->pc = 0x37d164u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26596));
    // 0x37d168: 0x41900
    ctx->pc = 0x37d168u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x37d16c: 0x642023
    ctx->pc = 0x37d16cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37d170: 0x418c0
    ctx->pc = 0x37d170u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x37d174: 0x831821
    ctx->pc = 0x37d174u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x37d178: 0x32140
    ctx->pc = 0x37d178u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 5));
    // 0x37d17c: 0x441021
    ctx->pc = 0x37d17cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37d180: 0x94420000
    ctx->pc = 0x37d180u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37d184: 0x10400022
    ctx->pc = 0x37D184u;
    {
        const bool branch_taken_0x37d184 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x37D188u;
        SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
        if (branch_taken_0x37d184) {
            ctx->pc = 0x37D210u;
            goto label_37d210;
        }
    }
    ctx->pc = 0x37D18Cu;
    // 0x37d18c: 0x3c01004c
    ctx->pc = 0x37d18cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x37d190: 0x9023ae8a
    ctx->pc = 0x37d190u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946442)));
    // 0x37d194: 0x4610004
    ctx->pc = 0x37D194u;
    {
        const bool branch_taken_0x37d194 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x37D198u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
        if (branch_taken_0x37d194) {
            ctx->pc = 0x37D1A8u;
            goto label_37d1a8;
        }
    }
    ctx->pc = 0x37D19Cu;
    // 0x37d19c: 0x10400002
    ctx->pc = 0x37D19Cu;
    {
        const bool branch_taken_0x37d19c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x37d19c) {
            ctx->pc = 0x37D1A8u;
            goto label_37d1a8;
        }
    }
    ctx->pc = 0x37D1A4u;
    // 0x37d1a4: 0x2442fffc
    ctx->pc = 0x37d1a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
label_37d1a8:
    // 0x37d1a8: 0x21040
    ctx->pc = 0x37d1a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x37d1ac: 0x3c01004c
    ctx->pc = 0x37d1acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x37d1b0: 0x561821
    ctx->pc = 0x37d1b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x37d1b4: 0x94620084
    ctx->pc = 0x37d1b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x37d1b8: 0x24420001
    ctx->pc = 0x37d1b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x37d1bc: 0xa4620084
    ctx->pc = 0x37d1bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 132), (uint16_t)GPR_U32(ctx, 2));
    // 0x37d1c0: 0x9023ae8a
    ctx->pc = 0x37d1c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946442)));
    // 0x37d1c4: 0x4610004
    ctx->pc = 0x37D1C4u;
    {
        const bool branch_taken_0x37d1c4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x37D1C8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
        if (branch_taken_0x37d1c4) {
            ctx->pc = 0x37D1D8u;
            goto label_37d1d8;
        }
    }
    ctx->pc = 0x37D1CCu;
    // 0x37d1cc: 0x10400002
    ctx->pc = 0x37D1CCu;
    {
        const bool branch_taken_0x37d1cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x37d1cc) {
            ctx->pc = 0x37D1D8u;
            goto label_37d1d8;
        }
    }
    ctx->pc = 0x37D1D4u;
    // 0x37d1d4: 0x2442fffc
    ctx->pc = 0x37d1d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
label_37d1d8:
    // 0x37d1d8: 0x21040
    ctx->pc = 0x37d1d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x37d1dc: 0x561021
    ctx->pc = 0x37d1dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x37d1e0: 0x24430084
    ctx->pc = 0x37d1e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 132));
    // 0x37d1e4: 0x94420084
    ctx->pc = 0x37d1e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x37d1e8: 0x4410003
    ctx->pc = 0x37D1E8u;
    {
        const bool branch_taken_0x37d1e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x37D1ECu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 10000));
        if (branch_taken_0x37d1e8) {
            ctx->pc = 0x37D1F8u;
            goto label_37d1f8;
        }
    }
    ctx->pc = 0x37D1F0u;
    // 0x37d1f0: 0x10000005
    ctx->pc = 0x37D1F0u;
    {
        const bool branch_taken_0x37d1f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37D1F4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37d1f0) {
            ctx->pc = 0x37D208u;
            goto label_37d208;
        }
    }
    ctx->pc = 0x37D1F8u;
label_37d1f8:
    // 0x37d1f8: 0x14200003
    ctx->pc = 0x37D1F8u;
    {
        const bool branch_taken_0x37d1f8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37d1f8) {
            ctx->pc = 0x37D208u;
            goto label_37d208;
        }
    }
    ctx->pc = 0x37D200u;
    // 0x37d200: 0x10000001
    ctx->pc = 0x37D200u;
    {
        const bool branch_taken_0x37d200 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37D204u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9999));
        if (branch_taken_0x37d200) {
            ctx->pc = 0x37D208u;
            goto label_37d208;
        }
    }
    ctx->pc = 0x37D208u;
label_37d208:
    // 0x37d208: 0x10000036
    ctx->pc = 0x37D208u;
    {
        const bool branch_taken_0x37d208 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37D20Cu;
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x37d208) {
            ctx->pc = 0x37D2E4u;
            goto label_37d2e4;
        }
    }
    ctx->pc = 0x37D210u;
label_37d210:
    // 0x37d210: 0x3c01004c
    ctx->pc = 0x37d210u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x37d214: 0x244267c8
    ctx->pc = 0x37d214u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26568));
    // 0x37d218: 0x9023ae8a
    ctx->pc = 0x37d218u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946442)));
    // 0x37d21c: 0x441021
    ctx->pc = 0x37d21cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37d220: 0x90440000
    ctx->pc = 0x37d220u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37d224: 0x420c0
    ctx->pc = 0x37d224u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
    // 0x37d228: 0x30620003
    ctx->pc = 0x37d228u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
    // 0x37d22c: 0x4610004
    ctx->pc = 0x37D22Cu;
    {
        const bool branch_taken_0x37d22c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x37D230u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        if (branch_taken_0x37d22c) {
            ctx->pc = 0x37D240u;
            goto label_37d240;
        }
    }
    ctx->pc = 0x37D234u;
    // 0x37d234: 0x10400002
    ctx->pc = 0x37D234u;
    {
        const bool branch_taken_0x37d234 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x37d234) {
            ctx->pc = 0x37D240u;
            goto label_37d240;
        }
    }
    ctx->pc = 0x37D23Cu;
    // 0x37d23c: 0x2442fffc
    ctx->pc = 0x37d23cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
label_37d240:
    // 0x37d240: 0x21040
    ctx->pc = 0x37d240u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x37d244: 0x3c04004a
    ctx->pc = 0x37d244u;
    SET_GPR_U32(ctx, 4, ((uint32_t)74 << 16));
    // 0x37d248: 0x451821
    ctx->pc = 0x37d248u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x37d24c: 0x3c01004c
    ctx->pc = 0x37d24cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x37d250: 0x94620044
    ctx->pc = 0x37d250u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x37d254: 0x248467c8
    ctx->pc = 0x37d254u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26568));
    // 0x37d258: 0x24420001
    ctx->pc = 0x37d258u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x37d25c: 0xa4620044
    ctx->pc = 0x37d25cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x37d260: 0x9025aded
    ctx->pc = 0x37d260u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946285)));
    // 0x37d264: 0x51100
    ctx->pc = 0x37d264u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
    // 0x37d268: 0x3c01004c
    ctx->pc = 0x37d268u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x37d26c: 0x453023
    ctx->pc = 0x37d26cu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x37d270: 0x9023ae8a
    ctx->pc = 0x37d270u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946442)));
    // 0x37d274: 0x628c0
    ctx->pc = 0x37d274u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 3));
    // 0x37d278: 0xc52821
    ctx->pc = 0x37d278u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x37d27c: 0x52940
    ctx->pc = 0x37d27cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 5));
    // 0x37d280: 0x852021
    ctx->pc = 0x37d280u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x37d284: 0x90840000
    ctx->pc = 0x37d284u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37d288: 0x30620003
    ctx->pc = 0x37d288u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
    // 0x37d28c: 0x420c0
    ctx->pc = 0x37d28cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
    // 0x37d290: 0x4610004
    ctx->pc = 0x37D290u;
    {
        const bool branch_taken_0x37d290 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x37D294u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        if (branch_taken_0x37d290) {
            ctx->pc = 0x37D2A4u;
            goto label_37d2a4;
        }
    }
    ctx->pc = 0x37D298u;
    // 0x37d298: 0x10400002
    ctx->pc = 0x37D298u;
    {
        const bool branch_taken_0x37d298 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x37d298) {
            ctx->pc = 0x37D2A4u;
            goto label_37d2a4;
        }
    }
    ctx->pc = 0x37D2A0u;
    // 0x37d2a0: 0x2442fffc
    ctx->pc = 0x37d2a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
label_37d2a4:
    // 0x37d2a4: 0x21040
    ctx->pc = 0x37d2a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x37d2a8: 0x441021
    ctx->pc = 0x37d2a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37d2ac: 0x24430044
    ctx->pc = 0x37d2acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 68));
    // 0x37d2b0: 0x94420044
    ctx->pc = 0x37d2b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x37d2b4: 0x4410003
    ctx->pc = 0x37D2B4u;
    {
        const bool branch_taken_0x37d2b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x37D2B8u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 10000));
        if (branch_taken_0x37d2b4) {
            ctx->pc = 0x37D2C4u;
            goto label_37d2c4;
        }
    }
    ctx->pc = 0x37D2BCu;
    // 0x37d2bc: 0x10000005
    ctx->pc = 0x37D2BCu;
    {
        const bool branch_taken_0x37d2bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37D2C0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37d2bc) {
            ctx->pc = 0x37D2D4u;
            goto label_37d2d4;
        }
    }
    ctx->pc = 0x37D2C4u;
label_37d2c4:
    // 0x37d2c4: 0x14200003
    ctx->pc = 0x37D2C4u;
    {
        const bool branch_taken_0x37d2c4 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x37d2c4) {
            ctx->pc = 0x37D2D4u;
            goto label_37d2d4;
        }
    }
    ctx->pc = 0x37D2CCu;
    // 0x37d2cc: 0x10000001
    ctx->pc = 0x37D2CCu;
    {
        const bool branch_taken_0x37d2cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37D2D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9999));
        if (branch_taken_0x37d2cc) {
            ctx->pc = 0x37D2D4u;
            goto label_37d2d4;
        }
    }
    ctx->pc = 0x37D2D4u;
label_37d2d4:
    // 0x37d2d4: 0x10000003
    ctx->pc = 0x37D2D4u;
    {
        const bool branch_taken_0x37d2d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37D2D8u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x37d2d4) {
            ctx->pc = 0x37D2E4u;
            goto label_37d2e4;
        }
    }
    ctx->pc = 0x37D2DCu;
label_37d2dc:
    // 0x37d2dc: 0xa2420045
    ctx->pc = 0x37d2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 69), (uint8_t)GPR_U32(ctx, 2));
    // 0x37d2e0: 0xa2420044
    ctx->pc = 0x37d2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 68), (uint8_t)GPR_U32(ctx, 2));
label_37d2e4:
    // 0x37d2e4: 0x3c01004c
    ctx->pc = 0x37d2e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x37d2e8: 0x8e440004
    ctx->pc = 0x37d2e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x37d2ec: 0x9023ae8a
    ctx->pc = 0x37d2ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946442)));
    // 0x37d2f0: 0x4610004
    ctx->pc = 0x37D2F0u;
    {
        const bool branch_taken_0x37d2f0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x37D2F4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
        if (branch_taken_0x37d2f0) {
            ctx->pc = 0x37D304u;
            goto label_37d304;
        }
    }
    ctx->pc = 0x37D2F8u;
    // 0x37d2f8: 0x10400003
    ctx->pc = 0x37D2F8u;
    {
        const bool branch_taken_0x37d2f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x37D2FCu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 3));
        if (branch_taken_0x37d2f8) {
            ctx->pc = 0x37D308u;
            goto label_37d308;
        }
    }
    ctx->pc = 0x37D300u;
    // 0x37d300: 0x2442fffc
    ctx->pc = 0x37d300u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
label_37d304:
    // 0x37d304: 0x218c0
    ctx->pc = 0x37d304u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 3));
label_37d308:
    // 0x37d308: 0x171080
    ctx->pc = 0x37d308u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 23), 2));
    // 0x37d30c: 0x761821
    ctx->pc = 0x37d30cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x37d310: 0x431021
    ctx->pc = 0x37d310u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37d314: 0x24430024
    ctx->pc = 0x37d314u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 36));
    // 0x37d318: 0x8c420024
    ctx->pc = 0x37d318u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x37d31c: 0x44082b
    ctx->pc = 0x37d31cu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37d320: 0x10200004
    ctx->pc = 0x37D320u;
    {
        const bool branch_taken_0x37d320 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x37d320) {
            ctx->pc = 0x37D334u;
            goto label_37d334;
        }
    }
    ctx->pc = 0x37D328u;
    // 0x37d328: 0xac640000
    ctx->pc = 0x37d328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x37d32c: 0x24020001
    ctx->pc = 0x37d32cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d330: 0xa2420055
    ctx->pc = 0x37d330u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 85), (uint8_t)GPR_U32(ctx, 2));
label_37d334:
    // 0x37d334: 0xc0df878
    ctx->pc = 0x37D334u;
    SET_GPR_U32(ctx, 31, 0x37D33Cu);
    ctx->pc = 0x37E1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0037E1E0_0x37e1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D33Cu; }
    }
    if (ctx->pc != 0x37D33Cu) { return; }
    ctx->pc = 0x37D33Cu;
    // 0x37d33c: 0xc0df8c4
    ctx->pc = 0x37D33Cu;
    SET_GPR_U32(ctx, 31, 0x37D344u);
    ctx->pc = 0x37E310u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0037E310_0x37e310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D344u; }
    }
    if (ctx->pc != 0x37D344u) { return; }
    ctx->pc = 0x37D344u;
    // 0x37d344: 0xdfbf0090
    ctx->pc = 0x37d344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x37d348: 0x7bbe0080
    ctx->pc = 0x37d348u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x37d34c: 0x7bb70070
    ctx->pc = 0x37d34cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37d350: 0x7bb60060
    ctx->pc = 0x37d350u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37d354: 0x7bb50050
    ctx->pc = 0x37d354u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37d358: 0x7bb40040
    ctx->pc = 0x37d358u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37d35c: 0x7bb30030
    ctx->pc = 0x37d35cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37d360: 0x7bb20020
    ctx->pc = 0x37d360u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37d364: 0x7bb10010
    ctx->pc = 0x37d364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d368: 0x7bb00000
    ctx->pc = 0x37d368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37d36c: 0x3e00008
    ctx->pc = 0x37D36Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D370u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37C564u: goto label_37c564;
            case 0x37C568u: goto label_37c568;
            case 0x37C594u: goto label_37c594;
            case 0x37C5C8u: goto label_37c5c8;
            case 0x37C5DCu: goto label_37c5dc;
            case 0x37C648u: goto label_37c648;
            case 0x37C658u: goto label_37c658;
            case 0x37C65Cu: goto label_37c65c;
            case 0x37C6A0u: goto label_37c6a0;
            case 0x37C6D8u: goto label_37c6d8;
            case 0x37C6E8u: goto label_37c6e8;
            case 0x37C718u: goto label_37c718;
            case 0x37C74Cu: goto label_37c74c;
            case 0x37C758u: goto label_37c758;
            case 0x37C75Cu: goto label_37c75c;
            case 0x37C79Cu: goto label_37c79c;
            case 0x37C7D4u: goto label_37c7d4;
            case 0x37C7E4u: goto label_37c7e4;
            case 0x37C81Cu: goto label_37c81c;
            case 0x37C838u: goto label_37c838;
            case 0x37C870u: goto label_37c870;
            case 0x37C8C8u: goto label_37c8c8;
            case 0x37C8F4u: goto label_37c8f4;
            case 0x37C908u: goto label_37c908;
            case 0x37C934u: goto label_37c934;
            case 0x37C948u: goto label_37c948;
            case 0x37C974u: goto label_37c974;
            case 0x37C988u: goto label_37c988;
            case 0x37C9B4u: goto label_37c9b4;
            case 0x37C9C8u: goto label_37c9c8;
            case 0x37C9F4u: goto label_37c9f4;
            case 0x37CA08u: goto label_37ca08;
            case 0x37CA34u: goto label_37ca34;
            case 0x37CA48u: goto label_37ca48;
            case 0x37CAA4u: goto label_37caa4;
            case 0x37CAB8u: goto label_37cab8;
            case 0x37CAC0u: goto label_37cac0;
            case 0x37CB2Cu: goto label_37cb2c;
            case 0x37CB3Cu: goto label_37cb3c;
            case 0x37CB40u: goto label_37cb40;
            case 0x37CB64u: goto label_37cb64;
            case 0x37CB80u: goto label_37cb80;
            case 0x37CB84u: goto label_37cb84;
            case 0x37CBA4u: goto label_37cba4;
            case 0x37CC44u: goto label_37cc44;
            case 0x37CC88u: goto label_37cc88;
            case 0x37CCC8u: goto label_37ccc8;
            case 0x37CCDCu: goto label_37ccdc;
            case 0x37CD00u: goto label_37cd00;
            case 0x37CD2Cu: goto label_37cd2c;
            case 0x37CD30u: goto label_37cd30;
            case 0x37CD68u: goto label_37cd68;
            case 0x37CD74u: goto label_37cd74;
            case 0x37CD84u: goto label_37cd84;
            case 0x37CDA8u: goto label_37cda8;
            case 0x37CDE0u: goto label_37cde0;
            case 0x37CDE4u: goto label_37cde4;
            case 0x37CE28u: goto label_37ce28;
            case 0x37CE44u: goto label_37ce44;
            case 0x37CE48u: goto label_37ce48;
            case 0x37CE98u: goto label_37ce98;
            case 0x37CEB4u: goto label_37ceb4;
            case 0x37CEB8u: goto label_37ceb8;
            case 0x37CEDCu: goto label_37cedc;
            case 0x37CF1Cu: goto label_37cf1c;
            case 0x37CF70u: goto label_37cf70;
            case 0x37CF7Cu: goto label_37cf7c;
            case 0x37CFA0u: goto label_37cfa0;
            case 0x37CFA4u: goto label_37cfa4;
            case 0x37CFBCu: goto label_37cfbc;
            case 0x37CFE0u: goto label_37cfe0;
            case 0x37CFF8u: goto label_37cff8;
            case 0x37D018u: goto label_37d018;
            case 0x37D028u: goto label_37d028;
            case 0x37D04Cu: goto label_37d04c;
            case 0x37D094u: goto label_37d094;
            case 0x37D0C4u: goto label_37d0c4;
            case 0x37D0D4u: goto label_37d0d4;
            case 0x37D0F8u: goto label_37d0f8;
            case 0x37D128u: goto label_37d128;
            case 0x37D134u: goto label_37d134;
            case 0x37D158u: goto label_37d158;
            case 0x37D1A8u: goto label_37d1a8;
            case 0x37D1D8u: goto label_37d1d8;
            case 0x37D1F8u: goto label_37d1f8;
            case 0x37D208u: goto label_37d208;
            case 0x37D210u: goto label_37d210;
            case 0x37D240u: goto label_37d240;
            case 0x37D2A4u: goto label_37d2a4;
            case 0x37D2C4u: goto label_37d2c4;
            case 0x37D2D4u: goto label_37d2d4;
            case 0x37D2DCu: goto label_37d2dc;
            case 0x37D2E4u: goto label_37d2e4;
            case 0x37D304u: goto label_37d304;
            case 0x37D308u: goto label_37d308;
            case 0x37D334u: goto label_37d334;
            case 0x37D398u: goto label_37d398;
            case 0x37D3B0u: goto label_37d3b0;
            case 0x37D3D8u: goto label_37d3d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37D374u;
    // 0x37d374: 0x0
    ctx->pc = 0x37d374u;
    // NOP
    // 0x37d378: 0x0
    ctx->pc = 0x37d378u;
    // NOP
    // 0x37d37c: 0x0
    ctx->pc = 0x37d37cu;
    // NOP
    // 0x37d380: 0x3c01003c
    ctx->pc = 0x37d380u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x37d384: 0x902284f6
    ctx->pc = 0x37d384u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294935798)));
    // 0x37d388: 0x14400003
    ctx->pc = 0x37D388u;
    {
        const bool branch_taken_0x37d388 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37D38Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
        if (branch_taken_0x37d388) {
            ctx->pc = 0x37D398u;
            goto label_37d398;
        }
    }
    ctx->pc = 0x37D390u;
    // 0x37d390: 0x10000011
    ctx->pc = 0x37D390u;
    {
        const bool branch_taken_0x37d390 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37D394u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x37d390) {
            ctx->pc = 0x37D3D8u;
            goto label_37d3d8;
        }
    }
    ctx->pc = 0x37D398u;
label_37d398:
    // 0x37d398: 0x24020004
    ctx->pc = 0x37d398u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x37d39c: 0x90246686
    ctx->pc = 0x37d39cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 26246)));
    // 0x37d3a0: 0x10820003
    ctx->pc = 0x37D3A0u;
    {
        const bool branch_taken_0x37d3a0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x37D3A4u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
        if (branch_taken_0x37d3a0) {
            ctx->pc = 0x37D3B0u;
            goto label_37d3b0;
        }
    }
    ctx->pc = 0x37D3A8u;
    // 0x37d3a8: 0x1000000b
    ctx->pc = 0x37D3A8u;
    {
        const bool branch_taken_0x37d3a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37D3ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x37d3a8) {
            ctx->pc = 0x37D3D8u;
            goto label_37d3d8;
        }
    }
    ctx->pc = 0x37D3B0u;
label_37d3b0:
    // 0x37d3b0: 0x3c020032
    ctx->pc = 0x37d3b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x37d3b4: 0x641821
    ctx->pc = 0x37d3b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37d3b8: 0x24421f1a
    ctx->pc = 0x37d3b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7962));
    // 0x37d3bc: 0x31840
    ctx->pc = 0x37d3bcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x37d3c0: 0x641821
    ctx->pc = 0x37d3c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37d3c4: 0x318c0
    ctx->pc = 0x37d3c4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x37d3c8: 0x431021
    ctx->pc = 0x37d3c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37d3cc: 0x94420000
    ctx->pc = 0x37d3ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37d3d0: 0x38420001
    ctx->pc = 0x37d3d0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x37d3d4: 0x2102b
    ctx->pc = 0x37d3d4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_37d3d8:
    // 0x37d3d8: 0x3e00008
    ctx->pc = 0x37D3D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37C564u: goto label_37c564;
            case 0x37C568u: goto label_37c568;
            case 0x37C594u: goto label_37c594;
            case 0x37C5C8u: goto label_37c5c8;
            case 0x37C5DCu: goto label_37c5dc;
            case 0x37C648u: goto label_37c648;
            case 0x37C658u: goto label_37c658;
            case 0x37C65Cu: goto label_37c65c;
            case 0x37C6A0u: goto label_37c6a0;
            case 0x37C6D8u: goto label_37c6d8;
            case 0x37C6E8u: goto label_37c6e8;
            case 0x37C718u: goto label_37c718;
            case 0x37C74Cu: goto label_37c74c;
            case 0x37C758u: goto label_37c758;
            case 0x37C75Cu: goto label_37c75c;
            case 0x37C79Cu: goto label_37c79c;
            case 0x37C7D4u: goto label_37c7d4;
            case 0x37C7E4u: goto label_37c7e4;
            case 0x37C81Cu: goto label_37c81c;
            case 0x37C838u: goto label_37c838;
            case 0x37C870u: goto label_37c870;
            case 0x37C8C8u: goto label_37c8c8;
            case 0x37C8F4u: goto label_37c8f4;
            case 0x37C908u: goto label_37c908;
            case 0x37C934u: goto label_37c934;
            case 0x37C948u: goto label_37c948;
            case 0x37C974u: goto label_37c974;
            case 0x37C988u: goto label_37c988;
            case 0x37C9B4u: goto label_37c9b4;
            case 0x37C9C8u: goto label_37c9c8;
            case 0x37C9F4u: goto label_37c9f4;
            case 0x37CA08u: goto label_37ca08;
            case 0x37CA34u: goto label_37ca34;
            case 0x37CA48u: goto label_37ca48;
            case 0x37CAA4u: goto label_37caa4;
            case 0x37CAB8u: goto label_37cab8;
            case 0x37CAC0u: goto label_37cac0;
            case 0x37CB2Cu: goto label_37cb2c;
            case 0x37CB3Cu: goto label_37cb3c;
            case 0x37CB40u: goto label_37cb40;
            case 0x37CB64u: goto label_37cb64;
            case 0x37CB80u: goto label_37cb80;
            case 0x37CB84u: goto label_37cb84;
            case 0x37CBA4u: goto label_37cba4;
            case 0x37CC44u: goto label_37cc44;
            case 0x37CC88u: goto label_37cc88;
            case 0x37CCC8u: goto label_37ccc8;
            case 0x37CCDCu: goto label_37ccdc;
            case 0x37CD00u: goto label_37cd00;
            case 0x37CD2Cu: goto label_37cd2c;
            case 0x37CD30u: goto label_37cd30;
            case 0x37CD68u: goto label_37cd68;
            case 0x37CD74u: goto label_37cd74;
            case 0x37CD84u: goto label_37cd84;
            case 0x37CDA8u: goto label_37cda8;
            case 0x37CDE0u: goto label_37cde0;
            case 0x37CDE4u: goto label_37cde4;
            case 0x37CE28u: goto label_37ce28;
            case 0x37CE44u: goto label_37ce44;
            case 0x37CE48u: goto label_37ce48;
            case 0x37CE98u: goto label_37ce98;
            case 0x37CEB4u: goto label_37ceb4;
            case 0x37CEB8u: goto label_37ceb8;
            case 0x37CEDCu: goto label_37cedc;
            case 0x37CF1Cu: goto label_37cf1c;
            case 0x37CF70u: goto label_37cf70;
            case 0x37CF7Cu: goto label_37cf7c;
            case 0x37CFA0u: goto label_37cfa0;
            case 0x37CFA4u: goto label_37cfa4;
            case 0x37CFBCu: goto label_37cfbc;
            case 0x37CFE0u: goto label_37cfe0;
            case 0x37CFF8u: goto label_37cff8;
            case 0x37D018u: goto label_37d018;
            case 0x37D028u: goto label_37d028;
            case 0x37D04Cu: goto label_37d04c;
            case 0x37D094u: goto label_37d094;
            case 0x37D0C4u: goto label_37d0c4;
            case 0x37D0D4u: goto label_37d0d4;
            case 0x37D0F8u: goto label_37d0f8;
            case 0x37D128u: goto label_37d128;
            case 0x37D134u: goto label_37d134;
            case 0x37D158u: goto label_37d158;
            case 0x37D1A8u: goto label_37d1a8;
            case 0x37D1D8u: goto label_37d1d8;
            case 0x37D1F8u: goto label_37d1f8;
            case 0x37D208u: goto label_37d208;
            case 0x37D210u: goto label_37d210;
            case 0x37D240u: goto label_37d240;
            case 0x37D2A4u: goto label_37d2a4;
            case 0x37D2C4u: goto label_37d2c4;
            case 0x37D2D4u: goto label_37d2d4;
            case 0x37D2DCu: goto label_37d2dc;
            case 0x37D2E4u: goto label_37d2e4;
            case 0x37D304u: goto label_37d304;
            case 0x37D308u: goto label_37d308;
            case 0x37D334u: goto label_37d334;
            case 0x37D398u: goto label_37d398;
            case 0x37D3B0u: goto label_37d3b0;
            case 0x37D3D8u: goto label_37d3d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37D3E0u;
}
