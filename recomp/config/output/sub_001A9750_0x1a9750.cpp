#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A9750
// Address: 0x1a9750 - 0x1a97c0
void sub_001A9750_0x1a9750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a9750u;

    // 0x1a9750: 0x24020002
    ctx->pc = 0x1a9750u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a9754: 0x10a20012
    ctx->pc = 0x1A9754u;
    {
        const bool branch_taken_0x1a9754 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A9758u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1a9754) {
            ctx->pc = 0x1A97A0u;
            goto label_1a97a0;
        }
    }
    ctx->pc = 0x1A975Cu;
    // 0x1a975c: 0x24020001
    ctx->pc = 0x1a975cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9760: 0x10a2000a
    ctx->pc = 0x1A9760u;
    {
        const bool branch_taken_0x1a9760 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A9764u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1a9760) {
            ctx->pc = 0x1A978Cu;
            goto label_1a978c;
        }
    }
    ctx->pc = 0x1A9768u;
    // 0x1a9768: 0x10a00003
    ctx->pc = 0x1A9768u;
    {
        const bool branch_taken_0x1a9768 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A976Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1a9768) {
            ctx->pc = 0x1A9778u;
            goto label_1a9778;
        }
    }
    ctx->pc = 0x1A9770u;
    // 0x1a9770: 0x10000011
    ctx->pc = 0x1A9770u;
    {
        const bool branch_taken_0x1a9770 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9774u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a9770) {
            ctx->pc = 0x1A97B8u;
            goto label_1a97b8;
        }
    }
    ctx->pc = 0x1A9778u;
label_1a9778:
    // 0x1a9778: 0x902343f8
    ctx->pc = 0x1a9778u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17400)));
    // 0x1a977c: 0x1464000d
    ctx->pc = 0x1A977Cu;
    {
        const bool branch_taken_0x1a977c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x1a977c) {
            ctx->pc = 0x1A97B4u;
            goto label_1a97b4;
        }
    }
    ctx->pc = 0x1A9784u;
    // 0x1a9784: 0x1000000c
    ctx->pc = 0x1A9784u;
    {
        const bool branch_taken_0x1a9784 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a9784) {
            ctx->pc = 0x1A97B8u;
            goto label_1a97b8;
        }
    }
    ctx->pc = 0x1A978Cu;
label_1a978c:
    // 0x1a978c: 0x902343f9
    ctx->pc = 0x1a978cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17401)));
    // 0x1a9790: 0x14640008
    ctx->pc = 0x1A9790u;
    {
        const bool branch_taken_0x1a9790 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x1a9790) {
            ctx->pc = 0x1A97B4u;
            goto label_1a97b4;
        }
    }
    ctx->pc = 0x1A9798u;
    // 0x1a9798: 0x10000007
    ctx->pc = 0x1A9798u;
    {
        const bool branch_taken_0x1a9798 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a9798) {
            ctx->pc = 0x1A97B8u;
            goto label_1a97b8;
        }
    }
    ctx->pc = 0x1A97A0u;
label_1a97a0:
    // 0x1a97a0: 0x9022448a
    ctx->pc = 0x1a97a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17546)));
    // 0x1a97a4: 0x14440003
    ctx->pc = 0x1A97A4u;
    {
        const bool branch_taken_0x1a97a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x1A97A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1a97a4) {
            ctx->pc = 0x1A97B4u;
            goto label_1a97b4;
        }
    }
    ctx->pc = 0x1A97ACu;
    // 0x1a97ac: 0x10000002
    ctx->pc = 0x1A97ACu;
    {
        const bool branch_taken_0x1a97ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a97ac) {
            ctx->pc = 0x1A97B8u;
            goto label_1a97b8;
        }
    }
    ctx->pc = 0x1A97B4u;
label_1a97b4:
    // 0x1a97b4: 0x102d
    ctx->pc = 0x1a97b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a97b8:
    // 0x1a97b8: 0x3e00008
    ctx->pc = 0x1A97B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9778u: goto label_1a9778;
            case 0x1A978Cu: goto label_1a978c;
            case 0x1A97A0u: goto label_1a97a0;
            case 0x1A97B4u: goto label_1a97b4;
            case 0x1A97B8u: goto label_1a97b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A97C0u;
}
