#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011CEA0
// Address: 0x11cea0 - 0x11cee8
void sub_0011CEA0_0x11cea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11cea0u;

    // 0x11cea0: 0x2403005a
    ctx->pc = 0x11cea0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 90));
    // 0x11cea4: 0xc
    ctx->pc = 0x11cea4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x11cea8: 0x3e00008
    ctx->pc = 0x11CEA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CEC0u: goto label_11cec0;
            case 0x11CEE0u: goto label_11cee0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11CEB0u;
    // 0x11ceb0: 0x63082
    ctx->pc = 0x11ceb0u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 6), 2));
    // 0x11ceb4: 0x10c0000a
    ctx->pc = 0x11CEB4u;
    {
        const bool branch_taken_0x11ceb4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x11CEB8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11ceb4) {
            ctx->pc = 0x11CEE0u;
            goto label_11cee0;
        }
    }
    ctx->pc = 0x11CEBCu;
    // 0x11cebc: 0x0
    ctx->pc = 0x11cebcu;
    // NOP
label_11cec0:
    // 0x11cec0: 0x8ca30000
    ctx->pc = 0x11cec0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11cec4: 0x24e70001
    ctx->pc = 0x11cec4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x11cec8: 0x24a50004
    ctx->pc = 0x11cec8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x11cecc: 0xe6102b
    ctx->pc = 0x11ceccu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x11ced0: 0xac830000
    ctx->pc = 0x11ced0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x11ced4: 0x24840004
    ctx->pc = 0x11ced4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x11ced8: 0x1440fff9
    ctx->pc = 0x11CED8u;
    {
        const bool branch_taken_0x11ced8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11ced8) {
            ctx->pc = 0x11CEC0u;
            goto label_11cec0;
        }
    }
    ctx->pc = 0x11CEE0u;
label_11cee0:
    // 0x11cee0: 0x3e00008
    ctx->pc = 0x11CEE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CEE4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CEC0u: goto label_11cec0;
            case 0x11CEE0u: goto label_11cee0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11CEE8u;
}
