#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00158F38
// Address: 0x158f38 - 0x158f88
void sub_00158F38_0x158f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x158f38u;

    // 0x158f38: 0x27bdfff0
    ctx->pc = 0x158f38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x158f3c: 0x80102d
    ctx->pc = 0x158f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158f40: 0xffb00000
    ctx->pc = 0x158f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x158f44: 0xa0802d
    ctx->pc = 0x158f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158f48: 0xffbf0008
    ctx->pc = 0x158f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x158f4c: 0x14400006
    ctx->pc = 0x158F4Cu;
    {
        const bool branch_taken_0x158f4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x158F50u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 548));
        if (branch_taken_0x158f4c) {
            ctx->pc = 0x158F68u;
            goto label_158f68;
        }
    }
    ctx->pc = 0x158F54u;
    // 0x158f54: 0x3c040023
    ctx->pc = 0x158f54u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x158f58: 0xc0563e2
    ctx->pc = 0x158F58u;
    SET_GPR_U32(ctx, 31, 0x158F60u);
    ctx->pc = 0x158F5Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957248));
    ctx->pc = 0x158F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158F88_0x158f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158F60u; }
    }
    if (ctx->pc != 0x158F60u) { return; }
    ctx->pc = 0x158F60u;
    // 0x158f60: 0x10000004
    ctx->pc = 0x158F60u;
    {
        const bool branch_taken_0x158f60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x158F64u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x158f60) {
            ctx->pc = 0x158F74u;
            goto label_158f74;
        }
    }
    ctx->pc = 0x158F68u;
label_158f68:
    // 0x158f68: 0xc0563e2
    ctx->pc = 0x158F68u;
    SET_GPR_U32(ctx, 31, 0x158F70u);
    ctx->pc = 0x158F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158F88_0x158f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158F70u; }
    }
    if (ctx->pc != 0x158F70u) { return; }
    ctx->pc = 0x158F70u;
    // 0x158f70: 0x200102d
    ctx->pc = 0x158f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158f74:
    // 0x158f74: 0xdfb00000
    ctx->pc = 0x158f74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158f78: 0xdfbf0008
    ctx->pc = 0x158f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x158f7c: 0x3e00008
    ctx->pc = 0x158F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158F80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158F68u: goto label_158f68;
            case 0x158F74u: goto label_158f74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x158F84u;
    // 0x158f84: 0x0
    ctx->pc = 0x158f84u;
    // NOP
}
