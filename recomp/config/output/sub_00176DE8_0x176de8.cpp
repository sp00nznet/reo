#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00176DE8
// Address: 0x176de8 - 0x176e28
void sub_00176DE8_0x176de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x176de8u;

    // 0x176de8: 0x8c820920
    ctx->pc = 0x176de8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 2336)));
    // 0x176dec: 0x14400006
    ctx->pc = 0x176DECu;
    {
        const bool branch_taken_0x176dec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x176DF0u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x176dec) {
            ctx->pc = 0x176E08u;
            goto label_176e08;
        }
    }
    ctx->pc = 0x176DF4u;
    // 0x176df4: 0x24027512
    ctx->pc = 0x176df4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29970));
    // 0x176df8: 0xaca00000
    ctx->pc = 0x176df8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x176dfc: 0x3e00008
    ctx->pc = 0x176DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176E00u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176E08u: goto label_176e08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x176E04u;
    // 0x176e04: 0x0
    ctx->pc = 0x176e04u;
    // NOP
label_176e08:
    // 0x176e08: 0x3c010024
    ctx->pc = 0x176e08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x176e0c: 0x230821
    ctx->pc = 0x176e0cu;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x176e10: 0x8c230af0
    ctx->pc = 0x176e10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 2800)));
    // 0x176e14: 0x240203e8
    ctx->pc = 0x176e14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1000));
    // 0x176e18: 0xaca20000
    ctx->pc = 0x176e18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x176e1c: 0x3e00008
    ctx->pc = 0x176E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176E20u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176E08u: goto label_176e08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x176E24u;
    // 0x176e24: 0x0
    ctx->pc = 0x176e24u;
    // NOP
}
