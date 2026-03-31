#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00158158
// Address: 0x158158 - 0x1581d0
void sub_00158158_0x158158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x158158u;

    // 0x158158: 0x27bdffe0
    ctx->pc = 0x158158u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15815c: 0x3c020023
    ctx->pc = 0x15815cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x158160: 0x8c43d870
    ctx->pc = 0x158160u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957168)));
    // 0x158164: 0xffb00000
    ctx->pc = 0x158164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x158168: 0xffb10008
    ctx->pc = 0x158168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15816c: 0xffb20010
    ctx->pc = 0x15816cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x158170: 0xffbf0018
    ctx->pc = 0x158170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x158174: 0x8c62000c
    ctx->pc = 0x158174u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x158178: 0x1840000d
    ctx->pc = 0x158178u;
    {
        const bool branch_taken_0x158178 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x15817Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x158178) {
            ctx->pc = 0x1581B0u;
            goto label_1581b0;
        }
    }
    ctx->pc = 0x158180u;
    // 0x158180: 0x80802d
    ctx->pc = 0x158180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158184: 0x40882d
    ctx->pc = 0x158184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158188: 0x24120001
    ctx->pc = 0x158188u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15818c: 0x0
    ctx->pc = 0x15818cu;
    // NOP
label_158190:
    // 0x158190: 0x8e020000
    ctx->pc = 0x158190u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x158194: 0x50520004
    ctx->pc = 0x158194u;
    {
        const bool branch_taken_0x158194 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        if (branch_taken_0x158194) {
            ctx->pc = 0x158198u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x1581A8u;
            goto label_1581a8;
        }
    }
    ctx->pc = 0x15819Cu;
    // 0x15819c: 0xc05615a
    ctx->pc = 0x15819Cu;
    SET_GPR_U32(ctx, 31, 0x1581A4u);
    ctx->pc = 0x1581A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x158568u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158568_0x158568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1581A4u; }
    }
    if (ctx->pc != 0x1581A4u) { return; }
    ctx->pc = 0x1581A4u;
    // 0x1581a4: 0x2631ffff
    ctx->pc = 0x1581a4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_1581a8:
    // 0x1581a8: 0x1620fff9
    ctx->pc = 0x1581A8u;
    {
        const bool branch_taken_0x1581a8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x1581ACu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 192));
        if (branch_taken_0x1581a8) {
            ctx->pc = 0x158190u;
            goto label_158190;
        }
    }
    ctx->pc = 0x1581B0u;
label_1581b0:
    // 0x1581b0: 0xc0558e8
    ctx->pc = 0x1581B0u;
    SET_GPR_U32(ctx, 31, 0x1581B8u);
    ctx->pc = 0x1563A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001563A0_0x1563a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1581B8u; }
    }
    if (ctx->pc != 0x1581B8u) { return; }
    ctx->pc = 0x1581B8u;
    // 0x1581b8: 0xdfb00000
    ctx->pc = 0x1581b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1581bc: 0xdfb10008
    ctx->pc = 0x1581bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1581c0: 0xdfb20010
    ctx->pc = 0x1581c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1581c4: 0xdfbf0018
    ctx->pc = 0x1581c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1581c8: 0x8055f72
    ctx->pc = 0x1581C8u;
    ctx->pc = 0x1581CCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x157DC8u;
    entry_157dc8_0x157dd0(rdram, ctx, runtime); return;
    ctx->pc = 0x1581D0u;
}
