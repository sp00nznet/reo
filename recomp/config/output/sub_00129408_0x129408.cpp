#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00129408
// Address: 0x129408 - 0x129468
void sub_00129408_0x129408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x129408u;

    // 0x129408: 0x27bdffe0
    ctx->pc = 0x129408u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12940c: 0x3c020021
    ctx->pc = 0x12940cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x129410: 0xffbf0018
    ctx->pc = 0x129410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x129414: 0xffb00000
    ctx->pc = 0x129414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x129418: 0x2450c8c0
    ctx->pc = 0x129418u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294953152));
    // 0x12941c: 0xffb10008
    ctx->pc = 0x12941cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x129420: 0x2411000f
    ctx->pc = 0x129420u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 15));
    // 0x129424: 0xffb20010
    ctx->pc = 0x129424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x129428: 0x24120001
    ctx->pc = 0x129428u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x12942c: 0x0
    ctx->pc = 0x12942cu;
    // NOP
label_129430:
    // 0x129430: 0x82020000
    ctx->pc = 0x129430u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x129434: 0x54520004
    ctx->pc = 0x129434u;
    {
        const bool branch_taken_0x129434 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x129434) {
            ctx->pc = 0x129438u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x129448u;
            goto label_129448;
        }
    }
    ctx->pc = 0x12943Cu;
    // 0x12943c: 0xc04a4d4
    ctx->pc = 0x12943Cu;
    SET_GPR_U32(ctx, 31, 0x129444u);
    ctx->pc = 0x129440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129350u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129350_0x129350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129444u; }
    }
    if (ctx->pc != 0x129444u) { return; }
    ctx->pc = 0x129444u;
    // 0x129444: 0x2631ffff
    ctx->pc = 0x129444u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_129448:
    // 0x129448: 0x621fff9
    ctx->pc = 0x129448u;
    {
        const bool branch_taken_0x129448 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x12944Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 68));
        if (branch_taken_0x129448) {
            ctx->pc = 0x129430u;
            goto label_129430;
        }
    }
    ctx->pc = 0x129450u;
    // 0x129450: 0xdfb00000
    ctx->pc = 0x129450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129454: 0xdfb10008
    ctx->pc = 0x129454u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x129458: 0xdfb20010
    ctx->pc = 0x129458u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12945c: 0xdfbf0018
    ctx->pc = 0x12945cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x129460: 0x3e00008
    ctx->pc = 0x129460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129464u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129430u: goto label_129430;
            case 0x129448u: goto label_129448;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129468u;
}
