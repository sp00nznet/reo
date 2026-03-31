#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1502c0
// Address: 0x1502c0 - 0x1502f0
void entry_1502c0_0x1502f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1502c0u;

label_1502c0:
    // 0x1502c0: 0x3c030023
    ctx->pc = 0x1502c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
label_1502c4:
    // 0x1502c4: 0x27bdfff0
    ctx->pc = 0x1502c4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1502c8:
    // 0x1502c8: 0x8c63d818
    ctx->pc = 0x1502c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294957080)));
label_1502cc:
    // 0x1502cc: 0x102d
    ctx->pc = 0x1502ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1502d0:
    // 0x1502d0: 0x10600003
label_1502d4:
    if (ctx->pc == 0x1502D4u) {
        ctx->pc = 0x1502D4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1502D8u;
        goto label_1502d8;
    }
    ctx->pc = 0x1502D0u;
    {
        const bool branch_taken_0x1502d0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1502D4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1502d0) {
            ctx->pc = 0x1502E0u;
            goto label_1502e0;
        }
    }
    ctx->pc = 0x1502D8u;
label_1502d8:
    // 0x1502d8: 0x60f809
label_1502dc:
    if (ctx->pc == 0x1502DCu) {
        ctx->pc = 0x1502E0u;
        goto label_1502e0;
    }
    ctx->pc = 0x1502D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1502E0u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1502C0u: goto label_1502c0;
            case 0x1502C4u: goto label_1502c4;
            case 0x1502C8u: goto label_1502c8;
            case 0x1502CCu: goto label_1502cc;
            case 0x1502D0u: goto label_1502d0;
            case 0x1502D4u: goto label_1502d4;
            case 0x1502D8u: goto label_1502d8;
            case 0x1502DCu: goto label_1502dc;
            case 0x1502E0u: goto label_1502e0;
            case 0x1502E4u: goto label_1502e4;
            case 0x1502E8u: goto label_1502e8;
            case 0x1502ECu: goto label_1502ec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1502E0u; }
            if (ctx->pc != 0x1502E0u) { return; }
        }
    }
    ctx->pc = 0x1502E0u;
label_1502e0:
    // 0x1502e0: 0xdfbf0000
    ctx->pc = 0x1502e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1502e4:
    // 0x1502e4: 0x3e00008
label_1502e8:
    if (ctx->pc == 0x1502E8u) {
        ctx->pc = 0x1502E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1502ECu;
        goto label_1502ec;
    }
    ctx->pc = 0x1502E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1502E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1502C0u: goto label_1502c0;
            case 0x1502C4u: goto label_1502c4;
            case 0x1502C8u: goto label_1502c8;
            case 0x1502CCu: goto label_1502cc;
            case 0x1502D0u: goto label_1502d0;
            case 0x1502D4u: goto label_1502d4;
            case 0x1502D8u: goto label_1502d8;
            case 0x1502DCu: goto label_1502dc;
            case 0x1502E0u: goto label_1502e0;
            case 0x1502E4u: goto label_1502e4;
            case 0x1502E8u: goto label_1502e8;
            case 0x1502ECu: goto label_1502ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1502ECu;
label_1502ec:
    // 0x1502ec: 0x0
    ctx->pc = 0x1502ecu;
    // NOP
}
