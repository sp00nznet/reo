#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A36E0
// Address: 0x1a36e0 - 0x1a3760
void sub_001A36E0_0x1a36e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a36e0u;

    // 0x1a36e0: 0x27bdfff0
    ctx->pc = 0x1a36e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a36e4: 0xa0402d
    ctx->pc = 0x1a36e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a36e8: 0xffbf0000
    ctx->pc = 0x1a36e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a36ec: 0x24050005
    ctx->pc = 0x1a36ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a36f0: 0xc068d7c
    ctx->pc = 0x1A36F0u;
    SET_GPR_U32(ctx, 31, 0x1A36F8u);
    ctx->pc = 0x1A36F4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A35F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35F0_0x1a35f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A36F8u; }
    }
    if (ctx->pc != 0x1A36F8u) { return; }
    ctx->pc = 0x1A36F8u;
    // 0x1a36f8: 0x14400003
    ctx->pc = 0x1A36F8u;
    {
        const bool branch_taken_0x1a36f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a36f8) {
            ctx->pc = 0x1A3708u;
            goto label_1a3708;
        }
    }
    ctx->pc = 0x1A3700u;
    // 0x1a3700: 0x10000012
    ctx->pc = 0x1A3700u;
    {
        const bool branch_taken_0x1a3700 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3704u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a3700) {
            ctx->pc = 0x1A374Cu;
            goto label_1a374c;
        }
    }
    ctx->pc = 0x1A3708u;
label_1a3708:
    // 0x1a3708: 0x8c430004
    ctx->pc = 0x1a3708u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a370c: 0x103082b
    ctx->pc = 0x1a370cu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1a3710: 0x14200003
    ctx->pc = 0x1A3710u;
    {
        const bool branch_taken_0x1a3710 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a3710) {
            ctx->pc = 0x1A3720u;
            goto label_1a3720;
        }
    }
    ctx->pc = 0x1A3718u;
    // 0x1a3718: 0x1000000c
    ctx->pc = 0x1A3718u;
    {
        const bool branch_taken_0x1a3718 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A371Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a3718) {
            ctx->pc = 0x1A374Cu;
            goto label_1a374c;
        }
    }
    ctx->pc = 0x1A3720u;
label_1a3720:
    // 0x1a3720: 0x2442000c
    ctx->pc = 0x1a3720u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
    // 0x1a3724: 0x10000004
    ctx->pc = 0x1A3724u;
    {
        const bool branch_taken_0x1a3724 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3728u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3724) {
            ctx->pc = 0x1A3738u;
            goto label_1a3738;
        }
    }
    ctx->pc = 0x1A372Cu;
label_1a372c:
    // 0x1a372c: 0x8c430008
    ctx->pc = 0x1a372cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a3730: 0x24840001
    ctx->pc = 0x1a3730u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a3734: 0x431021
    ctx->pc = 0x1a3734u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a3738:
    // 0x1a3738: 0x88182a
    ctx->pc = 0x1a3738u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 8)));
    // 0x1a373c: 0x0
    ctx->pc = 0x1a373cu;
    // NOP
    // 0x1a3740: 0x1460fffa
    ctx->pc = 0x1A3740u;
    {
        const bool branch_taken_0x1a3740 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a3740) {
            ctx->pc = 0x1A372Cu;
            goto label_1a372c;
        }
    }
    ctx->pc = 0x1A3748u;
    // 0x1a3748: 0x8c420000
    ctx->pc = 0x1a3748u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a374c:
    // 0x1a374c: 0xdfbf0000
    ctx->pc = 0x1a374cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3750: 0x3e00008
    ctx->pc = 0x1A3750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3754u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3708u: goto label_1a3708;
            case 0x1A3720u: goto label_1a3720;
            case 0x1A372Cu: goto label_1a372c;
            case 0x1A3738u: goto label_1a3738;
            case 0x1A374Cu: goto label_1a374c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A3758u;
    // 0x1a3758: 0x0
    ctx->pc = 0x1a3758u;
    // NOP
    // 0x1a375c: 0x0
    ctx->pc = 0x1a375cu;
    // NOP
}
