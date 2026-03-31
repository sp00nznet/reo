#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016C780
// Address: 0x16c780 - 0x16c7f0
void sub_0016C780_0x16c780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16c780u;

    // 0x16c780: 0x27bdffe0
    ctx->pc = 0x16c780u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c784: 0xffbf0018
    ctx->pc = 0x16c784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16c788: 0xffb00010
    ctx->pc = 0x16c788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16c78c: 0x80802d
    ctx->pc = 0x16c78cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c790: 0x200202d
    ctx->pc = 0x16c790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c794: 0x0
    ctx->pc = 0x16c794u;
    // NOP
label_16c798:
    // 0x16c798: 0x3a0282d
    ctx->pc = 0x16c798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c79c: 0xc05b1fc
    ctx->pc = 0x16C79Cu;
    SET_GPR_U32(ctx, 31, 0x16C7A4u);
    ctx->pc = 0x16C7A0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x16C7F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016C7F0_0x16c7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C7A4u; }
    }
    if (ctx->pc != 0x16C7A4u) { return; }
    ctx->pc = 0x16C7A4u;
    // 0x16c7a4: 0x200202d
    ctx->pc = 0x16c7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c7a8: 0x40182d
    ctx->pc = 0x16c7a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c7ac: 0x1460000a
    ctx->pc = 0x16C7ACu;
    {
        const bool branch_taken_0x16c7ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x16C7B0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 8));
        if (branch_taken_0x16c7ac) {
            ctx->pc = 0x16C7D8u;
            goto label_16c7d8;
        }
    }
    ctx->pc = 0x16C7B4u;
    // 0x16c7b4: 0x8fa50000
    ctx->pc = 0x16c7b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c7b8: 0xc05b3d6
    ctx->pc = 0x16C7B8u;
    SET_GPR_U32(ctx, 31, 0x16C7C0u);
    ctx->pc = 0x16C7BCu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x16CF58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CF58_0x16cf58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C7C0u; }
    }
    if (ctx->pc != 0x16C7C0u) { return; }
    ctx->pc = 0x16C7C0u;
    // 0x16c7c0: 0x40182d
    ctx->pc = 0x16c7c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c7c4: 0x54600005
    ctx->pc = 0x16C7C4u;
    {
        const bool branch_taken_0x16c7c4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x16c7c4) {
            ctx->pc = 0x16C7C8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x16C7DCu;
            goto label_16c7dc;
        }
    }
    ctx->pc = 0x16C7CCu;
    // 0x16c7cc: 0x8fa20008
    ctx->pc = 0x16c7ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c7d0: 0x1440fff1
    ctx->pc = 0x16C7D0u;
    {
        const bool branch_taken_0x16c7d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16C7D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16c7d0) {
            ctx->pc = 0x16C798u;
            goto label_16c798;
        }
    }
    ctx->pc = 0x16C7D8u;
label_16c7d8:
    // 0x16c7d8: 0xdfb00010
    ctx->pc = 0x16c7d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16c7dc:
    // 0x16c7dc: 0x60102d
    ctx->pc = 0x16c7dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c7e0: 0xdfbf0018
    ctx->pc = 0x16c7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16c7e4: 0x3e00008
    ctx->pc = 0x16C7E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C7E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C798u: goto label_16c798;
            case 0x16C7D8u: goto label_16c7d8;
            case 0x16C7DCu: goto label_16c7dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16C7ECu;
    // 0x16c7ec: 0x0
    ctx->pc = 0x16c7ecu;
    // NOP
}
