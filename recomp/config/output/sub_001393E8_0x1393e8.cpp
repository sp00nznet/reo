#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001393E8
// Address: 0x1393e8 - 0x139460
void sub_001393E8_0x1393e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1393e8u;

    // 0x1393e8: 0x27bdffe0
    ctx->pc = 0x1393e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1393ec: 0x3c030022
    ctx->pc = 0x1393ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x1393f0: 0xffb00000
    ctx->pc = 0x1393f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1393f4: 0x2463c42c
    ctx->pc = 0x1393f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294951980));
    // 0x1393f8: 0xffb10008
    ctx->pc = 0x1393f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1393fc: 0xffb20010
    ctx->pc = 0x1393fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x139400: 0xffbf0018
    ctx->pc = 0x139400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x139404: 0x8c620000
    ctx->pc = 0x139404u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x139408: 0x2442ffff
    ctx->pc = 0x139408u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13940c: 0x1440000e
    ctx->pc = 0x13940Cu;
    {
        const bool branch_taken_0x13940c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x139410u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x13940c) {
            ctx->pc = 0x139448u;
            goto label_139448;
        }
    }
    ctx->pc = 0x139414u;
    // 0x139414: 0x3c020022
    ctx->pc = 0x139414u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x139418: 0x24120001
    ctx->pc = 0x139418u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13941c: 0x2450c430
    ctx->pc = 0x13941cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294951984));
    // 0x139420: 0x24110007
    ctx->pc = 0x139420u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 7));
    // 0x139424: 0x0
    ctx->pc = 0x139424u;
    // NOP
label_139428:
    // 0x139428: 0x82020000
    ctx->pc = 0x139428u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13942c: 0x54520004
    ctx->pc = 0x13942Cu;
    {
        const bool branch_taken_0x13942c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x13942c) {
            ctx->pc = 0x139430u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x139440u;
            goto label_139440;
        }
    }
    ctx->pc = 0x139434u;
    // 0x139434: 0xc04e444
    ctx->pc = 0x139434u;
    SET_GPR_U32(ctx, 31, 0x13943Cu);
    ctx->pc = 0x139438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x139110u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139110_0x139110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13943Cu; }
    }
    if (ctx->pc != 0x13943Cu) { return; }
    ctx->pc = 0x13943Cu;
    // 0x13943c: 0x2631ffff
    ctx->pc = 0x13943cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_139440:
    // 0x139440: 0x621fff9
    ctx->pc = 0x139440u;
    {
        const bool branch_taken_0x139440 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x139444u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 68));
        if (branch_taken_0x139440) {
            ctx->pc = 0x139428u;
            goto label_139428;
        }
    }
    ctx->pc = 0x139448u;
label_139448:
    // 0x139448: 0xdfb00000
    ctx->pc = 0x139448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13944c: 0xdfb10008
    ctx->pc = 0x13944cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x139450: 0xdfb20010
    ctx->pc = 0x139450u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139454: 0xdfbf0018
    ctx->pc = 0x139454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x139458: 0x3e00008
    ctx->pc = 0x139458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13945Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x139428u: goto label_139428;
            case 0x139440u: goto label_139440;
            case 0x139448u: goto label_139448;
            default: break;
        }
        return;
    }
    ctx->pc = 0x139460u;
}
