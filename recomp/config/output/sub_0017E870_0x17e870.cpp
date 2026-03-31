#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017E870
// Address: 0x17e870 - 0x17e998
void sub_0017E870_0x17e870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17e870u;

    // 0x17e870: 0x3c020027
    ctx->pc = 0x17e870u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x17e874: 0x2403ffff
    ctx->pc = 0x17e874u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17e878: 0x8c466158
    ctx->pc = 0x17e878u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 24920)));
    // 0x17e87c: 0x10c3003f
    ctx->pc = 0x17E87Cu;
    {
        const bool branch_taken_0x17e87c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        ctx->pc = 0x17E880u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17e87c) {
            ctx->pc = 0x17E97Cu;
            goto label_17e97c;
        }
    }
    ctx->pc = 0x17E884u;
    // 0x17e884: 0x3c030027
    ctx->pc = 0x17e884u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x17e888: 0x24050001
    ctx->pc = 0x17e888u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e88c: 0x24646184
    ctx->pc = 0x17e88cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 24964));
    // 0x17e890: 0x8c820000
    ctx->pc = 0x17e890u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17e894: 0x80502d
    ctx->pc = 0x17e894u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e898: 0x24420001
    ctx->pc = 0x17e898u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x17e89c: 0xac820000
    ctx->pc = 0x17e89cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x17e8a0: 0x8c830000
    ctx->pc = 0x17e8a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17e8a4: 0x14650020
    ctx->pc = 0x17E8A4u;
    {
        const bool branch_taken_0x17e8a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        ctx->pc = 0x17E8A8u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x17e8a4) {
            ctx->pc = 0x17E928u;
            goto label_17e928;
        }
    }
    ctx->pc = 0x17E8ACu;
    // 0x17e8ac: 0x3c020027
    ctx->pc = 0x17e8acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x17e8b0: 0x3c030027
    ctx->pc = 0x17e8b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x17e8b4: 0x24486160
    ctx->pc = 0x17e8b4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 24928));
    // 0x17e8b8: 0x3c020027
    ctx->pc = 0x17e8b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x17e8bc: 0xdd040000
    ctx->pc = 0x17e8bcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x17e8c0: 0x24636170
    ctx->pc = 0x17e8c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 24944));
    // 0x17e8c4: 0x62880
    ctx->pc = 0x17e8c4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 2));
    // 0x17e8c8: 0x24496180
    ctx->pc = 0x17e8c8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 24960));
    // 0x17e8cc: 0x3c060024
    ctx->pc = 0x17e8ccu;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
    // 0x17e8d0: 0xc53021
    ctx->pc = 0x17e8d0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x17e8d4: 0x8cc61590
    ctx->pc = 0x17e8d4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 5520)));
    // 0x17e8d8: 0xfc640000
    ctx->pc = 0x17e8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x17e8dc: 0xdd020008
    ctx->pc = 0x17e8dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x17e8e0: 0xfc620008
    ctx->pc = 0x17e8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x17e8e4: 0xad230000
    ctx->pc = 0x17e8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x17e8e8: 0x8cc40000
    ctx->pc = 0x17e8e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17e8ec: 0x95020008
    ctx->pc = 0x17e8ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x17e8f0: 0x3087ffff
    ctx->pc = 0x17e8f0u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 4), 65535));
    // 0x17e8f4: 0xe2102b
    ctx->pc = 0x17e8f4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x17e8f8: 0x10400005
    ctx->pc = 0x17E8F8u;
    {
        const bool branch_taken_0x17e8f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17e8f8) {
            ctx->pc = 0x17E910u;
            goto label_17e910;
        }
    }
    ctx->pc = 0x17E900u;
    // 0x17e900: 0xdd020000
    ctx->pc = 0x17e900u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x17e904: 0x3c030001
    ctx->pc = 0x17e904u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x17e908: 0x43102d
    ctx->pc = 0x17e908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x17e90c: 0xfd020000
    ctx->pc = 0x17e90cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
label_17e910:
    // 0x17e910: 0xa5070008
    ctx->pc = 0x17e910u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 7));
    // 0x17e914: 0xdd020000
    ctx->pc = 0x17e914u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x17e918: 0xad280000
    ctx->pc = 0x17e918u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x17e91c: 0x10000013
    ctx->pc = 0x17E91Cu;
    {
        const bool branch_taken_0x17e91c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17E920u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 2));
        if (branch_taken_0x17e91c) {
            ctx->pc = 0x17E96Cu;
            goto label_17e96c;
        }
    }
    ctx->pc = 0x17E924u;
    // 0x17e924: 0x0
    ctx->pc = 0x17e924u;
    // NOP
label_17e928:
    // 0x17e928: 0x3c030027
    ctx->pc = 0x17e928u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x17e92c: 0x3c020024
    ctx->pc = 0x17e92cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x17e930: 0x451021
    ctx->pc = 0x17e930u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17e934: 0x8c421590
    ctx->pc = 0x17e934u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 5520)));
    // 0x17e938: 0x24636180
    ctx->pc = 0x17e938u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 24960));
    // 0x17e93c: 0x8c440000
    ctx->pc = 0x17e93cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e940: 0x8c650000
    ctx->pc = 0x17e940u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17e944: 0x3087ffff
    ctx->pc = 0x17e944u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 4), 65535));
    // 0x17e948: 0xdca60000
    ctx->pc = 0x17e948u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17e94c: 0x8c640000
    ctx->pc = 0x17e94cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17e950: 0xe6282d
    ctx->pc = 0x17e950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 6));
    // 0x17e954: 0x94820008
    ctx->pc = 0x17e954u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17e958: 0xe2102b
    ctx->pc = 0x17e958u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x17e95c: 0x10400003
    ctx->pc = 0x17E95Cu;
    {
        const bool branch_taken_0x17e95c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17e95c) {
            ctx->pc = 0x17E96Cu;
            goto label_17e96c;
        }
    }
    ctx->pc = 0x17E964u;
    // 0x17e964: 0x3c020001
    ctx->pc = 0x17e964u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x17e968: 0xa2282d
    ctx->pc = 0x17e968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
label_17e96c:
    // 0x17e96c: 0x8d430000
    ctx->pc = 0x17e96cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x17e970: 0xa0102d
    ctx->pc = 0x17e970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e974: 0x2463ffff
    ctx->pc = 0x17e974u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17e978: 0xad430000
    ctx->pc = 0x17e978u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
label_17e97c:
    // 0x17e97c: 0x3e00008
    ctx->pc = 0x17E97Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E910u: goto label_17e910;
            case 0x17E928u: goto label_17e928;
            case 0x17E96Cu: goto label_17e96c;
            case 0x17E97Cu: goto label_17e97c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E984u;
    // 0x17e984: 0x0
    ctx->pc = 0x17e984u;
    // NOP
    // 0x17e988: 0x3c020023
    ctx->pc = 0x17e988u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x17e98c: 0x3e00008
    ctx->pc = 0x17E98Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E990u;
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294965632), GPR_U64(ctx, 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E910u: goto label_17e910;
            case 0x17E928u: goto label_17e928;
            case 0x17E96Cu: goto label_17e96c;
            case 0x17E97Cu: goto label_17e97c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E994u;
    // 0x17e994: 0x0
    ctx->pc = 0x17e994u;
    // NOP
}
