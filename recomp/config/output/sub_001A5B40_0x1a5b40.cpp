#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A5B40
// Address: 0x1a5b40 - 0x1a5bd0
void sub_001A5B40_0x1a5b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a5b40u;

    // 0x1a5b40: 0xa4082b
    ctx->pc = 0x1a5b40u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a5b44: 0x10200013
    ctx->pc = 0x1A5B44u;
    {
        const bool branch_taken_0x1a5b44 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5B48u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a5b44) {
            ctx->pc = 0x1A5B94u;
            goto label_1a5b94;
        }
    }
    ctx->pc = 0x1A5B4Cu;
    // 0x1a5b4c: 0xa61821
    ctx->pc = 0x1a5b4cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a5b50: 0x83082b
    ctx->pc = 0x1a5b50u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a5b54: 0x1020000f
    ctx->pc = 0x1A5B54u;
    {
        const bool branch_taken_0x1a5b54 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5B58u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 4294967295));
        if (branch_taken_0x1a5b54) {
            ctx->pc = 0x1A5B94u;
            goto label_1a5b94;
        }
    }
    ctx->pc = 0x1A5B5Cu;
    // 0x1a5b5c: 0x382d
    ctx->pc = 0x1a5b5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5b60: 0x832021
    ctx->pc = 0x1a5b60u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a5b64: 0x10000006
    ctx->pc = 0x1A5B64u;
    {
        const bool branch_taken_0x1a5b64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5B68u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        if (branch_taken_0x1a5b64) {
            ctx->pc = 0x1A5B80u;
            goto label_1a5b80;
        }
    }
    ctx->pc = 0x1A5B6Cu;
label_1a5b6c:
    // 0x1a5b6c: 0x24e70001
    ctx->pc = 0x1a5b6cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a5b70: 0x2465ffff
    ctx->pc = 0x1a5b70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a5b74: 0x80630000
    ctx->pc = 0x1a5b74u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a5b78: 0xa0830000
    ctx->pc = 0x1a5b78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a5b7c: 0x2484ffff
    ctx->pc = 0x1a5b7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
label_1a5b80:
    // 0x1a5b80: 0xe6182a
    ctx->pc = 0x1a5b80u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
    // 0x1a5b84: 0x1460fff9
    ctx->pc = 0x1A5B84u;
    {
        const bool branch_taken_0x1a5b84 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A5B88u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a5b84) {
            ctx->pc = 0x1A5B6Cu;
            goto label_1a5b6c;
        }
    }
    ctx->pc = 0x1A5B8Cu;
    // 0x1a5b8c: 0x1000000b
    ctx->pc = 0x1A5B8Cu;
    {
        const bool branch_taken_0x1a5b8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a5b8c) {
            ctx->pc = 0x1A5BBCu;
            goto label_1a5bbc;
        }
    }
    ctx->pc = 0x1A5B94u;
label_1a5b94:
    // 0x1a5b94: 0x10000007
    ctx->pc = 0x1A5B94u;
    {
        const bool branch_taken_0x1a5b94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5B98u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
        if (branch_taken_0x1a5b94) {
            ctx->pc = 0x1A5BB4u;
            goto label_1a5bb4;
        }
    }
    ctx->pc = 0x1A5B9Cu;
label_1a5b9c:
    // 0x1a5b9c: 0x24e70001
    ctx->pc = 0x1a5b9cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a5ba0: 0x24650001
    ctx->pc = 0x1a5ba0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a5ba4: 0x80630000
    ctx->pc = 0x1a5ba4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a5ba8: 0xa0830000
    ctx->pc = 0x1a5ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a5bac: 0x24840001
    ctx->pc = 0x1a5bacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a5bb0: 0xe6182a
    ctx->pc = 0x1a5bb0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
label_1a5bb4:
    // 0x1a5bb4: 0x1460fff9
    ctx->pc = 0x1A5BB4u;
    {
        const bool branch_taken_0x1a5bb4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A5BB8u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a5bb4) {
            ctx->pc = 0x1A5B9Cu;
            goto label_1a5b9c;
        }
    }
    ctx->pc = 0x1A5BBCu;
label_1a5bbc:
    // 0x1a5bbc: 0x3e00008
    ctx->pc = 0x1A5BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5B6Cu: goto label_1a5b6c;
            case 0x1A5B80u: goto label_1a5b80;
            case 0x1A5B94u: goto label_1a5b94;
            case 0x1A5B9Cu: goto label_1a5b9c;
            case 0x1A5BB4u: goto label_1a5bb4;
            case 0x1A5BBCu: goto label_1a5bbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5BC4u;
    // 0x1a5bc4: 0x0
    ctx->pc = 0x1a5bc4u;
    // NOP
    // 0x1a5bc8: 0x0
    ctx->pc = 0x1a5bc8u;
    // NOP
    // 0x1a5bcc: 0x0
    ctx->pc = 0x1a5bccu;
    // NOP
}
