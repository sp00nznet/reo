#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00377BE0
// Address: 0x377be0 - 0x377c20
void sub_00377BE0_0x377be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x377be0u;

    // 0x377be0: 0x282d
    ctx->pc = 0x377be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377be4: 0x3c040057
    ctx->pc = 0x377be4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)87 << 16));
    // 0x377be8: 0x2484af10
    ctx->pc = 0x377be8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946576));
    // 0x377bec: 0x51840
    ctx->pc = 0x377becu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
label_377bf0:
    // 0x377bf0: 0x831821
    ctx->pc = 0x377bf0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x377bf4: 0xa0600000
    ctx->pc = 0x377bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x377bf8: 0xa0650001
    ctx->pc = 0x377bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x377bfc: 0x24a50001
    ctx->pc = 0x377bfcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x377c00: 0x28a30014
    ctx->pc = 0x377c00u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 20));
    // 0x377c04: 0x1460fffa
    ctx->pc = 0x377C04u;
    {
        const bool branch_taken_0x377c04 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x377C08u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x377c04) {
            ctx->pc = 0x377BF0u;
            goto label_377bf0;
        }
    }
    ctx->pc = 0x377C0Cu;
    // 0x377c0c: 0x3e00008
    ctx->pc = 0x377C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x377BF0u: goto label_377bf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x377C14u;
    // 0x377c14: 0x0
    ctx->pc = 0x377c14u;
    // NOP
    // 0x377c18: 0x0
    ctx->pc = 0x377c18u;
    // NOP
    // 0x377c1c: 0x0
    ctx->pc = 0x377c1cu;
    // NOP
}
