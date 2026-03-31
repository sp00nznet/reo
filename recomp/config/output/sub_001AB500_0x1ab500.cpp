#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AB500
// Address: 0x1ab500 - 0x1ab560
void sub_001AB500_0x1ab500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ab500u;

    // 0x1ab500: 0x27bdffb0
    ctx->pc = 0x1ab500u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ab504: 0x510c0
    ctx->pc = 0x1ab504u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1ab508: 0xffbf0030
    ctx->pc = 0x1ab508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ab50c: 0x441021
    ctx->pc = 0x1ab50cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ab510: 0x7fb20020
    ctx->pc = 0x1ab510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ab514: 0x7fb10010
    ctx->pc = 0x1ab514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ab518: 0xc0902d
    ctx->pc = 0x1ab518u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab51c: 0x7fb00000
    ctx->pc = 0x1ab51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ab520: 0xe0882d
    ctx->pc = 0x1ab520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab524: 0x8c500008
    ctx->pc = 0x1ab524u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1ab528:
    // 0x1ab528: 0x200202d
    ctx->pc = 0x1ab528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab52c: 0x240282d
    ctx->pc = 0x1ab52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab530: 0x220302d
    ctx->pc = 0x1ab530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab534: 0xc04714c
    ctx->pc = 0x1AB534u;
    SET_GPR_U32(ctx, 31, 0x1AB53Cu);
    ctx->pc = 0x1AB538u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 76));
    ctx->pc = 0x11C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C530_0x11c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB53Cu; }
    }
    if (ctx->pc != 0x1AB53Cu) { return; }
    ctx->pc = 0x1AB53Cu;
    // 0x1ab53c: 0x440fffa
    ctx->pc = 0x1AB53Cu;
    {
        const bool branch_taken_0x1ab53c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ab53c) {
            ctx->pc = 0x1AB528u;
            goto label_1ab528;
        }
    }
    ctx->pc = 0x1AB544u;
    // 0x1ab544: 0x8fa2004c
    ctx->pc = 0x1ab544u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1ab548: 0xdfbf0030
    ctx->pc = 0x1ab548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ab54c: 0x7bb20020
    ctx->pc = 0x1ab54cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab550: 0x7bb10010
    ctx->pc = 0x1ab550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab554: 0x7bb00000
    ctx->pc = 0x1ab554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab558: 0x3e00008
    ctx->pc = 0x1AB558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB55Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AB528u: goto label_1ab528;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB560u;
}
