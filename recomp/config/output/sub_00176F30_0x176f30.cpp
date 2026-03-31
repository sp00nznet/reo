#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00176F30
// Address: 0x176f30 - 0x176f68
void sub_00176F30_0x176f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x176f30u;

    // 0x176f30: 0x27bdfff0
    ctx->pc = 0x176f30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x176f34: 0x102d
    ctx->pc = 0x176f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f38: 0x10a00007
    ctx->pc = 0x176F38u;
    {
        const bool branch_taken_0x176f38 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x176F3Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x176f38) {
            ctx->pc = 0x176F58u;
            goto label_176f58;
        }
    }
    ctx->pc = 0x176F40u;
    // 0x176f40: 0x8ca60018
    ctx->pc = 0x176f40u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x176f44: 0xdfbf0000
    ctx->pc = 0x176f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176f48: 0x8ca50014
    ctx->pc = 0x176f48u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x176f4c: 0x805dbda
    ctx->pc = 0x176F4Cu;
    ctx->pc = 0x176F50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x176F68u;
    sub_00176F68_0x176f68(rdram, ctx, runtime); return;
    ctx->pc = 0x176F54u;
    // 0x176f54: 0x0
    ctx->pc = 0x176f54u;
    // NOP
label_176f58:
    // 0x176f58: 0xdfbf0000
    ctx->pc = 0x176f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176f5c: 0x3e00008
    ctx->pc = 0x176F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176F60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176F58u: goto label_176f58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x176F64u;
    // 0x176f64: 0x0
    ctx->pc = 0x176f64u;
    // NOP
}
