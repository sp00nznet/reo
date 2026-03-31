#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A3500
// Address: 0x1a3500 - 0x1a3590
void sub_001A3500_0x1a3500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a3500u;

    // 0x1a3500: 0x27bdffe0
    ctx->pc = 0x1a3500u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a3504: 0xffbf0010
    ctx->pc = 0x1a3504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a3508: 0x7fb00000
    ctx->pc = 0x1a3508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a350c: 0xc068c84
    ctx->pc = 0x1A350Cu;
    SET_GPR_U32(ctx, 31, 0x1A3514u);
    ctx->pc = 0x1A3510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A3210u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3210_0x1a3210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3514u; }
    }
    if (ctx->pc != 0x1A3514u) { return; }
    ctx->pc = 0x1A3514u;
    // 0x1a3514: 0x14400003
    ctx->pc = 0x1A3514u;
    {
        const bool branch_taken_0x1a3514 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A3518u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3514) {
            ctx->pc = 0x1A3524u;
            goto label_1a3524;
        }
    }
    ctx->pc = 0x1A351Cu;
    // 0x1a351c: 0x10000015
    ctx->pc = 0x1A351Cu;
    {
        const bool branch_taken_0x1a351c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3520u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a351c) {
            ctx->pc = 0x1A3574u;
            goto label_1a3574;
        }
    }
    ctx->pc = 0x1A3524u;
label_1a3524:
    // 0x1a3524: 0x3c050005
    ctx->pc = 0x1a3524u;
    SET_GPR_U32(ctx, 5, ((uint32_t)5 << 16));
    // 0x1a3528: 0xc068d7c
    ctx->pc = 0x1A3528u;
    SET_GPR_U32(ctx, 31, 0x1A3530u);
    ctx->pc = 0x1A352Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A35F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35F0_0x1a35f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3530u; }
    }
    if (ctx->pc != 0x1A3530u) { return; }
    ctx->pc = 0x1A3530u;
    // 0x1a3530: 0x14400003
    ctx->pc = 0x1A3530u;
    {
        const bool branch_taken_0x1a3530 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a3530) {
            ctx->pc = 0x1A3540u;
            goto label_1a3540;
        }
    }
    ctx->pc = 0x1A3538u;
    // 0x1a3538: 0x1000000e
    ctx->pc = 0x1A3538u;
    {
        const bool branch_taken_0x1a3538 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A353Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3538) {
            ctx->pc = 0x1A3574u;
            goto label_1a3574;
        }
    }
    ctx->pc = 0x1A3540u;
label_1a3540:
    // 0x1a3540: 0x8c450004
    ctx->pc = 0x1a3540u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a3544: 0x2444000c
    ctx->pc = 0x1a3544u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 12));
    // 0x1a3548: 0x10000007
    ctx->pc = 0x1A3548u;
    {
        const bool branch_taken_0x1a3548 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A354Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3548) {
            ctx->pc = 0x1A3568u;
            goto label_1a3568;
        }
    }
    ctx->pc = 0x1A3550u;
label_1a3550:
    // 0x1a3550: 0x8c830000
    ctx->pc = 0x1a3550u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a3554: 0x61080
    ctx->pc = 0x1a3554u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a3558: 0x2021021
    ctx->pc = 0x1a3558u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a355c: 0x24c60001
    ctx->pc = 0x1a355cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a3560: 0xac430000
    ctx->pc = 0x1a3560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a3564: 0x24840004
    ctx->pc = 0x1a3564u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
label_1a3568:
    // 0x1a3568: 0xc5102b
    ctx->pc = 0x1a3568u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1a356c: 0x1440fff8
    ctx->pc = 0x1A356Cu;
    {
        const bool branch_taken_0x1a356c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A3570u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1a356c) {
            ctx->pc = 0x1A3550u;
            goto label_1a3550;
        }
    }
    ctx->pc = 0x1A3574u;
label_1a3574:
    // 0x1a3574: 0xdfbf0010
    ctx->pc = 0x1a3574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3578: 0x7bb00000
    ctx->pc = 0x1a3578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a357c: 0x3e00008
    ctx->pc = 0x1A357Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3580u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3524u: goto label_1a3524;
            case 0x1A3540u: goto label_1a3540;
            case 0x1A3550u: goto label_1a3550;
            case 0x1A3568u: goto label_1a3568;
            case 0x1A3574u: goto label_1a3574;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A3584u;
    // 0x1a3584: 0x0
    ctx->pc = 0x1a3584u;
    // NOP
    // 0x1a3588: 0x0
    ctx->pc = 0x1a3588u;
    // NOP
    // 0x1a358c: 0x0
    ctx->pc = 0x1a358cu;
    // NOP
}
