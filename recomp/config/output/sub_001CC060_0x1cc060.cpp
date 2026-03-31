#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CC060
// Address: 0x1cc060 - 0x1cc0b0
void sub_001CC060_0x1cc060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cc060u;

    // 0x1cc060: 0x27bdfff0
    ctx->pc = 0x1cc060u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc064: 0x3c010034
    ctx->pc = 0x1cc064u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1cc068: 0xffbf0000
    ctx->pc = 0x1cc068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cc06c: 0x8c23d9f8
    ctx->pc = 0x1cc06cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294957560)));
    // 0x1cc070: 0x1460000c
    ctx->pc = 0x1CC070u;
    {
        const bool branch_taken_0x1cc070 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1cc070) {
            ctx->pc = 0x1CC0A4u;
            goto label_1cc0a4;
        }
    }
    ctx->pc = 0x1CC078u;
    // 0x1cc078: 0x3c010034
    ctx->pc = 0x1cc078u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1cc07c: 0x8c23da00
    ctx->pc = 0x1cc07cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294957568)));
    // 0x1cc080: 0x10600003
    ctx->pc = 0x1CC080u;
    {
        const bool branch_taken_0x1cc080 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cc080) {
            ctx->pc = 0x1CC090u;
            goto label_1cc090;
        }
    }
    ctx->pc = 0x1CC088u;
    // 0x1cc088: 0x10000007
    ctx->pc = 0x1CC088u;
    {
        const bool branch_taken_0x1cc088 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CC08Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1cc088) {
            ctx->pc = 0x1CC0A8u;
            goto label_1cc0a8;
        }
    }
    ctx->pc = 0x1CC090u;
label_1cc090:
    // 0x1cc090: 0x3c010034
    ctx->pc = 0x1cc090u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1cc094: 0xc077436
    ctx->pc = 0x1CC094u;
    SET_GPR_U32(ctx, 31, 0x1CC09Cu);
    ctx->pc = 0x1CC098u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294952944)));
    ctx->pc = 0x1DD0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD0D8_0x1dd0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC09Cu; }
    }
    if (ctx->pc != 0x1CC09Cu) { return; }
    ctx->pc = 0x1CC09Cu;
    // 0x1cc09c: 0x3c010034
    ctx->pc = 0x1cc09cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1cc0a0: 0xac22d9f8
    ctx->pc = 0x1cc0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957560), GPR_U32(ctx, 2));
label_1cc0a4:
    // 0x1cc0a4: 0xdfbf0000
    ctx->pc = 0x1cc0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc0a8:
    // 0x1cc0a8: 0x3e00008
    ctx->pc = 0x1CC0A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC0ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC090u: goto label_1cc090;
            case 0x1CC0A4u: goto label_1cc0a4;
            case 0x1CC0A8u: goto label_1cc0a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CC0B0u;
}
