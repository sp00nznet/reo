#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00105360
// Address: 0x105360 - 0x1053d8
void sub_00105360_0x105360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x105360u;

    // 0x105360: 0x27bdffe0
    ctx->pc = 0x105360u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105364: 0xffb20010
    ctx->pc = 0x105364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x105368: 0xa0902d
    ctx->pc = 0x105368u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10536c: 0xffb00000
    ctx->pc = 0x10536cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105370: 0x128040
    ctx->pc = 0x105370u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 1));
    // 0x105374: 0x2128021
    ctx->pc = 0x105374u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x105378: 0xffb10008
    ctx->pc = 0x105378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10537c: 0x108080
    ctx->pc = 0x10537cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 2));
    // 0x105380: 0xffbf0018
    ctx->pc = 0x105380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x105384: 0x2128023
    ctx->pc = 0x105384u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x105388: 0x1080c0
    ctx->pc = 0x105388u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 3));
    // 0x10538c: 0xc041c76
    ctx->pc = 0x10538Cu;
    SET_GPR_U32(ctx, 31, 0x105394u);
    ctx->pc = 0x105390u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 12));
    ctx->pc = 0x1071D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001071D8_0x1071d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105394u; }
    }
    if (ctx->pc != 0x105394u) { return; }
    ctx->pc = 0x105394u;
    // 0x105394: 0x282d
    ctx->pc = 0x105394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105398: 0x40882d
    ctx->pc = 0x105398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10539c: 0x200302d
    ctx->pc = 0x10539cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1053a0: 0x2623000c
    ctx->pc = 0x1053a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 12));
    // 0x1053a4: 0x12200006
    ctx->pc = 0x1053A4u;
    {
        const bool branch_taken_0x1053a4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1053A8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1053a4) {
            ctx->pc = 0x1053C0u;
            goto label_1053c0;
        }
    }
    ctx->pc = 0x1053ACu;
    // 0x1053ac: 0xae320004
    ctx->pc = 0x1053acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x1053b0: 0xae200000
    ctx->pc = 0x1053b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1053b4: 0xc041f1a
    ctx->pc = 0x1053B4u;
    SET_GPR_U32(ctx, 31, 0x1053BCu);
    ctx->pc = 0x1053B8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1053BCu; }
    }
    if (ctx->pc != 0x1053BCu) { return; }
    ctx->pc = 0x1053BCu;
    // 0x1053bc: 0x220102d
    ctx->pc = 0x1053bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1053c0:
    // 0x1053c0: 0xdfb00000
    ctx->pc = 0x1053c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1053c4: 0xdfb10008
    ctx->pc = 0x1053c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1053c8: 0xdfb20010
    ctx->pc = 0x1053c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1053cc: 0xdfbf0018
    ctx->pc = 0x1053ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1053d0: 0x3e00008
    ctx->pc = 0x1053D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1053D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1053C0u: goto label_1053c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1053D8u;
}
