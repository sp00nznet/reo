#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001280D0
// Address: 0x1280d0 - 0x128128
void sub_001280D0_0x1280d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1280d0u;

label_1280d0:
    // 0x1280d0: 0x27bdfff0
    ctx->pc = 0x1280d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1280d4:
    // 0x1280d4: 0x3c020021
    ctx->pc = 0x1280d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_1280d8:
    // 0x1280d8: 0xffb00000
    ctx->pc = 0x1280d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1280dc:
    // 0x1280dc: 0x2450c7b8
    ctx->pc = 0x1280dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294952888));
label_1280e0:
    // 0x1280e0: 0x80282d
    ctx->pc = 0x1280e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1280e4:
    // 0x1280e4: 0x200202d
    ctx->pc = 0x1280e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1280e8:
    // 0x1280e8: 0xffbf0008
    ctx->pc = 0x1280e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1280ec:
    // 0x1280ec: 0xc042d7e
label_1280f0:
    if (ctx->pc == 0x1280F0u) {
        ctx->pc = 0x1280F0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x1280F4u;
        goto label_1280f4;
    }
    ctx->pc = 0x1280ECu;
    SET_GPR_U32(ctx, 31, 0x1280F4u);
    ctx->pc = 0x1280F0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 255));
    ctx->pc = 0x10B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B5F8_0x10b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1280F4u; }
    }
    if (ctx->pc != 0x1280F4u) { return; }
    ctx->pc = 0x1280F4u;
label_1280f4:
    // 0x1280f4: 0x3c030021
    ctx->pc = 0x1280f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
label_1280f8:
    // 0x1280f8: 0x8c63c7b0
    ctx->pc = 0x1280f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294952880)));
label_1280fc:
    // 0x1280fc: 0x10600004
label_128100:
    if (ctx->pc == 0x128100u) {
        ctx->pc = 0x128100u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128104u;
        goto label_128104;
    }
    ctx->pc = 0x1280FCu;
    {
        const bool branch_taken_0x1280fc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x128100u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1280fc) {
            ctx->pc = 0x128110u;
            goto label_128110;
        }
    }
    ctx->pc = 0x128104u;
label_128104:
    // 0x128104: 0x3c020021
    ctx->pc = 0x128104u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_128108:
    // 0x128108: 0x60f809
label_12810c:
    if (ctx->pc == 0x12810Cu) {
        ctx->pc = 0x12810Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294952884)));
        ctx->pc = 0x128110u;
        goto label_128110;
    }
    ctx->pc = 0x128108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x128110u);
        ctx->pc = 0x12810Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294952884)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1280D0u: goto label_1280d0;
            case 0x1280D4u: goto label_1280d4;
            case 0x1280D8u: goto label_1280d8;
            case 0x1280DCu: goto label_1280dc;
            case 0x1280E0u: goto label_1280e0;
            case 0x1280E4u: goto label_1280e4;
            case 0x1280E8u: goto label_1280e8;
            case 0x1280ECu: goto label_1280ec;
            case 0x1280F0u: goto label_1280f0;
            case 0x1280F4u: goto label_1280f4;
            case 0x1280F8u: goto label_1280f8;
            case 0x1280FCu: goto label_1280fc;
            case 0x128100u: goto label_128100;
            case 0x128104u: goto label_128104;
            case 0x128108u: goto label_128108;
            case 0x12810Cu: goto label_12810c;
            case 0x128110u: goto label_128110;
            case 0x128114u: goto label_128114;
            case 0x128118u: goto label_128118;
            case 0x12811Cu: goto label_12811c;
            case 0x128120u: goto label_128120;
            case 0x128124u: goto label_128124;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x128110u; }
            if (ctx->pc != 0x128110u) { return; }
        }
    }
    ctx->pc = 0x128110u;
label_128110:
    // 0x128110: 0x200202d
    ctx->pc = 0x128110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_128114:
    // 0x128114: 0xdfb00000
    ctx->pc = 0x128114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_128118:
    // 0x128118: 0xdfbf0008
    ctx->pc = 0x128118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12811c:
    // 0x12811c: 0x8050600
label_128120:
    if (ctx->pc == 0x128120u) {
        ctx->pc = 0x128120u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x128124u;
        goto label_128124;
    }
    ctx->pc = 0x12811Cu;
    ctx->pc = 0x128120u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141800u;
    sub_00141800_0x141800(rdram, ctx, runtime); return;
    ctx->pc = 0x128124u;
label_128124:
    // 0x128124: 0x0
    ctx->pc = 0x128124u;
    // NOP
}
