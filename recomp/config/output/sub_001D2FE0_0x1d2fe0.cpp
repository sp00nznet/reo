#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D2FE0
// Address: 0x1d2fe0 - 0x1d3100
void sub_001D2FE0_0x1d2fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d2fe0u;

    // 0x1d2fe0: 0x27bdff50
    ctx->pc = 0x1d2fe0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1d2fe4: 0x3c010032
    ctx->pc = 0x1d2fe4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1d2fe8: 0xffbf0050
    ctx->pc = 0x1d2fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1d2fec: 0x7fb40040
    ctx->pc = 0x1d2fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d2ff0: 0x7fb30030
    ctx->pc = 0x1d2ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d2ff4: 0x80a02d
    ctx->pc = 0x1d2ff4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ff8: 0x7fb20020
    ctx->pc = 0x1d2ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d2ffc: 0xa0982d
    ctx->pc = 0x1d2ffcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3000: 0x7fb10010
    ctx->pc = 0x1d3000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d3004: 0x7fb00000
    ctx->pc = 0x1d3004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d3008: 0x8c304428
    ctx->pc = 0x1d3008u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 17448)));
    // 0x1d300c: 0xc068abc
    ctx->pc = 0x1D300Cu;
    SET_GPR_U32(ctx, 31, 0x1D3014u);
    ctx->pc = 0x1D3010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A2AF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2AF0_0x1a2af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3014u; }
    }
    if (ctx->pc != 0x1D3014u) { return; }
    ctx->pc = 0x1D3014u;
    // 0x1d3014: 0x3c010032
    ctx->pc = 0x1d3014u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1d3018: 0x40902d
    ctx->pc = 0x1d3018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d301c: 0x8c23440c
    ctx->pc = 0x1d301cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x1d3020: 0x3c020020
    ctx->pc = 0x1d3020u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
    // 0x1d3024: 0x27a40060
    ctx->pc = 0x1d3024u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d3028: 0xc063f7c
    ctx->pc = 0x1D3028u;
    SET_GPR_U32(ctx, 31, 0x1D3030u);
    ctx->pc = 0x1D302Cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x18FDF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FDF0_0x18fdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3030u; }
    }
    if (ctx->pc != 0x1D3030u) { return; }
    ctx->pc = 0x1D3030u;
    // 0x1d3030: 0x260302d
    ctx->pc = 0x1d3030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3034: 0x27a400a0
    ctx->pc = 0x1d3034u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d3038: 0x220282d
    ctx->pc = 0x1d3038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d303c: 0xc074d50
    ctx->pc = 0x1D303Cu;
    SET_GPR_U32(ctx, 31, 0x1D3044u);
    ctx->pc = 0x1D3040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D3540u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3540_0x1d3540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3044u; }
    }
    if (ctx->pc != 0x1D3044u) { return; }
    ctx->pc = 0x1D3044u;
    // 0x1d3044: 0xc064920
    ctx->pc = 0x1D3044u;
    SET_GPR_U32(ctx, 31, 0x1D304Cu);
    ctx->pc = 0x1D3048u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x192480u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00192480_0x192480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D304Cu; }
    }
    if (ctx->pc != 0x1D304Cu) { return; }
    ctx->pc = 0x1D304Cu;
    // 0x1d304c: 0xae82080c
    ctx->pc = 0x1d304cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2060), GPR_U32(ctx, 2));
    // 0x1d3050: 0xc06c430
    ctx->pc = 0x1D3050u;
    SET_GPR_U32(ctx, 31, 0x1D3058u);
    ctx->pc = 0x1D3054u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 2060)));
    ctx->pc = 0x1B10C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B10C0_0x1b10c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3058u; }
    }
    if (ctx->pc != 0x1D3058u) { return; }
    ctx->pc = 0x1D3058u;
    // 0x1d3058: 0x8e85080c
    ctx->pc = 0x1d3058u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 2060)));
    // 0x1d305c: 0xc064ce0
    ctx->pc = 0x1D305Cu;
    SET_GPR_U32(ctx, 31, 0x1D3064u);
    ctx->pc = 0x1D3060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193380u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00193380_0x193380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3064u; }
    }
    if (ctx->pc != 0x1D3064u) { return; }
    ctx->pc = 0x1D3064u;
    // 0x1d3064: 0x220202d
    ctx->pc = 0x1d3064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3068: 0xc064c90
    ctx->pc = 0x1D3068u;
    SET_GPR_U32(ctx, 31, 0x1D3070u);
    ctx->pc = 0x1D306Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x193240u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00193240_0x193240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3070u; }
    }
    if (ctx->pc != 0x1D3070u) { return; }
    ctx->pc = 0x1D3070u;
    // 0x1d3070: 0x10000012
    ctx->pc = 0x1D3070u;
    {
        const bool branch_taken_0x1d3070 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3074u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d3070) {
            ctx->pc = 0x1D30BCu;
            goto label_1d30bc;
        }
    }
    ctx->pc = 0x1D3078u;
label_1d3078:
    // 0x1d3078: 0x8e220174
    ctx->pc = 0x1d3078u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1d307c: 0x440000d
    ctx->pc = 0x1D307Cu;
    {
        const bool branch_taken_0x1d307c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d307c) {
            ctx->pc = 0x1D30B4u;
            goto label_1d30b4;
        }
    }
    ctx->pc = 0x1D3084u;
    // 0x1d3084: 0x21180
    ctx->pc = 0x1d3084u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1d3088: 0x24040008
    ctx->pc = 0x1d3088u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d308c: 0x2023021
    ctx->pc = 0x1d308cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d3090: 0x220282d
    ctx->pc = 0x1d3090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d3094:
    // 0x1d3094: 0x8ca30000
    ctx->pc = 0x1d3094u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d3098: 0x2484ffff
    ctx->pc = 0x1d3098u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d309c: 0x8ca20004
    ctx->pc = 0x1d309cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1d30a0: 0xacc30000
    ctx->pc = 0x1d30a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1d30a4: 0x24a50008
    ctx->pc = 0x1d30a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x1d30a8: 0xacc20004
    ctx->pc = 0x1d30a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1d30ac: 0x1c80fff9
    ctx->pc = 0x1D30ACu;
    {
        const bool branch_taken_0x1d30ac = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1D30B0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x1d30ac) {
            ctx->pc = 0x1D3094u;
            goto label_1d3094;
        }
    }
    ctx->pc = 0x1D30B4u;
label_1d30b4:
    // 0x1d30b4: 0x24e70001
    ctx->pc = 0x1d30b4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1d30b8: 0x26310190
    ctx->pc = 0x1d30b8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 400));
label_1d30bc:
    // 0x1d30bc: 0xf2102a
    ctx->pc = 0x1d30bcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 18)));
    // 0x1d30c0: 0x1440ffed
    ctx->pc = 0x1D30C0u;
    {
        const bool branch_taken_0x1d30c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d30c0) {
            ctx->pc = 0x1D3078u;
            goto label_1d3078;
        }
    }
    ctx->pc = 0x1D30C8u;
    // 0x1d30c8: 0xc064960
    ctx->pc = 0x1D30C8u;
    SET_GPR_U32(ctx, 31, 0x1D30D0u);
    ctx->pc = 0x1D30CCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 2060)));
    ctx->pc = 0x192580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00192580_0x192580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D30D0u; }
    }
    if (ctx->pc != 0x1D30D0u) { return; }
    ctx->pc = 0x1D30D0u;
    // 0x1d30d0: 0xc06c444
    ctx->pc = 0x1D30D0u;
    SET_GPR_U32(ctx, 31, 0x1D30D8u);
    ctx->pc = 0x1D30D4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 2060)));
    ctx->pc = 0x1B1110u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1110_0x1b1110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D30D8u; }
    }
    if (ctx->pc != 0x1D30D8u) { return; }
    ctx->pc = 0x1D30D8u;
    // 0x1d30d8: 0xae80080c
    ctx->pc = 0x1d30d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2060), GPR_U32(ctx, 0));
    // 0x1d30dc: 0xdfbf0050
    ctx->pc = 0x1d30dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d30e0: 0x7bb40040
    ctx->pc = 0x1d30e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d30e4: 0x7bb30030
    ctx->pc = 0x1d30e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d30e8: 0x7bb20020
    ctx->pc = 0x1d30e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d30ec: 0x7bb10010
    ctx->pc = 0x1d30ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d30f0: 0x7bb00000
    ctx->pc = 0x1d30f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d30f4: 0x3e00008
    ctx->pc = 0x1D30F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D30F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3078u: goto label_1d3078;
            case 0x1D3094u: goto label_1d3094;
            case 0x1D30B4u: goto label_1d30b4;
            case 0x1D30BCu: goto label_1d30bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D30FCu;
    // 0x1d30fc: 0x0
    ctx->pc = 0x1d30fcu;
    // NOP
}
