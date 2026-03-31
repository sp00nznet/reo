#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B67F0
// Address: 0x1b67f0 - 0x1b6860
void sub_001B67F0_0x1b67f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b67f0u;

label_1b67f0:
    // 0x1b67f0: 0x27bdfff0
    ctx->pc = 0x1b67f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b67f4: 0x51202
    ctx->pc = 0x1b67f4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 8));
    // 0x1b67f8: 0xffbf0000
    ctx->pc = 0x1b67f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b67fc: 0x304200ff
    ctx->pc = 0x1b67fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1b6800: 0x8c860028
    ctx->pc = 0x1b6800u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1b6804: 0xc21021
    ctx->pc = 0x1b6804u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1b6808: 0x90420000
    ctx->pc = 0x1b6808u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b680c: 0x1040000a
    ctx->pc = 0x1B680Cu;
    {
        const bool branch_taken_0x1b680c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6810u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 9));
        if (branch_taken_0x1b680c) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6814u;
    // 0x1b6814: 0x30a200ff
    ctx->pc = 0x1b6814u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 255));
    // 0x1b6818: 0x661821
    ctx->pc = 0x1b6818u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1b681c: 0x21040
    ctx->pc = 0x1b681cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1b6820: 0x431021
    ctx->pc = 0x1b6820u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b6824: 0x9442ff00
    ctx->pc = 0x1b6824u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967040)));
    // 0x1b6828: 0x10400003
    ctx->pc = 0x1B6828u;
    {
        const bool branch_taken_0x1b6828 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b6828) {
            ctx->pc = 0x1B6838u;
            goto label_1b6838;
        }
    }
    ctx->pc = 0x1B6830u;
    // 0x1b6830: 0x10000008
    ctx->pc = 0x1B6830u;
    {
        const bool branch_taken_0x1b6830 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6834u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x1b6830) {
            ctx->pc = 0x1B6854u;
            goto label_1b6854;
        }
    }
    ctx->pc = 0x1B6838u;
label_1b6838:
    // 0x1b6838: 0x8c820094
    ctx->pc = 0x1b6838u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1b683c: 0x14400003
    ctx->pc = 0x1B683Cu;
    {
        const bool branch_taken_0x1b683c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B6840u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 63));
        if (branch_taken_0x1b683c) {
            ctx->pc = 0x1B684Cu;
            goto label_1b684c;
        }
    }
    ctx->pc = 0x1B6844u;
    // 0x1b6844: 0x10000003
    ctx->pc = 0x1B6844u;
    {
        const bool branch_taken_0x1b6844 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6848u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b6844) {
            ctx->pc = 0x1B6854u;
            goto label_1b6854;
        }
    }
    ctx->pc = 0x1B684Cu;
label_1b684c:
    // 0x1b684c: 0xc06d9fc
    ctx->pc = 0x1B684Cu;
    SET_GPR_U32(ctx, 31, 0x1B6854u);
    ctx->pc = 0x1B67F0u;
    goto label_1b67f0;
    ctx->pc = 0x1B6854u;
label_1b6854:
    // 0x1b6854: 0xdfbf0000
    ctx->pc = 0x1b6854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6858: 0x3e00008
    ctx->pc = 0x1B6858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B685Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B67F0u: goto label_1b67f0;
            case 0x1B6838u: goto label_1b6838;
            case 0x1B684Cu: goto label_1b684c;
            case 0x1B6854u: goto label_1b6854;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B6860u;
}
