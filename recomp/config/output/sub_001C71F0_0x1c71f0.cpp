#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C71F0
// Address: 0x1c71f0 - 0x1c7250
void sub_001C71F0_0x1c71f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c71f0u;

    // 0x1c71f0: 0x3c010033
    ctx->pc = 0x1c71f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c71f4: 0x3c040033
    ctx->pc = 0x1c71f4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x1c71f8: 0x90255055
    ctx->pc = 0x1c71f8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20565)));
    // 0x1c71fc: 0x102d
    ctx->pc = 0x1c71fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7200: 0x1000000a
    ctx->pc = 0x1C7200u;
    {
        const bool branch_taken_0x1c7200 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C7204u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20560));
        if (branch_taken_0x1c7200) {
            ctx->pc = 0x1C722Cu;
            goto label_1c722c;
        }
    }
    ctx->pc = 0x1C7208u;
label_1c7208:
    // 0x1c7208: 0x621823
    ctx->pc = 0x1c7208u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c720c: 0x31880
    ctx->pc = 0x1c720cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c7210: 0x831821
    ctx->pc = 0x1c7210u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c7214: 0x9063004c
    ctx->pc = 0x1c7214u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1c7218: 0x10600003
    ctx->pc = 0x1C7218u;
    {
        const bool branch_taken_0x1c7218 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c7218) {
            ctx->pc = 0x1C7228u;
            goto label_1c7228;
        }
    }
    ctx->pc = 0x1C7220u;
    // 0x1c7220: 0x10000006
    ctx->pc = 0x1C7220u;
    {
        const bool branch_taken_0x1c7220 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c7220) {
            ctx->pc = 0x1C723Cu;
            goto label_1c723c;
        }
    }
    ctx->pc = 0x1C7228u;
label_1c7228:
    // 0x1c7228: 0x24420001
    ctx->pc = 0x1c7228u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1c722c:
    // 0x1c722c: 0x45182a
    ctx->pc = 0x1c722cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 5)));
    // 0x1c7230: 0x1460fff5
    ctx->pc = 0x1C7230u;
    {
        const bool branch_taken_0x1c7230 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C7234u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 4));
        if (branch_taken_0x1c7230) {
            ctx->pc = 0x1C7208u;
            goto label_1c7208;
        }
    }
    ctx->pc = 0x1C7238u;
    // 0x1c7238: 0x2402ffff
    ctx->pc = 0x1c7238u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c723c:
    // 0x1c723c: 0x3e00008
    ctx->pc = 0x1C723Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C7208u: goto label_1c7208;
            case 0x1C7228u: goto label_1c7228;
            case 0x1C722Cu: goto label_1c722c;
            case 0x1C723Cu: goto label_1c723c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C7244u;
    // 0x1c7244: 0x0
    ctx->pc = 0x1c7244u;
    // NOP
    // 0x1c7248: 0x0
    ctx->pc = 0x1c7248u;
    // NOP
    // 0x1c724c: 0x0
    ctx->pc = 0x1c724cu;
    // NOP
}
