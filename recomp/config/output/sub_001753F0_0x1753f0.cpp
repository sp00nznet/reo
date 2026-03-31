#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001753F0
// Address: 0x1753f0 - 0x175460
void sub_001753F0_0x1753f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1753f0u;

    // 0x1753f0: 0x27bdffd0
    ctx->pc = 0x1753f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1753f4: 0x3c020023
    ctx->pc = 0x1753f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1753f8: 0xffbf0020
    ctx->pc = 0x1753f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1753fc: 0xffb00000
    ctx->pc = 0x1753fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175400: 0x24100007
    ctx->pc = 0x175400u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 7));
    // 0x175404: 0xffb10008
    ctx->pc = 0x175404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175408: 0x2451f18c
    ctx->pc = 0x175408u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294963596));
    // 0x17540c: 0xffb20010
    ctx->pc = 0x17540cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x175410: 0xa0902d
    ctx->pc = 0x175410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175414: 0xffb30018
    ctx->pc = 0x175414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x175418: 0x80982d
    ctx->pc = 0x175418u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17541c: 0x8e220000
    ctx->pc = 0x17541cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_175420:
    // 0x175420: 0x26310004
    ctx->pc = 0x175420u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
    // 0x175424: 0x10400004
    ctx->pc = 0x175424u;
    {
        const bool branch_taken_0x175424 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x175428u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175424) {
            ctx->pc = 0x175438u;
            goto label_175438;
        }
    }
    ctx->pc = 0x17542Cu;
    // 0x17542c: 0x260282d
    ctx->pc = 0x17542cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175430: 0xc05d518
    ctx->pc = 0x175430u;
    SET_GPR_U32(ctx, 31, 0x175438u);
    ctx->pc = 0x175434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175460_0x175460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175438u; }
    }
    if (ctx->pc != 0x175438u) { return; }
    ctx->pc = 0x175438u;
label_175438:
    // 0x175438: 0x2610ffff
    ctx->pc = 0x175438u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x17543c: 0x603fff8
    ctx->pc = 0x17543Cu;
    {
        const bool branch_taken_0x17543c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x17543c) {
            ctx->pc = 0x175440u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x175420u;
            goto label_175420;
        }
    }
    ctx->pc = 0x175444u;
    // 0x175444: 0xdfb00000
    ctx->pc = 0x175444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175448: 0xdfb10008
    ctx->pc = 0x175448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17544c: 0xdfb20010
    ctx->pc = 0x17544cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175450: 0xdfb30018
    ctx->pc = 0x175450u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175454: 0xdfbf0020
    ctx->pc = 0x175454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175458: 0x3e00008
    ctx->pc = 0x175458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17545Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175420u: goto label_175420;
            case 0x175438u: goto label_175438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175460u;
}
