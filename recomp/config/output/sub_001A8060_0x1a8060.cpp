#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A8060
// Address: 0x1a8060 - 0x1a80c0
void sub_001A8060_0x1a8060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a8060u;

    // 0x1a8060: 0x27bdffe0
    ctx->pc = 0x1a8060u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a8064: 0xffbf0010
    ctx->pc = 0x1a8064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a8068: 0x10800008
    ctx->pc = 0x1A8068u;
    {
        const bool branch_taken_0x1a8068 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A806Cu;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        if (branch_taken_0x1a8068) {
            ctx->pc = 0x1A808Cu;
            goto label_1a808c;
        }
    }
    ctx->pc = 0x1A8070u;
    // 0x1a8070: 0x3c010023
    ctx->pc = 0x1a8070u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1a8074: 0xc04519c
    ctx->pc = 0x1A8074u;
    SET_GPR_U32(ctx, 31, 0x1A807Cu);
    ctx->pc = 0x1A8078u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4488)));
    ctx->pc = 0x114670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114670_0x114670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A807Cu; }
    }
    if (ctx->pc != 0x1A807Cu) { return; }
    ctx->pc = 0x1A807Cu;
    // 0x1a807c: 0x4410006
    ctx->pc = 0x1A807Cu;
    {
        const bool branch_taken_0x1a807c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a807c) {
            ctx->pc = 0x1A8098u;
            goto label_1a8098;
        }
    }
    ctx->pc = 0x1A8084u;
    // 0x1a8084: 0x1000000a
    ctx->pc = 0x1A8084u;
    {
        const bool branch_taken_0x1a8084 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8088u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a8084) {
            ctx->pc = 0x1A80B0u;
            goto label_1a80b0;
        }
    }
    ctx->pc = 0x1A808Cu;
label_1a808c:
    // 0x1a808c: 0x3c010023
    ctx->pc = 0x1a808cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1a8090: 0xc045198
    ctx->pc = 0x1A8090u;
    SET_GPR_U32(ctx, 31, 0x1A8098u);
    ctx->pc = 0x1A8094u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4488)));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8098u; }
    }
    if (ctx->pc != 0x1A8098u) { return; }
    ctx->pc = 0x1A8098u;
label_1a8098:
    // 0x1a8098: 0x3c01002b
    ctx->pc = 0x1a8098u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a809c: 0x8c300c80
    ctx->pc = 0x1a809cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 3200)));
    // 0x1a80a0: 0x3c010023
    ctx->pc = 0x1a80a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1a80a4: 0xc045190
    ctx->pc = 0x1A80A4u;
    SET_GPR_U32(ctx, 31, 0x1A80ACu);
    ctx->pc = 0x1A80A8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4488)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A80ACu; }
    }
    if (ctx->pc != 0x1A80ACu) { return; }
    ctx->pc = 0x1A80ACu;
    // 0x1a80ac: 0x200102d
    ctx->pc = 0x1a80acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a80b0:
    // 0x1a80b0: 0xdfbf0010
    ctx->pc = 0x1a80b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a80b4: 0x7bb00000
    ctx->pc = 0x1a80b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a80b8: 0x3e00008
    ctx->pc = 0x1A80B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A80BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A808Cu: goto label_1a808c;
            case 0x1A8098u: goto label_1a8098;
            case 0x1A80B0u: goto label_1a80b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A80C0u;
}
