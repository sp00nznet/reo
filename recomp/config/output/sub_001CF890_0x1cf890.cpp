#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CF890
// Address: 0x1cf890 - 0x1cf900
void sub_001CF890_0x1cf890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cf890u;

    // 0x1cf890: 0x3c020034
    ctx->pc = 0x1cf890u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1cf894: 0x30a5ffff
    ctx->pc = 0x1cf894u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1cf898: 0x3084ffff
    ctx->pc = 0x1cf898u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x1cf89c: 0x244213f0
    ctx->pc = 0x1cf89cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5104));
    // 0x1cf8a0: 0x1000000e
    ctx->pc = 0x1CF8A0u;
    {
        const bool branch_taken_0x1cf8a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF8A4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cf8a0) {
            ctx->pc = 0x1CF8DCu;
            goto label_1cf8dc;
        }
    }
    ctx->pc = 0x1CF8A8u;
label_1cf8a8:
    // 0x1cf8a8: 0x90430000
    ctx->pc = 0x1cf8a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf8ac: 0x10600009
    ctx->pc = 0x1CF8ACu;
    {
        const bool branch_taken_0x1cf8ac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cf8ac) {
            ctx->pc = 0x1CF8D4u;
            goto label_1cf8d4;
        }
    }
    ctx->pc = 0x1CF8B4u;
    // 0x1cf8b4: 0x9443000c
    ctx->pc = 0x1cf8b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1cf8b8: 0x14650006
    ctx->pc = 0x1CF8B8u;
    {
        const bool branch_taken_0x1cf8b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        if (branch_taken_0x1cf8b8) {
            ctx->pc = 0x1CF8D4u;
            goto label_1cf8d4;
        }
    }
    ctx->pc = 0x1CF8C0u;
    // 0x1cf8c0: 0x94430008
    ctx->pc = 0x1cf8c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cf8c4: 0x14640003
    ctx->pc = 0x1CF8C4u;
    {
        const bool branch_taken_0x1cf8c4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x1cf8c4) {
            ctx->pc = 0x1CF8D4u;
            goto label_1cf8d4;
        }
    }
    ctx->pc = 0x1CF8CCu;
    // 0x1cf8cc: 0x10000007
    ctx->pc = 0x1CF8CCu;
    {
        const bool branch_taken_0x1cf8cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cf8cc) {
            ctx->pc = 0x1CF8ECu;
            goto label_1cf8ec;
        }
    }
    ctx->pc = 0x1CF8D4u;
label_1cf8d4:
    // 0x1cf8d4: 0x24c60001
    ctx->pc = 0x1cf8d4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1cf8d8: 0x24420010
    ctx->pc = 0x1cf8d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
label_1cf8dc:
    // 0x1cf8dc: 0x28c30004
    ctx->pc = 0x1cf8dcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 4));
    // 0x1cf8e0: 0x1460fff1
    ctx->pc = 0x1CF8E0u;
    {
        const bool branch_taken_0x1cf8e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1cf8e0) {
            ctx->pc = 0x1CF8A8u;
            goto label_1cf8a8;
        }
    }
    ctx->pc = 0x1CF8E8u;
    // 0x1cf8e8: 0x102d
    ctx->pc = 0x1cf8e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf8ec:
    // 0x1cf8ec: 0x3e00008
    ctx->pc = 0x1CF8ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CF8A8u: goto label_1cf8a8;
            case 0x1CF8D4u: goto label_1cf8d4;
            case 0x1CF8DCu: goto label_1cf8dc;
            case 0x1CF8ECu: goto label_1cf8ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CF8F4u;
    // 0x1cf8f4: 0x0
    ctx->pc = 0x1cf8f4u;
    // NOP
    // 0x1cf8f8: 0x0
    ctx->pc = 0x1cf8f8u;
    // NOP
    // 0x1cf8fc: 0x0
    ctx->pc = 0x1cf8fcu;
    // NOP
}
