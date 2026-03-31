#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00187AD0
// Address: 0x187ad0 - 0x187b18
void sub_00187AD0_0x187ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x187ad0u;

    // 0x187ad0: 0x3c020029
    ctx->pc = 0x187ad0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x187ad4: 0x282d
    ctx->pc = 0x187ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ad8: 0x2446b8c8
    ctx->pc = 0x187ad8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294949064));
    // 0x187adc: 0x0
    ctx->pc = 0x187adcu;
    // NOP
label_187ae0:
    // 0x187ae0: 0x8cc20000
    ctx->pc = 0x187ae0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x187ae4: 0x50400005
    ctx->pc = 0x187AE4u;
    {
        const bool branch_taken_0x187ae4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x187ae4) {
            ctx->pc = 0x187AE8u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x187AFCu;
            goto label_187afc;
        }
    }
    ctx->pc = 0x187AECu;
    // 0x187aec: 0x8cc30004
    ctx->pc = 0x187aecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x187af0: 0x10640007
    ctx->pc = 0x187AF0u;
    {
        const bool branch_taken_0x187af0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x187AF4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x187af0) {
            ctx->pc = 0x187B10u;
            goto label_187b10;
        }
    }
    ctx->pc = 0x187AF8u;
    // 0x187af8: 0x24a50001
    ctx->pc = 0x187af8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_187afc:
    // 0x187afc: 0x28a20002
    ctx->pc = 0x187afcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 2));
    // 0x187b00: 0x0
    ctx->pc = 0x187b00u;
    // NOP
    // 0x187b04: 0x1440fff6
    ctx->pc = 0x187B04u;
    {
        const bool branch_taken_0x187b04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x187B08u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 28));
        if (branch_taken_0x187b04) {
            ctx->pc = 0x187AE0u;
            goto label_187ae0;
        }
    }
    ctx->pc = 0x187B0Cu;
    // 0x187b0c: 0x2402ffff
    ctx->pc = 0x187b0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_187b10:
    // 0x187b10: 0x3e00008
    ctx->pc = 0x187B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187AE0u: goto label_187ae0;
            case 0x187AFCu: goto label_187afc;
            case 0x187B10u: goto label_187b10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187B18u;
}
