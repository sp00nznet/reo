#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017A5D8
// Address: 0x17a5d8 - 0x17a620
void sub_0017A5D8_0x17a5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17a5d8u;

    // 0x17a5d8: 0x80282d
    ctx->pc = 0x17a5d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a5dc: 0x240200c0
    ctx->pc = 0x17a5dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 192));
    // 0x17a5e0: 0x24a3ff40
    ctx->pc = 0x17a5e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 4294967104));
    // 0x17a5e4: 0x24a4ff20
    ctx->pc = 0x17a5e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 4294967072));
    // 0x17a5e8: 0x2c630020
    ctx->pc = 0x17a5e8u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), 32));
    // 0x17a5ec: 0x14600009
    ctx->pc = 0x17A5ECu;
    {
        const bool branch_taken_0x17a5ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x17A5F0u;
        SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 4), 16));
        if (branch_taken_0x17a5ec) {
            ctx->pc = 0x17A614u;
            goto label_17a614;
        }
    }
    ctx->pc = 0x17A5F4u;
    // 0x17a5f4: 0x14800007
    ctx->pc = 0x17A5F4u;
    {
        const bool branch_taken_0x17a5f4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x17A5F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 224));
        if (branch_taken_0x17a5f4) {
            ctx->pc = 0x17A614u;
            goto label_17a614;
        }
    }
    ctx->pc = 0x17A5FCu;
    // 0x17a5fc: 0x240200bd
    ctx->pc = 0x17a5fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 189));
    // 0x17a600: 0x10a20004
    ctx->pc = 0x17A600u;
    {
        const bool branch_taken_0x17a600 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x17A604u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 191));
        if (branch_taken_0x17a600) {
            ctx->pc = 0x17A614u;
            goto label_17a614;
        }
    }
    ctx->pc = 0x17A608u;
    // 0x17a608: 0x14a30002
    ctx->pc = 0x17A608u;
    {
        const bool branch_taken_0x17a608 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        ctx->pc = 0x17A60Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17a608) {
            ctx->pc = 0x17A614u;
            goto label_17a614;
        }
    }
    ctx->pc = 0x17A610u;
    // 0x17a610: 0x240200bd
    ctx->pc = 0x17a610u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 189));
label_17a614:
    // 0x17a614: 0x3e00008
    ctx->pc = 0x17A614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A614u: goto label_17a614;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A61Cu;
    // 0x17a61c: 0x0
    ctx->pc = 0x17a61cu;
    // NOP
}
