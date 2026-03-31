#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001934C0
// Address: 0x1934c0 - 0x193580
void sub_001934C0_0x1934c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1934c0u;

label_1934c0:
    // 0x1934c0: 0x27bdffc0
    ctx->pc = 0x1934c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1934c4: 0xffbf0030
    ctx->pc = 0x1934c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1934c8: 0x7fb20020
    ctx->pc = 0x1934c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1934cc: 0x7fb10010
    ctx->pc = 0x1934ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1934d0: 0x80902d
    ctx->pc = 0x1934d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1934d4: 0x7fb00000
    ctx->pc = 0x1934d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1934d8: 0xc0802d
    ctx->pc = 0x1934d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1934dc: 0x12000002
    ctx->pc = 0x1934DCu;
    {
        const bool branch_taken_0x1934dc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1934E0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1934dc) {
            ctx->pc = 0x1934E8u;
            goto label_1934e8;
        }
    }
    ctx->pc = 0x1934E4u;
    // 0x1934e4: 0xae3000c8
    ctx->pc = 0x1934e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 16));
label_1934e8:
    // 0x1934e8: 0x86250182
    ctx->pc = 0x1934e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 386)));
    // 0x1934ec: 0x2403ffff
    ctx->pc = 0x1934ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1934f0: 0x10a3000c
    ctx->pc = 0x1934F0u;
    {
        const bool branch_taken_0x1934f0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1934f0) {
            ctx->pc = 0x193524u;
            goto label_193524;
        }
    }
    ctx->pc = 0x1934F8u;
    // 0x1934f8: 0x51080
    ctx->pc = 0x1934f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1934fc: 0x240202d
    ctx->pc = 0x1934fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193500: 0x451821
    ctx->pc = 0x193500u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x193504: 0x31080
    ctx->pc = 0x193504u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x193508: 0x621021
    ctx->pc = 0x193508u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19350c: 0x21100
    ctx->pc = 0x19350cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x193510: 0x2421021
    ctx->pc = 0x193510u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x193514: 0xae2200d0
    ctx->pc = 0x193514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
    // 0x193518: 0x8e2500d0
    ctx->pc = 0x193518u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x19351c: 0xc064d30
    ctx->pc = 0x19351Cu;
    SET_GPR_U32(ctx, 31, 0x193524u);
    ctx->pc = 0x193520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1934C0u;
    goto label_1934c0;
    ctx->pc = 0x193524u;
label_193524:
    // 0x193524: 0x86240180
    ctx->pc = 0x193524u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x193528: 0x2403ffff
    ctx->pc = 0x193528u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19352c: 0x1083000c
    ctx->pc = 0x19352Cu;
    {
        const bool branch_taken_0x19352c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x19352c) {
            ctx->pc = 0x193560u;
            goto label_193560;
        }
    }
    ctx->pc = 0x193534u;
    // 0x193534: 0x41080
    ctx->pc = 0x193534u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x193538: 0x200302d
    ctx->pc = 0x193538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19353c: 0x441821
    ctx->pc = 0x19353cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x193540: 0x31080
    ctx->pc = 0x193540u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x193544: 0x621021
    ctx->pc = 0x193544u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x193548: 0x21100
    ctx->pc = 0x193548u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x19354c: 0x2421021
    ctx->pc = 0x19354cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x193550: 0xae2200cc
    ctx->pc = 0x193550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 2));
    // 0x193554: 0x8e2500cc
    ctx->pc = 0x193554u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x193558: 0xc064d30
    ctx->pc = 0x193558u;
    SET_GPR_U32(ctx, 31, 0x193560u);
    ctx->pc = 0x19355Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1934C0u;
    goto label_1934c0;
    ctx->pc = 0x193560u;
label_193560:
    // 0x193560: 0xdfbf0030
    ctx->pc = 0x193560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193564: 0x7bb20020
    ctx->pc = 0x193564u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193568: 0x7bb10010
    ctx->pc = 0x193568u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19356c: 0x7bb00000
    ctx->pc = 0x19356cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193570: 0x3e00008
    ctx->pc = 0x193570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193574u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1934C0u: goto label_1934c0;
            case 0x1934E8u: goto label_1934e8;
            case 0x193524u: goto label_193524;
            case 0x193560u: goto label_193560;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193578u;
    // 0x193578: 0x0
    ctx->pc = 0x193578u;
    // NOP
    // 0x19357c: 0x0
    ctx->pc = 0x19357cu;
    // NOP
}
