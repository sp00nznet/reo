#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00161948
// Address: 0x161948 - 0x161978
void sub_00161948_0x161948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x161948u;

label_161948:
    // 0x161948: 0x27bdfff0
    ctx->pc = 0x161948u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_16194c:
    // 0x16194c: 0xffbf0000
    ctx->pc = 0x16194cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_161950:
    // 0x161950: 0x8c8200e8
    ctx->pc = 0x161950u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 232)));
label_161954:
    // 0x161954: 0x10400005
label_161958:
    if (ctx->pc == 0x161958u) {
        ctx->pc = 0x161958u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16195Cu;
        goto label_16195c;
    }
    ctx->pc = 0x161954u;
    {
        const bool branch_taken_0x161954 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x161958u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x161954) {
            ctx->pc = 0x16196Cu;
            goto label_16196c;
        }
    }
    ctx->pc = 0x16195Cu;
label_16195c:
    // 0x16195c: 0x8c420000
    ctx->pc = 0x16195cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_161960:
    // 0x161960: 0x8c43000c
    ctx->pc = 0x161960u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_161964:
    // 0x161964: 0x60f809
label_161968:
    if (ctx->pc == 0x161968u) {
        ctx->pc = 0x16196Cu;
        goto label_16196c;
    }
    ctx->pc = 0x161964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16196Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161948u: goto label_161948;
            case 0x16194Cu: goto label_16194c;
            case 0x161950u: goto label_161950;
            case 0x161954u: goto label_161954;
            case 0x161958u: goto label_161958;
            case 0x16195Cu: goto label_16195c;
            case 0x161960u: goto label_161960;
            case 0x161964u: goto label_161964;
            case 0x161968u: goto label_161968;
            case 0x16196Cu: goto label_16196c;
            case 0x161970u: goto label_161970;
            case 0x161974u: goto label_161974;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16196Cu; }
            if (ctx->pc != 0x16196Cu) { return; }
        }
    }
    ctx->pc = 0x16196Cu;
label_16196c:
    // 0x16196c: 0xdfbf0000
    ctx->pc = 0x16196cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_161970:
    // 0x161970: 0x3e00008
label_161974:
    if (ctx->pc == 0x161974u) {
        ctx->pc = 0x161974u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x161978u;
        goto label_fallthrough_0x161970;
    }
    ctx->pc = 0x161970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161974u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161948u: goto label_161948;
            case 0x16194Cu: goto label_16194c;
            case 0x161950u: goto label_161950;
            case 0x161954u: goto label_161954;
            case 0x161958u: goto label_161958;
            case 0x16195Cu: goto label_16195c;
            case 0x161960u: goto label_161960;
            case 0x161964u: goto label_161964;
            case 0x161968u: goto label_161968;
            case 0x16196Cu: goto label_16196c;
            case 0x161970u: goto label_161970;
            case 0x161974u: goto label_161974;
            default: break;
        }
        return;
    }
label_fallthrough_0x161970:
    ctx->pc = 0x161978u;
}
