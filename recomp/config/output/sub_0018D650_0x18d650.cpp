#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018D650
// Address: 0x18d650 - 0x18d6c0
void sub_0018D650_0x18d650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18d650u;

    // 0x18d650: 0x27bdfff0
    ctx->pc = 0x18d650u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18d654: 0x3c02002a
    ctx->pc = 0x18d654u;
    SET_GPR_U32(ctx, 2, ((uint32_t)42 << 16));
    // 0x18d658: 0xffbf0000
    ctx->pc = 0x18d658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18d65c: 0x3c01002a
    ctx->pc = 0x18d65cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x18d660: 0x8c23fdb4
    ctx->pc = 0x18d660u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966708)));
    // 0x18d664: 0x2442f6f0
    ctx->pc = 0x18d664u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964976));
    // 0x18d668: 0x38630001
    ctx->pc = 0x18d668u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 1));
    // 0x18d66c: 0x31880
    ctx->pc = 0x18d66cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x18d670: 0x431021
    ctx->pc = 0x18d670u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d674: 0x24430014
    ctx->pc = 0x18d674u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 20));
label_18d678:
    // 0x18d678: 0x8c620000
    ctx->pc = 0x18d678u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18d67c: 0x0
    ctx->pc = 0x18d67cu;
    // NOP
    // 0x18d680: 0x0
    ctx->pc = 0x18d680u;
    // NOP
    // 0x18d684: 0x0
    ctx->pc = 0x18d684u;
    // NOP
    // 0x18d688: 0x0
    ctx->pc = 0x18d688u;
    // NOP
    // 0x18d68c: 0x1440fffa
    ctx->pc = 0x18D68Cu;
    {
        const bool branch_taken_0x18d68c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x18d68c) {
            ctx->pc = 0x18D678u;
            goto label_18d678;
        }
    }
    ctx->pc = 0x18D694u;
label_18d694:
    // 0x18d694: 0x3c01002a
    ctx->pc = 0x18d694u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x18d698: 0x24050001
    ctx->pc = 0x18d698u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d69c: 0x8c24fd78
    ctx->pc = 0x18d69cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966648)));
    // 0x18d6a0: 0xc040d8c
    ctx->pc = 0x18D6A0u;
    SET_GPR_U32(ctx, 31, 0x18D6A8u);
    ctx->pc = 0x18D6A4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x103630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103630_0x103630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D6A8u; }
    }
    if (ctx->pc != 0x18D6A8u) { return; }
    ctx->pc = 0x18D6A8u;
    // 0x18d6a8: 0x1440fffa
    ctx->pc = 0x18D6A8u;
    {
        const bool branch_taken_0x18d6a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x18d6a8) {
            ctx->pc = 0x18D694u;
            goto label_18d694;
        }
    }
    ctx->pc = 0x18D6B0u;
    // 0x18d6b0: 0xdfbf0000
    ctx->pc = 0x18d6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d6b4: 0x24020001
    ctx->pc = 0x18d6b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d6b8: 0x3e00008
    ctx->pc = 0x18D6B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D6BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D678u: goto label_18d678;
            case 0x18D694u: goto label_18d694;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18D6C0u;
}
