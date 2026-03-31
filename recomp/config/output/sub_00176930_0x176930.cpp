#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00176930
// Address: 0x176930 - 0x1769b0
void sub_00176930_0x176930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x176930u;

    // 0x176930: 0x27bdffd0
    ctx->pc = 0x176930u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x176934: 0xffb10018
    ctx->pc = 0x176934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x176938: 0x80882d
    ctx->pc = 0x176938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17693c: 0x3a0282d
    ctx->pc = 0x17693cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176940: 0x27a60004
    ctx->pc = 0x176940u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    // 0x176944: 0xffb00010
    ctx->pc = 0x176944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x176948: 0xffbf0020
    ctx->pc = 0x176948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17694c: 0xc05d906
    ctx->pc = 0x17694Cu;
    SET_GPR_U32(ctx, 31, 0x176954u);
    ctx->pc = 0x176950u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 3264));
    ctx->pc = 0x176418u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176418_0x176418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176954u; }
    }
    if (ctx->pc != 0x176954u) { return; }
    ctx->pc = 0x176954u;
    // 0x176954: 0x8fa20000
    ctx->pc = 0x176954u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176958: 0x220202d
    ctx->pc = 0x176958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17695c: 0x8e030248
    ctx->pc = 0x17695cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 584)));
    // 0x176960: 0x14620005
    ctx->pc = 0x176960u;
    {
        const bool branch_taken_0x176960 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x176964u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x176960) {
            ctx->pc = 0x176978u;
            goto label_176978;
        }
    }
    ctx->pc = 0x176968u;
    // 0x176968: 0x8e03024c
    ctx->pc = 0x176968u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x17696c: 0x8fa20004
    ctx->pc = 0x17696cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x176970: 0x10620008
    ctx->pc = 0x176970u;
    {
        const bool branch_taken_0x176970 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x176974u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x176970) {
            ctx->pc = 0x176994u;
            goto label_176994;
        }
    }
    ctx->pc = 0x176978u;
label_176978:
    // 0x176978: 0xc05d7c8
    ctx->pc = 0x176978u;
    SET_GPR_U32(ctx, 31, 0x176980u);
    ctx->pc = 0x175F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175F20_0x175f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176980u; }
    }
    if (ctx->pc != 0x176980u) { return; }
    ctx->pc = 0x176980u;
    // 0x176980: 0x8fa20000
    ctx->pc = 0x176980u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176984: 0x8fa30004
    ctx->pc = 0x176984u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x176988: 0xae020248
    ctx->pc = 0x176988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 2));
    // 0x17698c: 0xae03024c
    ctx->pc = 0x17698cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 3));
    // 0x176990: 0x24020001
    ctx->pc = 0x176990u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_176994:
    // 0x176994: 0xdfb00010
    ctx->pc = 0x176994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176998: 0xae220044
    ctx->pc = 0x176998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x17699c: 0xdfbf0020
    ctx->pc = 0x17699cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1769a0: 0xdfb10018
    ctx->pc = 0x1769a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1769a4: 0x3e00008
    ctx->pc = 0x1769A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1769A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176978u: goto label_176978;
            case 0x176994u: goto label_176994;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1769ACu;
    // 0x1769ac: 0x0
    ctx->pc = 0x1769acu;
    // NOP
}
