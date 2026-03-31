#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00182C48
// Address: 0x182c48 - 0x182ca0
void sub_00182C48_0x182c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x182c48u;

    // 0x182c48: 0x27bdfff0
    ctx->pc = 0x182c48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x182c4c: 0xffb00000
    ctx->pc = 0x182c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182c50: 0xffbf0008
    ctx->pc = 0x182c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x182c54: 0xc060b02
    ctx->pc = 0x182C54u;
    SET_GPR_U32(ctx, 31, 0x182C5Cu);
    ctx->pc = 0x182C58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182C08_0x182c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182C5Cu; }
    }
    if (ctx->pc != 0x182C5Cu) { return; }
    ctx->pc = 0x182C5Cu;
    // 0x182c5c: 0x8e030000
    ctx->pc = 0x182c5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x182c60: 0x40202d
    ctx->pc = 0x182c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c64: 0x2405ffff
    ctx->pc = 0x182c64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x182c68: 0x14600009
    ctx->pc = 0x182C68u;
    {
        const bool branch_taken_0x182c68 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x182C6Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x182c68) {
            ctx->pc = 0x182C90u;
            goto label_182c90;
        }
    }
    ctx->pc = 0x182C70u;
    // 0x182c70: 0x54850005
    ctx->pc = 0x182C70u;
    {
        const bool branch_taken_0x182c70 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 5));
        if (branch_taken_0x182c70) {
            ctx->pc = 0x182C74u;
            SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
            ctx->pc = 0x182C88u;
            goto label_182c88;
        }
    }
    ctx->pc = 0x182C78u;
    // 0x182c78: 0x3c038101
    ctx->pc = 0x182c78u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33025 << 16));
    // 0x182c7c: 0x34630059
    ctx->pc = 0x182c7cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 89));
    // 0x182c80: 0x10000003
    ctx->pc = 0x182C80u;
    {
        const bool branch_taken_0x182c80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182C84u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x182c80) {
            ctx->pc = 0x182C90u;
            goto label_182c90;
        }
    }
    ctx->pc = 0x182C88u;
label_182c88:
    // 0x182c88: 0x3442ffff
    ctx->pc = 0x182c88u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x182c8c: 0x821024
    ctx->pc = 0x182c8cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_182c90:
    // 0x182c90: 0xdfb00000
    ctx->pc = 0x182c90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182c94: 0xdfbf0008
    ctx->pc = 0x182c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x182c98: 0x3e00008
    ctx->pc = 0x182C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182C9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182C88u: goto label_182c88;
            case 0x182C90u: goto label_182c90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182CA0u;
}
