#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_003792F0
// Address: 0x3792f0 - 0x3793b0
void sub_003792F0_0x3792f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3792f0u;

    // 0x3792f0: 0x27bdffd0
    ctx->pc = 0x3792f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3792f4: 0xffbf0020
    ctx->pc = 0x3792f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3792f8: 0x7fb10010
    ctx->pc = 0x3792f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3792fc: 0x7fb00000
    ctx->pc = 0x3792fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x379300: 0x80882d
    ctx->pc = 0x379300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379304: 0xa0802d
    ctx->pc = 0x379304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379308: 0xc06e0a8
    ctx->pc = 0x379308u;
    SET_GPR_U32(ctx, 31, 0x379310u);
    ctx->pc = 0x37930Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x1B82A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B82A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379310u; }
        if (ctx->pc != 0x379310u) { return; }
    }
    ctx->pc = 0x379310u;
    // 0x379310: 0x14400022
    ctx->pc = 0x379310u;
    {
        const bool branch_taken_0x379310 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x379314u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x379310) {
            ctx->pc = 0x37939Cu;
            goto label_37939c;
        }
    }
    ctx->pc = 0x379318u;
    // 0x379318: 0xc06eabc
    ctx->pc = 0x379318u;
    SET_GPR_U32(ctx, 31, 0x379320u);
    ctx->pc = 0x1BAAF0u;
    {
        auto targetFn = runtime->lookupFunction(0x1BAAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379320u; }
        if (ctx->pc != 0x379320u) { return; }
    }
    ctx->pc = 0x379320u;
    // 0x379320: 0xc063594
    ctx->pc = 0x379320u;
    SET_GPR_U32(ctx, 31, 0x379328u);
    ctx->pc = 0x18D650u;
    {
        auto targetFn = runtime->lookupFunction(0x18D650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379328u; }
        if (ctx->pc != 0x379328u) { return; }
    }
    ctx->pc = 0x379328u;
    // 0x379328: 0x3c010032
    ctx->pc = 0x379328u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37932c: 0x90224405
    ctx->pc = 0x37932cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17413)));
    // 0x379330: 0x1040000b
    ctx->pc = 0x379330u;
    {
        const bool branch_taken_0x379330 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x379334u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
        if (branch_taken_0x379330) {
            ctx->pc = 0x379360u;
            goto label_379360;
        }
    }
    ctx->pc = 0x379338u;
    // 0x379338: 0x3c010032
    ctx->pc = 0x379338u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37933c: 0xc06726c
    ctx->pc = 0x37933Cu;
    SET_GPR_U32(ctx, 31, 0x379344u);
    ctx->pc = 0x379340u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17430)));
    ctx->pc = 0x19C9B0u;
    {
        auto targetFn = runtime->lookupFunction(0x19C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379344u; }
        if (ctx->pc != 0x379344u) { return; }
    }
    ctx->pc = 0x379344u;
    // 0x379344: 0x3c010032
    ctx->pc = 0x379344u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x379348: 0xa0204405
    ctx->pc = 0x379348u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17413), (uint8_t)GPR_U32(ctx, 0));
    // 0x37934c: 0x3c010032
    ctx->pc = 0x37934cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x379350: 0xa4204416
    ctx->pc = 0x379350u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 17430), (uint16_t)GPR_U32(ctx, 0));
    // 0x379354: 0x3c010032
    ctx->pc = 0x379354u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x379358: 0xac204418
    ctx->pc = 0x379358u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17432), GPR_U32(ctx, 0));
    // 0x37935c: 0x2301018
    ctx->pc = 0x37935cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_379360:
    // 0x379360: 0x3c010032
    ctx->pc = 0x379360u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x379364: 0x21080
    ctx->pc = 0x379364u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x379368: 0xac224418
    ctx->pc = 0x379368u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17432), GPR_U32(ctx, 2));
    // 0x37936c: 0x3c010032
    ctx->pc = 0x37936cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x379370: 0xc067238
    ctx->pc = 0x379370u;
    SET_GPR_U32(ctx, 31, 0x379378u);
    ctx->pc = 0x379374u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 17432)));
    ctx->pc = 0x19C8E0u;
    {
        auto targetFn = runtime->lookupFunction(0x19C8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379378u; }
        if (ctx->pc != 0x379378u) { return; }
    }
    ctx->pc = 0x379378u;
    // 0x379378: 0x3c010057
    ctx->pc = 0x379378u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37937c: 0x24030002
    ctx->pc = 0x37937cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x379380: 0xac31bac8
    ctx->pc = 0x379380u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949576), GPR_U32(ctx, 17));
    // 0x379384: 0x3c010032
    ctx->pc = 0x379384u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x379388: 0xa0234405
    ctx->pc = 0x379388u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17413), (uint8_t)GPR_U32(ctx, 3));
    // 0x37938c: 0x3c010057
    ctx->pc = 0x37938cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379390: 0xac30bad0
    ctx->pc = 0x379390u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949584), GPR_U32(ctx, 16));
    // 0x379394: 0x3c010032
    ctx->pc = 0x379394u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x379398: 0xa4224416
    ctx->pc = 0x379398u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 17430), (uint16_t)GPR_U32(ctx, 2));
label_37939c:
    // 0x37939c: 0xdfbf0020
    ctx->pc = 0x37939cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3793a0: 0x7bb10010
    ctx->pc = 0x3793a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3793a4: 0x7bb00000
    ctx->pc = 0x3793a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3793a8: 0x3e00008
    ctx->pc = 0x3793A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3793ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x379360u: goto label_379360;
            case 0x37939Cu: goto label_37939c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3793B0u;
}
