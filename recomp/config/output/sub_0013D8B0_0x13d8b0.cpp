#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013D8B0
// Address: 0x13d8b0 - 0x13d9b8
void sub_0013D8B0_0x13d8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13d8b0u;

    // 0x13d8b0: 0x27bdffc0
    ctx->pc = 0x13d8b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13d8b4: 0xffb00000
    ctx->pc = 0x13d8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13d8b8: 0x80802d
    ctx->pc = 0x13d8b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d8bc: 0xffb20010
    ctx->pc = 0x13d8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13d8c0: 0x902d
    ctx->pc = 0x13d8c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d8c4: 0xffb30018
    ctx->pc = 0x13d8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13d8c8: 0x982d
    ctx->pc = 0x13d8c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d8cc: 0xffb40020
    ctx->pc = 0x13d8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13d8d0: 0xa02d
    ctx->pc = 0x13d8d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d8d4: 0xffb50028
    ctx->pc = 0x13d8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x13d8d8: 0xffb10008
    ctx->pc = 0x13d8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13d8dc: 0xffbf0030
    ctx->pc = 0x13d8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13d8e0: 0x8e020028
    ctx->pc = 0x13d8e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x13d8e4: 0x1040002a
    ctx->pc = 0x13D8E4u;
    {
        const bool branch_taken_0x13d8e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D8E8u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13d8e4) {
            ctx->pc = 0x13D990u;
            goto label_13d990;
        }
    }
    ctx->pc = 0x13D8ECu;
    // 0x13d8ec: 0x82020003
    ctx->pc = 0x13d8ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x13d8f0: 0x24110001
    ctx->pc = 0x13d8f0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d8f4: 0x1451000a
    ctx->pc = 0x13D8F4u;
    {
        const bool branch_taken_0x13d8f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x13D8F8u;
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        if (branch_taken_0x13d8f4) {
            ctx->pc = 0x13D920u;
            goto label_13d920;
        }
    }
    ctx->pc = 0x13D8FCu;
    // 0x13d8fc: 0x8e060020
    ctx->pc = 0x13d8fcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x13d900: 0x61140
    ctx->pc = 0x13d900u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 5));
    // 0x13d904: 0x2021021
    ctx->pc = 0x13d904u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x13d908: 0x24420038
    ctx->pc = 0x13d908u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 56));
    // 0x13d90c: 0x8c550014
    ctx->pc = 0x13d90cu;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x13d910: 0x8c540010
    ctx->pc = 0x13d910u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13d914: 0x8c530004
    ctx->pc = 0x13d914u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13d918: 0x10000002
    ctx->pc = 0x13D918u;
    {
        const bool branch_taken_0x13d918 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D91Cu;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 12)));
        if (branch_taken_0x13d918) {
            ctx->pc = 0x13D924u;
            goto label_13d924;
        }
    }
    ctx->pc = 0x13D920u;
label_13d920:
    // 0x13d920: 0x8e060020
    ctx->pc = 0x13d920u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_13d924:
    // 0x13d924: 0x24c40001
    ctx->pc = 0x13d924u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 1));
    // 0x13d928: 0x24c60010
    ctx->pc = 0x13d928u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    // 0x13d92c: 0x28850000
    ctx->pc = 0x13d92cu;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 4), 0));
    // 0x13d930: 0x80102d
    ctx->pc = 0x13d930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d934: 0xc5100b
    ctx->pc = 0x13d934u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
    // 0x13d938: 0x8e030024
    ctx->pc = 0x13d938u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x13d93c: 0x21103
    ctx->pc = 0x13d93cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x13d940: 0x21100
    ctx->pc = 0x13d940u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x13d944: 0x2463ffff
    ctx->pc = 0x13d944u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13d948: 0x822023
    ctx->pc = 0x13d948u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13d94c: 0xae030024
    ctx->pc = 0x13d94cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x13d950: 0x1c600005
    ctx->pc = 0x13D950u;
    {
        const bool branch_taken_0x13d950 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x13D954u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        if (branch_taken_0x13d950) {
            ctx->pc = 0x13D968u;
            goto label_13d968;
        }
    }
    ctx->pc = 0x13D958u;
    // 0x13d958: 0xc04f50c
    ctx->pc = 0x13D958u;
    SET_GPR_U32(ctx, 31, 0x13D960u);
    ctx->pc = 0x13D430u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D430_0x13d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D960u; }
    }
    if (ctx->pc != 0x13D960u) { return; }
    ctx->pc = 0x13D960u;
    // 0x13d960: 0xa2110001
    ctx->pc = 0x13d960u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
    // 0x13d964: 0x92070003
    ctx->pc = 0x13d964u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_13d968:
    // 0x13d968: 0x71600
    ctx->pc = 0x13d968u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 24));
    // 0x13d96c: 0x21603
    ctx->pc = 0x13d96cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x13d970: 0x54510008
    ctx->pc = 0x13D970u;
    {
        const bool branch_taken_0x13d970 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x13d970) {
            ctx->pc = 0x13D974u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x13D994u;
            goto label_13d994;
        }
    }
    ctx->pc = 0x13D978u;
    // 0x13d978: 0x200202d
    ctx->pc = 0x13d978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d97c: 0x260282d
    ctx->pc = 0x13d97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d980: 0x240302d
    ctx->pc = 0x13d980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d984: 0x280382d
    ctx->pc = 0x13d984u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d988: 0xc04f34e
    ctx->pc = 0x13D988u;
    SET_GPR_U32(ctx, 31, 0x13D990u);
    ctx->pc = 0x13D98Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13CD38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CD38_0x13cd38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D990u; }
    }
    if (ctx->pc != 0x13D990u) { return; }
    ctx->pc = 0x13D990u;
label_13d990:
    // 0x13d990: 0xdfb00000
    ctx->pc = 0x13d990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13d994:
    // 0x13d994: 0xdfb10008
    ctx->pc = 0x13d994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13d998: 0xdfb20010
    ctx->pc = 0x13d998u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d99c: 0xdfb30018
    ctx->pc = 0x13d99cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d9a0: 0xdfb40020
    ctx->pc = 0x13d9a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d9a4: 0xdfb50028
    ctx->pc = 0x13d9a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13d9a8: 0xdfbf0030
    ctx->pc = 0x13d9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d9ac: 0x3e00008
    ctx->pc = 0x13D9ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D9B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D920u: goto label_13d920;
            case 0x13D924u: goto label_13d924;
            case 0x13D968u: goto label_13d968;
            case 0x13D990u: goto label_13d990;
            case 0x13D994u: goto label_13d994;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13D9B4u;
    // 0x13d9b4: 0x0
    ctx->pc = 0x13d9b4u;
    // NOP
}
