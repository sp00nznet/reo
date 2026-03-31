#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CF900
// Address: 0x1cf900 - 0x1cf960
void sub_001CF900_0x1cf900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cf900u;

    // 0x1cf900: 0x3c020034
    ctx->pc = 0x1cf900u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1cf904: 0x3084ffff
    ctx->pc = 0x1cf904u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x1cf908: 0x244213f0
    ctx->pc = 0x1cf908u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5104));
    // 0x1cf90c: 0x1000000b
    ctx->pc = 0x1CF90Cu;
    {
        const bool branch_taken_0x1cf90c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF910u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cf90c) {
            ctx->pc = 0x1CF93Cu;
            goto label_1cf93c;
        }
    }
    ctx->pc = 0x1CF914u;
label_1cf914:
    // 0x1cf914: 0x90430000
    ctx->pc = 0x1cf914u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf918: 0x10600006
    ctx->pc = 0x1CF918u;
    {
        const bool branch_taken_0x1cf918 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cf918) {
            ctx->pc = 0x1CF934u;
            goto label_1cf934;
        }
    }
    ctx->pc = 0x1CF920u;
    // 0x1cf920: 0x94430008
    ctx->pc = 0x1cf920u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cf924: 0x14640003
    ctx->pc = 0x1CF924u;
    {
        const bool branch_taken_0x1cf924 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x1cf924) {
            ctx->pc = 0x1CF934u;
            goto label_1cf934;
        }
    }
    ctx->pc = 0x1CF92Cu;
    // 0x1cf92c: 0x10000007
    ctx->pc = 0x1CF92Cu;
    {
        const bool branch_taken_0x1cf92c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cf92c) {
            ctx->pc = 0x1CF94Cu;
            goto label_1cf94c;
        }
    }
    ctx->pc = 0x1CF934u;
label_1cf934:
    // 0x1cf934: 0x24a50001
    ctx->pc = 0x1cf934u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cf938: 0x24420010
    ctx->pc = 0x1cf938u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
label_1cf93c:
    // 0x1cf93c: 0x28a30004
    ctx->pc = 0x1cf93cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 4));
    // 0x1cf940: 0x1460fff4
    ctx->pc = 0x1CF940u;
    {
        const bool branch_taken_0x1cf940 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1cf940) {
            ctx->pc = 0x1CF914u;
            goto label_1cf914;
        }
    }
    ctx->pc = 0x1CF948u;
    // 0x1cf948: 0x102d
    ctx->pc = 0x1cf948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf94c:
    // 0x1cf94c: 0x3e00008
    ctx->pc = 0x1CF94Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CF914u: goto label_1cf914;
            case 0x1CF934u: goto label_1cf934;
            case 0x1CF93Cu: goto label_1cf93c;
            case 0x1CF94Cu: goto label_1cf94c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CF954u;
    // 0x1cf954: 0x0
    ctx->pc = 0x1cf954u;
    // NOP
    // 0x1cf958: 0x0
    ctx->pc = 0x1cf958u;
    // NOP
    // 0x1cf95c: 0x0
    ctx->pc = 0x1cf95cu;
    // NOP
}
