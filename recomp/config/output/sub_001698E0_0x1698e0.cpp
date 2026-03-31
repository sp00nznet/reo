#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001698E0
// Address: 0x1698e0 - 0x169918
void sub_001698E0_0x1698e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1698e0u;

label_1698e0:
    // 0x1698e0: 0x27bdffe0
    ctx->pc = 0x1698e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1698e4:
    // 0x1698e4: 0xa0102d
    ctx->pc = 0x1698e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1698e8:
    // 0x1698e8: 0xffbf0010
    ctx->pc = 0x1698e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1698ec:
    // 0x1698ec: 0x40f809
label_1698f0:
    if (ctx->pc == 0x1698F0u) {
        ctx->pc = 0x1698F0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1698F4u;
        goto label_1698f4;
    }
    ctx->pc = 0x1698ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1698F4u);
        ctx->pc = 0x1698F0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1698E0u: goto label_1698e0;
            case 0x1698E4u: goto label_1698e4;
            case 0x1698E8u: goto label_1698e8;
            case 0x1698ECu: goto label_1698ec;
            case 0x1698F0u: goto label_1698f0;
            case 0x1698F4u: goto label_1698f4;
            case 0x1698F8u: goto label_1698f8;
            case 0x1698FCu: goto label_1698fc;
            case 0x169900u: goto label_169900;
            case 0x169904u: goto label_169904;
            case 0x169908u: goto label_169908;
            case 0x16990Cu: goto label_16990c;
            case 0x169910u: goto label_169910;
            case 0x169914u: goto label_169914;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1698F4u; }
            if (ctx->pc != 0x1698F4u) { return; }
        }
    }
    ctx->pc = 0x1698F4u;
label_1698f4:
    // 0x1698f4: 0x2404ffff
    ctx->pc = 0x1698f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1698f8:
    // 0x1698f8: 0x8fa30000
    ctx->pc = 0x1698f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1698fc:
    // 0x1698fc: 0x38420000
    ctx->pc = 0x1698fcu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 0));
label_169900:
    // 0x169900: 0xdfbf0010
    ctx->pc = 0x169900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_169904:
    // 0x169904: 0x62200b
    ctx->pc = 0x169904u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
label_169908:
    // 0x169908: 0x80102d
    ctx->pc = 0x169908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16990c:
    // 0x16990c: 0x3e00008
label_169910:
    if (ctx->pc == 0x169910u) {
        ctx->pc = 0x169910u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x169914u;
        goto label_169914;
    }
    ctx->pc = 0x16990Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169910u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1698E0u: goto label_1698e0;
            case 0x1698E4u: goto label_1698e4;
            case 0x1698E8u: goto label_1698e8;
            case 0x1698ECu: goto label_1698ec;
            case 0x1698F0u: goto label_1698f0;
            case 0x1698F4u: goto label_1698f4;
            case 0x1698F8u: goto label_1698f8;
            case 0x1698FCu: goto label_1698fc;
            case 0x169900u: goto label_169900;
            case 0x169904u: goto label_169904;
            case 0x169908u: goto label_169908;
            case 0x16990Cu: goto label_16990c;
            case 0x169910u: goto label_169910;
            case 0x169914u: goto label_169914;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169914u;
label_169914:
    // 0x169914: 0x0
    ctx->pc = 0x169914u;
    // NOP
}
