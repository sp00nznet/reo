#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00187520
// Address: 0x187520 - 0x187578
void sub_00187520_0x187520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x187520u;

    // 0x187520: 0x41040
    ctx->pc = 0x187520u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x187524: 0x302d
    ctx->pc = 0x187524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187528: 0x441021
    ctx->pc = 0x187528u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18752c: 0x21140
    ctx->pc = 0x18752cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x187530: 0x441021
    ctx->pc = 0x187530u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x187534: 0x21080
    ctx->pc = 0x187534u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x187538: 0x3c040023
    ctx->pc = 0x187538u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x18753c: 0x2484fae8
    ctx->pc = 0x18753cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965992));
    // 0x187540: 0x822021
    ctx->pc = 0x187540u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x187544: 0x8c830000
    ctx->pc = 0x187544u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_187548:
    // 0x187548: 0x24840004
    ctx->pc = 0x187548u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x18754c: 0x10650008
    ctx->pc = 0x18754Cu;
    {
        const bool branch_taken_0x18754c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        ctx->pc = 0x187550u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x18754c) {
            ctx->pc = 0x187570u;
            goto label_187570;
        }
    }
    ctx->pc = 0x187554u;
    // 0x187554: 0x24c60001
    ctx->pc = 0x187554u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x187558: 0x28c20020
    ctx->pc = 0x187558u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 32));
    // 0x18755c: 0x0
    ctx->pc = 0x18755cu;
    // NOP
    // 0x187560: 0x0
    ctx->pc = 0x187560u;
    // NOP
    // 0x187564: 0x5440fff8
    ctx->pc = 0x187564u;
    {
        const bool branch_taken_0x187564 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x187564) {
            ctx->pc = 0x187568u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x187548u;
            goto label_187548;
        }
    }
    ctx->pc = 0x18756Cu;
    // 0x18756c: 0x102d
    ctx->pc = 0x18756cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187570:
    // 0x187570: 0x3e00008
    ctx->pc = 0x187570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187548u: goto label_187548;
            case 0x187570u: goto label_187570;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187578u;
}
