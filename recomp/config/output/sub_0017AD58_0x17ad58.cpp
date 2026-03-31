#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017AD58
// Address: 0x17ad58 - 0x17ada8
void sub_0017AD58_0x17ad58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17ad58u;

    // 0x17ad58: 0x27bdfff0
    ctx->pc = 0x17ad58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17ad5c: 0x24020001
    ctx->pc = 0x17ad5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ad60: 0xffbf0000
    ctx->pc = 0x17ad60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ad64: 0xc0202d
    ctx->pc = 0x17ad64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad68: 0x100302d
    ctx->pc = 0x17ad68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad6c: 0x8ca30074
    ctx->pc = 0x17ad6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x17ad70: 0x14620007
    ctx->pc = 0x17AD70u;
    {
        const bool branch_taken_0x17ad70 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x17AD74u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17ad70) {
            ctx->pc = 0x17AD90u;
            goto label_17ad90;
        }
    }
    ctx->pc = 0x17AD78u;
    // 0x17ad78: 0x10c00003
    ctx->pc = 0x17AD78u;
    {
        const bool branch_taken_0x17ad78 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x17AD7Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x17ad78) {
            ctx->pc = 0x17AD88u;
            goto label_17ad88;
        }
    }
    ctx->pc = 0x17AD80u;
    // 0x17ad80: 0x805249c
    ctx->pc = 0x17AD80u;
    ctx->pc = 0x17AD84u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x149270u;
    entry_149270_0x149280(rdram, ctx, runtime); return;
    ctx->pc = 0x17AD88u;
label_17ad88:
    // 0x17ad88: 0x805249a
    ctx->pc = 0x17AD88u;
    ctx->pc = 0x17AD8Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x149268u;
    entry_149268_0x149270(rdram, ctx, runtime); return;
    ctx->pc = 0x17AD90u;
label_17ad90:
    // 0x17ad90: 0x10c00003
    ctx->pc = 0x17AD90u;
    {
        const bool branch_taken_0x17ad90 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x17AD94u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x17ad90) {
            ctx->pc = 0x17ADA0u;
            goto label_17ada0;
        }
    }
    ctx->pc = 0x17AD98u;
    // 0x17ad98: 0x805249c
    ctx->pc = 0x17AD98u;
    ctx->pc = 0x17AD9Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x149270u;
    entry_149270_0x149280(rdram, ctx, runtime); return;
    ctx->pc = 0x17ADA0u;
label_17ada0:
    // 0x17ada0: 0x805249a
    ctx->pc = 0x17ADA0u;
    ctx->pc = 0x17ADA4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x149268u;
    entry_149268_0x149270(rdram, ctx, runtime); return;
    ctx->pc = 0x17ADA8u;
}
