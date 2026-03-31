#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F3610
// Address: 0x1f3610 - 0x1f3694
void sub_001F3610_0x1f3610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f3610u;

    // 0x1f3610: 0x27bdffe0
    ctx->pc = 0x1f3610u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f3614: 0xffbe0010
    ctx->pc = 0x1f3614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1f3618: 0xffbf0018
    ctx->pc = 0x1f3618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f361c: 0x3a0f02d
    ctx->pc = 0x1f361cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3620: 0xafc40000
    ctx->pc = 0x1f3620u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1f3624: 0xafc50004
    ctx->pc = 0x1f3624u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1f3628: 0xafc60008
    ctx->pc = 0x1f3628u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x1f362c: 0x8fc40000
    ctx->pc = 0x1f362cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f3630: 0xc07c6b6
    ctx->pc = 0x1F3630u;
    SET_GPR_U32(ctx, 31, 0x1F3638u);
    ctx->pc = 0x1F1AD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1AD8_0x1f1ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3638u; }
    }
    if (ctx->pc != 0x1F3638u) { return; }
    ctx->pc = 0x1F3638u;
    // 0x1f3638: 0xafc2000c
    ctx->pc = 0x1f3638u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1f363c: 0x8fc3000c
    ctx->pc = 0x1f363cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f3640: 0x8fc20008
    ctx->pc = 0x1f3640u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f3644: 0x43102a
    ctx->pc = 0x1f3644u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x1f3648: 0x10400003
    ctx->pc = 0x1F3648u;
    {
        const bool branch_taken_0x1f3648 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f3648) {
            ctx->pc = 0x1F3658u;
            goto label_1f3658;
        }
    }
    ctx->pc = 0x1F3650u;
    // 0x1f3650: 0x8fc20008
    ctx->pc = 0x1f3650u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f3654: 0xafc2000c
    ctx->pc = 0x1f3654u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_1f3658:
    // 0x1f3658: 0x8fc40000
    ctx->pc = 0x1f3658u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f365c: 0xc07cd3b
    ctx->pc = 0x1F365Cu;
    SET_GPR_U32(ctx, 31, 0x1F3664u);
    ctx->pc = 0x1F34ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F34EC_0x1f34ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3664u; }
    }
    if (ctx->pc != 0x1F3664u) { return; }
    ctx->pc = 0x1F3664u;
    // 0x1f3664: 0x8fc40004
    ctx->pc = 0x1f3664u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f3668: 0x40282d
    ctx->pc = 0x1f3668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f366c: 0x8fc6000c
    ctx->pc = 0x1f366cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f3670: 0xc041eac
    ctx->pc = 0x1F3670u;
    SET_GPR_U32(ctx, 31, 0x1F3678u);
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3678u; }
    }
    if (ctx->pc != 0x1F3678u) { return; }
    ctx->pc = 0x1F3678u;
    // 0x1f3678: 0x8fc2000c
    ctx->pc = 0x1f3678u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f367c: 0x3c0e82d
    ctx->pc = 0x1f367cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3680: 0xdfbe0010
    ctx->pc = 0x1f3680u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3684: 0xdfbf0018
    ctx->pc = 0x1f3684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f3688: 0x27bd0020
    ctx->pc = 0x1f3688u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f368c: 0x3e00008
    ctx->pc = 0x1F368Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3658u: goto label_1f3658;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F3694u;
}
