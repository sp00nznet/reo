#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C9770
// Address: 0x1c9770 - 0x1c97d0
void sub_001C9770_0x1c9770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c9770u;

    // 0x1c9770: 0x3c010034
    ctx->pc = 0x1c9770u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c9774: 0x24030001
    ctx->pc = 0x1c9774u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9778: 0x9022cc40
    ctx->pc = 0x1c9778u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294954048)));
    // 0x1c977c: 0x14430009
    ctx->pc = 0x1C977Cu;
    {
        const bool branch_taken_0x1c977c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1C9780u;
        SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
        if (branch_taken_0x1c977c) {
            ctx->pc = 0x1C97A4u;
            goto label_1c97a4;
        }
    }
    ctx->pc = 0x1C9784u;
    // 0x1c9784: 0x3c010034
    ctx->pc = 0x1c9784u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c9788: 0x8422d998
    ctx->pc = 0x1c9788u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294957464)));
    // 0x1c978c: 0x1443000d
    ctx->pc = 0x1C978Cu;
    {
        const bool branch_taken_0x1c978c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1C9790u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1c978c) {
            ctx->pc = 0x1C97C4u;
            goto label_1c97c4;
        }
    }
    ctx->pc = 0x1C9794u;
    // 0x1c9794: 0x3c010034
    ctx->pc = 0x1c9794u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c9798: 0x102d
    ctx->pc = 0x1c9798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c979c: 0x10000009
    ctx->pc = 0x1C979Cu;
    {
        const bool branch_taken_0x1c979c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C97A0u;
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957464), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1c979c) {
            ctx->pc = 0x1C97C4u;
            goto label_1c97c4;
        }
    }
    ctx->pc = 0x1C97A4u;
label_1c97a4:
    // 0x1c97a4: 0x8422d998
    ctx->pc = 0x1c97a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294957464)));
    // 0x1c97a8: 0x14400005
    ctx->pc = 0x1C97A8u;
    {
        const bool branch_taken_0x1c97a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c97a8) {
            ctx->pc = 0x1C97C0u;
            goto label_1c97c0;
        }
    }
    ctx->pc = 0x1C97B0u;
    // 0x1c97b0: 0x3c010034
    ctx->pc = 0x1c97b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c97b4: 0x102d
    ctx->pc = 0x1c97b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c97b8: 0x10000002
    ctx->pc = 0x1C97B8u;
    {
        const bool branch_taken_0x1c97b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C97BCu;
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294957464), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1c97b8) {
            ctx->pc = 0x1C97C4u;
            goto label_1c97c4;
        }
    }
    ctx->pc = 0x1C97C0u;
label_1c97c0:
    // 0x1c97c0: 0x2402ffff
    ctx->pc = 0x1c97c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c97c4:
    // 0x1c97c4: 0x3e00008
    ctx->pc = 0x1C97C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C97A4u: goto label_1c97a4;
            case 0x1C97C0u: goto label_1c97c0;
            case 0x1C97C4u: goto label_1c97c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C97CCu;
    // 0x1c97cc: 0x0
    ctx->pc = 0x1c97ccu;
    // NOP
}
