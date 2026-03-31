#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016A5D8
// Address: 0x16a5d8 - 0x16a638
void sub_0016A5D8_0x16a5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16a5d8u;

    // 0x16a5d8: 0x27bdfff0
    ctx->pc = 0x16a5d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16a5dc: 0xffb00000
    ctx->pc = 0x16a5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a5e0: 0xffbf0008
    ctx->pc = 0x16a5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16a5e4: 0xc05a98e
    ctx->pc = 0x16A5E4u;
    SET_GPR_U32(ctx, 31, 0x16A5ECu);
    ctx->pc = 0x16A5E8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16A638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A638_0x16a638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A5ECu; }
    }
    if (ctx->pc != 0x16A5ECu) { return; }
    ctx->pc = 0x16A5ECu;
    // 0x16a5ec: 0x40202d
    ctx->pc = 0x16a5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a5f0: 0x8c820000
    ctx->pc = 0x16a5f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16a5f4: 0x54400008
    ctx->pc = 0x16A5F4u;
    {
        const bool branch_taken_0x16a5f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16a5f4) {
            ctx->pc = 0x16A5F8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->pc = 0x16A618u;
            goto label_16a618;
        }
    }
    ctx->pc = 0x16A5FCu;
    // 0x16a5fc: 0x8c820010
    ctx->pc = 0x16a5fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x16a600: 0x14400009
    ctx->pc = 0x16A600u;
    {
        const bool branch_taken_0x16a600 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16A604u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a600) {
            ctx->pc = 0x16A628u;
            goto label_16a628;
        }
    }
    ctx->pc = 0x16A608u;
    // 0x16a608: 0x8c820014
    ctx->pc = 0x16a608u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x16a60c: 0x14400006
    ctx->pc = 0x16A60Cu;
    {
        const bool branch_taken_0x16a60c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16A610u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a60c) {
            ctx->pc = 0x16A628u;
            goto label_16a628;
        }
    }
    ctx->pc = 0x16A614u;
    // 0x16a614: 0x8c83000c
    ctx->pc = 0x16a614u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16a618:
    // 0x16a618: 0x8c820008
    ctx->pc = 0x16a618u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16a61c: 0x431021
    ctx->pc = 0x16a61cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16a620: 0x2021026
    ctx->pc = 0x16a620u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x16a624: 0x2c420001
    ctx->pc = 0x16a624u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_16a628:
    // 0x16a628: 0xdfb00000
    ctx->pc = 0x16a628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a62c: 0xdfbf0008
    ctx->pc = 0x16a62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a630: 0x3e00008
    ctx->pc = 0x16A630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A634u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A618u: goto label_16a618;
            case 0x16A628u: goto label_16a628;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16A638u;
}
