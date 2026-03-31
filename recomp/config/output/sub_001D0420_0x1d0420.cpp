#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D0420
// Address: 0x1d0420 - 0x1d05b0
void sub_001D0420_0x1d0420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d0420u;

    // 0x1d0420: 0x27bdff90
    ctx->pc = 0x1d0420u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d0424: 0x3c010032
    ctx->pc = 0x1d0424u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1d0428: 0xffbf0060
    ctx->pc = 0x1d0428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1d042c: 0x7fb50050
    ctx->pc = 0x1d042cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d0430: 0x7fb40040
    ctx->pc = 0x1d0430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d0434: 0x80a82d
    ctx->pc = 0x1d0434u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0438: 0x7fb30030
    ctx->pc = 0x1d0438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d043c: 0xa0a02d
    ctx->pc = 0x1d043cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0440: 0x7fb20020
    ctx->pc = 0x1d0440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d0444: 0xc0982d
    ctx->pc = 0x1d0444u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0448: 0x7fb10010
    ctx->pc = 0x1d0448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d044c: 0x7fb00000
    ctx->pc = 0x1d044cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d0450: 0x802243d7
    ctx->pc = 0x1d0450u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 17367)));
    // 0x1d0454: 0x9091054d
    ctx->pc = 0x1d0454u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1357)));
    // 0x1d0458: 0x14400021
    ctx->pc = 0x1D0458u;
    {
        const bool branch_taken_0x1d0458 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D045Cu;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 5), 255));
        if (branch_taken_0x1d0458) {
            ctx->pc = 0x1D04E0u;
            goto label_1d04e0;
        }
    }
    ctx->pc = 0x1D0460u;
    // 0x1d0460: 0x96a20bb4
    ctx->pc = 0x1d0460u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2996)));
    // 0x1d0464: 0x10400012
    ctx->pc = 0x1D0464u;
    {
        const bool branch_taken_0x1d0464 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D0468u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1d0464) {
            ctx->pc = 0x1D04B0u;
            goto label_1d04b0;
        }
    }
    ctx->pc = 0x1D046Cu;
    // 0x1d046c: 0x24020001
    ctx->pc = 0x1d046cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0470: 0x16220007
    ctx->pc = 0x1D0470u;
    {
        const bool branch_taken_0x1d0470 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D0474u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d0470) {
            ctx->pc = 0x1D0490u;
            goto label_1d0490;
        }
    }
    ctx->pc = 0x1D0478u;
    // 0x1d0478: 0x92a20003
    ctx->pc = 0x1d0478u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x1d047c: 0x210c0
    ctx->pc = 0x1d047cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d0480: 0xc073470
    ctx->pc = 0x1D0480u;
    SET_GPR_U32(ctx, 31, 0x1D0488u);
    ctx->pc = 0x1D0484u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4352));
    ctx->pc = 0x1CD1C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD1C0_0x1cd1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0488u; }
    }
    if (ctx->pc != 0x1D0488u) { return; }
    ctx->pc = 0x1D0488u;
    // 0x1d0488: 0x10000015
    ctx->pc = 0x1D0488u;
    {
        const bool branch_taken_0x1d0488 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d0488) {
            ctx->pc = 0x1D04E0u;
            goto label_1d04e0;
        }
    }
    ctx->pc = 0x1D0490u;
label_1d0490:
    // 0x1d0490: 0x92a20003
    ctx->pc = 0x1d0490u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x1d0494: 0x210c0
    ctx->pc = 0x1d0494u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d0498: 0xc073470
    ctx->pc = 0x1D0498u;
    SET_GPR_U32(ctx, 31, 0x1D04A0u);
    ctx->pc = 0x1D049Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4096));
    ctx->pc = 0x1CD1C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD1C0_0x1cd1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04A0u; }
    }
    if (ctx->pc != 0x1D04A0u) { return; }
    ctx->pc = 0x1D04A0u;
    // 0x1d04a0: 0x96a20bb4
    ctx->pc = 0x1d04a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2996)));
    // 0x1d04a4: 0x2442ffff
    ctx->pc = 0x1d04a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d04a8: 0x1000000d
    ctx->pc = 0x1D04A8u;
    {
        const bool branch_taken_0x1d04a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D04ACu;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 2), 32768));
        if (branch_taken_0x1d04a8) {
            ctx->pc = 0x1D04E0u;
            goto label_1d04e0;
        }
    }
    ctx->pc = 0x1D04B0u;
label_1d04b0:
    // 0x1d04b0: 0x16220007
    ctx->pc = 0x1D04B0u;
    {
        const bool branch_taken_0x1d04b0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D04B4u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d04b0) {
            ctx->pc = 0x1D04D0u;
            goto label_1d04d0;
        }
    }
    ctx->pc = 0x1D04B8u;
    // 0x1d04b8: 0x92a20003
    ctx->pc = 0x1d04b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x1d04bc: 0x210c0
    ctx->pc = 0x1d04bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d04c0: 0xc073470
    ctx->pc = 0x1D04C0u;
    SET_GPR_U32(ctx, 31, 0x1D04C8u);
    ctx->pc = 0x1D04C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4352));
    ctx->pc = 0x1CD1C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD1C0_0x1cd1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04C8u; }
    }
    if (ctx->pc != 0x1D04C8u) { return; }
    ctx->pc = 0x1D04C8u;
    // 0x1d04c8: 0x10000005
    ctx->pc = 0x1D04C8u;
    {
        const bool branch_taken_0x1d04c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d04c8) {
            ctx->pc = 0x1D04E0u;
            goto label_1d04e0;
        }
    }
    ctx->pc = 0x1D04D0u;
label_1d04d0:
    // 0x1d04d0: 0x92a20003
    ctx->pc = 0x1d04d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x1d04d4: 0x210c0
    ctx->pc = 0x1d04d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d04d8: 0xc073470
    ctx->pc = 0x1D04D8u;
    SET_GPR_U32(ctx, 31, 0x1D04E0u);
    ctx->pc = 0x1D04DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4096));
    ctx->pc = 0x1CD1C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD1C0_0x1cd1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04E0u; }
    }
    if (ctx->pc != 0x1D04E0u) { return; }
    ctx->pc = 0x1D04E0u;
label_1d04e0:
    // 0x1d04e0: 0xc0740e8
    ctx->pc = 0x1D04E0u;
    SET_GPR_U32(ctx, 31, 0x1D04E8u);
    ctx->pc = 0x1D03A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D03A0_0x1d03a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04E8u; }
    }
    if (ctx->pc != 0x1D04E8u) { return; }
    ctx->pc = 0x1D04E8u;
    // 0x1d04e8: 0x24020001
    ctx->pc = 0x1d04e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d04ec: 0x16220002
    ctx->pc = 0x1D04ECu;
    {
        const bool branch_taken_0x1d04ec = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x1d04ec) {
            ctx->pc = 0x1D04F8u;
            goto label_1d04f8;
        }
    }
    ctx->pc = 0x1D04F4u;
    // 0x1d04f4: 0x26520001
    ctx->pc = 0x1d04f4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_1d04f8:
    // 0x1d04f8: 0x92a60003
    ctx->pc = 0x1d04f8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x1d04fc: 0x328200ff
    ctx->pc = 0x1d04fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 255));
    // 0x1d0500: 0x24031468
    ctx->pc = 0x1d0500u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5224));
    // 0x1d0504: 0x21400
    ctx->pc = 0x1d0504u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x1d0508: 0x2429025
    ctx->pc = 0x1d0508u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d050c: 0x24040020
    ctx->pc = 0x1d050cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d0510: 0x3c02004b
    ctx->pc = 0x1d0510u;
    SET_GPR_U32(ctx, 2, ((uint32_t)75 << 16));
    // 0x1d0514: 0x240282d
    ctx->pc = 0x1d0514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0518: 0x2442e330
    ctx->pc = 0x1d0518u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x1d051c: 0xc31818
    ctx->pc = 0x1d051cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1d0520: 0xc06ca9c
    ctx->pc = 0x1D0520u;
    SET_GPR_U32(ctx, 31, 0x1D0528u);
    ctx->pc = 0x1D0524u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1B2A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2A70_0x1b2a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0528u; }
    }
    if (ctx->pc != 0x1D0528u) { return; }
    ctx->pc = 0x1D0528u;
    // 0x1d0528: 0xae420808
    ctx->pc = 0x1d0528u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2056), GPR_U32(ctx, 2));
    // 0x1d052c: 0x26430820
    ctx->pc = 0x1d052cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 2080));
    // 0x1d0530: 0xae430000
    ctx->pc = 0x1d0530u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1d0534: 0x3c010032
    ctx->pc = 0x1d0534u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1d0538: 0x26430a20
    ctx->pc = 0x1d0538u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 2592));
    // 0x1d053c: 0xae430004
    ctx->pc = 0x1d053cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1d0540: 0x26430c20
    ctx->pc = 0x1d0540u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 3104));
    // 0x1d0544: 0xae430818
    ctx->pc = 0x1d0544u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2072), GPR_U32(ctx, 3));
    // 0x1d0548: 0x802343d7
    ctx->pc = 0x1d0548u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 17367)));
    // 0x1d054c: 0x1460000f
    ctx->pc = 0x1D054Cu;
    {
        const bool branch_taken_0x1d054c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d054c) {
            ctx->pc = 0x1D058Cu;
            goto label_1d058c;
        }
    }
    ctx->pc = 0x1D0554u;
    // 0x1d0554: 0x326200ff
    ctx->pc = 0x1d0554u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 255));
    // 0x1d0558: 0x240302d
    ctx->pc = 0x1d0558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d055c: 0x21c00
    ctx->pc = 0x1d055cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 16));
    // 0x1d0560: 0x2405ffff
    ctx->pc = 0x1d0560u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0564: 0x32220007
    ctx->pc = 0x1d0564u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 7));
    // 0x1d0568: 0x702025
    ctx->pc = 0x1d0568u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d056c: 0x21740
    ctx->pc = 0x1d056cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 29));
    // 0x1d0570: 0xc073844
    ctx->pc = 0x1D0570u;
    SET_GPR_U32(ctx, 31, 0x1D0578u);
    ctx->pc = 0x1D0574u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x1CE110u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE110_0x1ce110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0578u; }
    }
    if (ctx->pc != 0x1D0578u) { return; }
    ctx->pc = 0x1D0578u;
    // 0x1d0578: 0x24030001
    ctx->pc = 0x1d0578u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d057c: 0x16230003
    ctx->pc = 0x1D057Cu;
    {
        const bool branch_taken_0x1d057c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 3));
        ctx->pc = 0x1D0580u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d057c) {
            ctx->pc = 0x1D058Cu;
            goto label_1d058c;
        }
    }
    ctx->pc = 0x1D0584u;
    // 0x1d0584: 0xc07416c
    ctx->pc = 0x1D0584u;
    SET_GPR_U32(ctx, 31, 0x1D058Cu);
    ctx->pc = 0x1D0588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D05B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D05B0_0x1d05b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D058Cu; }
    }
    if (ctx->pc != 0x1D058Cu) { return; }
    ctx->pc = 0x1D058Cu;
label_1d058c:
    // 0x1d058c: 0xdfbf0060
    ctx->pc = 0x1d058cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d0590: 0x7bb50050
    ctx->pc = 0x1d0590u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d0594: 0x7bb40040
    ctx->pc = 0x1d0594u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d0598: 0x7bb30030
    ctx->pc = 0x1d0598u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d059c: 0x7bb20020
    ctx->pc = 0x1d059cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d05a0: 0x7bb10010
    ctx->pc = 0x1d05a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d05a4: 0x7bb00000
    ctx->pc = 0x1d05a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d05a8: 0x3e00008
    ctx->pc = 0x1D05A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D05ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D0490u: goto label_1d0490;
            case 0x1D04B0u: goto label_1d04b0;
            case 0x1D04D0u: goto label_1d04d0;
            case 0x1D04E0u: goto label_1d04e0;
            case 0x1D04F8u: goto label_1d04f8;
            case 0x1D058Cu: goto label_1d058c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D05B0u;
}
