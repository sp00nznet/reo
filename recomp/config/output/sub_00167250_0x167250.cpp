#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00167250
// Address: 0x167250 - 0x1672e0
void sub_00167250_0x167250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x167250u;

    // 0x167250: 0x27bdffd0
    ctx->pc = 0x167250u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x167254: 0x80102d
    ctx->pc = 0x167254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167258: 0xffb00020
    ctx->pc = 0x167258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x16725c: 0x24500018
    ctx->pc = 0x16725cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 24));
    // 0x167260: 0xffbf0028
    ctx->pc = 0x167260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x167264: 0x24050001
    ctx->pc = 0x167264u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x167268: 0x3a0302d
    ctx->pc = 0x167268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16726c: 0x27a70010
    ctx->pc = 0x16726cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    // 0x167270: 0xc059cb8
    ctx->pc = 0x167270u;
    SET_GPR_U32(ctx, 31, 0x167278u);
    ctx->pc = 0x167274u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x1672E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001672E0_0x1672e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167278u; }
    }
    if (ctx->pc != 0x167278u) { return; }
    ctx->pc = 0x167278u;
    // 0x167278: 0x8e030000
    ctx->pc = 0x167278u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16727c: 0x8fa40000
    ctx->pc = 0x16727cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167280: 0x64102b
    ctx->pc = 0x167280u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x167284: 0x54400007
    ctx->pc = 0x167284u;
    {
        const bool branch_taken_0x167284 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x167284) {
            ctx->pc = 0x167288u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x1672A4u;
            goto label_1672a4;
        }
    }
    ctx->pc = 0x16728Cu;
    // 0x16728c: 0x8fa20004
    ctx->pc = 0x16728cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x167290: 0x821021
    ctx->pc = 0x167290u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x167294: 0x62102b
    ctx->pc = 0x167294u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167298: 0x5440000d
    ctx->pc = 0x167298u;
    {
        const bool branch_taken_0x167298 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x167298) {
            ctx->pc = 0x16729Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->pc = 0x1672D0u;
            goto label_1672d0;
        }
    }
    ctx->pc = 0x1672A0u;
    // 0x1672a0: 0x8fa40010
    ctx->pc = 0x1672a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1672a4:
    // 0x1672a4: 0x64102b
    ctx->pc = 0x1672a4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1672a8: 0x54400007
    ctx->pc = 0x1672A8u;
    {
        const bool branch_taken_0x1672a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1672a8) {
            ctx->pc = 0x1672ACu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->pc = 0x1672C8u;
            goto label_1672c8;
        }
    }
    ctx->pc = 0x1672B0u;
    // 0x1672b0: 0x8fa20014
    ctx->pc = 0x1672b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1672b4: 0x821021
    ctx->pc = 0x1672b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1672b8: 0x62102b
    ctx->pc = 0x1672b8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1672bc: 0x54400004
    ctx->pc = 0x1672BCu;
    {
        const bool branch_taken_0x1672bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1672bc) {
            ctx->pc = 0x1672C0u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->pc = 0x1672D0u;
            goto label_1672d0;
        }
    }
    ctx->pc = 0x1672C4u;
    // 0x1672c4: 0xae000004
    ctx->pc = 0x1672c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1672c8:
    // 0x1672c8: 0xae000000
    ctx->pc = 0x1672c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1672cc: 0xdfb00020
    ctx->pc = 0x1672ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1672d0:
    // 0x1672d0: 0xdfbf0028
    ctx->pc = 0x1672d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1672d4: 0x3e00008
    ctx->pc = 0x1672D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1672D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1672A4u: goto label_1672a4;
            case 0x1672C8u: goto label_1672c8;
            case 0x1672D0u: goto label_1672d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1672DCu;
    // 0x1672dc: 0x0
    ctx->pc = 0x1672dcu;
    // NOP
}
