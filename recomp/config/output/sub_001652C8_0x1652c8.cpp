#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001652C8
// Address: 0x1652c8 - 0x165318
void sub_001652C8_0x1652c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1652c8u;

    // 0x1652c8: 0x27bdffe0
    ctx->pc = 0x1652c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1652cc: 0xffb00000
    ctx->pc = 0x1652ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1652d0: 0xa0802d
    ctx->pc = 0x1652d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1652d4: 0xffb10008
    ctx->pc = 0x1652d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1652d8: 0xffbf0010
    ctx->pc = 0x1652d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1652dc: 0xc05984a
    ctx->pc = 0x1652DCu;
    SET_GPR_U32(ctx, 31, 0x1652E4u);
    ctx->pc = 0x1652E0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x166128u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166128_0x166128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1652E4u; }
    }
    if (ctx->pc != 0x1652E4u) { return; }
    ctx->pc = 0x1652E4u;
    // 0x1652e4: 0x40182d
    ctx->pc = 0x1652e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1652e8: 0x10600006
    ctx->pc = 0x1652E8u;
    {
        const bool branch_taken_0x1652e8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1652ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1652e8) {
            ctx->pc = 0x165304u;
            goto label_165304;
        }
    }
    ctx->pc = 0x1652F0u;
    // 0x1652f0: 0x8c64000c
    ctx->pc = 0x1652f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1652f4: 0x102d
    ctx->pc = 0x1652f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1652f8: 0xae040000
    ctx->pc = 0x1652f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1652fc: 0x8c630010
    ctx->pc = 0x1652fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x165300: 0xae230000
    ctx->pc = 0x165300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_165304:
    // 0x165304: 0xdfb00000
    ctx->pc = 0x165304u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165308: 0xdfb10008
    ctx->pc = 0x165308u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16530c: 0xdfbf0010
    ctx->pc = 0x16530cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165310: 0x3e00008
    ctx->pc = 0x165310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165314u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x165304u: goto label_165304;
            default: break;
        }
        return;
    }
    ctx->pc = 0x165318u;
}
