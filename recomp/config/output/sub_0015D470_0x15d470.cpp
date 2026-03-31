#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015D470
// Address: 0x15d470 - 0x15d4c0
void sub_0015D470_0x15d470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15d470u;

    // 0x15d470: 0x8c820004
    ctx->pc = 0x15d470u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15d474: 0x1440000a
    ctx->pc = 0x15D474u;
    {
        const bool branch_taken_0x15d474 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15D478u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15d474) {
            ctx->pc = 0x15D4A0u;
            goto label_15d4a0;
        }
    }
    ctx->pc = 0x15D47Cu;
    // 0x15d47c: 0x8c820008
    ctx->pc = 0x15d47cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15d480: 0x1040000c
    ctx->pc = 0x15D480u;
    {
        const bool branch_taken_0x15d480 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15D484u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15d480) {
            ctx->pc = 0x15D4B4u;
            goto label_15d4b4;
        }
    }
    ctx->pc = 0x15D488u;
    // 0x15d488: 0x8c82000c
    ctx->pc = 0x15d488u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x15d48c: 0x50400008
    ctx->pc = 0x15D48Cu;
    {
        const bool branch_taken_0x15d48c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x15d48c) {
            ctx->pc = 0x15D490u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x15D4B0u;
            goto label_15d4b0;
        }
    }
    ctx->pc = 0x15D494u;
    // 0x15d494: 0x3e00008
    ctx->pc = 0x15D494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D498u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D4A0u: goto label_15d4a0;
            case 0x15D4B0u: goto label_15d4b0;
            case 0x15D4B4u: goto label_15d4b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D49Cu;
    // 0x15d49c: 0x0
    ctx->pc = 0x15d49cu;
    // NOP
label_15d4a0:
    // 0x15d4a0: 0x8c83000c
    ctx->pc = 0x15d4a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x15d4a4: 0x24020001
    ctx->pc = 0x15d4a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d4a8: 0x24050003
    ctx->pc = 0x15d4a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x15d4ac: 0x43280b
    ctx->pc = 0x15d4acu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
label_15d4b0:
    // 0x15d4b0: 0xa0102d
    ctx->pc = 0x15d4b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15d4b4:
    // 0x15d4b4: 0x3e00008
    ctx->pc = 0x15D4B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D4A0u: goto label_15d4a0;
            case 0x15D4B0u: goto label_15d4b0;
            case 0x15D4B4u: goto label_15d4b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D4BCu;
    // 0x15d4bc: 0x0
    ctx->pc = 0x15d4bcu;
    // NOP
}
