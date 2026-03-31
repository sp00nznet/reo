#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00140020
// Address: 0x140020 - 0x140070
void sub_00140020_0x140020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x140020u;

    // 0x140020: 0x27bdfff0
    ctx->pc = 0x140020u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x140024: 0x3c020023
    ctx->pc = 0x140024u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x140028: 0xffb00000
    ctx->pc = 0x140028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14002c: 0x24508c90
    ctx->pc = 0x14002cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294937744));
    // 0x140030: 0x8e020000
    ctx->pc = 0x140030u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x140034: 0x14400007
    ctx->pc = 0x140034u;
    {
        const bool branch_taken_0x140034 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x140038u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x140034) {
            ctx->pc = 0x140054u;
            goto label_140054;
        }
    }
    ctx->pc = 0x14003Cu;
    // 0x14003c: 0x3c040023
    ctx->pc = 0x14003cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x140040: 0x282d
    ctx->pc = 0x140040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140044: 0x24848c98
    ctx->pc = 0x140044u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937752));
    // 0x140048: 0xc041f1a
    ctx->pc = 0x140048u;
    SET_GPR_U32(ctx, 31, 0x140050u);
    ctx->pc = 0x14004Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3072));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140050u; }
    }
    if (ctx->pc != 0x140050u) { return; }
    ctx->pc = 0x140050u;
    // 0x140050: 0x8e020000
    ctx->pc = 0x140050u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_140054:
    // 0x140054: 0x24420001
    ctx->pc = 0x140054u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x140058: 0xdfbf0008
    ctx->pc = 0x140058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14005c: 0xae020000
    ctx->pc = 0x14005cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x140060: 0xdfb00000
    ctx->pc = 0x140060u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140064: 0x3e00008
    ctx->pc = 0x140064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140068u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140054u: goto label_140054;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14006Cu;
    // 0x14006c: 0x0
    ctx->pc = 0x14006cu;
    // NOP
}
