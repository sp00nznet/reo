#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D92E0
// Address: 0x1d92e0 - 0x1d93a0
void sub_001D92E0_0x1d92e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d92e0u;

    // 0x1d92e0: 0x27bdffd0
    ctx->pc = 0x1d92e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d92e4: 0xffbf0020
    ctx->pc = 0x1d92e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d92e8: 0x7fb10010
    ctx->pc = 0x1d92e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d92ec: 0x7fb00000
    ctx->pc = 0x1d92ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d92f0: 0x80882d
    ctx->pc = 0x1d92f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d92f4: 0xc075e38
    ctx->pc = 0x1D92F4u;
    SET_GPR_U32(ctx, 31, 0x1D92FCu);
    ctx->pc = 0x1D92F8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D92FCu; }
    }
    if (ctx->pc != 0x1D92FCu) { return; }
    ctx->pc = 0x1D92FCu;
    // 0x1d92fc: 0x2a010005
    ctx->pc = 0x1d92fcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 5));
    // 0x1d9300: 0x14200003
    ctx->pc = 0x1D9300u;
    {
        const bool branch_taken_0x1d9300 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D9304u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1d9300) {
            ctx->pc = 0x1D9310u;
            goto label_1d9310;
        }
    }
    ctx->pc = 0x1D9308u;
    // 0x1d9308: 0x1000001f
    ctx->pc = 0x1D9308u;
    {
        const bool branch_taken_0x1d9308 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d9308) {
            ctx->pc = 0x1D9388u;
            goto label_1d9388;
        }
    }
    ctx->pc = 0x1D9310u;
label_1d9310:
    // 0x1d9310: 0x3c050034
    ctx->pc = 0x1d9310u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d9314: 0x24060c54
    ctx->pc = 0x1d9314u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3156));
    // 0x1d9318: 0x3c070034
    ctx->pc = 0x1d9318u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d931c: 0x3c010034
    ctx->pc = 0x1d931cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d9320: 0x2404004e
    ctx->pc = 0x1d9320u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 78));
    // 0x1d9324: 0x24a57280
    ctx->pc = 0x1d9324u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d9328: 0x24e76280
    ctx->pc = 0x1d9328u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d932c: 0xc0402d
    ctx->pc = 0x1d932cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9330: 0xc075e40
    ctx->pc = 0x1D9330u;
    SET_GPR_U32(ctx, 31, 0x1D9338u);
    ctx->pc = 0x1D9334u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29340), GPR_U32(ctx, 16));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9338u; }
    }
    if (ctx->pc != 0x1D9338u) { return; }
    ctx->pc = 0x1D9338u;
    // 0x1d9338: 0x3c010034
    ctx->pc = 0x1d9338u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d933c: 0x3c020034
    ctx->pc = 0x1d933cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1d9340: 0x8c306298
    ctx->pc = 0x1d9340u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 25240)));
    // 0x1d9344: 0x6010004
    ctx->pc = 0x1D9344u;
    {
        const bool branch_taken_0x1d9344 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1D9348u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25244));
        if (branch_taken_0x1d9344) {
            ctx->pc = 0x1D9358u;
            goto label_1d9358;
        }
    }
    ctx->pc = 0x1D934Cu;
    // 0x1d934c: 0x1000000e
    ctx->pc = 0x1D934Cu;
    {
        const bool branch_taken_0x1d934c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9350u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1d934c) {
            ctx->pc = 0x1D9388u;
            goto label_1d9388;
        }
    }
    ctx->pc = 0x1D9354u;
    // 0x1d9354: 0x0
    ctx->pc = 0x1d9354u;
    // NOP
label_1d9358:
    // 0x1d9358: 0x24450004
    ctx->pc = 0x1d9358u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4));
    // 0x1d935c: 0x101180
    ctx->pc = 0x1d935cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 6));
    // 0x1d9360: 0x220202d
    ctx->pc = 0x1d9360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9364: 0x501821
    ctx->pc = 0x1d9364u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d9368: 0x31080
    ctx->pc = 0x1d9368u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d936c: 0x431023
    ctx->pc = 0x1d936cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d9370: 0xc041eac
    ctx->pc = 0x1D9370u;
    SET_GPR_U32(ctx, 31, 0x1D9378u);
    ctx->pc = 0x1D9374u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9378u; }
    }
    if (ctx->pc != 0x1D9378u) { return; }
    ctx->pc = 0x1D9378u;
    // 0x1d9378: 0xc075e3c
    ctx->pc = 0x1D9378u;
    SET_GPR_U32(ctx, 31, 0x1D9380u);
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9380u; }
    }
    if (ctx->pc != 0x1D9380u) { return; }
    ctx->pc = 0x1D9380u;
    // 0x1d9380: 0x10143c
    ctx->pc = 0x1d9380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1d9384: 0x2143f
    ctx->pc = 0x1d9384u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1d9388:
    // 0x1d9388: 0xdfbf0020
    ctx->pc = 0x1d9388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d938c: 0x7bb10010
    ctx->pc = 0x1d938cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9390: 0x7bb00000
    ctx->pc = 0x1d9390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9394: 0x3e00008
    ctx->pc = 0x1D9394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9398u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9310u: goto label_1d9310;
            case 0x1D9358u: goto label_1d9358;
            case 0x1D9388u: goto label_1d9388;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D939Cu;
    // 0x1d939c: 0x0
    ctx->pc = 0x1d939cu;
    // NOP
}
