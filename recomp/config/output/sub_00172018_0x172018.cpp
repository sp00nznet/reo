#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00172018
// Address: 0x172018 - 0x172078
void sub_00172018_0x172018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x172018u;

    // 0x172018: 0x27bdfff0
    ctx->pc = 0x172018u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17201c: 0xffb00000
    ctx->pc = 0x17201cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172020: 0xffbf0008
    ctx->pc = 0x172020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x172024: 0xc05c54c
    ctx->pc = 0x172024u;
    SET_GPR_U32(ctx, 31, 0x17202Cu);
    ctx->pc = 0x172028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171530u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00171530_0x171530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17202Cu; }
    }
    if (ctx->pc != 0x17202Cu) { return; }
    ctx->pc = 0x17202Cu;
    // 0x17202c: 0x14400004
    ctx->pc = 0x17202Cu;
    {
        const bool branch_taken_0x17202c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x172030u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x17202c) {
            ctx->pc = 0x172040u;
            goto label_172040;
        }
    }
    ctx->pc = 0x172034u;
    // 0x172034: 0x1000000a
    ctx->pc = 0x172034u;
    {
        const bool branch_taken_0x172034 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x172038u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x172034) {
            ctx->pc = 0x172060u;
            goto label_172060;
        }
    }
    ctx->pc = 0x17203Cu;
    // 0x17203c: 0x0
    ctx->pc = 0x17203cu;
    // NOP
label_172040:
    // 0x172040: 0x8e041b30
    ctx->pc = 0x172040u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 6960)));
    // 0x172044: 0x248409d8
    ctx->pc = 0x172044u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2520));
    // 0x172048: 0x8c830020
    ctx->pc = 0x172048u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x17204c: 0x10650004
    ctx->pc = 0x17204Cu;
    {
        const bool branch_taken_0x17204c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        ctx->pc = 0x172050u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x17204c) {
            ctx->pc = 0x172060u;
            goto label_172060;
        }
    }
    ctx->pc = 0x172054u;
    // 0x172054: 0x8c82000c
    ctx->pc = 0x172054u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x172058: 0x28420003
    ctx->pc = 0x172058u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
    // 0x17205c: 0x2c420001
    ctx->pc = 0x17205cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_172060:
    // 0x172060: 0xdfb00000
    ctx->pc = 0x172060u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172064: 0xdfbf0008
    ctx->pc = 0x172064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172068: 0x3e00008
    ctx->pc = 0x172068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17206Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172040u: goto label_172040;
            case 0x172060u: goto label_172060;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172070u;
    // 0x172070: 0x3e00008
    ctx->pc = 0x172070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172074u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 72));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172040u: goto label_172040;
            case 0x172060u: goto label_172060;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172078u;
}
