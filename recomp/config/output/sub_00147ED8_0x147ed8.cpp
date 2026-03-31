#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00147ED8
// Address: 0x147ed8 - 0x147f30
void sub_00147ED8_0x147ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x147ed8u;

    // 0x147ed8: 0x8c830040
    ctx->pc = 0x147ed8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x147edc: 0x8c6201d0
    ctx->pc = 0x147edcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 464)));
    // 0x147ee0: 0x54400001
    ctx->pc = 0x147EE0u;
    {
        const bool branch_taken_0x147ee0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x147ee0) {
            ctx->pc = 0x147EE4u;
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->pc = 0x147EE8u;
            goto label_147ee8;
        }
    }
    ctx->pc = 0x147EE8u;
label_147ee8:
    // 0x147ee8: 0x8c6201e0
    ctx->pc = 0x147ee8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 480)));
    // 0x147eec: 0x54400001
    ctx->pc = 0x147EECu;
    {
        const bool branch_taken_0x147eec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x147eec) {
            ctx->pc = 0x147EF0u;
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->pc = 0x147EF4u;
            goto label_147ef4;
        }
    }
    ctx->pc = 0x147EF4u;
label_147ef4:
    // 0x147ef4: 0x8c6201f0
    ctx->pc = 0x147ef4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 496)));
    // 0x147ef8: 0x54400001
    ctx->pc = 0x147EF8u;
    {
        const bool branch_taken_0x147ef8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x147ef8) {
            ctx->pc = 0x147EFCu;
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->pc = 0x147F00u;
            goto label_147f00;
        }
    }
    ctx->pc = 0x147F00u;
label_147f00:
    // 0x147f00: 0x8c6201d4
    ctx->pc = 0x147f00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 468)));
    // 0x147f04: 0x54400001
    ctx->pc = 0x147F04u;
    {
        const bool branch_taken_0x147f04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x147f04) {
            ctx->pc = 0x147F08u;
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->pc = 0x147F0Cu;
            goto label_147f0c;
        }
    }
    ctx->pc = 0x147F0Cu;
label_147f0c:
    // 0x147f0c: 0x8c6201e4
    ctx->pc = 0x147f0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 484)));
    // 0x147f10: 0x54400001
    ctx->pc = 0x147F10u;
    {
        const bool branch_taken_0x147f10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x147f10) {
            ctx->pc = 0x147F14u;
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->pc = 0x147F18u;
            goto label_147f18;
        }
    }
    ctx->pc = 0x147F18u;
label_147f18:
    // 0x147f18: 0x8c6201f4
    ctx->pc = 0x147f18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 500)));
    // 0x147f1c: 0x54400001
    ctx->pc = 0x147F1Cu;
    {
        const bool branch_taken_0x147f1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x147f1c) {
            ctx->pc = 0x147F20u;
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->pc = 0x147F24u;
            goto label_147f24;
        }
    }
    ctx->pc = 0x147F24u;
label_147f24:
    // 0x147f24: 0x3e00008
    ctx->pc = 0x147F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147F28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147EE8u: goto label_147ee8;
            case 0x147EF4u: goto label_147ef4;
            case 0x147F00u: goto label_147f00;
            case 0x147F0Cu: goto label_147f0c;
            case 0x147F18u: goto label_147f18;
            case 0x147F24u: goto label_147f24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x147F2Cu;
    // 0x147f2c: 0x0
    ctx->pc = 0x147f2cu;
    // NOP
}
