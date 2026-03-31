#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011DAE0
// Address: 0x11dae0 - 0x11db20
void sub_0011DAE0_0x11dae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11dae0u;

    // 0x11dae0: 0x2403005a
    ctx->pc = 0x11dae0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 90));
    // 0x11dae4: 0xc
    ctx->pc = 0x11dae4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x11dae8: 0x3e00008
    ctx->pc = 0x11DAE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11DAF8u: goto label_11daf8;
            case 0x11DB18u: goto label_11db18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11DAF0u;
    // 0x11daf0: 0x10c00009
    ctx->pc = 0x11DAF0u;
    {
        const bool branch_taken_0x11daf0 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x11DAF4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11daf0) {
            ctx->pc = 0x11DB18u;
            goto label_11db18;
        }
    }
    ctx->pc = 0x11DAF8u;
label_11daf8:
    // 0x11daf8: 0x90a30000
    ctx->pc = 0x11daf8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11dafc: 0x24e70001
    ctx->pc = 0x11dafcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x11db00: 0x24a50001
    ctx->pc = 0x11db00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x11db04: 0xe6102b
    ctx->pc = 0x11db04u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x11db08: 0xa0830000
    ctx->pc = 0x11db08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11db0c: 0x24840001
    ctx->pc = 0x11db0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x11db10: 0x1440fff9
    ctx->pc = 0x11DB10u;
    {
        const bool branch_taken_0x11db10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11db10) {
            ctx->pc = 0x11DAF8u;
            goto label_11daf8;
        }
    }
    ctx->pc = 0x11DB18u;
label_11db18:
    // 0x11db18: 0x3e00008
    ctx->pc = 0x11DB18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DB1Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11DAF8u: goto label_11daf8;
            case 0x11DB18u: goto label_11db18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11DB20u;
}
