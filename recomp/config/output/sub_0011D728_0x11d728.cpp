#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011D728
// Address: 0x11d728 - 0x11d7b0
void sub_0011D728_0x11d728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11d728u;

    // 0x11d728: 0x2403005a
    ctx->pc = 0x11d728u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 90));
    // 0x11d72c: 0xc
    ctx->pc = 0x11d72cu;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x11d730: 0x3e00008
    ctx->pc = 0x11D730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D748u: goto label_11d748;
            case 0x11D768u: goto label_11d768;
            case 0x11D788u: goto label_11d788;
            case 0x11D7A4u: goto label_11d7a4;
            case 0x11D7A8u: goto label_11d7a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D738u;
    // 0x11d738: 0x63082
    ctx->pc = 0x11d738u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 6), 2));
    // 0x11d73c: 0x10c0000a
    ctx->pc = 0x11D73Cu;
    {
        const bool branch_taken_0x11d73c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x11D740u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11d73c) {
            ctx->pc = 0x11D768u;
            goto label_11d768;
        }
    }
    ctx->pc = 0x11D744u;
    // 0x11d744: 0x0
    ctx->pc = 0x11d744u;
    // NOP
label_11d748:
    // 0x11d748: 0x8ca30000
    ctx->pc = 0x11d748u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11d74c: 0x24e70001
    ctx->pc = 0x11d74cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x11d750: 0x24a50004
    ctx->pc = 0x11d750u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x11d754: 0xe6102b
    ctx->pc = 0x11d754u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x11d758: 0xac830000
    ctx->pc = 0x11d758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x11d75c: 0x24840004
    ctx->pc = 0x11d75cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x11d760: 0x1440fff9
    ctx->pc = 0x11D760u;
    {
        const bool branch_taken_0x11d760 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11d760) {
            ctx->pc = 0x11D748u;
            goto label_11d748;
        }
    }
    ctx->pc = 0x11D768u;
label_11d768:
    // 0x11d768: 0x3e00008
    ctx->pc = 0x11D768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D76Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D748u: goto label_11d748;
            case 0x11D768u: goto label_11d768;
            case 0x11D788u: goto label_11d788;
            case 0x11D7A4u: goto label_11d7a4;
            case 0x11D7A8u: goto label_11d7a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D770u;
    // 0x11d770: 0x8c820000
    ctx->pc = 0x11d770u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11d774: 0x1046000b
    ctx->pc = 0x11D774u;
    {
        const bool branch_taken_0x11d774 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 6));
        ctx->pc = 0x11D778u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        if (branch_taken_0x11d774) {
            ctx->pc = 0x11D7A4u;
            goto label_11d7a4;
        }
    }
    ctx->pc = 0x11D77Cu;
    // 0x11d77c: 0x5040000a
    ctx->pc = 0x11D77Cu;
    {
        const bool branch_taken_0x11d77c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x11d77c) {
            ctx->pc = 0x11D780u;
            if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
            ctx->pc = 0x11D7A8u;
            goto label_11d7a8;
        }
    }
    ctx->pc = 0x11D784u;
    // 0x11d784: 0x24840004
    ctx->pc = 0x11d784u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
label_11d788:
    // 0x11d788: 0x8c820000
    ctx->pc = 0x11d788u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11d78c: 0x10460005
    ctx->pc = 0x11D78Cu;
    {
        const bool branch_taken_0x11d78c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 6));
        ctx->pc = 0x11D790u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        if (branch_taken_0x11d78c) {
            ctx->pc = 0x11D7A4u;
            goto label_11d7a4;
        }
    }
    ctx->pc = 0x11D794u;
    // 0x11d794: 0x5440fffc
    ctx->pc = 0x11D794u;
    {
        const bool branch_taken_0x11d794 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11d794) {
            ctx->pc = 0x11D798u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
            ctx->pc = 0x11D788u;
            goto label_11d788;
        }
    }
    ctx->pc = 0x11D79Cu;
    // 0x11d79c: 0x10000002
    ctx->pc = 0x11D79Cu;
    {
        const bool branch_taken_0x11d79c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11D7A0u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
        if (branch_taken_0x11d79c) {
            ctx->pc = 0x11D7A8u;
            goto label_11d7a8;
        }
    }
    ctx->pc = 0x11D7A4u;
label_11d7a4:
    // 0x11d7a4: 0x2200a
    ctx->pc = 0x11d7a4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
label_11d7a8:
    // 0x11d7a8: 0x3e00008
    ctx->pc = 0x11D7A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D7ACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D748u: goto label_11d748;
            case 0x11D768u: goto label_11d768;
            case 0x11D788u: goto label_11d788;
            case 0x11D7A4u: goto label_11d7a4;
            case 0x11D7A8u: goto label_11d7a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D7B0u;
}
