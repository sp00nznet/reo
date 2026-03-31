#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012B0F0
// Address: 0x12b0f0 - 0x12b158
void sub_0012B0F0_0x12b0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12b0f0u;

    // 0x12b0f0: 0x27bdffb0
    ctx->pc = 0x12b0f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12b0f4: 0xffb00030
    ctx->pc = 0x12b0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x12b0f8: 0x80802d
    ctx->pc = 0x12b0f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b0fc: 0xffb10038
    ctx->pc = 0x12b0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x12b100: 0x882d
    ctx->pc = 0x12b100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b104: 0x1200000d
    ctx->pc = 0x12B104u;
    {
        const bool branch_taken_0x12b104 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x12B108u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        if (branch_taken_0x12b104) {
            ctx->pc = 0x12B13Cu;
            goto label_12b13c;
        }
    }
    ctx->pc = 0x12B10Cu;
    // 0x12b10c: 0xc045148
    ctx->pc = 0x12B10Cu;
    SET_GPR_U32(ctx, 31, 0x12B114u);
    ctx->pc = 0x12B110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114520u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114520_0x114520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B114u; }
    }
    if (ctx->pc != 0x12B114u) { return; }
    ctx->pc = 0x12B114u;
    // 0x12b114: 0x200202d
    ctx->pc = 0x12b114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b118: 0x8fa30000
    ctx->pc = 0x12b118u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b11c: 0x24020008
    ctx->pc = 0x12b11cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x12b120: 0x10620003
    ctx->pc = 0x12B120u;
    {
        const bool branch_taken_0x12b120 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x12B124u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x12b120) {
            ctx->pc = 0x12B130u;
            goto label_12b130;
        }
    }
    ctx->pc = 0x12B128u;
    // 0x12b128: 0x14650005
    ctx->pc = 0x12B128u;
    {
        const bool branch_taken_0x12b128 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        ctx->pc = 0x12B12Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12b128) {
            ctx->pc = 0x12B140u;
            goto label_12b140;
        }
    }
    ctx->pc = 0x12B130u;
label_12b130:
    // 0x12b130: 0xc04516c
    ctx->pc = 0x12B130u;
    SET_GPR_U32(ctx, 31, 0x12B138u);
    ctx->pc = 0x1145B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001145B0_0x1145b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B138u; }
    }
    if (ctx->pc != 0x12B138u) { return; }
    ctx->pc = 0x12B138u;
    // 0x12b138: 0x40882d
    ctx->pc = 0x12b138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12b13c:
    // 0x12b13c: 0x220102d
    ctx->pc = 0x12b13cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12b140:
    // 0x12b140: 0xdfb00030
    ctx->pc = 0x12b140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b144: 0xdfb10038
    ctx->pc = 0x12b144u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12b148: 0xdfbf0040
    ctx->pc = 0x12b148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12b14c: 0x3e00008
    ctx->pc = 0x12B14Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B150u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B130u: goto label_12b130;
            case 0x12B13Cu: goto label_12b13c;
            case 0x12B140u: goto label_12b140;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12B154u;
    // 0x12b154: 0x0
    ctx->pc = 0x12b154u;
    // NOP
}
