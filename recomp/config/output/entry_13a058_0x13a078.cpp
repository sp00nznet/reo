#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13a058
// Address: 0x13a058 - 0x13a078
void entry_13a058_0x13a078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13a058u;

    // 0x13a058: 0x3c020022
    ctx->pc = 0x13a058u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13a05c: 0x2c830002
    ctx->pc = 0x13a05cu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 4), 2));
    // 0x13a060: 0x2442cbec
    ctx->pc = 0x13a060u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953964));
    // 0x13a064: 0x14600002
    ctx->pc = 0x13A064u;
    {
        const bool branch_taken_0x13a064 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x13A068u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x13a064) {
            ctx->pc = 0x13A070u;
            goto label_13a070;
        }
    }
    ctx->pc = 0x13A06Cu;
    // 0x13a06c: 0xac400000
    ctx->pc = 0x13a06cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_13a070:
    // 0x13a070: 0x3e00008
    ctx->pc = 0x13A070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13A070u: goto label_13a070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13A078u;
}
