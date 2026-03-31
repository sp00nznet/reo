#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BE220
// Address: 0x1be220 - 0x1be280
void sub_001BE220_0x1be220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1be220u;

    // 0x1be220: 0x27bdfff0
    ctx->pc = 0x1be220u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1be224: 0x3c010032
    ctx->pc = 0x1be224u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be228: 0xffbf0000
    ctx->pc = 0x1be228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be22c: 0xc06f8e0
    ctx->pc = 0x1BE22Cu;
    SET_GPR_U32(ctx, 31, 0x1BE234u);
    ctx->pc = 0x1BE230u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17632), GPR_U32(ctx, 0));
    ctx->pc = 0x1BE380u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE380_0x1be380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE234u; }
    }
    if (ctx->pc != 0x1BE234u) { return; }
    ctx->pc = 0x1BE234u;
    // 0x1be234: 0x2403ffed
    ctx->pc = 0x1be234u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967277));
    // 0x1be238: 0x10430009
    ctx->pc = 0x1BE238u;
    {
        const bool branch_taken_0x1be238 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1BE23Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x1be238) {
            ctx->pc = 0x1BE260u;
            goto label_1be260;
        }
    }
    ctx->pc = 0x1BE240u;
    // 0x1be240: 0x10430005
    ctx->pc = 0x1BE240u;
    {
        const bool branch_taken_0x1be240 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1be240) {
            ctx->pc = 0x1BE258u;
            goto label_1be258;
        }
    }
    ctx->pc = 0x1BE248u;
    // 0x1be248: 0x10400009
    ctx->pc = 0x1BE248u;
    {
        const bool branch_taken_0x1be248 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1be248) {
            ctx->pc = 0x1BE270u;
            goto label_1be270;
        }
    }
    ctx->pc = 0x1BE250u;
    // 0x1be250: 0x10000005
    ctx->pc = 0x1BE250u;
    {
        const bool branch_taken_0x1be250 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BE254u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967197));
        if (branch_taken_0x1be250) {
            ctx->pc = 0x1BE268u;
            goto label_1be268;
        }
    }
    ctx->pc = 0x1BE258u;
label_1be258:
    // 0x1be258: 0x10000006
    ctx->pc = 0x1BE258u;
    {
        const bool branch_taken_0x1be258 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BE25Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
        if (branch_taken_0x1be258) {
            ctx->pc = 0x1BE274u;
            goto label_1be274;
        }
    }
    ctx->pc = 0x1BE260u;
label_1be260:
    // 0x1be260: 0x10000004
    ctx->pc = 0x1BE260u;
    {
        const bool branch_taken_0x1be260 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BE264u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1be260) {
            ctx->pc = 0x1BE274u;
            goto label_1be274;
        }
    }
    ctx->pc = 0x1BE268u;
label_1be268:
    // 0x1be268: 0x10000003
    ctx->pc = 0x1BE268u;
    {
        const bool branch_taken_0x1be268 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BE26Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1be268) {
            ctx->pc = 0x1BE278u;
            goto label_1be278;
        }
    }
    ctx->pc = 0x1BE270u;
label_1be270:
    // 0x1be270: 0x102d
    ctx->pc = 0x1be270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1be274:
    // 0x1be274: 0xdfbf0000
    ctx->pc = 0x1be274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1be278:
    // 0x1be278: 0x3e00008
    ctx->pc = 0x1BE278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE27Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BE258u: goto label_1be258;
            case 0x1BE260u: goto label_1be260;
            case 0x1BE268u: goto label_1be268;
            case 0x1BE270u: goto label_1be270;
            case 0x1BE274u: goto label_1be274;
            case 0x1BE278u: goto label_1be278;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BE280u;
}
