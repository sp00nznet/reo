#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A8500
// Address: 0x1a8500 - 0x1a85a0
void sub_001A8500_0x1a8500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a8500u;

    // 0x1a8500: 0x27bdfff0
    ctx->pc = 0x1a8500u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a8504: 0xa6082a
    ctx->pc = 0x1a8504u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x1a8508: 0x10200004
    ctx->pc = 0x1A8508u;
    {
        const bool branch_taken_0x1a8508 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A850Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1a8508) {
            ctx->pc = 0x1A851Cu;
            goto label_1a851c;
        }
    }
    ctx->pc = 0x1A8510u;
    // 0x1a8510: 0x28a10005
    ctx->pc = 0x1a8510u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), 5));
    // 0x1a8514: 0x14200006
    ctx->pc = 0x1A8514u;
    {
        const bool branch_taken_0x1a8514 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A8518u;
        SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
        if (branch_taken_0x1a8514) {
            ctx->pc = 0x1A8530u;
            goto label_1a8530;
        }
    }
    ctx->pc = 0x1A851Cu;
label_1a851c:
    // 0x1a851c: 0x3c040024
    ctx->pc = 0x1a851cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1a8520: 0xc0423b4
    ctx->pc = 0x1A8520u;
    SET_GPR_U32(ctx, 31, 0x1A8528u);
    ctx->pc = 0x1A8524u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9488));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8528u; }
    }
    if (ctx->pc != 0x1A8528u) { return; }
    ctx->pc = 0x1A8528u;
    // 0x1a8528: 0x10000019
    ctx->pc = 0x1A8528u;
    {
        const bool branch_taken_0x1a8528 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A852Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a8528) {
            ctx->pc = 0x1A8590u;
            goto label_1a8590;
        }
    }
    ctx->pc = 0x1A8530u;
label_1a8530:
    // 0x1a8530: 0x8c220a60
    ctx->pc = 0x1a8530u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2656)));
    // 0x1a8534: 0x461021
    ctx->pc = 0x1a8534u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a8538: 0x28420200
    ctx->pc = 0x1a8538u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 512));
    // 0x1a853c: 0x14400003
    ctx->pc = 0x1A853Cu;
    {
        const bool branch_taken_0x1a853c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A8540u;
        SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
        if (branch_taken_0x1a853c) {
            ctx->pc = 0x1A854Cu;
            goto label_1a854c;
        }
    }
    ctx->pc = 0x1A8544u;
    // 0x1a8544: 0x10000012
    ctx->pc = 0x1A8544u;
    {
        const bool branch_taken_0x1a8544 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8548u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a8544) {
            ctx->pc = 0x1A8590u;
            goto label_1a8590;
        }
    }
    ctx->pc = 0x1A854Cu;
label_1a854c:
    // 0x1a854c: 0x24070018
    ctx->pc = 0x1a854cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 24));
    // 0x1a8550: 0x1000000c
    ctx->pc = 0x1A8550u;
    {
        const bool branch_taken_0x1a8550 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8554u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3264));
        if (branch_taken_0x1a8550) {
            ctx->pc = 0x1A8584u;
            goto label_1a8584;
        }
    }
    ctx->pc = 0x1A8558u;
label_1a8558:
    // 0x1a8558: 0xe43006
    ctx->pc = 0x1a8558u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x1a855c: 0x8c220a60
    ctx->pc = 0x1a855cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2656)));
    // 0x1a8560: 0x24e7fff8
    ctx->pc = 0x1a8560u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x1a8564: 0x24a5ffff
    ctx->pc = 0x1a8564u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1a8568: 0x621021
    ctx->pc = 0x1a8568u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a856c: 0x3c01002b
    ctx->pc = 0x1a856cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a8570: 0xa0460000
    ctx->pc = 0x1a8570u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a8574: 0x8c220a60
    ctx->pc = 0x1a8574u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2656)));
    // 0x1a8578: 0x24420001
    ctx->pc = 0x1a8578u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a857c: 0x3c01002b
    ctx->pc = 0x1a857cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a8580: 0xac220a60
    ctx->pc = 0x1a8580u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2656), GPR_U32(ctx, 2));
label_1a8584:
    // 0x1a8584: 0x1ca0fff4
    ctx->pc = 0x1A8584u;
    {
        const bool branch_taken_0x1a8584 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1A8588u;
        SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
        if (branch_taken_0x1a8584) {
            ctx->pc = 0x1A8558u;
            goto label_1a8558;
        }
    }
    ctx->pc = 0x1A858Cu;
    // 0x1a858c: 0x102d
    ctx->pc = 0x1a858cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8590:
    // 0x1a8590: 0xdfbf0000
    ctx->pc = 0x1a8590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8594: 0x3e00008
    ctx->pc = 0x1A8594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8598u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A851Cu: goto label_1a851c;
            case 0x1A8530u: goto label_1a8530;
            case 0x1A854Cu: goto label_1a854c;
            case 0x1A8558u: goto label_1a8558;
            case 0x1A8584u: goto label_1a8584;
            case 0x1A8590u: goto label_1a8590;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A859Cu;
    // 0x1a859c: 0x0
    ctx->pc = 0x1a859cu;
    // NOP
}
