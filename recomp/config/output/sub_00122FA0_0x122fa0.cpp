#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00122FA0
// Address: 0x122fa0 - 0x122ff0
void sub_00122FA0_0x122fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x122fa0u;

    // 0x122fa0: 0x80282d
    ctx->pc = 0x122fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122fa4: 0x2403000b
    ctx->pc = 0x122fa4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11));
    // 0x122fa8: 0x90a20000
    ctx->pc = 0x122fa8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x122fac: 0x54430006
    ctx->pc = 0x122FACu;
    {
        const bool branch_taken_0x122fac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x122fac) {
            ctx->pc = 0x122FB0u;
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->pc = 0x122FC8u;
            goto label_122fc8;
        }
    }
    ctx->pc = 0x122FB4u;
    // 0x122fb4: 0x90a40001
    ctx->pc = 0x122fb4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x122fb8: 0x24030077
    ctx->pc = 0x122fb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 119));
    // 0x122fbc: 0x1083000a
    ctx->pc = 0x122FBCu;
    {
        const bool branch_taken_0x122fbc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x122FC0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x122fbc) {
            ctx->pc = 0x122FE8u;
            goto label_122fe8;
        }
    }
    ctx->pc = 0x122FC4u;
    // 0x122fc4: 0x90a30010
    ctx->pc = 0x122fc4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_122fc8:
    // 0x122fc8: 0x2402000b
    ctx->pc = 0x122fc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x122fcc: 0x14620006
    ctx->pc = 0x122FCCu;
    {
        const bool branch_taken_0x122fcc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x122FD0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x122fcc) {
            ctx->pc = 0x122FE8u;
            goto label_122fe8;
        }
    }
    ctx->pc = 0x122FD4u;
    // 0x122fd4: 0x90a40011
    ctx->pc = 0x122fd4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
    // 0x122fd8: 0x24030077
    ctx->pc = 0x122fd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 119));
    // 0x122fdc: 0x10830002
    ctx->pc = 0x122FDCu;
    {
        const bool branch_taken_0x122fdc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x122FE0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x122fdc) {
            ctx->pc = 0x122FE8u;
            goto label_122fe8;
        }
    }
    ctx->pc = 0x122FE4u;
    // 0x122fe4: 0x102d
    ctx->pc = 0x122fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122fe8:
    // 0x122fe8: 0x3e00008
    ctx->pc = 0x122FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122FC8u: goto label_122fc8;
            case 0x122FE8u: goto label_122fe8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122FF0u;
}
