#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00155B28
// Address: 0x155b28 - 0x155bc8
void sub_00155B28_0x155b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x155b28u;

    // 0x155b28: 0x24030001
    ctx->pc = 0x155b28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x155b2c: 0x24020003
    ctx->pc = 0x155b2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x155b30: 0xac830050
    ctx->pc = 0x155b30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
    // 0x155b34: 0xac820038
    ctx->pc = 0x155b34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x155b38: 0xac800000
    ctx->pc = 0x155b38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x155b3c: 0xac800004
    ctx->pc = 0x155b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x155b40: 0xac800008
    ctx->pc = 0x155b40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x155b44: 0xac80000c
    ctx->pc = 0x155b44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x155b48: 0xac800010
    ctx->pc = 0x155b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x155b4c: 0xac800014
    ctx->pc = 0x155b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x155b50: 0xac800018
    ctx->pc = 0x155b50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x155b54: 0xac80001c
    ctx->pc = 0x155b54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x155b58: 0xac800020
    ctx->pc = 0x155b58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x155b5c: 0xac800024
    ctx->pc = 0x155b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x155b60: 0xac800028
    ctx->pc = 0x155b60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x155b64: 0xac80002c
    ctx->pc = 0x155b64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x155b68: 0xac800030
    ctx->pc = 0x155b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x155b6c: 0xac800034
    ctx->pc = 0x155b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x155b70: 0xac83003c
    ctx->pc = 0x155b70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x155b74: 0xac830040
    ctx->pc = 0x155b74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x155b78: 0xac800044
    ctx->pc = 0x155b78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x155b7c: 0xac800048
    ctx->pc = 0x155b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x155b80: 0x3e00008
    ctx->pc = 0x155B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155B84u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155BB8u: goto label_155bb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155B88u;
    // 0x155b88: 0x3e00008
    ctx->pc = 0x155B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155BB8u: goto label_155bb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155B90u;
    // 0x155b90: 0x27bdfff0
    ctx->pc = 0x155b90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155b94: 0xffbf0000
    ctx->pc = 0x155b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x155b98: 0xc0556f2
    ctx->pc = 0x155B98u;
    SET_GPR_U32(ctx, 31, 0x155BA0u);
    ctx->pc = 0x155BC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00155BC8_0x155bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155BA0u; }
    }
    if (ctx->pc != 0x155BA0u) { return; }
    ctx->pc = 0x155BA0u;
    // 0x155ba0: 0x40182d
    ctx->pc = 0x155ba0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ba4: 0x10600004
    ctx->pc = 0x155BA4u;
    {
        const bool branch_taken_0x155ba4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x155BA8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x155ba4) {
            ctx->pc = 0x155BB8u;
            goto label_155bb8;
        }
    }
    ctx->pc = 0x155BACu;
    // 0x155bac: 0xdfbf0000
    ctx->pc = 0x155bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155bb0: 0x8055706
    ctx->pc = 0x155BB0u;
    ctx->pc = 0x155BB4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x155C18u;
    entry_155c18_0x155de0(rdram, ctx, runtime); return;
    ctx->pc = 0x155BB8u;
label_155bb8:
    // 0x155bb8: 0xdfbf0000
    ctx->pc = 0x155bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155bbc: 0x3e00008
    ctx->pc = 0x155BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155BC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155BB8u: goto label_155bb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155BC4u;
    // 0x155bc4: 0x0
    ctx->pc = 0x155bc4u;
    // NOP
}
