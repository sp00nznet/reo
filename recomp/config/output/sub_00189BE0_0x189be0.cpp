#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00189BE0
// Address: 0x189be0 - 0x189c30
void sub_00189BE0_0x189be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x189be0u;

label_189be0:
    // 0x189be0: 0x78820000
    ctx->pc = 0x189be0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x189be4: 0x78830010
    ctx->pc = 0x189be4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x189be8: 0x78880020
    ctx->pc = 0x189be8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x189bec: 0x78890030
    ctx->pc = 0x189becu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x189bf0: 0x7ca20000
    ctx->pc = 0x189bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x189bf4: 0x7ca30010
    ctx->pc = 0x189bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x189bf8: 0x7ca80020
    ctx->pc = 0x189bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 8));
    // 0x189bfc: 0x7ca90030
    ctx->pc = 0x189bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 9));
    // 0x189c00: 0x24c6ffff
    ctx->pc = 0x189c00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x189c04: 0x24840040
    ctx->pc = 0x189c04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 64));
    // 0x189c08: 0x14c0fff5
    ctx->pc = 0x189C08u;
    {
        const bool branch_taken_0x189c08 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x189C0Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
        if (branch_taken_0x189c08) {
            ctx->pc = 0x189BE0u;
            goto label_189be0;
        }
    }
    ctx->pc = 0x189C10u;
    // 0x189c10: 0x3e00008
    ctx->pc = 0x189C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189BE0u: goto label_189be0;
            case 0x189C18u: goto label_189c18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189C18u;
label_189c18:
    // 0x189c18: 0x24a5ffff
    ctx->pc = 0x189c18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x189c1c: 0xac800000
    ctx->pc = 0x189c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x189c20: 0x14a0fffd
    ctx->pc = 0x189C20u;
    {
        const bool branch_taken_0x189c20 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x189C24u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x189c20) {
            ctx->pc = 0x189C18u;
            goto label_189c18;
        }
    }
    ctx->pc = 0x189C28u;
    // 0x189c28: 0x3e00008
    ctx->pc = 0x189C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189BE0u: goto label_189be0;
            case 0x189C18u: goto label_189c18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189C30u;
}
