#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018C730
// Address: 0x18c730 - 0x18c790
void sub_0018C730_0x18c730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18c730u;

    // 0x18c730: 0x3c037000
    ctx->pc = 0x18c730u;
    SET_GPR_U32(ctx, 3, ((uint32_t)28672 << 16));
    // 0x18c734: 0x6493c
    ctx->pc = 0x18c734u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 4));
    // 0x18c738: 0xc31024
    ctx->pc = 0x18c738u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x18c73c: 0x9493e
    ctx->pc = 0x18c73cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 4));
    // 0x18c740: 0x14430002
    ctx->pc = 0x18C740u;
    {
        const bool branch_taken_0x18c740 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x18C744u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18c740) {
            ctx->pc = 0x18C74Cu;
            goto label_18c74c;
        }
    }
    ctx->pc = 0x18C748u;
    // 0x18c748: 0x3c088000
    ctx->pc = 0x18c748u;
    SET_GPR_U32(ctx, 8, ((uint32_t)32768 << 16));
label_18c74c:
    // 0x18c74c: 0x3c065000
    ctx->pc = 0x18c74cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)20480 << 16));
    // 0x18c750: 0x7c800000
    ctx->pc = 0x18c750u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x18c754: 0xa62821
    ctx->pc = 0x18c754u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x18c758: 0x1281825
    ctx->pc = 0x18c758u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x18c75c: 0xac850000
    ctx->pc = 0x18c75cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x18c760: 0x24020001
    ctx->pc = 0x18c760u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c764: 0x14e20005
    ctx->pc = 0x18C764u;
    {
        const bool branch_taken_0x18c764 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x18C768u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x18c764) {
            ctx->pc = 0x18C77Cu;
            goto label_18c77c;
        }
    }
    ctx->pc = 0x18C76Cu;
    // 0x18c76c: 0x8c830000
    ctx->pc = 0x18c76cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18c770: 0x3c028000
    ctx->pc = 0x18c770u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x18c774: 0x621025
    ctx->pc = 0x18c774u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18c778: 0xac820000
    ctx->pc = 0x18c778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_18c77c:
    // 0x18c77c: 0x3e00008
    ctx->pc = 0x18C77Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C780u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18C74Cu: goto label_18c74c;
            case 0x18C77Cu: goto label_18c77c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18C784u;
    // 0x18c784: 0x0
    ctx->pc = 0x18c784u;
    // NOP
    // 0x18c788: 0x0
    ctx->pc = 0x18c788u;
    // NOP
    // 0x18c78c: 0x0
    ctx->pc = 0x18c78cu;
    // NOP
}
