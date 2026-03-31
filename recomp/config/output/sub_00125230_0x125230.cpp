#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00125230
// Address: 0x125230 - 0x125248
void sub_00125230_0x125230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125230u;

    // 0x125230: 0x8c820004
    ctx->pc = 0x125230u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x125234: 0x14400002
    ctx->pc = 0x125234u;
    {
        const bool branch_taken_0x125234 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x125238u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x125234) {
            ctx->pc = 0x125240u;
            goto label_125240;
        }
    }
    ctx->pc = 0x12523Cu;
    // 0x12523c: 0xac820004
    ctx->pc = 0x12523cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_125240:
    // 0x125240: 0x3e00008
    ctx->pc = 0x125240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125240u: goto label_125240;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125248u;
}
