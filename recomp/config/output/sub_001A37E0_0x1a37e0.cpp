#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A37E0
// Address: 0x1a37e0 - 0x1a3840
void sub_001A37E0_0x1a37e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a37e0u;

    // 0x1a37e0: 0x27bdfff0
    ctx->pc = 0x1a37e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a37e4: 0x80602d
    ctx->pc = 0x1a37e4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a37e8: 0xffbf0000
    ctx->pc = 0x1a37e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a37ec: 0xc068da8
    ctx->pc = 0x1A37ECu;
    SET_GPR_U32(ctx, 31, 0x1A37F4u);
    ctx->pc = 0x1A37F0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A36A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A36A0_0x1a36a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37F4u; }
    }
    if (ctx->pc != 0x1A37F4u) { return; }
    ctx->pc = 0x1A37F4u;
    // 0x1a37f4: 0x2403ffff
    ctx->pc = 0x1a37f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a37f8: 0x14430003
    ctx->pc = 0x1A37F8u;
    {
        const bool branch_taken_0x1a37f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1A37FCu;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a37f8) {
            ctx->pc = 0x1A3808u;
            goto label_1a3808;
        }
    }
    ctx->pc = 0x1A3800u;
    // 0x1a3800: 0x1000000b
    ctx->pc = 0x1A3800u;
    {
        const bool branch_taken_0x1a3800 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3804u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3800) {
            ctx->pc = 0x1A3830u;
            goto label_1a3830;
        }
    }
    ctx->pc = 0x1A3808u;
label_1a3808:
    // 0x1a3808: 0x10000005
    ctx->pc = 0x1A3808u;
    {
        const bool branch_taken_0x1a3808 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A380Cu;
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3808) {
            ctx->pc = 0x1A3820u;
            goto label_1a3820;
        }
    }
    ctx->pc = 0x1A3810u;
label_1a3810:
    // 0x1a3810: 0xc068dd8
    ctx->pc = 0x1A3810u;
    SET_GPR_U32(ctx, 31, 0x1A3818u);
    ctx->pc = 0x1A3814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A3760u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3760_0x1a3760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3818u; }
    }
    if (ctx->pc != 0x1A3818u) { return; }
    ctx->pc = 0x1A3818u;
    // 0x1a3818: 0x1224821
    ctx->pc = 0x1a3818u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1a381c: 0x254a0001
    ctx->pc = 0x1a381cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
label_1a3820:
    // 0x1a3820: 0x14b102b
    ctx->pc = 0x1a3820u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1a3824: 0x1440fffa
    ctx->pc = 0x1A3824u;
    {
        const bool branch_taken_0x1a3824 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A3828u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3824) {
            ctx->pc = 0x1A3810u;
            goto label_1a3810;
        }
    }
    ctx->pc = 0x1A382Cu;
    // 0x1a382c: 0x120102d
    ctx->pc = 0x1a382cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1a3830:
    // 0x1a3830: 0xdfbf0000
    ctx->pc = 0x1a3830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3834: 0x3e00008
    ctx->pc = 0x1A3834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3838u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3808u: goto label_1a3808;
            case 0x1A3810u: goto label_1a3810;
            case 0x1A3820u: goto label_1a3820;
            case 0x1A3830u: goto label_1a3830;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A383Cu;
    // 0x1a383c: 0x0
    ctx->pc = 0x1a383cu;
    // NOP
}
