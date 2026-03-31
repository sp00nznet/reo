#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001734B8
// Address: 0x1734b8 - 0x173550
void sub_001734B8_0x1734b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1734b8u;

    // 0x1734b8: 0x27bdffd0
    ctx->pc = 0x1734b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1734bc: 0x3c020023
    ctx->pc = 0x1734bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1734c0: 0xffb10008
    ctx->pc = 0x1734c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1734c4: 0x80882d
    ctx->pc = 0x1734c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1734c8: 0xffb20010
    ctx->pc = 0x1734c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1734cc: 0xa0902d
    ctx->pc = 0x1734ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1734d0: 0xffb30018
    ctx->pc = 0x1734d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1734d4: 0xffb00000
    ctx->pc = 0x1734d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1734d8: 0xffbf0020
    ctx->pc = 0x1734d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1734dc: 0xc05cd54
    ctx->pc = 0x1734DCu;
    SET_GPR_U32(ctx, 31, 0x1734E4u);
    ctx->pc = 0x1734E0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294963596));
    ctx->pc = 0x173550u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173550_0x173550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1734E4u; }
    }
    if (ctx->pc != 0x1734E4u) { return; }
    ctx->pc = 0x1734E4u;
    // 0x1734e4: 0x3c05ff00
    ctx->pc = 0x1734e4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1734e8: 0x10400005
    ctx->pc = 0x1734E8u;
    {
        const bool branch_taken_0x1734e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1734ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1734e8) {
            ctx->pc = 0x173500u;
            goto label_173500;
        }
    }
    ctx->pc = 0x1734F0u;
    // 0x1734f0: 0xc05a704
    ctx->pc = 0x1734F0u;
    SET_GPR_U32(ctx, 31, 0x1734F8u);
    ctx->pc = 0x1734F4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 515));
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1734F8u; }
    }
    if (ctx->pc != 0x1734F8u) { return; }
    ctx->pc = 0x1734F8u;
    // 0x1734f8: 0x1000000d
    ctx->pc = 0x1734F8u;
    {
        const bool branch_taken_0x1734f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1734FCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1734f8) {
            ctx->pc = 0x173530u;
            goto label_173530;
        }
    }
    ctx->pc = 0x173500u;
label_173500:
    // 0x173500: 0xc05cd5c
    ctx->pc = 0x173500u;
    SET_GPR_U32(ctx, 31, 0x173508u);
    ctx->pc = 0x173570u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173570_0x173570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173508u; }
    }
    if (ctx->pc != 0x173508u) { return; }
    ctx->pc = 0x173508u;
    // 0x173508: 0x2403ffff
    ctx->pc = 0x173508u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17350c: 0x40802d
    ctx->pc = 0x17350cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173510: 0x12030007
    ctx->pc = 0x173510u;
    {
        const bool branch_taken_0x173510 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x173514u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x173510) {
            ctx->pc = 0x173530u;
            goto label_173530;
        }
    }
    ctx->pc = 0x173518u;
    // 0x173518: 0x220202d
    ctx->pc = 0x173518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17351c: 0xc05cd6c
    ctx->pc = 0x17351Cu;
    SET_GPR_U32(ctx, 31, 0x173524u);
    ctx->pc = 0x173520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1735B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001735B0_0x1735b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173524u; }
    }
    if (ctx->pc != 0x173524u) { return; }
    ctx->pc = 0x173524u;
    // 0x173524: 0x101880
    ctx->pc = 0x173524u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x173528: 0x731821
    ctx->pc = 0x173528u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x17352c: 0xac620000
    ctx->pc = 0x17352cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_173530:
    // 0x173530: 0xdfb00000
    ctx->pc = 0x173530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173534: 0xdfb10008
    ctx->pc = 0x173534u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173538: 0xdfb20010
    ctx->pc = 0x173538u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17353c: 0xdfb30018
    ctx->pc = 0x17353cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x173540: 0xdfbf0020
    ctx->pc = 0x173540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173544: 0x3e00008
    ctx->pc = 0x173544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173548u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173500u: goto label_173500;
            case 0x173530u: goto label_173530;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17354Cu;
    // 0x17354c: 0x0
    ctx->pc = 0x17354cu;
    // NOP
}
