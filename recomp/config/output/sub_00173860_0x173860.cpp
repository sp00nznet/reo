#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00173860
// Address: 0x173860 - 0x1738c0
void sub_00173860_0x173860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x173860u;

    // 0x173860: 0x27bdffe0
    ctx->pc = 0x173860u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173864: 0x282d
    ctx->pc = 0x173864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173868: 0xffb20010
    ctx->pc = 0x173868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17386c: 0x80902d
    ctx->pc = 0x17386cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173870: 0x24060030
    ctx->pc = 0x173870u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
    // 0x173874: 0xffb00000
    ctx->pc = 0x173874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173878: 0xffb10008
    ctx->pc = 0x173878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17387c: 0xffbf0018
    ctx->pc = 0x17387cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x173880: 0xc0558b4
    ctx->pc = 0x173880u;
    SET_GPR_U32(ctx, 31, 0x173888u);
    ctx->pc = 0x173884u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1562D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001562D0_0x1562d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173888u; }
    }
    if (ctx->pc != 0x173888u) { return; }
    ctx->pc = 0x173888u;
    // 0x173888: 0x240802d
    ctx->pc = 0x173888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17388c: 0x200202d
    ctx->pc = 0x17388cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173890:
    // 0x173890: 0x26100020
    ctx->pc = 0x173890u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 32));
    // 0x173894: 0xc05dd14
    ctx->pc = 0x173894u;
    SET_GPR_U32(ctx, 31, 0x17389Cu);
    ctx->pc = 0x173898u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->pc = 0x177450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177450_0x177450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17389Cu; }
    }
    if (ctx->pc != 0x17389Cu) { return; }
    ctx->pc = 0x17389Cu;
    // 0x17389c: 0x621fffc
    ctx->pc = 0x17389Cu;
    {
        const bool branch_taken_0x17389c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1738A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17389c) {
            ctx->pc = 0x173890u;
            goto label_173890;
        }
    }
    ctx->pc = 0x1738A4u;
    // 0x1738a4: 0x264400a0
    ctx->pc = 0x1738a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 160));
    // 0x1738a8: 0xdfb20010
    ctx->pc = 0x1738a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1738ac: 0xdfb00000
    ctx->pc = 0x1738acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1738b0: 0xdfb10008
    ctx->pc = 0x1738b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1738b4: 0xdfbf0018
    ctx->pc = 0x1738b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1738b8: 0x805dd14
    ctx->pc = 0x1738B8u;
    ctx->pc = 0x1738BCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x177450u;
    sub_00177450_0x177450(rdram, ctx, runtime); return;
    ctx->pc = 0x1738C0u;
}
