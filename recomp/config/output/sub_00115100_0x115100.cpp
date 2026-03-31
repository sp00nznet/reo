#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00115100
// Address: 0x115100 - 0x115168
void sub_00115100_0x115100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x115100u;

    // 0x115100: 0x27bdffd0
    ctx->pc = 0x115100u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x115104: 0xffb10010
    ctx->pc = 0x115104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x115108: 0xffbf0020
    ctx->pc = 0x115108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11510c: 0x80882d
    ctx->pc = 0x11510cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115110: 0xffb00000
    ctx->pc = 0x115110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115114: 0x40106000
    ctx->pc = 0x115114u;
    SET_GPR_U32(ctx, 16, ctx->cop0_status);
    // 0x115118: 0x3c020001
    ctx->pc = 0x115118u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x11511c: 0x2028024
    ctx->pc = 0x11511cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x115120: 0x12000003
    ctx->pc = 0x115120u;
    {
        const bool branch_taken_0x115120 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x115120) {
            ctx->pc = 0x115130u;
            goto label_115130;
        }
    }
    ctx->pc = 0x115128u;
    // 0x115128: 0xc047598
    ctx->pc = 0x115128u;
    SET_GPR_U32(ctx, 31, 0x115130u);
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115130u; }
    }
    if (ctx->pc != 0x115130u) { return; }
    ctx->pc = 0x115130u;
label_115130:
    // 0x115130: 0xc0450dc
    ctx->pc = 0x115130u;
    SET_GPR_U32(ctx, 31, 0x115138u);
    ctx->pc = 0x115134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114370u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114370_0x114370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115138u; }
    }
    if (ctx->pc != 0x115138u) { return; }
    ctx->pc = 0x115138u;
    // 0x115138: 0x40882d
    ctx->pc = 0x115138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11513c: 0xf
    ctx->pc = 0x11513cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x115140: 0x12000004
    ctx->pc = 0x115140u;
    {
        const bool branch_taken_0x115140 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x115144u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x115140) {
            ctx->pc = 0x115154u;
            goto label_115154;
        }
    }
    ctx->pc = 0x115148u;
    // 0x115148: 0xc0475ae
    ctx->pc = 0x115148u;
    SET_GPR_U32(ctx, 31, 0x115150u);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115150u; }
    }
    if (ctx->pc != 0x115150u) { return; }
    ctx->pc = 0x115150u;
    // 0x115150: 0x220102d
    ctx->pc = 0x115150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115154:
    // 0x115154: 0xdfbf0020
    ctx->pc = 0x115154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115158: 0xdfb10010
    ctx->pc = 0x115158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11515c: 0xdfb00000
    ctx->pc = 0x11515cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115160: 0x3e00008
    ctx->pc = 0x115160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115164u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115130u: goto label_115130;
            case 0x115154u: goto label_115154;
            default: break;
        }
        return;
    }
    ctx->pc = 0x115168u;
}
