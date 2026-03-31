#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012B088
// Address: 0x12b088 - 0x12b0d8
void sub_0012B088_0x12b088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12b088u;

    // 0x12b088: 0x27bdffc0
    ctx->pc = 0x12b088u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12b08c: 0xffb00030
    ctx->pc = 0x12b08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x12b090: 0x80802d
    ctx->pc = 0x12b090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b094: 0x1200000c
    ctx->pc = 0x12B094u;
    {
        const bool branch_taken_0x12b094 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x12B098u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        if (branch_taken_0x12b094) {
            ctx->pc = 0x12B0C8u;
            goto label_12b0c8;
        }
    }
    ctx->pc = 0x12B09Cu;
    // 0x12b09c: 0xc045148
    ctx->pc = 0x12B09Cu;
    SET_GPR_U32(ctx, 31, 0x12B0A4u);
    ctx->pc = 0x12B0A0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114520u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114520_0x114520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B0A4u; }
    }
    if (ctx->pc != 0x12B0A4u) { return; }
    ctx->pc = 0x12B0A4u;
    // 0x12b0a4: 0x200202d
    ctx->pc = 0x12b0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b0a8: 0x8fa30000
    ctx->pc = 0x12b0a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b0ac: 0x24020004
    ctx->pc = 0x12b0acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x12b0b0: 0x10620003
    ctx->pc = 0x12B0B0u;
    {
        const bool branch_taken_0x12b0b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x12B0B4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x12b0b0) {
            ctx->pc = 0x12B0C0u;
            goto label_12b0c0;
        }
    }
    ctx->pc = 0x12B0B8u;
    // 0x12b0b8: 0x14650004
    ctx->pc = 0x12B0B8u;
    {
        const bool branch_taken_0x12b0b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        ctx->pc = 0x12B0BCu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x12b0b8) {
            ctx->pc = 0x12B0CCu;
            goto label_12b0cc;
        }
    }
    ctx->pc = 0x12B0C0u;
label_12b0c0:
    // 0x12b0c0: 0xc045154
    ctx->pc = 0x12B0C0u;
    SET_GPR_U32(ctx, 31, 0x12B0C8u);
    ctx->pc = 0x114550u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114550_0x114550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B0C8u; }
    }
    if (ctx->pc != 0x12B0C8u) { return; }
    ctx->pc = 0x12B0C8u;
label_12b0c8:
    // 0x12b0c8: 0xdfb00030
    ctx->pc = 0x12b0c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12b0cc:
    // 0x12b0cc: 0xdfbf0038
    ctx->pc = 0x12b0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12b0d0: 0x3e00008
    ctx->pc = 0x12B0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B0D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B0C0u: goto label_12b0c0;
            case 0x12B0C8u: goto label_12b0c8;
            case 0x12B0CCu: goto label_12b0cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12B0D8u;
}
