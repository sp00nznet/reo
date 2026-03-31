#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012B038
// Address: 0x12b038 - 0x12b088
void sub_0012B038_0x12b038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12b038u;

    // 0x12b038: 0x27bdffc0
    ctx->pc = 0x12b038u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12b03c: 0xffb00030
    ctx->pc = 0x12b03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x12b040: 0x80802d
    ctx->pc = 0x12b040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b044: 0x1200000c
    ctx->pc = 0x12B044u;
    {
        const bool branch_taken_0x12b044 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x12B048u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        if (branch_taken_0x12b044) {
            ctx->pc = 0x12B078u;
            goto label_12b078;
        }
    }
    ctx->pc = 0x12B04Cu;
    // 0x12b04c: 0xc04514c
    ctx->pc = 0x12B04Cu;
    SET_GPR_U32(ctx, 31, 0x12B054u);
    ctx->pc = 0x12B050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114530u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114530_0x114530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B054u; }
    }
    if (ctx->pc != 0x12B054u) { return; }
    ctx->pc = 0x12B054u;
    // 0x12b054: 0x200202d
    ctx->pc = 0x12b054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b058: 0x8fa30000
    ctx->pc = 0x12b058u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b05c: 0x24020004
    ctx->pc = 0x12b05cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x12b060: 0x10620003
    ctx->pc = 0x12B060u;
    {
        const bool branch_taken_0x12b060 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x12B064u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x12b060) {
            ctx->pc = 0x12B070u;
            goto label_12b070;
        }
    }
    ctx->pc = 0x12B068u;
    // 0x12b068: 0x14650004
    ctx->pc = 0x12B068u;
    {
        const bool branch_taken_0x12b068 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        ctx->pc = 0x12B06Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x12b068) {
            ctx->pc = 0x12B07Cu;
            goto label_12b07c;
        }
    }
    ctx->pc = 0x12B070u;
label_12b070:
    // 0x12b070: 0xc045534
    ctx->pc = 0x12B070u;
    SET_GPR_U32(ctx, 31, 0x12B078u);
    ctx->pc = 0x1154D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001154D0_0x1154d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B078u; }
    }
    if (ctx->pc != 0x12B078u) { return; }
    ctx->pc = 0x12B078u;
label_12b078:
    // 0x12b078: 0xdfb00030
    ctx->pc = 0x12b078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12b07c:
    // 0x12b07c: 0xdfbf0038
    ctx->pc = 0x12b07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12b080: 0x3e00008
    ctx->pc = 0x12B080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B084u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B070u: goto label_12b070;
            case 0x12B078u: goto label_12b078;
            case 0x12B07Cu: goto label_12b07c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12B088u;
}
