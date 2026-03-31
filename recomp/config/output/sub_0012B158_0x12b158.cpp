#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012B158
// Address: 0x12b158 - 0x12b1b8
void sub_0012B158_0x12b158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12b158u;

    // 0x12b158: 0x27bdffb0
    ctx->pc = 0x12b158u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12b15c: 0xffb00030
    ctx->pc = 0x12b15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x12b160: 0x80802d
    ctx->pc = 0x12b160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b164: 0xffb10038
    ctx->pc = 0x12b164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x12b168: 0x882d
    ctx->pc = 0x12b168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b16c: 0x1200000c
    ctx->pc = 0x12B16Cu;
    {
        const bool branch_taken_0x12b16c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x12B170u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        if (branch_taken_0x12b16c) {
            ctx->pc = 0x12B1A0u;
            goto label_12b1a0;
        }
    }
    ctx->pc = 0x12B174u;
    // 0x12b174: 0xc045148
    ctx->pc = 0x12B174u;
    SET_GPR_U32(ctx, 31, 0x12B17Cu);
    ctx->pc = 0x12B178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114520u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114520_0x114520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B17Cu; }
    }
    if (ctx->pc != 0x12B17Cu) { return; }
    ctx->pc = 0x12B17Cu;
    // 0x12b17c: 0x8fa30000
    ctx->pc = 0x12b17cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b180: 0x24020008
    ctx->pc = 0x12b180u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x12b184: 0x10620006
    ctx->pc = 0x12B184u;
    {
        const bool branch_taken_0x12b184 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x12B188u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x12b184) {
            ctx->pc = 0x12B1A0u;
            goto label_12b1a0;
        }
    }
    ctx->pc = 0x12B18Cu;
    // 0x12b18c: 0x50640005
    ctx->pc = 0x12B18Cu;
    {
        const bool branch_taken_0x12b18c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x12b18c) {
            ctx->pc = 0x12B190u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x12B1A4u;
            goto label_12b1a4;
        }
    }
    ctx->pc = 0x12B194u;
    // 0x12b194: 0xc045164
    ctx->pc = 0x12B194u;
    SET_GPR_U32(ctx, 31, 0x12B19Cu);
    ctx->pc = 0x12B198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114590_0x114590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B19Cu; }
    }
    if (ctx->pc != 0x12B19Cu) { return; }
    ctx->pc = 0x12B19Cu;
    // 0x12b19c: 0x40882d
    ctx->pc = 0x12b19cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12b1a0:
    // 0x12b1a0: 0x220102d
    ctx->pc = 0x12b1a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12b1a4:
    // 0x12b1a4: 0xdfb00030
    ctx->pc = 0x12b1a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b1a8: 0xdfb10038
    ctx->pc = 0x12b1a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12b1ac: 0xdfbf0040
    ctx->pc = 0x12b1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12b1b0: 0x3e00008
    ctx->pc = 0x12B1B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B1B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B1A0u: goto label_12b1a0;
            case 0x12B1A4u: goto label_12b1a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12B1B8u;
}
