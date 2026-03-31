#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001151D0
// Address: 0x1151d0 - 0x115238
void sub_001151D0_0x1151d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1151d0u;

    // 0x1151d0: 0x27bdffd0
    ctx->pc = 0x1151d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1151d4: 0xffb10010
    ctx->pc = 0x1151d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1151d8: 0xffbf0020
    ctx->pc = 0x1151d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1151dc: 0x80882d
    ctx->pc = 0x1151dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1151e0: 0xffb00000
    ctx->pc = 0x1151e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1151e4: 0x40106000
    ctx->pc = 0x1151e4u;
    SET_GPR_U32(ctx, 16, ctx->cop0_status);
    // 0x1151e8: 0x3c020001
    ctx->pc = 0x1151e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x1151ec: 0x2028024
    ctx->pc = 0x1151ecu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1151f0: 0x12000003
    ctx->pc = 0x1151F0u;
    {
        const bool branch_taken_0x1151f0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1151f0) {
            ctx->pc = 0x115200u;
            goto label_115200;
        }
    }
    ctx->pc = 0x1151F8u;
    // 0x1151f8: 0xc047598
    ctx->pc = 0x1151F8u;
    SET_GPR_U32(ctx, 31, 0x115200u);
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115200u; }
    }
    if (ctx->pc != 0x115200u) { return; }
    ctx->pc = 0x115200u;
label_115200:
    // 0x115200: 0xc0450e4
    ctx->pc = 0x115200u;
    SET_GPR_U32(ctx, 31, 0x115208u);
    ctx->pc = 0x115204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114390u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114390_0x114390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115208u; }
    }
    if (ctx->pc != 0x115208u) { return; }
    ctx->pc = 0x115208u;
    // 0x115208: 0x40882d
    ctx->pc = 0x115208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11520c: 0xf
    ctx->pc = 0x11520cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x115210: 0x12000004
    ctx->pc = 0x115210u;
    {
        const bool branch_taken_0x115210 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x115214u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x115210) {
            ctx->pc = 0x115224u;
            goto label_115224;
        }
    }
    ctx->pc = 0x115218u;
    // 0x115218: 0xc0475ae
    ctx->pc = 0x115218u;
    SET_GPR_U32(ctx, 31, 0x115220u);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115220u; }
    }
    if (ctx->pc != 0x115220u) { return; }
    ctx->pc = 0x115220u;
    // 0x115220: 0x220102d
    ctx->pc = 0x115220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115224:
    // 0x115224: 0xdfbf0020
    ctx->pc = 0x115224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115228: 0xdfb10010
    ctx->pc = 0x115228u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11522c: 0xdfb00000
    ctx->pc = 0x11522cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115230: 0x3e00008
    ctx->pc = 0x115230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115234u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115200u: goto label_115200;
            case 0x115224u: goto label_115224;
            default: break;
        }
        return;
    }
    ctx->pc = 0x115238u;
}
