#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CEE90
// Address: 0x1cee90 - 0x1cef00
void sub_001CEE90_0x1cee90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cee90u;

    // 0x1cee90: 0x308600ff
    ctx->pc = 0x1cee90u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 4), 255));
    // 0x1cee94: 0x3c020034
    ctx->pc = 0x1cee94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1cee98: 0x30a4ffff
    ctx->pc = 0x1cee98u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1cee9c: 0x24421430
    ctx->pc = 0x1cee9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5168));
    // 0x1ceea0: 0x1000000e
    ctx->pc = 0x1CEEA0u;
    {
        const bool branch_taken_0x1ceea0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CEEA4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ceea0) {
            ctx->pc = 0x1CEEDCu;
            goto label_1ceedc;
        }
    }
    ctx->pc = 0x1CEEA8u;
label_1ceea8:
    // 0x1ceea8: 0x90430000
    ctx->pc = 0x1ceea8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ceeac: 0x10600009
    ctx->pc = 0x1CEEACu;
    {
        const bool branch_taken_0x1ceeac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ceeac) {
            ctx->pc = 0x1CEED4u;
            goto label_1ceed4;
        }
    }
    ctx->pc = 0x1CEEB4u;
    // 0x1ceeb4: 0x90430008
    ctx->pc = 0x1ceeb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ceeb8: 0x14660006
    ctx->pc = 0x1CEEB8u;
    {
        const bool branch_taken_0x1ceeb8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 6));
        if (branch_taken_0x1ceeb8) {
            ctx->pc = 0x1CEED4u;
            goto label_1ceed4;
        }
    }
    ctx->pc = 0x1CEEC0u;
    // 0x1ceec0: 0x9443000a
    ctx->pc = 0x1ceec0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1ceec4: 0x14640003
    ctx->pc = 0x1CEEC4u;
    {
        const bool branch_taken_0x1ceec4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x1ceec4) {
            ctx->pc = 0x1CEED4u;
            goto label_1ceed4;
        }
    }
    ctx->pc = 0x1CEECCu;
    // 0x1ceecc: 0x10000007
    ctx->pc = 0x1CEECCu;
    {
        const bool branch_taken_0x1ceecc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ceecc) {
            ctx->pc = 0x1CEEECu;
            goto label_1ceeec;
        }
    }
    ctx->pc = 0x1CEED4u;
label_1ceed4:
    // 0x1ceed4: 0x24a50001
    ctx->pc = 0x1ceed4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ceed8: 0x2442000c
    ctx->pc = 0x1ceed8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
label_1ceedc:
    // 0x1ceedc: 0x28a30010
    ctx->pc = 0x1ceedcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 16));
    // 0x1ceee0: 0x1460fff1
    ctx->pc = 0x1CEEE0u;
    {
        const bool branch_taken_0x1ceee0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ceee0) {
            ctx->pc = 0x1CEEA8u;
            goto label_1ceea8;
        }
    }
    ctx->pc = 0x1CEEE8u;
    // 0x1ceee8: 0x102d
    ctx->pc = 0x1ceee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ceeec:
    // 0x1ceeec: 0x3e00008
    ctx->pc = 0x1CEEECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CEEA8u: goto label_1ceea8;
            case 0x1CEED4u: goto label_1ceed4;
            case 0x1CEEDCu: goto label_1ceedc;
            case 0x1CEEECu: goto label_1ceeec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CEEF4u;
    // 0x1ceef4: 0x0
    ctx->pc = 0x1ceef4u;
    // NOP
    // 0x1ceef8: 0x0
    ctx->pc = 0x1ceef8u;
    // NOP
    // 0x1ceefc: 0x0
    ctx->pc = 0x1ceefcu;
    // NOP
}
