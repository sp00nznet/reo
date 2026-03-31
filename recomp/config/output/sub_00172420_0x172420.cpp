#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00172420
// Address: 0x172420 - 0x172480
void sub_00172420_0x172420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x172420u;

    // 0x172420: 0x27bdfff0
    ctx->pc = 0x172420u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172424: 0xffbf0000
    ctx->pc = 0x172424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172428: 0xdfbf0000
    ctx->pc = 0x172428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17242c: 0x805c90e
    ctx->pc = 0x17242Cu;
    ctx->pc = 0x172430u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x172438u;
    goto label_172438;
    ctx->pc = 0x172434u;
    // 0x172434: 0x0
    ctx->pc = 0x172434u;
    // NOP
label_172438:
    // 0x172438: 0x3c020024
    ctx->pc = 0x172438u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x17243c: 0x3c035a5a
    ctx->pc = 0x17243cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)23130 << 16));
    // 0x172440: 0x8c440a54
    ctx->pc = 0x172440u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 2644)));
    // 0x172444: 0x27bdfff0
    ctx->pc = 0x172444u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172448: 0x34635a5a
    ctx->pc = 0x172448u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 23130));
    // 0x17244c: 0x10830008
    ctx->pc = 0x17244Cu;
    {
        const bool branch_taken_0x17244c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x172450u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x17244c) {
            ctx->pc = 0x172470u;
            goto label_172470;
        }
    }
    ctx->pc = 0x172454u;
    // 0x172454: 0x3c05ff00
    ctx->pc = 0x172454u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x172458: 0xdfbf0000
    ctx->pc = 0x172458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17245c: 0x202d
    ctx->pc = 0x17245cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172460: 0x34a50201
    ctx->pc = 0x172460u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 513));
    // 0x172464: 0x805a704
    ctx->pc = 0x172464u;
    ctx->pc = 0x172468u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x17246Cu;
    // 0x17246c: 0x0
    ctx->pc = 0x17246cu;
    // NOP
label_172470:
    // 0x172470: 0xdfbf0000
    ctx->pc = 0x172470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172474: 0x3e00008
    ctx->pc = 0x172474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172478u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172438u: goto label_172438;
            case 0x172470u: goto label_172470;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17247Cu;
    // 0x17247c: 0x0
    ctx->pc = 0x17247cu;
    // NOP
}
