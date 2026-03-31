#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001180D0
// Address: 0x1180d0 - 0x118110
void sub_001180D0_0x1180d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1180d0u;

    // 0x1180d0: 0x27bdffe0
    ctx->pc = 0x1180d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1180d4: 0xffb00000
    ctx->pc = 0x1180d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1180d8: 0xffbf0010
    ctx->pc = 0x1180d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1180dc: 0x10000004
    ctx->pc = 0x1180DCu;
    {
        const bool branch_taken_0x1180dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1180E0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1180dc) {
            ctx->pc = 0x1180F0u;
            goto label_1180f0;
        }
    }
    ctx->pc = 0x1180E4u;
    // 0x1180e4: 0x0
    ctx->pc = 0x1180e4u;
    // NOP
label_1180e8:
    // 0x1180e8: 0xc045fc2
    ctx->pc = 0x1180E8u;
    SET_GPR_U32(ctx, 31, 0x1180F0u);
    ctx->pc = 0x117F08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00117F08_0x117f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1180F0u; }
    }
    if (ctx->pc != 0x1180F0u) { return; }
    ctx->pc = 0x1180F0u;
label_1180f0:
    // 0x1180f0: 0xc045fac
    ctx->pc = 0x1180F0u;
    SET_GPR_U32(ctx, 31, 0x1180F8u);
    ctx->pc = 0x1180F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x117EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00117EB0_0x117eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1180F8u; }
    }
    if (ctx->pc != 0x1180F8u) { return; }
    ctx->pc = 0x1180F8u;
    // 0x1180f8: 0x1440fffb
    ctx->pc = 0x1180F8u;
    {
        const bool branch_taken_0x1180f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1180FCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1180f8) {
            ctx->pc = 0x1180E8u;
            goto label_1180e8;
        }
    }
    ctx->pc = 0x118100u;
    // 0x118100: 0xc045150
    ctx->pc = 0x118100u;
    SET_GPR_U32(ctx, 31, 0x118108u);
    ctx->pc = 0x114540u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114540_0x114540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118108u; }
    }
    if (ctx->pc != 0x118108u) { return; }
    ctx->pc = 0x118108u;
    // 0x118108: 0x1000fff9
    ctx->pc = 0x118108u;
    {
        const bool branch_taken_0x118108 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x118108) {
            ctx->pc = 0x1180F0u;
            goto label_1180f0;
        }
    }
    ctx->pc = 0x118110u;
}
