#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_138238
// Address: 0x138238 - 0x138278
void entry_138238_0x138278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x138238u;

    // 0x138238: 0x27bdfff0
    ctx->pc = 0x138238u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13823c: 0x3c020022
    ctx->pc = 0x13823cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x138240: 0x24030001
    ctx->pc = 0x138240u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x138244: 0xffbf0000
    ctx->pc = 0x138244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138248: 0x14830007
    ctx->pc = 0x138248u;
    {
        const bool branch_taken_0x138248 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x13824Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294949880), GPR_U32(ctx, 4));
        if (branch_taken_0x138248) {
            ctx->pc = 0x138268u;
            goto label_138268;
        }
    }
    ctx->pc = 0x138250u;
    // 0x138250: 0x3c040024
    ctx->pc = 0x138250u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x138254: 0xdfbf0000
    ctx->pc = 0x138254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138258: 0x2484c6c8
    ctx->pc = 0x138258u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952648));
    // 0x13825c: 0x8045a12
    ctx->pc = 0x13825Cu;
    ctx->pc = 0x138260u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x116848u;
    sub_00116848_0x116848(rdram, ctx, runtime); return;
    ctx->pc = 0x138264u;
    // 0x138264: 0x0
    ctx->pc = 0x138264u;
    // NOP
label_138268:
    // 0x138268: 0xdfbf0000
    ctx->pc = 0x138268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13826c: 0x3e00008
    ctx->pc = 0x13826Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138270u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138268u: goto label_138268;
            default: break;
        }
        return;
    }
    ctx->pc = 0x138274u;
    // 0x138274: 0x0
    ctx->pc = 0x138274u;
    // NOP
}
