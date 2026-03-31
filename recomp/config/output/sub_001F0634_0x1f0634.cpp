#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F0634
// Address: 0x1f0634 - 0x1f0718
void sub_001F0634_0x1f0634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f0634u;

    // 0x1f0634: 0x27bdffe0
    ctx->pc = 0x1f0634u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f0638: 0xffbe0010
    ctx->pc = 0x1f0638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1f063c: 0xffbf0018
    ctx->pc = 0x1f063cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f0640: 0x3a0f02d
    ctx->pc = 0x1f0640u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0644: 0xafc40000
    ctx->pc = 0x1f0644u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1f0648: 0xafc50004
    ctx->pc = 0x1f0648u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1f064c: 0xafc00008
    ctx->pc = 0x1f064cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
    // 0x1f0650: 0x8fc20000
    ctx->pc = 0x1f0650u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f0654: 0xafc2000c
    ctx->pc = 0x1f0654u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_1f0658:
    // 0x1f0658: 0x27c20008
    ctx->pc = 0x1f0658u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 8));
    // 0x1f065c: 0x8fc40004
    ctx->pc = 0x1f065cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f0660: 0x282d
    ctx->pc = 0x1f0660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0664: 0x40302d
    ctx->pc = 0x1f0664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0668: 0x24070001
    ctx->pc = 0x1f0668u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f066c: 0xc07ae0c
    ctx->pc = 0x1F066Cu;
    SET_GPR_U32(ctx, 31, 0x1F0674u);
    ctx->pc = 0x1EB830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001EB830_0x1eb830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0674u; }
    }
    if (ctx->pc != 0x1F0674u) { return; }
    ctx->pc = 0x1F0674u;
    // 0x1f0674: 0x1440fff8
    ctx->pc = 0x1F0674u;
    {
        const bool branch_taken_0x1f0674 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f0674) {
            ctx->pc = 0x1F0658u;
            goto label_1f0658;
        }
    }
    ctx->pc = 0x1F067Cu;
    // 0x1f067c: 0x8fc3000c
    ctx->pc = 0x1f067cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f0680: 0x8fc20004
    ctx->pc = 0x1f0680u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f0684: 0x8c420000
    ctx->pc = 0x1f0684u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f0688: 0xac620000
    ctx->pc = 0x1f0688u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1f068c: 0x8fc2000c
    ctx->pc = 0x1f068cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f0690: 0x24430004
    ctx->pc = 0x1f0690u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4));
    // 0x1f0694: 0x8fc20004
    ctx->pc = 0x1f0694u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f0698: 0x8c420004
    ctx->pc = 0x1f0698u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f069c: 0xac620000
    ctx->pc = 0x1f069cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1f06a0: 0x8fc2000c
    ctx->pc = 0x1f06a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f06a4: 0x24430008
    ctx->pc = 0x1f06a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1f06a8: 0x8fc20004
    ctx->pc = 0x1f06a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f06ac: 0x8c420008
    ctx->pc = 0x1f06acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1f06b0: 0xac620000
    ctx->pc = 0x1f06b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1f06b4: 0x8fc2000c
    ctx->pc = 0x1f06b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f06b8: 0x2443000c
    ctx->pc = 0x1f06b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 12));
    // 0x1f06bc: 0x8fc20004
    ctx->pc = 0x1f06bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f06c0: 0x8c42000c
    ctx->pc = 0x1f06c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1f06c4: 0xac620000
    ctx->pc = 0x1f06c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1f06c8: 0x8fc2000c
    ctx->pc = 0x1f06c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f06cc: 0x24430010
    ctx->pc = 0x1f06ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 16));
    // 0x1f06d0: 0x8fc20004
    ctx->pc = 0x1f06d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f06d4: 0x8c420010
    ctx->pc = 0x1f06d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f06d8: 0xac620000
    ctx->pc = 0x1f06d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1f06dc: 0x8fc40000
    ctx->pc = 0x1f06dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f06e0: 0x24050014
    ctx->pc = 0x1f06e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1f06e4: 0xc07add9
    ctx->pc = 0x1F06E4u;
    SET_GPR_U32(ctx, 31, 0x1F06ECu);
    ctx->pc = 0x1EB764u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001EB764_0x1eb764(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F06ECu; }
    }
    if (ctx->pc != 0x1F06ECu) { return; }
    ctx->pc = 0x1F06ECu;
    // 0x1f06ec: 0x8fc40004
    ctx->pc = 0x1f06ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f06f0: 0x282d
    ctx->pc = 0x1f06f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f06f4: 0x24060004
    ctx->pc = 0x1f06f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f06f8: 0xc041f1a
    ctx->pc = 0x1F06F8u;
    SET_GPR_U32(ctx, 31, 0x1F0700u);
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0700u; }
    }
    if (ctx->pc != 0x1F0700u) { return; }
    ctx->pc = 0x1F0700u;
    // 0x1f0700: 0x3c0e82d
    ctx->pc = 0x1f0700u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0704: 0xdfbe0010
    ctx->pc = 0x1f0704u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0708: 0xdfbf0018
    ctx->pc = 0x1f0708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f070c: 0x27bd0020
    ctx->pc = 0x1f070cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f0710: 0x3e00008
    ctx->pc = 0x1F0710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0658u: goto label_1f0658;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F0718u;
}
