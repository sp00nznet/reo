#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013CED0
// Address: 0x13ced0 - 0x13cf10
void sub_0013CED0_0x13ced0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13ced0u;

    // 0x13ced0: 0x27bdfff0
    ctx->pc = 0x13ced0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13ced4: 0x14800006
    ctx->pc = 0x13CED4u;
    {
        const bool branch_taken_0x13ced4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x13CED8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x13ced4) {
            ctx->pc = 0x13CEF0u;
            goto label_13cef0;
        }
    }
    ctx->pc = 0x13CEDCu;
    // 0x13cedc: 0x3c040024
    ctx->pc = 0x13cedcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13cee0: 0xdfbf0000
    ctx->pc = 0x13cee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cee4: 0x2484d368
    ctx->pc = 0x13cee4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955880));
    // 0x13cee8: 0x804f53e
    ctx->pc = 0x13CEE8u;
    ctx->pc = 0x13CEECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13D4F8u;
    sub_0013D4F8_0x13d4f8(rdram, ctx, runtime); return;
    ctx->pc = 0x13CEF0u;
label_13cef0:
    // 0x13cef0: 0x80820001
    ctx->pc = 0x13cef0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x13cef4: 0x14400004
    ctx->pc = 0x13CEF4u;
    {
        const bool branch_taken_0x13cef4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13CEF8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x13cef4) {
            ctx->pc = 0x13CF08u;
            goto label_13cf08;
        }
    }
    ctx->pc = 0x13CEFCu;
    // 0x13cefc: 0xac800024
    ctx->pc = 0x13cefcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x13cf00: 0xac80001c
    ctx->pc = 0x13cf00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x13cf04: 0xac800020
    ctx->pc = 0x13cf04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_13cf08:
    // 0x13cf08: 0x3e00008
    ctx->pc = 0x13CF08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CF0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13CEF0u: goto label_13cef0;
            case 0x13CF08u: goto label_13cf08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13CF10u;
}
