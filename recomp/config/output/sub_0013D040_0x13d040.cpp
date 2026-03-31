#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013D040
// Address: 0x13d040 - 0x13d0a0
void sub_0013D040_0x13d040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13d040u;

    // 0x13d040: 0x27bdffe0
    ctx->pc = 0x13d040u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13d044: 0x3c020022
    ctx->pc = 0x13d044u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13d048: 0xffbf0018
    ctx->pc = 0x13d048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x13d04c: 0xffb00000
    ctx->pc = 0x13d04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13d050: 0x2450e110
    ctx->pc = 0x13d050u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294959376));
    // 0x13d054: 0xffb10008
    ctx->pc = 0x13d054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13d058: 0x2411000f
    ctx->pc = 0x13d058u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 15));
    // 0x13d05c: 0xffb20010
    ctx->pc = 0x13d05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13d060: 0x24120001
    ctx->pc = 0x13d060u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d064: 0x0
    ctx->pc = 0x13d064u;
    // NOP
label_13d068:
    // 0x13d068: 0x82020000
    ctx->pc = 0x13d068u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13d06c: 0x54520004
    ctx->pc = 0x13D06Cu;
    {
        const bool branch_taken_0x13d06c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x13d06c) {
            ctx->pc = 0x13D070u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x13D080u;
            goto label_13d080;
        }
    }
    ctx->pc = 0x13D074u;
    // 0x13d074: 0xc04f66e
    ctx->pc = 0x13D074u;
    SET_GPR_U32(ctx, 31, 0x13D07Cu);
    ctx->pc = 0x13D078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13D9B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D9B8_0x13d9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D07Cu; }
    }
    if (ctx->pc != 0x13D07Cu) { return; }
    ctx->pc = 0x13D07Cu;
    // 0x13d07c: 0x2631ffff
    ctx->pc = 0x13d07cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_13d080:
    // 0x13d080: 0x621fff9
    ctx->pc = 0x13D080u;
    {
        const bool branch_taken_0x13d080 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x13D084u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 568));
        if (branch_taken_0x13d080) {
            ctx->pc = 0x13D068u;
            goto label_13d068;
        }
    }
    ctx->pc = 0x13D088u;
    // 0x13d088: 0xdfb00000
    ctx->pc = 0x13d088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d08c: 0xdfb10008
    ctx->pc = 0x13d08cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13d090: 0xdfb20010
    ctx->pc = 0x13d090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d094: 0xdfbf0018
    ctx->pc = 0x13d094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d098: 0x3e00008
    ctx->pc = 0x13D098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D09Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D068u: goto label_13d068;
            case 0x13D080u: goto label_13d080;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13D0A0u;
}
