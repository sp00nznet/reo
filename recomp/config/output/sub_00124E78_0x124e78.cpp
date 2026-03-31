#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00124E78
// Address: 0x124e78 - 0x124ef8
void sub_00124E78_0x124e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124e78u;

    // 0x124e78: 0x3e00008
    ctx->pc = 0x124E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124E7Cu;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124EC0u: goto label_124ec0;
            case 0x124EE0u: goto label_124ee0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x124E80u;
    // 0x124e80: 0x3e00008
    ctx->pc = 0x124E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124E84u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124EC0u: goto label_124ec0;
            case 0x124EE0u: goto label_124ee0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x124E88u;
    // 0x124e88: 0x84850098
    ctx->pc = 0x124e88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x124e8c: 0x10a00014
    ctx->pc = 0x124E8Cu;
    {
        const bool branch_taken_0x124e8c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x124E90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x124e8c) {
            ctx->pc = 0x124EE0u;
            goto label_124ee0;
        }
    }
    ctx->pc = 0x124E94u;
    // 0x124e94: 0x24020002
    ctx->pc = 0x124e94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x124e98: 0x14a20009
    ctx->pc = 0x124E98u;
    {
        const bool branch_taken_0x124e98 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x124E9Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x124e98) {
            ctx->pc = 0x124EC0u;
            goto label_124ec0;
        }
    }
    ctx->pc = 0x124EA0u;
    // 0x124ea0: 0x8483009a
    ctx->pc = 0x124ea0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 154)));
    // 0x124ea4: 0x24020004
    ctx->pc = 0x124ea4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x124ea8: 0x1065000d
    ctx->pc = 0x124EA8u;
    {
        const bool branch_taken_0x124ea8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        ctx->pc = 0x124EACu;
        SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x124ea8) {
            ctx->pc = 0x124EE0u;
            goto label_124ee0;
        }
    }
    ctx->pc = 0x124EB0u;
    // 0x124eb0: 0x24030010
    ctx->pc = 0x124eb0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x124eb4: 0x24020008
    ctx->pc = 0x124eb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x124eb8: 0x3e00008
    ctx->pc = 0x124EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124EBCu;
        if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124EC0u: goto label_124ec0;
            case 0x124EE0u: goto label_124ee0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x124EC0u;
label_124ec0:
    // 0x124ec0: 0x54a20007
    ctx->pc = 0x124EC0u;
    {
        const bool branch_taken_0x124ec0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x124ec0) {
            ctx->pc = 0x124EC4u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
            ctx->pc = 0x124EE0u;
            goto label_124ee0;
        }
    }
    ctx->pc = 0x124EC8u;
    // 0x124ec8: 0x8483009a
    ctx->pc = 0x124ec8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 154)));
    // 0x124ecc: 0x24040010
    ctx->pc = 0x124eccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
    // 0x124ed0: 0x24020004
    ctx->pc = 0x124ed0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x124ed4: 0x38630002
    ctx->pc = 0x124ed4u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 2));
    // 0x124ed8: 0x3e00008
    ctx->pc = 0x124ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124EDCu;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124EC0u: goto label_124ec0;
            case 0x124EE0u: goto label_124ee0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x124EE0u;
label_124ee0:
    // 0x124ee0: 0x3e00008
    ctx->pc = 0x124EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124EC0u: goto label_124ec0;
            case 0x124EE0u: goto label_124ee0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x124EE8u;
    // 0x124ee8: 0x3e00008
    ctx->pc = 0x124EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124EECu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124EC0u: goto label_124ec0;
            case 0x124EE0u: goto label_124ee0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x124EF0u;
    // 0x124ef0: 0x3e00008
    ctx->pc = 0x124EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124EF4u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124EC0u: goto label_124ec0;
            case 0x124EE0u: goto label_124ee0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x124EF8u;
}
